/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKNativeFuncs.MrukOnRoomAnchorAdded$$Invoke
ENTRY_POINT: 07713898
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_13;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


long Meta_XR_MRUtilityKit_MRUKNativeFuncs_MrukOnRoomAnchorAdded__Invoke(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long unaff_x19;
  ulong unaff_x20;
  long unaff_x21;
  undefined8 uVar11;
  long *plVar12;
  uint uVar13;
  undefined8 uVar14;
  long *unaff_x24;
  long unaff_x25;
  undefined8 *unaff_x26;
  long *plVar15;
  undefined8 *unaff_x27;
  long in_stack_00000020;
  
  do {
    uVar11 = *(undefined8 *)(unaff_x25 + unaff_x20 * 8);
    if (*(int *)(param_1 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    uVar5 = FUN_09531730(uVar11,0,0);
    if ((uVar5 & 1) != 0) {
      if (*(uint *)(unaff_x19 + 0x18) <= unaff_x20) goto LAB_07713c64;
      uVar14 = *(undefined8 *)(unaff_x25 + unaff_x20 * 8);
      uVar11 = thunk_FUN_0448520c(*unaff_x26);
      FUN_07712c50(0,0,0x3f800000,0x3f800000,0,0,0x3f800000,0x3f800000,uVar11,uVar14,1,0,*unaff_x27)
      ;
      if (unaff_x21 == 0) goto LAB_07713c60;
      uVar5 = FUN_05bae1d4();
      if ((uVar5 & 1) == 0) {
        lVar9 = *(long *)(unaff_x21 + 0x10);
        *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
        if (lVar9 == 0) goto LAB_07713c60;
        uVar13 = *(uint *)(unaff_x21 + 0x18);
        if (uVar13 < *(uint *)(lVar9 + 0x18)) {
          *(uint *)(unaff_x21 + 0x18) = uVar13 + 1;
          puVar6 = (undefined8 *)(lVar9 + (long)(int)uVar13 * 8 + 0x20);
          *puVar6 = uVar11;
          thunk_FUN_044bb4b4(puVar6,uVar11);
        }
        else {
          FUN_05bade44();
        }
      }
    }
    unaff_x20 = unaff_x20 + 1;
    if ((long)(int)*(uint *)(unaff_x19 + 0x18) <= (long)unaff_x20) {
      if (unaff_x21 == 0) goto LAB_07713c60;
      lVar9 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f309a0,*(undefined4 *)(unaff_x21 + 0x18));
      if (in_stack_00000020 == 0) goto LAB_07713c60;
      plVar12 = (long *)(in_stack_00000020 + 0x28);
      *plVar12 = lVar9;
      thunk_FUN_044bb4b4(plVar12,lVar9);
      puVar4 = PTR_DAT_09f1f078;
      puVar3 = PTR_DAT_09f1f070;
      puVar2 = PTR_DAT_09f1f030;
      if (*(int *)(unaff_x21 + 0x18) < 1) goto LAB_07713b78;
      plVar15 = (long *)*plVar12;
      uVar13 = 0;
      lVar9 = 0x20;
      break;
    }
    if (*(uint *)(unaff_x19 + 0x18) <= unaff_x20) goto LAB_07713c64;
    param_1 = *unaff_x24;
  } while( true );
LAB_07713a08:
  lVar7 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f309a8);
  FUN_07711f2c();
  if (plVar15 == (long *)0x0) {
LAB_07713c60:
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  if ((lVar7 != 0) &&
     (lVar8 = thunk_FUN_04485110(lVar7,*(undefined8 *)(*plVar15 + 0x40)), lVar8 == 0)) {
    uVar11 = thunk_FUN_04491d98();
                    /* WARNING: Subroutine does not return */
    FUN_04447d10(uVar11,0);
  }
  if (*(uint *)(plVar15 + 3) <= uVar13) {
LAB_07713c64:
                    /* WARNING: Subroutine does not return */
    FUN_04447e4c();
  }
  *(long *)((long)plVar15 + lVar9) = lVar7;
  thunk_FUN_044bb4b4((long *)((long)plVar15 + lVar9),lVar7);
  lVar7 = thunk_FUN_0448520c(*(undefined8 *)puVar3);
  FUN_05bad610(lVar7,*(undefined8 *)puVar4);
  lVar8 = FUN_05badb74();
  if ((lVar8 == 0) || (lVar7 == 0)) goto LAB_07713c60;
  uVar11 = *(undefined8 *)(lVar8 + 0x10);
  lVar8 = *(long *)(lVar7 + 0x10);
  lVar10 = *(long *)puVar2;
  *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
  if (lVar8 == 0) goto LAB_07713c60;
  uVar1 = *(uint *)(lVar7 + 0x18);
  if (uVar1 < *(uint *)(lVar8 + 0x18)) {
    *(uint *)(lVar7 + 0x18) = uVar1 + 1;
    *(undefined8 *)(lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar11;
    thunk_FUN_044bb4b4();
  }
  else {
    FUN_05bade44(lVar7,uVar11,*(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
  }
  lVar8 = *plVar12;
  if (lVar8 == 0) goto LAB_07713c60;
  if (*(uint *)(lVar8 + 0x18) <= uVar13) goto LAB_07713c64;
  if (*(long *)(lVar8 + lVar9) == 0) goto LAB_07713c60;
  plVar15 = (long *)(*(long *)(lVar8 + lVar9) + 0x20);
  *plVar15 = lVar7;
  thunk_FUN_044bb4b4(plVar15,lVar7);
  lVar7 = *plVar12;
  if (lVar7 == 0) goto LAB_07713c60;
  if (*(uint *)(lVar7 + 0x18) <= uVar13) goto LAB_07713c64;
  lVar8 = *(long *)(lVar7 + lVar9);
  lVar7 = FUN_05badb74();
  if ((lVar7 == 0) || (lVar8 == 0)) goto LAB_07713c60;
  puVar6 = (undefined8 *)(lVar8 + 0x10);
  *puVar6 = *(undefined8 *)(lVar7 + 0x10);
  thunk_FUN_044bb4b4(puVar6);
  plVar15 = (long *)*plVar12;
  if (plVar15 == (long *)0x0) goto LAB_07713c60;
  if (*(uint *)(plVar15 + 3) <= uVar13) goto LAB_07713c64;
  if (*(long *)((long)plVar15 + lVar9) == 0) goto LAB_07713c60;
  *(undefined1 *)(*(long *)((long)plVar15 + lVar9) + 0x18) = 0;
  uVar13 = uVar13 + 1;
  lVar9 = lVar9 + 8;
  if (*(int *)(unaff_x21 + 0x18) <= (int)uVar13) {
LAB_07713b78:
    *(bool *)(in_stack_00000020 + 0x38) = *(int *)(unaff_x19 + 0x18) != 1;
    uVar11 = FUN_05baf9bc();
    *(undefined8 *)(in_stack_00000020 + 0x20) = uVar11;
    thunk_FUN_044bb4b4();
    return in_stack_00000020;
  }
  goto LAB_07713a08;
}


