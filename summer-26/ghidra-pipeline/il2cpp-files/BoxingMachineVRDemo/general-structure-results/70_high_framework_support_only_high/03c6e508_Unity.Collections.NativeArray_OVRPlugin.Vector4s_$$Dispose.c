/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4s>$$Dispose
ENTRY_POINT: 03c6e508
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_6;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x03c6e4a0) */

void Unity_Collections_NativeArray<OVRPlugin_Vector4s>__Dispose(void)

{
  long unaff_x20;
  undefined8 *unaff_x25;
  undefined8 in_stack_00000088;
  
  FUN_04a68d10(&stack0x00000030,*unaff_x25);
  if (unaff_x20 == 0) {
    if (in_stack_00000088._4_1_ != '\0') {
      thunk_FUN_02d6ec70();
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae0();
}


