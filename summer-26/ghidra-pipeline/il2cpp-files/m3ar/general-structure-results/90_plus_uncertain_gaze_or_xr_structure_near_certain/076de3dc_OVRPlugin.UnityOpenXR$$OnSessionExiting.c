/*
FUNCTION_NAME: OVRPlugin.UnityOpenXR$$OnSessionExiting
ENTRY_POINT: 076de3dc
PROGRAM: m3ar-libil2cpp.so
SCORE: 109
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_4;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


undefined8
OVRPlugin_UnityOpenXR__OnSessionExiting
          (float param_1,float param_2,float param_3,float param_4,float param_5,float param_6,
          float param_7,undefined8 param_8,float *param_9,undefined4 *param_10)

{
  bool bVar1;
  bool bVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fStack0000000000000004;
  float fStack0000000000000008;
  float fStack000000000000000c;
  
  fStack0000000000000004 = param_2;
  fStack0000000000000008 = param_3;
  fStack000000000000000c = param_7;
  if (DAT_09539e18 == '\0') {
    FUN_0403162c(PTR_DAT_08f65580);
    DAT_09539e18 = '\x01';
  }
  if (*(int *)(*(long *)PTR_DAT_08f65580 + 0xe4) == 0) {
    thunk_FUN_0408f364();
  }
  fVar4 = SQRT(param_6 * param_6 + param_4 * param_4 + param_5 * param_5);
  if (fVar4 <= DAT_01a2ef28) {
    if (DAT_09539c10 == '\0') {
      FUN_0403162c(PTR_DAT_08f65568);
      DAT_09539c10 = '\x01';
    }
    pfVar3 = *(float **)(*(long *)PTR_DAT_08f65568 + 0xb8);
    param_4 = *pfVar3;
    param_5 = pfVar3[1];
    param_6 = pfVar3[2];
  }
  else {
    param_4 = param_4 / fVar4;
    param_5 = param_5 / fVar4;
    param_6 = param_6 / fVar4;
  }
  fVar11 = param_9[1];
  fVar9 = param_9[2];
  fVar10 = *param_9;
  fVar4 = param_6 * param_9[5] + param_4 * param_9[3] + param_5 * param_9[4];
  if (DAT_09539e11 == '\0') {
    FUN_0403162c(PTR_DAT_08f67c68);
    DAT_09539e11 = '\x01';
  }
  fVar5 = ABS(fVar4);
  if (ABS(fVar4) <= 0.0) {
    fVar5 = 0.0;
  }
  fVar8 = **(float **)(*(long *)PTR_DAT_08f67c68 + 0xb8) * 8.0;
  fVar6 = fVar5 * DAT_01a2ee44;
  if (fVar5 * DAT_01a2ee44 <= fVar8) {
    fVar6 = fVar8;
  }
  if (fVar6 <= ABS(0.0 - fVar4)) {
    fVar10 = param_4 * fVar10 + param_5 * fVar11;
    fVar4 = ((fStack0000000000000008 * param_6 +
             param_1 * param_4 + fStack0000000000000004 * param_5) - (param_6 * fVar9 + fVar10)) /
            fVar4;
    bVar1 = false;
    bVar2 = true;
    if (0.0 < fVar4) {
      bVar1 = false;
      bVar2 = true;
      if (!NAN(fVar4) && !NAN(fStack000000000000000c)) {
        bVar1 = fVar4 == fStack000000000000000c;
        bVar2 = fStack000000000000000c <= fVar4;
      }
    }
    if (!bVar2 || bVar1) {
      uVar7 = FUN_0853dbe0(param_9,0);
      *param_10 = uVar7;
      param_10[1] = fStack000000000000000c;
      param_10[2] = fVar10;
      return 1;
    }
  }
  return 0;
}


