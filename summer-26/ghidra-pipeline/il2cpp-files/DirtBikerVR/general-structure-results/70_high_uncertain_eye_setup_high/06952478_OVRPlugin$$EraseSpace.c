/*
FUNCTION_NAME: OVRPlugin$$EraseSpace
ENTRY_POINT: 06952478
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__EraseSpace(float param_1,float param_2,float param_3)

{
  char in_NG;
  bool in_ZR;
  char in_OV;
  long lVar1;
  long unaff_x19;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float unaff_s10;
  float unaff_s11;
  
  if ((in_ZR || in_NG != in_OV) || (param_1 <= param_3)) {
    param_3 = unaff_s10 + param_3;
    if (0.0 <= param_3 - unaff_s10) {
      param_2 = param_1;
    }
    unaff_s11 = unaff_s10 + param_2;
    if (ABS(param_3 - unaff_s10) <= param_1) {
      unaff_s11 = param_3;
    }
  }
  lVar1 = *(long *)(unaff_x19 + 0x90);
  *(float *)(unaff_x19 + 0x74) = unaff_s11;
  if (lVar1 != 0) {
    fVar6 = *(float *)(unaff_x19 + 0x48);
    fVar2 = *(float *)(unaff_x19 + 0x4c);
    fVar4 = *(float *)(unaff_x19 + 0x40);
    fVar5 = *(float *)(unaff_x19 + 0x44);
    *(undefined4 *)(lVar1 + 0x10) = *(undefined4 *)(unaff_x19 + 0x3c);
    uVar3 = *(undefined4 *)(unaff_x19 + 0x6c);
    *(float *)(lVar1 + 0x1c) = fVar2 * fVar6;
    *(float *)(lVar1 + 0x20) = fVar2 * fVar5;
    *(float *)(lVar1 + 0x24) = fVar2 * fVar4;
    FUN_0692a5f4(uVar3,lVar1,0);
    lVar1 = *(long *)(unaff_x19 + 0x90);
    if (lVar1 != 0) {
      *(undefined4 *)(lVar1 + 0x30) = *(undefined4 *)(unaff_x19 + 0x74);
      FUN_07ca88b8(0);
      fVar2 = (float)FUN_0692a624(lVar1,0);
      fVar2 = -fVar2;
      *(float *)(unaff_x19 + 100) = fVar2;
      if (*(long *)(unaff_x19 + 0x88) != 0) {
        FUN_07d32824(*(float *)(unaff_x19 + 200) * fVar2,*(float *)(unaff_x19 + 0xcc) * fVar2,
                     *(float *)(unaff_x19 + 0xd0) * fVar2,*(long *)(unaff_x19 + 0x88),0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


