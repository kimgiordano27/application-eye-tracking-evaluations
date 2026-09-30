/*
FUNCTION_NAME: OVRPlugin$$StartColocationSessionAdvertisement
ENTRY_POINT: 05330624
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 104
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_2
*/


bool OVRPlugin__StartColocationSessionAdvertisement(void)

{
  bool bVar1;
  bool bVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float unaff_s9;
  float unaff_s10;
  float unaff_s12;
  float unaff_s13;
  float unaff_s14;
  float unaff_s15;
  undefined8 in_stack_00000008;
  float in_stack_00000010;
  
  fVar4 = (float)FUN_060dfb18(0);
  if (DAT_06bb42bf == '\0') {
    FUN_02f08768(PTR_DAT_067c8f80);
    DAT_06bb42bf = '\x01';
  }
  if (*(int *)(*(long *)PTR_DAT_067c8f80 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  fVar5 = SQRT(unaff_s10 * unaff_s10 + fVar4 * fVar4 + unaff_s9 * unaff_s9);
  if (fVar5 <= DAT_011b06e4) {
    if (DAT_06bb42c1 == '\0') {
      FUN_02f08768(PTR_DAT_067c8f78);
      DAT_06bb42c1 = '\x01';
    }
    pfVar3 = *(float **)(*(long *)PTR_DAT_067c8f78 + 0xb8);
    fVar4 = *pfVar3;
    unaff_s9 = pfVar3[1];
    unaff_s10 = pfVar3[2];
  }
  else {
    fVar4 = fVar4 / fVar5;
    unaff_s9 = unaff_s9 / fVar5;
    unaff_s10 = unaff_s10 / fVar5;
  }
  fVar6 = unaff_s13 * unaff_s10 + unaff_s15 * fVar4 + unaff_s12 * unaff_s9;
  fVar4 = in_stack_00000010 * unaff_s10 + in_stack_00000008._4_4_ * fVar4 + unaff_s14 * unaff_s9;
  fVar5 = fVar4 - fVar6;
  bVar1 = true;
  if ((ABS(fVar4 - fVar6) < DAT_011b018c) && (bVar1 = false, !NAN(fVar5))) {
    bVar1 = fVar5 == 0.0;
  }
  bVar2 = true;
  if ((!bVar1) && (bVar2 = true, !NAN(fVar5))) {
    bVar2 = false;
  }
  return !bVar2;
}


