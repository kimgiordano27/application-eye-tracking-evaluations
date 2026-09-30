/*
FUNCTION_NAME: UnityEngine.SceneManagement.Scene$$get_buildIndex
ENTRY_POINT: 05ba30b0
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 89
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;ray_interaction;telemetry;structure_combo;keyword_support
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;ray_or_cast_sink_hits_1;telemetry_or_network_hits_17;source_validity_pose_sink_structure;eye_or_gaze_keyword_boost_only;negative_generic_transform_raycast_without_eye_source_or_attempt;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void UnityEngine_SceneManagement_Scene__get_buildIndex(undefined8 *param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long unaff_x19;
  long unaff_x20;
  undefined8 *puVar17;
  long unaff_x26;
  undefined8 *puVar18;
  
  puVar7 = Method_Newtonsoft_Json_JsonSerializer_set_ConstructorHandling__;
  puVar5 = Method_OVRSimpleJSON_JSONLazyCreator_Set<JSONArray>__;
  puVar4 = Method_Newtonsoft_Json_Linq_JProperty_SetItem__;
  puVar3 = Method_Newtonsoft_Json_Linq_JProperty_GetItem__;
  puVar2 = PTR_DAT_06312a80;
  puVar17 = *(undefined8 **)(unaff_x20 + 0x2c0);
  puVar18 = *(undefined8 **)(unaff_x26 + 0x350);
  *(undefined8 *)(unaff_x19 + 0x10) = *param_1;
  thunk_FUN_02bb0e9c();
  *(undefined8 *)(unaff_x19 + 0x18) = *puVar17;
  thunk_FUN_02bb0e9c();
  *(undefined8 *)(unaff_x19 + 0x30) = *puVar18;
  thunk_FUN_02bb0e9c();
  *(undefined8 *)(unaff_x19 + 0x38) = *(undefined8 *)puVar7;
  thunk_FUN_02bb0e9c();
  *(undefined8 *)(unaff_x19 + 0x40) = *(undefined8 *)puVar2;
  thunk_FUN_02bb0e9c();
  lVar8 = thunk_FUN_02b79644(*(undefined8 *)puVar5);
  FUN_037a5cd0(lVar8,*(undefined8 *)puVar4);
  lVar9 = thunk_FUN_02b79644(*(undefined8 *)puVar3);
  FUN_04dbdb8c(lVar9,0);
  if (lVar9 != 0) {
    *(undefined8 *)(lVar9 + 0x18) = *(undefined8 *)Method_Newtonsoft_Json_Linq_JToken_op_Explicit__;
    *(undefined4 *)(lVar9 + 0x10) = 0x164;
    thunk_FUN_02bb0e9c();
    puVar2 = Method_Newtonsoft_Json_Linq_JProperty_InsertItem__;
    if (lVar8 != 0) {
      lVar12 = *(long *)(lVar8 + 0x10);
      lVar14 = *(long *)Method_Newtonsoft_Json_Linq_JProperty_InsertItem__;
      *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
      if (lVar12 != 0) {
        uVar1 = *(uint *)(lVar8 + 0x18);
        if (uVar1 < *(uint *)(lVar12 + 0x18)) {
          *(uint *)(lVar8 + 0x18) = uVar1 + 1;
          plVar10 = (long *)(lVar12 + (long)(int)uVar1 * 8 + 0x20);
          *plVar10 = lVar9;
          thunk_FUN_02bb0e9c(plVar10,lVar9);
        }
        else {
          FUN_037a6538(lVar8,lVar9,
                       *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
        }
        lVar9 = thunk_FUN_02b79644(*(undefined8 *)puVar3);
        FUN_04dbdb8c(lVar9,0);
        if (lVar9 != 0) {
          *(undefined8 *)(lVar9 + 0x18) =
               *(undefined8 *)Method_Newtonsoft_Json_Linq_JToken_Replace__;
          *(undefined4 *)(lVar9 + 0x10) = 0x264;
          thunk_FUN_02bb0e9c();
          lVar12 = *(long *)(lVar8 + 0x10);
          lVar14 = *(long *)puVar2;
          *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
          puVar4 = Method_OVRSimpleJSON_JSONLazyCreator_Set<JSONBool>__;
          puVar3 = Method_Newtonsoft_Json_Linq_JProperty_RemoveItemAt__;
          puVar2 = Method_Newtonsoft_Json_Linq_JProperty_ClearItems__;
          if (lVar12 != 0) {
            uVar1 = *(uint *)(lVar8 + 0x18);
            if (uVar1 < *(uint *)(lVar12 + 0x18)) {
              *(uint *)(lVar8 + 0x18) = uVar1 + 1;
              plVar10 = (long *)(lVar12 + (long)(int)uVar1 * 8 + 0x20);
              *plVar10 = lVar9;
              thunk_FUN_02bb0e9c(plVar10,lVar9);
            }
            else {
              FUN_037a6538(lVar8,lVar9,
                           *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
            }
            *(long *)(unaff_x19 + 0x20) = lVar8;
            thunk_FUN_02bb0e9c((long *)(unaff_x19 + 0x20),lVar8);
            lVar8 = thunk_FUN_02b79644(*(undefined8 *)puVar4);
            FUN_037a5cd0(lVar8,*(undefined8 *)puVar3);
            lVar9 = thunk_FUN_02b79644(*(undefined8 *)puVar2);
            FUN_04dbdb8c(lVar9,0);
            puVar5 = Method_Newtonsoft_Json_JsonSerializer_set_ObjectCreationHandling__;
            puVar4 = PTR_DAT_063145b8;
            puVar3 = PTR_DAT_063145b0;
            if (lVar9 != 0) {
              *(undefined8 *)(lVar9 + 0x10) =
                   *(undefined8 *)
                    Method_Oculus_Interaction_Interactable<LocomotionTurnerInteractor,_LocomotionTurnerInteractable>__ctor__
              ;
              thunk_FUN_02bb0e9c();
              *(undefined8 *)(lVar9 + 0x20) = *(undefined8 *)puVar5;
              thunk_FUN_02bb0e9c((undefined8 *)(lVar9 + 0x20));
              uVar11 = *(undefined8 *)puVar3;
              *(undefined4 *)(lVar9 + 0x18) = 0;
              lVar12 = thunk_FUN_02b79644(uVar11);
              FUN_037a5cd0(lVar12,*(undefined8 *)puVar4);
              puVar5 = PTR_DAT_063173b8;
              if (lVar12 != 0) {
                lVar14 = *(long *)(lVar12 + 0x10);
                uVar11 = *(undefined8 *)Method_System_Linq_Enumerable_Select<Collider,_Transform>__;
                lVar15 = *(long *)PTR_DAT_063173b8;
                *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
                puVar7 = Method_OVRSimpleJSON_JSONLazyCreator_Set<JSONNumber>__;
                if (lVar14 != 0) {
                  uVar1 = *(uint *)(lVar12 + 0x18);
                  if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                    *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                    *(undefined8 *)(lVar14 + (long)(int)uVar1 * 8 + 0x20) = uVar11;
                    thunk_FUN_02bb0e9c();
                  }
                  else {
                    FUN_037a6538(lVar12,uVar11,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70))
                    ;
                  }
                  *(long *)(lVar9 + 0x30) = lVar12;
                  thunk_FUN_02bb0e9c((long *)(lVar9 + 0x30),lVar12);
                  lVar12 = thunk_FUN_02b79644(*(undefined8 *)puVar7);
                  FUN_037a5cd0(lVar12,*(undefined8 *)
                                       Method_Newtonsoft_Json_Linq_JPropertyKeyedCollection_Contains__
                              );
                  lVar14 = thunk_FUN_02b79644(*(undefined8 *)
                                               Method_Newtonsoft_Json_Linq_JObject_ValidateToken__);
                  FUN_04dbdb8c(lVar14,0);
                  if (lVar14 != 0) {
                    *(undefined8 *)(lVar14 + 0x18) =
                         *(undefined8 *)
                          Method_Newtonsoft_Json_Serialization_JsonSerializerInternalBase_ClearErrorContext__
                    ;
                    thunk_FUN_02bb0e9c();
                    *(undefined8 *)(lVar14 + 0x10) = *puVar18;
                    thunk_FUN_02bb0e9c();
                    lVar15 = thunk_FUN_02b79644(*(undefined8 *)puVar3);
                    FUN_037a5cd0(lVar15,*(undefined8 *)puVar4);
                    if (lVar15 != 0) {
                      lVar13 = *(long *)(lVar15 + 0x10);
                      uVar11 = *(undefined8 *)Method_Newtonsoft_Json_Linq_JToken_op_Explicit__;
                      lVar16 = *(long *)puVar5;
                      *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
                      if (lVar13 != 0) {
                        uVar1 = *(uint *)(lVar15 + 0x18);
                        if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                          *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                          *(undefined8 *)(lVar13 + (long)(int)uVar1 * 8 + 0x20) = uVar11;
                          thunk_FUN_02bb0e9c();
                        }
                        else {
                          FUN_037a6538(lVar15,uVar11,
                                       *(undefined8 *)
                                        (*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
                        }
                        *(long *)(lVar14 + 0x20) = lVar15;
                        thunk_FUN_02bb0e9c((long *)(lVar14 + 0x20),lVar15);
                        if (lVar12 != 0) {
                          lVar15 = *(long *)(lVar12 + 0x10);
                          lVar13 = *(long *)Method_Newtonsoft_Json_Linq_JProperty_Load__;
                          *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
                          if (lVar15 != 0) {
                            uVar1 = *(uint *)(lVar12 + 0x18);
                            if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                              *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                              plVar10 = (long *)(lVar15 + (long)(int)uVar1 * 8 + 0x20);
                              *plVar10 = lVar14;
                              thunk_FUN_02bb0e9c(plVar10,lVar14);
                            }
                            else {
                              FUN_037a6538(lVar12,lVar14,
                                           *(undefined8 *)
                                            (*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
                            }
                            lVar14 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                  
                                                  Method_Newtonsoft_Json_Linq_JObject_ValidateToken__
                                                  );
                            FUN_04dbdb8c(lVar14,0);
                            if (lVar14 != 0) {
                              *(undefined8 *)(lVar14 + 0x18) =
                                   *(undefined8 *)
                                    Method_Newtonsoft_Json_JsonSerializer_set_ReferenceResolver__;
                              thunk_FUN_02bb0e9c();
                              *(undefined8 *)(lVar14 + 0x10) = *puVar18;
                              thunk_FUN_02bb0e9c();
                              lVar15 = thunk_FUN_02b79644(*(undefined8 *)puVar3);
                              FUN_037a5cd0(lVar15,*(undefined8 *)puVar4);
                              if (lVar15 != 0) {
                                lVar13 = *(long *)(lVar15 + 0x10);
                                uVar11 = *(undefined8 *)Method_Newtonsoft_Json_Linq_JToken_Replace__
                                ;
                                lVar16 = *(long *)puVar5;
                                *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
                                if (lVar13 != 0) {
                                  uVar1 = *(uint *)(lVar15 + 0x18);
                                  if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                    *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                    *(undefined8 *)(lVar13 + (long)(int)uVar1 * 8 + 0x20) = uVar11;
                                    thunk_FUN_02bb0e9c();
                                  }
                                  else {
                                    FUN_037a6538(lVar15,uVar11,
                                                 *(undefined8 *)
                                                  (*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70
                                                  ));
                                  }
                                  *(long *)(lVar14 + 0x20) = lVar15;
                                  thunk_FUN_02bb0e9c((long *)(lVar14 + 0x20),lVar15);
                                  lVar15 = *(long *)(lVar12 + 0x10);
                                  lVar13 = *(long *)Method_Newtonsoft_Json_Linq_JProperty_Load__;
                                  *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
                                  puVar7 = Method_OVRSimpleJSON_JSONLazyCreator_Set<JSONNumber>__;
                                  if (lVar15 != 0) {
                                    uVar1 = *(uint *)(lVar12 + 0x18);
                                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                      *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                      plVar10 = (long *)(lVar15 + (long)(int)uVar1 * 8 + 0x20);
                                      *plVar10 = lVar14;
                                      thunk_FUN_02bb0e9c(plVar10,lVar14);
                                    }
                                    else {
                                      FUN_037a6538(lVar12,lVar14,
                                                   *(undefined8 *)
                                                    (*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) +
                                                    0x70));
                                    }
                                    *(long *)(lVar9 + 0x28) = lVar12;
                                    thunk_FUN_02bb0e9c((long *)(lVar9 + 0x28),lVar12);
                                    if (lVar8 != 0) {
                                      lVar12 = *(long *)(lVar8 + 0x10);
                                      lVar14 = *(long *)
                                                Method_Newtonsoft_Json_Linq_JProperty_RemoveItem__;
                                      *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
                                      if (lVar12 != 0) {
                                        uVar1 = *(uint *)(lVar8 + 0x18);
                                        if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                          *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                                          plVar10 = (long *)(lVar12 + (long)(int)uVar1 * 8 + 0x20);
                                          *plVar10 = lVar9;
                                          thunk_FUN_02bb0e9c(plVar10,lVar9);
                                        }
                                        else {
                                          FUN_037a6538(lVar8,lVar9,
                                                       *(undefined8 *)
                                                        (*(long *)(*(long *)(lVar14 + 0x20) + 0xc0)
                                                        + 0x70));
                                        }
                                        lVar9 = thunk_FUN_02b79644(*(undefined8 *)puVar2);
                                        FUN_04dbdb8c(lVar9,0);
                                        puVar6 = 
                                        Method_Newtonsoft_Json_JsonSerializer_set_MissingMemberHandling__
                                        ;
                                        if (lVar9 != 0) {
                                          *(undefined8 *)(lVar9 + 0x10) =
                                               *(undefined8 *)
                                                Method_Oculus_Interaction_Interactable<PokeInteractor,_PokeInteractable>_get_Interactors__
                                          ;
                                          thunk_FUN_02bb0e9c();
                                          *(undefined8 *)(lVar9 + 0x20) = *(undefined8 *)puVar6;
                                          thunk_FUN_02bb0e9c((undefined8 *)(lVar9 + 0x20));
                                          uVar11 = *(undefined8 *)puVar3;
                                          *(undefined4 *)(lVar9 + 0x18) = 0;
                                          lVar12 = thunk_FUN_02b79644(uVar11);
                                          FUN_037a5cd0(lVar12,*(undefined8 *)puVar4);
                                          if (lVar12 != 0) {
                                            lVar14 = *(long *)(lVar12 + 0x10);
                                            uVar11 = *(undefined8 *)
                                                                                                            
                                                  Method_System_Linq_Enumerable_Select<FieldInfo,_string>__
                                            ;
                                            lVar15 = *(long *)puVar5;
                                            *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
                                            if (lVar14 != 0) {
                                              uVar1 = *(uint *)(lVar12 + 0x18);
                                              if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                *(undefined8 *)
                                                 (lVar14 + (long)(int)uVar1 * 8 + 0x20) = uVar11;
                                                thunk_FUN_02bb0e9c();
                                              }
                                              else {
                                                FUN_037a6538(lVar12,uVar11,
                                                             *(undefined8 *)
                                                              (*(long *)(*(long *)(lVar15 + 0x20) +
                                                                        0xc0) + 0x70));
                                              }
                                              *(long *)(lVar9 + 0x30) = lVar12;
                                              thunk_FUN_02bb0e9c((long *)(lVar9 + 0x30),lVar12);
                                              lVar12 = thunk_FUN_02b79644(*(undefined8 *)puVar7);
                                              FUN_037a5cd0(lVar12,*(undefined8 *)
                                                                                                                                      
                                                  Method_Newtonsoft_Json_Linq_JPropertyKeyedCollection_Contains__
                                                  );
                                              lVar14 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                      
                                                  Method_Newtonsoft_Json_Linq_JObject_ValidateToken__
                                                  );
                                              FUN_04dbdb8c(lVar14,0);
                                              if (lVar14 != 0) {
                                                *(undefined8 *)(lVar14 + 0x18) =
                                                     *(undefined8 *)
                                                                                                            
                                                  Method_Newtonsoft_Json_JsonSerializer_set_TypeNameAssemblyFormatHandling__
                                                ;
                                                thunk_FUN_02bb0e9c();
                                                *(undefined8 *)(lVar14 + 0x10) = *puVar18;
                                                thunk_FUN_02bb0e9c();
                                                lVar15 = thunk_FUN_02b79644(*(undefined8 *)puVar3);
                                                FUN_037a5cd0(lVar15,*(undefined8 *)puVar4);
                                                if (lVar15 != 0) {
                                                  lVar13 = *(long *)(lVar15 + 0x10);
                                                  uVar11 = *(undefined8 *)
                                                                                                                        
                                                  Method_Newtonsoft_Json_Linq_JToken_op_Explicit__;
                                                  lVar16 = *(long *)puVar5;
                                                  *(int *)(lVar15 + 0x1c) =
                                                       *(int *)(lVar15 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar15 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar13 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar11;
                                                      thunk_FUN_02bb0e9c();
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar15,uVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar14 + 0x20) = lVar15;
                                                  thunk_FUN_02bb0e9c((long *)(lVar14 + 0x20),lVar15)
                                                  ;
                                                  if (lVar12 != 0) {
                                                    lVar15 = *(long *)(lVar12 + 0x10);
                                                    lVar13 = *(long *)
                                                  Method_Newtonsoft_Json_Linq_JProperty_Load__;
                                                  *(int *)(lVar12 + 0x1c) =
                                                       *(int *)(lVar12 + 0x1c) + 1;
                                                  if (lVar15 != 0) {
                                                    uVar1 = *(uint *)(lVar12 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                      plVar10 = (long *)(lVar15 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar10 = lVar14;
                                                      thunk_FUN_02bb0e9c(plVar10,lVar14);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar12,lVar14,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar13 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar14 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                              
                                                  Method_Newtonsoft_Json_Linq_JObject_ValidateToken__
                                                  );
                                                  FUN_04dbdb8c(lVar14,0);
                                                  if (lVar14 != 0) {
                                                    *(undefined8 *)(lVar14 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Newtonsoft_Json_JsonSerializer_set_PreserveReferencesHandling__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar14 + 0x10) = *puVar18;
                                                  thunk_FUN_02bb0e9c();
                                                  lVar15 = thunk_FUN_02b79644(*(undefined8 *)puVar3)
                                                  ;
                                                  FUN_037a5cd0(lVar15,*(undefined8 *)puVar4);
                                                  if (lVar15 != 0) {
                                                    lVar13 = *(long *)(lVar15 + 0x10);
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  Method_Newtonsoft_Json_Linq_JToken_Replace__;
                                                  lVar16 = *(long *)puVar5;
                                                  *(int *)(lVar15 + 0x1c) =
                                                       *(int *)(lVar15 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar15 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar13 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar11;
                                                      thunk_FUN_02bb0e9c();
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar15,uVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar14 + 0x20) = lVar15;
                                                  thunk_FUN_02bb0e9c((long *)(lVar14 + 0x20),lVar15)
                                                  ;
                                                  lVar15 = *(long *)(lVar12 + 0x10);
                                                  lVar13 = *(long *)
                                                  Method_Newtonsoft_Json_Linq_JProperty_Load__;
                                                  *(int *)(lVar12 + 0x1c) =
                                                       *(int *)(lVar12 + 0x1c) + 1;
                                                  puVar7 = 
                                                  Method_OVRSimpleJSON_JSONLazyCreator_Set<JSONNumber>__
                                                  ;
                                                  if (lVar15 != 0) {
                                                    uVar1 = *(uint *)(lVar12 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                      plVar10 = (long *)(lVar15 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar10 = lVar14;
                                                      thunk_FUN_02bb0e9c(plVar10,lVar14);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar12,lVar14,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar13 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x28) = lVar12;
                                                  thunk_FUN_02bb0e9c((long *)(lVar9 + 0x28),lVar12);
                                                  lVar12 = *(long *)(lVar8 + 0x10);
                                                  lVar14 = *(long *)
                                                  Method_Newtonsoft_Json_Linq_JProperty_RemoveItem__
                                                  ;
                                                  *(int *)(lVar8 + 0x1c) =
                                                       *(int *)(lVar8 + 0x1c) + 1;
                                                  if (lVar12 != 0) {
                                                    uVar1 = *(uint *)(lVar8 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                      *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                                                      plVar10 = (long *)(lVar12 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar10 = lVar9;
                                                      thunk_FUN_02bb0e9c(plVar10,lVar9);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar8,lVar9,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar9 = thunk_FUN_02b79644(*(undefined8 *)puVar2);
                                                  FUN_04dbdb8c(lVar9,0);
                                                  puVar6 = 
                                                  OVR_OpenVR_IVRSystem__GetControllerStateWithPose_TypeInfo
                                                  ;
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x10) =
                                                         *(undefined8 *)PTR_DAT_063210b8;
                                                    thunk_FUN_02bb0e9c();
                                                    *(undefined8 *)(lVar9 + 0x20) =
                                                         *(undefined8 *)puVar6;
                                                    thunk_FUN_02bb0e9c((undefined8 *)(lVar9 + 0x20))
                                                    ;
                                                    uVar11 = *(undefined8 *)puVar3;
                                                    *(undefined4 *)(lVar9 + 0x18) = 0;
                                                    lVar12 = thunk_FUN_02b79644(uVar11);
                                                    FUN_037a5cd0(lVar12,*(undefined8 *)puVar4);
                                                    if (lVar12 != 0) {
                                                      lVar14 = *(long *)(lVar12 + 0x10);
                                                      uVar11 = *(undefined8 *)
                                                                                                                                
                                                  Method_System_Linq_Enumerable_Select<Enum,_int>__;
                                                  lVar15 = *(long *)puVar5;
                                                  *(int *)(lVar12 + 0x1c) =
                                                       *(int *)(lVar12 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar12 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar14 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar11;
                                                      thunk_FUN_02bb0e9c();
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar12,uVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x30) = lVar12;
                                                  thunk_FUN_02bb0e9c((long *)(lVar9 + 0x30),lVar12);
                                                  lVar12 = thunk_FUN_02b79644(*(undefined8 *)puVar7)
                                                  ;
                                                  FUN_037a5cd0(lVar12,*(undefined8 *)
                                                                                                                                              
                                                  Method_Newtonsoft_Json_Linq_JPropertyKeyedCollection_Contains__
                                                  );
                                                  lVar14 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                              
                                                  Method_Newtonsoft_Json_Linq_JObject_ValidateToken__
                                                  );
                                                  FUN_04dbdb8c(lVar14,0);
                                                  if (lVar14 != 0) {
                                                    *(undefined8 *)(lVar14 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Newtonsoft_Json_JsonReader_set_DateParseHandling__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar14 + 0x10) = *puVar18;
                                                  thunk_FUN_02bb0e9c();
                                                  if (lVar12 != 0) {
                                                    lVar15 = *(long *)(lVar12 + 0x10);
                                                    lVar13 = *(long *)
                                                  Method_Newtonsoft_Json_Linq_JProperty_Load__;
                                                  *(int *)(lVar12 + 0x1c) =
                                                       *(int *)(lVar12 + 0x1c) + 1;
                                                  if (lVar15 != 0) {
                                                    uVar1 = *(uint *)(lVar12 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                      plVar10 = (long *)(lVar15 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar10 = lVar14;
                                                      thunk_FUN_02bb0e9c(plVar10,lVar14);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar12,lVar14,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar13 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x28) = lVar12;
                                                  thunk_FUN_02bb0e9c((long *)(lVar9 + 0x28),lVar12);
                                                  lVar12 = *(long *)(lVar8 + 0x10);
                                                  lVar14 = *(long *)
                                                  Method_Newtonsoft_Json_Linq_JProperty_RemoveItem__
                                                  ;
                                                  *(int *)(lVar8 + 0x1c) =
                                                       *(int *)(lVar8 + 0x1c) + 1;
                                                  if (lVar12 != 0) {
                                                    uVar1 = *(uint *)(lVar8 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                      *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                                                      plVar10 = (long *)(lVar12 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar10 = lVar9;
                                                      thunk_FUN_02bb0e9c(plVar10,lVar9);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar8,lVar9,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar9 = thunk_FUN_02b79644(*(undefined8 *)puVar2);
                                                  FUN_04dbdb8c(lVar9,0);
                                                  puVar6 = PTR_DAT_0631b1e8;
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Oculus_Interaction_Interactable<HandGrabInteractor,_HandGrabInteractable>_remove_WhenStateChanged__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar9 + 0x20) =
                                                       *(undefined8 *)puVar6;
                                                  thunk_FUN_02bb0e9c((undefined8 *)(lVar9 + 0x20));
                                                  uVar11 = *(undefined8 *)puVar3;
                                                  *(undefined4 *)(lVar9 + 0x18) = 1;
                                                  lVar12 = thunk_FUN_02b79644(uVar11);
                                                  FUN_037a5cd0(lVar12,*(undefined8 *)puVar4);
                                                  if (lVar12 != 0) {
                                                    lVar14 = *(long *)(lVar12 + 0x10);
                                                    uVar11 = *(undefined8 *)puVar6;
                                                    lVar15 = *(long *)puVar5;
                                                    *(int *)(lVar12 + 0x1c) =
                                                         *(int *)(lVar12 + 0x1c) + 1;
                                                    if (lVar14 != 0) {
                                                      uVar1 = *(uint *)(lVar12 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                        *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                        *(undefined8 *)
                                                         (lVar14 + (long)(int)uVar1 * 8 + 0x20) =
                                                             uVar11;
                                                        thunk_FUN_02bb0e9c();
                                                      }
                                                      else {
                                                        FUN_037a6538(lVar12,uVar11,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x30) = lVar12;
                                                  thunk_FUN_02bb0e9c((long *)(lVar9 + 0x30),lVar12);
                                                  lVar12 = thunk_FUN_02b79644(*(undefined8 *)puVar7)
                                                  ;
                                                  FUN_037a5cd0(lVar12,*(undefined8 *)
                                                                                                                                              
                                                  Method_Newtonsoft_Json_Linq_JPropertyKeyedCollection_Contains__
                                                  );
                                                  lVar14 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                              
                                                  Method_Newtonsoft_Json_Linq_JObject_ValidateToken__
                                                  );
                                                  FUN_04dbdb8c(lVar14,0);
                                                  puVar7 = 
                                                  Method_Newtonsoft_Json_JsonReader_set_DateTimeZoneHandling__
                                                  ;
                                                  if (lVar14 != 0) {
                                                    *(undefined8 *)(lVar14 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Newtonsoft_Json_JsonReader_set_DateTimeZoneHandling__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar14 + 0x10) = *puVar18;
                                                  thunk_FUN_02bb0e9c();
                                                  if (lVar12 != 0) {
                                                    lVar15 = *(long *)(lVar12 + 0x10);
                                                    lVar13 = *(long *)
                                                  Method_Newtonsoft_Json_Linq_JProperty_Load__;
                                                  *(int *)(lVar12 + 0x1c) =
                                                       *(int *)(lVar12 + 0x1c) + 1;
                                                  if (lVar15 != 0) {
                                                    uVar1 = *(uint *)(lVar12 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                      plVar10 = (long *)(lVar15 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar10 = lVar14;
                                                      thunk_FUN_02bb0e9c(plVar10,lVar14);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar12,lVar14,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar13 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x28) = lVar12;
                                                  thunk_FUN_02bb0e9c((long *)(lVar9 + 0x28),lVar12);
                                                  lVar12 = *(long *)(lVar8 + 0x10);
                                                  lVar14 = *(long *)
                                                  Method_Newtonsoft_Json_Linq_JProperty_RemoveItem__
                                                  ;
                                                  *(int *)(lVar8 + 0x1c) =
                                                       *(int *)(lVar8 + 0x1c) + 1;
                                                  if (lVar12 != 0) {
                                                    uVar1 = *(uint *)(lVar8 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                      *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                                                      plVar10 = (long *)(lVar12 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar10 = lVar9;
                                                      thunk_FUN_02bb0e9c(plVar10,lVar9);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar8,lVar9,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar9 = thunk_FUN_02b79644(*(undefined8 *)puVar2);
                                                  FUN_04dbdb8c(lVar9,0);
                                                  puVar6 = 
                                                  Method_Newtonsoft_Json_JsonSerializer_set_NullValueHandling__
                                                  ;
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Oculus_Interaction_Interactable<HandGrabInteractor,_HandGrabInteractable>_add_WhenStateChanged__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar9 + 0x20) =
                                                       *(undefined8 *)puVar6;
                                                  thunk_FUN_02bb0e9c((undefined8 *)(lVar9 + 0x20));
                                                  uVar11 = *(undefined8 *)puVar3;
                                                  *(undefined4 *)(lVar9 + 0x18) = 0;
                                                  lVar12 = thunk_FUN_02b79644(uVar11);
                                                  FUN_037a5cd0(lVar12,*(undefined8 *)puVar4);
                                                  if (lVar12 != 0) {
                                                    lVar14 = *(long *)(lVar12 + 0x10);
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Linq_Enumerable_Select<DataColumn,_Type>__
                                                  ;
                                                  lVar15 = *(long *)puVar5;
                                                  *(int *)(lVar12 + 0x1c) =
                                                       *(int *)(lVar12 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar12 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar14 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar11;
                                                      thunk_FUN_02bb0e9c();
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar12,uVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x30) = lVar12;
                                                  thunk_FUN_02bb0e9c((long *)(lVar9 + 0x30),lVar12);
                                                  lVar12 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                              
                                                  Method_OVRSimpleJSON_JSONLazyCreator_Set<JSONNumber>__
                                                  );
                                                  FUN_037a5cd0(lVar12,*(undefined8 *)
                                                                                                                                              
                                                  Method_Newtonsoft_Json_Linq_JPropertyKeyedCollection_Contains__
                                                  );
                                                  lVar14 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                              
                                                  Method_Newtonsoft_Json_Linq_JObject_ValidateToken__
                                                  );
                                                  FUN_04dbdb8c(lVar14,0);
                                                  if (lVar14 != 0) {
                                                    *(undefined8 *)(lVar14 + 0x18) =
                                                         *(undefined8 *)puVar7;
                                                    thunk_FUN_02bb0e9c();
                                                    *(undefined8 *)(lVar14 + 0x10) = *puVar18;
                                                    thunk_FUN_02bb0e9c();
                                                    puVar7 = 
                                                  Method_Newtonsoft_Json_Linq_JProperty_Load__;
                                                  if (lVar12 != 0) {
                                                    lVar15 = *(long *)(lVar12 + 0x10);
                                                    *(int *)(lVar12 + 0x1c) =
                                                         *(int *)(lVar12 + 0x1c) + 1;
                                                    puVar6 = 
                                                  Method_OVRSimpleJSON_JSONLazyCreator_Set<JSONNumber>__
                                                  ;
                                                  if (lVar15 != 0) {
                                                    uVar1 = *(uint *)(lVar12 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                      plVar10 = (long *)(lVar15 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar10 = lVar14;
                                                      thunk_FUN_02bb0e9c(plVar10,lVar14);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar12,lVar14,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(*(long *)
                                                  puVar7 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x28) = lVar12;
                                                  thunk_FUN_02bb0e9c((long *)(lVar9 + 0x28),lVar12);
                                                  lVar12 = *(long *)(lVar8 + 0x10);
                                                  lVar14 = *(long *)
                                                  Method_Newtonsoft_Json_Linq_JProperty_RemoveItem__
                                                  ;
                                                  *(int *)(lVar8 + 0x1c) =
                                                       *(int *)(lVar8 + 0x1c) + 1;
                                                  if (lVar12 != 0) {
                                                    uVar1 = *(uint *)(lVar8 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                      *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                                                      plVar10 = (long *)(lVar12 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar10 = lVar9;
                                                      thunk_FUN_02bb0e9c(plVar10,lVar9);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar8,lVar9,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar9 = thunk_FUN_02b79644(*(undefined8 *)puVar2);
                                                  FUN_04dbdb8c(lVar9,0);
                                                  puVar7 = PTR_DAT_0631b1f0;
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Oculus_Interaction_Interactable<HandGrabUseInteractor,_HandGrabUseInteractable>_SelectingInteractorAdded__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar9 + 0x20) =
                                                       *(undefined8 *)puVar7;
                                                  thunk_FUN_02bb0e9c((undefined8 *)(lVar9 + 0x20));
                                                  uVar11 = *(undefined8 *)puVar3;
                                                  *(undefined4 *)(lVar9 + 0x18) = 1;
                                                  lVar12 = thunk_FUN_02b79644(uVar11);
                                                  FUN_037a5cd0(lVar12,*(undefined8 *)puVar4);
                                                  if (lVar12 != 0) {
                                                    lVar14 = *(long *)(lVar12 + 0x10);
                                                    uVar11 = *(undefined8 *)puVar7;
                                                    lVar15 = *(long *)puVar5;
                                                    *(int *)(lVar12 + 0x1c) =
                                                         *(int *)(lVar12 + 0x1c) + 1;
                                                    if (lVar14 != 0) {
                                                      uVar1 = *(uint *)(lVar12 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                        *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                        *(undefined8 *)
                                                         (lVar14 + (long)(int)uVar1 * 8 + 0x20) =
                                                             uVar11;
                                                        thunk_FUN_02bb0e9c();
                                                      }
                                                      else {
                                                        FUN_037a6538(lVar12,uVar11,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x30) = lVar12;
                                                  thunk_FUN_02bb0e9c((long *)(lVar9 + 0x30),lVar12);
                                                  lVar12 = thunk_FUN_02b79644(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_037a5cd0(lVar12,*(undefined8 *)
                                                                                                                                              
                                                  Method_Newtonsoft_Json_Linq_JPropertyKeyedCollection_Contains__
                                                  );
                                                  lVar14 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                              
                                                  Method_Newtonsoft_Json_Linq_JObject_ValidateToken__
                                                  );
                                                  FUN_04dbdb8c(lVar14,0);
                                                  puVar7 = 
                                                  Method_Newtonsoft_Json_JsonSerializer_set_SerializationBinder__
                                                  ;
                                                  if (lVar14 != 0) {
                                                    *(undefined8 *)(lVar14 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Newtonsoft_Json_JsonSerializer_set_SerializationBinder__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar14 + 0x10) = *puVar18;
                                                  thunk_FUN_02bb0e9c();
                                                  if (lVar12 != 0) {
                                                    lVar15 = *(long *)(lVar12 + 0x10);
                                                    lVar13 = *(long *)
                                                  Method_Newtonsoft_Json_Linq_JProperty_Load__;
                                                  *(int *)(lVar12 + 0x1c) =
                                                       *(int *)(lVar12 + 0x1c) + 1;
                                                  if (lVar15 != 0) {
                                                    uVar1 = *(uint *)(lVar12 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                      plVar10 = (long *)(lVar15 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar10 = lVar14;
                                                      thunk_FUN_02bb0e9c(plVar10,lVar14);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar12,lVar14,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar13 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x28) = lVar12;
                                                  thunk_FUN_02bb0e9c((long *)(lVar9 + 0x28),lVar12);
                                                  lVar12 = *(long *)(lVar8 + 0x10);
                                                  lVar14 = *(long *)
                                                  Method_Newtonsoft_Json_Linq_JProperty_RemoveItem__
                                                  ;
                                                  *(int *)(lVar8 + 0x1c) =
                                                       *(int *)(lVar8 + 0x1c) + 1;
                                                  if (lVar12 != 0) {
                                                    uVar1 = *(uint *)(lVar8 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                      *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                                                      plVar10 = (long *)(lVar12 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar10 = lVar9;
                                                      thunk_FUN_02bb0e9c(plVar10,lVar9);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar8,lVar9,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar9 = thunk_FUN_02b79644(*(undefined8 *)puVar2);
                                                  FUN_04dbdb8c(lVar9,0);
                                                  puVar6 = 
                                                  Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_AddReference__
                                                  ;
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Oculus_Interaction_Interactable<HandGrabUseInteractor,_HandGrabUseInteractable>_Awake__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar9 + 0x20) =
                                                       *(undefined8 *)puVar6;
                                                  thunk_FUN_02bb0e9c((undefined8 *)(lVar9 + 0x20));
                                                  uVar11 = *(undefined8 *)puVar3;
                                                  *(undefined4 *)(lVar9 + 0x18) = 0;
                                                  lVar12 = thunk_FUN_02b79644(uVar11);
                                                  FUN_037a5cd0(lVar12,*(undefined8 *)puVar4);
                                                  if (lVar12 != 0) {
                                                    lVar14 = *(long *)(lVar12 + 0x10);
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Linq_Enumerable_Select<AndroidAxis,_string>__
                                                  ;
                                                  lVar15 = *(long *)puVar5;
                                                  *(int *)(lVar12 + 0x1c) =
                                                       *(int *)(lVar12 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar12 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar14 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar11;
                                                      thunk_FUN_02bb0e9c();
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar12,uVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x30) = lVar12;
                                                  thunk_FUN_02bb0e9c((long *)(lVar9 + 0x30),lVar12);
                                                  lVar12 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                              
                                                  Method_OVRSimpleJSON_JSONLazyCreator_Set<JSONNumber>__
                                                  );
                                                  FUN_037a5cd0(lVar12,*(undefined8 *)
                                                                                                                                              
                                                  Method_Newtonsoft_Json_Linq_JPropertyKeyedCollection_Contains__
                                                  );
                                                  lVar14 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                              
                                                  Method_Newtonsoft_Json_Linq_JObject_ValidateToken__
                                                  );
                                                  FUN_04dbdb8c(lVar14,0);
                                                  if (lVar14 != 0) {
                                                    *(undefined8 *)(lVar14 + 0x18) =
                                                         *(undefined8 *)puVar7;
                                                    thunk_FUN_02bb0e9c();
                                                    *(undefined8 *)(lVar14 + 0x10) = *puVar18;
                                                    thunk_FUN_02bb0e9c();
                                                    puVar7 = 
                                                  Method_Newtonsoft_Json_Linq_JProperty_Load__;
                                                  if (lVar12 != 0) {
                                                    lVar15 = *(long *)(lVar12 + 0x10);
                                                    *(int *)(lVar12 + 0x1c) =
                                                         *(int *)(lVar12 + 0x1c) + 1;
                                                    puVar6 = 
                                                  Method_OVRSimpleJSON_JSONLazyCreator_Set<JSONNumber>__
                                                  ;
                                                  if (lVar15 != 0) {
                                                    uVar1 = *(uint *)(lVar12 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                      plVar10 = (long *)(lVar15 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar10 = lVar14;
                                                      thunk_FUN_02bb0e9c(plVar10,lVar14);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar12,lVar14,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(*(long *)
                                                  puVar7 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x28) = lVar12;
                                                  thunk_FUN_02bb0e9c((long *)(lVar9 + 0x28),lVar12);
                                                  lVar12 = *(long *)(lVar8 + 0x10);
                                                  lVar14 = *(long *)
                                                  Method_Newtonsoft_Json_Linq_JProperty_RemoveItem__
                                                  ;
                                                  *(int *)(lVar8 + 0x1c) =
                                                       *(int *)(lVar8 + 0x1c) + 1;
                                                  if (lVar12 != 0) {
                                                    uVar1 = *(uint *)(lVar8 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                      *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                                                      plVar10 = (long *)(lVar12 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar10 = lVar9;
                                                      thunk_FUN_02bb0e9c(plVar10,lVar9);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar8,lVar9,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar9 = thunk_FUN_02b79644(*(undefined8 *)puVar2);
                                                  FUN_04dbdb8c(lVar9,0);
                                                  puVar7 = 
                                                  Method_System_Linq_Enumerable_Empty<Type>__;
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  System_Collections_Generic_Queue<JobHandle>_TypeInfo
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar9 + 0x20) =
                                                       *(undefined8 *)puVar7;
                                                  thunk_FUN_02bb0e9c((undefined8 *)(lVar9 + 0x20));
                                                  uVar11 = *(undefined8 *)puVar3;
                                                  *(undefined4 *)(lVar9 + 0x18) = 2;
                                                  lVar12 = thunk_FUN_02b79644(uVar11);
                                                  FUN_037a5cd0(lVar12,*(undefined8 *)puVar4);
                                                  if (lVar12 != 0) {
                                                    lVar14 = *(long *)(lVar12 + 0x10);
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Linq_Enumerable_Select<KeyValuePair<string,_JsonParser_JsonValue>,_string>__
                                                  ;
                                                  lVar15 = *(long *)puVar5;
                                                  *(int *)(lVar12 + 0x1c) =
                                                       *(int *)(lVar12 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar12 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar14 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar11;
                                                      thunk_FUN_02bb0e9c();
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar12,uVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x30) = lVar12;
                                                  thunk_FUN_02bb0e9c((long *)(lVar9 + 0x30),lVar12);
                                                  lVar12 = thunk_FUN_02b79644(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_037a5cd0(lVar12,*(undefined8 *)
                                                                                                                                              
                                                  Method_Newtonsoft_Json_Linq_JPropertyKeyedCollection_Contains__
                                                  );
                                                  lVar14 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                              
                                                  Method_Newtonsoft_Json_Linq_JObject_ValidateToken__
                                                  );
                                                  FUN_04dbdb8c(lVar14,0);
                                                  if (lVar14 != 0) {
                                                    *(undefined8 *)(lVar14 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Newtonsoft_Json_JsonSerializer_set_DefaultValueHandling__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar14 + 0x10) = *puVar18;
                                                  thunk_FUN_02bb0e9c();
                                                  if (lVar12 != 0) {
                                                    lVar15 = *(long *)(lVar12 + 0x10);
                                                    lVar13 = *(long *)
                                                  Method_Newtonsoft_Json_Linq_JProperty_Load__;
                                                  *(int *)(lVar12 + 0x1c) =
                                                       *(int *)(lVar12 + 0x1c) + 1;
                                                  if (lVar15 != 0) {
                                                    uVar1 = *(uint *)(lVar12 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                      plVar10 = (long *)(lVar15 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar10 = lVar14;
                                                      thunk_FUN_02bb0e9c(plVar10,lVar14);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar12,lVar14,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar13 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x28) = lVar12;
                                                  thunk_FUN_02bb0e9c((long *)(lVar9 + 0x28),lVar12);
                                                  lVar12 = *(long *)(lVar8 + 0x10);
                                                  lVar14 = *(long *)
                                                  Method_Newtonsoft_Json_Linq_JProperty_RemoveItem__
                                                  ;
                                                  *(int *)(lVar8 + 0x1c) =
                                                       *(int *)(lVar8 + 0x1c) + 1;
                                                  if (lVar12 != 0) {
                                                    uVar1 = *(uint *)(lVar8 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                      *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                                                      plVar10 = (long *)(lVar12 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar10 = lVar9;
                                                      thunk_FUN_02bb0e9c(plVar10,lVar9);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar8,lVar9,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar9 = thunk_FUN_02b79644(*(undefined8 *)puVar2);
                                                  FUN_04dbdb8c(lVar9,0);
                                                  puVar7 = 
                                                  Method_Newtonsoft_Json_JsonReader_set_MaxDepth__;
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Oculus_Interaction_Interactable<PokeInteractor,_PokeInteractable>_get_State__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar9 + 0x20) =
                                                       *(undefined8 *)puVar7;
                                                  thunk_FUN_02bb0e9c((undefined8 *)(lVar9 + 0x20));
                                                  uVar11 = *(undefined8 *)puVar3;
                                                  *(undefined4 *)(lVar9 + 0x18) = 0;
                                                  lVar12 = thunk_FUN_02b79644(uVar11);
                                                  FUN_037a5cd0(lVar12,*(undefined8 *)puVar4);
                                                  if (lVar12 != 0) {
                                                    lVar14 = *(long *)(lVar12 + 0x10);
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Linq_Enumerable_Select<EnumMemberAttribute,_string>__
                                                  ;
                                                  lVar15 = *(long *)puVar5;
                                                  *(int *)(lVar12 + 0x1c) =
                                                       *(int *)(lVar12 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar12 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar14 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar11;
                                                      thunk_FUN_02bb0e9c();
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar12,uVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x30) = lVar12;
                                                  thunk_FUN_02bb0e9c((long *)(lVar9 + 0x30),lVar12);
                                                  lVar12 = thunk_FUN_02b79644(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_037a5cd0(lVar12,*(undefined8 *)
                                                                                                                                              
                                                  Method_Newtonsoft_Json_Linq_JPropertyKeyedCollection_Contains__
                                                  );
                                                  lVar14 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                              
                                                  Method_Newtonsoft_Json_Linq_JObject_ValidateToken__
                                                  );
                                                  FUN_04dbdb8c(lVar14,0);
                                                  if (lVar14 != 0) {
                                                    *(undefined8 *)(lVar14 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Newtonsoft_Json_JsonSerializer_Deserialize<RegexOptions>__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar14 + 0x10) = *puVar18;
                                                  thunk_FUN_02bb0e9c();
                                                  if (lVar12 != 0) {
                                                    lVar15 = *(long *)(lVar12 + 0x10);
                                                    lVar13 = *(long *)
                                                  Method_Newtonsoft_Json_Linq_JProperty_Load__;
                                                  *(int *)(lVar12 + 0x1c) =
                                                       *(int *)(lVar12 + 0x1c) + 1;
                                                  if (lVar15 != 0) {
                                                    uVar1 = *(uint *)(lVar12 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                      plVar10 = (long *)(lVar15 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar10 = lVar14;
                                                      thunk_FUN_02bb0e9c(plVar10,lVar14);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar12,lVar14,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar13 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x28) = lVar12;
                                                  thunk_FUN_02bb0e9c((long *)(lVar9 + 0x28),lVar12);
                                                  lVar12 = *(long *)(lVar8 + 0x10);
                                                  lVar14 = *(long *)
                                                  Method_Newtonsoft_Json_Linq_JProperty_RemoveItem__
                                                  ;
                                                  *(int *)(lVar8 + 0x1c) =
                                                       *(int *)(lVar8 + 0x1c) + 1;
                                                  if (lVar12 != 0) {
                                                    uVar1 = *(uint *)(lVar8 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                      *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                                                      plVar10 = (long *)(lVar12 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar10 = lVar9;
                                                      thunk_FUN_02bb0e9c(plVar10,lVar9);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar8,lVar9,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar9 = thunk_FUN_02b79644(*(undefined8 *)puVar2);
                                                  FUN_04dbdb8c(lVar9,0);
                                                  puVar7 = 
                                                  Method_LitJson_JsonData_LitJson_IJsonWrapper_GetBoolean__
                                                  ;
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x10) =
                                                         *(undefined8 *)
                                                          Method_LitJson_JsonData__ctor__;
                                                    thunk_FUN_02bb0e9c();
                                                    *(undefined8 *)(lVar9 + 0x20) =
                                                         *(undefined8 *)puVar7;
                                                    thunk_FUN_02bb0e9c((undefined8 *)(lVar9 + 0x20))
                                                    ;
                                                    uVar11 = *(undefined8 *)puVar3;
                                                    *(undefined4 *)(lVar9 + 0x18) = 3;
                                                    lVar12 = thunk_FUN_02b79644(uVar11);
                                                    FUN_037a5cd0(lVar12,*(undefined8 *)puVar4);
                                                    if (lVar12 != 0) {
                                                      lVar14 = *(long *)(lVar12 + 0x10);
                                                      uVar11 = *(undefined8 *)
                                                                                                                                
                                                  Method_System_Globalization_JapaneseCalendar_ToFourDigitYear__
                                                  ;
                                                  lVar15 = *(long *)puVar5;
                                                  *(int *)(lVar12 + 0x1c) =
                                                       *(int *)(lVar12 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar12 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar14 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar11;
                                                      thunk_FUN_02bb0e9c();
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar12,uVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x30) = lVar12;
                                                  thunk_FUN_02bb0e9c((long *)(lVar9 + 0x30),lVar12);
                                                  lVar12 = thunk_FUN_02b79644(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_037a5cd0(lVar12,*(undefined8 *)
                                                                                                                                              
                                                  Method_Newtonsoft_Json_Linq_JPropertyKeyedCollection_Contains__
                                                  );
                                                  lVar14 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                              
                                                  Method_Newtonsoft_Json_Linq_JObject_ValidateToken__
                                                  );
                                                  FUN_04dbdb8c(lVar14,0);
                                                  if (lVar14 != 0) {
                                                    *(undefined8 *)(lVar14 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_LitJson_JsonData_LitJson_IJsonWrapper_GetLong__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar14 + 0x10) = *puVar18;
                                                  thunk_FUN_02bb0e9c();
                                                  if (lVar12 != 0) {
                                                    lVar15 = *(long *)(lVar12 + 0x10);
                                                    lVar13 = *(long *)
                                                  Method_Newtonsoft_Json_Linq_JProperty_Load__;
                                                  *(int *)(lVar12 + 0x1c) =
                                                       *(int *)(lVar12 + 0x1c) + 1;
                                                  if (lVar15 != 0) {
                                                    uVar1 = *(uint *)(lVar12 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                      plVar10 = (long *)(lVar15 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar10 = lVar14;
                                                      thunk_FUN_02bb0e9c(plVar10,lVar14);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar12,lVar14,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar13 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x28) = lVar12;
                                                  thunk_FUN_02bb0e9c((long *)(lVar9 + 0x28),lVar12);
                                                  lVar12 = *(long *)(lVar8 + 0x10);
                                                  lVar14 = *(long *)
                                                  Method_Newtonsoft_Json_Linq_JProperty_RemoveItem__
                                                  ;
                                                  *(int *)(lVar8 + 0x1c) =
                                                       *(int *)(lVar8 + 0x1c) + 1;
                                                  if (lVar12 != 0) {
                                                    uVar1 = *(uint *)(lVar8 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                      *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                                                      plVar10 = (long *)(lVar12 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar10 = lVar9;
                                                      thunk_FUN_02bb0e9c(plVar10,lVar9);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar8,lVar9,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar9 = thunk_FUN_02b79644(*(undefined8 *)puVar2);
                                                  FUN_04dbdb8c(lVar9,0);
                                                  puVar7 = 
                                                  Method_Newtonsoft_Json_JsonConvert_DeserializeObject<Dictionary<string,_string>>__
                                                  ;
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x10) =
                                                         *(undefined8 *)PTR_DAT_06332138;
                                                    thunk_FUN_02bb0e9c();
                                                    *(undefined8 *)(lVar9 + 0x20) =
                                                         *(undefined8 *)puVar7;
                                                    thunk_FUN_02bb0e9c((undefined8 *)(lVar9 + 0x20))
                                                    ;
                                                    uVar11 = *(undefined8 *)puVar3;
                                                    *(undefined4 *)(lVar9 + 0x18) = 3;
                                                    lVar12 = thunk_FUN_02b79644(uVar11);
                                                    FUN_037a5cd0(lVar12,*(undefined8 *)puVar4);
                                                    if (lVar12 != 0) {
                                                      lVar14 = *(long *)(lVar12 + 0x10);
                                                      uVar11 = *(undefined8 *)
                                                                                                                                
                                                  Method_System_Collections_Generic_List<IntegratedSubsystemDescriptor>_GetEnumerator__
                                                  ;
                                                  lVar15 = *(long *)puVar5;
                                                  *(int *)(lVar12 + 0x1c) =
                                                       *(int *)(lVar12 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar12 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar14 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar11;
                                                      thunk_FUN_02bb0e9c();
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar12,uVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x30) = lVar12;
                                                  thunk_FUN_02bb0e9c((long *)(lVar9 + 0x30),lVar12);
                                                  lVar12 = thunk_FUN_02b79644(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_037a5cd0(lVar12,*(undefined8 *)
                                                                                                                                              
                                                  Method_Newtonsoft_Json_Linq_JPropertyKeyedCollection_Contains__
                                                  );
                                                  lVar14 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                              
                                                  Method_Newtonsoft_Json_Linq_JObject_ValidateToken__
                                                  );
                                                  FUN_04dbdb8c(lVar14,0);
                                                  if (lVar14 != 0) {
                                                    *(undefined8 *)(lVar14 + 0x18) =
                                                         *(undefined8 *)
                                                          Method_LitJson_JsonData_EnsureDictionary__
                                                    ;
                                                    thunk_FUN_02bb0e9c();
                                                    *(undefined8 *)(lVar14 + 0x10) = *puVar18;
                                                    thunk_FUN_02bb0e9c();
                                                    if (lVar12 != 0) {
                                                      lVar15 = *(long *)(lVar12 + 0x10);
                                                      lVar13 = *(long *)
                                                  Method_Newtonsoft_Json_Linq_JProperty_Load__;
                                                  *(int *)(lVar12 + 0x1c) =
                                                       *(int *)(lVar12 + 0x1c) + 1;
                                                  if (lVar15 != 0) {
                                                    uVar1 = *(uint *)(lVar12 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                      plVar10 = (long *)(lVar15 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar10 = lVar14;
                                                      thunk_FUN_02bb0e9c(plVar10,lVar14);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar12,lVar14,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar13 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x28) = lVar12;
                                                  thunk_FUN_02bb0e9c((long *)(lVar9 + 0x28),lVar12);
                                                  lVar12 = *(long *)(lVar8 + 0x10);
                                                  lVar14 = *(long *)
                                                  Method_Newtonsoft_Json_Linq_JProperty_RemoveItem__
                                                  ;
                                                  *(int *)(lVar8 + 0x1c) =
                                                       *(int *)(lVar8 + 0x1c) + 1;
                                                  if (lVar12 != 0) {
                                                    uVar1 = *(uint *)(lVar8 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                      *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                                                      plVar10 = (long *)(lVar12 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar10 = lVar9;
                                                      thunk_FUN_02bb0e9c(plVar10,lVar9);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar8,lVar9,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar9 = thunk_FUN_02b79644(*(undefined8 *)puVar2);
                                                  FUN_04dbdb8c(lVar9,0);
                                                  puVar2 = 
                                                  Method_Newtonsoft_Json_JsonSerializer_set_MetadataPropertyHandling__
                                                  ;
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Newtonsoft_Json_Serialization_JsonSerializerInternalBase_GetErrorContext__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar9 + 0x20) =
                                                       *(undefined8 *)puVar2;
                                                  thunk_FUN_02bb0e9c((undefined8 *)(lVar9 + 0x20));
                                                  uVar11 = *(undefined8 *)puVar3;
                                                  *(undefined4 *)(lVar9 + 0x18) = 4;
                                                  lVar12 = thunk_FUN_02b79644(uVar11);
                                                  FUN_037a5cd0(lVar12,*(undefined8 *)puVar4);
                                                  if (lVar12 != 0) {
                                                    lVar14 = *(long *)(lVar12 + 0x10);
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  Method_UnityEngine_InputSystem_InputControlExtensions_CopyState__
                                                  ;
                                                  lVar15 = *(long *)puVar5;
                                                  *(int *)(lVar12 + 0x1c) =
                                                       *(int *)(lVar12 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar12 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar14 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar11;
                                                      thunk_FUN_02bb0e9c();
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar12,uVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x30) = lVar12;
                                                  thunk_FUN_02bb0e9c((long *)(lVar9 + 0x30),lVar12);
                                                  lVar12 = thunk_FUN_02b79644(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_037a5cd0(lVar12,*(undefined8 *)
                                                                                                                                              
                                                  Method_Newtonsoft_Json_Linq_JPropertyKeyedCollection_Contains__
                                                  );
                                                  lVar14 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                              
                                                  Method_Newtonsoft_Json_Linq_JObject_ValidateToken__
                                                  );
                                                  FUN_04dbdb8c(lVar14,0);
                                                  if (lVar14 != 0) {
                                                    *(undefined8 *)(lVar14 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Newtonsoft_Json_JsonReader_set_FloatParseHandling__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar14 + 0x10) = *puVar18;
                                                  thunk_FUN_02bb0e9c();
                                                  if (lVar12 != 0) {
                                                    lVar15 = *(long *)(lVar12 + 0x10);
                                                    lVar13 = *(long *)
                                                  Method_Newtonsoft_Json_Linq_JProperty_Load__;
                                                  *(int *)(lVar12 + 0x1c) =
                                                       *(int *)(lVar12 + 0x1c) + 1;
                                                  if (lVar15 != 0) {
                                                    uVar1 = *(uint *)(lVar12 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                      plVar10 = (long *)(lVar15 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar10 = lVar14;
                                                      thunk_FUN_02bb0e9c(plVar10,lVar14);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar12,lVar14,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar13 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x28) = lVar12;
                                                  thunk_FUN_02bb0e9c((long *)(lVar9 + 0x28),lVar12);
                                                  lVar12 = *(long *)(lVar8 + 0x10);
                                                  lVar14 = *(long *)
                                                  Method_Newtonsoft_Json_Linq_JProperty_RemoveItem__
                                                  ;
                                                  *(int *)(lVar8 + 0x1c) =
                                                       *(int *)(lVar8 + 0x1c) + 1;
                                                  if (lVar12 != 0) {
                                                    uVar1 = *(uint *)(lVar8 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                      *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                                                      plVar10 = (long *)(lVar12 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar10 = lVar9;
                                                      thunk_FUN_02bb0e9c(plVar10,lVar9);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar8,lVar9,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(unaff_x19 + 0x28) = lVar8;
                                                  thunk_FUN_02bb0e9c((long *)(unaff_x19 + 0x28),
                                                                     lVar8);
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
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
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


