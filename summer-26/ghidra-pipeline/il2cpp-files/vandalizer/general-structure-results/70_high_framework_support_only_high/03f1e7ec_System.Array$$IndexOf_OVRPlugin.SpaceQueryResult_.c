/*
FUNCTION_NAME: System.Array$$IndexOf<OVRPlugin.SpaceQueryResult>
ENTRY_POINT: 03f1e7ec
PROGRAM: vandalizer-libil2cpp.so
SCORE: 86
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool System_Array__IndexOf<OVRPlugin_SpaceQueryResult>(long param_1)

{
  bool bVar1;
  int *unaff_x20;
  long unaff_x22;
  int unaff_w23;
  long unaff_x27;
  long unaff_x29;
  
  (*(code *)**(undefined8 **)(param_1 + 0x40))();
  if (unaff_x22 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_031f2388();
  }
  if ((unaff_w23 == 5) || (unaff_w23 == 0)) {
    bVar1 = *unaff_x20 == 0;
  }
  else {
    bVar1 = false;
  }
  if (*(long *)(unaff_x27 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


