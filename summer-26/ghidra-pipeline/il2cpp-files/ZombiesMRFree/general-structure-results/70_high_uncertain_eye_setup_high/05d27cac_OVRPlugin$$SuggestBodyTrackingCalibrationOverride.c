/*
FUNCTION_NAME: OVRPlugin$$SuggestBodyTrackingCalibrationOverride
ENTRY_POINT: 05d27cac
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_5
*/


void OVRPlugin__SuggestBodyTrackingCalibrationOverride
               (undefined1 param_1 [16],float param_2,float param_3)

{
  long lVar1;
  int in_w8;
  long unaff_x19;
  long unaff_x20;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  if (in_w8 == 0) {
    if ((*(long *)(unaff_x19 + 0x48) == 0) ||
       (lVar1 = FUN_068f5d7c(*(long *)(unaff_x19 + 0x48),0), unaff_x20 == 0))
    goto OVRPlugin__ResetBodyTrackingCalibration;
    fVar3 = *(float *)(unaff_x19 + 100);
    fVar4 = *(float *)(unaff_x19 + 0x68);
    fVar5 = *(float *)(unaff_x19 + 0x6c);
    fVar2 = (float)FUN_05d26c44();
    if (DAT_0738e6c8 == '\0') {
      FUN_02fe925c(PTR_DAT_06f6d508);
      DAT_0738e6c8 = '\x01';
    }
    if (*(int *)(*(long *)PTR_DAT_06f6d508 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    if (lVar1 == 0) goto OVRPlugin__ResetBodyTrackingCalibration;
    fVar2 = SQRT(param_3 * param_3 + fVar2 * fVar2 + param_2 * param_2);
    FUN_06904aa4(fVar3 * fVar2,fVar4 * fVar2,fVar5 * fVar2,lVar1,0);
  }
  if (*(long *)(unaff_x19 + 0x48) != 0) {
    FUN_068cd970(*(long *)(unaff_x19 + 0x48),1,0);
    return;
  }
OVRPlugin__ResetBodyTrackingCalibration:
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


