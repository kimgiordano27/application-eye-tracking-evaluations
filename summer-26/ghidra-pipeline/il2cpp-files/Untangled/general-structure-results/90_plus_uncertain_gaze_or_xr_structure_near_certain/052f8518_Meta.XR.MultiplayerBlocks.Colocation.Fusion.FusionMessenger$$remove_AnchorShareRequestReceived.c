/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Colocation.Fusion.FusionMessenger$$remove_AnchorShareRequestReceived
ENTRY_POINT: 052f8518
PROGRAM: Untangled-libil2cpp.so
SCORE: 92
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MultiplayerBlocks_Colocation_Fusion_FusionMessenger__remove_AnchorShareRequestReceived
               (undefined1 param_1 [16],float param_2,float param_3,long param_4)

{
  long lVar1;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  
  fVar2 = (float)FUN_0529dac0(*(undefined4 *)(param_4 + 0x20),0);
  *(float *)(param_4 + 0x80) = fVar2;
  *(float *)(param_4 + 0x84) = param_2;
  *(float *)(param_4 + 0x88) = param_3;
  if (DAT_071babf2 == '\0') {
    FUN_02f07e70(PTR_DAT_06d03010);
    DAT_071babf2 = '\x01';
  }
  if (*(int *)(*(long *)PTR_DAT_06d03010 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  if ((SQRT(param_3 * param_3 + fVar2 * fVar2 + param_2 * param_2) <= DAT_013f6c1c) &&
     (DAT_071babf5 == '\0')) {
    FUN_02f07e70(PTR_DAT_06d02c10);
    DAT_071babf5 = '\x01';
  }
  uVar5 = *(undefined4 *)(param_4 + 0x84);
  uVar8 = *(undefined4 *)(param_4 + 0x88);
  uVar3 = FUN_0528b5b0(*(undefined4 *)(param_4 + 0x80),0);
  *(undefined4 *)(param_4 + 0x58) = uVar3;
  *(undefined4 *)(param_4 + 0x5c) = uVar5;
  *(undefined4 *)(param_4 + 0x60) = uVar8;
  lVar1 = FUN_066c67b0(param_4,0);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  FUN_066d4b64(lVar1,0);
  uVar3 = FUN_066bde7c(0);
  *(undefined4 *)(param_4 + 100) = uVar3;
  *(undefined4 *)(param_4 + 0x68) = uVar5;
  fVar2 = 0.0;
  *(undefined4 *)(param_4 + 0x6c) = uVar8;
  if (1 < *(int *)(param_4 + 0x24)) {
    fVar2 = *(float *)(param_4 + 0x40);
    if (DAT_071bac60 == '\0') {
      FUN_02f07e70(PTR_DAT_06d034e8);
      DAT_071bac60 = '\x01';
    }
    fVar6 = ABS(fVar2);
    if (fVar6 <= 0.0) {
      fVar6 = 0.0;
    }
    fVar7 = **(float **)(*(long *)PTR_DAT_06d034e8 + 0xb8) * 8.0;
    fVar4 = fVar6 * DAT_013f6cfc;
    if (fVar6 * DAT_013f6cfc <= fVar7) {
      fVar4 = fVar7;
    }
    if (fVar4 <= ABS(0.0 - fVar2)) goto LAB_052f8694;
    fVar2 = *(float *)(param_4 + 0x2c) / (float)*(int *)(param_4 + 0x24);
  }
  *(float *)(param_4 + 0x40) = fVar2;
LAB_052f8694:
  *(undefined8 *)(param_4 + 0x48) = *(undefined8 *)(param_4 + 100);
  *(undefined4 *)(param_4 + 0x50) = *(undefined4 *)(param_4 + 0x6c);
  return;
}


