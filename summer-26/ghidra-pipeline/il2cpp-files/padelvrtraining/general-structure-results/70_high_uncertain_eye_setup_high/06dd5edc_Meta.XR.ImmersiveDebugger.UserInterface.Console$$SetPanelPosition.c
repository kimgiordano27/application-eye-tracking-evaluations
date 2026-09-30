/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Console$$SetPanelPosition
ENTRY_POINT: 06dd5edc
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Console__SetPanelPosition(long param_1)

{
  int iVar1;
  long *unaff_x24;
  
  if (param_1 != 0) {
    iVar1 = (**(code **)(*unaff_x24 + 0x178))();
    while (iVar1 != 0) {
      (**(code **)(*unaff_x24 + 0x188))();
      iVar1 = (**(code **)(*unaff_x24 + 0x178))();
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


