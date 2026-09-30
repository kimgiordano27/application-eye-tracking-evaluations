/*
FUNCTION_NAME: UnityEngine.TextEditingUtilities$$PerformOperation
ENTRY_POINT: 05bf5240
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 89
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;data_collection;telemetry;structure_combo;keyword_support
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;strong_file_logging_hits_2;telemetry_or_network_hits_5;source_validity_pose_sink_structure;eye_or_gaze_keyword_boost_only;negative_framework_namespace_without_eye_use_flow;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void UnityEngine_TextEditingUtilities__PerformOperation
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
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
  
  if (param_1 != 0) {
    uVar1 = *(uint *)(unaff_x23 + 0x18);
    if (uVar1 < *(uint *)(param_1 + 0x18)) {
      *(uint *)(unaff_x23 + 0x18) = uVar1 + 1;
      *(undefined8 *)(param_1 + (long)(int)uVar1 * 8 + 0x20) = param_3;
      thunk_FUN_02bb0e9c();
    }
    else {
      FUN_037a6538();
    }
    *(long *)(unaff_x22 + 0x30) = unaff_x23;
    thunk_FUN_02bb0e9c();
    lVar3 = thunk_FUN_02b79644(*(undefined8 *)Method_OVRSimpleJSON_JSONLazyCreator_Set<JSONNumber>__
                              );
    FUN_037a5cd0(lVar3,*(undefined8 *)
                        Method_Newtonsoft_Json_Linq_JPropertyKeyedCollection_Contains__);
    lVar4 = thunk_FUN_02b79644(*unaff_x28);
    FUN_05b9af48(lVar4,0);
    if (lVar4 != 0) {
      *(undefined8 *)(lVar4 + 0x18) = *(undefined8 *)Method_LitJson_JsonData_EnsureDictionary__;
      thunk_FUN_02bb0e9c();
      *(undefined8 *)(lVar4 + 0x10) = *unaff_x26;
      thunk_FUN_02bb0e9c();
      if (lVar3 != 0) {
        lVar7 = *(long *)(lVar3 + 0x10);
        lVar8 = *unaff_x19;
        *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
        if (lVar7 != 0) {
          uVar1 = *(uint *)(lVar3 + 0x18);
          if (uVar1 < *(uint *)(lVar7 + 0x18)) {
            *(uint *)(lVar3 + 0x18) = uVar1 + 1;
            plVar5 = (long *)(lVar7 + (long)(int)uVar1 * 8 + 0x20);
            *plVar5 = lVar4;
            thunk_FUN_02bb0e9c(plVar5,lVar4);
          }
          else {
            FUN_037a6538(lVar3,lVar4,
                         *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
          }
          *(long *)(unaff_x22 + 0x28) = lVar3;
          thunk_FUN_02bb0e9c((long *)(unaff_x22 + 0x28),lVar3);
          lVar3 = *(long *)(unaff_x21 + 0x10);
          *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
          if (lVar3 != 0) {
            uVar1 = *(uint *)(unaff_x21 + 0x18);
            if (uVar1 < *(uint *)(lVar3 + 0x18)) {
              *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
              *(long *)(lVar3 + (long)(int)uVar1 * 8 + 0x20) = unaff_x22;
              thunk_FUN_02bb0e9c();
            }
            else {
              FUN_037a6538();
            }
            lVar3 = thunk_FUN_02b79644(*unaff_x25);
            FUN_05b9af50(lVar3,0);
            puVar2 = Method_Newtonsoft_Json_JsonSerializer_set_MetadataPropertyHandling__;
            if (lVar3 != 0) {
              *(undefined8 *)(lVar3 + 0x10) =
                   *(undefined8 *)
                    Method_Newtonsoft_Json_Serialization_JsonSerializerInternalBase_GetErrorContext__
              ;
              thunk_FUN_02bb0e9c();
              *(undefined8 *)(lVar3 + 0x20) = *(undefined8 *)puVar2;
              thunk_FUN_02bb0e9c((undefined8 *)(lVar3 + 0x20));
              uVar6 = *unaff_x27;
              *(undefined4 *)(lVar3 + 0x18) = 4;
              lVar4 = thunk_FUN_02b79644(uVar6);
              FUN_037a5cd0(lVar4,*unaff_x20);
              if (lVar4 != 0) {
                lVar7 = *(long *)(lVar4 + 0x10);
                uVar6 = *(undefined8 *)
                         Method_UnityEngine_InputSystem_InputControlExtensions_CopyState__;
                lVar8 = *unaff_x29;
                *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                if (lVar7 != 0) {
                  uVar1 = *(uint *)(lVar4 + 0x18);
                  if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                    *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                    *(undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar6;
                    thunk_FUN_02bb0e9c();
                  }
                  else {
                    FUN_037a6538(lVar4,uVar6,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
                  }
                  *(long *)(lVar3 + 0x30) = lVar4;
                  thunk_FUN_02bb0e9c((long *)(lVar3 + 0x30),lVar4);
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
                         *(undefined8 *)Method_Newtonsoft_Json_JsonReader_set_FloatParseHandling__;
                    thunk_FUN_02bb0e9c();
                    *(undefined8 *)(lVar7 + 0x10) = *unaff_x26;
                    thunk_FUN_02bb0e9c();
                    if (lVar4 != 0) {
                      lVar8 = *(long *)(lVar4 + 0x10);
                      lVar9 = *unaff_x19;
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
                        *(long *)(lVar3 + 0x28) = lVar4;
                        thunk_FUN_02bb0e9c((long *)(lVar3 + 0x28),lVar4);
                        lVar4 = *(long *)(unaff_x21 + 0x10);
                        *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
                        if (lVar4 != 0) {
                          uVar1 = *(uint *)(unaff_x21 + 0x18);
                          if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                            *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                            plVar5 = (long *)(lVar4 + (long)(int)uVar1 * 8 + 0x20);
                            *plVar5 = lVar3;
                            thunk_FUN_02bb0e9c(plVar5,lVar3);
                          }
                          else {
                            FUN_037a6538();
                          }
                          lVar3 = thunk_FUN_02b79644(*unaff_x25);
                          FUN_05b9af50(lVar3,0);
                          puVar2 = 
                          Method_System_Collections_Specialized_NameObjectCollectionBase_GetObjectData__
                          ;
                          if (lVar3 != 0) {
                            *(undefined8 *)(lVar3 + 0x10) =
                                 *(undefined8 *)
                                  Method_System_Collections_Specialized_NameObjectCollectionBase_BaseSet__
                            ;
                            thunk_FUN_02bb0e9c();
                            *(undefined8 *)(lVar3 + 0x20) = *(undefined8 *)puVar2;
                            thunk_FUN_02bb0e9c((undefined8 *)(lVar3 + 0x20));
                            uVar6 = *unaff_x27;
                            *(undefined4 *)(lVar3 + 0x18) = 1;
                            lVar4 = thunk_FUN_02b79644(uVar6);
                            FUN_037a5cd0(lVar4,*unaff_x20);
                            if (lVar4 != 0) {
                              lVar7 = *(long *)(lVar4 + 0x10);
                              uVar6 = *(undefined8 *)
                                       Method_UnityEngine_InputSystem_Utilities_NamedValue_ApplyAllToObject<ReadOnlyArray<NamedValue>>__
                              ;
                              lVar8 = *unaff_x29;
                              *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                              if (lVar7 != 0) {
                                uVar1 = *(uint *)(lVar4 + 0x18);
                                if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                  *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                  *(undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar6;
                                  thunk_FUN_02bb0e9c();
                                }
                                else {
                                  FUN_037a6538(lVar4,uVar6,
                                               *(undefined8 *)
                                                (*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
                                }
                                *(long *)(lVar3 + 0x30) = lVar4;
                                thunk_FUN_02bb0e9c((long *)(lVar3 + 0x30),lVar4);
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
                                        Method_UnityEngine_InputSystem_Utilities_NamedValue_ParseMultiple__
                                  ;
                                  thunk_FUN_02bb0e9c();
                                  *(undefined8 *)(lVar7 + 0x10) = *unaff_x26;
                                  thunk_FUN_02bb0e9c();
                                  if (lVar4 != 0) {
                                    lVar8 = *(long *)(lVar4 + 0x10);
                                    lVar9 = *unaff_x19;
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
                                                      (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) +
                                                      0x70));
                                      }
                                      *(long *)(lVar3 + 0x28) = lVar4;
                                      thunk_FUN_02bb0e9c((long *)(lVar3 + 0x28),lVar4);
                                      lVar4 = *(long *)(unaff_x21 + 0x10);
                                      *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
                                      if (lVar4 != 0) {
                                        uVar1 = *(uint *)(unaff_x21 + 0x18);
                                        if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                                          *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                          plVar5 = (long *)(lVar4 + (long)(int)uVar1 * 8 + 0x20);
                                          *plVar5 = lVar3;
                                          thunk_FUN_02bb0e9c(plVar5,lVar3);
                                        }
                                        else {
                                          FUN_037a6538();
                                        }
                                        lVar3 = thunk_FUN_02b79644(*unaff_x25);
                                        FUN_05b9af50(lVar3,0);
                                        puVar2 = 
                                        Method_System_Xml_Schema_NamespaceListNode_get_IsNullable__;
                                        if (lVar3 != 0) {
                                          *(undefined8 *)(lVar3 + 0x10) =
                                               *(undefined8 *)
                                                Method_System_Security_NamedPermissionSet_set_Name__
                                          ;
                                          thunk_FUN_02bb0e9c();
                                          *(undefined8 *)(lVar3 + 0x20) = *(undefined8 *)puVar2;
                                          thunk_FUN_02bb0e9c((undefined8 *)(lVar3 + 0x20));
                                          uVar6 = *unaff_x27;
                                          *(undefined4 *)(lVar3 + 0x18) = 1;
                                          lVar4 = thunk_FUN_02b79644(uVar6);
                                          FUN_037a5cd0(lVar4,*unaff_x20);
                                          if (lVar4 != 0) {
                                            lVar7 = *(long *)(lVar4 + 0x10);
                                            uVar6 = *(undefined8 *)
                                                                                                          
                                                  Method_System_Xml_Schema_NamespaceList_get_Enumerate__
                                            ;
                                            lVar8 = *unaff_x29;
                                            *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                                            if (lVar7 != 0) {
                                              uVar1 = *(uint *)(lVar4 + 0x18);
                                              if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                *(undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20)
                                                     = uVar6;
                                                thunk_FUN_02bb0e9c();
                                              }
                                              else {
                                                FUN_037a6538(lVar4,uVar6,
                                                             *(undefined8 *)
                                                              (*(long *)(*(long *)(lVar8 + 0x20) +
                                                                        0xc0) + 0x70));
                                              }
                                              *(long *)(lVar3 + 0x30) = lVar4;
                                              thunk_FUN_02bb0e9c((long *)(lVar3 + 0x30),lVar4);
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
                                                                                                            
                                                  Method_System_Collections_Specialized_NameObjectCollectionBase_OnDeserialization__
                                                ;
                                                thunk_FUN_02bb0e9c();
                                                *(undefined8 *)(lVar7 + 0x10) = *unaff_x26;
                                                thunk_FUN_02bb0e9c();
                                                if (lVar4 != 0) {
                                                  lVar8 = *(long *)(lVar4 + 0x10);
                                                  lVar9 = *unaff_x19;
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
                                                  *(long *)(lVar3 + 0x28) = lVar4;
                                                  thunk_FUN_02bb0e9c((long *)(lVar3 + 0x28),lVar4);
                                                  lVar4 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar4 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar5 = (long *)(lVar4 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar5 = lVar3;
                                                      thunk_FUN_02bb0e9c(plVar5,lVar3);
                                                    }
                                                    else {
                                                      FUN_037a6538();
                                                    }
                                                    lVar3 = thunk_FUN_02b79644(*unaff_x25);
                                                    FUN_05b9af50(lVar3,0);
                                                    puVar2 = 
                                                  Method_Newtonsoft_Json_Serialization_JsonTypeReflector_GetAttribute<DataMemberAttribute>__
                                                  ;
                                                  if (lVar3 != 0) {
                                                    *(undefined8 *)(lVar3 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Newtonsoft_Json_JsonTextReader_ParseUnquotedProperty__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar3 + 0x20) =
                                                       *(undefined8 *)puVar2;
                                                  thunk_FUN_02bb0e9c((undefined8 *)(lVar3 + 0x20));
                                                  uVar6 = *unaff_x27;
                                                  *(undefined4 *)(lVar3 + 0x18) = 1;
                                                  lVar4 = thunk_FUN_02b79644(uVar6);
                                                  FUN_037a5cd0(lVar4,*unaff_x20);
                                                  if (lVar4 != 0) {
                                                    lVar7 = *(long *)(lVar4 + 0x10);
                                                    uVar6 = *(undefined8 *)
                                                                                                                          
                                                  Method_Newtonsoft_Json_JsonTextReader_ReadUnquotedPropertyReportIfDone__
                                                  ;
                                                  lVar8 = *unaff_x29;
                                                  *(int *)(lVar4 + 0x1c) =
                                                       *(int *)(lVar4 + 0x1c) + 1;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *(uint *)(lVar4 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar6
                                                      ;
                                                      thunk_FUN_02bb0e9c();
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar4,uVar6,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar8 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar3 + 0x30) = lVar4;
                                                  thunk_FUN_02bb0e9c((long *)(lVar3 + 0x30),lVar4);
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
                                                          Method_System_Xml_NameTable_Get__;
                                                    thunk_FUN_02bb0e9c();
                                                    *(undefined8 *)(lVar7 + 0x10) = *unaff_x26;
                                                    thunk_FUN_02bb0e9c();
                                                    if (lVar4 != 0) {
                                                      lVar8 = *(long *)(lVar4 + 0x10);
                                                      lVar9 = *unaff_x19;
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
                                                        *(long *)(lVar3 + 0x28) = lVar4;
                                                        thunk_FUN_02bb0e9c((long *)(lVar3 + 0x28),
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
                                                  *plVar5 = lVar3;
                                                  thunk_FUN_02bb0e9c(plVar5,lVar3);
                                                  }
                                                  else {
                                                    FUN_037a6538();
                                                  }
                                                  lVar3 = thunk_FUN_02b79644(*unaff_x25);
                                                  FUN_05b9af50(lVar3,0);
                                                  puVar2 = 
                                                  Method_Newtonsoft_Json_JsonTextReader_ParseConstructor__
                                                  ;
                                                  if (lVar3 != 0) {
                                                    *(undefined8 *)(lVar3 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Newtonsoft_Json_JsonTextWriter_WriteEnd__;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar3 + 0x20) =
                                                       *(undefined8 *)puVar2;
                                                  thunk_FUN_02bb0e9c((undefined8 *)(lVar3 + 0x20));
                                                  uVar6 = *unaff_x27;
                                                  *(undefined4 *)(lVar3 + 0x18) = 1;
                                                  lVar4 = thunk_FUN_02b79644(uVar6);
                                                  FUN_037a5cd0(lVar4,*unaff_x20);
                                                  if (lVar4 != 0) {
                                                    lVar7 = *(long *)(lVar4 + 0x10);
                                                    uVar6 = *(undefined8 *)
                                                                                                                          
                                                  Method_Newtonsoft_Json_JsonTextReader_ReadAsBytes__
                                                  ;
                                                  lVar8 = *unaff_x29;
                                                  *(int *)(lVar4 + 0x1c) =
                                                       *(int *)(lVar4 + 0x1c) + 1;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *(uint *)(lVar4 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar6
                                                      ;
                                                      thunk_FUN_02bb0e9c();
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar4,uVar6,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar8 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar3 + 0x30) = lVar4;
                                                  thunk_FUN_02bb0e9c((long *)(lVar3 + 0x30),lVar4);
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
                                                                                                                    
                                                  Method_UnityEngine_Rendering_Universal_NativeArrayExtensions_UnsafeElementAt<ShadowSliceData>__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar7 + 0x10) = *unaff_x26;
                                                  thunk_FUN_02bb0e9c();
                                                  if (lVar4 != 0) {
                                                    lVar8 = *(long *)(lVar4 + 0x10);
                                                    lVar9 = *unaff_x19;
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
                                                  *(long *)(lVar3 + 0x28) = lVar4;
                                                  thunk_FUN_02bb0e9c((long *)(lVar3 + 0x28),lVar4);
                                                  lVar4 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar4 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar5 = (long *)(lVar4 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar5 = lVar3;
                                                      thunk_FUN_02bb0e9c(plVar5,lVar3);
                                                    }
                                                    else {
                                                      FUN_037a6538();
                                                    }
                                                    lVar3 = thunk_FUN_02b79644(*unaff_x25);
                                                    FUN_05b9af50(lVar3,0);
                                                    puVar2 = 
                                                  Method_Newtonsoft_Json_JsonTextReader_HandleNull__
                                                  ;
                                                  if (lVar3 != 0) {
                                                    *(undefined8 *)(lVar3 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Newtonsoft_Json_JsonTextWriter__ctor__;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar3 + 0x20) =
                                                       *(undefined8 *)puVar2;
                                                  thunk_FUN_02bb0e9c((undefined8 *)(lVar3 + 0x20));
                                                  uVar6 = *unaff_x27;
                                                  *(undefined4 *)(lVar3 + 0x18) = 0;
                                                  lVar4 = thunk_FUN_02b79644(uVar6);
                                                  FUN_037a5cd0(lVar4,*unaff_x20);
                                                  if (lVar4 != 0) {
                                                    lVar7 = *(long *)(lVar4 + 0x10);
                                                    uVar6 = *(undefined8 *)
                                                                                                                          
                                                  Method_Newtonsoft_Json_Serialization_JsonSerializerInternalWriter_GetReference__
                                                  ;
                                                  lVar8 = *unaff_x29;
                                                  *(int *)(lVar4 + 0x1c) =
                                                       *(int *)(lVar4 + 0x1c) + 1;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *(uint *)(lVar4 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar6
                                                      ;
                                                      thunk_FUN_02bb0e9c();
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar4,uVar6,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar8 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar3 + 0x30) = lVar4;
                                                  thunk_FUN_02bb0e9c((long *)(lVar3 + 0x30),lVar4);
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
                                                          Method_System_Data_NameNode_Eval__;
                                                    thunk_FUN_02bb0e9c();
                                                    *(undefined8 *)(lVar7 + 0x10) = *unaff_x26;
                                                    thunk_FUN_02bb0e9c();
                                                    if (lVar4 != 0) {
                                                      lVar8 = *(long *)(lVar4 + 0x10);
                                                      lVar9 = *unaff_x19;
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
                                                        *(long *)(lVar3 + 0x28) = lVar4;
                                                        thunk_FUN_02bb0e9c((long *)(lVar3 + 0x28),
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
                                                  *plVar5 = lVar3;
                                                  thunk_FUN_02bb0e9c(plVar5,lVar3);
                                                  }
                                                  else {
                                                    FUN_037a6538();
                                                  }
                                                  lVar3 = thunk_FUN_02b79644(*unaff_x25);
                                                  FUN_05b9af50(lVar3,0);
                                                  puVar2 = 
                                                  Method_Newtonsoft_Json_Serialization_JsonSerializerInternalWriter_SerializeISerializable__
                                                  ;
                                                  if (lVar3 != 0) {
                                                    *(undefined8 *)(lVar3 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Newtonsoft_Json_JsonTextReader_ReadFinished__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar3 + 0x20) =
                                                       *(undefined8 *)puVar2;
                                                  thunk_FUN_02bb0e9c((undefined8 *)(lVar3 + 0x20));
                                                  uVar6 = *unaff_x27;
                                                  *(undefined4 *)(lVar3 + 0x18) = 0;
                                                  lVar4 = thunk_FUN_02b79644(uVar6);
                                                  FUN_037a5cd0(lVar4,*unaff_x20);
                                                  if (lVar4 != 0) {
                                                    lVar7 = *(long *)(lVar4 + 0x10);
                                                    uVar6 = *(undefined8 *)
                                                                                                                          
                                                  Method_Newtonsoft_Json_JsonTextReader_ProcessValueComma__
                                                  ;
                                                  lVar8 = *unaff_x29;
                                                  *(int *)(lVar4 + 0x1c) =
                                                       *(int *)(lVar4 + 0x1c) + 1;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *(uint *)(lVar4 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar6
                                                      ;
                                                      thunk_FUN_02bb0e9c();
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar4,uVar6,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar8 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar3 + 0x30) = lVar4;
                                                  thunk_FUN_02bb0e9c((long *)(lVar3 + 0x30),lVar4);
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
                                                          Method_System_Xml_NameTable_Add__;
                                                    thunk_FUN_02bb0e9c();
                                                    *(undefined8 *)(lVar7 + 0x10) = *unaff_x26;
                                                    thunk_FUN_02bb0e9c();
                                                    if (lVar4 != 0) {
                                                      lVar8 = *(long *)(lVar4 + 0x10);
                                                      lVar9 = *unaff_x19;
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
                                                        *(long *)(lVar3 + 0x28) = lVar4;
                                                        thunk_FUN_02bb0e9c((long *)(lVar3 + 0x28),
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
                                                  *plVar5 = lVar3;
                                                  thunk_FUN_02bb0e9c(plVar5,lVar3);
                                                  }
                                                  else {
                                                    FUN_037a6538();
                                                  }
                                                  lVar3 = thunk_FUN_02b79644(*unaff_x25);
                                                  FUN_05b9af50(lVar3,0);
                                                  puVar2 = 
                                                  Method_UnityEngine_InputSystem_Utilities_NamedValue_ApplyToObject__
                                                  ;
                                                  if (lVar3 != 0) {
                                                    *(undefined8 *)(lVar3 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Collections_Specialized_NameValueCollection_Add__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar3 + 0x20) =
                                                       *(undefined8 *)puVar2;
                                                  thunk_FUN_02bb0e9c((undefined8 *)(lVar3 + 0x20));
                                                  uVar6 = *unaff_x27;
                                                  *(undefined4 *)(lVar3 + 0x18) = 4;
                                                  lVar4 = thunk_FUN_02b79644(uVar6);
                                                  FUN_037a5cd0(lVar4,*unaff_x20);
                                                  if (lVar4 != 0) {
                                                    lVar7 = *(long *)(lVar4 + 0x10);
                                                    uVar6 = *(undefined8 *)
                                                             Method_System_Data_NameNode_ParseName__
                                                    ;
                                                    lVar8 = *unaff_x29;
                                                    *(int *)(lVar4 + 0x1c) =
                                                         *(int *)(lVar4 + 0x1c) + 1;
                                                    if (lVar7 != 0) {
                                                      uVar1 = *(uint *)(lVar4 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                        *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                        *(undefined8 *)
                                                         (lVar7 + (long)(int)uVar1 * 8 + 0x20) =
                                                             uVar6;
                                                        thunk_FUN_02bb0e9c();
                                                      }
                                                      else {
                                                        FUN_037a6538(lVar4,uVar6,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar8 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar3 + 0x30) = lVar4;
                                                  thunk_FUN_02bb0e9c((long *)(lVar3 + 0x30),lVar4);
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
                                                                                                                    
                                                  Method_System_Collections_Specialized_NameValueCollection_Set__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar7 + 0x10) = *unaff_x26;
                                                  thunk_FUN_02bb0e9c();
                                                  if (lVar4 != 0) {
                                                    lVar8 = *(long *)(lVar4 + 0x10);
                                                    lVar9 = *unaff_x19;
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
                                                  *(long *)(lVar3 + 0x28) = lVar4;
                                                  thunk_FUN_02bb0e9c((long *)(lVar3 + 0x28),lVar4);
                                                  lVar4 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar4 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar5 = (long *)(lVar4 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar5 = lVar3;
                                                      thunk_FUN_02bb0e9c(plVar5,lVar3);
                                                    }
                                                    else {
                                                      FUN_037a6538();
                                                    }
                                                    lVar3 = thunk_FUN_02b79644(*unaff_x25);
                                                    FUN_05b9af50(lVar3,0);
                                                    puVar2 = 
                                                  Method_System_Collections_Specialized_NameObjectCollectionBase_System_Collections_ICollection_CopyTo__
                                                  ;
                                                  if (lVar3 != 0) {
                                                    *(undefined8 *)(lVar3 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Collections_Specialized_NameObjectCollectionBase_BaseAdd__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar3 + 0x20) =
                                                       *(undefined8 *)puVar2;
                                                  thunk_FUN_02bb0e9c((undefined8 *)(lVar3 + 0x20));
                                                  uVar6 = *unaff_x27;
                                                  *(undefined4 *)(lVar3 + 0x18) = 4;
                                                  lVar4 = thunk_FUN_02b79644(uVar6);
                                                  FUN_037a5cd0(lVar4,*unaff_x20);
                                                  if (lVar4 != 0) {
                                                    lVar7 = *(long *)(lVar4 + 0x10);
                                                    uVar6 = *(undefined8 *)
                                                                                                                          
                                                  Method_System_Collections_Specialized_NameObjectCollectionBase_BaseRemove__
                                                  ;
                                                  lVar8 = *unaff_x29;
                                                  *(int *)(lVar4 + 0x1c) =
                                                       *(int *)(lVar4 + 0x1c) + 1;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *(uint *)(lVar4 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar6
                                                      ;
                                                      thunk_FUN_02bb0e9c();
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar4,uVar6,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar8 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar3 + 0x30) = lVar4;
                                                  thunk_FUN_02bb0e9c((long *)(lVar3 + 0x30),lVar4);
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
                                                                                                                    
                                                  Method_System_Xml_Schema_NamespaceListNode_ConstructPos__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar7 + 0x10) = *unaff_x26;
                                                  thunk_FUN_02bb0e9c();
                                                  if (lVar4 != 0) {
                                                    lVar8 = *(long *)(lVar4 + 0x10);
                                                    lVar9 = *unaff_x19;
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
                                                  *(long *)(lVar3 + 0x28) = lVar4;
                                                  thunk_FUN_02bb0e9c((long *)(lVar3 + 0x28),lVar4);
                                                  lVar4 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar4 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar5 = (long *)(lVar4 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar5 = lVar3;
                                                      thunk_FUN_02bb0e9c(plVar5,lVar3);
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
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


