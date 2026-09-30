/*
FUNCTION_NAME: OVRPlugin$$SetDeveloperTelemetryConsent
ENTRY_POINT: 073f4034
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 113
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;paired_field_refs_with_eye_source;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin__SetDeveloperTelemetryConsent(long param_1)

{
  ulong uVar1;
  long lVar2;
  long unaff_x19;
  undefined8 uVar3;
  long *unaff_x21;
  
  if (*(int *)(param_1 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  uVar1 = FUN_085decd4();
  if ((uVar1 & 1) != 0) {
    if ((*(long *)(unaff_x19 + 0x50) == 0) ||
       (lVar2 = FUN_085dbb98(*(long *)(unaff_x19 + 0x50),0), lVar2 == 0)) goto LAB_073f40d0;
    FUN_085deedc(lVar2,1,0);
  }
  uVar3 = *(undefined8 *)(unaff_x19 + 0x58);
  if (*(int *)(*unaff_x21 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  uVar1 = FUN_085decd4(uVar3,0,0);
  if ((uVar1 & 1) == 0) {
    return;
  }
  if ((*(long *)(unaff_x19 + 0x58) != 0) &&
     (lVar2 = FUN_085dbb98(*(long *)(unaff_x19 + 0x58),0), lVar2 != 0)) {
    FUN_085deedc(lVar2,0,0);
    return;
  }
LAB_073f40d0:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


