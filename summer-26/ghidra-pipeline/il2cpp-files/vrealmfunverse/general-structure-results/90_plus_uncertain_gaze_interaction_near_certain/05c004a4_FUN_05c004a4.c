/*
FUNCTION_NAME: FUN_05c004a4
ENTRY_POINT: 05c004a4
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 217
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;gaze_interaction;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ray_interaction;telemetry;structure_combo
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_8;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_10;ray_or_cast_sink_hits_2;telemetry_or_network_hits_21;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_retrieval_or_extraction;functionality_gaze_interaction_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void FUN_05c004a4(undefined8 param_1)

{
  uint uVar1;
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
  long lVar12;
  long lVar13;
  long *plVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  
  puVar2 = 
  Method_Newtonsoft_Json_Linq_JObject_System_Collections_Generic_IDictionary<System_String,Newtonsoft_Json_Linq_JToken>_get_Values__
  ;
  if ((DAT_066d55ee & 1) == 0) {
    FUN_02b3c81c(Method_Newtonsoft_Json_Linq_JObject_ValidateToken__);
    FUN_02b3c81c(Method_Newtonsoft_Json_Linq_JProperty_ClearItems__);
    FUN_02b3c81c(
                Method_Newtonsoft_Json_Linq_JObject_System_Collections_Generic_IDictionary<System_String,Newtonsoft_Json_Linq_JToken>_get_Values__
                );
    FUN_02b3c81c(Method_Newtonsoft_Json_Linq_JProperty_GetItem__);
    FUN_02b3c81c(Method_Newtonsoft_Json_Linq_JProperty_InsertItem__);
    FUN_02b3c81c(Method_Newtonsoft_Json_Linq_JProperty_Load__);
    FUN_02b3c81c(Method_Newtonsoft_Json_Linq_JProperty_RemoveItem__);
    FUN_02b3c81c(PTR_DAT_063173b8);
    FUN_02b3c81c(Method_Newtonsoft_Json_Linq_JProperty_RemoveItemAt__);
    FUN_02b3c81c(Method_Newtonsoft_Json_Linq_JProperty_SetItem__);
    FUN_02b3c81c(Method_Newtonsoft_Json_Linq_JPropertyKeyedCollection_Contains__);
    FUN_02b3c81c(PTR_DAT_063145b8);
    FUN_02b3c81c(Method_OVRSimpleJSON_JSONLazyCreator_Set<JSONArray>__);
    FUN_02b3c81c(Method_OVRSimpleJSON_JSONLazyCreator_Set<JSONBool>__);
    FUN_02b3c81c(Method_OVRSimpleJSON_JSONLazyCreator_Set<JSONNumber>__);
    FUN_02b3c81c(PTR_DAT_063145b0);
    FUN_02b3c81c(Method_Newtonsoft_Json_JsonConvert_DeserializeObject<Dictionary<string,_string>>__)
    ;
    FUN_02b3c81c(
                Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_CreateNewDictionary__
                );
    FUN_02b3c81c(Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_CreateNewList__);
    FUN_02b3c81c(Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_CreateNewObject__
                );
    FUN_02b3c81c(PTR_DAT_06332138);
    FUN_02b3c81c(
                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<float>__
                );
    FUN_02b3c81c(
                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<SphericalHarmonicsL2>__
                );
    FUN_02b3c81c(Method_Newtonsoft_Json_JsonReader_set_DateTimeZoneHandling__);
    FUN_02b3c81c(Method_Newtonsoft_Json_JsonTextReader_FinishReadQuotedNumber__);
    FUN_02b3c81c(Method_Newtonsoft_Json_JsonTextReader_FinishReadQuotedStringValue__);
    FUN_02b3c81c(Method_Newtonsoft_Json_JsonReader_set_FloatParseHandling__);
    FUN_02b3c81c(
                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<uint>__
                );
    FUN_02b3c81c(
                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<ulong>__
                );
    FUN_02b3c81c(Method_Newtonsoft_Json_JsonTextReader_MatchValue__);
    FUN_02b3c81c(
                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<Vector2>__
                );
    FUN_02b3c81c(Method_Newtonsoft_Json_JsonTextReader_ParseComment__);
    FUN_02b3c81c(
                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<Vector3>__
                );
    FUN_02b3c81c(
                Method_System_Linq_Enumerable_Select<KeyValuePair<Guid,_PxrSpatialMeshInfo>,_Guid>__
                );
    FUN_02b3c81c(Method_LitJson_JsonData__ctor__);
    FUN_02b3c81c(Method_Newtonsoft_Json_JsonReader_set_MaxDepth__);
    FUN_02b3c81c(
                Method_Oculus_Interaction_Interactable<PokeInteractor,_PokeInteractable>_get_Interactors__
                );
    FUN_02b3c81c(
                Method_Oculus_Interaction_Interactable<PokeInteractor,_PokeInteractable>_get_Registry__
                );
    FUN_02b3c81c(
                Method_Oculus_Interaction_Interactable<HandGrabInteractor,_HandGrabInteractable>_remove_WhenStateChanged__
                );
    FUN_02b3c81c(Method_Newtonsoft_Json_JsonSerializer_Deserialize<RegexOptions>__);
    FUN_02b3c81c(Method_LitJson_JsonData_EnsureDictionary__);
    FUN_02b3c81c(
                Method_Oculus_Interaction_Interactable<LocomotionTurnerInteractor,_LocomotionTurnerInteractable>__ctor__
                );
    FUN_02b3c81c(Method_UnityEngine_UIElements_Internal_MultiColumnHeaderColumnIcon_<_ctor>b__5_0__)
    ;
    FUN_02b3c81c(System_Collections_Generic_Queue<JobHandle>_TypeInfo);
    FUN_02b3c81c(Method_Newtonsoft_Json_JsonSerializer_set_DefaultValueHandling__);
    FUN_02b3c81c(Method_Newtonsoft_Json_Linq_JToken_Replace__);
    FUN_02b3c81c(Method_System_Linq_Enumerable_Select<KeyValuePair<string,_string>,_string>__);
    FUN_02b3c81c(
                Method_System_Linq_Enumerable_Select<KeyValuePair<string,_JsonParser_JsonValue>,_string>__
                );
    FUN_02b3c81c(
                Method_Oculus_Interaction_Interactable<SnapInteractor,_SnapInteractable>_InteractorRemoved__
                );
    FUN_02b3c81c(
                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<ReadCommand>__
                );
    FUN_02b3c81c(
                Method_Oculus_Interaction_Interactable<HandGrabInteractor,_HandGrabInteractable>_add_WhenStateChanged__
                );
    FUN_02b3c81c(Method_Newtonsoft_Json_JsonSerializer_set_MetadataPropertyHandling__);
    FUN_02b3c81c(
                Method_System_Collections_Generic_List<IntegratedSubsystemDescriptor>_GetEnumerator__
                );
    FUN_02b3c81c(
                Method_Oculus_Interaction_Interactable<SnapInteractor,_SnapInteractable>_RemoveInteractorByIdentifier__
                );
    FUN_02b3c81c(Method_Newtonsoft_Json_JsonSerializer_set_MissingMemberHandling__);
    FUN_02b3c81c(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ValueTuple<HttpWebResponse,_bool,_bool,_BufferOffsetSize,_WebOperation>>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<BufferOffsetSize>,_HttpWebRequest_<GetResponseFromData>d__244>__
                );
    FUN_02b3c81c(Method_Newtonsoft_Json_JsonSerializer_set_NullValueHandling__);
    FUN_02b3c81c(Method_LitJson_JsonData_LitJson_IJsonWrapper_GetBoolean__);
    FUN_02b3c81c(Method_Newtonsoft_Json_JsonTextReader_ParseUndefined__);
    FUN_02b3c81c(Method_System_Linq_Enumerable_Select<AndroidAxis,_string>__);
    FUN_02b3c81c(
                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<Vector4>__
                );
    FUN_02b3c81c(
                Method_Oculus_Interaction_Interactable<HandGrabUseInteractor,_HandGrabUseInteractable>_Awake__
                );
    FUN_02b3c81c(Method_Newtonsoft_Json_JsonSerializer_set_ObjectCreationHandling__);
    FUN_02b3c81c(
                Method_Oculus_Interaction_Interactable<SnapInteractor,_SnapInteractable>_SelectingInteractorAdded__
                );
    FUN_02b3c81c(
                Method_Oculus_Interaction_Interactable<HandGrabUseInteractor,_HandGrabUseInteractable>_SelectingInteractorAdded__
                );
    FUN_02b3c81c(
                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<XRHandJoint>__
                );
    FUN_02b3c81c(Method_Newtonsoft_Json_JsonSerializer_set_PreserveReferencesHandling__);
    FUN_02b3c81c(Method_System_Linq_Enumerable_Select<Collider,_Transform>__);
    FUN_02b3c81c(Method_System_Linq_Enumerable_Select<DataColumn,_Type>__);
    FUN_02b3c81c(
                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<OVRPlugin_SpaceDiscoveryResult>__
                );
    FUN_02b3c81c(Method_System_Linq_Enumerable_Select<DynamicMetaObject,_Expression>__);
    FUN_02b3c81c(PTR_DAT_0631b1e8);
    FUN_02b3c81c(Method_Newtonsoft_Json_JsonSerializer_set_ReferenceResolver__);
    FUN_02b3c81c(
                Method_Oculus_Interaction_Interactable<PokeInteractor,_PokeInteractable>_get_State__
                );
    FUN_02b3c81c(
                Method_Oculus_Interaction_Interactable<HandGrabUseInteractor,_HandGrabUseInteractable>_get_Registry__
                );
    FUN_02b3c81c(PTR_DAT_0631b1f0);
    FUN_02b3c81c(Method_Newtonsoft_Json_JsonSerializer_set_SerializationBinder__);
    FUN_02b3c81c(Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_EnsureType__);
    FUN_02b3c81c(Method_System_Linq_Enumerable_Empty<Type>__);
    FUN_02b3c81c(Method_System_Linq_Enumerable_Select<Enum,_int>__);
    FUN_02b3c81c(Method_Newtonsoft_Json_JsonTextReader_ReadAsBoolean__);
    FUN_02b3c81c(Method_System_Linq_Enumerable_Select<EnumMemberAttribute,_string>__);
    FUN_02b3c81c(
                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<OVRPlugin_SpaceQueryResult>__
                );
    FUN_02b3c81c(Method_UnityEngine_InputSystem_InputControlExtensions_CopyState__);
    FUN_02b3c81c(
                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<ProbeBrickIndex_Brick>__
                );
    FUN_02b3c81c(Method_Newtonsoft_Json_JsonTextReader_ReadNumberCharIntoBuffer__);
    FUN_02b3c81c(Method_Newtonsoft_Json_JsonTextReader_ReadNumberValue__);
    FUN_02b3c81c(
                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<AttachmentDescriptor>__
                );
    FUN_02b3c81c(Method_System_Linq_Enumerable_Select<FieldInfo,_Enum>__);
    FUN_02b3c81c(
                Method_Oculus_Interaction_Interactable<LocomotionAxisTurnerInteractor,_LocomotionAxisTurnerInteractable>__ctor__
                );
    FUN_02b3c81c(PTR_DAT_06312a80);
    FUN_02b3c81c(Method_Newtonsoft_Json_Linq_JToken_op_Explicit__);
    FUN_02b3c81c(
                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<byte>__
                );
    FUN_02b3c81c(Method_System_Linq_Enumerable_Select<FieldInfo,_string>__);
    FUN_02b3c81c(Method_Newtonsoft_Json_Serialization_JsonSerializerInternalBase_GetErrorContext__);
    FUN_02b3c81c(
                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<byte>__
                );
    FUN_02b3c81c(
                Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_GetExpectedDescription__
                );
    FUN_02b3c81c(Method_System_Linq_Enumerable_Select<FieldInfo,_VolumeParameter>__);
    FUN_02b3c81c(
                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<int>__
                );
    FUN_02b3c81c(
                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<long>__
                );
    FUN_02b3c81c(
                Method_Newtonsoft_Json_Serialization_JsonTypeReflector_GetAttribute<DefaultValueAttribute>__
                );
    FUN_02b3c81c(Method_System_Globalization_JapaneseCalendar_ToFourDigitYear__);
    FUN_02b3c81c(
                Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_PopulateDictionary__
                );
    FUN_02b3c81c(Method_LitJson_JsonData_LitJson_IJsonWrapper_GetLong__);
    DAT_066d55ee = 1;
  }
  lVar11 = thunk_FUN_02b79644(*(undefined8 *)puVar2);
  FUN_05b9af60(lVar11,0);
  puVar8 = 
  Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<long>__;
  puVar10 = 
  Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<AttachmentDescriptor>__
  ;
  puVar6 = 
  Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<ReadCommand>__;
  puVar9 = Method_OVRSimpleJSON_JSONLazyCreator_Set<JSONArray>__;
  puVar7 = Method_Newtonsoft_Json_Linq_JProperty_SetItem__;
  puVar3 = Method_Newtonsoft_Json_Linq_JProperty_GetItem__;
  puVar2 = PTR_DAT_06312a80;
  if (lVar11 != 0) {
    *(undefined8 *)(lVar11 + 0x10) =
         *(undefined8 *)
          Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<XRHandJoint>__
    ;
    thunk_FUN_02bb0e9c();
    *(undefined8 *)(lVar11 + 0x18) = *(undefined8 *)puVar6;
    thunk_FUN_02bb0e9c();
    *(undefined8 *)(lVar11 + 0x30) = *(undefined8 *)puVar10;
    thunk_FUN_02bb0e9c();
    *(undefined8 *)(lVar11 + 0x38) = *(undefined8 *)puVar8;
    thunk_FUN_02bb0e9c();
    *(undefined8 *)(lVar11 + 0x40) = *(undefined8 *)puVar2;
    thunk_FUN_02bb0e9c();
    lVar12 = thunk_FUN_02b79644(*(undefined8 *)puVar9);
    FUN_037a5cd0(lVar12,*(undefined8 *)puVar7);
    lVar13 = thunk_FUN_02b79644(*(undefined8 *)puVar3);
    FUN_05b9af58(lVar13,0);
    if (lVar13 != 0) {
      *(undefined8 *)(lVar13 + 0x18) =
           *(undefined8 *)Method_Newtonsoft_Json_Linq_JToken_op_Explicit__;
      *(undefined4 *)(lVar13 + 0x10) = 0x164;
      thunk_FUN_02bb0e9c();
      puVar2 = Method_Newtonsoft_Json_Linq_JProperty_InsertItem__;
      if (lVar12 != 0) {
        lVar16 = *(long *)(lVar12 + 0x10);
        lVar17 = *(long *)Method_Newtonsoft_Json_Linq_JProperty_InsertItem__;
        *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
        if (lVar16 != 0) {
          uVar1 = *(uint *)(lVar12 + 0x18);
          if (uVar1 < *(uint *)(lVar16 + 0x18)) {
            *(uint *)(lVar12 + 0x18) = uVar1 + 1;
            plVar14 = (long *)(lVar16 + (long)(int)uVar1 * 8 + 0x20);
            *plVar14 = lVar13;
            thunk_FUN_02bb0e9c(plVar14,lVar13);
          }
          else {
            FUN_037a6538(lVar12,lVar13,
                         *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
          }
          lVar13 = thunk_FUN_02b79644(*(undefined8 *)puVar3);
          FUN_05b9af58(lVar13,0);
          if (lVar13 != 0) {
            *(undefined8 *)(lVar13 + 0x18) =
                 *(undefined8 *)Method_Newtonsoft_Json_Linq_JToken_Replace__;
            *(undefined4 *)(lVar13 + 0x10) = 0x264;
            thunk_FUN_02bb0e9c();
            lVar16 = *(long *)(lVar12 + 0x10);
            lVar17 = *(long *)puVar2;
            *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
            puVar7 = Method_OVRSimpleJSON_JSONLazyCreator_Set<JSONBool>__;
            puVar3 = Method_Newtonsoft_Json_Linq_JProperty_RemoveItemAt__;
            puVar2 = Method_Newtonsoft_Json_Linq_JProperty_ClearItems__;
            if (lVar16 != 0) {
              uVar1 = *(uint *)(lVar12 + 0x18);
              if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                plVar14 = (long *)(lVar16 + (long)(int)uVar1 * 8 + 0x20);
                *plVar14 = lVar13;
                thunk_FUN_02bb0e9c(plVar14,lVar13);
              }
              else {
                FUN_037a6538(lVar12,lVar13,
                             *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
              }
              *(long *)(lVar11 + 0x20) = lVar12;
              thunk_FUN_02bb0e9c((long *)(lVar11 + 0x20),lVar12);
              lVar12 = thunk_FUN_02b79644(*(undefined8 *)puVar7);
              FUN_037a5cd0(lVar12,*(undefined8 *)puVar3);
              lVar13 = thunk_FUN_02b79644(*(undefined8 *)puVar2);
              FUN_05b9af50(lVar13,0);
              puVar9 = 
              Method_UnityEngine_UIElements_Internal_MultiColumnHeaderColumnIcon_<_ctor>b__5_0__;
              puVar7 = PTR_DAT_063145b8;
              puVar3 = PTR_DAT_063145b0;
              if (lVar13 != 0) {
                *(undefined8 *)(lVar13 + 0x10) =
                     *(undefined8 *)
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ValueTuple<HttpWebResponse,_bool,_bool,_BufferOffsetSize,_WebOperation>>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<BufferOffsetSize>,_HttpWebRequest_<GetResponseFromData>d__244>__
                ;
                thunk_FUN_02bb0e9c();
                *(undefined8 *)(lVar13 + 0x20) = *(undefined8 *)puVar9;
                thunk_FUN_02bb0e9c((undefined8 *)(lVar13 + 0x20));
                uVar15 = *(undefined8 *)puVar3;
                *(undefined4 *)(lVar13 + 0x18) = 0;
                lVar16 = thunk_FUN_02b79644(uVar15);
                FUN_037a5cd0(lVar16,*(undefined8 *)puVar7);
                if (lVar16 != 0) {
                  lVar17 = *(long *)(lVar16 + 0x10);
                  uVar15 = *(undefined8 *)Method_System_Linq_Enumerable_Select<Enum,_int>__;
                  lVar18 = *(long *)PTR_DAT_063173b8;
                  *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + 1;
                  puVar9 = Method_OVRSimpleJSON_JSONLazyCreator_Set<JSONNumber>__;
                  puVar7 = Method_Newtonsoft_Json_Linq_JPropertyKeyedCollection_Contains__;
                  puVar3 = Method_Newtonsoft_Json_Linq_JObject_ValidateToken__;
                  if (lVar17 != 0) {
                    uVar1 = *(uint *)(lVar16 + 0x18);
                    if (uVar1 < *(uint *)(lVar17 + 0x18)) {
                      *(uint *)(lVar16 + 0x18) = uVar1 + 1;
                      *(undefined8 *)(lVar17 + (long)(int)uVar1 * 8 + 0x20) = uVar15;
                      thunk_FUN_02bb0e9c();
                    }
                    else {
                      FUN_037a6538(lVar16,uVar15,
                                   *(undefined8 *)
                                    (*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
                    }
                    *(long *)(lVar13 + 0x30) = lVar16;
                    thunk_FUN_02bb0e9c((long *)(lVar13 + 0x30),lVar16);
                    lVar16 = thunk_FUN_02b79644(*(undefined8 *)puVar9);
                    FUN_037a5cd0(lVar16,*(undefined8 *)puVar7);
                    lVar17 = thunk_FUN_02b79644(*(undefined8 *)puVar3);
                    FUN_05b9af48(lVar17,0);
                    if (lVar17 != 0) {
                      *(undefined8 *)(lVar17 + 0x18) =
                           *(undefined8 *)
                            Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_CreateNewDictionary__
                      ;
                      thunk_FUN_02bb0e9c();
                      *(undefined8 *)(lVar17 + 0x10) = *(undefined8 *)puVar10;
                      thunk_FUN_02bb0e9c();
                      if (lVar16 != 0) {
                        lVar18 = *(long *)(lVar16 + 0x10);
                        lVar19 = *(long *)Method_Newtonsoft_Json_Linq_JProperty_Load__;
                        *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + 1;
                        puVar6 = PTR_DAT_063145b8;
                        if (lVar18 != 0) {
                          uVar1 = *(uint *)(lVar16 + 0x18);
                          if (uVar1 < *(uint *)(lVar18 + 0x18)) {
                            *(uint *)(lVar16 + 0x18) = uVar1 + 1;
                            plVar14 = (long *)(lVar18 + (long)(int)uVar1 * 8 + 0x20);
                            *plVar14 = lVar17;
                            thunk_FUN_02bb0e9c(plVar14,lVar17);
                          }
                          else {
                            FUN_037a6538(lVar16,lVar17,
                                         *(undefined8 *)
                                          (*(long *)(*(long *)(lVar19 + 0x20) + 0xc0) + 0x70));
                          }
                          *(long *)(lVar13 + 0x28) = lVar16;
                          thunk_FUN_02bb0e9c((long *)(lVar13 + 0x28),lVar16);
                          puVar8 = Method_Newtonsoft_Json_Linq_JProperty_RemoveItem__;
                          if (lVar12 != 0) {
                            lVar16 = *(long *)(lVar12 + 0x10);
                            lVar17 = *(long *)Method_Newtonsoft_Json_Linq_JProperty_RemoveItem__;
                            *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
                            if (lVar16 != 0) {
                              uVar1 = *(uint *)(lVar12 + 0x18);
                              if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                plVar14 = (long *)(lVar16 + (long)(int)uVar1 * 8 + 0x20);
                                *plVar14 = lVar13;
                                thunk_FUN_02bb0e9c(plVar14,lVar13);
                              }
                              else {
                                FUN_037a6538(lVar12,lVar13,
                                             *(undefined8 *)
                                              (*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
                              }
                              lVar13 = thunk_FUN_02b79644(*(undefined8 *)puVar2);
                              FUN_05b9af50(lVar13,0);
                              puVar4 = 
                              Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<float>__
                              ;
                              if (lVar13 != 0) {
                                *(undefined8 *)(lVar13 + 0x10) =
                                     *(undefined8 *)
                                      Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<byte>__
                                ;
                                thunk_FUN_02bb0e9c();
                                *(undefined8 *)(lVar13 + 0x20) = *(undefined8 *)puVar4;
                                thunk_FUN_02bb0e9c((undefined8 *)(lVar13 + 0x20));
                                puVar4 = PTR_DAT_063145b0;
                                *(undefined4 *)(lVar13 + 0x18) = 0;
                                lVar16 = thunk_FUN_02b79644(*(undefined8 *)puVar4);
                                FUN_037a5cd0(lVar16,*(undefined8 *)puVar6);
                                puVar4 = PTR_DAT_063173b8;
                                if (lVar16 != 0) {
                                  lVar17 = *(long *)(lVar16 + 0x10);
                                  uVar15 = *(undefined8 *)
                                            Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<OVRPlugin_SpaceQueryResult>__
                                  ;
                                  *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + 1;
                                  if (lVar17 != 0) {
                                    uVar1 = *(uint *)(lVar16 + 0x18);
                                    if (uVar1 < *(uint *)(lVar17 + 0x18)) {
                                      *(uint *)(lVar16 + 0x18) = uVar1 + 1;
                                      *(undefined8 *)(lVar17 + (long)(int)uVar1 * 8 + 0x20) = uVar15
                                      ;
                                      thunk_FUN_02bb0e9c();
                                    }
                                    else {
                                      FUN_037a6538(lVar16,uVar15,
                                                   *(undefined8 *)
                                                    (*(long *)(*(long *)(*(long *)puVar4 + 0x20) +
                                                              0xc0) + 0x70));
                                    }
                                    *(long *)(lVar13 + 0x30) = lVar16;
                                    thunk_FUN_02bb0e9c((long *)(lVar13 + 0x30),lVar16);
                                    lVar16 = thunk_FUN_02b79644(*(undefined8 *)puVar9);
                                    FUN_037a5cd0(lVar16,*(undefined8 *)puVar7);
                                    lVar17 = thunk_FUN_02b79644(*(undefined8 *)puVar3);
                                    FUN_05b9af48(lVar17,0);
                                    if (lVar17 != 0) {
                                      *(undefined8 *)(lVar17 + 0x18) =
                                           *(undefined8 *)
                                            Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<Vector2>__
                                      ;
                                      thunk_FUN_02bb0e9c();
                                      *(undefined8 *)(lVar17 + 0x10) = *(undefined8 *)puVar10;
                                      thunk_FUN_02bb0e9c();
                                      if (lVar16 != 0) {
                                        lVar18 = *(long *)(lVar16 + 0x10);
                                        lVar19 = *(long *)
                                                  Method_Newtonsoft_Json_Linq_JProperty_Load__;
                                        *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + 1;
                                        if (lVar18 != 0) {
                                          uVar1 = *(uint *)(lVar16 + 0x18);
                                          if (uVar1 < *(uint *)(lVar18 + 0x18)) {
                                            *(uint *)(lVar16 + 0x18) = uVar1 + 1;
                                            plVar14 = (long *)(lVar18 + (long)(int)uVar1 * 8 + 0x20)
                                            ;
                                            *plVar14 = lVar17;
                                            thunk_FUN_02bb0e9c(plVar14,lVar17);
                                          }
                                          else {
                                            FUN_037a6538(lVar16,lVar17,
                                                         *(undefined8 *)
                                                          (*(long *)(*(long *)(lVar19 + 0x20) + 0xc0
                                                                    ) + 0x70));
                                          }
                                          *(long *)(lVar13 + 0x28) = lVar16;
                                          thunk_FUN_02bb0e9c((long *)(lVar13 + 0x28),lVar16);
                                          lVar16 = *(long *)(lVar12 + 0x10);
                                          lVar17 = *(long *)puVar8;
                                          *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
                                          if (lVar16 != 0) {
                                            uVar1 = *(uint *)(lVar12 + 0x18);
                                            if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                              *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                              plVar14 = (long *)(lVar16 + (long)(int)uVar1 * 8 +
                                                                0x20);
                                              *plVar14 = lVar13;
                                              thunk_FUN_02bb0e9c(plVar14,lVar13);
                                            }
                                            else {
                                              FUN_037a6538(lVar12,lVar13,
                                                           *(undefined8 *)
                                                            (*(long *)(*(long *)(lVar17 + 0x20) +
                                                                      0xc0) + 0x70));
                                            }
                                            lVar13 = thunk_FUN_02b79644(*(undefined8 *)puVar2);
                                            FUN_05b9af50(lVar13,0);
                                            puVar4 = 
                                            Method_Newtonsoft_Json_JsonSerializer_set_ObjectCreationHandling__
                                            ;
                                            if (lVar13 != 0) {
                                              *(undefined8 *)(lVar13 + 0x10) =
                                                   *(undefined8 *)
                                                                                                        
                                                  Method_Oculus_Interaction_Interactable<LocomotionTurnerInteractor,_LocomotionTurnerInteractable>__ctor__
                                              ;
                                              thunk_FUN_02bb0e9c();
                                              *(undefined8 *)(lVar13 + 0x20) = *(undefined8 *)puVar4
                                              ;
                                              thunk_FUN_02bb0e9c((undefined8 *)(lVar13 + 0x20));
                                              puVar4 = PTR_DAT_063145b0;
                                              *(undefined4 *)(lVar13 + 0x18) = 0;
                                              lVar16 = thunk_FUN_02b79644(*(undefined8 *)puVar4);
                                              FUN_037a5cd0(lVar16,*(undefined8 *)puVar6);
                                              puVar4 = PTR_DAT_063173b8;
                                              if (lVar16 != 0) {
                                                lVar17 = *(long *)(lVar16 + 0x10);
                                                uVar15 = *(undefined8 *)
                                                                                                                    
                                                  Method_System_Linq_Enumerable_Select<Collider,_Transform>__
                                                ;
                                                *(int *)(lVar16 + 0x1c) =
                                                     *(int *)(lVar16 + 0x1c) + 1;
                                                if (lVar17 != 0) {
                                                  uVar1 = *(uint *)(lVar16 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar17 + 0x18)) {
                                                    *(uint *)(lVar16 + 0x18) = uVar1 + 1;
                                                    *(undefined8 *)
                                                     (lVar17 + (long)(int)uVar1 * 8 + 0x20) = uVar15
                                                    ;
                                                    thunk_FUN_02bb0e9c();
                                                  }
                                                  else {
                                                    FUN_037a6538(lVar16,uVar15,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(*(long *)
                                                  puVar4 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar13 + 0x30) = lVar16;
                                                  thunk_FUN_02bb0e9c((long *)(lVar13 + 0x30),lVar16)
                                                  ;
                                                  lVar16 = thunk_FUN_02b79644(*(undefined8 *)puVar9)
                                                  ;
                                                  FUN_037a5cd0(lVar16,*(undefined8 *)puVar7);
                                                  lVar17 = thunk_FUN_02b79644(*(undefined8 *)puVar3)
                                                  ;
                                                  FUN_05b9af48(lVar17,0);
                                                  if (lVar17 != 0) {
                                                    *(undefined8 *)(lVar17 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Newtonsoft_Json_JsonSerializer_set_ReferenceResolver__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar17 + 0x10) =
                                                       *(undefined8 *)puVar10;
                                                  thunk_FUN_02bb0e9c();
                                                  if (lVar16 != 0) {
                                                    lVar18 = *(long *)(lVar16 + 0x10);
                                                    lVar19 = *(long *)
                                                  Method_Newtonsoft_Json_Linq_JProperty_Load__;
                                                  *(int *)(lVar16 + 0x1c) =
                                                       *(int *)(lVar16 + 0x1c) + 1;
                                                  if (lVar18 != 0) {
                                                    uVar1 = *(uint *)(lVar16 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar18 + 0x18)) {
                                                      *(uint *)(lVar16 + 0x18) = uVar1 + 1;
                                                      plVar14 = (long *)(lVar18 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar14 = lVar17;
                                                      thunk_FUN_02bb0e9c(plVar14,lVar17);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar16,lVar17,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar19 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar13 + 0x28) = lVar16;
                                                  thunk_FUN_02bb0e9c((long *)(lVar13 + 0x28),lVar16)
                                                  ;
                                                  lVar16 = *(long *)(lVar12 + 0x10);
                                                  lVar17 = *(long *)puVar8;
                                                  *(int *)(lVar12 + 0x1c) =
                                                       *(int *)(lVar12 + 0x1c) + 1;
                                                  if (lVar16 != 0) {
                                                    uVar1 = *(uint *)(lVar12 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                      *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                      plVar14 = (long *)(lVar16 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar14 = lVar13;
                                                      thunk_FUN_02bb0e9c(plVar14,lVar13);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar12,lVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar13 = thunk_FUN_02b79644(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_05b9af50(lVar13,0);
                                                  puVar4 = 
                                                  Method_Newtonsoft_Json_JsonTextReader_ParseComment__
                                                  ;
                                                  if (lVar13 != 0) {
                                                    *(undefined8 *)(lVar13 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Oculus_Interaction_Interactable<SnapInteractor,_SnapInteractable>_SelectingInteractorAdded__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar13 + 0x20) =
                                                       *(undefined8 *)puVar4;
                                                  thunk_FUN_02bb0e9c((undefined8 *)(lVar13 + 0x20));
                                                  puVar4 = PTR_DAT_063145b0;
                                                  *(undefined4 *)(lVar13 + 0x18) = 0;
                                                  lVar16 = thunk_FUN_02b79644(*(undefined8 *)puVar4)
                                                  ;
                                                  FUN_037a5cd0(lVar16,*(undefined8 *)puVar6);
                                                  puVar4 = PTR_DAT_063173b8;
                                                  if (lVar16 != 0) {
                                                    lVar17 = *(long *)(lVar16 + 0x10);
                                                    uVar15 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Linq_Enumerable_Select<FieldInfo,_VolumeParameter>__
                                                  ;
                                                  *(int *)(lVar16 + 0x1c) =
                                                       *(int *)(lVar16 + 0x1c) + 1;
                                                  if (lVar17 != 0) {
                                                    uVar1 = *(uint *)(lVar16 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar17 + 0x18)) {
                                                      *(uint *)(lVar16 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar17 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar15;
                                                      thunk_FUN_02bb0e9c();
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar16,uVar15,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(*(long *)
                                                  puVar4 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar13 + 0x30) = lVar16;
                                                  thunk_FUN_02bb0e9c((long *)(lVar13 + 0x30),lVar16)
                                                  ;
                                                  lVar16 = thunk_FUN_02b79644(*(undefined8 *)puVar9)
                                                  ;
                                                  FUN_037a5cd0(lVar16,*(undefined8 *)puVar7);
                                                  lVar17 = thunk_FUN_02b79644(*(undefined8 *)puVar3)
                                                  ;
                                                  FUN_05b9af48(lVar17,0);
                                                  if (lVar17 != 0) {
                                                    *(undefined8 *)(lVar17 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Newtonsoft_Json_JsonTextReader_ReadAsBoolean__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar17 + 0x10) =
                                                       *(undefined8 *)puVar10;
                                                  thunk_FUN_02bb0e9c();
                                                  if (lVar16 != 0) {
                                                    lVar18 = *(long *)(lVar16 + 0x10);
                                                    lVar19 = *(long *)
                                                  Method_Newtonsoft_Json_Linq_JProperty_Load__;
                                                  *(int *)(lVar16 + 0x1c) =
                                                       *(int *)(lVar16 + 0x1c) + 1;
                                                  if (lVar18 != 0) {
                                                    uVar1 = *(uint *)(lVar16 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar18 + 0x18)) {
                                                      *(uint *)(lVar16 + 0x18) = uVar1 + 1;
                                                      plVar14 = (long *)(lVar18 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar14 = lVar17;
                                                      thunk_FUN_02bb0e9c(plVar14,lVar17);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar16,lVar17,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar19 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar13 + 0x28) = lVar16;
                                                  thunk_FUN_02bb0e9c((long *)(lVar13 + 0x28),lVar16)
                                                  ;
                                                  lVar16 = *(long *)(lVar12 + 0x10);
                                                  lVar17 = *(long *)puVar8;
                                                  *(int *)(lVar12 + 0x1c) =
                                                       *(int *)(lVar12 + 0x1c) + 1;
                                                  if (lVar16 != 0) {
                                                    uVar1 = *(uint *)(lVar12 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                      *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                      plVar14 = (long *)(lVar16 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar14 = lVar13;
                                                      thunk_FUN_02bb0e9c(plVar14,lVar13);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar12,lVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar13 = thunk_FUN_02b79644(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_05b9af50(lVar13,0);
                                                  puVar4 = 
                                                  Method_Newtonsoft_Json_JsonSerializer_set_MissingMemberHandling__
                                                  ;
                                                  if (lVar13 != 0) {
                                                    *(undefined8 *)(lVar13 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Oculus_Interaction_Interactable<PokeInteractor,_PokeInteractable>_get_Interactors__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar13 + 0x20) =
                                                       *(undefined8 *)puVar4;
                                                  thunk_FUN_02bb0e9c((undefined8 *)(lVar13 + 0x20));
                                                  puVar4 = PTR_DAT_063145b0;
                                                  *(undefined4 *)(lVar13 + 0x18) = 0;
                                                  lVar16 = thunk_FUN_02b79644(*(undefined8 *)puVar4)
                                                  ;
                                                  FUN_037a5cd0(lVar16,*(undefined8 *)puVar6);
                                                  puVar4 = PTR_DAT_063173b8;
                                                  if (lVar16 != 0) {
                                                    lVar17 = *(long *)(lVar16 + 0x10);
                                                    uVar15 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Linq_Enumerable_Select<FieldInfo,_string>__
                                                  ;
                                                  *(int *)(lVar16 + 0x1c) =
                                                       *(int *)(lVar16 + 0x1c) + 1;
                                                  if (lVar17 != 0) {
                                                    uVar1 = *(uint *)(lVar16 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar17 + 0x18)) {
                                                      *(uint *)(lVar16 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar17 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar15;
                                                      thunk_FUN_02bb0e9c();
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar16,uVar15,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(*(long *)
                                                  puVar4 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar13 + 0x30) = lVar16;
                                                  thunk_FUN_02bb0e9c((long *)(lVar13 + 0x30),lVar16)
                                                  ;
                                                  lVar16 = thunk_FUN_02b79644(*(undefined8 *)puVar9)
                                                  ;
                                                  FUN_037a5cd0(lVar16,*(undefined8 *)puVar7);
                                                  lVar17 = thunk_FUN_02b79644(*(undefined8 *)puVar3)
                                                  ;
                                                  FUN_05b9af48(lVar17,0);
                                                  if (lVar17 != 0) {
                                                    *(undefined8 *)(lVar17 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Newtonsoft_Json_JsonSerializer_set_PreserveReferencesHandling__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar17 + 0x10) =
                                                       *(undefined8 *)puVar10;
                                                  thunk_FUN_02bb0e9c();
                                                  if (lVar16 != 0) {
                                                    lVar18 = *(long *)(lVar16 + 0x10);
                                                    lVar19 = *(long *)
                                                  Method_Newtonsoft_Json_Linq_JProperty_Load__;
                                                  *(int *)(lVar16 + 0x1c) =
                                                       *(int *)(lVar16 + 0x1c) + 1;
                                                  if (lVar18 != 0) {
                                                    uVar1 = *(uint *)(lVar16 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar18 + 0x18)) {
                                                      *(uint *)(lVar16 + 0x18) = uVar1 + 1;
                                                      plVar14 = (long *)(lVar18 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar14 = lVar17;
                                                      thunk_FUN_02bb0e9c(plVar14,lVar17);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar16,lVar17,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar19 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar13 + 0x28) = lVar16;
                                                  thunk_FUN_02bb0e9c((long *)(lVar13 + 0x28),lVar16)
                                                  ;
                                                  lVar16 = *(long *)(lVar12 + 0x10);
                                                  lVar17 = *(long *)puVar8;
                                                  *(int *)(lVar12 + 0x1c) =
                                                       *(int *)(lVar12 + 0x1c) + 1;
                                                  if (lVar16 != 0) {
                                                    uVar1 = *(uint *)(lVar12 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                      *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                      plVar14 = (long *)(lVar16 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar14 = lVar13;
                                                      thunk_FUN_02bb0e9c(plVar14,lVar13);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar12,lVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar13 = thunk_FUN_02b79644(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_05b9af50(lVar13,0);
                                                  puVar4 = 
                                                  Method_Newtonsoft_Json_JsonTextReader_ReadNumberValue__
                                                  ;
                                                  if (lVar13 != 0) {
                                                    *(undefined8 *)(lVar13 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Oculus_Interaction_Interactable<SnapInteractor,_SnapInteractable>_RemoveInteractorByIdentifier__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar13 + 0x20) =
                                                       *(undefined8 *)puVar4;
                                                  thunk_FUN_02bb0e9c((undefined8 *)(lVar13 + 0x20));
                                                  puVar4 = PTR_DAT_063145b0;
                                                  *(undefined4 *)(lVar13 + 0x18) = 0;
                                                  lVar16 = thunk_FUN_02b79644(*(undefined8 *)puVar4)
                                                  ;
                                                  FUN_037a5cd0(lVar16,*(undefined8 *)puVar6);
                                                  puVar4 = PTR_DAT_063173b8;
                                                  if (lVar16 != 0) {
                                                    lVar17 = *(long *)(lVar16 + 0x10);
                                                    uVar15 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Linq_Enumerable_Select<KeyValuePair<string,_string>,_string>__
                                                  ;
                                                  *(int *)(lVar16 + 0x1c) =
                                                       *(int *)(lVar16 + 0x1c) + 1;
                                                  if (lVar17 != 0) {
                                                    uVar1 = *(uint *)(lVar16 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar17 + 0x18)) {
                                                      *(uint *)(lVar16 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar17 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar15;
                                                      thunk_FUN_02bb0e9c();
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar16,uVar15,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(*(long *)
                                                  puVar4 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar13 + 0x30) = lVar16;
                                                  thunk_FUN_02bb0e9c((long *)(lVar13 + 0x30),lVar16)
                                                  ;
                                                  lVar16 = thunk_FUN_02b79644(*(undefined8 *)puVar9)
                                                  ;
                                                  FUN_037a5cd0(lVar16,*(undefined8 *)puVar7);
                                                  lVar17 = thunk_FUN_02b79644(*(undefined8 *)puVar3)
                                                  ;
                                                  FUN_05b9af48(lVar17,0);
                                                  if (lVar17 != 0) {
                                                    *(undefined8 *)(lVar17 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Newtonsoft_Json_JsonTextReader_ReadNumberCharIntoBuffer__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar17 + 0x10) =
                                                       *(undefined8 *)puVar10;
                                                  thunk_FUN_02bb0e9c();
                                                  if (lVar16 != 0) {
                                                    lVar18 = *(long *)(lVar16 + 0x10);
                                                    lVar19 = *(long *)
                                                  Method_Newtonsoft_Json_Linq_JProperty_Load__;
                                                  *(int *)(lVar16 + 0x1c) =
                                                       *(int *)(lVar16 + 0x1c) + 1;
                                                  if (lVar18 != 0) {
                                                    uVar1 = *(uint *)(lVar16 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar18 + 0x18)) {
                                                      *(uint *)(lVar16 + 0x18) = uVar1 + 1;
                                                      plVar14 = (long *)(lVar18 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar14 = lVar17;
                                                      thunk_FUN_02bb0e9c(plVar14,lVar17);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar16,lVar17,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar19 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar13 + 0x28) = lVar16;
                                                  thunk_FUN_02bb0e9c((long *)(lVar13 + 0x28),lVar16)
                                                  ;
                                                  lVar16 = *(long *)(lVar12 + 0x10);
                                                  lVar17 = *(long *)puVar8;
                                                  *(int *)(lVar12 + 0x1c) =
                                                       *(int *)(lVar12 + 0x1c) + 1;
                                                  if (lVar16 != 0) {
                                                    uVar1 = *(uint *)(lVar12 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                      *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                      plVar14 = (long *)(lVar16 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar14 = lVar13;
                                                      thunk_FUN_02bb0e9c(plVar14,lVar13);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar12,lVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar13 = thunk_FUN_02b79644(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_05b9af50(lVar13,0);
                                                  puVar4 = PTR_DAT_0631b1e8;
                                                  if (lVar13 != 0) {
                                                    *(undefined8 *)(lVar13 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Oculus_Interaction_Interactable<HandGrabInteractor,_HandGrabInteractable>_remove_WhenStateChanged__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar13 + 0x20) =
                                                       *(undefined8 *)puVar4;
                                                  thunk_FUN_02bb0e9c((undefined8 *)(lVar13 + 0x20));
                                                  puVar5 = PTR_DAT_063145b0;
                                                  *(undefined4 *)(lVar13 + 0x18) = 1;
                                                  lVar16 = thunk_FUN_02b79644(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_037a5cd0(lVar16,*(undefined8 *)puVar6);
                                                  if (lVar16 != 0) {
                                                    lVar17 = *(long *)(lVar16 + 0x10);
                                                    uVar15 = *(undefined8 *)puVar4;
                                                    lVar18 = *(long *)PTR_DAT_063173b8;
                                                    *(int *)(lVar16 + 0x1c) =
                                                         *(int *)(lVar16 + 0x1c) + 1;
                                                    if (lVar17 != 0) {
                                                      uVar1 = *(uint *)(lVar16 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar17 + 0x18)) {
                                                        *(uint *)(lVar16 + 0x18) = uVar1 + 1;
                                                        *(undefined8 *)
                                                         (lVar17 + (long)(int)uVar1 * 8 + 0x20) =
                                                             uVar15;
                                                        thunk_FUN_02bb0e9c();
                                                      }
                                                      else {
                                                        FUN_037a6538(lVar16,uVar15,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar18 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar13 + 0x30) = lVar16;
                                                  thunk_FUN_02bb0e9c((long *)(lVar13 + 0x30),lVar16)
                                                  ;
                                                  lVar16 = thunk_FUN_02b79644(*(undefined8 *)puVar9)
                                                  ;
                                                  FUN_037a5cd0(lVar16,*(undefined8 *)puVar7);
                                                  lVar17 = thunk_FUN_02b79644(*(undefined8 *)puVar3)
                                                  ;
                                                  FUN_05b9af48(lVar17,0);
                                                  puVar6 = 
                                                  Method_Newtonsoft_Json_JsonReader_set_DateTimeZoneHandling__
                                                  ;
                                                  if (lVar17 != 0) {
                                                    *(undefined8 *)(lVar17 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Newtonsoft_Json_JsonReader_set_DateTimeZoneHandling__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar17 + 0x10) =
                                                       *(undefined8 *)puVar10;
                                                  thunk_FUN_02bb0e9c();
                                                  if (lVar16 != 0) {
                                                    lVar18 = *(long *)(lVar16 + 0x10);
                                                    lVar19 = *(long *)
                                                  Method_Newtonsoft_Json_Linq_JProperty_Load__;
                                                  *(int *)(lVar16 + 0x1c) =
                                                       *(int *)(lVar16 + 0x1c) + 1;
                                                  if (lVar18 != 0) {
                                                    uVar1 = *(uint *)(lVar16 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar18 + 0x18)) {
                                                      *(uint *)(lVar16 + 0x18) = uVar1 + 1;
                                                      plVar14 = (long *)(lVar18 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar14 = lVar17;
                                                      thunk_FUN_02bb0e9c(plVar14,lVar17);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar16,lVar17,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar19 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar13 + 0x28) = lVar16;
                                                  thunk_FUN_02bb0e9c((long *)(lVar13 + 0x28),lVar16)
                                                  ;
                                                  lVar16 = *(long *)(lVar12 + 0x10);
                                                  lVar17 = *(long *)puVar8;
                                                  *(int *)(lVar12 + 0x1c) =
                                                       *(int *)(lVar12 + 0x1c) + 1;
                                                  if (lVar16 != 0) {
                                                    uVar1 = *(uint *)(lVar12 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                      *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                      plVar14 = (long *)(lVar16 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar14 = lVar13;
                                                      thunk_FUN_02bb0e9c(plVar14,lVar13);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar12,lVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar13 = thunk_FUN_02b79644(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_05b9af50(lVar13,0);
                                                  puVar4 = 
                                                  Method_Newtonsoft_Json_JsonSerializer_set_NullValueHandling__
                                                  ;
                                                  if (lVar13 != 0) {
                                                    *(undefined8 *)(lVar13 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Oculus_Interaction_Interactable<HandGrabInteractor,_HandGrabInteractable>_add_WhenStateChanged__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar13 + 0x20) =
                                                       *(undefined8 *)puVar4;
                                                  thunk_FUN_02bb0e9c((undefined8 *)(lVar13 + 0x20));
                                                  puVar4 = PTR_DAT_063145b0;
                                                  *(undefined4 *)(lVar13 + 0x18) = 0;
                                                  lVar16 = thunk_FUN_02b79644(*(undefined8 *)puVar4)
                                                  ;
                                                  FUN_037a5cd0(lVar16,*(undefined8 *)
                                                                       PTR_DAT_063145b8);
                                                  puVar4 = PTR_DAT_063173b8;
                                                  if (lVar16 != 0) {
                                                    lVar17 = *(long *)(lVar16 + 0x10);
                                                    uVar15 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Linq_Enumerable_Select<DataColumn,_Type>__
                                                  ;
                                                  *(int *)(lVar16 + 0x1c) =
                                                       *(int *)(lVar16 + 0x1c) + 1;
                                                  if (lVar17 != 0) {
                                                    uVar1 = *(uint *)(lVar16 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar17 + 0x18)) {
                                                      *(uint *)(lVar16 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar17 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar15;
                                                      thunk_FUN_02bb0e9c();
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar16,uVar15,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(*(long *)
                                                  puVar4 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar13 + 0x30) = lVar16;
                                                  thunk_FUN_02bb0e9c((long *)(lVar13 + 0x30),lVar16)
                                                  ;
                                                  lVar16 = thunk_FUN_02b79644(*(undefined8 *)puVar9)
                                                  ;
                                                  FUN_037a5cd0(lVar16,*(undefined8 *)puVar7);
                                                  lVar17 = thunk_FUN_02b79644(*(undefined8 *)puVar3)
                                                  ;
                                                  FUN_05b9af48(lVar17,0);
                                                  if (lVar17 != 0) {
                                                    *(undefined8 *)(lVar17 + 0x18) =
                                                         *(undefined8 *)puVar6;
                                                    thunk_FUN_02bb0e9c();
                                                    *(undefined8 *)(lVar17 + 0x10) =
                                                         *(undefined8 *)puVar10;
                                                    thunk_FUN_02bb0e9c();
                                                    puVar6 = 
                                                  Method_Newtonsoft_Json_Linq_JProperty_Load__;
                                                  if (lVar16 != 0) {
                                                    lVar18 = *(long *)(lVar16 + 0x10);
                                                    *(int *)(lVar16 + 0x1c) =
                                                         *(int *)(lVar16 + 0x1c) + 1;
                                                    puVar4 = PTR_DAT_063145b8;
                                                    if (lVar18 != 0) {
                                                      uVar1 = *(uint *)(lVar16 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar18 + 0x18)) {
                                                        *(uint *)(lVar16 + 0x18) = uVar1 + 1;
                                                        plVar14 = (long *)(lVar18 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar14 = lVar17;
                                                        thunk_FUN_02bb0e9c(plVar14,lVar17);
                                                      }
                                                      else {
                                                        FUN_037a6538(lVar16,lVar17,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(*(long *)
                                                  puVar6 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar13 + 0x28) = lVar16;
                                                  thunk_FUN_02bb0e9c((long *)(lVar13 + 0x28),lVar16)
                                                  ;
                                                  lVar16 = *(long *)(lVar12 + 0x10);
                                                  lVar17 = *(long *)puVar8;
                                                  *(int *)(lVar12 + 0x1c) =
                                                       *(int *)(lVar12 + 0x1c) + 1;
                                                  if (lVar16 != 0) {
                                                    uVar1 = *(uint *)(lVar12 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                      *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                      plVar14 = (long *)(lVar16 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar14 = lVar13;
                                                      thunk_FUN_02bb0e9c(plVar14,lVar13);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar12,lVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar13 = thunk_FUN_02b79644(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_05b9af50(lVar13,0);
                                                  puVar6 = 
                                                  Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<ulong>__
                                                  ;
                                                  if (lVar13 != 0) {
                                                    *(undefined8 *)(lVar13 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<SphericalHarmonicsL2>__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar13 + 0x20) =
                                                       *(undefined8 *)puVar6;
                                                  thunk_FUN_02bb0e9c((undefined8 *)(lVar13 + 0x20));
                                                  puVar6 = PTR_DAT_063145b0;
                                                  *(undefined4 *)(lVar13 + 0x18) = 1;
                                                  lVar16 = thunk_FUN_02b79644(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_037a5cd0(lVar16,*(undefined8 *)puVar4);
                                                  puVar6 = PTR_DAT_063173b8;
                                                  if (lVar16 != 0) {
                                                    lVar17 = *(long *)(lVar16 + 0x10);
                                                    uVar15 = *(undefined8 *)
                                                                                                                            
                                                  Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<uint>__
                                                  ;
                                                  *(int *)(lVar16 + 0x1c) =
                                                       *(int *)(lVar16 + 0x1c) + 1;
                                                  if (lVar17 != 0) {
                                                    uVar1 = *(uint *)(lVar16 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar17 + 0x18)) {
                                                      *(uint *)(lVar16 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar17 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar15;
                                                      thunk_FUN_02bb0e9c();
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar16,uVar15,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(*(long *)
                                                  puVar6 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar13 + 0x30) = lVar16;
                                                  thunk_FUN_02bb0e9c((long *)(lVar13 + 0x30),lVar16)
                                                  ;
                                                  lVar16 = thunk_FUN_02b79644(*(undefined8 *)puVar9)
                                                  ;
                                                  FUN_037a5cd0(lVar16,*(undefined8 *)puVar7);
                                                  lVar17 = thunk_FUN_02b79644(*(undefined8 *)puVar3)
                                                  ;
                                                  FUN_05b9af48(lVar17,0);
                                                  if (lVar17 != 0) {
                                                    *(undefined8 *)(lVar17 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<byte>__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar17 + 0x10) =
                                                       *(undefined8 *)puVar10;
                                                  thunk_FUN_02bb0e9c();
                                                  if (lVar16 != 0) {
                                                    lVar18 = *(long *)(lVar16 + 0x10);
                                                    lVar19 = *(long *)
                                                  Method_Newtonsoft_Json_Linq_JProperty_Load__;
                                                  *(int *)(lVar16 + 0x1c) =
                                                       *(int *)(lVar16 + 0x1c) + 1;
                                                  if (lVar18 != 0) {
                                                    uVar1 = *(uint *)(lVar16 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar18 + 0x18)) {
                                                      *(uint *)(lVar16 + 0x18) = uVar1 + 1;
                                                      plVar14 = (long *)(lVar18 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar14 = lVar17;
                                                      thunk_FUN_02bb0e9c(plVar14,lVar17);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar16,lVar17,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar19 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar13 + 0x28) = lVar16;
                                                  thunk_FUN_02bb0e9c((long *)(lVar13 + 0x28),lVar16)
                                                  ;
                                                  lVar16 = *(long *)(lVar12 + 0x10);
                                                  lVar17 = *(long *)puVar8;
                                                  *(int *)(lVar12 + 0x1c) =
                                                       *(int *)(lVar12 + 0x1c) + 1;
                                                  if (lVar16 != 0) {
                                                    uVar1 = *(uint *)(lVar12 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                      *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                      plVar14 = (long *)(lVar16 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar14 = lVar13;
                                                      thunk_FUN_02bb0e9c(plVar14,lVar13);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar12,lVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar13 = thunk_FUN_02b79644(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_05b9af50(lVar13,0);
                                                  puVar6 = PTR_DAT_0631b1f0;
                                                  if (lVar13 != 0) {
                                                    *(undefined8 *)(lVar13 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Oculus_Interaction_Interactable<HandGrabUseInteractor,_HandGrabUseInteractable>_SelectingInteractorAdded__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar13 + 0x20) =
                                                       *(undefined8 *)puVar6;
                                                  thunk_FUN_02bb0e9c((undefined8 *)(lVar13 + 0x20));
                                                  puVar5 = PTR_DAT_063145b0;
                                                  *(undefined4 *)(lVar13 + 0x18) = 1;
                                                  lVar16 = thunk_FUN_02b79644(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_037a5cd0(lVar16,*(undefined8 *)puVar4);
                                                  if (lVar16 != 0) {
                                                    lVar17 = *(long *)(lVar16 + 0x10);
                                                    uVar15 = *(undefined8 *)puVar6;
                                                    lVar18 = *(long *)PTR_DAT_063173b8;
                                                    *(int *)(lVar16 + 0x1c) =
                                                         *(int *)(lVar16 + 0x1c) + 1;
                                                    if (lVar17 != 0) {
                                                      uVar1 = *(uint *)(lVar16 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar17 + 0x18)) {
                                                        *(uint *)(lVar16 + 0x18) = uVar1 + 1;
                                                        *(undefined8 *)
                                                         (lVar17 + (long)(int)uVar1 * 8 + 0x20) =
                                                             uVar15;
                                                        thunk_FUN_02bb0e9c();
                                                      }
                                                      else {
                                                        FUN_037a6538(lVar16,uVar15,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar18 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar13 + 0x30) = lVar16;
                                                  thunk_FUN_02bb0e9c((long *)(lVar13 + 0x30),lVar16)
                                                  ;
                                                  lVar16 = thunk_FUN_02b79644(*(undefined8 *)puVar9)
                                                  ;
                                                  FUN_037a5cd0(lVar16,*(undefined8 *)puVar7);
                                                  lVar17 = thunk_FUN_02b79644(*(undefined8 *)puVar3)
                                                  ;
                                                  FUN_05b9af48(lVar17,0);
                                                  if (lVar17 != 0) {
                                                    *(undefined8 *)(lVar17 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Newtonsoft_Json_JsonSerializer_set_SerializationBinder__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar17 + 0x10) =
                                                       *(undefined8 *)puVar10;
                                                  thunk_FUN_02bb0e9c();
                                                  if (lVar16 != 0) {
                                                    lVar18 = *(long *)(lVar16 + 0x10);
                                                    lVar19 = *(long *)
                                                  Method_Newtonsoft_Json_Linq_JProperty_Load__;
                                                  *(int *)(lVar16 + 0x1c) =
                                                       *(int *)(lVar16 + 0x1c) + 1;
                                                  if (lVar18 != 0) {
                                                    uVar1 = *(uint *)(lVar16 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar18 + 0x18)) {
                                                      *(uint *)(lVar16 + 0x18) = uVar1 + 1;
                                                      plVar14 = (long *)(lVar18 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar14 = lVar17;
                                                      thunk_FUN_02bb0e9c(plVar14,lVar17);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar16,lVar17,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar19 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar13 + 0x28) = lVar16;
                                                  thunk_FUN_02bb0e9c((long *)(lVar13 + 0x28),lVar16)
                                                  ;
                                                  lVar16 = *(long *)(lVar12 + 0x10);
                                                  lVar17 = *(long *)puVar8;
                                                  *(int *)(lVar12 + 0x1c) =
                                                       *(int *)(lVar12 + 0x1c) + 1;
                                                  if (lVar16 != 0) {
                                                    uVar1 = *(uint *)(lVar12 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                      *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                      plVar14 = (long *)(lVar16 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar14 = lVar13;
                                                      thunk_FUN_02bb0e9c(plVar14,lVar13);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar12,lVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar13 = thunk_FUN_02b79644(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_05b9af50(lVar13,0);
                                                  puVar6 = 
                                                  Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<ProbeBrickIndex_Brick>__
                                                  ;
                                                  if (lVar13 != 0) {
                                                    *(undefined8 *)(lVar13 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Oculus_Interaction_Interactable<HandGrabUseInteractor,_HandGrabUseInteractable>_Awake__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar13 + 0x20) =
                                                       *(undefined8 *)puVar6;
                                                  thunk_FUN_02bb0e9c((undefined8 *)(lVar13 + 0x20));
                                                  puVar6 = PTR_DAT_063145b0;
                                                  *(undefined4 *)(lVar13 + 0x18) = 0;
                                                  lVar16 = thunk_FUN_02b79644(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_037a5cd0(lVar16,*(undefined8 *)puVar4);
                                                  puVar6 = PTR_DAT_063173b8;
                                                  if (lVar16 != 0) {
                                                    lVar17 = *(long *)(lVar16 + 0x10);
                                                    uVar15 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Linq_Enumerable_Select<AndroidAxis,_string>__
                                                  ;
                                                  *(int *)(lVar16 + 0x1c) =
                                                       *(int *)(lVar16 + 0x1c) + 1;
                                                  if (lVar17 != 0) {
                                                    uVar1 = *(uint *)(lVar16 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar17 + 0x18)) {
                                                      *(uint *)(lVar16 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar17 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar15;
                                                      thunk_FUN_02bb0e9c();
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar16,uVar15,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(*(long *)
                                                  puVar6 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar13 + 0x30) = lVar16;
                                                  thunk_FUN_02bb0e9c((long *)(lVar13 + 0x30),lVar16)
                                                  ;
                                                  lVar16 = thunk_FUN_02b79644(*(undefined8 *)puVar9)
                                                  ;
                                                  FUN_037a5cd0(lVar16,*(undefined8 *)puVar7);
                                                  lVar17 = thunk_FUN_02b79644(*(undefined8 *)puVar3)
                                                  ;
                                                  FUN_05b9af48(lVar17,0);
                                                  if (lVar17 != 0) {
                                                    *(undefined8 *)(lVar17 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_GetExpectedDescription__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar17 + 0x10) =
                                                       *(undefined8 *)puVar10;
                                                  thunk_FUN_02bb0e9c();
                                                  if (lVar16 != 0) {
                                                    lVar18 = *(long *)(lVar16 + 0x10);
                                                    lVar19 = *(long *)
                                                  Method_Newtonsoft_Json_Linq_JProperty_Load__;
                                                  *(int *)(lVar16 + 0x1c) =
                                                       *(int *)(lVar16 + 0x1c) + 1;
                                                  if (lVar18 != 0) {
                                                    uVar1 = *(uint *)(lVar16 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar18 + 0x18)) {
                                                      *(uint *)(lVar16 + 0x18) = uVar1 + 1;
                                                      plVar14 = (long *)(lVar18 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar14 = lVar17;
                                                      thunk_FUN_02bb0e9c(plVar14,lVar17);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar16,lVar17,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar19 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar13 + 0x28) = lVar16;
                                                  thunk_FUN_02bb0e9c((long *)(lVar13 + 0x28),lVar16)
                                                  ;
                                                  lVar16 = *(long *)(lVar12 + 0x10);
                                                  lVar17 = *(long *)puVar8;
                                                  *(int *)(lVar12 + 0x1c) =
                                                       *(int *)(lVar12 + 0x1c) + 1;
                                                  if (lVar16 != 0) {
                                                    uVar1 = *(uint *)(lVar12 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                      *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                      plVar14 = (long *)(lVar16 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar14 = lVar13;
                                                      thunk_FUN_02bb0e9c(plVar14,lVar13);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar12,lVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar13 = thunk_FUN_02b79644(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_05b9af50(lVar13,0);
                                                  puVar6 = 
                                                  Method_Newtonsoft_Json_Serialization_JsonTypeReflector_GetAttribute<DefaultValueAttribute>__
                                                  ;
                                                  if (lVar13 != 0) {
                                                    *(undefined8 *)(lVar13 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Oculus_Interaction_Interactable<SnapInteractor,_SnapInteractable>_InteractorRemoved__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar13 + 0x20) =
                                                       *(undefined8 *)puVar6;
                                                  thunk_FUN_02bb0e9c((undefined8 *)(lVar13 + 0x20));
                                                  puVar6 = PTR_DAT_063145b0;
                                                  *(undefined4 *)(lVar13 + 0x18) = 0;
                                                  lVar16 = thunk_FUN_02b79644(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_037a5cd0(lVar16,*(undefined8 *)puVar4);
                                                  puVar6 = PTR_DAT_063173b8;
                                                  if (lVar16 != 0) {
                                                    lVar17 = *(long *)(lVar16 + 0x10);
                                                    uVar15 = *(undefined8 *)
                                                                                                                            
                                                  Method_Newtonsoft_Json_JsonTextReader_FinishReadQuotedNumber__
                                                  ;
                                                  *(int *)(lVar16 + 0x1c) =
                                                       *(int *)(lVar16 + 0x1c) + 1;
                                                  if (lVar17 != 0) {
                                                    uVar1 = *(uint *)(lVar16 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar17 + 0x18)) {
                                                      *(uint *)(lVar16 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar17 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar15;
                                                      thunk_FUN_02bb0e9c();
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar16,uVar15,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(*(long *)
                                                  puVar6 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar13 + 0x30) = lVar16;
                                                  thunk_FUN_02bb0e9c((long *)(lVar13 + 0x30),lVar16)
                                                  ;
                                                  lVar16 = thunk_FUN_02b79644(*(undefined8 *)puVar9)
                                                  ;
                                                  FUN_037a5cd0(lVar16,*(undefined8 *)puVar7);
                                                  lVar17 = thunk_FUN_02b79644(*(undefined8 *)puVar3)
                                                  ;
                                                  FUN_05b9af48(lVar17,0);
                                                  if (lVar17 != 0) {
                                                    *(undefined8 *)(lVar17 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Newtonsoft_Json_JsonTextReader_FinishReadQuotedStringValue__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar17 + 0x10) =
                                                       *(undefined8 *)puVar10;
                                                  thunk_FUN_02bb0e9c();
                                                  if (lVar16 != 0) {
                                                    lVar18 = *(long *)(lVar16 + 0x10);
                                                    lVar19 = *(long *)
                                                  Method_Newtonsoft_Json_Linq_JProperty_Load__;
                                                  *(int *)(lVar16 + 0x1c) =
                                                       *(int *)(lVar16 + 0x1c) + 1;
                                                  if (lVar18 != 0) {
                                                    uVar1 = *(uint *)(lVar16 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar18 + 0x18)) {
                                                      *(uint *)(lVar16 + 0x18) = uVar1 + 1;
                                                      plVar14 = (long *)(lVar18 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar14 = lVar17;
                                                      thunk_FUN_02bb0e9c(plVar14,lVar17);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar16,lVar17,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar19 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar13 + 0x28) = lVar16;
                                                  thunk_FUN_02bb0e9c((long *)(lVar13 + 0x28),lVar16)
                                                  ;
                                                  lVar16 = *(long *)(lVar12 + 0x10);
                                                  lVar17 = *(long *)puVar8;
                                                  *(int *)(lVar12 + 0x1c) =
                                                       *(int *)(lVar12 + 0x1c) + 1;
                                                  if (lVar16 != 0) {
                                                    uVar1 = *(uint *)(lVar12 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                      *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                      plVar14 = (long *)(lVar16 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar14 = lVar13;
                                                      thunk_FUN_02bb0e9c(plVar14,lVar13);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar12,lVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar13 = thunk_FUN_02b79644(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_05b9af50(lVar13,0);
                                                  puVar6 = 
                                                  Method_System_Linq_Enumerable_Empty<Type>__;
                                                  if (lVar13 != 0) {
                                                    *(undefined8 *)(lVar13 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  System_Collections_Generic_Queue<JobHandle>_TypeInfo
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar13 + 0x20) =
                                                       *(undefined8 *)puVar6;
                                                  thunk_FUN_02bb0e9c((undefined8 *)(lVar13 + 0x20));
                                                  puVar6 = PTR_DAT_063145b0;
                                                  *(undefined4 *)(lVar13 + 0x18) = 2;
                                                  lVar16 = thunk_FUN_02b79644(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_037a5cd0(lVar16,*(undefined8 *)puVar4);
                                                  puVar6 = PTR_DAT_063173b8;
                                                  if (lVar16 != 0) {
                                                    lVar17 = *(long *)(lVar16 + 0x10);
                                                    uVar15 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Linq_Enumerable_Select<KeyValuePair<string,_JsonParser_JsonValue>,_string>__
                                                  ;
                                                  *(int *)(lVar16 + 0x1c) =
                                                       *(int *)(lVar16 + 0x1c) + 1;
                                                  if (lVar17 != 0) {
                                                    uVar1 = *(uint *)(lVar16 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar17 + 0x18)) {
                                                      *(uint *)(lVar16 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar17 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar15;
                                                      thunk_FUN_02bb0e9c();
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar16,uVar15,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(*(long *)
                                                  puVar6 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar13 + 0x30) = lVar16;
                                                  thunk_FUN_02bb0e9c((long *)(lVar13 + 0x30),lVar16)
                                                  ;
                                                  lVar16 = thunk_FUN_02b79644(*(undefined8 *)puVar9)
                                                  ;
                                                  FUN_037a5cd0(lVar16,*(undefined8 *)puVar7);
                                                  lVar17 = thunk_FUN_02b79644(*(undefined8 *)puVar3)
                                                  ;
                                                  FUN_05b9af48(lVar17,0);
                                                  if (lVar17 != 0) {
                                                    *(undefined8 *)(lVar17 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Newtonsoft_Json_JsonSerializer_set_DefaultValueHandling__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar17 + 0x10) =
                                                       *(undefined8 *)puVar10;
                                                  thunk_FUN_02bb0e9c();
                                                  if (lVar16 != 0) {
                                                    lVar18 = *(long *)(lVar16 + 0x10);
                                                    lVar19 = *(long *)
                                                  Method_Newtonsoft_Json_Linq_JProperty_Load__;
                                                  *(int *)(lVar16 + 0x1c) =
                                                       *(int *)(lVar16 + 0x1c) + 1;
                                                  if (lVar18 != 0) {
                                                    uVar1 = *(uint *)(lVar16 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar18 + 0x18)) {
                                                      *(uint *)(lVar16 + 0x18) = uVar1 + 1;
                                                      plVar14 = (long *)(lVar18 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar14 = lVar17;
                                                      thunk_FUN_02bb0e9c(plVar14,lVar17);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar16,lVar17,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar19 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar13 + 0x28) = lVar16;
                                                  thunk_FUN_02bb0e9c((long *)(lVar13 + 0x28),lVar16)
                                                  ;
                                                  lVar16 = *(long *)(lVar12 + 0x10);
                                                  lVar17 = *(long *)puVar8;
                                                  *(int *)(lVar12 + 0x1c) =
                                                       *(int *)(lVar12 + 0x1c) + 1;
                                                  if (lVar16 != 0) {
                                                    uVar1 = *(uint *)(lVar12 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                      *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                      plVar14 = (long *)(lVar16 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar14 = lVar13;
                                                      thunk_FUN_02bb0e9c(plVar14,lVar13);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar12,lVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar13 = thunk_FUN_02b79644(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_05b9af50(lVar13,0);
                                                  puVar6 = 
                                                  Method_Newtonsoft_Json_JsonReader_set_MaxDepth__;
                                                  if (lVar13 != 0) {
                                                    *(undefined8 *)(lVar13 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Oculus_Interaction_Interactable<PokeInteractor,_PokeInteractable>_get_State__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar13 + 0x20) =
                                                       *(undefined8 *)puVar6;
                                                  thunk_FUN_02bb0e9c((undefined8 *)(lVar13 + 0x20));
                                                  puVar6 = PTR_DAT_063145b0;
                                                  *(undefined4 *)(lVar13 + 0x18) = 0;
                                                  lVar16 = thunk_FUN_02b79644(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_037a5cd0(lVar16,*(undefined8 *)puVar4);
                                                  puVar6 = PTR_DAT_063173b8;
                                                  if (lVar16 != 0) {
                                                    lVar17 = *(long *)(lVar16 + 0x10);
                                                    uVar15 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Linq_Enumerable_Select<EnumMemberAttribute,_string>__
                                                  ;
                                                  *(int *)(lVar16 + 0x1c) =
                                                       *(int *)(lVar16 + 0x1c) + 1;
                                                  if (lVar17 != 0) {
                                                    uVar1 = *(uint *)(lVar16 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar17 + 0x18)) {
                                                      *(uint *)(lVar16 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar17 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar15;
                                                      thunk_FUN_02bb0e9c();
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar16,uVar15,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(*(long *)
                                                  puVar6 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar13 + 0x30) = lVar16;
                                                  thunk_FUN_02bb0e9c((long *)(lVar13 + 0x30),lVar16)
                                                  ;
                                                  lVar16 = thunk_FUN_02b79644(*(undefined8 *)puVar9)
                                                  ;
                                                  FUN_037a5cd0(lVar16,*(undefined8 *)puVar7);
                                                  lVar17 = thunk_FUN_02b79644(*(undefined8 *)puVar3)
                                                  ;
                                                  FUN_05b9af48(lVar17,0);
                                                  if (lVar17 != 0) {
                                                    *(undefined8 *)(lVar17 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Newtonsoft_Json_JsonSerializer_Deserialize<RegexOptions>__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar17 + 0x10) =
                                                       *(undefined8 *)puVar10;
                                                  thunk_FUN_02bb0e9c();
                                                  if (lVar16 != 0) {
                                                    lVar18 = *(long *)(lVar16 + 0x10);
                                                    lVar19 = *(long *)
                                                  Method_Newtonsoft_Json_Linq_JProperty_Load__;
                                                  *(int *)(lVar16 + 0x1c) =
                                                       *(int *)(lVar16 + 0x1c) + 1;
                                                  if (lVar18 != 0) {
                                                    uVar1 = *(uint *)(lVar16 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar18 + 0x18)) {
                                                      *(uint *)(lVar16 + 0x18) = uVar1 + 1;
                                                      plVar14 = (long *)(lVar18 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar14 = lVar17;
                                                      thunk_FUN_02bb0e9c(plVar14,lVar17);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar16,lVar17,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar19 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar13 + 0x28) = lVar16;
                                                  thunk_FUN_02bb0e9c((long *)(lVar13 + 0x28),lVar16)
                                                  ;
                                                  lVar16 = *(long *)(lVar12 + 0x10);
                                                  lVar17 = *(long *)puVar8;
                                                  *(int *)(lVar12 + 0x1c) =
                                                       *(int *)(lVar12 + 0x1c) + 1;
                                                  if (lVar16 != 0) {
                                                    uVar1 = *(uint *)(lVar12 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                      *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                      plVar14 = (long *)(lVar16 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar14 = lVar13;
                                                      thunk_FUN_02bb0e9c(plVar14,lVar13);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar12,lVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar13 = thunk_FUN_02b79644(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_05b9af50(lVar13,0);
                                                  puVar6 = 
                                                  Method_Newtonsoft_Json_JsonTextReader_ParseUndefined__
                                                  ;
                                                  if (lVar13 != 0) {
                                                    *(undefined8 *)(lVar13 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Oculus_Interaction_Interactable<PokeInteractor,_PokeInteractable>_get_Registry__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar13 + 0x20) =
                                                       *(undefined8 *)puVar6;
                                                  thunk_FUN_02bb0e9c((undefined8 *)(lVar13 + 0x20));
                                                  puVar6 = PTR_DAT_063145b0;
                                                  *(undefined4 *)(lVar13 + 0x18) = 0;
                                                  lVar16 = thunk_FUN_02b79644(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_037a5cd0(lVar16,*(undefined8 *)puVar4);
                                                  puVar6 = PTR_DAT_063173b8;
                                                  if (lVar16 != 0) {
                                                    lVar17 = *(long *)(lVar16 + 0x10);
                                                    uVar15 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Linq_Enumerable_Select<FieldInfo,_Enum>__
                                                  ;
                                                  *(int *)(lVar16 + 0x1c) =
                                                       *(int *)(lVar16 + 0x1c) + 1;
                                                  if (lVar17 != 0) {
                                                    uVar1 = *(uint *)(lVar16 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar17 + 0x18)) {
                                                      *(uint *)(lVar16 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar17 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar15;
                                                      thunk_FUN_02bb0e9c();
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar16,uVar15,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(*(long *)
                                                  puVar6 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar13 + 0x30) = lVar16;
                                                  thunk_FUN_02bb0e9c((long *)(lVar13 + 0x30),lVar16)
                                                  ;
                                                  lVar16 = thunk_FUN_02b79644(*(undefined8 *)puVar9)
                                                  ;
                                                  FUN_037a5cd0(lVar16,*(undefined8 *)puVar7);
                                                  lVar17 = thunk_FUN_02b79644(*(undefined8 *)puVar3)
                                                  ;
                                                  FUN_05b9af48(lVar17,0);
                                                  if (lVar17 != 0) {
                                                    *(undefined8 *)(lVar17 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Newtonsoft_Json_JsonTextReader_MatchValue__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar17 + 0x10) =
                                                       *(undefined8 *)puVar10;
                                                  thunk_FUN_02bb0e9c();
                                                  if (lVar16 != 0) {
                                                    lVar18 = *(long *)(lVar16 + 0x10);
                                                    lVar19 = *(long *)
                                                  Method_Newtonsoft_Json_Linq_JProperty_Load__;
                                                  *(int *)(lVar16 + 0x1c) =
                                                       *(int *)(lVar16 + 0x1c) + 1;
                                                  if (lVar18 != 0) {
                                                    uVar1 = *(uint *)(lVar16 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar18 + 0x18)) {
                                                      *(uint *)(lVar16 + 0x18) = uVar1 + 1;
                                                      plVar14 = (long *)(lVar18 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar14 = lVar17;
                                                      thunk_FUN_02bb0e9c(plVar14,lVar17);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar16,lVar17,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar19 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar13 + 0x28) = lVar16;
                                                  thunk_FUN_02bb0e9c((long *)(lVar13 + 0x28),lVar16)
                                                  ;
                                                  lVar16 = *(long *)(lVar12 + 0x10);
                                                  lVar17 = *(long *)puVar8;
                                                  *(int *)(lVar12 + 0x1c) =
                                                       *(int *)(lVar12 + 0x1c) + 1;
                                                  if (lVar16 != 0) {
                                                    uVar1 = *(uint *)(lVar12 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                      *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                      plVar14 = (long *)(lVar16 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar14 = lVar13;
                                                      thunk_FUN_02bb0e9c(plVar14,lVar13);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar12,lVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar13 = thunk_FUN_02b79644(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_05b9af50(lVar13,0);
                                                  puVar6 = 
                                                  Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_EnsureType__
                                                  ;
                                                  if (lVar13 != 0) {
                                                    *(undefined8 *)(lVar13 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Oculus_Interaction_Interactable<LocomotionAxisTurnerInteractor,_LocomotionAxisTurnerInteractable>__ctor__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar13 + 0x20) =
                                                       *(undefined8 *)puVar6;
                                                  thunk_FUN_02bb0e9c((undefined8 *)(lVar13 + 0x20));
                                                  puVar6 = PTR_DAT_063145b0;
                                                  *(undefined4 *)(lVar13 + 0x18) = 2;
                                                  lVar16 = thunk_FUN_02b79644(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_037a5cd0(lVar16,*(undefined8 *)puVar4);
                                                  puVar6 = PTR_DAT_063173b8;
                                                  if (lVar16 != 0) {
                                                    lVar17 = *(long *)(lVar16 + 0x10);
                                                    uVar15 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Linq_Enumerable_Select<DynamicMetaObject,_Expression>__
                                                  ;
                                                  *(int *)(lVar16 + 0x1c) =
                                                       *(int *)(lVar16 + 0x1c) + 1;
                                                  if (lVar17 != 0) {
                                                    uVar1 = *(uint *)(lVar16 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar17 + 0x18)) {
                                                      *(uint *)(lVar16 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar17 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar15;
                                                      thunk_FUN_02bb0e9c();
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar16,uVar15,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(*(long *)
                                                  puVar6 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar13 + 0x30) = lVar16;
                                                  thunk_FUN_02bb0e9c((long *)(lVar13 + 0x30),lVar16)
                                                  ;
                                                  lVar16 = thunk_FUN_02b79644(*(undefined8 *)puVar9)
                                                  ;
                                                  FUN_037a5cd0(lVar16,*(undefined8 *)puVar7);
                                                  lVar17 = thunk_FUN_02b79644(*(undefined8 *)puVar3)
                                                  ;
                                                  FUN_05b9af48(lVar17,0);
                                                  if (lVar17 != 0) {
                                                    *(undefined8 *)(lVar17 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_CreateNewObject__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar17 + 0x10) =
                                                       *(undefined8 *)puVar10;
                                                  thunk_FUN_02bb0e9c();
                                                  if (lVar16 != 0) {
                                                    lVar18 = *(long *)(lVar16 + 0x10);
                                                    lVar19 = *(long *)
                                                  Method_Newtonsoft_Json_Linq_JProperty_Load__;
                                                  *(int *)(lVar16 + 0x1c) =
                                                       *(int *)(lVar16 + 0x1c) + 1;
                                                  if (lVar18 != 0) {
                                                    uVar1 = *(uint *)(lVar16 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar18 + 0x18)) {
                                                      *(uint *)(lVar16 + 0x18) = uVar1 + 1;
                                                      plVar14 = (long *)(lVar18 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar14 = lVar17;
                                                      thunk_FUN_02bb0e9c(plVar14,lVar17);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar16,lVar17,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar19 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar13 + 0x28) = lVar16;
                                                  thunk_FUN_02bb0e9c((long *)(lVar13 + 0x28),lVar16)
                                                  ;
                                                  lVar16 = *(long *)(lVar12 + 0x10);
                                                  lVar17 = *(long *)puVar8;
                                                  *(int *)(lVar12 + 0x1c) =
                                                       *(int *)(lVar12 + 0x1c) + 1;
                                                  if (lVar16 != 0) {
                                                    uVar1 = *(uint *)(lVar12 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                      *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                      plVar14 = (long *)(lVar16 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar14 = lVar13;
                                                      thunk_FUN_02bb0e9c(plVar14,lVar13);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar12,lVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar13 = thunk_FUN_02b79644(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_05b9af50(lVar13,0);
                                                  puVar6 = 
                                                  Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<Vector4>__
                                                  ;
                                                  if (lVar13 != 0) {
                                                    *(undefined8 *)(lVar13 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<Vector3>__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar13 + 0x20) =
                                                       *(undefined8 *)puVar6;
                                                  thunk_FUN_02bb0e9c((undefined8 *)(lVar13 + 0x20));
                                                  puVar6 = PTR_DAT_063145b0;
                                                  *(undefined4 *)(lVar13 + 0x18) = 1;
                                                  lVar16 = thunk_FUN_02b79644(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_037a5cd0(lVar16,*(undefined8 *)puVar4);
                                                  puVar6 = PTR_DAT_063173b8;
                                                  if (lVar16 != 0) {
                                                    lVar17 = *(long *)(lVar16 + 0x10);
                                                    uVar15 = *(undefined8 *)
                                                                                                                            
                                                  Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<OVRPlugin_SpaceDiscoveryResult>__
                                                  ;
                                                  *(int *)(lVar16 + 0x1c) =
                                                       *(int *)(lVar16 + 0x1c) + 1;
                                                  if (lVar17 != 0) {
                                                    uVar1 = *(uint *)(lVar16 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar17 + 0x18)) {
                                                      *(uint *)(lVar16 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar17 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar15;
                                                      thunk_FUN_02bb0e9c();
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar16,uVar15,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(*(long *)
                                                  puVar6 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar13 + 0x30) = lVar16;
                                                  thunk_FUN_02bb0e9c((long *)(lVar13 + 0x30),lVar16)
                                                  ;
                                                  lVar16 = thunk_FUN_02b79644(*(undefined8 *)puVar9)
                                                  ;
                                                  FUN_037a5cd0(lVar16,*(undefined8 *)puVar7);
                                                  lVar17 = thunk_FUN_02b79644(*(undefined8 *)puVar3)
                                                  ;
                                                  FUN_05b9af48(lVar17,0);
                                                  if (lVar17 != 0) {
                                                    *(undefined8 *)(lVar17 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<int>__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar17 + 0x10) =
                                                       *(undefined8 *)puVar10;
                                                  thunk_FUN_02bb0e9c();
                                                  if (lVar16 != 0) {
                                                    lVar18 = *(long *)(lVar16 + 0x10);
                                                    lVar19 = *(long *)
                                                  Method_Newtonsoft_Json_Linq_JProperty_Load__;
                                                  *(int *)(lVar16 + 0x1c) =
                                                       *(int *)(lVar16 + 0x1c) + 1;
                                                  if (lVar18 != 0) {
                                                    uVar1 = *(uint *)(lVar16 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar18 + 0x18)) {
                                                      *(uint *)(lVar16 + 0x18) = uVar1 + 1;
                                                      plVar14 = (long *)(lVar18 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar14 = lVar17;
                                                      thunk_FUN_02bb0e9c(plVar14,lVar17);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar16,lVar17,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar19 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar13 + 0x28) = lVar16;
                                                  thunk_FUN_02bb0e9c((long *)(lVar13 + 0x28),lVar16)
                                                  ;
                                                  lVar16 = *(long *)(lVar12 + 0x10);
                                                  lVar17 = *(long *)puVar8;
                                                  *(int *)(lVar12 + 0x1c) =
                                                       *(int *)(lVar12 + 0x1c) + 1;
                                                  if (lVar16 != 0) {
                                                    uVar1 = *(uint *)(lVar12 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                      *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                      plVar14 = (long *)(lVar16 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar14 = lVar13;
                                                      thunk_FUN_02bb0e9c(plVar14,lVar13);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar12,lVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar13 = thunk_FUN_02b79644(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_05b9af50(lVar13,0);
                                                  puVar6 = 
                                                  Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_CreateNewList__
                                                  ;
                                                  if (lVar13 != 0) {
                                                    *(undefined8 *)(lVar13 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Oculus_Interaction_Interactable<HandGrabUseInteractor,_HandGrabUseInteractable>_get_Registry__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar13 + 0x20) =
                                                       *(undefined8 *)puVar6;
                                                  thunk_FUN_02bb0e9c((undefined8 *)(lVar13 + 0x20));
                                                  puVar6 = PTR_DAT_063145b0;
                                                  *(undefined4 *)(lVar13 + 0x18) = 0;
                                                  lVar16 = thunk_FUN_02b79644(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_037a5cd0(lVar16,*(undefined8 *)puVar4);
                                                  puVar6 = PTR_DAT_063173b8;
                                                  if (lVar16 != 0) {
                                                    lVar17 = *(long *)(lVar16 + 0x10);
                                                    uVar15 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Linq_Enumerable_Select<KeyValuePair<Guid,_PxrSpatialMeshInfo>,_Guid>__
                                                  ;
                                                  *(int *)(lVar16 + 0x1c) =
                                                       *(int *)(lVar16 + 0x1c) + 1;
                                                  if (lVar17 != 0) {
                                                    uVar1 = *(uint *)(lVar16 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar17 + 0x18)) {
                                                      *(uint *)(lVar16 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar17 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar15;
                                                      thunk_FUN_02bb0e9c();
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar16,uVar15,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(*(long *)
                                                  puVar6 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar13 + 0x30) = lVar16;
                                                  thunk_FUN_02bb0e9c((long *)(lVar13 + 0x30),lVar16)
                                                  ;
                                                  lVar16 = thunk_FUN_02b79644(*(undefined8 *)puVar9)
                                                  ;
                                                  FUN_037a5cd0(lVar16,*(undefined8 *)puVar7);
                                                  lVar17 = thunk_FUN_02b79644(*(undefined8 *)puVar3)
                                                  ;
                                                  FUN_05b9af48(lVar17,0);
                                                  if (lVar17 != 0) {
                                                    *(undefined8 *)(lVar17 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_PopulateDictionary__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar17 + 0x10) =
                                                       *(undefined8 *)puVar10;
                                                  thunk_FUN_02bb0e9c();
                                                  if (lVar16 != 0) {
                                                    lVar18 = *(long *)(lVar16 + 0x10);
                                                    lVar19 = *(long *)
                                                  Method_Newtonsoft_Json_Linq_JProperty_Load__;
                                                  *(int *)(lVar16 + 0x1c) =
                                                       *(int *)(lVar16 + 0x1c) + 1;
                                                  if (lVar18 != 0) {
                                                    uVar1 = *(uint *)(lVar16 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar18 + 0x18)) {
                                                      *(uint *)(lVar16 + 0x18) = uVar1 + 1;
                                                      plVar14 = (long *)(lVar18 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar14 = lVar17;
                                                      thunk_FUN_02bb0e9c(plVar14,lVar17);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar16,lVar17,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar19 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar13 + 0x28) = lVar16;
                                                  thunk_FUN_02bb0e9c((long *)(lVar13 + 0x28),lVar16)
                                                  ;
                                                  lVar16 = *(long *)(lVar12 + 0x10);
                                                  lVar17 = *(long *)puVar8;
                                                  *(int *)(lVar12 + 0x1c) =
                                                       *(int *)(lVar12 + 0x1c) + 1;
                                                  if (lVar16 != 0) {
                                                    uVar1 = *(uint *)(lVar12 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                      *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                      plVar14 = (long *)(lVar16 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar14 = lVar13;
                                                      thunk_FUN_02bb0e9c(plVar14,lVar13);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar12,lVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar13 = thunk_FUN_02b79644(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_05b9af50(lVar13,0);
                                                  puVar6 = 
                                                  Method_LitJson_JsonData_LitJson_IJsonWrapper_GetBoolean__
                                                  ;
                                                  if (lVar13 != 0) {
                                                    *(undefined8 *)(lVar13 + 0x10) =
                                                         *(undefined8 *)
                                                          Method_LitJson_JsonData__ctor__;
                                                    thunk_FUN_02bb0e9c();
                                                    *(undefined8 *)(lVar13 + 0x20) =
                                                         *(undefined8 *)puVar6;
                                                    thunk_FUN_02bb0e9c((undefined8 *)(lVar13 + 0x20)
                                                                      );
                                                    puVar6 = PTR_DAT_063145b0;
                                                    *(undefined4 *)(lVar13 + 0x18) = 3;
                                                    lVar16 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                 puVar6);
                                                    FUN_037a5cd0(lVar16,*(undefined8 *)puVar4);
                                                    puVar6 = PTR_DAT_063173b8;
                                                    if (lVar16 != 0) {
                                                      lVar17 = *(long *)(lVar16 + 0x10);
                                                      uVar15 = *(undefined8 *)
                                                                                                                                
                                                  Method_System_Globalization_JapaneseCalendar_ToFourDigitYear__
                                                  ;
                                                  *(int *)(lVar16 + 0x1c) =
                                                       *(int *)(lVar16 + 0x1c) + 1;
                                                  if (lVar17 != 0) {
                                                    uVar1 = *(uint *)(lVar16 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar17 + 0x18)) {
                                                      *(uint *)(lVar16 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar17 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar15;
                                                      thunk_FUN_02bb0e9c();
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar16,uVar15,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(*(long *)
                                                  puVar6 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar13 + 0x30) = lVar16;
                                                  thunk_FUN_02bb0e9c((long *)(lVar13 + 0x30),lVar16)
                                                  ;
                                                  lVar16 = thunk_FUN_02b79644(*(undefined8 *)puVar9)
                                                  ;
                                                  FUN_037a5cd0(lVar16,*(undefined8 *)puVar7);
                                                  lVar17 = thunk_FUN_02b79644(*(undefined8 *)puVar3)
                                                  ;
                                                  FUN_05b9af48(lVar17,0);
                                                  if (lVar17 != 0) {
                                                    *(undefined8 *)(lVar17 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_LitJson_JsonData_LitJson_IJsonWrapper_GetLong__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar17 + 0x10) =
                                                       *(undefined8 *)puVar10;
                                                  thunk_FUN_02bb0e9c();
                                                  if (lVar16 != 0) {
                                                    lVar18 = *(long *)(lVar16 + 0x10);
                                                    lVar19 = *(long *)
                                                  Method_Newtonsoft_Json_Linq_JProperty_Load__;
                                                  *(int *)(lVar16 + 0x1c) =
                                                       *(int *)(lVar16 + 0x1c) + 1;
                                                  if (lVar18 != 0) {
                                                    uVar1 = *(uint *)(lVar16 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar18 + 0x18)) {
                                                      *(uint *)(lVar16 + 0x18) = uVar1 + 1;
                                                      plVar14 = (long *)(lVar18 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar14 = lVar17;
                                                      thunk_FUN_02bb0e9c(plVar14,lVar17);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar16,lVar17,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar19 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar13 + 0x28) = lVar16;
                                                  thunk_FUN_02bb0e9c((long *)(lVar13 + 0x28),lVar16)
                                                  ;
                                                  lVar16 = *(long *)(lVar12 + 0x10);
                                                  lVar17 = *(long *)puVar8;
                                                  *(int *)(lVar12 + 0x1c) =
                                                       *(int *)(lVar12 + 0x1c) + 1;
                                                  if (lVar16 != 0) {
                                                    uVar1 = *(uint *)(lVar12 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                      *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                      plVar14 = (long *)(lVar16 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar14 = lVar13;
                                                      thunk_FUN_02bb0e9c(plVar14,lVar13);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar12,lVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar13 = thunk_FUN_02b79644(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_05b9af50(lVar13,0);
                                                  puVar6 = 
                                                  Method_Newtonsoft_Json_JsonConvert_DeserializeObject<Dictionary<string,_string>>__
                                                  ;
                                                  if (lVar13 != 0) {
                                                    *(undefined8 *)(lVar13 + 0x10) =
                                                         *(undefined8 *)PTR_DAT_06332138;
                                                    thunk_FUN_02bb0e9c();
                                                    *(undefined8 *)(lVar13 + 0x20) =
                                                         *(undefined8 *)puVar6;
                                                    thunk_FUN_02bb0e9c((undefined8 *)(lVar13 + 0x20)
                                                                      );
                                                    puVar6 = PTR_DAT_063145b0;
                                                    *(undefined4 *)(lVar13 + 0x18) = 3;
                                                    lVar16 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                 puVar6);
                                                    FUN_037a5cd0(lVar16,*(undefined8 *)puVar4);
                                                    puVar6 = PTR_DAT_063173b8;
                                                    if (lVar16 != 0) {
                                                      lVar17 = *(long *)(lVar16 + 0x10);
                                                      uVar15 = *(undefined8 *)
                                                                                                                                
                                                  Method_System_Collections_Generic_List<IntegratedSubsystemDescriptor>_GetEnumerator__
                                                  ;
                                                  *(int *)(lVar16 + 0x1c) =
                                                       *(int *)(lVar16 + 0x1c) + 1;
                                                  if (lVar17 != 0) {
                                                    uVar1 = *(uint *)(lVar16 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar17 + 0x18)) {
                                                      *(uint *)(lVar16 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar17 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar15;
                                                      thunk_FUN_02bb0e9c();
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar16,uVar15,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(*(long *)
                                                  puVar6 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar13 + 0x30) = lVar16;
                                                  thunk_FUN_02bb0e9c((long *)(lVar13 + 0x30),lVar16)
                                                  ;
                                                  lVar16 = thunk_FUN_02b79644(*(undefined8 *)puVar9)
                                                  ;
                                                  FUN_037a5cd0(lVar16,*(undefined8 *)puVar7);
                                                  lVar17 = thunk_FUN_02b79644(*(undefined8 *)puVar3)
                                                  ;
                                                  FUN_05b9af48(lVar17,0);
                                                  if (lVar17 != 0) {
                                                    *(undefined8 *)(lVar17 + 0x18) =
                                                         *(undefined8 *)
                                                          Method_LitJson_JsonData_EnsureDictionary__
                                                    ;
                                                    thunk_FUN_02bb0e9c();
                                                    *(undefined8 *)(lVar17 + 0x10) =
                                                         *(undefined8 *)puVar10;
                                                    thunk_FUN_02bb0e9c();
                                                    if (lVar16 != 0) {
                                                      lVar18 = *(long *)(lVar16 + 0x10);
                                                      lVar19 = *(long *)
                                                  Method_Newtonsoft_Json_Linq_JProperty_Load__;
                                                  *(int *)(lVar16 + 0x1c) =
                                                       *(int *)(lVar16 + 0x1c) + 1;
                                                  if (lVar18 != 0) {
                                                    uVar1 = *(uint *)(lVar16 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar18 + 0x18)) {
                                                      *(uint *)(lVar16 + 0x18) = uVar1 + 1;
                                                      plVar14 = (long *)(lVar18 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar14 = lVar17;
                                                      thunk_FUN_02bb0e9c(plVar14,lVar17);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar16,lVar17,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar19 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar13 + 0x28) = lVar16;
                                                  thunk_FUN_02bb0e9c((long *)(lVar13 + 0x28),lVar16)
                                                  ;
                                                  lVar16 = *(long *)(lVar12 + 0x10);
                                                  lVar17 = *(long *)puVar8;
                                                  *(int *)(lVar12 + 0x1c) =
                                                       *(int *)(lVar12 + 0x1c) + 1;
                                                  if (lVar16 != 0) {
                                                    uVar1 = *(uint *)(lVar12 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                      *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                      plVar14 = (long *)(lVar16 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar14 = lVar13;
                                                      thunk_FUN_02bb0e9c(plVar14,lVar13);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar12,lVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar13 = thunk_FUN_02b79644(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_05b9af50(lVar13,0);
                                                  puVar2 = 
                                                  Method_Newtonsoft_Json_JsonSerializer_set_MetadataPropertyHandling__
                                                  ;
                                                  if (lVar13 != 0) {
                                                    *(undefined8 *)(lVar13 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Newtonsoft_Json_Serialization_JsonSerializerInternalBase_GetErrorContext__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar13 + 0x20) =
                                                       *(undefined8 *)puVar2;
                                                  thunk_FUN_02bb0e9c((undefined8 *)(lVar13 + 0x20));
                                                  puVar2 = PTR_DAT_063145b0;
                                                  *(undefined4 *)(lVar13 + 0x18) = 4;
                                                  lVar16 = thunk_FUN_02b79644(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_037a5cd0(lVar16,*(undefined8 *)puVar4);
                                                  puVar2 = PTR_DAT_063173b8;
                                                  if (lVar16 != 0) {
                                                    lVar17 = *(long *)(lVar16 + 0x10);
                                                    uVar15 = *(undefined8 *)
                                                                                                                            
                                                  Method_UnityEngine_InputSystem_InputControlExtensions_CopyState__
                                                  ;
                                                  *(int *)(lVar16 + 0x1c) =
                                                       *(int *)(lVar16 + 0x1c) + 1;
                                                  if (lVar17 != 0) {
                                                    uVar1 = *(uint *)(lVar16 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar17 + 0x18)) {
                                                      *(uint *)(lVar16 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar17 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar15;
                                                      thunk_FUN_02bb0e9c();
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar16,uVar15,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(*(long *)
                                                  puVar2 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar13 + 0x30) = lVar16;
                                                  thunk_FUN_02bb0e9c((long *)(lVar13 + 0x30),lVar16)
                                                  ;
                                                  lVar16 = thunk_FUN_02b79644(*(undefined8 *)puVar9)
                                                  ;
                                                  FUN_037a5cd0(lVar16,*(undefined8 *)puVar7);
                                                  lVar17 = thunk_FUN_02b79644(*(undefined8 *)puVar3)
                                                  ;
                                                  FUN_05b9af48(lVar17,0);
                                                  if (lVar17 != 0) {
                                                    *(undefined8 *)(lVar17 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Newtonsoft_Json_JsonReader_set_FloatParseHandling__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar17 + 0x10) =
                                                       *(undefined8 *)puVar10;
                                                  thunk_FUN_02bb0e9c();
                                                  if (lVar16 != 0) {
                                                    lVar18 = *(long *)(lVar16 + 0x10);
                                                    lVar19 = *(long *)
                                                  Method_Newtonsoft_Json_Linq_JProperty_Load__;
                                                  *(int *)(lVar16 + 0x1c) =
                                                       *(int *)(lVar16 + 0x1c) + 1;
                                                  if (lVar18 != 0) {
                                                    uVar1 = *(uint *)(lVar16 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar18 + 0x18)) {
                                                      *(uint *)(lVar16 + 0x18) = uVar1 + 1;
                                                      plVar14 = (long *)(lVar18 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar14 = lVar17;
                                                      thunk_FUN_02bb0e9c(plVar14,lVar17);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar16,lVar17,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar19 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar13 + 0x28) = lVar16;
                                                  thunk_FUN_02bb0e9c((long *)(lVar13 + 0x28),lVar16)
                                                  ;
                                                  lVar16 = *(long *)(lVar12 + 0x10);
                                                  lVar17 = *(long *)puVar8;
                                                  *(int *)(lVar12 + 0x1c) =
                                                       *(int *)(lVar12 + 0x1c) + 1;
                                                  if (lVar16 != 0) {
                                                    uVar1 = *(uint *)(lVar12 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                      *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                      plVar14 = (long *)(lVar16 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar14 = lVar13;
                                                      thunk_FUN_02bb0e9c(plVar14,lVar13);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar12,lVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar11 + 0x28) = lVar12;
                                                  thunk_FUN_02bb0e9c((long *)(lVar11 + 0x28),lVar12)
                                                  ;
                                                  FUN_05b9ad1c(param_1,lVar11,0);
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
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


