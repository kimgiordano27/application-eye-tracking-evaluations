/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Colocation.Fusion.FusionMessenger$$add_AnchorShareRequestCompleted
ENTRY_POINT: 052f85c8
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


void Meta_XR_MultiplayerBlocks_Colocation_Fusion_FusionMessenger__add_AnchorShareRequestCompleted
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3)

{
  long lVar1;
  long unaff_x19;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  uVar2 = FUN_0528b5b0();
  *(undefined4 *)(unaff_x19 + 0x58) = uVar2;
  *(undefined4 *)(unaff_x19 + 0x5c) = param_2;
  *(undefined4 *)(unaff_x19 + 0x60) = param_3;
  lVar1 = FUN_066c67b0();
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  FUN_066d4b64(lVar1,0);
  uVar2 = FUN_066bde7c(0);
  *(undefined4 *)(unaff_x19 + 100) = uVar2;
  *(undefined4 *)(unaff_x19 + 0x68) = param_2;
  fVar3 = 0.0;
  *(undefined4 *)(unaff_x19 + 0x6c) = param_3;
  if (1 < *(int *)(unaff_x19 + 0x24)) {
    fVar3 = *(float *)(unaff_x19 + 0x40);
    if (DAT_071bac60 == '\0') {
      FUN_02f07e70(PTR_DAT_06d034e8);
      DAT_071bac60 = '\x01';
    }
    fVar5 = ABS(fVar3);
    if (fVar5 <= 0.0) {
      fVar5 = 0.0;
    }
    fVar6 = **(float **)(*(long *)PTR_DAT_06d034e8 + 0xb8) * 8.0;
    fVar4 = fVar5 * DAT_013f6cfc;
    if (fVar5 * DAT_013f6cfc <= fVar6) {
      fVar4 = fVar6;
    }
    if (fVar4 <= ABS(0.0 - fVar3)) goto LAB_052f8694;
    fVar3 = *(float *)(unaff_x19 + 0x2c) / (float)*(int *)(unaff_x19 + 0x24);
  }
  *(float *)(unaff_x19 + 0x40) = fVar3;
LAB_052f8694:
  *(undefined8 *)(unaff_x19 + 0x48) = *(undefined8 *)(unaff_x19 + 100);
  *(undefined4 *)(unaff_x19 + 0x50) = *(undefined4 *)(unaff_x19 + 0x6c);
  return;
}


