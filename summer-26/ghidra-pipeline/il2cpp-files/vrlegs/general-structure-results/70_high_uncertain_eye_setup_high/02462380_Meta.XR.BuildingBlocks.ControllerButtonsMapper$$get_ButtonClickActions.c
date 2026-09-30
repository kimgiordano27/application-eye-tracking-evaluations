/*
FUNCTION_NAME: Meta.XR.BuildingBlocks.ControllerButtonsMapper$$get_ButtonClickActions
ENTRY_POINT: 02462380
PROGRAM: vrlegs-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;ui_or_gameplay_sink_hits_4;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_BuildingBlocks_ControllerButtonsMapper__get_ButtonClickActions(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  long in_x9;
  uint in_w10;
  long unaff_x19;
  
  if (in_w10 <= (uint)in_x9) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c44();
  }
  plVar3 = *(long **)(param_1 + in_x9 * 8 + 0x20);
  if (plVar3 != (long *)0x0) {
    plVar1 = *(long **)(unaff_x19 + 0x18);
    if (plVar1 == (long *)0x0) goto LAB_02462450;
    lVar4 = *(long *)PTR_DAT_03ce6ca0;
    if ((*(byte *)(*plVar3 + 0x130) < *(byte *)(lVar4 + 0x130)) ||
       (*(long *)(*(long *)(*plVar3 + 200) + (ulong)*(byte *)(lVar4 + 0x130) * 8 + -8) != lVar4)) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6ee0(plVar3,lVar4);
    }
    (**(code **)(*plVar1 + 0x388))(plVar1,plVar3,*(undefined8 *)(*plVar1 + 0x390));
  }
  if (*(char *)(unaff_x19 + 0xe4) != '\0') {
    if ((*(long *)(unaff_x19 + 0x18) == 0) || (*(long *)(unaff_x19 + 0x150) == 0))
    goto LAB_02462450;
    plVar3 = *(long **)(*(long *)(unaff_x19 + 0x18) + 0x48);
    uVar2 = FUN_024ab728(*(long *)(unaff_x19 + 0x150),0);
    if (plVar3 == (long *)0x0) goto LAB_02462450;
    (**(code **)(*plVar3 + 0x348))(plVar3,uVar2,*(undefined8 *)(*plVar3 + 0x350));
    if (*(long *)(unaff_x19 + 0x150) == 0) goto LAB_02462450;
    FUN_024a0eb0(*(long *)(unaff_x19 + 0x150),0,0);
  }
  if (*(long *)(unaff_x19 + 0x150) != 0) {
    *(undefined1 *)(*(long *)(unaff_x19 + 0x150) + 0x85) = 1;
    return;
  }
LAB_02462450:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


