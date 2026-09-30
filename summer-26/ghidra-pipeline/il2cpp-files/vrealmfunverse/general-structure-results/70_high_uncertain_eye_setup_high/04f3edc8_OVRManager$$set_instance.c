/*
FUNCTION_NAME: OVRManager$$set_instance
ENTRY_POINT: 04f3edc8
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool OVRManager__set_instance(float param_1,float param_2,float param_3,long param_4)

{
  ulong uVar1;
  long lVar2;
  long unaff_x19;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  float fVar6;
  undefined8 uStack0000000000000030;
  
  uStack0000000000000030 = 0;
  if (param_4 != 0) {
    fVar3 = (float)FUN_05d0be20(param_4,0);
    param_1 = param_1 - fVar3;
    fVar6 = *(float *)(unaff_x19 + 0x28);
    if (fVar6 < param_1) {
      if (DAT_066c1caa == '\0') {
        FUN_02b3c81c(PTR_DAT_06312438);
        DAT_066c1caa = '\x01';
      }
      lVar2 = *(long *)(*(long *)PTR_DAT_06312438 + 0xb8);
      param_3 = param_1 * *(float *)(lVar2 + 0x20);
      param_2 = param_1 * *(float *)(lVar2 + 0x1c);
      uVar1 = FUN_04f3ef54(param_1 * *(float *)(lVar2 + 0x18),param_2,param_3);
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
LAB_04f3ef30:
      return fVar6 < ABS(param_1);
    }
    if (*(long *)(unaff_x19 + 0x20) != 0) {
      FUN_05d0bed4(fVar3 + param_1,*(long *)(unaff_x19 + 0x20),0);
      if ((*(long *)(unaff_x19 + 0x20) != 0) &&
         (lVar2 = FUN_05c89340(*(long *)(unaff_x19 + 0x20),0), lVar2 != 0)) {
        fVar3 = (float)FUN_05c9bf94(lVar2,0);
        if (DAT_066c1caa == '\0') {
          FUN_02b3c81c(PTR_DAT_06312438);
          DAT_066c1caa = '\x01';
        }
        uVar5 = *(undefined8 *)(*(long *)(*(long *)PTR_DAT_06312438 + 0xb8) + 0x18);
        param_2 = param_2 + (float)((ulong)uVar5 >> 0x20) * param_1 * 0.5;
        FUN_05c9c070(CONCAT44(param_2,fVar3 + (float)uVar5 * param_1 * 0.5),param_2,
                     param_3 + param_1 * *(float *)(*(long *)(*(long *)PTR_DAT_06312438 + 0xb8) +
                                                   0x20) * 0.5,lVar2,0);
        FUN_04f3eb7c();
        goto LAB_04f3ef30;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


