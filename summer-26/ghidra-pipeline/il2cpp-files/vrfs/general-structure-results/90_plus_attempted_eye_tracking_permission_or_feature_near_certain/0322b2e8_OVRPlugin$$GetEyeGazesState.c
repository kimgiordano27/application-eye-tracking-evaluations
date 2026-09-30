/*
FUNCTION_NAME: OVRPlugin$$GetEyeGazesState
ENTRY_POINT: 0322b2e8
PROGRAM: vrfs-libil2cpp.so
SCORE: 103
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_4;validity_or_gating_hits_20;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin__GetEyeGazesState(undefined8 param_1,long param_2)

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
  undefined8 unaff_x19;
  undefined8 *unaff_x20;
  long *unaff_x21;
  
  *(undefined8 *)(param_2 + 0x98) = param_1;
  thunk_FUN_01656ef8();
  *(undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 8) = unaff_x19;
  thunk_FUN_01656ef8();
  plVar10 = (long *)FUN_0160edfc(*unaff_x20,4);
  puVar1 = PTR_DAT_06e19960;
  if (plVar10 == (long *)0x0) {
LAB_0322bb60:
                    /* WARNING: Subroutine does not return */
    FUN_0160eeb4();
  }
  if (*(long *)PTR_DAT_06e19960 == 0) {
    lVar14 = 0;
    plVar11 = plVar10;
  }
  else {
    plVar11 = (long *)thunk_FUN_015d0480(*(long *)PTR_DAT_06e19960,*(undefined8 *)(*plVar10 + 0x40))
    ;
    if (plVar11 == (long *)0x0) goto LAB_0322bb54;
    lVar14 = *(long *)puVar1;
  }
  puVar1 = PTR_DAT_06dc18c8;
  if ((int)plVar10[3] != 0) {
    plVar10[4] = lVar14;
    plVar11 = (long *)thunk_FUN_01656ef8(plVar10 + 4,lVar14);
    lVar14 = *(long *)puVar1;
    if (lVar14 == 0) {
      lVar14 = 0;
    }
    else {
      plVar11 = (long *)thunk_FUN_015d0480(lVar14,*(undefined8 *)(*plVar10 + 0x40));
      if (plVar11 == (long *)0x0) goto LAB_0322bb54;
      lVar14 = *(long *)puVar1;
    }
    puVar1 = PTR_DAT_06e38698;
    if (*(uint *)(plVar10 + 3) < 2) goto LAB_0322bb50;
    plVar10[5] = lVar14;
    plVar11 = (long *)thunk_FUN_01656ef8(plVar10 + 5,lVar14);
    lVar14 = *(long *)puVar1;
    if (lVar14 == 0) {
      lVar14 = 0;
    }
    else {
      plVar11 = (long *)thunk_FUN_015d0480(lVar14,*(undefined8 *)(*plVar10 + 0x40));
      if (plVar11 == (long *)0x0) goto LAB_0322bb54;
      lVar14 = *(long *)puVar1;
    }
    puVar1 = PTR_DAT_06def158;
    if (*(uint *)(plVar10 + 3) < 3) goto LAB_0322bb50;
    plVar10[6] = lVar14;
    plVar11 = (long *)thunk_FUN_01656ef8(plVar10 + 6,lVar14);
    lVar14 = *(long *)puVar1;
    if (lVar14 == 0) {
      lVar14 = 0;
    }
    else {
      plVar11 = (long *)thunk_FUN_015d0480(lVar14,*(undefined8 *)(*plVar10 + 0x40));
      if (plVar11 == (long *)0x0) goto LAB_0322bb54;
      lVar14 = *(long *)puVar1;
    }
    if (*(uint *)(plVar10 + 3) < 4) goto LAB_0322bb50;
    plVar10[7] = lVar14;
    thunk_FUN_01656ef8(plVar10 + 7,lVar14);
    plVar11 = (long *)(*(long *)(*unaff_x21 + 0xb8) + 0x10);
    *plVar11 = (long)plVar10;
    thunk_FUN_01656ef8(plVar11,plVar10);
    plVar10 = (long *)FUN_0160edfc(*unaff_x20,0xc);
    puVar1 = PTR_DAT_06d92ce0;
    if (plVar10 == (long *)0x0) goto LAB_0322bb60;
    if (*(long *)PTR_DAT_06d92ce0 == 0) {
      lVar14 = 0;
      plVar11 = plVar10;
    }
    else {
      plVar11 = (long *)thunk_FUN_015d0480(*(long *)PTR_DAT_06d92ce0,
                                           *(undefined8 *)(*plVar10 + 0x40));
      if (plVar11 == (long *)0x0) goto LAB_0322bb54;
      lVar14 = *(long *)puVar1;
    }
    puVar1 = PTR_DAT_06db68c8;
    if ((int)plVar10[3] == 0) goto LAB_0322bb50;
    plVar10[4] = lVar14;
    plVar11 = (long *)thunk_FUN_01656ef8(plVar10 + 4,lVar14);
    lVar14 = *(long *)puVar1;
    if (lVar14 == 0) {
      lVar14 = 0;
    }
    else {
      plVar11 = (long *)thunk_FUN_015d0480(lVar14,*(undefined8 *)(*plVar10 + 0x40));
      if (plVar11 == (long *)0x0) goto LAB_0322bb54;
      lVar14 = *(long *)puVar1;
    }
    puVar1 = PTR_DAT_06e5c1a8;
    if (*(uint *)(plVar10 + 3) < 2) goto LAB_0322bb50;
    plVar10[5] = lVar14;
    plVar11 = (long *)thunk_FUN_01656ef8(plVar10 + 5,lVar14);
    lVar14 = *(long *)puVar1;
    if (lVar14 == 0) {
      lVar14 = 0;
    }
    else {
      plVar11 = (long *)thunk_FUN_015d0480(lVar14,*(undefined8 *)(*plVar10 + 0x40));
      if (plVar11 == (long *)0x0) goto LAB_0322bb54;
      lVar14 = *(long *)puVar1;
    }
    puVar1 = PTR_DAT_06dc51e8;
    if (*(uint *)(plVar10 + 3) < 3) goto LAB_0322bb50;
    plVar10[6] = lVar14;
    plVar11 = (long *)thunk_FUN_01656ef8(plVar10 + 6,lVar14);
    lVar14 = *(long *)puVar1;
    if (lVar14 == 0) {
      lVar14 = 0;
    }
    else {
      plVar11 = (long *)thunk_FUN_015d0480(lVar14,*(undefined8 *)(*plVar10 + 0x40));
      if (plVar11 == (long *)0x0) goto LAB_0322bb54;
      lVar14 = *(long *)puVar1;
    }
    puVar1 = PTR_DAT_06e2fed0;
    if (*(uint *)(plVar10 + 3) < 4) goto LAB_0322bb50;
    plVar10[7] = lVar14;
    plVar11 = (long *)thunk_FUN_01656ef8(plVar10 + 7,lVar14);
    lVar14 = *(long *)puVar1;
    if (lVar14 == 0) {
      lVar14 = 0;
    }
    else {
      plVar11 = (long *)thunk_FUN_015d0480(lVar14,*(undefined8 *)(*plVar10 + 0x40));
      if (plVar11 == (long *)0x0) goto LAB_0322bb54;
      lVar14 = *(long *)puVar1;
    }
    puVar1 = PTR_DAT_06e667b0;
    if (*(uint *)(plVar10 + 3) < 5) goto LAB_0322bb50;
    plVar10[8] = lVar14;
    plVar11 = (long *)thunk_FUN_01656ef8(plVar10 + 8,lVar14);
    lVar14 = *(long *)puVar1;
    if (lVar14 == 0) {
      lVar14 = 0;
    }
    else {
      plVar11 = (long *)thunk_FUN_015d0480(lVar14,*(undefined8 *)(*plVar10 + 0x40));
      if (plVar11 == (long *)0x0) goto LAB_0322bb54;
      lVar14 = *(long *)puVar1;
    }
    puVar1 = PTR_DAT_06db5ca0;
    if (*(uint *)(plVar10 + 3) < 6) goto LAB_0322bb50;
    plVar10[9] = lVar14;
    plVar11 = (long *)thunk_FUN_01656ef8(plVar10 + 9,lVar14);
    lVar14 = *(long *)puVar1;
    if (lVar14 == 0) {
      lVar14 = 0;
    }
    else {
      plVar11 = (long *)thunk_FUN_015d0480(lVar14,*(undefined8 *)(*plVar10 + 0x40));
      if (plVar11 == (long *)0x0) goto LAB_0322bb54;
      lVar14 = *(long *)puVar1;
    }
    puVar1 = PTR_DAT_06db57d8;
    if (*(uint *)(plVar10 + 3) < 7) goto LAB_0322bb50;
    plVar10[10] = lVar14;
    plVar11 = (long *)thunk_FUN_01656ef8(plVar10 + 10,lVar14);
    lVar14 = *(long *)puVar1;
    if (lVar14 == 0) {
      lVar14 = 0;
    }
    else {
      plVar11 = (long *)thunk_FUN_015d0480(lVar14,*(undefined8 *)(*plVar10 + 0x40));
      if (plVar11 == (long *)0x0) goto LAB_0322bb54;
      lVar14 = *(long *)puVar1;
    }
    puVar1 = PTR_DAT_06e68880;
    if (*(uint *)(plVar10 + 3) < 8) goto LAB_0322bb50;
    plVar10[0xb] = lVar14;
    plVar11 = (long *)thunk_FUN_01656ef8(plVar10 + 0xb,lVar14);
    lVar14 = *(long *)puVar1;
    if (lVar14 == 0) {
      lVar14 = 0;
    }
    else {
      plVar11 = (long *)thunk_FUN_015d0480(lVar14,*(undefined8 *)(*plVar10 + 0x40));
      if (plVar11 == (long *)0x0) goto LAB_0322bb54;
      lVar14 = *(long *)puVar1;
    }
    puVar1 = PTR_DAT_06daaeb8;
    if (*(uint *)(plVar10 + 3) < 9) goto LAB_0322bb50;
    plVar10[0xc] = lVar14;
    plVar11 = (long *)thunk_FUN_01656ef8(plVar10 + 0xc,lVar14);
    lVar14 = *(long *)puVar1;
    if (lVar14 == 0) {
      lVar14 = 0;
    }
    else {
      plVar11 = (long *)thunk_FUN_015d0480(lVar14,*(undefined8 *)(*plVar10 + 0x40));
      if (plVar11 == (long *)0x0) goto LAB_0322bb54;
      lVar14 = *(long *)puVar1;
    }
    puVar1 = PTR_DAT_06e31cb8;
    if (*(uint *)(plVar10 + 3) < 10) goto LAB_0322bb50;
    plVar10[0xd] = lVar14;
    plVar11 = (long *)thunk_FUN_01656ef8(plVar10 + 0xd,lVar14);
    lVar14 = *(long *)puVar1;
    if (lVar14 == 0) {
      lVar14 = 0;
    }
    else {
      plVar11 = (long *)thunk_FUN_015d0480(lVar14,*(undefined8 *)(*plVar10 + 0x40));
      if (plVar11 == (long *)0x0) goto LAB_0322bb54;
      lVar14 = *(long *)puVar1;
    }
    puVar1 = PTR_DAT_06df64e0;
    if (*(uint *)(plVar10 + 3) < 0xb) goto LAB_0322bb50;
    plVar10[0xe] = lVar14;
    plVar11 = (long *)thunk_FUN_01656ef8(plVar10 + 0xe,lVar14);
    lVar14 = *(long *)puVar1;
    if (lVar14 == 0) {
      lVar14 = 0;
    }
    else {
      plVar11 = (long *)thunk_FUN_015d0480(lVar14,*(undefined8 *)(*plVar10 + 0x40));
      if (plVar11 == (long *)0x0) goto LAB_0322bb54;
      lVar14 = *(long *)puVar1;
    }
    if (*(uint *)(plVar10 + 3) < 0xc) goto LAB_0322bb50;
    plVar10[0xf] = lVar14;
    thunk_FUN_01656ef8(plVar10 + 0xf,lVar14);
    plVar11 = (long *)(*(long *)(*unaff_x21 + 0xb8) + 0x18);
    *plVar11 = (long)plVar10;
    thunk_FUN_01656ef8(plVar11,plVar10);
    plVar10 = (long *)FUN_0160edfc(*unaff_x20,5);
    puVar1 = PTR_DAT_06de85f0;
    if (plVar10 == (long *)0x0) goto LAB_0322bb60;
    if (*(long *)PTR_DAT_06de85f0 == 0) {
      lVar14 = 0;
      plVar11 = plVar10;
    }
    else {
      plVar11 = (long *)thunk_FUN_015d0480(*(long *)PTR_DAT_06de85f0,
                                           *(undefined8 *)(*plVar10 + 0x40));
      if (plVar11 == (long *)0x0) goto LAB_0322bb54;
      lVar14 = *(long *)puVar1;
    }
    puVar1 = PTR_DAT_06dab100;
    if ((int)plVar10[3] == 0) goto LAB_0322bb50;
    plVar10[4] = lVar14;
    plVar11 = (long *)thunk_FUN_01656ef8(plVar10 + 4,lVar14);
    lVar14 = *(long *)puVar1;
    if (lVar14 == 0) {
      lVar14 = 0;
    }
    else {
      plVar11 = (long *)thunk_FUN_015d0480(lVar14,*(undefined8 *)(*plVar10 + 0x40));
      if (plVar11 == (long *)0x0) goto LAB_0322bb54;
      lVar14 = *(long *)puVar1;
    }
    puVar1 = PTR_DAT_06e22540;
    if (*(uint *)(plVar10 + 3) < 2) goto LAB_0322bb50;
    plVar10[5] = lVar14;
    plVar11 = (long *)thunk_FUN_01656ef8(plVar10 + 5,lVar14);
    lVar14 = *(long *)puVar1;
    if (lVar14 == 0) {
      lVar14 = 0;
    }
    else {
      plVar11 = (long *)thunk_FUN_015d0480(lVar14,*(undefined8 *)(*plVar10 + 0x40));
      if (plVar11 == (long *)0x0) goto LAB_0322bb54;
      lVar14 = *(long *)puVar1;
    }
    puVar1 = PTR_DAT_06dc49d0;
    if (*(uint *)(plVar10 + 3) < 3) goto LAB_0322bb50;
    plVar10[6] = lVar14;
    plVar11 = (long *)thunk_FUN_01656ef8(plVar10 + 6,lVar14);
    lVar14 = *(long *)puVar1;
    if (lVar14 == 0) {
      lVar14 = 0;
    }
    else {
      plVar11 = (long *)thunk_FUN_015d0480(lVar14,*(undefined8 *)(*plVar10 + 0x40));
      if (plVar11 == (long *)0x0) goto LAB_0322bb54;
      lVar14 = *(long *)puVar1;
    }
    puVar1 = PTR_DAT_06dd2b20;
    if (3 < *(uint *)(plVar10 + 3)) {
      plVar10[7] = lVar14;
      plVar11 = (long *)thunk_FUN_01656ef8(plVar10 + 7,lVar14);
      lVar14 = *(long *)puVar1;
      if (lVar14 == 0) {
        lVar14 = 0;
      }
      else {
        plVar11 = (long *)thunk_FUN_015d0480(lVar14,*(undefined8 *)(*plVar10 + 0x40));
        if (plVar11 == (long *)0x0) {
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
  FUN_0160eebc(plVar11,lVar14);
}


