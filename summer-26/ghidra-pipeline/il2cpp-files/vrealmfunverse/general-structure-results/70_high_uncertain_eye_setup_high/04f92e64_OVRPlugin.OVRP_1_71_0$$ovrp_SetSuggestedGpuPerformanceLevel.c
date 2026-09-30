/*
FUNCTION_NAME: OVRPlugin.OVRP_1_71_0$$ovrp_SetSuggestedGpuPerformanceLevel
ENTRY_POINT: 04f92e64
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_71_0__ovrp_SetSuggestedGpuPerformanceLevel
               (float param_1,float param_2,undefined1 param_3 [16],float param_4,float param_5,
               long param_6)

{
  long lVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  lVar1 = *(long *)(param_6 + 0x30);
  *(undefined1 *)(param_6 + 0x20) = 0;
  fVar3 = DAT_01031c18;
  if (lVar1 != 0) {
    fVar4 = param_5 / ((param_5 / (*(float *)(param_6 + 0x1c) * DAT_01031c18)) / (param_5 / param_4)
                      + param_5);
    if (*(char *)(lVar1 + 0x10) == '\0') {
      fVar5 = *(float *)(lVar1 + 0x18);
    }
    else {
      *(undefined1 *)(lVar1 + 0x10) = 0;
      *(float *)(lVar1 + 0x18) = param_2;
      fVar5 = param_2;
    }
    lVar2 = *(long *)(param_6 + 0x28);
    fVar4 = param_2 * fVar4 + (param_5 - fVar4) * fVar5;
    *(float *)(lVar1 + 0x14) = fVar4;
    *(float *)(lVar1 + 0x18) = fVar4;
    if (lVar2 != 0) {
      param_5 = param_5 / ((param_5 /
                           ((*(float *)(param_6 + 0x14) + ABS(fVar4) * *(float *)(param_6 + 0x18)) *
                           fVar3)) / (param_5 / param_4) + param_5);
      if (*(char *)(lVar2 + 0x10) == '\0') {
        fVar3 = *(float *)(lVar2 + 0x18);
      }
      else {
        *(undefined1 *)(lVar2 + 0x10) = 0;
        *(float *)(lVar2 + 0x18) = param_1;
        fVar3 = param_1;
      }
      fVar3 = param_5 * param_1 + (1.0 - param_5) * fVar3;
      *(float *)(lVar2 + 0x14) = fVar3;
      *(float *)(lVar2 + 0x18) = fVar3;
      *(float *)(param_6 + 0x10) = fVar3;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


