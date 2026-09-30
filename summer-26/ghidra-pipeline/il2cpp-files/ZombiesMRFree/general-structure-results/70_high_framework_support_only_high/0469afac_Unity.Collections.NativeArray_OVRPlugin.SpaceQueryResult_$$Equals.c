/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$Equals
ENTRY_POINT: 0469afac
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__Equals(void)

{
  undefined4 *puVar1;
  int unaff_w19;
  long unaff_x20;
  undefined4 unaff_s8;
  undefined4 unaff_s9;
  undefined4 unaff_s10;
  undefined4 unaff_s11;
  
  puVar1 = (undefined4 *)(unaff_x20 + (long)unaff_w19 * 0x10);
  puVar1[2] = unaff_s9;
  puVar1[3] = unaff_s8;
                    /* try { // try from 0469afc0 to 0479afe7 has its CatchHandler @ 0469affc */
  *puVar1 = unaff_s11;
  puVar1[1] = unaff_s10;
  return;
}


