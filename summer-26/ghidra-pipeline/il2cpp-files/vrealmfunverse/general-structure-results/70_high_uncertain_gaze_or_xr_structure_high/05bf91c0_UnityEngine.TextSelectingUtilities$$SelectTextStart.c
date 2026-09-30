/*
FUNCTION_NAME: UnityEngine.TextSelectingUtilities$$SelectTextStart
ENTRY_POINT: 05bf91c0
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 89
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;telemetry;frame_behavior;structure_combo;keyword_support
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_9;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_15;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;eye_or_gaze_keyword_boost_only;negative_framework_namespace_without_eye_use_flow;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void UnityEngine_TextSelectingUtilities__SelectTextStart(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 unaff_x28;
  undefined8 *unaff_x29;
  
  *(undefined8 *)(unaff_x22 + 0x20) = *unaff_x23;
                    /* try { // try from 05bf91d0 to 05cf91d3 has its CatchHandler @ 05bf91f4 */
  thunk_FUN_02bb0e9c((undefined8 *)(unaff_x22 + 0x20));
                    /* try { // try from 05bf91d4 to 05cf91f7 has its CatchHandler @ 05bf8f78 */
  uVar6 = *unaff_x25;
  *(undefined4 *)(unaff_x22 + 0x18) = 2;
  lVar7 = thunk_FUN_02b79644(uVar6);
  FUN_037a5cd0(lVar7,*unaff_x24);
  puVar2 = PTR_DAT_063173b8;
  if (lVar7 != 0) {
    lVar9 = *(long *)(lVar7 + 0x10);
    uVar6 = *(undefined8 *)
             Method_System_Linq_Enumerable_Select<KeyValuePair<string,_JsonParser_JsonValue>,_string>__
    ;
    lVar10 = *(long *)PTR_DAT_063173b8;
    *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
    if (lVar9 != 0) {
      uVar1 = *(uint *)(lVar7 + 0x18);
      if (uVar1 < *(uint *)(lVar9 + 0x18)) {
        *(uint *)(lVar7 + 0x18) = uVar1 + 1;
        *(undefined8 *)(lVar9 + (long)(int)uVar1 * 8 + 0x20) = uVar6;
        thunk_FUN_02bb0e9c();
      }
      else {
        FUN_037a6538(lVar7,uVar6,*(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70))
        ;
      }
      *(long *)(unaff_x22 + 0x30) = lVar7;
      thunk_FUN_02bb0e9c((long *)(unaff_x22 + 0x30),lVar7);
      lVar7 = thunk_FUN_02b79644(*(undefined8 *)
                                  Method_OVRSimpleJSON_JSONLazyCreator_Set<JSONNumber>__);
      FUN_037a5cd0(lVar7,*(undefined8 *)
                          Method_Newtonsoft_Json_Linq_JPropertyKeyedCollection_Contains__);
      lVar9 = thunk_FUN_02b79644(*(undefined8 *)Method_Newtonsoft_Json_Linq_JObject_ValidateToken__)
      ;
      FUN_05b9af48(lVar9,0);
      if (lVar9 != 0) {
        *(undefined8 *)(lVar9 + 0x18) =
             *(undefined8 *)Method_Newtonsoft_Json_JsonSerializer_set_DefaultValueHandling__;
        thunk_FUN_02bb0e9c();
        *(undefined8 *)(lVar9 + 0x10) = *unaff_x29;
        thunk_FUN_02bb0e9c();
        puVar4 = Method_Newtonsoft_Json_Linq_JProperty_Load__;
        if (lVar7 != 0) {
          lVar10 = *(long *)(lVar7 + 0x10);
          lVar11 = *(long *)Method_Newtonsoft_Json_Linq_JProperty_Load__;
          *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
          if (lVar10 != 0) {
            uVar1 = *(uint *)(lVar7 + 0x18);
            if (uVar1 < *(uint *)(lVar10 + 0x18)) {
              *(uint *)(lVar7 + 0x18) = uVar1 + 1;
              plVar8 = (long *)(lVar10 + (long)(int)uVar1 * 8 + 0x20);
              *plVar8 = lVar9;
              thunk_FUN_02bb0e9c(plVar8,lVar9);
            }
            else {
              FUN_037a6538(lVar7,lVar9,
                           *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
            }
            *(long *)(unaff_x22 + 0x28) = lVar7;
            thunk_FUN_02bb0e9c((long *)(unaff_x22 + 0x28),lVar7);
            if (unaff_x21 != 0) {
              lVar7 = *(long *)(unaff_x21 + 0x10);
              *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
              if (lVar7 != 0) {
                uVar1 = *(uint *)(unaff_x21 + 0x18);
                if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                  *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                  *(long *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = unaff_x22;
                  thunk_FUN_02bb0e9c();
                }
                else {
                  FUN_037a6538();
                }
                lVar7 = thunk_FUN_02b79644(*unaff_x19);
                FUN_05b9af50(lVar7,0);
                puVar3 = 
                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray<Quaternion>__
                ;
                if (lVar7 != 0) {
                  *(undefined8 *)(lVar7 + 0x10) =
                       *(undefined8 *)
                        Method_Oculus_Interaction_Interactable<HandGrabInteractor,_HandGrabInteractable>_get_WhenSelectingInteractorAdded__
                  ;
                  thunk_FUN_02bb0e9c();
                  *(undefined8 *)(lVar7 + 0x20) = *(undefined8 *)puVar3;
                  thunk_FUN_02bb0e9c((undefined8 *)(lVar7 + 0x20));
                  uVar6 = *unaff_x25;
                  *(undefined4 *)(lVar7 + 0x18) = 2;
                  lVar9 = thunk_FUN_02b79644(uVar6);
                  FUN_037a5cd0(lVar9,*(undefined8 *)PTR_DAT_063145b8);
                  if (lVar9 != 0) {
                    lVar10 = *(long *)(lVar9 + 0x10);
                    uVar6 = *(undefined8 *)
                             Method_System_Linq_Enumerable_Select<DynamicMetaObject,_Expression>__;
                    lVar11 = *(long *)puVar2;
                    *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
                    if (lVar10 != 0) {
                      uVar1 = *(uint *)(lVar9 + 0x18);
                      if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                        *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                        *(undefined8 *)(lVar10 + (long)(int)uVar1 * 8 + 0x20) = uVar6;
                        thunk_FUN_02bb0e9c();
                      }
                      else {
                        FUN_037a6538(lVar9,uVar6,
                                     *(undefined8 *)
                                      (*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
                      }
                      *(long *)(lVar7 + 0x30) = lVar9;
                      thunk_FUN_02bb0e9c((long *)(lVar7 + 0x30),lVar9);
                      lVar9 = thunk_FUN_02b79644(*(undefined8 *)
                                                  Method_OVRSimpleJSON_JSONLazyCreator_Set<JSONNumber>__
                                                );
                      FUN_037a5cd0(lVar9,*(undefined8 *)
                                          Method_Newtonsoft_Json_Linq_JPropertyKeyedCollection_Contains__
                                  );
                      lVar10 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                      
                                                  Method_Newtonsoft_Json_Linq_JObject_ValidateToken__
                                                 );
                      FUN_05b9af48(lVar10,0);
                      if (lVar10 != 0) {
                        *(undefined8 *)(lVar10 + 0x18) =
                             *(undefined8 *)
                              Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_CreateNewObject__
                        ;
                        thunk_FUN_02bb0e9c();
                        *(undefined8 *)(lVar10 + 0x10) = *unaff_x29;
                        thunk_FUN_02bb0e9c();
                        if (lVar9 != 0) {
                          lVar11 = *(long *)(lVar9 + 0x10);
                          lVar12 = *(long *)puVar4;
                          *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
                          if (lVar11 != 0) {
                            uVar1 = *(uint *)(lVar9 + 0x18);
                            if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                              *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                              plVar8 = (long *)(lVar11 + (long)(int)uVar1 * 8 + 0x20);
                              *plVar8 = lVar10;
                              thunk_FUN_02bb0e9c(plVar8,lVar10);
                            }
                            else {
                              FUN_037a6538(lVar9,lVar10,
                                           *(undefined8 *)
                                            (*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
                            }
                            *(long *)(lVar7 + 0x28) = lVar9;
                            thunk_FUN_02bb0e9c((long *)(lVar7 + 0x28),lVar9);
                            lVar9 = *(long *)(unaff_x21 + 0x10);
                            *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
                            if (lVar9 != 0) {
                              uVar1 = *(uint *)(unaff_x21 + 0x18);
                              if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                plVar8 = (long *)(lVar9 + (long)(int)uVar1 * 8 + 0x20);
                                *plVar8 = lVar7;
                                thunk_FUN_02bb0e9c(plVar8,lVar7);
                              }
                              else {
                                FUN_037a6538();
                              }
                              lVar7 = thunk_FUN_02b79644(*unaff_x19);
                              FUN_05b9af50(lVar7,0);
                              puVar3 = PTR_DAT_0631b1e8;
                              if (lVar7 != 0) {
                                *(undefined8 *)(lVar7 + 0x10) =
                                     *(undefined8 *)
                                      Method_Oculus_Interaction_Interactable<HandGrabInteractor,_HandGrabInteractable>_remove_WhenStateChanged__
                                ;
                                thunk_FUN_02bb0e9c();
                                *(undefined8 *)(lVar7 + 0x20) = *(undefined8 *)puVar3;
                                thunk_FUN_02bb0e9c((undefined8 *)(lVar7 + 0x20));
                                uVar6 = *unaff_x25;
                                *(undefined4 *)(lVar7 + 0x18) = 1;
                                lVar9 = thunk_FUN_02b79644(uVar6);
                                FUN_037a5cd0(lVar9,*(undefined8 *)PTR_DAT_063145b8);
                                if (lVar9 != 0) {
                                  lVar10 = *(long *)(lVar9 + 0x10);
                                  uVar6 = *(undefined8 *)puVar3;
                                  lVar11 = *(long *)puVar2;
                                  *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
                                  if (lVar10 != 0) {
                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                      *(undefined8 *)(lVar10 + (long)(int)uVar1 * 8 + 0x20) = uVar6;
                                      thunk_FUN_02bb0e9c();
                                    }
                                    else {
                                      FUN_037a6538(lVar9,uVar6,
                                                   *(undefined8 *)
                                                    (*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) +
                                                    0x70));
                                    }
                                    *(long *)(lVar7 + 0x30) = lVar9;
                                    thunk_FUN_02bb0e9c((long *)(lVar7 + 0x30),lVar9);
                                    lVar9 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                
                                                  Method_OVRSimpleJSON_JSONLazyCreator_Set<JSONNumber>__
                                                  );
                                    FUN_037a5cd0(lVar9,*(undefined8 *)
                                                                                                                
                                                  Method_Newtonsoft_Json_Linq_JPropertyKeyedCollection_Contains__
                                                );
                                    lVar10 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                  
                                                  Method_Newtonsoft_Json_Linq_JObject_ValidateToken__
                                                  );
                                    FUN_05b9af48(lVar10,0);
                                    puVar3 = 
                                    Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_EndProcessProperty__
                                    ;
                                    if (lVar10 != 0) {
                                      *(undefined8 *)(lVar10 + 0x18) =
                                           *(undefined8 *)
                                            Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_EndProcessProperty__
                                      ;
                                      thunk_FUN_02bb0e9c();
                                      *(undefined8 *)(lVar10 + 0x10) = *unaff_x29;
                                      thunk_FUN_02bb0e9c();
                                      if (lVar9 != 0) {
                                        lVar11 = *(long *)(lVar9 + 0x10);
                                        lVar12 = *(long *)puVar4;
                                        *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
                                        if (lVar11 != 0) {
                                          uVar1 = *(uint *)(lVar9 + 0x18);
                                          if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                            *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                            plVar8 = (long *)(lVar11 + (long)(int)uVar1 * 8 + 0x20);
                                            *plVar8 = lVar10;
                                            thunk_FUN_02bb0e9c(plVar8,lVar10);
                                          }
                                          else {
                                            FUN_037a6538(lVar9,lVar10,
                                                         *(undefined8 *)
                                                          (*(long *)(*(long *)(lVar12 + 0x20) + 0xc0
                                                                    ) + 0x70));
                                          }
                                          *(long *)(lVar7 + 0x28) = lVar9;
                                          thunk_FUN_02bb0e9c((long *)(lVar7 + 0x28),lVar9);
                                          lVar9 = *(long *)(unaff_x21 + 0x10);
                                          *(int *)(unaff_x21 + 0x1c) =
                                               *(int *)(unaff_x21 + 0x1c) + 1;
                                          if (lVar9 != 0) {
                                            uVar1 = *(uint *)(unaff_x21 + 0x18);
                                            if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                              *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                              plVar8 = (long *)(lVar9 + (long)(int)uVar1 * 8 + 0x20)
                                              ;
                                              *plVar8 = lVar7;
                                              thunk_FUN_02bb0e9c(plVar8,lVar7);
                                            }
                                            else {
                                              FUN_037a6538();
                                            }
                                            lVar7 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                
                                                  Method_Newtonsoft_Json_Linq_JProperty_ClearItems__
                                                  );
                                            FUN_05b9af50(lVar7,0);
                                            puVar5 = 
                                            Method_Newtonsoft_Json_JsonSerializer_set_NullValueHandling__
                                            ;
                                            if (lVar7 != 0) {
                                              *(undefined8 *)(lVar7 + 0x10) =
                                                   *(undefined8 *)
                                                                                                        
                                                  Method_Oculus_Interaction_Interactable<HandGrabInteractor,_HandGrabInteractable>_add_WhenStateChanged__
                                              ;
                                              thunk_FUN_02bb0e9c();
                                              *(undefined8 *)(lVar7 + 0x20) = *(undefined8 *)puVar5;
                                              thunk_FUN_02bb0e9c((undefined8 *)(lVar7 + 0x20));
                                              uVar6 = *unaff_x25;
                                              *(undefined4 *)(lVar7 + 0x18) = 0;
                                              lVar9 = thunk_FUN_02b79644(uVar6);
                                              FUN_037a5cd0(lVar9,*(undefined8 *)PTR_DAT_063145b8);
                                              if (lVar9 != 0) {
                                                lVar10 = *(long *)(lVar9 + 0x10);
                                                uVar6 = *(undefined8 *)
                                                                                                                  
                                                  Method_System_Linq_Enumerable_Select<DataColumn,_Type>__
                                                ;
                                                lVar11 = *(long *)puVar2;
                                                *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
                                                if (lVar10 != 0) {
                                                  uVar1 = *(uint *)(lVar9 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                    *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                    *(undefined8 *)
                                                     (lVar10 + (long)(int)uVar1 * 8 + 0x20) = uVar6;
                                                    thunk_FUN_02bb0e9c();
                                                  }
                                                  else {
                                                    FUN_037a6538(lVar9,uVar6,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar11 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                  }
                                                  *(long *)(lVar7 + 0x30) = lVar9;
                                                  thunk_FUN_02bb0e9c((long *)(lVar7 + 0x30),lVar9);
                                                  lVar9 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                            
                                                  Method_OVRSimpleJSON_JSONLazyCreator_Set<JSONNumber>__
                                                  );
                                                  FUN_037a5cd0(lVar9,*(undefined8 *)
                                                                                                                                            
                                                  Method_Newtonsoft_Json_Linq_JPropertyKeyedCollection_Contains__
                                                  );
                                                  lVar10 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                              
                                                  Method_Newtonsoft_Json_Linq_JObject_ValidateToken__
                                                  );
                                                  FUN_05b9af48(lVar10,0);
                                                  if (lVar10 != 0) {
                                                    *(undefined8 *)(lVar10 + 0x18) =
                                                         *(undefined8 *)puVar3;
                                                    thunk_FUN_02bb0e9c();
                                                    *(undefined8 *)(lVar10 + 0x10) = *unaff_x29;
                                                    thunk_FUN_02bb0e9c();
                                                    if (lVar9 != 0) {
                                                      lVar11 = *(long *)(lVar9 + 0x10);
                                                      lVar12 = *(long *)puVar4;
                                                      *(int *)(lVar9 + 0x1c) =
                                                           *(int *)(lVar9 + 0x1c) + 1;
                                                      if (lVar11 != 0) {
                                                        uVar1 = *(uint *)(lVar9 + 0x18);
                                                        if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                          *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                          plVar8 = (long *)(lVar11 + (long)(int)
                                                  uVar1 * 8 + 0x20);
                                                  *plVar8 = lVar10;
                                                  thunk_FUN_02bb0e9c(plVar8,lVar10);
                                                  }
                                                  else {
                                                    FUN_037a6538(lVar9,lVar10,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar12 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                  }
                                                  *(long *)(lVar7 + 0x28) = lVar9;
                                                  thunk_FUN_02bb0e9c((long *)(lVar7 + 0x28),lVar9);
                                                  lVar9 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar9 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar8 = (long *)(lVar9 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar8 = lVar7;
                                                      thunk_FUN_02bb0e9c(plVar8,lVar7);
                                                    }
                                                    else {
                                                      FUN_037a6538();
                                                    }
                                                    lVar7 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                                
                                                  Method_Newtonsoft_Json_Linq_JProperty_ClearItems__
                                                  );
                                                  FUN_05b9af50(lVar7,0);
                                                  puVar3 = 
                                                  OVR_OpenVR_IVRSystem__GetControllerStateWithPose_TypeInfo
                                                  ;
                                                  if (lVar7 != 0) {
                                                    *(undefined8 *)(lVar7 + 0x10) =
                                                         *(undefined8 *)PTR_DAT_063210b8;
                                                    thunk_FUN_02bb0e9c();
                                                    *(undefined8 *)(lVar7 + 0x20) =
                                                         *(undefined8 *)puVar3;
                                                    thunk_FUN_02bb0e9c((undefined8 *)(lVar7 + 0x20))
                                                    ;
                                                    uVar6 = *unaff_x25;
                                                    *(undefined4 *)(lVar7 + 0x18) = 0;
                                                    lVar9 = thunk_FUN_02b79644(uVar6);
                                                    FUN_037a5cd0(lVar9,*(undefined8 *)
                                                                        PTR_DAT_063145b8);
                                                    if (lVar9 != 0) {
                                                      lVar10 = *(long *)(lVar9 + 0x10);
                                                      uVar6 = *(undefined8 *)
                                                                                                                              
                                                  Method_System_Linq_Enumerable_Select<Enum,_int>__;
                                                  lVar11 = *(long *)puVar2;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar10 != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar10 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar6;
                                                      thunk_FUN_02bb0e9c();
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar9,uVar6,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar11 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar7 + 0x30) = lVar9;
                                                  thunk_FUN_02bb0e9c((long *)(lVar7 + 0x30),lVar9);
                                                  lVar9 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                            
                                                  Method_OVRSimpleJSON_JSONLazyCreator_Set<JSONNumber>__
                                                  );
                                                  FUN_037a5cd0(lVar9,*(undefined8 *)
                                                                                                                                            
                                                  Method_Newtonsoft_Json_Linq_JPropertyKeyedCollection_Contains__
                                                  );
                                                  lVar10 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                              
                                                  Method_Newtonsoft_Json_Linq_JObject_ValidateToken__
                                                  );
                                                  FUN_05b9af48(lVar10,0);
                                                  if (lVar10 != 0) {
                                                    *(undefined8 *)(lVar10 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Newtonsoft_Json_JsonReader_set_DateParseHandling__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar10 + 0x10) = *unaff_x29;
                                                  thunk_FUN_02bb0e9c();
                                                  if (lVar9 != 0) {
                                                    lVar11 = *(long *)(lVar9 + 0x10);
                                                    lVar12 = *(long *)puVar4;
                                                    *(int *)(lVar9 + 0x1c) =
                                                         *(int *)(lVar9 + 0x1c) + 1;
                                                    if (lVar11 != 0) {
                                                      uVar1 = *(uint *)(lVar9 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                        *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                        plVar8 = (long *)(lVar11 + (long)(int)uVar1
                                                                                   * 8 + 0x20);
                                                        *plVar8 = lVar10;
                                                        thunk_FUN_02bb0e9c(plVar8,lVar10);
                                                      }
                                                      else {
                                                        FUN_037a6538(lVar9,lVar10,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar12 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar7 + 0x28) = lVar9;
                                                  thunk_FUN_02bb0e9c((long *)(lVar7 + 0x28),lVar9);
                                                  lVar9 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar9 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar8 = (long *)(lVar9 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar8 = lVar7;
                                                      thunk_FUN_02bb0e9c(plVar8,lVar7);
                                                    }
                                                    else {
                                                      FUN_037a6538();
                                                    }
                                                    lVar7 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                                
                                                  Method_Newtonsoft_Json_Linq_JProperty_ClearItems__
                                                  );
                                                  FUN_05b9af50(lVar7,0);
                                                  puVar3 = PTR_DAT_0631b1f0;
                                                  if (lVar7 != 0) {
                                                    *(undefined8 *)(lVar7 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Oculus_Interaction_Interactable<HandGrabUseInteractor,_HandGrabUseInteractable>_SelectingInteractorAdded__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar7 + 0x20) =
                                                       *(undefined8 *)puVar3;
                                                  thunk_FUN_02bb0e9c((undefined8 *)(lVar7 + 0x20));
                                                  uVar6 = *unaff_x25;
                                                  *(undefined4 *)(lVar7 + 0x18) = 1;
                                                  lVar9 = thunk_FUN_02b79644(uVar6);
                                                  FUN_037a5cd0(lVar9,*(undefined8 *)PTR_DAT_063145b8
                                                              );
                                                  if (lVar9 != 0) {
                                                    lVar10 = *(long *)(lVar9 + 0x10);
                                                    uVar6 = *(undefined8 *)puVar3;
                                                    lVar11 = *(long *)puVar2;
                                                    *(int *)(lVar9 + 0x1c) =
                                                         *(int *)(lVar9 + 0x1c) + 1;
                                                    if (lVar10 != 0) {
                                                      uVar1 = *(uint *)(lVar9 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                        *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                        *(undefined8 *)
                                                         (lVar10 + (long)(int)uVar1 * 8 + 0x20) =
                                                             uVar6;
                                                        thunk_FUN_02bb0e9c();
                                                      }
                                                      else {
                                                        FUN_037a6538(lVar9,uVar6,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar11 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar7 + 0x30) = lVar9;
                                                  thunk_FUN_02bb0e9c((long *)(lVar7 + 0x30),lVar9);
                                                  lVar9 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                            
                                                  Method_OVRSimpleJSON_JSONLazyCreator_Set<JSONNumber>__
                                                  );
                                                  FUN_037a5cd0(lVar9,*(undefined8 *)
                                                                                                                                            
                                                  Method_Newtonsoft_Json_Linq_JPropertyKeyedCollection_Contains__
                                                  );
                                                  lVar10 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                              
                                                  Method_Newtonsoft_Json_Linq_JObject_ValidateToken__
                                                  );
                                                  FUN_05b9af48(lVar10,0);
                                                  puVar3 = 
                                                  Method_Newtonsoft_Json_JsonSerializer_set_SerializationBinder__
                                                  ;
                                                  if (lVar10 != 0) {
                                                    *(undefined8 *)(lVar10 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Newtonsoft_Json_JsonSerializer_set_SerializationBinder__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar10 + 0x10) = *unaff_x29;
                                                  thunk_FUN_02bb0e9c();
                                                  if (lVar9 != 0) {
                                                    lVar11 = *(long *)(lVar9 + 0x10);
                                                    lVar12 = *(long *)puVar4;
                                                    *(int *)(lVar9 + 0x1c) =
                                                         *(int *)(lVar9 + 0x1c) + 1;
                                                    if (lVar11 != 0) {
                                                      uVar1 = *(uint *)(lVar9 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                        *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                        plVar8 = (long *)(lVar11 + (long)(int)uVar1
                                                                                   * 8 + 0x20);
                                                        *plVar8 = lVar10;
                                                        thunk_FUN_02bb0e9c(plVar8,lVar10);
                                                      }
                                                      else {
                                                        FUN_037a6538(lVar9,lVar10,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar12 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar7 + 0x28) = lVar9;
                                                  thunk_FUN_02bb0e9c((long *)(lVar7 + 0x28),lVar9);
                                                  lVar9 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar9 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar8 = (long *)(lVar9 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar8 = lVar7;
                                                      thunk_FUN_02bb0e9c(plVar8,lVar7);
                                                    }
                                                    else {
                                                      FUN_037a6538();
                                                    }
                                                    lVar7 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                                
                                                  Method_Newtonsoft_Json_Linq_JProperty_ClearItems__
                                                  );
                                                  FUN_05b9af50(lVar7,0);
                                                  puVar5 = 
                                                  Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_AddReference__
                                                  ;
                                                  if (lVar7 != 0) {
                                                    *(undefined8 *)(lVar7 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Oculus_Interaction_Interactable<HandGrabUseInteractor,_HandGrabUseInteractable>_Awake__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar7 + 0x20) =
                                                       *(undefined8 *)puVar5;
                                                  thunk_FUN_02bb0e9c((undefined8 *)(lVar7 + 0x20));
                                                  uVar6 = *unaff_x25;
                                                  *(undefined4 *)(lVar7 + 0x18) = 0;
                                                  lVar9 = thunk_FUN_02b79644(uVar6);
                                                  FUN_037a5cd0(lVar9,*(undefined8 *)PTR_DAT_063145b8
                                                              );
                                                  if (lVar9 != 0) {
                                                    lVar10 = *(long *)(lVar9 + 0x10);
                                                    uVar6 = *(undefined8 *)
                                                                                                                          
                                                  Method_System_Linq_Enumerable_Select<AndroidAxis,_string>__
                                                  ;
                                                  lVar11 = *(long *)puVar2;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar10 != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar10 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar6;
                                                      thunk_FUN_02bb0e9c();
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar9,uVar6,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar11 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar7 + 0x30) = lVar9;
                                                  thunk_FUN_02bb0e9c((long *)(lVar7 + 0x30),lVar9);
                                                  lVar9 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                            
                                                  Method_OVRSimpleJSON_JSONLazyCreator_Set<JSONNumber>__
                                                  );
                                                  FUN_037a5cd0(lVar9,*(undefined8 *)
                                                                                                                                            
                                                  Method_Newtonsoft_Json_Linq_JPropertyKeyedCollection_Contains__
                                                  );
                                                  lVar10 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                              
                                                  Method_Newtonsoft_Json_Linq_JObject_ValidateToken__
                                                  );
                                                  FUN_05b9af48(lVar10,0);
                                                  if (lVar10 != 0) {
                                                    *(undefined8 *)(lVar10 + 0x18) =
                                                         *(undefined8 *)puVar3;
                                                    thunk_FUN_02bb0e9c();
                                                    *(undefined8 *)(lVar10 + 0x10) = *unaff_x29;
                                                    thunk_FUN_02bb0e9c();
                                                    if (lVar9 != 0) {
                                                      lVar11 = *(long *)(lVar9 + 0x10);
                                                      lVar12 = *(long *)puVar4;
                                                      *(int *)(lVar9 + 0x1c) =
                                                           *(int *)(lVar9 + 0x1c) + 1;
                                                      puVar3 = 
                                                  Method_Newtonsoft_Json_Linq_JProperty_ClearItems__
                                                  ;
                                                  if (lVar11 != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                      plVar8 = (long *)(lVar11 + (long)(int)uVar1 *
                                                                                 8 + 0x20);
                                                      *plVar8 = lVar10;
                                                      thunk_FUN_02bb0e9c(plVar8,lVar10);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar9,lVar10,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar12 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar7 + 0x28) = lVar9;
                                                  thunk_FUN_02bb0e9c((long *)(lVar7 + 0x28),lVar9);
                                                  lVar9 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar9 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar8 = (long *)(lVar9 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar8 = lVar7;
                                                      thunk_FUN_02bb0e9c(plVar8,lVar7);
                                                    }
                                                    else {
                                                      FUN_037a6538();
                                                    }
                                                    lVar7 = thunk_FUN_02b79644(*(undefined8 *)puVar3
                                                                              );
                                                    FUN_05b9af50(lVar7,0);
                                                    puVar5 = 
                                                  Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray<Matrix4x4>__
                                                  ;
                                                  if (lVar7 != 0) {
                                                    *(undefined8 *)(lVar7 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Oculus_Interaction_DistanceReticles_InteractorReticle<ReticleDataTeleport>__ctor__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar7 + 0x20) =
                                                       *(undefined8 *)puVar5;
                                                  thunk_FUN_02bb0e9c((undefined8 *)(lVar7 + 0x20));
                                                  uVar6 = *unaff_x25;
                                                  *(undefined4 *)(lVar7 + 0x18) = 0;
                                                  lVar9 = thunk_FUN_02b79644(uVar6);
                                                  FUN_037a5cd0(lVar9,*(undefined8 *)PTR_DAT_063145b8
                                                              );
                                                  if (lVar9 != 0) {
                                                    lVar10 = *(long *)(lVar9 + 0x10);
                                                    uVar6 = *(undefined8 *)
                                                                                                                          
                                                  Method_System_Linq_Enumerable_Select<EnumMemberAttribute,_string>__
                                                  ;
                                                  lVar11 = *(long *)puVar2;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar10 != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar10 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar6;
                                                      thunk_FUN_02bb0e9c();
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar9,uVar6,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar11 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar7 + 0x30) = lVar9;
                                                  thunk_FUN_02bb0e9c((long *)(lVar7 + 0x30),lVar9);
                                                  lVar9 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                            
                                                  Method_OVRSimpleJSON_JSONLazyCreator_Set<JSONNumber>__
                                                  );
                                                  FUN_037a5cd0(lVar9,*(undefined8 *)
                                                                                                                                            
                                                  Method_Newtonsoft_Json_Linq_JPropertyKeyedCollection_Contains__
                                                  );
                                                  lVar10 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                              
                                                  Method_Newtonsoft_Json_Linq_JObject_ValidateToken__
                                                  );
                                                  FUN_05b9af48(lVar10,0);
                                                  if (lVar10 != 0) {
                                                    *(undefined8 *)(lVar10 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Newtonsoft_Json_JsonSerializer_Deserialize<RegexOptions>__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar10 + 0x10) = *unaff_x29;
                                                  thunk_FUN_02bb0e9c();
                                                  if (lVar9 != 0) {
                                                    lVar11 = *(long *)(lVar9 + 0x10);
                                                    lVar12 = *(long *)puVar4;
                                                    *(int *)(lVar9 + 0x1c) =
                                                         *(int *)(lVar9 + 0x1c) + 1;
                                                    if (lVar11 != 0) {
                                                      uVar1 = *(uint *)(lVar9 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                        *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                        plVar8 = (long *)(lVar11 + (long)(int)uVar1
                                                                                   * 8 + 0x20);
                                                        *plVar8 = lVar10;
                                                        thunk_FUN_02bb0e9c(plVar8,lVar10);
                                                      }
                                                      else {
                                                        FUN_037a6538(lVar9,lVar10,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar12 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar7 + 0x28) = lVar9;
                                                  thunk_FUN_02bb0e9c((long *)(lVar7 + 0x28),lVar9);
                                                  lVar9 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar9 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar8 = (long *)(lVar9 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar8 = lVar7;
                                                      thunk_FUN_02bb0e9c(plVar8,lVar7);
                                                    }
                                                    else {
                                                      FUN_037a6538();
                                                    }
                                                    lVar7 = thunk_FUN_02b79644(*(undefined8 *)puVar3
                                                                              );
                                                    FUN_05b9af50(lVar7,0);
                                                    puVar5 = 
                                                  Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray<Plane>__
                                                  ;
                                                  if (lVar7 != 0) {
                                                    *(undefined8 *)(lVar7 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Oculus_Interaction_Interactable<SnapInteractor,_SnapInteractable>_get_SelectingInteractors__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar7 + 0x20) =
                                                       *(undefined8 *)puVar5;
                                                  thunk_FUN_02bb0e9c((undefined8 *)(lVar7 + 0x20));
                                                  uVar6 = *unaff_x25;
                                                  *(undefined4 *)(lVar7 + 0x18) = 0;
                                                  lVar9 = thunk_FUN_02b79644(uVar6);
                                                  FUN_037a5cd0(lVar9,*(undefined8 *)PTR_DAT_063145b8
                                                              );
                                                  if (lVar9 != 0) {
                                                    lVar10 = *(long *)(lVar9 + 0x10);
                                                    uVar6 = *(undefined8 *)
                                                                                                                          
                                                  Method_System_Linq_Enumerable_Select<IGrouping<HandFinger,_ValueTuple<HandFinger,_IReadOnlyList<ShapeRecognizer_FingerFeatureConfig>>>,_<>f__AnonymousType0<HandFinger,_IEnumerable<ShapeRecognizer_FingerFeatureConfig>>>__
                                                  ;
                                                  lVar11 = *(long *)puVar2;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar10 != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar10 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar6;
                                                      thunk_FUN_02bb0e9c();
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar9,uVar6,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar11 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar7 + 0x30) = lVar9;
                                                  thunk_FUN_02bb0e9c((long *)(lVar7 + 0x30),lVar9);
                                                  lVar9 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                            
                                                  Method_OVRSimpleJSON_JSONLazyCreator_Set<JSONNumber>__
                                                  );
                                                  FUN_037a5cd0(lVar9,*(undefined8 *)
                                                                                                                                            
                                                  Method_Newtonsoft_Json_Linq_JPropertyKeyedCollection_Contains__
                                                  );
                                                  lVar10 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                              
                                                  Method_Newtonsoft_Json_Linq_JObject_ValidateToken__
                                                  );
                                                  FUN_05b9af48(lVar10,0);
                                                  if (lVar10 != 0) {
                                                    *(undefined8 *)(lVar10 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_CreateObject__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar10 + 0x10) = *unaff_x29;
                                                  thunk_FUN_02bb0e9c();
                                                  if (lVar9 != 0) {
                                                    lVar11 = *(long *)(lVar9 + 0x10);
                                                    lVar12 = *(long *)puVar4;
                                                    *(int *)(lVar9 + 0x1c) =
                                                         *(int *)(lVar9 + 0x1c) + 1;
                                                    if (lVar11 != 0) {
                                                      uVar1 = *(uint *)(lVar9 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                        *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                        plVar8 = (long *)(lVar11 + (long)(int)uVar1
                                                                                   * 8 + 0x20);
                                                        *plVar8 = lVar10;
                                                        thunk_FUN_02bb0e9c(plVar8,lVar10);
                                                      }
                                                      else {
                                                        FUN_037a6538(lVar9,lVar10,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar12 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar7 + 0x28) = lVar9;
                                                  thunk_FUN_02bb0e9c((long *)(lVar7 + 0x28),lVar9);
                                                  lVar9 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar9 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar8 = (long *)(lVar9 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar8 = lVar7;
                                                      thunk_FUN_02bb0e9c(plVar8,lVar7);
                                                    }
                                                    else {
                                                      FUN_037a6538();
                                                    }
                                                    lVar7 = thunk_FUN_02b79644(*(undefined8 *)puVar3
                                                                              );
                                                    FUN_05b9af50(lVar7,0);
                                                    puVar5 = 
                                                  Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray<LODFadeMode>__
                                                  ;
                                                  if (lVar7 != 0) {
                                                    *(undefined8 *)(lVar7 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Oculus_Interaction_Interactable<TeleportInteractor,_TeleportInteractable>__ctor__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar7 + 0x20) =
                                                       *(undefined8 *)puVar5;
                                                  thunk_FUN_02bb0e9c((undefined8 *)(lVar7 + 0x20));
                                                  uVar6 = *unaff_x25;
                                                  *(undefined4 *)(lVar7 + 0x18) = 0;
                                                  lVar9 = thunk_FUN_02b79644(uVar6);
                                                  FUN_037a5cd0(lVar9,*(undefined8 *)PTR_DAT_063145b8
                                                              );
                                                  if (lVar9 != 0) {
                                                    lVar10 = *(long *)(lVar9 + 0x10);
                                                    uVar6 = *(undefined8 *)
                                                                                                                          
                                                  Method_System_Linq_Enumerable_Select<KeyValuePair<Guid,_PxrSpatialMeshInfo>,_Guid>__
                                                  ;
                                                  lVar11 = *(long *)puVar2;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar10 != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar10 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar6;
                                                      thunk_FUN_02bb0e9c();
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar9,uVar6,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar11 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar7 + 0x30) = lVar9;
                                                  thunk_FUN_02bb0e9c((long *)(lVar7 + 0x30),lVar9);
                                                  lVar9 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                            
                                                  Method_OVRSimpleJSON_JSONLazyCreator_Set<JSONNumber>__
                                                  );
                                                  FUN_037a5cd0(lVar9,*(undefined8 *)
                                                                                                                                            
                                                  Method_Newtonsoft_Json_Linq_JPropertyKeyedCollection_Contains__
                                                  );
                                                  lVar10 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                              
                                                  Method_Newtonsoft_Json_Linq_JObject_ValidateToken__
                                                  );
                                                  FUN_05b9af48(lVar10,0);
                                                  if (lVar10 != 0) {
                                                    *(undefined8 *)(lVar10 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_PopulateDictionary__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar10 + 0x10) = *unaff_x29;
                                                  thunk_FUN_02bb0e9c();
                                                  if (lVar9 != 0) {
                                                    lVar11 = *(long *)(lVar9 + 0x10);
                                                    lVar12 = *(long *)puVar4;
                                                    *(int *)(lVar9 + 0x1c) =
                                                         *(int *)(lVar9 + 0x1c) + 1;
                                                    if (lVar11 != 0) {
                                                      uVar1 = *(uint *)(lVar9 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                        *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                        plVar8 = (long *)(lVar11 + (long)(int)uVar1
                                                                                   * 8 + 0x20);
                                                        *plVar8 = lVar10;
                                                        thunk_FUN_02bb0e9c(plVar8,lVar10);
                                                      }
                                                      else {
                                                        FUN_037a6538(lVar9,lVar10,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar12 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar7 + 0x28) = lVar9;
                                                  thunk_FUN_02bb0e9c((long *)(lVar7 + 0x28),lVar9);
                                                  lVar9 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar9 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar8 = (long *)(lVar9 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar8 = lVar7;
                                                      thunk_FUN_02bb0e9c(plVar8,lVar7);
                                                    }
                                                    else {
                                                      FUN_037a6538();
                                                    }
                                                    lVar7 = thunk_FUN_02b79644(*(undefined8 *)puVar3
                                                                              );
                                                    FUN_05b9af50(lVar7,0);
                                                    puVar5 = 
                                                  Method_LitJson_JsonData_LitJson_IJsonWrapper_GetBoolean__
                                                  ;
                                                  if (lVar7 != 0) {
                                                    *(undefined8 *)(lVar7 + 0x10) =
                                                         *(undefined8 *)
                                                          Method_LitJson_JsonData__ctor__;
                                                    thunk_FUN_02bb0e9c();
                                                    *(undefined8 *)(lVar7 + 0x20) =
                                                         *(undefined8 *)puVar5;
                                                    thunk_FUN_02bb0e9c((undefined8 *)(lVar7 + 0x20))
                                                    ;
                                                    uVar6 = *unaff_x25;
                                                    *(undefined4 *)(lVar7 + 0x18) = 3;
                                                    lVar9 = thunk_FUN_02b79644(uVar6);
                                                    FUN_037a5cd0(lVar9,*(undefined8 *)
                                                                        PTR_DAT_063145b8);
                                                    if (lVar9 != 0) {
                                                      lVar10 = *(long *)(lVar9 + 0x10);
                                                      uVar6 = *(undefined8 *)
                                                                                                                              
                                                  Method_System_Globalization_JapaneseCalendar_ToFourDigitYear__
                                                  ;
                                                  lVar11 = *(long *)puVar2;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar10 != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar10 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar6;
                                                      thunk_FUN_02bb0e9c();
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar9,uVar6,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar11 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar7 + 0x30) = lVar9;
                                                  thunk_FUN_02bb0e9c((long *)(lVar7 + 0x30),lVar9);
                                                  lVar9 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                            
                                                  Method_OVRSimpleJSON_JSONLazyCreator_Set<JSONNumber>__
                                                  );
                                                  FUN_037a5cd0(lVar9,*(undefined8 *)
                                                                                                                                            
                                                  Method_Newtonsoft_Json_Linq_JPropertyKeyedCollection_Contains__
                                                  );
                                                  lVar10 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                              
                                                  Method_Newtonsoft_Json_Linq_JObject_ValidateToken__
                                                  );
                                                  FUN_05b9af48(lVar10,0);
                                                  if (lVar10 != 0) {
                                                    *(undefined8 *)(lVar10 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_LitJson_JsonData_LitJson_IJsonWrapper_GetLong__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar10 + 0x10) = *unaff_x29;
                                                  thunk_FUN_02bb0e9c();
                                                  if (lVar9 != 0) {
                                                    lVar11 = *(long *)(lVar9 + 0x10);
                                                    lVar12 = *(long *)puVar4;
                                                    *(int *)(lVar9 + 0x1c) =
                                                         *(int *)(lVar9 + 0x1c) + 1;
                                                    if (lVar11 != 0) {
                                                      uVar1 = *(uint *)(lVar9 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                        *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                        plVar8 = (long *)(lVar11 + (long)(int)uVar1
                                                                                   * 8 + 0x20);
                                                        *plVar8 = lVar10;
                                                        thunk_FUN_02bb0e9c(plVar8,lVar10);
                                                      }
                                                      else {
                                                        FUN_037a6538(lVar9,lVar10,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar12 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar7 + 0x28) = lVar9;
                                                  thunk_FUN_02bb0e9c((long *)(lVar7 + 0x28),lVar9);
                                                  lVar9 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar9 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar8 = (long *)(lVar9 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar8 = lVar7;
                                                      thunk_FUN_02bb0e9c(plVar8,lVar7);
                                                    }
                                                    else {
                                                      FUN_037a6538();
                                                    }
                                                    lVar7 = thunk_FUN_02b79644(*(undefined8 *)puVar3
                                                                              );
                                                    FUN_05b9af50(lVar7,0);
                                                    puVar5 = 
                                                  Method_Newtonsoft_Json_JsonConvert_DeserializeObject<Dictionary<string,_string>>__
                                                  ;
                                                  if (lVar7 != 0) {
                                                    *(undefined8 *)(lVar7 + 0x10) =
                                                         *(undefined8 *)PTR_DAT_06332138;
                                                    thunk_FUN_02bb0e9c();
                                                    *(undefined8 *)(lVar7 + 0x20) =
                                                         *(undefined8 *)puVar5;
                                                    thunk_FUN_02bb0e9c((undefined8 *)(lVar7 + 0x20))
                                                    ;
                                                    uVar6 = *unaff_x25;
                                                    *(undefined4 *)(lVar7 + 0x18) = 3;
                                                    lVar9 = thunk_FUN_02b79644(uVar6);
                                                    FUN_037a5cd0(lVar9,*(undefined8 *)
                                                                        PTR_DAT_063145b8);
                                                    if (lVar9 != 0) {
                                                      lVar10 = *(long *)(lVar9 + 0x10);
                                                      uVar6 = *(undefined8 *)
                                                                                                                              
                                                  Method_System_Collections_Generic_List<IntegratedSubsystemDescriptor>_GetEnumerator__
                                                  ;
                                                  lVar11 = *(long *)puVar2;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar10 != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar10 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar6;
                                                      thunk_FUN_02bb0e9c();
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar9,uVar6,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar11 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar7 + 0x30) = lVar9;
                                                  thunk_FUN_02bb0e9c((long *)(lVar7 + 0x30),lVar9);
                                                  lVar9 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                            
                                                  Method_OVRSimpleJSON_JSONLazyCreator_Set<JSONNumber>__
                                                  );
                                                  FUN_037a5cd0(lVar9,*(undefined8 *)
                                                                                                                                            
                                                  Method_Newtonsoft_Json_Linq_JPropertyKeyedCollection_Contains__
                                                  );
                                                  lVar10 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                              
                                                  Method_Newtonsoft_Json_Linq_JObject_ValidateToken__
                                                  );
                                                  FUN_05b9af48(lVar10,0);
                                                  if (lVar10 != 0) {
                                                    *(undefined8 *)(lVar10 + 0x18) =
                                                         *(undefined8 *)
                                                          Method_LitJson_JsonData_EnsureDictionary__
                                                    ;
                                                    thunk_FUN_02bb0e9c();
                                                    *(undefined8 *)(lVar10 + 0x10) = *unaff_x29;
                                                    thunk_FUN_02bb0e9c();
                                                    if (lVar9 != 0) {
                                                      lVar11 = *(long *)(lVar9 + 0x10);
                                                      lVar12 = *(long *)puVar4;
                                                      *(int *)(lVar9 + 0x1c) =
                                                           *(int *)(lVar9 + 0x1c) + 1;
                                                      if (lVar11 != 0) {
                                                        uVar1 = *(uint *)(lVar9 + 0x18);
                                                        if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                          *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                          plVar8 = (long *)(lVar11 + (long)(int)
                                                  uVar1 * 8 + 0x20);
                                                  *plVar8 = lVar10;
                                                  thunk_FUN_02bb0e9c(plVar8,lVar10);
                                                  }
                                                  else {
                                                    FUN_037a6538(lVar9,lVar10,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar12 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                  }
                                                  *(long *)(lVar7 + 0x28) = lVar9;
                                                  thunk_FUN_02bb0e9c((long *)(lVar7 + 0x28),lVar9);
                                                  lVar9 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar9 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar8 = (long *)(lVar9 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar8 = lVar7;
                                                      thunk_FUN_02bb0e9c(plVar8,lVar7);
                                                    }
                                                    else {
                                                      FUN_037a6538();
                                                    }
                                                    lVar7 = thunk_FUN_02b79644(*(undefined8 *)puVar3
                                                                              );
                                                    FUN_05b9af50(lVar7,0);
                                                    puVar3 = 
                                                  Method_Newtonsoft_Json_JsonSerializer_set_MetadataPropertyHandling__
                                                  ;
                                                  if (lVar7 != 0) {
                                                    *(undefined8 *)(lVar7 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Newtonsoft_Json_Serialization_JsonSerializerInternalBase_GetErrorContext__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar7 + 0x20) =
                                                       *(undefined8 *)puVar3;
                                                  thunk_FUN_02bb0e9c((undefined8 *)(lVar7 + 0x20));
                                                  uVar6 = *unaff_x25;
                                                  *(undefined4 *)(lVar7 + 0x18) = 4;
                                                  lVar9 = thunk_FUN_02b79644(uVar6);
                                                  FUN_037a5cd0(lVar9,*(undefined8 *)PTR_DAT_063145b8
                                                              );
                                                  if (lVar9 != 0) {
                                                    lVar10 = *(long *)(lVar9 + 0x10);
                                                    uVar6 = *(undefined8 *)
                                                                                                                          
                                                  Method_UnityEngine_InputSystem_InputControlExtensions_CopyState__
                                                  ;
                                                  lVar11 = *(long *)puVar2;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar10 != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar10 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar6;
                                                      thunk_FUN_02bb0e9c();
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar9,uVar6,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar11 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar7 + 0x30) = lVar9;
                                                  thunk_FUN_02bb0e9c((long *)(lVar7 + 0x30),lVar9);
                                                  lVar9 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                            
                                                  Method_OVRSimpleJSON_JSONLazyCreator_Set<JSONNumber>__
                                                  );
                                                  FUN_037a5cd0(lVar9,*(undefined8 *)
                                                                                                                                            
                                                  Method_Newtonsoft_Json_Linq_JPropertyKeyedCollection_Contains__
                                                  );
                                                  lVar10 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                              
                                                  Method_Newtonsoft_Json_Linq_JObject_ValidateToken__
                                                  );
                                                  FUN_05b9af48(lVar10,0);
                                                  if (lVar10 != 0) {
                                                    *(undefined8 *)(lVar10 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Newtonsoft_Json_JsonReader_set_FloatParseHandling__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar10 + 0x10) = *unaff_x29;
                                                  thunk_FUN_02bb0e9c();
                                                  if (lVar9 != 0) {
                                                    lVar11 = *(long *)(lVar9 + 0x10);
                                                    lVar12 = *(long *)puVar4;
                                                    *(int *)(lVar9 + 0x1c) =
                                                         *(int *)(lVar9 + 0x1c) + 1;
                                                    if (lVar11 != 0) {
                                                      uVar1 = *(uint *)(lVar9 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                        *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                        plVar8 = (long *)(lVar11 + (long)(int)uVar1
                                                                                   * 8 + 0x20);
                                                        *plVar8 = lVar10;
                                                        thunk_FUN_02bb0e9c(plVar8,lVar10);
                                                      }
                                                      else {
                                                        FUN_037a6538(lVar9,lVar10,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar12 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar7 + 0x28) = lVar9;
                                                  thunk_FUN_02bb0e9c((long *)(lVar7 + 0x28),lVar9);
                                                  lVar9 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar9 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar8 = (long *)(lVar9 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar8 = lVar7;
                                                      thunk_FUN_02bb0e9c(plVar8,lVar7);
                                                    }
                                                    else {
                                                      FUN_037a6538();
                                                    }
                                                    *(long *)(unaff_x20 + 0x28) = unaff_x21;
                                                    thunk_FUN_02bb0e9c();
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
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


