/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Remove<OVRPlugin.SpaceDiscoveryResult>
ENTRY_POINT: 04a93e1c
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__ICollection_Remove<OVRPlugin_SpaceDiscoveryResult>
               (ulong param_1,long param_2)

{
  long lVar1;
  
                    /* try { // try from 04a93e1c to 04b93e2b has its CatchHandler @ 04a93e58 */
  if ((param_1 & 1) == 0) {
    param_2 = FUN_040b1acc();
  }
  lVar1 = *(long *)(*(long *)(param_2 + 0xc0) + 0x10);
                    /* try { // try from 04a93e34 to 04b93e3f has its CatchHandler @ 04a93e68 */
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_040b1acc();
  }
                    /* try { // try from 04a93e40 to 04b93e8b has its CatchHandler @ 04a93cc8 */
  thunk_FUN_040ec700(*(undefined8 *)(lVar1 + 0xb8));
  return;
}


