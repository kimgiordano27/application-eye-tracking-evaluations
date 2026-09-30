/*
FUNCTION_NAME: FUN_069a2318
ENTRY_POINT: 069a2318
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_069a2318(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar3 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  puVar2 = Method_Unity_Collections_NativeArray<int3>_get_IsCreated__;
                    /* try { // try from 069a2318 to 06aa2323 has its CatchHandler @ 069a2488 */
  puVar1 = PTR_DAT_07280568;
  if ((DAT_076e1e59 & 1) == 0) {
    thunk_FUN_032e1da0(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
                    /* try { // try from 069a2358 to 06aa238b has its CatchHandler @ 069a248c */
    thunk_FUN_032e1da0(Method_Unity_Collections_NativeArray<int3>_get_IsCreated__);
    thunk_FUN_032e1da0(PTR_DAT_07280568);
    DAT_076e1e59 = 1;
  }
  FUN_055eed7c(param_1,*(undefined8 *)puVar3);
                    /* try { // try from 069a238c to 06aa2473 has its CatchHandler @ 069a2138 */
  uVar4 = FUN_03b6272c(param_1,*(undefined8 *)puVar1,*(undefined8 *)puVar2);
  *(undefined8 *)(param_1 + 0xa8) = uVar4;
  thunk_FUN_0333a630((undefined8 *)(param_1 + 0xa8),uVar4);
  return;
}


