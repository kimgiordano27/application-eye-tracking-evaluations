/*
FUNCTION_NAME: UnityEngine.Events.ArgumentCache$$get_unityObjectArgumentAssemblyTypeName
ENTRY_POINT: 05ba03c8
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 71
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: validity_gate;pose_vector;data_collection;telemetry;frame_behavior;keyword_support
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;eye_or_gaze_keyword_boost_only;negative_framework_namespace_without_eye_use_flow;functionality_data_collection_or_telemetry_hits_2
*/


void UnityEngine_Events_ArgumentCache__get_unityObjectArgumentAssemblyTypeName(void)

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
  long lVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long unaff_x19;
  undefined8 *unaff_x20;
  
  FUN_02b3c81c(Method_LitJson_JsonReader_Read__);
  FUN_02b3c81c(Method_Newtonsoft_Json_JsonReader_GetTypeForCloseToken__);
  FUN_02b3c81c(Method_Newtonsoft_Json_Linq_JToken_Replace__);
  FUN_02b3c81c(Method_UnityEngine_Rendering_DebugUpdater_AssignDefaultActions__);
  FUN_02b3c81c(Method_Newtonsoft_Json_JsonReader_Push__);
  FUN_02b3c81c(System_Reflection_Pointer_var);
  FUN_02b3c81c(Method_LitJson_JsonData_EnsureList__);
  FUN_02b3c81c(Method_Newtonsoft_Json_JsonReader_ReadAndAssert__);
  FUN_02b3c81c(Method_System_Collections_Generic_List<IntegratedSubsystemDescriptor>_GetEnumerator__
              );
  FUN_02b3c81c(Method_UnityEngine_Rendering_Universal_DecalChunk_RemoveAtSwapBack<bool>__);
  FUN_02b3c81c(Method_UnityEngine_Rendering_Universal_DecalChunk_RemoveAtSwapBack<DecalEntity>__);
  FUN_02b3c81c(Method_LitJson_JsonData_LitJson_IJsonWrapper_GetInt__);
  FUN_02b3c81c(Method_Newtonsoft_Json_JsonReader_ReadArrayElementIntoByteArrayReportDone__);
  FUN_02b3c81c(Method_Newtonsoft_Json_JsonReader_ReadAsBoolean__);
  FUN_02b3c81c(Method_Newtonsoft_Json_JsonReader_ReadAsBytes__);
  FUN_02b3c81c(PTR_DAT_06312a80);
  FUN_02b3c81c(Method_Newtonsoft_Json_Linq_JToken_op_Explicit__);
  FUN_02b3c81c(Method_Newtonsoft_Json_JsonReader_ReadAsDateTime__);
  FUN_02b3c81c(Method_UnityEngine_Rendering_UI_DebugUIHandlerWidget_CastWidget<DebugUI_UIntField>__)
  ;
  FUN_02b3c81c(Method_UnityEngine_Rendering_UI_DebugUIHandlerWidget_CastWidget<DebugUI_Value>__);
  FUN_02b3c81c(Method_Newtonsoft_Json_JsonReader_ReadAsDateTimeOffset__);
  FUN_02b3c81c(Method_Newtonsoft_Json_JsonReader_ReadAsDecimal__);
  FUN_02b3c81c(Method_Newtonsoft_Json_JsonReader_ReadAsDouble__);
  FUN_02b3c81c(Method_System_Globalization_JapaneseCalendar_ToFourDigitYear__);
  FUN_02b3c81c(Method_LitJson_JsonData_LitJson_IJsonWrapper_GetLong__);
  FUN_02b3c81c(Method_Newtonsoft_Json_JsonReader_ReadAsInt32__);
  *(undefined1 *)(unaff_x19 + 0xfac) = 1;
  lVar10 = thunk_FUN_02b79644(*unaff_x20);
  FUN_04dbdb8c(lVar10,0);
  puVar6 = Method_Newtonsoft_Json_Serialization_JsonPropertyCollection_AddProperty__;
  puVar8 = Method_OVRSimpleJSON_JSONLazyCreator_Set<JSONArray>__;
  puVar7 = Method_Newtonsoft_Json_Linq_JProperty_SetItem__;
  puVar4 = Method_Newtonsoft_Json_Linq_JProperty_GetItem__;
  puVar3 = Method_UnityEngine_Rendering_UI_DebugUIHandlerWidget_CastWidget<DebugUI_ColorField>__;
  puVar2 = PTR_DAT_06312a80;
  if (lVar10 != 0) {
    *(undefined8 *)(lVar10 + 0x10) = *(undefined8 *)Method_LitJson_JsonReader__ctor__;
    thunk_FUN_02bb0e9c();
    *(undefined8 *)(lVar10 + 0x18) = *(undefined8 *)puVar3;
    thunk_FUN_02bb0e9c();
    *(undefined8 *)(lVar10 + 0x30) = *(undefined8 *)puVar6;
    thunk_FUN_02bb0e9c();
    *(undefined8 *)(lVar10 + 0x38) = *(undefined8 *)puVar2;
    thunk_FUN_02bb0e9c();
    *(undefined8 *)(lVar10 + 0x40) = *(undefined8 *)puVar2;
    thunk_FUN_02bb0e9c();
    lVar11 = thunk_FUN_02b79644(*(undefined8 *)puVar8);
    FUN_037a5cd0(lVar11,*(undefined8 *)puVar7);
    lVar12 = thunk_FUN_02b79644(*(undefined8 *)puVar4);
    FUN_04dbdb8c(lVar12,0);
    if (lVar12 != 0) {
      *(undefined8 *)(lVar12 + 0x18) =
           *(undefined8 *)Method_Newtonsoft_Json_Linq_JToken_op_Explicit__;
      *(undefined4 *)(lVar12 + 0x10) = 300;
      thunk_FUN_02bb0e9c();
      puVar2 = Method_Newtonsoft_Json_Linq_JProperty_InsertItem__;
      if (lVar11 != 0) {
        lVar15 = *(long *)(lVar11 + 0x10);
        lVar16 = *(long *)Method_Newtonsoft_Json_Linq_JProperty_InsertItem__;
        *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
        if (lVar15 != 0) {
          uVar1 = *(uint *)(lVar11 + 0x18);
          if (uVar1 < *(uint *)(lVar15 + 0x18)) {
            *(uint *)(lVar11 + 0x18) = uVar1 + 1;
            plVar13 = (long *)(lVar15 + (long)(int)uVar1 * 8 + 0x20);
            *plVar13 = lVar12;
            thunk_FUN_02bb0e9c(plVar13,lVar12);
          }
          else {
            FUN_037a6538(lVar11,lVar12,
                         *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
          }
          lVar12 = thunk_FUN_02b79644(*(undefined8 *)puVar4);
          FUN_04dbdb8c(lVar12,0);
          if (lVar12 != 0) {
            *(undefined8 *)(lVar12 + 0x18) =
                 *(undefined8 *)Method_Newtonsoft_Json_Linq_JToken_Replace__;
            *(undefined4 *)(lVar12 + 0x10) = 0x22c;
            thunk_FUN_02bb0e9c();
            lVar15 = *(long *)(lVar11 + 0x10);
            lVar16 = *(long *)puVar2;
            *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
            puVar3 = Method_OVRSimpleJSON_JSONLazyCreator_Set<JSONBool>__;
            puVar2 = Method_Newtonsoft_Json_Linq_JProperty_RemoveItemAt__;
            if (lVar15 != 0) {
              uVar1 = *(uint *)(lVar11 + 0x18);
              if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                plVar13 = (long *)(lVar15 + (long)(int)uVar1 * 8 + 0x20);
                *plVar13 = lVar12;
                thunk_FUN_02bb0e9c(plVar13,lVar12);
              }
              else {
                FUN_037a6538(lVar11,lVar12,
                             *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
              }
              *(long *)(lVar10 + 0x20) = lVar11;
              thunk_FUN_02bb0e9c((long *)(lVar10 + 0x20),lVar11);
              lVar11 = thunk_FUN_02b79644(*(undefined8 *)puVar3);
              FUN_037a5cd0(lVar11,*(undefined8 *)puVar2);
              lVar12 = thunk_FUN_02b79644(*(undefined8 *)
                                           Method_Newtonsoft_Json_Linq_JProperty_ClearItems__);
              FUN_04dbdb8c(lVar12,0);
              puVar4 = Method_Newtonsoft_Json_JsonReader_Push__;
              puVar3 = PTR_DAT_063145b8;
              puVar2 = PTR_DAT_063145b0;
              if (lVar12 != 0) {
                *(undefined8 *)(lVar12 + 0x10) = *(undefined8 *)Method_LitJson_JsonData__ctor__;
                thunk_FUN_02bb0e9c();
                *(undefined8 *)(lVar12 + 0x20) = *(undefined8 *)puVar4;
                thunk_FUN_02bb0e9c((undefined8 *)(lVar12 + 0x20));
                uVar14 = *(undefined8 *)puVar2;
                *(undefined4 *)(lVar12 + 0x18) = 3;
                lVar15 = thunk_FUN_02b79644(uVar14);
                FUN_037a5cd0(lVar15,*(undefined8 *)puVar3);
                puVar4 = PTR_DAT_063173b8;
                if (lVar15 != 0) {
                  lVar16 = *(long *)(lVar15 + 0x10);
                  uVar14 = *(undefined8 *)
                            Method_System_Globalization_JapaneseCalendar_ToFourDigitYear__;
                  lVar17 = *(long *)PTR_DAT_063173b8;
                  *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
                  if (lVar16 != 0) {
                    uVar1 = *(uint *)(lVar15 + 0x18);
                    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                      *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                      *(undefined8 *)(lVar16 + (long)(int)uVar1 * 8 + 0x20) = uVar14;
                      thunk_FUN_02bb0e9c();
                    }
                    else {
                      FUN_037a6538(lVar15,uVar14,
                                   *(undefined8 *)
                                    (*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
                    }
                    *(long *)(lVar12 + 0x30) = lVar15;
                    thunk_FUN_02bb0e9c((long *)(lVar12 + 0x30),lVar15);
                    lVar15 = thunk_FUN_02b79644(*(undefined8 *)
                                                 Method_OVRSimpleJSON_JSONLazyCreator_Set<JSONNumber>__
                                               );
                    FUN_037a5cd0(lVar15,*(undefined8 *)
                                         Method_Newtonsoft_Json_Linq_JPropertyKeyedCollection_Contains__
                                );
                    lVar16 = thunk_FUN_02b79644(*(undefined8 *)
                                                 Method_Newtonsoft_Json_Linq_JObject_ValidateToken__
                                               );
                    FUN_04dbdb8c(lVar16,0);
                    if (lVar16 != 0) {
                      *(undefined8 *)(lVar16 + 0x18) =
                           *(undefined8 *)Method_LitJson_JsonData_LitJson_IJsonWrapper_GetLong__;
                      thunk_FUN_02bb0e9c();
                      *(undefined8 *)(lVar16 + 0x10) = *(undefined8 *)puVar6;
                      thunk_FUN_02bb0e9c();
                      puVar7 = Method_Newtonsoft_Json_Linq_JProperty_Load__;
                      if (lVar15 != 0) {
                        lVar17 = *(long *)(lVar15 + 0x10);
                        lVar18 = *(long *)Method_Newtonsoft_Json_Linq_JProperty_Load__;
                        *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
                        if (lVar17 != 0) {
                          uVar1 = *(uint *)(lVar15 + 0x18);
                          if (uVar1 < *(uint *)(lVar17 + 0x18)) {
                            *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                            plVar13 = (long *)(lVar17 + (long)(int)uVar1 * 8 + 0x20);
                            *plVar13 = lVar16;
                            thunk_FUN_02bb0e9c(plVar13,lVar16);
                          }
                          else {
                            FUN_037a6538(lVar15,lVar16,
                                         *(undefined8 *)
                                          (*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
                          }
                          *(long *)(lVar12 + 0x28) = lVar15;
                          thunk_FUN_02bb0e9c((long *)(lVar12 + 0x28),lVar15);
                          puVar8 = Method_Newtonsoft_Json_Linq_JProperty_RemoveItem__;
                          if (lVar11 != 0) {
                            lVar15 = *(long *)(lVar11 + 0x10);
                            lVar16 = *(long *)Method_Newtonsoft_Json_Linq_JProperty_RemoveItem__;
                            *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
                            if (lVar15 != 0) {
                              uVar1 = *(uint *)(lVar11 + 0x18);
                              if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                plVar13 = (long *)(lVar15 + (long)(int)uVar1 * 8 + 0x20);
                                *plVar13 = lVar12;
                                thunk_FUN_02bb0e9c(plVar13,lVar12);
                              }
                              else {
                                FUN_037a6538(lVar11,lVar12,
                                             *(undefined8 *)
                                              (*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
                              }
                              lVar12 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                      
                                                  Method_Newtonsoft_Json_Linq_JProperty_ClearItems__
                                                  );
                              FUN_04dbdb8c(lVar12,0);
                              puVar5 = 
                              Method_Newtonsoft_Json_JsonConvert_DeserializeObject<Dictionary<string,_string>>__
                              ;
                              if (lVar12 != 0) {
                                *(undefined8 *)(lVar12 + 0x10) = *(undefined8 *)PTR_DAT_06332138;
                                thunk_FUN_02bb0e9c();
                                *(undefined8 *)(lVar12 + 0x20) = *(undefined8 *)puVar5;
                                thunk_FUN_02bb0e9c((undefined8 *)(lVar12 + 0x20));
                                uVar14 = *(undefined8 *)puVar2;
                                *(undefined4 *)(lVar12 + 0x18) = 3;
                                lVar15 = thunk_FUN_02b79644(uVar14);
                                FUN_037a5cd0(lVar15,*(undefined8 *)puVar3);
                                if (lVar15 != 0) {
                                  lVar16 = *(long *)(lVar15 + 0x10);
                                  uVar14 = *(undefined8 *)
                                            Method_System_Collections_Generic_List<IntegratedSubsystemDescriptor>_GetEnumerator__
                                  ;
                                  lVar17 = *(long *)puVar4;
                                  *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
                                  if (lVar16 != 0) {
                                    uVar1 = *(uint *)(lVar15 + 0x18);
                                    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                      *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                      *(undefined8 *)(lVar16 + (long)(int)uVar1 * 8 + 0x20) = uVar14
                                      ;
                                      thunk_FUN_02bb0e9c();
                                    }
                                    else {
                                      FUN_037a6538(lVar15,uVar14,
                                                   *(undefined8 *)
                                                    (*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) +
                                                    0x70));
                                    }
                                    *(long *)(lVar12 + 0x30) = lVar15;
                                    thunk_FUN_02bb0e9c((long *)(lVar12 + 0x30),lVar15);
                                    lVar15 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                  
                                                  Method_OVRSimpleJSON_JSONLazyCreator_Set<JSONNumber>__
                                                  );
                                    FUN_037a5cd0(lVar15,*(undefined8 *)
                                                                                                                  
                                                  Method_Newtonsoft_Json_Linq_JPropertyKeyedCollection_Contains__
                                                );
                                    lVar16 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                  
                                                  Method_Newtonsoft_Json_Linq_JObject_ValidateToken__
                                                  );
                                    FUN_04dbdb8c(lVar16,0);
                                    if (lVar16 != 0) {
                                      *(undefined8 *)(lVar16 + 0x18) =
                                           *(undefined8 *)Method_LitJson_JsonData_EnsureDictionary__
                                      ;
                                      thunk_FUN_02bb0e9c();
                                      *(undefined8 *)(lVar16 + 0x10) = *(undefined8 *)puVar6;
                                      thunk_FUN_02bb0e9c();
                                      if (lVar15 != 0) {
                                        lVar17 = *(long *)(lVar15 + 0x10);
                                        lVar18 = *(long *)puVar7;
                                        *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
                                        if (lVar17 != 0) {
                                          uVar1 = *(uint *)(lVar15 + 0x18);
                                          if (uVar1 < *(uint *)(lVar17 + 0x18)) {
                                            *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                            plVar13 = (long *)(lVar17 + (long)(int)uVar1 * 8 + 0x20)
                                            ;
                                            *plVar13 = lVar16;
                                            thunk_FUN_02bb0e9c(plVar13,lVar16);
                                          }
                                          else {
                                            FUN_037a6538(lVar15,lVar16,
                                                         *(undefined8 *)
                                                          (*(long *)(*(long *)(lVar18 + 0x20) + 0xc0
                                                                    ) + 0x70));
                                          }
                                          *(long *)(lVar12 + 0x28) = lVar15;
                                          thunk_FUN_02bb0e9c((long *)(lVar12 + 0x28),lVar15);
                                          lVar15 = *(long *)(lVar11 + 0x10);
                                          lVar16 = *(long *)puVar8;
                                          *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
                                          if (lVar15 != 0) {
                                            uVar1 = *(uint *)(lVar11 + 0x18);
                                            if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                              *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                              plVar13 = (long *)(lVar15 + (long)(int)uVar1 * 8 +
                                                                0x20);
                                              *plVar13 = lVar12;
                                              thunk_FUN_02bb0e9c(plVar13,lVar12);
                                            }
                                            else {
                                              FUN_037a6538(lVar11,lVar12,
                                                           *(undefined8 *)
                                                            (*(long *)(*(long *)(lVar16 + 0x20) +
                                                                      0xc0) + 0x70));
                                            }
                                            lVar12 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                  
                                                  Method_Newtonsoft_Json_Linq_JProperty_ClearItems__
                                                  );
                                            FUN_04dbdb8c(lVar12,0);
                                            puVar5 = Method_LitJson_JsonData_EnsureList__;
                                            if (lVar12 != 0) {
                                              *(undefined8 *)(lVar12 + 0x10) =
                                                   *(undefined8 *)
                                                    Method_Newtonsoft_Json_JsonConvert_ToString__;
                                              thunk_FUN_02bb0e9c();
                                              *(undefined8 *)(lVar12 + 0x20) = *(undefined8 *)puVar5
                                              ;
                                              thunk_FUN_02bb0e9c((undefined8 *)(lVar12 + 0x20));
                                              uVar14 = *(undefined8 *)puVar2;
                                              *(undefined4 *)(lVar12 + 0x18) = 3;
                                              lVar15 = thunk_FUN_02b79644(uVar14);
                                              FUN_037a5cd0(lVar15,*(undefined8 *)puVar3);
                                              if (lVar15 != 0) {
                                                lVar16 = *(long *)(lVar15 + 0x10);
                                                uVar14 = *(undefined8 *)
                                                                                                                    
                                                  Method_Newtonsoft_Json_JsonReader_ReadAsBoolean__;
                                                lVar17 = *(long *)puVar4;
                                                *(int *)(lVar15 + 0x1c) =
                                                     *(int *)(lVar15 + 0x1c) + 1;
                                                if (lVar16 != 0) {
                                                  uVar1 = *(uint *)(lVar15 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                    *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                                    *(undefined8 *)
                                                     (lVar16 + (long)(int)uVar1 * 8 + 0x20) = uVar14
                                                    ;
                                                    thunk_FUN_02bb0e9c();
                                                  }
                                                  else {
                                                    FUN_037a6538(lVar15,uVar14,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar17 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x30) = lVar15;
                                                  thunk_FUN_02bb0e9c((long *)(lVar12 + 0x30),lVar15)
                                                  ;
                                                  lVar15 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                              
                                                  Method_OVRSimpleJSON_JSONLazyCreator_Set<JSONNumber>__
                                                  );
                                                  FUN_037a5cd0(lVar15,*(undefined8 *)
                                                                                                                                              
                                                  Method_Newtonsoft_Json_Linq_JPropertyKeyedCollection_Contains__
                                                  );
                                                  lVar16 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                              
                                                  Method_Newtonsoft_Json_Linq_JObject_ValidateToken__
                                                  );
                                                  FUN_04dbdb8c(lVar16,0);
                                                  if (lVar16 != 0) {
                                                    *(undefined8 *)(lVar16 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Newtonsoft_Json_JsonConverterAttribute__ctor__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar16 + 0x10) =
                                                       *(undefined8 *)puVar6;
                                                  thunk_FUN_02bb0e9c();
                                                  if (lVar15 != 0) {
                                                    lVar17 = *(long *)(lVar15 + 0x10);
                                                    lVar18 = *(long *)puVar7;
                                                    *(int *)(lVar15 + 0x1c) =
                                                         *(int *)(lVar15 + 0x1c) + 1;
                                                    if (lVar17 != 0) {
                                                      uVar1 = *(uint *)(lVar15 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar17 + 0x18)) {
                                                        *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                                        plVar13 = (long *)(lVar17 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar13 = lVar16;
                                                        thunk_FUN_02bb0e9c(plVar13,lVar16);
                                                      }
                                                      else {
                                                        FUN_037a6538(lVar15,lVar16,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar18 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x28) = lVar15;
                                                  thunk_FUN_02bb0e9c((long *)(lVar12 + 0x28),lVar15)
                                                  ;
                                                  lVar15 = *(long *)(lVar11 + 0x10);
                                                  lVar16 = *(long *)puVar8;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar15 != 0) {
                                                    uVar1 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                      plVar13 = (long *)(lVar15 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar13 = lVar12;
                                                      thunk_FUN_02bb0e9c(plVar13,lVar12);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar11,lVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar12 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                              
                                                  Method_Newtonsoft_Json_Linq_JProperty_ClearItems__
                                                  );
                                                  FUN_04dbdb8c(lVar12,0);
                                                  puVar5 = 
                                                  Method_LitJson_JsonData_EnsureCollection__;
                                                  if (lVar12 != 0) {
                                                    *(undefined8 *)(lVar12 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Newtonsoft_Json_JsonConvert_DeserializeObject<UserGameData>__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar12 + 0x20) =
                                                       *(undefined8 *)puVar5;
                                                  thunk_FUN_02bb0e9c((undefined8 *)(lVar12 + 0x20));
                                                  uVar14 = *(undefined8 *)puVar2;
                                                  *(undefined4 *)(lVar12 + 0x18) = 3;
                                                  lVar15 = thunk_FUN_02b79644(uVar14);
                                                  FUN_037a5cd0(lVar15,*(undefined8 *)puVar3);
                                                  if (lVar15 != 0) {
                                                    lVar16 = *(long *)(lVar15 + 0x10);
                                                    uVar14 = *(undefined8 *)
                                                              System_Reflection_Pointer_var;
                                                    lVar17 = *(long *)puVar4;
                                                    *(int *)(lVar15 + 0x1c) =
                                                         *(int *)(lVar15 + 0x1c) + 1;
                                                    if (lVar16 != 0) {
                                                      uVar1 = *(uint *)(lVar15 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                        *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                                        *(undefined8 *)
                                                         (lVar16 + (long)(int)uVar1 * 8 + 0x20) =
                                                             uVar14;
                                                        thunk_FUN_02bb0e9c();
                                                      }
                                                      else {
                                                        FUN_037a6538(lVar15,uVar14,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x30) = lVar15;
                                                  thunk_FUN_02bb0e9c((long *)(lVar12 + 0x30),lVar15)
                                                  ;
                                                  lVar15 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                              
                                                  Method_OVRSimpleJSON_JSONLazyCreator_Set<JSONNumber>__
                                                  );
                                                  FUN_037a5cd0(lVar15,*(undefined8 *)
                                                                                                                                              
                                                  Method_Newtonsoft_Json_Linq_JPropertyKeyedCollection_Contains__
                                                  );
                                                  lVar16 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                              
                                                  Method_Newtonsoft_Json_Linq_JObject_ValidateToken__
                                                  );
                                                  FUN_04dbdb8c(lVar16,0);
                                                  if (lVar16 != 0) {
                                                    *(undefined8 *)(lVar16 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_LitJson_JsonData_LitJson_IJsonWrapper_GetInt__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar16 + 0x10) =
                                                       *(undefined8 *)puVar6;
                                                  thunk_FUN_02bb0e9c();
                                                  if (lVar15 != 0) {
                                                    lVar17 = *(long *)(lVar15 + 0x10);
                                                    lVar18 = *(long *)puVar7;
                                                    *(int *)(lVar15 + 0x1c) =
                                                         *(int *)(lVar15 + 0x1c) + 1;
                                                    if (lVar17 != 0) {
                                                      uVar1 = *(uint *)(lVar15 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar17 + 0x18)) {
                                                        *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                                        plVar13 = (long *)(lVar17 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar13 = lVar16;
                                                        thunk_FUN_02bb0e9c(plVar13,lVar16);
                                                      }
                                                      else {
                                                        FUN_037a6538(lVar15,lVar16,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar18 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x28) = lVar15;
                                                  thunk_FUN_02bb0e9c((long *)(lVar12 + 0x28),lVar15)
                                                  ;
                                                  lVar15 = *(long *)(lVar11 + 0x10);
                                                  lVar16 = *(long *)puVar8;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar15 != 0) {
                                                    uVar1 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                      plVar13 = (long *)(lVar15 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar13 = lVar12;
                                                      thunk_FUN_02bb0e9c(plVar13,lVar12);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar11,lVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar12 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                              
                                                  Method_Newtonsoft_Json_Linq_JProperty_ClearItems__
                                                  );
                                                  FUN_04dbdb8c(lVar12,0);
                                                  puVar5 = Method_LitJson_JsonMapper_WriteValue__;
                                                  puVar6 = 
                                                  Method_UnityEngine_Rendering_DebugUpdater_AssignDefaultActions__
                                                  ;
                                                  if (lVar12 != 0) {
                                                    *(undefined8 *)(lVar12 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_Rendering_DebugUpdater_AssignDefaultActions__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar12 + 0x20) =
                                                       *(undefined8 *)puVar5;
                                                  thunk_FUN_02bb0e9c((undefined8 *)(lVar12 + 0x20));
                                                  uVar14 = *(undefined8 *)puVar2;
                                                  *(undefined4 *)(lVar12 + 0x18) = 1;
                                                  lVar15 = thunk_FUN_02b79644(uVar14);
                                                  FUN_037a5cd0(lVar15,*(undefined8 *)puVar3);
                                                  if (lVar15 != 0) {
                                                    lVar16 = *(long *)(lVar15 + 0x10);
                                                    uVar14 = *(undefined8 *)puVar6;
                                                    lVar17 = *(long *)puVar4;
                                                    *(int *)(lVar15 + 0x1c) =
                                                         *(int *)(lVar15 + 0x1c) + 1;
                                                    if (lVar16 != 0) {
                                                      uVar1 = *(uint *)(lVar15 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                        *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                                        *(undefined8 *)
                                                         (lVar16 + (long)(int)uVar1 * 8 + 0x20) =
                                                             uVar14;
                                                        thunk_FUN_02bb0e9c();
                                                      }
                                                      else {
                                                        FUN_037a6538(lVar15,uVar14,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x30) = lVar15;
                                                  thunk_FUN_02bb0e9c((long *)(lVar12 + 0x30),lVar15)
                                                  ;
                                                  lVar15 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                              
                                                  Method_OVRSimpleJSON_JSONLazyCreator_Set<JSONNumber>__
                                                  );
                                                  FUN_037a5cd0(lVar15,*(undefined8 *)
                                                                                                                                              
                                                  Method_Newtonsoft_Json_Linq_JPropertyKeyedCollection_Contains__
                                                  );
                                                  lVar16 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                              
                                                  Method_Newtonsoft_Json_Linq_JObject_ValidateToken__
                                                  );
                                                  FUN_04dbdb8c(lVar16,0);
                                                  puVar6 = 
                                                  Method_Newtonsoft_Json_JsonPosition_CalculateLength__
                                                  ;
                                                  if (lVar16 != 0) {
                                                    *(undefined8 *)(lVar16 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Newtonsoft_Json_JsonPosition_CalculateLength__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar16 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_Newtonsoft_Json_Serialization_JsonPropertyCollection_AddProperty__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  if (lVar15 != 0) {
                                                    lVar17 = *(long *)(lVar15 + 0x10);
                                                    lVar18 = *(long *)puVar7;
                                                    *(int *)(lVar15 + 0x1c) =
                                                         *(int *)(lVar15 + 0x1c) + 1;
                                                    if (lVar17 != 0) {
                                                      uVar1 = *(uint *)(lVar15 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar17 + 0x18)) {
                                                        *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                                        plVar13 = (long *)(lVar17 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar13 = lVar16;
                                                        thunk_FUN_02bb0e9c(plVar13,lVar16);
                                                      }
                                                      else {
                                                        FUN_037a6538(lVar15,lVar16,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar18 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x28) = lVar15;
                                                  thunk_FUN_02bb0e9c((long *)(lVar12 + 0x28),lVar15)
                                                  ;
                                                  lVar15 = *(long *)(lVar11 + 0x10);
                                                  lVar16 = *(long *)puVar8;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar15 != 0) {
                                                    uVar1 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                      plVar13 = (long *)(lVar15 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar13 = lVar12;
                                                      thunk_FUN_02bb0e9c(plVar13,lVar12);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar11,lVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar12 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                              
                                                  Method_Newtonsoft_Json_Linq_JProperty_ClearItems__
                                                  );
                                                  FUN_04dbdb8c(lVar12,0);
                                                  puVar9 = 
                                                  Method_Newtonsoft_Json_JsonReader_ReadAsInt32__;
                                                  puVar5 = 
                                                  Method_Newtonsoft_Json_JsonReader_ReadAsDateTime__
                                                  ;
                                                  if (lVar12 != 0) {
                                                    *(undefined8 *)(lVar12 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Newtonsoft_Json_JsonReader_ReadAsDateTime__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar12 + 0x20) =
                                                       *(undefined8 *)puVar9;
                                                  thunk_FUN_02bb0e9c((undefined8 *)(lVar12 + 0x20));
                                                  uVar14 = *(undefined8 *)puVar2;
                                                  *(undefined4 *)(lVar12 + 0x18) = 0;
                                                  lVar15 = thunk_FUN_02b79644(uVar14);
                                                  FUN_037a5cd0(lVar15,*(undefined8 *)puVar3);
                                                  if (lVar15 != 0) {
                                                    lVar16 = *(long *)(lVar15 + 0x10);
                                                    uVar14 = *(undefined8 *)puVar5;
                                                    lVar17 = *(long *)puVar4;
                                                    *(int *)(lVar15 + 0x1c) =
                                                         *(int *)(lVar15 + 0x1c) + 1;
                                                    if (lVar16 != 0) {
                                                      uVar1 = *(uint *)(lVar15 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                        *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                                        *(undefined8 *)
                                                         (lVar16 + (long)(int)uVar1 * 8 + 0x20) =
                                                             uVar14;
                                                        thunk_FUN_02bb0e9c();
                                                      }
                                                      else {
                                                        FUN_037a6538(lVar15,uVar14,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x30) = lVar15;
                                                  thunk_FUN_02bb0e9c((long *)(lVar12 + 0x30),lVar15)
                                                  ;
                                                  lVar15 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                              
                                                  Method_OVRSimpleJSON_JSONLazyCreator_Set<JSONNumber>__
                                                  );
                                                  FUN_037a5cd0(lVar15,*(undefined8 *)
                                                                                                                                              
                                                  Method_Newtonsoft_Json_Linq_JPropertyKeyedCollection_Contains__
                                                  );
                                                  lVar16 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                              
                                                  Method_Newtonsoft_Json_Linq_JObject_ValidateToken__
                                                  );
                                                  FUN_04dbdb8c(lVar16,0);
                                                  if (lVar16 != 0) {
                                                    *(undefined8 *)(lVar16 + 0x18) =
                                                         *(undefined8 *)puVar6;
                                                    thunk_FUN_02bb0e9c();
                                                    puVar6 = 
                                                  Method_Newtonsoft_Json_Serialization_JsonPropertyCollection_AddProperty__
                                                  ;
                                                  *(undefined8 *)(lVar16 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_Newtonsoft_Json_Serialization_JsonPropertyCollection_AddProperty__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  if (lVar15 != 0) {
                                                    lVar17 = *(long *)(lVar15 + 0x10);
                                                    lVar18 = *(long *)puVar7;
                                                    *(int *)(lVar15 + 0x1c) =
                                                         *(int *)(lVar15 + 0x1c) + 1;
                                                    if (lVar17 != 0) {
                                                      uVar1 = *(uint *)(lVar15 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar17 + 0x18)) {
                                                        *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                                        plVar13 = (long *)(lVar17 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar13 = lVar16;
                                                        thunk_FUN_02bb0e9c(plVar13,lVar16);
                                                      }
                                                      else {
                                                        FUN_037a6538(lVar15,lVar16,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar18 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x28) = lVar15;
                                                  thunk_FUN_02bb0e9c((long *)(lVar12 + 0x28),lVar15)
                                                  ;
                                                  lVar15 = *(long *)(lVar11 + 0x10);
                                                  lVar16 = *(long *)puVar8;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar15 != 0) {
                                                    uVar1 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                      plVar13 = (long *)(lVar15 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar13 = lVar12;
                                                      thunk_FUN_02bb0e9c(plVar13,lVar12);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar11,lVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar12 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                              
                                                  Method_Newtonsoft_Json_Linq_JProperty_ClearItems__
                                                  );
                                                  FUN_04dbdb8c(lVar12,0);
                                                  puVar9 = 
                                                  Method_Newtonsoft_Json_JsonReader_ReadAsDateTimeOffset__
                                                  ;
                                                  puVar5 = 
                                                  Method_UnityEngine_Rendering_Universal_DecalChunk_RemoveAtSwapBack<bool>__
                                                  ;
                                                  if (lVar12 != 0) {
                                                    *(undefined8 *)(lVar12 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_Rendering_Universal_DecalChunk_RemoveAtSwapBack<bool>__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar12 + 0x20) =
                                                       *(undefined8 *)puVar9;
                                                  thunk_FUN_02bb0e9c((undefined8 *)(lVar12 + 0x20));
                                                  uVar14 = *(undefined8 *)puVar2;
                                                  *(undefined4 *)(lVar12 + 0x18) = 0;
                                                  lVar15 = thunk_FUN_02b79644(uVar14);
                                                  FUN_037a5cd0(lVar15,*(undefined8 *)puVar3);
                                                  if (lVar15 != 0) {
                                                    lVar16 = *(long *)(lVar15 + 0x10);
                                                    uVar14 = *(undefined8 *)puVar5;
                                                    lVar17 = *(long *)puVar4;
                                                    *(int *)(lVar15 + 0x1c) =
                                                         *(int *)(lVar15 + 0x1c) + 1;
                                                    if (lVar16 != 0) {
                                                      uVar1 = *(uint *)(lVar15 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                        *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                                        *(undefined8 *)
                                                         (lVar16 + (long)(int)uVar1 * 8 + 0x20) =
                                                             uVar14;
                                                        thunk_FUN_02bb0e9c();
                                                      }
                                                      else {
                                                        FUN_037a6538(lVar15,uVar14,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x30) = lVar15;
                                                  thunk_FUN_02bb0e9c((long *)(lVar12 + 0x30),lVar15)
                                                  ;
                                                  lVar15 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                              
                                                  Method_OVRSimpleJSON_JSONLazyCreator_Set<JSONNumber>__
                                                  );
                                                  FUN_037a5cd0(lVar15,*(undefined8 *)
                                                                                                                                              
                                                  Method_Newtonsoft_Json_Linq_JPropertyKeyedCollection_Contains__
                                                  );
                                                  lVar16 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                              
                                                  Method_Newtonsoft_Json_Linq_JObject_ValidateToken__
                                                  );
                                                  FUN_04dbdb8c(lVar16,0);
                                                  if (lVar16 != 0) {
                                                    *(undefined8 *)(lVar16 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Newtonsoft_Json_JsonReader_ReadAsDecimal__;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar16 + 0x10) =
                                                       *(undefined8 *)puVar6;
                                                  thunk_FUN_02bb0e9c();
                                                  if (lVar15 != 0) {
                                                    lVar17 = *(long *)(lVar15 + 0x10);
                                                    lVar18 = *(long *)puVar7;
                                                    *(int *)(lVar15 + 0x1c) =
                                                         *(int *)(lVar15 + 0x1c) + 1;
                                                    if (lVar17 != 0) {
                                                      uVar1 = *(uint *)(lVar15 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar17 + 0x18)) {
                                                        *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                                        plVar13 = (long *)(lVar17 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar13 = lVar16;
                                                        thunk_FUN_02bb0e9c(plVar13,lVar16);
                                                      }
                                                      else {
                                                        FUN_037a6538(lVar15,lVar16,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar18 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x28) = lVar15;
                                                  thunk_FUN_02bb0e9c((long *)(lVar12 + 0x28),lVar15)
                                                  ;
                                                  lVar15 = *(long *)(lVar11 + 0x10);
                                                  lVar16 = *(long *)puVar8;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar15 != 0) {
                                                    uVar1 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                      plVar13 = (long *)(lVar15 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar13 = lVar12;
                                                      thunk_FUN_02bb0e9c(plVar13,lVar12);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar11,lVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar12 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                              
                                                  Method_Newtonsoft_Json_Linq_JProperty_ClearItems__
                                                  );
                                                  FUN_04dbdb8c(lVar12,0);
                                                  puVar5 = 
                                                  Method_Newtonsoft_Json_JsonReader_ReadAsBytes__;
                                                  puVar6 = 
                                                  Method_UnityEngine_Rendering_UI_DebugUIHandlerWidget_CastWidget<DebugUI_Value>__
                                                  ;
                                                  if (lVar12 != 0) {
                                                    *(undefined8 *)(lVar12 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_Rendering_UI_DebugUIHandlerWidget_CastWidget<DebugUI_Value>__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar12 + 0x20) =
                                                       *(undefined8 *)puVar5;
                                                  thunk_FUN_02bb0e9c((undefined8 *)(lVar12 + 0x20));
                                                  uVar14 = *(undefined8 *)puVar2;
                                                  *(undefined4 *)(lVar12 + 0x18) = 1;
                                                  lVar15 = thunk_FUN_02b79644(uVar14);
                                                  FUN_037a5cd0(lVar15,*(undefined8 *)puVar3);
                                                  if (lVar15 != 0) {
                                                    lVar16 = *(long *)(lVar15 + 0x10);
                                                    uVar14 = *(undefined8 *)puVar6;
                                                    lVar17 = *(long *)puVar4;
                                                    *(int *)(lVar15 + 0x1c) =
                                                         *(int *)(lVar15 + 0x1c) + 1;
                                                    if (lVar16 != 0) {
                                                      uVar1 = *(uint *)(lVar15 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                        *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                                        *(undefined8 *)
                                                         (lVar16 + (long)(int)uVar1 * 8 + 0x20) =
                                                             uVar14;
                                                        thunk_FUN_02bb0e9c();
                                                      }
                                                      else {
                                                        FUN_037a6538(lVar15,uVar14,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x30) = lVar15;
                                                  thunk_FUN_02bb0e9c((long *)(lVar12 + 0x30),lVar15)
                                                  ;
                                                  lVar15 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                              
                                                  Method_OVRSimpleJSON_JSONLazyCreator_Set<JSONNumber>__
                                                  );
                                                  FUN_037a5cd0(lVar15,*(undefined8 *)
                                                                                                                                              
                                                  Method_Newtonsoft_Json_Linq_JPropertyKeyedCollection_Contains__
                                                  );
                                                  lVar16 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                              
                                                  Method_Newtonsoft_Json_Linq_JObject_ValidateToken__
                                                  );
                                                  FUN_04dbdb8c(lVar16,0);
                                                  puVar6 = Method_LitJson_JsonMapper_ReadValue__;
                                                  if (lVar16 != 0) {
                                                    *(undefined8 *)(lVar16 + 0x18) =
                                                         *(undefined8 *)
                                                          Method_LitJson_JsonMapper_ReadValue__;
                                                    thunk_FUN_02bb0e9c();
                                                    *(undefined8 *)(lVar16 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Newtonsoft_Json_Serialization_JsonPropertyCollection_AddProperty__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  if (lVar15 != 0) {
                                                    lVar17 = *(long *)(lVar15 + 0x10);
                                                    lVar18 = *(long *)puVar7;
                                                    *(int *)(lVar15 + 0x1c) =
                                                         *(int *)(lVar15 + 0x1c) + 1;
                                                    if (lVar17 != 0) {
                                                      uVar1 = *(uint *)(lVar15 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar17 + 0x18)) {
                                                        *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                                        plVar13 = (long *)(lVar17 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar13 = lVar16;
                                                        thunk_FUN_02bb0e9c(plVar13,lVar16);
                                                      }
                                                      else {
                                                        FUN_037a6538(lVar15,lVar16,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar18 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x28) = lVar15;
                                                  thunk_FUN_02bb0e9c((long *)(lVar12 + 0x28),lVar15)
                                                  ;
                                                  lVar15 = *(long *)(lVar11 + 0x10);
                                                  lVar16 = *(long *)puVar8;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar15 != 0) {
                                                    uVar1 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                      plVar13 = (long *)(lVar15 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar13 = lVar12;
                                                      thunk_FUN_02bb0e9c(plVar13,lVar12);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar11,lVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar12 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                              
                                                  Method_Newtonsoft_Json_Linq_JProperty_ClearItems__
                                                  );
                                                  FUN_04dbdb8c(lVar12,0);
                                                  puVar9 = 
                                                  Method_Newtonsoft_Json_JsonReader_GetTypeForCloseToken__
                                                  ;
                                                  puVar5 = 
                                                  Method_Newtonsoft_Json_Serialization_JsonFormatterConverter_Convert__
                                                  ;
                                                  if (lVar12 != 0) {
                                                    *(undefined8 *)(lVar12 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Newtonsoft_Json_Serialization_JsonFormatterConverter_Convert__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar12 + 0x20) =
                                                       *(undefined8 *)puVar9;
                                                  thunk_FUN_02bb0e9c((undefined8 *)(lVar12 + 0x20));
                                                  uVar14 = *(undefined8 *)puVar2;
                                                  *(undefined4 *)(lVar12 + 0x18) = 0;
                                                  lVar15 = thunk_FUN_02b79644(uVar14);
                                                  FUN_037a5cd0(lVar15,*(undefined8 *)puVar3);
                                                  if (lVar15 != 0) {
                                                    lVar16 = *(long *)(lVar15 + 0x10);
                                                    uVar14 = *(undefined8 *)puVar5;
                                                    lVar17 = *(long *)puVar4;
                                                    *(int *)(lVar15 + 0x1c) =
                                                         *(int *)(lVar15 + 0x1c) + 1;
                                                    if (lVar16 != 0) {
                                                      uVar1 = *(uint *)(lVar15 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                        *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                                        *(undefined8 *)
                                                         (lVar16 + (long)(int)uVar1 * 8 + 0x20) =
                                                             uVar14;
                                                        thunk_FUN_02bb0e9c();
                                                      }
                                                      else {
                                                        FUN_037a6538(lVar15,uVar14,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x30) = lVar15;
                                                  thunk_FUN_02bb0e9c((long *)(lVar12 + 0x30),lVar15)
                                                  ;
                                                  lVar15 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                              
                                                  Method_OVRSimpleJSON_JSONLazyCreator_Set<JSONNumber>__
                                                  );
                                                  FUN_037a5cd0(lVar15,*(undefined8 *)
                                                                                                                                              
                                                  Method_Newtonsoft_Json_Linq_JPropertyKeyedCollection_Contains__
                                                  );
                                                  lVar16 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                              
                                                  Method_Newtonsoft_Json_Linq_JObject_ValidateToken__
                                                  );
                                                  FUN_04dbdb8c(lVar16,0);
                                                  if (lVar16 != 0) {
                                                    *(undefined8 *)(lVar16 + 0x18) =
                                                         *(undefined8 *)puVar6;
                                                    thunk_FUN_02bb0e9c();
                                                    puVar6 = 
                                                  Method_Newtonsoft_Json_Serialization_JsonPropertyCollection_AddProperty__
                                                  ;
                                                  *(undefined8 *)(lVar16 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_Newtonsoft_Json_Serialization_JsonPropertyCollection_AddProperty__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  if (lVar15 != 0) {
                                                    lVar17 = *(long *)(lVar15 + 0x10);
                                                    lVar18 = *(long *)puVar7;
                                                    *(int *)(lVar15 + 0x1c) =
                                                         *(int *)(lVar15 + 0x1c) + 1;
                                                    if (lVar17 != 0) {
                                                      uVar1 = *(uint *)(lVar15 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar17 + 0x18)) {
                                                        *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                                        plVar13 = (long *)(lVar17 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar13 = lVar16;
                                                        thunk_FUN_02bb0e9c(plVar13,lVar16);
                                                      }
                                                      else {
                                                        FUN_037a6538(lVar15,lVar16,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar18 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x28) = lVar15;
                                                  thunk_FUN_02bb0e9c((long *)(lVar12 + 0x28),lVar15)
                                                  ;
                                                  lVar15 = *(long *)(lVar11 + 0x10);
                                                  lVar16 = *(long *)puVar8;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar15 != 0) {
                                                    uVar1 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                      plVar13 = (long *)(lVar15 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar13 = lVar12;
                                                      thunk_FUN_02bb0e9c(plVar13,lVar12);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar11,lVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar12 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                              
                                                  Method_Newtonsoft_Json_Linq_JProperty_ClearItems__
                                                  );
                                                  FUN_04dbdb8c(lVar12,0);
                                                  puVar9 = 
                                                  Method_UnityEngine_InputSystem_Utilities_JsonParser_NavigateToProperty__
                                                  ;
                                                  puVar5 = 
                                                  Method_UnityEngine_Rendering_UI_DebugUIHandlerWidget_CastWidget<DebugUI_UIntField>__
                                                  ;
                                                  if (lVar12 != 0) {
                                                    *(undefined8 *)(lVar12 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_Rendering_UI_DebugUIHandlerWidget_CastWidget<DebugUI_UIntField>__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar12 + 0x20) =
                                                       *(undefined8 *)puVar9;
                                                  thunk_FUN_02bb0e9c((undefined8 *)(lVar12 + 0x20));
                                                  uVar14 = *(undefined8 *)puVar2;
                                                  *(undefined4 *)(lVar12 + 0x18) = 0;
                                                  lVar15 = thunk_FUN_02b79644(uVar14);
                                                  FUN_037a5cd0(lVar15,*(undefined8 *)puVar3);
                                                  if (lVar15 != 0) {
                                                    lVar16 = *(long *)(lVar15 + 0x10);
                                                    uVar14 = *(undefined8 *)puVar5;
                                                    lVar17 = *(long *)puVar4;
                                                    *(int *)(lVar15 + 0x1c) =
                                                         *(int *)(lVar15 + 0x1c) + 1;
                                                    if (lVar16 != 0) {
                                                      uVar1 = *(uint *)(lVar15 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                        *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                                        *(undefined8 *)
                                                         (lVar16 + (long)(int)uVar1 * 8 + 0x20) =
                                                             uVar14;
                                                        thunk_FUN_02bb0e9c();
                                                      }
                                                      else {
                                                        FUN_037a6538(lVar15,uVar14,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x30) = lVar15;
                                                  thunk_FUN_02bb0e9c((long *)(lVar12 + 0x30),lVar15)
                                                  ;
                                                  lVar15 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                              
                                                  Method_OVRSimpleJSON_JSONLazyCreator_Set<JSONNumber>__
                                                  );
                                                  FUN_037a5cd0(lVar15,*(undefined8 *)
                                                                                                                                              
                                                  Method_Newtonsoft_Json_Linq_JPropertyKeyedCollection_Contains__
                                                  );
                                                  lVar16 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                              
                                                  Method_Newtonsoft_Json_Linq_JObject_ValidateToken__
                                                  );
                                                  FUN_04dbdb8c(lVar16,0);
                                                  if (lVar16 != 0) {
                                                    *(undefined8 *)(lVar16 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Newtonsoft_Json_JsonReader_ReadAndAssert__;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar16 + 0x10) =
                                                       *(undefined8 *)puVar6;
                                                  thunk_FUN_02bb0e9c();
                                                  if (lVar15 != 0) {
                                                    lVar17 = *(long *)(lVar15 + 0x10);
                                                    lVar18 = *(long *)puVar7;
                                                    *(int *)(lVar15 + 0x1c) =
                                                         *(int *)(lVar15 + 0x1c) + 1;
                                                    if (lVar17 != 0) {
                                                      uVar1 = *(uint *)(lVar15 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar17 + 0x18)) {
                                                        *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                                        plVar13 = (long *)(lVar17 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar13 = lVar16;
                                                        thunk_FUN_02bb0e9c(plVar13,lVar16);
                                                      }
                                                      else {
                                                        FUN_037a6538(lVar15,lVar16,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar18 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x28) = lVar15;
                                                  thunk_FUN_02bb0e9c((long *)(lVar12 + 0x28),lVar15)
                                                  ;
                                                  lVar15 = *(long *)(lVar11 + 0x10);
                                                  lVar16 = *(long *)puVar8;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar15 != 0) {
                                                    uVar1 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                      plVar13 = (long *)(lVar15 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar13 = lVar12;
                                                      thunk_FUN_02bb0e9c(plVar13,lVar12);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar11,lVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar12 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                              
                                                  Method_Newtonsoft_Json_Linq_JProperty_ClearItems__
                                                  );
                                                  FUN_04dbdb8c(lVar12,0);
                                                  puVar5 = 
                                                  Method_Newtonsoft_Json_JsonReader_ReadArrayElementIntoByteArrayReportDone__
                                                  ;
                                                  puVar6 = 
                                                  Method_UnityEngine_Rendering_UI_DebugUIHandlerWidget_CastWidget<DebugUI_ValueTuple>__
                                                  ;
                                                  if (lVar12 != 0) {
                                                    *(undefined8 *)(lVar12 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_Rendering_UI_DebugUIHandlerWidget_CastWidget<DebugUI_ValueTuple>__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar12 + 0x20) =
                                                       *(undefined8 *)puVar5;
                                                  thunk_FUN_02bb0e9c((undefined8 *)(lVar12 + 0x20));
                                                  uVar14 = *(undefined8 *)puVar2;
                                                  *(undefined4 *)(lVar12 + 0x18) = 1;
                                                  lVar15 = thunk_FUN_02b79644(uVar14);
                                                  FUN_037a5cd0(lVar15,*(undefined8 *)puVar3);
                                                  if (lVar15 != 0) {
                                                    lVar16 = *(long *)(lVar15 + 0x10);
                                                    uVar14 = *(undefined8 *)puVar6;
                                                    lVar17 = *(long *)puVar4;
                                                    *(int *)(lVar15 + 0x1c) =
                                                         *(int *)(lVar15 + 0x1c) + 1;
                                                    if (lVar16 != 0) {
                                                      uVar1 = *(uint *)(lVar15 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                        *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                                        *(undefined8 *)
                                                         (lVar16 + (long)(int)uVar1 * 8 + 0x20) =
                                                             uVar14;
                                                        thunk_FUN_02bb0e9c();
                                                      }
                                                      else {
                                                        FUN_037a6538(lVar15,uVar14,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x30) = lVar15;
                                                  thunk_FUN_02bb0e9c((long *)(lVar12 + 0x30),lVar15)
                                                  ;
                                                  lVar15 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                              
                                                  Method_OVRSimpleJSON_JSONLazyCreator_Set<JSONNumber>__
                                                  );
                                                  FUN_037a5cd0(lVar15,*(undefined8 *)
                                                                                                                                              
                                                  Method_Newtonsoft_Json_Linq_JPropertyKeyedCollection_Contains__
                                                  );
                                                  lVar16 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                              
                                                  Method_Newtonsoft_Json_Linq_JObject_ValidateToken__
                                                  );
                                                  FUN_04dbdb8c(lVar16,0);
                                                  puVar6 = 
                                                  Method_UnityEngine_InputSystem_Utilities_JsonParser_ParseObjectValue__
                                                  ;
                                                  if (lVar16 != 0) {
                                                    *(undefined8 *)(lVar16 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_InputSystem_Utilities_JsonParser_ParseObjectValue__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar16 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_Newtonsoft_Json_Serialization_JsonPropertyCollection_AddProperty__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  if (lVar15 != 0) {
                                                    lVar17 = *(long *)(lVar15 + 0x10);
                                                    lVar18 = *(long *)puVar7;
                                                    *(int *)(lVar15 + 0x1c) =
                                                         *(int *)(lVar15 + 0x1c) + 1;
                                                    if (lVar17 != 0) {
                                                      uVar1 = *(uint *)(lVar15 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar17 + 0x18)) {
                                                        *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                                        plVar13 = (long *)(lVar17 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar13 = lVar16;
                                                        thunk_FUN_02bb0e9c(plVar13,lVar16);
                                                      }
                                                      else {
                                                        FUN_037a6538(lVar15,lVar16,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar18 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x28) = lVar15;
                                                  thunk_FUN_02bb0e9c((long *)(lVar12 + 0x28),lVar15)
                                                  ;
                                                  lVar15 = *(long *)(lVar11 + 0x10);
                                                  lVar16 = *(long *)puVar8;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar15 != 0) {
                                                    uVar1 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                      plVar13 = (long *)(lVar15 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar13 = lVar12;
                                                      thunk_FUN_02bb0e9c(plVar13,lVar12);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar11,lVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar12 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                              
                                                  Method_Newtonsoft_Json_Linq_JProperty_ClearItems__
                                                  );
                                                  FUN_04dbdb8c(lVar12,0);
                                                  puVar9 = 
                                                  Method_Newtonsoft_Json_JsonReader_ReadAsDouble__;
                                                  puVar5 = Method_LitJson_JsonReader_Read__;
                                                  if (lVar12 != 0) {
                                                    *(undefined8 *)(lVar12 + 0x10) =
                                                         *(undefined8 *)
                                                          Method_LitJson_JsonReader_Read__;
                                                    thunk_FUN_02bb0e9c();
                                                    *(undefined8 *)(lVar12 + 0x20) =
                                                         *(undefined8 *)puVar9;
                                                    thunk_FUN_02bb0e9c((undefined8 *)(lVar12 + 0x20)
                                                                      );
                                                    uVar14 = *(undefined8 *)puVar2;
                                                    *(undefined4 *)(lVar12 + 0x18) = 0;
                                                    lVar15 = thunk_FUN_02b79644(uVar14);
                                                    FUN_037a5cd0(lVar15,*(undefined8 *)puVar3);
                                                    if (lVar15 != 0) {
                                                      lVar16 = *(long *)(lVar15 + 0x10);
                                                      uVar14 = *(undefined8 *)puVar5;
                                                      lVar17 = *(long *)puVar4;
                                                      *(int *)(lVar15 + 0x1c) =
                                                           *(int *)(lVar15 + 0x1c) + 1;
                                                      if (lVar16 != 0) {
                                                        uVar1 = *(uint *)(lVar15 + 0x18);
                                                        if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                          *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                                          *(undefined8 *)
                                                           (lVar16 + (long)(int)uVar1 * 8 + 0x20) =
                                                               uVar14;
                                                          thunk_FUN_02bb0e9c();
                                                        }
                                                        else {
                                                          FUN_037a6538(lVar15,uVar14,
                                                                       *(undefined8 *)
                                                                        (*(long *)(*(long *)(lVar17 
                                                  + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x30) = lVar15;
                                                  thunk_FUN_02bb0e9c((long *)(lVar12 + 0x30),lVar15)
                                                  ;
                                                  lVar15 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                              
                                                  Method_OVRSimpleJSON_JSONLazyCreator_Set<JSONNumber>__
                                                  );
                                                  FUN_037a5cd0(lVar15,*(undefined8 *)
                                                                                                                                              
                                                  Method_Newtonsoft_Json_Linq_JPropertyKeyedCollection_Contains__
                                                  );
                                                  lVar16 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                              
                                                  Method_Newtonsoft_Json_Linq_JObject_ValidateToken__
                                                  );
                                                  FUN_04dbdb8c(lVar16,0);
                                                  if (lVar16 != 0) {
                                                    *(undefined8 *)(lVar16 + 0x18) =
                                                         *(undefined8 *)puVar6;
                                                    thunk_FUN_02bb0e9c();
                                                    puVar6 = 
                                                  Method_Newtonsoft_Json_Serialization_JsonPropertyCollection_AddProperty__
                                                  ;
                                                  *(undefined8 *)(lVar16 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_Newtonsoft_Json_Serialization_JsonPropertyCollection_AddProperty__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  if (lVar15 != 0) {
                                                    lVar17 = *(long *)(lVar15 + 0x10);
                                                    lVar18 = *(long *)puVar7;
                                                    *(int *)(lVar15 + 0x1c) =
                                                         *(int *)(lVar15 + 0x1c) + 1;
                                                    if (lVar17 != 0) {
                                                      uVar1 = *(uint *)(lVar15 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar17 + 0x18)) {
                                                        *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                                        plVar13 = (long *)(lVar17 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar13 = lVar16;
                                                        thunk_FUN_02bb0e9c(plVar13,lVar16);
                                                      }
                                                      else {
                                                        FUN_037a6538(lVar15,lVar16,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar18 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x28) = lVar15;
                                                  thunk_FUN_02bb0e9c((long *)(lVar12 + 0x28),lVar15)
                                                  ;
                                                  lVar15 = *(long *)(lVar11 + 0x10);
                                                  lVar16 = *(long *)puVar8;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar15 != 0) {
                                                    uVar1 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                      plVar13 = (long *)(lVar15 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar13 = lVar12;
                                                      thunk_FUN_02bb0e9c(plVar13,lVar12);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar11,lVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar12 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                              
                                                  Method_Newtonsoft_Json_Linq_JProperty_ClearItems__
                                                  );
                                                  FUN_04dbdb8c(lVar12,0);
                                                  puVar9 = 
                                                  Method_Newtonsoft_Json_Serialization_JsonObjectContract_GetUninitializedObject__
                                                  ;
                                                  puVar5 = 
                                                  Method_UnityEngine_Rendering_Universal_DecalChunk_RemoveAtSwapBack<DecalEntity>__
                                                  ;
                                                  if (lVar12 != 0) {
                                                    *(undefined8 *)(lVar12 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_Rendering_Universal_DecalChunk_RemoveAtSwapBack<DecalEntity>__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar12 + 0x20) =
                                                       *(undefined8 *)puVar9;
                                                  thunk_FUN_02bb0e9c((undefined8 *)(lVar12 + 0x20));
                                                  uVar14 = *(undefined8 *)puVar2;
                                                  *(undefined4 *)(lVar12 + 0x18) = 0;
                                                  lVar15 = thunk_FUN_02b79644(uVar14);
                                                  FUN_037a5cd0(lVar15,*(undefined8 *)puVar3);
                                                  if (lVar15 != 0) {
                                                    lVar16 = *(long *)(lVar15 + 0x10);
                                                    uVar14 = *(undefined8 *)puVar5;
                                                    lVar17 = *(long *)puVar4;
                                                    *(int *)(lVar15 + 0x1c) =
                                                         *(int *)(lVar15 + 0x1c) + 1;
                                                    if (lVar16 != 0) {
                                                      uVar1 = *(uint *)(lVar15 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                        *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                                        *(undefined8 *)
                                                         (lVar16 + (long)(int)uVar1 * 8 + 0x20) =
                                                             uVar14;
                                                        thunk_FUN_02bb0e9c();
                                                      }
                                                      else {
                                                        FUN_037a6538(lVar15,uVar14,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x30) = lVar15;
                                                  thunk_FUN_02bb0e9c((long *)(lVar12 + 0x30),lVar15)
                                                  ;
                                                  lVar15 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                              
                                                  Method_OVRSimpleJSON_JSONLazyCreator_Set<JSONNumber>__
                                                  );
                                                  FUN_037a5cd0(lVar15,*(undefined8 *)
                                                                                                                                              
                                                  Method_Newtonsoft_Json_Linq_JPropertyKeyedCollection_Contains__
                                                  );
                                                  lVar16 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                              
                                                  Method_Newtonsoft_Json_Linq_JObject_ValidateToken__
                                                  );
                                                  FUN_04dbdb8c(lVar16,0);
                                                  if (lVar16 != 0) {
                                                    *(undefined8 *)(lVar16 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_InputSystem_Utilities_JsonParser__ctor__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar16 + 0x10) =
                                                       *(undefined8 *)puVar6;
                                                  thunk_FUN_02bb0e9c();
                                                  if (lVar15 != 0) {
                                                    lVar17 = *(long *)(lVar15 + 0x10);
                                                    lVar18 = *(long *)puVar7;
                                                    *(int *)(lVar15 + 0x1c) =
                                                         *(int *)(lVar15 + 0x1c) + 1;
                                                    if (lVar17 != 0) {
                                                      uVar1 = *(uint *)(lVar15 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar17 + 0x18)) {
                                                        *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                                        plVar13 = (long *)(lVar17 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar13 = lVar16;
                                                        thunk_FUN_02bb0e9c(plVar13,lVar16);
                                                      }
                                                      else {
                                                        FUN_037a6538(lVar15,lVar16,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar18 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x28) = lVar15;
                                                  thunk_FUN_02bb0e9c((long *)(lVar12 + 0x28),lVar15)
                                                  ;
                                                  lVar15 = *(long *)(lVar11 + 0x10);
                                                  lVar16 = *(long *)puVar8;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar15 != 0) {
                                                    uVar1 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                      plVar13 = (long *)(lVar15 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar13 = lVar12;
                                                      thunk_FUN_02bb0e9c(plVar13,lVar12);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar11,lVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x28) = lVar11;
                                                  uVar14 = thunk_FUN_02bb0e9c((long *)(lVar10 + 0x28
                                                                                      ),lVar11);
                                                  FUN_05b9ad1c(uVar14,lVar10);
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


