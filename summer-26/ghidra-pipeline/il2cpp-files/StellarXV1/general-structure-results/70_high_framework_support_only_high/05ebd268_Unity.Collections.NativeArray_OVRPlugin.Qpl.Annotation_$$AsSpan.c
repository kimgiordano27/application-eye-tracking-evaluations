/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Qpl.Annotation>$$AsSpan
ENTRY_POINT: 05ebd268
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


void Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__AsSpan
               (long param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  long *unaff_x19;
  
                    /* try { // try from 05ebd26c to 05fbd283 has its CatchHandler @ 05ebd31c */
  uVar1 = FUN_069ab908(param_2,*(undefined8 *)(param_1 + 200));
  if (((uVar1 & 1) != 0) && (*(char *)((long)unaff_x19 + 0x59) == '\0')) {
                    /* try { // try from 05ebd298 to 05fbd2af has its CatchHandler @ 05ebd31c */
    lVar2 = FUN_05ebb9c8();
    if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x05ebd2b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*unaff_x19 + 0x488))();
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x05ebd2e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*unaff_x19 + 0x2c8))();
    return;
  }
                    /* try { // try from 05ebd284 to 05fbd297 has its CatchHandler @ 05ebd0c0 */
  return;
}


