/*
FUNCTION_NAME: FUN_05bf8bbc
ENTRY_POINT: 05bf8bbc
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 84
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;telemetry;structure_combo;keyword_support
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_21;ui_or_gameplay_sink_hits_8;telemetry_or_network_hits_21;source_validity_pose_sink_structure;eye_or_gaze_keyword_boost_only;negative_generic_rendering_without_foveation_or_eye_source
*/


void FUN_05bf8bbc(undefined8 param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  
  puVar2 = 
  Method_Newtonsoft_Json_Linq_JObject_System_Collections_Generic_IDictionary<System_String,Newtonsoft_Json_Linq_JToken>_get_Values__
  ;
  if ((DAT_066d55d7 & 1) == 0) {
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
    FUN_02b3c81c(PTR_DAT_063210b8);
    FUN_02b3c81c(Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_CreateNewObject__
                );
    FUN_02b3c81c(OVR_OpenVR_IVRSystem__GetControllerStateWithPose_TypeInfo);
    FUN_02b3c81c(Method_Newtonsoft_Json_JsonReader_set_DateParseHandling__);
    FUN_02b3c81c(PTR_DAT_06332138);
    FUN_02b3c81c(Method_Newtonsoft_Json_JsonReader_set_FloatParseHandling__);
    FUN_02b3c81c(
                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray<LODFadeMode>__
                );
    FUN_02b3c81c(Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_CreateObject__);
    FUN_02b3c81c(
                Method_System_Linq_Enumerable_Select<IGrouping<HandFinger,_ValueTuple<HandFinger,_IReadOnlyList<ShapeRecognizer_FingerFeatureConfig>>>,_<>f__AnonymousType0<HandFinger,_IEnumerable<ShapeRecognizer_FingerFeatureConfig>>>__
                );
    FUN_02b3c81c(
                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray<LightDataGI>__
                );
    FUN_02b3c81c(
                Method_System_Linq_Enumerable_Select<KeyValuePair<Guid,_PxrSpatialMeshInfo>,_Guid>__
                );
    FUN_02b3c81c(
                Method_Oculus_Interaction_Interactable<HandGrabInteractor,_HandGrabInteractable>_get_WhenSelectingInteractorAdded__
                );
    FUN_02b3c81c(
                Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>__ctor__
                );
    FUN_02b3c81c(Method_LitJson_JsonData__ctor__);
    FUN_02b3c81c(
                Method_Oculus_Interaction_Interactable<HandGrabInteractor,_HandGrabInteractable>_remove_WhenStateChanged__
                );
    FUN_02b3c81c(
                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray<short>__
                );
    FUN_02b3c81c(Method_Newtonsoft_Json_JsonSerializer_Deserialize<RegexOptions>__);
    FUN_02b3c81c(Method_LitJson_JsonData_EnsureDictionary__);
    FUN_02b3c81c(Method_Newtonsoft_Json_JsonSerializer_set_DefaultValueHandling__);
    FUN_02b3c81c(Method_Newtonsoft_Json_Linq_JToken_Replace__);
    FUN_02b3c81c(
                Method_System_Linq_Enumerable_Select<KeyValuePair<string,_JsonParser_JsonValue>,_string>__
                );
    FUN_02b3c81c(
                Method_Oculus_Interaction_Interactable<HandGrabInteractor,_HandGrabInteractable>_add_WhenStateChanged__
                );
    FUN_02b3c81c(Method_Newtonsoft_Json_JsonSerializer_set_MetadataPropertyHandling__);
    FUN_02b3c81c(
                Method_System_Collections_Generic_List<IntegratedSubsystemDescriptor>_GetEnumerator__
                );
    FUN_02b3c81c(
                Method_Oculus_Interaction_Interactable<HandGrabUseInteractor,_HandGrabUseInteractable>__ctor__
                );
    FUN_02b3c81c(Method_Newtonsoft_Json_JsonSerializer_set_NullValueHandling__);
    FUN_02b3c81c(
                Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_EndProcessProperty__
                );
    FUN_02b3c81c(Method_LitJson_JsonData_LitJson_IJsonWrapper_GetBoolean__);
    FUN_02b3c81c(Method_System_Linq_Enumerable_Select<AndroidAxis,_string>__);
    FUN_02b3c81c(
                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray<Matrix4x4>__
                );
    FUN_02b3c81c(
                Method_Oculus_Interaction_Interactable<HandGrabUseInteractor,_HandGrabUseInteractable>_Awake__
                );
    FUN_02b3c81c(
                Method_Oculus_Interaction_Interactable<HandGrabUseInteractor,_HandGrabUseInteractable>_SelectingInteractorAdded__
                );
    FUN_02b3c81c(Method_System_Linq_Enumerable_Select<DataColumn,_Type>__);
    FUN_02b3c81c(Method_System_Linq_Enumerable_Select<DynamicMetaObject,_Expression>__);
    FUN_02b3c81c(PTR_DAT_0631b1e8);
    FUN_02b3c81c(Method_System_Collections_Generic_List<InterpretedFrameInfo>_ToArray__);
    FUN_02b3c81c(
                Method_Oculus_Interaction_Interactable<TeleportInteractor,_TeleportInteractable>__ctor__
                );
    FUN_02b3c81c(PTR_DAT_0631b1f0);
    FUN_02b3c81c(Method_Newtonsoft_Json_JsonSerializer_set_SerializationBinder__);
    FUN_02b3c81c(
                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray<ModifiableContactPair>__
                );
    FUN_02b3c81c(Method_System_Linq_Enumerable_Select<Enum,_int>__);
    FUN_02b3c81c(Method_System_Linq_Enumerable_Select<EnumMemberAttribute,_string>__);
    FUN_02b3c81c(Method_UnityEngine_InputSystem_InputControlExtensions_CopyState__);
    FUN_02b3c81c(
                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray<Plane>__
                );
    FUN_02b3c81c(
                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray<Quaternion>__
                );
    FUN_02b3c81c(PTR_DAT_06312a80);
    FUN_02b3c81c(Method_Newtonsoft_Json_Linq_JToken_op_Explicit__);
    FUN_02b3c81c(
                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray<GPUDrivenRendererEditorData>__
                );
    FUN_02b3c81c(Method_Newtonsoft_Json_Serialization_JsonSerializerInternalBase_GetErrorContext__);
    FUN_02b3c81c(
                Method_Oculus_Interaction_Interactable<SnapInteractor,_SnapInteractable>_get_SelectingInteractors__
                );
    FUN_02b3c81c(Method_System_Globalization_JapaneseCalendar_ToFourDigitYear__);
    FUN_02b3c81c(Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_AddReference__);
    FUN_02b3c81c(
                Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_PopulateDictionary__
                );
    FUN_02b3c81c(Method_LitJson_JsonData_LitJson_IJsonWrapper_GetLong__);
    DAT_066d55d7 = 1;
  }
  lVar9 = thunk_FUN_02b79644(*(undefined8 *)puVar2);
  FUN_05b9af60(lVar9,0);
  puVar8 = 
  Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray<ModifiableContactPair>__
  ;
  puVar7 = 
  Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray<short>__
  ;
  puVar6 = 
  Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray<GPUDrivenRendererEditorData>__
  ;
  puVar4 = Method_OVRSimpleJSON_JSONLazyCreator_Set<JSONArray>__;
  puVar5 = Method_Newtonsoft_Json_Linq_JProperty_SetItem__;
  puVar3 = Method_Newtonsoft_Json_Linq_JProperty_GetItem__;
  puVar2 = PTR_DAT_06312a80;
  if (lVar9 != 0) {
    *(undefined8 *)(lVar9 + 0x10) =
         *(undefined8 *)
          Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray<LightDataGI>__
    ;
    thunk_FUN_02bb0e9c();
    *(undefined8 *)(lVar9 + 0x18) = *(undefined8 *)puVar7;
    thunk_FUN_02bb0e9c();
    *(undefined8 *)(lVar9 + 0x30) = *(undefined8 *)puVar8;
    thunk_FUN_02bb0e9c();
    *(undefined8 *)(lVar9 + 0x38) = *(undefined8 *)puVar6;
    thunk_FUN_02bb0e9c();
    *(undefined8 *)(lVar9 + 0x40) = *(undefined8 *)puVar2;
    thunk_FUN_02bb0e9c();
    lVar10 = thunk_FUN_02b79644(*(undefined8 *)puVar4);
    FUN_037a5cd0(lVar10,*(undefined8 *)puVar5);
    lVar11 = thunk_FUN_02b79644(*(undefined8 *)puVar3);
    FUN_05b9af58(lVar11,0);
    if (lVar11 != 0) {
      *(undefined8 *)(lVar11 + 0x18) =
           *(undefined8 *)Method_Newtonsoft_Json_Linq_JToken_op_Explicit__;
      *(undefined4 *)(lVar11 + 0x10) = 0x164;
      thunk_FUN_02bb0e9c();
      puVar2 = Method_Newtonsoft_Json_Linq_JProperty_InsertItem__;
      if (lVar10 != 0) {
        lVar14 = *(long *)(lVar10 + 0x10);
        lVar15 = *(long *)Method_Newtonsoft_Json_Linq_JProperty_InsertItem__;
        *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
        if (lVar14 != 0) {
          uVar1 = *(uint *)(lVar10 + 0x18);
          if (uVar1 < *(uint *)(lVar14 + 0x18)) {
            *(uint *)(lVar10 + 0x18) = uVar1 + 1;
            plVar12 = (long *)(lVar14 + (long)(int)uVar1 * 8 + 0x20);
            *plVar12 = lVar11;
            thunk_FUN_02bb0e9c(plVar12,lVar11);
          }
          else {
            FUN_037a6538(lVar10,lVar11,
                         *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
          }
          lVar11 = thunk_FUN_02b79644(*(undefined8 *)puVar3);
          FUN_05b9af58(lVar11,0);
          if (lVar11 != 0) {
            *(undefined8 *)(lVar11 + 0x18) =
                 *(undefined8 *)Method_Newtonsoft_Json_Linq_JToken_Replace__;
            *(undefined4 *)(lVar11 + 0x10) = 0x264;
            thunk_FUN_02bb0e9c();
            lVar14 = *(long *)(lVar10 + 0x10);
            lVar15 = *(long *)puVar2;
            *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
            puVar3 = Method_OVRSimpleJSON_JSONLazyCreator_Set<JSONBool>__;
            puVar2 = Method_Newtonsoft_Json_Linq_JProperty_RemoveItemAt__;
            if (lVar14 != 0) {
              uVar1 = *(uint *)(lVar10 + 0x18);
              if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                plVar12 = (long *)(lVar14 + (long)(int)uVar1 * 8 + 0x20);
                *plVar12 = lVar11;
                thunk_FUN_02bb0e9c(plVar12,lVar11);
              }
              else {
                FUN_037a6538(lVar10,lVar11,
                             *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
              }
              *(long *)(lVar9 + 0x20) = lVar10;
              thunk_FUN_02bb0e9c((long *)(lVar9 + 0x20),lVar10);
              lVar10 = thunk_FUN_02b79644(*(undefined8 *)puVar3);
              FUN_037a5cd0(lVar10,*(undefined8 *)puVar2);
              puVar4 = Method_Newtonsoft_Json_Linq_JProperty_ClearItems__;
              lVar11 = thunk_FUN_02b79644(*(undefined8 *)
                                           Method_Newtonsoft_Json_Linq_JProperty_ClearItems__);
              FUN_05b9af50(lVar11,0);
              puVar5 = Method_System_Collections_Generic_List<InterpretedFrameInfo>_ToArray__;
              puVar3 = PTR_DAT_063145b8;
              puVar2 = PTR_DAT_063145b0;
              if (lVar11 != 0) {
                *(undefined8 *)(lVar11 + 0x10) =
                     *(undefined8 *)
                      Method_Oculus_Interaction_Interactable<HandGrabUseInteractor,_HandGrabUseInteractable>__ctor__
                ;
                thunk_FUN_02bb0e9c();
                *(undefined8 *)(lVar11 + 0x20) = *(undefined8 *)puVar5;
                thunk_FUN_02bb0e9c((undefined8 *)(lVar11 + 0x20));
                uVar13 = *(undefined8 *)puVar2;
                *(undefined4 *)(lVar11 + 0x18) = 2;
                lVar14 = thunk_FUN_02b79644(uVar13);
                FUN_037a5cd0(lVar14,*(undefined8 *)puVar3);
                puVar3 = PTR_DAT_063173b8;
                if (lVar14 != 0) {
                  lVar15 = *(long *)(lVar14 + 0x10);
                  uVar13 = *(undefined8 *)
                            Method_System_Linq_Enumerable_Select<KeyValuePair<string,_JsonParser_JsonValue>,_string>__
                  ;
                  lVar16 = *(long *)PTR_DAT_063173b8;
                  *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
                  if (lVar15 != 0) {
                    uVar1 = *(uint *)(lVar14 + 0x18);
                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                      *(uint *)(lVar14 + 0x18) = uVar1 + 1;
                      *(undefined8 *)(lVar15 + (long)(int)uVar1 * 8 + 0x20) = uVar13;
                      thunk_FUN_02bb0e9c();
                    }
                    else {
                      FUN_037a6538(lVar14,uVar13,
                                   *(undefined8 *)
                                    (*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
                    }
                    *(long *)(lVar11 + 0x30) = lVar14;
                    thunk_FUN_02bb0e9c((long *)(lVar11 + 0x30),lVar14);
                    lVar14 = thunk_FUN_02b79644(*(undefined8 *)
                                                 Method_OVRSimpleJSON_JSONLazyCreator_Set<JSONNumber>__
                                               );
                    FUN_037a5cd0(lVar14,*(undefined8 *)
                                         Method_Newtonsoft_Json_Linq_JPropertyKeyedCollection_Contains__
                                );
                    lVar15 = thunk_FUN_02b79644(*(undefined8 *)
                                                 Method_Newtonsoft_Json_Linq_JObject_ValidateToken__
                                               );
                    FUN_05b9af48(lVar15,0);
                    if (lVar15 != 0) {
                      *(undefined8 *)(lVar15 + 0x18) =
                           *(undefined8 *)
                            Method_Newtonsoft_Json_JsonSerializer_set_DefaultValueHandling__;
                      thunk_FUN_02bb0e9c();
                      *(undefined8 *)(lVar15 + 0x10) = *(undefined8 *)puVar8;
                      thunk_FUN_02bb0e9c();
                      puVar5 = Method_Newtonsoft_Json_Linq_JProperty_Load__;
                      if (lVar14 != 0) {
                        lVar16 = *(long *)(lVar14 + 0x10);
                        lVar17 = *(long *)Method_Newtonsoft_Json_Linq_JProperty_Load__;
                        *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
                        if (lVar16 != 0) {
                          uVar1 = *(uint *)(lVar14 + 0x18);
                          if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                            *(uint *)(lVar14 + 0x18) = uVar1 + 1;
                            plVar12 = (long *)(lVar16 + (long)(int)uVar1 * 8 + 0x20);
                            *plVar12 = lVar15;
                            thunk_FUN_02bb0e9c(plVar12,lVar15);
                          }
                          else {
                            FUN_037a6538(lVar14,lVar15,
                                         *(undefined8 *)
                                          (*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
                          }
                          *(long *)(lVar11 + 0x28) = lVar14;
                          thunk_FUN_02bb0e9c((long *)(lVar11 + 0x28),lVar14);
                          puVar6 = Method_Newtonsoft_Json_Linq_JProperty_RemoveItem__;
                          if (lVar10 != 0) {
                            lVar14 = *(long *)(lVar10 + 0x10);
                            lVar15 = *(long *)Method_Newtonsoft_Json_Linq_JProperty_RemoveItem__;
                            *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
                            if (lVar14 != 0) {
                              uVar1 = *(uint *)(lVar10 + 0x18);
                              if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                plVar12 = (long *)(lVar14 + (long)(int)uVar1 * 8 + 0x20);
                                *plVar12 = lVar11;
                                thunk_FUN_02bb0e9c(plVar12,lVar11);
                              }
                              else {
                                FUN_037a6538(lVar10,lVar11,
                                             *(undefined8 *)
                                              (*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
                              }
                              lVar11 = thunk_FUN_02b79644(*(undefined8 *)puVar4);
                              FUN_05b9af50(lVar11,0);
                              puVar7 = 
                              Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray<Quaternion>__
                              ;
                              if (lVar11 != 0) {
                                *(undefined8 *)(lVar11 + 0x10) =
                                     *(undefined8 *)
                                      Method_Oculus_Interaction_Interactable<HandGrabInteractor,_HandGrabInteractable>_get_WhenSelectingInteractorAdded__
                                ;
                                thunk_FUN_02bb0e9c();
                                *(undefined8 *)(lVar11 + 0x20) = *(undefined8 *)puVar7;
                                thunk_FUN_02bb0e9c((undefined8 *)(lVar11 + 0x20));
                                uVar13 = *(undefined8 *)puVar2;
                                *(undefined4 *)(lVar11 + 0x18) = 2;
                                lVar14 = thunk_FUN_02b79644(uVar13);
                                FUN_037a5cd0(lVar14,*(undefined8 *)PTR_DAT_063145b8);
                                if (lVar14 != 0) {
                                  lVar15 = *(long *)(lVar14 + 0x10);
                                  uVar13 = *(undefined8 *)
                                            Method_System_Linq_Enumerable_Select<DynamicMetaObject,_Expression>__
                                  ;
                                  lVar16 = *(long *)puVar3;
                                  *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
                                  if (lVar15 != 0) {
                                    uVar1 = *(uint *)(lVar14 + 0x18);
                                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                      *(uint *)(lVar14 + 0x18) = uVar1 + 1;
                                      *(undefined8 *)(lVar15 + (long)(int)uVar1 * 8 + 0x20) = uVar13
                                      ;
                                      thunk_FUN_02bb0e9c();
                                    }
                                    else {
                                      FUN_037a6538(lVar14,uVar13,
                                                   *(undefined8 *)
                                                    (*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) +
                                                    0x70));
                                    }
                                    *(long *)(lVar11 + 0x30) = lVar14;
                                    thunk_FUN_02bb0e9c((long *)(lVar11 + 0x30),lVar14);
                                    lVar14 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                  
                                                  Method_OVRSimpleJSON_JSONLazyCreator_Set<JSONNumber>__
                                                  );
                                    FUN_037a5cd0(lVar14,*(undefined8 *)
                                                                                                                  
                                                  Method_Newtonsoft_Json_Linq_JPropertyKeyedCollection_Contains__
                                                );
                                    lVar15 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                  
                                                  Method_Newtonsoft_Json_Linq_JObject_ValidateToken__
                                                  );
                                    FUN_05b9af48(lVar15,0);
                                    if (lVar15 != 0) {
                                      *(undefined8 *)(lVar15 + 0x18) =
                                           *(undefined8 *)
                                            Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_CreateNewObject__
                                      ;
                                      thunk_FUN_02bb0e9c();
                                      *(undefined8 *)(lVar15 + 0x10) = *(undefined8 *)puVar8;
                                      thunk_FUN_02bb0e9c();
                                      if (lVar14 != 0) {
                                        lVar16 = *(long *)(lVar14 + 0x10);
                                        lVar17 = *(long *)puVar5;
                                        *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
                                        if (lVar16 != 0) {
                                          uVar1 = *(uint *)(lVar14 + 0x18);
                                          if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                            *(uint *)(lVar14 + 0x18) = uVar1 + 1;
                                            plVar12 = (long *)(lVar16 + (long)(int)uVar1 * 8 + 0x20)
                                            ;
                                            *plVar12 = lVar15;
                                            thunk_FUN_02bb0e9c(plVar12,lVar15);
                                          }
                                          else {
                                            FUN_037a6538(lVar14,lVar15,
                                                         *(undefined8 *)
                                                          (*(long *)(*(long *)(lVar17 + 0x20) + 0xc0
                                                                    ) + 0x70));
                                          }
                                          *(long *)(lVar11 + 0x28) = lVar14;
                                          thunk_FUN_02bb0e9c((long *)(lVar11 + 0x28),lVar14);
                                          lVar14 = *(long *)(lVar10 + 0x10);
                                          lVar15 = *(long *)puVar6;
                                          *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
                                          if (lVar14 != 0) {
                                            uVar1 = *(uint *)(lVar10 + 0x18);
                                            if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                              *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                              plVar12 = (long *)(lVar14 + (long)(int)uVar1 * 8 +
                                                                0x20);
                                              *plVar12 = lVar11;
                                              thunk_FUN_02bb0e9c(plVar12,lVar11);
                                            }
                                            else {
                                              FUN_037a6538(lVar10,lVar11,
                                                           *(undefined8 *)
                                                            (*(long *)(*(long *)(lVar15 + 0x20) +
                                                                      0xc0) + 0x70));
                                            }
                                            lVar11 = thunk_FUN_02b79644(*(undefined8 *)puVar4);
                                            FUN_05b9af50(lVar11,0);
                                            puVar4 = PTR_DAT_0631b1e8;
                                            if (lVar11 != 0) {
                                              *(undefined8 *)(lVar11 + 0x10) =
                                                   *(undefined8 *)
                                                                                                        
                                                  Method_Oculus_Interaction_Interactable<HandGrabInteractor,_HandGrabInteractable>_remove_WhenStateChanged__
                                              ;
                                              thunk_FUN_02bb0e9c();
                                              *(undefined8 *)(lVar11 + 0x20) = *(undefined8 *)puVar4
                                              ;
                                              thunk_FUN_02bb0e9c((undefined8 *)(lVar11 + 0x20));
                                              uVar13 = *(undefined8 *)puVar2;
                                              *(undefined4 *)(lVar11 + 0x18) = 1;
                                              lVar14 = thunk_FUN_02b79644(uVar13);
                                              FUN_037a5cd0(lVar14,*(undefined8 *)PTR_DAT_063145b8);
                                              if (lVar14 != 0) {
                                                lVar15 = *(long *)(lVar14 + 0x10);
                                                uVar13 = *(undefined8 *)puVar4;
                                                lVar16 = *(long *)puVar3;
                                                *(int *)(lVar14 + 0x1c) =
                                                     *(int *)(lVar14 + 0x1c) + 1;
                                                if (lVar15 != 0) {
                                                  uVar1 = *(uint *)(lVar14 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                    *(uint *)(lVar14 + 0x18) = uVar1 + 1;
                                                    *(undefined8 *)
                                                     (lVar15 + (long)(int)uVar1 * 8 + 0x20) = uVar13
                                                    ;
                                                    thunk_FUN_02bb0e9c();
                                                  }
                                                  else {
                                                    FUN_037a6538(lVar14,uVar13,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar16 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                  }
                                                  *(long *)(lVar11 + 0x30) = lVar14;
                                                  thunk_FUN_02bb0e9c((long *)(lVar11 + 0x30),lVar14)
                                                  ;
                                                  lVar14 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                              
                                                  Method_OVRSimpleJSON_JSONLazyCreator_Set<JSONNumber>__
                                                  );
                                                  FUN_037a5cd0(lVar14,*(undefined8 *)
                                                                                                                                              
                                                  Method_Newtonsoft_Json_Linq_JPropertyKeyedCollection_Contains__
                                                  );
                                                  lVar15 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                              
                                                  Method_Newtonsoft_Json_Linq_JObject_ValidateToken__
                                                  );
                                                  FUN_05b9af48(lVar15,0);
                                                  puVar4 = 
                                                  Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_EndProcessProperty__
                                                  ;
                                                  if (lVar15 != 0) {
                                                    *(undefined8 *)(lVar15 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_EndProcessProperty__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar15 + 0x10) =
                                                       *(undefined8 *)puVar8;
                                                  thunk_FUN_02bb0e9c();
                                                  if (lVar14 != 0) {
                                                    lVar16 = *(long *)(lVar14 + 0x10);
                                                    lVar17 = *(long *)puVar5;
                                                    *(int *)(lVar14 + 0x1c) =
                                                         *(int *)(lVar14 + 0x1c) + 1;
                                                    if (lVar16 != 0) {
                                                      uVar1 = *(uint *)(lVar14 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                        *(uint *)(lVar14 + 0x18) = uVar1 + 1;
                                                        plVar12 = (long *)(lVar16 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar12 = lVar15;
                                                        thunk_FUN_02bb0e9c(plVar12,lVar15);
                                                      }
                                                      else {
                                                        FUN_037a6538(lVar14,lVar15,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar11 + 0x28) = lVar14;
                                                  thunk_FUN_02bb0e9c((long *)(lVar11 + 0x28),lVar14)
                                                  ;
                                                  lVar14 = *(long *)(lVar10 + 0x10);
                                                  lVar15 = *(long *)puVar6;
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                      plVar12 = (long *)(lVar14 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar12 = lVar11;
                                                      thunk_FUN_02bb0e9c(plVar12,lVar11);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar10,lVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar11 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                              
                                                  Method_Newtonsoft_Json_Linq_JProperty_ClearItems__
                                                  );
                                                  FUN_05b9af50(lVar11,0);
                                                  puVar7 = 
                                                  Method_Newtonsoft_Json_JsonSerializer_set_NullValueHandling__
                                                  ;
                                                  if (lVar11 != 0) {
                                                    *(undefined8 *)(lVar11 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Oculus_Interaction_Interactable<HandGrabInteractor,_HandGrabInteractable>_add_WhenStateChanged__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar11 + 0x20) =
                                                       *(undefined8 *)puVar7;
                                                  thunk_FUN_02bb0e9c((undefined8 *)(lVar11 + 0x20));
                                                  uVar13 = *(undefined8 *)puVar2;
                                                  *(undefined4 *)(lVar11 + 0x18) = 0;
                                                  lVar14 = thunk_FUN_02b79644(uVar13);
                                                  FUN_037a5cd0(lVar14,*(undefined8 *)
                                                                       PTR_DAT_063145b8);
                                                  if (lVar14 != 0) {
                                                    lVar15 = *(long *)(lVar14 + 0x10);
                                                    uVar13 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Linq_Enumerable_Select<DataColumn,_Type>__
                                                  ;
                                                  lVar16 = *(long *)puVar3;
                                                  *(int *)(lVar14 + 0x1c) =
                                                       *(int *)(lVar14 + 0x1c) + 1;
                                                  if (lVar15 != 0) {
                                                    uVar1 = *(uint *)(lVar14 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar14 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar15 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar13;
                                                      thunk_FUN_02bb0e9c();
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar14,uVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar11 + 0x30) = lVar14;
                                                  thunk_FUN_02bb0e9c((long *)(lVar11 + 0x30),lVar14)
                                                  ;
                                                  lVar14 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                              
                                                  Method_OVRSimpleJSON_JSONLazyCreator_Set<JSONNumber>__
                                                  );
                                                  FUN_037a5cd0(lVar14,*(undefined8 *)
                                                                                                                                              
                                                  Method_Newtonsoft_Json_Linq_JPropertyKeyedCollection_Contains__
                                                  );
                                                  lVar15 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                              
                                                  Method_Newtonsoft_Json_Linq_JObject_ValidateToken__
                                                  );
                                                  FUN_05b9af48(lVar15,0);
                                                  if (lVar15 != 0) {
                                                    *(undefined8 *)(lVar15 + 0x18) =
                                                         *(undefined8 *)puVar4;
                                                    thunk_FUN_02bb0e9c();
                                                    *(undefined8 *)(lVar15 + 0x10) =
                                                         *(undefined8 *)puVar8;
                                                    thunk_FUN_02bb0e9c();
                                                    if (lVar14 != 0) {
                                                      lVar16 = *(long *)(lVar14 + 0x10);
                                                      lVar17 = *(long *)puVar5;
                                                      *(int *)(lVar14 + 0x1c) =
                                                           *(int *)(lVar14 + 0x1c) + 1;
                                                      if (lVar16 != 0) {
                                                        uVar1 = *(uint *)(lVar14 + 0x18);
                                                        if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                          *(uint *)(lVar14 + 0x18) = uVar1 + 1;
                                                          plVar12 = (long *)(lVar16 + (long)(int)
                                                  uVar1 * 8 + 0x20);
                                                  *plVar12 = lVar15;
                                                  thunk_FUN_02bb0e9c(plVar12,lVar15);
                                                  }
                                                  else {
                                                    FUN_037a6538(lVar14,lVar15,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar17 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                  }
                                                  *(long *)(lVar11 + 0x28) = lVar14;
                                                  thunk_FUN_02bb0e9c((long *)(lVar11 + 0x28),lVar14)
                                                  ;
                                                  lVar14 = *(long *)(lVar10 + 0x10);
                                                  lVar15 = *(long *)puVar6;
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                      plVar12 = (long *)(lVar14 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar12 = lVar11;
                                                      thunk_FUN_02bb0e9c(plVar12,lVar11);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar10,lVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar11 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                              
                                                  Method_Newtonsoft_Json_Linq_JProperty_ClearItems__
                                                  );
                                                  FUN_05b9af50(lVar11,0);
                                                  puVar4 = 
                                                  OVR_OpenVR_IVRSystem__GetControllerStateWithPose_TypeInfo
                                                  ;
                                                  if (lVar11 != 0) {
                                                    *(undefined8 *)(lVar11 + 0x10) =
                                                         *(undefined8 *)PTR_DAT_063210b8;
                                                    thunk_FUN_02bb0e9c();
                                                    *(undefined8 *)(lVar11 + 0x20) =
                                                         *(undefined8 *)puVar4;
                                                    thunk_FUN_02bb0e9c((undefined8 *)(lVar11 + 0x20)
                                                                      );
                                                    uVar13 = *(undefined8 *)puVar2;
                                                    *(undefined4 *)(lVar11 + 0x18) = 0;
                                                    lVar14 = thunk_FUN_02b79644(uVar13);
                                                    FUN_037a5cd0(lVar14,*(undefined8 *)
                                                                         PTR_DAT_063145b8);
                                                    if (lVar14 != 0) {
                                                      lVar15 = *(long *)(lVar14 + 0x10);
                                                      uVar13 = *(undefined8 *)
                                                                                                                                
                                                  Method_System_Linq_Enumerable_Select<Enum,_int>__;
                                                  lVar16 = *(long *)puVar3;
                                                  *(int *)(lVar14 + 0x1c) =
                                                       *(int *)(lVar14 + 0x1c) + 1;
                                                  if (lVar15 != 0) {
                                                    uVar1 = *(uint *)(lVar14 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar14 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar15 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar13;
                                                      thunk_FUN_02bb0e9c();
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar14,uVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar11 + 0x30) = lVar14;
                                                  thunk_FUN_02bb0e9c((long *)(lVar11 + 0x30),lVar14)
                                                  ;
                                                  lVar14 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                              
                                                  Method_OVRSimpleJSON_JSONLazyCreator_Set<JSONNumber>__
                                                  );
                                                  FUN_037a5cd0(lVar14,*(undefined8 *)
                                                                                                                                              
                                                  Method_Newtonsoft_Json_Linq_JPropertyKeyedCollection_Contains__
                                                  );
                                                  lVar15 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                              
                                                  Method_Newtonsoft_Json_Linq_JObject_ValidateToken__
                                                  );
                                                  FUN_05b9af48(lVar15,0);
                                                  if (lVar15 != 0) {
                                                    *(undefined8 *)(lVar15 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Newtonsoft_Json_JsonReader_set_DateParseHandling__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar15 + 0x10) =
                                                       *(undefined8 *)puVar8;
                                                  thunk_FUN_02bb0e9c();
                                                  if (lVar14 != 0) {
                                                    lVar16 = *(long *)(lVar14 + 0x10);
                                                    lVar17 = *(long *)puVar5;
                                                    *(int *)(lVar14 + 0x1c) =
                                                         *(int *)(lVar14 + 0x1c) + 1;
                                                    if (lVar16 != 0) {
                                                      uVar1 = *(uint *)(lVar14 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                        *(uint *)(lVar14 + 0x18) = uVar1 + 1;
                                                        plVar12 = (long *)(lVar16 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar12 = lVar15;
                                                        thunk_FUN_02bb0e9c(plVar12,lVar15);
                                                      }
                                                      else {
                                                        FUN_037a6538(lVar14,lVar15,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar11 + 0x28) = lVar14;
                                                  thunk_FUN_02bb0e9c((long *)(lVar11 + 0x28),lVar14)
                                                  ;
                                                  lVar14 = *(long *)(lVar10 + 0x10);
                                                  lVar15 = *(long *)puVar6;
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                      plVar12 = (long *)(lVar14 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar12 = lVar11;
                                                      thunk_FUN_02bb0e9c(plVar12,lVar11);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar10,lVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar11 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                              
                                                  Method_Newtonsoft_Json_Linq_JProperty_ClearItems__
                                                  );
                                                  FUN_05b9af50(lVar11,0);
                                                  puVar4 = PTR_DAT_0631b1f0;
                                                  if (lVar11 != 0) {
                                                    *(undefined8 *)(lVar11 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Oculus_Interaction_Interactable<HandGrabUseInteractor,_HandGrabUseInteractable>_SelectingInteractorAdded__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar11 + 0x20) =
                                                       *(undefined8 *)puVar4;
                                                  thunk_FUN_02bb0e9c((undefined8 *)(lVar11 + 0x20));
                                                  uVar13 = *(undefined8 *)puVar2;
                                                  *(undefined4 *)(lVar11 + 0x18) = 1;
                                                  lVar14 = thunk_FUN_02b79644(uVar13);
                                                  FUN_037a5cd0(lVar14,*(undefined8 *)
                                                                       PTR_DAT_063145b8);
                                                  if (lVar14 != 0) {
                                                    lVar15 = *(long *)(lVar14 + 0x10);
                                                    uVar13 = *(undefined8 *)puVar4;
                                                    lVar16 = *(long *)puVar3;
                                                    *(int *)(lVar14 + 0x1c) =
                                                         *(int *)(lVar14 + 0x1c) + 1;
                                                    if (lVar15 != 0) {
                                                      uVar1 = *(uint *)(lVar14 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                        *(uint *)(lVar14 + 0x18) = uVar1 + 1;
                                                        *(undefined8 *)
                                                         (lVar15 + (long)(int)uVar1 * 8 + 0x20) =
                                                             uVar13;
                                                        thunk_FUN_02bb0e9c();
                                                      }
                                                      else {
                                                        FUN_037a6538(lVar14,uVar13,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar11 + 0x30) = lVar14;
                                                  thunk_FUN_02bb0e9c((long *)(lVar11 + 0x30),lVar14)
                                                  ;
                                                  lVar14 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                              
                                                  Method_OVRSimpleJSON_JSONLazyCreator_Set<JSONNumber>__
                                                  );
                                                  FUN_037a5cd0(lVar14,*(undefined8 *)
                                                                                                                                              
                                                  Method_Newtonsoft_Json_Linq_JPropertyKeyedCollection_Contains__
                                                  );
                                                  lVar15 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                              
                                                  Method_Newtonsoft_Json_Linq_JObject_ValidateToken__
                                                  );
                                                  FUN_05b9af48(lVar15,0);
                                                  puVar4 = 
                                                  Method_Newtonsoft_Json_JsonSerializer_set_SerializationBinder__
                                                  ;
                                                  if (lVar15 != 0) {
                                                    *(undefined8 *)(lVar15 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Newtonsoft_Json_JsonSerializer_set_SerializationBinder__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar15 + 0x10) =
                                                       *(undefined8 *)puVar8;
                                                  thunk_FUN_02bb0e9c();
                                                  if (lVar14 != 0) {
                                                    lVar16 = *(long *)(lVar14 + 0x10);
                                                    lVar17 = *(long *)puVar5;
                                                    *(int *)(lVar14 + 0x1c) =
                                                         *(int *)(lVar14 + 0x1c) + 1;
                                                    if (lVar16 != 0) {
                                                      uVar1 = *(uint *)(lVar14 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                        *(uint *)(lVar14 + 0x18) = uVar1 + 1;
                                                        plVar12 = (long *)(lVar16 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar12 = lVar15;
                                                        thunk_FUN_02bb0e9c(plVar12,lVar15);
                                                      }
                                                      else {
                                                        FUN_037a6538(lVar14,lVar15,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar11 + 0x28) = lVar14;
                                                  thunk_FUN_02bb0e9c((long *)(lVar11 + 0x28),lVar14)
                                                  ;
                                                  lVar14 = *(long *)(lVar10 + 0x10);
                                                  lVar15 = *(long *)puVar6;
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                      plVar12 = (long *)(lVar14 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar12 = lVar11;
                                                      thunk_FUN_02bb0e9c(plVar12,lVar11);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar10,lVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar11 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                              
                                                  Method_Newtonsoft_Json_Linq_JProperty_ClearItems__
                                                  );
                                                  FUN_05b9af50(lVar11,0);
                                                  puVar7 = 
                                                  Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_AddReference__
                                                  ;
                                                  if (lVar11 != 0) {
                                                    *(undefined8 *)(lVar11 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Oculus_Interaction_Interactable<HandGrabUseInteractor,_HandGrabUseInteractable>_Awake__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar11 + 0x20) =
                                                       *(undefined8 *)puVar7;
                                                  thunk_FUN_02bb0e9c((undefined8 *)(lVar11 + 0x20));
                                                  uVar13 = *(undefined8 *)puVar2;
                                                  *(undefined4 *)(lVar11 + 0x18) = 0;
                                                  lVar14 = thunk_FUN_02b79644(uVar13);
                                                  FUN_037a5cd0(lVar14,*(undefined8 *)
                                                                       PTR_DAT_063145b8);
                                                  if (lVar14 != 0) {
                                                    lVar15 = *(long *)(lVar14 + 0x10);
                                                    uVar13 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Linq_Enumerable_Select<AndroidAxis,_string>__
                                                  ;
                                                  lVar16 = *(long *)puVar3;
                                                  *(int *)(lVar14 + 0x1c) =
                                                       *(int *)(lVar14 + 0x1c) + 1;
                                                  if (lVar15 != 0) {
                                                    uVar1 = *(uint *)(lVar14 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar14 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar15 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar13;
                                                      thunk_FUN_02bb0e9c();
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar14,uVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar11 + 0x30) = lVar14;
                                                  thunk_FUN_02bb0e9c((long *)(lVar11 + 0x30),lVar14)
                                                  ;
                                                  lVar14 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                              
                                                  Method_OVRSimpleJSON_JSONLazyCreator_Set<JSONNumber>__
                                                  );
                                                  FUN_037a5cd0(lVar14,*(undefined8 *)
                                                                                                                                              
                                                  Method_Newtonsoft_Json_Linq_JPropertyKeyedCollection_Contains__
                                                  );
                                                  lVar15 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                              
                                                  Method_Newtonsoft_Json_Linq_JObject_ValidateToken__
                                                  );
                                                  FUN_05b9af48(lVar15,0);
                                                  if (lVar15 != 0) {
                                                    *(undefined8 *)(lVar15 + 0x18) =
                                                         *(undefined8 *)puVar4;
                                                    thunk_FUN_02bb0e9c();
                                                    *(undefined8 *)(lVar15 + 0x10) =
                                                         *(undefined8 *)puVar8;
                                                    thunk_FUN_02bb0e9c();
                                                    if (lVar14 != 0) {
                                                      lVar16 = *(long *)(lVar14 + 0x10);
                                                      lVar17 = *(long *)puVar5;
                                                      *(int *)(lVar14 + 0x1c) =
                                                           *(int *)(lVar14 + 0x1c) + 1;
                                                      puVar4 = 
                                                  Method_Newtonsoft_Json_Linq_JProperty_ClearItems__
                                                  ;
                                                  if (lVar16 != 0) {
                                                    uVar1 = *(uint *)(lVar14 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                      *(uint *)(lVar14 + 0x18) = uVar1 + 1;
                                                      plVar12 = (long *)(lVar16 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar12 = lVar15;
                                                      thunk_FUN_02bb0e9c(plVar12,lVar15);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar14,lVar15,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar11 + 0x28) = lVar14;
                                                  thunk_FUN_02bb0e9c((long *)(lVar11 + 0x28),lVar14)
                                                  ;
                                                  lVar14 = *(long *)(lVar10 + 0x10);
                                                  lVar15 = *(long *)puVar6;
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                      plVar12 = (long *)(lVar14 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar12 = lVar11;
                                                      thunk_FUN_02bb0e9c(plVar12,lVar11);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar10,lVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar11 = thunk_FUN_02b79644(*(undefined8 *)puVar4)
                                                  ;
                                                  FUN_05b9af50(lVar11,0);
                                                  puVar7 = 
                                                  Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray<Matrix4x4>__
                                                  ;
                                                  if (lVar11 != 0) {
                                                    *(undefined8 *)(lVar11 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>__ctor__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar11 + 0x20) =
                                                       *(undefined8 *)puVar7;
                                                  thunk_FUN_02bb0e9c((undefined8 *)(lVar11 + 0x20));
                                                  uVar13 = *(undefined8 *)puVar2;
                                                  *(undefined4 *)(lVar11 + 0x18) = 0;
                                                  lVar14 = thunk_FUN_02b79644(uVar13);
                                                  FUN_037a5cd0(lVar14,*(undefined8 *)
                                                                       PTR_DAT_063145b8);
                                                  if (lVar14 != 0) {
                                                    lVar15 = *(long *)(lVar14 + 0x10);
                                                    uVar13 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Linq_Enumerable_Select<EnumMemberAttribute,_string>__
                                                  ;
                                                  lVar16 = *(long *)puVar3;
                                                  *(int *)(lVar14 + 0x1c) =
                                                       *(int *)(lVar14 + 0x1c) + 1;
                                                  if (lVar15 != 0) {
                                                    uVar1 = *(uint *)(lVar14 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar14 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar15 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar13;
                                                      thunk_FUN_02bb0e9c();
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar14,uVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar11 + 0x30) = lVar14;
                                                  thunk_FUN_02bb0e9c((long *)(lVar11 + 0x30),lVar14)
                                                  ;
                                                  lVar14 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                              
                                                  Method_OVRSimpleJSON_JSONLazyCreator_Set<JSONNumber>__
                                                  );
                                                  FUN_037a5cd0(lVar14,*(undefined8 *)
                                                                                                                                              
                                                  Method_Newtonsoft_Json_Linq_JPropertyKeyedCollection_Contains__
                                                  );
                                                  lVar15 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                              
                                                  Method_Newtonsoft_Json_Linq_JObject_ValidateToken__
                                                  );
                                                  FUN_05b9af48(lVar15,0);
                                                  if (lVar15 != 0) {
                                                    *(undefined8 *)(lVar15 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Newtonsoft_Json_JsonSerializer_Deserialize<RegexOptions>__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar15 + 0x10) =
                                                       *(undefined8 *)puVar8;
                                                  thunk_FUN_02bb0e9c();
                                                  if (lVar14 != 0) {
                                                    lVar16 = *(long *)(lVar14 + 0x10);
                                                    lVar17 = *(long *)puVar5;
                                                    *(int *)(lVar14 + 0x1c) =
                                                         *(int *)(lVar14 + 0x1c) + 1;
                                                    if (lVar16 != 0) {
                                                      uVar1 = *(uint *)(lVar14 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                        *(uint *)(lVar14 + 0x18) = uVar1 + 1;
                                                        plVar12 = (long *)(lVar16 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar12 = lVar15;
                                                        thunk_FUN_02bb0e9c(plVar12,lVar15);
                                                      }
                                                      else {
                                                        FUN_037a6538(lVar14,lVar15,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar11 + 0x28) = lVar14;
                                                  thunk_FUN_02bb0e9c((long *)(lVar11 + 0x28),lVar14)
                                                  ;
                                                  lVar14 = *(long *)(lVar10 + 0x10);
                                                  lVar15 = *(long *)puVar6;
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                      plVar12 = (long *)(lVar14 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar12 = lVar11;
                                                      thunk_FUN_02bb0e9c(plVar12,lVar11);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar10,lVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar11 = thunk_FUN_02b79644(*(undefined8 *)puVar4)
                                                  ;
                                                  FUN_05b9af50(lVar11,0);
                                                  puVar7 = 
                                                  Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray<Plane>__
                                                  ;
                                                  if (lVar11 != 0) {
                                                    *(undefined8 *)(lVar11 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Oculus_Interaction_Interactable<SnapInteractor,_SnapInteractable>_get_SelectingInteractors__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar11 + 0x20) =
                                                       *(undefined8 *)puVar7;
                                                  thunk_FUN_02bb0e9c((undefined8 *)(lVar11 + 0x20));
                                                  uVar13 = *(undefined8 *)puVar2;
                                                  *(undefined4 *)(lVar11 + 0x18) = 0;
                                                  lVar14 = thunk_FUN_02b79644(uVar13);
                                                  FUN_037a5cd0(lVar14,*(undefined8 *)
                                                                       PTR_DAT_063145b8);
                                                  if (lVar14 != 0) {
                                                    lVar15 = *(long *)(lVar14 + 0x10);
                                                    uVar13 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Linq_Enumerable_Select<IGrouping<HandFinger,_ValueTuple<HandFinger,_IReadOnlyList<ShapeRecognizer_FingerFeatureConfig>>>,_<>f__AnonymousType0<HandFinger,_IEnumerable<ShapeRecognizer_FingerFeatureConfig>>>__
                                                  ;
                                                  lVar16 = *(long *)puVar3;
                                                  *(int *)(lVar14 + 0x1c) =
                                                       *(int *)(lVar14 + 0x1c) + 1;
                                                  if (lVar15 != 0) {
                                                    uVar1 = *(uint *)(lVar14 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar14 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar15 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar13;
                                                      thunk_FUN_02bb0e9c();
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar14,uVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar11 + 0x30) = lVar14;
                                                  thunk_FUN_02bb0e9c((long *)(lVar11 + 0x30),lVar14)
                                                  ;
                                                  lVar14 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                              
                                                  Method_OVRSimpleJSON_JSONLazyCreator_Set<JSONNumber>__
                                                  );
                                                  FUN_037a5cd0(lVar14,*(undefined8 *)
                                                                                                                                              
                                                  Method_Newtonsoft_Json_Linq_JPropertyKeyedCollection_Contains__
                                                  );
                                                  lVar15 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                              
                                                  Method_Newtonsoft_Json_Linq_JObject_ValidateToken__
                                                  );
                                                  FUN_05b9af48(lVar15,0);
                                                  if (lVar15 != 0) {
                                                    *(undefined8 *)(lVar15 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_CreateObject__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar15 + 0x10) =
                                                       *(undefined8 *)puVar8;
                                                  thunk_FUN_02bb0e9c();
                                                  if (lVar14 != 0) {
                                                    lVar16 = *(long *)(lVar14 + 0x10);
                                                    lVar17 = *(long *)puVar5;
                                                    *(int *)(lVar14 + 0x1c) =
                                                         *(int *)(lVar14 + 0x1c) + 1;
                                                    if (lVar16 != 0) {
                                                      uVar1 = *(uint *)(lVar14 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                        *(uint *)(lVar14 + 0x18) = uVar1 + 1;
                                                        plVar12 = (long *)(lVar16 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar12 = lVar15;
                                                        thunk_FUN_02bb0e9c(plVar12,lVar15);
                                                      }
                                                      else {
                                                        FUN_037a6538(lVar14,lVar15,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar11 + 0x28) = lVar14;
                                                  thunk_FUN_02bb0e9c((long *)(lVar11 + 0x28),lVar14)
                                                  ;
                                                  lVar14 = *(long *)(lVar10 + 0x10);
                                                  lVar15 = *(long *)puVar6;
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                      plVar12 = (long *)(lVar14 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar12 = lVar11;
                                                      thunk_FUN_02bb0e9c(plVar12,lVar11);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar10,lVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar11 = thunk_FUN_02b79644(*(undefined8 *)puVar4)
                                                  ;
                                                  FUN_05b9af50(lVar11,0);
                                                  puVar7 = 
                                                  Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray<LODFadeMode>__
                                                  ;
                                                  if (lVar11 != 0) {
                                                    *(undefined8 *)(lVar11 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Oculus_Interaction_Interactable<TeleportInteractor,_TeleportInteractable>__ctor__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar11 + 0x20) =
                                                       *(undefined8 *)puVar7;
                                                  thunk_FUN_02bb0e9c((undefined8 *)(lVar11 + 0x20));
                                                  uVar13 = *(undefined8 *)puVar2;
                                                  *(undefined4 *)(lVar11 + 0x18) = 0;
                                                  lVar14 = thunk_FUN_02b79644(uVar13);
                                                  FUN_037a5cd0(lVar14,*(undefined8 *)
                                                                       PTR_DAT_063145b8);
                                                  if (lVar14 != 0) {
                                                    lVar15 = *(long *)(lVar14 + 0x10);
                                                    uVar13 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Linq_Enumerable_Select<KeyValuePair<Guid,_PxrSpatialMeshInfo>,_Guid>__
                                                  ;
                                                  lVar16 = *(long *)puVar3;
                                                  *(int *)(lVar14 + 0x1c) =
                                                       *(int *)(lVar14 + 0x1c) + 1;
                                                  if (lVar15 != 0) {
                                                    uVar1 = *(uint *)(lVar14 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar14 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar15 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar13;
                                                      thunk_FUN_02bb0e9c();
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar14,uVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar11 + 0x30) = lVar14;
                                                  thunk_FUN_02bb0e9c((long *)(lVar11 + 0x30),lVar14)
                                                  ;
                                                  lVar14 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                              
                                                  Method_OVRSimpleJSON_JSONLazyCreator_Set<JSONNumber>__
                                                  );
                                                  FUN_037a5cd0(lVar14,*(undefined8 *)
                                                                                                                                              
                                                  Method_Newtonsoft_Json_Linq_JPropertyKeyedCollection_Contains__
                                                  );
                                                  lVar15 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                              
                                                  Method_Newtonsoft_Json_Linq_JObject_ValidateToken__
                                                  );
                                                  FUN_05b9af48(lVar15,0);
                                                  if (lVar15 != 0) {
                                                    *(undefined8 *)(lVar15 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_PopulateDictionary__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar15 + 0x10) =
                                                       *(undefined8 *)puVar8;
                                                  thunk_FUN_02bb0e9c();
                                                  if (lVar14 != 0) {
                                                    lVar16 = *(long *)(lVar14 + 0x10);
                                                    lVar17 = *(long *)puVar5;
                                                    *(int *)(lVar14 + 0x1c) =
                                                         *(int *)(lVar14 + 0x1c) + 1;
                                                    if (lVar16 != 0) {
                                                      uVar1 = *(uint *)(lVar14 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                        *(uint *)(lVar14 + 0x18) = uVar1 + 1;
                                                        plVar12 = (long *)(lVar16 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar12 = lVar15;
                                                        thunk_FUN_02bb0e9c(plVar12,lVar15);
                                                      }
                                                      else {
                                                        FUN_037a6538(lVar14,lVar15,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar11 + 0x28) = lVar14;
                                                  thunk_FUN_02bb0e9c((long *)(lVar11 + 0x28),lVar14)
                                                  ;
                                                  lVar14 = *(long *)(lVar10 + 0x10);
                                                  lVar15 = *(long *)puVar6;
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                      plVar12 = (long *)(lVar14 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar12 = lVar11;
                                                      thunk_FUN_02bb0e9c(plVar12,lVar11);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar10,lVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar11 = thunk_FUN_02b79644(*(undefined8 *)puVar4)
                                                  ;
                                                  FUN_05b9af50(lVar11,0);
                                                  puVar7 = 
                                                  Method_LitJson_JsonData_LitJson_IJsonWrapper_GetBoolean__
                                                  ;
                                                  if (lVar11 != 0) {
                                                    *(undefined8 *)(lVar11 + 0x10) =
                                                         *(undefined8 *)
                                                          Method_LitJson_JsonData__ctor__;
                                                    thunk_FUN_02bb0e9c();
                                                    *(undefined8 *)(lVar11 + 0x20) =
                                                         *(undefined8 *)puVar7;
                                                    thunk_FUN_02bb0e9c((undefined8 *)(lVar11 + 0x20)
                                                                      );
                                                    uVar13 = *(undefined8 *)puVar2;
                                                    *(undefined4 *)(lVar11 + 0x18) = 3;
                                                    lVar14 = thunk_FUN_02b79644(uVar13);
                                                    FUN_037a5cd0(lVar14,*(undefined8 *)
                                                                         PTR_DAT_063145b8);
                                                    if (lVar14 != 0) {
                                                      lVar15 = *(long *)(lVar14 + 0x10);
                                                      uVar13 = *(undefined8 *)
                                                                                                                                
                                                  Method_System_Globalization_JapaneseCalendar_ToFourDigitYear__
                                                  ;
                                                  lVar16 = *(long *)puVar3;
                                                  *(int *)(lVar14 + 0x1c) =
                                                       *(int *)(lVar14 + 0x1c) + 1;
                                                  if (lVar15 != 0) {
                                                    uVar1 = *(uint *)(lVar14 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar14 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar15 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar13;
                                                      thunk_FUN_02bb0e9c();
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar14,uVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar11 + 0x30) = lVar14;
                                                  thunk_FUN_02bb0e9c((long *)(lVar11 + 0x30),lVar14)
                                                  ;
                                                  lVar14 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                              
                                                  Method_OVRSimpleJSON_JSONLazyCreator_Set<JSONNumber>__
                                                  );
                                                  FUN_037a5cd0(lVar14,*(undefined8 *)
                                                                                                                                              
                                                  Method_Newtonsoft_Json_Linq_JPropertyKeyedCollection_Contains__
                                                  );
                                                  lVar15 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                              
                                                  Method_Newtonsoft_Json_Linq_JObject_ValidateToken__
                                                  );
                                                  FUN_05b9af48(lVar15,0);
                                                  if (lVar15 != 0) {
                                                    *(undefined8 *)(lVar15 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_LitJson_JsonData_LitJson_IJsonWrapper_GetLong__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar15 + 0x10) =
                                                       *(undefined8 *)puVar8;
                                                  thunk_FUN_02bb0e9c();
                                                  if (lVar14 != 0) {
                                                    lVar16 = *(long *)(lVar14 + 0x10);
                                                    lVar17 = *(long *)puVar5;
                                                    *(int *)(lVar14 + 0x1c) =
                                                         *(int *)(lVar14 + 0x1c) + 1;
                                                    if (lVar16 != 0) {
                                                      uVar1 = *(uint *)(lVar14 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                        *(uint *)(lVar14 + 0x18) = uVar1 + 1;
                                                        plVar12 = (long *)(lVar16 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar12 = lVar15;
                                                        thunk_FUN_02bb0e9c(plVar12,lVar15);
                                                      }
                                                      else {
                                                        FUN_037a6538(lVar14,lVar15,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar11 + 0x28) = lVar14;
                                                  thunk_FUN_02bb0e9c((long *)(lVar11 + 0x28),lVar14)
                                                  ;
                                                  lVar14 = *(long *)(lVar10 + 0x10);
                                                  lVar15 = *(long *)puVar6;
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                      plVar12 = (long *)(lVar14 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar12 = lVar11;
                                                      thunk_FUN_02bb0e9c(plVar12,lVar11);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar10,lVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar11 = thunk_FUN_02b79644(*(undefined8 *)puVar4)
                                                  ;
                                                  FUN_05b9af50(lVar11,0);
                                                  puVar7 = 
                                                  Method_Newtonsoft_Json_JsonConvert_DeserializeObject<Dictionary<string,_string>>__
                                                  ;
                                                  if (lVar11 != 0) {
                                                    *(undefined8 *)(lVar11 + 0x10) =
                                                         *(undefined8 *)PTR_DAT_06332138;
                                                    thunk_FUN_02bb0e9c();
                                                    *(undefined8 *)(lVar11 + 0x20) =
                                                         *(undefined8 *)puVar7;
                                                    thunk_FUN_02bb0e9c((undefined8 *)(lVar11 + 0x20)
                                                                      );
                                                    uVar13 = *(undefined8 *)puVar2;
                                                    *(undefined4 *)(lVar11 + 0x18) = 3;
                                                    lVar14 = thunk_FUN_02b79644(uVar13);
                                                    FUN_037a5cd0(lVar14,*(undefined8 *)
                                                                         PTR_DAT_063145b8);
                                                    if (lVar14 != 0) {
                                                      lVar15 = *(long *)(lVar14 + 0x10);
                                                      uVar13 = *(undefined8 *)
                                                                                                                                
                                                  Method_System_Collections_Generic_List<IntegratedSubsystemDescriptor>_GetEnumerator__
                                                  ;
                                                  lVar16 = *(long *)puVar3;
                                                  *(int *)(lVar14 + 0x1c) =
                                                       *(int *)(lVar14 + 0x1c) + 1;
                                                  if (lVar15 != 0) {
                                                    uVar1 = *(uint *)(lVar14 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar14 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar15 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar13;
                                                      thunk_FUN_02bb0e9c();
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar14,uVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar11 + 0x30) = lVar14;
                                                  thunk_FUN_02bb0e9c((long *)(lVar11 + 0x30),lVar14)
                                                  ;
                                                  lVar14 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                              
                                                  Method_OVRSimpleJSON_JSONLazyCreator_Set<JSONNumber>__
                                                  );
                                                  FUN_037a5cd0(lVar14,*(undefined8 *)
                                                                                                                                              
                                                  Method_Newtonsoft_Json_Linq_JPropertyKeyedCollection_Contains__
                                                  );
                                                  lVar15 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                              
                                                  Method_Newtonsoft_Json_Linq_JObject_ValidateToken__
                                                  );
                                                  FUN_05b9af48(lVar15,0);
                                                  if (lVar15 != 0) {
                                                    *(undefined8 *)(lVar15 + 0x18) =
                                                         *(undefined8 *)
                                                          Method_LitJson_JsonData_EnsureDictionary__
                                                    ;
                                                    thunk_FUN_02bb0e9c();
                                                    *(undefined8 *)(lVar15 + 0x10) =
                                                         *(undefined8 *)puVar8;
                                                    thunk_FUN_02bb0e9c();
                                                    if (lVar14 != 0) {
                                                      lVar16 = *(long *)(lVar14 + 0x10);
                                                      lVar17 = *(long *)puVar5;
                                                      *(int *)(lVar14 + 0x1c) =
                                                           *(int *)(lVar14 + 0x1c) + 1;
                                                      if (lVar16 != 0) {
                                                        uVar1 = *(uint *)(lVar14 + 0x18);
                                                        if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                          *(uint *)(lVar14 + 0x18) = uVar1 + 1;
                                                          plVar12 = (long *)(lVar16 + (long)(int)
                                                  uVar1 * 8 + 0x20);
                                                  *plVar12 = lVar15;
                                                  thunk_FUN_02bb0e9c(plVar12,lVar15);
                                                  }
                                                  else {
                                                    FUN_037a6538(lVar14,lVar15,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar17 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                  }
                                                  *(long *)(lVar11 + 0x28) = lVar14;
                                                  thunk_FUN_02bb0e9c((long *)(lVar11 + 0x28),lVar14)
                                                  ;
                                                  lVar14 = *(long *)(lVar10 + 0x10);
                                                  lVar15 = *(long *)puVar6;
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                      plVar12 = (long *)(lVar14 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar12 = lVar11;
                                                      thunk_FUN_02bb0e9c(plVar12,lVar11);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar10,lVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar11 = thunk_FUN_02b79644(*(undefined8 *)puVar4)
                                                  ;
                                                  FUN_05b9af50(lVar11,0);
                                                  puVar4 = 
                                                  Method_Newtonsoft_Json_JsonSerializer_set_MetadataPropertyHandling__
                                                  ;
                                                  if (lVar11 != 0) {
                                                    *(undefined8 *)(lVar11 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Newtonsoft_Json_Serialization_JsonSerializerInternalBase_GetErrorContext__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar11 + 0x20) =
                                                       *(undefined8 *)puVar4;
                                                  thunk_FUN_02bb0e9c((undefined8 *)(lVar11 + 0x20));
                                                  uVar13 = *(undefined8 *)puVar2;
                                                  *(undefined4 *)(lVar11 + 0x18) = 4;
                                                  lVar14 = thunk_FUN_02b79644(uVar13);
                                                  FUN_037a5cd0(lVar14,*(undefined8 *)
                                                                       PTR_DAT_063145b8);
                                                  if (lVar14 != 0) {
                                                    lVar15 = *(long *)(lVar14 + 0x10);
                                                    uVar13 = *(undefined8 *)
                                                                                                                            
                                                  Method_UnityEngine_InputSystem_InputControlExtensions_CopyState__
                                                  ;
                                                  lVar16 = *(long *)puVar3;
                                                  *(int *)(lVar14 + 0x1c) =
                                                       *(int *)(lVar14 + 0x1c) + 1;
                                                  if (lVar15 != 0) {
                                                    uVar1 = *(uint *)(lVar14 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar14 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar15 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar13;
                                                      thunk_FUN_02bb0e9c();
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar14,uVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar11 + 0x30) = lVar14;
                                                  thunk_FUN_02bb0e9c((long *)(lVar11 + 0x30),lVar14)
                                                  ;
                                                  lVar14 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                              
                                                  Method_OVRSimpleJSON_JSONLazyCreator_Set<JSONNumber>__
                                                  );
                                                  FUN_037a5cd0(lVar14,*(undefined8 *)
                                                                                                                                              
                                                  Method_Newtonsoft_Json_Linq_JPropertyKeyedCollection_Contains__
                                                  );
                                                  lVar15 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                              
                                                  Method_Newtonsoft_Json_Linq_JObject_ValidateToken__
                                                  );
                                                  FUN_05b9af48(lVar15,0);
                                                  if (lVar15 != 0) {
                                                    *(undefined8 *)(lVar15 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Newtonsoft_Json_JsonReader_set_FloatParseHandling__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar15 + 0x10) =
                                                       *(undefined8 *)puVar8;
                                                  thunk_FUN_02bb0e9c();
                                                  if (lVar14 != 0) {
                                                    lVar16 = *(long *)(lVar14 + 0x10);
                                                    lVar17 = *(long *)puVar5;
                                                    *(int *)(lVar14 + 0x1c) =
                                                         *(int *)(lVar14 + 0x1c) + 1;
                                                    if (lVar16 != 0) {
                                                      uVar1 = *(uint *)(lVar14 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                        *(uint *)(lVar14 + 0x18) = uVar1 + 1;
                                                        plVar12 = (long *)(lVar16 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar12 = lVar15;
                                                        thunk_FUN_02bb0e9c(plVar12,lVar15);
                                                      }
                                                      else {
                                                        FUN_037a6538(lVar14,lVar15,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar11 + 0x28) = lVar14;
                                                  thunk_FUN_02bb0e9c((long *)(lVar11 + 0x28),lVar14)
                                                  ;
                                                  lVar14 = *(long *)(lVar10 + 0x10);
                                                  lVar15 = *(long *)puVar6;
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                      plVar12 = (long *)(lVar14 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar12 = lVar11;
                                                      thunk_FUN_02bb0e9c(plVar12,lVar11);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar10,lVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x28) = lVar10;
                                                  thunk_FUN_02bb0e9c((long *)(lVar9 + 0x28),lVar10);
                                                  FUN_05b9ad1c(param_1,lVar9,0);
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
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


