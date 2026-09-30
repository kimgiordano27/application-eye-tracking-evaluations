/*
FUNCTION_NAME: UnityEngine.SceneManagement.SceneManager$$Internal_SceneLoaded
ENTRY_POINT: 05ba4654
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;keyword_support
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_21;telemetry_or_network_hits_5;eye_or_gaze_keyword_boost_only
*/


void UnityEngine_SceneManagement_SceneManager__Internal_SceneLoaded(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  undefined8 unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  long *unaff_x29;
  
  if (unaff_x22 != 0) {
    lVar6 = *(long *)(unaff_x22 + 0x10);
    *(int *)(unaff_x22 + 0x1c) = *(int *)(unaff_x22 + 0x1c) + 1;
    if (lVar6 != 0) {
      uVar1 = *(uint *)(unaff_x22 + 0x18);
      if (uVar1 < *(uint *)(lVar6 + 0x18)) {
        *(uint *)(unaff_x22 + 0x18) = uVar1 + 1;
        *(undefined8 *)(lVar6 + (long)(int)uVar1 * 8 + 0x20) = unaff_x23;
        thunk_FUN_02bb0e9c();
      }
      else {
        FUN_037a6538();
      }
      *(long *)(unaff_x21 + 0x28) = unaff_x22;
      thunk_FUN_02bb0e9c();
      lVar6 = *(long *)(unaff_x20 + 0x10);
      *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
      if (lVar6 != 0) {
        uVar1 = *(uint *)(unaff_x20 + 0x18);
        if (uVar1 < *(uint *)(lVar6 + 0x18)) {
          *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
          *(long *)(lVar6 + (long)(int)uVar1 * 8 + 0x20) = unaff_x21;
          thunk_FUN_02bb0e9c();
        }
        else {
          FUN_037a6538();
        }
        lVar6 = thunk_FUN_02b79644(*unaff_x25);
        FUN_04dbdb8c(lVar6,0);
        puVar2 = Method_Newtonsoft_Json_JsonReader_set_MaxDepth__;
        if (lVar6 != 0) {
          *(undefined8 *)(lVar6 + 0x10) =
               *(undefined8 *)
                Method_Oculus_Interaction_Interactable<PokeInteractor,_PokeInteractable>_get_State__
          ;
          thunk_FUN_02bb0e9c();
          *(undefined8 *)(lVar6 + 0x20) = *(undefined8 *)puVar2;
          thunk_FUN_02bb0e9c((undefined8 *)(lVar6 + 0x20));
          uVar3 = *unaff_x28;
          *(undefined4 *)(lVar6 + 0x18) = 0;
          lVar4 = thunk_FUN_02b79644(uVar3);
          FUN_037a5cd0(lVar4,*unaff_x26);
          if (lVar4 != 0) {
            lVar7 = *(long *)(lVar4 + 0x10);
            uVar3 = *(undefined8 *)
                     Method_System_Linq_Enumerable_Select<EnumMemberAttribute,_string>__;
            lVar8 = *unaff_x29;
            *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
            if (lVar7 != 0) {
              uVar1 = *(uint *)(lVar4 + 0x18);
              if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                *(undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar3;
                thunk_FUN_02bb0e9c();
              }
              else {
                FUN_037a6538(lVar4,uVar3,
                             *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
              }
              *(long *)(lVar6 + 0x30) = lVar4;
              thunk_FUN_02bb0e9c((long *)(lVar6 + 0x30),lVar4);
              lVar4 = thunk_FUN_02b79644(*unaff_x24);
              FUN_037a5cd0(lVar4,*(undefined8 *)
                                  Method_Newtonsoft_Json_Linq_JPropertyKeyedCollection_Contains__);
              lVar7 = thunk_FUN_02b79644(*(undefined8 *)
                                          Method_Newtonsoft_Json_Linq_JObject_ValidateToken__);
              FUN_04dbdb8c(lVar7,0);
              if (lVar7 != 0) {
                *(undefined8 *)(lVar7 + 0x18) =
                     *(undefined8 *)
                      Method_Newtonsoft_Json_JsonSerializer_Deserialize<RegexOptions>__;
                thunk_FUN_02bb0e9c();
                *(undefined8 *)(lVar7 + 0x10) = *unaff_x27;
                thunk_FUN_02bb0e9c();
                if (lVar4 != 0) {
                  lVar8 = *(long *)(lVar4 + 0x10);
                  lVar9 = *(long *)Method_Newtonsoft_Json_Linq_JProperty_Load__;
                  *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                  if (lVar8 != 0) {
                    uVar1 = *(uint *)(lVar4 + 0x18);
                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                      *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                      plVar5 = (long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
                      *plVar5 = lVar7;
                      thunk_FUN_02bb0e9c(plVar5,lVar7);
                    }
                    else {
                      FUN_037a6538(lVar4,lVar7,
                                   *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70)
                                  );
                    }
                    *(long *)(lVar6 + 0x28) = lVar4;
                    thunk_FUN_02bb0e9c((long *)(lVar6 + 0x28),lVar4);
                    lVar4 = *(long *)(unaff_x20 + 0x10);
                    *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
                    if (lVar4 != 0) {
                      uVar1 = *(uint *)(unaff_x20 + 0x18);
                      if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                        *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                        plVar5 = (long *)(lVar4 + (long)(int)uVar1 * 8 + 0x20);
                        *plVar5 = lVar6;
                        thunk_FUN_02bb0e9c(plVar5,lVar6);
                      }
                      else {
                        FUN_037a6538();
                      }
                      lVar6 = thunk_FUN_02b79644(*unaff_x25);
                      FUN_04dbdb8c(lVar6,0);
                      puVar2 = Method_LitJson_JsonData_LitJson_IJsonWrapper_GetBoolean__;
                      if (lVar6 != 0) {
                        *(undefined8 *)(lVar6 + 0x10) =
                             *(undefined8 *)Method_LitJson_JsonData__ctor__;
                        thunk_FUN_02bb0e9c();
                        *(undefined8 *)(lVar6 + 0x20) = *(undefined8 *)puVar2;
                        thunk_FUN_02bb0e9c((undefined8 *)(lVar6 + 0x20));
                        uVar3 = *unaff_x28;
                        *(undefined4 *)(lVar6 + 0x18) = 3;
                        lVar4 = thunk_FUN_02b79644(uVar3);
                        FUN_037a5cd0(lVar4,*unaff_x26);
                        if (lVar4 != 0) {
                          lVar7 = *(long *)(lVar4 + 0x10);
                          uVar3 = *(undefined8 *)
                                   Method_System_Globalization_JapaneseCalendar_ToFourDigitYear__;
                          lVar8 = *unaff_x29;
                          *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                          if (lVar7 != 0) {
                            uVar1 = *(uint *)(lVar4 + 0x18);
                            if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                              *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                              *(undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar3;
                              thunk_FUN_02bb0e9c();
                            }
                            else {
                              FUN_037a6538(lVar4,uVar3,
                                           *(undefined8 *)
                                            (*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
                            }
                            *(long *)(lVar6 + 0x30) = lVar4;
                            thunk_FUN_02bb0e9c((long *)(lVar6 + 0x30),lVar4);
                            lVar4 = thunk_FUN_02b79644(*unaff_x24);
                            FUN_037a5cd0(lVar4,*(undefined8 *)
                                                Method_Newtonsoft_Json_Linq_JPropertyKeyedCollection_Contains__
                                        );
                            lVar7 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                
                                                  Method_Newtonsoft_Json_Linq_JObject_ValidateToken__
                                                  );
                            FUN_04dbdb8c(lVar7,0);
                            if (lVar7 != 0) {
                              *(undefined8 *)(lVar7 + 0x18) =
                                   *(undefined8 *)
                                    Method_LitJson_JsonData_LitJson_IJsonWrapper_GetLong__;
                              thunk_FUN_02bb0e9c();
                              *(undefined8 *)(lVar7 + 0x10) = *unaff_x27;
                              thunk_FUN_02bb0e9c();
                              if (lVar4 != 0) {
                                lVar8 = *(long *)(lVar4 + 0x10);
                                lVar9 = *(long *)Method_Newtonsoft_Json_Linq_JProperty_Load__;
                                *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                                if (lVar8 != 0) {
                                  uVar1 = *(uint *)(lVar4 + 0x18);
                                  if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                    *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                    plVar5 = (long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
                                    *plVar5 = lVar7;
                                    thunk_FUN_02bb0e9c(plVar5,lVar7);
                                  }
                                  else {
                                    FUN_037a6538(lVar4,lVar7,
                                                 *(undefined8 *)
                                                  (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70)
                                                );
                                  }
                                  *(long *)(lVar6 + 0x28) = lVar4;
                                  thunk_FUN_02bb0e9c((long *)(lVar6 + 0x28),lVar4);
                                  lVar4 = *(long *)(unaff_x20 + 0x10);
                                  *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
                                  if (lVar4 != 0) {
                                    uVar1 = *(uint *)(unaff_x20 + 0x18);
                                    if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                                      *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                                      plVar5 = (long *)(lVar4 + (long)(int)uVar1 * 8 + 0x20);
                                      *plVar5 = lVar6;
                                      thunk_FUN_02bb0e9c(plVar5,lVar6);
                                    }
                                    else {
                                      FUN_037a6538();
                                    }
                                    lVar6 = thunk_FUN_02b79644(*unaff_x25);
                                    FUN_04dbdb8c(lVar6,0);
                                    puVar2 = 
                                    Method_Newtonsoft_Json_JsonConvert_DeserializeObject<Dictionary<string,_string>>__
                                    ;
                                    if (lVar6 != 0) {
                                      *(undefined8 *)(lVar6 + 0x10) =
                                           *(undefined8 *)PTR_DAT_06332138;
                                      thunk_FUN_02bb0e9c();
                                      *(undefined8 *)(lVar6 + 0x20) = *(undefined8 *)puVar2;
                                      thunk_FUN_02bb0e9c((undefined8 *)(lVar6 + 0x20));
                                      uVar3 = *unaff_x28;
                                      *(undefined4 *)(lVar6 + 0x18) = 3;
                                      lVar4 = thunk_FUN_02b79644(uVar3);
                                      FUN_037a5cd0(lVar4,*unaff_x26);
                                      if (lVar4 != 0) {
                                        lVar7 = *(long *)(lVar4 + 0x10);
                                        uVar3 = *(undefined8 *)
                                                 Method_System_Collections_Generic_List<IntegratedSubsystemDescriptor>_GetEnumerator__
                                        ;
                                        lVar8 = *unaff_x29;
                                        *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                                        if (lVar7 != 0) {
                                          uVar1 = *(uint *)(lVar4 + 0x18);
                                          if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                            *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                            *(undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) =
                                                 uVar3;
                                            thunk_FUN_02bb0e9c();
                                          }
                                          else {
                                            FUN_037a6538(lVar4,uVar3,
                                                         *(undefined8 *)
                                                          (*(long *)(*(long *)(lVar8 + 0x20) + 0xc0)
                                                          + 0x70));
                                          }
                                          *(long *)(lVar6 + 0x30) = lVar4;
                                          thunk_FUN_02bb0e9c((long *)(lVar6 + 0x30),lVar4);
                                          lVar4 = thunk_FUN_02b79644(*unaff_x24);
                                          FUN_037a5cd0(lVar4,*(undefined8 *)
                                                                                                                            
                                                  Method_Newtonsoft_Json_Linq_JPropertyKeyedCollection_Contains__
                                                  );
                                          lVar7 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                            
                                                  Method_Newtonsoft_Json_Linq_JObject_ValidateToken__
                                                  );
                                          FUN_04dbdb8c(lVar7,0);
                                          if (lVar7 != 0) {
                                            *(undefined8 *)(lVar7 + 0x18) =
                                                 *(undefined8 *)
                                                  Method_LitJson_JsonData_EnsureDictionary__;
                                            thunk_FUN_02bb0e9c();
                                            *(undefined8 *)(lVar7 + 0x10) = *unaff_x27;
                                            thunk_FUN_02bb0e9c();
                                            if (lVar4 != 0) {
                                              lVar8 = *(long *)(lVar4 + 0x10);
                                              lVar9 = *(long *)
                                                  Method_Newtonsoft_Json_Linq_JProperty_Load__;
                                              *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                                              if (lVar8 != 0) {
                                                uVar1 = *(uint *)(lVar4 + 0x18);
                                                if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                  *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                  plVar5 = (long *)(lVar8 + (long)(int)uVar1 * 8 +
                                                                   0x20);
                                                  *plVar5 = lVar7;
                                                  thunk_FUN_02bb0e9c(plVar5,lVar7);
                                                }
                                                else {
                                                  FUN_037a6538(lVar4,lVar7,
                                                               *(undefined8 *)
                                                                (*(long *)(*(long *)(lVar9 + 0x20) +
                                                                          0xc0) + 0x70));
                                                }
                                                *(long *)(lVar6 + 0x28) = lVar4;
                                                thunk_FUN_02bb0e9c((long *)(lVar6 + 0x28),lVar4);
                                                lVar4 = *(long *)(unaff_x20 + 0x10);
                                                *(int *)(unaff_x20 + 0x1c) =
                                                     *(int *)(unaff_x20 + 0x1c) + 1;
                                                if (lVar4 != 0) {
                                                  uVar1 = *(uint *)(unaff_x20 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                                                    *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                                                    plVar5 = (long *)(lVar4 + (long)(int)uVar1 * 8 +
                                                                     0x20);
                                                    *plVar5 = lVar6;
                                                    thunk_FUN_02bb0e9c(plVar5,lVar6);
                                                  }
                                                  else {
                                                    FUN_037a6538();
                                                  }
                                                  lVar6 = thunk_FUN_02b79644(*unaff_x25);
                                                  FUN_04dbdb8c(lVar6,0);
                                                  puVar2 = 
                                                  Method_Newtonsoft_Json_JsonSerializer_set_MetadataPropertyHandling__
                                                  ;
                                                  if (lVar6 != 0) {
                                                    *(undefined8 *)(lVar6 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Newtonsoft_Json_Serialization_JsonSerializerInternalBase_GetErrorContext__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar6 + 0x20) =
                                                       *(undefined8 *)puVar2;
                                                  thunk_FUN_02bb0e9c((undefined8 *)(lVar6 + 0x20));
                                                  uVar3 = *unaff_x28;
                                                  *(undefined4 *)(lVar6 + 0x18) = 4;
                                                  lVar4 = thunk_FUN_02b79644(uVar3);
                                                  FUN_037a5cd0(lVar4,*unaff_x26);
                                                  if (lVar4 != 0) {
                                                    lVar7 = *(long *)(lVar4 + 0x10);
                                                    uVar3 = *(undefined8 *)
                                                                                                                          
                                                  Method_UnityEngine_InputSystem_InputControlExtensions_CopyState__
                                                  ;
                                                  lVar8 = *unaff_x29;
                                                  *(int *)(lVar4 + 0x1c) =
                                                       *(int *)(lVar4 + 0x1c) + 1;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *(uint *)(lVar4 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar3
                                                      ;
                                                      thunk_FUN_02bb0e9c();
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar4,uVar3,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar8 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar6 + 0x30) = lVar4;
                                                  thunk_FUN_02bb0e9c((long *)(lVar6 + 0x30),lVar4);
                                                  lVar4 = thunk_FUN_02b79644(*unaff_x24);
                                                  FUN_037a5cd0(lVar4,*(undefined8 *)
                                                                                                                                            
                                                  Method_Newtonsoft_Json_Linq_JPropertyKeyedCollection_Contains__
                                                  );
                                                  lVar7 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                            
                                                  Method_Newtonsoft_Json_Linq_JObject_ValidateToken__
                                                  );
                                                  FUN_04dbdb8c(lVar7,0);
                                                  if (lVar7 != 0) {
                                                    *(undefined8 *)(lVar7 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Newtonsoft_Json_JsonReader_set_FloatParseHandling__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar7 + 0x10) = *unaff_x27;
                                                  thunk_FUN_02bb0e9c();
                                                  if (lVar4 != 0) {
                                                    lVar8 = *(long *)(lVar4 + 0x10);
                                                    lVar9 = *(long *)
                                                  Method_Newtonsoft_Json_Linq_JProperty_Load__;
                                                  *(int *)(lVar4 + 0x1c) =
                                                       *(int *)(lVar4 + 0x1c) + 1;
                                                  if (lVar8 != 0) {
                                                    uVar1 = *(uint *)(lVar4 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                      *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                      plVar5 = (long *)(lVar8 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar5 = lVar7;
                                                      thunk_FUN_02bb0e9c(plVar5,lVar7);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar4,lVar7,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar6 + 0x28) = lVar4;
                                                  thunk_FUN_02bb0e9c((long *)(lVar6 + 0x28),lVar4);
                                                  lVar4 = *(long *)(unaff_x20 + 0x10);
                                                  *(int *)(unaff_x20 + 0x1c) =
                                                       *(int *)(unaff_x20 + 0x1c) + 1;
                                                  if (lVar4 != 0) {
                                                    uVar1 = *(uint *)(unaff_x20 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                                                      *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                                                      plVar5 = (long *)(lVar4 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar5 = lVar6;
                                                      thunk_FUN_02bb0e9c(plVar5,lVar6);
                                                    }
                                                    else {
                                                      FUN_037a6538();
                                                    }
                                                    *(long *)(unaff_x19 + 0x28) = unaff_x20;
                                                    thunk_FUN_02bb0e9c();
                                                    FUN_05b9ad1c();
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


