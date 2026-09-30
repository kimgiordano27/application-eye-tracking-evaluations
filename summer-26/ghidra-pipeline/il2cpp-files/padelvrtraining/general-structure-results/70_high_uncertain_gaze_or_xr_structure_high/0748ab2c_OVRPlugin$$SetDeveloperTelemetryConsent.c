/*
FUNCTION_NAME: OVRPlugin$$SetDeveloperTelemetryConsent
ENTRY_POINT: 0748ab2c
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 85
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin__SetDeveloperTelemetryConsent(ulong param_1,long param_2)

{
  undefined *puVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long unaff_x21;
  long lVar5;
  
  if ((param_1 & 1) == 0) {
    FUN_03d2d2b0(PTR_DAT_091a0cb0);
    *(undefined1 *)(unaff_x21 + 0xa7f) = 1;
  }
  puVar1 = PTR_DAT_091a0cb0;
  lVar5 = *(long *)(param_2 + 0x70);
  while ((plVar3 = (long *)FUN_071bfe60(lVar5), plVar3 == (long *)0x0 ||
         (*plVar3 == *(long *)puVar1))) {
    lVar4 = FUN_03d703d8((long *)(param_2 + 0x70),plVar3,lVar5);
    bVar2 = lVar5 == lVar4;
    lVar5 = lVar4;
    if (bVar2) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03d2d8e4(plVar3);
}


