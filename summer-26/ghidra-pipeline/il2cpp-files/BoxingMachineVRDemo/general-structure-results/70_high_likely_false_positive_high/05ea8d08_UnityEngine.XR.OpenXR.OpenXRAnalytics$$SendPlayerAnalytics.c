/*
FUNCTION_NAME: UnityEngine.XR.OpenXR.OpenXRAnalytics$$SendPlayerAnalytics
ENTRY_POINT: 05ea8d08
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 89
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_10;ray_or_cast_sink_hits_4;ui_or_gameplay_sink_hits_15;telemetry_or_network_hits_4;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void UnityEngine_XR_OpenXR_OpenXRAnalytics__SendPlayerAnalytics(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  long unaff_x19;
  undefined8 unaff_x20;
  long lVar6;
  long *unaff_x22;
  undefined8 *unaff_x24;
  
  FUN_04d566c0();
  *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x10) = unaff_x20;
  thunk_FUN_02dd37b4();
  uVar3 = thunk_FUN_02d9d534(*unaff_x24);
  FUN_03955b3c();
  *(undefined8 *)(unaff_x19 + 0x100) = uVar3;
  thunk_FUN_02dd37b4(unaff_x19 + 0x100,uVar3);
  lVar4 = *unaff_x22;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar4 = *unaff_x22;
  }
  puVar2 = Method_VRUIP_ButtonController_ExpandBorderHover__;
  puVar1 = Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_Scale__;
  lVar6 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x18);
  if (lVar6 == 0) {
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar4 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar4 + 0xb8);
    lVar6 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BurstLerpUtility_SingleBounceOutLerp__
                              );
    FUN_04d566c0(lVar6,uVar3,
                 *(undefined8 *)
                  Method_UnityEngine_InputSystem_Utilities_CSharpCodeHelpers_MakeIdentifier__,0);
    plVar5 = (long *)(*(long *)(*unaff_x22 + 0xb8) + 0x18);
    *plVar5 = lVar6;
    thunk_FUN_02dd37b4(plVar5,lVar6);
  }
  uVar3 = thunk_FUN_02d9d534(*(undefined8 *)puVar2);
  FUN_03955b3c(uVar3,lVar6,0,0,0,0,10000,*(undefined8 *)puVar1);
  *(undefined8 *)(unaff_x19 + 0x108) = uVar3;
  thunk_FUN_02dd37b4(unaff_x19 + 0x108,uVar3);
  lVar4 = *unaff_x22;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar4 = *unaff_x22;
  }
  puVar2 = Method_VRUIP_ButtonController_ExitAnimation__;
  puVar1 = Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BurstPhysicsUtils_GetConecastOffset__
  ;
  lVar6 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x20);
  if (lVar6 == 0) {
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar4 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar4 + 0xb8);
    lVar6 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BurstLerpUtility_BezierLerp__
                              );
    FUN_04d566c0(lVar6,uVar3,*(undefined8 *)Method_System_IO_CStreamReader_Read__,0);
    plVar5 = (long *)(*(long *)(*unaff_x22 + 0xb8) + 0x20);
    *plVar5 = lVar6;
    thunk_FUN_02dd37b4(plVar5,lVar6);
  }
  uVar3 = thunk_FUN_02d9d534(*(undefined8 *)puVar2);
  FUN_03955b3c(uVar3,lVar6,0,0,0,0,10000,*(undefined8 *)puVar1);
  *(undefined8 *)(unaff_x19 + 0x110) = uVar3;
  thunk_FUN_02dd37b4(unaff_x19 + 0x110,uVar3);
  lVar4 = *unaff_x22;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar4 = *unaff_x22;
  }
  puVar2 = Method_VRUIP_ButtonController_OnUp__;
  puVar1 = Method_Unity_Burst_BurstString_OptsSplit__;
  lVar6 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x28);
  if (lVar6 == 0) {
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar4 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar4 + 0xb8);
    lVar6 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_FastSafeDivide__
                              );
    FUN_04d566c0(lVar6,uVar3,*(undefined8 *)Method_Unity_VisualScripting_Cache_Store__,0);
    plVar5 = (long *)(*(long *)(*unaff_x22 + 0xb8) + 0x28);
    *plVar5 = lVar6;
    thunk_FUN_02dd37b4(plVar5,lVar6);
  }
  uVar3 = thunk_FUN_02d9d534(*(undefined8 *)puVar2);
  FUN_03955b3c(uVar3,lVar6,0,0,0,0,10000,*(undefined8 *)puVar1);
  *(undefined8 *)(unaff_x19 + 0x118) = uVar3;
  thunk_FUN_02dd37b4(unaff_x19 + 0x118,uVar3);
  lVar4 = *unaff_x22;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar4 = *unaff_x22;
  }
  puVar2 = Method_VRUIP_ButtonController_ShineHover__;
  puVar1 = Method_Unity_Burst_BurstString_ParseFormatToFormatOptions__;
  lVar6 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x30);
  if (lVar6 == 0) {
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar4 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar4 + 0xb8);
    lVar6 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BurstLerpUtility_BounceOutLerp__
                              );
    FUN_04d566c0(lVar6,uVar3,*(undefined8 *)Method_System_Globalization_Calendar_TimeToTicks__,0);
    plVar5 = (long *)(*(long *)(*unaff_x22 + 0xb8) + 0x30);
    *plVar5 = lVar6;
    thunk_FUN_02dd37b4(plVar5,lVar6);
  }
  uVar3 = thunk_FUN_02d9d534(*(undefined8 *)puVar2);
  FUN_03955b3c(uVar3,lVar6,0,0,0,0,10000,*(undefined8 *)puVar1);
  *(undefined8 *)(unaff_x19 + 0x120) = uVar3;
  thunk_FUN_02dd37b4(unaff_x19 + 0x120,uVar3);
  lVar4 = *unaff_x22;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar4 = *unaff_x22;
  }
  puVar2 = Method_VRUIP_ButtonController_ExpandBorderExit__;
  puVar1 = Method_UnityEngine_UIElements_Button_OnNavigationSubmit__;
  lVar6 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x38);
  if (lVar6 == 0) {
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar4 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar4 + 0xb8);
    lVar6 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_FastVectorEquals__
                              );
    FUN_04d566c0(lVar6,uVar3,*(undefined8 *)Method_System_Globalization_Calendar_ToFourDigitYear__,0
                );
    plVar5 = (long *)(*(long *)(*unaff_x22 + 0xb8) + 0x38);
    *plVar5 = lVar6;
    thunk_FUN_02dd37b4(plVar5,lVar6);
  }
  uVar3 = thunk_FUN_02d9d534(*(undefined8 *)puVar2);
  FUN_03955b3c(uVar3,lVar6,0,0,0,0,10000,*(undefined8 *)puVar1);
  *(undefined8 *)(unaff_x19 + 0x128) = uVar3;
  thunk_FUN_02dd37b4(unaff_x19 + 0x128,uVar3);
  lVar4 = *unaff_x22;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar4 = *unaff_x22;
  }
  puVar2 = Method_VRUIP_ButtonController_OnExit__;
  puVar1 = 
  Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BurstPhysicsUtils_GetSphereOverlapParameters__
  ;
  lVar6 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x40);
  if (lVar6 == 0) {
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar4 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar4 + 0xb8);
    lVar6 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_Angle__
                              );
    FUN_04d566c0(lVar6,uVar3,*(undefined8 *)Method_System_Globalization_Calendar_VerifyWritable__,0)
    ;
    plVar5 = (long *)(*(long *)(*unaff_x22 + 0xb8) + 0x40);
    *plVar5 = lVar6;
    thunk_FUN_02dd37b4(plVar5,lVar6);
  }
  uVar3 = thunk_FUN_02d9d534(*(undefined8 *)puVar2);
  FUN_03955b3c(uVar3,lVar6,0,0,0,0,10000,*(undefined8 *)puVar1);
  *(undefined8 *)(unaff_x19 + 0x130) = uVar3;
  thunk_FUN_02dd37b4(unaff_x19 + 0x130,uVar3);
  lVar4 = *unaff_x22;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar4 = *unaff_x22;
  }
  puVar2 = Method_VRUIP_ButtonController_<SetupButtonProperties>b__43_0__;
  puVar1 = 
  Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BurstPhysicsUtils_GetMultiSegmentConecastParameters__
  ;
  lVar6 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x48);
  if (lVar6 == 0) {
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar4 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar4 + 0xb8);
    lVar6 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_Angle__
                              );
    FUN_04d566c0(lVar6,uVar3,
                 *(undefined8 *)
                  Method_System_Globalization_CalendarData_GetJapaneseEnglishEraNames__,0);
    plVar5 = (long *)(*(long *)(*unaff_x22 + 0xb8) + 0x48);
    *plVar5 = lVar6;
    thunk_FUN_02dd37b4(plVar5,lVar6);
  }
  uVar3 = thunk_FUN_02d9d534(*(undefined8 *)puVar2);
  FUN_03955b3c(uVar3,lVar6,0,0,0,0,10000,*(undefined8 *)puVar1);
  *(undefined8 *)(unaff_x19 + 0x138) = uVar3;
  thunk_FUN_02dd37b4(unaff_x19 + 0x138,uVar3);
  lVar4 = *unaff_x22;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar4 = *unaff_x22;
  }
  puVar2 = Method_VRUIP_ButtonController_SlideExit__;
  puVar1 = 
  Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BurstPhysicsUtils_GetConecastParameters__;
  lVar6 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x50);
  if (lVar6 == 0) {
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar4 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar4 + 0xb8);
    lVar6 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BurstLerpUtility_BounceOutLerp__
                              );
    FUN_04d566c0(lVar6,uVar3,
                 *(undefined8 *)Method_System_Globalization_CalendarData_GetJapaneseEraNames__,0);
    plVar5 = (long *)(*(long *)(*unaff_x22 + 0xb8) + 0x50);
    *plVar5 = lVar6;
    thunk_FUN_02dd37b4(plVar5,lVar6);
  }
  uVar3 = thunk_FUN_02d9d534(*(undefined8 *)puVar2);
  FUN_03955b3c(uVar3,lVar6,0,0,0,0,10000,*(undefined8 *)puVar1);
  *(undefined8 *)(unaff_x19 + 0x140) = uVar3;
  thunk_FUN_02dd37b4(unaff_x19 + 0x140,uVar3);
  lVar4 = *unaff_x22;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar4 = *unaff_x22;
  }
  puVar2 = Method_VRUIP_ButtonController_ShineExit__;
  puVar1 = Method_Unity_Burst_BurstRuntime_GetUTF8LiteralPointer__;
  lVar6 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x58);
  if (lVar6 == 0) {
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar4 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar4 + 0xb8);
    lVar6 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BurstLerpUtility_SingleBounceOutLerp__
                              );
    FUN_04d566c0(lVar6,uVar3,*(undefined8 *)Method_Oculus_Platform_CAPI_StringToNative__,0);
    plVar5 = (long *)(*(long *)(*unaff_x22 + 0xb8) + 0x58);
    *plVar5 = lVar6;
    thunk_FUN_02dd37b4(plVar5,lVar6);
  }
  uVar3 = thunk_FUN_02d9d534(*(undefined8 *)puVar2);
  FUN_03955b3c(uVar3,lVar6,0,0,0,0,10000,*(undefined8 *)puVar1);
  *(undefined8 *)(unaff_x19 + 0x148) = uVar3;
  thunk_FUN_02dd37b4(unaff_x19 + 0x148,uVar3);
  lVar4 = *unaff_x22;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar4 = *unaff_x22;
  }
  puVar2 = Method_VRUIP_ButtonController_OnDown__;
  puVar1 = Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_Scale__;
  lVar6 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x60);
  if (lVar6 == 0) {
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar4 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar4 + 0xb8);
    lVar6 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_LookRotationWithForwardProjectedOnPlane__
                              );
    FUN_04d566c0(lVar6,uVar3,*(undefined8 *)Method_RootMotion_FinalIK_CCDBendGoal_BeforeIK__,0);
    plVar5 = (long *)(*(long *)(*unaff_x22 + 0xb8) + 0x60);
    *plVar5 = lVar6;
    thunk_FUN_02dd37b4(plVar5,lVar6);
  }
  uVar3 = thunk_FUN_02d9d534(*(undefined8 *)puVar2);
  FUN_03955b3c(uVar3,lVar6,0,0,0,0,10000,*(undefined8 *)puVar1);
  *(undefined8 *)(unaff_x19 + 0x150) = uVar3;
  thunk_FUN_02dd37b4(unaff_x19 + 0x150,uVar3);
  thunk_FUN_060665ac();
  return;
}


