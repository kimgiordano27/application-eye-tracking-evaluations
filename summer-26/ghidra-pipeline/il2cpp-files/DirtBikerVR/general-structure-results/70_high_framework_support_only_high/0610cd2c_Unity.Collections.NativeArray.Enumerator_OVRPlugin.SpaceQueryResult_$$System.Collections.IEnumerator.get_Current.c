/*
FUNCTION_NAME: Unity.Collections.NativeArray.Enumerator<OVRPlugin.SpaceQueryResult>$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 0610cd2c
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray_Enumerator<OVRPlugin_SpaceQueryResult>__System_Collections_IEnumerator_get_Current
               (void)

{
  long lVar1;
  long lVar2;
  long unaff_x19;
  undefined8 unaff_x20;
  
  lVar1 = FUN_03ac4090();
                    /* try { // try from 0610cd34 to 0620cd3f has its CatchHandler @ 0610cd4c */
  lVar2 = *(long *)(unaff_x19 + 0x20);
  **(undefined8 **)(lVar1 + 0xb8) = unaff_x20;
                    /* catch() { ... } // from try @ 0610cc64 with catch @ 0610cd40
                       catch() { ... } // from try @ 0610cd28 with catch @ 0610cd40
                       try { // try from 0610cd40 to 0620cd67 has its CatchHandler @ 0610cc08 */
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_03ac4090();
  }
                    /* catch() { ... } // from try @ 0610ccac with catch @ 0610cd4c
                       catch() { ... } // from try @ 0610cd34 with catch @ 0610cd4c */
  lVar1 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x20);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_03ac4090();
  }
                    /* try { // try from 0610cd68 to 0620cd7f has its CatchHandler @ 0610cdfc */
  thunk_FUN_03afed3c(*(undefined8 *)(lVar1 + 0xb8));
  return;
}


