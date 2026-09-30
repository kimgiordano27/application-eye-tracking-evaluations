/*
FUNCTION_NAME: OVRManager$$OVRMixedRealityCaptureConfiguration.set_chromaKeySpillRange
ENTRY_POINT: 090826fc
PROGRAM: Hyper-libil2cpp.so
SCORE: 84
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__OVRMixedRealityCaptureConfiguration_set_chromaKeySpillRange
               (float param_1,float param_2,float param_3,float param_4,undefined4 param_5)

{
  long lVar1;
  long lVar2;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  long *unaff_x23;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float unaff_s9;
  float unaff_s10;
  float fVar7;
  float fVar8;
  undefined4 uStack0000000000000000;
  
  param_1 = param_2 / param_1;
  uStack0000000000000000 = param_5;
  if (*(long *)(unaff_x19 + 0x30) != 0) {
    fVar3 = (float)FUN_0a18a7a0(*(long *)(unaff_x19 + 0x30),0);
    if (*(char *)(unaff_x20 + 0x3e4) == '\0') {
      FUN_04947ee4(PTR_DAT_0ac0def8);
      *(undefined1 *)(unaff_x20 + 0x3e4) = 1;
    }
    lVar1 = *(long *)(*unaff_x21 + 0xb8);
    fVar8 = *(float *)(lVar1 + 0x18);
    fVar7 = *(float *)(lVar1 + 0x1c);
    fVar6 = *(float *)(lVar1 + 0x20);
    if (*(char *)(unaff_x22 + 0x3e5) == '\0') {
      FUN_04947ee4(PTR_DAT_0ac0df00);
      *(undefined1 *)(unaff_x22 + 0x3e5) = 1;
    }
    fVar4 = fVar6 * fVar6 + fVar8 * fVar8 + fVar7 * fVar7;
    if (**(float **)(*unaff_x23 + 0xb8) <= fVar4) {
      fVar5 = param_3 * fVar6 + fVar3 * fVar8 + param_2 * fVar7;
      fVar3 = fVar3 - (fVar8 * fVar5) / fVar4;
      param_2 = param_2 - (fVar7 * fVar5) / fVar4;
      param_3 = param_3 - (fVar6 * fVar5) / fVar4;
    }
    if (*(long *)(unaff_x19 + 0x20) != 0) {
      FUN_0907faf0(uStack0000000000000000,unaff_s9 - param_4,unaff_s10 - param_1,
                   *(long *)(unaff_x19 + 0x20),0);
      lVar1 = *(long *)(unaff_x19 + 0x20);
      if (*(char *)(unaff_x20 + 0x3e4) == '\0') {
        FUN_04947ee4(PTR_DAT_0ac0def8);
        *(undefined1 *)(unaff_x20 + 0x3e4) = 1;
      }
      lVar2 = *(long *)(*unaff_x21 + 0xb8);
      FUN_0a16ab34(fVar3,param_2,param_3,*(undefined4 *)(lVar2 + 0x18),*(undefined4 *)(lVar2 + 0x1c)
                   ,*(undefined4 *)(lVar2 + 0x20),0);
      if (lVar1 != 0) {
        FUN_0907fa30(lVar1,0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


