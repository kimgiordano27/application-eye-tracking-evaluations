/*
FUNCTION_NAME: IsNewTargetWithinThreshold_000009D3U24PostfixBurstDelegate_Invoke_m00F1040902265C5D5ACDA13D0AC9610AB9D93306_Multicast
ENTRY_POINT: 019f01fc
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


/* IsNewTargetWithinThreshold_000009D3U24PostfixBurstDelegate_Invoke_m00F1040902265C5D5ACDA13D0AC9610AB9D93306_Multicast(IsNewTargetWithinThreshold_000009D3U24PostfixBurstDelegate_t05367920AE5AD4EF52ACADCE710C74E6D686BB3F*,
   float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*,
   float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*, float, float, float, float, MethodInfo const*)
    */

byte IsNewTargetWithinThreshold_000009D3U24PostfixBurstDelegate_Invoke_m00F1040902265C5D5ACDA13D0AC9610AB9D93306_Multicast
               (IsNewTargetWithinThreshold_000009D3U24PostfixBurstDelegate_t05367920AE5AD4EF52ACADCE710C74E6D686BB3F
                *param_1,float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E *param_2,
               float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E *param_3,float param_4,float param_5
               ,float param_6,float param_7,MethodInfo *param_8)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  ulong local_60;
  byte local_51;
  
  uVar2 = *(ulong *)(*(long *)(param_1 + 0x78) + 0x18);
  lVar1 = DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771::GetAddressAtUnchecked
                    (*(DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771 **)(param_1 + 0x78),
                     0);
  local_51 = 0;
  for (local_60 = 0; local_60 < uVar2; local_60 = local_60 + 1) {
    lVar3 = *(long *)(lVar1 + local_60 * 8);
    local_51 = (**(code **)(lVar3 + 0x18))
                         (param_4,param_5,param_6,param_7,*(undefined8 *)(lVar3 + 0x40),param_2,
                          param_3,*(undefined8 *)(lVar3 + 0x28));
    local_51 = local_51 & 1;
  }
  return local_51;
}


