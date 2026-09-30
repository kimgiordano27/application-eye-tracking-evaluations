/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly.Enumerator<OVRPlugin.SpaceDiscoveryResult>$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 05cd707c
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray_ReadOnly_Enumerator<OVRPlugin_SpaceDiscoveryResult>__System_Collections_IEnumerator_get_Current
               (long param_1)

{
  long lVar1;
  
                    /* try { // try from 05cd7080 to 05dd708b has its CatchHandler @ 05cd7098 */
  lVar1 = *(long *)(*(long *)(param_1 + 0xc0) + 0x20);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
                    /* try { // try from 05cd708c to 05dd7097 has its CatchHandler @ 05cd70a4 */
    lVar1 = FUN_03775678();
  }
                    /* catch() { ... } // from try @ 05cd6fd4 with catch @ 05cd7098
                       catch() { ... } // from try @ 05cd7080 with catch @ 05cd7098
                       try { // try from 05cd7098 to 05dd70bf has its CatchHandler @ 05cd6f80 */
  thunk_FUN_037aeb94(*(undefined8 *)(lVar1 + 0xb8));
  return;
}


