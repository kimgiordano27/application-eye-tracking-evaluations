/*
FUNCTION_NAME: Unity.VisualScripting.PlatformUtility$$IsStandalone
ENTRY_POINT: 0639f838
PROGRAM: Untangled-libil2cpp.so
SCORE: 82
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;ray_interaction;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_4;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_19
*/


void Unity_VisualScripting_PlatformUtility__IsStandalone(void)

{
  undefined4 uVar1;
  long *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  long unaff_x29;
  
  FUN_02f07e70(UnityEngine_XR_ARSubsystems_XRPointCloudSubsystemDescriptor_Cinfo_var);
  FUN_02f07e70(UnityEngine_XR_ARSubsystems_XRRaycastSubsystemDescriptor_Cinfo_var);
  FUN_02f07e70(UnityEngine_XR_Management_XRManagementAnalytics_BuildEvent_var);
  FUN_02f07e70(UnityEngine_XR_ARSubsystems_XRSessionSubsystemDescriptor_Cinfo_var);
  FUN_02f07e70(System_Xml_Schema_XmlAtomicValue_Union_var);
  FUN_02f07e70(System_Xml_XmlQualifiedName_HashCodeOfStringDelegate_var);
  FUN_02f07e70(UnityEngine_XR_ARSubsystems_XRDepthSubsystemDescriptor_Cinfo_var);
  FUN_02f07e70(System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_var);
  FUN_02f07e70(System_Xml_XmlSqlBinaryReader_ElemInfo_var);
  FUN_02f07e70(UnityEngine_XR_XRDisplaySubsystem_XRRenderParameter_var);
  FUN_02f07e70(UnityEngine_XR_ARSubsystems_XROcclusionSubsystem_Provider_var);
  FUN_02f07e70(System_Xml_XmlSqlBinaryReader_SymbolTables_var);
  FUN_02f07e70(UnityEngine_XR_ARSubsystems_XREnvironmentProbeSubsystem_Provider_var);
  FUN_02f07e70(System_Xml_XmlTextReaderImpl_ParsingState_var);
  FUN_02f07e70(Unity_VisualScripting_FullSerializer_fsAotCompilationManager_AotCompilation_var);
  FUN_02f07e70(Unity_VisualScripting_FullSerializer_Internal_fsPortableReflection_AttributeQuery_var
              );
  FUN_02f07e70(PTR_DAT_06d62d90);
  FUN_02f07e70(ftLightmaps_LightmapAdditionalData_var);
  FUN_02f07e70(Unity_Collections_xxHash3_Hash128Long_00000A77_PostfixBurstDelegate_var);
  FUN_02f07e70(Unity_Collections_xxHash3_Hash64Long_00000A70_PostfixBurstDelegate_var);
  FUN_02f07e70(
              Unity_Collections_AllocatorManager_SlabAllocator_Try_000000B9_PostfixBurstDelegate_var
              );
  FUN_02f07e70(
              Unity_Collections_AllocatorManager_StackAllocator_Try_000000AB_PostfixBurstDelegate_var
              );
  FUN_02f07e70(System_Dynamic_BindingRestrictions_TestBuilder_AndNode_var);
  FUN_02f07e70(
              Unity_Burst_BurstCompiler_BurstCompilerHelper_IsBurstEnabled_00000145_PostfixBurstDelegate_var
              );
  FUN_02f07e70(
              System_Runtime_Serialization_ClassDataContract_ClassDataContractCriticalHelper_Member_var
              );
  FUN_02f07e70(PlayFab_ProgressionModels_GetStatisticsForEntitiesRequest_var);
  FUN_02f07e70(
              UnityEngine_Rendering_DebugDisplaySettingsVolume_WidgetFactory_VolumeParameterChain_var
              );
  FUN_02f07e70(PixelCrushers_DialogueSystem_DisplaySettings_SubtitleSettings_ContinueButtonMode_var)
  ;
  FUN_02f07e70(UnityEngine_XR_ARSubsystems_XRHumanBodySubsystem_Provider_var);
  FUN_02f07e70(System_Xml_Serialization_XmlIncludeAttribute_var);
  FUN_02f07e70(UnityEngine_XR_XRDisplaySubsystem_XRBlitParams_var);
  FUN_02f07e70(UnityEngine_InputSystem_Layouts_InputControlLayout_Builder_ControlBuilder_var);
  FUN_02f07e70(UnityEngine_InputSystem_Layouts_InputControlLayout_Collection_LayoutMatcher_var);
  FUN_02f07e70(UnityEngine_XR_ARSubsystems_XRImageTrackingSubsystemDescriptor_Cinfo_var);
  FUN_02f07e70(UnityEngine_InputSystem_InputRemoting_ChangeUsageMsg_Data_var);
  FUN_02f07e70(UnityEngine_InputSystem_InputRemoting_NewDeviceMsg_Data_var);
  FUN_02f07e70(System_Linq_Expressions_Interpreter_InstructionList_DebugView_InstructionView_var);
  FUN_02f07e70(Fusion_NetworkBehaviour_ChangeDetector_Enumerable_var);
  FUN_02f07e70(Fusion_NetworkBehaviour_ChangeDetector_Enumerator_var);
  *(undefined1 *)(unaff_x29 + 0x4a9) = 1;
  uVar1 = FUN_066a0664(*unaff_x20,0);
  **(undefined4 **)(*unaff_x19 + 0xb8) = uVar1;
  uVar1 = FUN_066a0664(*unaff_x28,0);
  *(undefined4 *)(*(long *)(*unaff_x19 + 0xb8) + 4) = uVar1;
  uVar1 = FUN_066a0664(*unaff_x27,0);
  *(undefined4 *)(*(long *)(*unaff_x19 + 0xb8) + 8) = uVar1;
  uVar1 = FUN_066a0664(*unaff_x26,0);
  *(undefined4 *)(*(long *)(*unaff_x19 + 0xb8) + 0xc) = uVar1;
  uVar1 = FUN_066a0664(*unaff_x25,0);
  *(undefined4 *)(*(long *)(*unaff_x19 + 0xb8) + 0x10) = uVar1;
  uVar1 = FUN_066a0664(*unaff_x24,0);
  *(undefined4 *)(*(long *)(*unaff_x19 + 0xb8) + 0x14) = uVar1;
  uVar1 = FUN_066a0664(*unaff_x23,0);
  *(undefined4 *)(*(long *)(*unaff_x19 + 0xb8) + 0x18) = uVar1;
  uVar1 = FUN_066a0664(*unaff_x22,0);
  *(undefined4 *)(*(long *)(*unaff_x19 + 0xb8) + 0x1c) = uVar1;
  uVar1 = FUN_066a0664(*unaff_x21,0);
  *(undefined4 *)(*(long *)(*unaff_x19 + 0xb8) + 0x20) = uVar1;
  uVar1 = FUN_066a0664(*(undefined8 *)
                        UnityEngine_Rendering_DebugDisplaySettingsVolume_WidgetFactory_VolumeParameterChain_var
                       ,0);
  *(undefined4 *)(*(long *)(*unaff_x19 + 0xb8) + 0x24) = uVar1;
  uVar1 = FUN_066a0664(*(undefined8 *)
                        UnityEngine_InputSystem_Layouts_InputControlLayout_Collection_LayoutMatcher_var
                       ,0);
  *(undefined4 *)(*(long *)(*unaff_x19 + 0xb8) + 0x28) = uVar1;
  uVar1 = FUN_066a0664(*(undefined8 *)System_Dynamic_BindingRestrictions_TestBuilder_AndNode_var,0);
  *(undefined4 *)(*(long *)(*unaff_x19 + 0xb8) + 0x2c) = uVar1;
  uVar1 = FUN_066a0664(*(undefined8 *)ftLightmaps_LightmapAdditionalData_var,0);
  *(undefined4 *)(*(long *)(*unaff_x19 + 0xb8) + 0x30) = uVar1;
  uVar1 = FUN_066a0664(*(undefined8 *)
                        PixelCrushers_DialogueSystem_DisplaySettings_SubtitleSettings_ContinueButtonMode_var
                       ,0);
  *(undefined4 *)(*(long *)(*unaff_x19 + 0xb8) + 0x34) = uVar1;
  uVar1 = FUN_066a0664(*(undefined8 *)
                        UnityEngine_InputSystem_Layouts_InputControlLayout_Builder_ControlBuilder_var
                       ,0);
  *(undefined4 *)(*(long *)(*unaff_x19 + 0xb8) + 0x38) = uVar1;
  uVar1 = FUN_066a0664(*(undefined8 *)
                        System_Linq_Expressions_Interpreter_InstructionList_DebugView_InstructionView_var
                       ,0);
  *(undefined4 *)(*(long *)(*unaff_x19 + 0xb8) + 0x3c) = uVar1;
  uVar1 = FUN_066a0664(*(undefined8 *)System_Xml_XmlSqlBinaryReader_SymbolTables_var,0);
  *(undefined4 *)(*(long *)(*unaff_x19 + 0xb8) + 0x40) = uVar1;
  uVar1 = FUN_066a0664(*(undefined8 *)System_Xml_Schema_XmlAtomicValue_Union_var,0);
  *(undefined4 *)(*(long *)(*unaff_x19 + 0xb8) + 0x44) = uVar1;
  uVar1 = FUN_066a0664(*(undefined8 *)
                        Unity_Collections_AllocatorManager_SlabAllocator_Try_000000B9_PostfixBurstDelegate_var
                       ,0);
  *(undefined4 *)(*(long *)(*unaff_x19 + 0xb8) + 0x48) = uVar1;
  uVar1 = FUN_066a0664(*(undefined8 *)UnityEngine_InputSystem_InputRemoting_NewDeviceMsg_Data_var,0)
  ;
  *(undefined4 *)(*(long *)(*unaff_x19 + 0xb8) + 0x4c) = uVar1;
  uVar1 = FUN_066a0664(*(undefined8 *)UnityEngine_InputSystem_InputRemoting_ChangeUsageMsg_Data_var,
                       0);
  *(undefined4 *)(*(long *)(*unaff_x19 + 0xb8) + 0x50) = uVar1;
  uVar1 = FUN_066a0664(*(undefined8 *)
                        Unity_VisualScripting_FullSerializer_fsAotCompilationManager_AotCompilation_var
                       ,0);
  *(undefined4 *)(*(long *)(*unaff_x19 + 0xb8) + 0x54) = uVar1;
  uVar1 = FUN_066a0664(*(undefined8 *)System_Xml_XmlTextReaderImpl_ParsingState_var,0);
  *(undefined4 *)(*(long *)(*unaff_x19 + 0xb8) + 0x58) = uVar1;
  uVar1 = FUN_066a0664(*(undefined8 *)
                        System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_var,0);
  *(undefined4 *)(*(long *)(*unaff_x19 + 0xb8) + 0x5c) = uVar1;
  uVar1 = FUN_066a0664(*(undefined8 *)Fusion_NetworkBehaviour_ChangeDetector_Enumerable_var,0);
  *(undefined4 *)(*(long *)(*unaff_x19 + 0xb8) + 0x60) = uVar1;
  uVar1 = FUN_066a0664(*(undefined8 *)
                        Unity_Burst_BurstCompiler_BurstCompilerHelper_IsBurstEnabled_00000145_PostfixBurstDelegate_var
                       ,0);
  *(undefined4 *)(*(long *)(*unaff_x19 + 0xb8) + 100) = uVar1;
  uVar1 = FUN_066a0664(*(undefined8 *)
                        UnityEngine_XR_ARSubsystems_XRRaycastSubsystemDescriptor_Cinfo_var,0);
  *(undefined4 *)(*(long *)(*unaff_x19 + 0xb8) + 0x68) = uVar1;
  uVar1 = FUN_066a0664(*(undefined8 *)
                        UnityEngine_XR_ARSubsystems_XRSessionSubsystemDescriptor_Cinfo_var,0);
  *(undefined4 *)(*(long *)(*unaff_x19 + 0xb8) + 0x6c) = uVar1;
  uVar1 = FUN_066a0664(*(undefined8 *)
                        UnityEngine_XR_ARSubsystems_XRPlaneSubsystemDescriptor_Cinfo_var,0);
  *(undefined4 *)(*(long *)(*unaff_x19 + 0xb8) + 0x70) = uVar1;
  uVar1 = FUN_066a0664(*(undefined8 *)
                        System_Runtime_Serialization_ClassDataContract_ClassDataContractCriticalHelper_Member_var
                       ,0);
  *(undefined4 *)(*(long *)(*unaff_x19 + 0xb8) + 0x74) = uVar1;
  uVar1 = FUN_066a0664(*(undefined8 *)Fusion_NetworkBehaviour_ChangeDetector_Enumerator_var,0);
  *(undefined4 *)(*(long *)(*unaff_x19 + 0xb8) + 0x78) = uVar1;
  uVar1 = FUN_066a0664(*(undefined8 *)
                        UnityEngine_XR_ARSubsystems_XRPointCloudSubsystemDescriptor_Cinfo_var,0);
  *(undefined4 *)(*(long *)(*unaff_x19 + 0xb8) + 0x7c) = uVar1;
  uVar1 = FUN_066a0664(*(undefined8 *)PlayFab_ProgressionModels_GetStatisticsForEntitiesRequest_var,
                       0);
  *(undefined4 *)(*(long *)(*unaff_x19 + 0xb8) + 0x80) = uVar1;
  uVar1 = FUN_066a0664(*(undefined8 *)
                        Unity_Collections_xxHash3_Hash128Long_00000A77_PostfixBurstDelegate_var,0);
  *(undefined4 *)(*(long *)(*unaff_x19 + 0xb8) + 0x84) = uVar1;
  uVar1 = FUN_066a0664(*(undefined8 *)System_Xml_XmlSqlBinaryReader_ElemInfo_var,0);
  *(undefined4 *)(*(long *)(*unaff_x19 + 0xb8) + 0x88) = uVar1;
  uVar1 = FUN_066a0664(*(undefined8 *)System_Xml_Serialization_XmlIncludeAttribute_var,0);
  *(undefined4 *)(*(long *)(*unaff_x19 + 0xb8) + 0x8c) = uVar1;
  uVar1 = FUN_066a0664(*(undefined8 *)
                        Unity_Collections_AllocatorManager_StackAllocator_Try_000000AB_PostfixBurstDelegate_var
                       ,0);
  *(undefined4 *)(*(long *)(*unaff_x19 + 0xb8) + 0x90) = uVar1;
  uVar1 = FUN_066a0664(*(undefined8 *)System_Xml_XmlQualifiedName_HashCodeOfStringDelegate_var,0);
  *(undefined4 *)(*(long *)(*unaff_x19 + 0xb8) + 0x94) = uVar1;
  uVar1 = FUN_066a0664(*(undefined8 *)
                        Unity_VisualScripting_FullSerializer_Internal_fsPortableReflection_AttributeQuery_var
                       ,0);
  *(undefined4 *)(*(long *)(*unaff_x19 + 0xb8) + 0x98) = uVar1;
  uVar1 = FUN_066a0664(*(undefined8 *)
                        Unity_Collections_xxHash3_Hash64Long_00000A70_PostfixBurstDelegate_var,0);
  *(undefined4 *)(*(long *)(*unaff_x19 + 0xb8) + 0x9c) = uVar1;
  return;
}


