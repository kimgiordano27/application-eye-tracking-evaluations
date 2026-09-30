/*
FUNCTION_NAME: OVRPlugin.OVRP_1_71_0$$ovrp_UnityOpenXR_OnSessionBegin
ENTRY_POINT: 04f86f80
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 109
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_5;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin_OVRP_1_71_0__ovrp_UnityOpenXR_OnSessionBegin(float param_1,float param_2)

{
  char cVar1;
  float fVar2;
  long lVar3;
  long unaff_x19;
  float fVar4;
  float fVar5;
  float unaff_s8;
  float fVar6;
  float unaff_s9;
  float fVar7;
  float unaff_s12;
  
  lVar3 = *(long *)(unaff_x19 + 0x88);
  if (param_1 <= unaff_s8) {
    unaff_s8 = param_1;
  }
  if (0.0 <= param_1) {
    unaff_s9 = unaff_s8;
  }
  *(float *)(unaff_x19 + 0x6c) = unaff_s12 + param_2 * unaff_s9;
  if (lVar3 != 0) {
    fVar6 = *(float *)(unaff_x19 + 0x44);
    cVar1 = *(char *)(unaff_x19 + 100);
    fVar7 = *(float *)(unaff_x19 + 0x70);
    fVar4 = (float)(**(code **)(lVar3 + 0x18))
                             (*(undefined8 *)(lVar3 + 0x40),*(undefined8 *)(lVar3 + 0x28));
    fVar6 = fVar6 * fVar4;
    fVar4 = 0.0;
    if (cVar1 != '\0') {
      fVar4 = 1.0;
    }
    fVar5 = 1.0;
    if (fVar6 <= 1.0) {
      fVar5 = fVar6;
    }
    fVar2 = 0.0;
    if (0.0 <= fVar6) {
      fVar2 = fVar5;
    }
    *(float *)(unaff_x19 + 0x70) = fVar7 + (fVar4 - fVar7) * fVar2;
    FUN_04f87210();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


