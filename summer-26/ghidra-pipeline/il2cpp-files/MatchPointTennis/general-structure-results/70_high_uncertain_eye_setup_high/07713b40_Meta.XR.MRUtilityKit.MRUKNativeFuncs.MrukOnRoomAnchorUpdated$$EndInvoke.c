/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKNativeFuncs.MrukOnRoomAnchorUpdated$$EndInvoke
ENTRY_POINT: 07713b40
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


long Meta_XR_MRUtilityKit_MRUKNativeFuncs_MrukOnRoomAnchorUpdated__EndInvoke(undefined8 *param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  uint unaff_w23;
  long unaff_x25;
  long *plVar6;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  long in_stack_00000020;
  
  while( true ) {
    thunk_FUN_044bb4b4(param_1);
    plVar6 = (long *)*unaff_x22;
    if (plVar6 == (long *)0x0) break;
    if (*(uint *)(plVar6 + 3) <= unaff_w23) {
LAB_07713c64:
                    /* WARNING: Subroutine does not return */
      FUN_04447e4c();
    }
    if (*(long *)((long)plVar6 + unaff_x25) == 0) break;
    *(undefined1 *)(*(long *)((long)plVar6 + unaff_x25) + 0x18) = 0;
    unaff_w23 = unaff_w23 + 1;
    unaff_x25 = unaff_x25 + 8;
    if (*(int *)(unaff_x21 + 0x18) <= (int)unaff_w23) {
      *(bool *)(in_stack_00000020 + 0x38) = *(int *)(unaff_x19 + 0x18) != 1;
      uVar4 = FUN_05baf9bc();
      *(undefined8 *)(in_stack_00000020 + 0x20) = uVar4;
      thunk_FUN_044bb4b4();
      return in_stack_00000020;
    }
    lVar2 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f309a8);
    FUN_07711f2c();
    if (plVar6 == (long *)0x0) break;
    if ((lVar2 != 0) &&
       (lVar3 = thunk_FUN_04485110(lVar2,*(undefined8 *)(*plVar6 + 0x40)), lVar3 == 0)) {
      uVar4 = thunk_FUN_04491d98();
                    /* WARNING: Subroutine does not return */
      FUN_04447d10(uVar4,0);
    }
    if (*(uint *)(plVar6 + 3) <= unaff_w23) goto LAB_07713c64;
    *(long *)((long)plVar6 + unaff_x25) = lVar2;
    thunk_FUN_044bb4b4((long *)((long)plVar6 + unaff_x25),lVar2);
    lVar2 = thunk_FUN_0448520c(*unaff_x27);
    FUN_05bad610(lVar2,*unaff_x28);
    lVar3 = FUN_05badb74();
    if ((lVar3 == 0) || (lVar2 == 0)) break;
    uVar4 = *(undefined8 *)(lVar3 + 0x10);
    lVar3 = *(long *)(lVar2 + 0x10);
    lVar5 = *unaff_x20;
    *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
    if (lVar3 == 0) break;
    uVar1 = *(uint *)(lVar2 + 0x18);
    if (uVar1 < *(uint *)(lVar3 + 0x18)) {
      *(uint *)(lVar2 + 0x18) = uVar1 + 1;
      *(undefined8 *)(lVar3 + (long)(int)uVar1 * 8 + 0x20) = uVar4;
      thunk_FUN_044bb4b4();
    }
    else {
      FUN_05bade44(lVar2,uVar4,*(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
    }
    lVar3 = *unaff_x22;
    if (lVar3 == 0) break;
    if (*(uint *)(lVar3 + 0x18) <= unaff_w23) goto LAB_07713c64;
    if (*(long *)(lVar3 + unaff_x25) == 0) break;
    plVar6 = (long *)(*(long *)(lVar3 + unaff_x25) + 0x20);
    *plVar6 = lVar2;
    thunk_FUN_044bb4b4(plVar6,lVar2);
    lVar2 = *unaff_x22;
    if (lVar2 == 0) break;
    if (*(uint *)(lVar2 + 0x18) <= unaff_w23) goto LAB_07713c64;
    lVar3 = *(long *)(lVar2 + unaff_x25);
    lVar2 = FUN_05badb74();
    if ((lVar2 == 0) || (lVar3 == 0)) break;
    param_1 = (undefined8 *)(lVar3 + 0x10);
    *param_1 = *(undefined8 *)(lVar2 + 0x10);
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


