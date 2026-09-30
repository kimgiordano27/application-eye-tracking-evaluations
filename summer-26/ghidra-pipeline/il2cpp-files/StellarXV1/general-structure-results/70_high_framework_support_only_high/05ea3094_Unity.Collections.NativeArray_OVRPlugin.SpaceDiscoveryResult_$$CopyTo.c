/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$CopyTo
ENTRY_POINT: 05ea3094
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__CopyTo
               (long param_1,long param_2)

{
  long lVar1;
  long unaff_x20;
  undefined8 unaff_x22;
  long *unaff_x25;
  
                    /* try { // try from 05ea3094 to 05fa30a3 has its CatchHandler @ 05ea30f4 */
  *(undefined8 *)(param_1 + 0x10) = unaff_x22;
  if ((*(ushort *)(param_2 + 0x135) & 1) == 0) {
    param_2 = FUN_040b1acc();
  }
  lVar1 = *(long *)(*(long *)(param_2 + 0xc0) + 0x30);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_040b1acc();
  }
                    /* try { // try from 05ea30c0 to 05fa30d7 has its CatchHandler @ 05ea30f8 */
  thunk_FUN_040ec700(*(long *)(lVar1 + 0xb8) + 0x10);
                    /* try { // try from 05ea30d8 to 05fa310f has its CatchHandler @ 05ea302c */
  if (*(int *)(*unaff_x25 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  if ((*(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
    FUN_040b1acc();
  }
  FUN_04fd9b00();
  return;
}


