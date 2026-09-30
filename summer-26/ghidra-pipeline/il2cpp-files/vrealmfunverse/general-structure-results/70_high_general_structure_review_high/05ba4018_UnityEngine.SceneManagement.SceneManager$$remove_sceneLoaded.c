/*
FUNCTION_NAME: UnityEngine.SceneManagement.SceneManager$$remove_sceneLoaded
ENTRY_POINT: 05ba4018
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;keyword_support
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_21;telemetry_or_network_hits_9;eye_or_gaze_keyword_boost_only
*/


void UnityEngine_SceneManagement_SceneManager__remove_sceneLoaded(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined4 in_w10;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  undefined8 unaff_x23;
  long unaff_x24;
  undefined8 *puVar11;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  long *unaff_x29;
  
  *(undefined4 *)(unaff_x22 + 0x1c) = in_w10;
  puVar11 = *(undefined8 **)(unaff_x24 + 0xed8);
  if (param_1 != 0) {
    uVar1 = *(uint *)(unaff_x22 + 0x18);
    if (uVar1 < *(uint *)(param_1 + 0x18)) {
      *(uint *)(unaff_x22 + 0x18) = uVar1 + 1;
      *(undefined8 *)(param_1 + (long)(int)uVar1 * 8 + 0x20) = unaff_x23;
      thunk_FUN_02bb0e9c();
    }
    else {
      FUN_037a6538();
    }
    *(long *)(unaff_x21 + 0x28) = unaff_x22;
    thunk_FUN_02bb0e9c();
    lVar7 = *(long *)(unaff_x20 + 0x10);
    *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
    if (lVar7 != 0) {
      uVar1 = *(uint *)(unaff_x20 + 0x18);
      if (uVar1 < *(uint *)(lVar7 + 0x18)) {
        *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
        *(long *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = unaff_x21;
        thunk_FUN_02bb0e9c();
      }
      else {
        FUN_037a6538();
      }
      lVar7 = thunk_FUN_02b79644(*unaff_x25);
      FUN_04dbdb8c(lVar7,0);
      puVar2 = PTR_DAT_0631b1f0;
      if (lVar7 != 0) {
        *(undefined8 *)(lVar7 + 0x10) =
             *(undefined8 *)
              Method_Oculus_Interaction_Interactable<HandGrabUseInteractor,_HandGrabUseInteractable>_SelectingInteractorAdded__
        ;
        thunk_FUN_02bb0e9c();
        *(undefined8 *)(lVar7 + 0x20) = *(undefined8 *)puVar2;
        thunk_FUN_02bb0e9c((undefined8 *)(lVar7 + 0x20));
        uVar4 = *unaff_x28;
        *(undefined4 *)(lVar7 + 0x18) = 1;
        lVar5 = thunk_FUN_02b79644(uVar4);
        FUN_037a5cd0(lVar5,*unaff_x26);
        if (lVar5 != 0) {
          lVar8 = *(long *)(lVar5 + 0x10);
          uVar4 = *(undefined8 *)puVar2;
          lVar9 = *unaff_x29;
          *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
          if (lVar8 != 0) {
            uVar1 = *(uint *)(lVar5 + 0x18);
            if (uVar1 < *(uint *)(lVar8 + 0x18)) {
              *(uint *)(lVar5 + 0x18) = uVar1 + 1;
              *(undefined8 *)(lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar4;
              thunk_FUN_02bb0e9c();
            }
            else {
              FUN_037a6538(lVar5,uVar4,
                           *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
            }
            *(long *)(lVar7 + 0x30) = lVar5;
            thunk_FUN_02bb0e9c((long *)(lVar7 + 0x30),lVar5);
            lVar5 = thunk_FUN_02b79644(*puVar11);
            FUN_037a5cd0(lVar5,*(undefined8 *)
                                Method_Newtonsoft_Json_Linq_JPropertyKeyedCollection_Contains__);
            lVar8 = thunk_FUN_02b79644(*(undefined8 *)
                                        Method_Newtonsoft_Json_Linq_JObject_ValidateToken__);
            FUN_04dbdb8c(lVar8,0);
            puVar2 = Method_Newtonsoft_Json_JsonSerializer_set_SerializationBinder__;
            if (lVar8 != 0) {
              *(undefined8 *)(lVar8 + 0x18) =
                   *(undefined8 *)Method_Newtonsoft_Json_JsonSerializer_set_SerializationBinder__;
              thunk_FUN_02bb0e9c();
              *(undefined8 *)(lVar8 + 0x10) = *unaff_x27;
              thunk_FUN_02bb0e9c();
              if (lVar5 != 0) {
                lVar9 = *(long *)(lVar5 + 0x10);
                lVar10 = *(long *)Method_Newtonsoft_Json_Linq_JProperty_Load__;
                *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                if (lVar9 != 0) {
                  uVar1 = *(uint *)(lVar5 + 0x18);
                  if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                    *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                    plVar6 = (long *)(lVar9 + (long)(int)uVar1 * 8 + 0x20);
                    *plVar6 = lVar8;
                    thunk_FUN_02bb0e9c(plVar6,lVar8);
                  }
                  else {
                    FUN_037a6538(lVar5,lVar8,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70))
                    ;
                  }
                  *(long *)(lVar7 + 0x28) = lVar5;
                  thunk_FUN_02bb0e9c((long *)(lVar7 + 0x28),lVar5);
                  lVar5 = *(long *)(unaff_x20 + 0x10);
                  *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
                  if (lVar5 != 0) {
                    uVar1 = *(uint *)(unaff_x20 + 0x18);
                    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                      *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                      plVar6 = (long *)(lVar5 + (long)(int)uVar1 * 8 + 0x20);
                      *plVar6 = lVar7;
                      thunk_FUN_02bb0e9c(plVar6,lVar7);
                    }
                    else {
                      FUN_037a6538();
                    }
                    lVar7 = thunk_FUN_02b79644(*unaff_x25);
                    FUN_04dbdb8c(lVar7,0);
                    puVar3 = 
                    Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_AddReference__
                    ;
                    if (lVar7 != 0) {
                      *(undefined8 *)(lVar7 + 0x10) =
                           *(undefined8 *)
                            Method_Oculus_Interaction_Interactable<HandGrabUseInteractor,_HandGrabUseInteractable>_Awake__
                      ;
                      thunk_FUN_02bb0e9c();
                      *(undefined8 *)(lVar7 + 0x20) = *(undefined8 *)puVar3;
                      thunk_FUN_02bb0e9c((undefined8 *)(lVar7 + 0x20));
                      uVar4 = *unaff_x28;
                      *(undefined4 *)(lVar7 + 0x18) = 0;
                      lVar5 = thunk_FUN_02b79644(uVar4);
                      FUN_037a5cd0(lVar5,*unaff_x26);
                      if (lVar5 != 0) {
                        lVar8 = *(long *)(lVar5 + 0x10);
                        uVar4 = *(undefined8 *)
                                 Method_System_Linq_Enumerable_Select<AndroidAxis,_string>__;
                        lVar9 = *unaff_x29;
                        *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                        if (lVar8 != 0) {
                          uVar1 = *(uint *)(lVar5 + 0x18);
                          if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                            *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                            *(undefined8 *)(lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar4;
                            thunk_FUN_02bb0e9c();
                          }
                          else {
                            FUN_037a6538(lVar5,uVar4,
                                         *(undefined8 *)
                                          (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                          }
                          *(long *)(lVar7 + 0x30) = lVar5;
                          thunk_FUN_02bb0e9c((long *)(lVar7 + 0x30),lVar5);
                          lVar5 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                            
                                                  Method_OVRSimpleJSON_JSONLazyCreator_Set<JSONNumber>__
                                                  );
                          FUN_037a5cd0(lVar5,*(undefined8 *)
                                              Method_Newtonsoft_Json_Linq_JPropertyKeyedCollection_Contains__
                                      );
                          lVar8 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                            
                                                  Method_Newtonsoft_Json_Linq_JObject_ValidateToken__
                                                  );
                          FUN_04dbdb8c(lVar8,0);
                          if (lVar8 != 0) {
                            *(undefined8 *)(lVar8 + 0x18) = *(undefined8 *)puVar2;
                            thunk_FUN_02bb0e9c();
                            *(undefined8 *)(lVar8 + 0x10) = *unaff_x27;
                            thunk_FUN_02bb0e9c();
                            puVar2 = Method_Newtonsoft_Json_Linq_JProperty_Load__;
                            if (lVar5 != 0) {
                              lVar9 = *(long *)(lVar5 + 0x10);
                              *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                              puVar3 = Method_OVRSimpleJSON_JSONLazyCreator_Set<JSONNumber>__;
                              if (lVar9 != 0) {
                                uVar1 = *(uint *)(lVar5 + 0x18);
                                if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                  *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                  plVar6 = (long *)(lVar9 + (long)(int)uVar1 * 8 + 0x20);
                                  *plVar6 = lVar8;
                                  thunk_FUN_02bb0e9c(plVar6,lVar8);
                                }
                                else {
                                  FUN_037a6538(lVar5,lVar8,
                                               *(undefined8 *)
                                                (*(long *)(*(long *)(*(long *)puVar2 + 0x20) + 0xc0)
                                                + 0x70));
                                }
                                *(long *)(lVar7 + 0x28) = lVar5;
                                thunk_FUN_02bb0e9c((long *)(lVar7 + 0x28),lVar5);
                                lVar5 = *(long *)(unaff_x20 + 0x10);
                                *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
                                if (lVar5 != 0) {
                                  uVar1 = *(uint *)(unaff_x20 + 0x18);
                                  if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                                    *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                                    plVar6 = (long *)(lVar5 + (long)(int)uVar1 * 8 + 0x20);
                                    *plVar6 = lVar7;
                                    thunk_FUN_02bb0e9c(plVar6,lVar7);
                                  }
                                  else {
                                    FUN_037a6538();
                                  }
                                  lVar7 = thunk_FUN_02b79644(*unaff_x25);
                                  FUN_04dbdb8c(lVar7,0);
                                  puVar2 = Method_System_Linq_Enumerable_Empty<Type>__;
                                  if (lVar7 != 0) {
                                    *(undefined8 *)(lVar7 + 0x10) =
                                         *(undefined8 *)
                                          System_Collections_Generic_Queue<JobHandle>_TypeInfo;
                                    thunk_FUN_02bb0e9c();
                                    *(undefined8 *)(lVar7 + 0x20) = *(undefined8 *)puVar2;
                                    thunk_FUN_02bb0e9c((undefined8 *)(lVar7 + 0x20));
                                    uVar4 = *unaff_x28;
                                    *(undefined4 *)(lVar7 + 0x18) = 2;
                                    lVar5 = thunk_FUN_02b79644(uVar4);
                                    FUN_037a5cd0(lVar5,*unaff_x26);
                                    if (lVar5 != 0) {
                                      lVar8 = *(long *)(lVar5 + 0x10);
                                      uVar4 = *(undefined8 *)
                                               Method_System_Linq_Enumerable_Select<KeyValuePair<string,_JsonParser_JsonValue>,_string>__
                                      ;
                                      lVar9 = *unaff_x29;
                                      *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                                      if (lVar8 != 0) {
                                        uVar1 = *(uint *)(lVar5 + 0x18);
                                        if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                          *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                          *(undefined8 *)(lVar8 + (long)(int)uVar1 * 8 + 0x20) =
                                               uVar4;
                                          thunk_FUN_02bb0e9c();
                                        }
                                        else {
                                          FUN_037a6538(lVar5,uVar4,
                                                       *(undefined8 *)
                                                        (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) +
                                                        0x70));
                                        }
                                        *(long *)(lVar7 + 0x30) = lVar5;
                                        thunk_FUN_02bb0e9c((long *)(lVar7 + 0x30),lVar5);
                                        lVar5 = thunk_FUN_02b79644(*(undefined8 *)puVar3);
                                        FUN_037a5cd0(lVar5,*(undefined8 *)
                                                                                                                        
                                                  Method_Newtonsoft_Json_Linq_JPropertyKeyedCollection_Contains__
                                                  );
                                        lVar8 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                        
                                                  Method_Newtonsoft_Json_Linq_JObject_ValidateToken__
                                                  );
                                        FUN_04dbdb8c(lVar8,0);
                                        if (lVar8 != 0) {
                                          *(undefined8 *)(lVar8 + 0x18) =
                                               *(undefined8 *)
                                                Method_Newtonsoft_Json_JsonSerializer_set_DefaultValueHandling__
                                          ;
                                          thunk_FUN_02bb0e9c();
                                          *(undefined8 *)(lVar8 + 0x10) = *unaff_x27;
                                          thunk_FUN_02bb0e9c();
                                          if (lVar5 != 0) {
                                            lVar9 = *(long *)(lVar5 + 0x10);
                                            lVar10 = *(long *)
                                                  Method_Newtonsoft_Json_Linq_JProperty_Load__;
                                            *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                                            if (lVar9 != 0) {
                                              uVar1 = *(uint *)(lVar5 + 0x18);
                                              if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                plVar6 = (long *)(lVar9 + (long)(int)uVar1 * 8 +
                                                                 0x20);
                                                *plVar6 = lVar8;
                                                thunk_FUN_02bb0e9c(plVar6,lVar8);
                                              }
                                              else {
                                                FUN_037a6538(lVar5,lVar8,
                                                             *(undefined8 *)
                                                              (*(long *)(*(long *)(lVar10 + 0x20) +
                                                                        0xc0) + 0x70));
                                              }
                                              *(long *)(lVar7 + 0x28) = lVar5;
                                              thunk_FUN_02bb0e9c((long *)(lVar7 + 0x28),lVar5);
                                              lVar5 = *(long *)(unaff_x20 + 0x10);
                                              *(int *)(unaff_x20 + 0x1c) =
                                                   *(int *)(unaff_x20 + 0x1c) + 1;
                                              if (lVar5 != 0) {
                                                uVar1 = *(uint *)(unaff_x20 + 0x18);
                                                if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                                                  *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                                                  plVar6 = (long *)(lVar5 + (long)(int)uVar1 * 8 +
                                                                   0x20);
                                                  *plVar6 = lVar7;
                                                  thunk_FUN_02bb0e9c(plVar6,lVar7);
                                                }
                                                else {
                                                  FUN_037a6538();
                                                }
                                                lVar7 = thunk_FUN_02b79644(*unaff_x25);
                                                FUN_04dbdb8c(lVar7,0);
                                                puVar2 = 
                                                Method_Newtonsoft_Json_JsonReader_set_MaxDepth__;
                                                if (lVar7 != 0) {
                                                  *(undefined8 *)(lVar7 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_Oculus_Interaction_Interactable<PokeInteractor,_PokeInteractable>_get_State__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar7 + 0x20) =
                                                       *(undefined8 *)puVar2;
                                                  thunk_FUN_02bb0e9c((undefined8 *)(lVar7 + 0x20));
                                                  uVar4 = *unaff_x28;
                                                  *(undefined4 *)(lVar7 + 0x18) = 0;
                                                  lVar5 = thunk_FUN_02b79644(uVar4);
                                                  FUN_037a5cd0(lVar5,*unaff_x26);
                                                  if (lVar5 != 0) {
                                                    lVar8 = *(long *)(lVar5 + 0x10);
                                                    uVar4 = *(undefined8 *)
                                                                                                                          
                                                  Method_System_Linq_Enumerable_Select<EnumMemberAttribute,_string>__
                                                  ;
                                                  lVar9 = *unaff_x29;
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
                                                  if (lVar8 != 0) {
                                                    uVar1 = *(uint *)(lVar5 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar4
                                                      ;
                                                      thunk_FUN_02bb0e9c();
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar5,uVar4,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar7 + 0x30) = lVar5;
                                                  thunk_FUN_02bb0e9c((long *)(lVar7 + 0x30),lVar5);
                                                  lVar5 = thunk_FUN_02b79644(*(undefined8 *)puVar3);
                                                  FUN_037a5cd0(lVar5,*(undefined8 *)
                                                                                                                                            
                                                  Method_Newtonsoft_Json_Linq_JPropertyKeyedCollection_Contains__
                                                  );
                                                  lVar8 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                            
                                                  Method_Newtonsoft_Json_Linq_JObject_ValidateToken__
                                                  );
                                                  FUN_04dbdb8c(lVar8,0);
                                                  if (lVar8 != 0) {
                                                    *(undefined8 *)(lVar8 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Newtonsoft_Json_JsonSerializer_Deserialize<RegexOptions>__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar8 + 0x10) = *unaff_x27;
                                                  thunk_FUN_02bb0e9c();
                                                  if (lVar5 != 0) {
                                                    lVar9 = *(long *)(lVar5 + 0x10);
                                                    lVar10 = *(long *)
                                                  Method_Newtonsoft_Json_Linq_JProperty_Load__;
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
                                                  if (lVar9 != 0) {
                                                    uVar1 = *(uint *)(lVar5 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                      plVar6 = (long *)(lVar9 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar6 = lVar8;
                                                      thunk_FUN_02bb0e9c(plVar6,lVar8);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar5,lVar8,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar7 + 0x28) = lVar5;
                                                  thunk_FUN_02bb0e9c((long *)(lVar7 + 0x28),lVar5);
                                                  lVar5 = *(long *)(unaff_x20 + 0x10);
                                                  *(int *)(unaff_x20 + 0x1c) =
                                                       *(int *)(unaff_x20 + 0x1c) + 1;
                                                  if (lVar5 != 0) {
                                                    uVar1 = *(uint *)(unaff_x20 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                                                      *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                                                      plVar6 = (long *)(lVar5 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar6 = lVar7;
                                                      thunk_FUN_02bb0e9c(plVar6,lVar7);
                                                    }
                                                    else {
                                                      FUN_037a6538();
                                                    }
                                                    lVar7 = thunk_FUN_02b79644(*unaff_x25);
                                                    FUN_04dbdb8c(lVar7,0);
                                                    puVar2 = 
                                                  Method_LitJson_JsonData_LitJson_IJsonWrapper_GetBoolean__
                                                  ;
                                                  if (lVar7 != 0) {
                                                    *(undefined8 *)(lVar7 + 0x10) =
                                                         *(undefined8 *)
                                                          Method_LitJson_JsonData__ctor__;
                                                    thunk_FUN_02bb0e9c();
                                                    *(undefined8 *)(lVar7 + 0x20) =
                                                         *(undefined8 *)puVar2;
                                                    thunk_FUN_02bb0e9c((undefined8 *)(lVar7 + 0x20))
                                                    ;
                                                    uVar4 = *unaff_x28;
                                                    *(undefined4 *)(lVar7 + 0x18) = 3;
                                                    lVar5 = thunk_FUN_02b79644(uVar4);
                                                    FUN_037a5cd0(lVar5,*unaff_x26);
                                                    if (lVar5 != 0) {
                                                      lVar8 = *(long *)(lVar5 + 0x10);
                                                      uVar4 = *(undefined8 *)
                                                                                                                              
                                                  Method_System_Globalization_JapaneseCalendar_ToFourDigitYear__
                                                  ;
                                                  lVar9 = *unaff_x29;
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
                                                  if (lVar8 != 0) {
                                                    uVar1 = *(uint *)(lVar5 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar4
                                                      ;
                                                      thunk_FUN_02bb0e9c();
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar5,uVar4,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar7 + 0x30) = lVar5;
                                                  thunk_FUN_02bb0e9c((long *)(lVar7 + 0x30),lVar5);
                                                  lVar5 = thunk_FUN_02b79644(*(undefined8 *)puVar3);
                                                  FUN_037a5cd0(lVar5,*(undefined8 *)
                                                                                                                                            
                                                  Method_Newtonsoft_Json_Linq_JPropertyKeyedCollection_Contains__
                                                  );
                                                  lVar8 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                            
                                                  Method_Newtonsoft_Json_Linq_JObject_ValidateToken__
                                                  );
                                                  FUN_04dbdb8c(lVar8,0);
                                                  if (lVar8 != 0) {
                                                    *(undefined8 *)(lVar8 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_LitJson_JsonData_LitJson_IJsonWrapper_GetLong__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar8 + 0x10) = *unaff_x27;
                                                  thunk_FUN_02bb0e9c();
                                                  if (lVar5 != 0) {
                                                    lVar9 = *(long *)(lVar5 + 0x10);
                                                    lVar10 = *(long *)
                                                  Method_Newtonsoft_Json_Linq_JProperty_Load__;
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
                                                  if (lVar9 != 0) {
                                                    uVar1 = *(uint *)(lVar5 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                      plVar6 = (long *)(lVar9 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar6 = lVar8;
                                                      thunk_FUN_02bb0e9c(plVar6,lVar8);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar5,lVar8,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar7 + 0x28) = lVar5;
                                                  thunk_FUN_02bb0e9c((long *)(lVar7 + 0x28),lVar5);
                                                  lVar5 = *(long *)(unaff_x20 + 0x10);
                                                  *(int *)(unaff_x20 + 0x1c) =
                                                       *(int *)(unaff_x20 + 0x1c) + 1;
                                                  if (lVar5 != 0) {
                                                    uVar1 = *(uint *)(unaff_x20 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                                                      *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                                                      plVar6 = (long *)(lVar5 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar6 = lVar7;
                                                      thunk_FUN_02bb0e9c(plVar6,lVar7);
                                                    }
                                                    else {
                                                      FUN_037a6538();
                                                    }
                                                    lVar7 = thunk_FUN_02b79644(*unaff_x25);
                                                    FUN_04dbdb8c(lVar7,0);
                                                    puVar2 = 
                                                  Method_Newtonsoft_Json_JsonConvert_DeserializeObject<Dictionary<string,_string>>__
                                                  ;
                                                  if (lVar7 != 0) {
                                                    *(undefined8 *)(lVar7 + 0x10) =
                                                         *(undefined8 *)PTR_DAT_06332138;
                                                    thunk_FUN_02bb0e9c();
                                                    *(undefined8 *)(lVar7 + 0x20) =
                                                         *(undefined8 *)puVar2;
                                                    thunk_FUN_02bb0e9c((undefined8 *)(lVar7 + 0x20))
                                                    ;
                                                    uVar4 = *unaff_x28;
                                                    *(undefined4 *)(lVar7 + 0x18) = 3;
                                                    lVar5 = thunk_FUN_02b79644(uVar4);
                                                    FUN_037a5cd0(lVar5,*unaff_x26);
                                                    if (lVar5 != 0) {
                                                      lVar8 = *(long *)(lVar5 + 0x10);
                                                      uVar4 = *(undefined8 *)
                                                                                                                              
                                                  Method_System_Collections_Generic_List<IntegratedSubsystemDescriptor>_GetEnumerator__
                                                  ;
                                                  lVar9 = *unaff_x29;
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
                                                  if (lVar8 != 0) {
                                                    uVar1 = *(uint *)(lVar5 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar4
                                                      ;
                                                      thunk_FUN_02bb0e9c();
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar5,uVar4,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar7 + 0x30) = lVar5;
                                                  thunk_FUN_02bb0e9c((long *)(lVar7 + 0x30),lVar5);
                                                  lVar5 = thunk_FUN_02b79644(*(undefined8 *)puVar3);
                                                  FUN_037a5cd0(lVar5,*(undefined8 *)
                                                                                                                                            
                                                  Method_Newtonsoft_Json_Linq_JPropertyKeyedCollection_Contains__
                                                  );
                                                  lVar8 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                            
                                                  Method_Newtonsoft_Json_Linq_JObject_ValidateToken__
                                                  );
                                                  FUN_04dbdb8c(lVar8,0);
                                                  if (lVar8 != 0) {
                                                    *(undefined8 *)(lVar8 + 0x18) =
                                                         *(undefined8 *)
                                                          Method_LitJson_JsonData_EnsureDictionary__
                                                    ;
                                                    thunk_FUN_02bb0e9c();
                                                    *(undefined8 *)(lVar8 + 0x10) = *unaff_x27;
                                                    thunk_FUN_02bb0e9c();
                                                    if (lVar5 != 0) {
                                                      lVar9 = *(long *)(lVar5 + 0x10);
                                                      lVar10 = *(long *)
                                                  Method_Newtonsoft_Json_Linq_JProperty_Load__;
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
                                                  if (lVar9 != 0) {
                                                    uVar1 = *(uint *)(lVar5 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                      plVar6 = (long *)(lVar9 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar6 = lVar8;
                                                      thunk_FUN_02bb0e9c(plVar6,lVar8);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar5,lVar8,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar7 + 0x28) = lVar5;
                                                  thunk_FUN_02bb0e9c((long *)(lVar7 + 0x28),lVar5);
                                                  lVar5 = *(long *)(unaff_x20 + 0x10);
                                                  *(int *)(unaff_x20 + 0x1c) =
                                                       *(int *)(unaff_x20 + 0x1c) + 1;
                                                  if (lVar5 != 0) {
                                                    uVar1 = *(uint *)(unaff_x20 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                                                      *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                                                      plVar6 = (long *)(lVar5 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar6 = lVar7;
                                                      thunk_FUN_02bb0e9c(plVar6,lVar7);
                                                    }
                                                    else {
                                                      FUN_037a6538();
                                                    }
                                                    lVar7 = thunk_FUN_02b79644(*unaff_x25);
                                                    FUN_04dbdb8c(lVar7,0);
                                                    puVar2 = 
                                                  Method_Newtonsoft_Json_JsonSerializer_set_MetadataPropertyHandling__
                                                  ;
                                                  if (lVar7 != 0) {
                                                    *(undefined8 *)(lVar7 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Newtonsoft_Json_Serialization_JsonSerializerInternalBase_GetErrorContext__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar7 + 0x20) =
                                                       *(undefined8 *)puVar2;
                                                  thunk_FUN_02bb0e9c((undefined8 *)(lVar7 + 0x20));
                                                  uVar4 = *unaff_x28;
                                                  *(undefined4 *)(lVar7 + 0x18) = 4;
                                                  lVar5 = thunk_FUN_02b79644(uVar4);
                                                  FUN_037a5cd0(lVar5,*unaff_x26);
                                                  if (lVar5 != 0) {
                                                    lVar8 = *(long *)(lVar5 + 0x10);
                                                    uVar4 = *(undefined8 *)
                                                                                                                          
                                                  Method_UnityEngine_InputSystem_InputControlExtensions_CopyState__
                                                  ;
                                                  lVar9 = *unaff_x29;
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
                                                  if (lVar8 != 0) {
                                                    uVar1 = *(uint *)(lVar5 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar4
                                                      ;
                                                      thunk_FUN_02bb0e9c();
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar5,uVar4,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar7 + 0x30) = lVar5;
                                                  thunk_FUN_02bb0e9c((long *)(lVar7 + 0x30),lVar5);
                                                  lVar5 = thunk_FUN_02b79644(*(undefined8 *)puVar3);
                                                  FUN_037a5cd0(lVar5,*(undefined8 *)
                                                                                                                                            
                                                  Method_Newtonsoft_Json_Linq_JPropertyKeyedCollection_Contains__
                                                  );
                                                  lVar8 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                            
                                                  Method_Newtonsoft_Json_Linq_JObject_ValidateToken__
                                                  );
                                                  FUN_04dbdb8c(lVar8,0);
                                                  if (lVar8 != 0) {
                                                    *(undefined8 *)(lVar8 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Newtonsoft_Json_JsonReader_set_FloatParseHandling__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar8 + 0x10) = *unaff_x27;
                                                  thunk_FUN_02bb0e9c();
                                                  if (lVar5 != 0) {
                                                    lVar9 = *(long *)(lVar5 + 0x10);
                                                    lVar10 = *(long *)
                                                  Method_Newtonsoft_Json_Linq_JProperty_Load__;
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
                                                  if (lVar9 != 0) {
                                                    uVar1 = *(uint *)(lVar5 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                      plVar6 = (long *)(lVar9 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar6 = lVar8;
                                                      thunk_FUN_02bb0e9c(plVar6,lVar8);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar5,lVar8,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar7 + 0x28) = lVar5;
                                                  thunk_FUN_02bb0e9c((long *)(lVar7 + 0x28),lVar5);
                                                  lVar5 = *(long *)(unaff_x20 + 0x10);
                                                  *(int *)(unaff_x20 + 0x1c) =
                                                       *(int *)(unaff_x20 + 0x1c) + 1;
                                                  if (lVar5 != 0) {
                                                    uVar1 = *(uint *)(unaff_x20 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                                                      *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                                                      plVar6 = (long *)(lVar5 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar6 = lVar7;
                                                      thunk_FUN_02bb0e9c(plVar6,lVar7);
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
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
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


