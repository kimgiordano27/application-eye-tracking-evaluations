/*
FUNCTION_NAME: MS.Internal.Xml.Cache.XPathNode$$get_LineNumber
ENTRY_POINT: 0550c408
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 70
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: possible_biometrics
MODULES: weak_source_state;validity_gate;ray_interaction;ui_interaction;data_collection;telemetry;keyword_support
EVIDENCE: weak_xr_or_state_hits_5;validity_or_gating_hits_21;ray_or_cast_sink_hits_12;ui_or_gameplay_sink_hits_11;strong_file_logging_hits_4;telemetry_or_network_hits_21;eye_or_gaze_keyword_boost_only;negative_generic_rendering_without_foveation_or_eye_source;negative_generic_render_terms_without_foveation;functionality_possible_biometrics_hits_2
*/


void MS_Internal_Xml_Cache_XPathNode__get_LineNumber(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  long unaff_x19;
  undefined8 *unaff_x20;
  
  FUN_02d4dc40(*(undefined8 *)(param_1 + 0xc58));
                    /* try { // try from 0550c418 to 0560c487 has its CatchHandler @ 0550c418
                       catch() { ... } // from try @ 0550c418 with catch @ 0550c418
                       catch() { ... } // from try @ 0550c4a8 with catch @ 0550c418
                       catch() { ... } // from try @ 0550c52c with catch @ 0550c418 */
  FUN_02d4dc40(
              UnityEngine_XR_Interaction_Toolkit_Interactors_Visuals_CurveVisualController_GetAdjustedEndPointForMaxDistance_00000D24_PostfixBurstDelegate_TypeInfo
              );
  FUN_02d4dc40(
              UnityEngine_XR_Interaction_Toolkit_Interactors_Visuals_CurveVisualController_GetClosestPointOnLine_00000D25_BurstDirectCall_TypeInfo
              );
  FUN_02d4dc40(
              UnityEngine_XR_Interaction_Toolkit_Interactors_Visuals_CurveVisualController_GetClosestPointOnLine_00000D25_PostfixBurstDelegate_TypeInfo
              );
  FUN_02d4dc40(System_Reflection_CustomAttributeData_LazyCAttrData_TypeInfo);
  FUN_02d4dc40(UnityEngine_UIElements_CustomStyleResolvedEvent_<>c_TypeInfo);
  FUN_02d4dc40(UnityEngine_Rendering_Universal_DBufferRenderPass_<>c_TypeInfo);
  FUN_02d4dc40(UnityEngine_Rendering_Universal_DBufferRenderPass_PassData_TypeInfo);
  FUN_02d4dc40(UnityEngine_XR_OpenXR_Features_Interactions_DPadInteraction_<>c_TypeInfo);
  FUN_02d4dc40(UnityEngine_XR_OpenXR_Features_Interactions_DPadInteraction_DPad_TypeInfo);
  FUN_02d4dc40(Mono_Security_Cryptography_DSAManaged_KeyGeneratedEventHandler_TypeInfo);
  FUN_02d4dc40(UnityEngine_UIElements_DataBindingManager_BindingData_TypeInfo);
  FUN_02d4dc40(UnityEngine_UIElements_DataBindingManager_HierarchyBindingTracker_TypeInfo);
  FUN_02d4dc40(UnityEngine_UIElements_DataBindingManager_HierarchyDataSourceTracker_TypeInfo);
  FUN_02d4dc40(UnityEngine_UIElements_DataBindingUtility_<>c_TypeInfo);
  FUN_02d4dc40(System_Data_DataRelationCollection_DataSetRelationCollection_TypeInfo);
  *(undefined1 *)(unaff_x19 + 0xe4b) = 1;
  lVar2 = FUN_02d4dd2c(*unaff_x20,0xaf);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d4dee8();
  }
  if ((*(uint *)(lVar2 + 0x18) & 0xfffffffe) != 0) {
    *(undefined8 *)(lVar2 + 0x28) =
         *(undefined8 *)System_Reflection_CustomAttributeData_LazyCAttrData_TypeInfo;
    thunk_FUN_02dc1ef0((undefined8 *)(lVar2 + 0x28));
    if (2 < *(uint *)(lVar2 + 0x18)) {
      *(undefined8 *)(lVar2 + 0x30) =
           *(undefined8 *)UnityEngine_Rendering_CommandBufferPool_<>c_TypeInfo;
      thunk_FUN_02dc1ef0((undefined8 *)(lVar2 + 0x30));
      if ((*(uint *)(lVar2 + 0x18) & 0xfffffffc) != 0) {
        *(undefined8 *)(lVar2 + 0x38) =
             *(undefined8 *)
              UnityEngine_XR_Interaction_Toolkit_Utilities_BurstPhysicsUtils_GetMultiSegmentConecastParameters_00000361_PostfixBurstDelegate_TypeInfo
        ;
        thunk_FUN_02dc1ef0((undefined8 *)(lVar2 + 0x38));
        if (4 < *(uint *)(lVar2 + 0x18)) {
          *(undefined8 *)(lVar2 + 0x40) =
               *(undefined8 *)TMPro_ColorTween_ColorTweenCallback_TypeInfo;
          thunk_FUN_02dc1ef0((undefined8 *)(lVar2 + 0x40));
          if (0xa8 < *(uint *)(lVar2 + 0x18)) {
            *(undefined8 *)(lVar2 + 0x560) =
                 *(undefined8 *)
                  UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_ProjectOnPlane_00000351_PostfixBurstDelegate_TypeInfo
            ;
            thunk_FUN_02dc1ef0(lVar2 + 0x560);
            if (0xa9 < *(uint *)(lVar2 + 0x18)) {
              *(undefined8 *)(lVar2 + 0x568) =
                   *(undefined8 *)
                    UnityEngine_XR_Interaction_Toolkit_Utilities_Curves_CurveUtility_ElevateQuadraticToCubicBezier_00000441_BurstDirectCall_TypeInfo
              ;
              thunk_FUN_02dc1ef0(lVar2 + 0x568);
              if (0xaa < *(uint *)(lVar2 + 0x18)) {
                *(undefined8 *)(lVar2 + 0x570) =
                     *(undefined8 *)
                      UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_OrthogonalUpVector_0000034D_BurstDirectCall_TypeInfo
                ;
                thunk_FUN_02dc1ef0(lVar2 + 0x570);
                if (5 < *(uint *)(lVar2 + 0x18)) {
                  *(undefined8 *)(lVar2 + 0x48) =
                       *(undefined8 *)System_ComponentModel_Container_Site_TypeInfo;
                  thunk_FUN_02dc1ef0((undefined8 *)(lVar2 + 0x48));
                  if (6 < *(uint *)(lVar2 + 0x18)) {
                    *(undefined8 *)(lVar2 + 0x50) =
                         *(undefined8 *)
                          UnityEngine_XR_Interaction_Toolkit_Interactors_Visuals_CurveVisualController_GetAdjustedEndPointForMaxDistance_00000D24_BurstDirectCall_TypeInfo
                    ;
                    thunk_FUN_02dc1ef0((undefined8 *)(lVar2 + 0x50));
                    if ((*(uint *)(lVar2 + 0x18) & 0xfffffff8) != 0) {
                      *(undefined8 *)(lVar2 + 0x58) =
                           *(undefined8 *)ConvenientLib_PlayerColliderOptions_TypeInfo;
                      thunk_FUN_02dc1ef0((undefined8 *)(lVar2 + 0x58));
                      if (8 < *(uint *)(lVar2 + 0x18)) {
                        *(undefined8 *)(lVar2 + 0x60) =
                             *(undefined8 *)
                              UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_Angle_00000356_PostfixBurstDelegate_TypeInfo
                        ;
                        thunk_FUN_02dc1ef0((undefined8 *)(lVar2 + 0x60));
                        if (9 < *(uint *)(lVar2 + 0x18)) {
                          *(undefined8 *)(lVar2 + 0x68) =
                               *(undefined8 *)
                                UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_OrthogonalUpVector_0000034E_BurstDirectCall_TypeInfo
                          ;
                          thunk_FUN_02dc1ef0((undefined8 *)(lVar2 + 0x68));
                          if (10 < *(uint *)(lVar2 + 0x18)) {
                            *(undefined8 *)(lVar2 + 0x70) =
                                 *(undefined8 *)
                                  Unity_Properties_Internal_ColorPropertyBag_AProperty_TypeInfo;
                            thunk_FUN_02dc1ef0((undefined8 *)(lVar2 + 0x70));
                            if (0xb < *(uint *)(lVar2 + 0x18)) {
                              *(undefined8 *)(lVar2 + 0x78) = *(undefined8 *)PTR_DAT_0665c058;
                              thunk_FUN_02dc1ef0((undefined8 *)(lVar2 + 0x78));
                              if (0xab < *(uint *)(lVar2 + 0x18)) {
                                *(undefined8 *)(lVar2 + 0x578) =
                                     *(undefined8 *)UnityEngine_UIElements_ClickEvent_<>c_TypeInfo;
                                thunk_FUN_02dc1ef0(lVar2 + 0x578);
                                if (0xac < *(uint *)(lVar2 + 0x18)) {
                                  *(undefined8 *)(lVar2 + 0x580) =
                                       *(undefined8 *)
                                        UnityEngine_UIElements_DataBindingManager_HierarchyBindingTracker_TypeInfo
                                  ;
                                  thunk_FUN_02dc1ef0(lVar2 + 0x580);
                                  if (0xc < *(uint *)(lVar2 + 0x18)) {
                                    *(undefined8 *)(lVar2 + 0x80) =
                                         *(undefined8 *)UnityEngine_UIElements_Columns_<>c_TypeInfo;
                                    thunk_FUN_02dc1ef0((undefined8 *)(lVar2 + 0x80));
                                    if (0xd < *(uint *)(lVar2 + 0x18)) {
                                      *(undefined8 *)(lVar2 + 0x88) =
                                           *(undefined8 *)
                                            UnityEngine_UIElements_Column_UxmlObjectFactory_TypeInfo
                                      ;
                                      thunk_FUN_02dc1ef0((undefined8 *)(lVar2 + 0x88));
                                      if (0xe < *(uint *)(lVar2 + 0x18)) {
                                        *(undefined8 *)(lVar2 + 0x90) =
                                             *(undefined8 *)
                                              UnityEngine_XR_Interaction_Toolkit_Utilities_Curves_CurveUtility_CalculateProjectileFlightTime_00000448_PostfixBurstDelegate_TypeInfo
                                        ;
                                        thunk_FUN_02dc1ef0((undefined8 *)(lVar2 + 0x90));
                                        if ((*(uint *)(lVar2 + 0x18) & 0xfffffff0) != 0) {
                                          *(undefined8 *)(lVar2 + 0x98) =
                                               *(undefined8 *)
                                                System_Net_ContextAwareResult_<>c_TypeInfo;
                                          thunk_FUN_02dc1ef0((undefined8 *)(lVar2 + 0x98));
                                          if (0x10 < *(uint *)(lVar2 + 0x18)) {
                                            *(undefined8 *)(lVar2 + 0xa0) =
                                                 *(undefined8 *)
                                                  UnityEngine_UI_CoroutineTween_ColorTween_ColorTweenCallback_TypeInfo
                                            ;
                                            thunk_FUN_02dc1ef0((undefined8 *)(lVar2 + 0xa0));
                                            if (0x11 < *(uint *)(lVar2 + 0x18)) {
                                              *(undefined8 *)(lVar2 + 0xa8) =
                                                   *(undefined8 *)
                                                    UnityEngine_CullingGroup_StateChanged_TypeInfo;
                                              thunk_FUN_02dc1ef0((undefined8 *)(lVar2 + 0xa8));
                                              if (0x12 < *(uint *)(lVar2 + 0x18)) {
                                                *(undefined8 *)(lVar2 + 0xb0) =
                                                     *(undefined8 *)
                                                                                                            
                                                  UnityEngine_UIElements_DataBindingManager_BindingData_TypeInfo
                                                ;
                                                thunk_FUN_02dc1ef0((undefined8 *)(lVar2 + 0xb0));
                                                if (0x13 < *(uint *)(lVar2 + 0x18)) {
                                                  *(undefined8 *)(lVar2 + 0xb8) =
                                                       *(undefined8 *)
                                                                                                                
                                                  UnityEngine_UIElements_ClickDetector_ButtonClickStatus_TypeInfo
                                                  ;
                                                  thunk_FUN_02dc1ef0((undefined8 *)(lVar2 + 0xb8));
                                                  if (0x14 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0xc0) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_LookRotationWithForwardProjectedOnPlane_00000353_PostfixBurstDelegate_TypeInfo
                                                  ;
                                                  thunk_FUN_02dc1ef0((undefined8 *)(lVar2 + 0xc0));
                                                  if (0x15 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 200) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_XR_Interaction_Toolkit_Utilities_BurstLerpUtility_SingleBounceOutLerp_0000034B_PostfixBurstDelegate_TypeInfo
                                                  ;
                                                  thunk_FUN_02dc1ef0((undefined8 *)(lVar2 + 200));
                                                  if (0xad < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x588) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Photon_Pun_UtilityScripts_CountdownTimer_CountdownTimerHasExpired_TypeInfo
                                                  ;
                                                  thunk_FUN_02dc1ef0(lVar2 + 0x588);
                                                  if (0xae < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x590) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  System_Threading_CancellationCallbackInfo_WithSyncContext_TypeInfo
                                                  ;
                                                  thunk_FUN_02dc1ef0(lVar2 + 0x590);
                                                  if (0x16 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0xd0) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  System_ComponentModel_CultureInfoConverter_CultureInfoMapper_TypeInfo
                                                  ;
                                                  thunk_FUN_02dc1ef0((undefined8 *)(lVar2 + 0xd0));
                                                  if (0x17 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0xd8) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_FastSafeDivide_0000035A_BurstDirectCall_TypeInfo
                                                  ;
                                                  thunk_FUN_02dc1ef0((undefined8 *)(lVar2 + 0xd8));
                                                  if (0x18 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0xe0) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  System_Security_Claims_ClaimsIdentity_<get_Claims>d__51_TypeInfo
                                                  ;
                                                  thunk_FUN_02dc1ef0((undefined8 *)(lVar2 + 0xe0));
                                                  if (0x19 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0xe8) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_XR_Interaction_Toolkit_Utilities_BurstPhysicsUtils_GetConecastParameters_00000360_BurstDirectCall_TypeInfo
                                                  ;
                                                  thunk_FUN_02dc1ef0((undefined8 *)(lVar2 + 0xe8));
                                                  if (0x1a < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0xf0) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_Orthogonal_0000035E_BurstDirectCall_TypeInfo
                                                  ;
                                                  thunk_FUN_02dc1ef0((undefined8 *)(lVar2 + 0xf0));
                                                  if (0x1b < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0xf8) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Mono_Security_Cryptography_DSAManaged_KeyGeneratedEventHandler_TypeInfo
                                                  ;
                                                  thunk_FUN_02dc1ef0((undefined8 *)(lVar2 + 0xf8));
                                                  if (0x1c < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x100) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_UIElements_CustomStyleResolvedEvent_<>c_TypeInfo
                                                  ;
                                                  thunk_FUN_02dc1ef0(lVar2 + 0x100);
                                                  if (0x1d < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x108) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_UIElements_DataBindingUtility_<>c_TypeInfo
                                                  ;
                                                  thunk_FUN_02dc1ef0(lVar2 + 0x108);
                                                  if (0x1e < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x110) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  System_Data_DataRelationCollection_DataSetRelationCollection_TypeInfo
                                                  ;
                                                  thunk_FUN_02dc1ef0(lVar2 + 0x110);
                                                  if ((*(uint *)(lVar2 + 0x18) & 0xffffffe0) != 0) {
                                                    *(undefined8 *)(lVar2 + 0x118) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_Angle_00000355_BurstDirectCall_TypeInfo
                                                  ;
                                                  thunk_FUN_02dc1ef0(lVar2 + 0x118);
                                                  if (0x20 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x120) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_Rendering_Universal_Internal_ColorGradingLutPass_PassData_TypeInfo
                                                  ;
                                                  thunk_FUN_02dc1ef0(lVar2 + 0x120);
                                                  if (0x21 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x128) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Unity_Properties_Internal_ColorPropertyBag_RProperty_TypeInfo
                                                  ;
                                                  thunk_FUN_02dc1ef0(lVar2 + 0x128);
                                                  if (0x22 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x130) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  System_Threading_CancellationTokenSource_LinkedNCancellationTokenSource_TypeInfo
                                                  ;
                                                  thunk_FUN_02dc1ef0(lVar2 + 0x130);
                                                  if (0x23 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x138) =
                                                         *(undefined8 *)
                                                          System_Console_WindowsConsole_TypeInfo;
                                                    thunk_FUN_02dc1ef0(lVar2 + 0x138);
                                                    if (0x24 < *(uint *)(lVar2 + 0x18)) {
                                                      *(undefined8 *)(lVar2 + 0x140) =
                                                           *(undefined8 *)
                                                                                                                        
                                                  UnityEngine_Rendering_Universal_Internal_CopyDepthPass_PassData_TypeInfo
                                                  ;
                                                  thunk_FUN_02dc1ef0(lVar2 + 0x140);
                                                  if (0x25 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x148) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_UIElements_EventCallback<DetachFromPanelEvent>_TypeInfo
                                                  ;
                                                  thunk_FUN_02dc1ef0(lVar2 + 0x148);
                                                  if (0x26 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x150) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_Rendering_Universal_Internal_CopyColorPass_<>c_TypeInfo
                                                  ;
                                                  thunk_FUN_02dc1ef0(lVar2 + 0x150);
                                                  if (0x27 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x158) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Mono_Net_Security_Private_CallbackHelpers_<>c__DisplayClass6_0_TypeInfo
                                                  ;
                                                  thunk_FUN_02dc1ef0(lVar2 + 0x158);
                                                  if (0x28 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x160) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_XR_Interaction_Toolkit_Interactors_Visuals_CurveVisualController_ComputeFallBackLine_00000D27_BurstDirectCall_TypeInfo
                                                  ;
                                                  thunk_FUN_02dc1ef0(lVar2 + 0x160);
                                                  if (0x29 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x168) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_LookRotationWithForwardProjectedOnPlane_00000354_PostfixBurstDelegate_TypeInfo
                                                  ;
                                                  thunk_FUN_02dc1ef0(lVar2 + 0x168);
                                                  if (0x2a < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x170) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_InputForUI_CommandEvent_Type_TypeInfo;
                                                  thunk_FUN_02dc1ef0(lVar2 + 0x170);
                                                  if (0x2b < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x178) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_XR_Interaction_Toolkit_Utilities_BurstLerpUtility_BounceOutLerp_00000346_BurstDirectCall_TypeInfo
                                                  ;
                                                  thunk_FUN_02dc1ef0(lVar2 + 0x178);
                                                  if (0x2c < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x180) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_XR_Interaction_Toolkit_Utilities_Curves_CurveUtility_TryGenerateCubicBezierCurve_00000443_PostfixBurstDelegate_TypeInfo
                                                  ;
                                                  thunk_FUN_02dc1ef0(lVar2 + 0x180);
                                                  if (0x2d < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x188) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_Angle_00000356_BurstDirectCall_TypeInfo
                                                  ;
                                                  thunk_FUN_02dc1ef0(lVar2 + 0x188);
                                                  if (0x2e < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 400) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_XR_Interaction_Toolkit_Utilities_Curves_CurveUtility_TryGenerateCubicBezierCurve_00000444_PostfixBurstDelegate_TypeInfo
                                                  ;
                                                  thunk_FUN_02dc1ef0(lVar2 + 400);
                                                  if (0x2f < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x198) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_XR_Interaction_Toolkit_Utilities_BurstLerpUtility_BounceOutLerp_00000347_PostfixBurstDelegate_TypeInfo
                                                  ;
                                                  thunk_FUN_02dc1ef0(lVar2 + 0x198);
                                                  if (0x30 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x1a0) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_UIElements_DataBindingManager_HierarchyDataSourceTracker_TypeInfo
                                                  ;
                                                  thunk_FUN_02dc1ef0(lVar2 + 0x1a0);
                                                  if (0x31 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x1a8) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_InputForUI_CommandEvent_Command_TypeInfo
                                                  ;
                                                  thunk_FUN_02dc1ef0(lVar2 + 0x1a8);
                                                  if (0x32 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x1b0) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_OrthogonalLookRotation_00000350_PostfixBurstDelegate_TypeInfo
                                                  ;
                                                  thunk_FUN_02dc1ef0(lVar2 + 0x1b0);
                                                  if (0x33 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x1b8) =
                                                         *(undefined8 *)
                                                          CosmeticRotationThingie_<>c_TypeInfo;
                                                    thunk_FUN_02dc1ef0(lVar2 + 0x1b8);
                                                    if (0x34 < *(uint *)(lVar2 + 0x18)) {
                                                      *(undefined8 *)(lVar2 + 0x1c0) =
                                                           *(undefined8 *)
                                                                                                                        
                                                  UnityEngine_XR_Interaction_Toolkit_Utilities_BurstLerpUtility_SingleBounceOutLerp_0000034A_BurstDirectCall_TypeInfo
                                                  ;
                                                  thunk_FUN_02dc1ef0(lVar2 + 0x1c0);
                                                  if (0x35 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x1c8) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  System_ComponentModel_CultureInfoConverter_CultureComparer_TypeInfo
                                                  ;
                                                  thunk_FUN_02dc1ef0(lVar2 + 0x1c8);
                                                  if (0x36 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x1d0) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_OrthogonalLookRotation_00000350_BurstDirectCall_TypeInfo
                                                  ;
                                                  thunk_FUN_02dc1ef0(lVar2 + 0x1d0);
                                                  if (0x37 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x1d8) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_XR_Interaction_Toolkit_Utilities_Curves_CurveUtility_ApproximateCubicBezierLength_00000446_BurstDirectCall_TypeInfo
                                                  ;
                                                  thunk_FUN_02dc1ef0(lVar2 + 0x1d8);
                                                  if (0x38 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x1e0) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_XR_Interaction_Toolkit_Utilities_BurstPhysicsUtils_GetSphereOverlapParameters_0000035F_PostfixBurstDelegate_TypeInfo
                                                  ;
                                                  thunk_FUN_02dc1ef0(lVar2 + 0x1e0);
                                                  if (0x39 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x1e8) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_Scale_0000035C_BurstDirectCall_TypeInfo
                                                  ;
                                                  thunk_FUN_02dc1ef0(lVar2 + 0x1e8);
                                                  if (0x3a < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x1f0) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_XR_Interaction_Toolkit_Utilities_BurstLerpUtility_SingleBounceOutLerp_0000034B_BurstDirectCall_TypeInfo
                                                  ;
                                                  thunk_FUN_02dc1ef0(lVar2 + 0x1f0);
                                                  if (0x3b < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x1f8) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_Rendering_Universal_Internal_CopyColorPass_PassData_TypeInfo
                                                  ;
                                                  thunk_FUN_02dc1ef0(lVar2 + 0x1f8);
                                                  if (0x3c < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x200) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_UIElements_ColumnLayout_<>c__DisplayClass54_0_TypeInfo
                                                  ;
                                                  thunk_FUN_02dc1ef0(lVar2 + 0x200);
                                                  if (0x3d < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x208) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_Angle_00000355_PostfixBurstDelegate_TypeInfo
                                                  ;
                                                  thunk_FUN_02dc1ef0(lVar2 + 0x208);
                                                  if (0x3e < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x210) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_XR_Interaction_Toolkit_Utilities_Curves_CurveUtility_CalculateProjectileFlightTime_00000448_BurstDirectCall_TypeInfo
                                                  ;
                                                  thunk_FUN_02dc1ef0(lVar2 + 0x210);
                                                  if ((*(uint *)(lVar2 + 0x18) & 0xffffffc0) != 0) {
                                                    *(undefined8 *)(lVar2 + 0x218) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_FastVectorEquals_00000357_PostfixBurstDelegate_TypeInfo
                                                  ;
                                                  thunk_FUN_02dc1ef0(lVar2 + 0x218);
                                                  if (0x40 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x220) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Mono_Net_Security_ChainValidationHelper_<>c__DisplayClass11_0_TypeInfo
                                                  ;
                                                  thunk_FUN_02dc1ef0(lVar2 + 0x220);
                                                  if (0x41 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x228) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Receiver_Rendering_ColorMaterialPropertyAffordanceReceiver_ShaderPropertyLookup_TypeInfo
                                                  ;
                                                  thunk_FUN_02dc1ef0(lVar2 + 0x228);
                                                  if (0x42 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x230) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  System_Text_RegularExpressions_CaptureCollection_Enumerator_TypeInfo
                                                  ;
                                                  thunk_FUN_02dc1ef0(lVar2 + 0x230);
                                                  if (0x43 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x238) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_OrthogonalUpVector_0000034E_PostfixBurstDelegate_TypeInfo
                                                  ;
                                                  thunk_FUN_02dc1ef0(lVar2 + 0x238);
                                                  if (0x44 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x240) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  System_Runtime_Remoting_Contexts_CrossContextChannel_ContextRestoreSink_TypeInfo
                                                  ;
                                                  thunk_FUN_02dc1ef0(lVar2 + 0x240);
                                                  if (0x45 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x248) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  System_Security_Cryptography_CryptoStream_<>c_TypeInfo
                                                  ;
                                                  thunk_FUN_02dc1ef0(lVar2 + 0x248);
                                                  if (0x46 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x250) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_XR_Interaction_Toolkit_Utilities_Curves_CurveUtility_TryGenerateCubicBezierCurve_00000444_BurstDirectCall_TypeInfo
                                                  ;
                                                  thunk_FUN_02dc1ef0(lVar2 + 0x250);
                                                  if (0x47 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 600) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_UIElements_Cursor_PropertyBag_TypeInfo
                                                  ;
                                                  thunk_FUN_02dc1ef0(lVar2 + 600);
                                                  if (0x48 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x260) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_XR_OpenXR_Features_Interactions_DPadInteraction_DPad_TypeInfo
                                                  ;
                                                  thunk_FUN_02dc1ef0(lVar2 + 0x260);
                                                  if (0x49 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x268) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_ProjectOnPlane_00000352_BurstDirectCall_TypeInfo
                                                  ;
                                                  thunk_FUN_02dc1ef0(lVar2 + 0x268);
                                                  if (0x4a < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x270) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_XR_Interaction_Toolkit_Utilities_Curves_CurveUtility_SampleProjectilePoint_00000447_PostfixBurstDelegate_TypeInfo
                                                  ;
                                                  thunk_FUN_02dc1ef0(lVar2 + 0x270);
                                                  if (0x4b < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x278) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  CosmeticRotationThingie_<RefreshAllKiosks>d__5_TypeInfo
                                                  ;
                                                  thunk_FUN_02dc1ef0(lVar2 + 0x278);
                                                  if (0x4c < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x280) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_Rendering_Universal_CapturePass_<>c_TypeInfo
                                                  ;
                                                  thunk_FUN_02dc1ef0(lVar2 + 0x280);
                                                  if (0x4d < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x288) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_UIElements_Button_UxmlFactory_TypeInfo
                                                  ;
                                                  thunk_FUN_02dc1ef0(lVar2 + 0x288);
                                                  if (0x4e < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x290) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_OrthogonalLookRotation_0000034F_PostfixBurstDelegate_TypeInfo
                                                  ;
                                                  thunk_FUN_02dc1ef0(lVar2 + 0x290);
                                                  if (0x4f < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x298) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  System_Globalization_CultureInfo_OnCultureInfoChangedDelegate_TypeInfo
                                                  ;
                                                  thunk_FUN_02dc1ef0(lVar2 + 0x298);
                                                  if (0x50 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x2a0) =
                                                         *(undefined8 *)
                                                          ChimpRig_<EyeBlink>d__18_TypeInfo;
                                                    thunk_FUN_02dc1ef0(lVar2 + 0x2a0);
                                                    if (0x51 < *(uint *)(lVar2 + 0x18)) {
                                                      *(undefined8 *)(lVar2 + 0x2a8) =
                                                           *(undefined8 *)
                                                                                                                        
                                                  UnityEngine_UIElements_ColumnLayout_<>c__DisplayClass53_0_TypeInfo
                                                  ;
                                                  thunk_FUN_02dc1ef0(lVar2 + 0x2a8);
                                                  if (0x52 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x2b0) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_Canvas_WillRenderCanvases_TypeInfo;
                                                  thunk_FUN_02dc1ef0(lVar2 + 0x2b0);
                                                  if (0x53 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x2b8) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_Rendering_Universal_ClearTargetsPass_<>c_TypeInfo
                                                  ;
                                                  thunk_FUN_02dc1ef0(lVar2 + 0x2b8);
                                                  if (0x54 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x2c0) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_OrthogonalLookRotation_0000034F_BurstDirectCall_TypeInfo
                                                  ;
                                                  thunk_FUN_02dc1ef0(lVar2 + 0x2c0);
                                                  if (0x55 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x2c8) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Newtonsoft_Json_Utilities_ConvertUtils_<>c__DisplayClass8_0_TypeInfo
                                                  ;
                                                  thunk_FUN_02dc1ef0(lVar2 + 0x2c8);
                                                  if (0x56 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x2d0) =
                                                         *(undefined8 *)ConvenientLib_<>c_TypeInfo;
                                                    thunk_FUN_02dc1ef0(lVar2 + 0x2d0);
                                                    if (0x57 < *(uint *)(lVar2 + 0x18)) {
                                                      *(undefined8 *)(lVar2 + 0x2d8) =
                                                           *(undefined8 *)
                                                                                                                        
                                                  UnityEngine_XR_Interaction_Toolkit_Interactors_Visuals_CurveVisualController_AdjustCastHitEndPoint_00000D26_BurstDirectCall_TypeInfo
                                                  ;
                                                  thunk_FUN_02dc1ef0(lVar2 + 0x2d8);
                                                  if (0x58 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x2e0) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_XR_Interaction_Toolkit_Utilities_Curves_CurveUtility_SampleQuadraticBezierPoint_0000043F_PostfixBurstDelegate_TypeInfo
                                                  ;
                                                  thunk_FUN_02dc1ef0(lVar2 + 0x2e0);
                                                  if (0x59 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x2e8) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_FastSafeDivide_0000035A_PostfixBurstDelegate_TypeInfo
                                                  ;
                                                  thunk_FUN_02dc1ef0(lVar2 + 0x2e8);
                                                  if (0x5a < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x2f0) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_XR_Interaction_Toolkit_Utilities_Curves_CurveUtility_GenerateCubicBezierCurve_00000442_PostfixBurstDelegate_TypeInfo
                                                  ;
                                                  thunk_FUN_02dc1ef0(lVar2 + 0x2f0);
                                                  if (0x5b < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x2f8) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  System_Runtime_Remoting_Channels_CrossAppDomainSink_ProcessMessageRes_TypeInfo
                                                  ;
                                                  thunk_FUN_02dc1ef0(lVar2 + 0x2f8);
                                                  if (0x5c < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x300) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_XR_Interaction_Toolkit_Utilities_Curves_CurveUtility_ElevateQuadraticToCubicBezier_00000441_PostfixBurstDelegate_TypeInfo
                                                  ;
                                                  thunk_FUN_02dc1ef0(lVar2 + 0x300);
                                                  if (0x5d < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x308) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Unity_Properties_Internal_ColorPropertyBag_GProperty_TypeInfo
                                                  ;
                                                  thunk_FUN_02dc1ef0(lVar2 + 0x308);
                                                  if (0x5e < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x310) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_XR_Interaction_Toolkit_Utilities_Curves_CurveUtility_ApproximateCubicBezierLength_00000446_PostfixBurstDelegate_TypeInfo
                                                  ;
                                                  thunk_FUN_02dc1ef0(lVar2 + 0x310);
                                                  if (0x5f < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x318) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  System_IO_ChunkedMemoryStream_MemoryChunk_TypeInfo
                                                  ;
                                                  thunk_FUN_02dc1ef0(lVar2 + 0x318);
                                                  if (0x60 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 800) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_Rendering_Universal_Internal_ColorGradingLutPass_ShaderConstants_TypeInfo
                                                  ;
                                                  thunk_FUN_02dc1ef0(lVar2 + 800);
                                                  if (0x61 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x328) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_XR_Interaction_Toolkit_Utilities_Curves_CurveUtility_SampleProjectilePoint_00000447_BurstDirectCall_TypeInfo
                                                  ;
                                                  thunk_FUN_02dc1ef0(lVar2 + 0x328);
                                                  if (0x62 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x330) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_XR_Interaction_Toolkit_Interactors_Visuals_CurveVisualController_GetAdjustedEndPointForMaxDistance_00000D24_PostfixBurstDelegate_TypeInfo
                                                  ;
                                                  thunk_FUN_02dc1ef0(lVar2 + 0x330);
                                                  if (99 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x338) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_UI_Button_ButtonClickedEvent_TypeInfo;
                                                  thunk_FUN_02dc1ef0(lVar2 + 0x338);
                                                  if (100 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x340) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_FastSafeDivide_00000359_PostfixBurstDelegate_TypeInfo
                                                  ;
                                                  thunk_FUN_02dc1ef0(lVar2 + 0x340);
                                                  if (0x65 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x348) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  System_Threading_CancellationTokenSource_Linked1CancellationTokenSource_TypeInfo
                                                  ;
                                                  thunk_FUN_02dc1ef0(lVar2 + 0x348);
                                                  if (0x66 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x350) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  System_Net_CommandStream_PipelineEntry_TypeInfo;
                                                  thunk_FUN_02dc1ef0(lVar2 + 0x350);
                                                  if (0x67 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x358) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_XR_Interaction_Toolkit_Utilities_Curves_CurveUtility_SampleCubicBezierPoint_00000440_BurstDirectCall_TypeInfo
                                                  ;
                                                  thunk_FUN_02dc1ef0(lVar2 + 0x358);
                                                  if (0x68 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x360) =
                                                         *(undefined8 *)
                                                          Core_<>c__DisplayClass47_0_TypeInfo;
                                                    thunk_FUN_02dc1ef0(lVar2 + 0x360);
                                                    if (0x69 < *(uint *)(lVar2 + 0x18)) {
                                                      *(undefined8 *)(lVar2 + 0x368) =
                                                           *(undefined8 *)
                                                                                                                        
                                                  UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_FastVectorEquals_00000357_BurstDirectCall_TypeInfo
                                                  ;
                                                  thunk_FUN_02dc1ef0(lVar2 + 0x368);
                                                  if (0x6a < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x370) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_XR_Interaction_Toolkit_Utilities_Curves_CurveUtility_TryGenerateCubicBezierCurve_00000443_BurstDirectCall_TypeInfo
                                                  ;
                                                  thunk_FUN_02dc1ef0(lVar2 + 0x370);
                                                  if (0x6b < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x378) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_Rendering_Universal_Internal_CopyDepthPass_ShaderConstants_TypeInfo
                                                  ;
                                                  thunk_FUN_02dc1ef0(lVar2 + 0x378);
                                                  if (0x6c < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x380) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_Scale_0000035B_BurstDirectCall_TypeInfo
                                                  ;
                                                  thunk_FUN_02dc1ef0(lVar2 + 0x380);
                                                  if (0x6d < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x388) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Unity_Burst_BurstString_NumberFormatKind_TypeInfo;
                                                  thunk_FUN_02dc1ef0(lVar2 + 0x388);
                                                  if (0x6e < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x390) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_Scale_0000035C_PostfixBurstDelegate_TypeInfo
                                                  ;
                                                  thunk_FUN_02dc1ef0(lVar2 + 0x390);
                                                  if (0x6f < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x398) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Oculus_Platform_Callback_RequestCallback_TypeInfo;
                                                  thunk_FUN_02dc1ef0(lVar2 + 0x398);
                                                  if (0x70 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x3a0) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  System_Net_CookieCollection_CookieCollectionEnumerator_TypeInfo
                                                  ;
                                                  thunk_FUN_02dc1ef0(lVar2 + 0x3a0);
                                                  if (0x71 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x3a8) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Mono_Net_Security_Private_CallbackHelpers_<>c__DisplayClass0_0_TypeInfo
                                                  ;
                                                  thunk_FUN_02dc1ef0(lVar2 + 0x3a8);
                                                  if (0x72 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x3b0) =
                                                         *(undefined8 *)Core_<>c_TypeInfo;
                                                    thunk_FUN_02dc1ef0(lVar2 + 0x3b0);
                                                    if (0x73 < *(uint *)(lVar2 + 0x18)) {
                                                      *(undefined8 *)(lVar2 + 0x3b8) =
                                                           *(undefined8 *)
                                                                                                                        
                                                  System_Net_CredentialCache_CredentialEnumerator_TypeInfo
                                                  ;
                                                  thunk_FUN_02dc1ef0(lVar2 + 0x3b8);
                                                  if (0x74 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x3c0) =
                                                         *(undefined8 *)CosmeticKiosk_<>c_TypeInfo;
                                                    thunk_FUN_02dc1ef0(lVar2 + 0x3c0);
                                                    if (0x75 < *(uint *)(lVar2 + 0x18)) {
                                                      *(undefined8 *)(lVar2 + 0x3c8) =
                                                           *(undefined8 *)
                                                                                                                        
                                                  UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_Orthogonal_0000035E_PostfixBurstDelegate_TypeInfo
                                                  ;
                                                  thunk_FUN_02dc1ef0(lVar2 + 0x3c8);
                                                  if (0x76 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x3d0) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_XR_Interaction_Toolkit_Utilities_BurstLerpUtility_BounceOutLerp_00000346_PostfixBurstDelegate_TypeInfo
                                                  ;
                                                  thunk_FUN_02dc1ef0(lVar2 + 0x3d0);
                                                  if (0x77 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x3d8) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_UIElements_ComputedTransitionUtils_<>c_TypeInfo
                                                  ;
                                                  thunk_FUN_02dc1ef0(lVar2 + 0x3d8);
                                                  if (0x78 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x3e0) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_FastVectorEquals_00000358_PostfixBurstDelegate_TypeInfo
                                                  ;
                                                  thunk_FUN_02dc1ef0(lVar2 + 0x3e0);
                                                  if (0x79 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 1000) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_UIElements_ContextualMenuPopulateEvent_<>c_TypeInfo
                                                  ;
                                                  thunk_FUN_02dc1ef0(lVar2 + 1000);
                                                  if (0x7a < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x3f0) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_Rendering_Universal_DBufferRenderPass_<>c_TypeInfo
                                                  ;
                                                  thunk_FUN_02dc1ef0(lVar2 + 0x3f0);
                                                  if (0x7b < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x3f8) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_Rendering_CameraCaptureBridge_CameraEntry_TypeInfo
                                                  ;
                                                  thunk_FUN_02dc1ef0(lVar2 + 0x3f8);
                                                  if (0x7c < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x400) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Unity_Properties_Internal_ColorPropertyBag_BProperty_TypeInfo
                                                  ;
                                                  thunk_FUN_02dc1ef0(lVar2 + 0x400);
                                                  if (0x7d < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x408) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_XR_Interaction_Toolkit_Utilities_BurstPhysicsUtils_GetConecastOffset_00000362_PostfixBurstDelegate_TypeInfo
                                                  ;
                                                  thunk_FUN_02dc1ef0(lVar2 + 0x408);
                                                  if (0x7e < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x410) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_UIElements_ContextClickEvent_<>c_TypeInfo
                                                  ;
                                                  thunk_FUN_02dc1ef0(lVar2 + 0x410);
                                                  if ((*(uint *)(lVar2 + 0x18) & 0xffffff80) != 0) {
                                                    *(undefined8 *)(lVar2 + 0x418) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_Rendering_CoreUtils_<>c_TypeInfo;
                                                  thunk_FUN_02dc1ef0(lVar2 + 0x418);
                                                  if (0x80 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x420) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_XR_Interaction_Toolkit_Interactors_Visuals_CurveVisualController_GetClosestPointOnLine_00000D25_BurstDirectCall_TypeInfo
                                                  ;
                                                  thunk_FUN_02dc1ef0(lVar2 + 0x420);
                                                  if (0x81 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x428) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_FastSafeDivide_00000359_BurstDirectCall_TypeInfo
                                                  ;
                                                  thunk_FUN_02dc1ef0(lVar2 + 0x428);
                                                  if (0x82 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x430) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_XR_Interaction_Toolkit_Utilities_BurstPhysicsUtils_GetSphereOverlapParameters_0000035F_BurstDirectCall_TypeInfo
                                                  ;
                                                  thunk_FUN_02dc1ef0(lVar2 + 0x430);
                                                  if (0x83 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x438) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  System_Threading_CancellationToken_<>c_TypeInfo;
                                                  thunk_FUN_02dc1ef0(lVar2 + 0x438);
                                                  if (0x84 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x440) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_Scale_0000035B_PostfixBurstDelegate_TypeInfo
                                                  ;
                                                  thunk_FUN_02dc1ef0(lVar2 + 0x440);
                                                  if (0x85 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x448) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Internal_Cryptography_Pal_CertificateData_<ReadReverseRdns>d__21_TypeInfo
                                                  ;
                                                  thunk_FUN_02dc1ef0(lVar2 + 0x448);
                                                  if (0x86 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x450) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_XR_Interaction_Toolkit_Utilities_Curves_CurveUtility_GenerateCubicBezierCurve_00000442_BurstDirectCall_TypeInfo
                                                  ;
                                                  thunk_FUN_02dc1ef0(lVar2 + 0x450);
                                                  if (0x87 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x458) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_ProjectOnPlane_00000351_BurstDirectCall_TypeInfo
                                                  ;
                                                  thunk_FUN_02dc1ef0(lVar2 + 0x458);
                                                  if (0x88 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x460) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Unity_Properties_ConversionRegistry_ConverterKeyComparer_TypeInfo
                                                  ;
                                                  thunk_FUN_02dc1ef0(lVar2 + 0x460);
                                                  if (0x89 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x468) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_XR_Interaction_Toolkit_Utilities_Curves_CurveUtility_SampleQuadraticBezierPoint_0000043F_BurstDirectCall_TypeInfo
                                                  ;
                                                  thunk_FUN_02dc1ef0(lVar2 + 0x468);
                                                  if (0x8a < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x470) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_XR_Interaction_Toolkit_Locomotion_Climbing_ClimbTeleportInteractor_<>c_TypeInfo
                                                  ;
                                                  thunk_FUN_02dc1ef0(lVar2 + 0x470);
                                                  if (0x8b < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x478) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_LookRotationWithForwardProjectedOnPlane_00000354_BurstDirectCall_TypeInfo
                                                  ;
                                                  thunk_FUN_02dc1ef0(lVar2 + 0x478);
                                                  if (0x8c < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x480) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_UIElements_Columns_UxmlObjectFactory_TypeInfo
                                                  ;
                                                  thunk_FUN_02dc1ef0(lVar2 + 0x480);
                                                  if (0x8d < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x488) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_UIElements_EventCallback<CustomStyleResolvedEvent>_TypeInfo
                                                  ;
                                                  thunk_FUN_02dc1ef0(lVar2 + 0x488);
                                                  if (0x8e < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x490) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_XR_Interaction_Toolkit_UI_CanvasOptimizer_CanvasState_TypeInfo
                                                  ;
                                                  thunk_FUN_02dc1ef0(lVar2 + 0x490);
                                                  if (0x8f < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x498) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  System_Threading_CancellationTokenSource_Linked2CancellationTokenSource_TypeInfo
                                                  ;
                                                  thunk_FUN_02dc1ef0(lVar2 + 0x498);
                                                  if (0x90 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x4a0) =
                                                         *(undefined8 *)Core_GamemodeType_TypeInfo;
                                                    thunk_FUN_02dc1ef0(lVar2 + 0x4a0);
                                                    if (0x91 < *(uint *)(lVar2 + 0x18)) {
                                                      *(undefined8 *)(lVar2 + 0x4a8) =
                                                           *(undefined8 *)
                                                                                                                        
                                                  UnityEngine_XR_Interaction_Toolkit_Utilities_BurstPhysicsUtils_GetConecastParameters_00000360_PostfixBurstDelegate_TypeInfo
                                                  ;
                                                  thunk_FUN_02dc1ef0(lVar2 + 0x4a8);
                                                  if (0x92 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x4b0) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_XR_OpenXR_Features_Interactions_DPadInteraction_<>c_TypeInfo
                                                  ;
                                                  thunk_FUN_02dc1ef0(lVar2 + 0x4b0);
                                                  if (0x93 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x4b8) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_XR_Interaction_Toolkit_Utilities_Curves_CurveUtility_SampleCubicBezierPoint_00000440_PostfixBurstDelegate_TypeInfo
                                                  ;
                                                  thunk_FUN_02dc1ef0(lVar2 + 0x4b8);
                                                  if (0x94 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x4c0) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_ProjectOnPlane_00000352_PostfixBurstDelegate_TypeInfo
                                                  ;
                                                  thunk_FUN_02dc1ef0(lVar2 + 0x4c0);
                                                  if (0x95 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x4c8) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_XR_Interaction_Toolkit_Interactors_Visuals_CurveVisualController_ComputeFallBackLine_00000D27_PostfixBurstDelegate_TypeInfo
                                                  ;
                                                  thunk_FUN_02dc1ef0(lVar2 + 0x4c8);
                                                  if (0x96 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x4d0) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_XR_Interaction_Toolkit_Utilities_BurstLerpUtility_BounceOutLerp_00000347_BurstDirectCall_TypeInfo
                                                  ;
                                                  thunk_FUN_02dc1ef0(lVar2 + 0x4d0);
                                                  if (0x97 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x4d8) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  System_Net_ChunkedInputStream_ReadBufferState_TypeInfo
                                                  ;
                                                  thunk_FUN_02dc1ef0(lVar2 + 0x4d8);
                                                  if (0x98 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x4e0) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_XR_Interaction_Toolkit_Utilities_BurstPhysicsUtils_GetConecastOffset_00000362_BurstDirectCall_TypeInfo
                                                  ;
                                                  thunk_FUN_02dc1ef0(lVar2 + 0x4e0);
                                                  if (0x99 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x4e8) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_UIElements_ButtonStripField_UxmlFactory_TypeInfo
                                                  ;
                                                  thunk_FUN_02dc1ef0(lVar2 + 0x4e8);
                                                  if (0x9a < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x4f0) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_UIElements_ConverterGroups_<>c_TypeInfo
                                                  ;
                                                  thunk_FUN_02dc1ef0(lVar2 + 0x4f0);
                                                  if (0x9b < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x4f8) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_OrthogonalUpVector_0000034D_PostfixBurstDelegate_TypeInfo
                                                  ;
                                                  thunk_FUN_02dc1ef0(lVar2 + 0x4f8);
                                                  if (0x9c < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x500) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_XR_Interaction_Toolkit_Interactors_Visuals_CurveVisualController_GetClosestPointOnLine_00000D25_PostfixBurstDelegate_TypeInfo
                                                  ;
                                                  thunk_FUN_02dc1ef0(lVar2 + 0x500);
                                                  if (0x9d < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x508) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_Rendering_Universal_DBufferRenderPass_PassData_TypeInfo
                                                  ;
                                                  thunk_FUN_02dc1ef0(lVar2 + 0x508);
                                                  if (0x9e < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x510) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_UIElements_CameraScreenRaycaster_<>c_TypeInfo
                                                  ;
                                                  thunk_FUN_02dc1ef0(lVar2 + 0x510);
                                                  if (0x9f < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x518) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_XR_Interaction_Toolkit_Interactors_Casters_CurveInteractionCaster_RaycastHitComparer_TypeInfo
                                                  ;
                                                  thunk_FUN_02dc1ef0(lVar2 + 0x518);
                                                  if (0xa0 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x520) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_UI_Button_<OnFinishSubmit>d__9_TypeInfo
                                                  ;
                                                  thunk_FUN_02dc1ef0(lVar2 + 0x520);
                                                  if (0xa1 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x528) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_XR_Interaction_Toolkit_Utilities_BurstPhysicsUtils_GetMultiSegmentConecastParameters_00000361_BurstDirectCall_TypeInfo
                                                  ;
                                                  thunk_FUN_02dc1ef0(lVar2 + 0x528);
                                                  if (0xa2 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x530) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_XR_Interaction_Toolkit_Utilities_BurstLerpUtility_SingleBounceOutLerp_0000034A_PostfixBurstDelegate_TypeInfo
                                                  ;
                                                  thunk_FUN_02dc1ef0(lVar2 + 0x530);
                                                  if (0xa3 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x538) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_Rendering_Universal_Internal_CopyDepthPass_<>c_TypeInfo
                                                  ;
                                                  thunk_FUN_02dc1ef0(lVar2 + 0x538);
                                                  if (0xa4 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x540) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_LookRotationWithForwardProjectedOnPlane_00000353_BurstDirectCall_TypeInfo
                                                  ;
                                                  thunk_FUN_02dc1ef0(lVar2 + 0x540);
                                                  if (0xa5 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x548) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_XR_Interaction_Toolkit_Interactors_Visuals_CurveVisualController_AdjustCastHitEndPoint_00000D26_PostfixBurstDelegate_TypeInfo
                                                  ;
                                                  thunk_FUN_02dc1ef0(lVar2 + 0x548);
                                                  if (0xa6 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x550) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_Rendering_Universal_Internal_ColorGradingLutPass_<>c_TypeInfo
                                                  ;
                                                  thunk_FUN_02dc1ef0(lVar2 + 0x550);
                                                  puVar1 = 
                                                  UnityEngine_XR_Interaction_Toolkit_Utilities_BurstLerpUtility_BezierLerp_00000344_PostfixBurstDelegate_TypeInfo
                                                  ;
                                                  if (0xa7 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x558) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_FastVectorEquals_00000358_BurstDirectCall_TypeInfo
                                                  ;
                                                  thunk_FUN_02dc1ef0(lVar2 + 0x558);
                                                  plVar3 = (long *)(*(long *)(*(long *)puVar1 + 0xb8
                                                                             ) + 8);
                                                  *plVar3 = lVar2;
                                                  thunk_FUN_02dc1ef0(plVar3,lVar2);
                                                  return;
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d4def0();
}


