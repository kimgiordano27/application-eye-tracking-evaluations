/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Qpl.Annotation>$$AsReadOnly
ENTRY_POINT: 03cc55c4
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 80
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__AsReadOnly
               (long param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  long unaff_x19;
  long unaff_x20;
  uint unaff_w21;
  long *unaff_x22;
  
  if (-1 < *(int *)(*(long *)(param_1 + 0x20) + 0x28)) {
    param_4 = &stack0x00000008;
  }
  if (unaff_x22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  if (unaff_w21 < *(uint *)(unaff_x22 + 3)) {
    memmove((void *)((long)unaff_x22 +
                    (ulong)*(uint *)(*unaff_x22 + 0x104) * (long)(int)unaff_w21 + 0x20),param_4,
            (ulong)*(uint *)(*(long *)(param_1 + 0x20) + 0xfc));
    if ((*(ushort *)(*(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x20) + 0x135) & 1)
        == 0) {
      FUN_02f41e9c();
    }
    if (unaff_w21 < *(uint *)(unaff_x22 + 3)) {
      *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089d0();
}


