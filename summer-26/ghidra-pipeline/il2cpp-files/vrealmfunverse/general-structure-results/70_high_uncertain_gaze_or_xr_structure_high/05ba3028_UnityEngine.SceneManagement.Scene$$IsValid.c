/*
FUNCTION_NAME: UnityEngine.SceneManagement.Scene$$IsValid
ENTRY_POINT: 05ba3028
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 89
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;ray_interaction;telemetry;structure_combo;keyword_support
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;ray_or_cast_sink_hits_1;telemetry_or_network_hits_21;source_validity_pose_sink_structure;eye_or_gaze_keyword_boost_only;negative_generic_transform_raycast_without_eye_source_or_attempt;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void UnityEngine_SceneManagement_Scene__IsValid(void)

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
  long lVar11;
  long *plVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long unaff_x19;
  undefined8 *unaff_x20;
  
  FUN_02b3c81c();
  FUN_02b3c81c(Method_Newtonsoft_Json_Serialization_JsonSerializerInternalBase_ClearErrorContext__);
  FUN_02b3c81c(Method_Newtonsoft_Json_Linq_JToken_op_Explicit__);
  FUN_02b3c81c(Method_System_Linq_Enumerable_Select<FieldInfo,_string>__);
  FUN_02b3c81c(Method_Newtonsoft_Json_Serialization_JsonSerializerInternalBase_GetErrorContext__);
  FUN_02b3c81c(Method_System_Globalization_JapaneseCalendar_ToFourDigitYear__);
  FUN_02b3c81c(Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_AddReference__);
  FUN_02b3c81c(Method_LitJson_JsonData_LitJson_IJsonWrapper_GetLong__);
  *(undefined1 *)(unaff_x19 + 0xfb3) = 1;
  lVar9 = thunk_FUN_02b79644(*unaff_x20);
  FUN_04dbdb8c(lVar9,0);
  puVar8 = Method_Newtonsoft_Json_JsonSerializer_set_TypeNameHandling__;
  puVar6 = Method_Newtonsoft_Json_JsonSerializer_set_ConstructorHandling__;
  puVar7 = Method_Newtonsoft_Json_JsonReader_SetStateBasedOnCurrent__;
  puVar5 = Method_OVRSimpleJSON_JSONLazyCreator_Set<JSONArray>__;
  puVar4 = Method_Newtonsoft_Json_Linq_JProperty_SetItem__;
  puVar3 = Method_Newtonsoft_Json_Linq_JProperty_GetItem__;
  puVar2 = PTR_DAT_06312a80;
  if (lVar9 != 0) {
    *(undefined8 *)(lVar9 + 0x10) =
         *(undefined8 *)Method_Newtonsoft_Json_JsonSerializer_set_ReferenceLoopHandling__;
    thunk_FUN_02bb0e9c();
    *(undefined8 *)(lVar9 + 0x18) = *(undefined8 *)puVar7;
    thunk_FUN_02bb0e9c();
    *(undefined8 *)(lVar9 + 0x30) = *(undefined8 *)puVar8;
    thunk_FUN_02bb0e9c();
    *(undefined8 *)(lVar9 + 0x38) = *(undefined8 *)puVar6;
    thunk_FUN_02bb0e9c();
    *(undefined8 *)(lVar9 + 0x40) = *(undefined8 *)puVar2;
    thunk_FUN_02bb0e9c();
    lVar10 = thunk_FUN_02b79644(*(undefined8 *)puVar5);
    FUN_037a5cd0(lVar10,*(undefined8 *)puVar4);
    lVar11 = thunk_FUN_02b79644(*(undefined8 *)puVar3);
    FUN_04dbdb8c(lVar11,0);
    if (lVar11 != 0) {
      *(undefined8 *)(lVar11 + 0x18) =
           *(undefined8 *)Method_Newtonsoft_Json_Linq_JToken_op_Explicit__;
      *(undefined4 *)(lVar11 + 0x10) = 0x164;
      thunk_FUN_02bb0e9c();
      puVar2 = Method_Newtonsoft_Json_Linq_JProperty_InsertItem__;
      if (lVar10 != 0) {
        lVar14 = *(long *)(lVar10 + 0x10);
        lVar16 = *(long *)Method_Newtonsoft_Json_Linq_JProperty_InsertItem__;
        *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
        if (lVar14 != 0) {
          uVar1 = *(uint *)(lVar10 + 0x18);
          if (uVar1 < *(uint *)(lVar14 + 0x18)) {
            *(uint *)(lVar10 + 0x18) = uVar1 + 1;
            plVar12 = (long *)(lVar14 + (long)(int)uVar1 * 8 + 0x20);
            *plVar12 = lVar11;
            thunk_FUN_02bb0e9c(plVar12,lVar11);
          }
          else {
            FUN_037a6538(lVar10,lVar11,
                         *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
          }
          lVar11 = thunk_FUN_02b79644(*(undefined8 *)puVar3);
          FUN_04dbdb8c(lVar11,0);
          if (lVar11 != 0) {
            *(undefined8 *)(lVar11 + 0x18) =
                 *(undefined8 *)Method_Newtonsoft_Json_Linq_JToken_Replace__;
            *(undefined4 *)(lVar11 + 0x10) = 0x264;
            thunk_FUN_02bb0e9c();
            lVar14 = *(long *)(lVar10 + 0x10);
            lVar16 = *(long *)puVar2;
            *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
            puVar4 = Method_OVRSimpleJSON_JSONLazyCreator_Set<JSONBool>__;
            puVar3 = Method_Newtonsoft_Json_Linq_JProperty_RemoveItemAt__;
            puVar2 = Method_Newtonsoft_Json_Linq_JProperty_ClearItems__;
            if (lVar14 != 0) {
              uVar1 = *(uint *)(lVar10 + 0x18);
              if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                plVar12 = (long *)(lVar14 + (long)(int)uVar1 * 8 + 0x20);
                *plVar12 = lVar11;
                thunk_FUN_02bb0e9c(plVar12,lVar11);
              }
              else {
                FUN_037a6538(lVar10,lVar11,
                             *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
              }
              *(long *)(lVar9 + 0x20) = lVar10;
              thunk_FUN_02bb0e9c((long *)(lVar9 + 0x20),lVar10);
              lVar10 = thunk_FUN_02b79644(*(undefined8 *)puVar4);
              FUN_037a5cd0(lVar10,*(undefined8 *)puVar3);
              lVar11 = thunk_FUN_02b79644(*(undefined8 *)puVar2);
              FUN_04dbdb8c(lVar11,0);
              puVar5 = Method_Newtonsoft_Json_JsonSerializer_set_ObjectCreationHandling__;
              puVar4 = PTR_DAT_063145b8;
              puVar3 = PTR_DAT_063145b0;
              if (lVar11 != 0) {
                *(undefined8 *)(lVar11 + 0x10) =
                     *(undefined8 *)
                      Method_Oculus_Interaction_Interactable<LocomotionTurnerInteractor,_LocomotionTurnerInteractable>__ctor__
                ;
                thunk_FUN_02bb0e9c();
                *(undefined8 *)(lVar11 + 0x20) = *(undefined8 *)puVar5;
                thunk_FUN_02bb0e9c((undefined8 *)(lVar11 + 0x20));
                uVar13 = *(undefined8 *)puVar3;
                *(undefined4 *)(lVar11 + 0x18) = 0;
                lVar14 = thunk_FUN_02b79644(uVar13);
                FUN_037a5cd0(lVar14,*(undefined8 *)puVar4);
                puVar5 = PTR_DAT_063173b8;
                if (lVar14 != 0) {
                  lVar16 = *(long *)(lVar14 + 0x10);
                  uVar13 = *(undefined8 *)
                            Method_System_Linq_Enumerable_Select<Collider,_Transform>__;
                  lVar17 = *(long *)PTR_DAT_063173b8;
                  *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
                  puVar7 = Method_OVRSimpleJSON_JSONLazyCreator_Set<JSONNumber>__;
                  if (lVar16 != 0) {
                    uVar1 = *(uint *)(lVar14 + 0x18);
                    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                      *(uint *)(lVar14 + 0x18) = uVar1 + 1;
                      *(undefined8 *)(lVar16 + (long)(int)uVar1 * 8 + 0x20) = uVar13;
                      thunk_FUN_02bb0e9c();
                    }
                    else {
                      FUN_037a6538(lVar14,uVar13,
                                   *(undefined8 *)
                                    (*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
                    }
                    *(long *)(lVar11 + 0x30) = lVar14;
                    thunk_FUN_02bb0e9c((long *)(lVar11 + 0x30),lVar14);
                    lVar14 = thunk_FUN_02b79644(*(undefined8 *)puVar7);
                    FUN_037a5cd0(lVar14,*(undefined8 *)
                                         Method_Newtonsoft_Json_Linq_JPropertyKeyedCollection_Contains__
                                );
                    lVar16 = thunk_FUN_02b79644(*(undefined8 *)
                                                 Method_Newtonsoft_Json_Linq_JObject_ValidateToken__
                                               );
                    FUN_04dbdb8c(lVar16,0);
                    if (lVar16 != 0) {
                      *(undefined8 *)(lVar16 + 0x18) =
                           *(undefined8 *)
                            Method_Newtonsoft_Json_Serialization_JsonSerializerInternalBase_ClearErrorContext__
                      ;
                      thunk_FUN_02bb0e9c();
                      *(undefined8 *)(lVar16 + 0x10) = *(undefined8 *)puVar8;
                      thunk_FUN_02bb0e9c();
                      lVar17 = thunk_FUN_02b79644(*(undefined8 *)puVar3);
                      FUN_037a5cd0(lVar17,*(undefined8 *)puVar4);
                      if (lVar17 != 0) {
                        lVar15 = *(long *)(lVar17 + 0x10);
                        uVar13 = *(undefined8 *)Method_Newtonsoft_Json_Linq_JToken_op_Explicit__;
                        lVar18 = *(long *)puVar5;
                        *(int *)(lVar17 + 0x1c) = *(int *)(lVar17 + 0x1c) + 1;
                        if (lVar15 != 0) {
                          uVar1 = *(uint *)(lVar17 + 0x18);
                          if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                            *(uint *)(lVar17 + 0x18) = uVar1 + 1;
                            *(undefined8 *)(lVar15 + (long)(int)uVar1 * 8 + 0x20) = uVar13;
                            thunk_FUN_02bb0e9c();
                          }
                          else {
                            FUN_037a6538(lVar17,uVar13,
                                         *(undefined8 *)
                                          (*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
                          }
                          *(long *)(lVar16 + 0x20) = lVar17;
                          thunk_FUN_02bb0e9c((long *)(lVar16 + 0x20),lVar17);
                          if (lVar14 != 0) {
                            lVar17 = *(long *)(lVar14 + 0x10);
                            lVar15 = *(long *)Method_Newtonsoft_Json_Linq_JProperty_Load__;
                            *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
                            if (lVar17 != 0) {
                              uVar1 = *(uint *)(lVar14 + 0x18);
                              if (uVar1 < *(uint *)(lVar17 + 0x18)) {
                                *(uint *)(lVar14 + 0x18) = uVar1 + 1;
                                plVar12 = (long *)(lVar17 + (long)(int)uVar1 * 8 + 0x20);
                                *plVar12 = lVar16;
                                thunk_FUN_02bb0e9c(plVar12,lVar16);
                              }
                              else {
                                FUN_037a6538(lVar14,lVar16,
                                             *(undefined8 *)
                                              (*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
                              }
                              lVar16 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                      
                                                  Method_Newtonsoft_Json_Linq_JObject_ValidateToken__
                                                  );
                              FUN_04dbdb8c(lVar16,0);
                              if (lVar16 != 0) {
                                *(undefined8 *)(lVar16 + 0x18) =
                                     *(undefined8 *)
                                      Method_Newtonsoft_Json_JsonSerializer_set_ReferenceResolver__;
                                thunk_FUN_02bb0e9c();
                                *(undefined8 *)(lVar16 + 0x10) = *(undefined8 *)puVar8;
                                thunk_FUN_02bb0e9c();
                                lVar17 = thunk_FUN_02b79644(*(undefined8 *)puVar3);
                                FUN_037a5cd0(lVar17,*(undefined8 *)puVar4);
                                if (lVar17 != 0) {
                                  lVar15 = *(long *)(lVar17 + 0x10);
                                  uVar13 = *(undefined8 *)
                                            Method_Newtonsoft_Json_Linq_JToken_Replace__;
                                  lVar18 = *(long *)puVar5;
                                  *(int *)(lVar17 + 0x1c) = *(int *)(lVar17 + 0x1c) + 1;
                                  if (lVar15 != 0) {
                                    uVar1 = *(uint *)(lVar17 + 0x18);
                                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                      *(uint *)(lVar17 + 0x18) = uVar1 + 1;
                                      *(undefined8 *)(lVar15 + (long)(int)uVar1 * 8 + 0x20) = uVar13
                                      ;
                                      thunk_FUN_02bb0e9c();
                                    }
                                    else {
                                      FUN_037a6538(lVar17,uVar13,
                                                   *(undefined8 *)
                                                    (*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) +
                                                    0x70));
                                    }
                                    *(long *)(lVar16 + 0x20) = lVar17;
                                    thunk_FUN_02bb0e9c((long *)(lVar16 + 0x20),lVar17);
                                    lVar17 = *(long *)(lVar14 + 0x10);
                                    lVar15 = *(long *)Method_Newtonsoft_Json_Linq_JProperty_Load__;
                                    *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
                                    puVar7 = Method_OVRSimpleJSON_JSONLazyCreator_Set<JSONNumber>__;
                                    if (lVar17 != 0) {
                                      uVar1 = *(uint *)(lVar14 + 0x18);
                                      if (uVar1 < *(uint *)(lVar17 + 0x18)) {
                                        *(uint *)(lVar14 + 0x18) = uVar1 + 1;
                                        plVar12 = (long *)(lVar17 + (long)(int)uVar1 * 8 + 0x20);
                                        *plVar12 = lVar16;
                                        thunk_FUN_02bb0e9c(plVar12,lVar16);
                                      }
                                      else {
                                        FUN_037a6538(lVar14,lVar16,
                                                     *(undefined8 *)
                                                      (*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) +
                                                      0x70));
                                      }
                                      *(long *)(lVar11 + 0x28) = lVar14;
                                      thunk_FUN_02bb0e9c((long *)(lVar11 + 0x28),lVar14);
                                      if (lVar10 != 0) {
                                        lVar14 = *(long *)(lVar10 + 0x10);
                                        lVar16 = *(long *)
                                                  Method_Newtonsoft_Json_Linq_JProperty_RemoveItem__
                                        ;
                                        *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
                                        if (lVar14 != 0) {
                                          uVar1 = *(uint *)(lVar10 + 0x18);
                                          if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                            *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                            plVar12 = (long *)(lVar14 + (long)(int)uVar1 * 8 + 0x20)
                                            ;
                                            *plVar12 = lVar11;
                                            thunk_FUN_02bb0e9c(plVar12,lVar11);
                                          }
                                          else {
                                            FUN_037a6538(lVar10,lVar11,
                                                         *(undefined8 *)
                                                          (*(long *)(*(long *)(lVar16 + 0x20) + 0xc0
                                                                    ) + 0x70));
                                          }
                                          lVar11 = thunk_FUN_02b79644(*(undefined8 *)puVar2);
                                          FUN_04dbdb8c(lVar11,0);
                                          puVar6 = 
                                          Method_Newtonsoft_Json_JsonSerializer_set_MissingMemberHandling__
                                          ;
                                          if (lVar11 != 0) {
                                            *(undefined8 *)(lVar11 + 0x10) =
                                                 *(undefined8 *)
                                                  Method_Oculus_Interaction_Interactable<PokeInteractor,_PokeInteractable>_get_Interactors__
                                            ;
                                            thunk_FUN_02bb0e9c();
                                            *(undefined8 *)(lVar11 + 0x20) = *(undefined8 *)puVar6;
                                            thunk_FUN_02bb0e9c((undefined8 *)(lVar11 + 0x20));
                                            uVar13 = *(undefined8 *)puVar3;
                                            *(undefined4 *)(lVar11 + 0x18) = 0;
                                            lVar14 = thunk_FUN_02b79644(uVar13);
                                            FUN_037a5cd0(lVar14,*(undefined8 *)puVar4);
                                            if (lVar14 != 0) {
                                              lVar16 = *(long *)(lVar14 + 0x10);
                                              uVar13 = *(undefined8 *)
                                                                                                                
                                                  Method_System_Linq_Enumerable_Select<FieldInfo,_string>__
                                              ;
                                              lVar17 = *(long *)puVar5;
                                              *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
                                              if (lVar16 != 0) {
                                                uVar1 = *(uint *)(lVar14 + 0x18);
                                                if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                  *(uint *)(lVar14 + 0x18) = uVar1 + 1;
                                                  *(undefined8 *)
                                                   (lVar16 + (long)(int)uVar1 * 8 + 0x20) = uVar13;
                                                  thunk_FUN_02bb0e9c();
                                                }
                                                else {
                                                  FUN_037a6538(lVar14,uVar13,
                                                               *(undefined8 *)
                                                                (*(long *)(*(long *)(lVar17 + 0x20)
                                                                          + 0xc0) + 0x70));
                                                }
                                                *(long *)(lVar11 + 0x30) = lVar14;
                                                thunk_FUN_02bb0e9c((long *)(lVar11 + 0x30),lVar14);
                                                lVar14 = thunk_FUN_02b79644(*(undefined8 *)puVar7);
                                                FUN_037a5cd0(lVar14,*(undefined8 *)
                                                                                                                                          
                                                  Method_Newtonsoft_Json_Linq_JPropertyKeyedCollection_Contains__
                                                  );
                                                lVar16 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                          
                                                  Method_Newtonsoft_Json_Linq_JObject_ValidateToken__
                                                  );
                                                FUN_04dbdb8c(lVar16,0);
                                                if (lVar16 != 0) {
                                                  *(undefined8 *)(lVar16 + 0x18) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_Newtonsoft_Json_JsonSerializer_set_TypeNameAssemblyFormatHandling__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar16 + 0x10) =
                                                       *(undefined8 *)puVar8;
                                                  thunk_FUN_02bb0e9c();
                                                  lVar17 = thunk_FUN_02b79644(*(undefined8 *)puVar3)
                                                  ;
                                                  FUN_037a5cd0(lVar17,*(undefined8 *)puVar4);
                                                  if (lVar17 != 0) {
                                                    lVar15 = *(long *)(lVar17 + 0x10);
                                                    uVar13 = *(undefined8 *)
                                                                                                                            
                                                  Method_Newtonsoft_Json_Linq_JToken_op_Explicit__;
                                                  lVar18 = *(long *)puVar5;
                                                  *(int *)(lVar17 + 0x1c) =
                                                       *(int *)(lVar17 + 0x1c) + 1;
                                                  if (lVar15 != 0) {
                                                    uVar1 = *(uint *)(lVar17 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar17 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar15 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar13;
                                                      thunk_FUN_02bb0e9c();
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar17,uVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar18 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar16 + 0x20) = lVar17;
                                                  thunk_FUN_02bb0e9c((long *)(lVar16 + 0x20),lVar17)
                                                  ;
                                                  if (lVar14 != 0) {
                                                    lVar17 = *(long *)(lVar14 + 0x10);
                                                    lVar15 = *(long *)
                                                  Method_Newtonsoft_Json_Linq_JProperty_Load__;
                                                  *(int *)(lVar14 + 0x1c) =
                                                       *(int *)(lVar14 + 0x1c) + 1;
                                                  if (lVar17 != 0) {
                                                    uVar1 = *(uint *)(lVar14 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar17 + 0x18)) {
                                                      *(uint *)(lVar14 + 0x18) = uVar1 + 1;
                                                      plVar12 = (long *)(lVar17 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar12 = lVar16;
                                                      thunk_FUN_02bb0e9c(plVar12,lVar16);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar14,lVar16,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar16 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                              
                                                  Method_Newtonsoft_Json_Linq_JObject_ValidateToken__
                                                  );
                                                  FUN_04dbdb8c(lVar16,0);
                                                  if (lVar16 != 0) {
                                                    *(undefined8 *)(lVar16 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Newtonsoft_Json_JsonSerializer_set_PreserveReferencesHandling__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar16 + 0x10) =
                                                       *(undefined8 *)puVar8;
                                                  thunk_FUN_02bb0e9c();
                                                  lVar17 = thunk_FUN_02b79644(*(undefined8 *)puVar3)
                                                  ;
                                                  FUN_037a5cd0(lVar17,*(undefined8 *)puVar4);
                                                  if (lVar17 != 0) {
                                                    lVar15 = *(long *)(lVar17 + 0x10);
                                                    uVar13 = *(undefined8 *)
                                                                                                                            
                                                  Method_Newtonsoft_Json_Linq_JToken_Replace__;
                                                  lVar18 = *(long *)puVar5;
                                                  *(int *)(lVar17 + 0x1c) =
                                                       *(int *)(lVar17 + 0x1c) + 1;
                                                  if (lVar15 != 0) {
                                                    uVar1 = *(uint *)(lVar17 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar17 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar15 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar13;
                                                      thunk_FUN_02bb0e9c();
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar17,uVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar18 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar16 + 0x20) = lVar17;
                                                  thunk_FUN_02bb0e9c((long *)(lVar16 + 0x20),lVar17)
                                                  ;
                                                  lVar17 = *(long *)(lVar14 + 0x10);
                                                  lVar15 = *(long *)
                                                  Method_Newtonsoft_Json_Linq_JProperty_Load__;
                                                  *(int *)(lVar14 + 0x1c) =
                                                       *(int *)(lVar14 + 0x1c) + 1;
                                                  puVar7 = 
                                                  Method_OVRSimpleJSON_JSONLazyCreator_Set<JSONNumber>__
                                                  ;
                                                  if (lVar17 != 0) {
                                                    uVar1 = *(uint *)(lVar14 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar17 + 0x18)) {
                                                      *(uint *)(lVar14 + 0x18) = uVar1 + 1;
                                                      plVar12 = (long *)(lVar17 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar12 = lVar16;
                                                      thunk_FUN_02bb0e9c(plVar12,lVar16);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar14,lVar16,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar11 + 0x28) = lVar14;
                                                  thunk_FUN_02bb0e9c((long *)(lVar11 + 0x28),lVar14)
                                                  ;
                                                  lVar14 = *(long *)(lVar10 + 0x10);
                                                  lVar16 = *(long *)
                                                  Method_Newtonsoft_Json_Linq_JProperty_RemoveItem__
                                                  ;
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                      plVar12 = (long *)(lVar14 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar12 = lVar11;
                                                      thunk_FUN_02bb0e9c(plVar12,lVar11);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar10,lVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar11 = thunk_FUN_02b79644(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_04dbdb8c(lVar11,0);
                                                  puVar6 = 
                                                  OVR_OpenVR_IVRSystem__GetControllerStateWithPose_TypeInfo
                                                  ;
                                                  if (lVar11 != 0) {
                                                    *(undefined8 *)(lVar11 + 0x10) =
                                                         *(undefined8 *)PTR_DAT_063210b8;
                                                    thunk_FUN_02bb0e9c();
                                                    *(undefined8 *)(lVar11 + 0x20) =
                                                         *(undefined8 *)puVar6;
                                                    thunk_FUN_02bb0e9c((undefined8 *)(lVar11 + 0x20)
                                                                      );
                                                    uVar13 = *(undefined8 *)puVar3;
                                                    *(undefined4 *)(lVar11 + 0x18) = 0;
                                                    lVar14 = thunk_FUN_02b79644(uVar13);
                                                    FUN_037a5cd0(lVar14,*(undefined8 *)puVar4);
                                                    if (lVar14 != 0) {
                                                      lVar16 = *(long *)(lVar14 + 0x10);
                                                      uVar13 = *(undefined8 *)
                                                                                                                                
                                                  Method_System_Linq_Enumerable_Select<Enum,_int>__;
                                                  lVar17 = *(long *)puVar5;
                                                  *(int *)(lVar14 + 0x1c) =
                                                       *(int *)(lVar14 + 0x1c) + 1;
                                                  if (lVar16 != 0) {
                                                    uVar1 = *(uint *)(lVar14 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                      *(uint *)(lVar14 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar16 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar13;
                                                      thunk_FUN_02bb0e9c();
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar14,uVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar11 + 0x30) = lVar14;
                                                  thunk_FUN_02bb0e9c((long *)(lVar11 + 0x30),lVar14)
                                                  ;
                                                  lVar14 = thunk_FUN_02b79644(*(undefined8 *)puVar7)
                                                  ;
                                                  FUN_037a5cd0(lVar14,*(undefined8 *)
                                                                                                                                              
                                                  Method_Newtonsoft_Json_Linq_JPropertyKeyedCollection_Contains__
                                                  );
                                                  lVar16 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                              
                                                  Method_Newtonsoft_Json_Linq_JObject_ValidateToken__
                                                  );
                                                  FUN_04dbdb8c(lVar16,0);
                                                  if (lVar16 != 0) {
                                                    *(undefined8 *)(lVar16 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Newtonsoft_Json_JsonReader_set_DateParseHandling__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar16 + 0x10) =
                                                       *(undefined8 *)puVar8;
                                                  thunk_FUN_02bb0e9c();
                                                  if (lVar14 != 0) {
                                                    lVar17 = *(long *)(lVar14 + 0x10);
                                                    lVar15 = *(long *)
                                                  Method_Newtonsoft_Json_Linq_JProperty_Load__;
                                                  *(int *)(lVar14 + 0x1c) =
                                                       *(int *)(lVar14 + 0x1c) + 1;
                                                  if (lVar17 != 0) {
                                                    uVar1 = *(uint *)(lVar14 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar17 + 0x18)) {
                                                      *(uint *)(lVar14 + 0x18) = uVar1 + 1;
                                                      plVar12 = (long *)(lVar17 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar12 = lVar16;
                                                      thunk_FUN_02bb0e9c(plVar12,lVar16);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar14,lVar16,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar11 + 0x28) = lVar14;
                                                  thunk_FUN_02bb0e9c((long *)(lVar11 + 0x28),lVar14)
                                                  ;
                                                  lVar14 = *(long *)(lVar10 + 0x10);
                                                  lVar16 = *(long *)
                                                  Method_Newtonsoft_Json_Linq_JProperty_RemoveItem__
                                                  ;
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                      plVar12 = (long *)(lVar14 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar12 = lVar11;
                                                      thunk_FUN_02bb0e9c(plVar12,lVar11);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar10,lVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar11 = thunk_FUN_02b79644(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_04dbdb8c(lVar11,0);
                                                  puVar6 = PTR_DAT_0631b1e8;
                                                  if (lVar11 != 0) {
                                                    *(undefined8 *)(lVar11 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Oculus_Interaction_Interactable<HandGrabInteractor,_HandGrabInteractable>_remove_WhenStateChanged__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar11 + 0x20) =
                                                       *(undefined8 *)puVar6;
                                                  thunk_FUN_02bb0e9c((undefined8 *)(lVar11 + 0x20));
                                                  uVar13 = *(undefined8 *)puVar3;
                                                  *(undefined4 *)(lVar11 + 0x18) = 1;
                                                  lVar14 = thunk_FUN_02b79644(uVar13);
                                                  FUN_037a5cd0(lVar14,*(undefined8 *)puVar4);
                                                  if (lVar14 != 0) {
                                                    lVar16 = *(long *)(lVar14 + 0x10);
                                                    uVar13 = *(undefined8 *)puVar6;
                                                    lVar17 = *(long *)puVar5;
                                                    *(int *)(lVar14 + 0x1c) =
                                                         *(int *)(lVar14 + 0x1c) + 1;
                                                    if (lVar16 != 0) {
                                                      uVar1 = *(uint *)(lVar14 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                        *(uint *)(lVar14 + 0x18) = uVar1 + 1;
                                                        *(undefined8 *)
                                                         (lVar16 + (long)(int)uVar1 * 8 + 0x20) =
                                                             uVar13;
                                                        thunk_FUN_02bb0e9c();
                                                      }
                                                      else {
                                                        FUN_037a6538(lVar14,uVar13,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar11 + 0x30) = lVar14;
                                                  thunk_FUN_02bb0e9c((long *)(lVar11 + 0x30),lVar14)
                                                  ;
                                                  lVar14 = thunk_FUN_02b79644(*(undefined8 *)puVar7)
                                                  ;
                                                  FUN_037a5cd0(lVar14,*(undefined8 *)
                                                                                                                                              
                                                  Method_Newtonsoft_Json_Linq_JPropertyKeyedCollection_Contains__
                                                  );
                                                  lVar16 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                              
                                                  Method_Newtonsoft_Json_Linq_JObject_ValidateToken__
                                                  );
                                                  FUN_04dbdb8c(lVar16,0);
                                                  puVar7 = 
                                                  Method_Newtonsoft_Json_JsonReader_set_DateTimeZoneHandling__
                                                  ;
                                                  if (lVar16 != 0) {
                                                    *(undefined8 *)(lVar16 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Newtonsoft_Json_JsonReader_set_DateTimeZoneHandling__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar16 + 0x10) =
                                                       *(undefined8 *)puVar8;
                                                  thunk_FUN_02bb0e9c();
                                                  if (lVar14 != 0) {
                                                    lVar17 = *(long *)(lVar14 + 0x10);
                                                    lVar15 = *(long *)
                                                  Method_Newtonsoft_Json_Linq_JProperty_Load__;
                                                  *(int *)(lVar14 + 0x1c) =
                                                       *(int *)(lVar14 + 0x1c) + 1;
                                                  if (lVar17 != 0) {
                                                    uVar1 = *(uint *)(lVar14 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar17 + 0x18)) {
                                                      *(uint *)(lVar14 + 0x18) = uVar1 + 1;
                                                      plVar12 = (long *)(lVar17 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar12 = lVar16;
                                                      thunk_FUN_02bb0e9c(plVar12,lVar16);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar14,lVar16,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar11 + 0x28) = lVar14;
                                                  thunk_FUN_02bb0e9c((long *)(lVar11 + 0x28),lVar14)
                                                  ;
                                                  lVar14 = *(long *)(lVar10 + 0x10);
                                                  lVar16 = *(long *)
                                                  Method_Newtonsoft_Json_Linq_JProperty_RemoveItem__
                                                  ;
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                      plVar12 = (long *)(lVar14 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar12 = lVar11;
                                                      thunk_FUN_02bb0e9c(plVar12,lVar11);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar10,lVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar11 = thunk_FUN_02b79644(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_04dbdb8c(lVar11,0);
                                                  puVar6 = 
                                                  Method_Newtonsoft_Json_JsonSerializer_set_NullValueHandling__
                                                  ;
                                                  if (lVar11 != 0) {
                                                    *(undefined8 *)(lVar11 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Oculus_Interaction_Interactable<HandGrabInteractor,_HandGrabInteractable>_add_WhenStateChanged__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar11 + 0x20) =
                                                       *(undefined8 *)puVar6;
                                                  thunk_FUN_02bb0e9c((undefined8 *)(lVar11 + 0x20));
                                                  uVar13 = *(undefined8 *)puVar3;
                                                  *(undefined4 *)(lVar11 + 0x18) = 0;
                                                  lVar14 = thunk_FUN_02b79644(uVar13);
                                                  FUN_037a5cd0(lVar14,*(undefined8 *)puVar4);
                                                  if (lVar14 != 0) {
                                                    lVar16 = *(long *)(lVar14 + 0x10);
                                                    uVar13 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Linq_Enumerable_Select<DataColumn,_Type>__
                                                  ;
                                                  lVar17 = *(long *)puVar5;
                                                  *(int *)(lVar14 + 0x1c) =
                                                       *(int *)(lVar14 + 0x1c) + 1;
                                                  if (lVar16 != 0) {
                                                    uVar1 = *(uint *)(lVar14 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                      *(uint *)(lVar14 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar16 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar13;
                                                      thunk_FUN_02bb0e9c();
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar14,uVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar11 + 0x30) = lVar14;
                                                  thunk_FUN_02bb0e9c((long *)(lVar11 + 0x30),lVar14)
                                                  ;
                                                  lVar14 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                              
                                                  Method_OVRSimpleJSON_JSONLazyCreator_Set<JSONNumber>__
                                                  );
                                                  FUN_037a5cd0(lVar14,*(undefined8 *)
                                                                                                                                              
                                                  Method_Newtonsoft_Json_Linq_JPropertyKeyedCollection_Contains__
                                                  );
                                                  lVar16 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                              
                                                  Method_Newtonsoft_Json_Linq_JObject_ValidateToken__
                                                  );
                                                  FUN_04dbdb8c(lVar16,0);
                                                  if (lVar16 != 0) {
                                                    *(undefined8 *)(lVar16 + 0x18) =
                                                         *(undefined8 *)puVar7;
                                                    thunk_FUN_02bb0e9c();
                                                    *(undefined8 *)(lVar16 + 0x10) =
                                                         *(undefined8 *)puVar8;
                                                    thunk_FUN_02bb0e9c();
                                                    puVar7 = 
                                                  Method_Newtonsoft_Json_Linq_JProperty_Load__;
                                                  if (lVar14 != 0) {
                                                    lVar17 = *(long *)(lVar14 + 0x10);
                                                    *(int *)(lVar14 + 0x1c) =
                                                         *(int *)(lVar14 + 0x1c) + 1;
                                                    puVar6 = 
                                                  Method_OVRSimpleJSON_JSONLazyCreator_Set<JSONNumber>__
                                                  ;
                                                  if (lVar17 != 0) {
                                                    uVar1 = *(uint *)(lVar14 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar17 + 0x18)) {
                                                      *(uint *)(lVar14 + 0x18) = uVar1 + 1;
                                                      plVar12 = (long *)(lVar17 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar12 = lVar16;
                                                      thunk_FUN_02bb0e9c(plVar12,lVar16);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar14,lVar16,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(*(long *)
                                                  puVar7 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar11 + 0x28) = lVar14;
                                                  thunk_FUN_02bb0e9c((long *)(lVar11 + 0x28),lVar14)
                                                  ;
                                                  lVar14 = *(long *)(lVar10 + 0x10);
                                                  lVar16 = *(long *)
                                                  Method_Newtonsoft_Json_Linq_JProperty_RemoveItem__
                                                  ;
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                      plVar12 = (long *)(lVar14 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar12 = lVar11;
                                                      thunk_FUN_02bb0e9c(plVar12,lVar11);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar10,lVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar11 = thunk_FUN_02b79644(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_04dbdb8c(lVar11,0);
                                                  puVar7 = PTR_DAT_0631b1f0;
                                                  if (lVar11 != 0) {
                                                    *(undefined8 *)(lVar11 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Oculus_Interaction_Interactable<HandGrabUseInteractor,_HandGrabUseInteractable>_SelectingInteractorAdded__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar11 + 0x20) =
                                                       *(undefined8 *)puVar7;
                                                  thunk_FUN_02bb0e9c((undefined8 *)(lVar11 + 0x20));
                                                  uVar13 = *(undefined8 *)puVar3;
                                                  *(undefined4 *)(lVar11 + 0x18) = 1;
                                                  lVar14 = thunk_FUN_02b79644(uVar13);
                                                  FUN_037a5cd0(lVar14,*(undefined8 *)puVar4);
                                                  if (lVar14 != 0) {
                                                    lVar16 = *(long *)(lVar14 + 0x10);
                                                    uVar13 = *(undefined8 *)puVar7;
                                                    lVar17 = *(long *)puVar5;
                                                    *(int *)(lVar14 + 0x1c) =
                                                         *(int *)(lVar14 + 0x1c) + 1;
                                                    if (lVar16 != 0) {
                                                      uVar1 = *(uint *)(lVar14 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                        *(uint *)(lVar14 + 0x18) = uVar1 + 1;
                                                        *(undefined8 *)
                                                         (lVar16 + (long)(int)uVar1 * 8 + 0x20) =
                                                             uVar13;
                                                        thunk_FUN_02bb0e9c();
                                                      }
                                                      else {
                                                        FUN_037a6538(lVar14,uVar13,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar11 + 0x30) = lVar14;
                                                  thunk_FUN_02bb0e9c((long *)(lVar11 + 0x30),lVar14)
                                                  ;
                                                  lVar14 = thunk_FUN_02b79644(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_037a5cd0(lVar14,*(undefined8 *)
                                                                                                                                              
                                                  Method_Newtonsoft_Json_Linq_JPropertyKeyedCollection_Contains__
                                                  );
                                                  lVar16 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                              
                                                  Method_Newtonsoft_Json_Linq_JObject_ValidateToken__
                                                  );
                                                  FUN_04dbdb8c(lVar16,0);
                                                  puVar7 = 
                                                  Method_Newtonsoft_Json_JsonSerializer_set_SerializationBinder__
                                                  ;
                                                  if (lVar16 != 0) {
                                                    *(undefined8 *)(lVar16 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Newtonsoft_Json_JsonSerializer_set_SerializationBinder__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar16 + 0x10) =
                                                       *(undefined8 *)puVar8;
                                                  thunk_FUN_02bb0e9c();
                                                  if (lVar14 != 0) {
                                                    lVar17 = *(long *)(lVar14 + 0x10);
                                                    lVar15 = *(long *)
                                                  Method_Newtonsoft_Json_Linq_JProperty_Load__;
                                                  *(int *)(lVar14 + 0x1c) =
                                                       *(int *)(lVar14 + 0x1c) + 1;
                                                  if (lVar17 != 0) {
                                                    uVar1 = *(uint *)(lVar14 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar17 + 0x18)) {
                                                      *(uint *)(lVar14 + 0x18) = uVar1 + 1;
                                                      plVar12 = (long *)(lVar17 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar12 = lVar16;
                                                      thunk_FUN_02bb0e9c(plVar12,lVar16);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar14,lVar16,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar11 + 0x28) = lVar14;
                                                  thunk_FUN_02bb0e9c((long *)(lVar11 + 0x28),lVar14)
                                                  ;
                                                  lVar14 = *(long *)(lVar10 + 0x10);
                                                  lVar16 = *(long *)
                                                  Method_Newtonsoft_Json_Linq_JProperty_RemoveItem__
                                                  ;
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                      plVar12 = (long *)(lVar14 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar12 = lVar11;
                                                      thunk_FUN_02bb0e9c(plVar12,lVar11);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar10,lVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar11 = thunk_FUN_02b79644(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_04dbdb8c(lVar11,0);
                                                  puVar6 = 
                                                  Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_AddReference__
                                                  ;
                                                  if (lVar11 != 0) {
                                                    *(undefined8 *)(lVar11 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Oculus_Interaction_Interactable<HandGrabUseInteractor,_HandGrabUseInteractable>_Awake__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar11 + 0x20) =
                                                       *(undefined8 *)puVar6;
                                                  thunk_FUN_02bb0e9c((undefined8 *)(lVar11 + 0x20));
                                                  uVar13 = *(undefined8 *)puVar3;
                                                  *(undefined4 *)(lVar11 + 0x18) = 0;
                                                  lVar14 = thunk_FUN_02b79644(uVar13);
                                                  FUN_037a5cd0(lVar14,*(undefined8 *)puVar4);
                                                  if (lVar14 != 0) {
                                                    lVar16 = *(long *)(lVar14 + 0x10);
                                                    uVar13 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Linq_Enumerable_Select<AndroidAxis,_string>__
                                                  ;
                                                  lVar17 = *(long *)puVar5;
                                                  *(int *)(lVar14 + 0x1c) =
                                                       *(int *)(lVar14 + 0x1c) + 1;
                                                  if (lVar16 != 0) {
                                                    uVar1 = *(uint *)(lVar14 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                      *(uint *)(lVar14 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar16 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar13;
                                                      thunk_FUN_02bb0e9c();
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar14,uVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar11 + 0x30) = lVar14;
                                                  thunk_FUN_02bb0e9c((long *)(lVar11 + 0x30),lVar14)
                                                  ;
                                                  lVar14 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                              
                                                  Method_OVRSimpleJSON_JSONLazyCreator_Set<JSONNumber>__
                                                  );
                                                  FUN_037a5cd0(lVar14,*(undefined8 *)
                                                                                                                                              
                                                  Method_Newtonsoft_Json_Linq_JPropertyKeyedCollection_Contains__
                                                  );
                                                  lVar16 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                              
                                                  Method_Newtonsoft_Json_Linq_JObject_ValidateToken__
                                                  );
                                                  FUN_04dbdb8c(lVar16,0);
                                                  if (lVar16 != 0) {
                                                    *(undefined8 *)(lVar16 + 0x18) =
                                                         *(undefined8 *)puVar7;
                                                    thunk_FUN_02bb0e9c();
                                                    *(undefined8 *)(lVar16 + 0x10) =
                                                         *(undefined8 *)puVar8;
                                                    thunk_FUN_02bb0e9c();
                                                    puVar7 = 
                                                  Method_Newtonsoft_Json_Linq_JProperty_Load__;
                                                  if (lVar14 != 0) {
                                                    lVar17 = *(long *)(lVar14 + 0x10);
                                                    *(int *)(lVar14 + 0x1c) =
                                                         *(int *)(lVar14 + 0x1c) + 1;
                                                    puVar6 = 
                                                  Method_OVRSimpleJSON_JSONLazyCreator_Set<JSONNumber>__
                                                  ;
                                                  if (lVar17 != 0) {
                                                    uVar1 = *(uint *)(lVar14 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar17 + 0x18)) {
                                                      *(uint *)(lVar14 + 0x18) = uVar1 + 1;
                                                      plVar12 = (long *)(lVar17 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar12 = lVar16;
                                                      thunk_FUN_02bb0e9c(plVar12,lVar16);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar14,lVar16,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(*(long *)
                                                  puVar7 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar11 + 0x28) = lVar14;
                                                  thunk_FUN_02bb0e9c((long *)(lVar11 + 0x28),lVar14)
                                                  ;
                                                  lVar14 = *(long *)(lVar10 + 0x10);
                                                  lVar16 = *(long *)
                                                  Method_Newtonsoft_Json_Linq_JProperty_RemoveItem__
                                                  ;
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                      plVar12 = (long *)(lVar14 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar12 = lVar11;
                                                      thunk_FUN_02bb0e9c(plVar12,lVar11);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar10,lVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar11 = thunk_FUN_02b79644(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_04dbdb8c(lVar11,0);
                                                  puVar7 = 
                                                  Method_System_Linq_Enumerable_Empty<Type>__;
                                                  if (lVar11 != 0) {
                                                    *(undefined8 *)(lVar11 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  System_Collections_Generic_Queue<JobHandle>_TypeInfo
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar11 + 0x20) =
                                                       *(undefined8 *)puVar7;
                                                  thunk_FUN_02bb0e9c((undefined8 *)(lVar11 + 0x20));
                                                  uVar13 = *(undefined8 *)puVar3;
                                                  *(undefined4 *)(lVar11 + 0x18) = 2;
                                                  lVar14 = thunk_FUN_02b79644(uVar13);
                                                  FUN_037a5cd0(lVar14,*(undefined8 *)puVar4);
                                                  if (lVar14 != 0) {
                                                    lVar16 = *(long *)(lVar14 + 0x10);
                                                    uVar13 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Linq_Enumerable_Select<KeyValuePair<string,_JsonParser_JsonValue>,_string>__
                                                  ;
                                                  lVar17 = *(long *)puVar5;
                                                  *(int *)(lVar14 + 0x1c) =
                                                       *(int *)(lVar14 + 0x1c) + 1;
                                                  if (lVar16 != 0) {
                                                    uVar1 = *(uint *)(lVar14 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                      *(uint *)(lVar14 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar16 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar13;
                                                      thunk_FUN_02bb0e9c();
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar14,uVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar11 + 0x30) = lVar14;
                                                  thunk_FUN_02bb0e9c((long *)(lVar11 + 0x30),lVar14)
                                                  ;
                                                  lVar14 = thunk_FUN_02b79644(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_037a5cd0(lVar14,*(undefined8 *)
                                                                                                                                              
                                                  Method_Newtonsoft_Json_Linq_JPropertyKeyedCollection_Contains__
                                                  );
                                                  lVar16 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                              
                                                  Method_Newtonsoft_Json_Linq_JObject_ValidateToken__
                                                  );
                                                  FUN_04dbdb8c(lVar16,0);
                                                  if (lVar16 != 0) {
                                                    *(undefined8 *)(lVar16 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Newtonsoft_Json_JsonSerializer_set_DefaultValueHandling__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar16 + 0x10) =
                                                       *(undefined8 *)puVar8;
                                                  thunk_FUN_02bb0e9c();
                                                  if (lVar14 != 0) {
                                                    lVar17 = *(long *)(lVar14 + 0x10);
                                                    lVar15 = *(long *)
                                                  Method_Newtonsoft_Json_Linq_JProperty_Load__;
                                                  *(int *)(lVar14 + 0x1c) =
                                                       *(int *)(lVar14 + 0x1c) + 1;
                                                  if (lVar17 != 0) {
                                                    uVar1 = *(uint *)(lVar14 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar17 + 0x18)) {
                                                      *(uint *)(lVar14 + 0x18) = uVar1 + 1;
                                                      plVar12 = (long *)(lVar17 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar12 = lVar16;
                                                      thunk_FUN_02bb0e9c(plVar12,lVar16);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar14,lVar16,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar11 + 0x28) = lVar14;
                                                  thunk_FUN_02bb0e9c((long *)(lVar11 + 0x28),lVar14)
                                                  ;
                                                  lVar14 = *(long *)(lVar10 + 0x10);
                                                  lVar16 = *(long *)
                                                  Method_Newtonsoft_Json_Linq_JProperty_RemoveItem__
                                                  ;
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                      plVar12 = (long *)(lVar14 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar12 = lVar11;
                                                      thunk_FUN_02bb0e9c(plVar12,lVar11);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar10,lVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar11 = thunk_FUN_02b79644(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_04dbdb8c(lVar11,0);
                                                  puVar7 = 
                                                  Method_Newtonsoft_Json_JsonReader_set_MaxDepth__;
                                                  if (lVar11 != 0) {
                                                    *(undefined8 *)(lVar11 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Oculus_Interaction_Interactable<PokeInteractor,_PokeInteractable>_get_State__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar11 + 0x20) =
                                                       *(undefined8 *)puVar7;
                                                  thunk_FUN_02bb0e9c((undefined8 *)(lVar11 + 0x20));
                                                  uVar13 = *(undefined8 *)puVar3;
                                                  *(undefined4 *)(lVar11 + 0x18) = 0;
                                                  lVar14 = thunk_FUN_02b79644(uVar13);
                                                  FUN_037a5cd0(lVar14,*(undefined8 *)puVar4);
                                                  if (lVar14 != 0) {
                                                    lVar16 = *(long *)(lVar14 + 0x10);
                                                    uVar13 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Linq_Enumerable_Select<EnumMemberAttribute,_string>__
                                                  ;
                                                  lVar17 = *(long *)puVar5;
                                                  *(int *)(lVar14 + 0x1c) =
                                                       *(int *)(lVar14 + 0x1c) + 1;
                                                  if (lVar16 != 0) {
                                                    uVar1 = *(uint *)(lVar14 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                      *(uint *)(lVar14 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar16 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar13;
                                                      thunk_FUN_02bb0e9c();
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar14,uVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar11 + 0x30) = lVar14;
                                                  thunk_FUN_02bb0e9c((long *)(lVar11 + 0x30),lVar14)
                                                  ;
                                                  lVar14 = thunk_FUN_02b79644(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_037a5cd0(lVar14,*(undefined8 *)
                                                                                                                                              
                                                  Method_Newtonsoft_Json_Linq_JPropertyKeyedCollection_Contains__
                                                  );
                                                  lVar16 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                              
                                                  Method_Newtonsoft_Json_Linq_JObject_ValidateToken__
                                                  );
                                                  FUN_04dbdb8c(lVar16,0);
                                                  if (lVar16 != 0) {
                                                    *(undefined8 *)(lVar16 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Newtonsoft_Json_JsonSerializer_Deserialize<RegexOptions>__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar16 + 0x10) =
                                                       *(undefined8 *)puVar8;
                                                  thunk_FUN_02bb0e9c();
                                                  if (lVar14 != 0) {
                                                    lVar17 = *(long *)(lVar14 + 0x10);
                                                    lVar15 = *(long *)
                                                  Method_Newtonsoft_Json_Linq_JProperty_Load__;
                                                  *(int *)(lVar14 + 0x1c) =
                                                       *(int *)(lVar14 + 0x1c) + 1;
                                                  if (lVar17 != 0) {
                                                    uVar1 = *(uint *)(lVar14 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar17 + 0x18)) {
                                                      *(uint *)(lVar14 + 0x18) = uVar1 + 1;
                                                      plVar12 = (long *)(lVar17 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar12 = lVar16;
                                                      thunk_FUN_02bb0e9c(plVar12,lVar16);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar14,lVar16,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar11 + 0x28) = lVar14;
                                                  thunk_FUN_02bb0e9c((long *)(lVar11 + 0x28),lVar14)
                                                  ;
                                                  lVar14 = *(long *)(lVar10 + 0x10);
                                                  lVar16 = *(long *)
                                                  Method_Newtonsoft_Json_Linq_JProperty_RemoveItem__
                                                  ;
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                      plVar12 = (long *)(lVar14 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar12 = lVar11;
                                                      thunk_FUN_02bb0e9c(plVar12,lVar11);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar10,lVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar11 = thunk_FUN_02b79644(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_04dbdb8c(lVar11,0);
                                                  puVar7 = 
                                                  Method_LitJson_JsonData_LitJson_IJsonWrapper_GetBoolean__
                                                  ;
                                                  if (lVar11 != 0) {
                                                    *(undefined8 *)(lVar11 + 0x10) =
                                                         *(undefined8 *)
                                                          Method_LitJson_JsonData__ctor__;
                                                    thunk_FUN_02bb0e9c();
                                                    *(undefined8 *)(lVar11 + 0x20) =
                                                         *(undefined8 *)puVar7;
                                                    thunk_FUN_02bb0e9c((undefined8 *)(lVar11 + 0x20)
                                                                      );
                                                    uVar13 = *(undefined8 *)puVar3;
                                                    *(undefined4 *)(lVar11 + 0x18) = 3;
                                                    lVar14 = thunk_FUN_02b79644(uVar13);
                                                    FUN_037a5cd0(lVar14,*(undefined8 *)puVar4);
                                                    if (lVar14 != 0) {
                                                      lVar16 = *(long *)(lVar14 + 0x10);
                                                      uVar13 = *(undefined8 *)
                                                                                                                                
                                                  Method_System_Globalization_JapaneseCalendar_ToFourDigitYear__
                                                  ;
                                                  lVar17 = *(long *)puVar5;
                                                  *(int *)(lVar14 + 0x1c) =
                                                       *(int *)(lVar14 + 0x1c) + 1;
                                                  if (lVar16 != 0) {
                                                    uVar1 = *(uint *)(lVar14 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                      *(uint *)(lVar14 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar16 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar13;
                                                      thunk_FUN_02bb0e9c();
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar14,uVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar11 + 0x30) = lVar14;
                                                  thunk_FUN_02bb0e9c((long *)(lVar11 + 0x30),lVar14)
                                                  ;
                                                  lVar14 = thunk_FUN_02b79644(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_037a5cd0(lVar14,*(undefined8 *)
                                                                                                                                              
                                                  Method_Newtonsoft_Json_Linq_JPropertyKeyedCollection_Contains__
                                                  );
                                                  lVar16 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                              
                                                  Method_Newtonsoft_Json_Linq_JObject_ValidateToken__
                                                  );
                                                  FUN_04dbdb8c(lVar16,0);
                                                  if (lVar16 != 0) {
                                                    *(undefined8 *)(lVar16 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_LitJson_JsonData_LitJson_IJsonWrapper_GetLong__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar16 + 0x10) =
                                                       *(undefined8 *)puVar8;
                                                  thunk_FUN_02bb0e9c();
                                                  if (lVar14 != 0) {
                                                    lVar17 = *(long *)(lVar14 + 0x10);
                                                    lVar15 = *(long *)
                                                  Method_Newtonsoft_Json_Linq_JProperty_Load__;
                                                  *(int *)(lVar14 + 0x1c) =
                                                       *(int *)(lVar14 + 0x1c) + 1;
                                                  if (lVar17 != 0) {
                                                    uVar1 = *(uint *)(lVar14 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar17 + 0x18)) {
                                                      *(uint *)(lVar14 + 0x18) = uVar1 + 1;
                                                      plVar12 = (long *)(lVar17 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar12 = lVar16;
                                                      thunk_FUN_02bb0e9c(plVar12,lVar16);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar14,lVar16,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar11 + 0x28) = lVar14;
                                                  thunk_FUN_02bb0e9c((long *)(lVar11 + 0x28),lVar14)
                                                  ;
                                                  lVar14 = *(long *)(lVar10 + 0x10);
                                                  lVar16 = *(long *)
                                                  Method_Newtonsoft_Json_Linq_JProperty_RemoveItem__
                                                  ;
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                      plVar12 = (long *)(lVar14 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar12 = lVar11;
                                                      thunk_FUN_02bb0e9c(plVar12,lVar11);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar10,lVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar11 = thunk_FUN_02b79644(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_04dbdb8c(lVar11,0);
                                                  puVar7 = 
                                                  Method_Newtonsoft_Json_JsonConvert_DeserializeObject<Dictionary<string,_string>>__
                                                  ;
                                                  if (lVar11 != 0) {
                                                    *(undefined8 *)(lVar11 + 0x10) =
                                                         *(undefined8 *)PTR_DAT_06332138;
                                                    thunk_FUN_02bb0e9c();
                                                    *(undefined8 *)(lVar11 + 0x20) =
                                                         *(undefined8 *)puVar7;
                                                    thunk_FUN_02bb0e9c((undefined8 *)(lVar11 + 0x20)
                                                                      );
                                                    uVar13 = *(undefined8 *)puVar3;
                                                    *(undefined4 *)(lVar11 + 0x18) = 3;
                                                    lVar14 = thunk_FUN_02b79644(uVar13);
                                                    FUN_037a5cd0(lVar14,*(undefined8 *)puVar4);
                                                    if (lVar14 != 0) {
                                                      lVar16 = *(long *)(lVar14 + 0x10);
                                                      uVar13 = *(undefined8 *)
                                                                                                                                
                                                  Method_System_Collections_Generic_List<IntegratedSubsystemDescriptor>_GetEnumerator__
                                                  ;
                                                  lVar17 = *(long *)puVar5;
                                                  *(int *)(lVar14 + 0x1c) =
                                                       *(int *)(lVar14 + 0x1c) + 1;
                                                  if (lVar16 != 0) {
                                                    uVar1 = *(uint *)(lVar14 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                      *(uint *)(lVar14 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar16 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar13;
                                                      thunk_FUN_02bb0e9c();
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar14,uVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar11 + 0x30) = lVar14;
                                                  thunk_FUN_02bb0e9c((long *)(lVar11 + 0x30),lVar14)
                                                  ;
                                                  lVar14 = thunk_FUN_02b79644(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_037a5cd0(lVar14,*(undefined8 *)
                                                                                                                                              
                                                  Method_Newtonsoft_Json_Linq_JPropertyKeyedCollection_Contains__
                                                  );
                                                  lVar16 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                              
                                                  Method_Newtonsoft_Json_Linq_JObject_ValidateToken__
                                                  );
                                                  FUN_04dbdb8c(lVar16,0);
                                                  if (lVar16 != 0) {
                                                    *(undefined8 *)(lVar16 + 0x18) =
                                                         *(undefined8 *)
                                                          Method_LitJson_JsonData_EnsureDictionary__
                                                    ;
                                                    thunk_FUN_02bb0e9c();
                                                    *(undefined8 *)(lVar16 + 0x10) =
                                                         *(undefined8 *)puVar8;
                                                    thunk_FUN_02bb0e9c();
                                                    if (lVar14 != 0) {
                                                      lVar17 = *(long *)(lVar14 + 0x10);
                                                      lVar15 = *(long *)
                                                  Method_Newtonsoft_Json_Linq_JProperty_Load__;
                                                  *(int *)(lVar14 + 0x1c) =
                                                       *(int *)(lVar14 + 0x1c) + 1;
                                                  if (lVar17 != 0) {
                                                    uVar1 = *(uint *)(lVar14 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar17 + 0x18)) {
                                                      *(uint *)(lVar14 + 0x18) = uVar1 + 1;
                                                      plVar12 = (long *)(lVar17 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar12 = lVar16;
                                                      thunk_FUN_02bb0e9c(plVar12,lVar16);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar14,lVar16,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar11 + 0x28) = lVar14;
                                                  thunk_FUN_02bb0e9c((long *)(lVar11 + 0x28),lVar14)
                                                  ;
                                                  lVar14 = *(long *)(lVar10 + 0x10);
                                                  lVar16 = *(long *)
                                                  Method_Newtonsoft_Json_Linq_JProperty_RemoveItem__
                                                  ;
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                      plVar12 = (long *)(lVar14 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar12 = lVar11;
                                                      thunk_FUN_02bb0e9c(plVar12,lVar11);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar10,lVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar11 = thunk_FUN_02b79644(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_04dbdb8c(lVar11,0);
                                                  puVar2 = 
                                                  Method_Newtonsoft_Json_JsonSerializer_set_MetadataPropertyHandling__
                                                  ;
                                                  if (lVar11 != 0) {
                                                    *(undefined8 *)(lVar11 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Newtonsoft_Json_Serialization_JsonSerializerInternalBase_GetErrorContext__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar11 + 0x20) =
                                                       *(undefined8 *)puVar2;
                                                  thunk_FUN_02bb0e9c((undefined8 *)(lVar11 + 0x20));
                                                  uVar13 = *(undefined8 *)puVar3;
                                                  *(undefined4 *)(lVar11 + 0x18) = 4;
                                                  lVar14 = thunk_FUN_02b79644(uVar13);
                                                  FUN_037a5cd0(lVar14,*(undefined8 *)puVar4);
                                                  if (lVar14 != 0) {
                                                    lVar16 = *(long *)(lVar14 + 0x10);
                                                    uVar13 = *(undefined8 *)
                                                                                                                            
                                                  Method_UnityEngine_InputSystem_InputControlExtensions_CopyState__
                                                  ;
                                                  lVar17 = *(long *)puVar5;
                                                  *(int *)(lVar14 + 0x1c) =
                                                       *(int *)(lVar14 + 0x1c) + 1;
                                                  if (lVar16 != 0) {
                                                    uVar1 = *(uint *)(lVar14 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                      *(uint *)(lVar14 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar16 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar13;
                                                      thunk_FUN_02bb0e9c();
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar14,uVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar11 + 0x30) = lVar14;
                                                  thunk_FUN_02bb0e9c((long *)(lVar11 + 0x30),lVar14)
                                                  ;
                                                  lVar14 = thunk_FUN_02b79644(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_037a5cd0(lVar14,*(undefined8 *)
                                                                                                                                              
                                                  Method_Newtonsoft_Json_Linq_JPropertyKeyedCollection_Contains__
                                                  );
                                                  lVar16 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                              
                                                  Method_Newtonsoft_Json_Linq_JObject_ValidateToken__
                                                  );
                                                  FUN_04dbdb8c(lVar16,0);
                                                  if (lVar16 != 0) {
                                                    *(undefined8 *)(lVar16 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Newtonsoft_Json_JsonReader_set_FloatParseHandling__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar16 + 0x10) =
                                                       *(undefined8 *)puVar8;
                                                  thunk_FUN_02bb0e9c();
                                                  if (lVar14 != 0) {
                                                    lVar17 = *(long *)(lVar14 + 0x10);
                                                    lVar15 = *(long *)
                                                  Method_Newtonsoft_Json_Linq_JProperty_Load__;
                                                  *(int *)(lVar14 + 0x1c) =
                                                       *(int *)(lVar14 + 0x1c) + 1;
                                                  if (lVar17 != 0) {
                                                    uVar1 = *(uint *)(lVar14 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar17 + 0x18)) {
                                                      *(uint *)(lVar14 + 0x18) = uVar1 + 1;
                                                      plVar12 = (long *)(lVar17 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar12 = lVar16;
                                                      thunk_FUN_02bb0e9c(plVar12,lVar16);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar14,lVar16,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar11 + 0x28) = lVar14;
                                                  thunk_FUN_02bb0e9c((long *)(lVar11 + 0x28),lVar14)
                                                  ;
                                                  lVar14 = *(long *)(lVar10 + 0x10);
                                                  lVar16 = *(long *)
                                                  Method_Newtonsoft_Json_Linq_JProperty_RemoveItem__
                                                  ;
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                      plVar12 = (long *)(lVar14 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar12 = lVar11;
                                                      thunk_FUN_02bb0e9c(plVar12,lVar11);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar10,lVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x28) = lVar10;
                                                  uVar13 = thunk_FUN_02bb0e9c((long *)(lVar9 + 0x28)
                                                                              ,lVar10);
                                                  FUN_05b9ad1c(uVar13,lVar9);
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
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


