/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKNativeFuncs.MrukOnRoomAnchorAdded$$EndInvoke
ENTRY_POINT: 07713958
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_12;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


long Meta_XR_MRUtilityKit_MRUKNativeFuncs_MrukOnRoomAnchorAdded__EndInvoke(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 in_CY;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long in_x10;
  long unaff_x19;
  ulong unaff_x20;
  long unaff_x21;
  undefined8 unaff_x22;
  long *plVar12;
  uint uVar13;
  long *unaff_x24;
  long unaff_x25;
  undefined8 *unaff_x26;
  long *plVar14;
  undefined8 *unaff_x27;
  long in_stack_00000020;
  
  while( true ) {
    if ((bool)in_CY) {
      FUN_05bade44();
    }
    else {
      *(int *)(unaff_x21 + 0x18) = (int)in_x10 + 1;
      puVar6 = (undefined8 *)(param_1 + in_x10 * 8 + 0x20);
      *puVar6 = unaff_x22;
      thunk_FUN_044bb4b4(puVar6,unaff_x22);
    }
    do {
      do {
        unaff_x20 = unaff_x20 + 1;
        if ((long)(int)*(uint *)(unaff_x19 + 0x18) <= (long)unaff_x20) {
          if (unaff_x21 == 0) goto LAB_07713c60;
          lVar7 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f309a0,*(undefined4 *)(unaff_x21 + 0x18));
          if (in_stack_00000020 == 0) goto LAB_07713c60;
          plVar12 = (long *)(in_stack_00000020 + 0x28);
          *plVar12 = lVar7;
          thunk_FUN_044bb4b4(plVar12,lVar7);
          puVar4 = PTR_DAT_09f1f078;
          puVar3 = PTR_DAT_09f1f070;
          puVar2 = PTR_DAT_09f1f030;
          if (*(int *)(unaff_x21 + 0x18) < 1) goto LAB_07713b78;
          plVar14 = (long *)*plVar12;
          uVar13 = 0;
          lVar7 = 0x20;
          goto LAB_07713a08;
        }
        if (*(uint *)(unaff_x19 + 0x18) <= unaff_x20) goto LAB_07713c64;
        uVar10 = *(undefined8 *)(unaff_x25 + unaff_x20 * 8);
        if (*(int *)(*unaff_x24 + 0xe4) == 0) {
          thunk_FUN_044a54b4();
        }
        uVar5 = FUN_09531730(uVar10,0,0);
      } while ((uVar5 & 1) == 0);
      if (*(uint *)(unaff_x19 + 0x18) <= unaff_x20) goto LAB_07713c64;
      uVar10 = *(undefined8 *)(unaff_x25 + unaff_x20 * 8);
      unaff_x22 = thunk_FUN_0448520c(*unaff_x26);
      FUN_07712c50(0,0,0x3f800000,0x3f800000,0,0,0x3f800000,0x3f800000,unaff_x22,uVar10,1,0,
                   *unaff_x27);
      if (unaff_x21 == 0) goto LAB_07713c60;
      uVar5 = FUN_05bae1d4();
    } while ((uVar5 & 1) != 0);
    param_1 = *(long *)(unaff_x21 + 0x10);
    *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
    if (param_1 == 0) break;
    in_x10 = (long)(int)*(uint *)(unaff_x21 + 0x18);
    in_CY = *(uint *)(param_1 + 0x18) <= *(uint *)(unaff_x21 + 0x18);
  }
LAB_07713c60:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
LAB_07713a08:
  lVar8 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f309a8);
  FUN_07711f2c();
  if (plVar14 == (long *)0x0) goto LAB_07713c60;
  if ((lVar8 != 0) &&
     (lVar9 = thunk_FUN_04485110(lVar8,*(undefined8 *)(*plVar14 + 0x40)), lVar9 == 0)) {
    uVar10 = thunk_FUN_04491d98();
                    /* WARNING: Subroutine does not return */
    FUN_04447d10(uVar10,0);
  }
  if (*(uint *)(plVar14 + 3) <= uVar13) {
LAB_07713c64:
                    /* WARNING: Subroutine does not return */
    FUN_04447e4c();
  }
  *(long *)((long)plVar14 + lVar7) = lVar8;
  thunk_FUN_044bb4b4((long *)((long)plVar14 + lVar7),lVar8);
  lVar8 = thunk_FUN_0448520c(*(undefined8 *)puVar3);
  FUN_05bad610(lVar8,*(undefined8 *)puVar4);
  lVar9 = FUN_05badb74();
  if ((lVar9 == 0) || (lVar8 == 0)) goto LAB_07713c60;
  uVar10 = *(undefined8 *)(lVar9 + 0x10);
  lVar9 = *(long *)(lVar8 + 0x10);
  lVar11 = *(long *)puVar2;
  *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
  if (lVar9 == 0) goto LAB_07713c60;
  uVar1 = *(uint *)(lVar8 + 0x18);
  if (uVar1 < *(uint *)(lVar9 + 0x18)) {
    *(uint *)(lVar8 + 0x18) = uVar1 + 1;
    *(undefined8 *)(lVar9 + (long)(int)uVar1 * 8 + 0x20) = uVar10;
    thunk_FUN_044bb4b4();
  }
  else {
    FUN_05bade44(lVar8,uVar10,*(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
  }
  lVar9 = *plVar12;
  if (lVar9 == 0) goto LAB_07713c60;
  if (*(uint *)(lVar9 + 0x18) <= uVar13) goto LAB_07713c64;
  if (*(long *)(lVar9 + lVar7) == 0) goto LAB_07713c60;
  plVar14 = (long *)(*(long *)(lVar9 + lVar7) + 0x20);
  *plVar14 = lVar8;
  thunk_FUN_044bb4b4(plVar14,lVar8);
  lVar8 = *plVar12;
  if (lVar8 == 0) goto LAB_07713c60;
  if (*(uint *)(lVar8 + 0x18) <= uVar13) goto LAB_07713c64;
  lVar9 = *(long *)(lVar8 + lVar7);
  lVar8 = FUN_05badb74();
  if ((lVar8 == 0) || (lVar9 == 0)) goto LAB_07713c60;
  puVar6 = (undefined8 *)(lVar9 + 0x10);
  *puVar6 = *(undefined8 *)(lVar8 + 0x10);
  thunk_FUN_044bb4b4(puVar6);
  plVar14 = (long *)*plVar12;
  if (plVar14 == (long *)0x0) goto LAB_07713c60;
  if (*(uint *)(plVar14 + 3) <= uVar13) goto LAB_07713c64;
  if (*(long *)((long)plVar14 + lVar7) == 0) goto LAB_07713c60;
  *(undefined1 *)(*(long *)((long)plVar14 + lVar7) + 0x18) = 0;
  uVar13 = uVar13 + 1;
  lVar7 = lVar7 + 8;
  if (*(int *)(unaff_x21 + 0x18) <= (int)uVar13) {
LAB_07713b78:
    *(bool *)(in_stack_00000020 + 0x38) = *(int *)(unaff_x19 + 0x18) != 1;
    uVar10 = FUN_05baf9bc();
    *(undefined8 *)(in_stack_00000020 + 0x20) = uVar10;
    thunk_FUN_044bb4b4();
    return in_stack_00000020;
  }
  goto LAB_07713a08;
}


