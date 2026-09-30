/*
FUNCTION_NAME: Oculus.Movement.Utils.RequestMicrophonePermissions.<Start>d__4$$System.IDisposable.Dispose
ENTRY_POINT: 06c236a0
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Oculus_Movement_Utils_RequestMicrophonePermissions_<Start>d__4__System_IDisposable_Dispose
               (void)

{
  undefined8 uVar1;
  long *unaff_x21;
  undefined8 *unaff_x22;
  long unaff_x23;
  
  *(undefined1 *)(unaff_x23 + 0xfcf) = 1;
  FUN_06c232e8();
  FUN_070549b4();
  uVar1 = FUN_06f683f8(*unaff_x22);
  if (*(int *)(*unaff_x21 + 0xe0) == 0) {
    thunk_FUN_03cd7500(*unaff_x21);
  }
  FUN_085a3c50(uVar1,0);
  return;
}


