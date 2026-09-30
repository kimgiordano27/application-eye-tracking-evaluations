/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_CopyTo<OVRPlugin.SpaceDiscoveryResult>
ENTRY_POINT: 041824a8
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 86
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__ICollection_CopyTo<OVRPlugin_SpaceDiscoveryResult>(long param_1)

{
  long lVar1;
  long unaff_x20;
  
                    /* try { // try from 041824ac to 042824b3 has its CatchHandler @ 04182720 */
  if (param_1 == 0) {
    lVar1 = *(long *)(unaff_x20 + 0x20);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
                    /* try { // try from 041824bc to 042824c7 has its CatchHandler @ 0418271c */
      lVar1 = FUN_03cf1244();
    }
    lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x10);
                    /* try { // try from 041824c8 to 042824d3 has its CatchHandler @ 041826d0 */
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_03cf1244();
    }
    if (*(int *)(lVar1 + 0xe0) == 0) {
                    /* try { // try from 041824dc to 042824e7 has its CatchHandler @ 04182718 */
      thunk_FUN_03cd7500();
    }
    if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
      FUN_03cf1244();
    }
                    /* try { // try from 041824f8 to 04282503 has its CatchHandler @ 04182690 */
    FUN_063c75a4();
    thunk_FUN_03cf4e64(*(undefined8 *)(*(long *)(unaff_x20 + 0x38) + 8));
    FUN_0701e7b4();
  }
  FUN_05ac7d68();
  return;
}


