/*
FUNCTION_NAME: OVRPlugin$$StopEyeTracking
ENTRY_POINT: 0322b630
PROGRAM: vrfs-libil2cpp.so
SCORE: 101
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_13;attempted_eye_tracking_permission_or_feature_enable;functionality_permission_setup
*/


void OVRPlugin__StopEyeTracking(long *param_1)

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
  long *unaff_x22;
  
  puVar1 = PTR_DAT_06db5ca0;
  lVar14 = *unaff_x22;
  if (5 < *(uint *)(unaff_x19 + 3)) {
    unaff_x19[9] = lVar14;
    param_1 = (long *)thunk_FUN_01656ef8(unaff_x19 + 9,lVar14);
    lVar14 = *(long *)puVar1;
    if (lVar14 == 0) {
      lVar14 = 0;
    }
    else {
      param_1 = (long *)thunk_FUN_015d0480(lVar14,*(undefined8 *)(*unaff_x19 + 0x40));
      if (param_1 == (long *)0x0) goto LAB_0322bb54;
      lVar14 = *(long *)puVar1;
    }
    puVar1 = PTR_DAT_06db57d8;
    if (*(uint *)(unaff_x19 + 3) < 7) goto LAB_0322bb50;
    unaff_x19[10] = lVar14;
    param_1 = (long *)thunk_FUN_01656ef8(unaff_x19 + 10,lVar14);
    lVar14 = *(long *)puVar1;
    if (lVar14 == 0) {
      lVar14 = 0;
    }
    else {
      param_1 = (long *)thunk_FUN_015d0480(lVar14,*(undefined8 *)(*unaff_x19 + 0x40));
      if (param_1 == (long *)0x0) goto LAB_0322bb54;
      lVar14 = *(long *)puVar1;
    }
    puVar1 = PTR_DAT_06e68880;
    if (*(uint *)(unaff_x19 + 3) < 8) goto LAB_0322bb50;
    unaff_x19[0xb] = lVar14;
    param_1 = (long *)thunk_FUN_01656ef8(unaff_x19 + 0xb,lVar14);
    lVar14 = *(long *)puVar1;
    if (lVar14 == 0) {
      lVar14 = 0;
    }
    else {
      param_1 = (long *)thunk_FUN_015d0480(lVar14,*(undefined8 *)(*unaff_x19 + 0x40));
      if (param_1 == (long *)0x0) goto LAB_0322bb54;
      lVar14 = *(long *)puVar1;
    }
    puVar1 = PTR_DAT_06daaeb8;
    if (*(uint *)(unaff_x19 + 3) < 9) goto LAB_0322bb50;
    unaff_x19[0xc] = lVar14;
    param_1 = (long *)thunk_FUN_01656ef8(unaff_x19 + 0xc,lVar14);
    lVar14 = *(long *)puVar1;
    if (lVar14 == 0) {
      lVar14 = 0;
    }
    else {
      param_1 = (long *)thunk_FUN_015d0480(lVar14,*(undefined8 *)(*unaff_x19 + 0x40));
      if (param_1 == (long *)0x0) goto LAB_0322bb54;
      lVar14 = *(long *)puVar1;
    }
    puVar1 = PTR_DAT_06e31cb8;
    if (*(uint *)(unaff_x19 + 3) < 10) goto LAB_0322bb50;
    unaff_x19[0xd] = lVar14;
    param_1 = (long *)thunk_FUN_01656ef8(unaff_x19 + 0xd,lVar14);
    lVar14 = *(long *)puVar1;
    if (lVar14 == 0) {
      lVar14 = 0;
    }
    else {
      param_1 = (long *)thunk_FUN_015d0480(lVar14,*(undefined8 *)(*unaff_x19 + 0x40));
      if (param_1 == (long *)0x0) goto LAB_0322bb54;
      lVar14 = *(long *)puVar1;
    }
    puVar1 = PTR_DAT_06df64e0;
    if (*(uint *)(unaff_x19 + 3) < 0xb) goto LAB_0322bb50;
    unaff_x19[0xe] = lVar14;
    param_1 = (long *)thunk_FUN_01656ef8(unaff_x19 + 0xe,lVar14);
    lVar14 = *(long *)puVar1;
    if (lVar14 == 0) {
      lVar14 = 0;
    }
    else {
      param_1 = (long *)thunk_FUN_015d0480(lVar14,*(undefined8 *)(*unaff_x19 + 0x40));
      if (param_1 == (long *)0x0) goto LAB_0322bb54;
      lVar14 = *(long *)puVar1;
    }
    if (*(uint *)(unaff_x19 + 3) < 0xc) goto LAB_0322bb50;
    unaff_x19[0xf] = lVar14;
    thunk_FUN_01656ef8(unaff_x19 + 0xf,lVar14);
    *(long **)(*(long *)(*unaff_x21 + 0xb8) + 0x18) = unaff_x19;
    thunk_FUN_01656ef8();
    plVar10 = (long *)FUN_0160edfc(*unaff_x20,5);
    puVar1 = PTR_DAT_06de85f0;
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    if (*(long *)PTR_DAT_06de85f0 == 0) {
      lVar14 = 0;
      param_1 = plVar10;
    }
    else {
      param_1 = (long *)thunk_FUN_015d0480(*(long *)PTR_DAT_06de85f0,
                                           *(undefined8 *)(*plVar10 + 0x40));
      if (param_1 == (long *)0x0) goto LAB_0322bb54;
      lVar14 = *(long *)puVar1;
    }
    puVar1 = PTR_DAT_06dab100;
    if ((int)plVar10[3] == 0) goto LAB_0322bb50;
    plVar10[4] = lVar14;
    param_1 = (long *)thunk_FUN_01656ef8(plVar10 + 4,lVar14);
    lVar14 = *(long *)puVar1;
    if (lVar14 == 0) {
      lVar14 = 0;
    }
    else {
      param_1 = (long *)thunk_FUN_015d0480(lVar14,*(undefined8 *)(*plVar10 + 0x40));
      if (param_1 == (long *)0x0) goto LAB_0322bb54;
      lVar14 = *(long *)puVar1;
    }
    puVar1 = PTR_DAT_06e22540;
    if (*(uint *)(plVar10 + 3) < 2) goto LAB_0322bb50;
    plVar10[5] = lVar14;
    param_1 = (long *)thunk_FUN_01656ef8(plVar10 + 5,lVar14);
    lVar14 = *(long *)puVar1;
    if (lVar14 == 0) {
      lVar14 = 0;
    }
    else {
      param_1 = (long *)thunk_FUN_015d0480(lVar14,*(undefined8 *)(*plVar10 + 0x40));
      if (param_1 == (long *)0x0) goto LAB_0322bb54;
      lVar14 = *(long *)puVar1;
    }
    puVar1 = PTR_DAT_06dc49d0;
    if (*(uint *)(plVar10 + 3) < 3) goto LAB_0322bb50;
    plVar10[6] = lVar14;
    param_1 = (long *)thunk_FUN_01656ef8(plVar10 + 6,lVar14);
    lVar14 = *(long *)puVar1;
    if (lVar14 == 0) {
      lVar14 = 0;
    }
    else {
      param_1 = (long *)thunk_FUN_015d0480(lVar14,*(undefined8 *)(*plVar10 + 0x40));
      if (param_1 == (long *)0x0) goto LAB_0322bb54;
      lVar14 = *(long *)puVar1;
    }
    puVar1 = PTR_DAT_06dd2b20;
    if (3 < *(uint *)(plVar10 + 3)) {
      plVar10[7] = lVar14;
      param_1 = (long *)thunk_FUN_01656ef8(plVar10 + 7,lVar14);
      lVar14 = *(long *)puVar1;
      if (lVar14 == 0) {
        lVar14 = 0;
      }
      else {
        param_1 = (long *)thunk_FUN_015d0480(lVar14,*(undefined8 *)(*plVar10 + 0x40));
        if (param_1 == (long *)0x0) {
LAB_0322bb54:
          uVar12 = thunk_FUN_015f0d94();
                    /* WARNING: Subroutine does not return */
          FUN_0160ee7c(uVar12,0);
        }
        lVar14 = *(long *)puVar1;
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
        plVar10[8] = lVar14;
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
  FUN_0160eebc(param_1,lVar14);
}


