/*
FUNCTION_NAME: OVRPlugin$$ShowUI
ENTRY_POINT: 06ab96cc
PROGRAM: Waifu-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x06ab978c) */

void OVRPlugin__ShowUI(long param_1)

{
  char cVar1;
  long lVar2;
  long unaff_x19;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar5 = *(float *)(unaff_x19 + 0x68);
  fVar4 = *(float *)(unaff_x19 + 0x44);
  fVar6 = *(float *)(unaff_x19 + 0x74);
  fVar3 = (float)(**(code **)(param_1 + 0x18))
                           (*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x28));
  fVar4 = fVar4 * fVar3;
  lVar2 = *(long *)(unaff_x19 + 0x88);
  fVar3 = fVar4;
  if (1.0 < fVar4) {
    fVar3 = 1.0;
  }
  if (fVar4 < 0.0) {
    fVar3 = 0.0;
  }
  *(float *)(unaff_x19 + 0x68) = fVar5 + (fVar6 - fVar5) * fVar3;
  if (lVar2 != 0) {
    fVar5 = *(float *)(unaff_x19 + 0x6c);
    fVar4 = *(float *)(unaff_x19 + 0x44);
    fVar6 = *(float *)(unaff_x19 + 0x78);
    fVar3 = (float)(**(code **)(lVar2 + 0x18))
                             (*(undefined8 *)(lVar2 + 0x40),*(undefined8 *)(lVar2 + 0x28));
    fVar4 = fVar4 * fVar3;
    lVar2 = *(long *)(unaff_x19 + 0x88);
    fVar3 = fVar4;
    if (1.0 < fVar4) {
      fVar3 = 1.0;
    }
    if (fVar4 < 0.0) {
      fVar3 = 0.0;
    }
    *(float *)(unaff_x19 + 0x6c) = fVar5 + (fVar6 - fVar5) * fVar3;
    if (lVar2 != 0) {
      fVar5 = *(float *)(unaff_x19 + 0x70);
      fVar4 = *(float *)(unaff_x19 + 0x44);
      cVar1 = *(char *)(unaff_x19 + 100);
      fVar3 = (float)(**(code **)(lVar2 + 0x18))
                               (*(undefined8 *)(lVar2 + 0x40),*(undefined8 *)(lVar2 + 0x28));
      fVar4 = fVar4 * fVar3;
      fVar3 = 0.0;
      if (cVar1 != '\0') {
        fVar3 = 1.0;
      }
      if (fVar4 < 0.0) {
        fVar4 = 0.0;
      }
      *(float *)(unaff_x19 + 0x70) = fVar5 + (fVar3 - fVar5) * fVar4;
      FUN_06ab99c4();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


