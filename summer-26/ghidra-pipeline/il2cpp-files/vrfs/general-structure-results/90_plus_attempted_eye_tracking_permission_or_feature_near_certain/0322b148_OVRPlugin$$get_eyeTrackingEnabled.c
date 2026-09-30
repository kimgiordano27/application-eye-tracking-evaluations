/*
FUNCTION_NAME: OVRPlugin$$get_eyeTrackingEnabled
ENTRY_POINT: 0322b148
PROGRAM: vrfs-libil2cpp.so
SCORE: 103
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_6;validity_or_gating_hits_21;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin__get_eyeTrackingEnabled(long param_1,long *param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long *plVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  long lVar14;
  long *unaff_x19;
  undefined8 *unaff_x20;
  long *unaff_x21;
  
  puVar1 = PTR_DAT_06e68a20;
  if (10 < *(uint *)(unaff_x19 + 3)) {
                    /* try { // try from 0322b15c to 0332b167 has its CatchHandler @ 0322b218 */
    unaff_x19[0xe] = param_1;
    param_2 = (long *)thunk_FUN_01656ef8();
                    /* try { // try from 0322b168 to 0332b1eb has its CatchHandler @ 0322aee4 */
    lVar14 = *(long *)puVar1;
    if (lVar14 == 0) {
      param_3 = 0;
    }
    else {
      param_2 = (long *)thunk_FUN_015d0480(lVar14,*(undefined8 *)(*unaff_x19 + 0x40));
      if (param_2 == (long *)0x0) goto LAB_0322bb54;
      param_3 = *(long *)puVar1;
    }
    puVar1 = PTR_DAT_06dbbc00;
    if (*(uint *)(unaff_x19 + 3) < 0xc) goto LAB_0322bb50;
    unaff_x19[0xf] = param_3;
    param_2 = (long *)thunk_FUN_01656ef8(unaff_x19 + 0xf,param_3);
    lVar14 = *(long *)puVar1;
    if (lVar14 == 0) {
      param_3 = 0;
    }
    else {
      param_2 = (long *)thunk_FUN_015d0480(lVar14,*(undefined8 *)(*unaff_x19 + 0x40));
      if (param_2 == (long *)0x0) goto LAB_0322bb54;
      param_3 = *(long *)puVar1;
    }
    puVar1 = PTR_DAT_06e3d6e0;
                    /* try { // try from 0322b1ec to 0332b1ef has its CatchHandler @ 0322b210 */
                    /* try { // try from 0322b1f0 to 0332b1f3 has its CatchHandler @ 0322b20c */
    if (*(uint *)(unaff_x19 + 3) < 0xd) goto LAB_0322bb50;
                    /* try { // try from 0322b1f4 to 0332b1f7 has its CatchHandler @ 0322b210 */
                    /* try { // try from 0322b1f8 to 0332b1fb has its CatchHandler @ 0322aee4 */
                    /* try { // try from 0322b1fc to 0332b1ff has its CatchHandler @ 0322b208 */
                    /* try { // try from 0322b200 to 0332b23b has its CatchHandler @ 0322aee4 */
    unaff_x19[0x10] = param_3;
    param_2 = (long *)thunk_FUN_01656ef8(unaff_x19 + 0x10,param_3);
                    /* catch() { ... } // from try @ 0322b1fc with catch @ 0322b208 */
    lVar14 = *(long *)puVar1;
                    /* catch() { ... } // from try @ 0322b1f0 with catch @ 0322b20c */
    if (lVar14 == 0) {
      param_3 = 0;
    }
    else {
                    /* catch() { ... } // from try @ 0322b1ec with catch @ 0322b210
                       catch() { ... } // from try @ 0322b1f4 with catch @ 0322b210 */
                    /* catch() { ... } // from try @ 0322b0f8 with catch @ 0322b214 */
      param_2 = (long *)thunk_FUN_015d0480(lVar14,*(undefined8 *)(*unaff_x19 + 0x40));
      if (param_2 == (long *)0x0) goto LAB_0322bb54;
      param_3 = *(long *)puVar1;
    }
    puVar1 = PTR_DAT_06e36b88;
    if (*(uint *)(unaff_x19 + 3) < 0xe) goto LAB_0322bb50;
    unaff_x19[0x11] = param_3;
    param_2 = (long *)thunk_FUN_01656ef8(unaff_x19 + 0x11,param_3);
    lVar14 = *(long *)puVar1;
    if (lVar14 == 0) {
      param_3 = 0;
    }
    else {
      param_2 = (long *)thunk_FUN_015d0480(lVar14,*(undefined8 *)(*unaff_x19 + 0x40));
      if (param_2 == (long *)0x0) goto LAB_0322bb54;
      param_3 = *(long *)puVar1;
    }
    puVar1 = PTR_DAT_06dc1b50;
    if (*(uint *)(unaff_x19 + 3) < 0xf) goto LAB_0322bb50;
    unaff_x19[0x12] = param_3;
    param_2 = (long *)thunk_FUN_01656ef8(unaff_x19 + 0x12,param_3);
    lVar14 = *(long *)puVar1;
    if (lVar14 == 0) {
      param_3 = 0;
    }
    else {
      param_2 = (long *)thunk_FUN_015d0480(lVar14,*(undefined8 *)(*unaff_x19 + 0x40));
      if (param_2 == (long *)0x0) goto LAB_0322bb54;
      param_3 = *(long *)puVar1;
    }
    if (*(uint *)(unaff_x19 + 3) < 0x10) goto LAB_0322bb50;
    unaff_x19[0x13] = param_3;
    thunk_FUN_01656ef8(unaff_x19 + 0x13,param_3);
    *(long **)(*(long *)(*unaff_x21 + 0xb8) + 8) = unaff_x19;
    thunk_FUN_01656ef8();
    plVar10 = (long *)FUN_0160edfc(*unaff_x20,4);
    puVar1 = PTR_DAT_06e19960;
    if (plVar10 == (long *)0x0) {
LAB_0322bb60:
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    if (*(long *)PTR_DAT_06e19960 == 0) {
      param_3 = 0;
      param_2 = plVar10;
    }
    else {
      param_2 = (long *)thunk_FUN_015d0480(*(long *)PTR_DAT_06e19960,
                                           *(undefined8 *)(*plVar10 + 0x40));
      if (param_2 == (long *)0x0) goto LAB_0322bb54;
      param_3 = *(long *)puVar1;
    }
    puVar1 = PTR_DAT_06dc18c8;
    if ((int)plVar10[3] == 0) goto LAB_0322bb50;
    plVar10[4] = param_3;
    param_2 = (long *)thunk_FUN_01656ef8(plVar10 + 4,param_3);
    lVar14 = *(long *)puVar1;
    if (lVar14 == 0) {
      param_3 = 0;
    }
    else {
      param_2 = (long *)thunk_FUN_015d0480(lVar14,*(undefined8 *)(*plVar10 + 0x40));
      if (param_2 == (long *)0x0) goto LAB_0322bb54;
      param_3 = *(long *)puVar1;
    }
    puVar1 = PTR_DAT_06e38698;
    if (*(uint *)(plVar10 + 3) < 2) goto LAB_0322bb50;
    plVar10[5] = param_3;
    param_2 = (long *)thunk_FUN_01656ef8(plVar10 + 5,param_3);
    lVar14 = *(long *)puVar1;
    if (lVar14 == 0) {
      param_3 = 0;
    }
    else {
      param_2 = (long *)thunk_FUN_015d0480(lVar14,*(undefined8 *)(*plVar10 + 0x40));
      if (param_2 == (long *)0x0) goto LAB_0322bb54;
      param_3 = *(long *)puVar1;
    }
    puVar1 = PTR_DAT_06def158;
    if (*(uint *)(plVar10 + 3) < 3) goto LAB_0322bb50;
    plVar10[6] = param_3;
    param_2 = (long *)thunk_FUN_01656ef8(plVar10 + 6,param_3);
    lVar14 = *(long *)puVar1;
    if (lVar14 == 0) {
      param_3 = 0;
    }
    else {
      param_2 = (long *)thunk_FUN_015d0480(lVar14,*(undefined8 *)(*plVar10 + 0x40));
      if (param_2 == (long *)0x0) goto LAB_0322bb54;
      param_3 = *(long *)puVar1;
    }
    if (*(uint *)(plVar10 + 3) < 4) goto LAB_0322bb50;
    plVar10[7] = param_3;
    thunk_FUN_01656ef8(plVar10 + 7,param_3);
    plVar11 = (long *)(*(long *)(*unaff_x21 + 0xb8) + 0x10);
    *plVar11 = (long)plVar10;
    thunk_FUN_01656ef8(plVar11,plVar10);
    plVar10 = (long *)FUN_0160edfc(*unaff_x20,0xc);
    puVar1 = PTR_DAT_06d92ce0;
    if (plVar10 == (long *)0x0) goto LAB_0322bb60;
    if (*(long *)PTR_DAT_06d92ce0 == 0) {
      param_3 = 0;
      param_2 = plVar10;
    }
    else {
      param_2 = (long *)thunk_FUN_015d0480(*(long *)PTR_DAT_06d92ce0,
                                           *(undefined8 *)(*plVar10 + 0x40));
      if (param_2 == (long *)0x0) goto LAB_0322bb54;
      param_3 = *(long *)puVar1;
    }
    puVar1 = PTR_DAT_06db68c8;
    if ((int)plVar10[3] == 0) goto LAB_0322bb50;
    plVar10[4] = param_3;
    param_2 = (long *)thunk_FUN_01656ef8(plVar10 + 4,param_3);
    lVar14 = *(long *)puVar1;
    if (lVar14 == 0) {
      param_3 = 0;
    }
    else {
      param_2 = (long *)thunk_FUN_015d0480(lVar14,*(undefined8 *)(*plVar10 + 0x40));
      if (param_2 == (long *)0x0) goto LAB_0322bb54;
      param_3 = *(long *)puVar1;
    }
    puVar1 = PTR_DAT_06e5c1a8;
    if (*(uint *)(plVar10 + 3) < 2) goto LAB_0322bb50;
    plVar10[5] = param_3;
    param_2 = (long *)thunk_FUN_01656ef8(plVar10 + 5,param_3);
    lVar14 = *(long *)puVar1;
    if (lVar14 == 0) {
      param_3 = 0;
    }
    else {
      param_2 = (long *)thunk_FUN_015d0480(lVar14,*(undefined8 *)(*plVar10 + 0x40));
      if (param_2 == (long *)0x0) goto LAB_0322bb54;
      param_3 = *(long *)puVar1;
    }
    puVar1 = PTR_DAT_06dc51e8;
    if (*(uint *)(plVar10 + 3) < 3) goto LAB_0322bb50;
    plVar10[6] = param_3;
    param_2 = (long *)thunk_FUN_01656ef8(plVar10 + 6,param_3);
    lVar14 = *(long *)puVar1;
    if (lVar14 == 0) {
      param_3 = 0;
    }
    else {
      param_2 = (long *)thunk_FUN_015d0480(lVar14,*(undefined8 *)(*plVar10 + 0x40));
      if (param_2 == (long *)0x0) goto LAB_0322bb54;
      param_3 = *(long *)puVar1;
    }
    puVar1 = PTR_DAT_06e2fed0;
    if (*(uint *)(plVar10 + 3) < 4) goto LAB_0322bb50;
    plVar10[7] = param_3;
    param_2 = (long *)thunk_FUN_01656ef8(plVar10 + 7,param_3);
    lVar14 = *(long *)puVar1;
    if (lVar14 == 0) {
      param_3 = 0;
    }
    else {
      param_2 = (long *)thunk_FUN_015d0480(lVar14,*(undefined8 *)(*plVar10 + 0x40));
      if (param_2 == (long *)0x0) goto LAB_0322bb54;
      param_3 = *(long *)puVar1;
    }
    puVar1 = PTR_DAT_06e667b0;
    if (*(uint *)(plVar10 + 3) < 5) goto LAB_0322bb50;
    plVar10[8] = param_3;
    param_2 = (long *)thunk_FUN_01656ef8(plVar10 + 8,param_3);
    lVar14 = *(long *)puVar1;
    if (lVar14 == 0) {
      param_3 = 0;
    }
    else {
      param_2 = (long *)thunk_FUN_015d0480(lVar14,*(undefined8 *)(*plVar10 + 0x40));
      if (param_2 == (long *)0x0) goto LAB_0322bb54;
      param_3 = *(long *)puVar1;
    }
    puVar1 = PTR_DAT_06db5ca0;
    if (*(uint *)(plVar10 + 3) < 6) goto LAB_0322bb50;
    plVar10[9] = param_3;
    param_2 = (long *)thunk_FUN_01656ef8(plVar10 + 9,param_3);
    lVar14 = *(long *)puVar1;
    if (lVar14 == 0) {
      param_3 = 0;
    }
    else {
      param_2 = (long *)thunk_FUN_015d0480(lVar14,*(undefined8 *)(*plVar10 + 0x40));
      if (param_2 == (long *)0x0) goto LAB_0322bb54;
      param_3 = *(long *)puVar1;
    }
    puVar1 = PTR_DAT_06db57d8;
    if (*(uint *)(plVar10 + 3) < 7) goto LAB_0322bb50;
    plVar10[10] = param_3;
    param_2 = (long *)thunk_FUN_01656ef8(plVar10 + 10,param_3);
    lVar14 = *(long *)puVar1;
    if (lVar14 == 0) {
      param_3 = 0;
    }
    else {
      param_2 = (long *)thunk_FUN_015d0480(lVar14,*(undefined8 *)(*plVar10 + 0x40));
      if (param_2 == (long *)0x0) goto LAB_0322bb54;
      param_3 = *(long *)puVar1;
    }
    puVar1 = PTR_DAT_06e68880;
    if (*(uint *)(plVar10 + 3) < 8) goto LAB_0322bb50;
    plVar10[0xb] = param_3;
    param_2 = (long *)thunk_FUN_01656ef8(plVar10 + 0xb,param_3);
    lVar14 = *(long *)puVar1;
    if (lVar14 == 0) {
      param_3 = 0;
    }
    else {
      param_2 = (long *)thunk_FUN_015d0480(lVar14,*(undefined8 *)(*plVar10 + 0x40));
      if (param_2 == (long *)0x0) goto LAB_0322bb54;
      param_3 = *(long *)puVar1;
    }
    puVar1 = PTR_DAT_06daaeb8;
    if (*(uint *)(plVar10 + 3) < 9) goto LAB_0322bb50;
    plVar10[0xc] = param_3;
    param_2 = (long *)thunk_FUN_01656ef8(plVar10 + 0xc,param_3);
    lVar14 = *(long *)puVar1;
    if (lVar14 == 0) {
      param_3 = 0;
    }
    else {
      param_2 = (long *)thunk_FUN_015d0480(lVar14,*(undefined8 *)(*plVar10 + 0x40));
      if (param_2 == (long *)0x0) goto LAB_0322bb54;
      param_3 = *(long *)puVar1;
    }
    puVar1 = PTR_DAT_06e31cb8;
    if (*(uint *)(plVar10 + 3) < 10) goto LAB_0322bb50;
    plVar10[0xd] = param_3;
    param_2 = (long *)thunk_FUN_01656ef8(plVar10 + 0xd,param_3);
    lVar14 = *(long *)puVar1;
    if (lVar14 == 0) {
      param_3 = 0;
    }
    else {
      param_2 = (long *)thunk_FUN_015d0480(lVar14,*(undefined8 *)(*plVar10 + 0x40));
      if (param_2 == (long *)0x0) goto LAB_0322bb54;
      param_3 = *(long *)puVar1;
    }
    puVar1 = PTR_DAT_06df64e0;
    if (*(uint *)(plVar10 + 3) < 0xb) goto LAB_0322bb50;
    plVar10[0xe] = param_3;
    param_2 = (long *)thunk_FUN_01656ef8(plVar10 + 0xe,param_3);
    lVar14 = *(long *)puVar1;
    if (lVar14 == 0) {
      param_3 = 0;
    }
    else {
      param_2 = (long *)thunk_FUN_015d0480(lVar14,*(undefined8 *)(*plVar10 + 0x40));
      if (param_2 == (long *)0x0) goto LAB_0322bb54;
      param_3 = *(long *)puVar1;
    }
    if (*(uint *)(plVar10 + 3) < 0xc) goto LAB_0322bb50;
    plVar10[0xf] = param_3;
    thunk_FUN_01656ef8(plVar10 + 0xf,param_3);
    plVar11 = (long *)(*(long *)(*unaff_x21 + 0xb8) + 0x18);
    *plVar11 = (long)plVar10;
    thunk_FUN_01656ef8(plVar11,plVar10);
    plVar10 = (long *)FUN_0160edfc(*unaff_x20,5);
    puVar1 = PTR_DAT_06de85f0;
    if (plVar10 == (long *)0x0) goto LAB_0322bb60;
    if (*(long *)PTR_DAT_06de85f0 == 0) {
      param_3 = 0;
      param_2 = plVar10;
    }
    else {
      param_2 = (long *)thunk_FUN_015d0480(*(long *)PTR_DAT_06de85f0,
                                           *(undefined8 *)(*plVar10 + 0x40));
      if (param_2 == (long *)0x0) goto LAB_0322bb54;
      param_3 = *(long *)puVar1;
    }
    puVar1 = PTR_DAT_06dab100;
    if ((int)plVar10[3] == 0) goto LAB_0322bb50;
    plVar10[4] = param_3;
    param_2 = (long *)thunk_FUN_01656ef8(plVar10 + 4,param_3);
    lVar14 = *(long *)puVar1;
    if (lVar14 == 0) {
      param_3 = 0;
    }
    else {
      param_2 = (long *)thunk_FUN_015d0480(lVar14,*(undefined8 *)(*plVar10 + 0x40));
      if (param_2 == (long *)0x0) goto LAB_0322bb54;
      param_3 = *(long *)puVar1;
    }
    puVar1 = PTR_DAT_06e22540;
    if (*(uint *)(plVar10 + 3) < 2) goto LAB_0322bb50;
    plVar10[5] = param_3;
    param_2 = (long *)thunk_FUN_01656ef8(plVar10 + 5,param_3);
    lVar14 = *(long *)puVar1;
    if (lVar14 == 0) {
      param_3 = 0;
    }
    else {
      param_2 = (long *)thunk_FUN_015d0480(lVar14,*(undefined8 *)(*plVar10 + 0x40));
      if (param_2 == (long *)0x0) goto LAB_0322bb54;
      param_3 = *(long *)puVar1;
    }
    puVar1 = PTR_DAT_06dc49d0;
    if (*(uint *)(plVar10 + 3) < 3) goto LAB_0322bb50;
    plVar10[6] = param_3;
    param_2 = (long *)thunk_FUN_01656ef8(plVar10 + 6,param_3);
    lVar14 = *(long *)puVar1;
    if (lVar14 == 0) {
      param_3 = 0;
    }
    else {
      param_2 = (long *)thunk_FUN_015d0480(lVar14,*(undefined8 *)(*plVar10 + 0x40));
      if (param_2 == (long *)0x0) goto LAB_0322bb54;
      param_3 = *(long *)puVar1;
    }
    puVar1 = PTR_DAT_06dd2b20;
    if (3 < *(uint *)(plVar10 + 3)) {
      plVar10[7] = param_3;
      param_2 = (long *)thunk_FUN_01656ef8(plVar10 + 7,param_3);
      lVar14 = *(long *)puVar1;
      if (lVar14 == 0) {
        param_3 = 0;
      }
      else {
        param_2 = (long *)thunk_FUN_015d0480(lVar14,*(undefined8 *)(*plVar10 + 0x40));
        if (param_2 == (long *)0x0) {
LAB_0322bb54:
          uVar12 = thunk_FUN_015f0d94();
                    /* WARNING: Subroutine does not return */
          FUN_0160ee7c(uVar12,0);
        }
        param_3 = *(long *)puVar1;
      }
      puVar9 = PTR_DAT_06e5fef8;
      puVar8 = PTR_DAT_06e4c488;
      puVar7 = PTR_DAT_06e458d0;
      puVar6 = PTR_DAT_06e378f8;
      puVar5 = PTR_DAT_06e0ddc8;
      puVar4 = PTR_DAT_06df8e58;
      puVar3 = PTR_DAT_06dd9ff0;
      puVar2 = PTR_DAT_06dd6a90;
      puVar1 = PTR_DAT_06da8dc0;
      if (4 < *(uint *)(plVar10 + 3)) {
        plVar10[8] = param_3;
        thunk_FUN_01656ef8();
        plVar11 = (long *)(*(long *)(*unaff_x21 + 0xb8) + 0x20);
        *plVar11 = (long)plVar10;
        thunk_FUN_01656ef8(plVar11,plVar10);
        uVar12 = FUN_0160edfc(*(undefined8 *)puVar3,0x100);
        FUN_02df8d44(uVar12,*(undefined8 *)puVar4,0);
        puVar13 = (undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0x28);
        *puVar13 = uVar12;
        thunk_FUN_01656ef8(puVar13,uVar12);
        uVar12 = FUN_0160edfc(*(undefined8 *)puVar5,0x1e);
        FUN_02df8d44(uVar12,*(undefined8 *)puVar7,0);
        puVar13 = (undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0x30);
        *puVar13 = uVar12;
        thunk_FUN_01656ef8(puVar13,uVar12);
        uVar12 = FUN_0160edfc(*(undefined8 *)puVar9,0xf);
        FUN_02df8d44(uVar12,*(undefined8 *)puVar2,0);
        puVar13 = (undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0x38);
        *puVar13 = uVar12;
        thunk_FUN_01656ef8(puVar13,uVar12);
        uVar12 = FUN_0160edfc(*(undefined8 *)puVar5,0x2a);
        FUN_02df8d44(uVar12,*(undefined8 *)puVar6,0);
        puVar13 = (undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0x40);
        *puVar13 = uVar12;
        thunk_FUN_01656ef8(puVar13,uVar12);
        uVar12 = FUN_0160edfc(*(undefined8 *)puVar1,0x15);
        FUN_02df8d44(uVar12,*(undefined8 *)puVar8,0);
        puVar13 = (undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0x48);
        *puVar13 = uVar12;
        thunk_FUN_01656ef8(puVar13,uVar12);
        return;
      }
    }
  }
LAB_0322bb50:
                    /* WARNING: Subroutine does not return */
  FUN_0160eebc(param_2,param_3);
}


