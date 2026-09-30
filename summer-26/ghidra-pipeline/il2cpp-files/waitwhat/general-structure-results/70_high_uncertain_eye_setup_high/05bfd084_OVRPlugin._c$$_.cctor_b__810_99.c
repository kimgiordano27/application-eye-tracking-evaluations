/*
FUNCTION_NAME: OVRPlugin.<>c$$<.cctor>b__810_99
ENTRY_POINT: 05bfd084
PROGRAM: waitwhat-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_<>c__<_cctor>b__810_99(undefined1 param_1 [16],float param_2,undefined1 param_3 [16])

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  long unaff_x20;
  float fVar2;
  float fVar3;
  
  fVar2 = param_3._0_4_ / param_1._0_4_;
  fVar3 = param_3._4_4_ / param_1._4_4_;
  *unaff_x19 = CONCAT44(fVar3,fVar2);
  *(float *)(unaff_x19 + 1) = *(float *)(unaff_x19 + 1) / param_2;
  if (ABS(fVar2) <= ABS(fVar3)) {
    if (fVar3 <= 0.0) {
      if (unaff_x20 == 0) goto LAB_05bfd12c;
      uVar1 = 4;
    }
    else {
      if (unaff_x20 == 0) goto LAB_05bfd12c;
      uVar1 = 5;
    }
  }
  else if (fVar2 <= 0.0) {
    if (unaff_x20 == 0) goto LAB_05bfd12c;
    uVar1 = 3;
  }
  else {
    if (unaff_x20 == 0) {
LAB_05bfd12c:
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    uVar1 = 2;
  }
                    /* WARNING: Could not recover jumptable at 0x05bfd004. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x20 + 0x18))
            (*(undefined8 *)(unaff_x20 + 0x40),uVar1,*(undefined8 *)(unaff_x20 + 0x28));
  return;
}


