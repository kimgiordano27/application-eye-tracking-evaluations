/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKNativeFuncs.MrukOnRoomAnchorUpdated$$BeginInvoke
ENTRY_POINT: 07713a40
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_8;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


long Meta_XR_MRUtilityKit_MRUKNativeFuncs_MrukOnRoomAnchorUpdated__BeginInvoke(void)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  uint in_w8;
  long lVar6;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  uint unaff_w23;
  long unaff_x24;
  undefined8 *puVar7;
  long unaff_x25;
  long *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  long in_stack_00000020;
  
  while (unaff_w23 < in_w8) {
    *(long *)((long)unaff_x26 + unaff_x25) = unaff_x24;
    thunk_FUN_044bb4b4((long *)((long)unaff_x26 + unaff_x25),unaff_x24);
    lVar2 = thunk_FUN_0448520c(*unaff_x27);
    FUN_05bad610(lVar2,*unaff_x28);
    lVar3 = FUN_05badb74();
    if ((lVar3 == 0) || (lVar2 == 0)) {
LAB_07713c60:
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    uVar5 = *(undefined8 *)(lVar3 + 0x10);
    lVar3 = *(long *)(lVar2 + 0x10);
    lVar6 = *unaff_x20;
    *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
    if (lVar3 == 0) goto LAB_07713c60;
    uVar1 = *(uint *)(lVar2 + 0x18);
    if (uVar1 < *(uint *)(lVar3 + 0x18)) {
      *(uint *)(lVar2 + 0x18) = uVar1 + 1;
      *(undefined8 *)(lVar3 + (long)(int)uVar1 * 8 + 0x20) = uVar5;
      thunk_FUN_044bb4b4();
    }
    else {
      FUN_05bade44(lVar2,uVar5,*(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
    }
    lVar3 = *unaff_x22;
    if (lVar3 == 0) goto LAB_07713c60;
    if (*(uint *)(lVar3 + 0x18) <= unaff_w23) break;
    if (*(long *)(lVar3 + unaff_x25) == 0) goto LAB_07713c60;
    plVar4 = (long *)(*(long *)(lVar3 + unaff_x25) + 0x20);
    *plVar4 = lVar2;
    thunk_FUN_044bb4b4(plVar4,lVar2);
    lVar2 = *unaff_x22;
    if (lVar2 == 0) goto LAB_07713c60;
    if (*(uint *)(lVar2 + 0x18) <= unaff_w23) break;
    lVar3 = *(long *)(lVar2 + unaff_x25);
    lVar2 = FUN_05badb74();
    if ((lVar2 == 0) || (lVar3 == 0)) goto LAB_07713c60;
    puVar7 = (undefined8 *)(lVar3 + 0x10);
    *puVar7 = *(undefined8 *)(lVar2 + 0x10);
    thunk_FUN_044bb4b4(puVar7);
    unaff_x26 = (long *)*unaff_x22;
    if (unaff_x26 == (long *)0x0) goto LAB_07713c60;
    if (*(uint *)(unaff_x26 + 3) <= unaff_w23) break;
    if (*(long *)((long)unaff_x26 + unaff_x25) == 0) goto LAB_07713c60;
    *(undefined1 *)(*(long *)((long)unaff_x26 + unaff_x25) + 0x18) = 0;
    unaff_w23 = unaff_w23 + 1;
    unaff_x25 = unaff_x25 + 8;
    if (*(int *)(unaff_x21 + 0x18) <= (int)unaff_w23) {
      *(bool *)(in_stack_00000020 + 0x38) = *(int *)(unaff_x19 + 0x18) != 1;
      uVar5 = FUN_05baf9bc();
      *(undefined8 *)(in_stack_00000020 + 0x20) = uVar5;
      thunk_FUN_044bb4b4();
      return in_stack_00000020;
    }
    unaff_x24 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f309a8);
    FUN_07711f2c();
    if (unaff_x26 == (long *)0x0) goto LAB_07713c60;
    if ((unaff_x24 != 0) &&
       (lVar2 = thunk_FUN_04485110(unaff_x24,*(undefined8 *)(*unaff_x26 + 0x40)), lVar2 == 0)) {
      uVar5 = thunk_FUN_04491d98();
                    /* WARNING: Subroutine does not return */
      FUN_04447d10(uVar5,0);
    }
    in_w8 = *(uint *)(unaff_x26 + 3);
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e4c();
}


