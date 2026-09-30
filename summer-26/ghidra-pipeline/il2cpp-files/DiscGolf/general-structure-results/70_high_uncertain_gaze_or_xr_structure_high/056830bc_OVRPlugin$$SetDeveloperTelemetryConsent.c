/*
FUNCTION_NAME: OVRPlugin$$SetDeveloperTelemetryConsent
ENTRY_POINT: 056830bc
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


void OVRPlugin__SetDeveloperTelemetryConsent(void)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  long unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  
  while ((plVar2 = (long *)FUN_0552e2e4(unaff_x20), plVar2 == (long *)0x0 || (*plVar2 == *unaff_x22)
         )) {
    lVar3 = FUN_02dcf89c(*(long *)(*unaff_x21 + 0xb8) + 8,plVar2,unaff_x20);
    bVar1 = lVar3 == unaff_x20;
    unaff_x20 = lVar3;
    if (bVar1) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96be0(plVar2);
}


