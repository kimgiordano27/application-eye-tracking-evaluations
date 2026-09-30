/*
FUNCTION_NAME: IsNewTargetWithinThreshold_000009D3U24PostfixBurstDelegate_Invoke_m00F1040902265C5D5ACDA13D0AC9610AB9D93306_OpenStatic
ENTRY_POINT: 019f0338
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_5;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_5
*/


/* IsNewTargetWithinThreshold_000009D3U24PostfixBurstDelegate_Invoke_m00F1040902265C5D5ACDA13D0AC9610AB9D93306_OpenStatic(IsNewTargetWithinThreshold_000009D3U24PostfixBurstDelegate_t05367920AE5AD4EF52ACADCE710C74E6D686BB3F*,
   float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*,
   float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*, float, float, float, float, MethodInfo const*)
    */

uint IsNewTargetWithinThreshold_000009D3U24PostfixBurstDelegate_Invoke_m00F1040902265C5D5ACDA13D0AC9610AB9D93306_OpenStatic
               (IsNewTargetWithinThreshold_000009D3U24PostfixBurstDelegate_t05367920AE5AD4EF52ACADCE710C74E6D686BB3F
                *param_1,float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E *param_2,
               float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E *param_3,float param_4,float param_5
               ,float param_6,float param_7,MethodInfo *param_8)

{
  uint uVar1;
  
  uVar1 = (**(code **)(param_1 + 0x10))(param_4,param_5,param_6,param_7,param_2,param_3,param_8);
  return uVar1 & 1;
}


