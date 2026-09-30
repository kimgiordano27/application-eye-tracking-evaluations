/*
FUNCTION_NAME: OVRPlugin$$ResetAppPerfStats
ENTRY_POINT: 06942468
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


float OVRPlugin__ResetAppPerfStats(float param_1,float param_2,undefined4 param_3,long param_4)

{
  long *plVar1;
  int in_w8;
  undefined4 *puVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fStack0000000000000018;
  float fStack000000000000001c;
  
  if (in_w8 == 0) {
    return param_1;
  }
  if (*(long *)(param_4 + 0x80) != 0) {
    fVar3 = (float)FUN_07c42008(*(undefined4 *)(param_4 + 0x78),*(long *)(param_4 + 0x80),0);
    fVar6 = *(float *)(param_4 + 0x30) * 0.5;
    puVar2 = (undefined4 *)(param_4 + 0x38);
    *puVar2 = *(undefined4 *)(param_4 + 0x34);
    fVar5 = 1.0;
    if (fVar3 <= 1.0) {
      fVar5 = fVar3;
    }
    fVar4 = 0.0;
    if (0.0 <= fVar3) {
      fVar4 = fVar5;
    }
    fStack000000000000001c = fVar4 * *(float *)(param_4 + 0x90);
    *(float *)(param_4 + 0x9c) = fVar4;
    *(float *)(param_4 + 0x48) = fVar6 + fVar4 * (fVar6 + param_2);
    FUN_06925d54(puVar2,(long)&stack0x00000018 + 4,&stack0x00000018,0);
    FUN_0694255c(*(undefined4 *)(param_4 + 0x94),param_4,puVar2);
    plVar1 = *(long **)(param_4 + 0x60);
    if (plVar1 != (long *)0x0) {
      fVar3 = (float)(**(code **)(*plVar1 + 600))
                               (*(undefined4 *)(param_4 + 0x38),*(undefined4 *)(param_4 + 0x48),
                                param_3,plVar1,*(undefined8 *)(*plVar1 + 0x260));
      fVar3 = fVar3 * *(float *)(param_4 + 0x9c);
      fVar6 = *(float *)(param_4 + 0x90);
      fVar5 = fVar6;
      if (fVar3 <= fVar6) {
        fVar5 = fVar3;
      }
      fVar4 = -fVar6;
      if (-fVar6 <= fVar3) {
        fVar4 = fVar5;
      }
      return fStack0000000000000018 + fVar4;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


