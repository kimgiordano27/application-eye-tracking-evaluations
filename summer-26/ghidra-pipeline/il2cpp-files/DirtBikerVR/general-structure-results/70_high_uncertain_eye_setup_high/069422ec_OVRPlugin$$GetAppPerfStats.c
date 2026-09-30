/*
FUNCTION_NAME: OVRPlugin$$GetAppPerfStats
ENTRY_POINT: 069422ec
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


float OVRPlugin__GetAppPerfStats(float param_1,float param_2,float param_3)

{
  long *plVar1;
  long unaff_x19;
  long unaff_x20;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  float unaff_s8;
  float unaff_s9;
  
  fVar2 = (float)FUN_0692a968(*(undefined4 *)(unaff_x19 + 0x3c),0);
  fVar3 = (float)FUN_0692a968(*(undefined4 *)(unaff_x19 + 0x40),0);
  if (fVar2 <= fVar3) {
    fVar2 = fVar3;
  }
  fVar2 = (fVar2 - (param_2 + param_1 * param_3)) / *(float *)(unaff_x19 + 0x8c);
  if (*(float *)(unaff_x19 + 0x78) < fVar2) {
    fVar5 = unaff_s9 * 15.0;
    fVar3 = 1.0;
    if (fVar5 <= 1.0) {
      fVar3 = fVar5;
    }
    fVar6 = 0.0;
    if (0.0 <= fVar5) {
      fVar6 = fVar3;
    }
    fVar3 = fVar6 * fVar6 * 3.0 - fVar6 * fVar6 * (fVar6 + fVar6);
    fVar2 = (1.0 - fVar3) * *(float *)(unaff_x19 + 0x78) + fVar3 * fVar2;
  }
  fVar3 = 1.0;
  if (fVar2 <= 1.0) {
    fVar3 = fVar2;
  }
  uVar4 = *(undefined4 *)(unaff_x20 + 0x40);
  fVar5 = 0.0;
  if (0.0 <= fVar2) {
    fVar5 = fVar3;
  }
  *(float *)(unaff_x19 + 0x78) = fVar5;
  fVar2 = (float)FUN_0692a968(uVar4,0);
  if (*(float *)(unaff_x20 + 0x94) * DAT_015c57dc < fVar2) {
    if (*(long *)(unaff_x19 + 0x10) == 0) goto LAB_069423e8;
    fVar2 = (float)FUN_06926524(*(long *)(unaff_x19 + 0x10),0);
    if (3.0 < fVar2) {
      *(undefined4 *)(unaff_x19 + 0x78) = 0x3f800000;
    }
  }
  plVar1 = *(long **)(unaff_x19 + 0x60);
  *(float *)(unaff_x19 + 0x40) = *(float *)(unaff_x19 + 0x3c) * *(float *)(unaff_x19 + 0x9c);
  if (plVar1 != (long *)0x0) {
    fVar2 = (float)(**(code **)(*plVar1 + 0x238))(plVar1,*(undefined8 *)(*plVar1 + 0x240));
    return fVar2 * *(float *)(unaff_x19 + 0x9c) + (1.0 - *(float *)(unaff_x19 + 0x9c)) * unaff_s8;
  }
LAB_069423e8:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


