/*
FUNCTION_NAME: OVRPlugin.UnifiedConsent$$ShouldShowTelemetryNotification
ENTRY_POINT: 056995a0
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 85
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin_UnifiedConsent__ShouldShowTelemetryNotification(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  long *unaff_x21;
  
  FUN_05699604();
                    /* catch(type#1 @ 066567d8) { ... } // from try @ 056994cc with catch @ 056995a4
                        */
                    /* catch(type#1 @ 066567d8) { ... } // from try @ 056994f8 with catch @ 056995a8
                        */
  uVar1 = thunk_FUN_02dd2d7c(*unaff_x20);
                    /* try { // try from 056995c0 to 057995d7 has its CatchHandler @ 05699698 */
  if (*(int *)(*unaff_x21 + 0xe4) == 0) {
    thunk_FUN_02df485c(*unaff_x21);
  }
                    /* try { // try from 056995d8 to 05799687 has its CatchHandler @ 05699398 */
  FUN_05520f50(uVar1,0);
  return;
}


