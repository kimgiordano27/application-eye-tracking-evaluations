/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$ovrp_GetBodyTrackingSupported
ENTRY_POINT: 05bf5594
PROGRAM: waitwhat-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_3;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_78_0__ovrp_GetBodyTrackingSupported
               (float param_1,undefined1 param_2 [16],undefined1 param_3 [16],float param_4,
               float param_5,long param_6)

{
  long lVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  if (*(long *)(param_6 + 0x28) != 0) {
    fVar4 = param_4 * (param_1 - *(float *)(*(long *)(param_6 + 0x28) + 0x18));
    lVar1 = *(long *)(param_6 + 0x30);
    *(undefined1 *)(param_6 + 0x20) = 0;
    fVar3 = DAT_012e33d8;
    if (lVar1 != 0) {
      fVar5 = param_5 / ((param_5 / (*(float *)(param_6 + 0x1c) * DAT_012e33d8)) /
                         (param_5 / param_4) + param_5);
      if (*(char *)(lVar1 + 0x10) == '\0') {
        fVar6 = *(float *)(lVar1 + 0x18);
      }
      else {
        *(undefined1 *)(lVar1 + 0x10) = 0;
        *(float *)(lVar1 + 0x18) = fVar4;
        fVar6 = fVar4;
      }
      lVar2 = *(long *)(param_6 + 0x28);
      fVar4 = fVar4 * fVar5 + (param_5 - fVar5) * fVar6;
      *(float *)(lVar1 + 0x14) = fVar4;
      *(float *)(lVar1 + 0x18) = fVar4;
      if (lVar2 != 0) {
        param_5 = param_5 / ((param_5 /
                             ((*(float *)(param_6 + 0x14) + ABS(fVar4) * *(float *)(param_6 + 0x18))
                             * fVar3)) / (param_5 / param_4) + param_5);
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
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


