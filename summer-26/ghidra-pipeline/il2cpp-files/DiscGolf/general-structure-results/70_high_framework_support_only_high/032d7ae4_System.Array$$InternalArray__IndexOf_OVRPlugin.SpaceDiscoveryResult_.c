/*
FUNCTION_NAME: System.Array$$InternalArray__IndexOf<OVRPlugin.SpaceDiscoveryResult>
ENTRY_POINT: 032d7ae4
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 System_Array__InternalArray__IndexOf<OVRPlugin_SpaceDiscoveryResult>(long param_1)

{
  long lVar1;
  long unaff_x19;
  
  if (*(int *)(param_1 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  lVar1 = *(long *)(*(long *)(unaff_x19 + 0x38) + 8);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_02dcfd18();
  }
                    /* try { // try from 032d7b0c to 033d7b0f has its CatchHandler @ 032d8088 */
                    /* try { // try from 032d7b10 to 033d7b13 has its CatchHandler @ 032d8084 */
                    /* try { // try from 032d7b14 to 033d7b17 has its CatchHandler @ 032d8074 */
                    /* try { // try from 032d7b18 to 033d7b1b has its CatchHandler @ 032d805c */
                    /* try { // try from 032d7b1c to 033d7b1f has its CatchHandler @ 032d8058 */
  return **(undefined8 **)(lVar1 + 0xb8);
}


