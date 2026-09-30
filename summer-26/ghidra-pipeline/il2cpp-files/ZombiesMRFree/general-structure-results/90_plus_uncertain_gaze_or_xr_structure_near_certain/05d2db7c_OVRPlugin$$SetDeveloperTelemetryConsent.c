/*
FUNCTION_NAME: OVRPlugin$$SetDeveloperTelemetryConsent
ENTRY_POINT: 05d2db7c
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 101
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin__SetDeveloperTelemetryConsent(long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int in_w8;
  long unaff_x19;
  undefined8 uVar3;
  long *unaff_x22;
  
  if (in_w8 == 0) {
    thunk_FUN_02fdcff0();
    param_1 = *unaff_x22;
  }
  uVar3 = **(undefined8 **)(param_1 + 0xb8);
  uVar1 = thunk_FUN_0301080c(*(undefined8 *)PTR_DAT_06f73f20);
  FUN_05a645d0(uVar1,uVar3,*(undefined8 *)PTR_DAT_06fb8d98,0);
  puVar2 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 8);
  *puVar2 = uVar1;
  thunk_FUN_03048534(puVar2,uVar1);
  if (unaff_x19 != 0) {
    *(undefined8 *)(unaff_x19 + 0x20) = uVar1;
    thunk_FUN_03048534((undefined8 *)(unaff_x19 + 0x20),uVar1);
    *(undefined1 *)(unaff_x19 + 0x38) = 1;
    thunk_FUN_068f530c();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


