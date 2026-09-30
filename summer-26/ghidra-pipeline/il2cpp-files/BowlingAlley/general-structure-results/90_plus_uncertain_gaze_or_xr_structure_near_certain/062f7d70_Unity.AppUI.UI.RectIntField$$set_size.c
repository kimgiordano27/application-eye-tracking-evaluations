/*
FUNCTION_NAME: Unity.AppUI.UI.RectIntField$$set_size
ENTRY_POINT: 062f7d70
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 131
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;functionality_gaze_retrieval_or_extraction;functionality_data_collection_or_telemetry_hits_1
*/


void Unity_AppUI_UI_RectIntField__set_size(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined8 unaff_x19;
  undefined8 *unaff_x23;
  uint *puVar6;
  undefined8 in_stack_00000010;
  undefined4 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined4 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined4 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined4 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined4 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined4 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined4 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined4 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined4 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined4 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined4 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined4 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined4 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined4 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined4 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined4 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined4 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined4 in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined4 in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined4 in_stack_00000148;
  undefined8 in_stack_00000150;
  undefined4 in_stack_00000158;
  undefined8 in_stack_00000160;
  undefined4 in_stack_00000168;
  undefined8 in_stack_00000170;
  undefined4 in_stack_00000178;
  undefined8 in_stack_00000180;
  undefined4 in_stack_00000188;
  undefined8 in_stack_00000190;
  undefined4 in_stack_00000198;
  undefined8 in_stack_000001a0;
  undefined4 in_stack_000001a8;
  undefined8 in_stack_000001b0;
  undefined4 in_stack_000001b8;
  undefined8 in_stack_000001c0;
  undefined4 in_stack_000001c8;
  undefined8 in_stack_000001d0;
  undefined4 in_stack_000001d8;
  undefined8 in_stack_000001e0;
  undefined4 in_stack_000001e8;
  
  FUN_050f8b10();
  FUN_050f8b10();
  FUN_050f8b10();
  FUN_050f8b10();
  puVar1 = Meta_XR_EnvironmentDepth_DepthProvider_TypeInfo;
  *(undefined8 *)(*(long *)(*(long *)Meta_XR_EnvironmentDepth_DepthProvider_TypeInfo + 0xb8) + 0x58)
       = unaff_x19;
  thunk_FUN_0333a630();
  lVar3 = FUN_032d5d3c(*(undefined8 *)PTR_DAT_072a93b8,0x70);
  lVar4 = FUN_032d5d3c(*unaff_x23,2);
  if (lVar4 == 0) goto LAB_062fcb24;
  if (*(int *)(lVar4 + 0x18) != 0) {
    *(undefined8 *)(lVar4 + 0x20) = *(undefined8 *)Unity_VisualScripting_DivisionHandler_TypeInfo;
    thunk_FUN_0333a630((undefined8 *)(lVar4 + 0x20));
    if (1 < *(uint *)(lVar4 + 0x18)) {
      *(undefined8 *)(lVar4 + 0x28) =
           *(undefined8 *)NovaSamples_DummyScripts_DummyCubeAnimator_TypeInfo;
      thunk_FUN_0333a630();
      if (lVar3 == 0) {
LAB_062fcb24:
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      puVar6 = (uint *)(lVar3 + 0x18);
      if (*puVar6 != 0) {
        *(long *)(lVar3 + 0x20) = lVar4;
        thunk_FUN_0333a630((long *)(lVar3 + 0x20),lVar4);
        lVar4 = FUN_032d5d3c(*unaff_x23,2);
        if (lVar4 == 0) goto LAB_062fcb24;
        if (*(int *)(lVar4 + 0x18) != 0) {
          *(undefined8 *)(lVar4 + 0x20) = *(undefined8 *)RootMotion_FinalIK_FBIKChain_TypeInfo;
          thunk_FUN_0333a630((undefined8 *)(lVar4 + 0x20));
          if (1 < *(uint *)(lVar4 + 0x18)) {
            *(undefined8 *)(lVar4 + 0x28) =
                 *(undefined8 *)UnityEngine_UIElements_EventDispatcher_TypeInfo;
            thunk_FUN_0333a630();
            if (1 < *puVar6) {
              *(long *)(lVar3 + 0x28) = lVar4;
              thunk_FUN_0333a630((long *)(lVar3 + 0x28),lVar4);
              lVar4 = FUN_032d5d3c(*unaff_x23,2);
              if (lVar4 == 0) goto LAB_062fcb24;
              if (*(int *)(lVar4 + 0x18) != 0) {
                *(undefined8 *)(lVar4 + 0x20) =
                     *(undefined8 *)OVR_OpenVR_EVRNotificationType_TypeInfo;
                thunk_FUN_0333a630((undefined8 *)(lVar4 + 0x20));
                if (1 < *(uint *)(lVar4 + 0x18)) {
                  *(undefined8 *)(lVar4 + 0x28) = *(undefined8 *)System_Text_EncoderNLS_TypeInfo;
                  thunk_FUN_0333a630();
                  if (2 < *puVar6) {
                    *(long *)(lVar3 + 0x30) = lVar4;
                    thunk_FUN_0333a630((long *)(lVar3 + 0x30),lVar4);
                    lVar4 = FUN_032d5d3c(*unaff_x23,2);
                    if (lVar4 == 0) goto LAB_062fcb24;
                    if (*(int *)(lVar4 + 0x18) != 0) {
                      *(undefined8 *)(lVar4 + 0x20) =
                           *(undefined8 *)Unity_VisualScripting_Ensure_TypeInfo;
                      thunk_FUN_0333a630((undefined8 *)(lVar4 + 0x20));
                      if (1 < *(uint *)(lVar4 + 0x18)) {
                        *(undefined8 *)(lVar4 + 0x28) =
                             *(undefined8 *)UnityEngine_XR_ARSubsystems_FaceSubsystemParams_TypeInfo
                        ;
                        thunk_FUN_0333a630();
                        if (3 < *puVar6) {
                          *(long *)(lVar3 + 0x38) = lVar4;
                          thunk_FUN_0333a630((long *)(lVar3 + 0x38),lVar4);
                          lVar4 = FUN_032d5d3c(*unaff_x23,2);
                          if (lVar4 == 0) goto LAB_062fcb24;
                          if (*(int *)(lVar4 + 0x18) != 0) {
                            *(undefined8 *)(lVar4 + 0x20) =
                                 *(undefined8 *)
                                  Unity_VisualScripting_FakeSerializationCloner_TypeInfo;
                            thunk_FUN_0333a630((undefined8 *)(lVar4 + 0x20));
                            if (1 < *(uint *)(lVar4 + 0x18)) {
                              *(undefined8 *)(lVar4 + 0x28) =
                                   *(undefined8 *)OVR_OpenVR_EVRSubmitFlags_TypeInfo;
                              thunk_FUN_0333a630();
                              if (4 < *puVar6) {
                                *(long *)(lVar3 + 0x40) = lVar4;
                                thunk_FUN_0333a630((long *)(lVar3 + 0x40),lVar4);
                                lVar4 = FUN_032d5d3c(*unaff_x23,2);
                                if (lVar4 == 0) goto LAB_062fcb24;
                                if (*(int *)(lVar4 + 0x18) != 0) {
                                  *(undefined8 *)(lVar4 + 0x20) =
                                       *(undefined8 *)UnityEngine_XR_ARSubsystems_Feature_TypeInfo;
                                  thunk_FUN_0333a630((undefined8 *)(lVar4 + 0x20));
                                  if (1 < *(uint *)(lVar4 + 0x18)) {
                                    *(undefined8 *)(lVar4 + 0x28) =
                                         *(undefined8 *)
                                          Unity_VisualScripting_Dependencies_NCalc_EvaluateParameterHandler_TypeInfo
                                    ;
                                    thunk_FUN_0333a630();
                                    if (5 < *puVar6) {
                                      *(long *)(lVar3 + 0x48) = lVar4;
                                      thunk_FUN_0333a630((long *)(lVar3 + 0x48),lVar4);
                                      lVar4 = FUN_032d5d3c(*unaff_x23,2);
                                      if (lVar4 == 0) goto LAB_062fcb24;
                                      if (*(int *)(lVar4 + 0x18) != 0) {
                                        *(undefined8 *)(lVar4 + 0x20) =
                                             *(undefined8 *)
                                              System_ComponentModel_ExtendedPropertyDescriptor_TypeInfo
                                        ;
                                        thunk_FUN_0333a630((undefined8 *)(lVar4 + 0x20));
                                        if (1 < *(uint *)(lVar4 + 0x18)) {
                                          *(undefined8 *)(lVar4 + 0x28) =
                                               *(undefined8 *)System_Xml_EmptyEnumerator_TypeInfo;
                                          thunk_FUN_0333a630();
                                          if (6 < *puVar6) {
                                            *(long *)(lVar3 + 0x50) = lVar4;
                                            thunk_FUN_0333a630((long *)(lVar3 + 0x50),lVar4);
                                            lVar4 = FUN_032d5d3c(*unaff_x23,2);
                                            if (lVar4 == 0) goto LAB_062fcb24;
                                            if (*(int *)(lVar4 + 0x18) != 0) {
                                              *(undefined8 *)(lVar4 + 0x20) =
                                                   *(undefined8 *)
                                                                                                        
                                                  System_ComponentModel_DisplayNameAttribute_TypeInfo
                                              ;
                                              thunk_FUN_0333a630((undefined8 *)(lVar4 + 0x20));
                                              if (1 < *(uint *)(lVar4 + 0x18)) {
                                                *(undefined8 *)(lVar4 + 0x28) =
                                                     *(undefined8 *)
                                                      Unity_AppUI_UI_DrawerAnchor_TypeInfo;
                                                thunk_FUN_0333a630();
                                                if (7 < *puVar6) {
                                                  *(long *)(lVar3 + 0x58) = lVar4;
                                                  thunk_FUN_0333a630((long *)(lVar3 + 0x58),lVar4);
                                                  lVar4 = FUN_032d5d3c(*unaff_x23,2);
                                                  if (lVar4 == 0) goto LAB_062fcb24;
                                                  if (*(int *)(lVar4 + 0x18) != 0) {
                                                    *(undefined8 *)(lVar4 + 0x20) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_Networking_DownloadHandler_TypeInfo;
                                                  thunk_FUN_0333a630((undefined8 *)(lVar4 + 0x20));
                                                  if (1 < *(uint *)(lVar4 + 0x18)) {
                                                    *(undefined8 *)(lVar4 + 0x28) =
                                                         *(undefined8 *)
                                                          System_DivideByZeroException_TypeInfo;
                                                    thunk_FUN_0333a630();
                                                    if (8 < *puVar6) {
                                                      *(long *)(lVar3 + 0x60) = lVar4;
                                                      thunk_FUN_0333a630((long *)(lVar3 + 0x60),
                                                                         lVar4);
                                                      lVar4 = FUN_032d5d3c(*unaff_x23,2);
                                                      if (lVar4 == 0) goto LAB_062fcb24;
                                                      if (*(int *)(lVar4 + 0x18) != 0) {
                                                        *(undefined8 *)(lVar4 + 0x20) =
                                                             *(undefined8 *)
                                                                                                                            
                                                  UnityEngine_UIElements_EnumFieldHelpers_TypeInfo;
                                                  thunk_FUN_0333a630((undefined8 *)(lVar4 + 0x20));
                                                  if (1 < *(uint *)(lVar4 + 0x18)) {
                                                    *(undefined8 *)(lVar4 + 0x28) =
                                                         *(undefined8 *)
                                                          OVR_OpenVR_EVRSkeletalMotionRange_TypeInfo
                                                    ;
                                                    thunk_FUN_0333a630();
                                                    if (9 < *puVar6) {
                                                      *(long *)(lVar3 + 0x68) = lVar4;
                                                      thunk_FUN_0333a630((long *)(lVar3 + 0x68),
                                                                         lVar4);
                                                      lVar4 = FUN_032d5d3c(*unaff_x23,2);
                                                      if (lVar4 == 0) goto LAB_062fcb24;
                                                      if (*(int *)(lVar4 + 0x18) != 0) {
                                                        *(undefined8 *)(lVar4 + 0x20) =
                                                             *(undefined8 *)
                                                                                                                            
                                                  UnityEngine_UIElements_DragAndDropPosition_TypeInfo
                                                  ;
                                                  thunk_FUN_0333a630((undefined8 *)(lVar4 + 0x20));
                                                  if (1 < *(uint *)(lVar4 + 0x18)) {
                                                    *(undefined8 *)(lVar4 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  System_Text_EncoderExceptionFallbackBuffer_TypeInfo
                                                  ;
                                                  thunk_FUN_0333a630();
                                                  if (10 < *puVar6) {
                                                    *(long *)(lVar3 + 0x70) = lVar4;
                                                    thunk_FUN_0333a630((long *)(lVar3 + 0x70),lVar4)
                                                    ;
                                                    lVar4 = FUN_032d5d3c(*unaff_x23,2);
                                                    if (lVar4 == 0) goto LAB_062fcb24;
                                                    if (*(int *)(lVar4 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar4 + 0x20) =
                                                           *(undefined8 *)
                                                                                                                        
                                                  UnityEngine_UIElements_UIR_DrawParams_TypeInfo;
                                                  thunk_FUN_0333a630((undefined8 *)(lVar4 + 0x20));
                                                  if (1 < *(uint *)(lVar4 + 0x18)) {
                                                    *(undefined8 *)(lVar4 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Newtonsoft_Json_Serialization_ExtensionDataSetter_TypeInfo
                                                  ;
                                                  thunk_FUN_0333a630();
                                                  if (0xb < *puVar6) {
                                                    *(long *)(lVar3 + 0x78) = lVar4;
                                                    thunk_FUN_0333a630((long *)(lVar3 + 0x78),lVar4)
                                                    ;
                                                    lVar4 = FUN_032d5d3c(*unaff_x23,2);
                                                    if (lVar4 == 0) goto LAB_062fcb24;
                                                    if (*(int *)(lVar4 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar4 + 0x20) =
                                                           *(undefined8 *)
                                                                                                                        
                                                  UnityEngine_Networking_DownloadHandlerFile_TypeInfo
                                                  ;
                                                  thunk_FUN_0333a630((undefined8 *)(lVar4 + 0x20));
                                                  if (1 < *(uint *)(lVar4 + 0x18)) {
                                                    *(undefined8 *)(lVar4 + 0x28) =
                                                         *(undefined8 *)
                                                          OVR_OpenVR_EChaperoneConfigFile_TypeInfo;
                                                    thunk_FUN_0333a630();
                                                    if (0xc < *puVar6) {
                                                      *(long *)(lVar3 + 0x80) = lVar4;
                                                      thunk_FUN_0333a630((long *)(lVar3 + 0x80),
                                                                         lVar4);
                                                      lVar4 = FUN_032d5d3c(*unaff_x23,2);
                                                      if (lVar4 == 0) goto LAB_062fcb24;
                                                      if (*(int *)(lVar4 + 0x18) != 0) {
                                                        *(undefined8 *)(lVar4 + 0x20) =
                                                             *(undefined8 *)
                                                                                                                            
                                                  UnityEngine_Networking_DownloadHandlerTexture_TypeInfo
                                                  ;
                                                  thunk_FUN_0333a630((undefined8 *)(lVar4 + 0x20));
                                                  if (1 < *(uint *)(lVar4 + 0x18)) {
                                                    *(undefined8 *)(lVar4 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Unity_VisualScripting_ExceptionMessages_TypeInfo;
                                                  thunk_FUN_0333a630();
                                                  if (0xd < *puVar6) {
                                                    *(long *)(lVar3 + 0x88) = lVar4;
                                                    thunk_FUN_0333a630((long *)(lVar3 + 0x88),lVar4)
                                                    ;
                                                    lVar4 = FUN_032d5d3c(*unaff_x23,2);
                                                    if (lVar4 == 0) goto LAB_062fcb24;
                                                    if (*(int *)(lVar4 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar4 + 0x20) =
                                                           *(undefined8 *)
                                                                                                                        
                                                  System_IO_Compression_FastEncoderStatics_TypeInfo;
                                                  thunk_FUN_0333a630((undefined8 *)(lVar4 + 0x20));
                                                  if (1 < *(uint *)(lVar4 + 0x18)) {
                                                    *(undefined8 *)(lVar4 + 0x28) =
                                                         *(undefined8 *)
                                                          System_Dynamic_DynamicMetaObject_TypeInfo;
                                                    thunk_FUN_0333a630();
                                                    if (0xe < *puVar6) {
                                                      *(long *)(lVar3 + 0x90) = lVar4;
                                                      thunk_FUN_0333a630((long *)(lVar3 + 0x90),
                                                                         lVar4);
                                                      lVar4 = FUN_032d5d3c(*unaff_x23,2);
                                                      if (lVar4 == 0) goto LAB_062fcb24;
                                                      if (*(int *)(lVar4 + 0x18) != 0) {
                                                        *(undefined8 *)(lVar4 + 0x20) =
                                                             *(undefined8 *)
                                                                                                                            
                                                  Oculus_Interaction_DistantPointDetector_TypeInfo;
                                                  thunk_FUN_0333a630((undefined8 *)(lVar4 + 0x20));
                                                  if (1 < *(uint *)(lVar4 + 0x18)) {
                                                    *(undefined8 *)(lVar4 + 0x28) =
                                                         *(undefined8 *)
                                                          System_Reflection_EventInfo_TypeInfo;
                                                    thunk_FUN_0333a630();
                                                    if (0xf < *puVar6) {
                                                      *(long *)(lVar3 + 0x98) = lVar4;
                                                      thunk_FUN_0333a630((long *)(lVar3 + 0x98),
                                                                         lVar4);
                                                      lVar4 = FUN_032d5d3c(*unaff_x23,2);
                                                      if (lVar4 == 0) goto LAB_062fcb24;
                                                      if (*(int *)(lVar4 + 0x18) != 0) {
                                                        *(undefined8 *)(lVar4 + 0x20) =
                                                             *(undefined8 *)
                                                                                                                            
                                                  UnityEngine_UIElements_EventInterestAttribute_TypeInfo
                                                  ;
                                                  thunk_FUN_0333a630((undefined8 *)(lVar4 + 0x20));
                                                  if (1 < *(uint *)(lVar4 + 0x18)) {
                                                    *(undefined8 *)(lVar4 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_UIElements_StyleSheets_Dimension_TypeInfo
                                                  ;
                                                  thunk_FUN_0333a630();
                                                  if (0x10 < *puVar6) {
                                                    *(long *)(lVar3 + 0xa0) = lVar4;
                                                    thunk_FUN_0333a630((long *)(lVar3 + 0xa0),lVar4)
                                                    ;
                                                    lVar4 = FUN_032d5d3c(*unaff_x23,2);
                                                    if (lVar4 == 0) goto LAB_062fcb24;
                                                    if (*(int *)(lVar4 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar4 + 0x20) =
                                                           *(undefined8 *)
                                                                                                                        
                                                  OVR_OpenVR_ETrackedControllerRole_TypeInfo;
                                                  thunk_FUN_0333a630((undefined8 *)(lVar4 + 0x20));
                                                  if (1 < *(uint *)(lVar4 + 0x18)) {
                                                    *(undefined8 *)(lVar4 + 0x28) =
                                                         *(undefined8 *)
                                                          OVR_OpenVR_EVRTrackedCameraError_TypeInfo;
                                                    thunk_FUN_0333a630();
                                                    if (0x11 < *puVar6) {
                                                      *(long *)(lVar3 + 0xa8) = lVar4;
                                                      thunk_FUN_0333a630((long *)(lVar3 + 0xa8),
                                                                         lVar4);
                                                      lVar4 = FUN_032d5d3c(*unaff_x23,2);
                                                      if (lVar4 == 0) goto LAB_062fcb24;
                                                      if (*(int *)(lVar4 + 0x18) != 0) {
                                                        *(undefined8 *)(lVar4 + 0x20) =
                                                             *(undefined8 *)
                                                              System_ExceptionResource_TypeInfo;
                                                        thunk_FUN_0333a630((undefined8 *)
                                                                           (lVar4 + 0x20));
                                                        if (1 < *(uint *)(lVar4 + 0x18)) {
                                                          *(undefined8 *)(lVar4 + 0x28) =
                                                               *(undefined8 *)
                                                                                                                                
                                                  OVR_OpenVR_EHiddenAreaMeshType_TypeInfo;
                                                  thunk_FUN_0333a630();
                                                  if (0x12 < *puVar6) {
                                                    *(long *)(lVar3 + 0xb0) = lVar4;
                                                    thunk_FUN_0333a630((long *)(lVar3 + 0xb0),lVar4)
                                                    ;
                                                    lVar4 = FUN_032d5d3c(*unaff_x23,2);
                                                    if (lVar4 == 0) goto LAB_062fcb24;
                                                    if (*(int *)(lVar4 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar4 + 0x20) =
                                                           *(undefined8 *)
                                                            OVR_OpenVR_EDualAnalogWhich_TypeInfo;
                                                      thunk_FUN_0333a630((undefined8 *)
                                                                         (lVar4 + 0x20));
                                                      if (1 < *(uint *)(lVar4 + 0x18)) {
                                                        *(undefined8 *)(lVar4 + 0x28) =
                                                             *(undefined8 *)
                                                                                                                            
                                                  Unity_VisualScripting_EventHook_TypeInfo;
                                                  thunk_FUN_0333a630();
                                                  if (0x13 < *puVar6) {
                                                    *(long *)(lVar3 + 0xb8) = lVar4;
                                                    thunk_FUN_0333a630((long *)(lVar3 + 0xb8),lVar4)
                                                    ;
                                                    lVar4 = FUN_032d5d3c(*unaff_x23,2);
                                                    if (lVar4 == 0) goto LAB_062fcb24;
                                                    if (*(int *)(lVar4 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar4 + 0x20) =
                                                           *(undefined8 *)
                                                                                                                        
                                                  System_ComponentModel_ExtenderProvidedPropertyAttribute_TypeInfo
                                                  ;
                                                  thunk_FUN_0333a630((undefined8 *)(lVar4 + 0x20));
                                                  if (1 < *(uint *)(lVar4 + 0x18)) {
                                                    *(undefined8 *)(lVar4 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_UIElements_DropdownMenu_TypeInfo;
                                                  thunk_FUN_0333a630();
                                                  if (0x14 < *puVar6) {
                                                    *(long *)(lVar3 + 0xc0) = lVar4;
                                                    thunk_FUN_0333a630((long *)(lVar3 + 0xc0),lVar4)
                                                    ;
                                                    lVar4 = FUN_032d5d3c(*unaff_x23,2);
                                                    if (lVar4 == 0) goto LAB_062fcb24;
                                                    if (*(int *)(lVar4 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar4 + 0x20) =
                                                           *(undefined8 *)
                                                                                                                        
                                                  System_Linq_Expressions_Interpreter_EqualInstruction_TypeInfo
                                                  ;
                                                  thunk_FUN_0333a630((undefined8 *)(lVar4 + 0x20));
                                                  if (1 < *(uint *)(lVar4 + 0x18)) {
                                                    *(undefined8 *)(lVar4 + 0x28) =
                                                         *(undefined8 *)
                                                          System_Net_DigestHeaderParser_TypeInfo;
                                                    thunk_FUN_0333a630();
                                                    if (0x15 < *puVar6) {
                                                      *(long *)(lVar3 + 200) = lVar4;
                                                      thunk_FUN_0333a630((long *)(lVar3 + 200),lVar4
                                                                        );
                                                      lVar4 = FUN_032d5d3c(*unaff_x23,2);
                                                      if (lVar4 == 0) goto LAB_062fcb24;
                                                      if (*(int *)(lVar4 + 0x18) != 0) {
                                                        *(undefined8 *)(lVar4 + 0x20) =
                                                             *(undefined8 *)
                                                                                                                            
                                                  System_Data_DuplicateNameException_TypeInfo;
                                                  thunk_FUN_0333a630((undefined8 *)(lVar4 + 0x20));
                                                  if (1 < *(uint *)(lVar4 + 0x18)) {
                                                    *(undefined8 *)(lVar4 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  System_Linq_Expressions_Interpreter_DivInstruction_TypeInfo
                                                  ;
                                                  thunk_FUN_0333a630();
                                                  if (0x16 < *puVar6) {
                                                    *(long *)(lVar3 + 0xd0) = lVar4;
                                                    thunk_FUN_0333a630((long *)(lVar3 + 0xd0),lVar4)
                                                    ;
                                                    lVar4 = FUN_032d5d3c(*unaff_x23,2);
                                                    if (lVar4 == 0) goto LAB_062fcb24;
                                                    if (*(int *)(lVar4 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar4 + 0x20) =
                                                           *(undefined8 *)
                                                                                                                        
                                                  UnityEngine_XR_OpenXR_Features_Interactions_EyeTrackingUsages_TypeInfo
                                                  ;
                                                  thunk_FUN_0333a630((undefined8 *)(lVar4 + 0x20));
                                                  puVar2 = System_Exception_TypeInfo;
                                                  if (1 < *(uint *)(lVar4 + 0x18)) {
                                                    *(undefined8 *)(lVar4 + 0x28) =
                                                         *(undefined8 *)System_Exception_TypeInfo;
                                                    thunk_FUN_0333a630();
                                                    if (0x17 < *puVar6) {
                                                      *(long *)(lVar3 + 0xd8) = lVar4;
                                                      thunk_FUN_0333a630((long *)(lVar3 + 0xd8),
                                                                         lVar4);
                                                      lVar4 = FUN_032d5d3c(*unaff_x23,2);
                                                      if (lVar4 == 0) goto LAB_062fcb24;
                                                      if (*(int *)(lVar4 + 0x18) != 0) {
                                                        *(undefined8 *)(lVar4 + 0x20) =
                                                             *(undefined8 *)
                                                                                                                            
                                                  UnityEngine_InputSystem_Controls_DiscreteButtonControl_TypeInfo
                                                  ;
                                                  thunk_FUN_0333a630((undefined8 *)(lVar4 + 0x20));
                                                  if (1 < *(uint *)(lVar4 + 0x18)) {
                                                    *(undefined8 *)(lVar4 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_UIElements_StyleSheets_Syntax_Expression_TypeInfo
                                                  ;
                                                  thunk_FUN_0333a630();
                                                  if (0x18 < *puVar6) {
                                                    *(long *)(lVar3 + 0xe0) = lVar4;
                                                    thunk_FUN_0333a630((long *)(lVar3 + 0xe0),lVar4)
                                                    ;
                                                    lVar4 = FUN_032d5d3c(*unaff_x23,2);
                                                    if (lVar4 == 0) goto LAB_062fcb24;
                                                    if (*(int *)(lVar4 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar4 + 0x20) =
                                                           *(undefined8 *)
                                                                                                                        
                                                  Newtonsoft_Json_Converters_EntityKeyMemberConverter_TypeInfo
                                                  ;
                                                  thunk_FUN_0333a630((undefined8 *)(lVar4 + 0x20));
                                                  if (1 < *(uint *)(lVar4 + 0x18)) {
                                                    *(undefined8 *)(lVar4 + 0x28) =
                                                         *(undefined8 *)puVar2;
                                                    thunk_FUN_0333a630();
                                                    if (0x19 < *puVar6) {
                                                      *(long *)(lVar3 + 0xe8) = lVar4;
                                                      thunk_FUN_0333a630((long *)(lVar3 + 0xe8),
                                                                         lVar4);
                                                      lVar4 = FUN_032d5d3c(*unaff_x23,2);
                                                      if (lVar4 == 0) goto LAB_062fcb24;
                                                      if (*(int *)(lVar4 + 0x18) != 0) {
                                                        *(undefined8 *)(lVar4 + 0x20) =
                                                             *(undefined8 *)
                                                                                                                            
                                                  OVR_OpenVR_EVRTrackedCameraFrameType_TypeInfo;
                                                  thunk_FUN_0333a630((undefined8 *)(lVar4 + 0x20));
                                                  if (1 < *(uint *)(lVar4 + 0x18)) {
                                                    *(undefined8 *)(lVar4 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Unity_VisualScripting_ExclusiveOrHandler_TypeInfo;
                                                  thunk_FUN_0333a630();
                                                  if (0x1a < *puVar6) {
                                                    *(long *)(lVar3 + 0xf0) = lVar4;
                                                    thunk_FUN_0333a630((long *)(lVar3 + 0xf0),lVar4)
                                                    ;
                                                    lVar4 = FUN_032d5d3c(*unaff_x23,2);
                                                    if (lVar4 == 0) goto LAB_062fcb24;
                                                    if (*(int *)(lVar4 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar4 + 0x20) =
                                                           *(undefined8 *)
                                                                                                                        
                                                  System_Linq_Expressions_Interpreter_EnterExceptionFilterInstruction_TypeInfo
                                                  ;
                                                  thunk_FUN_0333a630((undefined8 *)(lVar4 + 0x20));
                                                  if (1 < *(uint *)(lVar4 + 0x18)) {
                                                    *(undefined8 *)(lVar4 + 0x28) =
                                                         *(undefined8 *)
                                                          OVR_OpenVR_EVRButtonId_TypeInfo;
                                                    thunk_FUN_0333a630();
                                                    if (0x1b < *puVar6) {
                                                      *(long *)(lVar3 + 0xf8) = lVar4;
                                                      thunk_FUN_0333a630((long *)(lVar3 + 0xf8),
                                                                         lVar4);
                                                      lVar4 = FUN_032d5d3c(*unaff_x23,2);
                                                      if (lVar4 == 0) goto LAB_062fcb24;
                                                      if (*(int *)(lVar4 + 0x18) != 0) {
                                                        *(undefined8 *)(lVar4 + 0x20) =
                                                             *(undefined8 *)
                                                              System_Xml_DomNameTable_TypeInfo;
                                                        thunk_FUN_0333a630((undefined8 *)
                                                                           (lVar4 + 0x20));
                                                        if (1 < *(uint *)(lVar4 + 0x18)) {
                                                          *(undefined8 *)(lVar4 + 0x28) =
                                                               *(undefined8 *)
                                                                                                                                
                                                  System_Data_Common_DoubleStorage_TypeInfo;
                                                  thunk_FUN_0333a630();
                                                  if (0x1c < *puVar6) {
                                                    *(long *)(lVar3 + 0x100) = lVar4;
                                                    thunk_FUN_0333a630(lVar3 + 0x100,lVar4);
                                                    lVar4 = FUN_032d5d3c(*unaff_x23,2);
                                                    if (lVar4 == 0) goto LAB_062fcb24;
                                                    if (*(int *)(lVar4 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar4 + 0x20) =
                                                           *(undefined8 *)
                                                            Unity_AppUI_UI_DrawerVariant_TypeInfo;
                                                      thunk_FUN_0333a630((undefined8 *)
                                                                         (lVar4 + 0x20));
                                                      if (1 < *(uint *)(lVar4 + 0x18)) {
                                                        *(undefined8 *)(lVar4 + 0x28) =
                                                             *(undefined8 *)
                                                                                                                            
                                                  UnityEngine_XR_Interaction_Toolkit_AR_DragGestureRecognizer_TypeInfo
                                                  ;
                                                  thunk_FUN_0333a630();
                                                  if (0x1d < *puVar6) {
                                                    *(long *)(lVar3 + 0x108) = lVar4;
                                                    thunk_FUN_0333a630(lVar3 + 0x108,lVar4);
                                                    lVar4 = FUN_032d5d3c(*unaff_x23,2);
                                                    if (lVar4 == 0) goto LAB_062fcb24;
                                                    if (*(int *)(lVar4 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar4 + 0x20) =
                                                           *(undefined8 *)UnityEngine_Event_TypeInfo
                                                      ;
                                                      thunk_FUN_0333a630((undefined8 *)
                                                                         (lVar4 + 0x20));
                                                      if (1 < *(uint *)(lVar4 + 0x18)) {
                                                        *(undefined8 *)(lVar4 + 0x28) =
                                                             *(undefined8 *)
                                                                                                                            
                                                  ReadyPlayerMe_Core_FailureEventArgs_TypeInfo;
                                                  thunk_FUN_0333a630();
                                                  if (0x1e < *puVar6) {
                                                    *(long *)(lVar3 + 0x110) = lVar4;
                                                    thunk_FUN_0333a630(lVar3 + 0x110,lVar4);
                                                    lVar4 = FUN_032d5d3c(*unaff_x23,2);
                                                    if (lVar4 == 0) goto LAB_062fcb24;
                                                    if (*(int *)(lVar4 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar4 + 0x20) =
                                                           *(undefined8 *)
                                                                                                                        
                                                  Oculus_Skinning_DummySkinningBufferPropertySetter_TypeInfo
                                                  ;
                                                  thunk_FUN_0333a630((undefined8 *)(lVar4 + 0x20));
                                                  if (1 < *(uint *)(lVar4 + 0x18)) {
                                                    *(undefined8 *)(lVar4 + 0x28) =
                                                         *(undefined8 *)
                                                          System_FieldAccessException_TypeInfo;
                                                    thunk_FUN_0333a630();
                                                    if (0x1f < *puVar6) {
                                                      *(long *)(lVar3 + 0x118) = lVar4;
                                                      thunk_FUN_0333a630(lVar3 + 0x118,lVar4);
                                                      lVar4 = FUN_032d5d3c(*unaff_x23,2);
                                                      if (lVar4 == 0) goto LAB_062fcb24;
                                                      if (*(int *)(lVar4 + 0x18) != 0) {
                                                        *(undefined8 *)(lVar4 + 0x20) =
                                                             *(undefined8 *)
                                                              Unity_AppUI_UI_Draggable_TypeInfo;
                                                        thunk_FUN_0333a630((undefined8 *)
                                                                           (lVar4 + 0x20));
                                                        if (1 < *(uint *)(lVar4 + 0x18)) {
                                                          *(undefined8 *)(lVar4 + 0x28) =
                                                               *(undefined8 *)
                                                                                                                                
                                                  OVR_OpenVR_ETrackedDeviceClass_TypeInfo;
                                                  thunk_FUN_0333a630();
                                                  if (0x20 < *puVar6) {
                                                    *(long *)(lVar3 + 0x120) = lVar4;
                                                    thunk_FUN_0333a630(lVar3 + 0x120,lVar4);
                                                    lVar4 = FUN_032d5d3c(*unaff_x23,2);
                                                    if (lVar4 == 0) goto LAB_062fcb24;
                                                    if (*(int *)(lVar4 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar4 + 0x20) =
                                                           *(undefined8 *)
                                                                                                                        
                                                  System_Threading_ExecutionContext_TypeInfo;
                                                  thunk_FUN_0333a630((undefined8 *)(lVar4 + 0x20));
                                                  if (1 < *(uint *)(lVar4 + 0x18)) {
                                                    *(undefined8 *)(lVar4 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_VFX_Utility_ExposedProperty_TypeInfo;
                                                  thunk_FUN_0333a630();
                                                  if (0x21 < *puVar6) {
                                                    *(long *)(lVar3 + 0x128) = lVar4;
                                                    thunk_FUN_0333a630(lVar3 + 0x128,lVar4);
                                                    lVar4 = FUN_032d5d3c(*unaff_x23,2);
                                                    if (lVar4 == 0) goto LAB_062fcb24;
                                                    if (*(int *)(lVar4 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar4 + 0x20) =
                                                           *(undefined8 *)
                                                            Unity_AppUI_UI_DropZoneState_TypeInfo;
                                                      thunk_FUN_0333a630((undefined8 *)
                                                                         (lVar4 + 0x20));
                                                      if (1 < *(uint *)(lVar4 + 0x18)) {
                                                        *(undefined8 *)(lVar4 + 0x28) =
                                                             *(undefined8 *)
                                                                                                                            
                                                  System_Linq_Expressions_Interpreter_EnterTryFaultInstruction_TypeInfo
                                                  ;
                                                  thunk_FUN_0333a630();
                                                  if (0x22 < *puVar6) {
                                                    *(long *)(lVar3 + 0x130) = lVar4;
                                                    thunk_FUN_0333a630(lVar3 + 0x130,lVar4);
                                                    lVar4 = FUN_032d5d3c(*unaff_x23,2);
                                                    if (lVar4 == 0) goto LAB_062fcb24;
                                                    if (*(int *)(lVar4 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar4 + 0x20) =
                                                           *(undefined8 *)
                                                            OVR_OpenVR_EColorSpace_TypeInfo;
                                                      thunk_FUN_0333a630((undefined8 *)
                                                                         (lVar4 + 0x20));
                                                      if (1 < *(uint *)(lVar4 + 0x18)) {
                                                        *(undefined8 *)(lVar4 + 0x28) =
                                                             *(undefined8 *)
                                                                                                                            
                                                  System_Text_EncoderFallbackException_TypeInfo;
                                                  thunk_FUN_0333a630();
                                                  if (0x23 < *puVar6) {
                                                    *(long *)(lVar3 + 0x138) = lVar4;
                                                    thunk_FUN_0333a630(lVar3 + 0x138,lVar4);
                                                    lVar4 = FUN_032d5d3c(*unaff_x23,2);
                                                    if (lVar4 == 0) goto LAB_062fcb24;
                                                    if (*(int *)(lVar4 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar4 + 0x20) =
                                                           *(undefined8 *)
                                                                                                                        
                                                  OVR_OpenVR_EVRApplicationTransitionState_TypeInfo;
                                                  thunk_FUN_0333a630((undefined8 *)(lVar4 + 0x20));
                                                  if (1 < *(uint *)(lVar4 + 0x18)) {
                                                    *(undefined8 *)(lVar4 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_Timeline_Extrapolation_TypeInfo;
                                                  thunk_FUN_0333a630();
                                                  if (0x24 < *puVar6) {
                                                    *(long *)(lVar3 + 0x140) = lVar4;
                                                    thunk_FUN_0333a630(lVar3 + 0x140,lVar4);
                                                    lVar4 = FUN_032d5d3c(*unaff_x23,2);
                                                    if (lVar4 == 0) goto LAB_062fcb24;
                                                    if (*(int *)(lVar4 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar4 + 0x20) =
                                                           *(undefined8 *)
                                                            OVR_OpenVR_EOverlayDirection_TypeInfo;
                                                      thunk_FUN_0333a630((undefined8 *)
                                                                         (lVar4 + 0x20));
                                                      if (1 < *(uint *)(lVar4 + 0x18)) {
                                                        *(undefined8 *)(lVar4 + 0x28) =
                                                             *(undefined8 *)
                                                                                                                            
                                                  UnityEngine_UIElements_DropdownField_TypeInfo;
                                                  thunk_FUN_0333a630();
                                                  if (0x25 < *puVar6) {
                                                    *(long *)(lVar3 + 0x148) = lVar4;
                                                    thunk_FUN_0333a630(lVar3 + 0x148,lVar4);
                                                    lVar4 = FUN_032d5d3c(*unaff_x23,2);
                                                    if (lVar4 == 0) goto LAB_062fcb24;
                                                    if (*(int *)(lVar4 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar4 + 0x20) =
                                                           *(undefined8 *)double_TypeInfo;
                                                      thunk_FUN_0333a630((undefined8 *)
                                                                         (lVar4 + 0x20));
                                                      puVar2 = 
                                                  UnityEngine_UIElements_DropdownMenuSeparator_TypeInfo
                                                  ;
                                                  if (1 < *(uint *)(lVar4 + 0x18)) {
                                                    *(undefined8 *)(lVar4 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_UIElements_DropdownMenuSeparator_TypeInfo
                                                  ;
                                                  thunk_FUN_0333a630();
                                                  if (0x26 < *puVar6) {
                                                    *(long *)(lVar3 + 0x150) = lVar4;
                                                    thunk_FUN_0333a630(lVar3 + 0x150,lVar4);
                                                    lVar4 = FUN_032d5d3c(*unaff_x23,2);
                                                    if (lVar4 == 0) goto LAB_062fcb24;
                                                    if (*(int *)(lVar4 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar4 + 0x20) =
                                                           *(undefined8 *)
                                                            System_Xml_Schema_DtdValidator_TypeInfo;
                                                      thunk_FUN_0333a630((undefined8 *)
                                                                         (lVar4 + 0x20));
                                                      if (1 < *(uint *)(lVar4 + 0x18)) {
                                                        *(undefined8 *)(lVar4 + 0x28) =
                                                             *(undefined8 *)
                                                                                                                            
                                                  System_Linq_Expressions_Interpreter_ExceptionFilter_TypeInfo
                                                  ;
                                                  thunk_FUN_0333a630();
                                                  if (0x27 < *puVar6) {
                                                    *(long *)(lVar3 + 0x158) = lVar4;
                                                    thunk_FUN_0333a630(lVar3 + 0x158,lVar4);
                                                    lVar4 = FUN_032d5d3c(*unaff_x23,2);
                                                    if (lVar4 == 0) goto LAB_062fcb24;
                                                    if (*(int *)(lVar4 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar4 + 0x20) =
                                                           *(undefined8 *)
                                                            System_IO_FileInfo_TypeInfo;
                                                      thunk_FUN_0333a630((undefined8 *)
                                                                         (lVar4 + 0x20));
                                                      if (1 < *(uint *)(lVar4 + 0x18)) {
                                                        *(undefined8 *)(lVar4 + 0x28) =
                                                             *(undefined8 *)puVar2;
                                                        thunk_FUN_0333a630();
                                                        if (0x28 < *puVar6) {
                                                          *(long *)(lVar3 + 0x160) = lVar4;
                                                          thunk_FUN_0333a630(lVar3 + 0x160,lVar4);
                                                          lVar4 = FUN_032d5d3c(*unaff_x23,2);
                                                          if (lVar4 == 0) goto LAB_062fcb24;
                                                          if (*(int *)(lVar4 + 0x18) != 0) {
                                                            *(undefined8 *)(lVar4 + 0x20) =
                                                                 *(undefined8 *)
                                                                  OVR_OpenVR_EVREye_TypeInfo;
                                                            thunk_FUN_0333a630((undefined8 *)
                                                                               (lVar4 + 0x20));
                                                            if (1 < *(uint *)(lVar4 + 0x18)) {
                                                              *(undefined8 *)(lVar4 + 0x28) =
                                                                   *(undefined8 *)
                                                                                                                                        
                                                  System_Data_ExpressionParser_TypeInfo;
                                                  thunk_FUN_0333a630();
                                                  if (0x29 < *puVar6) {
                                                    *(long *)(lVar3 + 0x168) = lVar4;
                                                    thunk_FUN_0333a630(lVar3 + 0x168,lVar4);
                                                    lVar4 = FUN_032d5d3c(*unaff_x23,2);
                                                    if (lVar4 == 0) goto LAB_062fcb24;
                                                    if (*(int *)(lVar4 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar4 + 0x20) =
                                                           *(undefined8 *)
                                                                                                                        
                                                  System_Runtime_InteropServices_DllImportAttribute_TypeInfo
                                                  ;
                                                  thunk_FUN_0333a630((undefined8 *)(lVar4 + 0x20));
                                                  if (1 < *(uint *)(lVar4 + 0x18)) {
                                                    *(undefined8 *)(lVar4 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_UIElements_EventCallbackList_TypeInfo;
                                                  thunk_FUN_0333a630();
                                                  if (0x2a < *puVar6) {
                                                    *(long *)(lVar3 + 0x170) = lVar4;
                                                    thunk_FUN_0333a630(lVar3 + 0x170,lVar4);
                                                    lVar4 = FUN_032d5d3c(*unaff_x23,2);
                                                    if (lVar4 == 0) goto LAB_062fcb24;
                                                    if (*(int *)(lVar4 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar4 + 0x20) =
                                                           *(undefined8 *)System_Empty_TypeInfo;
                                                      thunk_FUN_0333a630((undefined8 *)
                                                                         (lVar4 + 0x20));
                                                      if (1 < *(uint *)(lVar4 + 0x18)) {
                                                        *(undefined8 *)(lVar4 + 0x28) =
                                                             *(undefined8 *)
                                                              Firebase_Dispatcher_TypeInfo;
                                                        thunk_FUN_0333a630();
                                                        if (0x2b < *puVar6) {
                                                          *(long *)(lVar3 + 0x178) = lVar4;
                                                          thunk_FUN_0333a630(lVar3 + 0x178,lVar4);
                                                          lVar4 = FUN_032d5d3c(*unaff_x23,2);
                                                          if (lVar4 == 0) goto LAB_062fcb24;
                                                          if (*(int *)(lVar4 + 0x18) != 0) {
                                                            *(undefined8 *)(lVar4 + 0x20) =
                                                                 *(undefined8 *)
                                                                  UnityEngine_UI_Dropdown_TypeInfo;
                                                            thunk_FUN_0333a630((undefined8 *)
                                                                               (lVar4 + 0x20));
                                                            if (1 < *(uint *)(lVar4 + 0x18)) {
                                                              *(undefined8 *)(lVar4 + 0x28) =
                                                                   *(undefined8 *)
                                                                                                                                        
                                                  Unity_VisualScripting_EqualityHandler_TypeInfo;
                                                  thunk_FUN_0333a630();
                                                  if (0x2c < *puVar6) {
                                                    *(long *)(lVar3 + 0x180) = lVar4;
                                                    thunk_FUN_0333a630(lVar3 + 0x180,lVar4);
                                                    lVar4 = FUN_032d5d3c(*unaff_x23,2);
                                                    if (lVar4 == 0) goto LAB_062fcb24;
                                                    if (*(int *)(lVar4 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar4 + 0x20) =
                                                           *(undefined8 *)
                                                                                                                        
                                                  UnityEngine_EventSystems_ExecuteEvents_TypeInfo;
                                                  thunk_FUN_0333a630((undefined8 *)(lVar4 + 0x20));
                                                  if (1 < *(uint *)(lVar4 + 0x18)) {
                                                    *(undefined8 *)(lVar4 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Unity_VisualScripting_FieldsCloner_TypeInfo;
                                                  thunk_FUN_0333a630();
                                                  if (0x2d < *puVar6) {
                                                    *(long *)(lVar3 + 0x188) = lVar4;
                                                    thunk_FUN_0333a630(lVar3 + 0x188,lVar4);
                                                    lVar4 = FUN_032d5d3c(*unaff_x23,2);
                                                    if (lVar4 == 0) goto LAB_062fcb24;
                                                    if (*(int *)(lVar4 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar4 + 0x20) =
                                                           *(undefined8 *)
                                                                                                                        
                                                  Newtonsoft_Json_Serialization_ErrorContext_TypeInfo
                                                  ;
                                                  thunk_FUN_0333a630((undefined8 *)(lVar4 + 0x20));
                                                  if (1 < *(uint *)(lVar4 + 0x18)) {
                                                    *(undefined8 *)(lVar4 + 0x28) =
                                                         *(undefined8 *)BNG_DrawDefinition_TypeInfo;
                                                    thunk_FUN_0333a630();
                                                    if (0x2e < *puVar6) {
                                                      *(long *)(lVar3 + 400) = lVar4;
                                                      thunk_FUN_0333a630(lVar3 + 400,lVar4);
                                                      lVar4 = FUN_032d5d3c(*unaff_x23,2);
                                                      if (lVar4 == 0) goto LAB_062fcb24;
                                                      if (*(int *)(lVar4 + 0x18) != 0) {
                                                        *(undefined8 *)(lVar4 + 0x20) =
                                                             *(undefined8 *)
                                                                                                                            
                                                  System_Resources_FastResourceComparer_TypeInfo;
                                                  thunk_FUN_0333a630((undefined8 *)(lVar4 + 0x20));
                                                  if (1 < *(uint *)(lVar4 + 0x18)) {
                                                    *(undefined8 *)(lVar4 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  System_Runtime_Remoting_Messaging_ErrorMessage_TypeInfo
                                                  ;
                                                  thunk_FUN_0333a630();
                                                  if (0x2f < *puVar6) {
                                                    *(long *)(lVar3 + 0x198) = lVar4;
                                                    thunk_FUN_0333a630(lVar3 + 0x198,lVar4);
                                                    lVar4 = FUN_032d5d3c(*unaff_x23,2);
                                                    if (lVar4 == 0) goto LAB_062fcb24;
                                                    if (*(int *)(lVar4 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar4 + 0x20) =
                                                           *(undefined8 *)
                                                                                                                        
                                                  UnityEngine_UIElements_EventCategoryAttribute_TypeInfo
                                                  ;
                                                  thunk_FUN_0333a630((undefined8 *)(lVar4 + 0x20));
                                                  if (1 < *(uint *)(lVar4 + 0x18)) {
                                                    *(undefined8 *)(lVar4 + 0x28) =
                                                         *(undefined8 *)
                                                          GLTFast_Schema_DrawMode_TypeInfo;
                                                    thunk_FUN_0333a630();
                                                    if (0x30 < *puVar6) {
                                                      *(long *)(lVar3 + 0x1a0) = lVar4;
                                                      thunk_FUN_0333a630(lVar3 + 0x1a0,lVar4);
                                                      lVar4 = FUN_032d5d3c(*unaff_x23,2);
                                                      if (lVar4 == 0) goto LAB_062fcb24;
                                                      if (*(int *)(lVar4 + 0x18) != 0) {
                                                        *(undefined8 *)(lVar4 + 0x20) =
                                                             *(undefined8 *)
                                                              System_IO_EnumerationOptions_TypeInfo;
                                                        thunk_FUN_0333a630((undefined8 *)
                                                                           (lVar4 + 0x20));
                                                        if (1 < *(uint *)(lVar4 + 0x18)) {
                                                          *(undefined8 *)(lVar4 + 0x28) =
                                                               *(undefined8 *)
                                                                                                                                
                                                  System_Xml_Schema_Datatype_day_TypeInfo;
                                                  thunk_FUN_0333a630();
                                                  if (0x31 < *puVar6) {
                                                    *(long *)(lVar3 + 0x1a8) = lVar4;
                                                    thunk_FUN_0333a630(lVar3 + 0x1a8,lVar4);
                                                    lVar4 = FUN_032d5d3c(*unaff_x23,2);
                                                    if (lVar4 == 0) goto LAB_062fcb24;
                                                    if (*(int *)(lVar4 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar4 + 0x20) =
                                                           *(undefined8 *)
                                                                                                                        
                                                  UnityEngine_UIElements_ElementUnderPointer_TypeInfo
                                                  ;
                                                  thunk_FUN_0333a630((undefined8 *)(lVar4 + 0x20));
                                                  if (1 < *(uint *)(lVar4 + 0x18)) {
                                                    *(undefined8 *)(lVar4 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Newtonsoft_Json_Utilities_FSharpFunction_TypeInfo;
                                                  thunk_FUN_0333a630();
                                                  if (0x32 < *puVar6) {
                                                    *(long *)(lVar3 + 0x1b0) = lVar4;
                                                    thunk_FUN_0333a630(lVar3 + 0x1b0,lVar4);
                                                    lVar4 = FUN_032d5d3c(*unaff_x23,2);
                                                    if (lVar4 == 0) goto LAB_062fcb24;
                                                    if (*(int *)(lVar4 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar4 + 0x20) =
                                                           *(undefined8 *)
                                                            Unity_AppUI_Core_Dir_TypeInfo;
                                                      thunk_FUN_0333a630((undefined8 *)
                                                                         (lVar4 + 0x20));
                                                      if (1 < *(uint *)(lVar4 + 0x18)) {
                                                        *(undefined8 *)(lVar4 + 0x28) =
                                                             *(undefined8 *)
                                                                                                                            
                                                  System_Runtime_Remoting_EnvoyInfo_TypeInfo;
                                                  thunk_FUN_0333a630();
                                                  if (0x33 < *puVar6) {
                                                    *(long *)(lVar3 + 0x1b8) = lVar4;
                                                    thunk_FUN_0333a630(lVar3 + 0x1b8,lVar4);
                                                    lVar4 = FUN_032d5d3c(*unaff_x23,2);
                                                    if (lVar4 == 0) goto LAB_062fcb24;
                                                    if (*(int *)(lVar4 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar4 + 0x20) =
                                                           *(undefined8 *)
                                                                                                                        
                                                  UnityEngine_UIElements_DynamicAtlasSettings_TypeInfo
                                                  ;
                                                  thunk_FUN_0333a630((undefined8 *)(lVar4 + 0x20));
                                                  if (1 < *(uint *)(lVar4 + 0x18)) {
                                                    *(undefined8 *)(lVar4 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_Rendering_DynamicResolutionHandler_TypeInfo
                                                  ;
                                                  thunk_FUN_0333a630();
                                                  if (0x34 < *puVar6) {
                                                    *(long *)(lVar3 + 0x1c0) = lVar4;
                                                    thunk_FUN_0333a630(lVar3 + 0x1c0,lVar4);
                                                    lVar4 = FUN_032d5d3c(*unaff_x23,2);
                                                    if (lVar4 == 0) goto LAB_062fcb24;
                                                    if (*(int *)(lVar4 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar4 + 0x20) =
                                                           *(undefined8 *)
                                                            System_Data_EvaluateException_TypeInfo;
                                                      thunk_FUN_0333a630((undefined8 *)
                                                                         (lVar4 + 0x20));
                                                      if (1 < *(uint *)(lVar4 + 0x18)) {
                                                        *(undefined8 *)(lVar4 + 0x28) =
                                                             *(undefined8 *)
                                                                                                                            
                                                  Unity_VisualScripting_Antlr3_Runtime_FailedPredicateException_TypeInfo
                                                  ;
                                                  thunk_FUN_0333a630();
                                                  if (0x35 < *puVar6) {
                                                    *(long *)(lVar3 + 0x1c8) = lVar4;
                                                    thunk_FUN_0333a630(lVar3 + 0x1c8,lVar4);
                                                    lVar4 = FUN_032d5d3c(*unaff_x23,2);
                                                    if (lVar4 == 0) goto LAB_062fcb24;
                                                    if (*(int *)(lVar4 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar4 + 0x20) =
                                                           *(undefined8 *)
                                                                                                                        
                                                  Newtonsoft_Json_Linq_JsonPath_FieldFilter_TypeInfo
                                                  ;
                                                  thunk_FUN_0333a630((undefined8 *)(lVar4 + 0x20));
                                                  if (1 < *(uint *)(lVar4 + 0x18)) {
                                                    *(undefined8 *)(lVar4 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_UIElements_DragAndDropArgs_TypeInfo;
                                                  thunk_FUN_0333a630();
                                                  if (0x36 < *puVar6) {
                                                    *(long *)(lVar3 + 0x1d0) = lVar4;
                                                    thunk_FUN_0333a630(lVar3 + 0x1d0,lVar4);
                                                    lVar4 = FUN_032d5d3c(*unaff_x23,2);
                                                    if (lVar4 == 0) goto LAB_062fcb24;
                                                    if (*(int *)(lVar4 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar4 + 0x20) =
                                                           *(undefined8 *)
                                                                                                                        
                                                  Newtonsoft_Json_Utilities_FSharpUtils_TypeInfo;
                                                  thunk_FUN_0333a630((undefined8 *)(lVar4 + 0x20));
                                                  if (1 < *(uint *)(lVar4 + 0x18)) {
                                                    *(undefined8 *)(lVar4 + 0x28) =
                                                         *(undefined8 *)
                                                          ReadyPlayerMe_Core_FailureType_TypeInfo;
                                                    thunk_FUN_0333a630();
                                                    if (0x37 < *puVar6) {
                                                      *(long *)(lVar3 + 0x1d8) = lVar4;
                                                      thunk_FUN_0333a630(lVar3 + 0x1d8,lVar4);
                                                      lVar4 = FUN_032d5d3c(*unaff_x23,2);
                                                      if (lVar4 == 0) goto LAB_062fcb24;
                                                      if (*(int *)(lVar4 + 0x18) != 0) {
                                                        *(undefined8 *)(lVar4 + 0x20) =
                                                             *(undefined8 *)
                                                                                                                            
                                                  UnityEngine_UIElements_EasingFunction_TypeInfo;
                                                  thunk_FUN_0333a630((undefined8 *)(lVar4 + 0x20));
                                                  if (1 < *(uint *)(lVar4 + 0x18)) {
                                                    *(undefined8 *)(lVar4 + 0x28) =
                                                         *(undefined8 *)
                                                          UnityEngine_EventType_TypeInfo;
                                                    thunk_FUN_0333a630();
                                                    if (0x38 < *puVar6) {
                                                      *(long *)(lVar3 + 0x1e0) = lVar4;
                                                      thunk_FUN_0333a630(lVar3 + 0x1e0,lVar4);
                                                      lVar4 = FUN_032d5d3c(*unaff_x23,2);
                                                      if (lVar4 == 0) goto LAB_062fcb24;
                                                      if (*(int *)(lVar4 + 0x18) != 0) {
                                                        *(undefined8 *)(lVar4 + 0x20) =
                                                             *(undefined8 *)
                                                              UnityEngine_XR_Eyes_TypeInfo;
                                                        thunk_FUN_0333a630((undefined8 *)
                                                                           (lVar4 + 0x20));
                                                        if (1 < *(uint *)(lVar4 + 0x18)) {
                                                          *(undefined8 *)(lVar4 + 0x28) =
                                                               *(undefined8 *)
                                                                                                                                
                                                  UnityEngine_Rendering_Universal_DownscaleParameter_TypeInfo
                                                  ;
                                                  thunk_FUN_0333a630();
                                                  if (0x39 < *puVar6) {
                                                    *(long *)(lVar3 + 0x1e8) = lVar4;
                                                    thunk_FUN_0333a630(lVar3 + 0x1e8,lVar4);
                                                    lVar4 = FUN_032d5d3c(*unaff_x23,2);
                                                    if (lVar4 == 0) goto LAB_062fcb24;
                                                    if (*(int *)(lVar4 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar4 + 0x20) =
                                                           *(undefined8 *)
                                                                                                                        
                                                  UnityEngine_InputSystem_Controls_DpadControl_TypeInfo
                                                  ;
                                                  thunk_FUN_0333a630((undefined8 *)(lVar4 + 0x20));
                                                  if (1 < *(uint *)(lVar4 + 0x18)) {
                                                    *(undefined8 *)(lVar4 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  OVR_OpenVR_ETrackingUniverseOrigin_TypeInfo;
                                                  thunk_FUN_0333a630();
                                                  if (0x3a < *puVar6) {
                                                    *(long *)(lVar3 + 0x1f0) = lVar4;
                                                    thunk_FUN_0333a630(lVar3 + 0x1f0,lVar4);
                                                    lVar4 = FUN_032d5d3c(*unaff_x23,2);
                                                    if (lVar4 == 0) goto LAB_062fcb24;
                                                    if (*(int *)(lVar4 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar4 + 0x20) =
                                                           *(undefined8 *)
                                                                                                                        
                                                  Unity_VisualScripting_Antlr3_Runtime_EarlyExitException_TypeInfo
                                                  ;
                                                  thunk_FUN_0333a630((undefined8 *)(lVar4 + 0x20));
                                                  if (1 < *(uint *)(lVar4 + 0x18)) {
                                                    *(undefined8 *)(lVar4 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  OVR_OpenVR_DistortionCoordinates_t_TypeInfo;
                                                  thunk_FUN_0333a630();
                                                  if (0x3b < *puVar6) {
                                                    *(long *)(lVar3 + 0x1f8) = lVar4;
                                                    thunk_FUN_0333a630(lVar3 + 0x1f8,lVar4);
                                                    lVar4 = FUN_032d5d3c(*unaff_x23,2);
                                                    if (lVar4 == 0) goto LAB_062fcb24;
                                                    if (*(int *)(lVar4 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar4 + 0x20) =
                                                           *(undefined8 *)
                                                                                                                        
                                                  UnityEngine_UIElements_EventCallbackRegistry_TypeInfo
                                                  ;
                                                  thunk_FUN_0333a630((undefined8 *)(lVar4 + 0x20));
                                                  if (1 < *(uint *)(lVar4 + 0x18)) {
                                                    *(undefined8 *)(lVar4 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Unity_VisualScripting_Dependencies_NCalc_EvaluateFunctionHandler_TypeInfo
                                                  ;
                                                  thunk_FUN_0333a630();
                                                  if (0x3c < *puVar6) {
                                                    *(long *)(lVar3 + 0x200) = lVar4;
                                                    thunk_FUN_0333a630(lVar3 + 0x200,lVar4);
                                                    lVar4 = FUN_032d5d3c(*unaff_x23,2);
                                                    if (lVar4 == 0) goto LAB_062fcb24;
                                                    if (*(int *)(lVar4 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar4 + 0x20) =
                                                           *(undefined8 *)
                                                            OVR_OpenVR_EVREventType_TypeInfo;
                                                      thunk_FUN_0333a630((undefined8 *)
                                                                         (lVar4 + 0x20));
                                                      if (1 < *(uint *)(lVar4 + 0x18)) {
                                                        *(undefined8 *)(lVar4 + 0x28) =
                                                             *(undefined8 *)
                                                                                                                            
                                                  UnityEngine_InputSystem_EnhancedTouch_EnhancedTouchSupport_TypeInfo
                                                  ;
                                                  thunk_FUN_0333a630();
                                                  if (0x3d < *puVar6) {
                                                    *(long *)(lVar3 + 0x208) = lVar4;
                                                    thunk_FUN_0333a630(lVar3 + 0x208,lVar4);
                                                    lVar4 = FUN_032d5d3c(*unaff_x23,2);
                                                    if (lVar4 == 0) goto LAB_062fcb24;
                                                    if (*(int *)(lVar4 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar4 + 0x20) =
                                                           *(undefined8 *)
                                                            Unity_AppUI_UI_Dropdown_TypeInfo;
                                                      thunk_FUN_0333a630((undefined8 *)
                                                                         (lVar4 + 0x20));
                                                      if (1 < *(uint *)(lVar4 + 0x18)) {
                                                        *(undefined8 *)(lVar4 + 0x28) =
                                                             *(undefined8 *)
                                                                                                                            
                                                  System_Xml_Schema_DoubleLinkAxis_TypeInfo;
                                                  thunk_FUN_0333a630();
                                                  if (0x3e < *puVar6) {
                                                    *(long *)(lVar3 + 0x210) = lVar4;
                                                    thunk_FUN_0333a630(lVar3 + 0x210,lVar4);
                                                    lVar4 = FUN_032d5d3c(*unaff_x23,2);
                                                    if (lVar4 == 0) goto LAB_062fcb24;
                                                    if (*(int *)(lVar4 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar4 + 0x20) =
                                                           *(undefined8 *)
                                                                                                                        
                                                  System_Text_EncoderReplacementFallbackBuffer_TypeInfo
                                                  ;
                                                  thunk_FUN_0333a630((undefined8 *)(lVar4 + 0x20));
                                                  if (1 < *(uint *)(lVar4 + 0x18)) {
                                                    *(undefined8 *)(lVar4 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Newtonsoft_Json_Converters_DiscriminatedUnionConverter_TypeInfo
                                                  ;
                                                  thunk_FUN_0333a630();
                                                  if (0x3f < *puVar6) {
                                                    *(long *)(lVar3 + 0x218) = lVar4;
                                                    thunk_FUN_0333a630(lVar3 + 0x218,lVar4);
                                                    lVar4 = FUN_032d5d3c(*unaff_x23,2);
                                                    if (lVar4 == 0) goto LAB_062fcb24;
                                                    if (*(int *)(lVar4 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar4 + 0x20) =
                                                           *(undefined8 *)
                                                                                                                        
                                                  UnityEngine_Rendering_Universal_Internal_DrawObjectsPass_TypeInfo
                                                  ;
                                                  thunk_FUN_0333a630((undefined8 *)(lVar4 + 0x20));
                                                  if (1 < *(uint *)(lVar4 + 0x18)) {
                                                    *(undefined8 *)(lVar4 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  System_Runtime_InteropServices_FieldOffsetAttribute_TypeInfo
                                                  ;
                                                  thunk_FUN_0333a630();
                                                  if (0x40 < *puVar6) {
                                                    *(long *)(lVar3 + 0x220) = lVar4;
                                                    thunk_FUN_0333a630(lVar3 + 0x220,lVar4);
                                                    lVar4 = FUN_032d5d3c(*unaff_x23,2);
                                                    if (lVar4 == 0) goto LAB_062fcb24;
                                                    if (*(int *)(lVar4 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar4 + 0x20) =
                                                           *(undefined8 *)
                                                                                                                        
                                                  System_Resources_FileBasedResourceGroveler_TypeInfo
                                                  ;
                                                  thunk_FUN_0333a630((undefined8 *)(lVar4 + 0x20));
                                                  if (1 < *(uint *)(lVar4 + 0x18)) {
                                                    *(undefined8 *)(lVar4 + 0x28) =
                                                         *(undefined8 *)
                                                          Oculus_Platform_Models_Error_TypeInfo;
                                                    thunk_FUN_0333a630();
                                                    if (0x41 < *puVar6) {
                                                      *(long *)(lVar3 + 0x228) = lVar4;
                                                      thunk_FUN_0333a630(lVar3 + 0x228,lVar4);
                                                      lVar4 = FUN_032d5d3c(*unaff_x23,2);
                                                      if (lVar4 == 0) goto LAB_062fcb24;
                                                      if (*(int *)(lVar4 + 0x18) != 0) {
                                                        *(undefined8 *)(lVar4 + 0x20) =
                                                             *(undefined8 *)
                                                                                                                            
                                                  System_Linq_Expressions_Interpreter_ExceptionHandler_TypeInfo
                                                  ;
                                                  thunk_FUN_0333a630((undefined8 *)(lVar4 + 0x20));
                                                  if (1 < *(uint *)(lVar4 + 0x18)) {
                                                    *(undefined8 *)(lVar4 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  System_Text_EncoderReplacementFallback_TypeInfo;
                                                  thunk_FUN_0333a630();
                                                  if (0x42 < *puVar6) {
                                                    *(long *)(lVar3 + 0x230) = lVar4;
                                                    thunk_FUN_0333a630(lVar3 + 0x230,lVar4);
                                                    lVar4 = FUN_032d5d3c(*unaff_x23,2);
                                                    if (lVar4 == 0) goto LAB_062fcb24;
                                                    if (*(int *)(lVar4 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar4 + 0x20) =
                                                           *(undefined8 *)
                                                                                                                        
                                                  System_Runtime_ExceptionServices_ExceptionDispatchInfo_TypeInfo
                                                  ;
                                                  thunk_FUN_0333a630((undefined8 *)(lVar4 + 0x20));
                                                  if (1 < *(uint *)(lVar4 + 0x18)) {
                                                    *(undefined8 *)(lVar4 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  System_ComponentModel_EventDescriptorCollection_TypeInfo
                                                  ;
                                                  thunk_FUN_0333a630();
                                                  if (0x43 < *puVar6) {
                                                    *(long *)(lVar3 + 0x238) = lVar4;
                                                    thunk_FUN_0333a630(lVar3 + 0x238,lVar4);
                                                    lVar4 = FUN_032d5d3c(*unaff_x23,2);
                                                    if (lVar4 == 0) goto LAB_062fcb24;
                                                    if (*(int *)(lVar4 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar4 + 0x20) =
                                                           *(undefined8 *)
                                                                                                                        
                                                  Meta_XR_EnvironmentDepth_EnvironmentDepthManager_TypeInfo
                                                  ;
                                                  thunk_FUN_0333a630((undefined8 *)(lVar4 + 0x20));
                                                  if (1 < *(uint *)(lVar4 + 0x18)) {
                                                    *(undefined8 *)(lVar4 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_UIElements_DynamicAtlasPage_TypeInfo;
                                                  thunk_FUN_0333a630();
                                                  if (0x44 < *puVar6) {
                                                    *(long *)(lVar3 + 0x240) = lVar4;
                                                    thunk_FUN_0333a630(lVar3 + 0x240,lVar4);
                                                    lVar4 = FUN_032d5d3c(*unaff_x23,2);
                                                    if (lVar4 == 0) goto LAB_062fcb24;
                                                    if (*(int *)(lVar4 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar4 + 0x20) =
                                                           *(undefined8 *)
                                                            Unity_AppUI_UI_Drawer_TypeInfo;
                                                      thunk_FUN_0333a630((undefined8 *)
                                                                         (lVar4 + 0x20));
                                                      if (1 < *(uint *)(lVar4 + 0x18)) {
                                                        *(undefined8 *)(lVar4 + 0x28) =
                                                             *(undefined8 *)
                                                              OVR_OpenVR_EVRSettingsError_TypeInfo;
                                                        thunk_FUN_0333a630();
                                                        if (0x45 < *puVar6) {
                                                          *(long *)(lVar3 + 0x248) = lVar4;
                                                          thunk_FUN_0333a630(lVar3 + 0x248,lVar4);
                                                          lVar4 = FUN_032d5d3c(*unaff_x23,2);
                                                          if (lVar4 == 0) goto LAB_062fcb24;
                                                          if (*(int *)(lVar4 + 0x18) != 0) {
                                                            *(undefined8 *)(lVar4 + 0x20) =
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  Newtonsoft_Json_Serialization_ExtensionDataGetter_TypeInfo
                                                  ;
                                                  thunk_FUN_0333a630((undefined8 *)(lVar4 + 0x20));
                                                  if (1 < *(uint *)(lVar4 + 0x18)) {
                                                    *(undefined8 *)(lVar4 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Meta_XR_EnvironmentDepth_EnvironmentDepthUtils_TypeInfo
                                                  ;
                                                  thunk_FUN_0333a630();
                                                  if (0x46 < *puVar6) {
                                                    *(long *)(lVar3 + 0x250) = lVar4;
                                                    thunk_FUN_0333a630(lVar3 + 0x250,lVar4);
                                                    lVar4 = FUN_032d5d3c(*unaff_x23,2);
                                                    if (lVar4 == 0) goto LAB_062fcb24;
                                                    if (*(int *)(lVar4 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar4 + 0x20) =
                                                           *(undefined8 *)
                                                            System_Environment_TypeInfo;
                                                      thunk_FUN_0333a630((undefined8 *)
                                                                         (lVar4 + 0x20));
                                                      if (1 < *(uint *)(lVar4 + 0x18)) {
                                                        *(undefined8 *)(lVar4 + 0x28) =
                                                             *(undefined8 *)
                                                              OVR_OpenVR_EVROverlayError_TypeInfo;
                                                        thunk_FUN_0333a630();
                                                        if (0x47 < *puVar6) {
                                                          *(long *)(lVar3 + 600) = lVar4;
                                                          thunk_FUN_0333a630(lVar3 + 600,lVar4);
                                                          lVar4 = FUN_032d5d3c(*unaff_x23,2);
                                                          if (lVar4 == 0) goto LAB_062fcb24;
                                                          if (*(int *)(lVar4 + 0x18) != 0) {
                                                            *(undefined8 *)(lVar4 + 0x20) =
                                                                 *(undefined8 *)
                                                                  DistortTunnelPass_Distort_TypeInfo
                                                            ;
                                                            thunk_FUN_0333a630((undefined8 *)
                                                                               (lVar4 + 0x20));
                                                            if (1 < *(uint *)(lVar4 + 0x18)) {
                                                              *(undefined8 *)(lVar4 + 0x28) =
                                                                   *(undefined8 *)
                                                                                                                                        
                                                  UnityEngine_EventSystems_EventSystem_TypeInfo;
                                                  thunk_FUN_0333a630();
                                                  if (0x48 < *puVar6) {
                                                    *(long *)(lVar3 + 0x260) = lVar4;
                                                    thunk_FUN_0333a630(lVar3 + 0x260,lVar4);
                                                    lVar4 = FUN_032d5d3c(*unaff_x23,2);
                                                    if (lVar4 == 0) goto LAB_062fcb24;
                                                    if (*(int *)(lVar4 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar4 + 0x20) =
                                                           *(undefined8 *)
                                                                                                                        
                                                  UnityEngine_InputSystem_DualShock_DualShockGamepad_TypeInfo
                                                  ;
                                                  thunk_FUN_0333a630((undefined8 *)(lVar4 + 0x20));
                                                  if (1 < *(uint *)(lVar4 + 0x18)) {
                                                    *(undefined8 *)(lVar4 + 0x28) =
                                                         *(undefined8 *)System_EventArgs_TypeInfo;
                                                    thunk_FUN_0333a630();
                                                    if (0x49 < *puVar6) {
                                                      *(long *)(lVar3 + 0x268) = lVar4;
                                                      thunk_FUN_0333a630(lVar3 + 0x268,lVar4);
                                                      lVar4 = FUN_032d5d3c(*unaff_x23,2);
                                                      if (lVar4 == 0) goto LAB_062fcb24;
                                                      if (*(int *)(lVar4 + 0x18) != 0) {
                                                        *(undefined8 *)(lVar4 + 0x20) =
                                                             *(undefined8 *)
                                                                                                                            
                                                  OVR_OpenVR_EVRApplicationProperty_TypeInfo;
                                                  thunk_FUN_0333a630((undefined8 *)(lVar4 + 0x20));
                                                  if (1 < *(uint *)(lVar4 + 0x18)) {
                                                    *(undefined8 *)(lVar4 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  System_Runtime_Remoting_Messaging_EnvoyTerminatorSink_TypeInfo
                                                  ;
                                                  thunk_FUN_0333a630();
                                                  if (0x4a < *puVar6) {
                                                    *(long *)(lVar3 + 0x270) = lVar4;
                                                    thunk_FUN_0333a630(lVar3 + 0x270,lVar4);
                                                    lVar4 = FUN_032d5d3c(*unaff_x23,2);
                                                    if (lVar4 == 0) goto LAB_062fcb24;
                                                    if (*(int *)(lVar4 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar4 + 0x20) =
                                                           *(undefined8 *)
                                                                                                                        
                                                  System_Xml_Schema_DurationFacetsChecker_TypeInfo;
                                                  thunk_FUN_0333a630((undefined8 *)(lVar4 + 0x20));
                                                  if (1 < *(uint *)(lVar4 + 0x18)) {
                                                    *(undefined8 *)(lVar4 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  System_Linq_Expressions_Expression_TypeInfo;
                                                  thunk_FUN_0333a630();
                                                  if (0x4b < *puVar6) {
                                                    *(long *)(lVar3 + 0x278) = lVar4;
                                                    thunk_FUN_0333a630(lVar3 + 0x278,lVar4);
                                                    lVar4 = FUN_032d5d3c(*unaff_x23,2);
                                                    if (lVar4 == 0) goto LAB_062fcb24;
                                                    if (*(int *)(lVar4 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar4 + 0x20) =
                                                           *(undefined8 *)
                                                                                                                        
                                                  ReadyPlayerMe_Core_ExtensionMethods_TypeInfo;
                                                  thunk_FUN_0333a630((undefined8 *)(lVar4 + 0x20));
                                                  if (1 < *(uint *)(lVar4 + 0x18)) {
                                                    *(undefined8 *)(lVar4 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Newtonsoft_Json_Linq_JsonPath_FieldMultipleFilter_TypeInfo
                                                  ;
                                                  thunk_FUN_0333a630();
                                                  if (0x4c < *puVar6) {
                                                    *(long *)(lVar3 + 0x280) = lVar4;
                                                    thunk_FUN_0333a630(lVar3 + 0x280,lVar4);
                                                    lVar4 = FUN_032d5d3c(*unaff_x23,2);
                                                    if (lVar4 == 0) goto LAB_062fcb24;
                                                    if (*(int *)(lVar4 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar4 + 0x20) =
                                                           *(undefined8 *)
                                                                                                                        
                                                  System_Linq_Expressions_Interpreter_EnterFaultInstruction_TypeInfo
                                                  ;
                                                  thunk_FUN_0333a630((undefined8 *)(lVar4 + 0x20));
                                                  if (1 < *(uint *)(lVar4 + 0x18)) {
                                                    *(undefined8 *)(lVar4 + 0x28) =
                                                         *(undefined8 *)
                                                          System_Text_EncoderFallback_TypeInfo;
                                                    thunk_FUN_0333a630();
                                                    if (0x4d < *puVar6) {
                                                      *(long *)(lVar3 + 0x288) = lVar4;
                                                      thunk_FUN_0333a630(lVar3 + 0x288,lVar4);
                                                      lVar4 = FUN_032d5d3c(*unaff_x23,2);
                                                      if (lVar4 == 0) goto LAB_062fcb24;
                                                      if (*(int *)(lVar4 + 0x18) != 0) {
                                                        *(undefined8 *)(lVar4 + 0x20) =
                                                             *(undefined8 *)
                                                              System_EventHandler_TypeInfo;
                                                        thunk_FUN_0333a630((undefined8 *)
                                                                           (lVar4 + 0x20));
                                                        if (1 < *(uint *)(lVar4 + 0x18)) {
                                                          *(undefined8 *)(lVar4 + 0x28) =
                                                               *(undefined8 *)
                                                                                                                                
                                                  Firebase_Crashlytics_ExceptionHandler_TypeInfo;
                                                  thunk_FUN_0333a630();
                                                  if (0x4e < *puVar6) {
                                                    *(long *)(lVar3 + 0x290) = lVar4;
                                                    thunk_FUN_0333a630(lVar3 + 0x290,lVar4);
                                                    lVar4 = FUN_032d5d3c(*unaff_x23,2);
                                                    if (lVar4 == 0) goto LAB_062fcb24;
                                                    if (*(int *)(lVar4 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar4 + 0x20) =
                                                           *(undefined8 *)
                                                                                                                        
                                                  System_Linq_Expressions_ExpressionStringBuilder_TypeInfo
                                                  ;
                                                  thunk_FUN_0333a630((undefined8 *)(lVar4 + 0x20));
                                                  if (1 < *(uint *)(lVar4 + 0x18)) {
                                                    *(undefined8 *)(lVar4 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_XR_Interaction_Toolkit_Utilities_DisposableManagerSingleton_TypeInfo
                                                  ;
                                                  thunk_FUN_0333a630();
                                                  if (0x4f < *puVar6) {
                                                    *(long *)(lVar3 + 0x298) = lVar4;
                                                    thunk_FUN_0333a630(lVar3 + 0x298,lVar4);
                                                    lVar4 = FUN_032d5d3c(*unaff_x23,2);
                                                    if (lVar4 == 0) goto LAB_062fcb24;
                                                    if (*(int *)(lVar4 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar4 + 0x20) =
                                                           *(undefined8 *)
                                                            System_Text_EncodingHelper_TypeInfo;
                                                      thunk_FUN_0333a630((undefined8 *)
                                                                         (lVar4 + 0x20));
                                                      if (1 < *(uint *)(lVar4 + 0x18)) {
                                                        *(undefined8 *)(lVar4 + 0x28) =
                                                             *(undefined8 *)
                                                                                                                            
                                                  UnityEngine_XR_Interaction_Toolkit_AR_DragGesture_TypeInfo
                                                  ;
                                                  thunk_FUN_0333a630();
                                                  if (0x50 < *puVar6) {
                                                    *(long *)(lVar3 + 0x2a0) = lVar4;
                                                    thunk_FUN_0333a630(lVar3 + 0x2a0,lVar4);
                                                    lVar4 = FUN_032d5d3c(*unaff_x23,2);
                                                    if (lVar4 == 0) goto LAB_062fcb24;
                                                    if (*(int *)(lVar4 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar4 + 0x20) =
                                                           *(undefined8 *)
                                                            OVR_OpenVR_EVRRenderModelError_TypeInfo;
                                                      thunk_FUN_0333a630((undefined8 *)
                                                                         (lVar4 + 0x20));
                                                      if (1 < *(uint *)(lVar4 + 0x18)) {
                                                        *(undefined8 *)(lVar4 + 0x28) =
                                                             *(undefined8 *)
                                                              Unity_AppUI_UI_DrawerHeader_TypeInfo;
                                                        thunk_FUN_0333a630();
                                                        if (0x51 < *puVar6) {
                                                          *(long *)(lVar3 + 0x2a8) = lVar4;
                                                          thunk_FUN_0333a630(lVar3 + 0x2a8,lVar4);
                                                          lVar4 = FUN_032d5d3c(*unaff_x23,2);
                                                          if (lVar4 == 0) goto LAB_062fcb24;
                                                          if (*(int *)(lVar4 + 0x18) != 0) {
                                                            *(undefined8 *)(lVar4 + 0x20) =
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  UnityEngine_EventModifiers_TypeInfo;
                                                  thunk_FUN_0333a630((undefined8 *)(lVar4 + 0x20));
                                                  if (1 < *(uint *)(lVar4 + 0x18)) {
                                                    *(undefined8 *)(lVar4 + 0x28) =
                                                         *(undefined8 *)
                                                          System_IO_FileAccess_TypeInfo;
                                                    thunk_FUN_0333a630();
                                                    if (0x52 < *puVar6) {
                                                      *(long *)(lVar3 + 0x2b0) = lVar4;
                                                      thunk_FUN_0333a630(lVar3 + 0x2b0,lVar4);
                                                      lVar4 = FUN_032d5d3c(*unaff_x23,2);
                                                      if (lVar4 == 0) goto LAB_062fcb24;
                                                      if (*(int *)(lVar4 + 0x18) != 0) {
                                                        *(undefined8 *)(lVar4 + 0x20) =
                                                             *(undefined8 *)
                                                              System_Dynamic_ExpandoObject_TypeInfo;
                                                        thunk_FUN_0333a630((undefined8 *)
                                                                           (lVar4 + 0x20));
                                                        puVar2 = 
                                                  System_IO_DirectoryNotFoundException_TypeInfo;
                                                  if (1 < *(uint *)(lVar4 + 0x18)) {
                                                    *(undefined8 *)(lVar4 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  System_IO_DirectoryNotFoundException_TypeInfo;
                                                  thunk_FUN_0333a630();
                                                  if (0x53 < *puVar6) {
                                                    *(long *)(lVar3 + 0x2b8) = lVar4;
                                                    thunk_FUN_0333a630(lVar3 + 0x2b8,lVar4);
                                                    lVar4 = FUN_032d5d3c(*unaff_x23,2);
                                                    if (lVar4 == 0) goto LAB_062fcb24;
                                                    if (*(int *)(lVar4 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar4 + 0x20) =
                                                           *(undefined8 *)
                                                                                                                        
                                                  System_Linq_Expressions_Interpreter_FieldByRefUpdater_TypeInfo
                                                  ;
                                                  thunk_FUN_0333a630((undefined8 *)(lVar4 + 0x20));
                                                  if (1 < *(uint *)(lVar4 + 0x18)) {
                                                    *(undefined8 *)(lVar4 + 0x28) =
                                                         *(undefined8 *)puVar2;
                                                    thunk_FUN_0333a630();
                                                    if (0x54 < *puVar6) {
                                                      *(long *)(lVar3 + 0x2c0) = lVar4;
                                                      thunk_FUN_0333a630(lVar3 + 0x2c0,lVar4);
                                                      lVar4 = FUN_032d5d3c(*unaff_x23,2);
                                                      if (lVar4 == 0) goto LAB_062fcb24;
                                                      if (*(int *)(lVar4 + 0x18) != 0) {
                                                        *(undefined8 *)(lVar4 + 0x20) =
                                                             *(undefined8 *)
                                                                                                                            
                                                  UnityEngine_UIElements_EventCallbackListPool_TypeInfo
                                                  ;
                                                  thunk_FUN_0333a630((undefined8 *)(lVar4 + 0x20));
                                                  if (1 < *(uint *)(lVar4 + 0x18)) {
                                                    *(undefined8 *)(lVar4 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_UIElements_DynamicAtlas_TypeInfo;
                                                  thunk_FUN_0333a630();
                                                  if (0x55 < *puVar6) {
                                                    *(long *)(lVar3 + 0x2c8) = lVar4;
                                                    thunk_FUN_0333a630(lVar3 + 0x2c8,lVar4);
                                                    lVar4 = FUN_032d5d3c(*unaff_x23,2);
                                                    if (lVar4 == 0) goto LAB_062fcb24;
                                                    if (*(int *)(lVar4 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar4 + 0x20) =
                                                           *(undefined8 *)System_Enum_TypeInfo;
                                                      thunk_FUN_0333a630((undefined8 *)
                                                                         (lVar4 + 0x20));
                                                      if (1 < *(uint *)(lVar4 + 0x18)) {
                                                        *(undefined8 *)(lVar4 + 0x28) =
                                                             *(undefined8 *)
                                                                                                                            
                                                  Meta_WitAi_Data_Entities_DynamicEntityKeywordRegistry_TypeInfo
                                                  ;
                                                  thunk_FUN_0333a630();
                                                  if (0x56 < *puVar6) {
                                                    *(long *)(lVar3 + 0x2d0) = lVar4;
                                                    thunk_FUN_0333a630(lVar3 + 0x2d0,lVar4);
                                                    lVar4 = FUN_032d5d3c(*unaff_x23,2);
                                                    if (lVar4 == 0) goto LAB_062fcb24;
                                                    if (*(int *)(lVar4 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar4 + 0x20) =
                                                           *(undefined8 *)TMPro_Extents_TypeInfo;
                                                      thunk_FUN_0333a630((undefined8 *)
                                                                         (lVar4 + 0x20));
                                                      if (1 < *(uint *)(lVar4 + 0x18)) {
                                                        *(undefined8 *)(lVar4 + 0x28) =
                                                             *(undefined8 *)
                                                                                                                            
                                                  UnityEngine_XR_Interaction_Toolkit_Transformers_DropEventArgs_TypeInfo
                                                  ;
                                                  thunk_FUN_0333a630();
                                                  if (0x57 < *puVar6) {
                                                    *(long *)(lVar3 + 0x2d8) = lVar4;
                                                    thunk_FUN_0333a630(lVar3 + 0x2d8,lVar4);
                                                    lVar4 = FUN_032d5d3c(*unaff_x23,2);
                                                    if (lVar4 == 0) goto LAB_062fcb24;
                                                    if (*(int *)(lVar4 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar4 + 0x20) =
                                                           *(undefined8 *)
                                                                                                                        
                                                  NovaSamples_UIControls_DropdownVisuals_TypeInfo;
                                                  thunk_FUN_0333a630((undefined8 *)(lVar4 + 0x20));
                                                  if (1 < *(uint *)(lVar4 + 0x18)) {
                                                    *(undefined8 *)(lVar4 + 0x28) =
                                                         *(undefined8 *)
                                                          Unity_AppUI_UI_DropZone_TypeInfo;
                                                    thunk_FUN_0333a630();
                                                    if (0x58 < *puVar6) {
                                                      *(long *)(lVar3 + 0x2e0) = lVar4;
                                                      thunk_FUN_0333a630(lVar3 + 0x2e0,lVar4);
                                                      lVar4 = FUN_032d5d3c(*unaff_x23,2);
                                                      if (lVar4 == 0) goto LAB_062fcb24;
                                                      if (*(int *)(lVar4 + 0x18) != 0) {
                                                        *(undefined8 *)(lVar4 + 0x20) =
                                                             *(undefined8 *)
                                                              System_Net_DigestSession_TypeInfo;
                                                        thunk_FUN_0333a630((undefined8 *)
                                                                           (lVar4 + 0x20));
                                                        if (1 < *(uint *)(lVar4 + 0x18)) {
                                                          *(undefined8 *)(lVar4 + 0x28) =
                                                               *(undefined8 *)
                                                                                                                                
                                                  Unity_VisualScripting_EnumerableCloner_TypeInfo;
                                                  thunk_FUN_0333a630();
                                                  if (0x59 < *puVar6) {
                                                    *(long *)(lVar3 + 0x2e8) = lVar4;
                                                    thunk_FUN_0333a630(lVar3 + 0x2e8,lVar4);
                                                    lVar4 = FUN_032d5d3c(*unaff_x23,2);
                                                    if (lVar4 == 0) goto LAB_062fcb24;
                                                    if (*(int *)(lVar4 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar4 + 0x20) =
                                                           *(undefined8 *)
                                                                                                                        
                                                  Unity_VisualScripting_EnsureThat_TypeInfo;
                                                  thunk_FUN_0333a630((undefined8 *)(lVar4 + 0x20));
                                                  if (1 < *(uint *)(lVar4 + 0x18)) {
                                                    *(undefined8 *)(lVar4 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_InputSystem_UI_ExtendedAxisEventData_TypeInfo
                                                  ;
                                                  thunk_FUN_0333a630();
                                                  if (0x5a < *puVar6) {
                                                    *(long *)(lVar3 + 0x2f0) = lVar4;
                                                    thunk_FUN_0333a630(lVar3 + 0x2f0,lVar4);
                                                    lVar4 = FUN_032d5d3c(*unaff_x23,2);
                                                    if (lVar4 == 0) goto LAB_062fcb24;
                                                    if (*(int *)(lVar4 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar4 + 0x20) =
                                                           *(undefined8 *)
                                                                                                                        
                                                  System_Linq_Expressions_Interpreter_ExclusiveOrInstruction_TypeInfo
                                                  ;
                                                  thunk_FUN_0333a630((undefined8 *)(lVar4 + 0x20));
                                                  if (1 < *(uint *)(lVar4 + 0x18)) {
                                                    *(undefined8 *)(lVar4 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Newtonsoft_Json_Serialization_ErrorEventArgs_TypeInfo
                                                  ;
                                                  thunk_FUN_0333a630();
                                                  if (0x5b < *puVar6) {
                                                    *(long *)(lVar3 + 0x2f8) = lVar4;
                                                    thunk_FUN_0333a630(lVar3 + 0x2f8,lVar4);
                                                    lVar4 = FUN_032d5d3c(*unaff_x23,2);
                                                    if (lVar4 == 0) goto LAB_062fcb24;
                                                    if (*(int *)(lVar4 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar4 + 0x20) =
                                                           *(undefined8 *)
                                                                                                                        
                                                  System_Xml_Serialization_EnumMap_TypeInfo;
                                                  thunk_FUN_0333a630((undefined8 *)(lVar4 + 0x20));
                                                  if (1 < *(uint *)(lVar4 + 0x18)) {
                                                    *(undefined8 *)(lVar4 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Oculus_Interaction_PoseDetection_FeatureStateActiveMode_TypeInfo
                                                  ;
                                                  thunk_FUN_0333a630();
                                                  if (0x5c < *puVar6) {
                                                    *(long *)(lVar3 + 0x300) = lVar4;
                                                    thunk_FUN_0333a630(lVar3 + 0x300,lVar4);
                                                    lVar4 = FUN_032d5d3c(*unaff_x23,2);
                                                    if (lVar4 == 0) goto LAB_062fcb24;
                                                    if (*(int *)(lVar4 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar4 + 0x20) =
                                                           *(undefined8 *)
                                                            Unity_AppUI_UI_Direction_TypeInfo;
                                                      thunk_FUN_0333a630((undefined8 *)
                                                                         (lVar4 + 0x20));
                                                      if (1 < *(uint *)(lVar4 + 0x18)) {
                                                        *(undefined8 *)(lVar4 + 0x28) =
                                                             *(undefined8 *)
                                                              OVR_OpenVR_EVRScreenshotType_TypeInfo;
                                                        thunk_FUN_0333a630();
                                                        if (0x5d < *puVar6) {
                                                          *(long *)(lVar3 + 0x308) = lVar4;
                                                          thunk_FUN_0333a630(lVar3 + 0x308,lVar4);
                                                          lVar4 = FUN_032d5d3c(*unaff_x23,2);
                                                          if (lVar4 == 0) goto LAB_062fcb24;
                                                          if (*(int *)(lVar4 + 0x18) != 0) {
                                                            *(undefined8 *)(lVar4 + 0x20) =
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  UnityEngine_Rendering_Universal_DrawScreenSpaceUIPass_TypeInfo
                                                  ;
                                                  thunk_FUN_0333a630((undefined8 *)(lVar4 + 0x20));
                                                  if (1 < *(uint *)(lVar4 + 0x18)) {
                                                    *(undefined8 *)(lVar4 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_UIElements_DropdownMenuAction_TypeInfo
                                                  ;
                                                  thunk_FUN_0333a630();
                                                  if (0x5e < *puVar6) {
                                                    *(long *)(lVar3 + 0x310) = lVar4;
                                                    thunk_FUN_0333a630(lVar3 + 0x310,lVar4);
                                                    lVar4 = FUN_032d5d3c(*unaff_x23,2);
                                                    if (lVar4 == 0) goto LAB_062fcb24;
                                                    if (*(int *)(lVar4 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar4 + 0x20) =
                                                           *(undefined8 *)
                                                                                                                        
                                                  System_Linq_Expressions_Interpreter_EnterFinallyInstruction_TypeInfo
                                                  ;
                                                  thunk_FUN_0333a630((undefined8 *)(lVar4 + 0x20));
                                                  if (1 < *(uint *)(lVar4 + 0x18)) {
                                                    *(undefined8 *)(lVar4 + 0x28) =
                                                         *(undefined8 *)
                                                          Unity_AppUI_UI_FieldLabel_TypeInfo;
                                                    thunk_FUN_0333a630();
                                                    if (0x5f < *puVar6) {
                                                      *(long *)(lVar3 + 0x318) = lVar4;
                                                      thunk_FUN_0333a630(lVar3 + 0x318,lVar4);
                                                      lVar4 = FUN_032d5d3c(*unaff_x23,2);
                                                      if (lVar4 == 0) goto LAB_062fcb24;
                                                      if (*(int *)(lVar4 + 0x18) != 0) {
                                                        *(undefined8 *)(lVar4 + 0x20) =
                                                             *(undefined8 *)
                                                                                                                            
                                                  System_Globalization_EncodingTable_TypeInfo;
                                                  thunk_FUN_0333a630((undefined8 *)(lVar4 + 0x20));
                                                  if (1 < *(uint *)(lVar4 + 0x18)) {
                                                    *(undefined8 *)(lVar4 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  System_ComponentModel_EditorBrowsableAttribute_TypeInfo
                                                  ;
                                                  thunk_FUN_0333a630();
                                                  if (0x60 < *puVar6) {
                                                    *(long *)(lVar3 + 800) = lVar4;
                                                    thunk_FUN_0333a630(lVar3 + 800,lVar4);
                                                    lVar4 = FUN_032d5d3c(*unaff_x23,2);
                                                    if (lVar4 == 0) goto LAB_062fcb24;
                                                    if (*(int *)(lVar4 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar4 + 0x20) =
                                                           *(undefined8 *)
                                                                                                                        
                                                  UnityEngine_UIElements_DragAndDropUtility_TypeInfo
                                                  ;
                                                  thunk_FUN_0333a630((undefined8 *)(lVar4 + 0x20));
                                                  if (1 < *(uint *)(lVar4 + 0x18)) {
                                                    *(undefined8 *)(lVar4 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_Networking_DownloadHandlerBuffer_TypeInfo
                                                  ;
                                                  thunk_FUN_0333a630();
                                                  if (0x61 < *puVar6) {
                                                    *(long *)(lVar3 + 0x328) = lVar4;
                                                    thunk_FUN_0333a630(lVar3 + 0x328,lVar4);
                                                    lVar4 = FUN_032d5d3c(*unaff_x23,2);
                                                    if (lVar4 == 0) goto LAB_062fcb24;
                                                    if (*(int *)(lVar4 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar4 + 0x20) =
                                                           *(undefined8 *)
                                                                                                                        
                                                  System_Runtime_Remoting_DisposerReplySink_TypeInfo
                                                  ;
                                                  thunk_FUN_0333a630((undefined8 *)(lVar4 + 0x20));
                                                  if (1 < *(uint *)(lVar4 + 0x18)) {
                                                    *(undefined8 *)(lVar4 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  ReadyPlayerMe_Core_DirectoryUtility_TypeInfo;
                                                  thunk_FUN_0333a630();
                                                  if (0x62 < *puVar6) {
                                                    *(long *)(lVar3 + 0x330) = lVar4;
                                                    thunk_FUN_0333a630(lVar3 + 0x330,lVar4);
                                                    lVar4 = FUN_032d5d3c(*unaff_x23,2);
                                                    if (lVar4 == 0) goto LAB_062fcb24;
                                                    if (*(int *)(lVar4 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar4 + 0x20) =
                                                           *(undefined8 *)
                                                            System_Dynamic_ExpandoClass_TypeInfo;
                                                      thunk_FUN_0333a630((undefined8 *)
                                                                         (lVar4 + 0x20));
                                                      if (1 < *(uint *)(lVar4 + 0x18)) {
                                                        *(undefined8 *)(lVar4 + 0x28) =
                                                             *(undefined8 *)
                                                              OVR_OpenVR_ETextureType_TypeInfo;
                                                        thunk_FUN_0333a630();
                                                        if (99 < *puVar6) {
                                                          *(long *)(lVar3 + 0x338) = lVar4;
                                                          thunk_FUN_0333a630(lVar3 + 0x338,lVar4);
                                                          lVar4 = FUN_032d5d3c(*unaff_x23,2);
                                                          if (lVar4 == 0) goto LAB_062fcb24;
                                                          if (*(int *)(lVar4 + 0x18) != 0) {
                                                            *(undefined8 *)(lVar4 + 0x20) =
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  UnityEngine_UIElements_EnumField_TypeInfo;
                                                  thunk_FUN_0333a630((undefined8 *)(lVar4 + 0x20));
                                                  if (1 < *(uint *)(lVar4 + 0x18)) {
                                                    *(undefined8 *)(lVar4 + 0x28) =
                                                         *(undefined8 *)
                                                          Unity_AppUI_UI_ExVisualElement_TypeInfo;
                                                    thunk_FUN_0333a630();
                                                    if (100 < *puVar6) {
                                                      *(long *)(lVar3 + 0x340) = lVar4;
                                                      thunk_FUN_0333a630(lVar3 + 0x340,lVar4);
                                                      lVar4 = FUN_032d5d3c(*unaff_x23,2);
                                                      if (lVar4 == 0) goto LAB_062fcb24;
                                                      if (*(int *)(lVar4 + 0x18) != 0) {
                                                        *(undefined8 *)(lVar4 + 0x20) =
                                                             *(undefined8 *)
                                                              System_IO_DirectoryInfo_TypeInfo;
                                                        thunk_FUN_0333a630((undefined8 *)
                                                                           (lVar4 + 0x20));
                                                        if (1 < *(uint *)(lVar4 + 0x18)) {
                                                          *(undefined8 *)(lVar4 + 0x28) =
                                                               *(undefined8 *)
                                                                Unity_AppUI_UI_Dragger_TypeInfo;
                                                          thunk_FUN_0333a630();
                                                          if (0x65 < *puVar6) {
                                                            *(long *)(lVar3 + 0x348) = lVar4;
                                                            thunk_FUN_0333a630(lVar3 + 0x348,lVar4);
                                                            lVar4 = FUN_032d5d3c(*unaff_x23,2);
                                                            if (lVar4 == 0) goto LAB_062fcb24;
                                                            if (*(int *)(lVar4 + 0x18) != 0) {
                                                              *(undefined8 *)(lVar4 + 0x20) =
                                                                   *(undefined8 *)
                                                                                                                                        
                                                  UnityEngine_UIElements_EventDispatcherGate_TypeInfo
                                                  ;
                                                  thunk_FUN_0333a630((undefined8 *)(lVar4 + 0x20));
                                                  if (1 < *(uint *)(lVar4 + 0x18)) {
                                                    *(undefined8 *)(lVar4 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  System_ComponentModel_EventDescriptor_TypeInfo;
                                                  thunk_FUN_0333a630();
                                                  if (0x66 < *puVar6) {
                                                    *(long *)(lVar3 + 0x350) = lVar4;
                                                    thunk_FUN_0333a630(lVar3 + 0x350,lVar4);
                                                    lVar4 = FUN_032d5d3c(*unaff_x23,2);
                                                    if (lVar4 == 0) goto LAB_062fcb24;
                                                    if (*(int *)(lVar4 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar4 + 0x20) =
                                                           *(undefined8 *)
                                                                                                                        
                                                  UnityEngine_UIElements_EventInterestReflectionUtils_TypeInfo
                                                  ;
                                                  thunk_FUN_0333a630((undefined8 *)(lVar4 + 0x20));
                                                  if (1 < *(uint *)(lVar4 + 0x18)) {
                                                    *(undefined8 *)(lVar4 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Unity_VisualScripting_Dependencies_NCalc_EvaluationVisitor_TypeInfo
                                                  ;
                                                  thunk_FUN_0333a630();
                                                  if (0x67 < *puVar6) {
                                                    *(long *)(lVar3 + 0x358) = lVar4;
                                                    thunk_FUN_0333a630(lVar3 + 0x358,lVar4);
                                                    lVar4 = FUN_032d5d3c(*unaff_x23,2);
                                                    if (lVar4 == 0) goto LAB_062fcb24;
                                                    if (*(int *)(lVar4 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar4 + 0x20) =
                                                           *(undefined8 *)
                                                            OVR_OpenVR_EIOBufferMode_TypeInfo;
                                                      thunk_FUN_0333a630((undefined8 *)
                                                                         (lVar4 + 0x20));
                                                      if (1 < *(uint *)(lVar4 + 0x18)) {
                                                        *(undefined8 *)(lVar4 + 0x28) =
                                                             *(undefined8 *)
                                                              Unity_AppUI_Core_DirContext_TypeInfo;
                                                        thunk_FUN_0333a630();
                                                        if (0x68 < *puVar6) {
                                                          *(long *)(lVar3 + 0x360) = lVar4;
                                                          thunk_FUN_0333a630(lVar3 + 0x360,lVar4);
                                                          lVar4 = FUN_032d5d3c(*unaff_x23,2);
                                                          if (lVar4 == 0) goto LAB_062fcb24;
                                                          if (*(int *)(lVar4 + 0x18) != 0) {
                                                            *(undefined8 *)(lVar4 + 0x20) =
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  System_Globalization_EraInfo_TypeInfo;
                                                  thunk_FUN_0333a630((undefined8 *)(lVar4 + 0x20));
                                                  if (1 < *(uint *)(lVar4 + 0x18)) {
                                                    *(undefined8 *)(lVar4 + 0x28) =
                                                         *(undefined8 *)
                                                          DistortTunnelPass_Tunnel_TypeInfo;
                                                    thunk_FUN_0333a630();
                                                    if (0x69 < *puVar6) {
                                                      *(long *)(lVar3 + 0x368) = lVar4;
                                                      thunk_FUN_0333a630(lVar3 + 0x368,lVar4);
                                                      lVar4 = FUN_032d5d3c(*unaff_x23,2);
                                                      if (lVar4 == 0) goto LAB_062fcb24;
                                                      if (*(int *)(lVar4 + 0x18) != 0) {
                                                        *(undefined8 *)(lVar4 + 0x20) =
                                                             *(undefined8 *)
                                                              System_Xml_DtdParser_TypeInfo;
                                                        thunk_FUN_0333a630((undefined8 *)
                                                                           (lVar4 + 0x20));
                                                        if (1 < *(uint *)(lVar4 + 0x18)) {
                                                          *(undefined8 *)(lVar4 + 0x28) =
                                                               *(undefined8 *)
                                                                                                                                
                                                  Newtonsoft_Json_Converters_ExpandoObjectConverter_TypeInfo
                                                  ;
                                                  thunk_FUN_0333a630();
                                                  if (0x6a < *puVar6) {
                                                    *(long *)(lVar3 + 0x370) = lVar4;
                                                    thunk_FUN_0333a630(lVar3 + 0x370,lVar4);
                                                    lVar4 = FUN_032d5d3c(*unaff_x23,2);
                                                    if (lVar4 == 0) goto LAB_062fcb24;
                                                    if (*(int *)(lVar4 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar4 + 0x20) =
                                                           *(undefined8 *)
                                                                                                                        
                                                  OVR_OpenVR_ETrackedPropertyError_TypeInfo;
                                                  thunk_FUN_0333a630((undefined8 *)(lVar4 + 0x20));
                                                  if (1 < *(uint *)(lVar4 + 0x18)) {
                                                    *(undefined8 *)(lVar4 + 0x28) =
                                                         *(undefined8 *)
                                                          System_Reflection_FieldInfo_TypeInfo;
                                                    thunk_FUN_0333a630();
                                                    if (0x6b < *puVar6) {
                                                      *(long *)(lVar3 + 0x378) = lVar4;
                                                      thunk_FUN_0333a630(lVar3 + 0x378,lVar4);
                                                      lVar4 = FUN_032d5d3c(*unaff_x23,2);
                                                      if (lVar4 == 0) goto LAB_062fcb24;
                                                      if (*(int *)(lVar4 + 0x18) != 0) {
                                                        *(undefined8 *)(lVar4 + 0x20) =
                                                             *(undefined8 *)
                                                                                                                            
                                                  System_Linq_Expressions_FieldExpression_TypeInfo;
                                                  thunk_FUN_0333a630((undefined8 *)(lVar4 + 0x20));
                                                  if (1 < *(uint *)(lVar4 + 0x18)) {
                                                    *(undefined8 *)(lVar4 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Newtonsoft_Json_Utilities_EnumInfo_TypeInfo;
                                                  thunk_FUN_0333a630();
                                                  if (0x6c < *puVar6) {
                                                    *(long *)(lVar3 + 0x380) = lVar4;
                                                    thunk_FUN_0333a630(lVar3 + 0x380,lVar4);
                                                    lVar4 = FUN_032d5d3c(*unaff_x23,2);
                                                    if (lVar4 == 0) goto LAB_062fcb24;
                                                    if (*(int *)(lVar4 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar4 + 0x20) =
                                                           *(undefined8 *)
                                                            Oculus_Avatar2_FBVersionNumber_TypeInfo;
                                                      thunk_FUN_0333a630((undefined8 *)
                                                                         (lVar4 + 0x20));
                                                      if (1 < *(uint *)(lVar4 + 0x18)) {
                                                        *(undefined8 *)(lVar4 + 0x28) =
                                                             *(undefined8 *)
                                                              System_Text_EncodingProvider_TypeInfo;
                                                        thunk_FUN_0333a630();
                                                        if (0x6d < *puVar6) {
                                                          *(long *)(lVar3 + 0x388) = lVar4;
                                                          thunk_FUN_0333a630(lVar3 + 0x388,lVar4);
                                                          lVar4 = FUN_032d5d3c(*unaff_x23,2);
                                                          if (lVar4 == 0) goto LAB_062fcb24;
                                                          if (*(int *)(lVar4 + 0x18) != 0) {
                                                            *(undefined8 *)(lVar4 + 0x20) =
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  Firebase_ExceptionAggregator_TypeInfo;
                                                  thunk_FUN_0333a630((undefined8 *)(lVar4 + 0x20));
                                                  if (1 < *(uint *)(lVar4 + 0x18)) {
                                                    *(undefined8 *)(lVar4 + 0x28) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Unity_VisualScripting_EventHookComparer_TypeInfo;
                                                  thunk_FUN_0333a630();
                                                  if (0x6e < *puVar6) {
                                                    *(long *)(lVar3 + 0x390) = lVar4;
                                                    thunk_FUN_0333a630(lVar3 + 0x390,lVar4);
                                                    lVar4 = FUN_032d5d3c(*unaff_x23,2);
                                                    if (lVar4 == 0) goto LAB_062fcb24;
                                                    if (*(int *)(lVar4 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar4 + 0x20) =
                                                           *(undefined8 *)
                                                            OVR_OpenVR_EVRNotificationStyle_TypeInfo
                                                      ;
                                                      thunk_FUN_0333a630((undefined8 *)
                                                                         (lVar4 + 0x20));
                                                      if (1 < *(uint *)(lVar4 + 0x18)) {
                                                        *(undefined8 *)(lVar4 + 0x28) =
                                                             *(undefined8 *)
                                                                                                                            
                                                  System_Linq_Expressions_Interpreter_EnterTryCatchFinallyInstruction_TypeInfo
                                                  ;
                                                  thunk_FUN_0333a630();
                                                  puVar2 = System_Net_DigestClient_TypeInfo;
                                                  if (0x6f < *puVar6) {
                                                    *(long *)(lVar3 + 0x398) = lVar4;
                                                    thunk_FUN_0333a630(lVar3 + 0x398,lVar4);
                                                    plVar5 = (long *)(*(long *)(*(long *)puVar1 +
                                                                               0xb8) + 0x60);
                                                    *plVar5 = lVar3;
                                                    thunk_FUN_0333a630(plVar5,lVar3);
                                                    lVar3 = FUN_032d5d3c(*(undefined8 *)puVar2,0x5e)
                                                    ;
                                                    FUN_062fcc3c(&stack0x000005e0,0x41,0x5a,1,0x20,0
                                                                );
                                                    if (lVar3 == 0) goto LAB_062fcb24;
                                                    if (*(int *)(lVar3 + 0x18) != 0) {
                                                      *(undefined8 *)(lVar3 + 0x20) = 0;
                                                      *(undefined4 *)(lVar3 + 0x28) = 0;
                                                      FUN_062fcc3c(&stack0x000005d0,0xc0,0xde,1,0x20
                                                                   ,0);
                                                      if (1 < *(uint *)(lVar3 + 0x18)) {
                                                        *(undefined8 *)(lVar3 + 0x2c) = 0;
                                                        *(undefined4 *)(lVar3 + 0x34) = 0;
                                                        FUN_062fcc3c(&stack0x000005c0,0x100,0x12e,2,
                                                                     0,0);
                                                        if (2 < *(uint *)(lVar3 + 0x18)) {
                                                          *(undefined8 *)(lVar3 + 0x38) = 0;
                                                          *(undefined4 *)(lVar3 + 0x40) = 0;
                                                          FUN_062fcc3c(&stack0x000005b0,0x130,0x130,
                                                                       0,0x69,0);
                                                          if (3 < *(uint *)(lVar3 + 0x18)) {
                                                            *(undefined8 *)(lVar3 + 0x44) = 0;
                                                            *(undefined4 *)(lVar3 + 0x4c) = 0;
                                                            FUN_062fcc3c(&stack0x000005a0,0x132,
                                                                         0x136,2,0,0);
                                                            if (4 < *(uint *)(lVar3 + 0x18)) {
                                                              *(undefined8 *)(lVar3 + 0x50) = 0;
                                                              *(undefined4 *)(lVar3 + 0x58) = 0;
                                                              FUN_062fcc3c(&stack0x00000590,0x139,
                                                                           0x147,3,0,0);
                                                              if (5 < *(uint *)(lVar3 + 0x18)) {
                                                                *(undefined8 *)(lVar3 + 0x5c) = 0;
                                                                *(undefined4 *)(lVar3 + 100) = 0;
                                                                FUN_062fcc3c(&stack0x00000580,0x14a,
                                                                             0x176,2,0,0);
                                                                if (6 < *(uint *)(lVar3 + 0x18)) {
                                                                  *(undefined8 *)(lVar3 + 0x68) = 0;
                                                                  *(undefined4 *)(lVar3 + 0x70) = 0;
                                                                  FUN_062fcc3c(&stack0x00000570,
                                                                               0x178,0x178,0,0xff,0)
                                                                  ;
                                                                  if (7 < *(uint *)(lVar3 + 0x18)) {
                                                                    *(undefined8 *)(lVar3 + 0x74) =
                                                                         0;
                                                                    *(undefined4 *)(lVar3 + 0x7c) =
                                                                         0;
                                                                    FUN_062fcc3c(&stack0x00000560,
                                                                                 0x179,0x17d,3,0,0);
                                                                    if (8 < *(uint *)(lVar3 + 0x18))
                                                                    {
                                                                      *(undefined8 *)(lVar3 + 0x80)
                                                                           = 0;
                                                                      *(undefined4 *)(lVar3 + 0x88)
                                                                           = 0;
                                                                      FUN_062fcc3c(&stack0x00000550,
                                                                                   0x181,0x181,0,
                                                                                   0x253,0);
                                                                      if (9 < *(uint *)(lVar3 + 0x18
                                                                                       )) {
                                                                        *(undefined8 *)
                                                                         (lVar3 + 0x8c) = 0;
                                                                        *(undefined4 *)
                                                                         (lVar3 + 0x94) = 0;
                                                                        FUN_062fcc3c(&
                                                  stack0x00000540,0x182,0x184,2,0,0);
                                                  if (10 < *(uint *)(lVar3 + 0x18)) {
                                                    *(undefined8 *)(lVar3 + 0x98) = 0;
                                                    *(undefined4 *)(lVar3 + 0xa0) = 0;
                                                    FUN_062fcc3c(&stack0x00000530,0x186,0x186,0,
                                                                 0x254,0);
                                                    if (0xb < *(uint *)(lVar3 + 0x18)) {
                                                      *(undefined8 *)(lVar3 + 0xa4) = 0;
                                                      *(undefined4 *)(lVar3 + 0xac) = 0;
                                                      FUN_062fcc3c(&stack0x00000520,0x187,0x187,0,
                                                                   0x188,0);
                                                      if (0xc < *(uint *)(lVar3 + 0x18)) {
                                                        *(undefined8 *)(lVar3 + 0xb0) = 0;
                                                        *(undefined4 *)(lVar3 + 0xb8) = 0;
                                                        FUN_062fcc3c(&stack0x00000510,0x189,0x18a,1,
                                                                     0xcd,0);
                                                        if (0xd < *(uint *)(lVar3 + 0x18)) {
                                                          *(undefined8 *)(lVar3 + 0xbc) = 0;
                                                          *(undefined4 *)(lVar3 + 0xc4) = 0;
                                                          FUN_062fcc3c(&stack0x00000500,0x18b,0x18b,
                                                                       0,0x18c,0);
                                                          if (0xe < *(uint *)(lVar3 + 0x18)) {
                                                            *(undefined8 *)(lVar3 + 200) = 0;
                                                            *(undefined4 *)(lVar3 + 0xd0) = 0;
                                                            FUN_062fcc3c(&stack0x000004f0,0x18e,
                                                                         0x18e,0,0x1dd,0);
                                                            if (0xf < *(uint *)(lVar3 + 0x18)) {
                                                              *(undefined8 *)(lVar3 + 0xd4) = 0;
                                                              *(undefined4 *)(lVar3 + 0xdc) = 0;
                                                              FUN_062fcc3c(&stack0x000004e0,399,399,
                                                                           0,0x259,0);
                                                              if (0x10 < *(uint *)(lVar3 + 0x18)) {
                                                                *(undefined8 *)(lVar3 + 0xe0) = 0;
                                                                *(undefined4 *)(lVar3 + 0xe8) = 0;
                                                                FUN_062fcc3c(&stack0x000004d0,400,
                                                                             400,0,0x25b,0);
                                                                if (0x11 < *(uint *)(lVar3 + 0x18))
                                                                {
                                                                  *(undefined8 *)(lVar3 + 0xec) = 0;
                                                                  *(undefined4 *)(lVar3 + 0xf4) = 0;
                                                                  FUN_062fcc3c(&stack0x000004c0,
                                                                               0x191,0x191,0,0x192,0
                                                                              );
                                                                  if (0x12 < *(uint *)(lVar3 + 0x18)
                                                                     ) {
                                                                    *(undefined8 *)(lVar3 + 0xf8) =
                                                                         0;
                                                                    *(undefined4 *)(lVar3 + 0x100) =
                                                                         0;
                                                                    FUN_062fcc3c(&stack0x000004b0,
                                                                                 0x193,0x193,0,0x260
                                                                                 ,0);
                                                                    if (0x13 < *(uint *)(lVar3 + 
                                                  0x18)) {
                                                    *(undefined8 *)(lVar3 + 0x104) = 0;
                                                    *(undefined4 *)(lVar3 + 0x10c) = 0;
                                                    FUN_062fcc3c(&stack0x000004a0,0x194,0x194,0,
                                                                 0x263,0);
                                                    if (0x14 < *(uint *)(lVar3 + 0x18)) {
                                                      *(undefined8 *)(lVar3 + 0x110) = 0;
                                                      *(undefined4 *)(lVar3 + 0x118) = 0;
                                                      FUN_062fcc3c(&stack0x00000490,0x196,0x196,0,
                                                                   0x269,0);
                                                      if (0x15 < *(uint *)(lVar3 + 0x18)) {
                                                        *(undefined8 *)(lVar3 + 0x11c) = 0;
                                                        *(undefined4 *)(lVar3 + 0x124) = 0;
                                                        FUN_062fcc3c(&stack0x00000480,0x197,0x197,0,
                                                                     0x268,0);
                                                        if (0x16 < *(uint *)(lVar3 + 0x18)) {
                                                          *(undefined8 *)(lVar3 + 0x128) = 0;
                                                          *(undefined4 *)(lVar3 + 0x130) = 0;
                                                          FUN_062fcc3c(&stack0x00000470,0x198,0x198,
                                                                       0,0x199,0);
                                                          if (0x17 < *(uint *)(lVar3 + 0x18)) {
                                                            *(undefined8 *)(lVar3 + 0x134) = 0;
                                                            *(undefined4 *)(lVar3 + 0x13c) = 0;
                                                            FUN_062fcc3c(&stack0x00000460,0x19c,
                                                                         0x19c,0,0x26f,0);
                                                            if (0x18 < *(uint *)(lVar3 + 0x18)) {
                                                              *(undefined8 *)(lVar3 + 0x140) = 0;
                                                              *(undefined4 *)(lVar3 + 0x148) = 0;
                                                              FUN_062fcc3c(&stack0x00000450,0x19d,
                                                                           0x19d,0,0x272,0);
                                                              if (0x19 < *(uint *)(lVar3 + 0x18)) {
                                                                *(undefined8 *)(lVar3 + 0x14c) = 0;
                                                                *(undefined4 *)(lVar3 + 0x154) = 0;
                                                                FUN_062fcc3c(&stack0x00000440,0x19f,
                                                                             0x19f,0,0x275,0);
                                                                if (0x1a < *(uint *)(lVar3 + 0x18))
                                                                {
                                                                  *(undefined8 *)(lVar3 + 0x158) = 0
                                                                  ;
                                                                  *(undefined4 *)(lVar3 + 0x160) = 0
                                                                  ;
                                                                  FUN_062fcc3c(&stack0x00000430,
                                                                               0x1a0,0x1a4,2,0,0);
                                                                  if (0x1b < *(uint *)(lVar3 + 0x18)
                                                                     ) {
                                                                    *(undefined8 *)(lVar3 + 0x164) =
                                                                         0;
                                                                    *(undefined4 *)(lVar3 + 0x16c) =
                                                                         0;
                                                                    FUN_062fcc3c(&stack0x00000420,
                                                                                 0x1a7,0x1a7,0,0x1a8
                                                                                 ,0);
                                                                    if (0x1c < *(uint *)(lVar3 + 
                                                  0x18)) {
                                                    *(undefined8 *)(lVar3 + 0x170) = 0;
                                                    *(undefined4 *)(lVar3 + 0x178) = 0;
                                                    FUN_062fcc3c(&stack0x00000410,0x1a9,0x1a9,0,
                                                                 0x283,0);
                                                    if (0x1d < *(uint *)(lVar3 + 0x18)) {
                                                      *(undefined8 *)(lVar3 + 0x17c) = 0;
                                                      *(undefined4 *)(lVar3 + 0x184) = 0;
                                                      FUN_062fcc3c(&stack0x00000400,0x1ac,0x1ac,0,
                                                                   0x1ad,0);
                                                      if (0x1e < *(uint *)(lVar3 + 0x18)) {
                                                        *(undefined8 *)(lVar3 + 0x188) = 0;
                                                        *(undefined4 *)(lVar3 + 400) = 0;
                                                        FUN_062fcc3c(&stack0x000003f0,0x1ae,0x1ae,0,
                                                                     0x288,0);
                                                        if (0x1f < *(uint *)(lVar3 + 0x18)) {
                                                          *(undefined8 *)(lVar3 + 0x194) = 0;
                                                          *(undefined4 *)(lVar3 + 0x19c) = 0;
                                                          FUN_062fcc3c(&stack0x000003e0,0x1af,0x1af,
                                                                       0,0x1b0,0);
                                                          if (0x20 < *(uint *)(lVar3 + 0x18)) {
                                                            *(undefined8 *)(lVar3 + 0x1a0) = 0;
                                                            *(undefined4 *)(lVar3 + 0x1a8) = 0;
                                                            FUN_062fcc3c(&stack0x000003d0,0x1b1,
                                                                         0x1b2,1,0xd9,0);
                                                            if (0x21 < *(uint *)(lVar3 + 0x18)) {
                                                              *(undefined8 *)(lVar3 + 0x1ac) = 0;
                                                              *(undefined4 *)(lVar3 + 0x1b4) = 0;
                                                              FUN_062fcc3c(&stack0x000003c0,0x1b3,
                                                                           0x1b5,3,0,0);
                                                              if (0x22 < *(uint *)(lVar3 + 0x18)) {
                                                                *(undefined8 *)(lVar3 + 0x1b8) = 0;
                                                                *(undefined4 *)(lVar3 + 0x1c0) = 0;
                                                                FUN_062fcc3c(&stack0x000003b0,0x1b7,
                                                                             0x1b7,0,0x292,0);
                                                                if (0x23 < *(uint *)(lVar3 + 0x18))
                                                                {
                                                                  *(undefined8 *)(lVar3 + 0x1c4) = 0
                                                                  ;
                                                                  *(undefined4 *)(lVar3 + 0x1cc) = 0
                                                                  ;
                                                                  FUN_062fcc3c(&stack0x000003a0,
                                                                               0x1b8,0x1b8,0,0x1b9,0
                                                                              );
                                                                  if (0x24 < *(uint *)(lVar3 + 0x18)
                                                                     ) {
                                                                    *(undefined8 *)(lVar3 + 0x1d0) =
                                                                         0;
                                                                    *(undefined4 *)(lVar3 + 0x1d8) =
                                                                         0;
                                                                    FUN_062fcc3c(&stack0x00000390,
                                                                                 0x1bc,0x1bc,0,0x1bd
                                                                                 ,0);
                                                                    if (0x25 < *(uint *)(lVar3 + 
                                                  0x18)) {
                                                    *(undefined8 *)(lVar3 + 0x1dc) = 0;
                                                    *(undefined4 *)(lVar3 + 0x1e4) = 0;
                                                    FUN_062fcc3c(&stack0x00000380,0x1c4,0x1c5,0,
                                                                 0x1c6,0);
                                                    if (0x26 < *(uint *)(lVar3 + 0x18)) {
                                                      *(undefined8 *)(lVar3 + 0x1e8) = 0;
                                                      *(undefined4 *)(lVar3 + 0x1f0) = 0;
                                                      FUN_062fcc3c(&stack0x00000370,0x1c7,0x1c8,0,
                                                                   0x1c9,0);
                                                      if (0x27 < *(uint *)(lVar3 + 0x18)) {
                                                        *(undefined8 *)(lVar3 + 500) = 0;
                                                        *(undefined4 *)(lVar3 + 0x1fc) = 0;
                                                        FUN_062fcc3c(&stack0x00000360,0x1ca,0x1cb,0,
                                                                     0x1cc,0);
                                                        if (0x28 < *(uint *)(lVar3 + 0x18)) {
                                                          *(undefined8 *)(lVar3 + 0x200) = 0;
                                                          *(undefined4 *)(lVar3 + 0x208) = 0;
                                                          FUN_062fcc3c(&stack0x00000350,0x1cd,0x1db,
                                                                       3,0,0);
                                                          if (0x29 < *(uint *)(lVar3 + 0x18)) {
                                                            *(undefined8 *)(lVar3 + 0x20c) = 0;
                                                            *(undefined4 *)(lVar3 + 0x214) = 0;
                                                            FUN_062fcc3c(&stack0x00000340,0x1de,
                                                                         0x1ee,2,0,0);
                                                            if (0x2a < *(uint *)(lVar3 + 0x18)) {
                                                              *(undefined8 *)(lVar3 + 0x218) = 0;
                                                              *(undefined4 *)(lVar3 + 0x220) = 0;
                                                              FUN_062fcc3c(&stack0x00000330,0x1f1,
                                                                           0x1f2,0,499,0);
                                                              if (0x2b < *(uint *)(lVar3 + 0x18)) {
                                                                *(undefined8 *)(lVar3 + 0x224) = 0;
                                                                *(undefined4 *)(lVar3 + 0x22c) = 0;
                                                                FUN_062fcc3c(&stack0x00000320,500,
                                                                             500,0,0x1f5,0);
                                                                if (0x2c < *(uint *)(lVar3 + 0x18))
                                                                {
                                                                  *(undefined8 *)(lVar3 + 0x230) = 0
                                                                  ;
                                                                  *(undefined4 *)(lVar3 + 0x238) = 0
                                                                  ;
                                                                  FUN_062fcc3c(&stack0x00000310,
                                                                               0x1fa,0x216,2,0,0);
                                                                  if (0x2d < *(uint *)(lVar3 + 0x18)
                                                                     ) {
                                                                    *(undefined8 *)(lVar3 + 0x23c) =
                                                                         0;
                                                                    *(undefined4 *)(lVar3 + 0x244) =
                                                                         0;
                                                                    FUN_062fcc3c(&stack0x00000300,
                                                                                 0x386,0x386,0,0x3ac
                                                                                 ,0);
                                                                    if (0x2e < *(uint *)(lVar3 + 
                                                  0x18)) {
                                                    *(undefined8 *)(lVar3 + 0x248) = 0;
                                                    *(undefined4 *)(lVar3 + 0x250) = 0;
                                                    FUN_062fcc3c(&stack0x000002f0,0x388,0x38a,1,0x25
                                                                 ,0);
                                                    if (0x2f < *(uint *)(lVar3 + 0x18)) {
                                                      *(undefined8 *)(lVar3 + 0x254) = 0;
                                                      *(undefined4 *)(lVar3 + 0x25c) = 0;
                                                      FUN_062fcc3c(&stack0x000002e0,0x38c,0x38c,0,
                                                                   0x3cc,0);
                                                      if (0x30 < *(uint *)(lVar3 + 0x18)) {
                                                        *(undefined8 *)(lVar3 + 0x260) = 0;
                                                        *(undefined4 *)(lVar3 + 0x268) = 0;
                                                        FUN_062fcc3c(&stack0x000002d0,0x38e,0x38f,1,
                                                                     0x3f,0);
                                                        if (0x31 < *(uint *)(lVar3 + 0x18)) {
                                                          *(undefined8 *)(lVar3 + 0x26c) = 0;
                                                          *(undefined4 *)(lVar3 + 0x274) = 0;
                                                          FUN_062fcc3c(&stack0x000002c0,0x391,0x3ab,
                                                                       1,0x20,0);
                                                          if (0x32 < *(uint *)(lVar3 + 0x18)) {
                                                            *(undefined8 *)(lVar3 + 0x278) = 0;
                                                            *(undefined4 *)(lVar3 + 0x280) = 0;
                                                            FUN_062fcc3c(&stack0x000002b0,0x3e2,
                                                                         0x3ee,2,0,0);
                                                            if (0x33 < *(uint *)(lVar3 + 0x18)) {
                                                              *(undefined8 *)(lVar3 + 0x284) = 0;
                                                              *(undefined4 *)(lVar3 + 0x28c) = 0;
                                                              FUN_062fcc3c(&stack0x000002a0,0x401,
                                                                           0x40f,1,0x50,0);
                                                              if (0x34 < *(uint *)(lVar3 + 0x18)) {
                                                                *(undefined8 *)(lVar3 + 0x290) = 0;
                                                                *(undefined4 *)(lVar3 + 0x298) = 0;
                                                                FUN_062fcc3c(&stack0x00000290,0x410,
                                                                             0x42f,1,0x20,0);
                                                                if (0x35 < *(uint *)(lVar3 + 0x18))
                                                                {
                                                                  *(undefined8 *)(lVar3 + 0x29c) = 0
                                                                  ;
                                                                  *(undefined4 *)(lVar3 + 0x2a4) = 0
                                                                  ;
                                                                  FUN_062fcc3c(&stack0x00000280,
                                                                               0x460,0x480,2,0,0);
                                                                  if (0x36 < *(uint *)(lVar3 + 0x18)
                                                                     ) {
                                                                    *(undefined8 *)(lVar3 + 0x2a8) =
                                                                         0;
                                                                    *(undefined4 *)(lVar3 + 0x2b0) =
                                                                         0;
                                                                    FUN_062fcc3c(&stack0x00000270,
                                                                                 0x490,0x4be,2,0,0);
                                                                    if (0x37 < *(uint *)(lVar3 + 
                                                  0x18)) {
                                                    *(undefined8 *)(lVar3 + 0x2b4) = 0;
                                                    *(undefined4 *)(lVar3 + 700) = 0;
                                                    FUN_062fcc3c(&stack0x00000260,0x4c1,0x4c3,3,0,0)
                                                    ;
                                                    if (0x38 < *(uint *)(lVar3 + 0x18)) {
                                                      *(undefined8 *)(lVar3 + 0x2c0) = 0;
                                                      *(undefined4 *)(lVar3 + 0x2c8) = 0;
                                                      FUN_062fcc3c(&stack0x00000250,0x4c7,0x4c7,0,
                                                                   0x4c8,0);
                                                      if (0x39 < *(uint *)(lVar3 + 0x18)) {
                                                        *(undefined8 *)(lVar3 + 0x2cc) = 0;
                                                        *(undefined4 *)(lVar3 + 0x2d4) = 0;
                                                        FUN_062fcc3c(&stack0x00000240,0x4cb,0x4cb,0,
                                                                     0x4cc,0);
                                                        if (0x3a < *(uint *)(lVar3 + 0x18)) {
                                                          *(undefined8 *)(lVar3 + 0x2d8) = 0;
                                                          *(undefined4 *)(lVar3 + 0x2e0) = 0;
                                                          FUN_062fcc3c(&stack0x00000230,0x4d0,0x4ea,
                                                                       2,0,0);
                                                          if (0x3b < *(uint *)(lVar3 + 0x18)) {
                                                            *(undefined8 *)(lVar3 + 0x2e4) = 0;
                                                            *(undefined4 *)(lVar3 + 0x2ec) = 0;
                                                            FUN_062fcc3c(&stack0x00000220,0x4ee,
                                                                         0x4f4,2,0,0);
                                                            if (0x3c < *(uint *)(lVar3 + 0x18)) {
                                                              *(undefined8 *)(lVar3 + 0x2f0) = 0;
                                                              *(undefined4 *)(lVar3 + 0x2f8) = 0;
                                                              FUN_062fcc3c(&stack0x00000210,0x4f8,
                                                                           0x4f8,0,0x4f9,0);
                                                              if (0x3d < *(uint *)(lVar3 + 0x18)) {
                                                                *(undefined8 *)(lVar3 + 0x2fc) = 0;
                                                                *(undefined4 *)(lVar3 + 0x304) = 0;
                                                                FUN_062fcc3c(&stack0x00000200,0x531,
                                                                             0x556,1,0x30,0);
                                                                if (0x3e < *(uint *)(lVar3 + 0x18))
                                                                {
                                                                  *(undefined8 *)(lVar3 + 0x308) = 0
                                                                  ;
                                                                  *(undefined4 *)(lVar3 + 0x310) = 0
                                                                  ;
                                                                  FUN_062fcc3c(&stack0x000001f0,
                                                                               0x10a0,0x10c5,1,0x30,
                                                                               0);
                                                                  if (0x3f < *(uint *)(lVar3 + 0x18)
                                                                     ) {
                                                                    *(undefined8 *)(lVar3 + 0x314) =
                                                                         0;
                                                                    *(undefined4 *)(lVar3 + 0x31c) =
                                                                         0;
                                                                    in_stack_000001e8 = 0;
                                                                    in_stack_000001e0 = 0;
                                                                    FUN_062fcc3c(&stack0x000001e0,
                                                                                 0x1e00,0x1ef8,2,0,0
                                                                                );
                                                                    if (0x40 < *(uint *)(lVar3 + 
                                                  0x18)) {
                                                    *(undefined8 *)(lVar3 + 800) = in_stack_000001e0
                                                    ;
                                                    *(undefined4 *)(lVar3 + 0x328) =
                                                         in_stack_000001e8;
                                                    in_stack_000001d8 = 0;
                                                    in_stack_000001d0 = 0;
                                                    FUN_062fcc3c(&stack0x000001d0,0x1f08,0x1f0f,1,
                                                                 0xfffffff8,0);
                                                    if (0x41 < *(uint *)(lVar3 + 0x18)) {
                                                      *(undefined8 *)(lVar3 + 0x32c) =
                                                           in_stack_000001d0;
                                                      *(undefined4 *)(lVar3 + 0x334) =
                                                           in_stack_000001d8;
                                                      in_stack_000001c8 = 0;
                                                      in_stack_000001c0 = 0;
                                                      FUN_062fcc3c(&stack0x000001c0,0x1f18,0x1f1f,1,
                                                                   0xfffffff8,0);
                                                      if (0x42 < *(uint *)(lVar3 + 0x18)) {
                                                        *(undefined8 *)(lVar3 + 0x338) =
                                                             in_stack_000001c0;
                                                        *(undefined4 *)(lVar3 + 0x340) =
                                                             in_stack_000001c8;
                                                        in_stack_000001b8 = 0;
                                                        in_stack_000001b0 = 0;
                                                        FUN_062fcc3c(&stack0x000001b0,0x1f28,0x1f2f,
                                                                     1,0xfffffff8,0);
                                                        if (0x43 < *(uint *)(lVar3 + 0x18)) {
                                                          *(undefined8 *)(lVar3 + 0x344) =
                                                               in_stack_000001b0;
                                                          *(undefined4 *)(lVar3 + 0x34c) =
                                                               in_stack_000001b8;
                                                          in_stack_000001a8 = 0;
                                                          in_stack_000001a0 = 0;
                                                          FUN_062fcc3c(&stack0x000001a0,0x1f38,7999,
                                                                       1,0xfffffff8,0);
                                                          if (0x44 < *(uint *)(lVar3 + 0x18)) {
                                                            *(undefined8 *)(lVar3 + 0x350) =
                                                                 in_stack_000001a0;
                                                            *(undefined4 *)(lVar3 + 0x358) =
                                                                 in_stack_000001a8;
                                                            in_stack_00000198 = 0;
                                                            in_stack_00000190 = 0;
                                                            FUN_062fcc3c(&stack0x00000190,0x1f48,
                                                                         0x1f4d,1,0xfffffff8,0);
                                                            if (0x45 < *(uint *)(lVar3 + 0x18)) {
                                                              *(undefined8 *)(lVar3 + 0x35c) =
                                                                   in_stack_00000190;
                                                              *(undefined4 *)(lVar3 + 0x364) =
                                                                   in_stack_00000198;
                                                              in_stack_00000188 = 0;
                                                              in_stack_00000180 = 0;
                                                              FUN_062fcc3c(&stack0x00000180,0x1f59,
                                                                           0x1f59,0,0x1f51,0);
                                                              if (0x46 < *(uint *)(lVar3 + 0x18)) {
                                                                *(undefined8 *)(lVar3 + 0x368) =
                                                                     in_stack_00000180;
                                                                *(undefined4 *)(lVar3 + 0x370) =
                                                                     in_stack_00000188;
                                                                in_stack_00000178 = 0;
                                                                in_stack_00000170 = 0;
                                                                FUN_062fcc3c(&stack0x00000170,0x1f5b
                                                                             ,0x1f5b,0,0x1f53,0);
                                                                if (0x47 < *(uint *)(lVar3 + 0x18))
                                                                {
                                                                  *(undefined8 *)(lVar3 + 0x374) =
                                                                       in_stack_00000170;
                                                                  *(undefined4 *)(lVar3 + 0x37c) =
                                                                       in_stack_00000178;
                                                                  in_stack_00000168 = 0;
                                                                  in_stack_00000160 = 0;
                                                                  FUN_062fcc3c(&stack0x00000160,
                                                                               0x1f5d,0x1f5d,0,
                                                                               0x1f55,0);
                                                                  if (0x48 < *(uint *)(lVar3 + 0x18)
                                                                     ) {
                                                                    *(undefined8 *)(lVar3 + 0x380) =
                                                                         in_stack_00000160;
                                                                    *(undefined4 *)(lVar3 + 0x388) =
                                                                         in_stack_00000168;
                                                                    in_stack_00000158 = 0;
                                                                    in_stack_00000150 = 0;
                                                                    FUN_062fcc3c(&stack0x00000150,
                                                                                 0x1f5f,0x1f5f,0,
                                                                                 0x1f57,0);
                                                                    if (0x49 < *(uint *)(lVar3 + 
                                                  0x18)) {
                                                    *(undefined8 *)(lVar3 + 0x38c) =
                                                         in_stack_00000150;
                                                    *(undefined4 *)(lVar3 + 0x394) =
                                                         in_stack_00000158;
                                                    in_stack_00000148 = 0;
                                                    in_stack_00000140 = 0;
                                                    FUN_062fcc3c(&stack0x00000140,0x1f68,0x1f6f,1,
                                                                 0xfffffff8,0);
                                                    if (0x4a < *(uint *)(lVar3 + 0x18)) {
                                                      *(undefined8 *)(lVar3 + 0x398) =
                                                           in_stack_00000140;
                                                      *(undefined4 *)(lVar3 + 0x3a0) =
                                                           in_stack_00000148;
                                                      in_stack_00000138 = 0;
                                                      in_stack_00000130 = 0;
                                                      FUN_062fcc3c(&stack0x00000130,0x1f88,0x1f8f,1,
                                                                   0xfffffff8,0);
                                                      if (0x4b < *(uint *)(lVar3 + 0x18)) {
                                                        *(undefined8 *)(lVar3 + 0x3a4) =
                                                             in_stack_00000130;
                                                        *(undefined4 *)(lVar3 + 0x3ac) =
                                                             in_stack_00000138;
                                                        in_stack_00000128 = 0;
                                                        in_stack_00000120 = 0;
                                                        FUN_062fcc3c(&stack0x00000120,0x1f98,0x1f9f,
                                                                     1,0xfffffff8,0);
                                                        if (0x4c < *(uint *)(lVar3 + 0x18)) {
                                                          *(undefined8 *)(lVar3 + 0x3b0) =
                                                               in_stack_00000120;
                                                          *(undefined4 *)(lVar3 + 0x3b8) =
                                                               in_stack_00000128;
                                                          in_stack_00000118 = 0;
                                                          in_stack_00000110 = 0;
                                                          FUN_062fcc3c(&stack0x00000110,0x1fa8,
                                                                       0x1faf,1,0xfffffff8,0);
                                                          if (0x4d < *(uint *)(lVar3 + 0x18)) {
                                                            *(undefined8 *)(lVar3 + 0x3bc) =
                                                                 in_stack_00000110;
                                                            *(undefined4 *)(lVar3 + 0x3c4) =
                                                                 in_stack_00000118;
                                                            in_stack_00000108 = 0;
                                                            in_stack_00000100 = 0;
                                                            FUN_062fcc3c(&stack0x00000100,0x1fb8,
                                                                         0x1fb9,1,0xfffffff8,0);
                                                            if (0x4e < *(uint *)(lVar3 + 0x18)) {
                                                              *(undefined8 *)(lVar3 + 0x3c8) =
                                                                   in_stack_00000100;
                                                              *(undefined4 *)(lVar3 + 0x3d0) =
                                                                   in_stack_00000108;
                                                              in_stack_000000f8 = 0;
                                                              in_stack_000000f0 = 0;
                                                              FUN_062fcc3c(&stack0x000000f0,0x1fba,
                                                                           0x1fbb,1,0xffffffb6,0);
                                                              if (0x4f < *(uint *)(lVar3 + 0x18)) {
                                                                *(undefined8 *)(lVar3 + 0x3d4) =
                                                                     in_stack_000000f0;
                                                                *(undefined4 *)(lVar3 + 0x3dc) =
                                                                     in_stack_000000f8;
                                                                in_stack_000000e8 = 0;
                                                                in_stack_000000e0 = 0;
                                                                FUN_062fcc3c(&stack0x000000e0,0x1fbc
                                                                             ,0x1fbc,0,0x1fb3,0);
                                                                if (0x50 < *(uint *)(lVar3 + 0x18))
                                                                {
                                                                  *(undefined8 *)(lVar3 + 0x3e0) =
                                                                       in_stack_000000e0;
                                                                  *(undefined4 *)(lVar3 + 1000) =
                                                                       in_stack_000000e8;
                                                                  in_stack_000000d8 = 0;
                                                                  in_stack_000000d0 = 0;
                                                                  FUN_062fcc3c(&stack0x000000d0,
                                                                               0x1fc8,0x1fcb,1,
                                                                               0xffffffaa,0);
                                                                  if (0x51 < *(uint *)(lVar3 + 0x18)
                                                                     ) {
                                                                    *(undefined8 *)(lVar3 + 0x3ec) =
                                                                         in_stack_000000d0;
                                                                    *(undefined4 *)(lVar3 + 0x3f4) =
                                                                         in_stack_000000d8;
                                                                    in_stack_000000c8 = 0;
                                                                    in_stack_000000c0 = 0;
                                                                    FUN_062fcc3c(&stack0x000000c0,
                                                                                 0x1fcc,0x1fcc,0,
                                                                                 0x1fc3,0);
                                                                    if (0x52 < *(uint *)(lVar3 + 
                                                  0x18)) {
                                                    *(undefined8 *)(lVar3 + 0x3f8) =
                                                         in_stack_000000c0;
                                                    *(undefined4 *)(lVar3 + 0x400) =
                                                         in_stack_000000c8;
                                                    in_stack_000000b8 = 0;
                                                    in_stack_000000b0 = 0;
                                                    FUN_062fcc3c(&stack0x000000b0,0x1fd8,0x1fd9,1,
                                                                 0xfffffff8,0);
                                                    if (0x53 < *(uint *)(lVar3 + 0x18)) {
                                                      *(undefined8 *)(lVar3 + 0x404) =
                                                           in_stack_000000b0;
                                                      *(undefined4 *)(lVar3 + 0x40c) =
                                                           in_stack_000000b8;
                                                      in_stack_000000a8 = 0;
                                                      in_stack_000000a0 = 0;
                                                      FUN_062fcc3c(&stack0x000000a0,0x1fda,0x1fdb,1,
                                                                   0xffffff9c,0);
                                                      if (0x54 < *(uint *)(lVar3 + 0x18)) {
                                                        *(undefined8 *)(lVar3 + 0x410) =
                                                             in_stack_000000a0;
                                                        *(undefined4 *)(lVar3 + 0x418) =
                                                             in_stack_000000a8;
                                                        in_stack_00000098 = 0;
                                                        in_stack_00000090 = 0;
                                                        FUN_062fcc3c(&stack0x00000090,0x1fe8,0x1fe9,
                                                                     1,0xfffffff8,0);
                                                        if (0x55 < *(uint *)(lVar3 + 0x18)) {
                                                          *(undefined8 *)(lVar3 + 0x41c) =
                                                               in_stack_00000090;
                                                          *(undefined4 *)(lVar3 + 0x424) =
                                                               in_stack_00000098;
                                                          in_stack_00000088 = 0;
                                                          in_stack_00000080 = 0;
                                                          FUN_062fcc3c(&stack0x00000080,0x1fea,
                                                                       0x1feb,1,0xffffff90,0);
                                                          if (0x56 < *(uint *)(lVar3 + 0x18)) {
                                                            *(undefined8 *)(lVar3 + 0x428) =
                                                                 in_stack_00000080;
                                                            *(undefined4 *)(lVar3 + 0x430) =
                                                                 in_stack_00000088;
                                                            in_stack_00000078 = 0;
                                                            in_stack_00000070 = 0;
                                                            FUN_062fcc3c(&stack0x00000070,0x1fec,
                                                                         0x1fec,0,0x1fe5,0);
                                                            if (0x57 < *(uint *)(lVar3 + 0x18)) {
                                                              *(undefined8 *)(lVar3 + 0x434) =
                                                                   in_stack_00000070;
                                                              *(undefined4 *)(lVar3 + 0x43c) =
                                                                   in_stack_00000078;
                                                              in_stack_00000068 = 0;
                                                              in_stack_00000060 = 0;
                                                              FUN_062fcc3c(&stack0x00000060,0x1ff8,
                                                                           0x1ff9,1,0xffffff80,0);
                                                              if (0x58 < *(uint *)(lVar3 + 0x18)) {
                                                                *(undefined8 *)(lVar3 + 0x440) =
                                                                     in_stack_00000060;
                                                                *(undefined4 *)(lVar3 + 0x448) =
                                                                     in_stack_00000068;
                                                                in_stack_00000058 = 0;
                                                                in_stack_00000050 = 0;
                                                                FUN_062fcc3c(&stack0x00000050,0x1ffa
                                                                             ,0x1ffb,1,0xffffff82,0)
                                                                ;
                                                                if (0x59 < *(uint *)(lVar3 + 0x18))
                                                                {
                                                                  *(undefined8 *)(lVar3 + 0x44c) =
                                                                       in_stack_00000050;
                                                                  *(undefined4 *)(lVar3 + 0x454) =
                                                                       in_stack_00000058;
                                                                  in_stack_00000048 = 0;
                                                                  in_stack_00000040 = 0;
                                                                  FUN_062fcc3c(&stack0x00000040,
                                                                               0x1ffc,0x1ffc,0,
                                                                               0x1ff3,0);
                                                                  if (0x5a < *(uint *)(lVar3 + 0x18)
                                                                     ) {
                                                                    *(undefined8 *)(lVar3 + 0x458) =
                                                                         in_stack_00000040;
                                                                    *(undefined4 *)(lVar3 + 0x460) =
                                                                         in_stack_00000048;
                                                                    in_stack_00000038 = 0;
                                                                    in_stack_00000030 = 0;
                                                                    FUN_062fcc3c(&stack0x00000030,
                                                                                 0x2160,0x216f,1,
                                                                                 0x10,0);
                                                                    if (0x5b < *(uint *)(lVar3 + 
                                                  0x18)) {
                                                    *(undefined8 *)(lVar3 + 0x464) =
                                                         in_stack_00000030;
                                                    *(undefined4 *)(lVar3 + 0x46c) =
                                                         in_stack_00000038;
                                                    in_stack_00000028 = 0;
                                                    in_stack_00000020 = 0;
                                                    FUN_062fcc3c(&stack0x00000020,0x24b6,0x24d0,1,
                                                                 0x1a,0);
                                                    if (0x5c < *(uint *)(lVar3 + 0x18)) {
                                                      *(undefined8 *)(lVar3 + 0x470) =
                                                           in_stack_00000020;
                                                      *(undefined4 *)(lVar3 + 0x478) =
                                                           in_stack_00000028;
                                                      in_stack_00000018 = 0;
                                                      in_stack_00000010 = 0;
                                                      FUN_062fcc3c(&stack0x00000010,0xff21,0xff3a,1,
                                                                   0x20,0);
                                                      if (0x5d < *(uint *)(lVar3 + 0x18)) {
                                                        *(undefined8 *)(lVar3 + 0x47c) =
                                                             in_stack_00000010;
                                                        *(undefined4 *)(lVar3 + 0x484) =
                                                             in_stack_00000018;
                                                        plVar5 = (long *)(*(long *)(*(long *)puVar1
                                                                                   + 0xb8) + 0x68);
                                                        *plVar5 = lVar3;
                                                        thunk_FUN_0333a630(plVar5,lVar3);
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
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
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
  Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
}


