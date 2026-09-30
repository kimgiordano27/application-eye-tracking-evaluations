/*
FUNCTION_NAME: UnityEngine.TextEditingUtilities$$RestoreCursorState
ENTRY_POINT: 05bf49dc
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 89
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;data_collection;telemetry;structure_combo;keyword_support
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_9;source_validity_pose_sink_structure;eye_or_gaze_keyword_boost_only;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void UnityEngine_TextEditingUtilities__RestoreCursorState(void)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long in_x9;
  long lVar8;
  long lVar9;
  long *unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  long *unaff_x29;
  long in_stack_00000000;
  undefined8 in_stack_00000008;
  
  lVar6 = *(long *)(unaff_x23 + 0x10);
  uVar5 = **(undefined8 **)(in_x9 + 0xf68);
  *(int *)(unaff_x23 + 0x1c) = *(int *)(unaff_x23 + 0x1c) + 1;
  if (lVar6 != 0) {
    uVar1 = *(uint *)(unaff_x23 + 0x18);
    if (uVar1 < *(uint *)(lVar6 + 0x18)) {
      *(uint *)(unaff_x23 + 0x18) = uVar1 + 1;
      *(undefined8 *)(lVar6 + (long)(int)uVar1 * 8 + 0x20) = uVar5;
      thunk_FUN_02bb0e9c();
    }
    else {
      FUN_037a6538();
    }
    *(long *)(unaff_x22 + 0x30) = unaff_x23;
    thunk_FUN_02bb0e9c();
    lVar6 = thunk_FUN_02b79644(*(undefined8 *)Method_OVRSimpleJSON_JSONLazyCreator_Set<JSONNumber>__
                              );
    FUN_037a5cd0(lVar6,*(undefined8 *)
                        Method_Newtonsoft_Json_Linq_JPropertyKeyedCollection_Contains__);
    lVar3 = thunk_FUN_02b79644(*unaff_x28);
    FUN_05b9af48(lVar3,0);
    if (lVar3 != 0) {
      *(undefined8 *)(lVar3 + 0x18) =
           *(undefined8 *)Method_Newtonsoft_Json_JsonSerializer_Deserialize<RegexOptions>__;
      thunk_FUN_02bb0e9c();
      *(undefined8 *)(lVar3 + 0x10) = *unaff_x26;
      thunk_FUN_02bb0e9c();
      if (lVar6 != 0) {
        lVar7 = *(long *)(lVar6 + 0x10);
        lVar8 = *unaff_x19;
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
          *(long *)(unaff_x22 + 0x28) = lVar6;
          thunk_FUN_02bb0e9c((long *)(unaff_x22 + 0x28),lVar6);
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
            puVar2 = Method_Newtonsoft_Json_JsonTextReader_ParseUndefined__;
            if (lVar6 != 0) {
              *(undefined8 *)(lVar6 + 0x10) =
                   *(undefined8 *)
                    Method_Oculus_Interaction_Interactable<PokeInteractor,_PokeInteractable>_get_Registry__
              ;
              thunk_FUN_02bb0e9c();
              *(undefined8 *)(lVar6 + 0x20) = *(undefined8 *)puVar2;
              thunk_FUN_02bb0e9c((undefined8 *)(lVar6 + 0x20));
              uVar5 = *unaff_x27;
              *(undefined4 *)(lVar6 + 0x18) = 0;
              lVar3 = thunk_FUN_02b79644(uVar5);
              FUN_037a5cd0(lVar3,*unaff_x20);
              if (lVar3 != 0) {
                lVar7 = *(long *)(lVar3 + 0x10);
                uVar5 = *(undefined8 *)Method_System_Linq_Enumerable_Select<FieldInfo,_Enum>__;
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
                  lVar3 = thunk_FUN_02b79644(*(undefined8 *)
                                              Method_OVRSimpleJSON_JSONLazyCreator_Set<JSONNumber>__
                                            );
                  FUN_037a5cd0(lVar3,*(undefined8 *)
                                      Method_Newtonsoft_Json_Linq_JPropertyKeyedCollection_Contains__
                              );
                  lVar7 = thunk_FUN_02b79644(*unaff_x28);
                  FUN_05b9af48(lVar7,0);
                  if (lVar7 != 0) {
                    *(undefined8 *)(lVar7 + 0x18) =
                         *(undefined8 *)Method_Newtonsoft_Json_JsonTextReader_MatchValue__;
                    thunk_FUN_02bb0e9c();
                    *(undefined8 *)(lVar7 + 0x10) = *unaff_x26;
                    thunk_FUN_02bb0e9c();
                    if (lVar3 != 0) {
                      lVar8 = *(long *)(lVar3 + 0x10);
                      lVar9 = *unaff_x19;
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
                        lVar3 = *(long *)(unaff_x21 + 0x10);
                        *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
                        if (lVar3 != 0) {
                          uVar1 = *(uint *)(unaff_x21 + 0x18);
                          if (uVar1 < *(uint *)(lVar3 + 0x18)) {
                            *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                            plVar4 = (long *)(lVar3 + (long)(int)uVar1 * 8 + 0x20);
                            *plVar4 = lVar6;
                            thunk_FUN_02bb0e9c(plVar4,lVar6);
                          }
                          else {
                            FUN_037a6538();
                          }
                          lVar6 = thunk_FUN_02b79644(*unaff_x25);
                          FUN_05b9af50(lVar6,0);
                          puVar2 = Method_Newtonsoft_Json_JsonTextReader_ParsePostValue__;
                          if (lVar6 != 0) {
                            *(undefined8 *)(lVar6 + 0x10) =
                                 *(undefined8 *)Method_Newtonsoft_Json_JsonTextReader_ParseValue__;
                            thunk_FUN_02bb0e9c();
                            *(undefined8 *)(lVar6 + 0x20) = *(undefined8 *)puVar2;
                            thunk_FUN_02bb0e9c((undefined8 *)(lVar6 + 0x20));
                            uVar5 = *unaff_x27;
                            *(undefined4 *)(lVar6 + 0x18) = 0;
                            lVar3 = thunk_FUN_02b79644(uVar5);
                            FUN_037a5cd0(lVar3,*unaff_x20);
                            if (lVar3 != 0) {
                              lVar7 = *(long *)(lVar3 + 0x10);
                              uVar5 = *(undefined8 *)Method_Newtonsoft_Json_JsonTextReader__ctor__;
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
                                lVar3 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                        
                                                  Method_OVRSimpleJSON_JSONLazyCreator_Set<JSONNumber>__
                                                  );
                                FUN_037a5cd0(lVar3,*(undefined8 *)
                                                                                                        
                                                  Method_Newtonsoft_Json_Linq_JPropertyKeyedCollection_Contains__
                                            );
                                lVar7 = thunk_FUN_02b79644(*unaff_x28);
                                FUN_05b9af48(lVar7,0);
                                if (lVar7 != 0) {
                                  *(undefined8 *)(lVar7 + 0x18) =
                                       *(undefined8 *)
                                        Method_Newtonsoft_Json_JsonTextReader_ParseFalse__;
                                  thunk_FUN_02bb0e9c();
                                  *(undefined8 *)(lVar7 + 0x10) = *unaff_x26;
                                  thunk_FUN_02bb0e9c();
                                  if (lVar3 != 0) {
                                    lVar8 = *(long *)(lVar3 + 0x10);
                                    lVar9 = *unaff_x19;
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
                                      lVar3 = *(long *)(unaff_x21 + 0x10);
                                      *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
                                      if (lVar3 != 0) {
                                        uVar1 = *(uint *)(unaff_x21 + 0x18);
                                        if (uVar1 < *(uint *)(lVar3 + 0x18)) {
                                          *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                          plVar4 = (long *)(lVar3 + (long)(int)uVar1 * 8 + 0x20);
                                          *plVar4 = lVar6;
                                          thunk_FUN_02bb0e9c(plVar4,lVar6);
                                        }
                                        else {
                                          FUN_037a6538();
                                        }
                                        lVar6 = thunk_FUN_02b79644(*unaff_x25);
                                        FUN_05b9af50(lVar6,0);
                                        puVar2 = 
                                        Method_LitJson_JsonData_LitJson_IJsonWrapper_GetBoolean__;
                                        if (lVar6 != 0) {
                                          *(undefined8 *)(lVar6 + 0x10) =
                                               *(undefined8 *)Method_LitJson_JsonData__ctor__;
                                          thunk_FUN_02bb0e9c();
                                          *(undefined8 *)(lVar6 + 0x20) = *(undefined8 *)puVar2;
                                          thunk_FUN_02bb0e9c((undefined8 *)(lVar6 + 0x20));
                                          uVar5 = *unaff_x27;
                                          *(undefined4 *)(lVar6 + 0x18) = 3;
                                          lVar3 = thunk_FUN_02b79644(uVar5);
                                          FUN_037a5cd0(lVar3,*unaff_x20);
                                          if (lVar3 != 0) {
                                            lVar7 = *(long *)(lVar3 + 0x10);
                                            uVar5 = *(undefined8 *)
                                                                                                          
                                                  Method_System_Globalization_JapaneseCalendar_ToFourDigitYear__
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
                                              lVar3 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                    
                                                  Method_OVRSimpleJSON_JSONLazyCreator_Set<JSONNumber>__
                                                  );
                                              FUN_037a5cd0(lVar3,*(undefined8 *)
                                                                                                                                    
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
                                                if (lVar3 != 0) {
                                                  lVar8 = *(long *)(lVar3 + 0x10);
                                                  lVar9 = *unaff_x19;
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
                                                  lVar3 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar3 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar3 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar4 = (long *)(lVar3 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar4 = lVar6;
                                                      thunk_FUN_02bb0e9c(plVar4,lVar6);
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
                                                    uVar5 = *unaff_x27;
                                                    *(undefined4 *)(lVar6 + 0x18) = 3;
                                                    lVar3 = thunk_FUN_02b79644(uVar5);
                                                    FUN_037a5cd0(lVar3,*unaff_x20);
                                                    if (lVar3 != 0) {
                                                      lVar7 = *(long *)(lVar3 + 0x10);
                                                      uVar5 = *(undefined8 *)
                                                                                                                              
                                                  Method_System_Collections_Generic_List<IntegratedSubsystemDescriptor>_GetEnumerator__
                                                  ;
                                                  lVar8 = *unaff_x29;
                                                  *(int *)(lVar3 + 0x1c) =
                                                       *(int *)(lVar3 + 0x1c) + 1;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *(uint *)(lVar3 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar5
                                                      ;
                                                      thunk_FUN_02bb0e9c();
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar3,uVar5,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar8 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar6 + 0x30) = lVar3;
                                                  thunk_FUN_02bb0e9c((long *)(lVar6 + 0x30),lVar3);
                                                  lVar3 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                            
                                                  Method_OVRSimpleJSON_JSONLazyCreator_Set<JSONNumber>__
                                                  );
                                                  FUN_037a5cd0(lVar3,*(undefined8 *)
                                                                                                                                            
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
                                                    if (lVar3 != 0) {
                                                      lVar8 = *(long *)(lVar3 + 0x10);
                                                      lVar9 = *unaff_x19;
                                                      *(int *)(lVar3 + 0x1c) =
                                                           *(int *)(lVar3 + 0x1c) + 1;
                                                      if (lVar8 != 0) {
                                                        uVar1 = *(uint *)(lVar3 + 0x18);
                                                        if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                          *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                                                          plVar4 = (long *)(lVar8 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                          *plVar4 = lVar7;
                                                          thunk_FUN_02bb0e9c(plVar4,lVar7);
                                                        }
                                                        else {
                                                          FUN_037a6538(lVar3,lVar7,
                                                                       *(undefined8 *)
                                                                        (*(long *)(*(long *)(lVar9 +
                                                                                            0x20) +
                                                                                  0xc0) + 0x70));
                                                        }
                                                        *(long *)(lVar6 + 0x28) = lVar3;
                                                        thunk_FUN_02bb0e9c((long *)(lVar6 + 0x28),
                                                                           lVar3);
                                                        lVar3 = *(long *)(unaff_x21 + 0x10);
                                                        *(int *)(unaff_x21 + 0x1c) =
                                                             *(int *)(unaff_x21 + 0x1c) + 1;
                                                        if (lVar3 != 0) {
                                                          uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                          if (uVar1 < *(uint *)(lVar3 + 0x18)) {
                                                            *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                            plVar4 = (long *)(lVar3 + (long)(int)
                                                  uVar1 * 8 + 0x20);
                                                  *plVar4 = lVar6;
                                                  thunk_FUN_02bb0e9c(plVar4,lVar6);
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
                                                  uVar5 = *unaff_x27;
                                                  *(undefined4 *)(lVar6 + 0x18) = 4;
                                                  lVar3 = thunk_FUN_02b79644(uVar5);
                                                  FUN_037a5cd0(lVar3,*unaff_x20);
                                                  if (lVar3 != 0) {
                                                    lVar7 = *(long *)(lVar3 + 0x10);
                                                    uVar5 = *(undefined8 *)
                                                                                                                          
                                                  Method_UnityEngine_InputSystem_InputControlExtensions_CopyState__
                                                  ;
                                                  lVar8 = *unaff_x29;
                                                  *(int *)(lVar3 + 0x1c) =
                                                       *(int *)(lVar3 + 0x1c) + 1;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *(uint *)(lVar3 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar5
                                                      ;
                                                      thunk_FUN_02bb0e9c();
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar3,uVar5,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar8 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar6 + 0x30) = lVar3;
                                                  thunk_FUN_02bb0e9c((long *)(lVar6 + 0x30),lVar3);
                                                  lVar3 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                            
                                                  Method_OVRSimpleJSON_JSONLazyCreator_Set<JSONNumber>__
                                                  );
                                                  FUN_037a5cd0(lVar3,*(undefined8 *)
                                                                                                                                            
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
                                                  if (lVar3 != 0) {
                                                    lVar8 = *(long *)(lVar3 + 0x10);
                                                    lVar9 = *unaff_x19;
                                                    *(int *)(lVar3 + 0x1c) =
                                                         *(int *)(lVar3 + 0x1c) + 1;
                                                    if (lVar8 != 0) {
                                                      uVar1 = *(uint *)(lVar3 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                        *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                                                        plVar4 = (long *)(lVar8 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
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
                                                  lVar3 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar3 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar3 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar4 = (long *)(lVar3 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar4 = lVar6;
                                                      thunk_FUN_02bb0e9c(plVar4,lVar6);
                                                    }
                                                    else {
                                                      FUN_037a6538();
                                                    }
                                                    lVar6 = thunk_FUN_02b79644(*unaff_x25);
                                                    FUN_05b9af50(lVar6,0);
                                                    puVar2 = 
                                                  Method_System_Collections_Specialized_NameObjectCollectionBase_GetObjectData__
                                                  ;
                                                  if (lVar6 != 0) {
                                                    *(undefined8 *)(lVar6 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Collections_Specialized_NameObjectCollectionBase_BaseSet__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar6 + 0x20) =
                                                       *(undefined8 *)puVar2;
                                                  thunk_FUN_02bb0e9c((undefined8 *)(lVar6 + 0x20));
                                                  uVar5 = *unaff_x27;
                                                  *(undefined4 *)(lVar6 + 0x18) = 1;
                                                  lVar3 = thunk_FUN_02b79644(uVar5);
                                                  FUN_037a5cd0(lVar3,*unaff_x20);
                                                  if (lVar3 != 0) {
                                                    lVar7 = *(long *)(lVar3 + 0x10);
                                                    uVar5 = *(undefined8 *)
                                                                                                                          
                                                  Method_UnityEngine_InputSystem_Utilities_NamedValue_ApplyAllToObject<ReadOnlyArray<NamedValue>>__
                                                  ;
                                                  lVar8 = *unaff_x29;
                                                  *(int *)(lVar3 + 0x1c) =
                                                       *(int *)(lVar3 + 0x1c) + 1;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *(uint *)(lVar3 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar5
                                                      ;
                                                      thunk_FUN_02bb0e9c();
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar3,uVar5,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar8 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar6 + 0x30) = lVar3;
                                                  thunk_FUN_02bb0e9c((long *)(lVar6 + 0x30),lVar3);
                                                  lVar3 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                            
                                                  Method_OVRSimpleJSON_JSONLazyCreator_Set<JSONNumber>__
                                                  );
                                                  FUN_037a5cd0(lVar3,*(undefined8 *)
                                                                                                                                            
                                                  Method_Newtonsoft_Json_Linq_JPropertyKeyedCollection_Contains__
                                                  );
                                                  lVar7 = thunk_FUN_02b79644(*unaff_x28);
                                                  FUN_05b9af48(lVar7,0);
                                                  if (lVar7 != 0) {
                                                    *(undefined8 *)(lVar7 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_InputSystem_Utilities_NamedValue_ParseMultiple__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar7 + 0x10) = *unaff_x26;
                                                  thunk_FUN_02bb0e9c();
                                                  if (lVar3 != 0) {
                                                    lVar8 = *(long *)(lVar3 + 0x10);
                                                    lVar9 = *unaff_x19;
                                                    *(int *)(lVar3 + 0x1c) =
                                                         *(int *)(lVar3 + 0x1c) + 1;
                                                    if (lVar8 != 0) {
                                                      uVar1 = *(uint *)(lVar3 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                        *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                                                        plVar4 = (long *)(lVar8 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
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
                                                  lVar3 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar3 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar3 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar4 = (long *)(lVar3 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar4 = lVar6;
                                                      thunk_FUN_02bb0e9c(plVar4,lVar6);
                                                    }
                                                    else {
                                                      FUN_037a6538();
                                                    }
                                                    lVar6 = thunk_FUN_02b79644(*unaff_x25);
                                                    FUN_05b9af50(lVar6,0);
                                                    puVar2 = 
                                                  Method_System_Xml_Schema_NamespaceListNode_get_IsNullable__
                                                  ;
                                                  if (lVar6 != 0) {
                                                    *(undefined8 *)(lVar6 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Security_NamedPermissionSet_set_Name__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar6 + 0x20) =
                                                       *(undefined8 *)puVar2;
                                                  thunk_FUN_02bb0e9c((undefined8 *)(lVar6 + 0x20));
                                                  uVar5 = *unaff_x27;
                                                  *(undefined4 *)(lVar6 + 0x18) = 1;
                                                  lVar3 = thunk_FUN_02b79644(uVar5);
                                                  FUN_037a5cd0(lVar3,*unaff_x20);
                                                  if (lVar3 != 0) {
                                                    lVar7 = *(long *)(lVar3 + 0x10);
                                                    uVar5 = *(undefined8 *)
                                                                                                                          
                                                  Method_System_Xml_Schema_NamespaceList_get_Enumerate__
                                                  ;
                                                  lVar8 = *unaff_x29;
                                                  *(int *)(lVar3 + 0x1c) =
                                                       *(int *)(lVar3 + 0x1c) + 1;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *(uint *)(lVar3 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar5
                                                      ;
                                                      thunk_FUN_02bb0e9c();
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar3,uVar5,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar8 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar6 + 0x30) = lVar3;
                                                  thunk_FUN_02bb0e9c((long *)(lVar6 + 0x30),lVar3);
                                                  lVar3 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                            
                                                  Method_OVRSimpleJSON_JSONLazyCreator_Set<JSONNumber>__
                                                  );
                                                  FUN_037a5cd0(lVar3,*(undefined8 *)
                                                                                                                                            
                                                  Method_Newtonsoft_Json_Linq_JPropertyKeyedCollection_Contains__
                                                  );
                                                  lVar7 = thunk_FUN_02b79644(*unaff_x28);
                                                  FUN_05b9af48(lVar7,0);
                                                  if (lVar7 != 0) {
                                                    *(undefined8 *)(lVar7 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Collections_Specialized_NameObjectCollectionBase_OnDeserialization__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar7 + 0x10) = *unaff_x26;
                                                  thunk_FUN_02bb0e9c();
                                                  if (lVar3 != 0) {
                                                    lVar8 = *(long *)(lVar3 + 0x10);
                                                    lVar9 = *unaff_x19;
                                                    *(int *)(lVar3 + 0x1c) =
                                                         *(int *)(lVar3 + 0x1c) + 1;
                                                    if (lVar8 != 0) {
                                                      uVar1 = *(uint *)(lVar3 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                        *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                                                        plVar4 = (long *)(lVar8 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
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
                                                  lVar3 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar3 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar3 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar4 = (long *)(lVar3 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar4 = lVar6;
                                                      thunk_FUN_02bb0e9c(plVar4,lVar6);
                                                    }
                                                    else {
                                                      FUN_037a6538();
                                                    }
                                                    lVar6 = thunk_FUN_02b79644(*unaff_x25);
                                                    FUN_05b9af50(lVar6,0);
                                                    puVar2 = 
                                                  Method_Newtonsoft_Json_Serialization_JsonTypeReflector_GetAttribute<DataMemberAttribute>__
                                                  ;
                                                  if (lVar6 != 0) {
                                                    *(undefined8 *)(lVar6 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Newtonsoft_Json_JsonTextReader_ParseUnquotedProperty__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar6 + 0x20) =
                                                       *(undefined8 *)puVar2;
                                                  thunk_FUN_02bb0e9c((undefined8 *)(lVar6 + 0x20));
                                                  uVar5 = *unaff_x27;
                                                  *(undefined4 *)(lVar6 + 0x18) = 1;
                                                  lVar3 = thunk_FUN_02b79644(uVar5);
                                                  FUN_037a5cd0(lVar3,*unaff_x20);
                                                  if (lVar3 != 0) {
                                                    lVar7 = *(long *)(lVar3 + 0x10);
                                                    uVar5 = *(undefined8 *)
                                                                                                                          
                                                  Method_Newtonsoft_Json_JsonTextReader_ReadUnquotedPropertyReportIfDone__
                                                  ;
                                                  lVar8 = *unaff_x29;
                                                  *(int *)(lVar3 + 0x1c) =
                                                       *(int *)(lVar3 + 0x1c) + 1;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *(uint *)(lVar3 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar5
                                                      ;
                                                      thunk_FUN_02bb0e9c();
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar3,uVar5,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar8 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar6 + 0x30) = lVar3;
                                                  thunk_FUN_02bb0e9c((long *)(lVar6 + 0x30),lVar3);
                                                  lVar3 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                            
                                                  Method_OVRSimpleJSON_JSONLazyCreator_Set<JSONNumber>__
                                                  );
                                                  FUN_037a5cd0(lVar3,*(undefined8 *)
                                                                                                                                            
                                                  Method_Newtonsoft_Json_Linq_JPropertyKeyedCollection_Contains__
                                                  );
                                                  lVar7 = thunk_FUN_02b79644(*unaff_x28);
                                                  FUN_05b9af48(lVar7,0);
                                                  if (lVar7 != 0) {
                                                    *(undefined8 *)(lVar7 + 0x18) =
                                                         *(undefined8 *)
                                                          Method_System_Xml_NameTable_Get__;
                                                    thunk_FUN_02bb0e9c();
                                                    *(undefined8 *)(lVar7 + 0x10) = *unaff_x26;
                                                    thunk_FUN_02bb0e9c();
                                                    if (lVar3 != 0) {
                                                      lVar8 = *(long *)(lVar3 + 0x10);
                                                      lVar9 = *unaff_x19;
                                                      *(int *)(lVar3 + 0x1c) =
                                                           *(int *)(lVar3 + 0x1c) + 1;
                                                      if (lVar8 != 0) {
                                                        uVar1 = *(uint *)(lVar3 + 0x18);
                                                        if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                          *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                                                          plVar4 = (long *)(lVar8 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                          *plVar4 = lVar7;
                                                          thunk_FUN_02bb0e9c(plVar4,lVar7);
                                                        }
                                                        else {
                                                          FUN_037a6538(lVar3,lVar7,
                                                                       *(undefined8 *)
                                                                        (*(long *)(*(long *)(lVar9 +
                                                                                            0x20) +
                                                                                  0xc0) + 0x70));
                                                        }
                                                        *(long *)(lVar6 + 0x28) = lVar3;
                                                        thunk_FUN_02bb0e9c((long *)(lVar6 + 0x28),
                                                                           lVar3);
                                                        lVar3 = *(long *)(unaff_x21 + 0x10);
                                                        *(int *)(unaff_x21 + 0x1c) =
                                                             *(int *)(unaff_x21 + 0x1c) + 1;
                                                        if (lVar3 != 0) {
                                                          uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                          if (uVar1 < *(uint *)(lVar3 + 0x18)) {
                                                            *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                            plVar4 = (long *)(lVar3 + (long)(int)
                                                  uVar1 * 8 + 0x20);
                                                  *plVar4 = lVar6;
                                                  thunk_FUN_02bb0e9c(plVar4,lVar6);
                                                  }
                                                  else {
                                                    FUN_037a6538();
                                                  }
                                                  lVar6 = thunk_FUN_02b79644(*unaff_x25);
                                                  FUN_05b9af50(lVar6,0);
                                                  puVar2 = 
                                                  Method_Newtonsoft_Json_JsonTextReader_ParseConstructor__
                                                  ;
                                                  if (lVar6 != 0) {
                                                    *(undefined8 *)(lVar6 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Newtonsoft_Json_JsonTextWriter_WriteEnd__;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar6 + 0x20) =
                                                       *(undefined8 *)puVar2;
                                                  thunk_FUN_02bb0e9c((undefined8 *)(lVar6 + 0x20));
                                                  uVar5 = *unaff_x27;
                                                  *(undefined4 *)(lVar6 + 0x18) = 1;
                                                  lVar3 = thunk_FUN_02b79644(uVar5);
                                                  FUN_037a5cd0(lVar3,*unaff_x20);
                                                  if (lVar3 != 0) {
                                                    lVar7 = *(long *)(lVar3 + 0x10);
                                                    uVar5 = *(undefined8 *)
                                                                                                                          
                                                  Method_Newtonsoft_Json_JsonTextReader_ReadAsBytes__
                                                  ;
                                                  lVar8 = *unaff_x29;
                                                  *(int *)(lVar3 + 0x1c) =
                                                       *(int *)(lVar3 + 0x1c) + 1;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *(uint *)(lVar3 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar5
                                                      ;
                                                      thunk_FUN_02bb0e9c();
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar3,uVar5,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar8 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar6 + 0x30) = lVar3;
                                                  thunk_FUN_02bb0e9c((long *)(lVar6 + 0x30),lVar3);
                                                  lVar3 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                            
                                                  Method_OVRSimpleJSON_JSONLazyCreator_Set<JSONNumber>__
                                                  );
                                                  FUN_037a5cd0(lVar3,*(undefined8 *)
                                                                                                                                            
                                                  Method_Newtonsoft_Json_Linq_JPropertyKeyedCollection_Contains__
                                                  );
                                                  lVar7 = thunk_FUN_02b79644(*unaff_x28);
                                                  FUN_05b9af48(lVar7,0);
                                                  if (lVar7 != 0) {
                                                    *(undefined8 *)(lVar7 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_Rendering_Universal_NativeArrayExtensions_UnsafeElementAt<ShadowSliceData>__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar7 + 0x10) = *unaff_x26;
                                                  thunk_FUN_02bb0e9c();
                                                  if (lVar3 != 0) {
                                                    lVar8 = *(long *)(lVar3 + 0x10);
                                                    lVar9 = *unaff_x19;
                                                    *(int *)(lVar3 + 0x1c) =
                                                         *(int *)(lVar3 + 0x1c) + 1;
                                                    if (lVar8 != 0) {
                                                      uVar1 = *(uint *)(lVar3 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                        *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                                                        plVar4 = (long *)(lVar8 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
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
                                                  lVar3 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar3 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar3 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar4 = (long *)(lVar3 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar4 = lVar6;
                                                      thunk_FUN_02bb0e9c(plVar4,lVar6);
                                                    }
                                                    else {
                                                      FUN_037a6538();
                                                    }
                                                    lVar6 = thunk_FUN_02b79644(*unaff_x25);
                                                    FUN_05b9af50(lVar6,0);
                                                    puVar2 = 
                                                  Method_Newtonsoft_Json_JsonTextReader_HandleNull__
                                                  ;
                                                  if (lVar6 != 0) {
                                                    *(undefined8 *)(lVar6 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Newtonsoft_Json_JsonTextWriter__ctor__;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar6 + 0x20) =
                                                       *(undefined8 *)puVar2;
                                                  thunk_FUN_02bb0e9c((undefined8 *)(lVar6 + 0x20));
                                                  uVar5 = *unaff_x27;
                                                  *(undefined4 *)(lVar6 + 0x18) = 0;
                                                  lVar3 = thunk_FUN_02b79644(uVar5);
                                                  FUN_037a5cd0(lVar3,*unaff_x20);
                                                  if (lVar3 != 0) {
                                                    lVar7 = *(long *)(lVar3 + 0x10);
                                                    uVar5 = *(undefined8 *)
                                                                                                                          
                                                  Method_Newtonsoft_Json_Serialization_JsonSerializerInternalWriter_GetReference__
                                                  ;
                                                  lVar8 = *unaff_x29;
                                                  *(int *)(lVar3 + 0x1c) =
                                                       *(int *)(lVar3 + 0x1c) + 1;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *(uint *)(lVar3 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar5
                                                      ;
                                                      thunk_FUN_02bb0e9c();
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar3,uVar5,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar8 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar6 + 0x30) = lVar3;
                                                  thunk_FUN_02bb0e9c((long *)(lVar6 + 0x30),lVar3);
                                                  lVar3 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                            
                                                  Method_OVRSimpleJSON_JSONLazyCreator_Set<JSONNumber>__
                                                  );
                                                  FUN_037a5cd0(lVar3,*(undefined8 *)
                                                                                                                                            
                                                  Method_Newtonsoft_Json_Linq_JPropertyKeyedCollection_Contains__
                                                  );
                                                  lVar7 = thunk_FUN_02b79644(*unaff_x28);
                                                  FUN_05b9af48(lVar7,0);
                                                  if (lVar7 != 0) {
                                                    *(undefined8 *)(lVar7 + 0x18) =
                                                         *(undefined8 *)
                                                          Method_System_Data_NameNode_Eval__;
                                                    thunk_FUN_02bb0e9c();
                                                    *(undefined8 *)(lVar7 + 0x10) = *unaff_x26;
                                                    thunk_FUN_02bb0e9c();
                                                    if (lVar3 != 0) {
                                                      lVar8 = *(long *)(lVar3 + 0x10);
                                                      lVar9 = *unaff_x19;
                                                      *(int *)(lVar3 + 0x1c) =
                                                           *(int *)(lVar3 + 0x1c) + 1;
                                                      if (lVar8 != 0) {
                                                        uVar1 = *(uint *)(lVar3 + 0x18);
                                                        if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                          *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                                                          plVar4 = (long *)(lVar8 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                          *plVar4 = lVar7;
                                                          thunk_FUN_02bb0e9c(plVar4,lVar7);
                                                        }
                                                        else {
                                                          FUN_037a6538(lVar3,lVar7,
                                                                       *(undefined8 *)
                                                                        (*(long *)(*(long *)(lVar9 +
                                                                                            0x20) +
                                                                                  0xc0) + 0x70));
                                                        }
                                                        *(long *)(lVar6 + 0x28) = lVar3;
                                                        thunk_FUN_02bb0e9c((long *)(lVar6 + 0x28),
                                                                           lVar3);
                                                        lVar3 = *(long *)(unaff_x21 + 0x10);
                                                        *(int *)(unaff_x21 + 0x1c) =
                                                             *(int *)(unaff_x21 + 0x1c) + 1;
                                                        if (lVar3 != 0) {
                                                          uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                          if (uVar1 < *(uint *)(lVar3 + 0x18)) {
                                                            *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                            plVar4 = (long *)(lVar3 + (long)(int)
                                                  uVar1 * 8 + 0x20);
                                                  *plVar4 = lVar6;
                                                  thunk_FUN_02bb0e9c(plVar4,lVar6);
                                                  }
                                                  else {
                                                    FUN_037a6538();
                                                  }
                                                  lVar6 = thunk_FUN_02b79644(*unaff_x25);
                                                  FUN_05b9af50(lVar6,0);
                                                  puVar2 = 
                                                  Method_Newtonsoft_Json_Serialization_JsonSerializerInternalWriter_SerializeISerializable__
                                                  ;
                                                  if (lVar6 != 0) {
                                                    *(undefined8 *)(lVar6 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Newtonsoft_Json_JsonTextReader_ReadFinished__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar6 + 0x20) =
                                                       *(undefined8 *)puVar2;
                                                  thunk_FUN_02bb0e9c((undefined8 *)(lVar6 + 0x20));
                                                  uVar5 = *unaff_x27;
                                                  *(undefined4 *)(lVar6 + 0x18) = 0;
                                                  lVar3 = thunk_FUN_02b79644(uVar5);
                                                  FUN_037a5cd0(lVar3,*unaff_x20);
                                                  if (lVar3 != 0) {
                                                    lVar7 = *(long *)(lVar3 + 0x10);
                                                    uVar5 = *(undefined8 *)
                                                                                                                          
                                                  Method_Newtonsoft_Json_JsonTextReader_ProcessValueComma__
                                                  ;
                                                  lVar8 = *unaff_x29;
                                                  *(int *)(lVar3 + 0x1c) =
                                                       *(int *)(lVar3 + 0x1c) + 1;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *(uint *)(lVar3 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar5
                                                      ;
                                                      thunk_FUN_02bb0e9c();
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar3,uVar5,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar8 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar6 + 0x30) = lVar3;
                                                  thunk_FUN_02bb0e9c((long *)(lVar6 + 0x30),lVar3);
                                                  lVar3 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                            
                                                  Method_OVRSimpleJSON_JSONLazyCreator_Set<JSONNumber>__
                                                  );
                                                  FUN_037a5cd0(lVar3,*(undefined8 *)
                                                                                                                                            
                                                  Method_Newtonsoft_Json_Linq_JPropertyKeyedCollection_Contains__
                                                  );
                                                  lVar7 = thunk_FUN_02b79644(*unaff_x28);
                                                  FUN_05b9af48(lVar7,0);
                                                  if (lVar7 != 0) {
                                                    *(undefined8 *)(lVar7 + 0x18) =
                                                         *(undefined8 *)
                                                          Method_System_Xml_NameTable_Add__;
                                                    thunk_FUN_02bb0e9c();
                                                    *(undefined8 *)(lVar7 + 0x10) = *unaff_x26;
                                                    thunk_FUN_02bb0e9c();
                                                    if (lVar3 != 0) {
                                                      lVar8 = *(long *)(lVar3 + 0x10);
                                                      lVar9 = *unaff_x19;
                                                      *(int *)(lVar3 + 0x1c) =
                                                           *(int *)(lVar3 + 0x1c) + 1;
                                                      if (lVar8 != 0) {
                                                        uVar1 = *(uint *)(lVar3 + 0x18);
                                                        if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                          *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                                                          plVar4 = (long *)(lVar8 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                          *plVar4 = lVar7;
                                                          thunk_FUN_02bb0e9c(plVar4,lVar7);
                                                        }
                                                        else {
                                                          FUN_037a6538(lVar3,lVar7,
                                                                       *(undefined8 *)
                                                                        (*(long *)(*(long *)(lVar9 +
                                                                                            0x20) +
                                                                                  0xc0) + 0x70));
                                                        }
                                                        *(long *)(lVar6 + 0x28) = lVar3;
                                                        thunk_FUN_02bb0e9c((long *)(lVar6 + 0x28),
                                                                           lVar3);
                                                        lVar3 = *(long *)(unaff_x21 + 0x10);
                                                        *(int *)(unaff_x21 + 0x1c) =
                                                             *(int *)(unaff_x21 + 0x1c) + 1;
                                                        if (lVar3 != 0) {
                                                          uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                          if (uVar1 < *(uint *)(lVar3 + 0x18)) {
                                                            *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                            plVar4 = (long *)(lVar3 + (long)(int)
                                                  uVar1 * 8 + 0x20);
                                                  *plVar4 = lVar6;
                                                  thunk_FUN_02bb0e9c(plVar4,lVar6);
                                                  }
                                                  else {
                                                    FUN_037a6538();
                                                  }
                                                  lVar6 = thunk_FUN_02b79644(*unaff_x25);
                                                  FUN_05b9af50(lVar6,0);
                                                  puVar2 = 
                                                  Method_UnityEngine_InputSystem_Utilities_NamedValue_ApplyToObject__
                                                  ;
                                                  if (lVar6 != 0) {
                                                    *(undefined8 *)(lVar6 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Collections_Specialized_NameValueCollection_Add__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar6 + 0x20) =
                                                       *(undefined8 *)puVar2;
                                                  thunk_FUN_02bb0e9c((undefined8 *)(lVar6 + 0x20));
                                                  uVar5 = *unaff_x27;
                                                  *(undefined4 *)(lVar6 + 0x18) = 4;
                                                  lVar3 = thunk_FUN_02b79644(uVar5);
                                                  FUN_037a5cd0(lVar3,*unaff_x20);
                                                  if (lVar3 != 0) {
                                                    lVar7 = *(long *)(lVar3 + 0x10);
                                                    uVar5 = *(undefined8 *)
                                                             Method_System_Data_NameNode_ParseName__
                                                    ;
                                                    lVar8 = *unaff_x29;
                                                    *(int *)(lVar3 + 0x1c) =
                                                         *(int *)(lVar3 + 0x1c) + 1;
                                                    if (lVar7 != 0) {
                                                      uVar1 = *(uint *)(lVar3 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                        *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                                                        *(undefined8 *)
                                                         (lVar7 + (long)(int)uVar1 * 8 + 0x20) =
                                                             uVar5;
                                                        thunk_FUN_02bb0e9c();
                                                      }
                                                      else {
                                                        FUN_037a6538(lVar3,uVar5,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar8 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar6 + 0x30) = lVar3;
                                                  thunk_FUN_02bb0e9c((long *)(lVar6 + 0x30),lVar3);
                                                  lVar3 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                            
                                                  Method_OVRSimpleJSON_JSONLazyCreator_Set<JSONNumber>__
                                                  );
                                                  FUN_037a5cd0(lVar3,*(undefined8 *)
                                                                                                                                            
                                                  Method_Newtonsoft_Json_Linq_JPropertyKeyedCollection_Contains__
                                                  );
                                                  lVar7 = thunk_FUN_02b79644(*unaff_x28);
                                                  FUN_05b9af48(lVar7,0);
                                                  if (lVar7 != 0) {
                                                    *(undefined8 *)(lVar7 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Collections_Specialized_NameValueCollection_Set__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar7 + 0x10) = *unaff_x26;
                                                  thunk_FUN_02bb0e9c();
                                                  if (lVar3 != 0) {
                                                    lVar8 = *(long *)(lVar3 + 0x10);
                                                    lVar9 = *unaff_x19;
                                                    *(int *)(lVar3 + 0x1c) =
                                                         *(int *)(lVar3 + 0x1c) + 1;
                                                    if (lVar8 != 0) {
                                                      uVar1 = *(uint *)(lVar3 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                        *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                                                        plVar4 = (long *)(lVar8 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
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
                                                  lVar3 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar3 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar3 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar4 = (long *)(lVar3 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar4 = lVar6;
                                                      thunk_FUN_02bb0e9c(plVar4,lVar6);
                                                    }
                                                    else {
                                                      FUN_037a6538();
                                                    }
                                                    lVar6 = thunk_FUN_02b79644(*unaff_x25);
                                                    FUN_05b9af50(lVar6,0);
                                                    puVar2 = 
                                                  Method_System_Collections_Specialized_NameObjectCollectionBase_System_Collections_ICollection_CopyTo__
                                                  ;
                                                  if (lVar6 != 0) {
                                                    *(undefined8 *)(lVar6 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Collections_Specialized_NameObjectCollectionBase_BaseAdd__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar6 + 0x20) =
                                                       *(undefined8 *)puVar2;
                                                  thunk_FUN_02bb0e9c((undefined8 *)(lVar6 + 0x20));
                                                  uVar5 = *unaff_x27;
                                                  *(undefined4 *)(lVar6 + 0x18) = 4;
                                                  lVar3 = thunk_FUN_02b79644(uVar5);
                                                  FUN_037a5cd0(lVar3,*unaff_x20);
                                                  if (lVar3 != 0) {
                                                    lVar7 = *(long *)(lVar3 + 0x10);
                                                    uVar5 = *(undefined8 *)
                                                                                                                          
                                                  Method_System_Collections_Specialized_NameObjectCollectionBase_BaseRemove__
                                                  ;
                                                  lVar8 = *unaff_x29;
                                                  *(int *)(lVar3 + 0x1c) =
                                                       *(int *)(lVar3 + 0x1c) + 1;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *(uint *)(lVar3 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar5
                                                      ;
                                                      thunk_FUN_02bb0e9c();
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar3,uVar5,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar8 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar6 + 0x30) = lVar3;
                                                  thunk_FUN_02bb0e9c((long *)(lVar6 + 0x30),lVar3);
                                                  lVar3 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                            
                                                  Method_OVRSimpleJSON_JSONLazyCreator_Set<JSONNumber>__
                                                  );
                                                  FUN_037a5cd0(lVar3,*(undefined8 *)
                                                                                                                                            
                                                  Method_Newtonsoft_Json_Linq_JPropertyKeyedCollection_Contains__
                                                  );
                                                  lVar7 = thunk_FUN_02b79644(*unaff_x28);
                                                  FUN_05b9af48(lVar7,0);
                                                  if (lVar7 != 0) {
                                                    *(undefined8 *)(lVar7 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Xml_Schema_NamespaceListNode_ConstructPos__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar7 + 0x10) = *unaff_x26;
                                                  thunk_FUN_02bb0e9c();
                                                  if (lVar3 != 0) {
                                                    lVar8 = *(long *)(lVar3 + 0x10);
                                                    lVar9 = *unaff_x19;
                                                    *(int *)(lVar3 + 0x1c) =
                                                         *(int *)(lVar3 + 0x1c) + 1;
                                                    if (lVar8 != 0) {
                                                      uVar1 = *(uint *)(lVar3 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                        *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                                                        plVar4 = (long *)(lVar8 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
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
                                                  lVar3 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar3 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar3 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar4 = (long *)(lVar3 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar4 = lVar6;
                                                      thunk_FUN_02bb0e9c(plVar4,lVar6);
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
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
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


