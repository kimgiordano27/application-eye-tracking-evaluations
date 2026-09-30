/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Dropdown.<UpdateScrollPosition>d__24$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 052da61c
PROGRAM: Untangled-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_Dropdown_<UpdateScrollPosition>d__24__System_Collections_IEnumerator_get_Current
               (long param_1)

{
  long lVar1;
  long unaff_x19;
  
  if (((*(long *)(unaff_x19 + 0x130) != 0) &&
      (lVar1 = *(long *)(*(long *)(unaff_x19 + 0x130) + 0x48), lVar1 != 0)) &&
     (FUN_066d48c0(lVar1,0), param_1 != 0)) {
    FUN_066d6014(param_1,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


