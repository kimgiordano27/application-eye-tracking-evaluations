/*
FUNCTION_NAME: Meta.XR.BuildingBlocks.ControllerButtonsMapper$$Update
ENTRY_POINT: 05a8e1fc
PROGRAM: vandalizer-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


bool Meta_XR_BuildingBlocks_ControllerButtonsMapper__Update(long param_1)

{
  int in_w9;
  long lVar1;
  uint in_w11;
  uint uVar2;
  long unaff_x19;
  uint unaff_w20;
  undefined8 uVar3;
  
  do {
    uVar2 = in_w11;
    if (unaff_w20 <= uVar2) {
      *(uint *)(unaff_x19 + 8) = unaff_w20 + 1;
      *(undefined8 *)(unaff_x19 + 0x10) = 0;
      *(undefined8 *)(unaff_x19 + 0x18) = 0;
      goto LAB_05a8e268;
    }
    lVar1 = *(long *)(param_1 + 0x18);
    *(uint *)(unaff_x19 + 8) = uVar2 + 1;
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_031f2390();
    }
    if (*(uint *)(lVar1 + 0x18) <= uVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_031f2398();
    }
    in_w11 = uVar2 + 1;
  } while (*(int *)(lVar1 + (long)(int)uVar2 * (long)in_w9 + 0x20) < 0);
  lVar1 = lVar1 + (long)(int)uVar2 * 0x58;
  uVar3 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(unaff_x19 + 0x18) = *(undefined8 *)(lVar1 + 0x30);
  *(undefined8 *)(unaff_x19 + 0x10) = uVar3;
  thunk_FUN_0329bf60(unaff_x19 + 0x18,0);
LAB_05a8e268:
  return uVar2 < unaff_w20;
}


