/*
FUNCTION_NAME: OVRPlugin.OVRP_1_30_0$$ovrp_SendEvent2
ENTRY_POINT: 05d49bb8
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 98
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin_OVRP_1_30_0__ovrp_SendEvent2
               (long param_1,float param_2,undefined1 param_3 [16],float param_4,float param_5,
               float param_6,float param_7,long param_8)

{
  long lVar1;
  long in_x9;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar2 = *(float *)(in_x9 + 0xc84);
  fVar3 = param_5 / ((param_5 / (param_7 * fVar2)) / (param_5 / param_6) + param_5);
  if (*(char *)(param_1 + 0x10) == '\0') {
    fVar4 = *(float *)(param_1 + 0x18);
  }
  else {
    *(undefined1 *)(param_1 + 0x10) = 0;
    fVar4 = param_4;
  }
  fVar3 = param_4 * fVar3 + (1.0 - fVar3) * fVar4;
  *(float *)(param_1 + 0x14) = fVar3;
  *(float *)(param_1 + 0x18) = fVar3;
  lVar1 = *(long *)(param_8 + 0x28);
  if (lVar1 != 0) {
    fVar2 = 1.0 / ((1.0 / ((*(float *)(param_8 + 0x14) + ABS(fVar3) * *(float *)(param_8 + 0x18)) *
                          fVar2)) / (param_5 / param_6) + 1.0);
    if (*(char *)(lVar1 + 0x10) == '\0') {
      fVar3 = *(float *)(lVar1 + 0x18);
    }
    else {
      *(undefined1 *)(lVar1 + 0x10) = 0;
      fVar3 = param_2;
    }
    fVar2 = fVar2 * param_2 + (1.0 - fVar2) * fVar3;
    *(float *)(lVar1 + 0x14) = fVar2;
    *(float *)(lVar1 + 0x18) = fVar2;
    *(float *)(param_8 + 0x10) = fVar2;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


