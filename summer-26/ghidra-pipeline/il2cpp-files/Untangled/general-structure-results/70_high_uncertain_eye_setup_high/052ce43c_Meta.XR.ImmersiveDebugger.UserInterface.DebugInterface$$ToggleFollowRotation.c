/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.DebugInterface$$ToggleFollowRotation
ENTRY_POINT: 052ce43c
PROGRAM: Untangled-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_DebugInterface__ToggleFollowRotation
               (undefined8 param_1,long param_2)

{
  long *plVar1;
  
  if ((param_2 != 0) && (plVar1 = *(long **)(param_2 + 0x1e8), plVar1 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x052ce45c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x328))(plVar1,*(undefined8 *)(*plVar1 + 0x330));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


