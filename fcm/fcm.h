/*--------------------------------------------------------------------------
@COPYRIGHT  :
              Copyright 1997, Vasken Kollokian, 
              McConnell Brain Imaging Centre,
              Montreal Neurological Institute, McGill University.
              Permission to use, copy, modify, and distribute this
              software and its documentation for any purpose and without
              fee is hereby granted, provided that the above copyright
              notice appear in all copies.  The author and McGill University
              make no representations about the suitability of this
              software for any purpose.  It is provided "as is" without
              express or implied warranty.
---------------------------------------------------------------------------- 
$RCSfile: fcm.h,v $
$Revision: 1.1 $
$Author: jason $
$Date: 2002-03-20 22:16:34 $
$State: Exp $
--------------------------------------------------------------------------*/
#ifndef _FCM_H
#define _FCM_H

#include <stdio.h>

void fcm_init_training(char *filename);
void fcm_load_training(char *filename);
void fcm_save_training(char *filename);
void fcm_train_samples(void);
void fcm_classify_sample(int *class_num, double *class_prob = 0, 
			 int *class_labels = 0);

#endif
