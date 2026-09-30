/*
FUNCTION_NAME: UnityEngine.TextSelectingUtilities$$SelectWordLeft
ENTRY_POINT: 05bf8fb0
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 89
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;telemetry;structure_combo;keyword_support
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_9;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_15;source_validity_pose_sink_structure;eye_or_gaze_keyword_boost_only;negative_framework_namespace_without_eye_use_flow;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void UnityEngine_TextSelectingUtilities__SelectWordLeft(void)

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
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 unaff_x28;
  undefined8 *unaff_x29;
  
  thunk_FUN_02bb0e9c();
  *(undefined8 *)(unaff_x20 + 0x18) = *unaff_x21;
  thunk_FUN_02bb0e9c();
  *(undefined8 *)(unaff_x20 + 0x30) = *unaff_x29;
  thunk_FUN_02bb0e9c();
  *(undefined8 *)(unaff_x20 + 0x38) = *unaff_x22;
  thunk_FUN_02bb0e9c();
  *(undefined8 *)(unaff_x20 + 0x40) = *unaff_x23;
  thunk_FUN_02bb0e9c();
  lVar8 = thunk_FUN_02b79644(*unaff_x24);
  FUN_037a5cd0(lVar8,*unaff_x25);
  lVar9 = thunk_FUN_02b79644(*unaff_x19);
  FUN_05b9af58(lVar9,0);
  if (lVar9 != 0) {
    *(undefined8 *)(lVar9 + 0x18) = *(undefined8 *)Method_Newtonsoft_Json_Linq_JToken_op_Explicit__;
    *(undefined4 *)(lVar9 + 0x10) = 0x164;
    thunk_FUN_02bb0e9c();
    puVar2 = Method_Newtonsoft_Json_Linq_JProperty_InsertItem__;
    if (lVar8 != 0) {
      lVar12 = *(long *)(lVar8 + 0x10);
      lVar13 = *(long *)Method_Newtonsoft_Json_Linq_JProperty_InsertItem__;
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
                       *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
        }
        lVar9 = thunk_FUN_02b79644(*unaff_x19);
        FUN_05b9af58(lVar9,0);
        if (lVar9 != 0) {
                    /* try { // try from 05bf90d0 to 05cf90d7 has its CatchHandler @ 05bf91b0 */
          *(undefined8 *)(lVar9 + 0x18) =
               *(undefined8 *)Method_Newtonsoft_Json_Linq_JToken_Replace__;
          *(undefined4 *)(lVar9 + 0x10) = 0x264;
          thunk_FUN_02bb0e9c();
          lVar12 = *(long *)(lVar8 + 0x10);
          lVar13 = *(long *)puVar2;
          *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
          puVar3 = Method_OVRSimpleJSON_JSONLazyCreator_Set<JSONBool>__;
          puVar2 = Method_Newtonsoft_Json_Linq_JProperty_RemoveItemAt__;
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
                           *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
            }
            *(long *)(unaff_x20 + 0x20) = lVar8;
            thunk_FUN_02bb0e9c((long *)(unaff_x20 + 0x20),lVar8);
            lVar8 = thunk_FUN_02b79644(*(undefined8 *)puVar3);
            FUN_037a5cd0(lVar8,*(undefined8 *)puVar2);
            puVar4 = Method_Newtonsoft_Json_Linq_JProperty_ClearItems__;
            lVar9 = thunk_FUN_02b79644(*(undefined8 *)
                                        Method_Newtonsoft_Json_Linq_JProperty_ClearItems__);
            FUN_05b9af50(lVar9,0);
            puVar5 = Method_System_Collections_Generic_List<InterpretedFrameInfo>_ToArray__;
            puVar3 = PTR_DAT_063145b8;
            puVar2 = PTR_DAT_063145b0;
            if (lVar9 != 0) {
              *(undefined8 *)(lVar9 + 0x10) =
                   *(undefined8 *)
                    Method_Oculus_Interaction_Interactable<HandGrabUseInteractor,_HandGrabUseInteractable>__ctor__
              ;
              thunk_FUN_02bb0e9c();
              *(undefined8 *)(lVar9 + 0x20) = *(undefined8 *)puVar5;
              thunk_FUN_02bb0e9c((undefined8 *)(lVar9 + 0x20));
              uVar11 = *(undefined8 *)puVar2;
              *(undefined4 *)(lVar9 + 0x18) = 2;
              lVar12 = thunk_FUN_02b79644(uVar11);
              FUN_037a5cd0(lVar12,*(undefined8 *)puVar3);
              puVar3 = PTR_DAT_063173b8;
              if (lVar12 != 0) {
                lVar13 = *(long *)(lVar12 + 0x10);
                uVar11 = *(undefined8 *)
                          Method_System_Linq_Enumerable_Select<KeyValuePair<string,_JsonParser_JsonValue>,_string>__
                ;
                lVar14 = *(long *)PTR_DAT_063173b8;
                *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
                if (lVar13 != 0) {
                  uVar1 = *(uint *)(lVar12 + 0x18);
                  if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                    *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                    *(undefined8 *)(lVar13 + (long)(int)uVar1 * 8 + 0x20) = uVar11;
                    thunk_FUN_02bb0e9c();
                  }
                  else {
                    FUN_037a6538(lVar12,uVar11,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70))
                    ;
                  }
                  *(long *)(lVar9 + 0x30) = lVar12;
                  thunk_FUN_02bb0e9c((long *)(lVar9 + 0x30),lVar12);
                  lVar12 = thunk_FUN_02b79644(*(undefined8 *)
                                               Method_OVRSimpleJSON_JSONLazyCreator_Set<JSONNumber>__
                                             );
                  FUN_037a5cd0(lVar12,*(undefined8 *)
                                       Method_Newtonsoft_Json_Linq_JPropertyKeyedCollection_Contains__
                              );
                  lVar13 = thunk_FUN_02b79644(*(undefined8 *)
                                               Method_Newtonsoft_Json_Linq_JObject_ValidateToken__);
                  FUN_05b9af48(lVar13,0);
                  if (lVar13 != 0) {
                    *(undefined8 *)(lVar13 + 0x18) =
                         *(undefined8 *)
                          Method_Newtonsoft_Json_JsonSerializer_set_DefaultValueHandling__;
                    thunk_FUN_02bb0e9c();
                    *(undefined8 *)(lVar13 + 0x10) = *unaff_x29;
                    thunk_FUN_02bb0e9c();
                    puVar5 = Method_Newtonsoft_Json_Linq_JProperty_Load__;
                    if (lVar12 != 0) {
                      lVar14 = *(long *)(lVar12 + 0x10);
                      lVar15 = *(long *)Method_Newtonsoft_Json_Linq_JProperty_Load__;
                      *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
                      if (lVar14 != 0) {
                        uVar1 = *(uint *)(lVar12 + 0x18);
                        if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                          *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                          plVar10 = (long *)(lVar14 + (long)(int)uVar1 * 8 + 0x20);
                          *plVar10 = lVar13;
                          thunk_FUN_02bb0e9c(plVar10,lVar13);
                        }
                        else {
                          FUN_037a6538(lVar12,lVar13,
                                       *(undefined8 *)
                                        (*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
                        }
                        *(long *)(lVar9 + 0x28) = lVar12;
                        thunk_FUN_02bb0e9c((long *)(lVar9 + 0x28),lVar12);
                        puVar6 = Method_Newtonsoft_Json_Linq_JProperty_RemoveItem__;
                        if (lVar8 != 0) {
                          lVar12 = *(long *)(lVar8 + 0x10);
                          lVar13 = *(long *)Method_Newtonsoft_Json_Linq_JProperty_RemoveItem__;
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
                                            (*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
                            }
                            lVar9 = thunk_FUN_02b79644(*(undefined8 *)puVar4);
                            FUN_05b9af50(lVar9,0);
                            puVar7 = 
                            Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray<Quaternion>__
                            ;
                            if (lVar9 != 0) {
                              *(undefined8 *)(lVar9 + 0x10) =
                                   *(undefined8 *)
                                    Method_Oculus_Interaction_Interactable<HandGrabInteractor,_HandGrabInteractable>_get_WhenSelectingInteractorAdded__
                              ;
                              thunk_FUN_02bb0e9c();
                              *(undefined8 *)(lVar9 + 0x20) = *(undefined8 *)puVar7;
                              thunk_FUN_02bb0e9c((undefined8 *)(lVar9 + 0x20));
                              uVar11 = *(undefined8 *)puVar2;
                              *(undefined4 *)(lVar9 + 0x18) = 2;
                              lVar12 = thunk_FUN_02b79644(uVar11);
                              FUN_037a5cd0(lVar12,*(undefined8 *)PTR_DAT_063145b8);
                              if (lVar12 != 0) {
                                lVar13 = *(long *)(lVar12 + 0x10);
                                uVar11 = *(undefined8 *)
                                          Method_System_Linq_Enumerable_Select<DynamicMetaObject,_Expression>__
                                ;
                                lVar14 = *(long *)puVar3;
                                *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
                                if (lVar13 != 0) {
                                  uVar1 = *(uint *)(lVar12 + 0x18);
                                  if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                    *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                    *(undefined8 *)(lVar13 + (long)(int)uVar1 * 8 + 0x20) = uVar11;
                                    thunk_FUN_02bb0e9c();
                                  }
                                  else {
                                    FUN_037a6538(lVar12,uVar11,
                                                 *(undefined8 *)
                                                  (*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70
                                                  ));
                                  }
                                  *(long *)(lVar9 + 0x30) = lVar12;
                                  thunk_FUN_02bb0e9c((long *)(lVar9 + 0x30),lVar12);
                                  lVar12 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                              
                                                  Method_OVRSimpleJSON_JSONLazyCreator_Set<JSONNumber>__
                                                  );
                                  FUN_037a5cd0(lVar12,*(undefined8 *)
                                                                                                              
                                                  Method_Newtonsoft_Json_Linq_JPropertyKeyedCollection_Contains__
                                              );
                                  lVar13 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                              
                                                  Method_Newtonsoft_Json_Linq_JObject_ValidateToken__
                                                  );
                                  FUN_05b9af48(lVar13,0);
                                  if (lVar13 != 0) {
                                    *(undefined8 *)(lVar13 + 0x18) =
                                         *(undefined8 *)
                                          Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_CreateNewObject__
                                    ;
                                    thunk_FUN_02bb0e9c();
                                    *(undefined8 *)(lVar13 + 0x10) = *unaff_x29;
                                    thunk_FUN_02bb0e9c();
                                    if (lVar12 != 0) {
                                      lVar14 = *(long *)(lVar12 + 0x10);
                                      lVar15 = *(long *)puVar5;
                                      *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
                                      if (lVar14 != 0) {
                                        uVar1 = *(uint *)(lVar12 + 0x18);
                                        if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                          *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                          plVar10 = (long *)(lVar14 + (long)(int)uVar1 * 8 + 0x20);
                                          *plVar10 = lVar13;
                                          thunk_FUN_02bb0e9c(plVar10,lVar13);
                                        }
                                        else {
                                          FUN_037a6538(lVar12,lVar13,
                                                       *(undefined8 *)
                                                        (*(long *)(*(long *)(lVar15 + 0x20) + 0xc0)
                                                        + 0x70));
                                        }
                                        *(long *)(lVar9 + 0x28) = lVar12;
                                        thunk_FUN_02bb0e9c((long *)(lVar9 + 0x28),lVar12);
                                        lVar12 = *(long *)(lVar8 + 0x10);
                                        lVar13 = *(long *)puVar6;
                                        *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
                                        if (lVar12 != 0) {
                                          uVar1 = *(uint *)(lVar8 + 0x18);
                                          if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                            *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                                            plVar10 = (long *)(lVar12 + (long)(int)uVar1 * 8 + 0x20)
                                            ;
                                            *plVar10 = lVar9;
                                            thunk_FUN_02bb0e9c(plVar10,lVar9);
                                          }
                                          else {
                                            FUN_037a6538(lVar8,lVar9,
                                                         *(undefined8 *)
                                                          (*(long *)(*(long *)(lVar13 + 0x20) + 0xc0
                                                                    ) + 0x70));
                                          }
                                          lVar9 = thunk_FUN_02b79644(*(undefined8 *)puVar4);
                                          FUN_05b9af50(lVar9,0);
                                          puVar4 = PTR_DAT_0631b1e8;
                                          if (lVar9 != 0) {
                                            *(undefined8 *)(lVar9 + 0x10) =
                                                 *(undefined8 *)
                                                  Method_Oculus_Interaction_Interactable<HandGrabInteractor,_HandGrabInteractable>_remove_WhenStateChanged__
                                            ;
                                            thunk_FUN_02bb0e9c();
                                            *(undefined8 *)(lVar9 + 0x20) = *(undefined8 *)puVar4;
                                            thunk_FUN_02bb0e9c((undefined8 *)(lVar9 + 0x20));
                                            uVar11 = *(undefined8 *)puVar2;
                                            *(undefined4 *)(lVar9 + 0x18) = 1;
                                            lVar12 = thunk_FUN_02b79644(uVar11);
                                            FUN_037a5cd0(lVar12,*(undefined8 *)PTR_DAT_063145b8);
                                            if (lVar12 != 0) {
                                              lVar13 = *(long *)(lVar12 + 0x10);
                                              uVar11 = *(undefined8 *)puVar4;
                                              lVar14 = *(long *)puVar3;
                                              *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
                                              if (lVar13 != 0) {
                                                uVar1 = *(uint *)(lVar12 + 0x18);
                                                if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                  *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                  *(undefined8 *)
                                                   (lVar13 + (long)(int)uVar1 * 8 + 0x20) = uVar11;
                                                  thunk_FUN_02bb0e9c();
                                                }
                                                else {
                                                  FUN_037a6538(lVar12,uVar11,
                                                               *(undefined8 *)
                                                                (*(long *)(*(long *)(lVar14 + 0x20)
                                                                          + 0xc0) + 0x70));
                                                }
                                                *(long *)(lVar9 + 0x30) = lVar12;
                                                thunk_FUN_02bb0e9c((long *)(lVar9 + 0x30),lVar12);
                                                lVar12 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                          
                                                  Method_OVRSimpleJSON_JSONLazyCreator_Set<JSONNumber>__
                                                  );
                                                FUN_037a5cd0(lVar12,*(undefined8 *)
                                                                                                                                          
                                                  Method_Newtonsoft_Json_Linq_JPropertyKeyedCollection_Contains__
                                                  );
                                                lVar13 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                          
                                                  Method_Newtonsoft_Json_Linq_JObject_ValidateToken__
                                                  );
                                                FUN_05b9af48(lVar13,0);
                                                puVar4 = 
                                                Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_EndProcessProperty__
                                                ;
                                                if (lVar13 != 0) {
                                                  *(undefined8 *)(lVar13 + 0x18) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_EndProcessProperty__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar13 + 0x10) = *unaff_x29;
                                                  thunk_FUN_02bb0e9c();
                                                  if (lVar12 != 0) {
                                                    lVar14 = *(long *)(lVar12 + 0x10);
                                                    lVar15 = *(long *)puVar5;
                                                    *(int *)(lVar12 + 0x1c) =
                                                         *(int *)(lVar12 + 0x1c) + 1;
                                                    if (lVar14 != 0) {
                                                      uVar1 = *(uint *)(lVar12 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                        *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                        plVar10 = (long *)(lVar14 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar10 = lVar13;
                                                        thunk_FUN_02bb0e9c(plVar10,lVar13);
                                                      }
                                                      else {
                                                        FUN_037a6538(lVar12,lVar13,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x28) = lVar12;
                                                  thunk_FUN_02bb0e9c((long *)(lVar9 + 0x28),lVar12);
                                                  lVar12 = *(long *)(lVar8 + 0x10);
                                                  lVar13 = *(long *)puVar6;
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
                                                                    (*(long *)(*(long *)(lVar13 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar9 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                            
                                                  Method_Newtonsoft_Json_Linq_JProperty_ClearItems__
                                                  );
                                                  FUN_05b9af50(lVar9,0);
                                                  puVar7 = 
                                                  Method_Newtonsoft_Json_JsonSerializer_set_NullValueHandling__
                                                  ;
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Oculus_Interaction_Interactable<HandGrabInteractor,_HandGrabInteractable>_add_WhenStateChanged__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar9 + 0x20) =
                                                       *(undefined8 *)puVar7;
                                                  thunk_FUN_02bb0e9c((undefined8 *)(lVar9 + 0x20));
                                                  uVar11 = *(undefined8 *)puVar2;
                                                  *(undefined4 *)(lVar9 + 0x18) = 0;
                                                  lVar12 = thunk_FUN_02b79644(uVar11);
                                                  FUN_037a5cd0(lVar12,*(undefined8 *)
                                                                       PTR_DAT_063145b8);
                                                  if (lVar12 != 0) {
                                                    lVar13 = *(long *)(lVar12 + 0x10);
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Linq_Enumerable_Select<DataColumn,_Type>__
                                                  ;
                                                  lVar14 = *(long *)puVar3;
                                                  *(int *)(lVar12 + 0x1c) =
                                                       *(int *)(lVar12 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar12 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar13 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar11;
                                                      thunk_FUN_02bb0e9c();
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar12,uVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
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
                                                  lVar13 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                              
                                                  Method_Newtonsoft_Json_Linq_JObject_ValidateToken__
                                                  );
                                                  FUN_05b9af48(lVar13,0);
                                                  if (lVar13 != 0) {
                                                    *(undefined8 *)(lVar13 + 0x18) =
                                                         *(undefined8 *)puVar4;
                                                    thunk_FUN_02bb0e9c();
                                                    *(undefined8 *)(lVar13 + 0x10) = *unaff_x29;
                                                    thunk_FUN_02bb0e9c();
                                                    if (lVar12 != 0) {
                                                      lVar14 = *(long *)(lVar12 + 0x10);
                                                      lVar15 = *(long *)puVar5;
                                                      *(int *)(lVar12 + 0x1c) =
                                                           *(int *)(lVar12 + 0x1c) + 1;
                                                      if (lVar14 != 0) {
                                                        uVar1 = *(uint *)(lVar12 + 0x18);
                                                        if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                          *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                          plVar10 = (long *)(lVar14 + (long)(int)
                                                  uVar1 * 8 + 0x20);
                                                  *plVar10 = lVar13;
                                                  thunk_FUN_02bb0e9c(plVar10,lVar13);
                                                  }
                                                  else {
                                                    FUN_037a6538(lVar12,lVar13,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar15 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x28) = lVar12;
                                                  thunk_FUN_02bb0e9c((long *)(lVar9 + 0x28),lVar12);
                                                  lVar12 = *(long *)(lVar8 + 0x10);
                                                  lVar13 = *(long *)puVar6;
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
                                                                    (*(long *)(*(long *)(lVar13 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar9 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                            
                                                  Method_Newtonsoft_Json_Linq_JProperty_ClearItems__
                                                  );
                                                  FUN_05b9af50(lVar9,0);
                                                  puVar4 = 
                                                  OVR_OpenVR_IVRSystem__GetControllerStateWithPose_TypeInfo
                                                  ;
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x10) =
                                                         *(undefined8 *)PTR_DAT_063210b8;
                                                    thunk_FUN_02bb0e9c();
                                                    *(undefined8 *)(lVar9 + 0x20) =
                                                         *(undefined8 *)puVar4;
                                                    thunk_FUN_02bb0e9c((undefined8 *)(lVar9 + 0x20))
                                                    ;
                                                    uVar11 = *(undefined8 *)puVar2;
                                                    *(undefined4 *)(lVar9 + 0x18) = 0;
                                                    lVar12 = thunk_FUN_02b79644(uVar11);
                                                    FUN_037a5cd0(lVar12,*(undefined8 *)
                                                                         PTR_DAT_063145b8);
                                                    if (lVar12 != 0) {
                                                      lVar13 = *(long *)(lVar12 + 0x10);
                                                      uVar11 = *(undefined8 *)
                                                                                                                                
                                                  Method_System_Linq_Enumerable_Select<Enum,_int>__;
                                                  lVar14 = *(long *)puVar3;
                                                  *(int *)(lVar12 + 0x1c) =
                                                       *(int *)(lVar12 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar12 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar13 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar11;
                                                      thunk_FUN_02bb0e9c();
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar12,uVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
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
                                                  lVar13 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                              
                                                  Method_Newtonsoft_Json_Linq_JObject_ValidateToken__
                                                  );
                                                  FUN_05b9af48(lVar13,0);
                                                  if (lVar13 != 0) {
                                                    *(undefined8 *)(lVar13 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Newtonsoft_Json_JsonReader_set_DateParseHandling__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar13 + 0x10) = *unaff_x29;
                                                  thunk_FUN_02bb0e9c();
                                                  if (lVar12 != 0) {
                                                    lVar14 = *(long *)(lVar12 + 0x10);
                                                    lVar15 = *(long *)puVar5;
                                                    *(int *)(lVar12 + 0x1c) =
                                                         *(int *)(lVar12 + 0x1c) + 1;
                                                    if (lVar14 != 0) {
                                                      uVar1 = *(uint *)(lVar12 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                        *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                        plVar10 = (long *)(lVar14 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar10 = lVar13;
                                                        thunk_FUN_02bb0e9c(plVar10,lVar13);
                                                      }
                                                      else {
                                                        FUN_037a6538(lVar12,lVar13,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x28) = lVar12;
                                                  thunk_FUN_02bb0e9c((long *)(lVar9 + 0x28),lVar12);
                                                  lVar12 = *(long *)(lVar8 + 0x10);
                                                  lVar13 = *(long *)puVar6;
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
                                                                    (*(long *)(*(long *)(lVar13 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar9 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                            
                                                  Method_Newtonsoft_Json_Linq_JProperty_ClearItems__
                                                  );
                                                  FUN_05b9af50(lVar9,0);
                                                  puVar4 = PTR_DAT_0631b1f0;
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Oculus_Interaction_Interactable<HandGrabUseInteractor,_HandGrabUseInteractable>_SelectingInteractorAdded__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar9 + 0x20) =
                                                       *(undefined8 *)puVar4;
                                                  thunk_FUN_02bb0e9c((undefined8 *)(lVar9 + 0x20));
                                                  uVar11 = *(undefined8 *)puVar2;
                                                  *(undefined4 *)(lVar9 + 0x18) = 1;
                                                  lVar12 = thunk_FUN_02b79644(uVar11);
                                                  FUN_037a5cd0(lVar12,*(undefined8 *)
                                                                       PTR_DAT_063145b8);
                                                  if (lVar12 != 0) {
                                                    lVar13 = *(long *)(lVar12 + 0x10);
                                                    uVar11 = *(undefined8 *)puVar4;
                                                    lVar14 = *(long *)puVar3;
                                                    *(int *)(lVar12 + 0x1c) =
                                                         *(int *)(lVar12 + 0x1c) + 1;
                                                    if (lVar13 != 0) {
                                                      uVar1 = *(uint *)(lVar12 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                        *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                        *(undefined8 *)
                                                         (lVar13 + (long)(int)uVar1 * 8 + 0x20) =
                                                             uVar11;
                                                        thunk_FUN_02bb0e9c();
                                                      }
                                                      else {
                                                        FUN_037a6538(lVar12,uVar11,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar14 + 
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
                                                  lVar13 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                              
                                                  Method_Newtonsoft_Json_Linq_JObject_ValidateToken__
                                                  );
                                                  FUN_05b9af48(lVar13,0);
                                                  puVar4 = 
                                                  Method_Newtonsoft_Json_JsonSerializer_set_SerializationBinder__
                                                  ;
                                                  if (lVar13 != 0) {
                                                    *(undefined8 *)(lVar13 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Newtonsoft_Json_JsonSerializer_set_SerializationBinder__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar13 + 0x10) = *unaff_x29;
                                                  thunk_FUN_02bb0e9c();
                                                  if (lVar12 != 0) {
                                                    lVar14 = *(long *)(lVar12 + 0x10);
                                                    lVar15 = *(long *)puVar5;
                                                    *(int *)(lVar12 + 0x1c) =
                                                         *(int *)(lVar12 + 0x1c) + 1;
                                                    if (lVar14 != 0) {
                                                      uVar1 = *(uint *)(lVar12 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                        *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                        plVar10 = (long *)(lVar14 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar10 = lVar13;
                                                        thunk_FUN_02bb0e9c(plVar10,lVar13);
                                                      }
                                                      else {
                                                        FUN_037a6538(lVar12,lVar13,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x28) = lVar12;
                                                  thunk_FUN_02bb0e9c((long *)(lVar9 + 0x28),lVar12);
                                                  lVar12 = *(long *)(lVar8 + 0x10);
                                                  lVar13 = *(long *)puVar6;
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
                                                                    (*(long *)(*(long *)(lVar13 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar9 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                            
                                                  Method_Newtonsoft_Json_Linq_JProperty_ClearItems__
                                                  );
                                                  FUN_05b9af50(lVar9,0);
                                                  puVar7 = 
                                                  Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_AddReference__
                                                  ;
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Oculus_Interaction_Interactable<HandGrabUseInteractor,_HandGrabUseInteractable>_Awake__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar9 + 0x20) =
                                                       *(undefined8 *)puVar7;
                                                  thunk_FUN_02bb0e9c((undefined8 *)(lVar9 + 0x20));
                                                  uVar11 = *(undefined8 *)puVar2;
                                                  *(undefined4 *)(lVar9 + 0x18) = 0;
                                                  lVar12 = thunk_FUN_02b79644(uVar11);
                                                  FUN_037a5cd0(lVar12,*(undefined8 *)
                                                                       PTR_DAT_063145b8);
                                                  if (lVar12 != 0) {
                                                    lVar13 = *(long *)(lVar12 + 0x10);
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Linq_Enumerable_Select<AndroidAxis,_string>__
                                                  ;
                                                  lVar14 = *(long *)puVar3;
                                                  *(int *)(lVar12 + 0x1c) =
                                                       *(int *)(lVar12 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar12 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar13 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar11;
                                                      thunk_FUN_02bb0e9c();
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar12,uVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
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
                                                  lVar13 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                              
                                                  Method_Newtonsoft_Json_Linq_JObject_ValidateToken__
                                                  );
                                                  FUN_05b9af48(lVar13,0);
                                                  if (lVar13 != 0) {
                                                    *(undefined8 *)(lVar13 + 0x18) =
                                                         *(undefined8 *)puVar4;
                                                    thunk_FUN_02bb0e9c();
                                                    *(undefined8 *)(lVar13 + 0x10) = *unaff_x29;
                                                    thunk_FUN_02bb0e9c();
                                                    if (lVar12 != 0) {
                                                      lVar14 = *(long *)(lVar12 + 0x10);
                                                      lVar15 = *(long *)puVar5;
                                                      *(int *)(lVar12 + 0x1c) =
                                                           *(int *)(lVar12 + 0x1c) + 1;
                                                      puVar4 = 
                                                  Method_Newtonsoft_Json_Linq_JProperty_ClearItems__
                                                  ;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar12 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                      plVar10 = (long *)(lVar14 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar10 = lVar13;
                                                      thunk_FUN_02bb0e9c(plVar10,lVar13);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar12,lVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x28) = lVar12;
                                                  thunk_FUN_02bb0e9c((long *)(lVar9 + 0x28),lVar12);
                                                  lVar12 = *(long *)(lVar8 + 0x10);
                                                  lVar13 = *(long *)puVar6;
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
                                                                    (*(long *)(*(long *)(lVar13 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar9 = thunk_FUN_02b79644(*(undefined8 *)puVar4);
                                                  FUN_05b9af50(lVar9,0);
                                                  puVar7 = 
                                                  Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray<Matrix4x4>__
                                                  ;
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>__ctor__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar9 + 0x20) =
                                                       *(undefined8 *)puVar7;
                                                  thunk_FUN_02bb0e9c((undefined8 *)(lVar9 + 0x20));
                                                  uVar11 = *(undefined8 *)puVar2;
                                                  *(undefined4 *)(lVar9 + 0x18) = 0;
                                                  lVar12 = thunk_FUN_02b79644(uVar11);
                                                  FUN_037a5cd0(lVar12,*(undefined8 *)
                                                                       PTR_DAT_063145b8);
                                                  if (lVar12 != 0) {
                                                    lVar13 = *(long *)(lVar12 + 0x10);
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Linq_Enumerable_Select<EnumMemberAttribute,_string>__
                                                  ;
                                                  lVar14 = *(long *)puVar3;
                                                  *(int *)(lVar12 + 0x1c) =
                                                       *(int *)(lVar12 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar12 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar13 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar11;
                                                      thunk_FUN_02bb0e9c();
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar12,uVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
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
                                                  lVar13 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                              
                                                  Method_Newtonsoft_Json_Linq_JObject_ValidateToken__
                                                  );
                                                  FUN_05b9af48(lVar13,0);
                                                  if (lVar13 != 0) {
                                                    *(undefined8 *)(lVar13 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Newtonsoft_Json_JsonSerializer_Deserialize<RegexOptions>__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar13 + 0x10) = *unaff_x29;
                                                  thunk_FUN_02bb0e9c();
                                                  if (lVar12 != 0) {
                                                    lVar14 = *(long *)(lVar12 + 0x10);
                                                    lVar15 = *(long *)puVar5;
                                                    *(int *)(lVar12 + 0x1c) =
                                                         *(int *)(lVar12 + 0x1c) + 1;
                                                    if (lVar14 != 0) {
                                                      uVar1 = *(uint *)(lVar12 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                        *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                        plVar10 = (long *)(lVar14 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar10 = lVar13;
                                                        thunk_FUN_02bb0e9c(plVar10,lVar13);
                                                      }
                                                      else {
                                                        FUN_037a6538(lVar12,lVar13,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x28) = lVar12;
                                                  thunk_FUN_02bb0e9c((long *)(lVar9 + 0x28),lVar12);
                                                  lVar12 = *(long *)(lVar8 + 0x10);
                                                  lVar13 = *(long *)puVar6;
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
                                                                    (*(long *)(*(long *)(lVar13 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar9 = thunk_FUN_02b79644(*(undefined8 *)puVar4);
                                                  FUN_05b9af50(lVar9,0);
                                                  puVar7 = 
                                                  Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray<Plane>__
                                                  ;
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Oculus_Interaction_Interactable<SnapInteractor,_SnapInteractable>_get_SelectingInteractors__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar9 + 0x20) =
                                                       *(undefined8 *)puVar7;
                                                  thunk_FUN_02bb0e9c((undefined8 *)(lVar9 + 0x20));
                                                  uVar11 = *(undefined8 *)puVar2;
                                                  *(undefined4 *)(lVar9 + 0x18) = 0;
                                                  lVar12 = thunk_FUN_02b79644(uVar11);
                                                  FUN_037a5cd0(lVar12,*(undefined8 *)
                                                                       PTR_DAT_063145b8);
                                                  if (lVar12 != 0) {
                                                    lVar13 = *(long *)(lVar12 + 0x10);
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Linq_Enumerable_Select<IGrouping<HandFinger,_ValueTuple<HandFinger,_IReadOnlyList<ShapeRecognizer_FingerFeatureConfig>>>,_<>f__AnonymousType0<HandFinger,_IEnumerable<ShapeRecognizer_FingerFeatureConfig>>>__
                                                  ;
                                                  lVar14 = *(long *)puVar3;
                                                  *(int *)(lVar12 + 0x1c) =
                                                       *(int *)(lVar12 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar12 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar13 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar11;
                                                      thunk_FUN_02bb0e9c();
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar12,uVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
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
                                                  lVar13 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                              
                                                  Method_Newtonsoft_Json_Linq_JObject_ValidateToken__
                                                  );
                                                  FUN_05b9af48(lVar13,0);
                                                  if (lVar13 != 0) {
                                                    *(undefined8 *)(lVar13 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_CreateObject__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar13 + 0x10) = *unaff_x29;
                                                  thunk_FUN_02bb0e9c();
                                                  if (lVar12 != 0) {
                                                    lVar14 = *(long *)(lVar12 + 0x10);
                                                    lVar15 = *(long *)puVar5;
                                                    *(int *)(lVar12 + 0x1c) =
                                                         *(int *)(lVar12 + 0x1c) + 1;
                                                    if (lVar14 != 0) {
                                                      uVar1 = *(uint *)(lVar12 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                        *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                        plVar10 = (long *)(lVar14 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar10 = lVar13;
                                                        thunk_FUN_02bb0e9c(plVar10,lVar13);
                                                      }
                                                      else {
                                                        FUN_037a6538(lVar12,lVar13,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x28) = lVar12;
                                                  thunk_FUN_02bb0e9c((long *)(lVar9 + 0x28),lVar12);
                                                  lVar12 = *(long *)(lVar8 + 0x10);
                                                  lVar13 = *(long *)puVar6;
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
                                                                    (*(long *)(*(long *)(lVar13 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar9 = thunk_FUN_02b79644(*(undefined8 *)puVar4);
                                                  FUN_05b9af50(lVar9,0);
                                                  puVar7 = 
                                                  Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray<LODFadeMode>__
                                                  ;
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Oculus_Interaction_Interactable<TeleportInteractor,_TeleportInteractable>__ctor__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar9 + 0x20) =
                                                       *(undefined8 *)puVar7;
                                                  thunk_FUN_02bb0e9c((undefined8 *)(lVar9 + 0x20));
                                                  uVar11 = *(undefined8 *)puVar2;
                                                  *(undefined4 *)(lVar9 + 0x18) = 0;
                                                  lVar12 = thunk_FUN_02b79644(uVar11);
                                                  FUN_037a5cd0(lVar12,*(undefined8 *)
                                                                       PTR_DAT_063145b8);
                                                  if (lVar12 != 0) {
                                                    lVar13 = *(long *)(lVar12 + 0x10);
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Linq_Enumerable_Select<KeyValuePair<Guid,_PxrSpatialMeshInfo>,_Guid>__
                                                  ;
                                                  lVar14 = *(long *)puVar3;
                                                  *(int *)(lVar12 + 0x1c) =
                                                       *(int *)(lVar12 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar12 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar13 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar11;
                                                      thunk_FUN_02bb0e9c();
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar12,uVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
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
                                                  lVar13 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                              
                                                  Method_Newtonsoft_Json_Linq_JObject_ValidateToken__
                                                  );
                                                  FUN_05b9af48(lVar13,0);
                                                  if (lVar13 != 0) {
                                                    *(undefined8 *)(lVar13 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_PopulateDictionary__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar13 + 0x10) = *unaff_x29;
                                                  thunk_FUN_02bb0e9c();
                                                  if (lVar12 != 0) {
                                                    lVar14 = *(long *)(lVar12 + 0x10);
                                                    lVar15 = *(long *)puVar5;
                                                    *(int *)(lVar12 + 0x1c) =
                                                         *(int *)(lVar12 + 0x1c) + 1;
                                                    if (lVar14 != 0) {
                                                      uVar1 = *(uint *)(lVar12 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                        *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                        plVar10 = (long *)(lVar14 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar10 = lVar13;
                                                        thunk_FUN_02bb0e9c(plVar10,lVar13);
                                                      }
                                                      else {
                                                        FUN_037a6538(lVar12,lVar13,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x28) = lVar12;
                                                  thunk_FUN_02bb0e9c((long *)(lVar9 + 0x28),lVar12);
                                                  lVar12 = *(long *)(lVar8 + 0x10);
                                                  lVar13 = *(long *)puVar6;
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
                                                                    (*(long *)(*(long *)(lVar13 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar9 = thunk_FUN_02b79644(*(undefined8 *)puVar4);
                                                  FUN_05b9af50(lVar9,0);
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
                                                    uVar11 = *(undefined8 *)puVar2;
                                                    *(undefined4 *)(lVar9 + 0x18) = 3;
                                                    lVar12 = thunk_FUN_02b79644(uVar11);
                                                    FUN_037a5cd0(lVar12,*(undefined8 *)
                                                                         PTR_DAT_063145b8);
                                                    if (lVar12 != 0) {
                                                      lVar13 = *(long *)(lVar12 + 0x10);
                                                      uVar11 = *(undefined8 *)
                                                                                                                                
                                                  Method_System_Globalization_JapaneseCalendar_ToFourDigitYear__
                                                  ;
                                                  lVar14 = *(long *)puVar3;
                                                  *(int *)(lVar12 + 0x1c) =
                                                       *(int *)(lVar12 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar12 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar13 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar11;
                                                      thunk_FUN_02bb0e9c();
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar12,uVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
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
                                                  lVar13 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                              
                                                  Method_Newtonsoft_Json_Linq_JObject_ValidateToken__
                                                  );
                                                  FUN_05b9af48(lVar13,0);
                                                  if (lVar13 != 0) {
                                                    *(undefined8 *)(lVar13 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_LitJson_JsonData_LitJson_IJsonWrapper_GetLong__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar13 + 0x10) = *unaff_x29;
                                                  thunk_FUN_02bb0e9c();
                                                  if (lVar12 != 0) {
                                                    lVar14 = *(long *)(lVar12 + 0x10);
                                                    lVar15 = *(long *)puVar5;
                                                    *(int *)(lVar12 + 0x1c) =
                                                         *(int *)(lVar12 + 0x1c) + 1;
                                                    if (lVar14 != 0) {
                                                      uVar1 = *(uint *)(lVar12 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                        *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                        plVar10 = (long *)(lVar14 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar10 = lVar13;
                                                        thunk_FUN_02bb0e9c(plVar10,lVar13);
                                                      }
                                                      else {
                                                        FUN_037a6538(lVar12,lVar13,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x28) = lVar12;
                                                  thunk_FUN_02bb0e9c((long *)(lVar9 + 0x28),lVar12);
                                                  lVar12 = *(long *)(lVar8 + 0x10);
                                                  lVar13 = *(long *)puVar6;
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
                                                                    (*(long *)(*(long *)(lVar13 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar9 = thunk_FUN_02b79644(*(undefined8 *)puVar4);
                                                  FUN_05b9af50(lVar9,0);
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
                                                    uVar11 = *(undefined8 *)puVar2;
                                                    *(undefined4 *)(lVar9 + 0x18) = 3;
                                                    lVar12 = thunk_FUN_02b79644(uVar11);
                                                    FUN_037a5cd0(lVar12,*(undefined8 *)
                                                                         PTR_DAT_063145b8);
                                                    if (lVar12 != 0) {
                                                      lVar13 = *(long *)(lVar12 + 0x10);
                                                      uVar11 = *(undefined8 *)
                                                                                                                                
                                                  Method_System_Collections_Generic_List<IntegratedSubsystemDescriptor>_GetEnumerator__
                                                  ;
                                                  lVar14 = *(long *)puVar3;
                                                  *(int *)(lVar12 + 0x1c) =
                                                       *(int *)(lVar12 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar12 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar13 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar11;
                                                      thunk_FUN_02bb0e9c();
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar12,uVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
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
                                                  lVar13 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                              
                                                  Method_Newtonsoft_Json_Linq_JObject_ValidateToken__
                                                  );
                                                  FUN_05b9af48(lVar13,0);
                                                  if (lVar13 != 0) {
                                                    *(undefined8 *)(lVar13 + 0x18) =
                                                         *(undefined8 *)
                                                          Method_LitJson_JsonData_EnsureDictionary__
                                                    ;
                                                    thunk_FUN_02bb0e9c();
                                                    *(undefined8 *)(lVar13 + 0x10) = *unaff_x29;
                                                    thunk_FUN_02bb0e9c();
                                                    if (lVar12 != 0) {
                                                      lVar14 = *(long *)(lVar12 + 0x10);
                                                      lVar15 = *(long *)puVar5;
                                                      *(int *)(lVar12 + 0x1c) =
                                                           *(int *)(lVar12 + 0x1c) + 1;
                                                      if (lVar14 != 0) {
                                                        uVar1 = *(uint *)(lVar12 + 0x18);
                                                        if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                          *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                          plVar10 = (long *)(lVar14 + (long)(int)
                                                  uVar1 * 8 + 0x20);
                                                  *plVar10 = lVar13;
                                                  thunk_FUN_02bb0e9c(plVar10,lVar13);
                                                  }
                                                  else {
                                                    FUN_037a6538(lVar12,lVar13,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar15 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x28) = lVar12;
                                                  thunk_FUN_02bb0e9c((long *)(lVar9 + 0x28),lVar12);
                                                  lVar12 = *(long *)(lVar8 + 0x10);
                                                  lVar13 = *(long *)puVar6;
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
                                                                    (*(long *)(*(long *)(lVar13 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar9 = thunk_FUN_02b79644(*(undefined8 *)puVar4);
                                                  FUN_05b9af50(lVar9,0);
                                                  puVar4 = 
                                                  Method_Newtonsoft_Json_JsonSerializer_set_MetadataPropertyHandling__
                                                  ;
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Newtonsoft_Json_Serialization_JsonSerializerInternalBase_GetErrorContext__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar9 + 0x20) =
                                                       *(undefined8 *)puVar4;
                                                  thunk_FUN_02bb0e9c((undefined8 *)(lVar9 + 0x20));
                                                  uVar11 = *(undefined8 *)puVar2;
                                                  *(undefined4 *)(lVar9 + 0x18) = 4;
                                                  lVar12 = thunk_FUN_02b79644(uVar11);
                                                  FUN_037a5cd0(lVar12,*(undefined8 *)
                                                                       PTR_DAT_063145b8);
                                                  if (lVar12 != 0) {
                                                    lVar13 = *(long *)(lVar12 + 0x10);
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  Method_UnityEngine_InputSystem_InputControlExtensions_CopyState__
                                                  ;
                                                  lVar14 = *(long *)puVar3;
                                                  *(int *)(lVar12 + 0x1c) =
                                                       *(int *)(lVar12 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar12 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar13 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar11;
                                                      thunk_FUN_02bb0e9c();
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar12,uVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
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
                                                  lVar13 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                              
                                                  Method_Newtonsoft_Json_Linq_JObject_ValidateToken__
                                                  );
                                                  FUN_05b9af48(lVar13,0);
                                                  if (lVar13 != 0) {
                                                    *(undefined8 *)(lVar13 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Newtonsoft_Json_JsonReader_set_FloatParseHandling__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar13 + 0x10) = *unaff_x29;
                                                  thunk_FUN_02bb0e9c();
                                                  if (lVar12 != 0) {
                                                    lVar14 = *(long *)(lVar12 + 0x10);
                                                    lVar15 = *(long *)puVar5;
                                                    *(int *)(lVar12 + 0x1c) =
                                                         *(int *)(lVar12 + 0x1c) + 1;
                                                    if (lVar14 != 0) {
                                                      uVar1 = *(uint *)(lVar12 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                        *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                        plVar10 = (long *)(lVar14 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar10 = lVar13;
                                                        thunk_FUN_02bb0e9c(plVar10,lVar13);
                                                      }
                                                      else {
                                                        FUN_037a6538(lVar12,lVar13,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x28) = lVar12;
                                                  thunk_FUN_02bb0e9c((long *)(lVar9 + 0x28),lVar12);
                                                  lVar12 = *(long *)(lVar8 + 0x10);
                                                  lVar13 = *(long *)puVar6;
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
                                                                    (*(long *)(*(long *)(lVar13 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(unaff_x20 + 0x28) = lVar8;
                                                  thunk_FUN_02bb0e9c((long *)(unaff_x20 + 0x28),
                                                                     lVar8);
                                                  FUN_05b9ad1c(unaff_x28);
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
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


