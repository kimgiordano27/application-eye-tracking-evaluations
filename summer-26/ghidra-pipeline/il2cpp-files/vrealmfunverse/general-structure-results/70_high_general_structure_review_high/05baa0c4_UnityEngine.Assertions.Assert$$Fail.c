/*
FUNCTION_NAME: UnityEngine.Assertions.Assert$$Fail
ENTRY_POINT: 05baa0c4
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 75
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;data_collection;telemetry;keyword_support
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;ray_or_cast_sink_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_21;eye_or_gaze_keyword_boost_only;negative_framework_namespace_without_eye_use_flow
*/


void UnityEngine_Assertions_Assert__Fail(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 *unaff_x23;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  long *unaff_x28;
  long *unaff_x29;
  long in_stack_00000008;
  
  lVar4 = thunk_FUN_02b79644();
  FUN_037a5cd0(lVar4,*unaff_x19);
  if (lVar4 != 0) {
    lVar7 = *(long *)(lVar4 + 0x10);
    uVar6 = *unaff_x23;
    lVar8 = *unaff_x28;
    *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
    if (lVar7 != 0) {
      uVar1 = *(uint *)(lVar4 + 0x18);
      if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                    /* try { // try from 05baa104 to 05caa10f has its CatchHandler @ 05baa1ec */
        *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                    /* try { // try from 05baa110 to 05caa16b has its CatchHandler @ 05baa07c */
        *(undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar6;
        thunk_FUN_02bb0e9c();
      }
      else {
        FUN_037a6538(lVar4,uVar6,*(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
      }
      *(long *)(unaff_x21 + 0x30) = lVar4;
      thunk_FUN_02bb0e9c((long *)(unaff_x21 + 0x30),lVar4);
      lVar4 = thunk_FUN_02b79644(*(undefined8 *)
                                  Method_OVRSimpleJSON_JSONLazyCreator_Set<JSONNumber>__);
      FUN_037a5cd0(lVar4,*(undefined8 *)
                          Method_Newtonsoft_Json_Linq_JPropertyKeyedCollection_Contains__);
      lVar7 = thunk_FUN_02b79644(*unaff_x27);
                    /* try { // try from 05baa16c to 05caa177 has its CatchHandler @ 05baa1b4 */
      FUN_04dbdb8c(lVar7,0);
      puVar2 = Method_Newtonsoft_Json_JsonReader_set_DateTimeZoneHandling__;
                    /* try { // try from 05baa178 to 05caa1cf has its CatchHandler @ 05baa07c */
      if (lVar7 != 0) {
        *(undefined8 *)(lVar7 + 0x18) =
             *(undefined8 *)Method_Newtonsoft_Json_JsonReader_set_DateTimeZoneHandling__;
        thunk_FUN_02bb0e9c();
        *(undefined8 *)(lVar7 + 0x10) = *unaff_x25;
        thunk_FUN_02bb0e9c();
        if (lVar4 != 0) {
          lVar8 = *(long *)(lVar4 + 0x10);
          lVar9 = *unaff_x29;
                    /* catch(type#1 @ 05fbf508) { ... } // from try @ 05baa16c with catch @ 05baa1b4
                        */
          *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
          if (lVar8 != 0) {
            uVar1 = *(uint *)(lVar4 + 0x18);
            if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                    /* try { // try from 05baa1d0 to 05caa1d3 has its CatchHandler @ 05baa1dc */
                    /* catch() { ... } // from try @ 05baa1d0 with catch @ 05baa1dc */
              *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                    /* try { // try from 05baa1e0 to 05caa1e7 has its CatchHandler @ 05baa228 */
              plVar5 = (long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
              *plVar5 = lVar7;
              thunk_FUN_02bb0e9c(plVar5,lVar7);
            }
            else {
              FUN_037a6538(lVar4,lVar7,
                           *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
            }
            *(long *)(unaff_x21 + 0x28) = lVar4;
            thunk_FUN_02bb0e9c((long *)(unaff_x21 + 0x28),lVar4);
            lVar4 = *(long *)(unaff_x20 + 0x10);
            *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
            if (lVar4 != 0) {
              uVar1 = *(uint *)(unaff_x20 + 0x18);
              if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                *(long *)(lVar4 + (long)(int)uVar1 * 8 + 0x20) = unaff_x21;
                thunk_FUN_02bb0e9c();
              }
              else {
                FUN_037a6538();
              }
              lVar4 = thunk_FUN_02b79644(*(undefined8 *)
                                          Method_Newtonsoft_Json_Linq_JProperty_ClearItems__);
              FUN_04dbdb8c(lVar4,0);
              puVar3 = Method_Newtonsoft_Json_JsonSerializer_set_NullValueHandling__;
              if (lVar4 != 0) {
                *(undefined8 *)(lVar4 + 0x10) =
                     *(undefined8 *)
                      Method_Oculus_Interaction_Interactable<HandGrabInteractor,_HandGrabInteractable>_add_WhenStateChanged__
                ;
                thunk_FUN_02bb0e9c();
                *(undefined8 *)(lVar4 + 0x20) = *(undefined8 *)puVar3;
                thunk_FUN_02bb0e9c((undefined8 *)(lVar4 + 0x20));
                uVar6 = *unaff_x26;
                *(undefined4 *)(lVar4 + 0x18) = 0;
                lVar7 = thunk_FUN_02b79644(uVar6);
                FUN_037a5cd0(lVar7,*unaff_x19);
                if (lVar7 != 0) {
                  lVar8 = *(long *)(lVar7 + 0x10);
                  uVar6 = *(undefined8 *)Method_System_Linq_Enumerable_Select<DataColumn,_Type>__;
                  lVar9 = *unaff_x28;
                  *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
                  if (lVar8 != 0) {
                    uVar1 = *(uint *)(lVar7 + 0x18);
                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                      *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                      *(undefined8 *)(lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar6;
                      thunk_FUN_02bb0e9c();
                    }
                    else {
                      FUN_037a6538(lVar7,uVar6,
                                   *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70)
                                  );
                    }
                    *(long *)(lVar4 + 0x30) = lVar7;
                    thunk_FUN_02bb0e9c((long *)(lVar4 + 0x30),lVar7);
                    lVar7 = thunk_FUN_02b79644(*(undefined8 *)
                                                Method_OVRSimpleJSON_JSONLazyCreator_Set<JSONNumber>__
                                              );
                    FUN_037a5cd0(lVar7,*(undefined8 *)
                                        Method_Newtonsoft_Json_Linq_JPropertyKeyedCollection_Contains__
                                );
                    lVar8 = thunk_FUN_02b79644(*unaff_x27);
                    FUN_04dbdb8c(lVar8,0);
                    if (lVar8 != 0) {
                      *(undefined8 *)(lVar8 + 0x18) = *(undefined8 *)puVar2;
                      thunk_FUN_02bb0e9c();
                      *(undefined8 *)(lVar8 + 0x10) = *unaff_x25;
                      thunk_FUN_02bb0e9c();
                      if (lVar7 != 0) {
                        lVar9 = *(long *)(lVar7 + 0x10);
                        lVar10 = *unaff_x29;
                        *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
                        puVar2 = Method_Newtonsoft_Json_Linq_JProperty_ClearItems__;
                        if (lVar9 != 0) {
                          uVar1 = *(uint *)(lVar7 + 0x18);
                          if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                            *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                            plVar5 = (long *)(lVar9 + (long)(int)uVar1 * 8 + 0x20);
                            *plVar5 = lVar8;
                            thunk_FUN_02bb0e9c(plVar5,lVar8);
                          }
                          else {
                            FUN_037a6538(lVar7,lVar8,
                                         *(undefined8 *)
                                          (*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
                          }
                          *(long *)(lVar4 + 0x28) = lVar7;
                          thunk_FUN_02bb0e9c((long *)(lVar4 + 0x28),lVar7);
                          lVar7 = *(long *)(unaff_x20 + 0x10);
                          *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
                          if (lVar7 != 0) {
                            uVar1 = *(uint *)(unaff_x20 + 0x18);
                            if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                              *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                              plVar5 = (long *)(lVar7 + (long)(int)uVar1 * 8 + 0x20);
                              *plVar5 = lVar4;
                              thunk_FUN_02bb0e9c(plVar5,lVar4);
                            }
                            else {
                              FUN_037a6538();
                            }
                            lVar4 = thunk_FUN_02b79644(*(undefined8 *)puVar2);
                            FUN_04dbdb8c(lVar4,0);
                            puVar2 = OVR_OpenVR_IVRSystem__GetControllerStateWithPose_TypeInfo;
                            if (lVar4 != 0) {
                              *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)PTR_DAT_063210b8;
                              thunk_FUN_02bb0e9c();
                              *(undefined8 *)(lVar4 + 0x20) = *(undefined8 *)puVar2;
                              thunk_FUN_02bb0e9c((undefined8 *)(lVar4 + 0x20));
                              uVar6 = *unaff_x26;
                              *(undefined4 *)(lVar4 + 0x18) = 0;
                              lVar7 = thunk_FUN_02b79644(uVar6);
                              FUN_037a5cd0(lVar7,*unaff_x19);
                              if (lVar7 != 0) {
                                lVar8 = *(long *)(lVar7 + 0x10);
                                uVar6 = *(undefined8 *)
                                         Method_System_Linq_Enumerable_Select<Enum,_int>__;
                                lVar9 = *unaff_x28;
                                *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
                                if (lVar8 != 0) {
                                  uVar1 = *(uint *)(lVar7 + 0x18);
                                  if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                    *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                    *(undefined8 *)(lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar6;
                                    thunk_FUN_02bb0e9c();
                                  }
                                  else {
                                    FUN_037a6538(lVar7,uVar6,
                                                 *(undefined8 *)
                                                  (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70)
                                                );
                                  }
                                  *(long *)(lVar4 + 0x30) = lVar7;
                                  thunk_FUN_02bb0e9c((long *)(lVar4 + 0x30),lVar7);
                                  lVar7 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                            
                                                  Method_OVRSimpleJSON_JSONLazyCreator_Set<JSONNumber>__
                                                  );
                                  FUN_037a5cd0(lVar7,*(undefined8 *)
                                                                                                            
                                                  Method_Newtonsoft_Json_Linq_JPropertyKeyedCollection_Contains__
                                              );
                                  lVar8 = thunk_FUN_02b79644(*unaff_x27);
                                  FUN_04dbdb8c(lVar8,0);
                                  if (lVar8 != 0) {
                                    *(undefined8 *)(lVar8 + 0x18) =
                                         *(undefined8 *)
                                          Method_Newtonsoft_Json_JsonReader_set_DateParseHandling__;
                                    thunk_FUN_02bb0e9c();
                                    *(undefined8 *)(lVar8 + 0x10) = *unaff_x25;
                                    thunk_FUN_02bb0e9c();
                                    lVar9 = thunk_FUN_02b79644(*unaff_x26);
                                    FUN_037a5cd0(lVar9,*unaff_x19);
                                    if (lVar9 != 0) {
                                      lVar10 = *(long *)(lVar9 + 0x10);
                                      uVar6 = *(undefined8 *)
                                               Method_Newtonsoft_Json_Linq_JToken_op_Explicit__;
                                      lVar11 = *unaff_x28;
                                      *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
                                      if (lVar10 != 0) {
                                        uVar1 = *(uint *)(lVar9 + 0x18);
                                        if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                          *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                          *(undefined8 *)(lVar10 + (long)(int)uVar1 * 8 + 0x20) =
                                               uVar6;
                                          thunk_FUN_02bb0e9c();
                                        }
                                        else {
                                          FUN_037a6538(lVar9,uVar6,
                                                       *(undefined8 *)
                                                        (*(long *)(*(long *)(lVar11 + 0x20) + 0xc0)
                                                        + 0x70));
                                        }
                                        *(long *)(lVar8 + 0x20) = lVar9;
                                        thunk_FUN_02bb0e9c((long *)(lVar8 + 0x20),lVar9);
                                        if (lVar7 != 0) {
                                          lVar9 = *(long *)(lVar7 + 0x10);
                                          lVar10 = *unaff_x29;
                                          *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
                                          if (lVar9 != 0) {
                                            uVar1 = *(uint *)(lVar7 + 0x18);
                                            if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                              *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                              plVar5 = (long *)(lVar9 + (long)(int)uVar1 * 8 + 0x20)
                                              ;
                                              *plVar5 = lVar8;
                                              thunk_FUN_02bb0e9c(plVar5,lVar8);
                                            }
                                            else {
                                              FUN_037a6538(lVar7,lVar8,
                                                           *(undefined8 *)
                                                            (*(long *)(*(long *)(lVar10 + 0x20) +
                                                                      0xc0) + 0x70));
                                            }
                                            lVar8 = thunk_FUN_02b79644(*unaff_x27);
                                            FUN_04dbdb8c(lVar8,0);
                                            if (lVar8 != 0) {
                                              *(undefined8 *)(lVar8 + 0x18) =
                                                   *(undefined8 *)
                                                                                                        
                                                  Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_CreateNewDictionary__
                                              ;
                                              thunk_FUN_02bb0e9c();
                                              *(undefined8 *)(lVar8 + 0x10) = *unaff_x25;
                                              thunk_FUN_02bb0e9c();
                                              lVar9 = thunk_FUN_02b79644(*unaff_x26);
                                              FUN_037a5cd0(lVar9,*unaff_x19);
                                              if (lVar9 != 0) {
                                                lVar10 = *(long *)(lVar9 + 0x10);
                                                uVar6 = *(undefined8 *)
                                                                                                                  
                                                  Method_Newtonsoft_Json_Linq_JToken_Replace__;
                                                lVar11 = *unaff_x28;
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
                                                  *(long *)(lVar8 + 0x20) = lVar9;
                                                  thunk_FUN_02bb0e9c((long *)(lVar8 + 0x20),lVar9);
                                                  lVar9 = *(long *)(lVar7 + 0x10);
                                                  lVar10 = *unaff_x29;
                                                  *(int *)(lVar7 + 0x1c) =
                                                       *(int *)(lVar7 + 0x1c) + 1;
                                                  puVar2 = 
                                                  Method_Newtonsoft_Json_Linq_JProperty_ClearItems__
                                                  ;
                                                  if (lVar9 != 0) {
                                                    uVar1 = *(uint *)(lVar7 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                      *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                      plVar5 = (long *)(lVar9 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar5 = lVar8;
                                                      thunk_FUN_02bb0e9c(plVar5,lVar8);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar7,lVar8,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x28) = lVar7;
                                                  thunk_FUN_02bb0e9c((long *)(lVar4 + 0x28),lVar7);
                                                  lVar7 = *(long *)(unaff_x20 + 0x10);
                                                  *(int *)(unaff_x20 + 0x1c) =
                                                       *(int *)(unaff_x20 + 0x1c) + 1;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *(uint *)(unaff_x20 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                                                      plVar5 = (long *)(lVar7 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar5 = lVar4;
                                                      thunk_FUN_02bb0e9c(plVar5,lVar4);
                                                    }
                                                    else {
                                                      FUN_037a6538();
                                                    }
                                                    lVar4 = thunk_FUN_02b79644(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_04dbdb8c(lVar4,0);
                                                    puVar2 = 
                                                  Method_Newtonsoft_Json_JsonSerializer_set_ObjectCreationHandling__
                                                  ;
                                                  if (lVar4 != 0) {
                                                    *(undefined8 *)(lVar4 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Oculus_Interaction_Interactable<LocomotionTurnerInteractor,_LocomotionTurnerInteractable>__ctor__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar4 + 0x20) =
                                                       *(undefined8 *)puVar2;
                                                  thunk_FUN_02bb0e9c((undefined8 *)(lVar4 + 0x20));
                                                  uVar6 = *unaff_x26;
                                                  *(undefined4 *)(lVar4 + 0x18) = 0;
                                                  lVar7 = thunk_FUN_02b79644(uVar6);
                                                  FUN_037a5cd0(lVar7,*unaff_x19);
                                                  if (lVar7 != 0) {
                                                    lVar8 = *(long *)(lVar7 + 0x10);
                                                    uVar6 = *(undefined8 *)
                                                                                                                          
                                                  Method_System_Linq_Enumerable_Select<Collider,_Transform>__
                                                  ;
                                                  lVar9 = *unaff_x28;
                                                  *(int *)(lVar7 + 0x1c) =
                                                       *(int *)(lVar7 + 0x1c) + 1;
                                                  if (lVar8 != 0) {
                                                    uVar1 = *(uint *)(lVar7 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                      *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar6
                                                      ;
                                                      thunk_FUN_02bb0e9c();
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar7,uVar6,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x30) = lVar7;
                                                  thunk_FUN_02bb0e9c((long *)(lVar4 + 0x30),lVar7);
                                                  lVar7 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                            
                                                  Method_OVRSimpleJSON_JSONLazyCreator_Set<JSONNumber>__
                                                  );
                                                  FUN_037a5cd0(lVar7,*(undefined8 *)
                                                                                                                                            
                                                  Method_Newtonsoft_Json_Linq_JPropertyKeyedCollection_Contains__
                                                  );
                                                  lVar8 = thunk_FUN_02b79644(*unaff_x27);
                                                  FUN_04dbdb8c(lVar8,0);
                                                  if (lVar8 != 0) {
                                                    *(undefined8 *)(lVar8 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Newtonsoft_Json_Serialization_JsonSerializerInternalBase_ClearErrorContext__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar8 + 0x10) = *unaff_x25;
                                                  thunk_FUN_02bb0e9c();
                                                  lVar9 = thunk_FUN_02b79644(*unaff_x26);
                                                  FUN_037a5cd0(lVar9,*unaff_x19);
                                                  if (lVar9 != 0) {
                                                    lVar10 = *(long *)(lVar9 + 0x10);
                                                    uVar6 = *(undefined8 *)
                                                                                                                          
                                                  Method_Newtonsoft_Json_Linq_JToken_op_Explicit__;
                                                  lVar11 = *unaff_x28;
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
                                                  *(long *)(lVar8 + 0x20) = lVar9;
                                                  thunk_FUN_02bb0e9c((long *)(lVar8 + 0x20),lVar9);
                                                  if (lVar7 != 0) {
                                                    lVar9 = *(long *)(lVar7 + 0x10);
                                                    lVar10 = *unaff_x29;
                                                    *(int *)(lVar7 + 0x1c) =
                                                         *(int *)(lVar7 + 0x1c) + 1;
                                                    if (lVar9 != 0) {
                                                      uVar1 = *(uint *)(lVar7 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                        *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                        plVar5 = (long *)(lVar9 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                        *plVar5 = lVar8;
                                                        thunk_FUN_02bb0e9c(plVar5,lVar8);
                                                      }
                                                      else {
                                                        FUN_037a6538(lVar7,lVar8,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar8 = thunk_FUN_02b79644(*unaff_x27);
                                                  FUN_04dbdb8c(lVar8,0);
                                                  if (lVar8 != 0) {
                                                    *(undefined8 *)(lVar8 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Newtonsoft_Json_JsonSerializer_set_ReferenceResolver__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar8 + 0x10) = *unaff_x25;
                                                  thunk_FUN_02bb0e9c();
                                                  lVar9 = thunk_FUN_02b79644(*unaff_x26);
                                                  FUN_037a5cd0(lVar9,*unaff_x19);
                                                  if (lVar9 != 0) {
                                                    lVar10 = *(long *)(lVar9 + 0x10);
                                                    uVar6 = *(undefined8 *)
                                                                                                                          
                                                  Method_Newtonsoft_Json_Linq_JToken_Replace__;
                                                  lVar11 = *unaff_x28;
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
                                                  *(long *)(lVar8 + 0x20) = lVar9;
                                                  thunk_FUN_02bb0e9c((long *)(lVar8 + 0x20),lVar9);
                                                  lVar9 = *(long *)(lVar7 + 0x10);
                                                  lVar10 = *unaff_x29;
                                                  *(int *)(lVar7 + 0x1c) =
                                                       *(int *)(lVar7 + 0x1c) + 1;
                                                  puVar2 = 
                                                  Method_Newtonsoft_Json_Linq_JProperty_ClearItems__
                                                  ;
                                                  if (lVar9 != 0) {
                                                    uVar1 = *(uint *)(lVar7 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                      *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                      plVar5 = (long *)(lVar9 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar5 = lVar8;
                                                      thunk_FUN_02bb0e9c(plVar5,lVar8);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar7,lVar8,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x28) = lVar7;
                                                  thunk_FUN_02bb0e9c((long *)(lVar4 + 0x28),lVar7);
                                                  lVar7 = *(long *)(unaff_x20 + 0x10);
                                                  *(int *)(unaff_x20 + 0x1c) =
                                                       *(int *)(unaff_x20 + 0x1c) + 1;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *(uint *)(unaff_x20 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                                                      plVar5 = (long *)(lVar7 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar5 = lVar4;
                                                      thunk_FUN_02bb0e9c(plVar5,lVar4);
                                                    }
                                                    else {
                                                      FUN_037a6538();
                                                    }
                                                    lVar4 = thunk_FUN_02b79644(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_04dbdb8c(lVar4,0);
                                                    puVar2 = 
                                                  Method_Newtonsoft_Json_JsonTextReader_ParseComment__
                                                  ;
                                                  if (lVar4 != 0) {
                                                    *(undefined8 *)(lVar4 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Oculus_Interaction_Interactable<SnapInteractor,_SnapInteractable>_SelectingInteractorAdded__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar4 + 0x20) =
                                                       *(undefined8 *)puVar2;
                                                  thunk_FUN_02bb0e9c((undefined8 *)(lVar4 + 0x20));
                                                  uVar6 = *unaff_x26;
                                                  *(undefined4 *)(lVar4 + 0x18) = 0;
                                                  lVar7 = thunk_FUN_02b79644(uVar6);
                                                  FUN_037a5cd0(lVar7,*unaff_x19);
                                                  if (lVar7 != 0) {
                                                    lVar8 = *(long *)(lVar7 + 0x10);
                                                    uVar6 = *(undefined8 *)
                                                                                                                          
                                                  Method_System_Linq_Enumerable_Select<FieldInfo,_VolumeParameter>__
                                                  ;
                                                  lVar9 = *unaff_x28;
                                                  *(int *)(lVar7 + 0x1c) =
                                                       *(int *)(lVar7 + 0x1c) + 1;
                                                  if (lVar8 != 0) {
                                                    uVar1 = *(uint *)(lVar7 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                      *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar6
                                                      ;
                                                      thunk_FUN_02bb0e9c();
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar7,uVar6,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x30) = lVar7;
                                                  thunk_FUN_02bb0e9c((long *)(lVar4 + 0x30),lVar7);
                                                  lVar7 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                            
                                                  Method_OVRSimpleJSON_JSONLazyCreator_Set<JSONNumber>__
                                                  );
                                                  FUN_037a5cd0(lVar7,*(undefined8 *)
                                                                                                                                            
                                                  Method_Newtonsoft_Json_Linq_JPropertyKeyedCollection_Contains__
                                                  );
                                                  lVar8 = thunk_FUN_02b79644(*unaff_x27);
                                                  FUN_04dbdb8c(lVar8,0);
                                                  if (lVar8 != 0) {
                                                    *(undefined8 *)(lVar8 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Newtonsoft_Json_JsonTextReader_ParseNumberNegativeInfinity__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar8 + 0x10) = *unaff_x25;
                                                  thunk_FUN_02bb0e9c();
                                                  lVar9 = thunk_FUN_02b79644(*unaff_x26);
                                                  FUN_037a5cd0(lVar9,*unaff_x19);
                                                  if (lVar9 != 0) {
                                                    lVar10 = *(long *)(lVar9 + 0x10);
                                                    uVar6 = *(undefined8 *)
                                                                                                                          
                                                  Method_Newtonsoft_Json_Linq_JToken_op_Explicit__;
                                                  lVar11 = *unaff_x28;
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
                                                  *(long *)(lVar8 + 0x20) = lVar9;
                                                  thunk_FUN_02bb0e9c((long *)(lVar8 + 0x20),lVar9);
                                                  if (lVar7 != 0) {
                                                    lVar9 = *(long *)(lVar7 + 0x10);
                                                    lVar10 = *unaff_x29;
                                                    *(int *)(lVar7 + 0x1c) =
                                                         *(int *)(lVar7 + 0x1c) + 1;
                                                    if (lVar9 != 0) {
                                                      uVar1 = *(uint *)(lVar7 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                        *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                        plVar5 = (long *)(lVar9 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                        *plVar5 = lVar8;
                                                        thunk_FUN_02bb0e9c(plVar5,lVar8);
                                                      }
                                                      else {
                                                        FUN_037a6538(lVar7,lVar8,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar8 = thunk_FUN_02b79644(*unaff_x27);
                                                  FUN_04dbdb8c(lVar8,0);
                                                  if (lVar8 != 0) {
                                                    *(undefined8 *)(lVar8 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Newtonsoft_Json_JsonTextReader_ReadAsBoolean__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar8 + 0x10) = *unaff_x25;
                                                  thunk_FUN_02bb0e9c();
                                                  lVar9 = thunk_FUN_02b79644(*unaff_x26);
                                                  FUN_037a5cd0(lVar9,*unaff_x19);
                                                  if (lVar9 != 0) {
                                                    lVar10 = *(long *)(lVar9 + 0x10);
                                                    uVar6 = *(undefined8 *)
                                                                                                                          
                                                  Method_Newtonsoft_Json_Linq_JToken_Replace__;
                                                  lVar11 = *unaff_x28;
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
                                                  *(long *)(lVar8 + 0x20) = lVar9;
                                                  thunk_FUN_02bb0e9c((long *)(lVar8 + 0x20),lVar9);
                                                  lVar9 = *(long *)(lVar7 + 0x10);
                                                  lVar10 = *unaff_x29;
                                                  *(int *)(lVar7 + 0x1c) =
                                                       *(int *)(lVar7 + 0x1c) + 1;
                                                  puVar2 = 
                                                  Method_Newtonsoft_Json_Linq_JProperty_ClearItems__
                                                  ;
                                                  if (lVar9 != 0) {
                                                    uVar1 = *(uint *)(lVar7 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                      *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                      plVar5 = (long *)(lVar9 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar5 = lVar8;
                                                      thunk_FUN_02bb0e9c(plVar5,lVar8);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar7,lVar8,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x28) = lVar7;
                                                  thunk_FUN_02bb0e9c((long *)(lVar4 + 0x28),lVar7);
                                                  lVar7 = *(long *)(unaff_x20 + 0x10);
                                                  *(int *)(unaff_x20 + 0x1c) =
                                                       *(int *)(unaff_x20 + 0x1c) + 1;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *(uint *)(unaff_x20 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                                                      plVar5 = (long *)(lVar7 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar5 = lVar4;
                                                      thunk_FUN_02bb0e9c(plVar5,lVar4);
                                                    }
                                                    else {
                                                      FUN_037a6538();
                                                    }
                                                    lVar4 = thunk_FUN_02b79644(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_04dbdb8c(lVar4,0);
                                                    puVar2 = 
                                                  Method_Newtonsoft_Json_JsonSerializer_set_MissingMemberHandling__
                                                  ;
                                                  if (lVar4 != 0) {
                                                    *(undefined8 *)(lVar4 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Oculus_Interaction_Interactable<PokeInteractor,_PokeInteractable>_get_Interactors__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar4 + 0x20) =
                                                       *(undefined8 *)puVar2;
                                                  thunk_FUN_02bb0e9c((undefined8 *)(lVar4 + 0x20));
                                                  uVar6 = *unaff_x26;
                                                  *(undefined4 *)(lVar4 + 0x18) = 0;
                                                  lVar7 = thunk_FUN_02b79644(uVar6);
                                                  FUN_037a5cd0(lVar7,*unaff_x19);
                                                  if (lVar7 != 0) {
                                                    lVar8 = *(long *)(lVar7 + 0x10);
                                                    uVar6 = *(undefined8 *)
                                                                                                                          
                                                  Method_System_Linq_Enumerable_Select<FieldInfo,_string>__
                                                  ;
                                                  lVar9 = *unaff_x28;
                                                  *(int *)(lVar7 + 0x1c) =
                                                       *(int *)(lVar7 + 0x1c) + 1;
                                                  if (lVar8 != 0) {
                                                    uVar1 = *(uint *)(lVar7 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                      *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar6
                                                      ;
                                                      thunk_FUN_02bb0e9c();
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar7,uVar6,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x30) = lVar7;
                                                  thunk_FUN_02bb0e9c((long *)(lVar4 + 0x30),lVar7);
                                                  lVar7 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                            
                                                  Method_OVRSimpleJSON_JSONLazyCreator_Set<JSONNumber>__
                                                  );
                                                  FUN_037a5cd0(lVar7,*(undefined8 *)
                                                                                                                                            
                                                  Method_Newtonsoft_Json_Linq_JPropertyKeyedCollection_Contains__
                                                  );
                                                  lVar8 = thunk_FUN_02b79644(*unaff_x27);
                                                  FUN_04dbdb8c(lVar8,0);
                                                  if (lVar8 != 0) {
                                                    *(undefined8 *)(lVar8 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Newtonsoft_Json_JsonSerializer_set_TypeNameAssemblyFormatHandling__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar8 + 0x10) = *unaff_x25;
                                                  thunk_FUN_02bb0e9c();
                                                  lVar9 = thunk_FUN_02b79644(*unaff_x26);
                                                  FUN_037a5cd0(lVar9,*unaff_x19);
                                                  if (lVar9 != 0) {
                                                    lVar10 = *(long *)(lVar9 + 0x10);
                                                    uVar6 = *(undefined8 *)
                                                                                                                          
                                                  Method_Newtonsoft_Json_Linq_JToken_op_Explicit__;
                                                  lVar11 = *unaff_x28;
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
                                                  *(long *)(lVar8 + 0x20) = lVar9;
                                                  thunk_FUN_02bb0e9c((long *)(lVar8 + 0x20),lVar9);
                                                  if (lVar7 != 0) {
                                                    lVar9 = *(long *)(lVar7 + 0x10);
                                                    lVar10 = *unaff_x29;
                                                    *(int *)(lVar7 + 0x1c) =
                                                         *(int *)(lVar7 + 0x1c) + 1;
                                                    if (lVar9 != 0) {
                                                      uVar1 = *(uint *)(lVar7 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                        *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                        plVar5 = (long *)(lVar9 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                        *plVar5 = lVar8;
                                                        thunk_FUN_02bb0e9c(plVar5,lVar8);
                                                      }
                                                      else {
                                                        FUN_037a6538(lVar7,lVar8,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar8 = thunk_FUN_02b79644(*unaff_x27);
                                                  FUN_04dbdb8c(lVar8,0);
                                                  if (lVar8 != 0) {
                                                    *(undefined8 *)(lVar8 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Newtonsoft_Json_JsonSerializer_set_PreserveReferencesHandling__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar8 + 0x10) = *unaff_x25;
                                                  thunk_FUN_02bb0e9c();
                                                  lVar9 = thunk_FUN_02b79644(*unaff_x26);
                                                  FUN_037a5cd0(lVar9,*unaff_x19);
                                                  if (lVar9 != 0) {
                                                    lVar10 = *(long *)(lVar9 + 0x10);
                                                    uVar6 = *(undefined8 *)
                                                                                                                          
                                                  Method_Newtonsoft_Json_Linq_JToken_Replace__;
                                                  lVar11 = *unaff_x28;
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
                                                  *(long *)(lVar8 + 0x20) = lVar9;
                                                  thunk_FUN_02bb0e9c((long *)(lVar8 + 0x20),lVar9);
                                                  lVar9 = *(long *)(lVar7 + 0x10);
                                                  lVar10 = *unaff_x29;
                                                  *(int *)(lVar7 + 0x1c) =
                                                       *(int *)(lVar7 + 0x1c) + 1;
                                                  puVar2 = 
                                                  Method_Newtonsoft_Json_Linq_JProperty_ClearItems__
                                                  ;
                                                  if (lVar9 != 0) {
                                                    uVar1 = *(uint *)(lVar7 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                      *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                      plVar5 = (long *)(lVar9 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar5 = lVar8;
                                                      thunk_FUN_02bb0e9c(plVar5,lVar8);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar7,lVar8,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x28) = lVar7;
                                                  thunk_FUN_02bb0e9c((long *)(lVar4 + 0x28),lVar7);
                                                  lVar7 = *(long *)(unaff_x20 + 0x10);
                                                  *(int *)(unaff_x20 + 0x1c) =
                                                       *(int *)(unaff_x20 + 0x1c) + 1;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *(uint *)(unaff_x20 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                                                      plVar5 = (long *)(lVar7 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar5 = lVar4;
                                                      thunk_FUN_02bb0e9c(plVar5,lVar4);
                                                    }
                                                    else {
                                                      FUN_037a6538();
                                                    }
                                                    lVar4 = thunk_FUN_02b79644(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_04dbdb8c(lVar4,0);
                                                    puVar2 = 
                                                  Method_Newtonsoft_Json_JsonTextReader_ReadNumberValue__
                                                  ;
                                                  if (lVar4 != 0) {
                                                    *(undefined8 *)(lVar4 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Oculus_Interaction_Interactable<SnapInteractor,_SnapInteractable>_RemoveInteractorByIdentifier__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar4 + 0x20) =
                                                       *(undefined8 *)puVar2;
                                                  thunk_FUN_02bb0e9c((undefined8 *)(lVar4 + 0x20));
                                                  uVar6 = *unaff_x26;
                                                  *(undefined4 *)(lVar4 + 0x18) = 0;
                                                  lVar7 = thunk_FUN_02b79644(uVar6);
                                                  FUN_037a5cd0(lVar7,*unaff_x19);
                                                  if (lVar7 != 0) {
                                                    lVar8 = *(long *)(lVar7 + 0x10);
                                                    uVar6 = *(undefined8 *)
                                                                                                                          
                                                  Method_System_Linq_Enumerable_Select<KeyValuePair<string,_string>,_string>__
                                                  ;
                                                  lVar9 = *unaff_x28;
                                                  *(int *)(lVar7 + 0x1c) =
                                                       *(int *)(lVar7 + 0x1c) + 1;
                                                  if (lVar8 != 0) {
                                                    uVar1 = *(uint *)(lVar7 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                      *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar6
                                                      ;
                                                      thunk_FUN_02bb0e9c();
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar7,uVar6,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x30) = lVar7;
                                                  thunk_FUN_02bb0e9c((long *)(lVar4 + 0x30),lVar7);
                                                  lVar7 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                            
                                                  Method_OVRSimpleJSON_JSONLazyCreator_Set<JSONNumber>__
                                                  );
                                                  FUN_037a5cd0(lVar7,*(undefined8 *)
                                                                                                                                            
                                                  Method_Newtonsoft_Json_Linq_JPropertyKeyedCollection_Contains__
                                                  );
                                                  lVar8 = thunk_FUN_02b79644(*unaff_x27);
                                                  FUN_04dbdb8c(lVar8,0);
                                                  if (lVar8 != 0) {
                                                    *(undefined8 *)(lVar8 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Newtonsoft_Json_JsonTextReader_ParseTrue__;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar8 + 0x10) = *unaff_x25;
                                                  thunk_FUN_02bb0e9c();
                                                  lVar9 = thunk_FUN_02b79644(*unaff_x26);
                                                  FUN_037a5cd0(lVar9,*unaff_x19);
                                                  if (lVar9 != 0) {
                                                    lVar10 = *(long *)(lVar9 + 0x10);
                                                    uVar6 = *(undefined8 *)
                                                                                                                          
                                                  Method_Newtonsoft_Json_Linq_JToken_op_Explicit__;
                                                  lVar11 = *unaff_x28;
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
                                                  *(long *)(lVar8 + 0x20) = lVar9;
                                                  thunk_FUN_02bb0e9c((long *)(lVar8 + 0x20),lVar9);
                                                  if (lVar7 != 0) {
                                                    lVar9 = *(long *)(lVar7 + 0x10);
                                                    lVar10 = *unaff_x29;
                                                    *(int *)(lVar7 + 0x1c) =
                                                         *(int *)(lVar7 + 0x1c) + 1;
                                                    if (lVar9 != 0) {
                                                      uVar1 = *(uint *)(lVar7 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                        *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                        plVar5 = (long *)(lVar9 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                        *plVar5 = lVar8;
                                                        thunk_FUN_02bb0e9c(plVar5,lVar8);
                                                      }
                                                      else {
                                                        FUN_037a6538(lVar7,lVar8,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar8 = thunk_FUN_02b79644(*unaff_x27);
                                                  FUN_04dbdb8c(lVar8,0);
                                                  if (lVar8 != 0) {
                                                    *(undefined8 *)(lVar8 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Newtonsoft_Json_JsonTextReader_ReadNumberCharIntoBuffer__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar8 + 0x10) = *unaff_x25;
                                                  thunk_FUN_02bb0e9c();
                                                  lVar9 = thunk_FUN_02b79644(*unaff_x26);
                                                  FUN_037a5cd0(lVar9,*unaff_x19);
                                                  if (lVar9 != 0) {
                                                    lVar10 = *(long *)(lVar9 + 0x10);
                                                    uVar6 = *(undefined8 *)
                                                                                                                          
                                                  Method_Newtonsoft_Json_Linq_JToken_Replace__;
                                                  lVar11 = *unaff_x28;
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
                                                  *(long *)(lVar8 + 0x20) = lVar9;
                                                  thunk_FUN_02bb0e9c((long *)(lVar8 + 0x20),lVar9);
                                                  lVar9 = *(long *)(lVar7 + 0x10);
                                                  lVar10 = *unaff_x29;
                                                  *(int *)(lVar7 + 0x1c) =
                                                       *(int *)(lVar7 + 0x1c) + 1;
                                                  puVar2 = 
                                                  Method_Newtonsoft_Json_Linq_JProperty_ClearItems__
                                                  ;
                                                  if (lVar9 != 0) {
                                                    uVar1 = *(uint *)(lVar7 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                      *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                      plVar5 = (long *)(lVar9 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar5 = lVar8;
                                                      thunk_FUN_02bb0e9c(plVar5,lVar8);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar7,lVar8,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x28) = lVar7;
                                                  thunk_FUN_02bb0e9c((long *)(lVar4 + 0x28),lVar7);
                                                  lVar7 = *(long *)(unaff_x20 + 0x10);
                                                  *(int *)(unaff_x20 + 0x1c) =
                                                       *(int *)(unaff_x20 + 0x1c) + 1;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *(uint *)(unaff_x20 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                                                      plVar5 = (long *)(lVar7 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar5 = lVar4;
                                                      thunk_FUN_02bb0e9c(plVar5,lVar4);
                                                    }
                                                    else {
                                                      FUN_037a6538();
                                                    }
                                                    lVar4 = thunk_FUN_02b79644(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_04dbdb8c(lVar4,0);
                                                    puVar2 = PTR_DAT_0631b1f0;
                                                    if (lVar4 != 0) {
                                                      *(undefined8 *)(lVar4 + 0x10) =
                                                           *(undefined8 *)
                                                                                                                        
                                                  Method_Oculus_Interaction_Interactable<HandGrabUseInteractor,_HandGrabUseInteractable>_SelectingInteractorAdded__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar4 + 0x20) =
                                                       *(undefined8 *)puVar2;
                                                  thunk_FUN_02bb0e9c((undefined8 *)(lVar4 + 0x20));
                                                  uVar6 = *unaff_x26;
                                                  *(undefined4 *)(lVar4 + 0x18) = 1;
                                                  lVar7 = thunk_FUN_02b79644(uVar6);
                                                  FUN_037a5cd0(lVar7,*unaff_x19);
                                                  if (lVar7 != 0) {
                                                    lVar8 = *(long *)(lVar7 + 0x10);
                                                    uVar6 = *(undefined8 *)puVar2;
                                                    lVar9 = *unaff_x28;
                                                    *(int *)(lVar7 + 0x1c) =
                                                         *(int *)(lVar7 + 0x1c) + 1;
                                                    if (lVar8 != 0) {
                                                      uVar1 = *(uint *)(lVar7 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                        *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                        *(undefined8 *)
                                                         (lVar8 + (long)(int)uVar1 * 8 + 0x20) =
                                                             uVar6;
                                                        thunk_FUN_02bb0e9c();
                                                      }
                                                      else {
                                                        FUN_037a6538(lVar7,uVar6,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x30) = lVar7;
                                                  thunk_FUN_02bb0e9c((long *)(lVar4 + 0x30),lVar7);
                                                  lVar7 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                            
                                                  Method_OVRSimpleJSON_JSONLazyCreator_Set<JSONNumber>__
                                                  );
                                                  FUN_037a5cd0(lVar7,*(undefined8 *)
                                                                                                                                            
                                                  Method_Newtonsoft_Json_Linq_JPropertyKeyedCollection_Contains__
                                                  );
                                                  lVar8 = thunk_FUN_02b79644(*unaff_x27);
                                                  FUN_04dbdb8c(lVar8,0);
                                                  puVar2 = 
                                                  Method_Newtonsoft_Json_JsonSerializer_set_SerializationBinder__
                                                  ;
                                                  if (lVar8 != 0) {
                                                    *(undefined8 *)(lVar8 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Newtonsoft_Json_JsonSerializer_set_SerializationBinder__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar8 + 0x10) = *unaff_x25;
                                                  thunk_FUN_02bb0e9c();
                                                  if (lVar7 != 0) {
                                                    lVar9 = *(long *)(lVar7 + 0x10);
                                                    lVar10 = *unaff_x29;
                                                    *(int *)(lVar7 + 0x1c) =
                                                         *(int *)(lVar7 + 0x1c) + 1;
                                                    if (lVar9 != 0) {
                                                      uVar1 = *(uint *)(lVar7 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                        *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                        plVar5 = (long *)(lVar9 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                        *plVar5 = lVar8;
                                                        thunk_FUN_02bb0e9c(plVar5,lVar8);
                                                      }
                                                      else {
                                                        FUN_037a6538(lVar7,lVar8,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x28) = lVar7;
                                                  thunk_FUN_02bb0e9c((long *)(lVar4 + 0x28),lVar7);
                                                  lVar7 = *(long *)(unaff_x20 + 0x10);
                                                  *(int *)(unaff_x20 + 0x1c) =
                                                       *(int *)(unaff_x20 + 0x1c) + 1;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *(uint *)(unaff_x20 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                                                      plVar5 = (long *)(lVar7 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar5 = lVar4;
                                                      thunk_FUN_02bb0e9c(plVar5,lVar4);
                                                    }
                                                    else {
                                                      FUN_037a6538();
                                                    }
                                                    lVar4 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                                
                                                  Method_Newtonsoft_Json_Linq_JProperty_ClearItems__
                                                  );
                                                  FUN_04dbdb8c(lVar4,0);
                                                  puVar3 = 
                                                  Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_AddReference__
                                                  ;
                                                  if (lVar4 != 0) {
                                                    *(undefined8 *)(lVar4 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Oculus_Interaction_Interactable<HandGrabUseInteractor,_HandGrabUseInteractable>_Awake__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar4 + 0x20) =
                                                       *(undefined8 *)puVar3;
                                                  thunk_FUN_02bb0e9c((undefined8 *)(lVar4 + 0x20));
                                                  uVar6 = *unaff_x26;
                                                  *(undefined4 *)(lVar4 + 0x18) = 0;
                                                  lVar7 = thunk_FUN_02b79644(uVar6);
                                                  FUN_037a5cd0(lVar7,*unaff_x19);
                                                  if (lVar7 != 0) {
                                                    lVar8 = *(long *)(lVar7 + 0x10);
                                                    uVar6 = *(undefined8 *)
                                                                                                                          
                                                  Method_System_Linq_Enumerable_Select<AndroidAxis,_string>__
                                                  ;
                                                  lVar9 = *unaff_x28;
                                                  *(int *)(lVar7 + 0x1c) =
                                                       *(int *)(lVar7 + 0x1c) + 1;
                                                  if (lVar8 != 0) {
                                                    uVar1 = *(uint *)(lVar7 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                      *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar6
                                                      ;
                                                      thunk_FUN_02bb0e9c();
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar7,uVar6,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x30) = lVar7;
                                                  thunk_FUN_02bb0e9c((long *)(lVar4 + 0x30),lVar7);
                                                  lVar7 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                            
                                                  Method_OVRSimpleJSON_JSONLazyCreator_Set<JSONNumber>__
                                                  );
                                                  FUN_037a5cd0(lVar7,*(undefined8 *)
                                                                                                                                            
                                                  Method_Newtonsoft_Json_Linq_JPropertyKeyedCollection_Contains__
                                                  );
                                                  lVar8 = thunk_FUN_02b79644(*unaff_x27);
                                                  FUN_04dbdb8c(lVar8,0);
                                                  if (lVar8 != 0) {
                                                    *(undefined8 *)(lVar8 + 0x18) =
                                                         *(undefined8 *)puVar2;
                                                    thunk_FUN_02bb0e9c();
                                                    *(undefined8 *)(lVar8 + 0x10) = *unaff_x25;
                                                    thunk_FUN_02bb0e9c();
                                                    if (lVar7 != 0) {
                                                      lVar9 = *(long *)(lVar7 + 0x10);
                                                      lVar10 = *unaff_x29;
                                                      *(int *)(lVar7 + 0x1c) =
                                                           *(int *)(lVar7 + 0x1c) + 1;
                                                      puVar2 = 
                                                  Method_Newtonsoft_Json_Linq_JProperty_ClearItems__
                                                  ;
                                                  if (lVar9 != 0) {
                                                    uVar1 = *(uint *)(lVar7 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                      *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                      plVar5 = (long *)(lVar9 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar5 = lVar8;
                                                      thunk_FUN_02bb0e9c(plVar5,lVar8);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar7,lVar8,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x28) = lVar7;
                                                  thunk_FUN_02bb0e9c((long *)(lVar4 + 0x28),lVar7);
                                                  lVar7 = *(long *)(unaff_x20 + 0x10);
                                                  *(int *)(unaff_x20 + 0x1c) =
                                                       *(int *)(unaff_x20 + 0x1c) + 1;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *(uint *)(unaff_x20 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                                                      plVar5 = (long *)(lVar7 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar5 = lVar4;
                                                      thunk_FUN_02bb0e9c(plVar5,lVar4);
                                                    }
                                                    else {
                                                      FUN_037a6538();
                                                    }
                                                    lVar4 = thunk_FUN_02b79644(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_04dbdb8c(lVar4,0);
                                                    puVar3 = 
                                                  Method_Newtonsoft_Json_Serialization_JsonTypeReflector_GetAttribute<DefaultValueAttribute>__
                                                  ;
                                                  if (lVar4 != 0) {
                                                    *(undefined8 *)(lVar4 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Oculus_Interaction_Interactable<SnapInteractor,_SnapInteractable>_InteractorRemoved__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar4 + 0x20) =
                                                       *(undefined8 *)puVar3;
                                                  thunk_FUN_02bb0e9c((undefined8 *)(lVar4 + 0x20));
                                                  uVar6 = *unaff_x26;
                                                  *(undefined4 *)(lVar4 + 0x18) = 0;
                                                  lVar7 = thunk_FUN_02b79644(uVar6);
                                                  FUN_037a5cd0(lVar7,*unaff_x19);
                                                  if (lVar7 != 0) {
                                                    lVar8 = *(long *)(lVar7 + 0x10);
                                                    uVar6 = *(undefined8 *)
                                                                                                                          
                                                  Method_Newtonsoft_Json_JsonTextReader_FinishReadQuotedNumber__
                                                  ;
                                                  lVar9 = *unaff_x28;
                                                  *(int *)(lVar7 + 0x1c) =
                                                       *(int *)(lVar7 + 0x1c) + 1;
                                                  if (lVar8 != 0) {
                                                    uVar1 = *(uint *)(lVar7 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                      *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar6
                                                      ;
                                                      thunk_FUN_02bb0e9c();
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar7,uVar6,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x30) = lVar7;
                                                  thunk_FUN_02bb0e9c((long *)(lVar4 + 0x30),lVar7);
                                                  lVar7 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                            
                                                  Method_OVRSimpleJSON_JSONLazyCreator_Set<JSONNumber>__
                                                  );
                                                  FUN_037a5cd0(lVar7,*(undefined8 *)
                                                                                                                                            
                                                  Method_Newtonsoft_Json_Linq_JPropertyKeyedCollection_Contains__
                                                  );
                                                  lVar8 = thunk_FUN_02b79644(*unaff_x27);
                                                  FUN_04dbdb8c(lVar8,0);
                                                  if (lVar8 != 0) {
                                                    *(undefined8 *)(lVar8 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Newtonsoft_Json_JsonTextReader_FinishReadQuotedStringValue__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar8 + 0x10) = *unaff_x25;
                                                  thunk_FUN_02bb0e9c();
                                                  if (lVar7 != 0) {
                                                    lVar9 = *(long *)(lVar7 + 0x10);
                                                    lVar10 = *unaff_x29;
                                                    *(int *)(lVar7 + 0x1c) =
                                                         *(int *)(lVar7 + 0x1c) + 1;
                                                    if (lVar9 != 0) {
                                                      uVar1 = *(uint *)(lVar7 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                        *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                        plVar5 = (long *)(lVar9 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                        *plVar5 = lVar8;
                                                        thunk_FUN_02bb0e9c(plVar5,lVar8);
                                                      }
                                                      else {
                                                        FUN_037a6538(lVar7,lVar8,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x28) = lVar7;
                                                  thunk_FUN_02bb0e9c((long *)(lVar4 + 0x28),lVar7);
                                                  lVar7 = *(long *)(unaff_x20 + 0x10);
                                                  *(int *)(unaff_x20 + 0x1c) =
                                                       *(int *)(unaff_x20 + 0x1c) + 1;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *(uint *)(unaff_x20 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                                                      plVar5 = (long *)(lVar7 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar5 = lVar4;
                                                      thunk_FUN_02bb0e9c(plVar5,lVar4);
                                                    }
                                                    else {
                                                      FUN_037a6538();
                                                    }
                                                    lVar4 = thunk_FUN_02b79644(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_04dbdb8c(lVar4,0);
                                                    puVar3 = 
                                                  Method_Newtonsoft_Json_JsonReader_set_MaxDepth__;
                                                  if (lVar4 != 0) {
                                                    *(undefined8 *)(lVar4 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Oculus_Interaction_Interactable<PokeInteractor,_PokeInteractable>_get_State__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar4 + 0x20) =
                                                       *(undefined8 *)puVar3;
                                                  thunk_FUN_02bb0e9c((undefined8 *)(lVar4 + 0x20));
                                                  uVar6 = *unaff_x26;
                                                  *(undefined4 *)(lVar4 + 0x18) = 0;
                                                  lVar7 = thunk_FUN_02b79644(uVar6);
                                                  FUN_037a5cd0(lVar7,*unaff_x19);
                                                  if (lVar7 != 0) {
                                                    lVar8 = *(long *)(lVar7 + 0x10);
                                                    uVar6 = *(undefined8 *)
                                                                                                                          
                                                  Method_System_Linq_Enumerable_Select<EnumMemberAttribute,_string>__
                                                  ;
                                                  lVar9 = *unaff_x28;
                                                  *(int *)(lVar7 + 0x1c) =
                                                       *(int *)(lVar7 + 0x1c) + 1;
                                                  if (lVar8 != 0) {
                                                    uVar1 = *(uint *)(lVar7 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                      *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar6
                                                      ;
                                                      thunk_FUN_02bb0e9c();
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar7,uVar6,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x30) = lVar7;
                                                  thunk_FUN_02bb0e9c((long *)(lVar4 + 0x30),lVar7);
                                                  lVar7 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                            
                                                  Method_OVRSimpleJSON_JSONLazyCreator_Set<JSONNumber>__
                                                  );
                                                  FUN_037a5cd0(lVar7,*(undefined8 *)
                                                                                                                                            
                                                  Method_Newtonsoft_Json_Linq_JPropertyKeyedCollection_Contains__
                                                  );
                                                  lVar8 = thunk_FUN_02b79644(*unaff_x27);
                                                  FUN_04dbdb8c(lVar8,0);
                                                  if (lVar8 != 0) {
                                                    *(undefined8 *)(lVar8 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Newtonsoft_Json_JsonSerializer_Deserialize<RegexOptions>__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar8 + 0x10) = *unaff_x25;
                                                  thunk_FUN_02bb0e9c();
                                                  if (lVar7 != 0) {
                                                    lVar9 = *(long *)(lVar7 + 0x10);
                                                    lVar10 = *unaff_x29;
                                                    *(int *)(lVar7 + 0x1c) =
                                                         *(int *)(lVar7 + 0x1c) + 1;
                                                    if (lVar9 != 0) {
                                                      uVar1 = *(uint *)(lVar7 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                        *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                        plVar5 = (long *)(lVar9 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                        *plVar5 = lVar8;
                                                        thunk_FUN_02bb0e9c(plVar5,lVar8);
                                                      }
                                                      else {
                                                        FUN_037a6538(lVar7,lVar8,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x28) = lVar7;
                                                  thunk_FUN_02bb0e9c((long *)(lVar4 + 0x28),lVar7);
                                                  lVar7 = *(long *)(unaff_x20 + 0x10);
                                                  *(int *)(unaff_x20 + 0x1c) =
                                                       *(int *)(unaff_x20 + 0x1c) + 1;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *(uint *)(unaff_x20 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                                                      plVar5 = (long *)(lVar7 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar5 = lVar4;
                                                      thunk_FUN_02bb0e9c(plVar5,lVar4);
                                                    }
                                                    else {
                                                      FUN_037a6538();
                                                    }
                                                    lVar4 = thunk_FUN_02b79644(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_04dbdb8c(lVar4,0);
                                                    puVar3 = 
                                                  Method_Newtonsoft_Json_JsonTextReader_ParseUndefined__
                                                  ;
                                                  if (lVar4 != 0) {
                                                    *(undefined8 *)(lVar4 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Oculus_Interaction_Interactable<PokeInteractor,_PokeInteractable>_get_Registry__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar4 + 0x20) =
                                                       *(undefined8 *)puVar3;
                                                  thunk_FUN_02bb0e9c((undefined8 *)(lVar4 + 0x20));
                                                  uVar6 = *unaff_x26;
                                                  *(undefined4 *)(lVar4 + 0x18) = 0;
                                                  lVar7 = thunk_FUN_02b79644(uVar6);
                                                  FUN_037a5cd0(lVar7,*unaff_x19);
                                                  if (lVar7 != 0) {
                                                    lVar8 = *(long *)(lVar7 + 0x10);
                                                    uVar6 = *(undefined8 *)
                                                                                                                          
                                                  Method_System_Linq_Enumerable_Select<FieldInfo,_Enum>__
                                                  ;
                                                  lVar9 = *unaff_x28;
                                                  *(int *)(lVar7 + 0x1c) =
                                                       *(int *)(lVar7 + 0x1c) + 1;
                                                  if (lVar8 != 0) {
                                                    uVar1 = *(uint *)(lVar7 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                      *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar6
                                                      ;
                                                      thunk_FUN_02bb0e9c();
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar7,uVar6,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x30) = lVar7;
                                                  thunk_FUN_02bb0e9c((long *)(lVar4 + 0x30),lVar7);
                                                  lVar7 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                            
                                                  Method_OVRSimpleJSON_JSONLazyCreator_Set<JSONNumber>__
                                                  );
                                                  FUN_037a5cd0(lVar7,*(undefined8 *)
                                                                                                                                            
                                                  Method_Newtonsoft_Json_Linq_JPropertyKeyedCollection_Contains__
                                                  );
                                                  lVar8 = thunk_FUN_02b79644(*unaff_x27);
                                                  FUN_04dbdb8c(lVar8,0);
                                                  if (lVar8 != 0) {
                                                    *(undefined8 *)(lVar8 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Newtonsoft_Json_JsonTextReader_MatchValue__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar8 + 0x10) = *unaff_x25;
                                                  thunk_FUN_02bb0e9c();
                                                  if (lVar7 != 0) {
                                                    lVar9 = *(long *)(lVar7 + 0x10);
                                                    lVar10 = *unaff_x29;
                                                    *(int *)(lVar7 + 0x1c) =
                                                         *(int *)(lVar7 + 0x1c) + 1;
                                                    if (lVar9 != 0) {
                                                      uVar1 = *(uint *)(lVar7 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                        *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                        plVar5 = (long *)(lVar9 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                        *plVar5 = lVar8;
                                                        thunk_FUN_02bb0e9c(plVar5,lVar8);
                                                      }
                                                      else {
                                                        FUN_037a6538(lVar7,lVar8,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x28) = lVar7;
                                                  thunk_FUN_02bb0e9c((long *)(lVar4 + 0x28),lVar7);
                                                  lVar7 = *(long *)(unaff_x20 + 0x10);
                                                  *(int *)(unaff_x20 + 0x1c) =
                                                       *(int *)(unaff_x20 + 0x1c) + 1;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *(uint *)(unaff_x20 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                                                      plVar5 = (long *)(lVar7 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar5 = lVar4;
                                                      thunk_FUN_02bb0e9c(plVar5,lVar4);
                                                    }
                                                    else {
                                                      FUN_037a6538();
                                                    }
                                                    lVar4 = thunk_FUN_02b79644(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_04dbdb8c(lVar4,0);
                                                    puVar3 = 
                                                  Method_Newtonsoft_Json_JsonTextReader_ParsePostValue__
                                                  ;
                                                  if (lVar4 != 0) {
                                                    *(undefined8 *)(lVar4 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Newtonsoft_Json_JsonTextReader_ParseValue__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar4 + 0x20) =
                                                       *(undefined8 *)puVar3;
                                                  thunk_FUN_02bb0e9c((undefined8 *)(lVar4 + 0x20));
                                                  uVar6 = *unaff_x26;
                                                  *(undefined4 *)(lVar4 + 0x18) = 0;
                                                  lVar7 = thunk_FUN_02b79644(uVar6);
                                                  FUN_037a5cd0(lVar7,*unaff_x19);
                                                  if (lVar7 != 0) {
                                                    lVar8 = *(long *)(lVar7 + 0x10);
                                                    uVar6 = *(undefined8 *)
                                                                                                                          
                                                  Method_Newtonsoft_Json_JsonTextReader__ctor__;
                                                  lVar9 = *unaff_x28;
                                                  *(int *)(lVar7 + 0x1c) =
                                                       *(int *)(lVar7 + 0x1c) + 1;
                                                  if (lVar8 != 0) {
                                                    uVar1 = *(uint *)(lVar7 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                      *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar6
                                                      ;
                                                      thunk_FUN_02bb0e9c();
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar7,uVar6,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x30) = lVar7;
                                                  thunk_FUN_02bb0e9c((long *)(lVar4 + 0x30),lVar7);
                                                  lVar7 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                            
                                                  Method_OVRSimpleJSON_JSONLazyCreator_Set<JSONNumber>__
                                                  );
                                                  FUN_037a5cd0(lVar7,*(undefined8 *)
                                                                                                                                            
                                                  Method_Newtonsoft_Json_Linq_JPropertyKeyedCollection_Contains__
                                                  );
                                                  lVar8 = thunk_FUN_02b79644(*unaff_x27);
                                                  FUN_04dbdb8c(lVar8,0);
                                                  if (lVar8 != 0) {
                                                    *(undefined8 *)(lVar8 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Newtonsoft_Json_JsonTextReader_ParseFalse__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar8 + 0x10) = *unaff_x25;
                                                  thunk_FUN_02bb0e9c();
                                                  if (lVar7 != 0) {
                                                    lVar9 = *(long *)(lVar7 + 0x10);
                                                    lVar10 = *unaff_x29;
                                                    *(int *)(lVar7 + 0x1c) =
                                                         *(int *)(lVar7 + 0x1c) + 1;
                                                    if (lVar9 != 0) {
                                                      uVar1 = *(uint *)(lVar7 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                        *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                        plVar5 = (long *)(lVar9 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                        *plVar5 = lVar8;
                                                        thunk_FUN_02bb0e9c(plVar5,lVar8);
                                                      }
                                                      else {
                                                        FUN_037a6538(lVar7,lVar8,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x28) = lVar7;
                                                  thunk_FUN_02bb0e9c((long *)(lVar4 + 0x28),lVar7);
                                                  lVar7 = *(long *)(unaff_x20 + 0x10);
                                                  *(int *)(unaff_x20 + 0x1c) =
                                                       *(int *)(unaff_x20 + 0x1c) + 1;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *(uint *)(unaff_x20 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                                                      plVar5 = (long *)(lVar7 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar5 = lVar4;
                                                      thunk_FUN_02bb0e9c(plVar5,lVar4);
                                                    }
                                                    else {
                                                      FUN_037a6538();
                                                    }
                                                    lVar4 = thunk_FUN_02b79644(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_04dbdb8c(lVar4,0);
                                                    puVar3 = 
                                                  Method_LitJson_JsonData_LitJson_IJsonWrapper_GetBoolean__
                                                  ;
                                                  if (lVar4 != 0) {
                                                    *(undefined8 *)(lVar4 + 0x10) =
                                                         *(undefined8 *)
                                                          Method_LitJson_JsonData__ctor__;
                                                    thunk_FUN_02bb0e9c();
                                                    *(undefined8 *)(lVar4 + 0x20) =
                                                         *(undefined8 *)puVar3;
                                                    thunk_FUN_02bb0e9c((undefined8 *)(lVar4 + 0x20))
                                                    ;
                                                    uVar6 = *unaff_x26;
                                                    *(undefined4 *)(lVar4 + 0x18) = 3;
                                                    lVar7 = thunk_FUN_02b79644(uVar6);
                                                    FUN_037a5cd0(lVar7,*unaff_x19);
                                                    if (lVar7 != 0) {
                                                      lVar8 = *(long *)(lVar7 + 0x10);
                                                      uVar6 = *(undefined8 *)
                                                                                                                              
                                                  Method_System_Globalization_JapaneseCalendar_ToFourDigitYear__
                                                  ;
                                                  lVar9 = *unaff_x28;
                                                  *(int *)(lVar7 + 0x1c) =
                                                       *(int *)(lVar7 + 0x1c) + 1;
                                                  if (lVar8 != 0) {
                                                    uVar1 = *(uint *)(lVar7 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                      *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar6
                                                      ;
                                                      thunk_FUN_02bb0e9c();
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar7,uVar6,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x30) = lVar7;
                                                  thunk_FUN_02bb0e9c((long *)(lVar4 + 0x30),lVar7);
                                                  lVar7 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                            
                                                  Method_OVRSimpleJSON_JSONLazyCreator_Set<JSONNumber>__
                                                  );
                                                  FUN_037a5cd0(lVar7,*(undefined8 *)
                                                                                                                                            
                                                  Method_Newtonsoft_Json_Linq_JPropertyKeyedCollection_Contains__
                                                  );
                                                  lVar8 = thunk_FUN_02b79644(*unaff_x27);
                                                  FUN_04dbdb8c(lVar8,0);
                                                  if (lVar8 != 0) {
                                                    *(undefined8 *)(lVar8 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_LitJson_JsonData_LitJson_IJsonWrapper_GetLong__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar8 + 0x10) = *unaff_x25;
                                                  thunk_FUN_02bb0e9c();
                                                  if (lVar7 != 0) {
                                                    lVar9 = *(long *)(lVar7 + 0x10);
                                                    lVar10 = *unaff_x29;
                                                    *(int *)(lVar7 + 0x1c) =
                                                         *(int *)(lVar7 + 0x1c) + 1;
                                                    if (lVar9 != 0) {
                                                      uVar1 = *(uint *)(lVar7 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                        *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                        plVar5 = (long *)(lVar9 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                        *plVar5 = lVar8;
                                                        thunk_FUN_02bb0e9c(plVar5,lVar8);
                                                      }
                                                      else {
                                                        FUN_037a6538(lVar7,lVar8,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x28) = lVar7;
                                                  thunk_FUN_02bb0e9c((long *)(lVar4 + 0x28),lVar7);
                                                  lVar7 = *(long *)(unaff_x20 + 0x10);
                                                  *(int *)(unaff_x20 + 0x1c) =
                                                       *(int *)(unaff_x20 + 0x1c) + 1;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *(uint *)(unaff_x20 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                                                      plVar5 = (long *)(lVar7 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar5 = lVar4;
                                                      thunk_FUN_02bb0e9c(plVar5,lVar4);
                                                    }
                                                    else {
                                                      FUN_037a6538();
                                                    }
                                                    lVar4 = thunk_FUN_02b79644(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_04dbdb8c(lVar4,0);
                                                    puVar3 = 
                                                  Method_Newtonsoft_Json_JsonConvert_DeserializeObject<Dictionary<string,_string>>__
                                                  ;
                                                  if (lVar4 != 0) {
                                                    *(undefined8 *)(lVar4 + 0x10) =
                                                         *(undefined8 *)PTR_DAT_06332138;
                                                    thunk_FUN_02bb0e9c();
                                                    *(undefined8 *)(lVar4 + 0x20) =
                                                         *(undefined8 *)puVar3;
                                                    thunk_FUN_02bb0e9c((undefined8 *)(lVar4 + 0x20))
                                                    ;
                                                    uVar6 = *unaff_x26;
                                                    *(undefined4 *)(lVar4 + 0x18) = 3;
                                                    lVar7 = thunk_FUN_02b79644(uVar6);
                                                    FUN_037a5cd0(lVar7,*unaff_x19);
                                                    if (lVar7 != 0) {
                                                      lVar8 = *(long *)(lVar7 + 0x10);
                                                      uVar6 = *(undefined8 *)
                                                                                                                              
                                                  Method_System_Collections_Generic_List<IntegratedSubsystemDescriptor>_GetEnumerator__
                                                  ;
                                                  lVar9 = *unaff_x28;
                                                  *(int *)(lVar7 + 0x1c) =
                                                       *(int *)(lVar7 + 0x1c) + 1;
                                                  if (lVar8 != 0) {
                                                    uVar1 = *(uint *)(lVar7 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                      *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar6
                                                      ;
                                                      thunk_FUN_02bb0e9c();
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar7,uVar6,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x30) = lVar7;
                                                  thunk_FUN_02bb0e9c((long *)(lVar4 + 0x30),lVar7);
                                                  lVar7 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                            
                                                  Method_OVRSimpleJSON_JSONLazyCreator_Set<JSONNumber>__
                                                  );
                                                  FUN_037a5cd0(lVar7,*(undefined8 *)
                                                                                                                                            
                                                  Method_Newtonsoft_Json_Linq_JPropertyKeyedCollection_Contains__
                                                  );
                                                  lVar8 = thunk_FUN_02b79644(*unaff_x27);
                                                  FUN_04dbdb8c(lVar8,0);
                                                  if (lVar8 != 0) {
                                                    *(undefined8 *)(lVar8 + 0x18) =
                                                         *(undefined8 *)
                                                          Method_LitJson_JsonData_EnsureDictionary__
                                                    ;
                                                    thunk_FUN_02bb0e9c();
                                                    *(undefined8 *)(lVar8 + 0x10) = *unaff_x25;
                                                    thunk_FUN_02bb0e9c();
                                                    if (lVar7 != 0) {
                                                      lVar9 = *(long *)(lVar7 + 0x10);
                                                      lVar10 = *unaff_x29;
                                                      *(int *)(lVar7 + 0x1c) =
                                                           *(int *)(lVar7 + 0x1c) + 1;
                                                      if (lVar9 != 0) {
                                                        uVar1 = *(uint *)(lVar7 + 0x18);
                                                        if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                          *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                          plVar5 = (long *)(lVar9 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                          *plVar5 = lVar8;
                                                          thunk_FUN_02bb0e9c(plVar5,lVar8);
                                                        }
                                                        else {
                                                          FUN_037a6538(lVar7,lVar8,
                                                                       *(undefined8 *)
                                                                        (*(long *)(*(long *)(lVar10 
                                                  + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x28) = lVar7;
                                                  thunk_FUN_02bb0e9c((long *)(lVar4 + 0x28),lVar7);
                                                  lVar7 = *(long *)(unaff_x20 + 0x10);
                                                  *(int *)(unaff_x20 + 0x1c) =
                                                       *(int *)(unaff_x20 + 0x1c) + 1;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *(uint *)(unaff_x20 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                                                      plVar5 = (long *)(lVar7 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar5 = lVar4;
                                                      thunk_FUN_02bb0e9c(plVar5,lVar4);
                                                    }
                                                    else {
                                                      FUN_037a6538();
                                                    }
                                                    lVar4 = thunk_FUN_02b79644(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_04dbdb8c(lVar4,0);
                                                    puVar3 = 
                                                  Method_Newtonsoft_Json_JsonSerializer_set_MetadataPropertyHandling__
                                                  ;
                                                  if (lVar4 != 0) {
                                                    *(undefined8 *)(lVar4 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Newtonsoft_Json_Serialization_JsonSerializerInternalBase_GetErrorContext__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar4 + 0x20) =
                                                       *(undefined8 *)puVar3;
                                                  thunk_FUN_02bb0e9c((undefined8 *)(lVar4 + 0x20));
                                                  uVar6 = *unaff_x26;
                                                  *(undefined4 *)(lVar4 + 0x18) = 4;
                                                  lVar7 = thunk_FUN_02b79644(uVar6);
                                                  FUN_037a5cd0(lVar7,*unaff_x19);
                                                  if (lVar7 != 0) {
                                                    lVar8 = *(long *)(lVar7 + 0x10);
                                                    uVar6 = *(undefined8 *)
                                                                                                                          
                                                  Method_UnityEngine_InputSystem_InputControlExtensions_CopyState__
                                                  ;
                                                  lVar9 = *unaff_x28;
                                                  *(int *)(lVar7 + 0x1c) =
                                                       *(int *)(lVar7 + 0x1c) + 1;
                                                  if (lVar8 != 0) {
                                                    uVar1 = *(uint *)(lVar7 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                      *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar6
                                                      ;
                                                      thunk_FUN_02bb0e9c();
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar7,uVar6,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x30) = lVar7;
                                                  thunk_FUN_02bb0e9c((long *)(lVar4 + 0x30),lVar7);
                                                  lVar7 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                            
                                                  Method_OVRSimpleJSON_JSONLazyCreator_Set<JSONNumber>__
                                                  );
                                                  FUN_037a5cd0(lVar7,*(undefined8 *)
                                                                                                                                            
                                                  Method_Newtonsoft_Json_Linq_JPropertyKeyedCollection_Contains__
                                                  );
                                                  lVar8 = thunk_FUN_02b79644(*unaff_x27);
                                                  FUN_04dbdb8c(lVar8,0);
                                                  if (lVar8 != 0) {
                                                    *(undefined8 *)(lVar8 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Newtonsoft_Json_JsonReader_set_FloatParseHandling__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar8 + 0x10) = *unaff_x25;
                                                  thunk_FUN_02bb0e9c();
                                                  if (lVar7 != 0) {
                                                    lVar9 = *(long *)(lVar7 + 0x10);
                                                    lVar10 = *unaff_x29;
                                                    *(int *)(lVar7 + 0x1c) =
                                                         *(int *)(lVar7 + 0x1c) + 1;
                                                    if (lVar9 != 0) {
                                                      uVar1 = *(uint *)(lVar7 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                        *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                        plVar5 = (long *)(lVar9 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                        *plVar5 = lVar8;
                                                        thunk_FUN_02bb0e9c(plVar5,lVar8);
                                                      }
                                                      else {
                                                        FUN_037a6538(lVar7,lVar8,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x28) = lVar7;
                                                  thunk_FUN_02bb0e9c((long *)(lVar4 + 0x28),lVar7);
                                                  lVar7 = *(long *)(unaff_x20 + 0x10);
                                                  *(int *)(unaff_x20 + 0x1c) =
                                                       *(int *)(unaff_x20 + 0x1c) + 1;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *(uint *)(unaff_x20 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                                                      plVar5 = (long *)(lVar7 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar5 = lVar4;
                                                      thunk_FUN_02bb0e9c(plVar5,lVar4);
                                                    }
                                                    else {
                                                      FUN_037a6538();
                                                    }
                                                    lVar4 = thunk_FUN_02b79644(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_04dbdb8c(lVar4,0);
                                                    puVar3 = 
                                                  Method_Newtonsoft_Json_JsonTextReader_ParseNull__;
                                                  if (lVar4 != 0) {
                                                    *(undefined8 *)(lVar4 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Newtonsoft_Json_Serialization_JsonSerializerInternalWriter_Serialize__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar4 + 0x20) =
                                                       *(undefined8 *)puVar3;
                                                  thunk_FUN_02bb0e9c((undefined8 *)(lVar4 + 0x20));
                                                  uVar6 = *unaff_x26;
                                                  *(undefined4 *)(lVar4 + 0x18) = 1;
                                                  lVar7 = thunk_FUN_02b79644(uVar6);
                                                  FUN_037a5cd0(lVar7,*unaff_x19);
                                                  if (lVar7 != 0) {
                                                    lVar8 = *(long *)(lVar7 + 0x10);
                                                    uVar6 = *(undefined8 *)
                                                                                                                          
                                                  Method_Newtonsoft_Json_JsonTextReader_ParseReadNumber__
                                                  ;
                                                  lVar9 = *unaff_x28;
                                                  *(int *)(lVar7 + 0x1c) =
                                                       *(int *)(lVar7 + 0x1c) + 1;
                                                  if (lVar8 != 0) {
                                                    uVar1 = *(uint *)(lVar7 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                      *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar6
                                                      ;
                                                      thunk_FUN_02bb0e9c();
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar7,uVar6,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x30) = lVar7;
                                                  thunk_FUN_02bb0e9c((long *)(lVar4 + 0x30),lVar7);
                                                  lVar7 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                            
                                                  Method_OVRSimpleJSON_JSONLazyCreator_Set<JSONNumber>__
                                                  );
                                                  FUN_037a5cd0(lVar7,*(undefined8 *)
                                                                                                                                            
                                                  Method_Newtonsoft_Json_Linq_JPropertyKeyedCollection_Contains__
                                                  );
                                                  lVar8 = thunk_FUN_02b79644(*unaff_x27);
                                                  FUN_04dbdb8c(lVar8,0);
                                                  if (lVar8 != 0) {
                                                    *(undefined8 *)(lVar8 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Newtonsoft_Json_JsonTextReader_ReadStringValue__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar8 + 0x10) = *unaff_x25;
                                                  thunk_FUN_02bb0e9c();
                                                  if (lVar7 != 0) {
                                                    lVar9 = *(long *)(lVar7 + 0x10);
                                                    lVar10 = *unaff_x29;
                                                    *(int *)(lVar7 + 0x1c) =
                                                         *(int *)(lVar7 + 0x1c) + 1;
                                                    if (lVar9 != 0) {
                                                      uVar1 = *(uint *)(lVar7 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                        *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                        plVar5 = (long *)(lVar9 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                        *plVar5 = lVar8;
                                                        thunk_FUN_02bb0e9c(plVar5,lVar8);
                                                      }
                                                      else {
                                                        FUN_037a6538(lVar7,lVar8,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x28) = lVar7;
                                                  thunk_FUN_02bb0e9c((long *)(lVar4 + 0x28),lVar7);
                                                  lVar7 = *(long *)(unaff_x20 + 0x10);
                                                  *(int *)(unaff_x20 + 0x1c) =
                                                       *(int *)(unaff_x20 + 0x1c) + 1;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *(uint *)(unaff_x20 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                                                      plVar5 = (long *)(lVar7 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar5 = lVar4;
                                                      thunk_FUN_02bb0e9c(plVar5,lVar4);
                                                    }
                                                    else {
                                                      FUN_037a6538();
                                                    }
                                                    lVar4 = thunk_FUN_02b79644(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_04dbdb8c(lVar4,0);
                                                    puVar3 = 
                                                  Method_Newtonsoft_Json_Serialization_JsonTypeReflector_GetAttribute<DataMemberAttribute>__
                                                  ;
                                                  if (lVar4 != 0) {
                                                    *(undefined8 *)(lVar4 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Newtonsoft_Json_JsonTextReader_ParseUnquotedProperty__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar4 + 0x20) =
                                                       *(undefined8 *)puVar3;
                                                  thunk_FUN_02bb0e9c((undefined8 *)(lVar4 + 0x20));
                                                  uVar6 = *unaff_x26;
                                                  *(undefined4 *)(lVar4 + 0x18) = 1;
                                                  lVar7 = thunk_FUN_02b79644(uVar6);
                                                  FUN_037a5cd0(lVar7,*unaff_x19);
                                                  if (lVar7 != 0) {
                                                    lVar8 = *(long *)(lVar7 + 0x10);
                                                    uVar6 = *(undefined8 *)
                                                                                                                          
                                                  Method_Newtonsoft_Json_JsonTextReader_ReadUnquotedPropertyReportIfDone__
                                                  ;
                                                  lVar9 = *unaff_x28;
                                                  *(int *)(lVar7 + 0x1c) =
                                                       *(int *)(lVar7 + 0x1c) + 1;
                                                  if (lVar8 != 0) {
                                                    uVar1 = *(uint *)(lVar7 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                      *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar6
                                                      ;
                                                      thunk_FUN_02bb0e9c();
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar7,uVar6,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x30) = lVar7;
                                                  thunk_FUN_02bb0e9c((long *)(lVar4 + 0x30),lVar7);
                                                  lVar7 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                            
                                                  Method_OVRSimpleJSON_JSONLazyCreator_Set<JSONNumber>__
                                                  );
                                                  FUN_037a5cd0(lVar7,*(undefined8 *)
                                                                                                                                            
                                                  Method_Newtonsoft_Json_Linq_JPropertyKeyedCollection_Contains__
                                                  );
                                                  lVar8 = thunk_FUN_02b79644(*unaff_x27);
                                                  FUN_04dbdb8c(lVar8,0);
                                                  if (lVar8 != 0) {
                                                    *(undefined8 *)(lVar8 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Newtonsoft_Json_JsonTextReader_ParseNumberNaN__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar8 + 0x10) = *unaff_x25;
                                                  thunk_FUN_02bb0e9c();
                                                  if (lVar7 != 0) {
                                                    lVar9 = *(long *)(lVar7 + 0x10);
                                                    lVar10 = *unaff_x29;
                                                    *(int *)(lVar7 + 0x1c) =
                                                         *(int *)(lVar7 + 0x1c) + 1;
                                                    if (lVar9 != 0) {
                                                      uVar1 = *(uint *)(lVar7 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                        *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                        plVar5 = (long *)(lVar9 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                        *plVar5 = lVar8;
                                                        thunk_FUN_02bb0e9c(plVar5,lVar8);
                                                      }
                                                      else {
                                                        FUN_037a6538(lVar7,lVar8,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x28) = lVar7;
                                                  thunk_FUN_02bb0e9c((long *)(lVar4 + 0x28),lVar7);
                                                  lVar7 = *(long *)(unaff_x20 + 0x10);
                                                  *(int *)(unaff_x20 + 0x1c) =
                                                       *(int *)(unaff_x20 + 0x1c) + 1;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *(uint *)(unaff_x20 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                                                      plVar5 = (long *)(lVar7 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar5 = lVar4;
                                                      thunk_FUN_02bb0e9c(plVar5,lVar4);
                                                    }
                                                    else {
                                                      FUN_037a6538();
                                                    }
                                                    lVar4 = thunk_FUN_02b79644(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_04dbdb8c(lVar4,0);
                                                    puVar3 = 
                                                  Method_Newtonsoft_Json_JsonTextReader_ParseConstructor__
                                                  ;
                                                  if (lVar4 != 0) {
                                                    *(undefined8 *)(lVar4 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Newtonsoft_Json_JsonTextWriter_WriteEnd__;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar4 + 0x20) =
                                                       *(undefined8 *)puVar3;
                                                  thunk_FUN_02bb0e9c((undefined8 *)(lVar4 + 0x20));
                                                  uVar6 = *unaff_x26;
                                                  *(undefined4 *)(lVar4 + 0x18) = 1;
                                                  lVar7 = thunk_FUN_02b79644(uVar6);
                                                  FUN_037a5cd0(lVar7,*unaff_x19);
                                                  if (lVar7 != 0) {
                                                    lVar8 = *(long *)(lVar7 + 0x10);
                                                    uVar6 = *(undefined8 *)
                                                                                                                          
                                                  Method_Newtonsoft_Json_JsonTextReader_ReadAsBytes__
                                                  ;
                                                  lVar9 = *unaff_x28;
                                                  *(int *)(lVar7 + 0x1c) =
                                                       *(int *)(lVar7 + 0x1c) + 1;
                                                  if (lVar8 != 0) {
                                                    uVar1 = *(uint *)(lVar7 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                      *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar6
                                                      ;
                                                      thunk_FUN_02bb0e9c();
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar7,uVar6,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x30) = lVar7;
                                                  thunk_FUN_02bb0e9c((long *)(lVar4 + 0x30),lVar7);
                                                  lVar7 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                            
                                                  Method_OVRSimpleJSON_JSONLazyCreator_Set<JSONNumber>__
                                                  );
                                                  FUN_037a5cd0(lVar7,*(undefined8 *)
                                                                                                                                            
                                                  Method_Newtonsoft_Json_Linq_JPropertyKeyedCollection_Contains__
                                                  );
                                                  lVar8 = thunk_FUN_02b79644(*unaff_x27);
                                                  FUN_04dbdb8c(lVar8,0);
                                                  if (lVar8 != 0) {
                                                    *(undefined8 *)(lVar8 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Newtonsoft_Json_JsonTextReader_ParseNumberPositiveInfinity__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar8 + 0x10) = *unaff_x25;
                                                  thunk_FUN_02bb0e9c();
                                                  if (lVar7 != 0) {
                                                    lVar9 = *(long *)(lVar7 + 0x10);
                                                    lVar10 = *unaff_x29;
                                                    *(int *)(lVar7 + 0x1c) =
                                                         *(int *)(lVar7 + 0x1c) + 1;
                                                    if (lVar9 != 0) {
                                                      uVar1 = *(uint *)(lVar7 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                        *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                        plVar5 = (long *)(lVar9 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                        *plVar5 = lVar8;
                                                        thunk_FUN_02bb0e9c(plVar5,lVar8);
                                                      }
                                                      else {
                                                        FUN_037a6538(lVar7,lVar8,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x28) = lVar7;
                                                  thunk_FUN_02bb0e9c((long *)(lVar4 + 0x28),lVar7);
                                                  lVar7 = *(long *)(unaff_x20 + 0x10);
                                                  *(int *)(unaff_x20 + 0x1c) =
                                                       *(int *)(unaff_x20 + 0x1c) + 1;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *(uint *)(unaff_x20 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                                                      plVar5 = (long *)(lVar7 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar5 = lVar4;
                                                      thunk_FUN_02bb0e9c(plVar5,lVar4);
                                                    }
                                                    else {
                                                      FUN_037a6538();
                                                    }
                                                    lVar4 = thunk_FUN_02b79644(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_04dbdb8c(lVar4,0);
                                                    puVar3 = 
                                                  Method_Newtonsoft_Json_JsonTextReader_HandleNull__
                                                  ;
                                                  if (lVar4 != 0) {
                                                    *(undefined8 *)(lVar4 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Newtonsoft_Json_JsonTextWriter__ctor__;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar4 + 0x20) =
                                                       *(undefined8 *)puVar3;
                                                  thunk_FUN_02bb0e9c((undefined8 *)(lVar4 + 0x20));
                                                  uVar6 = *unaff_x26;
                                                  *(undefined4 *)(lVar4 + 0x18) = 0;
                                                  lVar7 = thunk_FUN_02b79644(uVar6);
                                                  FUN_037a5cd0(lVar7,*unaff_x19);
                                                  if (lVar7 != 0) {
                                                    lVar8 = *(long *)(lVar7 + 0x10);
                                                    uVar6 = *(undefined8 *)
                                                                                                                          
                                                  Method_Newtonsoft_Json_Serialization_JsonSerializerInternalWriter_GetReference__
                                                  ;
                                                  lVar9 = *unaff_x28;
                                                  *(int *)(lVar7 + 0x1c) =
                                                       *(int *)(lVar7 + 0x1c) + 1;
                                                  if (lVar8 != 0) {
                                                    uVar1 = *(uint *)(lVar7 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                      *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar6
                                                      ;
                                                      thunk_FUN_02bb0e9c();
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar7,uVar6,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x30) = lVar7;
                                                  thunk_FUN_02bb0e9c((long *)(lVar4 + 0x30),lVar7);
                                                  lVar7 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                            
                                                  Method_OVRSimpleJSON_JSONLazyCreator_Set<JSONNumber>__
                                                  );
                                                  FUN_037a5cd0(lVar7,*(undefined8 *)
                                                                                                                                            
                                                  Method_Newtonsoft_Json_Linq_JPropertyKeyedCollection_Contains__
                                                  );
                                                  lVar8 = thunk_FUN_02b79644(*unaff_x27);
                                                  FUN_04dbdb8c(lVar8,0);
                                                  if (lVar8 != 0) {
                                                    *(undefined8 *)(lVar8 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Newtonsoft_Json_JsonTextReader_ConvertUnicode__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar8 + 0x10) = *unaff_x25;
                                                  thunk_FUN_02bb0e9c();
                                                  if (lVar7 != 0) {
                                                    lVar9 = *(long *)(lVar7 + 0x10);
                                                    lVar10 = *unaff_x29;
                                                    *(int *)(lVar7 + 0x1c) =
                                                         *(int *)(lVar7 + 0x1c) + 1;
                                                    if (lVar9 != 0) {
                                                      uVar1 = *(uint *)(lVar7 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                        *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                        plVar5 = (long *)(lVar9 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                        *plVar5 = lVar8;
                                                        thunk_FUN_02bb0e9c(plVar5,lVar8);
                                                      }
                                                      else {
                                                        FUN_037a6538(lVar7,lVar8,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x28) = lVar7;
                                                  thunk_FUN_02bb0e9c((long *)(lVar4 + 0x28),lVar7);
                                                  lVar7 = *(long *)(unaff_x20 + 0x10);
                                                  *(int *)(unaff_x20 + 0x1c) =
                                                       *(int *)(unaff_x20 + 0x1c) + 1;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *(uint *)(unaff_x20 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                                                      plVar5 = (long *)(lVar7 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar5 = lVar4;
                                                      thunk_FUN_02bb0e9c(plVar5,lVar4);
                                                    }
                                                    else {
                                                      FUN_037a6538();
                                                    }
                                                    lVar4 = thunk_FUN_02b79644(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_04dbdb8c(lVar4,0);
                                                    puVar2 = 
                                                  Method_Newtonsoft_Json_Serialization_JsonSerializerInternalWriter_SerializeISerializable__
                                                  ;
                                                  if (lVar4 != 0) {
                                                    *(undefined8 *)(lVar4 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Newtonsoft_Json_JsonTextReader_ReadFinished__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar4 + 0x20) =
                                                       *(undefined8 *)puVar2;
                                                  thunk_FUN_02bb0e9c((undefined8 *)(lVar4 + 0x20));
                                                  uVar6 = *unaff_x26;
                                                  *(undefined4 *)(lVar4 + 0x18) = 0;
                                                  lVar7 = thunk_FUN_02b79644(uVar6);
                                                  FUN_037a5cd0(lVar7,*unaff_x19);
                                                  if (lVar7 != 0) {
                                                    lVar8 = *(long *)(lVar7 + 0x10);
                                                    uVar6 = *(undefined8 *)
                                                                                                                          
                                                  Method_Newtonsoft_Json_JsonTextReader_ProcessValueComma__
                                                  ;
                                                  lVar9 = *unaff_x28;
                                                  *(int *)(lVar7 + 0x1c) =
                                                       *(int *)(lVar7 + 0x1c) + 1;
                                                  if (lVar8 != 0) {
                                                    uVar1 = *(uint *)(lVar7 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                      *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar6
                                                      ;
                                                      thunk_FUN_02bb0e9c();
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar7,uVar6,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x30) = lVar7;
                                                  thunk_FUN_02bb0e9c((long *)(lVar4 + 0x30),lVar7);
                                                  lVar7 = thunk_FUN_02b79644(*(undefined8 *)
                                                                                                                                                            
                                                  Method_OVRSimpleJSON_JSONLazyCreator_Set<JSONNumber>__
                                                  );
                                                  FUN_037a5cd0(lVar7,*(undefined8 *)
                                                                                                                                            
                                                  Method_Newtonsoft_Json_Linq_JPropertyKeyedCollection_Contains__
                                                  );
                                                  lVar8 = thunk_FUN_02b79644(*unaff_x27);
                                                  FUN_04dbdb8c(lVar8,0);
                                                  if (lVar8 != 0) {
                                                    *(undefined8 *)(lVar8 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Newtonsoft_Json_JsonTextReader_ParseProperty__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar8 + 0x10) = *unaff_x25;
                                                  thunk_FUN_02bb0e9c();
                                                  if (lVar7 != 0) {
                                                    lVar9 = *(long *)(lVar7 + 0x10);
                                                    lVar10 = *unaff_x29;
                                                    *(int *)(lVar7 + 0x1c) =
                                                         *(int *)(lVar7 + 0x1c) + 1;
                                                    if (lVar9 != 0) {
                                                      uVar1 = *(uint *)(lVar7 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                        *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                        plVar5 = (long *)(lVar9 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                        *plVar5 = lVar8;
                                                        thunk_FUN_02bb0e9c(plVar5,lVar8);
                                                      }
                                                      else {
                                                        FUN_037a6538(lVar7,lVar8,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x28) = lVar7;
                                                  thunk_FUN_02bb0e9c((long *)(lVar4 + 0x28),lVar7);
                                                  lVar7 = *(long *)(unaff_x20 + 0x10);
                                                  *(int *)(unaff_x20 + 0x1c) =
                                                       *(int *)(unaff_x20 + 0x1c) + 1;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *(uint *)(unaff_x20 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                                                      plVar5 = (long *)(lVar7 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar5 = lVar4;
                                                      thunk_FUN_02bb0e9c(plVar5,lVar4);
                                                    }
                                                    else {
                                                      FUN_037a6538();
                                                    }
                                                    *(long *)(in_stack_00000008 + 0x28) = unaff_x20;
                                                    uVar6 = thunk_FUN_02bb0e9c();
                                                    FUN_05b9ad1c(uVar6,in_stack_00000008);
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
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


