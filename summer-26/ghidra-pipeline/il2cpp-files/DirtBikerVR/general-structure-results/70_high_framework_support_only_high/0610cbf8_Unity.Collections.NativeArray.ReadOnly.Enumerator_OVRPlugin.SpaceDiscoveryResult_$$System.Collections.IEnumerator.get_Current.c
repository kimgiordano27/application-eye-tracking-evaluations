/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly.Enumerator<OVRPlugin.SpaceDiscoveryResult>$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 0610cbf8
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


void Unity_Collections_NativeArray_ReadOnly_Enumerator<OVRPlugin_SpaceDiscoveryResult>__System_Collections_IEnumerator_get_Current
               (ulong param_1,long param_2)

{
  long lVar1;
  
  if ((param_1 & 1) == 0) {
    param_2 = FUN_03ac4090();
  }
  lVar1 = *(long *)(*(long *)(param_2 + 0xc0) + 0x20);
                    /* try { // try from 0610cc08 to 0620cc63 has its CatchHandler @ 0610cc08
                       catch() { ... } // from try @ 0610cc08 with catch @ 0610cc08
                       catch() { ... } // from try @ 0610cd40 with catch @ 0610cc08
                       catch() { ... } // from try @ 0610cdc8 with catch @ 0610cc08
                       catch() { ... } // from try @ 0610ce08 with catch @ 0610cc08
                       catch() { ... } // from try @ 0610ce34 with catch @ 0610cc08
                       catch() { ... } // from try @ 0610ceb4 with catch @ 0610cc08 */
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_03ac4090();
  }
  thunk_FUN_03afed3c(*(undefined8 *)(lVar1 + 0xb8));
  return;
}


