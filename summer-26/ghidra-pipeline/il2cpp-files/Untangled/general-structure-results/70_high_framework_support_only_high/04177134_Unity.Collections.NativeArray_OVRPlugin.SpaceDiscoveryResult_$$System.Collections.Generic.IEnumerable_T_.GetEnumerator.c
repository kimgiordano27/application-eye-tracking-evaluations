/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$System.Collections.Generic.IEnumerable<T>.GetEnumerator
ENTRY_POINT: 04177134
PROGRAM: Untangled-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__System_Collections_Generic_IEnumerable<T>_GetEnumerator
               (undefined8 param_1,long param_2)

{
  long *unaff_x19;
  
                    /* catch(type#1 @ 069384f8) { ... } // from try @ 041770e0 with catch @ 04177144
                       try { // try from 04177144 to 0427715b has its CatchHandler @ 04177098 */
  if (*(long *)(*unaff_x19 + 0x40) == *(long *)(param_2 + 0x40)) {
    thunk_FUN_02ef195c();
                    /* try { // try from 0417715c to 04277173 has its CatchHandler @ 041771e8 */
                    /* try { // try from 04177174 to 042771d7 has its CatchHandler @ 04177098 */
    FUN_04176fc0();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f08440();
}


