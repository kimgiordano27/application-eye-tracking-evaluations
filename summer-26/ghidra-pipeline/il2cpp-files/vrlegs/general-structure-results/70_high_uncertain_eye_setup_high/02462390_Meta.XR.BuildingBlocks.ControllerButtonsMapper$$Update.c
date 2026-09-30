/*
FUNCTION_NAME: Meta.XR.BuildingBlocks.ControllerButtonsMapper$$Update
ENTRY_POINT: 02462390
PROGRAM: vrlegs-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_BuildingBlocks_ControllerButtonsMapper__Update(undefined8 param_1,long *param_2)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x19;
  
  if (param_2 != (long *)0x0) {
    plVar1 = *(long **)(unaff_x19 + 0x18);
    if (plVar1 == (long *)0x0) goto LAB_02462450;
    lVar3 = *(long *)PTR_DAT_03ce6ca0;
    if ((*(byte *)(*param_2 + 0x130) < *(byte *)(lVar3 + 0x130)) ||
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)*(byte *)(lVar3 + 0x130) * 8 + -8) != lVar3)) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6ee0(param_2,lVar3);
    }
    (**(code **)(*plVar1 + 0x388))(plVar1,param_2,*(undefined8 *)(*plVar1 + 0x390));
  }
  if (*(char *)(unaff_x19 + 0xe4) != '\0') {
    if ((*(long *)(unaff_x19 + 0x18) == 0) || (*(long *)(unaff_x19 + 0x150) == 0))
    goto LAB_02462450;
    plVar1 = *(long **)(*(long *)(unaff_x19 + 0x18) + 0x48);
    uVar2 = FUN_024ab728(*(long *)(unaff_x19 + 0x150),0);
    if (plVar1 == (long *)0x0) goto LAB_02462450;
    (**(code **)(*plVar1 + 0x348))(plVar1,uVar2,*(undefined8 *)(*plVar1 + 0x350));
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


