/*
FUNCTION_NAME: Unity.Services.Analytics.CustomEvent.<GetEnumerator>d__4$$System.IDisposable.Dispose
ENTRY_POINT: 05ab3874
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


uint Unity_Services_Analytics_CustomEvent_<GetEnumerator>d__4__System_IDisposable_Dispose
               (float param_1)

{
  uint uVar1;
  
  uVar1 = (uint)((param_1 + 1.0) * 127.0 + 0.5);
  if (param_1 < 0.0) {
    if (0x7d < uVar1) {
      uVar1 = 0x7e;
    }
    return uVar1;
  }
  if (0xfd < uVar1) {
    uVar1 = 0xfe;
  }
  if (uVar1 < 0x81) {
    uVar1 = 0x80;
  }
  return uVar1;
}


