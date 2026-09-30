/*
FUNCTION_NAME: FUN_0629aaa8
ENTRY_POINT: 0629aaa8
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;data_collection;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_8;ray_or_cast_sink_hits_3;strong_file_logging_hits_3;telemetry_or_network_hits_3;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_0629aaa8(undefined8 param_1,long *param_2)

{
  byte bVar1;
  byte bVar2;
  long lVar3;
  undefined8 *puVar4;
  
  if ((DAT_06b8bad3 & 1) == 0) {
    FUN_02d6084c(Method_Unity_VisualScripting_TypeUtility_GetDictionaryItemType__);
    FUN_02d6084c(Method_UnityEngine_Rendering_UI_UIFoldout_SetState__);
    FUN_02d6084c(Method_UnityEngine_XR_Interaction_Toolkit_UI_UIInputModule_PerformRaycast__);
    FUN_02d6084c(Method_SonicBloom_Koreo_Demos_UIMessageSetter_UpdateText__);
    FUN_02d6084c(Method_Unity_Burst_Intrinsics_Arm_Neon_vbslq_s8__);
    FUN_02d6084c(Method_Unity_Burst_Intrinsics_Arm_Neon_vcage_f32__);
    FUN_02d6084c(Method_Unity_Burst_Intrinsics_Arm_Neon_vcage_f64__);
    FUN_02d6084c(Method_Unity_Burst_Intrinsics_Arm_Neon_vcaged_f64__);
    FUN_02d6084c(Method_System_Net_WebRequestStream_Close_internal__);
    FUN_02d6084c(Method_Unity_Burst_Intrinsics_Arm_Neon_vcageq_f32__);
    FUN_02d6084c(Method_UnityEngine_UIElements_UIRRepaintUpdater_OnPanelAtlasChanged__);
    DAT_06b8bad3 = 1;
  }
  if (param_2 == (long *)0x0) {
    return;
  }
  lVar3 = *param_2;
  bVar1 = *(byte *)(lVar3 + 0x130);
  bVar2 = *(byte *)(*(long *)Method_SonicBloom_Koreo_Demos_UIMessageSetter_UpdateText__ + 0x130);
  if ((bVar2 <= bVar1) &&
     (*(long *)(*(long *)(lVar3 + 200) + (ulong)bVar2 * 8 + -8) ==
      *(long *)Method_SonicBloom_Koreo_Demos_UIMessageSetter_UpdateText__)) {
    FUN_0629ad5c(param_1,param_2);
    return;
  }
  bVar2 = *(byte *)(*(long *)Method_UnityEngine_UIElements_UIRRepaintUpdater_OnPanelAtlasChanged__ +
                   0x130);
  if ((bVar2 <= bVar1) &&
     (*(long *)(*(long *)(lVar3 + 200) + (ulong)bVar2 * 8 + -8) ==
      *(long *)Method_UnityEngine_UIElements_UIRRepaintUpdater_OnPanelAtlasChanged__)) {
    FUN_0629b744(param_1,param_2);
    return;
  }
  bVar2 = *(byte *)(*(long *)Method_UnityEngine_Rendering_UI_UIFoldout_SetState__ + 0x130);
  if ((bVar2 <= bVar1) &&
     (*(long *)(*(long *)(lVar3 + 200) + (ulong)bVar2 * 8 + -8) ==
      *(long *)Method_UnityEngine_Rendering_UI_UIFoldout_SetState__)) {
    FUN_0629b958(param_1,param_2);
    return;
  }
  bVar2 = *(byte *)(*(long *)
                     Method_UnityEngine_XR_Interaction_Toolkit_UI_UIInputModule_PerformRaycast__ +
                   0x130);
  if ((bVar2 <= bVar1) &&
     (*(long *)(*(long *)(lVar3 + 200) + (ulong)bVar2 * 8 + -8) ==
      *(long *)Method_UnityEngine_XR_Interaction_Toolkit_UI_UIInputModule_PerformRaycast__)) {
    FUN_0629bbb8(param_1);
    return;
  }
  bVar2 = *(byte *)(*(long *)Method_Unity_VisualScripting_TypeUtility_GetDictionaryItemType__ +
                   0x130);
  if ((bVar2 <= bVar1) &&
     (*(long *)(*(long *)(lVar3 + 200) + (ulong)bVar2 * 8 + -8) ==
      *(long *)Method_Unity_VisualScripting_TypeUtility_GetDictionaryItemType__)) {
    FUN_0629bc9c();
    return;
  }
  bVar2 = *(byte *)(*(long *)Method_System_Net_WebRequestStream_Close_internal__ + 0x130);
  if ((bVar1 < bVar2) ||
     (puVar4 = (undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vcage_f32__,
     *(long *)(*(long *)(lVar3 + 200) + (ulong)bVar2 * 8 + -8) !=
     *(long *)Method_System_Net_WebRequestStream_Close_internal__)) {
    bVar2 = *(byte *)(*(long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vcageq_f32__ + 0x130);
    if ((bVar1 < bVar2) ||
       (puVar4 = (undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vcage_f64__,
       *(long *)(*(long *)(lVar3 + 200) + (ulong)bVar2 * 8 + -8) !=
       *(long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vcageq_f32__)) {
      bVar2 = *(byte *)(*(long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vcaged_f64__ + 0x130);
      if (bVar1 < bVar2) {
        return;
      }
      puVar4 = (undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vbslq_s8__;
      if (*(long *)(*(long *)(lVar3 + 200) + (ulong)bVar2 * 8 + -8) !=
          *(long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vcaged_f64__) {
        return;
      }
    }
  }
  FUN_0346a0b4(param_1,param_2,*puVar4);
  return;
}


