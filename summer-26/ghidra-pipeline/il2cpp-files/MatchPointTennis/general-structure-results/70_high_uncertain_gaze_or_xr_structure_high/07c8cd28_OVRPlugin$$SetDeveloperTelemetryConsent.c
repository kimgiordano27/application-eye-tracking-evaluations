/*
FUNCTION_NAME: OVRPlugin$$SetDeveloperTelemetryConsent
ENTRY_POINT: 07c8cd28
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 85
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin__SetDeveloperTelemetryConsent(long *param_1)

{
  byte bVar1;
  long *plVar2;
  long lVar3;
  long *unaff_x19;
  long unaff_x20;
  
  lVar3 = *param_1;
  bVar1 = *(byte *)(lVar3 + 0x130);
  if (*(byte *)(*unaff_x19 + 0x130) < bVar1) {
    plVar2 = (long *)0x0;
  }
  else {
                    /* try { // try from 07c8cd60 to 07d8cd87 has its CatchHandler @ 07c8cd9c */
    plVar2 = unaff_x19;
    if (*(long *)(*(long *)(*unaff_x19 + 200) + (ulong)bVar1 * 8 + -8) != lVar3) {
      plVar2 = (long *)0x0;
    }
  }
  *(undefined8 *)(unaff_x20 + 0x28) = plVar2;
  if (*(byte *)(*unaff_x19 + 0x130) < bVar1) {
    plVar2 = (long *)0x0;
                    /* try { // try from 07c8cd88 to 07d8cd93 has its CatchHandler @ 07c8c838 */
  }
  else {
                    /* try { // try from 07c8cd94 to 07d8cd9b has its CatchHandler @ 07c8cd9c */
    plVar2 = unaff_x19;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 07c8cd60 with catch @ 07c8cd9c
                       catch(type#2 @ 00000000) { ... } // from try @ 07c8cd94 with catch @ 07c8cd9c
                        */
    if (*(long *)(*(long *)(*unaff_x19 + 200) + (ulong)bVar1 * 8 + -8) != lVar3) {
      plVar2 = (long *)0x0;
    }
  }
  thunk_FUN_044bb4b4((undefined8 *)(unaff_x20 + 0x28),plVar2);
  *(undefined8 *)(unaff_x20 + 0x30) = unaff_x19;
  thunk_FUN_044bb4b4((undefined8 *)(unaff_x20 + 0x30));
  return;
}


