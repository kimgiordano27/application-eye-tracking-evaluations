/*
FUNCTION_NAME: OVRManager$$set_colorGamut
ENTRY_POINT: 05ba51c8
PROGRAM: waitwhat-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool OVRManager__set_colorGamut(float param_1,float param_2,float param_3,long param_4)

{
  ulong uVar1;
  long lVar2;
  long unaff_x19;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  float fVar6;
  undefined8 uStack0000000000000030;
  undefined4 uStack0000000000000038;
  
  uStack0000000000000038 = 0;
  uStack0000000000000030 = 0;
  if (*(long *)(param_4 + 0x20) != 0) {
    fVar3 = (float)FUN_06a577c0(*(long *)(param_4 + 0x20),0);
    param_1 = param_1 - fVar3;
    fVar6 = *(float *)(unaff_x19 + 0x28);
    if (fVar6 < param_1) {
      if (DAT_075457aa == '\0') {
        FUN_03188a78(PTR_DAT_070c1a80);
        DAT_075457aa = '\x01';
      }
                    /* catch() { ... } // from try @ 05ba5050 with catch @ 05ba522c */
      lVar2 = *(long *)(*(long *)PTR_DAT_070c1a80 + 0xb8);
      param_3 = param_1 * *(float *)(lVar2 + 0x20);
      param_2 = param_1 * *(float *)(lVar2 + 0x1c);
      uVar1 = FUN_05ba535c(param_1 * *(float *)(lVar2 + 0x18),param_2,param_3);
      if ((uVar1 & 1) != 0) {
        fVar4 = uStack0000000000000030._4_4_ - *(float *)(unaff_x19 + 0x28);
        param_2 = 0.0;
        param_1 = 0.0;
        if (0.0 <= fVar4) {
          param_1 = fVar4;
        }
      }
    }
    if (ABS(param_1) <= fVar6) {
LAB_05ba5338:
      return fVar6 < ABS(param_1);
    }
    if (*(long *)(unaff_x19 + 0x20) != 0) {
      FUN_06a57874(fVar3 + param_1,*(long *)(unaff_x19 + 0x20),0);
      if ((*(long *)(unaff_x19 + 0x20) != 0) &&
         (lVar2 = FUN_069d3a80(*(long *)(unaff_x19 + 0x20),0), lVar2 != 0)) {
        fVar3 = (float)FUN_069e6fbc(lVar2,0);
        if (DAT_075457aa == '\0') {
          FUN_03188a78(PTR_DAT_070c1a80);
          DAT_075457aa = '\x01';
        }
        uVar5 = *(undefined8 *)(*(long *)(*(long *)PTR_DAT_070c1a80 + 0xb8) + 0x18);
        param_2 = param_2 + (float)((ulong)uVar5 >> 0x20) * param_1 * 0.5;
        FUN_069e7098(CONCAT44(param_2,fVar3 + (float)uVar5 * param_1 * 0.5),param_2,
                     param_3 + param_1 * *(float *)(*(long *)(*(long *)PTR_DAT_070c1a80 + 0xb8) +
                                                   0x20) * 0.5,lVar2,0);
        FUN_05ba4f84();
        goto LAB_05ba5338;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


