/*
FUNCTION_NAME: OVRPlugin$$StopColocationSessionAdvertisement
ENTRY_POINT: 053306f8
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 85
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


bool OVRPlugin__StopColocationSessionAdvertisement(void)

{
  bool bVar1;
  bool bVar2;
  float *pfVar3;
  long unaff_x19;
  float fVar4;
  float fVar5;
  float fVar6;
  float unaff_s12;
  float unaff_s13;
  float unaff_s14;
  float unaff_s15;
  undefined8 in_stack_00000008;
  float in_stack_00000010;
  
  FUN_02f08768();
  *(undefined1 *)(unaff_x19 + 0x2c1) = 1;
  pfVar3 = *(float **)(*(long *)PTR_DAT_067c8f78 + 0xb8);
  fVar6 = unaff_s13 * pfVar3[2] + unaff_s15 * *pfVar3 + unaff_s12 * pfVar3[1];
  fVar4 = in_stack_00000010 * pfVar3[2] + in_stack_00000008._4_4_ * *pfVar3 + unaff_s14 * pfVar3[1];
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


