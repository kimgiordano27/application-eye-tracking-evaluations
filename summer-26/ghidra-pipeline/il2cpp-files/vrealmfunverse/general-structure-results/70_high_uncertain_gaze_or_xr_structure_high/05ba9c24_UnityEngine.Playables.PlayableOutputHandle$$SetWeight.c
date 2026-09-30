/*
FUNCTION_NAME: UnityEngine.Playables.PlayableOutputHandle$$SetWeight
ENTRY_POINT: 05ba9c24
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 73
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: weak_source_state;validity_gate;pose_vector;ray_interaction;data_collection;telemetry;structure_combo;keyword_support
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;ray_or_cast_sink_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_21;source_validity_pose_sink_structure;eye_or_gaze_keyword_boost_only;negative_framework_namespace_without_eye_use_flow;negative_generic_transform_raycast_without_eye_source_or_attempt;functionality_data_collection_or_telemetry_hits_3
*/


void UnityEngine_Playables_PlayableOutputHandle__SetWeight(undefined8 *param_1)

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
  long *plVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long unaff_x20;
  undefined8 *puVar18;
  long unaff_x25;
  undefined8 *puVar19;
  long unaff_x29;
  
  puVar6 = Method_OVRSimpleJSON_JSONLazyCreator_Set<JSONArray>__;
  puVar5 = Method_Newtonsoft_Json_Linq_JProperty_SetItem__;
  puVar4 = Method_Newtonsoft_Json_Linq_JProperty_GetItem__;
  puVar3 = PTR_DAT_06318790;
  puVar2 = PTR_DAT_06312a80;
  puVar18 = *(undefined8 **)(unaff_x20 + 0x440);
  puVar19 = *(undefined8 **)(unaff_x25 + 0x510);
  *(undefined8 *)(unaff_x29 + 0x10) = *param_1;
  thunk_FUN_02bb0e9c();
  *(undefined8 *)(unaff_x29 + 0x18) = *puVar18;
  thunk_FUN_02bb0e9c();
  *(undefined8 *)(unaff_x29 + 0x30) = *puVar19;
  thunk_FUN_02bb0e9c();
  *(undefined8 *)(unaff_x29 + 0x38) = *(undefined8 *)puVar3;
  thunk_FUN_02bb0e9c();
  *(undefined8 *)(unaff_x29 + 0x40) = *(undefined8 *)puVar2;
  thunk_FUN_02bb0e9c();
  lVar9 = thunk_FUN_02b79644(*(undefined8 *)puVar6);
  FUN_037a5cd0(lVar9,*(undefined8 *)puVar5);
  lVar10 = thunk_FUN_02b79644(*(undefined8 *)puVar4);
  FUN_04dbdb8c(lVar10,0);
  if (lVar10 != 0) {
    *(undefined8 *)(lVar10 + 0x18) = *(undefined8 *)Method_Newtonsoft_Json_Linq_JToken_op_Explicit__
    ;
    *(undefined4 *)(lVar10 + 0x10) = 0x164;
    thunk_FUN_02bb0e9c();
    puVar2 = Method_Newtonsoft_Json_Linq_JProperty_InsertItem__;
    if (lVar9 != 0) {
      lVar13 = *(long *)(lVar9 + 0x10);
      lVar14 = *(long *)Method_Newtonsoft_Json_Linq_JProperty_InsertItem__;
      *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
      if (lVar13 != 0) {
        uVar1 = *(uint *)(lVar9 + 0x18);
        if (uVar1 < *(uint *)(lVar13 + 0x18)) {
          *(uint *)(lVar9 + 0x18) = uVar1 + 1;
          plVar11 = (long *)(lVar13 + (long)(int)uVar1 * 8 + 0x20);
          *plVar11 = lVar10;
          thunk_FUN_02bb0e9c(plVar11,lVar10);
        }
        else {
          FUN_037a6538(lVar9,lVar10,
                       *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
        }
        lVar10 = thunk_FUN_02b79644(*(undefined8 *)puVar4);
        FUN_04dbdb8c(lVar10,0);
        if (lVar10 != 0) {
          *(undefined8 *)(lVar10 + 0x18) =
               *(undefined8 *)Method_Newtonsoft_Json_Linq_JToken_Replace__;
          *(undefined4 *)(lVar10 + 0x10) = 0x264;
          thunk_FUN_02bb0e9c();
          lVar13 = *(long *)(lVar9 + 0x10);
          lVar14 = *(long *)puVar2;
          *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
          puVar4 = Method_OVRSimpleJSON_JSONLazyCreator_Set<JSONBool>__;
          puVar3 = Method_Newtonsoft_Json_Linq_JProperty_RemoveItemAt__;
          puVar2 = Method_Newtonsoft_Json_Linq_JProperty_ClearItems__;
          if (lVar13 != 0) {
            uVar1 = *(uint *)(lVar9 + 0x18);
            if (uVar1 < *(uint *)(lVar13 + 0x18)) {
              *(uint *)(lVar9 + 0x18) = uVar1 + 1;
              plVar11 = (long *)(lVar13 + (long)(int)uVar1 * 8 + 0x20);
              *plVar11 = lVar10;
              thunk_FUN_02bb0e9c(plVar11,lVar10);
            }
            else {
              FUN_037a6538(lVar9,lVar10,
                           *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
            }
            *(long *)(unaff_x29 + 0x20) = lVar9;
            thunk_FUN_02bb0e9c((long *)(unaff_x29 + 0x20),lVar9);
            lVar9 = thunk_FUN_02b79644(*(undefined8 *)puVar4);
            FUN_037a5cd0(lVar9,*(undefined8 *)puVar3);
            lVar10 = thunk_FUN_02b79644(*(undefined8 *)puVar2);
            FUN_04dbdb8c(lVar10,0);
            puVar5 = Method_System_Linq_Enumerable_Empty<Type>__;
            puVar4 = PTR_DAT_063145b8;
            puVar3 = PTR_DAT_063145b0;
            if (lVar10 != 0) {
              *(undefined8 *)(lVar10 + 0x10) =
                   *(undefined8 *)System_Collections_Generic_Queue<JobHandle>_TypeInfo;
              thunk_FUN_02bb0e9c();
              *(undefined8 *)(lVar10 + 0x20) = *(undefined8 *)puVar5;
              thunk_FUN_02bb0e9c((undefined8 *)(lVar10 + 0x20));
              uVar12 = *(undefined8 *)puVar3;
              *(undefined4 *)(lVar10 + 0x18) = 2;
              lVar13 = thunk_FUN_02b79644(uVar12);
              FUN_037a5cd0(lVar13,*(undefined8 *)puVar4);
              puVar5 = PTR_DAT_063173b8;
              if (lVar13 != 0) {
                lVar14 = *(long *)(lVar13 + 0x10);
                uVar12 = *(undefined8 *)
                          Method_System_Linq_Enumerable_Select<KeyValuePair<string,_JsonParser_JsonValue>,_string>__
                ;
                lVar15 = *(long *)PTR_DAT_063173b8;
                *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
                puVar6 = Method_Newtonsoft_Json_Linq_JObject_ValidateToken__;
                if (lVar14 != 0) {
                  uVar1 = *(uint *)(lVar13 + 0x18);
                  if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                    *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                    *(undefined8 *)(lVar14 + (long)(int)uVar1 * 8 + 0x20) = uVar12;
                    thunk_FUN_02bb0e9c();
                  }
                  else {
                    FUN_037a6538(lVar13,uVar12,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70))
                    ;
                  }
                  *(long *)(lVar10 + 0x30) = lVar13;
                  thunk_FUN_02bb0e9c((long *)(lVar10 + 0x30),lVar13);
                  lVar13 = thunk_FUN_02b79644(*(undefined8 *)
                                               Method_OVRSimpleJSON_JSONLazyCreator_Set<JSONNumber>__
                                             );
                  FUN_037a5cd0(lVar13,*(undefined8 *)
                                       Method_Newtonsoft_Json_Linq_JPropertyKeyedCollection_Contains__
                              );
                  lVar14 = thunk_FUN_02b79644(*(undefined8 *)puVar6);
                  FUN_04dbdb8c(lVar14,0);
                  if (lVar14 != 0) {
                    *(undefined8 *)(lVar14 + 0x18) =
                         *(undefined8 *)
                          Method_Newtonsoft_Json_JsonSerializer_set_DefaultValueHandling__;
                    thunk_FUN_02bb0e9c();
                    *(undefined8 *)(lVar14 + 0x10) = *puVar19;
                    thunk_FUN_02bb0e9c();
                    puVar7 = Method_Newtonsoft_Json_Linq_JProperty_Load__;
                    if (lVar13 != 0) {
                      lVar15 = *(long *)(lVar13 + 0x10);
                      lVar16 = *(long *)Method_Newtonsoft_Json_Linq_JProperty_Load__;
                      *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
                      if (lVar15 != 0) {
                        uVar1 = *(uint *)(lVar13 + 0x18);
                        if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                          *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                          plVar11 = (long *)(lVar15 + (long)(int)uVar1 * 8 + 0x20);
                          *plVar11 = lVar14;
                          thunk_FUN_02bb0e9c(plVar11,lVar14);
                        }
                        else {
                          FUN_037a6538(lVar13,lVar14,
                                       *(undefined8 *)
                                        (*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
                        }
                        *(long *)(lVar10 + 0x28) = lVar13;
                        thunk_FUN_02bb0e9c((long *)(lVar10 + 0x28),lVar13);
                        if (lVar9 != 0) {
                          lVar13 = *(long *)(lVar9 + 0x10);
                          lVar14 = *(long *)Method_Newtonsoft_Json_Linq_JProperty_RemoveItem__;
                          *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
                          if (lVar13 != 0) {
                            uVar1 = *(uint *)(lVar9 + 0x18);
                            if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                              *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                              plVar11 = (long *)(lVar13 + (long)(int)uVar1 * 8 + 0x20);
                              *plVar11 = lVar10;
                              thunk_FUN_02bb0e9c(plVar11,lVar10);
                            }
                            else {
                              FUN_037a6538(lVar9,lVar10,
                                           *(undefined8 *)
                                            (*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
                            }
                            lVar10 = thunk_FUN_02b79644(*(undefined8 *)puVar2);
                            FUN_04dbdb8c(lVar10,0);
                            puVar2 = PTR_DAT_0631b1e8;
                            if (lVar10 != 0) {
                              *(undefined8 *)(lVar10 + 0x10) =
                                   *(undefined8 *)
                                    Method_Oculus_Interaction_Interactable<HandGrabInteractor,_HandGrabInteractable>_remove_WhenStateChanged__
                              ;
                              thunk_FUN_02bb0e9c();
                              *(undefined8 *)(lVar10 + 0x20) = *(undefined8 *)puVar2;
                              thunk_FUN_02bb0e9c((undefined8 *)(lVar10 + 0x20));
                              uVar12 = *(undefined8 *)puVar3;
                              *(undefined4 *)(lVar10 + 0x18) = 1;
                              lVar13 = thunk_FUN_02b79644(uVar12);
                              FUN_037a5cd0(lVar13,*(undefined8 *)puVar4);
                              if (lVar13 != 0) {
                                lVar14 = *(long *)(lVar13 + 0x10);
                                uVar12 = *(undefined8 *)puVar2;
                                lVar15 = *(long *)puVar5;
                                *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
                                if (lVar14 != 0) {
                                  uVar1 = *(uint *)(lVar13 + 0x18);
                                  if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                    *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                    *(undefined8 *)(lVar14 + (long)(int)uVar1 * 8 + 0x20) = uVar12;
                                    thunk_FUN_02bb0e9c();
                                  }
                                  else {
                                    FUN_037a6538(lVar13,uVar12,
                                                 *(undefined8 *)
                                                  (*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70
                                                  ));
                                  }
                                  *(long *)(lVar10 + 0x30) = lVar13;
                                  thunk_FUN_02bb0e9c((long *)(lVar10 + 0x30),lVar13);
                                  lVar13 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                              
                                                  Method_OVRSimpleJSON_JSONLazyCreator_Set<JSONNumber>__
                                                  );
                                  FUN_037a5cd0(lVar13,*(undefined8 *)
                                                                                                              
                                                  Method_Newtonsoft_Json_Linq_JPropertyKeyedCollection_Contains__
                                              );
                                  lVar14 = thunk_FUN_02b79644(*(undefined8 *)puVar6);
                                  FUN_04dbdb8c(lVar14,0);
                                  puVar2 = 
                                  Method_Newtonsoft_Json_JsonReader_set_DateTimeZoneHandling__;
                                  if (lVar14 != 0) {
                                    *(undefined8 *)(lVar14 + 0x18) =
                                         *(undefined8 *)
                                          Method_Newtonsoft_Json_JsonReader_set_DateTimeZoneHandling__
                                    ;
                                    thunk_FUN_02bb0e9c();
                                    *(undefined8 *)(lVar14 + 0x10) = *puVar19;
                                    thunk_FUN_02bb0e9c();
                                    if (lVar13 != 0) {
                                      lVar15 = *(long *)(lVar13 + 0x10);
                                      lVar16 = *(long *)puVar7;
                                      *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
                                      if (lVar15 != 0) {
                                        uVar1 = *(uint *)(lVar13 + 0x18);
                                        if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                          *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                          plVar11 = (long *)(lVar15 + (long)(int)uVar1 * 8 + 0x20);
                                          *plVar11 = lVar14;
                                          thunk_FUN_02bb0e9c(plVar11,lVar14);
                                        }
                                        else {
                                          FUN_037a6538(lVar13,lVar14,
                                                       *(undefined8 *)
                                                        (*(long *)(*(long *)(lVar16 + 0x20) + 0xc0)
                                                        + 0x70));
                                        }
                                        *(long *)(lVar10 + 0x28) = lVar13;
                                        thunk_FUN_02bb0e9c((long *)(lVar10 + 0x28),lVar13);
                                        lVar13 = *(long *)(lVar9 + 0x10);
                                        lVar14 = *(long *)
                                                  Method_Newtonsoft_Json_Linq_JProperty_RemoveItem__
                                        ;
                                        *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
                                        if (lVar13 != 0) {
                                          uVar1 = *(uint *)(lVar9 + 0x18);
                                          if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                            *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                            plVar11 = (long *)(lVar13 + (long)(int)uVar1 * 8 + 0x20)
                                            ;
                                            *plVar11 = lVar10;
                                            thunk_FUN_02bb0e9c(plVar11,lVar10);
                                          }
                                          else {
                                            FUN_037a6538(lVar9,lVar10,
                                                         *(undefined8 *)
                                                          (*(long *)(*(long *)(lVar14 + 0x20) + 0xc0
                                                                    ) + 0x70));
                                          }
                                          lVar10 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                              
                                                  Method_Newtonsoft_Json_Linq_JProperty_ClearItems__
                                                  );
                                          FUN_04dbdb8c(lVar10,0);
                                          puVar8 = 
                                          Method_Newtonsoft_Json_JsonSerializer_set_NullValueHandling__
                                          ;
                                          if (lVar10 != 0) {
                                            *(undefined8 *)(lVar10 + 0x10) =
                                                 *(undefined8 *)
                                                  Method_Oculus_Interaction_Interactable<HandGrabInteractor,_HandGrabInteractable>_add_WhenStateChanged__
                                            ;
                                            thunk_FUN_02bb0e9c();
                                            *(undefined8 *)(lVar10 + 0x20) = *(undefined8 *)puVar8;
                                            thunk_FUN_02bb0e9c((undefined8 *)(lVar10 + 0x20));
                                            uVar12 = *(undefined8 *)puVar3;
                                            *(undefined4 *)(lVar10 + 0x18) = 0;
                                            lVar13 = thunk_FUN_02b79644(uVar12);
                                            FUN_037a5cd0(lVar13,*(undefined8 *)puVar4);
                                            if (lVar13 != 0) {
                                              lVar14 = *(long *)(lVar13 + 0x10);
                                              uVar12 = *(undefined8 *)
                                                                                                                
                                                  Method_System_Linq_Enumerable_Select<DataColumn,_Type>__
                                              ;
                                              lVar15 = *(long *)puVar5;
                                              *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
                                              if (lVar14 != 0) {
                                                uVar1 = *(uint *)(lVar13 + 0x18);
                                                if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                  *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                  *(undefined8 *)
                                                   (lVar14 + (long)(int)uVar1 * 8 + 0x20) = uVar12;
                                                  thunk_FUN_02bb0e9c();
                                                }
                                                else {
                                                  FUN_037a6538(lVar13,uVar12,
                                                               *(undefined8 *)
                                                                (*(long *)(*(long *)(lVar15 + 0x20)
                                                                          + 0xc0) + 0x70));
                                                }
                                                *(long *)(lVar10 + 0x30) = lVar13;
                                                thunk_FUN_02bb0e9c((long *)(lVar10 + 0x30),lVar13);
                                                lVar13 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                          
                                                  Method_OVRSimpleJSON_JSONLazyCreator_Set<JSONNumber>__
                                                  );
                                                FUN_037a5cd0(lVar13,*(undefined8 *)
                                                                                                                                          
                                                  Method_Newtonsoft_Json_Linq_JPropertyKeyedCollection_Contains__
                                                  );
                                                lVar14 = thunk_FUN_02b79644(*(undefined8 *)puVar6);
                                                FUN_04dbdb8c(lVar14,0);
                                                if (lVar14 != 0) {
                                                  *(undefined8 *)(lVar14 + 0x18) =
                                                       *(undefined8 *)puVar2;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar14 + 0x10) = *puVar19;
                                                  thunk_FUN_02bb0e9c();
                                                  if (lVar13 != 0) {
                                                    lVar15 = *(long *)(lVar13 + 0x10);
                                                    lVar16 = *(long *)puVar7;
                                                    *(int *)(lVar13 + 0x1c) =
                                                         *(int *)(lVar13 + 0x1c) + 1;
                                                    puVar2 = 
                                                  Method_Newtonsoft_Json_Linq_JProperty_ClearItems__
                                                  ;
                                                  if (lVar15 != 0) {
                                                    uVar1 = *(uint *)(lVar13 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                      plVar11 = (long *)(lVar15 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar11 = lVar14;
                                                      thunk_FUN_02bb0e9c(plVar11,lVar14);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar13,lVar14,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x28) = lVar13;
                                                  thunk_FUN_02bb0e9c((long *)(lVar10 + 0x28),lVar13)
                                                  ;
                                                  lVar13 = *(long *)(lVar9 + 0x10);
                                                  lVar14 = *(long *)
                                                  Method_Newtonsoft_Json_Linq_JProperty_RemoveItem__
                                                  ;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                      plVar11 = (long *)(lVar13 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar11 = lVar10;
                                                      thunk_FUN_02bb0e9c(plVar11,lVar10);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar9,lVar10,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar10 = thunk_FUN_02b79644(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_04dbdb8c(lVar10,0);
                                                  puVar2 = 
                                                  OVR_OpenVR_IVRSystem__GetControllerStateWithPose_TypeInfo
                                                  ;
                                                  if (lVar10 != 0) {
                                                    *(undefined8 *)(lVar10 + 0x10) =
                                                         *(undefined8 *)PTR_DAT_063210b8;
                                                    thunk_FUN_02bb0e9c();
                                                    *(undefined8 *)(lVar10 + 0x20) =
                                                         *(undefined8 *)puVar2;
                                                    thunk_FUN_02bb0e9c((undefined8 *)(lVar10 + 0x20)
                                                                      );
                                                    uVar12 = *(undefined8 *)puVar3;
                                                    *(undefined4 *)(lVar10 + 0x18) = 0;
                                                    lVar13 = thunk_FUN_02b79644(uVar12);
                                                    FUN_037a5cd0(lVar13,*(undefined8 *)puVar4);
                                                    if (lVar13 != 0) {
                                                      lVar14 = *(long *)(lVar13 + 0x10);
                                                      uVar12 = *(undefined8 *)
                                                                                                                                
                                                  Method_System_Linq_Enumerable_Select<Enum,_int>__;
                                                  lVar15 = *(long *)puVar5;
                                                  *(int *)(lVar13 + 0x1c) =
                                                       *(int *)(lVar13 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar13 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar14 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar12;
                                                      thunk_FUN_02bb0e9c();
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar13,uVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x30) = lVar13;
                                                  thunk_FUN_02bb0e9c((long *)(lVar10 + 0x30),lVar13)
                                                  ;
                                                  lVar13 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                              
                                                  Method_OVRSimpleJSON_JSONLazyCreator_Set<JSONNumber>__
                                                  );
                                                  FUN_037a5cd0(lVar13,*(undefined8 *)
                                                                                                                                              
                                                  Method_Newtonsoft_Json_Linq_JPropertyKeyedCollection_Contains__
                                                  );
                                                  lVar14 = thunk_FUN_02b79644(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_04dbdb8c(lVar14,0);
                                                  if (lVar14 != 0) {
                                                    *(undefined8 *)(lVar14 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Newtonsoft_Json_JsonReader_set_DateParseHandling__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar14 + 0x10) = *puVar19;
                                                  thunk_FUN_02bb0e9c();
                                                  lVar15 = thunk_FUN_02b79644(*(undefined8 *)puVar3)
                                                  ;
                                                  FUN_037a5cd0(lVar15,*(undefined8 *)puVar4);
                                                  if (lVar15 != 0) {
                                                    lVar16 = *(long *)(lVar15 + 0x10);
                                                    uVar12 = *(undefined8 *)
                                                                                                                            
                                                  Method_Newtonsoft_Json_Linq_JToken_op_Explicit__;
                                                  lVar17 = *(long *)puVar5;
                                                  *(int *)(lVar15 + 0x1c) =
                                                       *(int *)(lVar15 + 0x1c) + 1;
                                                  if (lVar16 != 0) {
                                                    uVar1 = *(uint *)(lVar15 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                      *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar16 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar12;
                                                      thunk_FUN_02bb0e9c();
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar15,uVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar14 + 0x20) = lVar15;
                                                  thunk_FUN_02bb0e9c((long *)(lVar14 + 0x20),lVar15)
                                                  ;
                                                  if (lVar13 != 0) {
                                                    lVar15 = *(long *)(lVar13 + 0x10);
                                                    lVar16 = *(long *)puVar7;
                                                    *(int *)(lVar13 + 0x1c) =
                                                         *(int *)(lVar13 + 0x1c) + 1;
                                                    if (lVar15 != 0) {
                                                      uVar1 = *(uint *)(lVar13 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                        *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                        plVar11 = (long *)(lVar15 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar11 = lVar14;
                                                        thunk_FUN_02bb0e9c(plVar11,lVar14);
                                                      }
                                                      else {
                                                        FUN_037a6538(lVar13,lVar14,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar14 = thunk_FUN_02b79644(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_04dbdb8c(lVar14,0);
                                                  if (lVar14 != 0) {
                                                    *(undefined8 *)(lVar14 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_CreateNewDictionary__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar14 + 0x10) = *puVar19;
                                                  thunk_FUN_02bb0e9c();
                                                  lVar15 = thunk_FUN_02b79644(*(undefined8 *)puVar3)
                                                  ;
                                                  FUN_037a5cd0(lVar15,*(undefined8 *)puVar4);
                                                  if (lVar15 != 0) {
                                                    lVar16 = *(long *)(lVar15 + 0x10);
                                                    uVar12 = *(undefined8 *)
                                                                                                                            
                                                  Method_Newtonsoft_Json_Linq_JToken_Replace__;
                                                  lVar17 = *(long *)puVar5;
                                                  *(int *)(lVar15 + 0x1c) =
                                                       *(int *)(lVar15 + 0x1c) + 1;
                                                  if (lVar16 != 0) {
                                                    uVar1 = *(uint *)(lVar15 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                      *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar16 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar12;
                                                      thunk_FUN_02bb0e9c();
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar15,uVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar14 + 0x20) = lVar15;
                                                  thunk_FUN_02bb0e9c((long *)(lVar14 + 0x20),lVar15)
                                                  ;
                                                  lVar15 = *(long *)(lVar13 + 0x10);
                                                  lVar16 = *(long *)puVar7;
                                                  *(int *)(lVar13 + 0x1c) =
                                                       *(int *)(lVar13 + 0x1c) + 1;
                                                  puVar2 = 
                                                  Method_Newtonsoft_Json_Linq_JProperty_ClearItems__
                                                  ;
                                                  if (lVar15 != 0) {
                                                    uVar1 = *(uint *)(lVar13 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                      plVar11 = (long *)(lVar15 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar11 = lVar14;
                                                      thunk_FUN_02bb0e9c(plVar11,lVar14);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar13,lVar14,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x28) = lVar13;
                                                  thunk_FUN_02bb0e9c((long *)(lVar10 + 0x28),lVar13)
                                                  ;
                                                  lVar13 = *(long *)(lVar9 + 0x10);
                                                  lVar14 = *(long *)
                                                  Method_Newtonsoft_Json_Linq_JProperty_RemoveItem__
                                                  ;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                      plVar11 = (long *)(lVar13 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar11 = lVar10;
                                                      thunk_FUN_02bb0e9c(plVar11,lVar10);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar9,lVar10,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar10 = thunk_FUN_02b79644(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_04dbdb8c(lVar10,0);
                                                  puVar2 = 
                                                  Method_Newtonsoft_Json_JsonSerializer_set_ObjectCreationHandling__
                                                  ;
                                                  if (lVar10 != 0) {
                                                    *(undefined8 *)(lVar10 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Oculus_Interaction_Interactable<LocomotionTurnerInteractor,_LocomotionTurnerInteractable>__ctor__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar10 + 0x20) =
                                                       *(undefined8 *)puVar2;
                                                  thunk_FUN_02bb0e9c((undefined8 *)(lVar10 + 0x20));
                                                  uVar12 = *(undefined8 *)puVar3;
                                                  *(undefined4 *)(lVar10 + 0x18) = 0;
                                                  lVar13 = thunk_FUN_02b79644(uVar12);
                                                  FUN_037a5cd0(lVar13,*(undefined8 *)puVar4);
                                                  if (lVar13 != 0) {
                                                    lVar14 = *(long *)(lVar13 + 0x10);
                                                    uVar12 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Linq_Enumerable_Select<Collider,_Transform>__
                                                  ;
                                                  lVar15 = *(long *)puVar5;
                                                  *(int *)(lVar13 + 0x1c) =
                                                       *(int *)(lVar13 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar13 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar14 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar12;
                                                      thunk_FUN_02bb0e9c();
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar13,uVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x30) = lVar13;
                                                  thunk_FUN_02bb0e9c((long *)(lVar10 + 0x30),lVar13)
                                                  ;
                                                  lVar13 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                              
                                                  Method_OVRSimpleJSON_JSONLazyCreator_Set<JSONNumber>__
                                                  );
                                                  FUN_037a5cd0(lVar13,*(undefined8 *)
                                                                                                                                              
                                                  Method_Newtonsoft_Json_Linq_JPropertyKeyedCollection_Contains__
                                                  );
                                                  lVar14 = thunk_FUN_02b79644(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_04dbdb8c(lVar14,0);
                                                  if (lVar14 != 0) {
                                                    *(undefined8 *)(lVar14 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Newtonsoft_Json_Serialization_JsonSerializerInternalBase_ClearErrorContext__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar14 + 0x10) = *puVar19;
                                                  thunk_FUN_02bb0e9c();
                                                  lVar15 = thunk_FUN_02b79644(*(undefined8 *)puVar3)
                                                  ;
                                                  FUN_037a5cd0(lVar15,*(undefined8 *)puVar4);
                                                  if (lVar15 != 0) {
                                                    lVar16 = *(long *)(lVar15 + 0x10);
                                                    uVar12 = *(undefined8 *)
                                                                                                                            
                                                  Method_Newtonsoft_Json_Linq_JToken_op_Explicit__;
                                                  lVar17 = *(long *)puVar5;
                                                  *(int *)(lVar15 + 0x1c) =
                                                       *(int *)(lVar15 + 0x1c) + 1;
                                                  if (lVar16 != 0) {
                                                    uVar1 = *(uint *)(lVar15 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                      *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar16 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar12;
                                                      thunk_FUN_02bb0e9c();
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar15,uVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar14 + 0x20) = lVar15;
                                                  thunk_FUN_02bb0e9c((long *)(lVar14 + 0x20),lVar15)
                                                  ;
                                                  if (lVar13 != 0) {
                                                    lVar15 = *(long *)(lVar13 + 0x10);
                                                    lVar16 = *(long *)puVar7;
                                                    *(int *)(lVar13 + 0x1c) =
                                                         *(int *)(lVar13 + 0x1c) + 1;
                                                    if (lVar15 != 0) {
                                                      uVar1 = *(uint *)(lVar13 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                        *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                        plVar11 = (long *)(lVar15 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar11 = lVar14;
                                                        thunk_FUN_02bb0e9c(plVar11,lVar14);
                                                      }
                                                      else {
                                                        FUN_037a6538(lVar13,lVar14,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar14 = thunk_FUN_02b79644(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_04dbdb8c(lVar14,0);
                                                  if (lVar14 != 0) {
                                                    *(undefined8 *)(lVar14 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Newtonsoft_Json_JsonSerializer_set_ReferenceResolver__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar14 + 0x10) = *puVar19;
                                                  thunk_FUN_02bb0e9c();
                                                  lVar15 = thunk_FUN_02b79644(*(undefined8 *)puVar3)
                                                  ;
                                                  FUN_037a5cd0(lVar15,*(undefined8 *)puVar4);
                                                  if (lVar15 != 0) {
                                                    lVar16 = *(long *)(lVar15 + 0x10);
                                                    uVar12 = *(undefined8 *)
                                                                                                                            
                                                  Method_Newtonsoft_Json_Linq_JToken_Replace__;
                                                  lVar17 = *(long *)puVar5;
                                                  *(int *)(lVar15 + 0x1c) =
                                                       *(int *)(lVar15 + 0x1c) + 1;
                                                  if (lVar16 != 0) {
                                                    uVar1 = *(uint *)(lVar15 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                      *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar16 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar12;
                                                      thunk_FUN_02bb0e9c();
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar15,uVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar14 + 0x20) = lVar15;
                                                  thunk_FUN_02bb0e9c((long *)(lVar14 + 0x20),lVar15)
                                                  ;
                                                  lVar15 = *(long *)(lVar13 + 0x10);
                                                  lVar16 = *(long *)puVar7;
                                                  *(int *)(lVar13 + 0x1c) =
                                                       *(int *)(lVar13 + 0x1c) + 1;
                                                  puVar2 = 
                                                  Method_Newtonsoft_Json_Linq_JProperty_ClearItems__
                                                  ;
                                                  if (lVar15 != 0) {
                                                    uVar1 = *(uint *)(lVar13 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                      plVar11 = (long *)(lVar15 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar11 = lVar14;
                                                      thunk_FUN_02bb0e9c(plVar11,lVar14);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar13,lVar14,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x28) = lVar13;
                                                  thunk_FUN_02bb0e9c((long *)(lVar10 + 0x28),lVar13)
                                                  ;
                                                  lVar13 = *(long *)(lVar9 + 0x10);
                                                  lVar14 = *(long *)
                                                  Method_Newtonsoft_Json_Linq_JProperty_RemoveItem__
                                                  ;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                      plVar11 = (long *)(lVar13 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar11 = lVar10;
                                                      thunk_FUN_02bb0e9c(plVar11,lVar10);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar9,lVar10,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar10 = thunk_FUN_02b79644(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_04dbdb8c(lVar10,0);
                                                  puVar2 = 
                                                  Method_Newtonsoft_Json_JsonTextReader_ParseComment__
                                                  ;
                                                  if (lVar10 != 0) {
                                                    *(undefined8 *)(lVar10 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Oculus_Interaction_Interactable<SnapInteractor,_SnapInteractable>_SelectingInteractorAdded__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar10 + 0x20) =
                                                       *(undefined8 *)puVar2;
                                                  thunk_FUN_02bb0e9c((undefined8 *)(lVar10 + 0x20));
                                                  uVar12 = *(undefined8 *)puVar3;
                                                  *(undefined4 *)(lVar10 + 0x18) = 0;
                                                  lVar13 = thunk_FUN_02b79644(uVar12);
                                                  FUN_037a5cd0(lVar13,*(undefined8 *)puVar4);
                                                  if (lVar13 != 0) {
                                                    lVar14 = *(long *)(lVar13 + 0x10);
                                                    uVar12 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Linq_Enumerable_Select<FieldInfo,_VolumeParameter>__
                                                  ;
                                                  lVar15 = *(long *)puVar5;
                                                  *(int *)(lVar13 + 0x1c) =
                                                       *(int *)(lVar13 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar13 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar14 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar12;
                                                      thunk_FUN_02bb0e9c();
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar13,uVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x30) = lVar13;
                                                  thunk_FUN_02bb0e9c((long *)(lVar10 + 0x30),lVar13)
                                                  ;
                                                  lVar13 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                              
                                                  Method_OVRSimpleJSON_JSONLazyCreator_Set<JSONNumber>__
                                                  );
                                                  FUN_037a5cd0(lVar13,*(undefined8 *)
                                                                                                                                              
                                                  Method_Newtonsoft_Json_Linq_JPropertyKeyedCollection_Contains__
                                                  );
                                                  lVar14 = thunk_FUN_02b79644(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_04dbdb8c(lVar14,0);
                                                  if (lVar14 != 0) {
                                                    *(undefined8 *)(lVar14 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Newtonsoft_Json_JsonTextReader_ParseNumberNegativeInfinity__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar14 + 0x10) = *puVar19;
                                                  thunk_FUN_02bb0e9c();
                                                  lVar15 = thunk_FUN_02b79644(*(undefined8 *)puVar3)
                                                  ;
                                                  FUN_037a5cd0(lVar15,*(undefined8 *)puVar4);
                                                  if (lVar15 != 0) {
                                                    lVar16 = *(long *)(lVar15 + 0x10);
                                                    uVar12 = *(undefined8 *)
                                                                                                                            
                                                  Method_Newtonsoft_Json_Linq_JToken_op_Explicit__;
                                                  lVar17 = *(long *)puVar5;
                                                  *(int *)(lVar15 + 0x1c) =
                                                       *(int *)(lVar15 + 0x1c) + 1;
                                                  if (lVar16 != 0) {
                                                    uVar1 = *(uint *)(lVar15 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                      *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar16 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar12;
                                                      thunk_FUN_02bb0e9c();
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar15,uVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar14 + 0x20) = lVar15;
                                                  thunk_FUN_02bb0e9c((long *)(lVar14 + 0x20),lVar15)
                                                  ;
                                                  if (lVar13 != 0) {
                                                    lVar15 = *(long *)(lVar13 + 0x10);
                                                    lVar16 = *(long *)puVar7;
                                                    *(int *)(lVar13 + 0x1c) =
                                                         *(int *)(lVar13 + 0x1c) + 1;
                                                    if (lVar15 != 0) {
                                                      uVar1 = *(uint *)(lVar13 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                        *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                        plVar11 = (long *)(lVar15 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar11 = lVar14;
                                                        thunk_FUN_02bb0e9c(plVar11,lVar14);
                                                      }
                                                      else {
                                                        FUN_037a6538(lVar13,lVar14,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar14 = thunk_FUN_02b79644(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_04dbdb8c(lVar14,0);
                                                  if (lVar14 != 0) {
                                                    *(undefined8 *)(lVar14 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Newtonsoft_Json_JsonTextReader_ReadAsBoolean__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar14 + 0x10) = *puVar19;
                                                  thunk_FUN_02bb0e9c();
                                                  lVar15 = thunk_FUN_02b79644(*(undefined8 *)puVar3)
                                                  ;
                                                  FUN_037a5cd0(lVar15,*(undefined8 *)puVar4);
                                                  if (lVar15 != 0) {
                                                    lVar16 = *(long *)(lVar15 + 0x10);
                                                    uVar12 = *(undefined8 *)
                                                                                                                            
                                                  Method_Newtonsoft_Json_Linq_JToken_Replace__;
                                                  lVar17 = *(long *)puVar5;
                                                  *(int *)(lVar15 + 0x1c) =
                                                       *(int *)(lVar15 + 0x1c) + 1;
                                                  if (lVar16 != 0) {
                                                    uVar1 = *(uint *)(lVar15 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                      *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar16 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar12;
                                                      thunk_FUN_02bb0e9c();
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar15,uVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar14 + 0x20) = lVar15;
                                                  thunk_FUN_02bb0e9c((long *)(lVar14 + 0x20),lVar15)
                                                  ;
                                                  lVar15 = *(long *)(lVar13 + 0x10);
                                                  lVar16 = *(long *)puVar7;
                                                  *(int *)(lVar13 + 0x1c) =
                                                       *(int *)(lVar13 + 0x1c) + 1;
                                                  puVar2 = 
                                                  Method_Newtonsoft_Json_Linq_JProperty_ClearItems__
                                                  ;
                                                  if (lVar15 != 0) {
                                                    uVar1 = *(uint *)(lVar13 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                      plVar11 = (long *)(lVar15 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar11 = lVar14;
                                                      thunk_FUN_02bb0e9c(plVar11,lVar14);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar13,lVar14,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x28) = lVar13;
                                                  thunk_FUN_02bb0e9c((long *)(lVar10 + 0x28),lVar13)
                                                  ;
                                                  lVar13 = *(long *)(lVar9 + 0x10);
                                                  lVar14 = *(long *)
                                                  Method_Newtonsoft_Json_Linq_JProperty_RemoveItem__
                                                  ;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                      plVar11 = (long *)(lVar13 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar11 = lVar10;
                                                      thunk_FUN_02bb0e9c(plVar11,lVar10);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar9,lVar10,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar10 = thunk_FUN_02b79644(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_04dbdb8c(lVar10,0);
                                                  puVar2 = 
                                                  Method_Newtonsoft_Json_JsonSerializer_set_MissingMemberHandling__
                                                  ;
                                                  if (lVar10 != 0) {
                                                    *(undefined8 *)(lVar10 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Oculus_Interaction_Interactable<PokeInteractor,_PokeInteractable>_get_Interactors__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar10 + 0x20) =
                                                       *(undefined8 *)puVar2;
                                                  thunk_FUN_02bb0e9c((undefined8 *)(lVar10 + 0x20));
                                                  uVar12 = *(undefined8 *)puVar3;
                                                  *(undefined4 *)(lVar10 + 0x18) = 0;
                                                  lVar13 = thunk_FUN_02b79644(uVar12);
                                                  FUN_037a5cd0(lVar13,*(undefined8 *)puVar4);
                                                  if (lVar13 != 0) {
                                                    lVar14 = *(long *)(lVar13 + 0x10);
                                                    uVar12 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Linq_Enumerable_Select<FieldInfo,_string>__
                                                  ;
                                                  lVar15 = *(long *)puVar5;
                                                  *(int *)(lVar13 + 0x1c) =
                                                       *(int *)(lVar13 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar13 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar14 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar12;
                                                      thunk_FUN_02bb0e9c();
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar13,uVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x30) = lVar13;
                                                  thunk_FUN_02bb0e9c((long *)(lVar10 + 0x30),lVar13)
                                                  ;
                                                  lVar13 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                              
                                                  Method_OVRSimpleJSON_JSONLazyCreator_Set<JSONNumber>__
                                                  );
                                                  FUN_037a5cd0(lVar13,*(undefined8 *)
                                                                                                                                              
                                                  Method_Newtonsoft_Json_Linq_JPropertyKeyedCollection_Contains__
                                                  );
                                                  lVar14 = thunk_FUN_02b79644(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_04dbdb8c(lVar14,0);
                                                  if (lVar14 != 0) {
                                                    *(undefined8 *)(lVar14 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Newtonsoft_Json_JsonSerializer_set_TypeNameAssemblyFormatHandling__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar14 + 0x10) = *puVar19;
                                                  thunk_FUN_02bb0e9c();
                                                  lVar15 = thunk_FUN_02b79644(*(undefined8 *)puVar3)
                                                  ;
                                                  FUN_037a5cd0(lVar15,*(undefined8 *)puVar4);
                                                  if (lVar15 != 0) {
                                                    lVar16 = *(long *)(lVar15 + 0x10);
                                                    uVar12 = *(undefined8 *)
                                                                                                                            
                                                  Method_Newtonsoft_Json_Linq_JToken_op_Explicit__;
                                                  lVar17 = *(long *)puVar5;
                                                  *(int *)(lVar15 + 0x1c) =
                                                       *(int *)(lVar15 + 0x1c) + 1;
                                                  if (lVar16 != 0) {
                                                    uVar1 = *(uint *)(lVar15 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                      *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar16 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar12;
                                                      thunk_FUN_02bb0e9c();
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar15,uVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar14 + 0x20) = lVar15;
                                                  thunk_FUN_02bb0e9c((long *)(lVar14 + 0x20),lVar15)
                                                  ;
                                                  if (lVar13 != 0) {
                                                    lVar15 = *(long *)(lVar13 + 0x10);
                                                    lVar16 = *(long *)puVar7;
                                                    *(int *)(lVar13 + 0x1c) =
                                                         *(int *)(lVar13 + 0x1c) + 1;
                                                    if (lVar15 != 0) {
                                                      uVar1 = *(uint *)(lVar13 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                        *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                        plVar11 = (long *)(lVar15 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar11 = lVar14;
                                                        thunk_FUN_02bb0e9c(plVar11,lVar14);
                                                      }
                                                      else {
                                                        FUN_037a6538(lVar13,lVar14,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar14 = thunk_FUN_02b79644(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_04dbdb8c(lVar14,0);
                                                  if (lVar14 != 0) {
                                                    *(undefined8 *)(lVar14 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Newtonsoft_Json_JsonSerializer_set_PreserveReferencesHandling__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar14 + 0x10) = *puVar19;
                                                  thunk_FUN_02bb0e9c();
                                                  lVar15 = thunk_FUN_02b79644(*(undefined8 *)puVar3)
                                                  ;
                                                  FUN_037a5cd0(lVar15,*(undefined8 *)puVar4);
                                                  if (lVar15 != 0) {
                                                    lVar16 = *(long *)(lVar15 + 0x10);
                                                    uVar12 = *(undefined8 *)
                                                                                                                            
                                                  Method_Newtonsoft_Json_Linq_JToken_Replace__;
                                                  lVar17 = *(long *)puVar5;
                                                  *(int *)(lVar15 + 0x1c) =
                                                       *(int *)(lVar15 + 0x1c) + 1;
                                                  if (lVar16 != 0) {
                                                    uVar1 = *(uint *)(lVar15 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                      *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar16 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar12;
                                                      thunk_FUN_02bb0e9c();
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar15,uVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar14 + 0x20) = lVar15;
                                                  thunk_FUN_02bb0e9c((long *)(lVar14 + 0x20),lVar15)
                                                  ;
                                                  lVar15 = *(long *)(lVar13 + 0x10);
                                                  lVar16 = *(long *)puVar7;
                                                  *(int *)(lVar13 + 0x1c) =
                                                       *(int *)(lVar13 + 0x1c) + 1;
                                                  puVar2 = 
                                                  Method_Newtonsoft_Json_Linq_JProperty_ClearItems__
                                                  ;
                                                  if (lVar15 != 0) {
                                                    uVar1 = *(uint *)(lVar13 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                      plVar11 = (long *)(lVar15 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar11 = lVar14;
                                                      thunk_FUN_02bb0e9c(plVar11,lVar14);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar13,lVar14,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x28) = lVar13;
                                                  thunk_FUN_02bb0e9c((long *)(lVar10 + 0x28),lVar13)
                                                  ;
                                                  lVar13 = *(long *)(lVar9 + 0x10);
                                                  lVar14 = *(long *)
                                                  Method_Newtonsoft_Json_Linq_JProperty_RemoveItem__
                                                  ;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                      plVar11 = (long *)(lVar13 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar11 = lVar10;
                                                      thunk_FUN_02bb0e9c(plVar11,lVar10);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar9,lVar10,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar10 = thunk_FUN_02b79644(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_04dbdb8c(lVar10,0);
                                                  puVar2 = 
                                                  Method_Newtonsoft_Json_JsonTextReader_ReadNumberValue__
                                                  ;
                                                  if (lVar10 != 0) {
                                                    *(undefined8 *)(lVar10 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Oculus_Interaction_Interactable<SnapInteractor,_SnapInteractable>_RemoveInteractorByIdentifier__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar10 + 0x20) =
                                                       *(undefined8 *)puVar2;
                                                  thunk_FUN_02bb0e9c((undefined8 *)(lVar10 + 0x20));
                                                  uVar12 = *(undefined8 *)puVar3;
                                                  *(undefined4 *)(lVar10 + 0x18) = 0;
                                                  lVar13 = thunk_FUN_02b79644(uVar12);
                                                  FUN_037a5cd0(lVar13,*(undefined8 *)puVar4);
                                                  if (lVar13 != 0) {
                                                    lVar14 = *(long *)(lVar13 + 0x10);
                                                    uVar12 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Linq_Enumerable_Select<KeyValuePair<string,_string>,_string>__
                                                  ;
                                                  lVar15 = *(long *)puVar5;
                                                  *(int *)(lVar13 + 0x1c) =
                                                       *(int *)(lVar13 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar13 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar14 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar12;
                                                      thunk_FUN_02bb0e9c();
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar13,uVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x30) = lVar13;
                                                  thunk_FUN_02bb0e9c((long *)(lVar10 + 0x30),lVar13)
                                                  ;
                                                  lVar13 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                              
                                                  Method_OVRSimpleJSON_JSONLazyCreator_Set<JSONNumber>__
                                                  );
                                                  FUN_037a5cd0(lVar13,*(undefined8 *)
                                                                                                                                              
                                                  Method_Newtonsoft_Json_Linq_JPropertyKeyedCollection_Contains__
                                                  );
                                                  lVar14 = thunk_FUN_02b79644(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_04dbdb8c(lVar14,0);
                                                  if (lVar14 != 0) {
                                                    *(undefined8 *)(lVar14 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Newtonsoft_Json_JsonTextReader_ParseTrue__;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar14 + 0x10) = *puVar19;
                                                  thunk_FUN_02bb0e9c();
                                                  lVar15 = thunk_FUN_02b79644(*(undefined8 *)puVar3)
                                                  ;
                                                  FUN_037a5cd0(lVar15,*(undefined8 *)puVar4);
                                                  if (lVar15 != 0) {
                                                    lVar16 = *(long *)(lVar15 + 0x10);
                                                    uVar12 = *(undefined8 *)
                                                                                                                            
                                                  Method_Newtonsoft_Json_Linq_JToken_op_Explicit__;
                                                  lVar17 = *(long *)puVar5;
                                                  *(int *)(lVar15 + 0x1c) =
                                                       *(int *)(lVar15 + 0x1c) + 1;
                                                  if (lVar16 != 0) {
                                                    uVar1 = *(uint *)(lVar15 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                      *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar16 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar12;
                                                      thunk_FUN_02bb0e9c();
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar15,uVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar14 + 0x20) = lVar15;
                                                  thunk_FUN_02bb0e9c((long *)(lVar14 + 0x20),lVar15)
                                                  ;
                                                  if (lVar13 != 0) {
                                                    lVar15 = *(long *)(lVar13 + 0x10);
                                                    lVar16 = *(long *)puVar7;
                                                    *(int *)(lVar13 + 0x1c) =
                                                         *(int *)(lVar13 + 0x1c) + 1;
                                                    if (lVar15 != 0) {
                                                      uVar1 = *(uint *)(lVar13 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                        *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                        plVar11 = (long *)(lVar15 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar11 = lVar14;
                                                        thunk_FUN_02bb0e9c(plVar11,lVar14);
                                                      }
                                                      else {
                                                        FUN_037a6538(lVar13,lVar14,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar14 = thunk_FUN_02b79644(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_04dbdb8c(lVar14,0);
                                                  if (lVar14 != 0) {
                                                    *(undefined8 *)(lVar14 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Newtonsoft_Json_JsonTextReader_ReadNumberCharIntoBuffer__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar14 + 0x10) = *puVar19;
                                                  thunk_FUN_02bb0e9c();
                                                  lVar15 = thunk_FUN_02b79644(*(undefined8 *)puVar3)
                                                  ;
                                                  FUN_037a5cd0(lVar15,*(undefined8 *)puVar4);
                                                  if (lVar15 != 0) {
                                                    lVar16 = *(long *)(lVar15 + 0x10);
                                                    uVar12 = *(undefined8 *)
                                                                                                                            
                                                  Method_Newtonsoft_Json_Linq_JToken_Replace__;
                                                  lVar17 = *(long *)puVar5;
                                                  *(int *)(lVar15 + 0x1c) =
                                                       *(int *)(lVar15 + 0x1c) + 1;
                                                  if (lVar16 != 0) {
                                                    uVar1 = *(uint *)(lVar15 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                      *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar16 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar12;
                                                      thunk_FUN_02bb0e9c();
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar15,uVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar14 + 0x20) = lVar15;
                                                  thunk_FUN_02bb0e9c((long *)(lVar14 + 0x20),lVar15)
                                                  ;
                                                  lVar15 = *(long *)(lVar13 + 0x10);
                                                  lVar16 = *(long *)puVar7;
                                                  *(int *)(lVar13 + 0x1c) =
                                                       *(int *)(lVar13 + 0x1c) + 1;
                                                  puVar2 = 
                                                  Method_Newtonsoft_Json_Linq_JProperty_ClearItems__
                                                  ;
                                                  if (lVar15 != 0) {
                                                    uVar1 = *(uint *)(lVar13 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                      plVar11 = (long *)(lVar15 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar11 = lVar14;
                                                      thunk_FUN_02bb0e9c(plVar11,lVar14);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar13,lVar14,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x28) = lVar13;
                                                  thunk_FUN_02bb0e9c((long *)(lVar10 + 0x28),lVar13)
                                                  ;
                                                  lVar13 = *(long *)(lVar9 + 0x10);
                                                  lVar14 = *(long *)
                                                  Method_Newtonsoft_Json_Linq_JProperty_RemoveItem__
                                                  ;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                      plVar11 = (long *)(lVar13 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar11 = lVar10;
                                                      thunk_FUN_02bb0e9c(plVar11,lVar10);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar9,lVar10,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar10 = thunk_FUN_02b79644(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_04dbdb8c(lVar10,0);
                                                  puVar2 = PTR_DAT_0631b1f0;
                                                  if (lVar10 != 0) {
                                                    *(undefined8 *)(lVar10 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Oculus_Interaction_Interactable<HandGrabUseInteractor,_HandGrabUseInteractable>_SelectingInteractorAdded__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar10 + 0x20) =
                                                       *(undefined8 *)puVar2;
                                                  thunk_FUN_02bb0e9c((undefined8 *)(lVar10 + 0x20));
                                                  uVar12 = *(undefined8 *)puVar3;
                                                  *(undefined4 *)(lVar10 + 0x18) = 1;
                                                  lVar13 = thunk_FUN_02b79644(uVar12);
                                                  FUN_037a5cd0(lVar13,*(undefined8 *)puVar4);
                                                  if (lVar13 != 0) {
                                                    lVar14 = *(long *)(lVar13 + 0x10);
                                                    uVar12 = *(undefined8 *)puVar2;
                                                    lVar15 = *(long *)puVar5;
                                                    *(int *)(lVar13 + 0x1c) =
                                                         *(int *)(lVar13 + 0x1c) + 1;
                                                    if (lVar14 != 0) {
                                                      uVar1 = *(uint *)(lVar13 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                        *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                        *(undefined8 *)
                                                         (lVar14 + (long)(int)uVar1 * 8 + 0x20) =
                                                             uVar12;
                                                        thunk_FUN_02bb0e9c();
                                                      }
                                                      else {
                                                        FUN_037a6538(lVar13,uVar12,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x30) = lVar13;
                                                  thunk_FUN_02bb0e9c((long *)(lVar10 + 0x30),lVar13)
                                                  ;
                                                  lVar13 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                              
                                                  Method_OVRSimpleJSON_JSONLazyCreator_Set<JSONNumber>__
                                                  );
                                                  FUN_037a5cd0(lVar13,*(undefined8 *)
                                                                                                                                              
                                                  Method_Newtonsoft_Json_Linq_JPropertyKeyedCollection_Contains__
                                                  );
                                                  lVar14 = thunk_FUN_02b79644(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_04dbdb8c(lVar14,0);
                                                  puVar2 = 
                                                  Method_Newtonsoft_Json_JsonSerializer_set_SerializationBinder__
                                                  ;
                                                  if (lVar14 != 0) {
                                                    *(undefined8 *)(lVar14 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Newtonsoft_Json_JsonSerializer_set_SerializationBinder__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar14 + 0x10) = *puVar19;
                                                  thunk_FUN_02bb0e9c();
                                                  if (lVar13 != 0) {
                                                    lVar15 = *(long *)(lVar13 + 0x10);
                                                    lVar16 = *(long *)puVar7;
                                                    *(int *)(lVar13 + 0x1c) =
                                                         *(int *)(lVar13 + 0x1c) + 1;
                                                    if (lVar15 != 0) {
                                                      uVar1 = *(uint *)(lVar13 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                        *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                        plVar11 = (long *)(lVar15 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar11 = lVar14;
                                                        thunk_FUN_02bb0e9c(plVar11,lVar14);
                                                      }
                                                      else {
                                                        FUN_037a6538(lVar13,lVar14,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x28) = lVar13;
                                                  thunk_FUN_02bb0e9c((long *)(lVar10 + 0x28),lVar13)
                                                  ;
                                                  lVar13 = *(long *)(lVar9 + 0x10);
                                                  lVar14 = *(long *)
                                                  Method_Newtonsoft_Json_Linq_JProperty_RemoveItem__
                                                  ;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                      plVar11 = (long *)(lVar13 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar11 = lVar10;
                                                      thunk_FUN_02bb0e9c(plVar11,lVar10);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar9,lVar10,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar10 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                              
                                                  Method_Newtonsoft_Json_Linq_JProperty_ClearItems__
                                                  );
                                                  FUN_04dbdb8c(lVar10,0);
                                                  puVar8 = 
                                                  Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_AddReference__
                                                  ;
                                                  if (lVar10 != 0) {
                                                    *(undefined8 *)(lVar10 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Oculus_Interaction_Interactable<HandGrabUseInteractor,_HandGrabUseInteractable>_Awake__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar10 + 0x20) =
                                                       *(undefined8 *)puVar8;
                                                  thunk_FUN_02bb0e9c((undefined8 *)(lVar10 + 0x20));
                                                  uVar12 = *(undefined8 *)puVar3;
                                                  *(undefined4 *)(lVar10 + 0x18) = 0;
                                                  lVar13 = thunk_FUN_02b79644(uVar12);
                                                  FUN_037a5cd0(lVar13,*(undefined8 *)puVar4);
                                                  if (lVar13 != 0) {
                                                    lVar14 = *(long *)(lVar13 + 0x10);
                                                    uVar12 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Linq_Enumerable_Select<AndroidAxis,_string>__
                                                  ;
                                                  lVar15 = *(long *)puVar5;
                                                  *(int *)(lVar13 + 0x1c) =
                                                       *(int *)(lVar13 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar13 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar14 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar12;
                                                      thunk_FUN_02bb0e9c();
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar13,uVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x30) = lVar13;
                                                  thunk_FUN_02bb0e9c((long *)(lVar10 + 0x30),lVar13)
                                                  ;
                                                  lVar13 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                              
                                                  Method_OVRSimpleJSON_JSONLazyCreator_Set<JSONNumber>__
                                                  );
                                                  FUN_037a5cd0(lVar13,*(undefined8 *)
                                                                                                                                              
                                                  Method_Newtonsoft_Json_Linq_JPropertyKeyedCollection_Contains__
                                                  );
                                                  lVar14 = thunk_FUN_02b79644(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_04dbdb8c(lVar14,0);
                                                  if (lVar14 != 0) {
                                                    *(undefined8 *)(lVar14 + 0x18) =
                                                         *(undefined8 *)puVar2;
                                                    thunk_FUN_02bb0e9c();
                                                    *(undefined8 *)(lVar14 + 0x10) = *puVar19;
                                                    thunk_FUN_02bb0e9c();
                                                    if (lVar13 != 0) {
                                                      lVar15 = *(long *)(lVar13 + 0x10);
                                                      lVar16 = *(long *)puVar7;
                                                      *(int *)(lVar13 + 0x1c) =
                                                           *(int *)(lVar13 + 0x1c) + 1;
                                                      puVar2 = 
                                                  Method_Newtonsoft_Json_Linq_JProperty_ClearItems__
                                                  ;
                                                  if (lVar15 != 0) {
                                                    uVar1 = *(uint *)(lVar13 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                      plVar11 = (long *)(lVar15 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar11 = lVar14;
                                                      thunk_FUN_02bb0e9c(plVar11,lVar14);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar13,lVar14,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x28) = lVar13;
                                                  thunk_FUN_02bb0e9c((long *)(lVar10 + 0x28),lVar13)
                                                  ;
                                                  lVar13 = *(long *)(lVar9 + 0x10);
                                                  lVar14 = *(long *)
                                                  Method_Newtonsoft_Json_Linq_JProperty_RemoveItem__
                                                  ;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                      plVar11 = (long *)(lVar13 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar11 = lVar10;
                                                      thunk_FUN_02bb0e9c(plVar11,lVar10);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar9,lVar10,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar10 = thunk_FUN_02b79644(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_04dbdb8c(lVar10,0);
                                                  puVar8 = 
                                                  Method_Newtonsoft_Json_Serialization_JsonTypeReflector_GetAttribute<DefaultValueAttribute>__
                                                  ;
                                                  if (lVar10 != 0) {
                                                    *(undefined8 *)(lVar10 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Oculus_Interaction_Interactable<SnapInteractor,_SnapInteractable>_InteractorRemoved__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar10 + 0x20) =
                                                       *(undefined8 *)puVar8;
                                                  thunk_FUN_02bb0e9c((undefined8 *)(lVar10 + 0x20));
                                                  uVar12 = *(undefined8 *)puVar3;
                                                  *(undefined4 *)(lVar10 + 0x18) = 0;
                                                  lVar13 = thunk_FUN_02b79644(uVar12);
                                                  FUN_037a5cd0(lVar13,*(undefined8 *)puVar4);
                                                  if (lVar13 != 0) {
                                                    lVar14 = *(long *)(lVar13 + 0x10);
                                                    uVar12 = *(undefined8 *)
                                                                                                                            
                                                  Method_Newtonsoft_Json_JsonTextReader_FinishReadQuotedNumber__
                                                  ;
                                                  lVar15 = *(long *)puVar5;
                                                  *(int *)(lVar13 + 0x1c) =
                                                       *(int *)(lVar13 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar13 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar14 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar12;
                                                      thunk_FUN_02bb0e9c();
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar13,uVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x30) = lVar13;
                                                  thunk_FUN_02bb0e9c((long *)(lVar10 + 0x30),lVar13)
                                                  ;
                                                  lVar13 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                              
                                                  Method_OVRSimpleJSON_JSONLazyCreator_Set<JSONNumber>__
                                                  );
                                                  FUN_037a5cd0(lVar13,*(undefined8 *)
                                                                                                                                              
                                                  Method_Newtonsoft_Json_Linq_JPropertyKeyedCollection_Contains__
                                                  );
                                                  lVar14 = thunk_FUN_02b79644(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_04dbdb8c(lVar14,0);
                                                  if (lVar14 != 0) {
                                                    *(undefined8 *)(lVar14 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Newtonsoft_Json_JsonTextReader_FinishReadQuotedStringValue__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar14 + 0x10) = *puVar19;
                                                  thunk_FUN_02bb0e9c();
                                                  if (lVar13 != 0) {
                                                    lVar15 = *(long *)(lVar13 + 0x10);
                                                    lVar16 = *(long *)puVar7;
                                                    *(int *)(lVar13 + 0x1c) =
                                                         *(int *)(lVar13 + 0x1c) + 1;
                                                    if (lVar15 != 0) {
                                                      uVar1 = *(uint *)(lVar13 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                        *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                        plVar11 = (long *)(lVar15 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar11 = lVar14;
                                                        thunk_FUN_02bb0e9c(plVar11,lVar14);
                                                      }
                                                      else {
                                                        FUN_037a6538(lVar13,lVar14,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x28) = lVar13;
                                                  thunk_FUN_02bb0e9c((long *)(lVar10 + 0x28),lVar13)
                                                  ;
                                                  lVar13 = *(long *)(lVar9 + 0x10);
                                                  lVar14 = *(long *)
                                                  Method_Newtonsoft_Json_Linq_JProperty_RemoveItem__
                                                  ;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                      plVar11 = (long *)(lVar13 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar11 = lVar10;
                                                      thunk_FUN_02bb0e9c(plVar11,lVar10);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar9,lVar10,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar10 = thunk_FUN_02b79644(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_04dbdb8c(lVar10,0);
                                                  puVar8 = 
                                                  Method_Newtonsoft_Json_JsonReader_set_MaxDepth__;
                                                  if (lVar10 != 0) {
                                                    *(undefined8 *)(lVar10 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Oculus_Interaction_Interactable<PokeInteractor,_PokeInteractable>_get_State__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar10 + 0x20) =
                                                       *(undefined8 *)puVar8;
                                                  thunk_FUN_02bb0e9c((undefined8 *)(lVar10 + 0x20));
                                                  uVar12 = *(undefined8 *)puVar3;
                                                  *(undefined4 *)(lVar10 + 0x18) = 0;
                                                  lVar13 = thunk_FUN_02b79644(uVar12);
                                                  FUN_037a5cd0(lVar13,*(undefined8 *)puVar4);
                                                  if (lVar13 != 0) {
                                                    lVar14 = *(long *)(lVar13 + 0x10);
                                                    uVar12 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Linq_Enumerable_Select<EnumMemberAttribute,_string>__
                                                  ;
                                                  lVar15 = *(long *)puVar5;
                                                  *(int *)(lVar13 + 0x1c) =
                                                       *(int *)(lVar13 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar13 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar14 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar12;
                                                      thunk_FUN_02bb0e9c();
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar13,uVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x30) = lVar13;
                                                  thunk_FUN_02bb0e9c((long *)(lVar10 + 0x30),lVar13)
                                                  ;
                                                  lVar13 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                              
                                                  Method_OVRSimpleJSON_JSONLazyCreator_Set<JSONNumber>__
                                                  );
                                                  FUN_037a5cd0(lVar13,*(undefined8 *)
                                                                                                                                              
                                                  Method_Newtonsoft_Json_Linq_JPropertyKeyedCollection_Contains__
                                                  );
                                                  lVar14 = thunk_FUN_02b79644(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_04dbdb8c(lVar14,0);
                                                  if (lVar14 != 0) {
                                                    *(undefined8 *)(lVar14 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Newtonsoft_Json_JsonSerializer_Deserialize<RegexOptions>__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar14 + 0x10) = *puVar19;
                                                  thunk_FUN_02bb0e9c();
                                                  if (lVar13 != 0) {
                                                    lVar15 = *(long *)(lVar13 + 0x10);
                                                    lVar16 = *(long *)puVar7;
                                                    *(int *)(lVar13 + 0x1c) =
                                                         *(int *)(lVar13 + 0x1c) + 1;
                                                    if (lVar15 != 0) {
                                                      uVar1 = *(uint *)(lVar13 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                        *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                        plVar11 = (long *)(lVar15 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar11 = lVar14;
                                                        thunk_FUN_02bb0e9c(plVar11,lVar14);
                                                      }
                                                      else {
                                                        FUN_037a6538(lVar13,lVar14,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x28) = lVar13;
                                                  thunk_FUN_02bb0e9c((long *)(lVar10 + 0x28),lVar13)
                                                  ;
                                                  lVar13 = *(long *)(lVar9 + 0x10);
                                                  lVar14 = *(long *)
                                                  Method_Newtonsoft_Json_Linq_JProperty_RemoveItem__
                                                  ;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                      plVar11 = (long *)(lVar13 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar11 = lVar10;
                                                      thunk_FUN_02bb0e9c(plVar11,lVar10);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar9,lVar10,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar10 = thunk_FUN_02b79644(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_04dbdb8c(lVar10,0);
                                                  puVar8 = 
                                                  Method_Newtonsoft_Json_JsonTextReader_ParseUndefined__
                                                  ;
                                                  if (lVar10 != 0) {
                                                    *(undefined8 *)(lVar10 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Oculus_Interaction_Interactable<PokeInteractor,_PokeInteractable>_get_Registry__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar10 + 0x20) =
                                                       *(undefined8 *)puVar8;
                                                  thunk_FUN_02bb0e9c((undefined8 *)(lVar10 + 0x20));
                                                  uVar12 = *(undefined8 *)puVar3;
                                                  *(undefined4 *)(lVar10 + 0x18) = 0;
                                                  lVar13 = thunk_FUN_02b79644(uVar12);
                                                  FUN_037a5cd0(lVar13,*(undefined8 *)puVar4);
                                                  if (lVar13 != 0) {
                                                    lVar14 = *(long *)(lVar13 + 0x10);
                                                    uVar12 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Linq_Enumerable_Select<FieldInfo,_Enum>__
                                                  ;
                                                  lVar15 = *(long *)puVar5;
                                                  *(int *)(lVar13 + 0x1c) =
                                                       *(int *)(lVar13 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar13 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar14 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar12;
                                                      thunk_FUN_02bb0e9c();
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar13,uVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x30) = lVar13;
                                                  thunk_FUN_02bb0e9c((long *)(lVar10 + 0x30),lVar13)
                                                  ;
                                                  lVar13 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                              
                                                  Method_OVRSimpleJSON_JSONLazyCreator_Set<JSONNumber>__
                                                  );
                                                  FUN_037a5cd0(lVar13,*(undefined8 *)
                                                                                                                                              
                                                  Method_Newtonsoft_Json_Linq_JPropertyKeyedCollection_Contains__
                                                  );
                                                  lVar14 = thunk_FUN_02b79644(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_04dbdb8c(lVar14,0);
                                                  if (lVar14 != 0) {
                                                    *(undefined8 *)(lVar14 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Newtonsoft_Json_JsonTextReader_MatchValue__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar14 + 0x10) = *puVar19;
                                                  thunk_FUN_02bb0e9c();
                                                  if (lVar13 != 0) {
                                                    lVar15 = *(long *)(lVar13 + 0x10);
                                                    lVar16 = *(long *)puVar7;
                                                    *(int *)(lVar13 + 0x1c) =
                                                         *(int *)(lVar13 + 0x1c) + 1;
                                                    if (lVar15 != 0) {
                                                      uVar1 = *(uint *)(lVar13 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                        *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                        plVar11 = (long *)(lVar15 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar11 = lVar14;
                                                        thunk_FUN_02bb0e9c(plVar11,lVar14);
                                                      }
                                                      else {
                                                        FUN_037a6538(lVar13,lVar14,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x28) = lVar13;
                                                  thunk_FUN_02bb0e9c((long *)(lVar10 + 0x28),lVar13)
                                                  ;
                                                  lVar13 = *(long *)(lVar9 + 0x10);
                                                  lVar14 = *(long *)
                                                  Method_Newtonsoft_Json_Linq_JProperty_RemoveItem__
                                                  ;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                      plVar11 = (long *)(lVar13 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar11 = lVar10;
                                                      thunk_FUN_02bb0e9c(plVar11,lVar10);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar9,lVar10,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar10 = thunk_FUN_02b79644(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_04dbdb8c(lVar10,0);
                                                  puVar8 = 
                                                  Method_Newtonsoft_Json_JsonTextReader_ParsePostValue__
                                                  ;
                                                  if (lVar10 != 0) {
                                                    *(undefined8 *)(lVar10 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Newtonsoft_Json_JsonTextReader_ParseValue__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar10 + 0x20) =
                                                       *(undefined8 *)puVar8;
                                                  thunk_FUN_02bb0e9c((undefined8 *)(lVar10 + 0x20));
                                                  uVar12 = *(undefined8 *)puVar3;
                                                  *(undefined4 *)(lVar10 + 0x18) = 0;
                                                  lVar13 = thunk_FUN_02b79644(uVar12);
                                                  FUN_037a5cd0(lVar13,*(undefined8 *)puVar4);
                                                  if (lVar13 != 0) {
                                                    lVar14 = *(long *)(lVar13 + 0x10);
                                                    uVar12 = *(undefined8 *)
                                                                                                                            
                                                  Method_Newtonsoft_Json_JsonTextReader__ctor__;
                                                  lVar15 = *(long *)puVar5;
                                                  *(int *)(lVar13 + 0x1c) =
                                                       *(int *)(lVar13 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar13 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar14 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar12;
                                                      thunk_FUN_02bb0e9c();
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar13,uVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x30) = lVar13;
                                                  thunk_FUN_02bb0e9c((long *)(lVar10 + 0x30),lVar13)
                                                  ;
                                                  lVar13 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                              
                                                  Method_OVRSimpleJSON_JSONLazyCreator_Set<JSONNumber>__
                                                  );
                                                  FUN_037a5cd0(lVar13,*(undefined8 *)
                                                                                                                                              
                                                  Method_Newtonsoft_Json_Linq_JPropertyKeyedCollection_Contains__
                                                  );
                                                  lVar14 = thunk_FUN_02b79644(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_04dbdb8c(lVar14,0);
                                                  if (lVar14 != 0) {
                                                    *(undefined8 *)(lVar14 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Newtonsoft_Json_JsonTextReader_ParseFalse__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar14 + 0x10) = *puVar19;
                                                  thunk_FUN_02bb0e9c();
                                                  if (lVar13 != 0) {
                                                    lVar15 = *(long *)(lVar13 + 0x10);
                                                    lVar16 = *(long *)puVar7;
                                                    *(int *)(lVar13 + 0x1c) =
                                                         *(int *)(lVar13 + 0x1c) + 1;
                                                    if (lVar15 != 0) {
                                                      uVar1 = *(uint *)(lVar13 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                        *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                        plVar11 = (long *)(lVar15 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar11 = lVar14;
                                                        thunk_FUN_02bb0e9c(plVar11,lVar14);
                                                      }
                                                      else {
                                                        FUN_037a6538(lVar13,lVar14,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x28) = lVar13;
                                                  thunk_FUN_02bb0e9c((long *)(lVar10 + 0x28),lVar13)
                                                  ;
                                                  lVar13 = *(long *)(lVar9 + 0x10);
                                                  lVar14 = *(long *)
                                                  Method_Newtonsoft_Json_Linq_JProperty_RemoveItem__
                                                  ;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                      plVar11 = (long *)(lVar13 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar11 = lVar10;
                                                      thunk_FUN_02bb0e9c(plVar11,lVar10);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar9,lVar10,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar10 = thunk_FUN_02b79644(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_04dbdb8c(lVar10,0);
                                                  puVar8 = 
                                                  Method_LitJson_JsonData_LitJson_IJsonWrapper_GetBoolean__
                                                  ;
                                                  if (lVar10 != 0) {
                                                    *(undefined8 *)(lVar10 + 0x10) =
                                                         *(undefined8 *)
                                                          Method_LitJson_JsonData__ctor__;
                                                    thunk_FUN_02bb0e9c();
                                                    *(undefined8 *)(lVar10 + 0x20) =
                                                         *(undefined8 *)puVar8;
                                                    thunk_FUN_02bb0e9c((undefined8 *)(lVar10 + 0x20)
                                                                      );
                                                    uVar12 = *(undefined8 *)puVar3;
                                                    *(undefined4 *)(lVar10 + 0x18) = 3;
                                                    lVar13 = thunk_FUN_02b79644(uVar12);
                                                    FUN_037a5cd0(lVar13,*(undefined8 *)puVar4);
                                                    if (lVar13 != 0) {
                                                      lVar14 = *(long *)(lVar13 + 0x10);
                                                      uVar12 = *(undefined8 *)
                                                                                                                                
                                                  Method_System_Globalization_JapaneseCalendar_ToFourDigitYear__
                                                  ;
                                                  lVar15 = *(long *)puVar5;
                                                  *(int *)(lVar13 + 0x1c) =
                                                       *(int *)(lVar13 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar13 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar14 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar12;
                                                      thunk_FUN_02bb0e9c();
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar13,uVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x30) = lVar13;
                                                  thunk_FUN_02bb0e9c((long *)(lVar10 + 0x30),lVar13)
                                                  ;
                                                  lVar13 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                              
                                                  Method_OVRSimpleJSON_JSONLazyCreator_Set<JSONNumber>__
                                                  );
                                                  FUN_037a5cd0(lVar13,*(undefined8 *)
                                                                                                                                              
                                                  Method_Newtonsoft_Json_Linq_JPropertyKeyedCollection_Contains__
                                                  );
                                                  lVar14 = thunk_FUN_02b79644(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_04dbdb8c(lVar14,0);
                                                  if (lVar14 != 0) {
                                                    *(undefined8 *)(lVar14 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_LitJson_JsonData_LitJson_IJsonWrapper_GetLong__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar14 + 0x10) = *puVar19;
                                                  thunk_FUN_02bb0e9c();
                                                  if (lVar13 != 0) {
                                                    lVar15 = *(long *)(lVar13 + 0x10);
                                                    lVar16 = *(long *)puVar7;
                                                    *(int *)(lVar13 + 0x1c) =
                                                         *(int *)(lVar13 + 0x1c) + 1;
                                                    if (lVar15 != 0) {
                                                      uVar1 = *(uint *)(lVar13 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                        *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                        plVar11 = (long *)(lVar15 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar11 = lVar14;
                                                        thunk_FUN_02bb0e9c(plVar11,lVar14);
                                                      }
                                                      else {
                                                        FUN_037a6538(lVar13,lVar14,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x28) = lVar13;
                                                  thunk_FUN_02bb0e9c((long *)(lVar10 + 0x28),lVar13)
                                                  ;
                                                  lVar13 = *(long *)(lVar9 + 0x10);
                                                  lVar14 = *(long *)
                                                  Method_Newtonsoft_Json_Linq_JProperty_RemoveItem__
                                                  ;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                      plVar11 = (long *)(lVar13 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar11 = lVar10;
                                                      thunk_FUN_02bb0e9c(plVar11,lVar10);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar9,lVar10,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar10 = thunk_FUN_02b79644(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_04dbdb8c(lVar10,0);
                                                  puVar8 = 
                                                  Method_Newtonsoft_Json_JsonConvert_DeserializeObject<Dictionary<string,_string>>__
                                                  ;
                                                  if (lVar10 != 0) {
                                                    *(undefined8 *)(lVar10 + 0x10) =
                                                         *(undefined8 *)PTR_DAT_06332138;
                                                    thunk_FUN_02bb0e9c();
                                                    *(undefined8 *)(lVar10 + 0x20) =
                                                         *(undefined8 *)puVar8;
                                                    thunk_FUN_02bb0e9c((undefined8 *)(lVar10 + 0x20)
                                                                      );
                                                    uVar12 = *(undefined8 *)puVar3;
                                                    *(undefined4 *)(lVar10 + 0x18) = 3;
                                                    lVar13 = thunk_FUN_02b79644(uVar12);
                                                    FUN_037a5cd0(lVar13,*(undefined8 *)puVar4);
                                                    if (lVar13 != 0) {
                                                      lVar14 = *(long *)(lVar13 + 0x10);
                                                      uVar12 = *(undefined8 *)
                                                                                                                                
                                                  Method_System_Collections_Generic_List<IntegratedSubsystemDescriptor>_GetEnumerator__
                                                  ;
                                                  lVar15 = *(long *)puVar5;
                                                  *(int *)(lVar13 + 0x1c) =
                                                       *(int *)(lVar13 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar13 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar14 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar12;
                                                      thunk_FUN_02bb0e9c();
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar13,uVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x30) = lVar13;
                                                  thunk_FUN_02bb0e9c((long *)(lVar10 + 0x30),lVar13)
                                                  ;
                                                  lVar13 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                              
                                                  Method_OVRSimpleJSON_JSONLazyCreator_Set<JSONNumber>__
                                                  );
                                                  FUN_037a5cd0(lVar13,*(undefined8 *)
                                                                                                                                              
                                                  Method_Newtonsoft_Json_Linq_JPropertyKeyedCollection_Contains__
                                                  );
                                                  lVar14 = thunk_FUN_02b79644(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_04dbdb8c(lVar14,0);
                                                  if (lVar14 != 0) {
                                                    *(undefined8 *)(lVar14 + 0x18) =
                                                         *(undefined8 *)
                                                          Method_LitJson_JsonData_EnsureDictionary__
                                                    ;
                                                    thunk_FUN_02bb0e9c();
                                                    *(undefined8 *)(lVar14 + 0x10) = *puVar19;
                                                    thunk_FUN_02bb0e9c();
                                                    if (lVar13 != 0) {
                                                      lVar15 = *(long *)(lVar13 + 0x10);
                                                      lVar16 = *(long *)puVar7;
                                                      *(int *)(lVar13 + 0x1c) =
                                                           *(int *)(lVar13 + 0x1c) + 1;
                                                      if (lVar15 != 0) {
                                                        uVar1 = *(uint *)(lVar13 + 0x18);
                                                        if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                          *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                          plVar11 = (long *)(lVar15 + (long)(int)
                                                  uVar1 * 8 + 0x20);
                                                  *plVar11 = lVar14;
                                                  thunk_FUN_02bb0e9c(plVar11,lVar14);
                                                  }
                                                  else {
                                                    FUN_037a6538(lVar13,lVar14,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar16 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x28) = lVar13;
                                                  thunk_FUN_02bb0e9c((long *)(lVar10 + 0x28),lVar13)
                                                  ;
                                                  lVar13 = *(long *)(lVar9 + 0x10);
                                                  lVar14 = *(long *)
                                                  Method_Newtonsoft_Json_Linq_JProperty_RemoveItem__
                                                  ;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                      plVar11 = (long *)(lVar13 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar11 = lVar10;
                                                      thunk_FUN_02bb0e9c(plVar11,lVar10);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar9,lVar10,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar10 = thunk_FUN_02b79644(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_04dbdb8c(lVar10,0);
                                                  puVar8 = 
                                                  Method_Newtonsoft_Json_JsonSerializer_set_MetadataPropertyHandling__
                                                  ;
                                                  if (lVar10 != 0) {
                                                    *(undefined8 *)(lVar10 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Newtonsoft_Json_Serialization_JsonSerializerInternalBase_GetErrorContext__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar10 + 0x20) =
                                                       *(undefined8 *)puVar8;
                                                  thunk_FUN_02bb0e9c((undefined8 *)(lVar10 + 0x20));
                                                  uVar12 = *(undefined8 *)puVar3;
                                                  *(undefined4 *)(lVar10 + 0x18) = 4;
                                                  lVar13 = thunk_FUN_02b79644(uVar12);
                                                  FUN_037a5cd0(lVar13,*(undefined8 *)puVar4);
                                                  if (lVar13 != 0) {
                                                    lVar14 = *(long *)(lVar13 + 0x10);
                                                    uVar12 = *(undefined8 *)
                                                                                                                            
                                                  Method_UnityEngine_InputSystem_InputControlExtensions_CopyState__
                                                  ;
                                                  lVar15 = *(long *)puVar5;
                                                  *(int *)(lVar13 + 0x1c) =
                                                       *(int *)(lVar13 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar13 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar14 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar12;
                                                      thunk_FUN_02bb0e9c();
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar13,uVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x30) = lVar13;
                                                  thunk_FUN_02bb0e9c((long *)(lVar10 + 0x30),lVar13)
                                                  ;
                                                  lVar13 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                              
                                                  Method_OVRSimpleJSON_JSONLazyCreator_Set<JSONNumber>__
                                                  );
                                                  FUN_037a5cd0(lVar13,*(undefined8 *)
                                                                                                                                              
                                                  Method_Newtonsoft_Json_Linq_JPropertyKeyedCollection_Contains__
                                                  );
                                                  lVar14 = thunk_FUN_02b79644(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_04dbdb8c(lVar14,0);
                                                  if (lVar14 != 0) {
                                                    *(undefined8 *)(lVar14 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Newtonsoft_Json_JsonReader_set_FloatParseHandling__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar14 + 0x10) = *puVar19;
                                                  thunk_FUN_02bb0e9c();
                                                  if (lVar13 != 0) {
                                                    lVar15 = *(long *)(lVar13 + 0x10);
                                                    lVar16 = *(long *)puVar7;
                                                    *(int *)(lVar13 + 0x1c) =
                                                         *(int *)(lVar13 + 0x1c) + 1;
                                                    if (lVar15 != 0) {
                                                      uVar1 = *(uint *)(lVar13 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                        *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                        plVar11 = (long *)(lVar15 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar11 = lVar14;
                                                        thunk_FUN_02bb0e9c(plVar11,lVar14);
                                                      }
                                                      else {
                                                        FUN_037a6538(lVar13,lVar14,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x28) = lVar13;
                                                  thunk_FUN_02bb0e9c((long *)(lVar10 + 0x28),lVar13)
                                                  ;
                                                  lVar13 = *(long *)(lVar9 + 0x10);
                                                  lVar14 = *(long *)
                                                  Method_Newtonsoft_Json_Linq_JProperty_RemoveItem__
                                                  ;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                      plVar11 = (long *)(lVar13 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar11 = lVar10;
                                                      thunk_FUN_02bb0e9c(plVar11,lVar10);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar9,lVar10,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar10 = thunk_FUN_02b79644(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_04dbdb8c(lVar10,0);
                                                  puVar8 = 
                                                  Method_Newtonsoft_Json_JsonTextReader_ParseNull__;
                                                  if (lVar10 != 0) {
                                                    *(undefined8 *)(lVar10 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Newtonsoft_Json_Serialization_JsonSerializerInternalWriter_Serialize__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar10 + 0x20) =
                                                       *(undefined8 *)puVar8;
                                                  thunk_FUN_02bb0e9c((undefined8 *)(lVar10 + 0x20));
                                                  uVar12 = *(undefined8 *)puVar3;
                                                  *(undefined4 *)(lVar10 + 0x18) = 1;
                                                  lVar13 = thunk_FUN_02b79644(uVar12);
                                                  FUN_037a5cd0(lVar13,*(undefined8 *)puVar4);
                                                  if (lVar13 != 0) {
                                                    lVar14 = *(long *)(lVar13 + 0x10);
                                                    uVar12 = *(undefined8 *)
                                                                                                                            
                                                  Method_Newtonsoft_Json_JsonTextReader_ParseReadNumber__
                                                  ;
                                                  lVar15 = *(long *)puVar5;
                                                  *(int *)(lVar13 + 0x1c) =
                                                       *(int *)(lVar13 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar13 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar14 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar12;
                                                      thunk_FUN_02bb0e9c();
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar13,uVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x30) = lVar13;
                                                  thunk_FUN_02bb0e9c((long *)(lVar10 + 0x30),lVar13)
                                                  ;
                                                  lVar13 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                              
                                                  Method_OVRSimpleJSON_JSONLazyCreator_Set<JSONNumber>__
                                                  );
                                                  FUN_037a5cd0(lVar13,*(undefined8 *)
                                                                                                                                              
                                                  Method_Newtonsoft_Json_Linq_JPropertyKeyedCollection_Contains__
                                                  );
                                                  lVar14 = thunk_FUN_02b79644(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_04dbdb8c(lVar14,0);
                                                  if (lVar14 != 0) {
                                                    *(undefined8 *)(lVar14 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Newtonsoft_Json_JsonTextReader_ReadStringValue__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar14 + 0x10) = *puVar19;
                                                  thunk_FUN_02bb0e9c();
                                                  if (lVar13 != 0) {
                                                    lVar15 = *(long *)(lVar13 + 0x10);
                                                    lVar16 = *(long *)puVar7;
                                                    *(int *)(lVar13 + 0x1c) =
                                                         *(int *)(lVar13 + 0x1c) + 1;
                                                    if (lVar15 != 0) {
                                                      uVar1 = *(uint *)(lVar13 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                        *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                        plVar11 = (long *)(lVar15 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar11 = lVar14;
                                                        thunk_FUN_02bb0e9c(plVar11,lVar14);
                                                      }
                                                      else {
                                                        FUN_037a6538(lVar13,lVar14,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x28) = lVar13;
                                                  thunk_FUN_02bb0e9c((long *)(lVar10 + 0x28),lVar13)
                                                  ;
                                                  lVar13 = *(long *)(lVar9 + 0x10);
                                                  lVar14 = *(long *)
                                                  Method_Newtonsoft_Json_Linq_JProperty_RemoveItem__
                                                  ;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                      plVar11 = (long *)(lVar13 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar11 = lVar10;
                                                      thunk_FUN_02bb0e9c(plVar11,lVar10);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar9,lVar10,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar10 = thunk_FUN_02b79644(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_04dbdb8c(lVar10,0);
                                                  puVar8 = 
                                                  Method_Newtonsoft_Json_Serialization_JsonTypeReflector_GetAttribute<DataMemberAttribute>__
                                                  ;
                                                  if (lVar10 != 0) {
                                                    *(undefined8 *)(lVar10 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Newtonsoft_Json_JsonTextReader_ParseUnquotedProperty__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar10 + 0x20) =
                                                       *(undefined8 *)puVar8;
                                                  thunk_FUN_02bb0e9c((undefined8 *)(lVar10 + 0x20));
                                                  uVar12 = *(undefined8 *)puVar3;
                                                  *(undefined4 *)(lVar10 + 0x18) = 1;
                                                  lVar13 = thunk_FUN_02b79644(uVar12);
                                                  FUN_037a5cd0(lVar13,*(undefined8 *)puVar4);
                                                  if (lVar13 != 0) {
                                                    lVar14 = *(long *)(lVar13 + 0x10);
                                                    uVar12 = *(undefined8 *)
                                                                                                                            
                                                  Method_Newtonsoft_Json_JsonTextReader_ReadUnquotedPropertyReportIfDone__
                                                  ;
                                                  lVar15 = *(long *)puVar5;
                                                  *(int *)(lVar13 + 0x1c) =
                                                       *(int *)(lVar13 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar13 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar14 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar12;
                                                      thunk_FUN_02bb0e9c();
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar13,uVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x30) = lVar13;
                                                  thunk_FUN_02bb0e9c((long *)(lVar10 + 0x30),lVar13)
                                                  ;
                                                  lVar13 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                              
                                                  Method_OVRSimpleJSON_JSONLazyCreator_Set<JSONNumber>__
                                                  );
                                                  FUN_037a5cd0(lVar13,*(undefined8 *)
                                                                                                                                              
                                                  Method_Newtonsoft_Json_Linq_JPropertyKeyedCollection_Contains__
                                                  );
                                                  lVar14 = thunk_FUN_02b79644(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_04dbdb8c(lVar14,0);
                                                  if (lVar14 != 0) {
                                                    *(undefined8 *)(lVar14 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Newtonsoft_Json_JsonTextReader_ParseNumberNaN__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar14 + 0x10) = *puVar19;
                                                  thunk_FUN_02bb0e9c();
                                                  if (lVar13 != 0) {
                                                    lVar15 = *(long *)(lVar13 + 0x10);
                                                    lVar16 = *(long *)puVar7;
                                                    *(int *)(lVar13 + 0x1c) =
                                                         *(int *)(lVar13 + 0x1c) + 1;
                                                    if (lVar15 != 0) {
                                                      uVar1 = *(uint *)(lVar13 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                        *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                        plVar11 = (long *)(lVar15 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar11 = lVar14;
                                                        thunk_FUN_02bb0e9c(plVar11,lVar14);
                                                      }
                                                      else {
                                                        FUN_037a6538(lVar13,lVar14,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x28) = lVar13;
                                                  thunk_FUN_02bb0e9c((long *)(lVar10 + 0x28),lVar13)
                                                  ;
                                                  lVar13 = *(long *)(lVar9 + 0x10);
                                                  lVar14 = *(long *)
                                                  Method_Newtonsoft_Json_Linq_JProperty_RemoveItem__
                                                  ;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                      plVar11 = (long *)(lVar13 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar11 = lVar10;
                                                      thunk_FUN_02bb0e9c(plVar11,lVar10);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar9,lVar10,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar10 = thunk_FUN_02b79644(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_04dbdb8c(lVar10,0);
                                                  puVar8 = 
                                                  Method_Newtonsoft_Json_JsonTextReader_ParseConstructor__
                                                  ;
                                                  if (lVar10 != 0) {
                                                    *(undefined8 *)(lVar10 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Newtonsoft_Json_JsonTextWriter_WriteEnd__;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar10 + 0x20) =
                                                       *(undefined8 *)puVar8;
                                                  thunk_FUN_02bb0e9c((undefined8 *)(lVar10 + 0x20));
                                                  uVar12 = *(undefined8 *)puVar3;
                                                  *(undefined4 *)(lVar10 + 0x18) = 1;
                                                  lVar13 = thunk_FUN_02b79644(uVar12);
                                                  FUN_037a5cd0(lVar13,*(undefined8 *)puVar4);
                                                  if (lVar13 != 0) {
                                                    lVar14 = *(long *)(lVar13 + 0x10);
                                                    uVar12 = *(undefined8 *)
                                                                                                                            
                                                  Method_Newtonsoft_Json_JsonTextReader_ReadAsBytes__
                                                  ;
                                                  lVar15 = *(long *)puVar5;
                                                  *(int *)(lVar13 + 0x1c) =
                                                       *(int *)(lVar13 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar13 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar14 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar12;
                                                      thunk_FUN_02bb0e9c();
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar13,uVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x30) = lVar13;
                                                  thunk_FUN_02bb0e9c((long *)(lVar10 + 0x30),lVar13)
                                                  ;
                                                  lVar13 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                              
                                                  Method_OVRSimpleJSON_JSONLazyCreator_Set<JSONNumber>__
                                                  );
                                                  FUN_037a5cd0(lVar13,*(undefined8 *)
                                                                                                                                              
                                                  Method_Newtonsoft_Json_Linq_JPropertyKeyedCollection_Contains__
                                                  );
                                                  lVar14 = thunk_FUN_02b79644(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_04dbdb8c(lVar14,0);
                                                  if (lVar14 != 0) {
                                                    *(undefined8 *)(lVar14 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Newtonsoft_Json_JsonTextReader_ParseNumberPositiveInfinity__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar14 + 0x10) = *puVar19;
                                                  thunk_FUN_02bb0e9c();
                                                  if (lVar13 != 0) {
                                                    lVar15 = *(long *)(lVar13 + 0x10);
                                                    lVar16 = *(long *)puVar7;
                                                    *(int *)(lVar13 + 0x1c) =
                                                         *(int *)(lVar13 + 0x1c) + 1;
                                                    if (lVar15 != 0) {
                                                      uVar1 = *(uint *)(lVar13 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                        *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                        plVar11 = (long *)(lVar15 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar11 = lVar14;
                                                        thunk_FUN_02bb0e9c(plVar11,lVar14);
                                                      }
                                                      else {
                                                        FUN_037a6538(lVar13,lVar14,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x28) = lVar13;
                                                  thunk_FUN_02bb0e9c((long *)(lVar10 + 0x28),lVar13)
                                                  ;
                                                  lVar13 = *(long *)(lVar9 + 0x10);
                                                  lVar14 = *(long *)
                                                  Method_Newtonsoft_Json_Linq_JProperty_RemoveItem__
                                                  ;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                      plVar11 = (long *)(lVar13 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar11 = lVar10;
                                                      thunk_FUN_02bb0e9c(plVar11,lVar10);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar9,lVar10,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar10 = thunk_FUN_02b79644(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_04dbdb8c(lVar10,0);
                                                  puVar8 = 
                                                  Method_Newtonsoft_Json_JsonTextReader_HandleNull__
                                                  ;
                                                  if (lVar10 != 0) {
                                                    *(undefined8 *)(lVar10 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Newtonsoft_Json_JsonTextWriter__ctor__;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar10 + 0x20) =
                                                       *(undefined8 *)puVar8;
                                                  thunk_FUN_02bb0e9c((undefined8 *)(lVar10 + 0x20));
                                                  uVar12 = *(undefined8 *)puVar3;
                                                  *(undefined4 *)(lVar10 + 0x18) = 0;
                                                  lVar13 = thunk_FUN_02b79644(uVar12);
                                                  FUN_037a5cd0(lVar13,*(undefined8 *)puVar4);
                                                  if (lVar13 != 0) {
                                                    lVar14 = *(long *)(lVar13 + 0x10);
                                                    uVar12 = *(undefined8 *)
                                                                                                                            
                                                  Method_Newtonsoft_Json_Serialization_JsonSerializerInternalWriter_GetReference__
                                                  ;
                                                  lVar15 = *(long *)puVar5;
                                                  *(int *)(lVar13 + 0x1c) =
                                                       *(int *)(lVar13 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar13 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar14 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar12;
                                                      thunk_FUN_02bb0e9c();
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar13,uVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x30) = lVar13;
                                                  thunk_FUN_02bb0e9c((long *)(lVar10 + 0x30),lVar13)
                                                  ;
                                                  lVar13 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                              
                                                  Method_OVRSimpleJSON_JSONLazyCreator_Set<JSONNumber>__
                                                  );
                                                  FUN_037a5cd0(lVar13,*(undefined8 *)
                                                                                                                                              
                                                  Method_Newtonsoft_Json_Linq_JPropertyKeyedCollection_Contains__
                                                  );
                                                  lVar14 = thunk_FUN_02b79644(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_04dbdb8c(lVar14,0);
                                                  if (lVar14 != 0) {
                                                    *(undefined8 *)(lVar14 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Newtonsoft_Json_JsonTextReader_ConvertUnicode__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar14 + 0x10) = *puVar19;
                                                  thunk_FUN_02bb0e9c();
                                                  if (lVar13 != 0) {
                                                    lVar15 = *(long *)(lVar13 + 0x10);
                                                    lVar16 = *(long *)puVar7;
                                                    *(int *)(lVar13 + 0x1c) =
                                                         *(int *)(lVar13 + 0x1c) + 1;
                                                    if (lVar15 != 0) {
                                                      uVar1 = *(uint *)(lVar13 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                        *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                        plVar11 = (long *)(lVar15 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar11 = lVar14;
                                                        thunk_FUN_02bb0e9c(plVar11,lVar14);
                                                      }
                                                      else {
                                                        FUN_037a6538(lVar13,lVar14,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x28) = lVar13;
                                                  thunk_FUN_02bb0e9c((long *)(lVar10 + 0x28),lVar13)
                                                  ;
                                                  lVar13 = *(long *)(lVar9 + 0x10);
                                                  lVar14 = *(long *)
                                                  Method_Newtonsoft_Json_Linq_JProperty_RemoveItem__
                                                  ;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                      plVar11 = (long *)(lVar13 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar11 = lVar10;
                                                      thunk_FUN_02bb0e9c(plVar11,lVar10);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar9,lVar10,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar10 = thunk_FUN_02b79644(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_04dbdb8c(lVar10,0);
                                                  puVar2 = 
                                                  Method_Newtonsoft_Json_Serialization_JsonSerializerInternalWriter_SerializeISerializable__
                                                  ;
                                                  if (lVar10 != 0) {
                                                    *(undefined8 *)(lVar10 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Newtonsoft_Json_JsonTextReader_ReadFinished__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar10 + 0x20) =
                                                       *(undefined8 *)puVar2;
                                                  thunk_FUN_02bb0e9c((undefined8 *)(lVar10 + 0x20));
                                                  uVar12 = *(undefined8 *)puVar3;
                                                  *(undefined4 *)(lVar10 + 0x18) = 0;
                                                  lVar13 = thunk_FUN_02b79644(uVar12);
                                                  FUN_037a5cd0(lVar13,*(undefined8 *)puVar4);
                                                  if (lVar13 != 0) {
                                                    lVar14 = *(long *)(lVar13 + 0x10);
                                                    uVar12 = *(undefined8 *)
                                                                                                                            
                                                  Method_Newtonsoft_Json_JsonTextReader_ProcessValueComma__
                                                  ;
                                                  lVar15 = *(long *)puVar5;
                                                  *(int *)(lVar13 + 0x1c) =
                                                       *(int *)(lVar13 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar13 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar14 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar12;
                                                      thunk_FUN_02bb0e9c();
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar13,uVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x30) = lVar13;
                                                  thunk_FUN_02bb0e9c((long *)(lVar10 + 0x30),lVar13)
                                                  ;
                                                  lVar13 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                              
                                                  Method_OVRSimpleJSON_JSONLazyCreator_Set<JSONNumber>__
                                                  );
                                                  FUN_037a5cd0(lVar13,*(undefined8 *)
                                                                                                                                              
                                                  Method_Newtonsoft_Json_Linq_JPropertyKeyedCollection_Contains__
                                                  );
                                                  lVar14 = thunk_FUN_02b79644(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_04dbdb8c(lVar14,0);
                                                  if (lVar14 != 0) {
                                                    *(undefined8 *)(lVar14 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Newtonsoft_Json_JsonTextReader_ParseProperty__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar14 + 0x10) = *puVar19;
                                                  thunk_FUN_02bb0e9c();
                                                  if (lVar13 != 0) {
                                                    lVar15 = *(long *)(lVar13 + 0x10);
                                                    lVar16 = *(long *)puVar7;
                                                    *(int *)(lVar13 + 0x1c) =
                                                         *(int *)(lVar13 + 0x1c) + 1;
                                                    if (lVar15 != 0) {
                                                      uVar1 = *(uint *)(lVar13 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                        *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                        plVar11 = (long *)(lVar15 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar11 = lVar14;
                                                        thunk_FUN_02bb0e9c(plVar11,lVar14);
                                                      }
                                                      else {
                                                        FUN_037a6538(lVar13,lVar14,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x28) = lVar13;
                                                  thunk_FUN_02bb0e9c((long *)(lVar10 + 0x28),lVar13)
                                                  ;
                                                  lVar13 = *(long *)(lVar9 + 0x10);
                                                  lVar14 = *(long *)
                                                  Method_Newtonsoft_Json_Linq_JProperty_RemoveItem__
                                                  ;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                      plVar11 = (long *)(lVar13 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar11 = lVar10;
                                                      thunk_FUN_02bb0e9c(plVar11,lVar10);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar9,lVar10,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(unaff_x29 + 0x28) = lVar9;
                                                  uVar12 = thunk_FUN_02bb0e9c((long *)(unaff_x29 +
                                                                                      0x28),lVar9);
                                                  FUN_05b9ad1c(uVar12,unaff_x29);
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
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
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


