/*
FUNCTION_NAME: FUN_05b9e670
ENTRY_POINT: 05b9e670
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 89
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;ui_interaction;telemetry;keyword_support
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4;eye_or_gaze_keyword_boost_only;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_05b9e670(void)

{
  int iVar1;
  uint uVar2;
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
  
  puVar3 = 
  Method_Newtonsoft_Json_Linq_JObject_System_Collections_Generic_IDictionary<System_String,Newtonsoft_Json_Linq_JToken>_get_Values__
  ;
  if ((DAT_066d4fa1 & 1) == 0) {
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
    FUN_02b3c81c(Method_Newtonsoft_Json_JsonConvert_DeserializeObject<UserGameData>__);
    FUN_02b3c81c(Method_Newtonsoft_Json_JsonConvert_DeserializeObject<Dictionary<string,_string>>__)
    ;
    FUN_02b3c81c(PTR_DAT_06332138);
    FUN_02b3c81c(Method_Newtonsoft_Json_JsonConvert_ToString__);
    FUN_02b3c81c(
                Method_Oculus_Interaction_JoystickPoseMovementProvider_OnSelectingInteractorViewRemoved__
                );
    FUN_02b3c81c(Method_Newtonsoft_Json_JsonConverterAttribute__ctor__);
    FUN_02b3c81c(Method_LitJson_JsonData__ctor__);
    FUN_02b3c81c(Method_LitJson_JsonData_EnsureCollection__);
    FUN_02b3c81c(Method_LitJson_JsonData_EnsureDictionary__);
    FUN_02b3c81c(Method_Newtonsoft_Json_Linq_JToken_Replace__);
    FUN_02b3c81c(Method_LitJson_JsonData_EnsureList__);
    FUN_02b3c81c(
                Method_System_Collections_Generic_List<IntegratedSubsystemDescriptor>_GetEnumerator__
                );
    FUN_02b3c81c(Method_LitJson_JsonData_LitJson_IJsonWrapper_GetBoolean__);
    FUN_02b3c81c(Method_LitJson_JsonData_LitJson_IJsonWrapper_GetDouble__);
    FUN_02b3c81c(Method_LitJson_JsonData_LitJson_IJsonWrapper_GetInt__);
    FUN_02b3c81c(PTR_DAT_06312a80);
    FUN_02b3c81c(Method_Newtonsoft_Json_Linq_JToken_op_Explicit__);
    FUN_02b3c81c(Method_System_Globalization_JapaneseCalendar_ToFourDigitYear__);
    FUN_02b3c81c(Method_LitJson_JsonData_LitJson_IJsonWrapper_GetLong__);
    FUN_02b3c81c(Method_LitJson_JsonData_LitJson_IJsonWrapper_GetString__);
    DAT_066d4fa1 = 1;
  }
  lVar10 = thunk_FUN_02b79644(*(undefined8 *)puVar3);
  FUN_04dbdb8c(lVar10,0);
  puVar9 = Method_LitJson_JsonData_LitJson_IJsonWrapper_GetString__;
  puVar8 = Method_Oculus_Interaction_JoystickPoseMovementProvider_OnSelectingInteractorViewRemoved__
  ;
  puVar6 = Method_OVRSimpleJSON_JSONLazyCreator_Set<JSONArray>__;
  puVar5 = Method_Newtonsoft_Json_Linq_JProperty_SetItem__;
  puVar4 = Method_Newtonsoft_Json_Linq_JProperty_GetItem__;
  puVar3 = PTR_DAT_06312a80;
  if (lVar10 != 0) {
    *(undefined8 *)(lVar10 + 0x10) =
         *(undefined8 *)Method_LitJson_JsonData_LitJson_IJsonWrapper_GetDouble__;
    thunk_FUN_02bb0e9c();
    *(undefined8 *)(lVar10 + 0x18) = *(undefined8 *)puVar8;
    thunk_FUN_02bb0e9c();
    *(undefined8 *)(lVar10 + 0x30) = *(undefined8 *)puVar9;
    thunk_FUN_02bb0e9c();
    *(undefined8 *)(lVar10 + 0x38) = *(undefined8 *)puVar3;
    thunk_FUN_02bb0e9c();
    *(undefined8 *)(lVar10 + 0x40) = *(undefined8 *)puVar3;
    thunk_FUN_02bb0e9c();
    lVar11 = thunk_FUN_02b79644(*(undefined8 *)puVar6);
    FUN_037a5cd0(lVar11,*(undefined8 *)puVar5);
    lVar12 = thunk_FUN_02b79644(*(undefined8 *)puVar4);
    FUN_04dbdb8c(lVar12,0);
    if (lVar12 != 0) {
      *(undefined8 *)(lVar12 + 0x18) =
           *(undefined8 *)Method_Newtonsoft_Json_Linq_JToken_op_Explicit__;
      *(undefined4 *)(lVar12 + 0x10) = 0x16c;
      thunk_FUN_02bb0e9c();
      puVar3 = Method_Newtonsoft_Json_Linq_JProperty_InsertItem__;
      if (lVar11 != 0) {
        lVar15 = *(long *)(lVar11 + 0x10);
        lVar16 = *(long *)Method_Newtonsoft_Json_Linq_JProperty_InsertItem__;
        *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
        if (lVar15 != 0) {
          uVar2 = *(uint *)(lVar11 + 0x18);
          if (uVar2 < *(uint *)(lVar15 + 0x18)) {
            *(uint *)(lVar11 + 0x18) = uVar2 + 1;
            plVar13 = (long *)(lVar15 + (long)(int)uVar2 * 8 + 0x20);
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
            *(undefined4 *)(lVar12 + 0x10) = 0x26c;
            thunk_FUN_02bb0e9c();
            lVar15 = *(long *)(lVar11 + 0x10);
            lVar16 = *(long *)puVar3;
            *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
            puVar5 = Method_OVRSimpleJSON_JSONLazyCreator_Set<JSONBool>__;
            puVar4 = Method_Newtonsoft_Json_Linq_JProperty_RemoveItemAt__;
            puVar3 = Method_Newtonsoft_Json_Linq_JProperty_ClearItems__;
            if (lVar15 != 0) {
              uVar2 = *(uint *)(lVar11 + 0x18);
              if (uVar2 < *(uint *)(lVar15 + 0x18)) {
                *(uint *)(lVar11 + 0x18) = uVar2 + 1;
                plVar13 = (long *)(lVar15 + (long)(int)uVar2 * 8 + 0x20);
                *plVar13 = lVar12;
                thunk_FUN_02bb0e9c(plVar13,lVar12);
              }
              else {
                FUN_037a6538(lVar11,lVar12,
                             *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
              }
              *(long *)(lVar10 + 0x20) = lVar11;
              thunk_FUN_02bb0e9c((long *)(lVar10 + 0x20),lVar11);
              lVar11 = thunk_FUN_02b79644(*(undefined8 *)puVar5);
              FUN_037a5cd0(lVar11,*(undefined8 *)puVar4);
              lVar12 = thunk_FUN_02b79644(*(undefined8 *)puVar3);
              FUN_04dbdb8c(lVar12,0);
              puVar5 = Method_LitJson_JsonData_LitJson_IJsonWrapper_GetBoolean__;
              puVar4 = PTR_DAT_063145b8;
              puVar3 = PTR_DAT_063145b0;
              if (lVar12 != 0) {
                *(undefined8 *)(lVar12 + 0x10) = *(undefined8 *)Method_LitJson_JsonData__ctor__;
                thunk_FUN_02bb0e9c();
                *(undefined8 *)(lVar12 + 0x20) = *(undefined8 *)puVar5;
                thunk_FUN_02bb0e9c((undefined8 *)(lVar12 + 0x20));
                uVar14 = *(undefined8 *)puVar3;
                *(undefined4 *)(lVar12 + 0x18) = 3;
                lVar15 = thunk_FUN_02b79644(uVar14);
                FUN_037a5cd0(lVar15,*(undefined8 *)puVar4);
                puVar5 = PTR_DAT_063173b8;
                if (lVar15 != 0) {
                  lVar16 = *(long *)(lVar15 + 0x10);
                  uVar14 = *(undefined8 *)
                            Method_System_Globalization_JapaneseCalendar_ToFourDigitYear__;
                  lVar17 = *(long *)PTR_DAT_063173b8;
                  *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
                  puVar9 = Method_OVRSimpleJSON_JSONLazyCreator_Set<JSONNumber>__;
                  puVar8 = Method_Newtonsoft_Json_Linq_JPropertyKeyedCollection_Contains__;
                  puVar6 = Method_Newtonsoft_Json_Linq_JObject_ValidateToken__;
                  if (lVar16 != 0) {
                    uVar2 = *(uint *)(lVar15 + 0x18);
                    if (uVar2 < *(uint *)(lVar16 + 0x18)) {
                      *(uint *)(lVar15 + 0x18) = uVar2 + 1;
                      *(undefined8 *)(lVar16 + (long)(int)uVar2 * 8 + 0x20) = uVar14;
                      thunk_FUN_02bb0e9c();
                    }
                    else {
                      FUN_037a6538(lVar15,uVar14,
                                   *(undefined8 *)
                                    (*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
                    }
                    *(long *)(lVar12 + 0x30) = lVar15;
                    thunk_FUN_02bb0e9c((long *)(lVar12 + 0x30),lVar15);
                    lVar15 = thunk_FUN_02b79644(*(undefined8 *)puVar9);
                    FUN_037a5cd0(lVar15,*(undefined8 *)puVar8);
                    lVar16 = thunk_FUN_02b79644(*(undefined8 *)puVar6);
                    FUN_04dbdb8c(lVar16,0);
                    if (lVar16 != 0) {
                      *(undefined8 *)(lVar16 + 0x18) =
                           *(undefined8 *)Method_LitJson_JsonData_LitJson_IJsonWrapper_GetLong__;
                      thunk_FUN_02bb0e9c();
                      *(undefined8 *)(lVar16 + 0x10) =
                           *(undefined8 *)Method_LitJson_JsonData_LitJson_IJsonWrapper_GetString__;
                      thunk_FUN_02bb0e9c();
                      if (lVar15 != 0) {
                        lVar17 = *(long *)(lVar15 + 0x10);
                        lVar18 = *(long *)Method_Newtonsoft_Json_Linq_JProperty_Load__;
                        *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
                        if (lVar17 != 0) {
                          uVar2 = *(uint *)(lVar15 + 0x18);
                          if (uVar2 < *(uint *)(lVar17 + 0x18)) {
                            *(uint *)(lVar15 + 0x18) = uVar2 + 1;
                            plVar13 = (long *)(lVar17 + (long)(int)uVar2 * 8 + 0x20);
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
                          *(undefined1 *)(lVar12 + 0x38) = 1;
                          if (lVar11 != 0) {
                            lVar15 = *(long *)(lVar11 + 0x10);
                            lVar16 = *(long *)Method_Newtonsoft_Json_Linq_JProperty_RemoveItem__;
                            *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
                            if (lVar15 != 0) {
                              uVar2 = *(uint *)(lVar11 + 0x18);
                              if (uVar2 < *(uint *)(lVar15 + 0x18)) {
                                *(uint *)(lVar11 + 0x18) = uVar2 + 1;
                                plVar13 = (long *)(lVar15 + (long)(int)uVar2 * 8 + 0x20);
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
                              puVar7 = 
                              Method_Newtonsoft_Json_JsonConvert_DeserializeObject<Dictionary<string,_string>>__
                              ;
                              if (lVar12 != 0) {
                                *(undefined8 *)(lVar12 + 0x10) = *(undefined8 *)PTR_DAT_06332138;
                                thunk_FUN_02bb0e9c();
                                *(undefined8 *)(lVar12 + 0x20) = *(undefined8 *)puVar7;
                                thunk_FUN_02bb0e9c((undefined8 *)(lVar12 + 0x20));
                                uVar14 = *(undefined8 *)puVar3;
                                *(undefined4 *)(lVar12 + 0x18) = 3;
                                lVar15 = thunk_FUN_02b79644(uVar14);
                                FUN_037a5cd0(lVar15,*(undefined8 *)puVar4);
                                if (lVar15 != 0) {
                                  lVar16 = *(long *)(lVar15 + 0x10);
                                  uVar14 = *(undefined8 *)
                                            Method_System_Collections_Generic_List<IntegratedSubsystemDescriptor>_GetEnumerator__
                                  ;
                                  lVar17 = *(long *)puVar5;
                                  *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
                                  puVar4 = Method_LitJson_JsonData_LitJson_IJsonWrapper_GetString__;
                                  puVar3 = Method_Newtonsoft_Json_Linq_JProperty_ClearItems__;
                                  if (lVar16 != 0) {
                                    uVar2 = *(uint *)(lVar15 + 0x18);
                                    if (uVar2 < *(uint *)(lVar16 + 0x18)) {
                                      *(uint *)(lVar15 + 0x18) = uVar2 + 1;
                                      *(undefined8 *)(lVar16 + (long)(int)uVar2 * 8 + 0x20) = uVar14
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
                                    lVar15 = thunk_FUN_02b79644(*(undefined8 *)puVar9);
                                    FUN_037a5cd0(lVar15,*(undefined8 *)puVar8);
                                    lVar16 = thunk_FUN_02b79644(*(undefined8 *)puVar6);
                                    FUN_04dbdb8c(lVar16,0);
                                    puVar5 = Method_Newtonsoft_Json_Linq_JProperty_Load__;
                                    if (lVar16 != 0) {
                                      *(undefined8 *)(lVar16 + 0x18) =
                                           *(undefined8 *)Method_LitJson_JsonData_EnsureDictionary__
                                      ;
                                      thunk_FUN_02bb0e9c();
                                      *(undefined8 *)(lVar16 + 0x10) = *(undefined8 *)puVar4;
                                      thunk_FUN_02bb0e9c();
                                      if (lVar15 != 0) {
                                        lVar17 = *(long *)(lVar15 + 0x10);
                                        lVar18 = *(long *)puVar5;
                                        *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
                                        if (lVar17 != 0) {
                                          uVar2 = *(uint *)(lVar15 + 0x18);
                                          if (uVar2 < *(uint *)(lVar17 + 0x18)) {
                                            *(uint *)(lVar15 + 0x18) = uVar2 + 1;
                                            plVar13 = (long *)(lVar17 + (long)(int)uVar2 * 8 + 0x20)
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
                                          iVar1 = *(int *)(lVar11 + 0x1c);
                                          lVar15 = *(long *)(lVar11 + 0x10);
                                          *(undefined1 *)(lVar12 + 0x38) = 1;
                                          puVar7 = 
                                          Method_Newtonsoft_Json_Linq_JProperty_RemoveItem__;
                                          *(int *)(lVar11 + 0x1c) = iVar1 + 1;
                                          if (lVar15 != 0) {
                                            uVar2 = *(uint *)(lVar11 + 0x18);
                                            if (uVar2 < *(uint *)(lVar15 + 0x18)) {
                                              *(uint *)(lVar11 + 0x18) = uVar2 + 1;
                                              plVar13 = (long *)(lVar15 + (long)(int)uVar2 * 8 +
                                                                0x20);
                                              *plVar13 = lVar12;
                                              thunk_FUN_02bb0e9c(plVar13,lVar12);
                                            }
                                            else {
                                              FUN_037a6538(lVar11,lVar12,
                                                           *(undefined8 *)
                                                            (*(long *)(*(long *)(*(long *)puVar7 +
                                                                                0x20) + 0xc0) + 0x70
                                                            ));
                                            }
                                            lVar12 = thunk_FUN_02b79644(*(undefined8 *)puVar3);
                                            FUN_04dbdb8c(lVar12,0);
                                            puVar7 = Method_LitJson_JsonData_EnsureList__;
                                            if (lVar12 != 0) {
                                              *(undefined8 *)(lVar12 + 0x10) =
                                                   *(undefined8 *)
                                                    Method_Newtonsoft_Json_JsonConvert_ToString__;
                                              thunk_FUN_02bb0e9c();
                                              *(undefined8 *)(lVar12 + 0x20) = *(undefined8 *)puVar7
                                              ;
                                              thunk_FUN_02bb0e9c((undefined8 *)(lVar12 + 0x20));
                                              uVar14 = *(undefined8 *)puVar9;
                                              *(undefined4 *)(lVar12 + 0x18) = 3;
                                              lVar15 = thunk_FUN_02b79644(uVar14);
                                              FUN_037a5cd0(lVar15,*(undefined8 *)puVar8);
                                              lVar16 = thunk_FUN_02b79644(*(undefined8 *)puVar6);
                                              FUN_04dbdb8c(lVar16,0);
                                              if (lVar16 != 0) {
                                                *(undefined8 *)(lVar16 + 0x18) =
                                                     *(undefined8 *)
                                                                                                            
                                                  Method_Newtonsoft_Json_JsonConverterAttribute__ctor__
                                                ;
                                                thunk_FUN_02bb0e9c();
                                                *(undefined8 *)(lVar16 + 0x10) =
                                                     *(undefined8 *)puVar4;
                                                thunk_FUN_02bb0e9c();
                                                if (lVar15 != 0) {
                                                  lVar17 = *(long *)(lVar15 + 0x10);
                                                  lVar18 = *(long *)puVar5;
                                                  *(int *)(lVar15 + 0x1c) =
                                                       *(int *)(lVar15 + 0x1c) + 1;
                                                  if (lVar17 != 0) {
                                                    uVar2 = *(uint *)(lVar15 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar17 + 0x18)) {
                                                      *(uint *)(lVar15 + 0x18) = uVar2 + 1;
                                                      plVar13 = (long *)(lVar17 + (long)(int)uVar2 *
                                                                                  8 + 0x20);
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
                                                  iVar1 = *(int *)(lVar11 + 0x1c);
                                                  lVar15 = *(long *)(lVar11 + 0x10);
                                                  *(undefined1 *)(lVar12 + 0x38) = 1;
                                                  puVar7 = 
                                                  Method_Newtonsoft_Json_Linq_JProperty_RemoveItem__
                                                  ;
                                                  *(int *)(lVar11 + 0x1c) = iVar1 + 1;
                                                  if (lVar15 != 0) {
                                                    uVar2 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar2 + 1;
                                                      plVar13 = (long *)(lVar15 + (long)(int)uVar2 *
                                                                                  8 + 0x20);
                                                      *plVar13 = lVar12;
                                                      thunk_FUN_02bb0e9c(plVar13,lVar12);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar11,lVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(*(long *)
                                                  puVar7 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar12 = thunk_FUN_02b79644(*(undefined8 *)puVar3)
                                                  ;
                                                  FUN_04dbdb8c(lVar12,0);
                                                  puVar3 = 
                                                  Method_LitJson_JsonData_EnsureCollection__;
                                                  if (lVar12 != 0) {
                                                    *(undefined8 *)(lVar12 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Newtonsoft_Json_JsonConvert_DeserializeObject<UserGameData>__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar12 + 0x20) =
                                                       *(undefined8 *)puVar3;
                                                  thunk_FUN_02bb0e9c((undefined8 *)(lVar12 + 0x20));
                                                  uVar14 = *(undefined8 *)puVar9;
                                                  *(undefined4 *)(lVar12 + 0x18) = 3;
                                                  lVar15 = thunk_FUN_02b79644(uVar14);
                                                  FUN_037a5cd0(lVar15,*(undefined8 *)puVar8);
                                                  lVar16 = thunk_FUN_02b79644(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_04dbdb8c(lVar16,0);
                                                  if (lVar16 != 0) {
                                                    *(undefined8 *)(lVar16 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_LitJson_JsonData_LitJson_IJsonWrapper_GetInt__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar16 + 0x10) =
                                                       *(undefined8 *)puVar4;
                                                  thunk_FUN_02bb0e9c();
                                                  if (lVar15 != 0) {
                                                    lVar17 = *(long *)(lVar15 + 0x10);
                                                    lVar18 = *(long *)puVar5;
                                                    *(int *)(lVar15 + 0x1c) =
                                                         *(int *)(lVar15 + 0x1c) + 1;
                                                    if (lVar17 != 0) {
                                                      uVar2 = *(uint *)(lVar15 + 0x18);
                                                      if (uVar2 < *(uint *)(lVar17 + 0x18)) {
                                                        *(uint *)(lVar15 + 0x18) = uVar2 + 1;
                                                        plVar13 = (long *)(lVar17 + (long)(int)uVar2
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
                                                  iVar1 = *(int *)(lVar11 + 0x1c);
                                                  lVar15 = *(long *)(lVar11 + 0x10);
                                                  *(undefined1 *)(lVar12 + 0x38) = 1;
                                                  puVar3 = 
                                                  Method_Newtonsoft_Json_Linq_JProperty_RemoveItem__
                                                  ;
                                                  *(int *)(lVar11 + 0x1c) = iVar1 + 1;
                                                  if (lVar15 != 0) {
                                                    uVar2 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar2 + 1;
                                                      plVar13 = (long *)(lVar15 + (long)(int)uVar2 *
                                                                                  8 + 0x20);
                                                      *plVar13 = lVar12;
                                                      thunk_FUN_02bb0e9c(plVar13,lVar12);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar11,lVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(*(long *)
                                                  puVar3 + 0x20) + 0xc0) + 0x70));
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
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


