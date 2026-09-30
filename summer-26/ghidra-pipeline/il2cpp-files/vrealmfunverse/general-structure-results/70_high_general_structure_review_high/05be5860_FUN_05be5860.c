/*
FUNCTION_NAME: FUN_05be5860
ENTRY_POINT: 05be5860
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry;frame_behavior;keyword_support
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_21;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_9;frame_or_lifecycle_behavior;eye_or_gaze_keyword_boost_only;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_05be5860(void)

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
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long unaff_x22;
  undefined8 unaff_x23;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  long in_stack_00000000;
  undefined8 in_stack_00000008;
  
  *(undefined8 *)(unaff_x22 + 0x28) = unaff_x23;
  thunk_FUN_02bb0e9c();
  lVar6 = *(long *)(unaff_x21 + 0x10);
  *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
  if (lVar6 != 0) {
    uVar1 = *(uint *)(unaff_x21 + 0x18);
    if (uVar1 < *(uint *)(lVar6 + 0x18)) {
      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
      *(long *)(lVar6 + (long)(int)uVar1 * 8 + 0x20) = unaff_x22;
      thunk_FUN_02bb0e9c();
    }
    else {
      FUN_037a6538();
    }
    lVar6 = thunk_FUN_02b79644(*unaff_x25);
    FUN_05b9af50(lVar6,0);
    puVar2 = PTR_DAT_0631b1f0;
    if (lVar6 != 0) {
      *(undefined8 *)(lVar6 + 0x10) =
           *(undefined8 *)
            Method_Oculus_Interaction_Interactable<HandGrabUseInteractor,_HandGrabUseInteractable>_SelectingInteractorAdded__
      ;
      thunk_FUN_02bb0e9c();
      *(undefined8 *)(lVar6 + 0x20) = *(undefined8 *)puVar2;
      thunk_FUN_02bb0e9c((undefined8 *)(lVar6 + 0x20));
      uVar3 = *unaff_x29;
      *(undefined4 *)(lVar6 + 0x18) = 1;
      lVar4 = thunk_FUN_02b79644(uVar3);
      FUN_037a5cd0(lVar4,*unaff_x27);
      if (lVar4 != 0) {
        lVar7 = *(long *)(lVar4 + 0x10);
        uVar3 = *(undefined8 *)puVar2;
        lVar8 = *unaff_x19;
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
          lVar4 = thunk_FUN_02b79644(*(undefined8 *)
                                      Method_OVRSimpleJSON_JSONLazyCreator_Set<JSONNumber>__);
          FUN_037a5cd0(lVar4,*(undefined8 *)
                              Method_Newtonsoft_Json_Linq_JPropertyKeyedCollection_Contains__);
          lVar7 = thunk_FUN_02b79644(*unaff_x28);
          FUN_05b9af48(lVar7,0);
          if (lVar7 != 0) {
            *(undefined8 *)(lVar7 + 0x18) =
                 *(undefined8 *)Method_Newtonsoft_Json_JsonSerializer_set_SerializationBinder__;
            thunk_FUN_02bb0e9c();
            *(undefined8 *)(lVar7 + 0x10) = *unaff_x26;
            thunk_FUN_02bb0e9c();
            if (lVar4 != 0) {
              lVar8 = *(long *)(lVar4 + 0x10);
              lVar9 = *unaff_x20;
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
                               *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                }
                *(long *)(lVar6 + 0x28) = lVar4;
                thunk_FUN_02bb0e9c((long *)(lVar6 + 0x28),lVar4);
                lVar4 = *(long *)(unaff_x21 + 0x10);
                *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
                if (lVar4 != 0) {
                  uVar1 = *(uint *)(unaff_x21 + 0x18);
                  if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                    *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                    plVar5 = (long *)(lVar4 + (long)(int)uVar1 * 8 + 0x20);
                    *plVar5 = lVar6;
                    thunk_FUN_02bb0e9c(plVar5,lVar6);
                  }
                  else {
                    FUN_037a6538();
                  }
                  lVar6 = thunk_FUN_02b79644(*unaff_x25);
                  FUN_05b9af50(lVar6,0);
                  puVar2 = 
                  Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_AddReference__;
                  if (lVar6 != 0) {
                    *(undefined8 *)(lVar6 + 0x10) =
                         *(undefined8 *)
                          Method_Oculus_Interaction_Interactable<HandGrabUseInteractor,_HandGrabUseInteractable>_Awake__
                    ;
                    thunk_FUN_02bb0e9c();
                    *(undefined8 *)(lVar6 + 0x20) = *(undefined8 *)puVar2;
                    thunk_FUN_02bb0e9c((undefined8 *)(lVar6 + 0x20));
                    uVar3 = *unaff_x29;
                    *(undefined4 *)(lVar6 + 0x18) = 0;
                    lVar4 = thunk_FUN_02b79644(uVar3);
                    FUN_037a5cd0(lVar4,*unaff_x27);
                    if (lVar4 != 0) {
                      lVar7 = *(long *)(lVar4 + 0x10);
                      uVar3 = *(undefined8 *)
                               Method_System_Linq_Enumerable_Select<AndroidAxis,_string>__;
                      lVar8 = *unaff_x19;
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
                        lVar4 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                        
                                                  Method_OVRSimpleJSON_JSONLazyCreator_Set<JSONNumber>__
                                                  );
                        FUN_037a5cd0(lVar4,*(undefined8 *)
                                            Method_Newtonsoft_Json_Linq_JPropertyKeyedCollection_Contains__
                                    );
                        lVar7 = thunk_FUN_02b79644(*unaff_x28);
                        FUN_05b9af48(lVar7,0);
                        if (lVar7 != 0) {
                          *(undefined8 *)(lVar7 + 0x18) =
                               *(undefined8 *)
                                Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_GetExpectedDescription__
                          ;
                          thunk_FUN_02bb0e9c();
                          *(undefined8 *)(lVar7 + 0x10) = *unaff_x26;
                          thunk_FUN_02bb0e9c();
                          if (lVar4 != 0) {
                            lVar8 = *(long *)(lVar4 + 0x10);
                            lVar9 = *unaff_x20;
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
                                              (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                              }
                              *(long *)(lVar6 + 0x28) = lVar4;
                              thunk_FUN_02bb0e9c((long *)(lVar6 + 0x28),lVar4);
                              lVar4 = *(long *)(unaff_x21 + 0x10);
                              *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
                              if (lVar4 != 0) {
                                uVar1 = *(uint *)(unaff_x21 + 0x18);
                                if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                                  *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                  plVar5 = (long *)(lVar4 + (long)(int)uVar1 * 8 + 0x20);
                                  *plVar5 = lVar6;
                                  thunk_FUN_02bb0e9c(plVar5,lVar6);
                                }
                                else {
                                  FUN_037a6538();
                                }
                                lVar6 = thunk_FUN_02b79644(*unaff_x25);
                                FUN_05b9af50(lVar6,0);
                                puVar2 = 
                                Method_Newtonsoft_Json_Serialization_JsonTypeReflector_GetAttribute<DefaultValueAttribute>__
                                ;
                                if (lVar6 != 0) {
                                  *(undefined8 *)(lVar6 + 0x10) =
                                       *(undefined8 *)
                                        Method_Oculus_Interaction_Interactable<SnapInteractor,_SnapInteractable>_InteractorRemoved__
                                  ;
                                  thunk_FUN_02bb0e9c();
                                  *(undefined8 *)(lVar6 + 0x20) = *(undefined8 *)puVar2;
                                  thunk_FUN_02bb0e9c((undefined8 *)(lVar6 + 0x20));
                                  uVar3 = *unaff_x29;
                                  *(undefined4 *)(lVar6 + 0x18) = 0;
                                  lVar4 = thunk_FUN_02b79644(uVar3);
                                  FUN_037a5cd0(lVar4,*unaff_x27);
                                  if (lVar4 != 0) {
                                    lVar7 = *(long *)(lVar4 + 0x10);
                                    uVar3 = *(undefined8 *)
                                             Method_Newtonsoft_Json_JsonTextReader_FinishReadQuotedNumber__
                                    ;
                                    lVar8 = *unaff_x19;
                                    *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                                    if (lVar7 != 0) {
                                      uVar1 = *(uint *)(lVar4 + 0x18);
                                      if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                        *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                        *(undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar3
                                        ;
                                        thunk_FUN_02bb0e9c();
                                      }
                                      else {
                                        FUN_037a6538(lVar4,uVar3,
                                                     *(undefined8 *)
                                                      (*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) +
                                                      0x70));
                                      }
                                      *(long *)(lVar6 + 0x30) = lVar4;
                                      thunk_FUN_02bb0e9c((long *)(lVar6 + 0x30),lVar4);
                                      lVar4 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                    
                                                  Method_OVRSimpleJSON_JSONLazyCreator_Set<JSONNumber>__
                                                  );
                                      FUN_037a5cd0(lVar4,*(undefined8 *)
                                                                                                                    
                                                  Method_Newtonsoft_Json_Linq_JPropertyKeyedCollection_Contains__
                                                  );
                                      lVar7 = thunk_FUN_02b79644(*unaff_x28);
                                      FUN_05b9af48(lVar7,0);
                                      if (lVar7 != 0) {
                                        *(undefined8 *)(lVar7 + 0x18) =
                                             *(undefined8 *)
                                              Method_Newtonsoft_Json_JsonTextReader_FinishReadQuotedStringValue__
                                        ;
                                        thunk_FUN_02bb0e9c();
                                        *(undefined8 *)(lVar7 + 0x10) = *unaff_x26;
                                        thunk_FUN_02bb0e9c();
                                        if (lVar4 != 0) {
                                          lVar8 = *(long *)(lVar4 + 0x10);
                                          lVar9 = *unaff_x20;
                                          *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                                          if (lVar8 != 0) {
                                            uVar1 = *(uint *)(lVar4 + 0x18);
                                            if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                              *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                              plVar5 = (long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20)
                                              ;
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
                                            lVar4 = *(long *)(unaff_x21 + 0x10);
                                            *(int *)(unaff_x21 + 0x1c) =
                                                 *(int *)(unaff_x21 + 0x1c) + 1;
                                            if (lVar4 != 0) {
                                              uVar1 = *(uint *)(unaff_x21 + 0x18);
                                              if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                                                *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                plVar5 = (long *)(lVar4 + (long)(int)uVar1 * 8 +
                                                                 0x20);
                                                *plVar5 = lVar6;
                                                thunk_FUN_02bb0e9c(plVar5,lVar6);
                                              }
                                              else {
                                                FUN_037a6538();
                                              }
                                              lVar6 = thunk_FUN_02b79644(*unaff_x25);
                                              FUN_05b9af50(lVar6,0);
                                              puVar2 = Method_System_Linq_Enumerable_Empty<Type>__;
                                              if (lVar6 != 0) {
                                                *(undefined8 *)(lVar6 + 0x10) =
                                                     *(undefined8 *)
                                                                                                            
                                                  System_Collections_Generic_Queue<JobHandle>_TypeInfo
                                                ;
                                                thunk_FUN_02bb0e9c();
                                                *(undefined8 *)(lVar6 + 0x20) =
                                                     *(undefined8 *)puVar2;
                                                thunk_FUN_02bb0e9c((undefined8 *)(lVar6 + 0x20));
                                                uVar3 = *unaff_x29;
                                                *(undefined4 *)(lVar6 + 0x18) = 2;
                                                lVar4 = thunk_FUN_02b79644(uVar3);
                                                FUN_037a5cd0(lVar4,*unaff_x27);
                                                if (lVar4 != 0) {
                                                  lVar7 = *(long *)(lVar4 + 0x10);
                                                  uVar3 = *(undefined8 *)
                                                                                                                      
                                                  Method_System_Linq_Enumerable_Select<KeyValuePair<string,_JsonParser_JsonValue>,_string>__
                                                  ;
                                                  lVar8 = *unaff_x19;
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
                                                  lVar4 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                            
                                                  Method_OVRSimpleJSON_JSONLazyCreator_Set<JSONNumber>__
                                                  );
                                                  FUN_037a5cd0(lVar4,*(undefined8 *)
                                                                                                                                            
                                                  Method_Newtonsoft_Json_Linq_JPropertyKeyedCollection_Contains__
                                                  );
                                                  lVar7 = thunk_FUN_02b79644(*unaff_x28);
                                                  FUN_05b9af48(lVar7,0);
                                                  if (lVar7 != 0) {
                                                    *(undefined8 *)(lVar7 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Newtonsoft_Json_JsonSerializer_set_DefaultValueHandling__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar7 + 0x10) = *unaff_x26;
                                                  thunk_FUN_02bb0e9c();
                                                  if (lVar4 != 0) {
                                                    lVar8 = *(long *)(lVar4 + 0x10);
                                                    lVar9 = *unaff_x20;
                                                    *(int *)(lVar4 + 0x1c) =
                                                         *(int *)(lVar4 + 0x1c) + 1;
                                                    if (lVar8 != 0) {
                                                      uVar1 = *(uint *)(lVar4 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                        *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                        plVar5 = (long *)(lVar8 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
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
                                                  lVar4 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar4 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar5 = (long *)(lVar4 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar5 = lVar6;
                                                      thunk_FUN_02bb0e9c(plVar5,lVar6);
                                                    }
                                                    else {
                                                      FUN_037a6538();
                                                    }
                                                    lVar6 = thunk_FUN_02b79644(*unaff_x25);
                                                    FUN_05b9af50(lVar6,0);
                                                    puVar2 = 
                                                  Method_Newtonsoft_Json_JsonReader_set_MaxDepth__;
                                                  if (lVar6 != 0) {
                                                    *(undefined8 *)(lVar6 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Oculus_Interaction_Interactable<PokeInteractor,_PokeInteractable>_get_State__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar6 + 0x20) =
                                                       *(undefined8 *)puVar2;
                                                  thunk_FUN_02bb0e9c((undefined8 *)(lVar6 + 0x20));
                                                  uVar3 = *unaff_x29;
                                                  *(undefined4 *)(lVar6 + 0x18) = 0;
                                                  lVar4 = thunk_FUN_02b79644(uVar3);
                                                  FUN_037a5cd0(lVar4,*unaff_x27);
                                                  if (lVar4 != 0) {
                                                    lVar7 = *(long *)(lVar4 + 0x10);
                                                    uVar3 = *(undefined8 *)
                                                                                                                          
                                                  Method_System_Linq_Enumerable_Select<EnumMemberAttribute,_string>__
                                                  ;
                                                  lVar8 = *unaff_x19;
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
                                                  lVar4 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                            
                                                  Method_OVRSimpleJSON_JSONLazyCreator_Set<JSONNumber>__
                                                  );
                                                  FUN_037a5cd0(lVar4,*(undefined8 *)
                                                                                                                                            
                                                  Method_Newtonsoft_Json_Linq_JPropertyKeyedCollection_Contains__
                                                  );
                                                  lVar7 = thunk_FUN_02b79644(*unaff_x28);
                                                  FUN_05b9af48(lVar7,0);
                                                  if (lVar7 != 0) {
                                                    *(undefined8 *)(lVar7 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Newtonsoft_Json_JsonSerializer_Deserialize<RegexOptions>__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar7 + 0x10) = *unaff_x26;
                                                  thunk_FUN_02bb0e9c();
                                                  if (lVar4 != 0) {
                                                    lVar8 = *(long *)(lVar4 + 0x10);
                                                    lVar9 = *unaff_x20;
                                                    *(int *)(lVar4 + 0x1c) =
                                                         *(int *)(lVar4 + 0x1c) + 1;
                                                    if (lVar8 != 0) {
                                                      uVar1 = *(uint *)(lVar4 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                        *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                        plVar5 = (long *)(lVar8 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
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
                                                  lVar4 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar4 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar5 = (long *)(lVar4 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar5 = lVar6;
                                                      thunk_FUN_02bb0e9c(plVar5,lVar6);
                                                    }
                                                    else {
                                                      FUN_037a6538();
                                                    }
                                                    lVar6 = thunk_FUN_02b79644(*unaff_x25);
                                                    FUN_05b9af50(lVar6,0);
                                                    puVar2 = 
                                                  Method_Newtonsoft_Json_JsonTextReader_ParseUndefined__
                                                  ;
                                                  if (lVar6 != 0) {
                                                    *(undefined8 *)(lVar6 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Oculus_Interaction_Interactable<PokeInteractor,_PokeInteractable>_get_Registry__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar6 + 0x20) =
                                                       *(undefined8 *)puVar2;
                                                  thunk_FUN_02bb0e9c((undefined8 *)(lVar6 + 0x20));
                                                  uVar3 = *unaff_x29;
                                                  *(undefined4 *)(lVar6 + 0x18) = 0;
                                                  lVar4 = thunk_FUN_02b79644(uVar3);
                                                  FUN_037a5cd0(lVar4,*unaff_x27);
                                                  if (lVar4 != 0) {
                                                    lVar7 = *(long *)(lVar4 + 0x10);
                                                    uVar3 = *(undefined8 *)
                                                                                                                          
                                                  Method_System_Linq_Enumerable_Select<FieldInfo,_Enum>__
                                                  ;
                                                  lVar8 = *unaff_x19;
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
                                                  lVar4 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                            
                                                  Method_OVRSimpleJSON_JSONLazyCreator_Set<JSONNumber>__
                                                  );
                                                  FUN_037a5cd0(lVar4,*(undefined8 *)
                                                                                                                                            
                                                  Method_Newtonsoft_Json_Linq_JPropertyKeyedCollection_Contains__
                                                  );
                                                  lVar7 = thunk_FUN_02b79644(*unaff_x28);
                                                  FUN_05b9af48(lVar7,0);
                                                  if (lVar7 != 0) {
                                                    *(undefined8 *)(lVar7 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Newtonsoft_Json_JsonTextReader_MatchValue__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar7 + 0x10) = *unaff_x26;
                                                  thunk_FUN_02bb0e9c();
                                                  if (lVar4 != 0) {
                                                    lVar8 = *(long *)(lVar4 + 0x10);
                                                    lVar9 = *unaff_x20;
                                                    *(int *)(lVar4 + 0x1c) =
                                                         *(int *)(lVar4 + 0x1c) + 1;
                                                    if (lVar8 != 0) {
                                                      uVar1 = *(uint *)(lVar4 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                        *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                        plVar5 = (long *)(lVar8 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
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
                                                  lVar4 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar4 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar5 = (long *)(lVar4 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar5 = lVar6;
                                                      thunk_FUN_02bb0e9c(plVar5,lVar6);
                                                    }
                                                    else {
                                                      FUN_037a6538();
                                                    }
                                                    lVar6 = thunk_FUN_02b79644(*unaff_x25);
                                                    FUN_05b9af50(lVar6,0);
                                                    puVar2 = 
                                                  Method_LitJson_JsonData_LitJson_IJsonWrapper_GetBoolean__
                                                  ;
                                                  if (lVar6 != 0) {
                                                    *(undefined8 *)(lVar6 + 0x10) =
                                                         *(undefined8 *)
                                                          Method_LitJson_JsonData__ctor__;
                                                    thunk_FUN_02bb0e9c();
                                                    *(undefined8 *)(lVar6 + 0x20) =
                                                         *(undefined8 *)puVar2;
                                                    thunk_FUN_02bb0e9c((undefined8 *)(lVar6 + 0x20))
                                                    ;
                                                    uVar3 = *unaff_x29;
                                                    *(undefined4 *)(lVar6 + 0x18) = 3;
                                                    lVar4 = thunk_FUN_02b79644(uVar3);
                                                    FUN_037a5cd0(lVar4,*unaff_x27);
                                                    if (lVar4 != 0) {
                                                      lVar7 = *(long *)(lVar4 + 0x10);
                                                      uVar3 = *(undefined8 *)
                                                                                                                              
                                                  Method_System_Globalization_JapaneseCalendar_ToFourDigitYear__
                                                  ;
                                                  lVar8 = *unaff_x19;
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
                                                  lVar4 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                            
                                                  Method_OVRSimpleJSON_JSONLazyCreator_Set<JSONNumber>__
                                                  );
                                                  FUN_037a5cd0(lVar4,*(undefined8 *)
                                                                                                                                            
                                                  Method_Newtonsoft_Json_Linq_JPropertyKeyedCollection_Contains__
                                                  );
                                                  lVar7 = thunk_FUN_02b79644(*unaff_x28);
                                                  FUN_05b9af48(lVar7,0);
                                                  if (lVar7 != 0) {
                                                    *(undefined8 *)(lVar7 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_LitJson_JsonData_LitJson_IJsonWrapper_GetLong__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar7 + 0x10) = *unaff_x26;
                                                  thunk_FUN_02bb0e9c();
                                                  if (lVar4 != 0) {
                                                    lVar8 = *(long *)(lVar4 + 0x10);
                                                    lVar9 = *unaff_x20;
                                                    *(int *)(lVar4 + 0x1c) =
                                                         *(int *)(lVar4 + 0x1c) + 1;
                                                    if (lVar8 != 0) {
                                                      uVar1 = *(uint *)(lVar4 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                        *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                        plVar5 = (long *)(lVar8 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
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
                                                  lVar4 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar4 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar5 = (long *)(lVar4 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar5 = lVar6;
                                                      thunk_FUN_02bb0e9c(plVar5,lVar6);
                                                    }
                                                    else {
                                                      FUN_037a6538();
                                                    }
                                                    lVar6 = thunk_FUN_02b79644(*unaff_x25);
                                                    FUN_05b9af50(lVar6,0);
                                                    puVar2 = 
                                                  Method_Newtonsoft_Json_JsonConvert_DeserializeObject<Dictionary<string,_string>>__
                                                  ;
                                                  if (lVar6 != 0) {
                                                    *(undefined8 *)(lVar6 + 0x10) =
                                                         *(undefined8 *)PTR_DAT_06332138;
                                                    thunk_FUN_02bb0e9c();
                                                    *(undefined8 *)(lVar6 + 0x20) =
                                                         *(undefined8 *)puVar2;
                                                    thunk_FUN_02bb0e9c((undefined8 *)(lVar6 + 0x20))
                                                    ;
                                                    uVar3 = *unaff_x29;
                                                    *(undefined4 *)(lVar6 + 0x18) = 3;
                                                    lVar4 = thunk_FUN_02b79644(uVar3);
                                                    FUN_037a5cd0(lVar4,*unaff_x27);
                                                    if (lVar4 != 0) {
                                                      lVar7 = *(long *)(lVar4 + 0x10);
                                                      uVar3 = *(undefined8 *)
                                                                                                                              
                                                  Method_System_Collections_Generic_List<IntegratedSubsystemDescriptor>_GetEnumerator__
                                                  ;
                                                  lVar8 = *unaff_x19;
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
                                                  lVar4 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                            
                                                  Method_OVRSimpleJSON_JSONLazyCreator_Set<JSONNumber>__
                                                  );
                                                  FUN_037a5cd0(lVar4,*(undefined8 *)
                                                                                                                                            
                                                  Method_Newtonsoft_Json_Linq_JPropertyKeyedCollection_Contains__
                                                  );
                                                  lVar7 = thunk_FUN_02b79644(*unaff_x28);
                                                  FUN_05b9af48(lVar7,0);
                                                  if (lVar7 != 0) {
                                                    *(undefined8 *)(lVar7 + 0x18) =
                                                         *(undefined8 *)
                                                          Method_LitJson_JsonData_EnsureDictionary__
                                                    ;
                                                    thunk_FUN_02bb0e9c();
                                                    *(undefined8 *)(lVar7 + 0x10) = *unaff_x26;
                                                    thunk_FUN_02bb0e9c();
                                                    if (lVar4 != 0) {
                                                      lVar8 = *(long *)(lVar4 + 0x10);
                                                      lVar9 = *unaff_x20;
                                                      *(int *)(lVar4 + 0x1c) =
                                                           *(int *)(lVar4 + 0x1c) + 1;
                                                      if (lVar8 != 0) {
                                                        uVar1 = *(uint *)(lVar4 + 0x18);
                                                        if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                          *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                          plVar5 = (long *)(lVar8 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                          *plVar5 = lVar7;
                                                          thunk_FUN_02bb0e9c(plVar5,lVar7);
                                                        }
                                                        else {
                                                          FUN_037a6538(lVar4,lVar7,
                                                                       *(undefined8 *)
                                                                        (*(long *)(*(long *)(lVar9 +
                                                                                            0x20) +
                                                                                  0xc0) + 0x70));
                                                        }
                                                        *(long *)(lVar6 + 0x28) = lVar4;
                                                        thunk_FUN_02bb0e9c((long *)(lVar6 + 0x28),
                                                                           lVar4);
                                                        lVar4 = *(long *)(unaff_x21 + 0x10);
                                                        *(int *)(unaff_x21 + 0x1c) =
                                                             *(int *)(unaff_x21 + 0x1c) + 1;
                                                        if (lVar4 != 0) {
                                                          uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                          if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                                                            *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                            plVar5 = (long *)(lVar4 + (long)(int)
                                                  uVar1 * 8 + 0x20);
                                                  *plVar5 = lVar6;
                                                  thunk_FUN_02bb0e9c(plVar5,lVar6);
                                                  }
                                                  else {
                                                    FUN_037a6538();
                                                  }
                                                  lVar6 = thunk_FUN_02b79644(*unaff_x25);
                                                  FUN_05b9af50(lVar6,0);
                                                  puVar2 = 
                                                  Method_UnityEngine_UIElements_Internal_MultiColumnHeaderColumn_OnMoverChanged__
                                                  ;
                                                  if (lVar6 != 0) {
                                                    *(undefined8 *)(lVar6 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataMesh>_Start__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar6 + 0x20) =
                                                       *(undefined8 *)puVar2;
                                                  thunk_FUN_02bb0e9c((undefined8 *)(lVar6 + 0x20));
                                                  uVar3 = *unaff_x29;
                                                  *(undefined4 *)(lVar6 + 0x18) = 1;
                                                  lVar4 = thunk_FUN_02b79644(uVar3);
                                                  FUN_037a5cd0(lVar4,*unaff_x27);
                                                  if (lVar4 != 0) {
                                                    lVar7 = *(long *)(lVar4 + 0x10);
                                                    uVar3 = *(undefined8 *)puVar2;
                                                    lVar8 = *unaff_x19;
                                                    *(int *)(lVar4 + 0x1c) =
                                                         *(int *)(lVar4 + 0x1c) + 1;
                                                    if (lVar7 != 0) {
                                                      uVar1 = *(uint *)(lVar4 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                        *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                        *(undefined8 *)
                                                         (lVar7 + (long)(int)uVar1 * 8 + 0x20) =
                                                             uVar3;
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
                                                  lVar4 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                            
                                                  Method_OVRSimpleJSON_JSONLazyCreator_Set<JSONNumber>__
                                                  );
                                                  FUN_037a5cd0(lVar4,*(undefined8 *)
                                                                                                                                            
                                                  Method_Newtonsoft_Json_Linq_JPropertyKeyedCollection_Contains__
                                                  );
                                                  lVar7 = thunk_FUN_02b79644(*unaff_x28);
                                                  FUN_05b9af48(lVar7,0);
                                                  if (lVar7 != 0) {
                                                    *(undefined8 *)(lVar7 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_UIElements_Internal_MultiColumnHeaderColumn_UpdateHeaderTemplate__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar7 + 0x10) = *unaff_x26;
                                                  thunk_FUN_02bb0e9c();
                                                  if (lVar4 != 0) {
                                                    lVar8 = *(long *)(lVar4 + 0x10);
                                                    lVar9 = *unaff_x20;
                                                    *(int *)(lVar4 + 0x1c) =
                                                         *(int *)(lVar4 + 0x1c) + 1;
                                                    if (lVar8 != 0) {
                                                      uVar1 = *(uint *)(lVar4 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                        *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                        plVar5 = (long *)(lVar8 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
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
                                                  lVar4 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar4 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar5 = (long *)(lVar4 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar5 = lVar6;
                                                      thunk_FUN_02bb0e9c(plVar5,lVar6);
                                                    }
                                                    else {
                                                      FUN_037a6538();
                                                    }
                                                    lVar6 = thunk_FUN_02b79644(*unaff_x25);
                                                    FUN_05b9af50(lVar6,0);
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
                                                  uVar3 = *unaff_x29;
                                                  *(undefined4 *)(lVar6 + 0x18) = 4;
                                                  lVar4 = thunk_FUN_02b79644(uVar3);
                                                  FUN_037a5cd0(lVar4,*unaff_x27);
                                                  if (lVar4 != 0) {
                                                    lVar7 = *(long *)(lVar4 + 0x10);
                                                    uVar3 = *(undefined8 *)
                                                                                                                          
                                                  Method_UnityEngine_InputSystem_InputControlExtensions_CopyState__
                                                  ;
                                                  lVar8 = *unaff_x19;
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
                                                  lVar4 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                            
                                                  Method_OVRSimpleJSON_JSONLazyCreator_Set<JSONNumber>__
                                                  );
                                                  FUN_037a5cd0(lVar4,*(undefined8 *)
                                                                                                                                            
                                                  Method_Newtonsoft_Json_Linq_JPropertyKeyedCollection_Contains__
                                                  );
                                                  lVar7 = thunk_FUN_02b79644(*unaff_x28);
                                                  FUN_05b9af48(lVar7,0);
                                                  if (lVar7 != 0) {
                                                    *(undefined8 *)(lVar7 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Newtonsoft_Json_JsonReader_set_FloatParseHandling__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar7 + 0x10) = *unaff_x26;
                                                  thunk_FUN_02bb0e9c();
                                                  if (lVar4 != 0) {
                                                    lVar8 = *(long *)(lVar4 + 0x10);
                                                    lVar9 = *unaff_x20;
                                                    *(int *)(lVar4 + 0x1c) =
                                                         *(int *)(lVar4 + 0x1c) + 1;
                                                    if (lVar8 != 0) {
                                                      uVar1 = *(uint *)(lVar4 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                        *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                        plVar5 = (long *)(lVar8 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
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
                                                  lVar4 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar4 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar5 = (long *)(lVar4 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar5 = lVar6;
                                                      thunk_FUN_02bb0e9c(plVar5,lVar6);
                                                    }
                                                    else {
                                                      FUN_037a6538();
                                                    }
                                                    *(long *)(in_stack_00000000 + 0x28) = unaff_x21;
                                                    thunk_FUN_02bb0e9c();
                                                    FUN_05b9ad1c(in_stack_00000008,in_stack_00000000
                                                                 ,0);
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
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


