/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly.Enumerator<OVRPlugin.SpaceDiscoveryResult>$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 02b756a8
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 145
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ray_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;ray_or_cast_sink_hits_1;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray_ReadOnly_Enumerator<OVRPlugin_SpaceDiscoveryResult>__System_Collections_IEnumerator_get_Current
               (long param_1)

{
  long lVar1;
  
  if (*(int *)(param_1 + 0xe0) == 0) {
                    /* try { // try from 02b756b0 to 02c756bf has its CatchHandler @ 02b756c0 */
    thunk_FUN_01dc4f30();
  }
  lVar1 = OVR_OpenVR_IVRChaperoneSetup__SetWorkingCollisionBoundsTagsInfo___ctor(0);
  if (lVar1 != 0) {
                    /* catch() { ... } // from try @ 02b75630 with catch @ 02b756c0
                       catch() { ... } // from try @ 02b756b0 with catch @ 02b756c0 */
                    /* try { // try from 02b756c4 to 02c756c7 has its CatchHandler @ 02b756d0 */
                    /* try { // try from 02b756c8 to 02c756d3 has its CatchHandler @ 02b75428 */
                    /* catch() { ... } // from try @ 02b75614 with catch @ 02b756d0
                       catch() { ... } // from try @ 02b756c4 with catch @ 02b756d0 */
    FUN_029bf610();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01d7db70();
}


