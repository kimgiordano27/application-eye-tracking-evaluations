/*
FUNCTION_NAME: OVRPlugin.UnityOpenXR$$OnInstanceCreate
ENTRY_POINT: 05be77a0
PROGRAM: waitwhat-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_UnityOpenXR__OnInstanceCreate(void)

{
  char cVar1;
  float fVar2;
  long lVar3;
  code *in_x9;
  long unaff_x19;
  float fVar4;
  float fVar5;
  float unaff_s8;
  float unaff_s9;
  float fVar6;
  float unaff_s10;
  float unaff_s11;
  float fVar7;
  
  fVar7 = *(float *)(unaff_x19 + 0x6c);
  fVar4 = (float)(*in_x9)();
  fVar4 = unaff_s10 * fVar4;
  lVar3 = *(long *)(unaff_x19 + 0x88);
  if (fVar4 <= unaff_s8) {
    unaff_s8 = fVar4;
  }
  if (0.0 <= fVar4) {
    unaff_s9 = unaff_s8;
  }
  *(float *)(unaff_x19 + 0x6c) = fVar7 + (unaff_s11 - fVar7) * unaff_s9;
  if (lVar3 != 0) {
    fVar7 = *(float *)(unaff_x19 + 0x44);
    cVar1 = *(char *)(unaff_x19 + 100);
    fVar6 = *(float *)(unaff_x19 + 0x70);
    fVar4 = (float)(**(code **)(lVar3 + 0x18))
                             (*(undefined8 *)(lVar3 + 0x40),*(undefined8 *)(lVar3 + 0x28));
    fVar7 = fVar7 * fVar4;
    fVar4 = 0.0;
    if (cVar1 != '\0') {
      fVar4 = 1.0;
    }
    fVar5 = 1.0;
    if (fVar7 <= 1.0) {
      fVar5 = fVar7;
    }
    fVar2 = 0.0;
    if (0.0 <= fVar7) {
      fVar2 = fVar5;
    }
    *(float *)(unaff_x19 + 0x70) = fVar6 + (fVar4 - fVar6) * fVar2;
    FUN_05be7a40();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


