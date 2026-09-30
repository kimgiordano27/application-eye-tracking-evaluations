/*
FUNCTION_NAME: FUN_0538403c
ENTRY_POINT: 0538403c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 89
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry;frame_behavior;keyword_support
EVIDENCE: weak_xr_or_state_hits_16;validity_or_gating_hits_21;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;eye_or_gaze_keyword_boost_only;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_0538403c(void)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  
  puVar1 = PTR_DAT_06313630;
  if ((DAT_066d0749 & 1) == 0) {
    FUN_02b3c81c(OVR_OpenVR_IVRSystem__ComputeDistortion_TypeInfo);
    FUN_02b3c81c(PTR_DAT_06313630);
    FUN_02b3c81c(OVR_OpenVR_IVRSystem__DriverDebugRequest_TypeInfo);
    FUN_02b3c81c(OVR_OpenVR_IVRSystem__GetArrayTrackedDeviceProperty_TypeInfo);
    FUN_02b3c81c(OVR_OpenVR_IVRSystem__GetBoolTrackedDeviceProperty_TypeInfo);
    FUN_02b3c81c(OVR_OpenVR_IVRSystem__GetButtonIdNameFromEnum_TypeInfo);
    FUN_02b3c81c(OVR_OpenVR_IVRSystem__GetControllerAxisTypeNameFromEnum_TypeInfo);
    FUN_02b3c81c(OVR_OpenVR_IVRSystem__GetControllerRoleForTrackedDeviceIndex_TypeInfo);
    FUN_02b3c81c(OVR_OpenVR_IVRSystem__GetControllerState_TypeInfo);
    FUN_02b3c81c(OVR_OpenVR_IVRSystem__GetControllerStateWithPose_TypeInfo);
    FUN_02b3c81c(OVR_OpenVR_IVRSystem__GetD3D9AdapterIndex_TypeInfo);
    FUN_02b3c81c(OVR_OpenVR_IVRSystem__GetDXGIOutputInfo_TypeInfo);
    FUN_02b3c81c(OVR_OpenVR_IVRSystem__GetDeviceToAbsoluteTrackingPose_TypeInfo);
                    /* try { // try from 053840f8 to 05484187 has its CatchHandler @ 053840f8
                       catch() { ... } // from try @ 053840f8 with catch @ 053840f8
                       catch() { ... } // from try @ 05384244 with catch @ 053840f8
                       catch() { ... } // from try @ 05384300 with catch @ 053840f8
                       catch() { ... } // from try @ 05384360 with catch @ 053840f8
                       catch() { ... } // from try @ 05384390 with catch @ 053840f8
                       catch() { ... } // from try @ 0538442c with catch @ 053840f8 */
    FUN_02b3c81c(OVR_OpenVR_IVRSystem__GetEventTypeNameFromEnum_TypeInfo);
    FUN_02b3c81c(OVR_OpenVR_IVRSystem__GetEyeToHeadTransform_TypeInfo);
    FUN_02b3c81c(OVR_OpenVR_IVRSystem__GetFloatTrackedDeviceProperty_TypeInfo);
    FUN_02b3c81c(OVR_OpenVR_IVRSystem__GetHiddenAreaMesh_TypeInfo);
    FUN_02b3c81c(OVR_OpenVR_IVRSystem__GetInt32TrackedDeviceProperty_TypeInfo);
    FUN_02b3c81c(OVR_OpenVR_IVRSystem__GetMatrix34TrackedDeviceProperty_TypeInfo);
    FUN_02b3c81c(OVR_OpenVR_IVRSystem__GetOutputDevice_TypeInfo);
    FUN_02b3c81c(OVR_OpenVR_IVRSystem__GetProjectionMatrix_TypeInfo);
    FUN_02b3c81c(OVR_OpenVR_IVRSystem__GetProjectionRaw_TypeInfo);
    FUN_02b3c81c(OVR_OpenVR_IVRSystem__GetPropErrorNameFromEnum_TypeInfo);
    FUN_02b3c81c(OVR_OpenVR_IVRSystem__GetRawZeroPoseToStandingAbsoluteTrackingPose_TypeInfo);
    FUN_02b3c81c(OVR_OpenVR_IVRSystem__GetRecommendedRenderTargetSize_TypeInfo);
                    /* try { // try from 05384188 to 0548418b has its CatchHandler @ 05384360 */
    FUN_02b3c81c(OVR_OpenVR_IVRSystem__GetSeatedZeroPoseToStandingAbsoluteTrackingPose_TypeInfo);
    FUN_02b3c81c(OVR_OpenVR_IVRSystem__GetSortedTrackedDeviceIndicesOfClass_TypeInfo);
                    /* try { // try from 053841a4 to 054841ab has its CatchHandler @ 05384320 */
    FUN_02b3c81c(OVR_OpenVR_IVRSystem__GetStringTrackedDeviceProperty_TypeInfo);
                    /* try { // try from 053841b0 to 054841bb has its CatchHandler @ 0538431c */
    FUN_02b3c81c(OVR_OpenVR_IVRSystem__GetTimeSinceLastVsync_TypeInfo);
                    /* try { // try from 053841bc to 054841c7 has its CatchHandler @ 05384318 */
    FUN_02b3c81c(OVR_OpenVR_IVRSystem__GetTrackedDeviceActivityLevel_TypeInfo);
                    /* try { // try from 053841c8 to 054841cf has its CatchHandler @ 05384314 */
    FUN_02b3c81c(OVR_OpenVR_IVRSystem__GetTrackedDeviceClass_TypeInfo);
    FUN_02b3c81c(OVR_OpenVR_IVRSystem__GetTrackedDeviceIndexForControllerRole_TypeInfo);
    FUN_02b3c81c(OVR_OpenVR_IVRSystem__GetUint64TrackedDeviceProperty_TypeInfo);
    FUN_02b3c81c(OVR_OpenVR_IVRSystem__IsDisplayOnDesktop_TypeInfo);
                    /* try { // try from 053841f0 to 054841f3 has its CatchHandler @ 05384328 */
    FUN_02b3c81c(OVR_OpenVR_IVRSystem__IsInputAvailable_TypeInfo);
                    /* try { // try from 05384204 to 0548420b has its CatchHandler @ 0538430c */
    FUN_02b3c81c(OVR_OpenVR_IVRSystem__IsSteamVRDrawingControllers_TypeInfo);
                    /* try { // try from 0538420c to 0548421b has its CatchHandler @ 05384308 */
    FUN_02b3c81c(OVR_OpenVR_IVRSystem__IsTrackedDeviceConnected_TypeInfo);
    FUN_02b3c81c(OVR_OpenVR_IVRSystem__PerformFirmwareUpdate_TypeInfo);
    FUN_02b3c81c(OVR_OpenVR_IVRSystem__PollNextEvent_TypeInfo);
                    /* try { // try from 05384230 to 05484243 has its CatchHandler @ 05384300 */
    FUN_02b3c81c(OVR_OpenVR_IVRSystem__PollNextEventWithPose_TypeInfo);
    FUN_02b3c81c(OVR_OpenVR_IVRSystem__ResetSeatedZeroPose_TypeInfo);
                    /* try { // try from 05384244 to 054842eb has its CatchHandler @ 053840f8 */
    FUN_02b3c81c(OVR_OpenVR_IVRSystem__SetDisplayVisibility_TypeInfo);
    FUN_02b3c81c(OVR_OpenVR_IVRSystem__ShouldApplicationPause_TypeInfo);
    FUN_02b3c81c(OVR_OpenVR_IVRSystem__ShouldApplicationReduceRenderingWork_TypeInfo);
    FUN_02b3c81c(OVR_OpenVR_IVRSystem__TriggerHapticPulse_TypeInfo);
    FUN_02b3c81c(OVR_OpenVR_IVRTrackedCamera__AcquireVideoStreamingService_TypeInfo);
    FUN_02b3c81c(OVR_OpenVR_IVRTrackedCamera__GetCameraErrorNameFromEnum_TypeInfo);
    FUN_02b3c81c(OVR_OpenVR_IVRTrackedCamera__GetCameraFrameSize_TypeInfo);
    FUN_02b3c81c(OVR_OpenVR_IVRTrackedCamera__GetCameraIntrinsics_TypeInfo);
    FUN_02b3c81c(OVR_OpenVR_IVRTrackedCamera__GetCameraProjection_TypeInfo);
    FUN_02b3c81c(OVR_OpenVR_IVRTrackedCamera__GetVideoStreamFrameBuffer_TypeInfo);
    FUN_02b3c81c(OVR_OpenVR_IVRTrackedCamera__GetVideoStreamTextureD3D11_TypeInfo);
    FUN_02b3c81c(OVR_OpenVR_IVRTrackedCamera__GetVideoStreamTextureGL_TypeInfo);
    FUN_02b3c81c(OVR_OpenVR_IVRTrackedCamera__GetVideoStreamTextureSize_TypeInfo);
    FUN_02b3c81c(OVR_OpenVR_IVRTrackedCamera__HasCamera_TypeInfo);
                    /* try { // try from 053842ec to 054842ef has its CatchHandler @ 05384360 */
                    /* try { // try from 053842f0 to 054842f3 has its CatchHandler @ 05384324 */
                    /* try { // try from 053842f4 to 054842f7 has its CatchHandler @ 05384328 */
    FUN_02b3c81c(OVR_OpenVR_IVRTrackedCamera__ReleaseVideoStreamTextureGL_TypeInfo);
                    /* try { // try from 053842f8 to 054842fb has its CatchHandler @ 05384310 */
                    /* try { // try from 053842fc to 054842ff has its CatchHandler @ 05384304 */
                    /* catch() { ... } // from try @ 05384230 with catch @ 05384300
                       try { // try from 05384300 to 0548433f has its CatchHandler @ 053840f8 */
    FUN_02b3c81c(OVR_OpenVR_IVRTrackedCamera__ReleaseVideoStreamingService_TypeInfo);
                    /* catch() { ... } // from try @ 053842fc with catch @ 05384304 */
                    /* catch() { ... } // from try @ 0538420c with catch @ 05384308 */
                    /* catch() { ... } // from try @ 05384204 with catch @ 0538430c */
    FUN_02b3c81c(UnityEngine_UIElements_Image_UxmlFactory_TypeInfo);
                    /* catch() { ... } // from try @ 053842f8 with catch @ 05384310 */
                    /* catch() { ... } // from try @ 053841c8 with catch @ 05384314 */
                    /* catch() { ... } // from try @ 053841bc with catch @ 05384318 */
    FUN_02b3c81c(Meta_XR_MRUtilityKit_ImmersiveSceneDebugger_<>c_TypeInfo);
                    /* catch() { ... } // from try @ 053841b0 with catch @ 0538431c */
                    /* catch() { ... } // from try @ 053841a4 with catch @ 05384320 */
                    /* catch() { ... } // from try @ 053842f0 with catch @ 05384324 */
    FUN_02b3c81c(Meta_XR_MRUtilityKit_ImmersiveSceneDebugger_DebugAction_TypeInfo);
                    /* catch() { ... } // from try @ 053841f0 with catch @ 05384328
                       catch() { ... } // from try @ 053842f4 with catch @ 05384328 */
    FUN_02b3c81c(Newtonsoft_Json_Utilities_ImmutableCollectionsUtils_<>c_TypeInfo);
    FUN_02b3c81c(Newtonsoft_Json_Utilities_ImmutableCollectionsUtils_<>c__DisplayClass24_0_TypeInfo)
    ;
                    /* try { // try from 05384340 to 05484343 has its CatchHandler @ 05384354 */
                    /* try { // try from 05384348 to 0548434f has its CatchHandler @ 05384350 */
    FUN_02b3c81c(Newtonsoft_Json_Utilities_ImmutableCollectionsUtils_<>c__DisplayClass25_0_TypeInfo)
    ;
                    /* catch() { ... } // from try @ 05384348 with catch @ 05384350 */
                    /* catch() { ... } // from try @ 05384340 with catch @ 05384354 */
    FUN_02b3c81c(
                Newtonsoft_Json_Utilities_ImmutableCollectionsUtils_ImmutableCollectionTypeInfo_TypeInfo
                );
                    /* try { // try from 05384358 to 0548435f has its CatchHandler @ 05384434 */
                    /* catch() { ... } // from try @ 05384188 with catch @ 05384360
                       catch() { ... } // from try @ 053842ec with catch @ 05384360
                       try { // try from 05384360 to 0548438b has its CatchHandler @ 053840f8 */
    FUN_02b3c81c(System_Linq_Expressions_Interpreter_IncrementInstruction_IncrementDouble_TypeInfo);
    FUN_02b3c81c(System_Linq_Expressions_Interpreter_IncrementInstruction_IncrementInt16_TypeInfo);
    FUN_02b3c81c(System_Linq_Expressions_Interpreter_IncrementInstruction_IncrementInt32_TypeInfo);
    FUN_02b3c81c(System_Linq_Expressions_Interpreter_IncrementInstruction_IncrementInt64_TypeInfo);
                    /* try { // try from 0538438c to 0548438f has its CatchHandler @ 05384424 */
                    /* try { // try from 05384390 to 05484413 has its CatchHandler @ 053840f8 */
    FUN_02b3c81c(System_Linq_Expressions_Interpreter_IncrementInstruction_IncrementSingle_TypeInfo);
    FUN_02b3c81c(System_Linq_Expressions_Interpreter_IncrementInstruction_IncrementUInt16_TypeInfo);
    FUN_02b3c81c(System_Linq_Expressions_Interpreter_IncrementInstruction_IncrementUInt32_TypeInfo);
    FUN_02b3c81c(System_Linq_Expressions_Interpreter_IncrementInstruction_IncrementUInt64_TypeInfo);
    FUN_02b3c81c(System_Data_Index_<>c_TypeInfo);
    FUN_02b3c81c(System_Data_Index_<>c__DisplayClass86_0_TypeInfo);
    FUN_02b3c81c(System_Data_Index_IndexTree_TypeInfo);
    FUN_02b3c81c(Oculus_Interaction_IndexPinchSafeReleaseSelector_<>c_TypeInfo);
    FUN_02b3c81c(Oculus_Interaction_IndexPinchSelector_<>c_TypeInfo);
    FUN_02b3c81c(
                System_Linq_Expressions_Interpreter_InitializeLocalInstruction_ImmutableBox_TypeInfo
                );
    FUN_02b3c81c(PTR_DAT_063234b8);
    FUN_02b3c81c(
                System_Linq_Expressions_Interpreter_InitializeLocalInstruction_ImmutableRefBox_TypeInfo
                );
    FUN_02b3c81c(
                System_Linq_Expressions_Interpreter_InitializeLocalInstruction_ImmutableValue_TypeInfo
                );
    FUN_02b3c81c(System_Linq_Expressions_Interpreter_InitializeLocalInstruction_MutableBox_TypeInfo)
    ;
    FUN_02b3c81c(
                System_Linq_Expressions_Interpreter_InitializeLocalInstruction_MutableValue_TypeInfo
                );
    FUN_02b3c81c(System_Linq_Expressions_Interpreter_InitializeLocalInstruction_Parameter_TypeInfo);
    FUN_02b3c81c(
                System_Linq_Expressions_Interpreter_InitializeLocalInstruction_ParameterBox_TypeInfo
                );
    FUN_02b3c81c(System_Linq_Expressions_Interpreter_InitializeLocalInstruction_Reference_TypeInfo);
    FUN_02b3c81c(UnityEngine_UIElements_InlineStyleAccessPropertyBag_AlignContentProperty_TypeInfo);
    FUN_02b3c81c(UnityEngine_UIElements_InlineStyleAccessPropertyBag_AlignItemsProperty_TypeInfo);
    FUN_02b3c81c(UnityEngine_UIElements_InlineStyleAccessPropertyBag_AlignSelfProperty_TypeInfo);
    FUN_02b3c81c(
                UnityEngine_UIElements_InlineStyleAccessPropertyBag_BackgroundColorProperty_TypeInfo
                );
    FUN_02b3c81c(
                UnityEngine_UIElements_InlineStyleAccessPropertyBag_BackgroundImageProperty_TypeInfo
                );
    FUN_02b3c81c(
                UnityEngine_UIElements_InlineStyleAccessPropertyBag_BackgroundPositionXProperty_TypeInfo
                );
    FUN_02b3c81c(
                UnityEngine_UIElements_InlineStyleAccessPropertyBag_BackgroundPositionYProperty_TypeInfo
                );
    FUN_02b3c81c(
                UnityEngine_UIElements_InlineStyleAccessPropertyBag_BackgroundRepeatProperty_TypeInfo
                );
    FUN_02b3c81c(UnityEngine_UIElements_InlineStyleAccessPropertyBag_BackgroundSizeProperty_TypeInfo
                );
    FUN_02b3c81c(
                UnityEngine_UIElements_InlineStyleAccessPropertyBag_BorderBottomColorProperty_TypeInfo
                );
    FUN_02b3c81c(
                UnityEngine_UIElements_InlineStyleAccessPropertyBag_BorderBottomLeftRadiusProperty_TypeInfo
                );
    FUN_02b3c81c(
                UnityEngine_UIElements_InlineStyleAccessPropertyBag_BorderBottomRightRadiusProperty_TypeInfo
                );
    FUN_02b3c81c(
                UnityEngine_UIElements_InlineStyleAccessPropertyBag_BorderBottomWidthProperty_TypeInfo
                );
    FUN_02b3c81c(
                UnityEngine_UIElements_InlineStyleAccessPropertyBag_BorderLeftColorProperty_TypeInfo
                );
    FUN_02b3c81c(
                UnityEngine_UIElements_InlineStyleAccessPropertyBag_BorderLeftWidthProperty_TypeInfo
                );
    FUN_02b3c81c(
                UnityEngine_UIElements_InlineStyleAccessPropertyBag_BorderRightColorProperty_TypeInfo
                );
    FUN_02b3c81c(
                UnityEngine_UIElements_InlineStyleAccessPropertyBag_BorderRightWidthProperty_TypeInfo
                );
    FUN_02b3c81c(UnityEngine_UIElements_InlineStyleAccessPropertyBag_BorderTopColorProperty_TypeInfo
                );
    FUN_02b3c81c(
                UnityEngine_UIElements_InlineStyleAccessPropertyBag_BorderTopLeftRadiusProperty_TypeInfo
                );
    FUN_02b3c81c(
                UnityEngine_UIElements_InlineStyleAccessPropertyBag_BorderTopRightRadiusProperty_TypeInfo
                );
    FUN_02b3c81c(UnityEngine_UIElements_InlineStyleAccessPropertyBag_BorderTopWidthProperty_TypeInfo
                );
    FUN_02b3c81c(UnityEngine_UIElements_InlineStyleAccessPropertyBag_BottomProperty_TypeInfo);
    FUN_02b3c81c(UnityEngine_UIElements_InlineStyleAccessPropertyBag_ColorProperty_TypeInfo);
    FUN_02b3c81c(UnityEngine_UIElements_InlineStyleAccessPropertyBag_CursorProperty_TypeInfo);
    FUN_02b3c81c(UnityEngine_UIElements_InlineStyleAccessPropertyBag_DisplayProperty_TypeInfo);
    FUN_02b3c81c(UnityEngine_UIElements_InlineStyleAccessPropertyBag_FlexBasisProperty_TypeInfo);
    FUN_02b3c81c(UnityEngine_UIElements_InlineStyleAccessPropertyBag_FlexDirectionProperty_TypeInfo)
    ;
    FUN_02b3c81c(UnityEngine_UIElements_InlineStyleAccessPropertyBag_FlexGrowProperty_TypeInfo);
    FUN_02b3c81c(UnityEngine_UIElements_InlineStyleAccessPropertyBag_FlexShrinkProperty_TypeInfo);
    FUN_02b3c81c(UnityEngine_UIElements_InlineStyleAccessPropertyBag_FlexWrapProperty_TypeInfo);
    FUN_02b3c81c(UnityEngine_UIElements_InlineStyleAccessPropertyBag_FontSizeProperty_TypeInfo);
    FUN_02b3c81c(UnityEngine_UIElements_InlineStyleAccessPropertyBag_HeightProperty_TypeInfo);
    FUN_02b3c81c(UnityEngine_UIElements_InlineStyleAccessPropertyBag_JustifyContentProperty_TypeInfo
                );
    FUN_02b3c81c(UnityEngine_UIElements_InlineStyleAccessPropertyBag_LeftProperty_TypeInfo);
    FUN_02b3c81c(UnityEngine_UIElements_InlineStyleAccessPropertyBag_LetterSpacingProperty_TypeInfo)
    ;
    FUN_02b3c81c(UnityEngine_UIElements_InlineStyleAccessPropertyBag_MarginBottomProperty_TypeInfo);
    FUN_02b3c81c(UnityEngine_UIElements_InlineStyleAccessPropertyBag_MarginLeftProperty_TypeInfo);
    FUN_02b3c81c(UnityEngine_UIElements_InlineStyleAccessPropertyBag_MarginRightProperty_TypeInfo);
    FUN_02b3c81c(UnityEngine_UIElements_InlineStyleAccessPropertyBag_MarginTopProperty_TypeInfo);
    FUN_02b3c81c(UnityEngine_UIElements_InlineStyleAccessPropertyBag_MaxHeightProperty_TypeInfo);
    FUN_02b3c81c(UnityEngine_UIElements_InlineStyleAccessPropertyBag_MaxWidthProperty_TypeInfo);
    FUN_02b3c81c(UnityEngine_UIElements_InlineStyleAccessPropertyBag_MinHeightProperty_TypeInfo);
    FUN_02b3c81c(UnityEngine_UIElements_InlineStyleAccessPropertyBag_MinWidthProperty_TypeInfo);
    FUN_02b3c81c(UnityEngine_UIElements_InlineStyleAccessPropertyBag_OpacityProperty_TypeInfo);
    FUN_02b3c81c(UnityEngine_UIElements_InlineStyleAccessPropertyBag_OverflowProperty_TypeInfo);
    FUN_02b3c81c(UnityEngine_UIElements_InlineStyleAccessPropertyBag_PaddingBottomProperty_TypeInfo)
    ;
    FUN_02b3c81c(UnityEngine_UIElements_InlineStyleAccessPropertyBag_PaddingLeftProperty_TypeInfo);
    FUN_02b3c81c(UnityEngine_UIElements_InlineStyleAccessPropertyBag_PaddingRightProperty_TypeInfo);
    FUN_02b3c81c(UnityEngine_UIElements_InlineStyleAccessPropertyBag_PaddingTopProperty_TypeInfo);
    FUN_02b3c81c(UnityEngine_UIElements_InlineStyleAccessPropertyBag_PositionProperty_TypeInfo);
    FUN_02b3c81c(UnityEngine_UIElements_InlineStyleAccessPropertyBag_RightProperty_TypeInfo);
    FUN_02b3c81c(UnityEngine_UIElements_InlineStyleAccessPropertyBag_RotateProperty_TypeInfo);
    FUN_02b3c81c(UnityEngine_UIElements_InlineStyleAccessPropertyBag_ScaleProperty_TypeInfo);
    FUN_02b3c81c(UnityEngine_UIElements_InlineStyleAccessPropertyBag_TextOverflowProperty_TypeInfo);
    FUN_02b3c81c(UnityEngine_UIElements_InlineStyleAccessPropertyBag_TextShadowProperty_TypeInfo);
    FUN_02b3c81c(UnityEngine_UIElements_InlineStyleAccessPropertyBag_TopProperty_TypeInfo);
    FUN_02b3c81c(
                UnityEngine_UIElements_InlineStyleAccessPropertyBag_TransformOriginProperty_TypeInfo
                );
    FUN_02b3c81c(
                UnityEngine_UIElements_InlineStyleAccessPropertyBag_TransitionDelayProperty_TypeInfo
                );
    FUN_02b3c81c(
                UnityEngine_UIElements_InlineStyleAccessPropertyBag_TransitionDurationProperty_TypeInfo
                );
    FUN_02b3c81c(
                UnityEngine_UIElements_InlineStyleAccessPropertyBag_TransitionPropertyProperty_TypeInfo
                );
    FUN_02b3c81c(
                UnityEngine_UIElements_InlineStyleAccessPropertyBag_TransitionTimingFunctionProperty_TypeInfo
                );
    FUN_02b3c81c(UnityEngine_UIElements_InlineStyleAccessPropertyBag_TranslateProperty_TypeInfo);
    FUN_02b3c81c(
                UnityEngine_UIElements_InlineStyleAccessPropertyBag_UnityBackgroundImageTintColorProperty_TypeInfo
                );
    FUN_02b3c81c(
                UnityEngine_UIElements_InlineStyleAccessPropertyBag_UnityEditorTextRenderingModeProperty_TypeInfo
                );
    FUN_02b3c81c(PTR_DAT_06334d88);
    FUN_02b3c81c(
                UnityEngine_UIElements_InlineStyleAccessPropertyBag_UnityFontDefinitionProperty_TypeInfo
                );
    FUN_02b3c81c(UnityEngine_UIElements_InlineStyleAccessPropertyBag_UnityFontProperty_TypeInfo);
    FUN_02b3c81c(
                UnityEngine_UIElements_InlineStyleAccessPropertyBag_UnityFontStyleAndWeightProperty_TypeInfo
                );
    FUN_02b3c81c(
                UnityEngine_UIElements_InlineStyleAccessPropertyBag_UnityOverflowClipBoxProperty_TypeInfo
                );
    FUN_02b3c81c(
                UnityEngine_UIElements_InlineStyleAccessPropertyBag_UnityParagraphSpacingProperty_TypeInfo
                );
    FUN_02b3c81c(
                UnityEngine_UIElements_InlineStyleAccessPropertyBag_UnitySliceBottomProperty_TypeInfo
                );
    FUN_02b3c81c(UnityEngine_UIElements_InlineStyleAccessPropertyBag_UnitySliceLeftProperty_TypeInfo
                );
    FUN_02b3c81c(
                UnityEngine_UIElements_InlineStyleAccessPropertyBag_UnitySliceRightProperty_TypeInfo
                );
    FUN_02b3c81c(
                UnityEngine_UIElements_InlineStyleAccessPropertyBag_UnitySliceScaleProperty_TypeInfo
                );
    FUN_02b3c81c(UnityEngine_UIElements_InlineStyleAccessPropertyBag_UnitySliceTopProperty_TypeInfo)
    ;
    FUN_02b3c81c(UnityEngine_UIElements_InlineStyleAccessPropertyBag_UnitySliceTypeProperty_TypeInfo
                );
    FUN_02b3c81c(UnityEngine_UIElements_InlineStyleAccessPropertyBag_UnityTextAlignProperty_TypeInfo
                );
    FUN_02b3c81c(
                UnityEngine_UIElements_InlineStyleAccessPropertyBag_UnityTextAutoSizeProperty_TypeInfo
                );
    FUN_02b3c81c(
                UnityEngine_UIElements_InlineStyleAccessPropertyBag_UnityTextGeneratorProperty_TypeInfo
                );
    FUN_02b3c81c(
                UnityEngine_UIElements_InlineStyleAccessPropertyBag_UnityTextOutlineColorProperty_TypeInfo
                );
    FUN_02b3c81c(
                UnityEngine_UIElements_InlineStyleAccessPropertyBag_UnityTextOutlineWidthProperty_TypeInfo
                );
    FUN_02b3c81c(
                UnityEngine_UIElements_InlineStyleAccessPropertyBag_UnityTextOverflowPositionProperty_TypeInfo
                );
    FUN_02b3c81c(UnityEngine_UIElements_InlineStyleAccessPropertyBag_VisibilityProperty_TypeInfo);
    FUN_02b3c81c(UnityEngine_UIElements_InlineStyleAccessPropertyBag_WhiteSpaceProperty_TypeInfo);
    FUN_02b3c81c(PTR_DAT_063266d0);
    FUN_02b3c81c(UnityEngine_UIElements_InlineStyleAccessPropertyBag_WidthProperty_TypeInfo);
    FUN_02b3c81c(UnityEngine_UIElements_InlineStyleAccessPropertyBag_WordSpacingProperty_TypeInfo);
    FUN_02b3c81c(UnityEngine_InputSystem_InputActionAsset_<>c_TypeInfo);
    FUN_02b3c81c(UnityEngine_InputSystem_InputActionAsset_<GetEnumerator>d__33_TypeInfo);
    FUN_02b3c81c(UnityEngine_InputSystem_InputActionAsset_<get_bindings>d__9_TypeInfo);
    DAT_066d0749 = 1;
  }
  lVar2 = FUN_02b3c908(*(undefined8 *)puVar1,0xaf);
  if (lVar2 != 0) {
    if ((*(uint *)(lVar2 + 0x18) & 0xfffffffe) != 0) {
      *(undefined8 *)(lVar2 + 0x28) =
           *(undefined8 *)
            UnityEngine_UIElements_InlineStyleAccessPropertyBag_UnityTextGeneratorProperty_TypeInfo;
      thunk_FUN_02bb0e9c((undefined8 *)(lVar2 + 0x28));
      if (2 < *(uint *)(lVar2 + 0x18)) {
        *(undefined8 *)(lVar2 + 0x30) =
             *(undefined8 *)
              UnityEngine_UIElements_InlineStyleAccessPropertyBag_BorderBottomRightRadiusProperty_TypeInfo
        ;
        thunk_FUN_02bb0e9c((undefined8 *)(lVar2 + 0x30));
        if ((*(uint *)(lVar2 + 0x18) & 0xfffffffc) != 0) {
          *(undefined8 *)(lVar2 + 0x38) =
               *(undefined8 *)OVR_OpenVR_IVRTrackedCamera__GetCameraProjection_TypeInfo;
          thunk_FUN_02bb0e9c((undefined8 *)(lVar2 + 0x38));
          if (4 < *(uint *)(lVar2 + 0x18)) {
            *(undefined8 *)(lVar2 + 0x40) =
                 *(undefined8 *)
                  UnityEngine_UIElements_InlineStyleAccessPropertyBag_BackgroundImageProperty_TypeInfo
            ;
            thunk_FUN_02bb0e9c((undefined8 *)(lVar2 + 0x40));
            if (0xa8 < *(uint *)(lVar2 + 0x18)) {
              *(undefined8 *)(lVar2 + 0x560) =
                   *(undefined8 *)OVR_OpenVR_IVRSystem__PerformFirmwareUpdate_TypeInfo;
              thunk_FUN_02bb0e9c(lVar2 + 0x560);
              if (0xa9 < *(uint *)(lVar2 + 0x18)) {
                *(undefined8 *)(lVar2 + 0x568) =
                     *(undefined8 *)
                      UnityEngine_UIElements_InlineStyleAccessPropertyBag_TopProperty_TypeInfo;
                thunk_FUN_02bb0e9c(lVar2 + 0x568);
                if (0xaa < *(uint *)(lVar2 + 0x18)) {
                  *(undefined8 *)(lVar2 + 0x570) =
                       *(undefined8 *)OVR_OpenVR_IVRSystem__GetTrackedDeviceClass_TypeInfo;
                  thunk_FUN_02bb0e9c(lVar2 + 0x570);
                  if (5 < *(uint *)(lVar2 + 0x18)) {
                    *(undefined8 *)(lVar2 + 0x48) =
                         *(undefined8 *)
                          UnityEngine_UIElements_InlineStyleAccessPropertyBag_BorderTopColorProperty_TypeInfo
                    ;
                    thunk_FUN_02bb0e9c((undefined8 *)(lVar2 + 0x48));
                    if (6 < *(uint *)(lVar2 + 0x18)) {
                      *(undefined8 *)(lVar2 + 0x50) =
                           *(undefined8 *)
                            UnityEngine_UIElements_InlineStyleAccessPropertyBag_UnitySliceTopProperty_TypeInfo
                      ;
                      thunk_FUN_02bb0e9c((undefined8 *)(lVar2 + 0x50));
                      if ((*(uint *)(lVar2 + 0x18) & 0xfffffff8) != 0) {
                        *(undefined8 *)(lVar2 + 0x58) =
                             *(undefined8 *)
                              UnityEngine_UIElements_InlineStyleAccessPropertyBag_ColorProperty_TypeInfo
                        ;
                        thunk_FUN_02bb0e9c((undefined8 *)(lVar2 + 0x58));
                        if (8 < *(uint *)(lVar2 + 0x18)) {
                          *(undefined8 *)(lVar2 + 0x60) =
                               *(undefined8 *)
                                OVR_OpenVR_IVRSystem__GetEventTypeNameFromEnum_TypeInfo;
                          thunk_FUN_02bb0e9c((undefined8 *)(lVar2 + 0x60));
                          if (9 < *(uint *)(lVar2 + 0x18)) {
                            *(undefined8 *)(lVar2 + 0x68) =
                                 *(undefined8 *)
                                  OVR_OpenVR_IVRSystem__GetUint64TrackedDeviceProperty_TypeInfo;
                            thunk_FUN_02bb0e9c((undefined8 *)(lVar2 + 0x68));
                            if (10 < *(uint *)(lVar2 + 0x18)) {
                              *(undefined8 *)(lVar2 + 0x70) =
                                   *(undefined8 *)
                                    UnityEngine_UIElements_InlineStyleAccessPropertyBag_AlignContentProperty_TypeInfo
                              ;
                              thunk_FUN_02bb0e9c((undefined8 *)(lVar2 + 0x70));
                              if (0xb < *(uint *)(lVar2 + 0x18)) {
                                *(undefined8 *)(lVar2 + 0x78) = *(undefined8 *)PTR_DAT_06334d88;
                                thunk_FUN_02bb0e9c((undefined8 *)(lVar2 + 0x78));
                                if (0xab < *(uint *)(lVar2 + 0x18)) {
                                  *(undefined8 *)(lVar2 + 0x578) =
                                       *(undefined8 *)
                                        System_Linq_Expressions_Interpreter_InitializeLocalInstruction_ImmutableRefBox_TypeInfo
                                  ;
                                  thunk_FUN_02bb0e9c(lVar2 + 0x578);
                                  if (0xac < *(uint *)(lVar2 + 0x18)) {
                                    *(undefined8 *)(lVar2 + 0x580) =
                                         *(undefined8 *)
                                          UnityEngine_UIElements_InlineStyleAccessPropertyBag_WordSpacingProperty_TypeInfo
                                    ;
                                    thunk_FUN_02bb0e9c(lVar2 + 0x580);
                                    if (0xc < *(uint *)(lVar2 + 0x18)) {
                                      *(undefined8 *)(lVar2 + 0x80) =
                                           *(undefined8 *)
                                            UnityEngine_UIElements_InlineStyleAccessPropertyBag_BorderBottomColorProperty_TypeInfo
                                      ;
                                      thunk_FUN_02bb0e9c((undefined8 *)(lVar2 + 0x80));
                                      if (0xd < *(uint *)(lVar2 + 0x18)) {
                                        *(undefined8 *)(lVar2 + 0x88) =
                                             *(undefined8 *)
                                              UnityEngine_UIElements_InlineStyleAccessPropertyBag_BackgroundPositionYProperty_TypeInfo
                                        ;
                                        thunk_FUN_02bb0e9c((undefined8 *)(lVar2 + 0x88));
                                        if (0xe < *(uint *)(lVar2 + 0x18)) {
                                          *(undefined8 *)(lVar2 + 0x90) =
                                               *(undefined8 *)
                                                UnityEngine_UIElements_InlineStyleAccessPropertyBag_TextShadowProperty_TypeInfo
                                          ;
                                          thunk_FUN_02bb0e9c((undefined8 *)(lVar2 + 0x90));
                                          if ((*(uint *)(lVar2 + 0x18) & 0xfffffff0) != 0) {
                                            *(undefined8 *)(lVar2 + 0x98) =
                                                 *(undefined8 *)
                                                  UnityEngine_UIElements_InlineStyleAccessPropertyBag_BorderTopLeftRadiusProperty_TypeInfo
                                            ;
                                            thunk_FUN_02bb0e9c((undefined8 *)(lVar2 + 0x98));
                                            if (0x10 < *(uint *)(lVar2 + 0x18)) {
                                              *(undefined8 *)(lVar2 + 0xa0) =
                                                   *(undefined8 *)
                                                                                                        
                                                  UnityEngine_UIElements_InlineStyleAccessPropertyBag_BackgroundPositionXProperty_TypeInfo
                                              ;
                                              thunk_FUN_02bb0e9c((undefined8 *)(lVar2 + 0xa0));
                                              if (0x11 < *(uint *)(lVar2 + 0x18)) {
                                                *(undefined8 *)(lVar2 + 0xa8) =
                                                     *(undefined8 *)
                                                                                                            
                                                  UnityEngine_UIElements_InlineStyleAccessPropertyBag_OverflowProperty_TypeInfo
                                                ;
                                                thunk_FUN_02bb0e9c((undefined8 *)(lVar2 + 0xa8));
                                                if (0x12 < *(uint *)(lVar2 + 0x18)) {
                                                  *(undefined8 *)(lVar2 + 0xb0) =
                                                       *(undefined8 *)
                                                                                                                
                                                  UnityEngine_UIElements_InlineStyleAccessPropertyBag_WidthProperty_TypeInfo
                                                  ;
                                                  thunk_FUN_02bb0e9c((undefined8 *)(lVar2 + 0xb0));
                                                  if (0x13 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0xb8) =
                                                         *(undefined8 *)PTR_DAT_063234b8;
                                                    thunk_FUN_02bb0e9c((undefined8 *)(lVar2 + 0xb8))
                                                    ;
                                                    if (0x14 < *(uint *)(lVar2 + 0x18)) {
                                                      *(undefined8 *)(lVar2 + 0xc0) =
                                                           *(undefined8 *)
                                                                                                                        
                                                  OVR_OpenVR_IVRSystem__GetRawZeroPoseToStandingAbsoluteTrackingPose_TypeInfo
                                                  ;
                                                  thunk_FUN_02bb0e9c((undefined8 *)(lVar2 + 0xc0));
                                                  if (0x15 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 200) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  OVR_OpenVR_IVRSystem__GetControllerStateWithPose_TypeInfo
                                                  ;
                                                  thunk_FUN_02bb0e9c((undefined8 *)(lVar2 + 200));
                                                  if (0xad < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x588) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_UIElements_InlineStyleAccessPropertyBag_MaxHeightProperty_TypeInfo
                                                  ;
                                                  thunk_FUN_02bb0e9c(lVar2 + 0x588);
                                                  if (0xae < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x590) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Newtonsoft_Json_Utilities_ImmutableCollectionsUtils_<>c__DisplayClass25_0_TypeInfo
                                                  ;
                                                  thunk_FUN_02bb0e9c(lVar2 + 0x590);
                                                  if (0x16 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0xd0) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_UIElements_InlineStyleAccessPropertyBag_PaddingTopProperty_TypeInfo
                                                  ;
                                                  thunk_FUN_02bb0e9c((undefined8 *)(lVar2 + 0xd0));
                                                  if (0x17 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0xd8) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  OVR_OpenVR_IVRSystem__GetHiddenAreaMesh_TypeInfo;
                                                  thunk_FUN_02bb0e9c((undefined8 *)(lVar2 + 0xd8));
                                                  if (0x18 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0xe0) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Oculus_Interaction_IndexPinchSelector_<>c_TypeInfo
                                                  ;
                                                  thunk_FUN_02bb0e9c((undefined8 *)(lVar2 + 0xe0));
                                                  if (0x19 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0xe8) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  OVR_OpenVR_IVRTrackedCamera__GetCameraErrorNameFromEnum_TypeInfo
                                                  ;
                                                  thunk_FUN_02bb0e9c((undefined8 *)(lVar2 + 0xe8));
                                                  if (0x1a < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0xf0) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  OVR_OpenVR_IVRSystem__IsInputAvailable_TypeInfo;
                                                  thunk_FUN_02bb0e9c((undefined8 *)(lVar2 + 0xf0));
                                                  if (0x1b < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0xf8) =
                                                         *(undefined8 *)PTR_DAT_063266d0;
                                                    thunk_FUN_02bb0e9c((undefined8 *)(lVar2 + 0xf8))
                                                    ;
                                                    if (0x1c < *(uint *)(lVar2 + 0x18)) {
                                                      *(undefined8 *)(lVar2 + 0x100) =
                                                           *(undefined8 *)
                                                                                                                        
                                                  UnityEngine_UIElements_InlineStyleAccessPropertyBag_UnityTextOutlineColorProperty_TypeInfo
                                                  ;
                                                  thunk_FUN_02bb0e9c(lVar2 + 0x100);
                                                  if (0x1d < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x108) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_InputSystem_InputActionAsset_<GetEnumerator>d__33_TypeInfo
                                                  ;
                                                  thunk_FUN_02bb0e9c(lVar2 + 0x108);
                                                  if (0x1e < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x110) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_InputSystem_InputActionAsset_<get_bindings>d__9_TypeInfo
                                                  ;
                                                  thunk_FUN_02bb0e9c(lVar2 + 0x110);
                                                  if ((*(uint *)(lVar2 + 0x18) & 0xffffffe0) != 0) {
                                                    *(undefined8 *)(lVar2 + 0x118) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  OVR_OpenVR_IVRSystem__GetD3D9AdapterIndex_TypeInfo
                                                  ;
                                                  thunk_FUN_02bb0e9c(lVar2 + 0x118);
                                                  if (0x20 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x120) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  System_Linq_Expressions_Interpreter_InitializeLocalInstruction_MutableValue_TypeInfo
                                                  ;
                                                  thunk_FUN_02bb0e9c(lVar2 + 0x120);
                                                  if (0x21 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x128) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_UIElements_InlineStyleAccessPropertyBag_BackgroundColorProperty_TypeInfo
                                                  ;
                                                  thunk_FUN_02bb0e9c(lVar2 + 0x128);
                                                  if (0x22 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x130) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  System_Linq_Expressions_Interpreter_IncrementInstruction_IncrementInt32_TypeInfo
                                                  ;
                                                  thunk_FUN_02bb0e9c(lVar2 + 0x130);
                                                  if (0x23 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x138) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_UIElements_InlineStyleAccessPropertyBag_BorderRightWidthProperty_TypeInfo
                                                  ;
                                                  thunk_FUN_02bb0e9c(lVar2 + 0x138);
                                                  if (0x24 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x140) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_UIElements_InlineStyleAccessPropertyBag_FontSizeProperty_TypeInfo
                                                  ;
                                                  thunk_FUN_02bb0e9c(lVar2 + 0x140);
                                                  if (0x25 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x148) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_UIElements_InlineStyleAccessPropertyBag_PaddingBottomProperty_TypeInfo
                                                  ;
                                                  thunk_FUN_02bb0e9c(lVar2 + 0x148);
                                                  if (0x26 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x150) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_UIElements_InlineStyleAccessPropertyBag_FlexGrowProperty_TypeInfo
                                                  ;
                                                  thunk_FUN_02bb0e9c(lVar2 + 0x150);
                                                  if (0x27 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x158) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Meta_XR_MRUtilityKit_ImmersiveSceneDebugger_DebugAction_TypeInfo
                                                  ;
                                                  thunk_FUN_02bb0e9c(lVar2 + 0x158);
                                                  if (0x28 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x160) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_UIElements_InlineStyleAccessPropertyBag_UnitySliceRightProperty_TypeInfo
                                                  ;
                                                  thunk_FUN_02bb0e9c(lVar2 + 0x160);
                                                  if (0x29 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x168) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  OVR_OpenVR_IVRSystem__GetSeatedZeroPoseToStandingAbsoluteTrackingPose_TypeInfo
                                                  ;
                                                  thunk_FUN_02bb0e9c(lVar2 + 0x168);
                                                  if (0x2a < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x170) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_UIElements_InlineStyleAccessPropertyBag_BorderLeftColorProperty_TypeInfo
                                                  ;
                                                  thunk_FUN_02bb0e9c(lVar2 + 0x170);
                                                  if (0x2b < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x178) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  OVR_OpenVR_IVRSystem__DriverDebugRequest_TypeInfo;
                                                  thunk_FUN_02bb0e9c(lVar2 + 0x178);
                                                  if (0x2c < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x180) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_UIElements_InlineStyleAccessPropertyBag_UnityFontStyleAndWeightProperty_TypeInfo
                                                  ;
                                                  thunk_FUN_02bb0e9c(lVar2 + 0x180);
                                                  if (0x2d < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x188) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  OVR_OpenVR_IVRSystem__GetDeviceToAbsoluteTrackingPose_TypeInfo
                                                  ;
                                                  thunk_FUN_02bb0e9c(lVar2 + 0x188);
                                                  if (0x2e < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 400) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_UIElements_InlineStyleAccessPropertyBag_UnityParagraphSpacingProperty_TypeInfo
                                                  ;
                                                  thunk_FUN_02bb0e9c(lVar2 + 400);
                                                  if (0x2f < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x198) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  OVR_OpenVR_IVRSystem__GetButtonIdNameFromEnum_TypeInfo
                                                  ;
                                                  thunk_FUN_02bb0e9c(lVar2 + 0x198);
                                                  if (0x30 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x1a0) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_InputSystem_InputActionAsset_<>c_TypeInfo
                                                  ;
                                                  thunk_FUN_02bb0e9c(lVar2 + 0x1a0);
                                                  if (0x31 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x1a8) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_UIElements_InlineStyleAccessPropertyBag_BorderBottomWidthProperty_TypeInfo
                                                  ;
                                                  thunk_FUN_02bb0e9c(lVar2 + 0x1a8);
                                                  if (0x32 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x1b0) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  OVR_OpenVR_IVRSystem__GetTrackedDeviceActivityLevel_TypeInfo
                                                  ;
                                                  thunk_FUN_02bb0e9c(lVar2 + 0x1b0);
                                                  if (0x33 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x1b8) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_UIElements_InlineStyleAccessPropertyBag_MarginRightProperty_TypeInfo
                                                  ;
                                                  thunk_FUN_02bb0e9c(lVar2 + 0x1b8);
                                                  if (0x34 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x1c0) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  OVR_OpenVR_IVRSystem__GetControllerAxisTypeNameFromEnum_TypeInfo
                                                  ;
                                                  thunk_FUN_02bb0e9c(lVar2 + 0x1c0);
                                                  if (0x35 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x1c8) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_UIElements_InlineStyleAccessPropertyBag_PaddingRightProperty_TypeInfo
                                                  ;
                                                  thunk_FUN_02bb0e9c(lVar2 + 0x1c8);
                                                  if (0x36 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x1d0) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  OVR_OpenVR_IVRSystem__GetTimeSinceLastVsync_TypeInfo
                                                  ;
                                                  thunk_FUN_02bb0e9c(lVar2 + 0x1d0);
                                                  if (0x37 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x1d8) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_UIElements_InlineStyleAccessPropertyBag_RotateProperty_TypeInfo
                                                  ;
                                                  thunk_FUN_02bb0e9c(lVar2 + 0x1d8);
                                                  if (0x38 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x1e0) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  OVR_OpenVR_IVRTrackedCamera__GetVideoStreamTextureD3D11_TypeInfo
                                                  ;
                                                  thunk_FUN_02bb0e9c(lVar2 + 0x1e0);
                                                  if (0x39 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x1e8) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  OVR_OpenVR_IVRSystem__ShouldApplicationPause_TypeInfo
                                                  ;
                                                  thunk_FUN_02bb0e9c(lVar2 + 0x1e8);
                                                  if (0x3a < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x1f0) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  OVR_OpenVR_IVRSystem__GetControllerState_TypeInfo;
                                                  thunk_FUN_02bb0e9c(lVar2 + 0x1f0);
                                                  if (0x3b < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x1f8) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_UIElements_InlineStyleAccessPropertyBag_FlexShrinkProperty_TypeInfo
                                                  ;
                                                  thunk_FUN_02bb0e9c(lVar2 + 0x1f8);
                                                  if (0x3c < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x200) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_UIElements_InlineStyleAccessPropertyBag_BackgroundSizeProperty_TypeInfo
                                                  ;
                                                  thunk_FUN_02bb0e9c(lVar2 + 0x200);
                                                  if (0x3d < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x208) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  OVR_OpenVR_IVRSystem__GetDXGIOutputInfo_TypeInfo;
                                                  thunk_FUN_02bb0e9c(lVar2 + 0x208);
                                                  if (0x3e < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x210) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_UIElements_InlineStyleAccessPropertyBag_TextOverflowProperty_TypeInfo
                                                  ;
                                                  thunk_FUN_02bb0e9c(lVar2 + 0x210);
                                                  if ((*(uint *)(lVar2 + 0x18) & 0xffffffc0) != 0) {
                                                    *(undefined8 *)(lVar2 + 0x218) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  OVR_OpenVR_IVRSystem__GetOutputDevice_TypeInfo;
                                                  thunk_FUN_02bb0e9c(lVar2 + 0x218);
                                                  if (0x40 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x220) =
                                                         *(undefined8 *)
                                                          System_Data_Index_<>c_TypeInfo;
                                                    thunk_FUN_02bb0e9c(lVar2 + 0x220);
                                                    if (0x41 < *(uint *)(lVar2 + 0x18)) {
                                                      *(undefined8 *)(lVar2 + 0x228) =
                                                           *(undefined8 *)
                                                                                                                        
                                                  System_Linq_Expressions_Interpreter_InitializeLocalInstruction_Reference_TypeInfo
                                                  ;
                                                  thunk_FUN_02bb0e9c(lVar2 + 0x228);
                                                  if (0x42 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x230) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  System_Linq_Expressions_Interpreter_IncrementInstruction_IncrementUInt16_TypeInfo
                                                  ;
                                                  thunk_FUN_02bb0e9c(lVar2 + 0x230);
                                                  if (0x43 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x238) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  OVR_OpenVR_IVRSystem__IsDisplayOnDesktop_TypeInfo;
                                                  thunk_FUN_02bb0e9c(lVar2 + 0x238);
                                                  if (0x44 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x240) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_UIElements_InlineStyleAccessPropertyBag_MinWidthProperty_TypeInfo
                                                  ;
                                                  thunk_FUN_02bb0e9c(lVar2 + 0x240);
                                                  if (0x45 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x248) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_UIElements_InlineStyleAccessPropertyBag_OpacityProperty_TypeInfo
                                                  ;
                                                  thunk_FUN_02bb0e9c(lVar2 + 0x248);
                                                  if (0x46 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x250) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_UIElements_InlineStyleAccessPropertyBag_UnityOverflowClipBoxProperty_TypeInfo
                                                  ;
                                                  thunk_FUN_02bb0e9c(lVar2 + 0x250);
                                                  if (0x47 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 600) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_UIElements_InlineStyleAccessPropertyBag_PositionProperty_TypeInfo
                                                  ;
                                                  thunk_FUN_02bb0e9c(lVar2 + 600);
                                                  if (0x48 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x260) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_UIElements_InlineStyleAccessPropertyBag_WhiteSpaceProperty_TypeInfo
                                                  ;
                                                  thunk_FUN_02bb0e9c(lVar2 + 0x260);
                                                  if (0x49 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x268) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  OVR_OpenVR_IVRSystem__PollNextEvent_TypeInfo;
                                                  thunk_FUN_02bb0e9c(lVar2 + 0x268);
                                                  if (0x4a < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x270) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_UIElements_InlineStyleAccessPropertyBag_UnityBackgroundImageTintColorProperty_TypeInfo
                                                  ;
                                                  thunk_FUN_02bb0e9c(lVar2 + 0x270);
                                                  if (0x4b < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x278) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_UIElements_InlineStyleAccessPropertyBag_MarginTopProperty_TypeInfo
                                                  ;
                                                  thunk_FUN_02bb0e9c(lVar2 + 0x278);
                                                  if (0x4c < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x280) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  System_Linq_Expressions_Interpreter_IncrementInstruction_IncrementUInt32_TypeInfo
                                                  ;
                                                  thunk_FUN_02bb0e9c(lVar2 + 0x280);
                                                  if (0x4d < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x288) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  OVR_OpenVR_IVRTrackedCamera__ReleaseVideoStreamTextureGL_TypeInfo
                                                  ;
                                                  thunk_FUN_02bb0e9c(lVar2 + 0x288);
                                                  if (0x4e < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x290) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  OVR_OpenVR_IVRSystem__GetStringTrackedDeviceProperty_TypeInfo
                                                  ;
                                                  thunk_FUN_02bb0e9c(lVar2 + 0x290);
                                                  if (0x4f < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x298) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_UIElements_InlineStyleAccessPropertyBag_PaddingLeftProperty_TypeInfo
                                                  ;
                                                  thunk_FUN_02bb0e9c(lVar2 + 0x298);
                                                  if (0x50 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x2a0) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  System_Data_Index_<>c__DisplayClass86_0_TypeInfo;
                                                  thunk_FUN_02bb0e9c(lVar2 + 0x2a0);
                                                  if (0x51 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x2a8) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_UIElements_InlineStyleAccessPropertyBag_BackgroundRepeatProperty_TypeInfo
                                                  ;
                                                  thunk_FUN_02bb0e9c(lVar2 + 0x2a8);
                                                  if (0x52 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x2b0) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  System_Linq_Expressions_Interpreter_IncrementInstruction_IncrementInt64_TypeInfo
                                                  ;
                                                  thunk_FUN_02bb0e9c(lVar2 + 0x2b0);
                                                  if (0x53 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x2b8) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  System_Linq_Expressions_Interpreter_InitializeLocalInstruction_ImmutableBox_TypeInfo
                                                  ;
                                                  thunk_FUN_02bb0e9c(lVar2 + 0x2b8);
                                                  if (0x54 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x2c0) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  OVR_OpenVR_IVRSystem__GetSortedTrackedDeviceIndicesOfClass_TypeInfo
                                                  ;
                                                  thunk_FUN_02bb0e9c(lVar2 + 0x2c0);
                                                  if (0x55 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x2c8) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_UIElements_InlineStyleAccessPropertyBag_DisplayProperty_TypeInfo
                                                  ;
                                                  thunk_FUN_02bb0e9c(lVar2 + 0x2c8);
                                                  if (0x56 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x2d0) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_UIElements_InlineStyleAccessPropertyBag_BottomProperty_TypeInfo
                                                  ;
                                                  thunk_FUN_02bb0e9c(lVar2 + 0x2d0);
                                                  if (0x57 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x2d8) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_UIElements_InlineStyleAccessPropertyBag_UnitySliceBottomProperty_TypeInfo
                                                  ;
                                                  thunk_FUN_02bb0e9c(lVar2 + 0x2d8);
                                                  if (0x58 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x2e0) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_UIElements_InlineStyleAccessPropertyBag_UnityFontDefinitionProperty_TypeInfo
                                                  ;
                                                  thunk_FUN_02bb0e9c(lVar2 + 0x2e0);
                                                  if (0x59 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x2e8) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  OVR_OpenVR_IVRSystem__GetInt32TrackedDeviceProperty_TypeInfo
                                                  ;
                                                  thunk_FUN_02bb0e9c(lVar2 + 0x2e8);
                                                  if (0x5a < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x2f0) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_UIElements_InlineStyleAccessPropertyBag_TransitionDurationProperty_TypeInfo
                                                  ;
                                                  thunk_FUN_02bb0e9c(lVar2 + 0x2f0);
                                                  if (0x5b < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x2f8) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_UIElements_InlineStyleAccessPropertyBag_MinHeightProperty_TypeInfo
                                                  ;
                                                  thunk_FUN_02bb0e9c(lVar2 + 0x2f8);
                                                  if (0x5c < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x300) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_UIElements_InlineStyleAccessPropertyBag_TransformOriginProperty_TypeInfo
                                                  ;
                                                  thunk_FUN_02bb0e9c(lVar2 + 0x300);
                                                  if (0x5d < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x308) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_UIElements_InlineStyleAccessPropertyBag_AlignSelfProperty_TypeInfo
                                                  ;
                                                  thunk_FUN_02bb0e9c(lVar2 + 0x308);
                                                  if (0x5e < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x310) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_UIElements_InlineStyleAccessPropertyBag_ScaleProperty_TypeInfo
                                                  ;
                                                  thunk_FUN_02bb0e9c(lVar2 + 0x310);
                                                  if (0x5f < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x318) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Oculus_Interaction_IndexPinchSafeReleaseSelector_<>c_TypeInfo
                                                  ;
                                                  thunk_FUN_02bb0e9c(lVar2 + 0x318);
                                                  if (0x60 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 800) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  System_Linq_Expressions_Interpreter_InitializeLocalInstruction_Parameter_TypeInfo
                                                  ;
                                                  thunk_FUN_02bb0e9c(lVar2 + 800);
                                                  if (0x61 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x328) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_UIElements_InlineStyleAccessPropertyBag_TranslateProperty_TypeInfo
                                                  ;
                                                  thunk_FUN_02bb0e9c(lVar2 + 0x328);
                                                  if (0x62 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x330) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_UIElements_InlineStyleAccessPropertyBag_UnitySliceTypeProperty_TypeInfo
                                                  ;
                                                  thunk_FUN_02bb0e9c(lVar2 + 0x330);
                                                  if (99 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x338) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  OVR_OpenVR_IVRTrackedCamera__HasCamera_TypeInfo;
                                                  thunk_FUN_02bb0e9c(lVar2 + 0x338);
                                                  if (100 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x340) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  OVR_OpenVR_IVRSystem__GetFloatTrackedDeviceProperty_TypeInfo
                                                  ;
                                                  thunk_FUN_02bb0e9c(lVar2 + 0x340);
                                                  if (0x65 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x348) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  System_Linq_Expressions_Interpreter_IncrementInstruction_IncrementDouble_TypeInfo
                                                  ;
                                                  thunk_FUN_02bb0e9c(lVar2 + 0x348);
                                                  if (0x66 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x350) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_UIElements_InlineStyleAccessPropertyBag_BorderLeftWidthProperty_TypeInfo
                                                  ;
                                                  thunk_FUN_02bb0e9c(lVar2 + 0x350);
                                                  if (0x67 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x358) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_UIElements_InlineStyleAccessPropertyBag_TransitionPropertyProperty_TypeInfo
                                                  ;
                                                  thunk_FUN_02bb0e9c(lVar2 + 0x358);
                                                  if (0x68 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x360) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_UIElements_InlineStyleAccessPropertyBag_LeftProperty_TypeInfo
                                                  ;
                                                  thunk_FUN_02bb0e9c(lVar2 + 0x360);
                                                  if (0x69 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x368) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  OVR_OpenVR_IVRSystem__GetMatrix34TrackedDeviceProperty_TypeInfo
                                                  ;
                                                  thunk_FUN_02bb0e9c(lVar2 + 0x368);
                                                  if (0x6a < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x370) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_UIElements_InlineStyleAccessPropertyBag_UnityFontProperty_TypeInfo
                                                  ;
                                                  thunk_FUN_02bb0e9c(lVar2 + 0x370);
                                                  if (0x6b < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x378) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_UIElements_InlineStyleAccessPropertyBag_HeightProperty_TypeInfo
                                                  ;
                                                  thunk_FUN_02bb0e9c(lVar2 + 0x378);
                                                  if (0x6c < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x380) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  OVR_OpenVR_IVRSystem__ResetSeatedZeroPose_TypeInfo
                                                  ;
                                                  thunk_FUN_02bb0e9c(lVar2 + 0x380);
                                                  if (0x6d < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x388) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  OVR_OpenVR_IVRTrackedCamera__GetVideoStreamTextureGL_TypeInfo
                                                  ;
                                                  thunk_FUN_02bb0e9c(lVar2 + 0x388);
                                                  if (0x6e < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x390) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  OVR_OpenVR_IVRSystem__ShouldApplicationReduceRenderingWork_TypeInfo
                                                  ;
                                                  thunk_FUN_02bb0e9c(lVar2 + 0x390);
                                                  if (0x6f < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x398) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_UIElements_Image_UxmlFactory_TypeInfo;
                                                  thunk_FUN_02bb0e9c(lVar2 + 0x398);
                                                  if (0x70 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x3a0) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_UIElements_InlineStyleAccessPropertyBag_FlexDirectionProperty_TypeInfo
                                                  ;
                                                  thunk_FUN_02bb0e9c(lVar2 + 0x3a0);
                                                  if (0x71 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x3a8) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Meta_XR_MRUtilityKit_ImmersiveSceneDebugger_<>c_TypeInfo
                                                  ;
                                                  thunk_FUN_02bb0e9c(lVar2 + 0x3a8);
                                                  if (0x72 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x3b0) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_UIElements_InlineStyleAccessPropertyBag_JustifyContentProperty_TypeInfo
                                                  ;
                                                  thunk_FUN_02bb0e9c(lVar2 + 0x3b0);
                                                  if (0x73 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x3b8) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_UIElements_InlineStyleAccessPropertyBag_MaxWidthProperty_TypeInfo
                                                  ;
                                                  thunk_FUN_02bb0e9c(lVar2 + 0x3b8);
                                                  if (0x74 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x3c0) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_UIElements_InlineStyleAccessPropertyBag_MarginLeftProperty_TypeInfo
                                                  ;
                                                  thunk_FUN_02bb0e9c(lVar2 + 0x3c0);
                                                  if (0x75 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x3c8) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  OVR_OpenVR_IVRSystem__IsSteamVRDrawingControllers_TypeInfo
                                                  ;
                                                  thunk_FUN_02bb0e9c(lVar2 + 0x3c8);
                                                  if (0x76 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x3d0) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  OVR_OpenVR_IVRSystem__GetArrayTrackedDeviceProperty_TypeInfo
                                                  ;
                                                  thunk_FUN_02bb0e9c(lVar2 + 0x3d0);
                                                  if (0x77 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x3d8) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_UIElements_InlineStyleAccessPropertyBag_BorderRightColorProperty_TypeInfo
                                                  ;
                                                  thunk_FUN_02bb0e9c(lVar2 + 0x3d8);
                                                  if (0x78 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x3e0) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  OVR_OpenVR_IVRSystem__GetProjectionRaw_TypeInfo;
                                                  thunk_FUN_02bb0e9c(lVar2 + 0x3e0);
                                                  if (0x79 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 1000) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_UIElements_InlineStyleAccessPropertyBag_BorderTopWidthProperty_TypeInfo
                                                  ;
                                                  thunk_FUN_02bb0e9c(lVar2 + 1000);
                                                  if (0x7a < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x3f0) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_UIElements_InlineStyleAccessPropertyBag_UnityTextOutlineWidthProperty_TypeInfo
                                                  ;
                                                  thunk_FUN_02bb0e9c(lVar2 + 0x3f0);
                                                  if (0x7b < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x3f8) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Newtonsoft_Json_Utilities_ImmutableCollectionsUtils_<>c_TypeInfo
                                                  ;
                                                  thunk_FUN_02bb0e9c(lVar2 + 0x3f8);
                                                  if (0x7c < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x400) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_UIElements_InlineStyleAccessPropertyBag_AlignItemsProperty_TypeInfo
                                                  ;
                                                  thunk_FUN_02bb0e9c(lVar2 + 0x400);
                                                  if (0x7d < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x408) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  OVR_OpenVR_IVRTrackedCamera__AcquireVideoStreamingService_TypeInfo
                                                  ;
                                                  thunk_FUN_02bb0e9c(lVar2 + 0x408);
                                                  if (0x7e < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x410) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_UIElements_InlineStyleAccessPropertyBag_BorderTopRightRadiusProperty_TypeInfo
                                                  ;
                                                  thunk_FUN_02bb0e9c(lVar2 + 0x410);
                                                  if ((*(uint *)(lVar2 + 0x18) & 0xffffff80) != 0) {
                                                    *(undefined8 *)(lVar2 + 0x418) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_UIElements_InlineStyleAccessPropertyBag_MarginBottomProperty_TypeInfo
                                                  ;
                                                  thunk_FUN_02bb0e9c(lVar2 + 0x418);
                                                  if (0x80 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x420) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_UIElements_InlineStyleAccessPropertyBag_UnityTextAlignProperty_TypeInfo
                                                  ;
                                                  thunk_FUN_02bb0e9c(lVar2 + 0x420);
                                                  if (0x81 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x428) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  OVR_OpenVR_IVRSystem__GetEyeToHeadTransform_TypeInfo
                                                  ;
                                                  thunk_FUN_02bb0e9c(lVar2 + 0x428);
                                                  if (0x82 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x430) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  OVR_OpenVR_IVRTrackedCamera__GetVideoStreamFrameBuffer_TypeInfo
                                                  ;
                                                  thunk_FUN_02bb0e9c(lVar2 + 0x430);
                                                  if (0x83 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x438) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Newtonsoft_Json_Utilities_ImmutableCollectionsUtils_ImmutableCollectionTypeInfo_TypeInfo
                                                  ;
                                                  thunk_FUN_02bb0e9c(lVar2 + 0x438);
                                                  if (0x84 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x440) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  OVR_OpenVR_IVRSystem__SetDisplayVisibility_TypeInfo
                                                  ;
                                                  thunk_FUN_02bb0e9c(lVar2 + 0x440);
                                                  if (0x85 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x448) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  System_Linq_Expressions_Interpreter_IncrementInstruction_IncrementUInt64_TypeInfo
                                                  ;
                                                  thunk_FUN_02bb0e9c(lVar2 + 0x448);
                                                  if (0x86 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x450) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_UIElements_InlineStyleAccessPropertyBag_TransitionDelayProperty_TypeInfo
                                                  ;
                                                  thunk_FUN_02bb0e9c(lVar2 + 0x450);
                                                  if (0x87 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x458) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  OVR_OpenVR_IVRSystem__IsTrackedDeviceConnected_TypeInfo
                                                  ;
                                                  thunk_FUN_02bb0e9c(lVar2 + 0x458);
                                                  if (0x88 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x460) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_UIElements_InlineStyleAccessPropertyBag_CursorProperty_TypeInfo
                                                  ;
                                                  thunk_FUN_02bb0e9c(lVar2 + 0x460);
                                                  if (0x89 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x468) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_UIElements_InlineStyleAccessPropertyBag_UnityEditorTextRenderingModeProperty_TypeInfo
                                                  ;
                                                  thunk_FUN_02bb0e9c(lVar2 + 0x468);
                                                  if (0x8a < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x470) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  System_Linq_Expressions_Interpreter_InitializeLocalInstruction_ImmutableValue_TypeInfo
                                                  ;
                                                  thunk_FUN_02bb0e9c(lVar2 + 0x470);
                                                  if (0x8b < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x478) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  OVR_OpenVR_IVRSystem__GetRecommendedRenderTargetSize_TypeInfo
                                                  ;
                                                  thunk_FUN_02bb0e9c(lVar2 + 0x478);
                                                  if (0x8c < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x480) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_UIElements_InlineStyleAccessPropertyBag_BorderBottomLeftRadiusProperty_TypeInfo
                                                  ;
                                                  thunk_FUN_02bb0e9c(lVar2 + 0x480);
                                                  if (0x8d < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x488) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  System_Linq_Expressions_Interpreter_InitializeLocalInstruction_ParameterBox_TypeInfo
                                                  ;
                                                  thunk_FUN_02bb0e9c(lVar2 + 0x488);
                                                  if (0x8e < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x490) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  System_Linq_Expressions_Interpreter_IncrementInstruction_IncrementSingle_TypeInfo
                                                  ;
                                                  thunk_FUN_02bb0e9c(lVar2 + 0x490);
                                                  if (0x8f < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x498) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  System_Linq_Expressions_Interpreter_IncrementInstruction_IncrementInt16_TypeInfo
                                                  ;
                                                  thunk_FUN_02bb0e9c(lVar2 + 0x498);
                                                  if (0x90 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x4a0) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_UIElements_InlineStyleAccessPropertyBag_LetterSpacingProperty_TypeInfo
                                                  ;
                                                  thunk_FUN_02bb0e9c(lVar2 + 0x4a0);
                                                  if (0x91 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x4a8) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  OVR_OpenVR_IVRTrackedCamera__GetCameraFrameSize_TypeInfo
                                                  ;
                                                  thunk_FUN_02bb0e9c(lVar2 + 0x4a8);
                                                  if (0x92 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x4b0) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_UIElements_InlineStyleAccessPropertyBag_VisibilityProperty_TypeInfo
                                                  ;
                                                  thunk_FUN_02bb0e9c(lVar2 + 0x4b0);
                                                  if (0x93 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x4b8) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_UIElements_InlineStyleAccessPropertyBag_TransitionTimingFunctionProperty_TypeInfo
                                                  ;
                                                  thunk_FUN_02bb0e9c(lVar2 + 0x4b8);
                                                  if (0x94 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x4c0) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  OVR_OpenVR_IVRSystem__PollNextEventWithPose_TypeInfo
                                                  ;
                                                  thunk_FUN_02bb0e9c(lVar2 + 0x4c0);
                                                  if (0x95 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x4c8) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_UIElements_InlineStyleAccessPropertyBag_UnitySliceScaleProperty_TypeInfo
                                                  ;
                                                  thunk_FUN_02bb0e9c(lVar2 + 0x4c8);
                                                  if (0x96 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x4d0) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  OVR_OpenVR_IVRSystem__GetBoolTrackedDeviceProperty_TypeInfo
                                                  ;
                                                  thunk_FUN_02bb0e9c(lVar2 + 0x4d0);
                                                  if (0x97 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x4d8) =
                                                         *(undefined8 *)
                                                          System_Data_Index_IndexTree_TypeInfo;
                                                    thunk_FUN_02bb0e9c(lVar2 + 0x4d8);
                                                    if (0x98 < *(uint *)(lVar2 + 0x18)) {
                                                      *(undefined8 *)(lVar2 + 0x4e0) =
                                                           *(undefined8 *)
                                                                                                                        
                                                  OVR_OpenVR_IVRSystem__TriggerHapticPulse_TypeInfo;
                                                  thunk_FUN_02bb0e9c(lVar2 + 0x4e0);
                                                  if (0x99 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x4e8) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  OVR_OpenVR_IVRTrackedCamera__ReleaseVideoStreamingService_TypeInfo
                                                  ;
                                                  thunk_FUN_02bb0e9c(lVar2 + 0x4e8);
                                                  if (0x9a < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x4f0) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_UIElements_InlineStyleAccessPropertyBag_FlexBasisProperty_TypeInfo
                                                  ;
                                                  thunk_FUN_02bb0e9c(lVar2 + 0x4f0);
                                                  if (0x9b < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x4f8) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  OVR_OpenVR_IVRSystem__GetTrackedDeviceIndexForControllerRole_TypeInfo
                                                  ;
                                                  thunk_FUN_02bb0e9c(lVar2 + 0x4f8);
                                                  if (0x9c < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x500) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_UIElements_InlineStyleAccessPropertyBag_UnityTextAutoSizeProperty_TypeInfo
                                                  ;
                                                  thunk_FUN_02bb0e9c(lVar2 + 0x500);
                                                  if (0x9d < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x508) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_UIElements_InlineStyleAccessPropertyBag_UnityTextOverflowPositionProperty_TypeInfo
                                                  ;
                                                  thunk_FUN_02bb0e9c(lVar2 + 0x508);
                                                  if (0x9e < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x510) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Newtonsoft_Json_Utilities_ImmutableCollectionsUtils_<>c__DisplayClass24_0_TypeInfo
                                                  ;
                                                  thunk_FUN_02bb0e9c(lVar2 + 0x510);
                                                  if (0x9f < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x518) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_UIElements_InlineStyleAccessPropertyBag_RightProperty_TypeInfo
                                                  ;
                                                  thunk_FUN_02bb0e9c(lVar2 + 0x518);
                                                  if (0xa0 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x520) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  OVR_OpenVR_IVRTrackedCamera__GetVideoStreamTextureSize_TypeInfo
                                                  ;
                                                  thunk_FUN_02bb0e9c(lVar2 + 0x520);
                                                  if (0xa1 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x528) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  OVR_OpenVR_IVRTrackedCamera__GetCameraIntrinsics_TypeInfo
                                                  ;
                                                  thunk_FUN_02bb0e9c(lVar2 + 0x528);
                                                  if (0xa2 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x530) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  OVR_OpenVR_IVRSystem__GetControllerRoleForTrackedDeviceIndex_TypeInfo
                                                  ;
                                                  thunk_FUN_02bb0e9c(lVar2 + 0x530);
                                                  if (0xa3 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x538) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_UIElements_InlineStyleAccessPropertyBag_FlexWrapProperty_TypeInfo
                                                  ;
                                                  thunk_FUN_02bb0e9c(lVar2 + 0x538);
                                                  if (0xa4 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x540) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  OVR_OpenVR_IVRSystem__GetPropErrorNameFromEnum_TypeInfo
                                                  ;
                                                  thunk_FUN_02bb0e9c(lVar2 + 0x540);
                                                  if (0xa5 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x548) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_UIElements_InlineStyleAccessPropertyBag_UnitySliceLeftProperty_TypeInfo
                                                  ;
                                                  thunk_FUN_02bb0e9c(lVar2 + 0x548);
                                                  if (0xa6 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x550) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  System_Linq_Expressions_Interpreter_InitializeLocalInstruction_MutableBox_TypeInfo
                                                  ;
                                                  thunk_FUN_02bb0e9c(lVar2 + 0x550);
                                                  puVar1 = 
                                                  OVR_OpenVR_IVRSystem__ComputeDistortion_TypeInfo;
                                                  if (0xa7 < *(uint *)(lVar2 + 0x18)) {
                                                    *(undefined8 *)(lVar2 + 0x558) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  OVR_OpenVR_IVRSystem__GetProjectionMatrix_TypeInfo
                                                  ;
                                                  thunk_FUN_02bb0e9c(lVar2 + 0x558);
                                                  plVar3 = (long *)(*(long *)(*(long *)puVar1 + 0xb8
                                                                             ) + 8);
                                                  *plVar3 = lVar2;
                                                  thunk_FUN_02bb0e9c(plVar3,lVar2);
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
    FUN_02b3cacc();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


