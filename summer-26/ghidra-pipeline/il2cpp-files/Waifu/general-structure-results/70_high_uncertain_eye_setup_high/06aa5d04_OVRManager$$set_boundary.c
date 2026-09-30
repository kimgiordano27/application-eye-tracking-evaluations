/*
FUNCTION_NAME: OVRManager$$set_boundary
ENTRY_POINT: 06aa5d04
PROGRAM: Waifu-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
OVRManager__set_boundary
          (float param_1,float param_2,float param_3,float param_4,long param_5,float *param_6,
          undefined8 *param_7)

{
  float fVar1;
  float fVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  *param_7 = 0;
  param_7[1] = 0;
  *(undefined4 *)(param_7 + 3) = 0;
  param_7[2] = 0;
  fVar1 = (float)FUN_06aa5aec();
  if ((*(char *)(param_5 + 0x24) != '\0') ||
     (fVar5 = *param_6, fVar7 = param_6[1], fVar9 = param_6[2], fVar6 = param_3, fVar8 = param_2,
     fVar10 = param_4, fVar2 = (float)FUN_06aa5aec(param_5),
     0.0 < fVar10 + fVar9 * fVar6 + fVar5 * fVar2 + fVar7 * fVar8)) {
    fVar8 = param_6[2];
    fVar10 = *param_6;
    fVar2 = param_6[1];
    fVar6 = param_3 * param_6[5] + fVar1 * param_6[3] + param_2 * param_6[4];
    if (DAT_086d7e6f == '\0') {
      FUN_0335b6c8(&DAT_083ce8d0,1);
      DataMemoryBarrier(2,3);
      DAT_086d7e6f = '\x01';
    }
    fVar5 = ABS(fVar6);
    if (fVar5 <= 0.0) {
      fVar5 = 0.0;
    }
    fVar9 = **(float **)(DAT_083ce8d0 + 0xb8) * 8.0;
    fVar7 = fVar5 * DAT_012edc5c;
    if (fVar5 * DAT_012edc5c <= fVar9) {
      fVar7 = fVar9;
    }
    if (((fVar7 <= ABS(0.0 - fVar6)) &&
        (fVar6 = (-(param_3 * fVar8 + fVar1 * fVar10 + param_2 * fVar2) - param_4) / fVar6,
        0.0 < fVar6)) && ((param_1 <= 0.0 || (fVar6 <= param_1)))) {
      uVar4 = *(undefined8 *)(param_6 + 3);
      fVar10 = param_6[5];
      uVar3 = *(undefined8 *)param_6;
      fVar8 = param_6[2];
      *(float *)(param_7 + 3) = fVar6;
      *(float *)(param_7 + 2) = param_2;
      *(float *)((long)param_7 + 0x14) = param_3;
      *param_7 = CONCAT44((float)((ulong)uVar3 >> 0x20) + (float)((ulong)uVar4 >> 0x20) * fVar6,
                          (float)uVar3 + (float)uVar4 * fVar6);
      *(float *)(param_7 + 1) = fVar8 + fVar6 * fVar10;
      *(float *)((long)param_7 + 0xc) = fVar1;
      return 1;
    }
  }
  return 0;
}


