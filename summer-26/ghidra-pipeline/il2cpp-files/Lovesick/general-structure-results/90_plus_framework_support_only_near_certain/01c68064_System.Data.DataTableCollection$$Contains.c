/*
FUNCTION_NAME: System.Data.DataTableCollection$$Contains
ENTRY_POINT: 01c68064
PROGRAM: Lovesick-libil2cpp.so
SCORE: 247
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval;gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ray_interaction;ui_interaction;telemetry;frame_behavior;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_3;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_13;ray_or_cast_sink_hits_7;ui_or_gameplay_sink_hits_8;telemetry_or_network_hits_12;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_collection_sink;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction;functionality_gaze_interaction_hits_13
*/


void System_Data_DataTableCollection__Contains(long param_1)

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
  long lVar11;
  long *plVar12;
  long lVar13;
  undefined8 uVar14;
  long unaff_x19;
  undefined8 uVar15;
  undefined8 *unaff_x20;
  
  thunk_FUN_00d48444(*(undefined8 *)(param_1 + 0x968));
  thunk_FUN_00d48444(StringLiteral_11343);
                    /* try { // try from 01c68080 to 01d6808b has its CatchHandler @ 01c68380 */
  thunk_FUN_00d48444(PTR_DAT_033eef70);
  thunk_FUN_00d48444(System_Runtime_Serialization_Formatters_Binary_PrimitiveArray_TypeInfo);
  thunk_FUN_00d48444(UnityEngine_Rendering_Universal_UniversalRenderer_<>c_TypeInfo);
                    /* try { // try from 01c680a4 to 01d680b7 has its CatchHandler @ 01c6837c */
  thunk_FUN_00d48444(StringLiteral_11385);
  thunk_FUN_00d48444(Method_System_Collections_Generic_List_Enumerator<LabelScopeInfo>_get_Current__
                    );
  thunk_FUN_00d48444(System_Xml_CharEntityEncoderFallbackBuffer_TypeInfo);
  thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vzip2q_s64__);
  thunk_FUN_00d48444(Method_System_Collections_Generic_List<VolumeStack>_RemoveAt__);
  thunk_FUN_00d48444(StringLiteral_9106);
  thunk_FUN_00d48444(StringLiteral_4884);
  thunk_FUN_00d48444(
                    Method_Sirenix_Utilities_EmitUtilities_CreateInstancePropertySetter<__Il2CppFullySharedGenericType,___Il2CppFullySharedGenericType>__
                    );
  thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vmlaq_lane_s32__);
                    /* try { // try from 01c68110 to 01d68137 has its CatchHandler @ 01c68394 */
  thunk_FUN_00d48444(StringLiteral_9872);
  thunk_FUN_00d48444(
                    Method_UnityEngine_Experimental_Rendering_RenderGraphModule_RenderGraph_ExecuteCompiledPass__
                    );
  thunk_FUN_00d48444(
                    Method_System_Collections_Generic_List<ProbeReferenceVolume_Cell>_GetEnumerator__
                    );
  thunk_FUN_00d48444(DG_Tweening_Core_DOGetter<Color>_TypeInfo);
  thunk_FUN_00d48444(
                    Method_Oculus_Interaction_Input_OneEuroFilter_OneEuroFilterMulti<Vector2>__ctor__
                    );
  thunk_FUN_00d48444(
                    Method_UnityEngine_XR_ARSubsystems_TrackingSubsystem<XRPointCloud,_XRDepthSubsystem,_XRDepthSubsystemDescriptor,_XRDepthSubsystem_Provider>__ctor__
                    );
  thunk_FUN_00d48444(StringLiteral_7597);
  thunk_FUN_00d48444(Method_System_Collections_Generic_Dictionary<string,_string>_GetEnumerator__);
  thunk_FUN_00d48444(StringLiteral_3721);
  thunk_FUN_00d48444(Method_System_Collections_Generic_List<CharacterPoses_PoseList>__ctor__);
                    /* try { // try from 01c68180 to 01d681ab has its CatchHandler @ 01c68390 */
  thunk_FUN_00d48444(
                    Method_UnityEngine_InputSystem_InputActionRebindingExtensions_GetBindingIndexForControl__
                    );
  thunk_FUN_00d48444(System_RuntimeTypeHandle_TypeInfo);
  thunk_FUN_00d48444(Method_System_Collections_Generic_List<OVRAnchor_DeferredValue>_RemoveAt__);
  thunk_FUN_00d48444(Method_UnityEngine_Rendering_UI_DebugUIHandlerVector3_<SetupSettings>b__9_1__);
  *(undefined1 *)(unaff_x19 + 0xb9c) = 1;
  lVar11 = thunk_FUN_00d62348(*unaff_x20);
  puVar4 = Method_System_Collections_Generic_List<Collider>_Clear__;
  puVar2 = Method_System_Collections_Generic_List_Enumerator<Object>_Dispose__;
  if (lVar11 != 0) {
    FUN_012d24b0(lVar11,0,*(undefined8 *)
                           System_Collections_Generic_Dictionary<GUILayoutOptions_GUILayoutOptionsInstance,_GUILayoutOption[]>_TypeInfo
                 ,0);
    **(long **)(*(long *)puVar4 + 0xb8) = lVar11;
    lVar11 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
    puVar2 = StringLiteral_6411;
    if (lVar11 != 0) {
      FUN_012d24b0(lVar11,0,*(undefined8 *)
                             Newtonsoft_Json_Utilities_ConvertUtils_<>c__DisplayClass8_0_TypeInfo,0)
      ;
      *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 8) = lVar11;
      lVar11 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
      puVar2 = Method_UnityEngine_MonoBehaviour_StopCoroutine__;
      if (lVar11 != 0) {
        FUN_012d24b0(lVar11,0,*(undefined8 *)
                               Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<AffordanceStateData>_set_Value__
                     ,0);
        *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x10) = lVar11;
        lVar11 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
        puVar3 = PTR_DAT_033efea8;
        if (lVar11 != 0) {
          FUN_017b46ec(lVar11,0);
          *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x18) = lVar11;
          lVar11 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
          puVar1 = StringLiteral_12472;
          if (lVar11 != 0) {
            FUN_01298da0(lVar11,*(undefined8 *)StringLiteral_12472);
            *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x20) = lVar11;
            lVar11 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
            puVar3 = 
            Method_DigitalOpus_MB_Core_PriorityQueue<__Il2CppFullySharedGenericType,___Il2CppFullySharedGenericType>__ctor__
            ;
            if (lVar11 != 0) {
              FUN_01298da0(lVar11,*(undefined8 *)puVar1);
              *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x28) = lVar11;
              lVar11 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
              puVar1 = PTR_DAT_033ecf78;
              if (lVar11 != 0) {
                FUN_012dd38c(lVar11,*(undefined8 *)PTR_DAT_033ecf78);
                *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x30) = lVar11;
                lVar11 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
                puVar3 = System_Nullable<char>_TypeInfo;
                if (lVar11 != 0) {
                  FUN_012dd38c(lVar11,*(undefined8 *)puVar1);
                  *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x38) = lVar11;
                  lVar11 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
                  puVar5 = StringLiteral_5404;
                  puVar1 = 
                  Method_System_Runtime_CompilerServices_TaskAwaiter<ValueTuple<OVRSpatialAnchor,_OVRSpatialAnchor_OperationResult>>_GetResult__
                  ;
                  puVar3 = Method_TMPro_TMP_TextProcessingStack<float>__ctor__;
                  if (lVar11 != 0) {
                    FUN_01320e50(lVar11,*(undefined8 *)LoadUtility_EventType_TypeInfo);
                    *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x40) = lVar11;
                    uVar15 = *(undefined8 *)puVar1;
                    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                      thunk_FUN_00d32864();
                    }
                    uVar15 = FUN_01780344(uVar15,0);
                    *(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x48) = uVar15;
                    uVar15 = FUN_01780344(*(undefined8 *)puVar5,0);
                    *(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x50) = uVar15;
                    lVar11 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                    if (lVar11 != 0) {
                      FUN_017b46ec(lVar11,0);
                      *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x58) = lVar11;
                      lVar11 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                      puVar2 = Meta_XR_ImmersiveDebugger_Manager_IDebugManager_TypeInfo;
                      if (lVar11 != 0) {
                        FUN_017b46ec(lVar11,0);
                        *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x60) = lVar11;
                        lVar11 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                        puVar2 = System_ComponentModel_Design_IExtenderListService_var;
                        if (lVar11 != 0) {
                          FUN_012a2fdc(lVar11,*(undefined8 *)StringLiteral_831);
                          *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x68) = lVar11;
                          lVar11 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                          puVar3 = StringLiteral_9532;
                          puVar2 = Method_System_Collections_Generic_List<PropertyInfo>_get_Item__;
                          if (lVar11 != 0) {
                            FUN_012a2fdc(lVar11,*(undefined8 *)StringLiteral_3149);
                            *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x70) = lVar11;
                            uVar15 = FUN_00da4fb8(*(undefined8 *)puVar2,2);
                            *(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x78) = uVar15;
                            lVar11 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
                            puVar2 = StringLiteral_1612;
                            if (lVar11 != 0) {
                              FUN_013b0f04(lVar11,*(undefined8 *)UnityEngine_LODGroup_var);
                              *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x80) = lVar11;
                              lVar11 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                              puVar10 = StringLiteral_4884;
                              puVar9 = StringLiteral_238;
                              puVar8 = Method_Sirenix_Serialization_BinaryDataReader_ReadInt32__;
                              puVar7 = Method_Messenger<SetList>_RemoveListener__;
                              puVar6 = 
                              Method_Oculus_Interaction_Input_DataModifier<ControllerDataAsset>__ctor__
                              ;
                              puVar5 = Newtonsoft_Json_Schema_JsonSchemaException_TypeInfo;
                              puVar1 = 
                              UnityEngine_Rendering_Universal_Internal_ForwardLights_TypeInfo;
                              puVar3 = System_Runtime_Serialization_ObjectHolder___TypeInfo;
                              puVar4 = MB_TextureArrayResultMaterial___TypeInfo;
                              puVar2 = PTR_DAT_033f7630;
                              if (lVar11 != 0) {
                                FUN_012dd38c(lVar11,*(undefined8 *)
                                                                                                          
                                                  System_Collections_Generic_Dictionary<Material,_List<GameObject>>_TypeInfo
                                            );
                                FUN_012df150(lVar11,*(undefined8 *)puVar4,*(undefined8 *)puVar2);
                                FUN_012df150(lVar11,*(undefined8 *)puVar3,*(undefined8 *)puVar2);
                                FUN_012df150(lVar11,*(undefined8 *)puVar8,*(undefined8 *)puVar2);
                                FUN_012df150(lVar11,*(undefined8 *)puVar5,*(undefined8 *)puVar2);
                                FUN_012df150(lVar11,*(undefined8 *)puVar1,*(undefined8 *)puVar2);
                                FUN_012df150(lVar11,*(undefined8 *)puVar10,*(undefined8 *)puVar2);
                                FUN_012df150(lVar11,*(undefined8 *)
                                                                                                          
                                                  System_Runtime_Serialization_Formatters_Binary_PrimitiveArray_TypeInfo
                                             ,*(undefined8 *)puVar2);
                                FUN_012df150(lVar11,*(undefined8 *)StringLiteral_13926,
                                             *(undefined8 *)puVar2);
                                FUN_012df150(lVar11,*(undefined8 *)puVar7,*(undefined8 *)puVar2);
                                FUN_012df150(lVar11,*(undefined8 *)SpaceCombatEnemy_TypeInfo,
                                             *(undefined8 *)puVar2);
                                FUN_012df150(lVar11,*(undefined8 *)
                                                                                                          
                                                  Method_UnityEngine_Mesh_CheckIndicesArrayRange__,
                                             *(undefined8 *)puVar2);
                                FUN_012df150(lVar11,*(undefined8 *)
                                                                                                          
                                                  UnityEngine_XR_Interaction_Toolkit_Utilities_BurstMathUtility_ProjectOnPlane_00000934_BurstDirectCall_TypeInfo
                                             ,*(undefined8 *)puVar2);
                                FUN_012df150(lVar11,*(undefined8 *)StringLiteral_11668,
                                             *(undefined8 *)puVar2);
                                FUN_012df150(lVar11,*(undefined8 *)puVar6,*(undefined8 *)puVar2);
                                FUN_012df150(lVar11,*(undefined8 *)
                                                                                                          
                                                  Method_UnityEngine_GameObject_GetComponent<IBlastTarget>__
                                             ,*(undefined8 *)puVar2);
                                FUN_012df150(lVar11,*(undefined8 *)
                                                                                                          
                                                  Method_System_IO_UnmanagedMemoryStream_ReadAsync__
                                             ,*(undefined8 *)puVar2);
                                FUN_012df150(lVar11,*(undefined8 *)
                                                                                                          
                                                  Method_System_Collections_Generic_List<OVRAnchor_DeferredValue>_RemoveAt__
                                             ,*(undefined8 *)puVar2);
                                FUN_012df150(lVar11,*(undefined8 *)puVar9,*(undefined8 *)puVar2);
                                FUN_012df150(lVar11,*(undefined8 *)StringLiteral_6495,
                                             *(undefined8 *)puVar2);
                                FUN_012df150(lVar11,*(undefined8 *)
                                                                                                          
                                                  Method_Unity_Burst_Intrinsics_X86_Fma_fmadd_sd__,
                                             *(undefined8 *)puVar2);
                                FUN_012df150(lVar11,*(undefined8 *)StringLiteral_7597,
                                             *(undefined8 *)puVar2);
                                FUN_012df150(lVar11,*(undefined8 *)PTR_DAT_033f33c0,
                                             *(undefined8 *)puVar2);
                                FUN_012df150(lVar11,*(undefined8 *)
                                                                                                          
                                                  System_Collections_Generic_IEnumerable<PropertiesToIgnore_TypePropertiesToIgnore>_TypeInfo
                                             ,*(undefined8 *)puVar2);
                                FUN_012df150(lVar11,*(undefined8 *)
                                                                                                          
                                                  DigitalOpus_MB_Core_MB3_TextureCombinerNonTextureProperties_MaterialPropertyColor_TypeInfo
                                             ,*(undefined8 *)puVar2);
                                FUN_012df150(lVar11,*(undefined8 *)
                                                                                                          
                                                  Method_System_Collections_Generic_List_Enumerator<MaterialPropertyColor>_MoveNext__
                                             ,*(undefined8 *)puVar2);
                                FUN_012df150(lVar11,*(undefined8 *)System_RuntimeTypeHandle_TypeInfo
                                             ,*(undefined8 *)puVar2);
                                FUN_012df150(lVar11,*(undefined8 *)
                                                                                                          
                                                  Method_UnityEngine_Experimental_Rendering_RenderGraphModule_RenderGraph_ExecuteCompiledPass__
                                             ,*(undefined8 *)puVar2);
                                FUN_012df150(lVar11,*(undefined8 *)StringLiteral_3721,
                                             *(undefined8 *)puVar2);
                                FUN_012df150(lVar11,*(undefined8 *)
                                                                                                          
                                                  Method_Mono_Net_Security_MobileAuthenticatedStream_set_Position__
                                             ,*(undefined8 *)puVar2);
                                FUN_012df150(lVar11,*(undefined8 *)StringLiteral_9106,
                                             *(undefined8 *)puVar2);
                                FUN_012df150(lVar11,*(undefined8 *)
                                                                                                          
                                                  Method_Oculus_Interaction_Interactor<DistanceHandGrabInteractor,_DistanceHandGrabInteractable>_get_Identifier__
                                             ,*(undefined8 *)puVar2);
                                FUN_012df150(lVar11,*(undefined8 *)
                                                                                                          
                                                  System_Linq_Expressions_Interpreter_EqualInstruction_EqualBooleanLiftedToNull_TypeInfo
                                             ,*(undefined8 *)puVar2);
                                puVar4 = PTR_DAT_033f1418;
                                FUN_012df150(lVar11,*(undefined8 *)PTR_DAT_033f1418,
                                             *(undefined8 *)puVar2);
                                FUN_012df150(lVar11,*(undefined8 *)
                                                                                                          
                                                  Method_UnityEngine_InputSystem_Utilities_Observable_Where<InputControl>__
                                             ,*(undefined8 *)puVar2);
                                FUN_012df150(lVar11,*(undefined8 *)
                                                                                                          
                                                  Method_UnityEngine_InputSystem_InputActionRebindingExtensions_GetBindingIndexForControl__
                                             ,*(undefined8 *)puVar2);
                                FUN_012df150(lVar11,*(undefined8 *)
                                                                                                          
                                                  Method_Sirenix_Serialization_CustomSerializationPolicy__ctor__
                                             ,*(undefined8 *)puVar2);
                                FUN_012df150(lVar11,*(undefined8 *)
                                                                                                          
                                                  Method_System_Collections_Generic_Stack<ParameterExpression>_Peek__
                                             ,*(undefined8 *)puVar2);
                                FUN_012df150(lVar11,*(undefined8 *)
                                                                                                          
                                                  Method_System_Linq_Enumerable_FirstOrDefault<__Il2CppFullySharedGenericType>__
                                             ,*(undefined8 *)puVar2);
                                FUN_012df150(lVar11,*(undefined8 *)
                                                                                                          
                                                  System_Xml_CharEntityEncoderFallbackBuffer_TypeInfo
                                             ,*(undefined8 *)puVar2);
                                FUN_012df150(lVar11,*(undefined8 *)StringLiteral_11343,
                                             *(undefined8 *)puVar2);
                                FUN_012df150(lVar11,*(undefined8 *)
                                                                                                          
                                                  Method_Oculus_Platform_Models_DeserializableList<Pid>__ctor__
                                             ,*(undefined8 *)puVar2);
                                FUN_012df150(lVar11,*(undefined8 *)
                                                                                                          
                                                  Method_System_Collections_Generic_KeyValuePair<MRUKAnchor,_EffectMesh_EffectMeshObject>_get_Value__
                                             ,*(undefined8 *)puVar2);
                                FUN_012df150(lVar11,*(undefined8 *)
                                                     Method_System_ArraySegment<byte>_get_Offset__,
                                             *(undefined8 *)puVar2);
                                FUN_012df150(lVar11,*(undefined8 *)
                                                                                                          
                                                  Method_TMPro_TMP_TextProcessingStack<FontWeight>_SetDefault__
                                             ,*(undefined8 *)puVar2);
                                FUN_012df150(lVar11,*(undefined8 *)
                                                                                                          
                                                  Method_Meta_WitAi_Json_JsonConvert_SerializeObject<Manifest>__
                                             ,*(undefined8 *)puVar2);
                                FUN_012df150(lVar11,*(undefined8 *)
                                                                                                          
                                                  Method_System_Collections_Generic_List<VolumeStack>_RemoveAt__
                                             ,*(undefined8 *)puVar2);
                                FUN_012df150(lVar11,*(undefined8 *)
                                                                                                          
                                                  Method_Unity_Burst_Intrinsics_Arm_Neon_vminq_u16__
                                             ,*(undefined8 *)puVar2);
                                FUN_012df150(lVar11,*(undefined8 *)StringLiteral_10956,
                                             *(undefined8 *)puVar2);
                                FUN_012df150(lVar11,*(undefined8 *)
                                                     OVR_OpenVR_IVROverlay__ShowDashboard_TypeInfo,
                                             *(undefined8 *)puVar2);
                                FUN_012df150(lVar11,*(undefined8 *)
                                                                                                          
                                                  Method_System_Collections_Generic_Dictionary<Type,_int>_TryGetValue__
                                             ,*(undefined8 *)puVar2);
                                FUN_012df150(lVar11,*(undefined8 *)PTR_DAT_033eb308,
                                             *(undefined8 *)puVar2);
                                FUN_012df150(lVar11,*(undefined8 *)StringLiteral_14350,
                                             *(undefined8 *)puVar2);
                                FUN_012df150(lVar11,*(undefined8 *)
                                                                                                          
                                                  Oculus_Interaction_PoseDetection_TransformFeature_TypeInfo
                                             ,*(undefined8 *)puVar2);
                                FUN_012df150(lVar11,*(undefined8 *)
                                                                                                          
                                                  Sirenix_Serialization_Utilities_EmitUtilities_<>c__DisplayClass23_0_TypeInfo
                                             ,*(undefined8 *)puVar2);
                                FUN_012df150(lVar11,*(undefined8 *)UnityEngine_TouchPhase_TypeInfo,
                                             *(undefined8 *)puVar2);
                                FUN_012df150(lVar11,*(undefined8 *)
                                                                                                          
                                                  Method_Unity_Burst_Intrinsics_Arm_Neon_vsqrt_f64__
                                             ,*(undefined8 *)puVar2);
                                FUN_012df150(lVar11,*(undefined8 *)
                                                                                                          
                                                  Method_UnityEngine_InputSystem_InputSystem_RegisterInteraction<SectorInteraction>__
                                             ,*(undefined8 *)puVar2);
                                FUN_012df150(lVar11,*(undefined8 *)
                                                                                                          
                                                  System_Collections_Generic_List<Renderer>_TypeInfo
                                             ,*(undefined8 *)puVar2);
                                puVar3 = Sirenix_Serialization_Vector4Formatter_TypeInfo;
                                FUN_012df150(lVar11,*(undefined8 *)
                                                     Sirenix_Serialization_Vector4Formatter_TypeInfo
                                             ,*(undefined8 *)puVar2);
                                FUN_012df150(lVar11,*(undefined8 *)
                                                                                                          
                                                  Method_Unity_Collections_NativeSlice<MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_116>_SliceWithStride<Vector3>__
                                             ,*(undefined8 *)puVar2);
                                FUN_012df150(lVar11,*(undefined8 *)
                                                                                                          
                                                  Method_System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<BufferOffsetSize>_GetResult__
                                             ,*(undefined8 *)puVar2);
                                FUN_012df150(lVar11,*(undefined8 *)StringLiteral_2664,
                                             *(undefined8 *)puVar2);
                                FUN_012df150(lVar11,*(undefined8 *)StringLiteral_11385,
                                             *(undefined8 *)puVar2);
                                FUN_012df150(lVar11,*(undefined8 *)StringLiteral_4539,
                                             *(undefined8 *)puVar2);
                                FUN_012df150(lVar11,*(undefined8 *)
                                                     System_Buffers_ArrayPool<byte>_TypeInfo,
                                             *(undefined8 *)puVar2);
                                FUN_012df150(lVar11,*(undefined8 *)PTR_DAT_033ebb38,
                                             *(undefined8 *)puVar2);
                                FUN_012df150(lVar11,*(undefined8 *)
                                                                                                          
                                                  Method_System_Collections_Generic_Dictionary<string,_string>_GetEnumerator__
                                             ,*(undefined8 *)puVar2);
                                FUN_012df150(lVar11,*(undefined8 *)
                                                                                                          
                                                  Method_Unity_Burst_Intrinsics_Arm_Neon_vmlaq_lane_s32__
                                             ,*(undefined8 *)puVar2);
                                FUN_012df150(lVar11,*(undefined8 *)StringLiteral_9872,
                                             *(undefined8 *)puVar2);
                                FUN_012df150(lVar11,*(undefined8 *)
                                                                                                          
                                                  Method_Oculus_Interaction_PointerInteractable<DistanceGrabInteractor,_DistanceGrabInteractable>_add_WhenPointerEventRaised__
                                             ,*(undefined8 *)puVar2);
                                FUN_012df150(lVar11,*(undefined8 *)StringLiteral_10049,
                                             *(undefined8 *)puVar2);
                                FUN_012df150(lVar11,*(undefined8 *)
                                                                                                          
                                                  Method_System_Collections_Generic_Dictionary<int,_List<WeakReference>>__ctor__
                                             ,*(undefined8 *)puVar2);
                                FUN_012df150(lVar11,*(undefined8 *)
                                                                                                          
                                                  Method_System_Collections_Generic_List<ProbeReferenceVolume_Cell>_GetEnumerator__
                                             ,*(undefined8 *)puVar2);
                                FUN_012df150(lVar11,*(undefined8 *)puVar3,*(undefined8 *)puVar2);
                                FUN_012df150(lVar11,*(undefined8 *)
                                                                                                          
                                                  Newtonsoft_Json_Utilities_ReflectionObject_<>c__DisplayClass11_2_TypeInfo
                                             ,*(undefined8 *)puVar2);
                                FUN_012df150(lVar11,*(undefined8 *)
                                                                                                          
                                                  Method_System_Collections_Generic_List<JToken>_get_Item__
                                             ,*(undefined8 *)puVar2);
                                FUN_012df150(lVar11,*(undefined8 *)
                                                                                                          
                                                  Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass11_0_<DOShakeRotation>b__0__
                                             ,*(undefined8 *)puVar2);
                                FUN_012df150(lVar11,*(undefined8 *)puVar4,*(undefined8 *)puVar2);
                                FUN_012df150(lVar11,*(undefined8 *)
                                                                                                          
                                                  Method_System_Collections_Generic_Dictionary<int,_Vector2Int>_GetEnumerator__
                                             ,*(undefined8 *)puVar2);
                                FUN_012df150(lVar11,*(undefined8 *)
                                                                                                          
                                                  Method_System_Xml_Schema_SchemaCollectionCompiler_CompileSimpleType__
                                             ,*(undefined8 *)puVar2);
                                FUN_012df150(lVar11,*(undefined8 *)
                                                     System_Func<Quaternion,_int,_float>_TypeInfo,
                                             *(undefined8 *)puVar2);
                                *(long *)(*(long *)(*(long *)
                                                  Method_System_Collections_Generic_List<Collider>_Clear__
                                                  + 0xb8) + 0x88) = lVar11;
                                lVar11 = thunk_FUN_00d62348(*(undefined8 *)StringLiteral_10079);
                                puVar10 = StringLiteral_13204;
                                puVar9 = Method_Unity_Burst_Intrinsics_Arm_Neon_vzip2q_s64__;
                                puVar8 = Method_System_Net_Sockets_TcpListener_EndAcceptTcpClient__;
                                puVar7 = 
                                Method_UnityEngine_XR_ARSubsystems_TrackingSubsystem<XRPointCloud,_XRDepthSubsystem,_XRDepthSubsystemDescriptor,_XRDepthSubsystem_Provider>__ctor__
                                ;
                                puVar6 = 
                                Method_System_Collections_Generic_List<CharacterPoses_PoseList>__ctor__
                                ;
                                puVar5 = 
                                Method_System_Collections_Generic_List<Animation>_get_Count__;
                                puVar1 = System_Data_UnaryNode_TypeInfo;
                                puVar3 = OVR_OpenVR_EColorSpace_TypeInfo;
                                puVar4 = 
                                System_Collections_Generic_List<ProbeBrickIndex_ReservedBrick>_TypeInfo
                                ;
                                puVar2 = PTR_DAT_033f72d0;
                                if (lVar11 != 0) {
                                  FUN_01298da0(lVar11,*(undefined8 *)
                                                       Sirenix_Utilities_DeepReflection_var);
                                  FUN_0129a054(lVar11,*(undefined8 *)puVar7,
                                               *(undefined8 *)
                                                Method_UnityEngine_Experimental_Rendering_RenderGraphModule_RenderGraph_ExecuteCompiledPass__
                                               ,*(undefined8 *)puVar4);
                                  FUN_0129a054(lVar11,*(undefined8 *)puVar6,
                                               *(undefined8 *)StringLiteral_238,
                                               *(undefined8 *)puVar4);
                                  FUN_0129a054(lVar11,*(undefined8 *)puVar10,
                                               *(undefined8 *)
                                                Sirenix_Serialization_Utilities_EmitUtilities_<>c__DisplayClass23_0_TypeInfo
                                               ,*(undefined8 *)puVar4);
                                  FUN_0129a054(lVar11,*(undefined8 *)puVar2,
                                               *(undefined8 *)
                                                Method_Unity_Burst_Intrinsics_Arm_Neon_vsqrt_f64__,
                                               *(undefined8 *)puVar4);
                                  FUN_0129a054(lVar11,*(undefined8 *)puVar9,
                                               *(undefined8 *)
                                                Method_UnityEngine_InputSystem_Utilities_Observable_Where<InputControl>__
                                               ,*(undefined8 *)puVar4);
                                  FUN_0129a054(lVar11,*(undefined8 *)puVar8,
                                               *(undefined8 *)
                                                System_Xml_CharEntityEncoderFallbackBuffer_TypeInfo,
                                               *(undefined8 *)puVar4);
                                  FUN_0129a054(lVar11,*(undefined8 *)puVar3,
                                               *(undefined8 *)StringLiteral_4884,
                                               *(undefined8 *)puVar4);
                                  FUN_0129a054(lVar11,*(undefined8 *)puVar5,
                                               *(undefined8 *)
                                                Method_System_Collections_Generic_Dictionary<int,_List<WeakReference>>__ctor__
                                               ,*(undefined8 *)puVar4);
                                  FUN_0129a054(lVar11,*(undefined8 *)puVar1,
                                               *(undefined8 *)
                                                Method_Unity_Burst_Intrinsics_Arm_Neon_vmlaq_lane_s32__
                                               ,*(undefined8 *)puVar4);
                                  FUN_0129a054(lVar11,*(undefined8 *)
                                                                                                              
                                                  System_Collections_Generic_Dictionary<Guid,_Action<Guid>>_TypeInfo
                                               ,*(undefined8 *)StringLiteral_9872,
                                               *(undefined8 *)puVar4);
                                  FUN_0129a054(lVar11,*(undefined8 *)StringLiteral_1504,
                                               *(undefined8 *)
                                                Method_Oculus_Interaction_Input_DataModifier<ControllerDataAsset>__ctor__
                                               ,*(undefined8 *)puVar4);
                                  FUN_0129a054(lVar11,*(undefined8 *)
                                                                                                              
                                                  Method_BarCrowd_<ResetLineCoroutine>d__10_System_Collections_IEnumerator_Reset__
                                               ,*(undefined8 *)
                                                 Method_Unity_Collections_NativeSlice<MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_116>_SliceWithStride<Vector3>__
                                               ,*(undefined8 *)puVar4);
                                  FUN_0129a054(lVar11,*(undefined8 *)
                                                                                                              
                                                  Method_Oculus_Interaction_Input_OneEuroFilter_OneEuroFilterMulti<Vector2>__ctor__
                                               ,*(undefined8 *)
                                                 Method_Messenger<SetList>_RemoveListener__,
                                               *(undefined8 *)puVar4);
                                  FUN_0129a054(lVar11,*(undefined8 *)
                                                                                                              
                                                  Method_System_Collections_ObjectModel_Collection<JToken>_get_Item__
                                               ,*(undefined8 *)
                                                 Newtonsoft_Json_Schema_JsonSchemaException_TypeInfo
                                               ,*(undefined8 *)puVar4);
                                  FUN_0129a054(lVar11,*(undefined8 *)
                                                                                                              
                                                  Method_RCG_Lovesick_InteractiveObjects_RecordStoreLock_<CompleteCombinationInputCoroutine>d__46_System_Collections_IEnumerator_Reset__
                                               ,*(undefined8 *)StringLiteral_3657,
                                               *(undefined8 *)puVar4);
                                  FUN_0129a054(lVar11,*(undefined8 *)StringLiteral_10954,
                                               *(undefined8 *)
                                                System_Collections_ListDictionaryInternal_DictionaryNode_TypeInfo
                                               ,*(undefined8 *)puVar4);
                                  FUN_0129a054(lVar11,*(undefined8 *)StringLiteral_1934,
                                               *(undefined8 *)StringLiteral_1726,
                                               *(undefined8 *)puVar4);
                                  FUN_0129a054(lVar11,*(undefined8 *)
                                                       TMPro_TMP_ListPool<Canvas>_TypeInfo,
                                               *(undefined8 *)
                                                System_Net_WebSockets_WebSocketException_TypeInfo,
                                               *(undefined8 *)puVar4);
                                  FUN_0129a054(lVar11,*(undefined8 *)StringLiteral_908,
                                               *(undefined8 *)StringLiteral_7801,
                                               *(undefined8 *)puVar4);
                                  FUN_0129a054(lVar11,*(undefined8 *)StringLiteral_9828,
                                               *(undefined8 *)PTR_DAT_033eef70,*(undefined8 *)puVar4
                                              );
                                  FUN_0129a054(lVar11,*(undefined8 *)
                                                                                                              
                                                  Method_OVRSceneLoader_<onCheckSceneCoroutine>d__25_System_Collections_IEnumerator_Reset__
                                               ,*(undefined8 *)
                                                 Method_UnityEngine_Object_FindObjectsByType<EffectMesh>__
                                               ,*(undefined8 *)puVar4);
                                  FUN_0129a054(lVar11,*(undefined8 *)
                                                       System_Xml_Schema_XmlAtomicValue___var,
                                               *(undefined8 *)
                                                UnityEngine_Rendering_Universal_UniversalRenderer_<>c_TypeInfo
                                               ,*(undefined8 *)puVar4);
                                  FUN_0129a054(lVar11,*(undefined8 *)
                                                                                                              
                                                  Method_System_Collections_Generic_List_Enumerator<LabelScopeInfo>_get_Current__
                                               ,*(undefined8 *)
                                                 System_Func<ContourVertex,_Vector3>_TypeInfo,
                                               *(undefined8 *)puVar4);
                                  FUN_0129a054(lVar11,*(undefined8 *)PTR_DAT_033eebc8,
                                               *(undefined8 *)
                                                Method_System_Collections_Generic_Stack<InteriorNode>_get_Count__
                                               ,*(undefined8 *)puVar4);
                                  FUN_0129a054(lVar11,*(undefined8 *)
                                                                                                              
                                                  Method_Sirenix_Utilities_EmitUtilities_CreateInstancePropertySetter<__Il2CppFullySharedGenericType,___Il2CppFullySharedGenericType>__
                                               ,*(undefined8 *)
                                                 Method_System_Collections_Generic_List<JobHandle>_get_Item__
                                               ,*(undefined8 *)puVar4);
                                  FUN_0129a054(lVar11,*(undefined8 *)
                                                                                                              
                                                  Method_UnityEngine_Rendering_UI_DebugUIHandlerVector3_<SetupSettings>b__9_1__
                                               ,*(undefined8 *)
                                                 DG_Tweening_Core_DOGetter<Color>_TypeInfo,
                                               *(undefined8 *)puVar4);
                                  FUN_0129a054(lVar11,*(undefined8 *)PTR_DAT_033eee98,
                                               *(undefined8 *)StringLiteral_4118,
                                               *(undefined8 *)puVar4);
                                  FUN_0129a054(lVar11,*(undefined8 *)StringLiteral_13558,
                                               *(undefined8 *)
                                                Method_System_Uri_GetHostViaCustomSyntax__,
                                               *(undefined8 *)puVar4);
                                  puVar4 = Method_System_Collections_Generic_List<Collider>_Clear__;
                                  *(long *)(*(long *)(*(long *)
                                                  Method_System_Collections_Generic_List<Collider>_Clear__
                                                  + 0xb8) + 0x90) = lVar11;
                                  lVar11 = thunk_FUN_00d62348(*(undefined8 *)
                                                                                                                              
                                                  Method_UnityEngine_MonoBehaviour_StopCoroutine__);
                                  puVar2 = Oculus_Interaction_Input_HandSkeleton_TypeInfo;
                                  if (lVar11 != 0) {
                                    FUN_017b46ec(lVar11,0);
                                    *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x98) = lVar11;
                                    lVar11 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                                    puVar1 = Method_System_DateTime_AddYears__;
                                    puVar3 = 
                                    Method_DigitalOpus_MB_Core_PriorityQueue<__Il2CppFullySharedGenericType,___Il2CppFullySharedGenericType>__ctor__
                                    ;
                                    puVar2 = PTR_DAT_033ecf78;
                                    if (lVar11 != 0) {
                                      FUN_01298da0(lVar11,*(undefined8 *)
                                                                                                                      
                                                  Method_DG_Tweening_DOTweenModulePhysics_<>c__DisplayClass6_0_<DOJump>b__3__
                                                  );
                                      *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0xa0) = lVar11;
                                      plVar12 = (long *)FUN_01780344(*(undefined8 *)puVar1,0);
                                      puVar1 = 
                                      Method_System_Collections_Generic_List<Texture>_get_Item__;
                                      if (plVar12 != (long *)0x0) {
                                        uVar15 = (**(code **)(*plVar12 + 0x938))
                                                           (plVar12,*(undefined8 *)
                                                                     (*plVar12 + 0x940));
                                        *(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0xa8) =
                                             uVar15;
                                        lVar11 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
                                        puVar4 = Method_System_Data_DataSet_ReadXmlDiffgram__;
                                        if (lVar11 != 0) {
                                          FUN_01298da0(lVar11,*(undefined8 *)PTR_DAT_033f0e10);
                                          uVar15 = FUN_01780344(*(undefined8 *)puVar4,0);
                                          lVar13 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
                                          puVar8 = Method_OVRControllerTest_<>c_<Start>b__4_9__;
                                          puVar7 = 
                                          Method_DG_Tweening_Core_Easing_EaseManager_<>c_<ToEaseFunction>b__4_14__
                                          ;
                                          puVar6 = Method_SpaceShipShieldModule_DialUpdate__;
                                          puVar5 = 
                                          Method_Sirenix_Serialization_Serializer<byte>__ctor__;
                                          puVar1 = 
                                          Method_UnityEngine_InputSystem_InputControl<TouchState>_get_value__
                                          ;
                                          puVar4 = 
                                          System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_HumanBodyBones>_TypeInfo
                                          ;
                                          if (lVar13 != 0) {
                                            FUN_012dd38c(lVar13,*(undefined8 *)puVar2);
                                            uVar14 = FUN_01780344(*(undefined8 *)puVar4,0);
                                            FUN_012df150(lVar13,uVar14,*(undefined8 *)puVar1);
                                            uVar14 = FUN_01780344(*(undefined8 *)puVar8,0);
                                            FUN_012df150(lVar13,uVar14,*(undefined8 *)puVar1);
                                            uVar14 = FUN_01780344(*(undefined8 *)puVar5,0);
                                            FUN_012df150(lVar13,uVar14,*(undefined8 *)puVar1);
                                            FUN_0129a054(lVar11,uVar15,lVar13,*(undefined8 *)puVar6)
                                            ;
                                            uVar15 = FUN_01780344(*(undefined8 *)puVar7,0);
                                            lVar13 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
                                            puVar5 = StringLiteral_5228;
                                            if (lVar13 != 0) {
                                              FUN_012dd38c(lVar13,*(undefined8 *)puVar2);
                                              puVar6 = Method_System_Data_DataSet_ReadXmlDiffgram__;
                                              uVar14 = FUN_01780344(*(undefined8 *)
                                                                                                                                          
                                                  Method_System_Data_DataSet_ReadXmlDiffgram__,0);
                                              FUN_012df150(lVar13,uVar14,*(undefined8 *)puVar1);
                                              uVar14 = FUN_01780344(*(undefined8 *)puVar4,0);
                                              FUN_012df150(lVar13,uVar14,*(undefined8 *)puVar1);
                                              uVar14 = FUN_01780344(*(undefined8 *)
                                                                                                                                          
                                                  Method_OVRControllerTest_<>c_<Start>b__4_9__,0);
                                              FUN_012df150(lVar13,uVar14,*(undefined8 *)puVar1);
                                              uVar14 = FUN_01780344(*(undefined8 *)
                                                                                                                                          
                                                  Method_Sirenix_Serialization_Serializer<byte>__ctor__
                                                  ,0);
                                              FUN_012df150(lVar13,uVar14,*(undefined8 *)puVar1);
                                              FUN_0129a054(lVar11,uVar15,lVar13,
                                                           *(undefined8 *)
                                                                                                                        
                                                  Method_SpaceShipShieldModule_DialUpdate__);
                                              uVar15 = FUN_01780344(*(undefined8 *)puVar5,0);
                                              lVar13 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
                                              puVar5 = OVRPlugin_OVRP_1_50_0_TypeInfo;
                                              if (lVar13 != 0) {
                                                FUN_012dd38c(lVar13,*(undefined8 *)puVar2);
                                                puVar7 = 
                                                Method_DG_Tweening_Core_Easing_EaseManager_<>c_<ToEaseFunction>b__4_14__
                                                ;
                                                uVar14 = FUN_01780344(*(undefined8 *)
                                                                                                                                              
                                                  Method_DG_Tweening_Core_Easing_EaseManager_<>c_<ToEaseFunction>b__4_14__
                                                  ,0);
                                                FUN_012df150(lVar13,uVar14,*(undefined8 *)puVar1);
                                                uVar14 = FUN_01780344(*(undefined8 *)puVar6,0);
                                                FUN_012df150(lVar13,uVar14,*(undefined8 *)puVar1);
                                                uVar14 = FUN_01780344(*(undefined8 *)puVar4,0);
                                                FUN_012df150(lVar13,uVar14,*(undefined8 *)puVar1);
                                                puVar8 = 
                                                Method_OVRControllerTest_<>c_<Start>b__4_9__;
                                                uVar14 = FUN_01780344(*(undefined8 *)
                                                                                                                                              
                                                  Method_OVRControllerTest_<>c_<Start>b__4_9__,0);
                                                FUN_012df150(lVar13,uVar14,*(undefined8 *)puVar1);
                                                uVar14 = FUN_01780344(*(undefined8 *)
                                                                                                                                              
                                                  Method_Sirenix_Serialization_Serializer<byte>__ctor__
                                                  ,0);
                                                FUN_012df150(lVar13,uVar14,*(undefined8 *)puVar1);
                                                FUN_0129a054(lVar11,uVar15,lVar13,
                                                             *(undefined8 *)
                                                                                                                            
                                                  Method_SpaceShipShieldModule_DialUpdate__);
                                                uVar15 = FUN_01780344(*(undefined8 *)puVar5,0);
                                                lVar13 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
                                                puVar5 = 
                                                Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass41_0_<DORotateQuaternion>b__1__
                                                ;
                                                if (lVar13 != 0) {
                                                  FUN_012dd38c(lVar13,*(undefined8 *)puVar2);
                                                  uVar14 = FUN_01780344(*(undefined8 *)
                                                                         StringLiteral_5228,0);
                                                  FUN_012df150(lVar13,uVar14,*(undefined8 *)puVar1);
                                                  uVar14 = FUN_01780344(*(undefined8 *)puVar7,0);
                                                  FUN_012df150(lVar13,uVar14,*(undefined8 *)puVar1);
                                                  uVar14 = FUN_01780344(*(undefined8 *)puVar6,0);
                                                  FUN_012df150(lVar13,uVar14,*(undefined8 *)puVar1);
                                                  uVar14 = FUN_01780344(*(undefined8 *)puVar4,0);
                                                  FUN_012df150(lVar13,uVar14,*(undefined8 *)puVar1);
                                                  uVar14 = FUN_01780344(*(undefined8 *)puVar8,0);
                                                  FUN_012df150(lVar13,uVar14,*(undefined8 *)puVar1);
                                                  uVar14 = FUN_01780344(*(undefined8 *)
                                                                                                                                                  
                                                  Method_Sirenix_Serialization_Serializer<byte>__ctor__
                                                  ,0);
                                                  FUN_012df150(lVar13,uVar14,*(undefined8 *)puVar1);
                                                  FUN_0129a054(lVar11,uVar15,lVar13,
                                                               *(undefined8 *)
                                                                                                                                
                                                  Method_SpaceShipShieldModule_DialUpdate__);
                                                  uVar15 = FUN_01780344(*(undefined8 *)puVar5,0);
                                                  lVar13 = thunk_FUN_00d62348(*(undefined8 *)puVar3)
                                                  ;
                                                  puVar5 = StringLiteral_6673;
                                                  if (lVar13 != 0) {
                                                    FUN_012dd38c(lVar13,*(undefined8 *)puVar2);
                                                    uVar14 = FUN_01780344(*(undefined8 *)puVar4,0);
                                                    FUN_012df150(lVar13,uVar14,*(undefined8 *)puVar1
                                                                );
                                                    uVar14 = FUN_01780344(*(undefined8 *)puVar8,0);
                                                    FUN_012df150(lVar13,uVar14,*(undefined8 *)puVar1
                                                                );
                                                    uVar14 = FUN_01780344(*(undefined8 *)
                                                                                                                                                      
                                                  Method_Sirenix_Serialization_Serializer<byte>__ctor__
                                                  ,0);
                                                  FUN_012df150(lVar13,uVar14,*(undefined8 *)puVar1);
                                                  FUN_0129a054(lVar11,uVar15,lVar13,
                                                               *(undefined8 *)
                                                                                                                                
                                                  Method_SpaceShipShieldModule_DialUpdate__);
                                                  uVar15 = FUN_01780344(*(undefined8 *)puVar5,0);
                                                  lVar13 = thunk_FUN_00d62348(*(undefined8 *)puVar3)
                                                  ;
                                                  puVar3 = 
                                                  Method_Unity_Burst_Intrinsics_Arm_Neon_vmovl_u8__;
                                                  if (lVar13 != 0) {
                                                    FUN_012dd38c(lVar13,*(undefined8 *)puVar2);
                                                    puVar5 = 
                                                  Method_System_Data_DataSet_ReadXmlDiffgram__;
                                                  uVar14 = FUN_01780344(*(undefined8 *)
                                                                                                                                                  
                                                  Method_System_Data_DataSet_ReadXmlDiffgram__,0);
                                                  FUN_012df150(lVar13,uVar14,*(undefined8 *)puVar1);
                                                  uVar14 = FUN_01780344(*(undefined8 *)
                                                                                                                                                  
                                                  Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass41_0_<DORotateQuaternion>b__1__
                                                  ,0);
                                                  FUN_012df150(lVar13,uVar14,*(undefined8 *)puVar1);
                                                  uVar14 = FUN_01780344(*(undefined8 *)puVar4,0);
                                                  FUN_012df150(lVar13,uVar14,*(undefined8 *)puVar1);
                                                  uVar14 = FUN_01780344(*(undefined8 *)puVar8,0);
                                                  FUN_012df150(lVar13,uVar14,*(undefined8 *)puVar1);
                                                  uVar14 = FUN_01780344(*(undefined8 *)
                                                                                                                                                  
                                                  Method_Sirenix_Serialization_Serializer<byte>__ctor__
                                                  ,0);
                                                  FUN_012df150(lVar13,uVar14,*(undefined8 *)puVar1);
                                                  FUN_0129a054(lVar11,uVar15,lVar13,
                                                               *(undefined8 *)
                                                                                                                                
                                                  Method_SpaceShipShieldModule_DialUpdate__);
                                                  uVar15 = FUN_01780344(*(undefined8 *)puVar3,0);
                                                  lVar13 = thunk_FUN_00d62348(*(undefined8 *)
                                                                                                                                                              
                                                  Method_DigitalOpus_MB_Core_PriorityQueue<__Il2CppFullySharedGenericType,___Il2CppFullySharedGenericType>__ctor__
                                                  );
                                                  puVar4 = 
                                                  Method_Meta_XR_MRUtilityKit_AnchorPrefabSpawnerUtilities_ScalePrefab__
                                                  ;
                                                  if (lVar13 != 0) {
                                                    FUN_012dd38c(lVar13,*(undefined8 *)puVar2);
                                                    puVar6 = 
                                                  Method_DG_Tweening_Core_Easing_EaseManager_<>c_<ToEaseFunction>b__4_14__
                                                  ;
                                                  uVar14 = FUN_01780344(*(undefined8 *)
                                                                                                                                                  
                                                  Method_DG_Tweening_Core_Easing_EaseManager_<>c_<ToEaseFunction>b__4_14__
                                                  ,0);
                                                  FUN_012df150(lVar13,uVar14,*(undefined8 *)puVar1);
                                                  puVar7 = StringLiteral_6673;
                                                  uVar14 = FUN_01780344(*(undefined8 *)
                                                                         StringLiteral_6673,0);
                                                  FUN_012df150(lVar13,uVar14,*(undefined8 *)puVar1);
                                                  uVar14 = FUN_01780344(*(undefined8 *)puVar5,0);
                                                  FUN_012df150(lVar13,uVar14,*(undefined8 *)puVar1);
                                                  uVar14 = FUN_01780344(*(undefined8 *)
                                                                                                                                                  
                                                  Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass41_0_<DORotateQuaternion>b__1__
                                                  ,0);
                                                  FUN_012df150(lVar13,uVar14,*(undefined8 *)puVar1);
                                                  uVar14 = FUN_01780344(*(undefined8 *)
                                                                                                                                                  
                                                  System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_HumanBodyBones>_TypeInfo
                                                  ,0);
                                                  FUN_012df150(lVar13,uVar14,*(undefined8 *)puVar1);
                                                  uVar14 = FUN_01780344(*(undefined8 *)
                                                                                                                                                  
                                                  Method_OVRControllerTest_<>c_<Start>b__4_9__,0);
                                                  FUN_012df150(lVar13,uVar14,*(undefined8 *)puVar1);
                                                  uVar14 = FUN_01780344(*(undefined8 *)
                                                                                                                                                  
                                                  Method_Sirenix_Serialization_Serializer<byte>__ctor__
                                                  ,0);
                                                  FUN_012df150(lVar13,uVar14,*(undefined8 *)puVar1);
                                                  FUN_0129a054(lVar11,uVar15,lVar13,
                                                               *(undefined8 *)
                                                                                                                                
                                                  Method_SpaceShipShieldModule_DialUpdate__);
                                                  uVar15 = FUN_01780344(*(undefined8 *)puVar4,0);
                                                  lVar13 = thunk_FUN_00d62348(*(undefined8 *)
                                                                                                                                                              
                                                  Method_DigitalOpus_MB_Core_PriorityQueue<__Il2CppFullySharedGenericType,___Il2CppFullySharedGenericType>__ctor__
                                                  );
                                                  if (lVar13 != 0) {
                                                    FUN_012dd38c(lVar13,*(undefined8 *)puVar2);
                                                    uVar14 = FUN_01780344(*(undefined8 *)
                                                                           StringLiteral_5228,0);
                                                    FUN_012df150(lVar13,uVar14,*(undefined8 *)puVar1
                                                                );
                                                    uVar14 = FUN_01780344(*(undefined8 *)puVar3,0);
                                                    FUN_012df150(lVar13,uVar14,*(undefined8 *)puVar1
                                                                );
                                                    uVar14 = FUN_01780344(*(undefined8 *)puVar6,0);
                                                    FUN_012df150(lVar13,uVar14,*(undefined8 *)puVar1
                                                                );
                                                    uVar14 = FUN_01780344(*(undefined8 *)puVar7,0);
                                                    FUN_012df150(lVar13,uVar14,*(undefined8 *)puVar1
                                                                );
                                                    uVar14 = FUN_01780344(*(undefined8 *)puVar5,0);
                                                    FUN_012df150(lVar13,uVar14,*(undefined8 *)puVar1
                                                                );
                                                    puVar9 = 
                                                  Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass41_0_<DORotateQuaternion>b__1__
                                                  ;
                                                  uVar14 = FUN_01780344(*(undefined8 *)
                                                                                                                                                  
                                                  Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass41_0_<DORotateQuaternion>b__1__
                                                  ,0);
                                                  FUN_012df150(lVar13,uVar14,*(undefined8 *)puVar1);
                                                  puVar2 = 
                                                  System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_HumanBodyBones>_TypeInfo
                                                  ;
                                                  uVar14 = FUN_01780344(*(undefined8 *)
                                                                                                                                                  
                                                  System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_HumanBodyBones>_TypeInfo
                                                  ,0);
                                                  FUN_012df150(lVar13,uVar14,*(undefined8 *)puVar1);
                                                  uVar14 = FUN_01780344(*(undefined8 *)
                                                                                                                                                  
                                                  Method_OVRControllerTest_<>c_<Start>b__4_9__,0);
                                                  FUN_012df150(lVar13,uVar14,*(undefined8 *)puVar1);
                                                  uVar14 = FUN_01780344(*(undefined8 *)
                                                                                                                                                  
                                                  Method_Sirenix_Serialization_Serializer<byte>__ctor__
                                                  ,0);
                                                  FUN_012df150(lVar13,uVar14,*(undefined8 *)puVar1);
                                                  FUN_0129a054(lVar11,uVar15,lVar13,
                                                               *(undefined8 *)
                                                                                                                                
                                                  Method_SpaceShipShieldModule_DialUpdate__);
                                                  uVar15 = FUN_01780344(*(undefined8 *)
                                                                                                                                                  
                                                  Method_System_Linq_Enumerable_ToList<EdgeLookup>__
                                                  ,0);
                                                  puVar4 = 
                                                  Method_DigitalOpus_MB_Core_PriorityQueue<__Il2CppFullySharedGenericType,___Il2CppFullySharedGenericType>__ctor__
                                                  ;
                                                  lVar13 = thunk_FUN_00d62348(*(undefined8 *)
                                                                                                                                                              
                                                  Method_DigitalOpus_MB_Core_PriorityQueue<__Il2CppFullySharedGenericType,___Il2CppFullySharedGenericType>__ctor__
                                                  );
                                                  puVar8 = 
                                                  Method_PlacePointEventDebugger_<>c_<OnEnable>b__1_2__
                                                  ;
                                                  if (lVar13 != 0) {
                                                    FUN_012dd38c(lVar13,*(undefined8 *)
                                                                         PTR_DAT_033ecf78);
                                                    uVar14 = FUN_01780344(*(undefined8 *)puVar3,0);
                                                    FUN_012df150(lVar13,uVar14,*(undefined8 *)puVar1
                                                                );
                                                    uVar14 = FUN_01780344(*(undefined8 *)puVar6,0);
                                                    FUN_012df150(lVar13,uVar14,*(undefined8 *)puVar1
                                                                );
                                                    uVar14 = FUN_01780344(*(undefined8 *)puVar7,0);
                                                    FUN_012df150(lVar13,uVar14,*(undefined8 *)puVar1
                                                                );
                                                    uVar14 = FUN_01780344(*(undefined8 *)puVar5,0);
                                                    FUN_012df150(lVar13,uVar14,*(undefined8 *)puVar1
                                                                );
                                                    uVar14 = FUN_01780344(*(undefined8 *)puVar9,0);
                                                    FUN_012df150(lVar13,uVar14,*(undefined8 *)puVar1
                                                                );
                                                    uVar14 = FUN_01780344(*(undefined8 *)puVar2,0);
                                                    FUN_012df150(lVar13,uVar14,*(undefined8 *)puVar1
                                                                );
                                                    puVar5 = 
                                                  Method_OVRControllerTest_<>c_<Start>b__4_9__;
                                                  uVar14 = FUN_01780344(*(undefined8 *)
                                                                                                                                                  
                                                  Method_OVRControllerTest_<>c_<Start>b__4_9__,0);
                                                  FUN_012df150(lVar13,uVar14,*(undefined8 *)puVar1);
                                                  uVar14 = FUN_01780344(*(undefined8 *)
                                                                                                                                                  
                                                  Method_Sirenix_Serialization_Serializer<byte>__ctor__
                                                  ,0);
                                                  FUN_012df150(lVar13,uVar14,*(undefined8 *)puVar1);
                                                  FUN_0129a054(lVar11,uVar15,lVar13,
                                                               *(undefined8 *)
                                                                                                                                
                                                  Method_SpaceShipShieldModule_DialUpdate__);
                                                  uVar15 = FUN_01780344(*(undefined8 *)puVar8,0);
                                                  lVar13 = thunk_FUN_00d62348(*(undefined8 *)puVar4)
                                                  ;
                                                  puVar3 = PTR_DAT_033ecf78;
                                                  if (lVar13 != 0) {
                                                    FUN_012dd38c(lVar13,*(undefined8 *)
                                                                         PTR_DAT_033ecf78);
                                                    FUN_0129a054(lVar11,uVar15,lVar13,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  Method_SpaceShipShieldModule_DialUpdate__);
                                                  uVar15 = FUN_01780344(*(undefined8 *)
                                                                                                                                                  
                                                  Method_Sirenix_Serialization_Serializer<byte>__ctor__
                                                  ,0);
                                                  lVar13 = thunk_FUN_00d62348(*(undefined8 *)puVar4)
                                                  ;
                                                  if (lVar13 != 0) {
                                                    FUN_012dd38c(lVar13,*(undefined8 *)puVar3);
                                                    FUN_0129a054(lVar11,uVar15,lVar13,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  Method_SpaceShipShieldModule_DialUpdate__);
                                                  uVar15 = FUN_01780344(*(undefined8 *)puVar2,0);
                                                  lVar13 = thunk_FUN_00d62348(*(undefined8 *)puVar4)
                                                  ;
                                                  if (lVar13 != 0) {
                                                    FUN_012dd38c(lVar13,*(undefined8 *)puVar3);
                                                    uVar14 = FUN_01780344(*(undefined8 *)puVar5,0);
                                                    FUN_012df150(lVar13,uVar14,*(undefined8 *)puVar1
                                                                );
                                                    FUN_0129a054(lVar11,uVar15,lVar13,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  Method_SpaceShipShieldModule_DialUpdate__);
                                                  uVar15 = FUN_01780344(*(undefined8 *)puVar5,0);
                                                  lVar13 = thunk_FUN_00d62348(*(undefined8 *)puVar4)
                                                  ;
                                                  puVar2 = 
                                                  Method_System_Nullable<float>_GetValueOrDefault__;
                                                  if (lVar13 != 0) {
                                                    FUN_012dd38c(lVar13,*(undefined8 *)puVar3);
                                                    FUN_0129a054(lVar11,uVar15,lVar13,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  Method_SpaceShipShieldModule_DialUpdate__);
                                                  uVar15 = FUN_01780344(*(undefined8 *)puVar2,0);
                                                  lVar13 = thunk_FUN_00d62348(*(undefined8 *)puVar4)
                                                  ;
                                                  puVar6 = StringLiteral_10024;
                                                  if (lVar13 != 0) {
                                                    FUN_012dd38c(lVar13,*(undefined8 *)puVar3);
                                                    FUN_0129a054(lVar11,uVar15,lVar13,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  Method_SpaceShipShieldModule_DialUpdate__);
                                                  uVar15 = FUN_01780344(*(undefined8 *)puVar6,0);
                                                  lVar13 = thunk_FUN_00d62348(*(undefined8 *)puVar4)
                                                  ;
                                                  if (lVar13 != 0) {
                                                    FUN_012dd38c(lVar13,*(undefined8 *)puVar3);
                                                    FUN_0129a054(lVar11,uVar15,lVar13,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  Method_SpaceShipShieldModule_DialUpdate__);
                                                  puVar7 = 
                                                  Method_System_Collections_Generic_List<Collider>_Clear__
                                                  ;
                                                  uVar15 = *(undefined8 *)
                                                            (*(long *)(*(long *)
                                                  Method_System_Collections_Generic_List<Collider>_Clear__
                                                  + 0xb8) + 0xa8);
                                                  lVar13 = thunk_FUN_00d62348(*(undefined8 *)puVar4)
                                                  ;
                                                  if (lVar13 != 0) {
                                                    FUN_012dd38c(lVar13,*(undefined8 *)puVar3);
                                                    FUN_0129a054(lVar11,uVar15,lVar13,
                                                                 *(undefined8 *)
                                                                                                                                    
                                                  Method_SpaceShipShieldModule_DialUpdate__);
                                                  *(long *)(*(long *)(*(long *)puVar7 + 0xb8) + 0xb0
                                                           ) = lVar11;
                                                  lVar11 = thunk_FUN_00d62348(*(undefined8 *)puVar4)
                                                  ;
                                                  if (lVar11 != 0) {
                                                    FUN_012dd38c(lVar11,*(undefined8 *)puVar3);
                                                    uVar15 = FUN_01780344(*(undefined8 *)
                                                                                                                                                      
                                                  Method_System_Data_DataSet_ReadXmlDiffgram__,0);
                                                  FUN_012df150(lVar11,uVar15,*(undefined8 *)puVar1);
                                                  uVar15 = FUN_01780344(*(undefined8 *)
                                                                                                                                                  
                                                  Method_DG_Tweening_Core_Easing_EaseManager_<>c_<ToEaseFunction>b__4_14__
                                                  ,0);
                                                  FUN_012df150(lVar11,uVar15,*(undefined8 *)puVar1);
                                                  uVar15 = FUN_01780344(*(undefined8 *)
                                                                         StringLiteral_5228,0);
                                                  FUN_012df150(lVar11,uVar15,*(undefined8 *)puVar1);
                                                  uVar15 = FUN_01780344(*(undefined8 *)
                                                                                                                                                  
                                                  OVRPlugin_OVRP_1_50_0_TypeInfo,0);
                                                  FUN_012df150(lVar11,uVar15,*(undefined8 *)puVar1);
                                                  uVar15 = FUN_01780344(*(undefined8 *)
                                                                                                                                                  
                                                  Method_DG_Tweening_ShortcutExtensions_<>c__DisplayClass41_0_<DORotateQuaternion>b__1__
                                                  ,0);
                                                  FUN_012df150(lVar11,uVar15,*(undefined8 *)puVar1);
                                                  uVar15 = FUN_01780344(*(undefined8 *)
                                                                         StringLiteral_6673,0);
                                                  FUN_012df150(lVar11,uVar15,*(undefined8 *)puVar1);
                                                  uVar15 = FUN_01780344(*(undefined8 *)
                                                                                                                                                  
                                                  Method_Unity_Burst_Intrinsics_Arm_Neon_vmovl_u8__,
                                                  0);
                                                  FUN_012df150(lVar11,uVar15,*(undefined8 *)puVar1);
                                                  uVar15 = FUN_01780344(*(undefined8 *)
                                                                                                                                                  
                                                  Method_Meta_XR_MRUtilityKit_AnchorPrefabSpawnerUtilities_ScalePrefab__
                                                  ,0);
                                                  FUN_012df150(lVar11,uVar15,*(undefined8 *)puVar1);
                                                  uVar15 = FUN_01780344(*(undefined8 *)
                                                                                                                                                  
                                                  Method_System_Linq_Enumerable_ToList<EdgeLookup>__
                                                  ,0);
                                                  FUN_012df150(lVar11,uVar15,*(undefined8 *)puVar1);
                                                  uVar15 = FUN_01780344(*(undefined8 *)
                                                                                                                                                  
                                                  Method_Sirenix_Serialization_Serializer<byte>__ctor__
                                                  ,0);
                                                  FUN_012df150(lVar11,uVar15,*(undefined8 *)puVar1);
                                                  uVar15 = FUN_01780344(*(undefined8 *)
                                                                                                                                                  
                                                  System_Collections_Generic_Dictionary<OVRSkeleton_BoneId,_HumanBodyBones>_TypeInfo
                                                  ,0);
                                                  FUN_012df150(lVar11,uVar15,*(undefined8 *)puVar1);
                                                  uVar15 = FUN_01780344(*(undefined8 *)puVar5,0);
                                                  FUN_012df150(lVar11,uVar15,*(undefined8 *)puVar1);
                                                  uVar15 = FUN_01780344(*(undefined8 *)puVar2,0);
                                                  FUN_012df150(lVar11,uVar15,*(undefined8 *)puVar1);
                                                  uVar15 = FUN_01780344(*(undefined8 *)puVar6,0);
                                                  FUN_012df150(lVar11,uVar15,*(undefined8 *)puVar1);
                                                  *(long *)(*(long *)(*(long *)puVar7 + 0xb8) + 0xb8
                                                           ) = lVar11;
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
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


