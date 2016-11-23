/*
 * Copyright 2015. All rights reserved.
 * Distributed under the terms of the MIT license.
 *
 * Author:
 *	Humdinger, humdingerb@gmail.com
 */

#ifndef CLIPITEM_H
#define CLIPITEM_H

#include <Bitmap.h>
#include <Font.h>
#include <InterfaceDefs.h>
#include <ListItem.h>
#include <String.h>


class ClipItem : public BListItem {
public:
					ClipItem(BString clip, BString path, int32 time);
					~ClipItem();

	virtual void	DrawItem(BView* view, BRect rect, bool complete);
	virtual	void	Update(BView* view, const BFont* finfo);

	BString			GetClip() { return fClip; };
	BString			GetOrigin() { return fOrigin; };
	BString			GetTitle() { return fTitle; };
	void			SetTitle(BString title) { fTitle = title; };
	bigtime_t		GetTimeAdded() { return fTimeAdded; };
	void			SetTimeAdded(int32 time) { fTimeAdded = time; };
	rgb_color		SetColor(rgb_color color) { fColor = color; };

private:
	BString			fClip;
	BString			fOrigin;
	BString			fTitle;
	int32			fTimeAdded;
	rgb_color		fColor;

	BBitmap*		fOriginIcon;
};

#endif // CLIPITEM_H
