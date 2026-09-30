/*
FUNCTION_NAME: FUN_0244d148
ENTRY_POINT: 0244d148
PROGRAM: Lovesick-libil2cpp.so
SCORE: 132
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_6;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_2;functionality_gaze_retrieval_or_extraction;functionality_data_collection_or_telemetry_hits_2
*/


void FUN_0244d148(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined4 uVar11;
  
  puVar10 = StringLiteral_11394;
  puVar9 = 
  Method_UnityEngine_InputSystem_InputActionRebindingExtensions_RebindingOperation_AddCandidate__;
  puVar8 = Method_System_Data_SqlTypes_SqlInt16_op_Subtraction__;
  puVar7 = Method_System_Linq_Enumerable_Select<ContourVertex,_Color>__;
  puVar6 = Method_UnityEngine_AndroidJavaObject_Call<bool>__;
  puVar5 = Method_System_Runtime_CompilerServices_TaskAwaiter<VoiceServiceRequest>_get_IsCompleted__
  ;
  puVar4 = Method_System_Collections_Generic_List<Expression>__ctor__;
  puVar3 = Method_System_Collections_Generic_List_Enumerator<NavMeshLink>_MoveNext__;
  puVar2 = Newtonsoft_Json_Schema_ValidationEventArgs_TypeInfo;
  puVar1 = DigitalOpus_MB_Core_MB3_MeshBakerGrouperPie_TypeInfo;
  if ((DAT_03782478 & 1) == 0) {
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<Expression>__ctor__);
    thunk_FUN_00d48444(Method_UnityEngine_UIElements_ListView_OnRemoveClicked__);
    thunk_FUN_00d48444(Method_System_Linq_Enumerable_Select<ContourVertex,_Color>__);
    thunk_FUN_00d48444(StringLiteral_2095);
    thunk_FUN_00d48444(PTR_DAT_033f6c90);
    thunk_FUN_00d48444(Method_System_Data_SqlTypes_SqlInt16_op_Subtraction__);
    thunk_FUN_00d48444(StringLiteral_11394);
    thunk_FUN_00d48444(StringLiteral_4308);
    thunk_FUN_00d48444(Method_UnityEngine_Object_FindObjectsOfType<TeleportationProvider>__);
    thunk_FUN_00d48444(StringLiteral_2776);
    thunk_FUN_00d48444(
                      Method_UnityEngine_InputSystem_InputActionRebindingExtensions_RebindingOperation_AddCandidate__
                      );
    thunk_FUN_00d48444(Method_UnityEngine_AndroidJavaObject_Call<bool>__);
    thunk_FUN_00d48444(Method_System_Nullable<OVRPlugin_Posef>__ctor__);
    thunk_FUN_00d48444(DigitalOpus_MB_Core_MB3_MeshBakerGrouperPie_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_1591);
    thunk_FUN_00d48444(Method_SpaceShipController_Ignition__);
    thunk_FUN_00d48444(Method_System_Xml_Schema_XsdBuilder_BuildNotation_Name__);
    thunk_FUN_00d48444(Newtonsoft_Json_Schema_ValidationEventArgs_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_6671);
    thunk_FUN_00d48444(StringLiteral_6437);
    thunk_FUN_00d48444(StringLiteral_6786);
    thunk_FUN_00d48444(StringLiteral_7304);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List_Enumerator<MaterialPropertyBlock>_MoveNext__
                      );
    thunk_FUN_00d48444(Method_System_String_Compare__);
    thunk_FUN_00d48444(System_Net_Sockets_Socket_AwaitableSocketAsyncEventArgs_<>c_TypeInfo);
    thunk_FUN_00d48444(UnityEngine_Rendering_Universal_Renderer2D_TypeInfo);
    thunk_FUN_00d48444(
                      Oculus_Interaction_Body_Input_ReadOnlyBodyJointPoses_<GetEnumerator>d__2_TypeInfo
                      );
    thunk_FUN_00d48444(StringLiteral_8019);
    thunk_FUN_00d48444(StringLiteral_2892);
    thunk_FUN_00d48444(
                      Method_UnityEngine_ProBuilder_Poly2Tri_FixedArray3<TriangulationPoint>_set_Item__
                      );
    thunk_FUN_00d48444(System_Collections_Generic_List<KerningPair>_TypeInfo);
    thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_104__);
    thunk_FUN_00d48444(
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<object>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<object>,_JsonTextReader_<ReadStringValueAsync>d__37>__
                      );
    thunk_FUN_00d48444(
                      Method_System_Runtime_CompilerServices_TaskAwaiter<VoiceServiceRequest>_get_IsCompleted__
                      );
    thunk_FUN_00d48444(StringLiteral_5106);
    thunk_FUN_00d48444(Method_System_Runtime_InteropServices_MemoryMarshal_GetReference<byte>__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List_Enumerator<NavMeshLink>_MoveNext__);
    thunk_FUN_00d48444(PTR_DAT_033f5bb8);
    thunk_FUN_00d48444(Method_System_Runtime_InteropServices_MemoryMarshal_AsBytes<float>__);
    DAT_03782478 = 1;
  }
  uVar11 = FUN_0267bd34(*(undefined8 *)puVar10,0);
  **(undefined4 **)(*(long *)puVar4 + 0xb8) = uVar11;
  uVar11 = FUN_0267bd34(*(undefined8 *)puVar5,0);
  *(undefined4 *)(*(long *)(*(long *)puVar4 + 0xb8) + 4) = uVar11;
  uVar11 = FUN_0267bd34(*(undefined8 *)puVar8,0);
  *(undefined4 *)(*(long *)(*(long *)puVar4 + 0xb8) + 8) = uVar11;
  uVar11 = FUN_0267bd34(*(undefined8 *)puVar7,0);
  *(undefined4 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0xc) = uVar11;
  uVar11 = FUN_0267bd34(*(undefined8 *)puVar3,0);
  *(undefined4 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x10) = uVar11;
  uVar11 = FUN_0267bd34(*(undefined8 *)puVar9,0);
  *(undefined4 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x14) = uVar11;
  uVar11 = FUN_0267bd34(*(undefined8 *)puVar2,0);
  *(undefined4 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x18) = uVar11;
  uVar11 = FUN_0267bd34(*(undefined8 *)puVar1,0);
  *(undefined4 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x1c) = uVar11;
  uVar11 = FUN_0267bd34(*(undefined8 *)puVar6,0);
  *(undefined4 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x20) = uVar11;
  uVar11 = FUN_0267bd34(*(undefined8 *)
                         Method_System_Collections_Generic_List_Enumerator<MaterialPropertyBlock>_MoveNext__
                        ,0);
  *(undefined4 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x24) = uVar11;
  uVar11 = FUN_0267bd34(*(undefined8 *)StringLiteral_2892,0);
  *(undefined4 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x28) = uVar11;
  uVar11 = FUN_0267bd34(*(undefined8 *)Method_System_Nullable<OVRPlugin_Posef>__ctor__,0);
  *(undefined4 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x2c) = uVar11;
  uVar11 = FUN_0267bd34(*(undefined8 *)StringLiteral_6437,0);
  *(undefined4 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x30) = uVar11;
  uVar11 = FUN_0267bd34(*(undefined8 *)StringLiteral_8019,0);
  *(undefined4 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x34) = uVar11;
  uVar11 = FUN_0267bd34(*(undefined8 *)StringLiteral_5106,0);
  *(undefined4 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x38) = uVar11;
  uVar11 = FUN_0267bd34(*(undefined8 *)UnityEngine_Rendering_Universal_Renderer2D_TypeInfo,0);
  *(undefined4 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x3c) = uVar11;
  uVar11 = FUN_0267bd34(*(undefined8 *)
                         System_Net_Sockets_Socket_AwaitableSocketAsyncEventArgs_<>c_TypeInfo,0);
  *(undefined4 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x40) = uVar11;
  uVar11 = FUN_0267bd34(*(undefined8 *)
                         Oculus_Interaction_Body_Input_ReadOnlyBodyJointPoses_<GetEnumerator>d__2_TypeInfo
                        ,0);
  *(undefined4 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x44) = uVar11;
  uVar11 = FUN_0267bd34(*(undefined8 *)System_Collections_Generic_List<KerningPair>_TypeInfo,0);
  *(undefined4 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x48) = uVar11;
  uVar11 = FUN_0267bd34(*(undefined8 *)StringLiteral_4308,0);
  *(undefined4 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x4c) = uVar11;
  uVar11 = FUN_0267bd34(*(undefined8 *)PTR_DAT_033f5bb8,0);
  *(undefined4 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x50) = uVar11;
  uVar11 = FUN_0267bd34(*(undefined8 *)Method_System_Xml_Schema_XsdBuilder_BuildNotation_Name__,0);
  *(undefined4 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x54) = uVar11;
  uVar11 = FUN_0267bd34(*(undefined8 *)StringLiteral_2095,0);
  *(undefined4 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x58) = uVar11;
  uVar11 = FUN_0267bd34(*(undefined8 *)Method_System_String_Compare__,0);
  *(undefined4 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x5c) = uVar11;
  uVar11 = FUN_0267bd34(*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__796_104__,0);
  *(undefined4 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x60) = uVar11;
  uVar11 = FUN_0267bd34(*(undefined8 *)
                         Method_System_Runtime_InteropServices_MemoryMarshal_GetReference<byte>__,0)
  ;
  *(undefined4 *)(*(long *)(*(long *)puVar4 + 0xb8) + 100) = uVar11;
  uVar11 = FUN_0267bd34(*(undefined8 *)
                         Method_System_Runtime_InteropServices_MemoryMarshal_AsBytes<float>__,0);
  *(undefined4 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x68) = uVar11;
  uVar11 = FUN_0267bd34(*(undefined8 *)Method_SpaceShipController_Ignition__,0);
  *(undefined4 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x6c) = uVar11;
  uVar11 = FUN_0267bd34(*(undefined8 *)
                         Method_UnityEngine_Object_FindObjectsOfType<TeleportationProvider>__,0);
  *(undefined4 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x70) = uVar11;
  uVar11 = FUN_0267bd34(*(undefined8 *)
                         Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<object>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<object>,_JsonTextReader_<ReadStringValueAsync>d__37>__
                        ,0);
  *(undefined4 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x74) = uVar11;
  uVar11 = FUN_0267bd34(*(undefined8 *)StringLiteral_6786,0);
  *(undefined4 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x78) = uVar11;
  uVar11 = FUN_0267bd34(*(undefined8 *)StringLiteral_2776,0);
  *(undefined4 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x7c) = uVar11;
  uVar11 = FUN_0267bd34(*(undefined8 *)PTR_DAT_033f6c90,0);
  *(undefined4 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x80) = uVar11;
  uVar11 = FUN_0267bd34(*(undefined8 *)StringLiteral_1591,0);
  *(undefined4 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x84) = uVar11;
  uVar11 = FUN_0267bd34(*(undefined8 *)
                         Method_UnityEngine_ProBuilder_Poly2Tri_FixedArray3<TriangulationPoint>_set_Item__
                        ,0);
  *(undefined4 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x88) = uVar11;
  uVar11 = FUN_0267bd34(*(undefined8 *)StringLiteral_7304,0);
  *(undefined4 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x8c) = uVar11;
  uVar11 = FUN_0267bd34(*(undefined8 *)StringLiteral_6671,0);
  *(undefined4 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x90) = uVar11;
  uVar11 = FUN_0267bd34(*(undefined8 *)Method_UnityEngine_UIElements_ListView_OnRemoveClicked__,0);
  *(undefined4 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x94) = uVar11;
  return;
}


