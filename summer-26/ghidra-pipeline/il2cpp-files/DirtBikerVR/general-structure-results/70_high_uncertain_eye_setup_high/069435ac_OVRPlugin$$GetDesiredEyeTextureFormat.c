/*
FUNCTION_NAME: OVRPlugin$$GetDesiredEyeTextureFormat
ENTRY_POINT: 069435ac
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetDesiredEyeTextureFormat(long param_1)

{
  long lVar1;
  float *unaff_x19;
  float *unaff_x20;
  long unaff_x21;
  float unaff_w22;
  float fVar2;
  float fVar3;
  float fVar4;
  float unaff_s8;
  float fVar5;
  float unaff_s10;
  float unaff_s11;
  
  while( true ) {
    fVar5 = unaff_s8 * *(float *)(unaff_x21 + 0xe8);
    fVar2 = (float)FUN_07c42008(unaff_s8,param_1,0);
    if (*(float *)(unaff_x21 + 0x94) <= fVar5) {
      fVar4 = *(float *)(unaff_x21 + 0x9c);
      fVar3 = (float)FUN_0692a978(fVar5,0);
      fVar3 = (fVar2 * fVar4 * unaff_w22) / fVar3;
      if (*unaff_x19 < fVar3) {
        *unaff_x19 = fVar3;
        *unaff_x20 = fVar5;
      }
    }
    unaff_s8 = unaff_s8 + unaff_s10;
    if (unaff_s11 <= unaff_s8) break;
    param_1 = *(long *)(unaff_x21 + 200);
    if (param_1 == 0) {
LAB_06943650:
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
  }
  lVar1 = *(long *)(unaff_x21 + 0x88);
  if (lVar1 != 0) {
    if (*(char *)(lVar1 + 0x10) == '\0') {
      fVar2 = 1.0;
    }
    else {
      fVar2 = *(float *)(lVar1 + 0x20);
    }
    *unaff_x19 = fVar2 * *unaff_x19;
    return;
  }
  goto LAB_06943650;
}


