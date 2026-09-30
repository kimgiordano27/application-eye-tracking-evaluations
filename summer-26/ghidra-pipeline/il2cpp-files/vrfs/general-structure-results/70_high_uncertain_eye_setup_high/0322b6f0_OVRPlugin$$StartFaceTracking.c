/*
FUNCTION_NAME: OVRPlugin$$StartFaceTracking
ENTRY_POINT: 0322b6f0
PROGRAM: vrfs-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__StartFaceTracking(long param_1)

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
  undefined8 uVar11;
  undefined8 *puVar12;
  long lVar13;
  long *unaff_x19;
  undefined8 *unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  long *plVar14;
  
  plVar14 = *(long **)(unaff_x22 + 0x880);
  unaff_x19[0xb] = param_1;
  plVar10 = (long *)thunk_FUN_01656ef8();
  lVar13 = *plVar14;
  if (lVar13 == 0) {
    lVar13 = 0;
  }
  else {
    plVar10 = (long *)thunk_FUN_015d0480(lVar13,*(undefined8 *)(*unaff_x19 + 0x40));
    if (plVar10 == (long *)0x0) goto LAB_0322bb54;
    lVar13 = *plVar14;
  }
  puVar1 = PTR_DAT_06daaeb8;
  if (8 < *(uint *)(unaff_x19 + 3)) {
    unaff_x19[0xc] = lVar13;
    plVar10 = (long *)thunk_FUN_01656ef8(unaff_x19 + 0xc,lVar13);
    lVar13 = *(long *)puVar1;
    if (lVar13 == 0) {
      lVar13 = 0;
    }
    else {
      plVar10 = (long *)thunk_FUN_015d0480(lVar13,*(undefined8 *)(*unaff_x19 + 0x40));
      if (plVar10 == (long *)0x0) goto LAB_0322bb54;
      lVar13 = *(long *)puVar1;
    }
    puVar1 = PTR_DAT_06e31cb8;
    if (*(uint *)(unaff_x19 + 3) < 10) goto LAB_0322bb50;
    unaff_x19[0xd] = lVar13;
    plVar10 = (long *)thunk_FUN_01656ef8(unaff_x19 + 0xd,lVar13);
    lVar13 = *(long *)puVar1;
    if (lVar13 == 0) {
      lVar13 = 0;
    }
    else {
      plVar10 = (long *)thunk_FUN_015d0480(lVar13,*(undefined8 *)(*unaff_x19 + 0x40));
      if (plVar10 == (long *)0x0) goto LAB_0322bb54;
      lVar13 = *(long *)puVar1;
    }
    puVar1 = PTR_DAT_06df64e0;
    if (*(uint *)(unaff_x19 + 3) < 0xb) goto LAB_0322bb50;
    unaff_x19[0xe] = lVar13;
    plVar10 = (long *)thunk_FUN_01656ef8(unaff_x19 + 0xe,lVar13);
    lVar13 = *(long *)puVar1;
    if (lVar13 == 0) {
      lVar13 = 0;
    }
    else {
      plVar10 = (long *)thunk_FUN_015d0480(lVar13,*(undefined8 *)(*unaff_x19 + 0x40));
      if (plVar10 == (long *)0x0) goto LAB_0322bb54;
      lVar13 = *(long *)puVar1;
    }
    if (*(uint *)(unaff_x19 + 3) < 0xc) goto LAB_0322bb50;
    unaff_x19[0xf] = lVar13;
    thunk_FUN_01656ef8(unaff_x19 + 0xf,lVar13);
    *(long **)(*(long *)(*unaff_x21 + 0xb8) + 0x18) = unaff_x19;
    thunk_FUN_01656ef8();
    plVar14 = (long *)FUN_0160edfc(*unaff_x20,5);
    puVar1 = PTR_DAT_06de85f0;
    if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    if (*(long *)PTR_DAT_06de85f0 == 0) {
      lVar13 = 0;
      plVar10 = plVar14;
    }
    else {
      plVar10 = (long *)thunk_FUN_015d0480(*(long *)PTR_DAT_06de85f0,
                                           *(undefined8 *)(*plVar14 + 0x40));
      if (plVar10 == (long *)0x0) goto LAB_0322bb54;
      lVar13 = *(long *)puVar1;
    }
    puVar1 = PTR_DAT_06dab100;
    if ((int)plVar14[3] == 0) goto LAB_0322bb50;
    plVar14[4] = lVar13;
    plVar10 = (long *)thunk_FUN_01656ef8(plVar14 + 4,lVar13);
    lVar13 = *(long *)puVar1;
    if (lVar13 == 0) {
      lVar13 = 0;
    }
    else {
      plVar10 = (long *)thunk_FUN_015d0480(lVar13,*(undefined8 *)(*plVar14 + 0x40));
      if (plVar10 == (long *)0x0) goto LAB_0322bb54;
      lVar13 = *(long *)puVar1;
    }
    puVar1 = PTR_DAT_06e22540;
    if (*(uint *)(plVar14 + 3) < 2) goto LAB_0322bb50;
    plVar14[5] = lVar13;
    plVar10 = (long *)thunk_FUN_01656ef8(plVar14 + 5,lVar13);
    lVar13 = *(long *)puVar1;
    if (lVar13 == 0) {
      lVar13 = 0;
    }
    else {
      plVar10 = (long *)thunk_FUN_015d0480(lVar13,*(undefined8 *)(*plVar14 + 0x40));
      if (plVar10 == (long *)0x0) goto LAB_0322bb54;
      lVar13 = *(long *)puVar1;
    }
    puVar1 = PTR_DAT_06dc49d0;
    if (*(uint *)(plVar14 + 3) < 3) goto LAB_0322bb50;
    plVar14[6] = lVar13;
    plVar10 = (long *)thunk_FUN_01656ef8(plVar14 + 6,lVar13);
    lVar13 = *(long *)puVar1;
    if (lVar13 == 0) {
      lVar13 = 0;
    }
    else {
      plVar10 = (long *)thunk_FUN_015d0480(lVar13,*(undefined8 *)(*plVar14 + 0x40));
      if (plVar10 == (long *)0x0) goto LAB_0322bb54;
      lVar13 = *(long *)puVar1;
    }
    puVar1 = PTR_DAT_06dd2b20;
    if (3 < *(uint *)(plVar14 + 3)) {
      plVar14[7] = lVar13;
      plVar10 = (long *)thunk_FUN_01656ef8(plVar14 + 7,lVar13);
      lVar13 = *(long *)puVar1;
      if (lVar13 == 0) {
        lVar13 = 0;
      }
      else {
        plVar10 = (long *)thunk_FUN_015d0480(lVar13,*(undefined8 *)(*plVar14 + 0x40));
        if (plVar10 == (long *)0x0) {
LAB_0322bb54:
          uVar11 = thunk_FUN_015f0d94();
                    /* WARNING: Subroutine does not return */
          FUN_0160ee7c(uVar11,0);
        }
        lVar13 = *(long *)puVar1;
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
      if (4 < *(uint *)(plVar14 + 3)) {
        plVar14[8] = lVar13;
        thunk_FUN_01656ef8();
        plVar10 = (long *)(*(long *)(*unaff_x21 + 0xb8) + 0x20);
        *plVar10 = (long)plVar14;
        thunk_FUN_01656ef8(plVar10,plVar14);
        uVar11 = FUN_0160edfc(*(undefined8 *)puVar3,0x100);
        FUN_02df8d44(uVar11,*(undefined8 *)puVar4,0);
        puVar12 = (undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0x28);
        *puVar12 = uVar11;
        thunk_FUN_01656ef8(puVar12,uVar11);
        uVar11 = FUN_0160edfc(*(undefined8 *)puVar5,0x1e);
        FUN_02df8d44(uVar11,*(undefined8 *)puVar7,0);
        puVar12 = (undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0x30);
        *puVar12 = uVar11;
        thunk_FUN_01656ef8(puVar12,uVar11);
        uVar11 = FUN_0160edfc(*(undefined8 *)puVar9,0xf);
        FUN_02df8d44(uVar11,*(undefined8 *)puVar2,0);
        puVar12 = (undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0x38);
        *puVar12 = uVar11;
        thunk_FUN_01656ef8(puVar12,uVar11);
        uVar11 = FUN_0160edfc(*(undefined8 *)puVar5,0x2a);
        FUN_02df8d44(uVar11,*(undefined8 *)puVar6,0);
        puVar12 = (undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0x40);
        *puVar12 = uVar11;
        thunk_FUN_01656ef8(puVar12,uVar11);
        uVar11 = FUN_0160edfc(*(undefined8 *)puVar1,0x15);
        FUN_02df8d44(uVar11,*(undefined8 *)puVar8,0);
        puVar12 = (undefined8 *)(*(long *)(*unaff_x21 + 0xb8) + 0x48);
        *puVar12 = uVar11;
        thunk_FUN_01656ef8(puVar12,uVar11);
        return;
      }
    }
  }
LAB_0322bb50:
                    /* WARNING: Subroutine does not return */
  FUN_0160eebc(plVar10,lVar13);
}


