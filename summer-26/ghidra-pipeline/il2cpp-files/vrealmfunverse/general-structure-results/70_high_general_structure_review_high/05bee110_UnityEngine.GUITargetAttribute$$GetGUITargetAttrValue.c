/*
FUNCTION_NAME: UnityEngine.GUITargetAttribute$$GetGUITargetAttrValue
ENTRY_POINT: 05bee110
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 72
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;ui_interaction;telemetry;frame_behavior;keyword_support
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_21;ray_or_cast_sink_hits_1;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_20;frame_or_lifecycle_behavior;eye_or_gaze_keyword_boost_only;negative_framework_namespace_without_eye_use_flow
*/


void UnityEngine_GUITargetAttribute__GetGUITargetAttrValue(void)

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
  undefined8 uVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x25;
  undefined8 *unaff_x26;
  long unaff_x28;
  
  FUN_037a6538();
  *(undefined8 *)(unaff_x28 + 0x20) = unaff_x21;
  thunk_FUN_02bb0e9c();
  lVar9 = thunk_FUN_02b79644(*unaff_x19);
  FUN_037a5cd0(lVar9,*unaff_x20);
  lVar10 = thunk_FUN_02b79644(*(undefined8 *)Method_Newtonsoft_Json_Linq_JProperty_ClearItems__);
  FUN_05b9af50(lVar10,0);
  puVar5 = PTR_DAT_0631b1e8;
  puVar3 = PTR_DAT_063145b8;
  puVar2 = PTR_DAT_063145b0;
  if (lVar10 != 0) {
    *(undefined8 *)(lVar10 + 0x10) =
         *(undefined8 *)
          Method_Oculus_Interaction_Interactable<HandGrabInteractor,_HandGrabInteractable>_remove_WhenStateChanged__
    ;
    thunk_FUN_02bb0e9c();
    *(undefined8 *)(lVar10 + 0x20) = *(undefined8 *)puVar5;
    thunk_FUN_02bb0e9c((undefined8 *)(lVar10 + 0x20));
    uVar11 = *(undefined8 *)puVar2;
    *(undefined4 *)(lVar10 + 0x18) = 1;
    lVar12 = thunk_FUN_02b79644(uVar11);
    FUN_037a5cd0(lVar12,*(undefined8 *)puVar3);
    puVar4 = PTR_DAT_063173b8;
    if (lVar12 != 0) {
      lVar14 = *(long *)(lVar12 + 0x10);
      uVar11 = *(undefined8 *)puVar5;
      lVar15 = *(long *)PTR_DAT_063173b8;
      *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
      puVar7 = Method_Newtonsoft_Json_Linq_JProperty_ClearItems__;
      puVar5 = Method_Newtonsoft_Json_Linq_JObject_ValidateToken__;
      if (lVar14 != 0) {
        uVar1 = *(uint *)(lVar12 + 0x18);
        if (uVar1 < *(uint *)(lVar14 + 0x18)) {
          *(uint *)(lVar12 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar14 + (long)(int)uVar1 * 8 + 0x20) = uVar11;
          thunk_FUN_02bb0e9c();
        }
        else {
          FUN_037a6538(lVar12,uVar11,
                       *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
        }
        *(long *)(lVar10 + 0x30) = lVar12;
        thunk_FUN_02bb0e9c((long *)(lVar10 + 0x30),lVar12);
        lVar12 = thunk_FUN_02b79644(*(undefined8 *)
                                     Method_OVRSimpleJSON_JSONLazyCreator_Set<JSONNumber>__);
        FUN_037a5cd0(lVar12,*(undefined8 *)
                             Method_Newtonsoft_Json_Linq_JPropertyKeyedCollection_Contains__);
        lVar14 = thunk_FUN_02b79644(*(undefined8 *)puVar5);
        FUN_05b9af48(lVar14,0);
        if (lVar14 != 0) {
          *(undefined8 *)(lVar14 + 0x18) =
               *(undefined8 *)Method_Newtonsoft_Json_JsonReader_set_DateTimeZoneHandling__;
          thunk_FUN_02bb0e9c();
          *(undefined8 *)(lVar14 + 0x10) = *unaff_x26;
          thunk_FUN_02bb0e9c();
          puVar8 = Method_Newtonsoft_Json_Linq_JProperty_Load__;
          if (lVar12 != 0) {
            lVar15 = *(long *)(lVar12 + 0x10);
            lVar16 = *(long *)Method_Newtonsoft_Json_Linq_JProperty_Load__;
            *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
            if (lVar15 != 0) {
              uVar1 = *(uint *)(lVar12 + 0x18);
              if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                plVar13 = (long *)(lVar15 + (long)(int)uVar1 * 8 + 0x20);
                *plVar13 = lVar14;
                thunk_FUN_02bb0e9c(plVar13,lVar14);
              }
              else {
                FUN_037a6538(lVar12,lVar14,
                             *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
              }
              *(long *)(lVar10 + 0x28) = lVar12;
              thunk_FUN_02bb0e9c((long *)(lVar10 + 0x28),lVar12);
              if (lVar9 != 0) {
                lVar12 = *(long *)(lVar9 + 0x10);
                lVar14 = *(long *)Method_Newtonsoft_Json_Linq_JProperty_RemoveItem__;
                *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
                if (lVar12 != 0) {
                  uVar1 = *(uint *)(lVar9 + 0x18);
                  if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                    *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                    plVar13 = (long *)(lVar12 + (long)(int)uVar1 * 8 + 0x20);
                    *plVar13 = lVar10;
                    thunk_FUN_02bb0e9c(plVar13,lVar10);
                  }
                  else {
                    FUN_037a6538(lVar9,lVar10,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70))
                    ;
                  }
                  lVar10 = thunk_FUN_02b79644(*(undefined8 *)puVar7);
                  FUN_05b9af50(lVar10,0);
                  puVar6 = Method_Newtonsoft_Json_JsonSerializer_set_NullValueHandling__;
                  if (lVar10 != 0) {
                    *(undefined8 *)(lVar10 + 0x10) =
                         *(undefined8 *)
                          Method_Oculus_Interaction_Interactable<HandGrabInteractor,_HandGrabInteractable>_add_WhenStateChanged__
                    ;
                    thunk_FUN_02bb0e9c();
                    *(undefined8 *)(lVar10 + 0x20) = *(undefined8 *)puVar6;
                    thunk_FUN_02bb0e9c((undefined8 *)(lVar10 + 0x20));
                    uVar11 = *(undefined8 *)puVar2;
                    *(undefined4 *)(lVar10 + 0x18) = 0;
                    lVar12 = thunk_FUN_02b79644(uVar11);
                    FUN_037a5cd0(lVar12,*(undefined8 *)puVar3);
                    if (lVar12 != 0) {
                      lVar14 = *(long *)(lVar12 + 0x10);
                      uVar11 = *(undefined8 *)
                                Method_System_Linq_Enumerable_Select<DataColumn,_Type>__;
                      lVar15 = *(long *)puVar4;
                      *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
                      if (lVar14 != 0) {
                        uVar1 = *(uint *)(lVar12 + 0x18);
                        if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                          *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                          *(undefined8 *)(lVar14 + (long)(int)uVar1 * 8 + 0x20) = uVar11;
                          thunk_FUN_02bb0e9c();
                        }
                        else {
                          FUN_037a6538(lVar12,uVar11,
                                       *(undefined8 *)
                                        (*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
                        }
                        *(long *)(lVar10 + 0x30) = lVar12;
                        thunk_FUN_02bb0e9c((long *)(lVar10 + 0x30),lVar12);
                        lVar12 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                          
                                                  Method_OVRSimpleJSON_JSONLazyCreator_Set<JSONNumber>__
                                                  );
                        FUN_037a5cd0(lVar12,*(undefined8 *)
                                             Method_Newtonsoft_Json_Linq_JPropertyKeyedCollection_Contains__
                                    );
                        lVar14 = thunk_FUN_02b79644(*(undefined8 *)puVar5);
                        FUN_05b9af48(lVar14,0);
                        if (lVar14 != 0) {
                          *(undefined8 *)(lVar14 + 0x18) =
                               *(undefined8 *)
                                Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_EndProcessProperty__
                          ;
                          thunk_FUN_02bb0e9c();
                          *(undefined8 *)(lVar14 + 0x10) = *unaff_x26;
                          thunk_FUN_02bb0e9c();
                          if (lVar12 != 0) {
                            lVar15 = *(long *)(lVar12 + 0x10);
                            lVar16 = *(long *)puVar8;
                            *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
                            if (lVar15 != 0) {
                              uVar1 = *(uint *)(lVar12 + 0x18);
                              if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                plVar13 = (long *)(lVar15 + (long)(int)uVar1 * 8 + 0x20);
                                *plVar13 = lVar14;
                                thunk_FUN_02bb0e9c(plVar13,lVar14);
                              }
                              else {
                                FUN_037a6538(lVar12,lVar14,
                                             *(undefined8 *)
                                              (*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
                              }
                              *(long *)(lVar10 + 0x28) = lVar12;
                              thunk_FUN_02bb0e9c((long *)(lVar10 + 0x28),lVar12);
                              lVar12 = *(long *)(lVar9 + 0x10);
                              lVar14 = *(long *)Method_Newtonsoft_Json_Linq_JProperty_RemoveItem__;
                              *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
                              if (lVar12 != 0) {
                                uVar1 = *(uint *)(lVar9 + 0x18);
                                if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                  *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                  plVar13 = (long *)(lVar12 + (long)(int)uVar1 * 8 + 0x20);
                                  *plVar13 = lVar10;
                                  thunk_FUN_02bb0e9c(plVar13,lVar10);
                                }
                                else {
                                  FUN_037a6538(lVar9,lVar10,
                                               *(undefined8 *)
                                                (*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70))
                                  ;
                                }
                                lVar10 = thunk_FUN_02b79644(*(undefined8 *)puVar7);
                                FUN_05b9af50(lVar10,0);
                                puVar7 = 
                                Method_Newtonsoft_Json_JsonSerializer_set_ObjectCreationHandling__;
                                if (lVar10 != 0) {
                                  *(undefined8 *)(lVar10 + 0x10) =
                                       *(undefined8 *)
                                        Method_Oculus_Interaction_Interactable<LocomotionTurnerInteractor,_LocomotionTurnerInteractable>__ctor__
                                  ;
                                  thunk_FUN_02bb0e9c();
                                  *(undefined8 *)(lVar10 + 0x20) = *(undefined8 *)puVar7;
                                  thunk_FUN_02bb0e9c((undefined8 *)(lVar10 + 0x20));
                                  uVar11 = *(undefined8 *)puVar2;
                                  *(undefined4 *)(lVar10 + 0x18) = 0;
                                  lVar12 = thunk_FUN_02b79644(uVar11);
                                  FUN_037a5cd0(lVar12,*(undefined8 *)puVar3);
                                  if (lVar12 != 0) {
                                    lVar14 = *(long *)(lVar12 + 0x10);
                                    uVar11 = *(undefined8 *)
                                              Method_System_Linq_Enumerable_Select<Collider,_Transform>__
                                    ;
                                    lVar15 = *(long *)puVar4;
                                    *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
                                    if (lVar14 != 0) {
                                      uVar1 = *(uint *)(lVar12 + 0x18);
                                      if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                        *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                        *(undefined8 *)(lVar14 + (long)(int)uVar1 * 8 + 0x20) =
                                             uVar11;
                                        thunk_FUN_02bb0e9c();
                                      }
                                      else {
                                        FUN_037a6538(lVar12,uVar11,
                                                     *(undefined8 *)
                                                      (*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) +
                                                      0x70));
                                      }
                                      *(long *)(lVar10 + 0x30) = lVar12;
                                      thunk_FUN_02bb0e9c((long *)(lVar10 + 0x30),lVar12);
                                      lVar12 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                      
                                                  Method_OVRSimpleJSON_JSONLazyCreator_Set<JSONNumber>__
                                                  );
                                      FUN_037a5cd0(lVar12,*(undefined8 *)
                                                                                                                      
                                                  Method_Newtonsoft_Json_Linq_JPropertyKeyedCollection_Contains__
                                                  );
                                      lVar14 = thunk_FUN_02b79644(*(undefined8 *)puVar5);
                                      FUN_05b9af48(lVar14,0);
                                      if (lVar14 != 0) {
                                        *(undefined8 *)(lVar14 + 0x18) =
                                             *(undefined8 *)
                                              Method_Newtonsoft_Json_Serialization_JsonSerializerInternalBase_ClearErrorContext__
                                        ;
                                        thunk_FUN_02bb0e9c();
                                        *(undefined8 *)(lVar14 + 0x10) = *unaff_x26;
                                        thunk_FUN_02bb0e9c();
                                        lVar15 = thunk_FUN_02b79644(*(undefined8 *)puVar2);
                                        FUN_037a5cd0(lVar15,*(undefined8 *)puVar3);
                                        if (lVar15 != 0) {
                                          lVar16 = *(long *)(lVar15 + 0x10);
                                          uVar11 = *(undefined8 *)
                                                    Method_Newtonsoft_Json_Linq_JToken_op_Explicit__
                                          ;
                                          lVar17 = *(long *)puVar4;
                                          *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
                                          if (lVar16 != 0) {
                                            uVar1 = *(uint *)(lVar15 + 0x18);
                                            if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                              *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                              *(undefined8 *)(lVar16 + (long)(int)uVar1 * 8 + 0x20)
                                                   = uVar11;
                                              thunk_FUN_02bb0e9c();
                                            }
                                            else {
                                              FUN_037a6538(lVar15,uVar11,
                                                           *(undefined8 *)
                                                            (*(long *)(*(long *)(lVar17 + 0x20) +
                                                                      0xc0) + 0x70));
                                            }
                                            *(long *)(lVar14 + 0x20) = lVar15;
                                            thunk_FUN_02bb0e9c((long *)(lVar14 + 0x20),lVar15);
                                            if (lVar12 != 0) {
                                              lVar15 = *(long *)(lVar12 + 0x10);
                                              lVar16 = *(long *)puVar8;
                                              *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
                                              if (lVar15 != 0) {
                                                uVar1 = *(uint *)(lVar12 + 0x18);
                                                if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                  *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                  plVar13 = (long *)(lVar15 + (long)(int)uVar1 * 8 +
                                                                    0x20);
                                                  *plVar13 = lVar14;
                                                  thunk_FUN_02bb0e9c(plVar13,lVar14);
                                                }
                                                else {
                                                  FUN_037a6538(lVar12,lVar14,
                                                               *(undefined8 *)
                                                                (*(long *)(*(long *)(lVar16 + 0x20)
                                                                          + 0xc0) + 0x70));
                                                }
                                                lVar14 = thunk_FUN_02b79644(*(undefined8 *)puVar5);
                                                FUN_05b9af48(lVar14,0);
                                                if (lVar14 != 0) {
                                                  *(undefined8 *)(lVar14 + 0x18) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_Newtonsoft_Json_JsonSerializer_set_ReferenceResolver__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar14 + 0x10) = *unaff_x26;
                                                  thunk_FUN_02bb0e9c();
                                                  lVar15 = thunk_FUN_02b79644(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_037a5cd0(lVar15,*(undefined8 *)puVar3);
                                                  if (lVar15 != 0) {
                                                    lVar16 = *(long *)(lVar15 + 0x10);
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  Method_Newtonsoft_Json_Linq_JToken_Replace__;
                                                  lVar17 = *(long *)puVar4;
                                                  *(int *)(lVar15 + 0x1c) =
                                                       *(int *)(lVar15 + 0x1c) + 1;
                                                  if (lVar16 != 0) {
                                                    uVar1 = *(uint *)(lVar15 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                      *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar16 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar11;
                                                      thunk_FUN_02bb0e9c();
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar15,uVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar14 + 0x20) = lVar15;
                                                  thunk_FUN_02bb0e9c((long *)(lVar14 + 0x20),lVar15)
                                                  ;
                                                  lVar15 = *(long *)(lVar12 + 0x10);
                                                  lVar16 = *(long *)puVar8;
                                                  *(int *)(lVar12 + 0x1c) =
                                                       *(int *)(lVar12 + 0x1c) + 1;
                                                  puVar7 = 
                                                  Method_Newtonsoft_Json_Linq_JProperty_ClearItems__
                                                  ;
                                                  if (lVar15 != 0) {
                                                    uVar1 = *(uint *)(lVar12 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                      plVar13 = (long *)(lVar15 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar13 = lVar14;
                                                      thunk_FUN_02bb0e9c(plVar13,lVar14);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar12,lVar14,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x28) = lVar12;
                                                  thunk_FUN_02bb0e9c((long *)(lVar10 + 0x28),lVar12)
                                                  ;
                                                  lVar12 = *(long *)(lVar9 + 0x10);
                                                  lVar14 = *(long *)
                                                  Method_Newtonsoft_Json_Linq_JProperty_RemoveItem__
                                                  ;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar12 != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                      plVar13 = (long *)(lVar12 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar13 = lVar10;
                                                      thunk_FUN_02bb0e9c(plVar13,lVar10);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar9,lVar10,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar10 = thunk_FUN_02b79644(*(undefined8 *)puVar7)
                                                  ;
                                                  FUN_05b9af50(lVar10,0);
                                                  puVar7 = 
                                                  Method_Newtonsoft_Json_JsonTextReader_ParseComment__
                                                  ;
                                                  if (lVar10 != 0) {
                                                    *(undefined8 *)(lVar10 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Oculus_Interaction_Interactable<SnapInteractor,_SnapInteractable>_SelectingInteractorAdded__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar10 + 0x20) =
                                                       *(undefined8 *)puVar7;
                                                  thunk_FUN_02bb0e9c((undefined8 *)(lVar10 + 0x20));
                                                  uVar11 = *(undefined8 *)puVar2;
                                                  *(undefined4 *)(lVar10 + 0x18) = 0;
                                                  lVar12 = thunk_FUN_02b79644(uVar11);
                                                  FUN_037a5cd0(lVar12,*(undefined8 *)puVar3);
                                                  if (lVar12 != 0) {
                                                    lVar14 = *(long *)(lVar12 + 0x10);
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Linq_Enumerable_Select<FieldInfo,_VolumeParameter>__
                                                  ;
                                                  lVar15 = *(long *)puVar4;
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
                                                  *(long *)(lVar10 + 0x30) = lVar12;
                                                  thunk_FUN_02bb0e9c((long *)(lVar10 + 0x30),lVar12)
                                                  ;
                                                  lVar12 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                              
                                                  Method_OVRSimpleJSON_JSONLazyCreator_Set<JSONNumber>__
                                                  );
                                                  FUN_037a5cd0(lVar12,*(undefined8 *)
                                                                                                                                              
                                                  Method_Newtonsoft_Json_Linq_JPropertyKeyedCollection_Contains__
                                                  );
                                                  lVar14 = thunk_FUN_02b79644(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_05b9af48(lVar14,0);
                                                  if (lVar14 != 0) {
                                                    *(undefined8 *)(lVar14 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Newtonsoft_Json_JsonTextReader_ParseNumberNegativeInfinity__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar14 + 0x10) = *unaff_x26;
                                                  thunk_FUN_02bb0e9c();
                                                  lVar15 = thunk_FUN_02b79644(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_037a5cd0(lVar15,*(undefined8 *)puVar3);
                                                  if (lVar15 != 0) {
                                                    lVar16 = *(long *)(lVar15 + 0x10);
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  Method_Newtonsoft_Json_Linq_JToken_op_Explicit__;
                                                  lVar17 = *(long *)puVar4;
                                                  *(int *)(lVar15 + 0x1c) =
                                                       *(int *)(lVar15 + 0x1c) + 1;
                                                  if (lVar16 != 0) {
                                                    uVar1 = *(uint *)(lVar15 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                      *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar16 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar11;
                                                      thunk_FUN_02bb0e9c();
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar15,uVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar14 + 0x20) = lVar15;
                                                  thunk_FUN_02bb0e9c((long *)(lVar14 + 0x20),lVar15)
                                                  ;
                                                  if (lVar12 != 0) {
                                                    lVar15 = *(long *)(lVar12 + 0x10);
                                                    lVar16 = *(long *)puVar8;
                                                    *(int *)(lVar12 + 0x1c) =
                                                         *(int *)(lVar12 + 0x1c) + 1;
                                                    if (lVar15 != 0) {
                                                      uVar1 = *(uint *)(lVar12 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                        *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                        plVar13 = (long *)(lVar15 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar13 = lVar14;
                                                        thunk_FUN_02bb0e9c(plVar13,lVar14);
                                                      }
                                                      else {
                                                        FUN_037a6538(lVar12,lVar14,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar14 = thunk_FUN_02b79644(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_05b9af48(lVar14,0);
                                                  if (lVar14 != 0) {
                                                    *(undefined8 *)(lVar14 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Newtonsoft_Json_JsonTextReader_ReadAsBoolean__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar14 + 0x10) = *unaff_x26;
                                                  thunk_FUN_02bb0e9c();
                                                  lVar15 = thunk_FUN_02b79644(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_037a5cd0(lVar15,*(undefined8 *)puVar3);
                                                  if (lVar15 != 0) {
                                                    lVar16 = *(long *)(lVar15 + 0x10);
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  Method_Newtonsoft_Json_Linq_JToken_Replace__;
                                                  lVar17 = *(long *)puVar4;
                                                  *(int *)(lVar15 + 0x1c) =
                                                       *(int *)(lVar15 + 0x1c) + 1;
                                                  if (lVar16 != 0) {
                                                    uVar1 = *(uint *)(lVar15 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                      *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar16 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar11;
                                                      thunk_FUN_02bb0e9c();
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar15,uVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar14 + 0x20) = lVar15;
                                                  thunk_FUN_02bb0e9c((long *)(lVar14 + 0x20),lVar15)
                                                  ;
                                                  lVar15 = *(long *)(lVar12 + 0x10);
                                                  lVar16 = *(long *)puVar8;
                                                  *(int *)(lVar12 + 0x1c) =
                                                       *(int *)(lVar12 + 0x1c) + 1;
                                                  puVar7 = 
                                                  Method_Newtonsoft_Json_Linq_JProperty_ClearItems__
                                                  ;
                                                  if (lVar15 != 0) {
                                                    uVar1 = *(uint *)(lVar12 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                      plVar13 = (long *)(lVar15 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar13 = lVar14;
                                                      thunk_FUN_02bb0e9c(plVar13,lVar14);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar12,lVar14,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x28) = lVar12;
                                                  thunk_FUN_02bb0e9c((long *)(lVar10 + 0x28),lVar12)
                                                  ;
                                                  lVar12 = *(long *)(lVar9 + 0x10);
                                                  lVar14 = *(long *)
                                                  Method_Newtonsoft_Json_Linq_JProperty_RemoveItem__
                                                  ;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar12 != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                      plVar13 = (long *)(lVar12 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar13 = lVar10;
                                                      thunk_FUN_02bb0e9c(plVar13,lVar10);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar9,lVar10,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar10 = thunk_FUN_02b79644(*(undefined8 *)puVar7)
                                                  ;
                                                  FUN_05b9af50(lVar10,0);
                                                  puVar7 = 
                                                  Method_Newtonsoft_Json_JsonSerializer_set_MissingMemberHandling__
                                                  ;
                                                  if (lVar10 != 0) {
                                                    *(undefined8 *)(lVar10 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Oculus_Interaction_Interactable<PokeInteractor,_PokeInteractable>_get_Interactors__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar10 + 0x20) =
                                                       *(undefined8 *)puVar7;
                                                  thunk_FUN_02bb0e9c((undefined8 *)(lVar10 + 0x20));
                                                  uVar11 = *(undefined8 *)puVar2;
                                                  *(undefined4 *)(lVar10 + 0x18) = 0;
                                                  lVar12 = thunk_FUN_02b79644(uVar11);
                                                  FUN_037a5cd0(lVar12,*(undefined8 *)puVar3);
                                                  if (lVar12 != 0) {
                                                    lVar14 = *(long *)(lVar12 + 0x10);
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Linq_Enumerable_Select<FieldInfo,_string>__
                                                  ;
                                                  lVar15 = *(long *)puVar4;
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
                                                  *(long *)(lVar10 + 0x30) = lVar12;
                                                  thunk_FUN_02bb0e9c((long *)(lVar10 + 0x30),lVar12)
                                                  ;
                                                  lVar12 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                              
                                                  Method_OVRSimpleJSON_JSONLazyCreator_Set<JSONNumber>__
                                                  );
                                                  FUN_037a5cd0(lVar12,*(undefined8 *)
                                                                                                                                              
                                                  Method_Newtonsoft_Json_Linq_JPropertyKeyedCollection_Contains__
                                                  );
                                                  lVar14 = thunk_FUN_02b79644(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_05b9af48(lVar14,0);
                                                  if (lVar14 != 0) {
                                                    *(undefined8 *)(lVar14 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Newtonsoft_Json_JsonSerializer_set_TypeNameAssemblyFormatHandling__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar14 + 0x10) = *unaff_x26;
                                                  thunk_FUN_02bb0e9c();
                                                  lVar15 = thunk_FUN_02b79644(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_037a5cd0(lVar15,*(undefined8 *)puVar3);
                                                  if (lVar15 != 0) {
                                                    lVar16 = *(long *)(lVar15 + 0x10);
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  Method_Newtonsoft_Json_Linq_JToken_op_Explicit__;
                                                  lVar17 = *(long *)puVar4;
                                                  *(int *)(lVar15 + 0x1c) =
                                                       *(int *)(lVar15 + 0x1c) + 1;
                                                  if (lVar16 != 0) {
                                                    uVar1 = *(uint *)(lVar15 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                      *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar16 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar11;
                                                      thunk_FUN_02bb0e9c();
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar15,uVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar14 + 0x20) = lVar15;
                                                  thunk_FUN_02bb0e9c((long *)(lVar14 + 0x20),lVar15)
                                                  ;
                                                  if (lVar12 != 0) {
                                                    lVar15 = *(long *)(lVar12 + 0x10);
                                                    lVar16 = *(long *)puVar8;
                                                    *(int *)(lVar12 + 0x1c) =
                                                         *(int *)(lVar12 + 0x1c) + 1;
                                                    if (lVar15 != 0) {
                                                      uVar1 = *(uint *)(lVar12 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                        *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                        plVar13 = (long *)(lVar15 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar13 = lVar14;
                                                        thunk_FUN_02bb0e9c(plVar13,lVar14);
                                                      }
                                                      else {
                                                        FUN_037a6538(lVar12,lVar14,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar14 = thunk_FUN_02b79644(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_05b9af48(lVar14,0);
                                                  if (lVar14 != 0) {
                                                    *(undefined8 *)(lVar14 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Newtonsoft_Json_JsonSerializer_set_PreserveReferencesHandling__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar14 + 0x10) = *unaff_x26;
                                                  thunk_FUN_02bb0e9c();
                                                  lVar15 = thunk_FUN_02b79644(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_037a5cd0(lVar15,*(undefined8 *)puVar3);
                                                  if (lVar15 != 0) {
                                                    lVar16 = *(long *)(lVar15 + 0x10);
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  Method_Newtonsoft_Json_Linq_JToken_Replace__;
                                                  lVar17 = *(long *)puVar4;
                                                  *(int *)(lVar15 + 0x1c) =
                                                       *(int *)(lVar15 + 0x1c) + 1;
                                                  if (lVar16 != 0) {
                                                    uVar1 = *(uint *)(lVar15 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                      *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar16 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar11;
                                                      thunk_FUN_02bb0e9c();
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar15,uVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar14 + 0x20) = lVar15;
                                                  thunk_FUN_02bb0e9c((long *)(lVar14 + 0x20),lVar15)
                                                  ;
                                                  lVar15 = *(long *)(lVar12 + 0x10);
                                                  lVar16 = *(long *)puVar8;
                                                  *(int *)(lVar12 + 0x1c) =
                                                       *(int *)(lVar12 + 0x1c) + 1;
                                                  puVar7 = 
                                                  Method_Newtonsoft_Json_Linq_JProperty_ClearItems__
                                                  ;
                                                  if (lVar15 != 0) {
                                                    uVar1 = *(uint *)(lVar12 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                      plVar13 = (long *)(lVar15 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar13 = lVar14;
                                                      thunk_FUN_02bb0e9c(plVar13,lVar14);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar12,lVar14,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x28) = lVar12;
                                                  thunk_FUN_02bb0e9c((long *)(lVar10 + 0x28),lVar12)
                                                  ;
                                                  lVar12 = *(long *)(lVar9 + 0x10);
                                                  lVar14 = *(long *)
                                                  Method_Newtonsoft_Json_Linq_JProperty_RemoveItem__
                                                  ;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar12 != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                      plVar13 = (long *)(lVar12 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar13 = lVar10;
                                                      thunk_FUN_02bb0e9c(plVar13,lVar10);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar9,lVar10,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar10 = thunk_FUN_02b79644(*(undefined8 *)puVar7)
                                                  ;
                                                  FUN_05b9af50(lVar10,0);
                                                  puVar7 = 
                                                  Method_Newtonsoft_Json_JsonTextReader_ReadNumberValue__
                                                  ;
                                                  if (lVar10 != 0) {
                                                    *(undefined8 *)(lVar10 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Oculus_Interaction_Interactable<SnapInteractor,_SnapInteractable>_RemoveInteractorByIdentifier__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar10 + 0x20) =
                                                       *(undefined8 *)puVar7;
                                                  thunk_FUN_02bb0e9c((undefined8 *)(lVar10 + 0x20));
                                                  uVar11 = *(undefined8 *)puVar2;
                                                  *(undefined4 *)(lVar10 + 0x18) = 0;
                                                  lVar12 = thunk_FUN_02b79644(uVar11);
                                                  FUN_037a5cd0(lVar12,*(undefined8 *)puVar3);
                                                  if (lVar12 != 0) {
                                                    lVar14 = *(long *)(lVar12 + 0x10);
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Linq_Enumerable_Select<KeyValuePair<string,_string>,_string>__
                                                  ;
                                                  lVar15 = *(long *)puVar4;
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
                                                  *(long *)(lVar10 + 0x30) = lVar12;
                                                  thunk_FUN_02bb0e9c((long *)(lVar10 + 0x30),lVar12)
                                                  ;
                                                  lVar12 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                              
                                                  Method_OVRSimpleJSON_JSONLazyCreator_Set<JSONNumber>__
                                                  );
                                                  FUN_037a5cd0(lVar12,*(undefined8 *)
                                                                                                                                              
                                                  Method_Newtonsoft_Json_Linq_JPropertyKeyedCollection_Contains__
                                                  );
                                                  lVar14 = thunk_FUN_02b79644(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_05b9af48(lVar14,0);
                                                  if (lVar14 != 0) {
                                                    *(undefined8 *)(lVar14 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Newtonsoft_Json_JsonTextReader_ParseTrue__;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar14 + 0x10) = *unaff_x26;
                                                  thunk_FUN_02bb0e9c();
                                                  lVar15 = thunk_FUN_02b79644(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_037a5cd0(lVar15,*(undefined8 *)puVar3);
                                                  if (lVar15 != 0) {
                                                    lVar16 = *(long *)(lVar15 + 0x10);
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  Method_Newtonsoft_Json_Linq_JToken_op_Explicit__;
                                                  lVar17 = *(long *)puVar4;
                                                  *(int *)(lVar15 + 0x1c) =
                                                       *(int *)(lVar15 + 0x1c) + 1;
                                                  if (lVar16 != 0) {
                                                    uVar1 = *(uint *)(lVar15 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                      *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar16 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar11;
                                                      thunk_FUN_02bb0e9c();
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar15,uVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar14 + 0x20) = lVar15;
                                                  thunk_FUN_02bb0e9c((long *)(lVar14 + 0x20),lVar15)
                                                  ;
                                                  if (lVar12 != 0) {
                                                    lVar15 = *(long *)(lVar12 + 0x10);
                                                    lVar16 = *(long *)puVar8;
                                                    *(int *)(lVar12 + 0x1c) =
                                                         *(int *)(lVar12 + 0x1c) + 1;
                                                    if (lVar15 != 0) {
                                                      uVar1 = *(uint *)(lVar12 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                        *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                        plVar13 = (long *)(lVar15 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar13 = lVar14;
                                                        thunk_FUN_02bb0e9c(plVar13,lVar14);
                                                      }
                                                      else {
                                                        FUN_037a6538(lVar12,lVar14,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar14 = thunk_FUN_02b79644(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_05b9af48(lVar14,0);
                                                  if (lVar14 != 0) {
                                                    *(undefined8 *)(lVar14 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Newtonsoft_Json_JsonTextReader_ReadNumberCharIntoBuffer__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar14 + 0x10) = *unaff_x26;
                                                  thunk_FUN_02bb0e9c();
                                                  lVar15 = thunk_FUN_02b79644(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_037a5cd0(lVar15,*(undefined8 *)puVar3);
                                                  if (lVar15 != 0) {
                                                    lVar16 = *(long *)(lVar15 + 0x10);
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  Method_Newtonsoft_Json_Linq_JToken_Replace__;
                                                  lVar17 = *(long *)puVar4;
                                                  *(int *)(lVar15 + 0x1c) =
                                                       *(int *)(lVar15 + 0x1c) + 1;
                                                  if (lVar16 != 0) {
                                                    uVar1 = *(uint *)(lVar15 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                      *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar16 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar11;
                                                      thunk_FUN_02bb0e9c();
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar15,uVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar14 + 0x20) = lVar15;
                                                  thunk_FUN_02bb0e9c((long *)(lVar14 + 0x20),lVar15)
                                                  ;
                                                  lVar15 = *(long *)(lVar12 + 0x10);
                                                  lVar16 = *(long *)puVar8;
                                                  *(int *)(lVar12 + 0x1c) =
                                                       *(int *)(lVar12 + 0x1c) + 1;
                                                  puVar7 = 
                                                  Method_Newtonsoft_Json_Linq_JProperty_ClearItems__
                                                  ;
                                                  if (lVar15 != 0) {
                                                    uVar1 = *(uint *)(lVar12 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                      plVar13 = (long *)(lVar15 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar13 = lVar14;
                                                      thunk_FUN_02bb0e9c(plVar13,lVar14);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar12,lVar14,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x28) = lVar12;
                                                  thunk_FUN_02bb0e9c((long *)(lVar10 + 0x28),lVar12)
                                                  ;
                                                  lVar12 = *(long *)(lVar9 + 0x10);
                                                  lVar14 = *(long *)
                                                  Method_Newtonsoft_Json_Linq_JProperty_RemoveItem__
                                                  ;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar12 != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                      plVar13 = (long *)(lVar12 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar13 = lVar10;
                                                      thunk_FUN_02bb0e9c(plVar13,lVar10);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar9,lVar10,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar10 = thunk_FUN_02b79644(*(undefined8 *)puVar7)
                                                  ;
                                                  FUN_05b9af50(lVar10,0);
                                                  puVar6 = 
                                                  OVR_OpenVR_IVRSystem__GetControllerStateWithPose_TypeInfo
                                                  ;
                                                  if (lVar10 != 0) {
                                                    *(undefined8 *)(lVar10 + 0x10) =
                                                         *(undefined8 *)PTR_DAT_063210b8;
                                                    thunk_FUN_02bb0e9c();
                                                    *(undefined8 *)(lVar10 + 0x20) =
                                                         *(undefined8 *)puVar6;
                                                    thunk_FUN_02bb0e9c((undefined8 *)(lVar10 + 0x20)
                                                                      );
                                                    uVar11 = *(undefined8 *)puVar2;
                                                    *(undefined4 *)(lVar10 + 0x18) = 0;
                                                    lVar12 = thunk_FUN_02b79644(uVar11);
                                                    FUN_037a5cd0(lVar12,*(undefined8 *)puVar3);
                                                    if (lVar12 != 0) {
                                                      lVar14 = *(long *)(lVar12 + 0x10);
                                                      uVar11 = *(undefined8 *)puVar6;
                                                      lVar15 = *(long *)puVar4;
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
                                                                        (*(long *)(*(long *)(lVar15 
                                                  + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x30) = lVar12;
                                                  thunk_FUN_02bb0e9c((long *)(lVar10 + 0x30),lVar12)
                                                  ;
                                                  lVar12 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                              
                                                  Method_OVRSimpleJSON_JSONLazyCreator_Set<JSONNumber>__
                                                  );
                                                  FUN_037a5cd0(lVar12,*(undefined8 *)
                                                                                                                                              
                                                  Method_Newtonsoft_Json_Linq_JPropertyKeyedCollection_Contains__
                                                  );
                                                  lVar14 = thunk_FUN_02b79644(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_05b9af48(lVar14,0);
                                                  if (lVar14 != 0) {
                                                    *(undefined8 *)(lVar14 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Newtonsoft_Json_JsonReader_set_DateParseHandling__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar14 + 0x10) = *unaff_x26;
                                                  thunk_FUN_02bb0e9c();
                                                  if (lVar12 != 0) {
                                                    lVar15 = *(long *)(lVar12 + 0x10);
                                                    lVar16 = *(long *)puVar8;
                                                    *(int *)(lVar12 + 0x1c) =
                                                         *(int *)(lVar12 + 0x1c) + 1;
                                                    if (lVar15 != 0) {
                                                      uVar1 = *(uint *)(lVar12 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                        *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                        plVar13 = (long *)(lVar15 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar13 = lVar14;
                                                        thunk_FUN_02bb0e9c(plVar13,lVar14);
                                                      }
                                                      else {
                                                        FUN_037a6538(lVar12,lVar14,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x28) = lVar12;
                                                  thunk_FUN_02bb0e9c((long *)(lVar10 + 0x28),lVar12)
                                                  ;
                                                  lVar12 = *(long *)(lVar9 + 0x10);
                                                  lVar14 = *(long *)
                                                  Method_Newtonsoft_Json_Linq_JProperty_RemoveItem__
                                                  ;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar12 != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                      plVar13 = (long *)(lVar12 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar13 = lVar10;
                                                      thunk_FUN_02bb0e9c(plVar13,lVar10);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar9,lVar10,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar10 = thunk_FUN_02b79644(*(undefined8 *)puVar7)
                                                  ;
                                                  FUN_05b9af50(lVar10,0);
                                                  puVar6 = 
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ValueTuple<HttpWebResponse,_bool,_bool,_BufferOffsetSize,_WebOperation>>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<BufferOffsetSize>,_HttpWebRequest_<GetResponseFromData>d__244>__
                                                  ;
                                                  if (lVar10 != 0) {
                                                    *(undefined8 *)(lVar10 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ValueTuple<HttpWebResponse,_bool,_bool,_BufferOffsetSize,_WebOperation>>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<BufferOffsetSize>,_HttpWebRequest_<GetResponseFromData>d__244>__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar10 + 0x20) =
                                                       *(undefined8 *)puVar6;
                                                  thunk_FUN_02bb0e9c((undefined8 *)(lVar10 + 0x20));
                                                  uVar11 = *(undefined8 *)puVar2;
                                                  *(undefined4 *)(lVar10 + 0x18) = 0;
                                                  lVar12 = thunk_FUN_02b79644(uVar11);
                                                  FUN_037a5cd0(lVar12,*(undefined8 *)puVar3);
                                                  if (lVar12 != 0) {
                                                    lVar14 = *(long *)(lVar12 + 0x10);
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  Method_UnityEngine_UIElements_Internal_MultiColumnHeaderColumnIcon_<_ctor>b__5_0__
                                                  ;
                                                  lVar15 = *(long *)puVar4;
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
                                                  *(long *)(lVar10 + 0x30) = lVar12;
                                                  thunk_FUN_02bb0e9c((long *)(lVar10 + 0x30),lVar12)
                                                  ;
                                                  lVar12 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                              
                                                  Method_OVRSimpleJSON_JSONLazyCreator_Set<JSONNumber>__
                                                  );
                                                  FUN_037a5cd0(lVar12,*(undefined8 *)
                                                                                                                                              
                                                  Method_Newtonsoft_Json_Linq_JPropertyKeyedCollection_Contains__
                                                  );
                                                  lVar14 = thunk_FUN_02b79644(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_05b9af48(lVar14,0);
                                                  if (lVar14 != 0) {
                                                    *(undefined8 *)(lVar14 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_CreateNewDictionary__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar14 + 0x10) = *unaff_x26;
                                                  thunk_FUN_02bb0e9c();
                                                  if (lVar12 != 0) {
                                                    lVar15 = *(long *)(lVar12 + 0x10);
                                                    lVar16 = *(long *)puVar8;
                                                    *(int *)(lVar12 + 0x1c) =
                                                         *(int *)(lVar12 + 0x1c) + 1;
                                                    if (lVar15 != 0) {
                                                      uVar1 = *(uint *)(lVar12 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                        *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                        plVar13 = (long *)(lVar15 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar13 = lVar14;
                                                        thunk_FUN_02bb0e9c(plVar13,lVar14);
                                                      }
                                                      else {
                                                        FUN_037a6538(lVar12,lVar14,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x28) = lVar12;
                                                  thunk_FUN_02bb0e9c((long *)(lVar10 + 0x28),lVar12)
                                                  ;
                                                  lVar12 = *(long *)(lVar9 + 0x10);
                                                  lVar14 = *(long *)
                                                  Method_Newtonsoft_Json_Linq_JProperty_RemoveItem__
                                                  ;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar12 != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                      plVar13 = (long *)(lVar12 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar13 = lVar10;
                                                      thunk_FUN_02bb0e9c(plVar13,lVar10);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar9,lVar10,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar10 = thunk_FUN_02b79644(*(undefined8 *)puVar7)
                                                  ;
                                                  FUN_05b9af50(lVar10,0);
                                                  puVar6 = PTR_DAT_0631b1f0;
                                                  if (lVar10 != 0) {
                                                    *(undefined8 *)(lVar10 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Oculus_Interaction_Interactable<HandGrabUseInteractor,_HandGrabUseInteractable>_SelectingInteractorAdded__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar10 + 0x20) =
                                                       *(undefined8 *)puVar6;
                                                  thunk_FUN_02bb0e9c((undefined8 *)(lVar10 + 0x20));
                                                  uVar11 = *(undefined8 *)puVar2;
                                                  *(undefined4 *)(lVar10 + 0x18) = 1;
                                                  lVar12 = thunk_FUN_02b79644(uVar11);
                                                  FUN_037a5cd0(lVar12,*(undefined8 *)puVar3);
                                                  if (lVar12 != 0) {
                                                    lVar14 = *(long *)(lVar12 + 0x10);
                                                    uVar11 = *(undefined8 *)puVar6;
                                                    lVar15 = *(long *)puVar4;
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
                                                  *(long *)(lVar10 + 0x30) = lVar12;
                                                  thunk_FUN_02bb0e9c((long *)(lVar10 + 0x30),lVar12)
                                                  ;
                                                  lVar12 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                              
                                                  Method_OVRSimpleJSON_JSONLazyCreator_Set<JSONNumber>__
                                                  );
                                                  FUN_037a5cd0(lVar12,*(undefined8 *)
                                                                                                                                              
                                                  Method_Newtonsoft_Json_Linq_JPropertyKeyedCollection_Contains__
                                                  );
                                                  lVar14 = thunk_FUN_02b79644(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_05b9af48(lVar14,0);
                                                  if (lVar14 != 0) {
                                                    *(undefined8 *)(lVar14 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Newtonsoft_Json_JsonSerializer_set_SerializationBinder__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar14 + 0x10) = *unaff_x26;
                                                  thunk_FUN_02bb0e9c();
                                                  if (lVar12 != 0) {
                                                    lVar15 = *(long *)(lVar12 + 0x10);
                                                    lVar16 = *(long *)puVar8;
                                                    *(int *)(lVar12 + 0x1c) =
                                                         *(int *)(lVar12 + 0x1c) + 1;
                                                    if (lVar15 != 0) {
                                                      uVar1 = *(uint *)(lVar12 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                        *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                        plVar13 = (long *)(lVar15 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar13 = lVar14;
                                                        thunk_FUN_02bb0e9c(plVar13,lVar14);
                                                      }
                                                      else {
                                                        FUN_037a6538(lVar12,lVar14,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x28) = lVar12;
                                                  thunk_FUN_02bb0e9c((long *)(lVar10 + 0x28),lVar12)
                                                  ;
                                                  lVar12 = *(long *)(lVar9 + 0x10);
                                                  lVar14 = *(long *)
                                                  Method_Newtonsoft_Json_Linq_JProperty_RemoveItem__
                                                  ;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar12 != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                      plVar13 = (long *)(lVar12 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar13 = lVar10;
                                                      thunk_FUN_02bb0e9c(plVar13,lVar10);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar9,lVar10,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar10 = thunk_FUN_02b79644(*(undefined8 *)puVar7)
                                                  ;
                                                  FUN_05b9af50(lVar10,0);
                                                  puVar6 = 
                                                  Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_AddReference__
                                                  ;
                                                  if (lVar10 != 0) {
                                                    *(undefined8 *)(lVar10 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Oculus_Interaction_Interactable<HandGrabUseInteractor,_HandGrabUseInteractable>_Awake__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar10 + 0x20) =
                                                       *(undefined8 *)puVar6;
                                                  thunk_FUN_02bb0e9c((undefined8 *)(lVar10 + 0x20));
                                                  uVar11 = *(undefined8 *)puVar2;
                                                  *(undefined4 *)(lVar10 + 0x18) = 0;
                                                  lVar12 = thunk_FUN_02b79644(uVar11);
                                                  FUN_037a5cd0(lVar12,*(undefined8 *)puVar3);
                                                  if (lVar12 != 0) {
                                                    lVar14 = *(long *)(lVar12 + 0x10);
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Linq_Enumerable_Select<AndroidAxis,_string>__
                                                  ;
                                                  lVar15 = *(long *)puVar4;
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
                                                  *(long *)(lVar10 + 0x30) = lVar12;
                                                  thunk_FUN_02bb0e9c((long *)(lVar10 + 0x30),lVar12)
                                                  ;
                                                  lVar12 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                              
                                                  Method_OVRSimpleJSON_JSONLazyCreator_Set<JSONNumber>__
                                                  );
                                                  FUN_037a5cd0(lVar12,*(undefined8 *)
                                                                                                                                              
                                                  Method_Newtonsoft_Json_Linq_JPropertyKeyedCollection_Contains__
                                                  );
                                                  lVar14 = thunk_FUN_02b79644(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_05b9af48(lVar14,0);
                                                  if (lVar14 != 0) {
                                                    *(undefined8 *)(lVar14 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_GetExpectedDescription__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar14 + 0x10) = *unaff_x26;
                                                  thunk_FUN_02bb0e9c();
                                                  if (lVar12 != 0) {
                                                    lVar15 = *(long *)(lVar12 + 0x10);
                                                    lVar16 = *(long *)puVar8;
                                                    *(int *)(lVar12 + 0x1c) =
                                                         *(int *)(lVar12 + 0x1c) + 1;
                                                    if (lVar15 != 0) {
                                                      uVar1 = *(uint *)(lVar12 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                        *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                        plVar13 = (long *)(lVar15 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar13 = lVar14;
                                                        thunk_FUN_02bb0e9c(plVar13,lVar14);
                                                      }
                                                      else {
                                                        FUN_037a6538(lVar12,lVar14,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x28) = lVar12;
                                                  thunk_FUN_02bb0e9c((long *)(lVar10 + 0x28),lVar12)
                                                  ;
                                                  lVar12 = *(long *)(lVar9 + 0x10);
                                                  lVar14 = *(long *)
                                                  Method_Newtonsoft_Json_Linq_JProperty_RemoveItem__
                                                  ;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar12 != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                      plVar13 = (long *)(lVar12 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar13 = lVar10;
                                                      thunk_FUN_02bb0e9c(plVar13,lVar10);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar9,lVar10,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar10 = thunk_FUN_02b79644(*(undefined8 *)puVar7)
                                                  ;
                                                  FUN_05b9af50(lVar10,0);
                                                  puVar6 = 
                                                  Method_Newtonsoft_Json_Serialization_JsonTypeReflector_GetAttribute<DefaultValueAttribute>__
                                                  ;
                                                  if (lVar10 != 0) {
                                                    *(undefined8 *)(lVar10 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Oculus_Interaction_Interactable<SnapInteractor,_SnapInteractable>_InteractorRemoved__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar10 + 0x20) =
                                                       *(undefined8 *)puVar6;
                                                  thunk_FUN_02bb0e9c((undefined8 *)(lVar10 + 0x20));
                                                  uVar11 = *(undefined8 *)puVar2;
                                                  *(undefined4 *)(lVar10 + 0x18) = 0;
                                                  lVar12 = thunk_FUN_02b79644(uVar11);
                                                  FUN_037a5cd0(lVar12,*(undefined8 *)puVar3);
                                                  if (lVar12 != 0) {
                                                    lVar14 = *(long *)(lVar12 + 0x10);
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  Method_Newtonsoft_Json_JsonTextReader_FinishReadQuotedNumber__
                                                  ;
                                                  lVar15 = *(long *)puVar4;
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
                                                  *(long *)(lVar10 + 0x30) = lVar12;
                                                  thunk_FUN_02bb0e9c((long *)(lVar10 + 0x30),lVar12)
                                                  ;
                                                  lVar12 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                              
                                                  Method_OVRSimpleJSON_JSONLazyCreator_Set<JSONNumber>__
                                                  );
                                                  FUN_037a5cd0(lVar12,*(undefined8 *)
                                                                                                                                              
                                                  Method_Newtonsoft_Json_Linq_JPropertyKeyedCollection_Contains__
                                                  );
                                                  lVar14 = thunk_FUN_02b79644(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_05b9af48(lVar14,0);
                                                  if (lVar14 != 0) {
                                                    *(undefined8 *)(lVar14 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Newtonsoft_Json_JsonTextReader_FinishReadQuotedStringValue__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar14 + 0x10) = *unaff_x26;
                                                  thunk_FUN_02bb0e9c();
                                                  if (lVar12 != 0) {
                                                    lVar15 = *(long *)(lVar12 + 0x10);
                                                    lVar16 = *(long *)puVar8;
                                                    *(int *)(lVar12 + 0x1c) =
                                                         *(int *)(lVar12 + 0x1c) + 1;
                                                    if (lVar15 != 0) {
                                                      uVar1 = *(uint *)(lVar12 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                        *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                        plVar13 = (long *)(lVar15 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar13 = lVar14;
                                                        thunk_FUN_02bb0e9c(plVar13,lVar14);
                                                      }
                                                      else {
                                                        FUN_037a6538(lVar12,lVar14,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x28) = lVar12;
                                                  thunk_FUN_02bb0e9c((long *)(lVar10 + 0x28),lVar12)
                                                  ;
                                                  lVar12 = *(long *)(lVar9 + 0x10);
                                                  lVar14 = *(long *)
                                                  Method_Newtonsoft_Json_Linq_JProperty_RemoveItem__
                                                  ;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar12 != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                      plVar13 = (long *)(lVar12 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar13 = lVar10;
                                                      thunk_FUN_02bb0e9c(plVar13,lVar10);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar9,lVar10,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar10 = thunk_FUN_02b79644(*(undefined8 *)puVar7)
                                                  ;
                                                  FUN_05b9af50(lVar10,0);
                                                  puVar6 = 
                                                  Method_System_Linq_Enumerable_Empty<Type>__;
                                                  if (lVar10 != 0) {
                                                    *(undefined8 *)(lVar10 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  System_Collections_Generic_Queue<JobHandle>_TypeInfo
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar10 + 0x20) =
                                                       *(undefined8 *)puVar6;
                                                  thunk_FUN_02bb0e9c((undefined8 *)(lVar10 + 0x20));
                                                  uVar11 = *(undefined8 *)puVar2;
                                                  *(undefined4 *)(lVar10 + 0x18) = 2;
                                                  lVar12 = thunk_FUN_02b79644(uVar11);
                                                  FUN_037a5cd0(lVar12,*(undefined8 *)puVar3);
                                                  if (lVar12 != 0) {
                                                    lVar14 = *(long *)(lVar12 + 0x10);
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Linq_Enumerable_Select<KeyValuePair<string,_JsonParser_JsonValue>,_string>__
                                                  ;
                                                  lVar15 = *(long *)puVar4;
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
                                                  *(long *)(lVar10 + 0x30) = lVar12;
                                                  thunk_FUN_02bb0e9c((long *)(lVar10 + 0x30),lVar12)
                                                  ;
                                                  lVar12 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                              
                                                  Method_OVRSimpleJSON_JSONLazyCreator_Set<JSONNumber>__
                                                  );
                                                  FUN_037a5cd0(lVar12,*(undefined8 *)
                                                                                                                                              
                                                  Method_Newtonsoft_Json_Linq_JPropertyKeyedCollection_Contains__
                                                  );
                                                  lVar14 = thunk_FUN_02b79644(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_05b9af48(lVar14,0);
                                                  if (lVar14 != 0) {
                                                    *(undefined8 *)(lVar14 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Newtonsoft_Json_JsonSerializer_set_DefaultValueHandling__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar14 + 0x10) = *unaff_x26;
                                                  thunk_FUN_02bb0e9c();
                                                  if (lVar12 != 0) {
                                                    lVar15 = *(long *)(lVar12 + 0x10);
                                                    lVar16 = *(long *)puVar8;
                                                    *(int *)(lVar12 + 0x1c) =
                                                         *(int *)(lVar12 + 0x1c) + 1;
                                                    if (lVar15 != 0) {
                                                      uVar1 = *(uint *)(lVar12 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                        *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                        plVar13 = (long *)(lVar15 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar13 = lVar14;
                                                        thunk_FUN_02bb0e9c(plVar13,lVar14);
                                                      }
                                                      else {
                                                        FUN_037a6538(lVar12,lVar14,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x28) = lVar12;
                                                  thunk_FUN_02bb0e9c((long *)(lVar10 + 0x28),lVar12)
                                                  ;
                                                  lVar12 = *(long *)(lVar9 + 0x10);
                                                  lVar14 = *(long *)
                                                  Method_Newtonsoft_Json_Linq_JProperty_RemoveItem__
                                                  ;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar12 != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                      plVar13 = (long *)(lVar12 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar13 = lVar10;
                                                      thunk_FUN_02bb0e9c(plVar13,lVar10);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar9,lVar10,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar10 = thunk_FUN_02b79644(*(undefined8 *)puVar7)
                                                  ;
                                                  FUN_05b9af50(lVar10,0);
                                                  puVar6 = 
                                                  Method_Newtonsoft_Json_JsonReader_set_MaxDepth__;
                                                  if (lVar10 != 0) {
                                                    *(undefined8 *)(lVar10 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Oculus_Interaction_Interactable<PokeInteractor,_PokeInteractable>_get_State__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar10 + 0x20) =
                                                       *(undefined8 *)puVar6;
                                                  thunk_FUN_02bb0e9c((undefined8 *)(lVar10 + 0x20));
                                                  uVar11 = *(undefined8 *)puVar2;
                                                  *(undefined4 *)(lVar10 + 0x18) = 0;
                                                  lVar12 = thunk_FUN_02b79644(uVar11);
                                                  FUN_037a5cd0(lVar12,*(undefined8 *)puVar3);
                                                  if (lVar12 != 0) {
                                                    lVar14 = *(long *)(lVar12 + 0x10);
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Linq_Enumerable_Select<EnumMemberAttribute,_string>__
                                                  ;
                                                  lVar15 = *(long *)puVar4;
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
                                                  *(long *)(lVar10 + 0x30) = lVar12;
                                                  thunk_FUN_02bb0e9c((long *)(lVar10 + 0x30),lVar12)
                                                  ;
                                                  lVar12 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                              
                                                  Method_OVRSimpleJSON_JSONLazyCreator_Set<JSONNumber>__
                                                  );
                                                  FUN_037a5cd0(lVar12,*(undefined8 *)
                                                                                                                                              
                                                  Method_Newtonsoft_Json_Linq_JPropertyKeyedCollection_Contains__
                                                  );
                                                  lVar14 = thunk_FUN_02b79644(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_05b9af48(lVar14,0);
                                                  if (lVar14 != 0) {
                                                    *(undefined8 *)(lVar14 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Newtonsoft_Json_JsonSerializer_Deserialize<RegexOptions>__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar14 + 0x10) = *unaff_x26;
                                                  thunk_FUN_02bb0e9c();
                                                  if (lVar12 != 0) {
                                                    lVar15 = *(long *)(lVar12 + 0x10);
                                                    lVar16 = *(long *)puVar8;
                                                    *(int *)(lVar12 + 0x1c) =
                                                         *(int *)(lVar12 + 0x1c) + 1;
                                                    if (lVar15 != 0) {
                                                      uVar1 = *(uint *)(lVar12 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                        *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                        plVar13 = (long *)(lVar15 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar13 = lVar14;
                                                        thunk_FUN_02bb0e9c(plVar13,lVar14);
                                                      }
                                                      else {
                                                        FUN_037a6538(lVar12,lVar14,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x28) = lVar12;
                                                  thunk_FUN_02bb0e9c((long *)(lVar10 + 0x28),lVar12)
                                                  ;
                                                  lVar12 = *(long *)(lVar9 + 0x10);
                                                  lVar14 = *(long *)
                                                  Method_Newtonsoft_Json_Linq_JProperty_RemoveItem__
                                                  ;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar12 != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                      plVar13 = (long *)(lVar12 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar13 = lVar10;
                                                      thunk_FUN_02bb0e9c(plVar13,lVar10);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar9,lVar10,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar10 = thunk_FUN_02b79644(*(undefined8 *)puVar7)
                                                  ;
                                                  FUN_05b9af50(lVar10,0);
                                                  puVar6 = 
                                                  Method_Newtonsoft_Json_JsonTextReader_ParseUndefined__
                                                  ;
                                                  if (lVar10 != 0) {
                                                    *(undefined8 *)(lVar10 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Oculus_Interaction_Interactable<PokeInteractor,_PokeInteractable>_get_Registry__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar10 + 0x20) =
                                                       *(undefined8 *)puVar6;
                                                  thunk_FUN_02bb0e9c((undefined8 *)(lVar10 + 0x20));
                                                  uVar11 = *(undefined8 *)puVar2;
                                                  *(undefined4 *)(lVar10 + 0x18) = 0;
                                                  lVar12 = thunk_FUN_02b79644(uVar11);
                                                  FUN_037a5cd0(lVar12,*(undefined8 *)puVar3);
                                                  if (lVar12 != 0) {
                                                    lVar14 = *(long *)(lVar12 + 0x10);
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Linq_Enumerable_Select<FieldInfo,_Enum>__
                                                  ;
                                                  lVar15 = *(long *)puVar4;
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
                                                  *(long *)(lVar10 + 0x30) = lVar12;
                                                  thunk_FUN_02bb0e9c((long *)(lVar10 + 0x30),lVar12)
                                                  ;
                                                  lVar12 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                              
                                                  Method_OVRSimpleJSON_JSONLazyCreator_Set<JSONNumber>__
                                                  );
                                                  FUN_037a5cd0(lVar12,*(undefined8 *)
                                                                                                                                              
                                                  Method_Newtonsoft_Json_Linq_JPropertyKeyedCollection_Contains__
                                                  );
                                                  lVar14 = thunk_FUN_02b79644(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_05b9af48(lVar14,0);
                                                  if (lVar14 != 0) {
                                                    *(undefined8 *)(lVar14 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Newtonsoft_Json_JsonTextReader_MatchValue__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar14 + 0x10) = *unaff_x26;
                                                  thunk_FUN_02bb0e9c();
                                                  if (lVar12 != 0) {
                                                    lVar15 = *(long *)(lVar12 + 0x10);
                                                    lVar16 = *(long *)puVar8;
                                                    *(int *)(lVar12 + 0x1c) =
                                                         *(int *)(lVar12 + 0x1c) + 1;
                                                    if (lVar15 != 0) {
                                                      uVar1 = *(uint *)(lVar12 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                        *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                        plVar13 = (long *)(lVar15 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar13 = lVar14;
                                                        thunk_FUN_02bb0e9c(plVar13,lVar14);
                                                      }
                                                      else {
                                                        FUN_037a6538(lVar12,lVar14,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x28) = lVar12;
                                                  thunk_FUN_02bb0e9c((long *)(lVar10 + 0x28),lVar12)
                                                  ;
                                                  lVar12 = *(long *)(lVar9 + 0x10);
                                                  lVar14 = *(long *)
                                                  Method_Newtonsoft_Json_Linq_JProperty_RemoveItem__
                                                  ;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar12 != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                      plVar13 = (long *)(lVar12 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar13 = lVar10;
                                                      thunk_FUN_02bb0e9c(plVar13,lVar10);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar9,lVar10,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar10 = thunk_FUN_02b79644(*(undefined8 *)puVar7)
                                                  ;
                                                  FUN_05b9af50(lVar10,0);
                                                  puVar6 = 
                                                  Method_LitJson_JsonData_LitJson_IJsonWrapper_GetBoolean__
                                                  ;
                                                  if (lVar10 != 0) {
                                                    *(undefined8 *)(lVar10 + 0x10) =
                                                         *(undefined8 *)
                                                          Method_LitJson_JsonData__ctor__;
                                                    thunk_FUN_02bb0e9c();
                                                    *(undefined8 *)(lVar10 + 0x20) =
                                                         *(undefined8 *)puVar6;
                                                    thunk_FUN_02bb0e9c((undefined8 *)(lVar10 + 0x20)
                                                                      );
                                                    uVar11 = *(undefined8 *)puVar2;
                                                    *(undefined4 *)(lVar10 + 0x18) = 3;
                                                    lVar12 = thunk_FUN_02b79644(uVar11);
                                                    FUN_037a5cd0(lVar12,*(undefined8 *)puVar3);
                                                    if (lVar12 != 0) {
                                                      lVar14 = *(long *)(lVar12 + 0x10);
                                                      uVar11 = *(undefined8 *)
                                                                                                                                
                                                  Method_System_Globalization_JapaneseCalendar_ToFourDigitYear__
                                                  ;
                                                  lVar15 = *(long *)puVar4;
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
                                                  *(long *)(lVar10 + 0x30) = lVar12;
                                                  thunk_FUN_02bb0e9c((long *)(lVar10 + 0x30),lVar12)
                                                  ;
                                                  lVar12 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                              
                                                  Method_OVRSimpleJSON_JSONLazyCreator_Set<JSONNumber>__
                                                  );
                                                  FUN_037a5cd0(lVar12,*(undefined8 *)
                                                                                                                                              
                                                  Method_Newtonsoft_Json_Linq_JPropertyKeyedCollection_Contains__
                                                  );
                                                  lVar14 = thunk_FUN_02b79644(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_05b9af48(lVar14,0);
                                                  if (lVar14 != 0) {
                                                    *(undefined8 *)(lVar14 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_LitJson_JsonData_LitJson_IJsonWrapper_GetLong__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar14 + 0x10) = *unaff_x26;
                                                  thunk_FUN_02bb0e9c();
                                                  if (lVar12 != 0) {
                                                    lVar15 = *(long *)(lVar12 + 0x10);
                                                    lVar16 = *(long *)puVar8;
                                                    *(int *)(lVar12 + 0x1c) =
                                                         *(int *)(lVar12 + 0x1c) + 1;
                                                    if (lVar15 != 0) {
                                                      uVar1 = *(uint *)(lVar12 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                        *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                        plVar13 = (long *)(lVar15 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar13 = lVar14;
                                                        thunk_FUN_02bb0e9c(plVar13,lVar14);
                                                      }
                                                      else {
                                                        FUN_037a6538(lVar12,lVar14,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x28) = lVar12;
                                                  thunk_FUN_02bb0e9c((long *)(lVar10 + 0x28),lVar12)
                                                  ;
                                                  lVar12 = *(long *)(lVar9 + 0x10);
                                                  lVar14 = *(long *)
                                                  Method_Newtonsoft_Json_Linq_JProperty_RemoveItem__
                                                  ;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar12 != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                      plVar13 = (long *)(lVar12 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar13 = lVar10;
                                                      thunk_FUN_02bb0e9c(plVar13,lVar10);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar9,lVar10,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar10 = thunk_FUN_02b79644(*(undefined8 *)puVar7)
                                                  ;
                                                  FUN_05b9af50(lVar10,0);
                                                  puVar6 = 
                                                  Method_Newtonsoft_Json_JsonConvert_DeserializeObject<Dictionary<string,_string>>__
                                                  ;
                                                  if (lVar10 != 0) {
                                                    *(undefined8 *)(lVar10 + 0x10) =
                                                         *(undefined8 *)PTR_DAT_06332138;
                                                    thunk_FUN_02bb0e9c();
                                                    *(undefined8 *)(lVar10 + 0x20) =
                                                         *(undefined8 *)puVar6;
                                                    thunk_FUN_02bb0e9c((undefined8 *)(lVar10 + 0x20)
                                                                      );
                                                    uVar11 = *(undefined8 *)puVar2;
                                                    *(undefined4 *)(lVar10 + 0x18) = 3;
                                                    lVar12 = thunk_FUN_02b79644(uVar11);
                                                    FUN_037a5cd0(lVar12,*(undefined8 *)puVar3);
                                                    if (lVar12 != 0) {
                                                      lVar14 = *(long *)(lVar12 + 0x10);
                                                      uVar11 = *(undefined8 *)
                                                                                                                                
                                                  Method_System_Collections_Generic_List<IntegratedSubsystemDescriptor>_GetEnumerator__
                                                  ;
                                                  lVar15 = *(long *)puVar4;
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
                                                  *(long *)(lVar10 + 0x30) = lVar12;
                                                  thunk_FUN_02bb0e9c((long *)(lVar10 + 0x30),lVar12)
                                                  ;
                                                  lVar12 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                              
                                                  Method_OVRSimpleJSON_JSONLazyCreator_Set<JSONNumber>__
                                                  );
                                                  FUN_037a5cd0(lVar12,*(undefined8 *)
                                                                                                                                              
                                                  Method_Newtonsoft_Json_Linq_JPropertyKeyedCollection_Contains__
                                                  );
                                                  lVar14 = thunk_FUN_02b79644(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_05b9af48(lVar14,0);
                                                  if (lVar14 != 0) {
                                                    *(undefined8 *)(lVar14 + 0x18) =
                                                         *(undefined8 *)
                                                          Method_LitJson_JsonData_EnsureDictionary__
                                                    ;
                                                    thunk_FUN_02bb0e9c();
                                                    *(undefined8 *)(lVar14 + 0x10) = *unaff_x26;
                                                    thunk_FUN_02bb0e9c();
                                                    if (lVar12 != 0) {
                                                      lVar15 = *(long *)(lVar12 + 0x10);
                                                      lVar16 = *(long *)puVar8;
                                                      *(int *)(lVar12 + 0x1c) =
                                                           *(int *)(lVar12 + 0x1c) + 1;
                                                      if (lVar15 != 0) {
                                                        uVar1 = *(uint *)(lVar12 + 0x18);
                                                        if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                          *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                          plVar13 = (long *)(lVar15 + (long)(int)
                                                  uVar1 * 8 + 0x20);
                                                  *plVar13 = lVar14;
                                                  thunk_FUN_02bb0e9c(plVar13,lVar14);
                                                  }
                                                  else {
                                                    FUN_037a6538(lVar12,lVar14,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar16 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x28) = lVar12;
                                                  thunk_FUN_02bb0e9c((long *)(lVar10 + 0x28),lVar12)
                                                  ;
                                                  lVar12 = *(long *)(lVar9 + 0x10);
                                                  lVar14 = *(long *)
                                                  Method_Newtonsoft_Json_Linq_JProperty_RemoveItem__
                                                  ;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar12 != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                      plVar13 = (long *)(lVar12 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar13 = lVar10;
                                                      thunk_FUN_02bb0e9c(plVar13,lVar10);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar9,lVar10,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar10 = thunk_FUN_02b79644(*(undefined8 *)puVar7)
                                                  ;
                                                  FUN_05b9af50(lVar10,0);
                                                  puVar6 = 
                                                  Method_UnityEngine_UIElements_Internal_MultiColumnHeaderColumn_OnMoverChanged__
                                                  ;
                                                  if (lVar10 != 0) {
                                                    *(undefined8 *)(lVar10 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataMesh>_Start__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar10 + 0x20) =
                                                       *(undefined8 *)puVar6;
                                                  thunk_FUN_02bb0e9c((undefined8 *)(lVar10 + 0x20));
                                                  uVar11 = *(undefined8 *)puVar2;
                                                  *(undefined4 *)(lVar10 + 0x18) = 1;
                                                  lVar12 = thunk_FUN_02b79644(uVar11);
                                                  FUN_037a5cd0(lVar12,*(undefined8 *)puVar3);
                                                  if (lVar12 != 0) {
                                                    lVar14 = *(long *)(lVar12 + 0x10);
                                                    uVar11 = *(undefined8 *)puVar6;
                                                    lVar15 = *(long *)puVar4;
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
                                                  *(long *)(lVar10 + 0x30) = lVar12;
                                                  thunk_FUN_02bb0e9c((long *)(lVar10 + 0x30),lVar12)
                                                  ;
                                                  lVar12 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                              
                                                  Method_OVRSimpleJSON_JSONLazyCreator_Set<JSONNumber>__
                                                  );
                                                  FUN_037a5cd0(lVar12,*(undefined8 *)
                                                                                                                                              
                                                  Method_Newtonsoft_Json_Linq_JPropertyKeyedCollection_Contains__
                                                  );
                                                  lVar14 = thunk_FUN_02b79644(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_05b9af48(lVar14,0);
                                                  if (lVar14 != 0) {
                                                    *(undefined8 *)(lVar14 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_UIElements_Internal_MultiColumnHeaderColumn_UpdateHeaderTemplate__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar14 + 0x10) = *unaff_x26;
                                                  thunk_FUN_02bb0e9c();
                                                  if (lVar12 != 0) {
                                                    lVar15 = *(long *)(lVar12 + 0x10);
                                                    lVar16 = *(long *)puVar8;
                                                    *(int *)(lVar12 + 0x1c) =
                                                         *(int *)(lVar12 + 0x1c) + 1;
                                                    if (lVar15 != 0) {
                                                      uVar1 = *(uint *)(lVar12 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                        *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                        plVar13 = (long *)(lVar15 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar13 = lVar14;
                                                        thunk_FUN_02bb0e9c(plVar13,lVar14);
                                                      }
                                                      else {
                                                        FUN_037a6538(lVar12,lVar14,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x28) = lVar12;
                                                  thunk_FUN_02bb0e9c((long *)(lVar10 + 0x28),lVar12)
                                                  ;
                                                  lVar12 = *(long *)(lVar9 + 0x10);
                                                  lVar14 = *(long *)
                                                  Method_Newtonsoft_Json_Linq_JProperty_RemoveItem__
                                                  ;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar12 != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                      plVar13 = (long *)(lVar12 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar13 = lVar10;
                                                      thunk_FUN_02bb0e9c(plVar13,lVar10);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar9,lVar10,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar10 = thunk_FUN_02b79644(*(undefined8 *)puVar7)
                                                  ;
                                                  FUN_05b9af50(lVar10,0);
                                                  puVar7 = 
                                                  Method_Newtonsoft_Json_JsonSerializer_set_MetadataPropertyHandling__
                                                  ;
                                                  if (lVar10 != 0) {
                                                    *(undefined8 *)(lVar10 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Newtonsoft_Json_Serialization_JsonSerializerInternalBase_GetErrorContext__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar10 + 0x20) =
                                                       *(undefined8 *)puVar7;
                                                  thunk_FUN_02bb0e9c((undefined8 *)(lVar10 + 0x20));
                                                  uVar11 = *(undefined8 *)puVar2;
                                                  *(undefined4 *)(lVar10 + 0x18) = 4;
                                                  lVar12 = thunk_FUN_02b79644(uVar11);
                                                  FUN_037a5cd0(lVar12,*(undefined8 *)puVar3);
                                                  if (lVar12 != 0) {
                                                    lVar14 = *(long *)(lVar12 + 0x10);
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  Method_UnityEngine_InputSystem_InputControlExtensions_CopyState__
                                                  ;
                                                  lVar15 = *(long *)puVar4;
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
                                                  *(long *)(lVar10 + 0x30) = lVar12;
                                                  thunk_FUN_02bb0e9c((long *)(lVar10 + 0x30),lVar12)
                                                  ;
                                                  lVar12 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                              
                                                  Method_OVRSimpleJSON_JSONLazyCreator_Set<JSONNumber>__
                                                  );
                                                  FUN_037a5cd0(lVar12,*(undefined8 *)
                                                                                                                                              
                                                  Method_Newtonsoft_Json_Linq_JPropertyKeyedCollection_Contains__
                                                  );
                                                  lVar14 = thunk_FUN_02b79644(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_05b9af48(lVar14,0);
                                                  if (lVar14 != 0) {
                                                    *(undefined8 *)(lVar14 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Newtonsoft_Json_JsonReader_set_FloatParseHandling__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar14 + 0x10) = *unaff_x26;
                                                  thunk_FUN_02bb0e9c();
                                                  if (lVar12 != 0) {
                                                    lVar15 = *(long *)(lVar12 + 0x10);
                                                    lVar16 = *(long *)puVar8;
                                                    *(int *)(lVar12 + 0x1c) =
                                                         *(int *)(lVar12 + 0x1c) + 1;
                                                    if (lVar15 != 0) {
                                                      uVar1 = *(uint *)(lVar12 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                        *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                        plVar13 = (long *)(lVar15 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar13 = lVar14;
                                                        thunk_FUN_02bb0e9c(plVar13,lVar14);
                                                      }
                                                      else {
                                                        FUN_037a6538(lVar12,lVar14,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x28) = lVar12;
                                                  thunk_FUN_02bb0e9c((long *)(lVar10 + 0x28),lVar12)
                                                  ;
                                                  lVar12 = *(long *)(lVar9 + 0x10);
                                                  lVar14 = *(long *)
                                                  Method_Newtonsoft_Json_Linq_JProperty_RemoveItem__
                                                  ;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar12 != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                      plVar13 = (long *)(lVar12 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar13 = lVar10;
                                                      thunk_FUN_02bb0e9c(plVar13,lVar10);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar9,lVar10,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(unaff_x28 + 0x28) = lVar9;
                                                  thunk_FUN_02bb0e9c((long *)(unaff_x28 + 0x28),
                                                                     lVar9);
                                                  FUN_05b9ad1c(unaff_x25,unaff_x28,0);
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
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


