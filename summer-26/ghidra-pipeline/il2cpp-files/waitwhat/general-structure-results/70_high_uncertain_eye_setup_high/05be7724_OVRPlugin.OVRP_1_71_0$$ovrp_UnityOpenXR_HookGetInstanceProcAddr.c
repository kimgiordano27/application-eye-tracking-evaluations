/*
FUNCTION_NAME: OVRPlugin.OVRP_1_71_0$$ovrp_UnityOpenXR_HookGetInstanceProcAddr
ENTRY_POINT: 05be7724
PROGRAM: waitwhat-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_9;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_71_0__ovrp_UnityOpenXR_HookGetInstanceProcAddr(long param_1)

{
  char cVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  FUN_05be7844();
  lVar2 = *(long *)(param_1 + 0x88);
  if (lVar2 != 0) {
    fVar5 = *(float *)(param_1 + 0x44);
    fVar6 = *(float *)(param_1 + 0x74);
    fVar7 = *(float *)(param_1 + 0x68);
    fVar3 = (float)(**(code **)(lVar2 + 0x18))
                             (*(undefined8 *)(lVar2 + 0x40),*(undefined8 *)(lVar2 + 0x28));
    fVar5 = fVar5 * fVar3;
    lVar2 = *(long *)(param_1 + 0x88);
    fVar3 = 1.0;
    if (fVar5 <= 1.0) {
      fVar3 = fVar5;
    }
    fVar4 = 0.0;
    if (0.0 <= fVar5) {
      fVar4 = fVar3;
    }
    *(float *)(param_1 + 0x68) = fVar7 + (fVar6 - fVar7) * fVar4;
    if (lVar2 != 0) {
      fVar5 = *(float *)(param_1 + 0x44);
      fVar6 = *(float *)(param_1 + 0x78);
      fVar7 = *(float *)(param_1 + 0x6c);
      fVar3 = (float)(**(code **)(lVar2 + 0x18))
                               (*(undefined8 *)(lVar2 + 0x40),*(undefined8 *)(lVar2 + 0x28));
      fVar5 = fVar5 * fVar3;
      lVar2 = *(long *)(param_1 + 0x88);
      fVar3 = 1.0;
      if (fVar5 <= 1.0) {
        fVar3 = fVar5;
      }
      fVar4 = 0.0;
      if (0.0 <= fVar5) {
        fVar4 = fVar3;
      }
      *(float *)(param_1 + 0x6c) = fVar7 + (fVar6 - fVar7) * fVar4;
      if (lVar2 != 0) {
        fVar5 = *(float *)(param_1 + 0x44);
        cVar1 = *(char *)(param_1 + 100);
        fVar6 = *(float *)(param_1 + 0x70);
        fVar3 = (float)(**(code **)(lVar2 + 0x18))
                                 (*(undefined8 *)(lVar2 + 0x40),*(undefined8 *)(lVar2 + 0x28));
        fVar5 = fVar5 * fVar3;
        fVar3 = 0.0;
        if (cVar1 != '\0') {
          fVar3 = 1.0;
        }
        fVar7 = 1.0;
        if (fVar5 <= 1.0) {
          fVar7 = fVar5;
        }
        fVar4 = 0.0;
        if (0.0 <= fVar5) {
          fVar4 = fVar7;
        }
        *(float *)(param_1 + 0x70) = fVar6 + (fVar3 - fVar6) * fVar4;
        FUN_05be7a40(param_1);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


