/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$Copy
ENTRY_POINT: 04c3e2e4
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 94
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


long Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__Copy(void)

{
  long lVar1;
  long unaff_x19;
  undefined4 unaff_s8;
  undefined4 unaff_s9;
  
  thunk_FUN_03798b70();
  lVar1 = *(long *)(unaff_x19 + 0x20);
                    /* catch(type#1 @ 078dda18) { ... } // from try @ 04c3e26c with catch @ 04c3e2ec
                       try { // try from 04c3e2ec to 04d3e303 has its CatchHandler @ 04c3e220 */
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_03775678();
  }
  lVar1 = FUN_0440a6e8(*(undefined8 *)(*(long *)(lVar1 + 0xc0) + 0x58));
                    /* try { // try from 04c3e304 to 04d3e31b has its CatchHandler @ 04c3e394 */
  if (lVar1 != 0) {
    if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
      FUN_03775678();
    }
                    /* try { // try from 04c3e31c to 04d3e383 has its CatchHandler @ 04c3e220 */
    *(undefined4 *)(lVar1 + 0x68) = unaff_s9;
    *(undefined4 *)(lVar1 + 0x6c) = unaff_s8;
    if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
      FUN_03775678();
    }
    *(undefined4 *)(lVar1 + 0x70) = unaff_s9;
    *(undefined4 *)(lVar1 + 0x74) = unaff_s8;
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


