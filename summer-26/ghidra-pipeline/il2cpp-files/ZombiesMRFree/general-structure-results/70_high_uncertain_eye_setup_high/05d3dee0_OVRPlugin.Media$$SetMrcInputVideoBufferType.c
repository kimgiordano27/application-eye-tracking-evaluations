/*
FUNCTION_NAME: OVRPlugin.Media$$SetMrcInputVideoBufferType
ENTRY_POINT: 05d3dee0
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x05d3dfb8) */

void OVRPlugin_Media__SetMrcInputVideoBufferType(long param_1)

{
  char cVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  FUN_05d3dff4();
  lVar2 = *(long *)(param_1 + 0x88);
  if (lVar2 != 0) {
    fVar5 = *(float *)(param_1 + 0x68);
    fVar4 = *(float *)(param_1 + 0x44);
    fVar6 = *(float *)(param_1 + 0x74);
    fVar3 = (float)(**(code **)(lVar2 + 0x18))
                             (*(undefined8 *)(lVar2 + 0x40),*(undefined8 *)(lVar2 + 0x28));
    fVar4 = fVar4 * fVar3;
    lVar2 = *(long *)(param_1 + 0x88);
    fVar3 = fVar4;
    if (1.0 < fVar4) {
      fVar3 = 1.0;
    }
    if (fVar4 < 0.0) {
      fVar3 = 0.0;
    }
    *(float *)(param_1 + 0x68) = fVar5 + (fVar6 - fVar5) * fVar3;
    if (lVar2 != 0) {
      fVar5 = *(float *)(param_1 + 0x6c);
      fVar4 = *(float *)(param_1 + 0x44);
      fVar6 = *(float *)(param_1 + 0x78);
      fVar3 = (float)(**(code **)(lVar2 + 0x18))
                               (*(undefined8 *)(lVar2 + 0x40),*(undefined8 *)(lVar2 + 0x28));
      fVar4 = fVar4 * fVar3;
      lVar2 = *(long *)(param_1 + 0x88);
      fVar3 = fVar4;
      if (1.0 < fVar4) {
        fVar3 = 1.0;
      }
      if (fVar4 < 0.0) {
        fVar3 = 0.0;
      }
      *(float *)(param_1 + 0x6c) = fVar5 + (fVar6 - fVar5) * fVar3;
      if (lVar2 != 0) {
        fVar5 = *(float *)(param_1 + 0x70);
        fVar4 = *(float *)(param_1 + 0x44);
        cVar1 = *(char *)(param_1 + 100);
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
        *(float *)(param_1 + 0x70) = fVar5 + (fVar3 - fVar5) * fVar4;
        FUN_05d3e1ec(param_1);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


