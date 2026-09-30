/*
FUNCTION_NAME: FUN_00c0fb64
ENTRY_POINT: 00c0fb64
PROGRAM: Lovesick-libil2cpp.so
SCORE: 160
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;gaze_interaction
MODULES: eye_source;weak_source_state;pose_vector;ray_interaction;ui_interaction;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_5;strong_pose_or_ray_construction_hits_3;ray_or_cast_sink_hits_3;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_3;frame_or_lifecycle_behavior;functionality_gaze_retrieval_or_extraction;functionality_gaze_interaction_hits_2
*/


void FUN_00c0fb64(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  
  puVar8 = StringLiteral_11155;
  puVar7 = StringLiteral_2306;
  puVar6 = Method_System_Xml_Schema_XmlAnyConverter_ChangeType__;
  puVar5 = Method_UnityEngine_XR_InputTracking_InvokeTrackingEvent__;
  puVar4 = Method_System_Attribute_IsDefined__;
  puVar3 = Method_UnityEngine_ProBuilder_ArrayUtility_AllIndexesOf<bool>__;
  puVar2 = Method_System_Data_AggregateNode_Eval__;
  puVar1 = Method_OVRResult<ulong,_OVRPlugin_Result>_From__;
  if ((DAT_0377cf0d & 1) == 0) {
    thunk_FUN_00d48444(Method_UnityEngine_Resources_LoadAll<LocalizationDataCollection>__);
    thunk_FUN_00d48444(UnityEngine_XR_ARSubsystems_XRAnchorSubsystemDescriptor_Cinfo_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_7683);
    thunk_FUN_00d48444(Method_UnityEngine_ProBuilder_ArrayUtility_AllIndexesOf<bool>__);
    thunk_FUN_00d48444(UnityEngine_Physics2D_var);
    thunk_FUN_00d48444(Oculus_Interaction_PoseDetection_FingerFeatureStateProvider_<>c_TypeInfo);
    thunk_FUN_00d48444(System_Func<Vector3Int,_float>_TypeInfo);
    thunk_FUN_00d48444(
                      Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass28_0_<DOShakeAnchorPos>b__1__
                      );
    thunk_FUN_00d48444(
                      Method_UnityEngine_UIElements_UxmlFactory<ScrollView,_ScrollView_UxmlTraits>__ctor__
                      );
    thunk_FUN_00d48444(System_Collections_Generic_List<ProbeReferenceVolume_CellSortInfo>_TypeInfo);
    thunk_FUN_00d48444(PTR_DAT_033f3888);
    thunk_FUN_00d48444(UnityEngine_Assertions_AssertionException_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_11155);
    thunk_FUN_00d48444(Method_UnityEngine_XR_InputTracking_InvokeTrackingEvent__);
    thunk_FUN_00d48444(Method_UnityEngine_UIElements_CustomStyleProperty<VectorImage>_get_name__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_LowLevelList<Task>_Add__);
    thunk_FUN_00d48444(Method_System_Attribute_IsDefined__);
    thunk_FUN_00d48444(PTR_DAT_033f5110);
    thunk_FUN_00d48444(Method_Oculus_Interaction_Input_DataSource<ControllerDataAsset>_OnEnable__);
    thunk_FUN_00d48444(System_OperationCanceledException_TypeInfo);
    thunk_FUN_00d48444(System_Func<InputDevice>_TypeInfo);
    thunk_FUN_00d48444(UnityEngine_Timeline_ITimelineEvaluateCallback_TypeInfo);
    thunk_FUN_00d48444(Method_OVRResult<ulong,_OVRPlugin_Result>_From__);
    thunk_FUN_00d48444(Method_System_Data_AggregateNode_Eval__);
    thunk_FUN_00d48444(Method_UnityEngine_ProBuilder_Poly2Tri_FixedBitArray3_get_Item__);
    thunk_FUN_00d48444(PTR_DAT_033ee218);
    thunk_FUN_00d48444(StringLiteral_2306);
    thunk_FUN_00d48444(Method_Sirenix_Serialization_JsonDataReader_<_ctor>b__7_9__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<Object>_ConvertAll<IInteractable>__);
    thunk_FUN_00d48444(Method_Television_ChannelDown__);
    thunk_FUN_00d48444(Method_System_Xml_Schema_XmlAnyConverter_ChangeType__);
    thunk_FUN_00d48444(StringLiteral_14106);
    thunk_FUN_00d48444(Method_UnityEngine_UIElements_MouseEventBase<MouseUpEvent>__ctor__);
    thunk_FUN_00d48444(PTR_DAT_033f66f0);
    thunk_FUN_00d48444(Internal_Cryptography_OidLookup_<>c_TypeInfo);
    thunk_FUN_00d48444(UnityEngine_MeshTopology_TypeInfo);
    thunk_FUN_00d48444(Method_UnityEngine_Object_FindObjectsOfType<SuperTextMesh>__);
    thunk_FUN_00d48444(Method_UnityEngine_Component_GetComponentInParent<XROrigin>__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_Dictionary<Type,_fsDirectConverter>__ctor__
                      );
    thunk_FUN_00d48444(Method_Newtonsoft_Json_JsonSerializer_set_MaxDepth__);
    thunk_FUN_00d48444(StringLiteral_4356);
    thunk_FUN_00d48444(StringLiteral_13420);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List<ValueTuple<string,_string,_LogType>>_GetEnumerator__
                      );
    thunk_FUN_00d48444(Method_System_Xml_Ucs4Encoding_GetByteCount__);
    thunk_FUN_00d48444(Method_System_Data_SqlTypes_SqlMoney_get_Value__);
    thunk_FUN_00d48444(
                      Method_UnityEngine_XR_Interaction_Toolkit_Inputs_Simulation_XRDeviceSimulator_OnKeyboardYTranslateCanceled__
                      );
    thunk_FUN_00d48444(StringLiteral_7148);
    DAT_0377cf0d = 1;
  }
  uVar9 = thunk_FUN_00d63814(*param_1,*(undefined8 *)puVar7);
  *param_2 = uVar9;
  thunk_FUN_00d63814(*param_1,*(undefined8 *)puVar7);
  uVar9 = thunk_FUN_00d63814(param_1[1],*(undefined8 *)puVar1);
  param_2[1] = uVar9;
  thunk_FUN_00d63814(param_1[1],*(undefined8 *)puVar1);
  uVar9 = thunk_FUN_00d63814(param_1[2],*(undefined8 *)puVar2);
  param_2[2] = uVar9;
  thunk_FUN_00d63814(param_1[2],*(undefined8 *)puVar2);
  uVar9 = thunk_FUN_00d63814(param_1[3],*(undefined8 *)puVar3);
  param_2[3] = uVar9;
  thunk_FUN_00d63814(param_1[3],*(undefined8 *)puVar3);
  uVar9 = thunk_FUN_00d63814(param_1[4],*(undefined8 *)puVar4);
  param_2[4] = uVar9;
  thunk_FUN_00d63814(param_1[4],*(undefined8 *)puVar4);
  uVar9 = thunk_FUN_00d63814(param_1[5],*(undefined8 *)puVar6);
  param_2[5] = uVar9;
  thunk_FUN_00d63814(param_1[5],*(undefined8 *)puVar6);
  uVar9 = thunk_FUN_00d63814(param_1[6],*(undefined8 *)puVar8);
  param_2[6] = uVar9;
  thunk_FUN_00d63814(param_1[6],*(undefined8 *)puVar8);
  uVar9 = thunk_FUN_00d63814(param_1[7],*(undefined8 *)puVar5);
  param_2[7] = uVar9;
  thunk_FUN_00d63814(param_1[7],*(undefined8 *)puVar5);
  puVar1 = UnityEngine_Timeline_ITimelineEvaluateCallback_TypeInfo;
  uVar9 = thunk_FUN_00d63814(param_1[8],
                             *(undefined8 *)UnityEngine_Timeline_ITimelineEvaluateCallback_TypeInfo)
  ;
  param_2[8] = uVar9;
  thunk_FUN_00d63814(param_1[8],*(undefined8 *)puVar1);
  puVar1 = UnityEngine_MeshTopology_TypeInfo;
  uVar9 = thunk_FUN_00d63814(param_1[9],*(undefined8 *)UnityEngine_MeshTopology_TypeInfo);
  param_2[9] = uVar9;
  thunk_FUN_00d63814(param_1[9],*(undefined8 *)puVar1);
  puVar1 = Method_System_Xml_Ucs4Encoding_GetByteCount__;
  uVar9 = thunk_FUN_00d63814(param_1[10],
                             *(undefined8 *)Method_System_Xml_Ucs4Encoding_GetByteCount__);
  param_2[10] = uVar9;
  thunk_FUN_00d63814(param_1[10],*(undefined8 *)puVar1);
  puVar1 = Method_UnityEngine_UIElements_CustomStyleProperty<VectorImage>_get_name__;
  uVar9 = thunk_FUN_00d63814(param_1[0xb],
                             *(undefined8 *)
                              Method_UnityEngine_UIElements_CustomStyleProperty<VectorImage>_get_name__
                            );
  param_2[0xb] = uVar9;
  thunk_FUN_00d63814(param_1[0xb],*(undefined8 *)puVar1);
  puVar1 = 
  Method_System_Collections_Generic_List<ValueTuple<string,_string,_LogType>>_GetEnumerator__;
  uVar9 = thunk_FUN_00d63814(param_1[0xc],
                             *(undefined8 *)
                              Method_System_Collections_Generic_List<ValueTuple<string,_string,_LogType>>_GetEnumerator__
                            );
  param_2[0xc] = uVar9;
  thunk_FUN_00d63814(param_1[0xc],*(undefined8 *)puVar1);
  puVar1 = Method_Sirenix_Serialization_JsonDataReader_<_ctor>b__7_9__;
  uVar9 = thunk_FUN_00d63814(param_1[0xd],
                             *(undefined8 *)
                              Method_Sirenix_Serialization_JsonDataReader_<_ctor>b__7_9__);
  param_2[0xd] = uVar9;
  thunk_FUN_00d63814(param_1[0xd],*(undefined8 *)puVar1);
  puVar1 = PTR_DAT_033ee218;
  uVar9 = thunk_FUN_00d63814(param_1[0xe],*(undefined8 *)PTR_DAT_033ee218);
  param_2[0xe] = uVar9;
  thunk_FUN_00d63814(param_1[0xe],*(undefined8 *)puVar1);
  puVar1 = Method_System_Collections_Generic_List<Object>_ConvertAll<IInteractable>__;
  uVar9 = thunk_FUN_00d63814(param_1[0xf],
                             *(undefined8 *)
                              Method_System_Collections_Generic_List<Object>_ConvertAll<IInteractable>__
                            );
  param_2[0xf] = uVar9;
  thunk_FUN_00d63814(param_1[0xf],*(undefined8 *)puVar1);
  puVar1 = StringLiteral_14106;
  uVar9 = thunk_FUN_00d63814(param_1[0x10],*(undefined8 *)StringLiteral_14106);
  param_2[0x10] = uVar9;
  thunk_FUN_00d63814(param_1[0x10],*(undefined8 *)puVar1);
  puVar1 = StringLiteral_7683;
  uVar9 = thunk_FUN_00d63814(param_1[0x11],*(undefined8 *)StringLiteral_7683);
  param_2[0x11] = uVar9;
  thunk_FUN_00d63814(param_1[0x11],*(undefined8 *)puVar1);
  puVar1 = PTR_DAT_033f66f0;
  uVar9 = thunk_FUN_00d63814(param_1[0x12],*(undefined8 *)PTR_DAT_033f66f0);
  param_2[0x12] = uVar9;
  thunk_FUN_00d63814(param_1[0x12],*(undefined8 *)puVar1);
  puVar1 = System_Collections_Generic_List<ProbeReferenceVolume_CellSortInfo>_TypeInfo;
  uVar9 = thunk_FUN_00d63814(param_1[0x13],
                             *(undefined8 *)
                              System_Collections_Generic_List<ProbeReferenceVolume_CellSortInfo>_TypeInfo
                            );
  param_2[0x13] = uVar9;
  thunk_FUN_00d63814(param_1[0x13],*(undefined8 *)puVar1);
  puVar1 = Method_UnityEngine_UIElements_MouseEventBase<MouseUpEvent>__ctor__;
  uVar9 = thunk_FUN_00d63814(param_1[0x14],
                             *(undefined8 *)
                              Method_UnityEngine_UIElements_MouseEventBase<MouseUpEvent>__ctor__);
  param_2[0x14] = uVar9;
  thunk_FUN_00d63814(param_1[0x14],*(undefined8 *)puVar1);
  puVar1 = Method_System_Collections_Generic_Dictionary<Type,_fsDirectConverter>__ctor__;
  uVar9 = thunk_FUN_00d63814(param_1[0x15],
                             *(undefined8 *)
                              Method_System_Collections_Generic_Dictionary<Type,_fsDirectConverter>__ctor__
                            );
  param_2[0x15] = uVar9;
  thunk_FUN_00d63814(param_1[0x15],*(undefined8 *)puVar1);
  puVar1 = System_Func<Vector3Int,_float>_TypeInfo;
  uVar9 = thunk_FUN_00d63814(param_1[0x16],*(undefined8 *)System_Func<Vector3Int,_float>_TypeInfo);
  param_2[0x16] = uVar9;
  thunk_FUN_00d63814(param_1[0x16],*(undefined8 *)puVar1);
  puVar1 = PTR_DAT_033f5110;
  uVar9 = thunk_FUN_00d63814(param_1[0x17],*(undefined8 *)PTR_DAT_033f5110);
  param_2[0x17] = uVar9;
  thunk_FUN_00d63814(param_1[0x17],*(undefined8 *)puVar1);
  puVar1 = System_OperationCanceledException_TypeInfo;
  uVar9 = thunk_FUN_00d63814(param_1[0x18],*(undefined8 *)System_OperationCanceledException_TypeInfo
                            );
  param_2[0x18] = uVar9;
  thunk_FUN_00d63814(param_1[0x18],*(undefined8 *)puVar1);
  puVar1 = Internal_Cryptography_OidLookup_<>c_TypeInfo;
  uVar9 = thunk_FUN_00d63814(param_1[0x19],
                             *(undefined8 *)Internal_Cryptography_OidLookup_<>c_TypeInfo);
  param_2[0x19] = uVar9;
  thunk_FUN_00d63814(param_1[0x19],*(undefined8 *)puVar1);
  puVar1 = System_Func<InputDevice>_TypeInfo;
  uVar9 = thunk_FUN_00d63814(param_1[0x1a],*(undefined8 *)System_Func<InputDevice>_TypeInfo);
  param_2[0x1a] = uVar9;
  thunk_FUN_00d63814(param_1[0x1a],*(undefined8 *)puVar1);
  puVar1 = Oculus_Interaction_PoseDetection_FingerFeatureStateProvider_<>c_TypeInfo;
  uVar9 = thunk_FUN_00d63814(param_1[0x1b],
                             *(undefined8 *)
                              Oculus_Interaction_PoseDetection_FingerFeatureStateProvider_<>c_TypeInfo
                            );
  param_2[0x1b] = uVar9;
  thunk_FUN_00d63814(param_1[0x1b],*(undefined8 *)puVar1);
  puVar1 = Method_Television_ChannelDown__;
  uVar9 = thunk_FUN_00d63814(param_1[0x1c],*(undefined8 *)Method_Television_ChannelDown__);
  param_2[0x1c] = uVar9;
  thunk_FUN_00d63814(param_1[0x1c],*(undefined8 *)puVar1);
  puVar1 = Method_UnityEngine_ProBuilder_Poly2Tri_FixedBitArray3_get_Item__;
  uVar9 = thunk_FUN_00d63814(param_1[0x1d],
                             *(undefined8 *)
                              Method_UnityEngine_ProBuilder_Poly2Tri_FixedBitArray3_get_Item__);
  param_2[0x1d] = uVar9;
  thunk_FUN_00d63814(param_1[0x1d],*(undefined8 *)puVar1);
  puVar1 = StringLiteral_13420;
  uVar9 = thunk_FUN_00d63814(param_1[0x1e],*(undefined8 *)StringLiteral_13420);
  param_2[0x1e] = uVar9;
  thunk_FUN_00d63814(param_1[0x1e],*(undefined8 *)puVar1);
  puVar1 = StringLiteral_4356;
  uVar9 = thunk_FUN_00d63814(param_1[0x1f],*(undefined8 *)StringLiteral_4356);
  param_2[0x1f] = uVar9;
  thunk_FUN_00d63814(param_1[0x1f],*(undefined8 *)puVar1);
  puVar1 = Method_System_Collections_Generic_LowLevelList<Task>_Add__;
  uVar9 = thunk_FUN_00d63814(param_1[0x20],
                             *(undefined8 *)
                              Method_System_Collections_Generic_LowLevelList<Task>_Add__);
  param_2[0x20] = uVar9;
  thunk_FUN_00d63814(param_1[0x20],*(undefined8 *)puVar1);
  puVar1 = Method_Oculus_Interaction_Input_DataSource<ControllerDataAsset>_OnEnable__;
  uVar9 = thunk_FUN_00d63814(param_1[0x21],
                             *(undefined8 *)
                              Method_Oculus_Interaction_Input_DataSource<ControllerDataAsset>_OnEnable__
                            );
  param_2[0x21] = uVar9;
  thunk_FUN_00d63814(param_1[0x21],*(undefined8 *)puVar1);
  puVar1 = UnityEngine_Assertions_AssertionException_TypeInfo;
  uVar9 = thunk_FUN_00d63814(param_1[0x22],
                             *(undefined8 *)UnityEngine_Assertions_AssertionException_TypeInfo);
  param_2[0x22] = uVar9;
  thunk_FUN_00d63814(param_1[0x22],*(undefined8 *)puVar1);
  puVar1 = PTR_DAT_033f3888;
  uVar9 = thunk_FUN_00d63814(param_1[0x23],*(undefined8 *)PTR_DAT_033f3888);
  param_2[0x23] = uVar9;
  thunk_FUN_00d63814(param_1[0x23],*(undefined8 *)puVar1);
  puVar1 = StringLiteral_7148;
  uVar9 = thunk_FUN_00d63814(param_1[0x24],*(undefined8 *)StringLiteral_7148);
  param_2[0x24] = uVar9;
  thunk_FUN_00d63814(param_1[0x24],*(undefined8 *)puVar1);
  puVar1 = Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass28_0_<DOShakeAnchorPos>b__1__;
  uVar9 = thunk_FUN_00d63814(param_1[0x25],
                             *(undefined8 *)
                              Method_DG_Tweening_DOTweenModuleUI_<>c__DisplayClass28_0_<DOShakeAnchorPos>b__1__
                            );
  param_2[0x25] = uVar9;
  thunk_FUN_00d63814(param_1[0x25],*(undefined8 *)puVar1);
  puVar1 = Method_UnityEngine_UIElements_UxmlFactory<ScrollView,_ScrollView_UxmlTraits>__ctor__;
  uVar9 = thunk_FUN_00d63814(param_1[0x26],
                             *(undefined8 *)
                              Method_UnityEngine_UIElements_UxmlFactory<ScrollView,_ScrollView_UxmlTraits>__ctor__
                            );
  param_2[0x26] = uVar9;
  thunk_FUN_00d63814(param_1[0x26],*(undefined8 *)puVar1);
  puVar1 = Method_UnityEngine_Object_FindObjectsOfType<SuperTextMesh>__;
  uVar9 = thunk_FUN_00d63814(param_1[0x27],
                             *(undefined8 *)
                              Method_UnityEngine_Object_FindObjectsOfType<SuperTextMesh>__);
  param_2[0x27] = uVar9;
  thunk_FUN_00d63814(param_1[0x27],*(undefined8 *)puVar1);
  puVar1 = Method_UnityEngine_Component_GetComponentInParent<XROrigin>__;
  uVar9 = thunk_FUN_00d63814(param_1[0x28],
                             *(undefined8 *)
                              Method_UnityEngine_Component_GetComponentInParent<XROrigin>__);
  param_2[0x28] = uVar9;
  thunk_FUN_00d63814(param_1[0x28],*(undefined8 *)puVar1);
  puVar1 = Method_System_Data_SqlTypes_SqlMoney_get_Value__;
  uVar9 = thunk_FUN_00d63814(param_1[0x29],
                             *(undefined8 *)Method_System_Data_SqlTypes_SqlMoney_get_Value__);
  param_2[0x29] = uVar9;
  thunk_FUN_00d63814(param_1[0x29],*(undefined8 *)puVar1);
  puVar1 = 
  Method_UnityEngine_XR_Interaction_Toolkit_Inputs_Simulation_XRDeviceSimulator_OnKeyboardYTranslateCanceled__
  ;
  uVar9 = thunk_FUN_00d63814(param_1[0x2a],
                             *(undefined8 *)
                              Method_UnityEngine_XR_Interaction_Toolkit_Inputs_Simulation_XRDeviceSimulator_OnKeyboardYTranslateCanceled__
                            );
  param_2[0x2a] = uVar9;
  thunk_FUN_00d63814(param_1[0x2a],*(undefined8 *)puVar1);
  puVar1 = UnityEngine_Physics2D_var;
  uVar9 = thunk_FUN_00d63814(param_1[0x2b],*(undefined8 *)UnityEngine_Physics2D_var);
  param_2[0x2b] = uVar9;
  thunk_FUN_00d63814(param_1[0x2b],*(undefined8 *)puVar1);
  puVar1 = Method_Newtonsoft_Json_JsonSerializer_set_MaxDepth__;
  uVar9 = thunk_FUN_00d63814(param_1[0x2c],
                             *(undefined8 *)Method_Newtonsoft_Json_JsonSerializer_set_MaxDepth__);
  param_2[0x2c] = uVar9;
  thunk_FUN_00d63814(param_1[0x2c],*(undefined8 *)puVar1);
  puVar1 = Method_UnityEngine_Resources_LoadAll<LocalizationDataCollection>__;
  uVar9 = thunk_FUN_00d63814(param_1[0x2d],
                             *(undefined8 *)
                              Method_UnityEngine_Resources_LoadAll<LocalizationDataCollection>__);
  param_2[0x2d] = uVar9;
  thunk_FUN_00d63814(param_1[0x2d],*(undefined8 *)puVar1);
  puVar1 = UnityEngine_XR_ARSubsystems_XRAnchorSubsystemDescriptor_Cinfo_TypeInfo;
  uVar9 = thunk_FUN_00d63814(param_1[0x2e],
                             *(undefined8 *)
                              UnityEngine_XR_ARSubsystems_XRAnchorSubsystemDescriptor_Cinfo_TypeInfo
                            );
  param_2[0x2e] = uVar9;
  thunk_FUN_00d63814(param_1[0x2e],*(undefined8 *)puVar1);
  return;
}


