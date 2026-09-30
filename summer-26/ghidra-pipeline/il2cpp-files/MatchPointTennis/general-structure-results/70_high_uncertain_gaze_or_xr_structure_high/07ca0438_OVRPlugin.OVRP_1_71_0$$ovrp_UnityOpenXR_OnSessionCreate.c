/*
FUNCTION_NAME: OVRPlugin.OVRP_1_71_0$$ovrp_UnityOpenXR_OnSessionCreate
ENTRY_POINT: 07ca0438
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 87
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


float OVRPlugin_OVRP_1_71_0__ovrp_UnityOpenXR_OnSessionCreate
                (undefined1 param_1 [16],undefined4 param_2)

{
  long unaff_x19;
  long unaff_x20;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float unaff_s9;
  float unaff_s10;
  undefined4 uStack0000000000000004;
  
  uStack0000000000000004 = param_2;
  FUN_09516eb8(0);
  fVar1 = (float)FUN_07ca0274();
  fVar2 = (float)FUN_09516bac(0);
  fVar5 = *(float *)(unaff_x20 + 0x2c);
  fVar6 = *(float *)(unaff_x20 + 0x30);
  fVar4 = *(float *)(unaff_x20 + 0x28);
  fVar3 = (float)FUN_095165fc(*(undefined4 *)(unaff_x20 + 0x24),fVar4,fVar5,fVar6,0);
  return (*(float *)(unaff_x19 + 0x2c) *
          ((unaff_s10 * fVar3 + fVar1 * fVar4 + unaff_s9 * fVar6) - fVar2 * fVar5) +
         *(float *)(unaff_x19 + 0x24) *
         (((fVar1 * fVar6 - fVar2 * fVar3) - unaff_s9 * fVar4) - unaff_s10 * fVar5) +
         *(float *)(unaff_x19 + 0x30) *
         ((unaff_s9 * fVar5 + fVar1 * fVar3 + fVar2 * fVar6) - unaff_s10 * fVar4)) -
         *(float *)(unaff_x19 + 0x28) *
         ((fVar2 * fVar4 + fVar1 * fVar5 + unaff_s10 * fVar6) - unaff_s9 * fVar3);
}


