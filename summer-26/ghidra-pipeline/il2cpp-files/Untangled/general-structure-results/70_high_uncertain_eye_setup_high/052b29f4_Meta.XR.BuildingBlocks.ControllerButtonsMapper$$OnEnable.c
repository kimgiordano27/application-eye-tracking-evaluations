/*
FUNCTION_NAME: Meta.XR.BuildingBlocks.ControllerButtonsMapper$$OnEnable
ENTRY_POINT: 052b29f4
PROGRAM: Untangled-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_BuildingBlocks_ControllerButtonsMapper__OnEnable
               (undefined8 param_1,undefined1 param_2 [16],undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  uVar7 = param_3;
  uVar6 = FUN_066d4d38(param_4,0);
  if (DAT_071bab7b == '\0') {
    FUN_02f07e70(PTR_DAT_06d02c10);
    DAT_071bab7b = '\x01';
  }
  puVar1 = PTR_DAT_06d02c10;
  uVar7 = FUN_031b3810(uVar6,0,uVar7,param_1,0,param_3,0);
  if (DAT_071bab7b == '\0') {
    FUN_02f07e70(PTR_DAT_06d02c10);
    DAT_071bab7b = '\x01';
  }
  lVar3 = *(long *)(*(long *)puVar1 + 0xb8);
  fVar8 = *(float *)(lVar3 + 0x18);
  fVar10 = *(float *)(lVar3 + 0x1c);
  fVar12 = *(float *)(lVar3 + 0x20);
  fVar4 = (float)FUN_066bdbd8(uVar7,fVar8,fVar10,fVar12,0);
  fVar9 = fVar8;
  fVar13 = fVar12;
  fVar11 = fVar10;
  lVar3 = FUN_066c67b0();
  lVar2 = FUN_066c67b0();
  if ((lVar2 != 0) && (fVar5 = (float)FUN_066d320c(lVar2,0), lVar3 != 0)) {
    FUN_066d4ae0((fVar8 * fVar11 + fVar12 * fVar5 + fVar4 * fVar13) - fVar10 * fVar9,
                 (fVar10 * fVar5 + fVar12 * fVar9 + fVar8 * fVar13) - fVar4 * fVar11,
                 (fVar4 * fVar9 + fVar12 * fVar11 + fVar10 * fVar13) - fVar8 * fVar5,
                 ((fVar12 * fVar13 - fVar4 * fVar5) - fVar8 * fVar9) - fVar10 * fVar11,lVar3,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


