/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector3f>$$System.Collections.IEnumerable.GetEnumerator
ENTRY_POINT: 05ea64f0
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined1  [16]
Unity_Collections_NativeArray<OVRPlugin_Vector3f>__System_Collections_IEnumerable_GetEnumerator
          (void)

{
  uint unaff_w19;
  long unaff_x20;
  long unaff_x21;
  uint unaff_w22;
  long unaff_x23;
  undefined1 auVar1 [16];
  
  if ((unaff_w22 < (uint)unaff_x20) || (unaff_w22 - (uint)unaff_x20 < unaff_w19)) {
    FUN_0769a508(0);
  }
  if ((*(ushort *)(*(long *)(unaff_x23 + 0x20) + 0x135) & 1) == 0) {
    FUN_040b1acc();
  }
  auVar1._8_4_ = unaff_w19;
  auVar1._0_8_ = unaff_x21 + unaff_x20;
  auVar1._12_4_ = 0;
  return auVar1;
}


