/*
FUNCTION_NAME: UnityEngine.SceneManagement.Scene$$GetRootGameObjects
ENTRY_POINT: 05ba3200
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;telemetry;keyword_support
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;ray_or_cast_sink_hits_1;telemetry_or_network_hits_16;eye_or_gaze_keyword_boost_only;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void UnityEngine_SceneManagement_Scene__GetRootGameObjects(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 *unaff_x27;
  
  *(undefined8 *)(unaff_x21 + 0x18) = *(undefined8 *)Method_Newtonsoft_Json_Linq_JToken_Replace__;
  *(undefined4 *)(unaff_x21 + 0x10) = 0x264;
  thunk_FUN_02bb0e9c();
  lVar12 = *(long *)(unaff_x20 + 0x10);
  *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
  puVar3 = Method_OVRSimpleJSON_JSONLazyCreator_Set<JSONBool>__;
  puVar2 = Method_Newtonsoft_Json_Linq_JProperty_RemoveItemAt__;
  puVar7 = Method_Newtonsoft_Json_Linq_JProperty_ClearItems__;
  if (lVar12 != 0) {
    uVar1 = *(uint *)(unaff_x20 + 0x18);
    if (uVar1 < *(uint *)(lVar12 + 0x18)) {
      *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
      *(long *)(lVar12 + (long)(int)uVar1 * 8 + 0x20) = unaff_x21;
      thunk_FUN_02bb0e9c();
    }
    else {
      FUN_037a6538();
    }
    *(long *)(unaff_x19 + 0x20) = unaff_x20;
    thunk_FUN_02bb0e9c();
    lVar12 = thunk_FUN_02b79644(*(undefined8 *)puVar3);
    FUN_037a5cd0(lVar12,*(undefined8 *)puVar2);
    lVar8 = thunk_FUN_02b79644(*(undefined8 *)puVar7);
    FUN_04dbdb8c(lVar8,0);
    puVar4 = Method_Newtonsoft_Json_JsonSerializer_set_ObjectCreationHandling__;
    puVar3 = PTR_DAT_063145b8;
    puVar2 = PTR_DAT_063145b0;
    if (lVar8 != 0) {
      *(undefined8 *)(lVar8 + 0x10) =
           *(undefined8 *)
            Method_Oculus_Interaction_Interactable<LocomotionTurnerInteractor,_LocomotionTurnerInteractable>__ctor__
      ;
      thunk_FUN_02bb0e9c();
      *(undefined8 *)(lVar8 + 0x20) = *(undefined8 *)puVar4;
      thunk_FUN_02bb0e9c((undefined8 *)(lVar8 + 0x20));
      uVar9 = *(undefined8 *)puVar2;
      *(undefined4 *)(lVar8 + 0x18) = 0;
      lVar10 = thunk_FUN_02b79644(uVar9);
      FUN_037a5cd0(lVar10,*(undefined8 *)puVar3);
      puVar4 = PTR_DAT_063173b8;
      if (lVar10 != 0) {
        lVar13 = *(long *)(lVar10 + 0x10);
        uVar9 = *(undefined8 *)Method_System_Linq_Enumerable_Select<Collider,_Transform>__;
        lVar15 = *(long *)PTR_DAT_063173b8;
        *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
        puVar6 = Method_OVRSimpleJSON_JSONLazyCreator_Set<JSONNumber>__;
        if (lVar13 != 0) {
          uVar1 = *(uint *)(lVar10 + 0x18);
          if (uVar1 < *(uint *)(lVar13 + 0x18)) {
            *(uint *)(lVar10 + 0x18) = uVar1 + 1;
            *(undefined8 *)(lVar13 + (long)(int)uVar1 * 8 + 0x20) = uVar9;
            thunk_FUN_02bb0e9c();
          }
          else {
            FUN_037a6538(lVar10,uVar9,
                         *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
          }
          *(long *)(lVar8 + 0x30) = lVar10;
          thunk_FUN_02bb0e9c((long *)(lVar8 + 0x30),lVar10);
          lVar10 = thunk_FUN_02b79644(*(undefined8 *)puVar6);
          FUN_037a5cd0(lVar10,*(undefined8 *)
                               Method_Newtonsoft_Json_Linq_JPropertyKeyedCollection_Contains__);
          lVar13 = thunk_FUN_02b79644(*(undefined8 *)
                                       Method_Newtonsoft_Json_Linq_JObject_ValidateToken__);
          FUN_04dbdb8c(lVar13,0);
          if (lVar13 != 0) {
            *(undefined8 *)(lVar13 + 0x18) =
                 *(undefined8 *)
                  Method_Newtonsoft_Json_Serialization_JsonSerializerInternalBase_ClearErrorContext__
            ;
            thunk_FUN_02bb0e9c();
            *(undefined8 *)(lVar13 + 0x10) = *unaff_x27;
            thunk_FUN_02bb0e9c();
            lVar15 = thunk_FUN_02b79644(*(undefined8 *)puVar2);
            FUN_037a5cd0(lVar15,*(undefined8 *)puVar3);
            if (lVar15 != 0) {
              lVar14 = *(long *)(lVar15 + 0x10);
              uVar9 = *(undefined8 *)Method_Newtonsoft_Json_Linq_JToken_op_Explicit__;
              lVar16 = *(long *)puVar4;
              *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
              if (lVar14 != 0) {
                uVar1 = *(uint *)(lVar15 + 0x18);
                if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                  *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                  *(undefined8 *)(lVar14 + (long)(int)uVar1 * 8 + 0x20) = uVar9;
                  thunk_FUN_02bb0e9c();
                }
                else {
                  FUN_037a6538(lVar15,uVar9,
                               *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
                }
                *(long *)(lVar13 + 0x20) = lVar15;
                thunk_FUN_02bb0e9c((long *)(lVar13 + 0x20),lVar15);
                if (lVar10 != 0) {
                  lVar15 = *(long *)(lVar10 + 0x10);
                  lVar14 = *(long *)Method_Newtonsoft_Json_Linq_JProperty_Load__;
                  *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
                  if (lVar15 != 0) {
                    uVar1 = *(uint *)(lVar10 + 0x18);
                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                      plVar11 = (long *)(lVar15 + (long)(int)uVar1 * 8 + 0x20);
                      *plVar11 = lVar13;
                      thunk_FUN_02bb0e9c(plVar11,lVar13);
                    }
                    else {
                      FUN_037a6538(lVar10,lVar13,
                                   *(undefined8 *)
                                    (*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
                    }
                    lVar13 = thunk_FUN_02b79644(*(undefined8 *)
                                                 Method_Newtonsoft_Json_Linq_JObject_ValidateToken__
                                               );
                    FUN_04dbdb8c(lVar13,0);
                    if (lVar13 != 0) {
                      *(undefined8 *)(lVar13 + 0x18) =
                           *(undefined8 *)
                            Method_Newtonsoft_Json_JsonSerializer_set_ReferenceResolver__;
                      thunk_FUN_02bb0e9c();
                      *(undefined8 *)(lVar13 + 0x10) = *unaff_x27;
                      thunk_FUN_02bb0e9c();
                      lVar15 = thunk_FUN_02b79644(*(undefined8 *)puVar2);
                      FUN_037a5cd0(lVar15,*(undefined8 *)puVar3);
                      if (lVar15 != 0) {
                        lVar14 = *(long *)(lVar15 + 0x10);
                        uVar9 = *(undefined8 *)Method_Newtonsoft_Json_Linq_JToken_Replace__;
                        lVar16 = *(long *)puVar4;
                        *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
                        if (lVar14 != 0) {
                          uVar1 = *(uint *)(lVar15 + 0x18);
                          if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                            *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                            *(undefined8 *)(lVar14 + (long)(int)uVar1 * 8 + 0x20) = uVar9;
                            thunk_FUN_02bb0e9c();
                          }
                          else {
                            FUN_037a6538(lVar15,uVar9,
                                         *(undefined8 *)
                                          (*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
                          }
                          *(long *)(lVar13 + 0x20) = lVar15;
                          thunk_FUN_02bb0e9c((long *)(lVar13 + 0x20),lVar15);
                          lVar15 = *(long *)(lVar10 + 0x10);
                          lVar14 = *(long *)Method_Newtonsoft_Json_Linq_JProperty_Load__;
                          *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
                          puVar6 = Method_OVRSimpleJSON_JSONLazyCreator_Set<JSONNumber>__;
                          if (lVar15 != 0) {
                            uVar1 = *(uint *)(lVar10 + 0x18);
                            if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                              *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                              plVar11 = (long *)(lVar15 + (long)(int)uVar1 * 8 + 0x20);
                              *plVar11 = lVar13;
                              thunk_FUN_02bb0e9c(plVar11,lVar13);
                            }
                            else {
                              FUN_037a6538(lVar10,lVar13,
                                           *(undefined8 *)
                                            (*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
                            }
                            *(long *)(lVar8 + 0x28) = lVar10;
                            thunk_FUN_02bb0e9c((long *)(lVar8 + 0x28),lVar10);
                            if (lVar12 != 0) {
                              lVar10 = *(long *)(lVar12 + 0x10);
                              lVar13 = *(long *)Method_Newtonsoft_Json_Linq_JProperty_RemoveItem__;
                              *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
                              if (lVar10 != 0) {
                                uVar1 = *(uint *)(lVar12 + 0x18);
                                if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                  *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                  plVar11 = (long *)(lVar10 + (long)(int)uVar1 * 8 + 0x20);
                                  *plVar11 = lVar8;
                                  thunk_FUN_02bb0e9c(plVar11,lVar8);
                                }
                                else {
                                  FUN_037a6538(lVar12,lVar8,
                                               *(undefined8 *)
                                                (*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70))
                                  ;
                                }
                                lVar8 = thunk_FUN_02b79644(*(undefined8 *)puVar7);
                                FUN_04dbdb8c(lVar8,0);
                                puVar5 = 
                                Method_Newtonsoft_Json_JsonSerializer_set_MissingMemberHandling__;
                                if (lVar8 != 0) {
                                  *(undefined8 *)(lVar8 + 0x10) =
                                       *(undefined8 *)
                                        Method_Oculus_Interaction_Interactable<PokeInteractor,_PokeInteractable>_get_Interactors__
                                  ;
                                  thunk_FUN_02bb0e9c();
                                  *(undefined8 *)(lVar8 + 0x20) = *(undefined8 *)puVar5;
                                  thunk_FUN_02bb0e9c((undefined8 *)(lVar8 + 0x20));
                                  uVar9 = *(undefined8 *)puVar2;
                                  *(undefined4 *)(lVar8 + 0x18) = 0;
                                  lVar10 = thunk_FUN_02b79644(uVar9);
                                  FUN_037a5cd0(lVar10,*(undefined8 *)puVar3);
                                  if (lVar10 != 0) {
                                    lVar13 = *(long *)(lVar10 + 0x10);
                                    uVar9 = *(undefined8 *)
                                             Method_System_Linq_Enumerable_Select<FieldInfo,_string>__
                                    ;
                                    lVar15 = *(long *)puVar4;
                                    *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
                                    if (lVar13 != 0) {
                                      uVar1 = *(uint *)(lVar10 + 0x18);
                                      if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                        *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                        *(undefined8 *)(lVar13 + (long)(int)uVar1 * 8 + 0x20) =
                                             uVar9;
                                        thunk_FUN_02bb0e9c();
                                      }
                                      else {
                                        FUN_037a6538(lVar10,uVar9,
                                                     *(undefined8 *)
                                                      (*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) +
                                                      0x70));
                                      }
                                      *(long *)(lVar8 + 0x30) = lVar10;
                                      thunk_FUN_02bb0e9c((long *)(lVar8 + 0x30),lVar10);
                                      lVar10 = thunk_FUN_02b79644(*(undefined8 *)puVar6);
                                      FUN_037a5cd0(lVar10,*(undefined8 *)
                                                                                                                      
                                                  Method_Newtonsoft_Json_Linq_JPropertyKeyedCollection_Contains__
                                                  );
                                      lVar13 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                      
                                                  Method_Newtonsoft_Json_Linq_JObject_ValidateToken__
                                                  );
                                      FUN_04dbdb8c(lVar13,0);
                                      if (lVar13 != 0) {
                                        *(undefined8 *)(lVar13 + 0x18) =
                                             *(undefined8 *)
                                              Method_Newtonsoft_Json_JsonSerializer_set_TypeNameAssemblyFormatHandling__
                                        ;
                                        thunk_FUN_02bb0e9c();
                                        *(undefined8 *)(lVar13 + 0x10) = *unaff_x27;
                                        thunk_FUN_02bb0e9c();
                                        lVar15 = thunk_FUN_02b79644(*(undefined8 *)puVar2);
                                        FUN_037a5cd0(lVar15,*(undefined8 *)puVar3);
                                        if (lVar15 != 0) {
                                          lVar14 = *(long *)(lVar15 + 0x10);
                                          uVar9 = *(undefined8 *)
                                                   Method_Newtonsoft_Json_Linq_JToken_op_Explicit__;
                                          lVar16 = *(long *)puVar4;
                                          *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
                                          if (lVar14 != 0) {
                                            uVar1 = *(uint *)(lVar15 + 0x18);
                                            if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                              *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                              *(undefined8 *)(lVar14 + (long)(int)uVar1 * 8 + 0x20)
                                                   = uVar9;
                                              thunk_FUN_02bb0e9c();
                                            }
                                            else {
                                              FUN_037a6538(lVar15,uVar9,
                                                           *(undefined8 *)
                                                            (*(long *)(*(long *)(lVar16 + 0x20) +
                                                                      0xc0) + 0x70));
                                            }
                                            *(long *)(lVar13 + 0x20) = lVar15;
                                            thunk_FUN_02bb0e9c((long *)(lVar13 + 0x20),lVar15);
                                            if (lVar10 != 0) {
                                              lVar15 = *(long *)(lVar10 + 0x10);
                                              lVar14 = *(long *)
                                                  Method_Newtonsoft_Json_Linq_JProperty_Load__;
                                              *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
                                              if (lVar15 != 0) {
                                                uVar1 = *(uint *)(lVar10 + 0x18);
                                                if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                  *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                  plVar11 = (long *)(lVar15 + (long)(int)uVar1 * 8 +
                                                                    0x20);
                                                  *plVar11 = lVar13;
                                                  thunk_FUN_02bb0e9c(plVar11,lVar13);
                                                }
                                                else {
                                                  FUN_037a6538(lVar10,lVar13,
                                                               *(undefined8 *)
                                                                (*(long *)(*(long *)(lVar14 + 0x20)
                                                                          + 0xc0) + 0x70));
                                                }
                                                lVar13 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                          
                                                  Method_Newtonsoft_Json_Linq_JObject_ValidateToken__
                                                  );
                                                FUN_04dbdb8c(lVar13,0);
                                                if (lVar13 != 0) {
                                                  *(undefined8 *)(lVar13 + 0x18) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_Newtonsoft_Json_JsonSerializer_set_PreserveReferencesHandling__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar13 + 0x10) = *unaff_x27;
                                                  thunk_FUN_02bb0e9c();
                                                  lVar15 = thunk_FUN_02b79644(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_037a5cd0(lVar15,*(undefined8 *)puVar3);
                                                  if (lVar15 != 0) {
                                                    lVar14 = *(long *)(lVar15 + 0x10);
                                                    uVar9 = *(undefined8 *)
                                                                                                                          
                                                  Method_Newtonsoft_Json_Linq_JToken_Replace__;
                                                  lVar16 = *(long *)puVar4;
                                                  *(int *)(lVar15 + 0x1c) =
                                                       *(int *)(lVar15 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar15 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar14 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar9;
                                                      thunk_FUN_02bb0e9c();
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar15,uVar9,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar13 + 0x20) = lVar15;
                                                  thunk_FUN_02bb0e9c((long *)(lVar13 + 0x20),lVar15)
                                                  ;
                                                  lVar15 = *(long *)(lVar10 + 0x10);
                                                  lVar14 = *(long *)
                                                  Method_Newtonsoft_Json_Linq_JProperty_Load__;
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  puVar6 = 
                                                  Method_OVRSimpleJSON_JSONLazyCreator_Set<JSONNumber>__
                                                  ;
                                                  if (lVar15 != 0) {
                                                    uVar1 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                      plVar11 = (long *)(lVar15 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar11 = lVar13;
                                                      thunk_FUN_02bb0e9c(plVar11,lVar13);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar10,lVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar8 + 0x28) = lVar10;
                                                  thunk_FUN_02bb0e9c((long *)(lVar8 + 0x28),lVar10);
                                                  lVar10 = *(long *)(lVar12 + 0x10);
                                                  lVar13 = *(long *)
                                                  Method_Newtonsoft_Json_Linq_JProperty_RemoveItem__
                                                  ;
                                                  *(int *)(lVar12 + 0x1c) =
                                                       *(int *)(lVar12 + 0x1c) + 1;
                                                  if (lVar10 != 0) {
                                                    uVar1 = *(uint *)(lVar12 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                      *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                      plVar11 = (long *)(lVar10 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar11 = lVar8;
                                                      thunk_FUN_02bb0e9c(plVar11,lVar8);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar12,lVar8,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar13 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar8 = thunk_FUN_02b79644(*(undefined8 *)puVar7);
                                                  FUN_04dbdb8c(lVar8,0);
                                                  puVar5 = 
                                                  OVR_OpenVR_IVRSystem__GetControllerStateWithPose_TypeInfo
                                                  ;
                                                  if (lVar8 != 0) {
                                                    *(undefined8 *)(lVar8 + 0x10) =
                                                         *(undefined8 *)PTR_DAT_063210b8;
                                                    thunk_FUN_02bb0e9c();
                                                    *(undefined8 *)(lVar8 + 0x20) =
                                                         *(undefined8 *)puVar5;
                                                    thunk_FUN_02bb0e9c((undefined8 *)(lVar8 + 0x20))
                                                    ;
                                                    uVar9 = *(undefined8 *)puVar2;
                                                    *(undefined4 *)(lVar8 + 0x18) = 0;
                                                    lVar10 = thunk_FUN_02b79644(uVar9);
                                                    FUN_037a5cd0(lVar10,*(undefined8 *)puVar3);
                                                    if (lVar10 != 0) {
                                                      lVar13 = *(long *)(lVar10 + 0x10);
                                                      uVar9 = *(undefined8 *)
                                                                                                                              
                                                  Method_System_Linq_Enumerable_Select<Enum,_int>__;
                                                  lVar15 = *(long *)puVar4;
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar13 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar9;
                                                      thunk_FUN_02bb0e9c();
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar10,uVar9,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar8 + 0x30) = lVar10;
                                                  thunk_FUN_02bb0e9c((long *)(lVar8 + 0x30),lVar10);
                                                  lVar10 = thunk_FUN_02b79644(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_037a5cd0(lVar10,*(undefined8 *)
                                                                                                                                              
                                                  Method_Newtonsoft_Json_Linq_JPropertyKeyedCollection_Contains__
                                                  );
                                                  lVar13 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                              
                                                  Method_Newtonsoft_Json_Linq_JObject_ValidateToken__
                                                  );
                                                  FUN_04dbdb8c(lVar13,0);
                                                  if (lVar13 != 0) {
                                                    *(undefined8 *)(lVar13 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Newtonsoft_Json_JsonReader_set_DateParseHandling__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar13 + 0x10) = *unaff_x27;
                                                  thunk_FUN_02bb0e9c();
                                                  if (lVar10 != 0) {
                                                    lVar15 = *(long *)(lVar10 + 0x10);
                                                    lVar14 = *(long *)
                                                  Method_Newtonsoft_Json_Linq_JProperty_Load__;
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar15 != 0) {
                                                    uVar1 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                      plVar11 = (long *)(lVar15 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar11 = lVar13;
                                                      thunk_FUN_02bb0e9c(plVar11,lVar13);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar10,lVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar8 + 0x28) = lVar10;
                                                  thunk_FUN_02bb0e9c((long *)(lVar8 + 0x28),lVar10);
                                                  lVar10 = *(long *)(lVar12 + 0x10);
                                                  lVar13 = *(long *)
                                                  Method_Newtonsoft_Json_Linq_JProperty_RemoveItem__
                                                  ;
                                                  *(int *)(lVar12 + 0x1c) =
                                                       *(int *)(lVar12 + 0x1c) + 1;
                                                  if (lVar10 != 0) {
                                                    uVar1 = *(uint *)(lVar12 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                      *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                      plVar11 = (long *)(lVar10 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar11 = lVar8;
                                                      thunk_FUN_02bb0e9c(plVar11,lVar8);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar12,lVar8,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar13 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar8 = thunk_FUN_02b79644(*(undefined8 *)puVar7);
                                                  FUN_04dbdb8c(lVar8,0);
                                                  puVar5 = PTR_DAT_0631b1e8;
                                                  if (lVar8 != 0) {
                                                    *(undefined8 *)(lVar8 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Oculus_Interaction_Interactable<HandGrabInteractor,_HandGrabInteractable>_remove_WhenStateChanged__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar8 + 0x20) =
                                                       *(undefined8 *)puVar5;
                                                  thunk_FUN_02bb0e9c((undefined8 *)(lVar8 + 0x20));
                                                  uVar9 = *(undefined8 *)puVar2;
                                                  *(undefined4 *)(lVar8 + 0x18) = 1;
                                                  lVar10 = thunk_FUN_02b79644(uVar9);
                                                  FUN_037a5cd0(lVar10,*(undefined8 *)puVar3);
                                                  if (lVar10 != 0) {
                                                    lVar13 = *(long *)(lVar10 + 0x10);
                                                    uVar9 = *(undefined8 *)puVar5;
                                                    lVar15 = *(long *)puVar4;
                                                    *(int *)(lVar10 + 0x1c) =
                                                         *(int *)(lVar10 + 0x1c) + 1;
                                                    if (lVar13 != 0) {
                                                      uVar1 = *(uint *)(lVar10 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                        *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                        *(undefined8 *)
                                                         (lVar13 + (long)(int)uVar1 * 8 + 0x20) =
                                                             uVar9;
                                                        thunk_FUN_02bb0e9c();
                                                      }
                                                      else {
                                                        FUN_037a6538(lVar10,uVar9,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar8 + 0x30) = lVar10;
                                                  thunk_FUN_02bb0e9c((long *)(lVar8 + 0x30),lVar10);
                                                  lVar10 = thunk_FUN_02b79644(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_037a5cd0(lVar10,*(undefined8 *)
                                                                                                                                              
                                                  Method_Newtonsoft_Json_Linq_JPropertyKeyedCollection_Contains__
                                                  );
                                                  lVar13 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                              
                                                  Method_Newtonsoft_Json_Linq_JObject_ValidateToken__
                                                  );
                                                  FUN_04dbdb8c(lVar13,0);
                                                  puVar6 = 
                                                  Method_Newtonsoft_Json_JsonReader_set_DateTimeZoneHandling__
                                                  ;
                                                  if (lVar13 != 0) {
                                                    *(undefined8 *)(lVar13 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Newtonsoft_Json_JsonReader_set_DateTimeZoneHandling__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar13 + 0x10) = *unaff_x27;
                                                  thunk_FUN_02bb0e9c();
                                                  if (lVar10 != 0) {
                                                    lVar15 = *(long *)(lVar10 + 0x10);
                                                    lVar14 = *(long *)
                                                  Method_Newtonsoft_Json_Linq_JProperty_Load__;
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar15 != 0) {
                                                    uVar1 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                      plVar11 = (long *)(lVar15 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar11 = lVar13;
                                                      thunk_FUN_02bb0e9c(plVar11,lVar13);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar10,lVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar8 + 0x28) = lVar10;
                                                  thunk_FUN_02bb0e9c((long *)(lVar8 + 0x28),lVar10);
                                                  lVar10 = *(long *)(lVar12 + 0x10);
                                                  lVar13 = *(long *)
                                                  Method_Newtonsoft_Json_Linq_JProperty_RemoveItem__
                                                  ;
                                                  *(int *)(lVar12 + 0x1c) =
                                                       *(int *)(lVar12 + 0x1c) + 1;
                                                  if (lVar10 != 0) {
                                                    uVar1 = *(uint *)(lVar12 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                      *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                      plVar11 = (long *)(lVar10 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar11 = lVar8;
                                                      thunk_FUN_02bb0e9c(plVar11,lVar8);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar12,lVar8,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar13 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar8 = thunk_FUN_02b79644(*(undefined8 *)puVar7);
                                                  FUN_04dbdb8c(lVar8,0);
                                                  puVar5 = 
                                                  Method_Newtonsoft_Json_JsonSerializer_set_NullValueHandling__
                                                  ;
                                                  if (lVar8 != 0) {
                                                    *(undefined8 *)(lVar8 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Oculus_Interaction_Interactable<HandGrabInteractor,_HandGrabInteractable>_add_WhenStateChanged__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar8 + 0x20) =
                                                       *(undefined8 *)puVar5;
                                                  thunk_FUN_02bb0e9c((undefined8 *)(lVar8 + 0x20));
                                                  uVar9 = *(undefined8 *)puVar2;
                                                  *(undefined4 *)(lVar8 + 0x18) = 0;
                                                  lVar10 = thunk_FUN_02b79644(uVar9);
                                                  FUN_037a5cd0(lVar10,*(undefined8 *)puVar3);
                                                  if (lVar10 != 0) {
                                                    lVar13 = *(long *)(lVar10 + 0x10);
                                                    uVar9 = *(undefined8 *)
                                                                                                                          
                                                  Method_System_Linq_Enumerable_Select<DataColumn,_Type>__
                                                  ;
                                                  lVar15 = *(long *)puVar4;
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar13 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar9;
                                                      thunk_FUN_02bb0e9c();
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar10,uVar9,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar8 + 0x30) = lVar10;
                                                  thunk_FUN_02bb0e9c((long *)(lVar8 + 0x30),lVar10);
                                                  lVar10 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                              
                                                  Method_OVRSimpleJSON_JSONLazyCreator_Set<JSONNumber>__
                                                  );
                                                  FUN_037a5cd0(lVar10,*(undefined8 *)
                                                                                                                                              
                                                  Method_Newtonsoft_Json_Linq_JPropertyKeyedCollection_Contains__
                                                  );
                                                  lVar13 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                              
                                                  Method_Newtonsoft_Json_Linq_JObject_ValidateToken__
                                                  );
                                                  FUN_04dbdb8c(lVar13,0);
                                                  if (lVar13 != 0) {
                                                    *(undefined8 *)(lVar13 + 0x18) =
                                                         *(undefined8 *)puVar6;
                                                    thunk_FUN_02bb0e9c();
                                                    *(undefined8 *)(lVar13 + 0x10) = *unaff_x27;
                                                    thunk_FUN_02bb0e9c();
                                                    puVar6 = 
                                                  Method_Newtonsoft_Json_Linq_JProperty_Load__;
                                                  if (lVar10 != 0) {
                                                    lVar15 = *(long *)(lVar10 + 0x10);
                                                    *(int *)(lVar10 + 0x1c) =
                                                         *(int *)(lVar10 + 0x1c) + 1;
                                                    puVar5 = 
                                                  Method_OVRSimpleJSON_JSONLazyCreator_Set<JSONNumber>__
                                                  ;
                                                  if (lVar15 != 0) {
                                                    uVar1 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                      plVar11 = (long *)(lVar15 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar11 = lVar13;
                                                      thunk_FUN_02bb0e9c(plVar11,lVar13);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar10,lVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(*(long *)
                                                  puVar6 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar8 + 0x28) = lVar10;
                                                  thunk_FUN_02bb0e9c((long *)(lVar8 + 0x28),lVar10);
                                                  lVar10 = *(long *)(lVar12 + 0x10);
                                                  lVar13 = *(long *)
                                                  Method_Newtonsoft_Json_Linq_JProperty_RemoveItem__
                                                  ;
                                                  *(int *)(lVar12 + 0x1c) =
                                                       *(int *)(lVar12 + 0x1c) + 1;
                                                  if (lVar10 != 0) {
                                                    uVar1 = *(uint *)(lVar12 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                      *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                      plVar11 = (long *)(lVar10 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar11 = lVar8;
                                                      thunk_FUN_02bb0e9c(plVar11,lVar8);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar12,lVar8,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar13 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar8 = thunk_FUN_02b79644(*(undefined8 *)puVar7);
                                                  FUN_04dbdb8c(lVar8,0);
                                                  puVar6 = PTR_DAT_0631b1f0;
                                                  if (lVar8 != 0) {
                                                    *(undefined8 *)(lVar8 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Oculus_Interaction_Interactable<HandGrabUseInteractor,_HandGrabUseInteractable>_SelectingInteractorAdded__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar8 + 0x20) =
                                                       *(undefined8 *)puVar6;
                                                  thunk_FUN_02bb0e9c((undefined8 *)(lVar8 + 0x20));
                                                  uVar9 = *(undefined8 *)puVar2;
                                                  *(undefined4 *)(lVar8 + 0x18) = 1;
                                                  lVar10 = thunk_FUN_02b79644(uVar9);
                                                  FUN_037a5cd0(lVar10,*(undefined8 *)puVar3);
                                                  if (lVar10 != 0) {
                                                    lVar13 = *(long *)(lVar10 + 0x10);
                                                    uVar9 = *(undefined8 *)puVar6;
                                                    lVar15 = *(long *)puVar4;
                                                    *(int *)(lVar10 + 0x1c) =
                                                         *(int *)(lVar10 + 0x1c) + 1;
                                                    if (lVar13 != 0) {
                                                      uVar1 = *(uint *)(lVar10 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                        *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                        *(undefined8 *)
                                                         (lVar13 + (long)(int)uVar1 * 8 + 0x20) =
                                                             uVar9;
                                                        thunk_FUN_02bb0e9c();
                                                      }
                                                      else {
                                                        FUN_037a6538(lVar10,uVar9,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar8 + 0x30) = lVar10;
                                                  thunk_FUN_02bb0e9c((long *)(lVar8 + 0x30),lVar10);
                                                  lVar10 = thunk_FUN_02b79644(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_037a5cd0(lVar10,*(undefined8 *)
                                                                                                                                              
                                                  Method_Newtonsoft_Json_Linq_JPropertyKeyedCollection_Contains__
                                                  );
                                                  lVar13 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                              
                                                  Method_Newtonsoft_Json_Linq_JObject_ValidateToken__
                                                  );
                                                  FUN_04dbdb8c(lVar13,0);
                                                  puVar6 = 
                                                  Method_Newtonsoft_Json_JsonSerializer_set_SerializationBinder__
                                                  ;
                                                  if (lVar13 != 0) {
                                                    *(undefined8 *)(lVar13 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Newtonsoft_Json_JsonSerializer_set_SerializationBinder__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar13 + 0x10) = *unaff_x27;
                                                  thunk_FUN_02bb0e9c();
                                                  if (lVar10 != 0) {
                                                    lVar15 = *(long *)(lVar10 + 0x10);
                                                    lVar14 = *(long *)
                                                  Method_Newtonsoft_Json_Linq_JProperty_Load__;
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar15 != 0) {
                                                    uVar1 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                      plVar11 = (long *)(lVar15 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar11 = lVar13;
                                                      thunk_FUN_02bb0e9c(plVar11,lVar13);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar10,lVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar8 + 0x28) = lVar10;
                                                  thunk_FUN_02bb0e9c((long *)(lVar8 + 0x28),lVar10);
                                                  lVar10 = *(long *)(lVar12 + 0x10);
                                                  lVar13 = *(long *)
                                                  Method_Newtonsoft_Json_Linq_JProperty_RemoveItem__
                                                  ;
                                                  *(int *)(lVar12 + 0x1c) =
                                                       *(int *)(lVar12 + 0x1c) + 1;
                                                  if (lVar10 != 0) {
                                                    uVar1 = *(uint *)(lVar12 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                      *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                      plVar11 = (long *)(lVar10 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar11 = lVar8;
                                                      thunk_FUN_02bb0e9c(plVar11,lVar8);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar12,lVar8,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar13 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar8 = thunk_FUN_02b79644(*(undefined8 *)puVar7);
                                                  FUN_04dbdb8c(lVar8,0);
                                                  puVar5 = 
                                                  Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_AddReference__
                                                  ;
                                                  if (lVar8 != 0) {
                                                    *(undefined8 *)(lVar8 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Oculus_Interaction_Interactable<HandGrabUseInteractor,_HandGrabUseInteractable>_Awake__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar8 + 0x20) =
                                                       *(undefined8 *)puVar5;
                                                  thunk_FUN_02bb0e9c((undefined8 *)(lVar8 + 0x20));
                                                  uVar9 = *(undefined8 *)puVar2;
                                                  *(undefined4 *)(lVar8 + 0x18) = 0;
                                                  lVar10 = thunk_FUN_02b79644(uVar9);
                                                  FUN_037a5cd0(lVar10,*(undefined8 *)puVar3);
                                                  if (lVar10 != 0) {
                                                    lVar13 = *(long *)(lVar10 + 0x10);
                                                    uVar9 = *(undefined8 *)
                                                                                                                          
                                                  Method_System_Linq_Enumerable_Select<AndroidAxis,_string>__
                                                  ;
                                                  lVar15 = *(long *)puVar4;
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar13 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar9;
                                                      thunk_FUN_02bb0e9c();
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar10,uVar9,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar8 + 0x30) = lVar10;
                                                  thunk_FUN_02bb0e9c((long *)(lVar8 + 0x30),lVar10);
                                                  lVar10 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                              
                                                  Method_OVRSimpleJSON_JSONLazyCreator_Set<JSONNumber>__
                                                  );
                                                  FUN_037a5cd0(lVar10,*(undefined8 *)
                                                                                                                                              
                                                  Method_Newtonsoft_Json_Linq_JPropertyKeyedCollection_Contains__
                                                  );
                                                  lVar13 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                              
                                                  Method_Newtonsoft_Json_Linq_JObject_ValidateToken__
                                                  );
                                                  FUN_04dbdb8c(lVar13,0);
                                                  if (lVar13 != 0) {
                                                    *(undefined8 *)(lVar13 + 0x18) =
                                                         *(undefined8 *)puVar6;
                                                    thunk_FUN_02bb0e9c();
                                                    *(undefined8 *)(lVar13 + 0x10) = *unaff_x27;
                                                    thunk_FUN_02bb0e9c();
                                                    puVar6 = 
                                                  Method_Newtonsoft_Json_Linq_JProperty_Load__;
                                                  if (lVar10 != 0) {
                                                    lVar15 = *(long *)(lVar10 + 0x10);
                                                    *(int *)(lVar10 + 0x1c) =
                                                         *(int *)(lVar10 + 0x1c) + 1;
                                                    puVar5 = 
                                                  Method_OVRSimpleJSON_JSONLazyCreator_Set<JSONNumber>__
                                                  ;
                                                  if (lVar15 != 0) {
                                                    uVar1 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                      plVar11 = (long *)(lVar15 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar11 = lVar13;
                                                      thunk_FUN_02bb0e9c(plVar11,lVar13);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar10,lVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(*(long *)
                                                  puVar6 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar8 + 0x28) = lVar10;
                                                  thunk_FUN_02bb0e9c((long *)(lVar8 + 0x28),lVar10);
                                                  lVar10 = *(long *)(lVar12 + 0x10);
                                                  lVar13 = *(long *)
                                                  Method_Newtonsoft_Json_Linq_JProperty_RemoveItem__
                                                  ;
                                                  *(int *)(lVar12 + 0x1c) =
                                                       *(int *)(lVar12 + 0x1c) + 1;
                                                  if (lVar10 != 0) {
                                                    uVar1 = *(uint *)(lVar12 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                      *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                      plVar11 = (long *)(lVar10 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar11 = lVar8;
                                                      thunk_FUN_02bb0e9c(plVar11,lVar8);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar12,lVar8,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar13 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar8 = thunk_FUN_02b79644(*(undefined8 *)puVar7);
                                                  FUN_04dbdb8c(lVar8,0);
                                                  puVar6 = 
                                                  Method_System_Linq_Enumerable_Empty<Type>__;
                                                  if (lVar8 != 0) {
                                                    *(undefined8 *)(lVar8 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  System_Collections_Generic_Queue<JobHandle>_TypeInfo
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar8 + 0x20) =
                                                       *(undefined8 *)puVar6;
                                                  thunk_FUN_02bb0e9c((undefined8 *)(lVar8 + 0x20));
                                                  uVar9 = *(undefined8 *)puVar2;
                                                  *(undefined4 *)(lVar8 + 0x18) = 2;
                                                  lVar10 = thunk_FUN_02b79644(uVar9);
                                                  FUN_037a5cd0(lVar10,*(undefined8 *)puVar3);
                                                  if (lVar10 != 0) {
                                                    lVar13 = *(long *)(lVar10 + 0x10);
                                                    uVar9 = *(undefined8 *)
                                                                                                                          
                                                  Method_System_Linq_Enumerable_Select<KeyValuePair<string,_JsonParser_JsonValue>,_string>__
                                                  ;
                                                  lVar15 = *(long *)puVar4;
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar13 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar9;
                                                      thunk_FUN_02bb0e9c();
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar10,uVar9,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar8 + 0x30) = lVar10;
                                                  thunk_FUN_02bb0e9c((long *)(lVar8 + 0x30),lVar10);
                                                  lVar10 = thunk_FUN_02b79644(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_037a5cd0(lVar10,*(undefined8 *)
                                                                                                                                              
                                                  Method_Newtonsoft_Json_Linq_JPropertyKeyedCollection_Contains__
                                                  );
                                                  lVar13 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                              
                                                  Method_Newtonsoft_Json_Linq_JObject_ValidateToken__
                                                  );
                                                  FUN_04dbdb8c(lVar13,0);
                                                  if (lVar13 != 0) {
                                                    *(undefined8 *)(lVar13 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Newtonsoft_Json_JsonSerializer_set_DefaultValueHandling__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar13 + 0x10) = *unaff_x27;
                                                  thunk_FUN_02bb0e9c();
                                                  if (lVar10 != 0) {
                                                    lVar15 = *(long *)(lVar10 + 0x10);
                                                    lVar14 = *(long *)
                                                  Method_Newtonsoft_Json_Linq_JProperty_Load__;
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar15 != 0) {
                                                    uVar1 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                      plVar11 = (long *)(lVar15 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar11 = lVar13;
                                                      thunk_FUN_02bb0e9c(plVar11,lVar13);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar10,lVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar8 + 0x28) = lVar10;
                                                  thunk_FUN_02bb0e9c((long *)(lVar8 + 0x28),lVar10);
                                                  lVar10 = *(long *)(lVar12 + 0x10);
                                                  lVar13 = *(long *)
                                                  Method_Newtonsoft_Json_Linq_JProperty_RemoveItem__
                                                  ;
                                                  *(int *)(lVar12 + 0x1c) =
                                                       *(int *)(lVar12 + 0x1c) + 1;
                                                  if (lVar10 != 0) {
                                                    uVar1 = *(uint *)(lVar12 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                      *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                      plVar11 = (long *)(lVar10 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar11 = lVar8;
                                                      thunk_FUN_02bb0e9c(plVar11,lVar8);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar12,lVar8,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar13 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar8 = thunk_FUN_02b79644(*(undefined8 *)puVar7);
                                                  FUN_04dbdb8c(lVar8,0);
                                                  puVar6 = 
                                                  Method_Newtonsoft_Json_JsonReader_set_MaxDepth__;
                                                  if (lVar8 != 0) {
                                                    *(undefined8 *)(lVar8 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Oculus_Interaction_Interactable<PokeInteractor,_PokeInteractable>_get_State__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar8 + 0x20) =
                                                       *(undefined8 *)puVar6;
                                                  thunk_FUN_02bb0e9c((undefined8 *)(lVar8 + 0x20));
                                                  uVar9 = *(undefined8 *)puVar2;
                                                  *(undefined4 *)(lVar8 + 0x18) = 0;
                                                  lVar10 = thunk_FUN_02b79644(uVar9);
                                                  FUN_037a5cd0(lVar10,*(undefined8 *)puVar3);
                                                  if (lVar10 != 0) {
                                                    lVar13 = *(long *)(lVar10 + 0x10);
                                                    uVar9 = *(undefined8 *)
                                                                                                                          
                                                  Method_System_Linq_Enumerable_Select<EnumMemberAttribute,_string>__
                                                  ;
                                                  lVar15 = *(long *)puVar4;
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar13 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar9;
                                                      thunk_FUN_02bb0e9c();
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar10,uVar9,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar8 + 0x30) = lVar10;
                                                  thunk_FUN_02bb0e9c((long *)(lVar8 + 0x30),lVar10);
                                                  lVar10 = thunk_FUN_02b79644(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_037a5cd0(lVar10,*(undefined8 *)
                                                                                                                                              
                                                  Method_Newtonsoft_Json_Linq_JPropertyKeyedCollection_Contains__
                                                  );
                                                  lVar13 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                              
                                                  Method_Newtonsoft_Json_Linq_JObject_ValidateToken__
                                                  );
                                                  FUN_04dbdb8c(lVar13,0);
                                                  if (lVar13 != 0) {
                                                    *(undefined8 *)(lVar13 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Newtonsoft_Json_JsonSerializer_Deserialize<RegexOptions>__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar13 + 0x10) = *unaff_x27;
                                                  thunk_FUN_02bb0e9c();
                                                  if (lVar10 != 0) {
                                                    lVar15 = *(long *)(lVar10 + 0x10);
                                                    lVar14 = *(long *)
                                                  Method_Newtonsoft_Json_Linq_JProperty_Load__;
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar15 != 0) {
                                                    uVar1 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                      plVar11 = (long *)(lVar15 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar11 = lVar13;
                                                      thunk_FUN_02bb0e9c(plVar11,lVar13);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar10,lVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar8 + 0x28) = lVar10;
                                                  thunk_FUN_02bb0e9c((long *)(lVar8 + 0x28),lVar10);
                                                  lVar10 = *(long *)(lVar12 + 0x10);
                                                  lVar13 = *(long *)
                                                  Method_Newtonsoft_Json_Linq_JProperty_RemoveItem__
                                                  ;
                                                  *(int *)(lVar12 + 0x1c) =
                                                       *(int *)(lVar12 + 0x1c) + 1;
                                                  if (lVar10 != 0) {
                                                    uVar1 = *(uint *)(lVar12 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                      *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                      plVar11 = (long *)(lVar10 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar11 = lVar8;
                                                      thunk_FUN_02bb0e9c(plVar11,lVar8);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar12,lVar8,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar13 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar8 = thunk_FUN_02b79644(*(undefined8 *)puVar7);
                                                  FUN_04dbdb8c(lVar8,0);
                                                  puVar6 = 
                                                  Method_LitJson_JsonData_LitJson_IJsonWrapper_GetBoolean__
                                                  ;
                                                  if (lVar8 != 0) {
                                                    *(undefined8 *)(lVar8 + 0x10) =
                                                         *(undefined8 *)
                                                          Method_LitJson_JsonData__ctor__;
                                                    thunk_FUN_02bb0e9c();
                                                    *(undefined8 *)(lVar8 + 0x20) =
                                                         *(undefined8 *)puVar6;
                                                    thunk_FUN_02bb0e9c((undefined8 *)(lVar8 + 0x20))
                                                    ;
                                                    uVar9 = *(undefined8 *)puVar2;
                                                    *(undefined4 *)(lVar8 + 0x18) = 3;
                                                    lVar10 = thunk_FUN_02b79644(uVar9);
                                                    FUN_037a5cd0(lVar10,*(undefined8 *)puVar3);
                                                    if (lVar10 != 0) {
                                                      lVar13 = *(long *)(lVar10 + 0x10);
                                                      uVar9 = *(undefined8 *)
                                                                                                                              
                                                  Method_System_Globalization_JapaneseCalendar_ToFourDigitYear__
                                                  ;
                                                  lVar15 = *(long *)puVar4;
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar13 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar9;
                                                      thunk_FUN_02bb0e9c();
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar10,uVar9,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar8 + 0x30) = lVar10;
                                                  thunk_FUN_02bb0e9c((long *)(lVar8 + 0x30),lVar10);
                                                  lVar10 = thunk_FUN_02b79644(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_037a5cd0(lVar10,*(undefined8 *)
                                                                                                                                              
                                                  Method_Newtonsoft_Json_Linq_JPropertyKeyedCollection_Contains__
                                                  );
                                                  lVar13 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                              
                                                  Method_Newtonsoft_Json_Linq_JObject_ValidateToken__
                                                  );
                                                  FUN_04dbdb8c(lVar13,0);
                                                  if (lVar13 != 0) {
                                                    *(undefined8 *)(lVar13 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_LitJson_JsonData_LitJson_IJsonWrapper_GetLong__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar13 + 0x10) = *unaff_x27;
                                                  thunk_FUN_02bb0e9c();
                                                  if (lVar10 != 0) {
                                                    lVar15 = *(long *)(lVar10 + 0x10);
                                                    lVar14 = *(long *)
                                                  Method_Newtonsoft_Json_Linq_JProperty_Load__;
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar15 != 0) {
                                                    uVar1 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                      plVar11 = (long *)(lVar15 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar11 = lVar13;
                                                      thunk_FUN_02bb0e9c(plVar11,lVar13);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar10,lVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar8 + 0x28) = lVar10;
                                                  thunk_FUN_02bb0e9c((long *)(lVar8 + 0x28),lVar10);
                                                  lVar10 = *(long *)(lVar12 + 0x10);
                                                  lVar13 = *(long *)
                                                  Method_Newtonsoft_Json_Linq_JProperty_RemoveItem__
                                                  ;
                                                  *(int *)(lVar12 + 0x1c) =
                                                       *(int *)(lVar12 + 0x1c) + 1;
                                                  if (lVar10 != 0) {
                                                    uVar1 = *(uint *)(lVar12 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                      *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                      plVar11 = (long *)(lVar10 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar11 = lVar8;
                                                      thunk_FUN_02bb0e9c(plVar11,lVar8);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar12,lVar8,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar13 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar8 = thunk_FUN_02b79644(*(undefined8 *)puVar7);
                                                  FUN_04dbdb8c(lVar8,0);
                                                  puVar6 = 
                                                  Method_Newtonsoft_Json_JsonConvert_DeserializeObject<Dictionary<string,_string>>__
                                                  ;
                                                  if (lVar8 != 0) {
                                                    *(undefined8 *)(lVar8 + 0x10) =
                                                         *(undefined8 *)PTR_DAT_06332138;
                                                    thunk_FUN_02bb0e9c();
                                                    *(undefined8 *)(lVar8 + 0x20) =
                                                         *(undefined8 *)puVar6;
                                                    thunk_FUN_02bb0e9c((undefined8 *)(lVar8 + 0x20))
                                                    ;
                                                    uVar9 = *(undefined8 *)puVar2;
                                                    *(undefined4 *)(lVar8 + 0x18) = 3;
                                                    lVar10 = thunk_FUN_02b79644(uVar9);
                                                    FUN_037a5cd0(lVar10,*(undefined8 *)puVar3);
                                                    if (lVar10 != 0) {
                                                      lVar13 = *(long *)(lVar10 + 0x10);
                                                      uVar9 = *(undefined8 *)
                                                                                                                              
                                                  Method_System_Collections_Generic_List<IntegratedSubsystemDescriptor>_GetEnumerator__
                                                  ;
                                                  lVar15 = *(long *)puVar4;
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar13 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar9;
                                                      thunk_FUN_02bb0e9c();
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar10,uVar9,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar8 + 0x30) = lVar10;
                                                  thunk_FUN_02bb0e9c((long *)(lVar8 + 0x30),lVar10);
                                                  lVar10 = thunk_FUN_02b79644(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_037a5cd0(lVar10,*(undefined8 *)
                                                                                                                                              
                                                  Method_Newtonsoft_Json_Linq_JPropertyKeyedCollection_Contains__
                                                  );
                                                  lVar13 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                              
                                                  Method_Newtonsoft_Json_Linq_JObject_ValidateToken__
                                                  );
                                                  FUN_04dbdb8c(lVar13,0);
                                                  if (lVar13 != 0) {
                                                    *(undefined8 *)(lVar13 + 0x18) =
                                                         *(undefined8 *)
                                                          Method_LitJson_JsonData_EnsureDictionary__
                                                    ;
                                                    thunk_FUN_02bb0e9c();
                                                    *(undefined8 *)(lVar13 + 0x10) = *unaff_x27;
                                                    thunk_FUN_02bb0e9c();
                                                    if (lVar10 != 0) {
                                                      lVar15 = *(long *)(lVar10 + 0x10);
                                                      lVar14 = *(long *)
                                                  Method_Newtonsoft_Json_Linq_JProperty_Load__;
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar15 != 0) {
                                                    uVar1 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                      plVar11 = (long *)(lVar15 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar11 = lVar13;
                                                      thunk_FUN_02bb0e9c(plVar11,lVar13);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar10,lVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar8 + 0x28) = lVar10;
                                                  thunk_FUN_02bb0e9c((long *)(lVar8 + 0x28),lVar10);
                                                  lVar10 = *(long *)(lVar12 + 0x10);
                                                  lVar13 = *(long *)
                                                  Method_Newtonsoft_Json_Linq_JProperty_RemoveItem__
                                                  ;
                                                  *(int *)(lVar12 + 0x1c) =
                                                       *(int *)(lVar12 + 0x1c) + 1;
                                                  if (lVar10 != 0) {
                                                    uVar1 = *(uint *)(lVar12 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                      *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                      plVar11 = (long *)(lVar10 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar11 = lVar8;
                                                      thunk_FUN_02bb0e9c(plVar11,lVar8);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar12,lVar8,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar13 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar8 = thunk_FUN_02b79644(*(undefined8 *)puVar7);
                                                  FUN_04dbdb8c(lVar8,0);
                                                  puVar7 = 
                                                  Method_Newtonsoft_Json_JsonSerializer_set_MetadataPropertyHandling__
                                                  ;
                                                  if (lVar8 != 0) {
                                                    *(undefined8 *)(lVar8 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Newtonsoft_Json_Serialization_JsonSerializerInternalBase_GetErrorContext__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar8 + 0x20) =
                                                       *(undefined8 *)puVar7;
                                                  thunk_FUN_02bb0e9c((undefined8 *)(lVar8 + 0x20));
                                                  uVar9 = *(undefined8 *)puVar2;
                                                  *(undefined4 *)(lVar8 + 0x18) = 4;
                                                  lVar10 = thunk_FUN_02b79644(uVar9);
                                                  FUN_037a5cd0(lVar10,*(undefined8 *)puVar3);
                                                  if (lVar10 != 0) {
                                                    lVar13 = *(long *)(lVar10 + 0x10);
                                                    uVar9 = *(undefined8 *)
                                                                                                                          
                                                  Method_UnityEngine_InputSystem_InputControlExtensions_CopyState__
                                                  ;
                                                  lVar15 = *(long *)puVar4;
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar13 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar9;
                                                      thunk_FUN_02bb0e9c();
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar10,uVar9,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar8 + 0x30) = lVar10;
                                                  thunk_FUN_02bb0e9c((long *)(lVar8 + 0x30),lVar10);
                                                  lVar10 = thunk_FUN_02b79644(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_037a5cd0(lVar10,*(undefined8 *)
                                                                                                                                              
                                                  Method_Newtonsoft_Json_Linq_JPropertyKeyedCollection_Contains__
                                                  );
                                                  lVar13 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                              
                                                  Method_Newtonsoft_Json_Linq_JObject_ValidateToken__
                                                  );
                                                  FUN_04dbdb8c(lVar13,0);
                                                  if (lVar13 != 0) {
                                                    *(undefined8 *)(lVar13 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Newtonsoft_Json_JsonReader_set_FloatParseHandling__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar13 + 0x10) = *unaff_x27;
                                                  thunk_FUN_02bb0e9c();
                                                  if (lVar10 != 0) {
                                                    lVar15 = *(long *)(lVar10 + 0x10);
                                                    lVar14 = *(long *)
                                                  Method_Newtonsoft_Json_Linq_JProperty_Load__;
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar15 != 0) {
                                                    uVar1 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                      plVar11 = (long *)(lVar15 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar11 = lVar13;
                                                      thunk_FUN_02bb0e9c(plVar11,lVar13);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar10,lVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar8 + 0x28) = lVar10;
                                                  thunk_FUN_02bb0e9c((long *)(lVar8 + 0x28),lVar10);
                                                  lVar10 = *(long *)(lVar12 + 0x10);
                                                  lVar13 = *(long *)
                                                  Method_Newtonsoft_Json_Linq_JProperty_RemoveItem__
                                                  ;
                                                  *(int *)(lVar12 + 0x1c) =
                                                       *(int *)(lVar12 + 0x1c) + 1;
                                                  if (lVar10 != 0) {
                                                    uVar1 = *(uint *)(lVar12 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                      *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                      plVar11 = (long *)(lVar10 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar11 = lVar8;
                                                      thunk_FUN_02bb0e9c(plVar11,lVar8);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar12,lVar8,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar13 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(unaff_x19 + 0x28) = lVar12;
                                                  thunk_FUN_02bb0e9c((long *)(unaff_x19 + 0x28),
                                                                     lVar12);
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
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


