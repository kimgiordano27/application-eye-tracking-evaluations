/*
FUNCTION_NAME: UnityEngine.SceneManagement.SceneManager$$Internal_ActiveSceneChanged
ENTRY_POINT: 05ba47a0
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;keyword_support
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;telemetry_or_network_hits_5;eye_or_gaze_keyword_boost_only
*/


void UnityEngine_SceneManagement_SceneManager__Internal_ActiveSceneChanged(void)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 *in_x9;
  long lVar8;
  long lVar9;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  long *unaff_x29;
  
  lVar6 = *(long *)(unaff_x22 + 0x10);
  uVar5 = *in_x9;
  *(int *)(unaff_x22 + 0x1c) = *(int *)(unaff_x22 + 0x1c) + 1;
  if (lVar6 != 0) {
    uVar1 = *(uint *)(unaff_x22 + 0x18);
    if (uVar1 < *(uint *)(lVar6 + 0x18)) {
      *(uint *)(unaff_x22 + 0x18) = uVar1 + 1;
      *(undefined8 *)(lVar6 + (long)(int)uVar1 * 8 + 0x20) = uVar5;
      thunk_FUN_02bb0e9c();
    }
    else {
      FUN_037a6538();
    }
    *(long *)(unaff_x21 + 0x30) = unaff_x22;
    thunk_FUN_02bb0e9c();
    lVar6 = thunk_FUN_02b79644(*unaff_x24);
    FUN_037a5cd0(lVar6,*(undefined8 *)
                        Method_Newtonsoft_Json_Linq_JPropertyKeyedCollection_Contains__);
    lVar3 = thunk_FUN_02b79644(*(undefined8 *)Method_Newtonsoft_Json_Linq_JObject_ValidateToken__);
    FUN_04dbdb8c(lVar3,0);
    if (lVar3 != 0) {
      *(undefined8 *)(lVar3 + 0x18) =
           *(undefined8 *)Method_Newtonsoft_Json_JsonSerializer_Deserialize<RegexOptions>__;
      thunk_FUN_02bb0e9c();
      *(undefined8 *)(lVar3 + 0x10) = *unaff_x27;
      thunk_FUN_02bb0e9c();
      if (lVar6 != 0) {
        lVar7 = *(long *)(lVar6 + 0x10);
        lVar8 = *(long *)Method_Newtonsoft_Json_Linq_JProperty_Load__;
        *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
        if (lVar7 != 0) {
          uVar1 = *(uint *)(lVar6 + 0x18);
          if (uVar1 < *(uint *)(lVar7 + 0x18)) {
            *(uint *)(lVar6 + 0x18) = uVar1 + 1;
            plVar4 = (long *)(lVar7 + (long)(int)uVar1 * 8 + 0x20);
            *plVar4 = lVar3;
            thunk_FUN_02bb0e9c(plVar4,lVar3);
          }
          else {
            FUN_037a6538(lVar6,lVar3,
                         *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
          }
          *(long *)(unaff_x21 + 0x28) = lVar6;
          thunk_FUN_02bb0e9c((long *)(unaff_x21 + 0x28),lVar6);
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
            puVar2 = Method_LitJson_JsonData_LitJson_IJsonWrapper_GetBoolean__;
            if (lVar6 != 0) {
              *(undefined8 *)(lVar6 + 0x10) = *(undefined8 *)Method_LitJson_JsonData__ctor__;
              thunk_FUN_02bb0e9c();
              *(undefined8 *)(lVar6 + 0x20) = *(undefined8 *)puVar2;
              thunk_FUN_02bb0e9c((undefined8 *)(lVar6 + 0x20));
              uVar5 = *unaff_x28;
              *(undefined4 *)(lVar6 + 0x18) = 3;
              lVar3 = thunk_FUN_02b79644(uVar5);
              FUN_037a5cd0(lVar3,*unaff_x26);
              if (lVar3 != 0) {
                lVar7 = *(long *)(lVar3 + 0x10);
                uVar5 = *(undefined8 *)
                         Method_System_Globalization_JapaneseCalendar_ToFourDigitYear__;
                lVar8 = *unaff_x29;
                *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
                if (lVar7 != 0) {
                  uVar1 = *(uint *)(lVar3 + 0x18);
                  if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                    *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                    *(undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar5;
                    thunk_FUN_02bb0e9c();
                  }
                  else {
                    FUN_037a6538(lVar3,uVar5,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
                  }
                  *(long *)(lVar6 + 0x30) = lVar3;
                  thunk_FUN_02bb0e9c((long *)(lVar6 + 0x30),lVar3);
                  lVar3 = thunk_FUN_02b79644(*unaff_x24);
                  FUN_037a5cd0(lVar3,*(undefined8 *)
                                      Method_Newtonsoft_Json_Linq_JPropertyKeyedCollection_Contains__
                              );
                  lVar7 = thunk_FUN_02b79644(*(undefined8 *)
                                              Method_Newtonsoft_Json_Linq_JObject_ValidateToken__);
                  FUN_04dbdb8c(lVar7,0);
                  if (lVar7 != 0) {
                    *(undefined8 *)(lVar7 + 0x18) =
                         *(undefined8 *)Method_LitJson_JsonData_LitJson_IJsonWrapper_GetLong__;
                    thunk_FUN_02bb0e9c();
                    *(undefined8 *)(lVar7 + 0x10) = *unaff_x27;
                    thunk_FUN_02bb0e9c();
                    if (lVar3 != 0) {
                      lVar8 = *(long *)(lVar3 + 0x10);
                      lVar9 = *(long *)Method_Newtonsoft_Json_Linq_JProperty_Load__;
                      *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
                      if (lVar8 != 0) {
                        uVar1 = *(uint *)(lVar3 + 0x18);
                        if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                          *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                          plVar4 = (long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
                          *plVar4 = lVar7;
                          thunk_FUN_02bb0e9c(plVar4,lVar7);
                        }
                        else {
                          FUN_037a6538(lVar3,lVar7,
                                       *(undefined8 *)
                                        (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                        }
                        *(long *)(lVar6 + 0x28) = lVar3;
                        thunk_FUN_02bb0e9c((long *)(lVar6 + 0x28),lVar3);
                        lVar3 = *(long *)(unaff_x20 + 0x10);
                        *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
                        if (lVar3 != 0) {
                          uVar1 = *(uint *)(unaff_x20 + 0x18);
                          if (uVar1 < *(uint *)(lVar3 + 0x18)) {
                            *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                            plVar4 = (long *)(lVar3 + (long)(int)uVar1 * 8 + 0x20);
                            *plVar4 = lVar6;
                            thunk_FUN_02bb0e9c(plVar4,lVar6);
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
                            *(undefined8 *)(lVar6 + 0x10) = *(undefined8 *)PTR_DAT_06332138;
                            thunk_FUN_02bb0e9c();
                            *(undefined8 *)(lVar6 + 0x20) = *(undefined8 *)puVar2;
                            thunk_FUN_02bb0e9c((undefined8 *)(lVar6 + 0x20));
                            uVar5 = *unaff_x28;
                            *(undefined4 *)(lVar6 + 0x18) = 3;
                            lVar3 = thunk_FUN_02b79644(uVar5);
                            FUN_037a5cd0(lVar3,*unaff_x26);
                            if (lVar3 != 0) {
                              lVar7 = *(long *)(lVar3 + 0x10);
                              uVar5 = *(undefined8 *)
                                       Method_System_Collections_Generic_List<IntegratedSubsystemDescriptor>_GetEnumerator__
                              ;
                              lVar8 = *unaff_x29;
                              *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
                              if (lVar7 != 0) {
                                uVar1 = *(uint *)(lVar3 + 0x18);
                                if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                  *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                                  *(undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar5;
                                  thunk_FUN_02bb0e9c();
                                }
                                else {
                                  FUN_037a6538(lVar3,uVar5,
                                               *(undefined8 *)
                                                (*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
                                }
                                *(long *)(lVar6 + 0x30) = lVar3;
                                thunk_FUN_02bb0e9c((long *)(lVar6 + 0x30),lVar3);
                                lVar3 = thunk_FUN_02b79644(*unaff_x24);
                                FUN_037a5cd0(lVar3,*(undefined8 *)
                                                                                                        
                                                  Method_Newtonsoft_Json_Linq_JPropertyKeyedCollection_Contains__
                                            );
                                lVar7 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                        
                                                  Method_Newtonsoft_Json_Linq_JObject_ValidateToken__
                                                  );
                                FUN_04dbdb8c(lVar7,0);
                                if (lVar7 != 0) {
                                  *(undefined8 *)(lVar7 + 0x18) =
                                       *(undefined8 *)Method_LitJson_JsonData_EnsureDictionary__;
                                  thunk_FUN_02bb0e9c();
                                  *(undefined8 *)(lVar7 + 0x10) = *unaff_x27;
                                  thunk_FUN_02bb0e9c();
                                  if (lVar3 != 0) {
                                    lVar8 = *(long *)(lVar3 + 0x10);
                                    lVar9 = *(long *)Method_Newtonsoft_Json_Linq_JProperty_Load__;
                                    *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
                                    if (lVar8 != 0) {
                                      uVar1 = *(uint *)(lVar3 + 0x18);
                                      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                        *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                                        plVar4 = (long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
                                        *plVar4 = lVar7;
                                        thunk_FUN_02bb0e9c(plVar4,lVar7);
                                      }
                                      else {
                                        FUN_037a6538(lVar3,lVar7,
                                                     *(undefined8 *)
                                                      (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) +
                                                      0x70));
                                      }
                                      *(long *)(lVar6 + 0x28) = lVar3;
                                      thunk_FUN_02bb0e9c((long *)(lVar6 + 0x28),lVar3);
                                      lVar3 = *(long *)(unaff_x20 + 0x10);
                                      *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
                                      if (lVar3 != 0) {
                                        uVar1 = *(uint *)(unaff_x20 + 0x18);
                                        if (uVar1 < *(uint *)(lVar3 + 0x18)) {
                                          *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                                          plVar4 = (long *)(lVar3 + (long)(int)uVar1 * 8 + 0x20);
                                          *plVar4 = lVar6;
                                          thunk_FUN_02bb0e9c(plVar4,lVar6);
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
                                          *(undefined8 *)(lVar6 + 0x20) = *(undefined8 *)puVar2;
                                          thunk_FUN_02bb0e9c((undefined8 *)(lVar6 + 0x20));
                                          uVar5 = *unaff_x28;
                                          *(undefined4 *)(lVar6 + 0x18) = 4;
                                          lVar3 = thunk_FUN_02b79644(uVar5);
                                          FUN_037a5cd0(lVar3,*unaff_x26);
                                          if (lVar3 != 0) {
                                            lVar7 = *(long *)(lVar3 + 0x10);
                                            uVar5 = *(undefined8 *)
                                                                                                          
                                                  Method_UnityEngine_InputSystem_InputControlExtensions_CopyState__
                                            ;
                                            lVar8 = *unaff_x29;
                                            *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
                                            if (lVar7 != 0) {
                                              uVar1 = *(uint *)(lVar3 + 0x18);
                                              if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                                                *(undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20)
                                                     = uVar5;
                                                thunk_FUN_02bb0e9c();
                                              }
                                              else {
                                                FUN_037a6538(lVar3,uVar5,
                                                             *(undefined8 *)
                                                              (*(long *)(*(long *)(lVar8 + 0x20) +
                                                                        0xc0) + 0x70));
                                              }
                                              *(long *)(lVar6 + 0x30) = lVar3;
                                              thunk_FUN_02bb0e9c((long *)(lVar6 + 0x30),lVar3);
                                              lVar3 = thunk_FUN_02b79644(*unaff_x24);
                                              FUN_037a5cd0(lVar3,*(undefined8 *)
                                                                                                                                    
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
                                                if (lVar3 != 0) {
                                                  lVar8 = *(long *)(lVar3 + 0x10);
                                                  lVar9 = *(long *)
                                                  Method_Newtonsoft_Json_Linq_JProperty_Load__;
                                                  *(int *)(lVar3 + 0x1c) =
                                                       *(int *)(lVar3 + 0x1c) + 1;
                                                  if (lVar8 != 0) {
                                                    uVar1 = *(uint *)(lVar3 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                      *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                                                      plVar4 = (long *)(lVar8 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar4 = lVar7;
                                                      thunk_FUN_02bb0e9c(plVar4,lVar7);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar3,lVar7,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar6 + 0x28) = lVar3;
                                                  thunk_FUN_02bb0e9c((long *)(lVar6 + 0x28),lVar3);
                                                  lVar3 = *(long *)(unaff_x20 + 0x10);
                                                  *(int *)(unaff_x20 + 0x1c) =
                                                       *(int *)(unaff_x20 + 0x1c) + 1;
                                                  if (lVar3 != 0) {
                                                    uVar1 = *(uint *)(unaff_x20 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar3 + 0x18)) {
                                                      *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                                                      plVar4 = (long *)(lVar3 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar4 = lVar6;
                                                      thunk_FUN_02bb0e9c(plVar4,lVar6);
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
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


