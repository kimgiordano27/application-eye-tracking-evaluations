/*
FUNCTION_NAME: System.ReadOnlySpan<OVRPlugin.SpaceDiscoveryResult>$$ToArray
ENTRY_POINT: 045c225c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 94
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined4
System_ReadOnlySpan<OVRPlugin_SpaceDiscoveryResult>__ToArray(double param_1,double param_2)

{
  long unaff_x19;
  
                    /* catch(type#1 @ 066567d8) { ... } // from try @ 045c2118 with catch @ 045c225c
                        */
                    /* catch(type#1 @ 066567d8) { ... } // from try @ 045c20b4 with catch @ 045c2260
                        */
  if (param_1 < param_2) {
    FUN_04ba82d4(*(undefined4 *)(unaff_x19 + 0x88));
                    /* try { // try from 045c227c to 046c227f has its CatchHandler @ 045c2288 */
  }
  *(undefined4 *)(unaff_x19 + 0xac) = 0;
  return *(undefined4 *)(unaff_x19 + 0x88);
}


