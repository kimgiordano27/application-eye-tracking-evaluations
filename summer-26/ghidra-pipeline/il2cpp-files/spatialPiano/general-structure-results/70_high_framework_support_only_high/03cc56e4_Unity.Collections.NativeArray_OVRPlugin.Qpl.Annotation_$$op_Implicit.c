/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Qpl.Annotation>$$op_Implicit
ENTRY_POINT: 03cc56e4
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


void Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__op_Implicit(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  size_t unaff_x21;
  undefined1 *unaff_x22;
  long *unaff_x23;
  uint unaff_w24;
  
  lVar1 = *(long *)(param_1 + 0xc0);
  *(uint *)(unaff_x19 + 0x18) = unaff_w24 + 1;
  if (-1 < *(int *)(*(long *)(lVar1 + 0x20) + 0x28)) {
    unaff_x22 = &stack0x00000008;
  }
  if (unaff_x23 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  if (unaff_w24 < *(uint *)(unaff_x23 + 3)) {
    memmove((void *)((long)unaff_x23 +
                    (ulong)*(uint *)(*unaff_x23 + 0x104) * (long)(int)unaff_w24 + 0x20),unaff_x22,
            unaff_x21);
    if ((*(ushort *)(*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x20) + 0x135) & 1)
        == 0) {
      FUN_02f41e9c();
    }
    if (unaff_w24 < *(uint *)(unaff_x23 + 3)) {
      *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089d0();
}


