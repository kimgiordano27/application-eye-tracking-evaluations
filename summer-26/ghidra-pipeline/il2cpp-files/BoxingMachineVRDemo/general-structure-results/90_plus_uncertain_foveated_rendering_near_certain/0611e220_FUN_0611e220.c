/*
FUNCTION_NAME: FUN_0611e220
ENTRY_POINT: 0611e220
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 96
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: weak_source_state;validity_gate;telemetry;foveation_rendering;keyword_support
EVIDENCE: weak_xr_or_state_hits_21;validity_or_gating_hits_1;telemetry_or_network_hits_2;strong_foveation_hits_2;eye_or_gaze_keyword_boost_only;functionality_foveated_rendering
*/


undefined8 FUN_0611e220(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  
  if ((DAT_06b8a9c4 & 1) == 0) {
    FUN_02d6084c(Method_UnityEngine_InputSystem_OnScreen_OnScreenStick_OnPointerUp__);
    FUN_02d6084c(
                Method_UnityEngine_XR_OpenXR_CompositionLayers_OpenXRProjectionLayer_OnCameraPostRender__
                );
    FUN_02d6084c(
                Method_UnityEngine_XR_OpenXR_CompositionLayers_OpenXRProjectionLayer_OnStereoRenderTextureIdsCallback__
                );
    FUN_02d6084c(Method_UnityEngine_XR_OpenXR_OpenXRSettings_GetFeature<ARPlaneFeature>__);
    FUN_02d6084c(Method_UnityEngine_XR_OpenXR_OpenXRSettings_GetFeature<DPadInteraction>__);
    FUN_02d6084c(Method_UnityEngine_XR_OpenXR_OpenXRSettings_GetFeature<FoveatedRenderingFeature>__)
    ;
    FUN_02d6084c(Method_UnityEngine_XR_OpenXR_OpenXRSettings_GetFeature<HandInteractionProfile>__);
    DAT_06b8a9c4 = 1;
  }
  FUN_04f2f068(0);
  puVar6 = Method_UnityEngine_XR_OpenXR_OpenXRSettings_GetFeature<HandInteractionProfile>__;
  puVar5 = Method_UnityEngine_XR_OpenXR_OpenXRSettings_GetFeature<FoveatedRenderingFeature>__;
  puVar4 = Method_UnityEngine_XR_OpenXR_OpenXRSettings_GetFeature<ARPlaneFeature>__;
  puVar3 = 
  Method_UnityEngine_XR_OpenXR_CompositionLayers_OpenXRProjectionLayer_OnStereoRenderTextureIdsCallback__
  ;
  puVar2 = Method_UnityEngine_XR_OpenXR_CompositionLayers_OpenXRProjectionLayer_OnCameraPostRender__
  ;
  puVar1 = Method_UnityEngine_InputSystem_OnScreen_OnScreenStick_OnPointerUp__;
  if (param_2 != 0) {
    FUN_04e97bc4(param_2,*(undefined8 *)
                          Method_UnityEngine_XR_OpenXR_OpenXRSettings_GetFeature<DPadInteraction>__,
                 0);
    local_68 = *(undefined8 *)puVar1;
    uStack_60 = 0xffffffffffffffff;
    local_58 = *(undefined4 *)(param_1 + 0x10);
    uVar7 = FUN_0503c914(&local_68,0);
    FUN_04e97bc4(param_2,uVar7,0);
    FUN_04e97bc4(param_2,*(undefined8 *)puVar5,0);
    FUN_04e98bb0(param_2,*(undefined8 *)(param_1 + 0x18),0);
    FUN_04e97bc4(param_2,*(undefined8 *)puVar4,0);
    local_80 = *(undefined8 *)puVar3;
    uStack_78 = 0xffffffffffffffff;
    local_70 = *(undefined4 *)(param_1 + 0x20);
    uVar7 = FUN_0503c914(&local_80,0);
    FUN_04e97bc4(param_2,uVar7,0);
    FUN_04e97bc4(param_2,*(undefined8 *)puVar6,0);
    local_98 = *(undefined8 *)puVar2;
    uStack_90 = 0xffffffffffffffff;
    local_88 = *(undefined4 *)(param_1 + 0x24);
    uVar7 = FUN_0503c914(&local_98,0);
    FUN_04e97bc4(param_2,uVar7,0);
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


