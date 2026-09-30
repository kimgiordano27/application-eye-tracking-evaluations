/*
FUNCTION_NAME: Meta.XR.Samples.SampleMetadata$$SendEvent
ENTRY_POINT: 03391318
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 86
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_Samples_SampleMetadata__SendEvent(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  
  if ((DAT_044a6789 & 1) == 0) {
    FUN_01d7d918(StringLiteral_4737);
    DAT_044a6789 = 1;
  }
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_033a44fc(0x30,0);
  }
  if (DAT_044a53b6 == '\0') {
    FUN_01d7d918(StringLiteral_3003);
    DAT_044a53b6 = '\x01';
  }
  puVar1 = StringLiteral_4737;
  if (param_1 == 0) {
    uVar4 = 0;
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_03277aec(param_1,0);
    uVar4 = *(undefined4 *)(param_1 + 0x10);
  }
  uVar3 = FUN_03355900(param_2,0);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01dc4f30(*(long *)puVar1);
  }
  FUN_0339051c(uVar2,uVar4,7,uVar3);
  return;
}


