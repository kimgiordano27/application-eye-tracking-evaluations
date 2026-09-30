/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$ToArray
ENTRY_POINT: 059cdae0
PROGRAM: m3ar-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ToArray(ulong param_1,long param_2)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  if ((param_1 & 1) == 0) {
    param_2 = FUN_0406aaec();
  }
  if (*(int *)(param_2 + 0xe4) == 0) {
                    /* try { // try from 059cdaf0 to 05acdaf7 has its CatchHandler @ 059cdbe0 */
    thunk_FUN_0408f364();
  }
  lVar1 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x10);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_0406aaec();
  }
  *(undefined8 *)(unaff_x19 + 0x10) = **(undefined8 **)(lVar1 + 0xb8);
                    /* try { // try from 059cdb34 to 05acdb37 has its CatchHandler @ 059cdbec */
                    /* try { // try from 059cdb38 to 05acdbc3 has its CatchHandler @ 059cd8ec */
  FUN_059cffe8();
  return;
}


