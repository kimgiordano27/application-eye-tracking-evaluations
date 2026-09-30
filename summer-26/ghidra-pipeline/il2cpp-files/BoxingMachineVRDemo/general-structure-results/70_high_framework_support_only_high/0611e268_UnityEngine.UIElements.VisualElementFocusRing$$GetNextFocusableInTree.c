/*
FUNCTION_NAME: UnityEngine.UIElements.VisualElementFocusRing$$GetNextFocusableInTree
ENTRY_POINT: 0611e268
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: foveated_rendering
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry;foveation_rendering;keyword_support
EVIDENCE: weak_xr_or_state_hits_16;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_1;strong_foveation_hits_1;eye_or_gaze_keyword_boost_only;negative_framework_support_context_without_confirmed_app_level_gaze_flow;framework_foveation_support_not_confirmed_dynamic_eye_tracking;functionality_foveated_rendering
*/


undefined8 UnityEngine_UIElements_VisualElementFocusRing__GetNextFocusableInTree(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined4 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined4 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined4 in_stack_00000048;
  
  FUN_02d6084c(*(undefined8 *)(param_1 + 0xaf0));
  FUN_02d6084c(Method_UnityEngine_XR_OpenXR_OpenXRSettings_GetFeature<ARPlaneFeature>__);
  FUN_02d6084c(Method_UnityEngine_XR_OpenXR_OpenXRSettings_GetFeature<DPadInteraction>__);
  FUN_02d6084c(Method_UnityEngine_XR_OpenXR_OpenXRSettings_GetFeature<FoveatedRenderingFeature>__);
  FUN_02d6084c(Method_UnityEngine_XR_OpenXR_OpenXRSettings_GetFeature<HandInteractionProfile>__);
  *(undefined1 *)(unaff_x21 + 0x9c4) = 1;
  FUN_04f2f068(0);
  puVar3 = 
  Method_UnityEngine_XR_OpenXR_CompositionLayers_OpenXRProjectionLayer_OnStereoRenderTextureIdsCallback__
  ;
  puVar2 = Method_UnityEngine_XR_OpenXR_CompositionLayers_OpenXRProjectionLayer_OnCameraPostRender__
  ;
  puVar1 = Method_UnityEngine_InputSystem_OnScreen_OnScreenStick_OnPointerUp__;
  if (unaff_x19 != 0) {
    FUN_04e97bc4();
    in_stack_00000038 = *(undefined8 *)puVar1;
    in_stack_00000040 = 0xffffffffffffffff;
    in_stack_00000048 = *(undefined4 *)(unaff_x20 + 0x10);
    FUN_0503c914(&stack0x00000038,0);
    FUN_04e97bc4();
    FUN_04e97bc4();
    FUN_04e98bb0();
    FUN_04e97bc4();
    in_stack_00000020 = *(undefined8 *)puVar3;
    in_stack_00000028 = 0xffffffffffffffff;
    in_stack_00000030 = *(undefined4 *)(unaff_x20 + 0x20);
    FUN_0503c914(&stack0x00000020,0);
    FUN_04e97bc4();
    FUN_04e97bc4();
    in_stack_00000008 = *(undefined8 *)puVar2;
    in_stack_00000010 = 0xffffffffffffffff;
    in_stack_00000018 = *(undefined4 *)(unaff_x20 + 0x24);
    FUN_0503c914(&stack0x00000008,0);
    FUN_04e97bc4();
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


