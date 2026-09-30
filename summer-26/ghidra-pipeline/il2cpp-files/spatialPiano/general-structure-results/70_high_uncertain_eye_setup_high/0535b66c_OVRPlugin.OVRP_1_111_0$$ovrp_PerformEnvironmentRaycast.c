/*
FUNCTION_NAME: OVRPlugin.OVRP_1_111_0$$ovrp_PerformEnvironmentRaycast
ENTRY_POINT: 0535b66c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 73
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;ray_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_111_0__ovrp_PerformEnvironmentRaycast(void)

{
  code *pcVar1;
  long unaff_x20;
  
  pcVar1 = *(code **)(unaff_x20 + 0xdd0);
  if (pcVar1 == (code *)0x0) {
                    /* catch(type#1 @ 06402238) { ... } // from try @ 0535b5ec with catch @ 0535b69c
                        */
                    /* catch(type#1 @ 06402238) { ... } // from try @ 0535b5d0 with catch @ 0535b6a0
                        */
    pcVar1 = (code *)thunk_FUN_02f454a0();
    *(code **)(unaff_x20 + 0xdd0) = pcVar1;
  }
                    /* try { // try from 0535b6bc to 0545b6bf has its CatchHandler @ 0535b6d8 */
                    /* try { // try from 0535b6c0 to 0545b6db has its CatchHandler @ 0535b074 */
  (*pcVar1)();
  return;
}


