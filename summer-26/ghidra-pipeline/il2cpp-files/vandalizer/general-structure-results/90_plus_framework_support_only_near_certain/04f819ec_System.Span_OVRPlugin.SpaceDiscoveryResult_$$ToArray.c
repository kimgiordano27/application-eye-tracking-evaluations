/*
FUNCTION_NAME: System.Span<OVRPlugin.SpaceDiscoveryResult>$$ToArray
ENTRY_POINT: 04f819ec
PROGRAM: vandalizer-libil2cpp.so
SCORE: 94
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined1  [16] System_Span<OVRPlugin_SpaceDiscoveryResult>__ToArray(void)

{
  long lVar1;
  uint unaff_w19;
  long unaff_x20;
  undefined8 unaff_x21;
  undefined1 auVar2 [16];
  
  if (unaff_x20 == 0) {
                    /* catch() { ... } // from try @ 04f819fc with catch @ 04f81a48
                       catch() { ... } // from try @ 04f81a38 with catch @ 04f81a48 */
                    /* try { // try from 04f81a4c to 05081a4f has its CatchHandler @ 04f81a58 */
    if ((uint)unaff_x21 != 0 || unaff_w19 != 0) {
                    /* try { // try from 04f81a50 to 05081a5b has its CatchHandler @ 04f815c8 */
      FUN_05e21fe0(0);
    }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 04f81a4c with catch @ 04f81a58
                        */
    unaff_x21 = 0;
    lVar1 = 0;
  }
  else {
                    /* try { // try from 04f819fc to 05081a13 has its CatchHandler @ 04f81a48 */
    if ((*(uint *)(unaff_x20 + 0x18) < unaff_w19) ||
       (*(uint *)(unaff_x20 + 0x18) - unaff_w19 < (uint)unaff_x21)) {
      FUN_05e21fe0(0);
    }
                    /* try { // try from 04f81a14 to 05081a37 has its CatchHandler @ 04f815c8 */
    lVar1 = unaff_x20 + ((long)((ulong)unaff_w19 << 0x20) >> 0x1d) + 0x20;
  }
  auVar2._8_8_ = unaff_x21;
  auVar2._0_8_ = lVar1;
  return auVar2;
}


