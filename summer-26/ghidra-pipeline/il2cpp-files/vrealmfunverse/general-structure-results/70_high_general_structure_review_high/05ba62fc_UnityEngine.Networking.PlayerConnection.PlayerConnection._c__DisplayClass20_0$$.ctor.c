/*
FUNCTION_NAME: UnityEngine.Networking.PlayerConnection.PlayerConnection.<>c__DisplayClass20_0$$.ctor
ENTRY_POINT: 05ba62fc
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 81
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_1;paired_field_refs_with_structure_only;telemetry_or_network_hits_15
*/


void UnityEngine_Networking_PlayerConnection_PlayerConnection_<>c__DisplayClass20_0___ctor
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
  int in_w10;
  undefined8 *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  long in_stack_00000008;
  
  *(int *)(unaff_x22 + 0x1c) = in_w10 + 1;
  if (param_1 != 0) {
    uVar1 = *(uint *)(unaff_x22 + 0x18);
    if (uVar1 < *(uint *)(param_1 + 0x18)) {
      *(uint *)(unaff_x22 + 0x18) = uVar1 + 1;
      *(undefined8 *)(param_1 + (long)(int)uVar1 * 8 + 0x20) = param_3;
      thunk_FUN_02bb0e9c();
    }
    else {
      FUN_037a6538();
    }
    *(long *)(unaff_x21 + 0x30) = unaff_x22;
    thunk_FUN_02bb0e9c();
    lVar3 = thunk_FUN_02b79644(*unaff_x25);
    FUN_037a5cd0(lVar3,*unaff_x29);
    lVar4 = thunk_FUN_02b79644(*unaff_x24);
    FUN_04dbdb8c(lVar4,0);
    if (lVar4 != 0) {
      *(undefined8 *)(lVar4 + 0x18) =
           *(undefined8 *)Method_Newtonsoft_Json_JsonReader_set_DateParseHandling__;
      thunk_FUN_02bb0e9c();
      *(undefined8 *)(lVar4 + 0x10) = *unaff_x28;
      thunk_FUN_02bb0e9c();
      if (lVar3 != 0) {
        lVar7 = *(long *)(lVar3 + 0x10);
        lVar8 = *(long *)Method_Newtonsoft_Json_Linq_JProperty_Load__;
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
          *(long *)(unaff_x21 + 0x28) = lVar3;
          thunk_FUN_02bb0e9c((long *)(unaff_x21 + 0x28),lVar3);
          lVar3 = *(long *)(unaff_x20 + 0x10);
          *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
          if (lVar3 != 0) {
            uVar1 = *(uint *)(unaff_x20 + 0x18);
            if (uVar1 < *(uint *)(lVar3 + 0x18)) {
              *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
              *(long *)(lVar3 + (long)(int)uVar1 * 8 + 0x20) = unaff_x21;
              thunk_FUN_02bb0e9c();
            }
            else {
              FUN_037a6538();
            }
            lVar3 = thunk_FUN_02b79644(*unaff_x26);
            FUN_04dbdb8c(lVar3,0);
            puVar2 = Method_Meta_XR_MRUtilityKit_DestructibleGlobalMeshSpawner_Shuffle<Vector3>__;
            if (lVar3 != 0) {
              *(undefined8 *)(lVar3 + 0x10) =
                   *(undefined8 *)Method_System_Collections_Generic_List<Controller>_GetEnumerator__
              ;
              thunk_FUN_02bb0e9c();
              *(undefined8 *)(lVar3 + 0x20) = *(undefined8 *)puVar2;
              thunk_FUN_02bb0e9c((undefined8 *)(lVar3 + 0x20));
              uVar6 = *unaff_x19;
              *(undefined4 *)(lVar3 + 0x18) = 0;
              lVar4 = thunk_FUN_02b79644(uVar6);
              FUN_037a5cd0(lVar4,*unaff_x27);
              puVar2 = PTR_DAT_063173b8;
              if (lVar4 != 0) {
                lVar7 = *(long *)(lVar4 + 0x10);
                uVar6 = *(undefined8 *)
                         Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_Populate__
                ;
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
                                  (*(long *)(*(long *)(*(long *)puVar2 + 0x20) + 0xc0) + 0x70));
                  }
                  *(long *)(lVar3 + 0x30) = lVar4;
                  thunk_FUN_02bb0e9c((long *)(lVar3 + 0x30),lVar4);
                  lVar4 = thunk_FUN_02b79644(*unaff_x25);
                  FUN_037a5cd0(lVar4,*unaff_x29);
                  lVar7 = thunk_FUN_02b79644(*unaff_x24);
                  FUN_04dbdb8c(lVar7,0);
                  if (lVar7 != 0) {
                    *(undefined8 *)(lVar7 + 0x18) =
                         *(undefined8 *)
                          Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_CreateNewDictionary__
                    ;
                    thunk_FUN_02bb0e9c();
                    *(undefined8 *)(lVar7 + 0x10) = *unaff_x28;
                    thunk_FUN_02bb0e9c();
                    if (lVar4 != 0) {
                      lVar8 = *(long *)(lVar4 + 0x10);
                      lVar9 = *(long *)Method_Newtonsoft_Json_Linq_JProperty_Load__;
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
                        lVar4 = *(long *)(unaff_x20 + 0x10);
                        *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
                        if (lVar4 != 0) {
                          uVar1 = *(uint *)(unaff_x20 + 0x18);
                          if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                            *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                            plVar5 = (long *)(lVar4 + (long)(int)uVar1 * 8 + 0x20);
                            *plVar5 = lVar3;
                            thunk_FUN_02bb0e9c(plVar5,lVar3);
                          }
                          else {
                            FUN_037a6538();
                          }
                          lVar3 = thunk_FUN_02b79644(*unaff_x26);
                          FUN_04dbdb8c(lVar3,0);
                          puVar2 = PTR_DAT_0631b1f0;
                          if (lVar3 != 0) {
                            *(undefined8 *)(lVar3 + 0x10) =
                                 *(undefined8 *)
                                  Method_Oculus_Interaction_Interactable<HandGrabUseInteractor,_HandGrabUseInteractable>_SelectingInteractorAdded__
                            ;
                            thunk_FUN_02bb0e9c();
                            *(undefined8 *)(lVar3 + 0x20) = *(undefined8 *)puVar2;
                            thunk_FUN_02bb0e9c((undefined8 *)(lVar3 + 0x20));
                            uVar6 = *unaff_x19;
                            *(undefined4 *)(lVar3 + 0x18) = 1;
                            lVar4 = thunk_FUN_02b79644(uVar6);
                            FUN_037a5cd0(lVar4,*unaff_x27);
                            if (lVar4 != 0) {
                              lVar7 = *(long *)(lVar4 + 0x10);
                              uVar6 = *(undefined8 *)puVar2;
                              lVar8 = *(long *)PTR_DAT_063173b8;
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
                                lVar4 = thunk_FUN_02b79644(*unaff_x25);
                                FUN_037a5cd0(lVar4,*unaff_x29);
                                lVar7 = thunk_FUN_02b79644(*unaff_x24);
                                FUN_04dbdb8c(lVar7,0);
                                if (lVar7 != 0) {
                                  *(undefined8 *)(lVar7 + 0x18) =
                                       *(undefined8 *)
                                        Method_Newtonsoft_Json_JsonSerializer_set_SerializationBinder__
                                  ;
                                  thunk_FUN_02bb0e9c();
                                  *(undefined8 *)(lVar7 + 0x10) = *unaff_x28;
                                  thunk_FUN_02bb0e9c();
                                  if (lVar4 != 0) {
                                    lVar8 = *(long *)(lVar4 + 0x10);
                                    lVar9 = *(long *)Method_Newtonsoft_Json_Linq_JProperty_Load__;
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
                                      lVar4 = *(long *)(unaff_x20 + 0x10);
                                      *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
                                      if (lVar4 != 0) {
                                        uVar1 = *(uint *)(unaff_x20 + 0x18);
                                        if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                                          *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                                          plVar5 = (long *)(lVar4 + (long)(int)uVar1 * 8 + 0x20);
                                          *plVar5 = lVar3;
                                          thunk_FUN_02bb0e9c(plVar5,lVar3);
                                        }
                                        else {
                                          FUN_037a6538();
                                        }
                                        lVar3 = thunk_FUN_02b79644(*unaff_x26);
                                        FUN_04dbdb8c(lVar3,0);
                                        puVar2 = 
                                        Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_AddReference__
                                        ;
                                        if (lVar3 != 0) {
                                          *(undefined8 *)(lVar3 + 0x10) =
                                               *(undefined8 *)
                                                Method_Oculus_Interaction_Interactable<HandGrabUseInteractor,_HandGrabUseInteractable>_Awake__
                                          ;
                                          thunk_FUN_02bb0e9c();
                                          *(undefined8 *)(lVar3 + 0x20) = *(undefined8 *)puVar2;
                                          thunk_FUN_02bb0e9c((undefined8 *)(lVar3 + 0x20));
                                          uVar6 = *unaff_x19;
                                          *(undefined4 *)(lVar3 + 0x18) = 0;
                                          lVar4 = thunk_FUN_02b79644(uVar6);
                                          FUN_037a5cd0(lVar4,*unaff_x27);
                                          puVar2 = PTR_DAT_063173b8;
                                          if (lVar4 != 0) {
                                            lVar7 = *(long *)(lVar4 + 0x10);
                                            uVar6 = *(undefined8 *)
                                                                                                          
                                                  Method_System_Linq_Enumerable_Select<AndroidAxis,_string>__
                                            ;
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
                                                              (*(long *)(*(long *)(*(long *)puVar2 +
                                                                                  0x20) + 0xc0) +
                                                              0x70));
                                              }
                                              *(long *)(lVar3 + 0x30) = lVar4;
                                              thunk_FUN_02bb0e9c((long *)(lVar3 + 0x30),lVar4);
                                              lVar4 = thunk_FUN_02b79644(*unaff_x25);
                                              FUN_037a5cd0(lVar4,*unaff_x29);
                                              lVar7 = thunk_FUN_02b79644(*unaff_x24);
                                              FUN_04dbdb8c(lVar7,0);
                                              if (lVar7 != 0) {
                                                *(undefined8 *)(lVar7 + 0x18) =
                                                     *(undefined8 *)
                                                                                                            
                                                  Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_GetExpectedDescription__
                                                ;
                                                thunk_FUN_02bb0e9c();
                                                *(undefined8 *)(lVar7 + 0x10) = *unaff_x28;
                                                thunk_FUN_02bb0e9c();
                                                if (lVar4 != 0) {
                                                  lVar8 = *(long *)(lVar4 + 0x10);
                                                  lVar9 = *(long *)
                                                  Method_Newtonsoft_Json_Linq_JProperty_Load__;
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
                                                  lVar4 = *(long *)(unaff_x20 + 0x10);
                                                  *(int *)(unaff_x20 + 0x1c) =
                                                       *(int *)(unaff_x20 + 0x1c) + 1;
                                                  if (lVar4 != 0) {
                                                    uVar1 = *(uint *)(unaff_x20 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                                                      *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                                                      plVar5 = (long *)(lVar4 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar5 = lVar3;
                                                      thunk_FUN_02bb0e9c(plVar5,lVar3);
                                                    }
                                                    else {
                                                      FUN_037a6538();
                                                    }
                                                    lVar3 = thunk_FUN_02b79644(*unaff_x26);
                                                    FUN_04dbdb8c(lVar3,0);
                                                    puVar2 = 
                                                  Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_EnsureType__
                                                  ;
                                                  if (lVar3 != 0) {
                                                    *(undefined8 *)(lVar3 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Oculus_Interaction_Interactable<LocomotionAxisTurnerInteractor,_LocomotionAxisTurnerInteractable>__ctor__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar3 + 0x20) =
                                                       *(undefined8 *)puVar2;
                                                  thunk_FUN_02bb0e9c((undefined8 *)(lVar3 + 0x20));
                                                  uVar6 = *unaff_x19;
                                                  *(undefined4 *)(lVar3 + 0x18) = 2;
                                                  lVar4 = thunk_FUN_02b79644(uVar6);
                                                  FUN_037a5cd0(lVar4,*unaff_x27);
                                                  puVar2 = PTR_DAT_063173b8;
                                                  if (lVar4 != 0) {
                                                    lVar7 = *(long *)(lVar4 + 0x10);
                                                    uVar6 = *(undefined8 *)
                                                                                                                          
                                                  Method_System_Linq_Enumerable_Select<KeyValuePair<string,_JsonParser_JsonValue>,_string>__
                                                  ;
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
                                                                    (*(long *)(*(long *)(*(long *)
                                                  puVar2 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar3 + 0x30) = lVar4;
                                                  thunk_FUN_02bb0e9c((long *)(lVar3 + 0x30),lVar4);
                                                  lVar4 = thunk_FUN_02b79644(*unaff_x25);
                                                  FUN_037a5cd0(lVar4,*unaff_x29);
                                                  lVar7 = thunk_FUN_02b79644(*unaff_x24);
                                                  FUN_04dbdb8c(lVar7,0);
                                                  if (lVar7 != 0) {
                                                    *(undefined8 *)(lVar7 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_CreateNewObject__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar7 + 0x10) = *unaff_x28;
                                                  thunk_FUN_02bb0e9c();
                                                  if (lVar4 != 0) {
                                                    lVar8 = *(long *)(lVar4 + 0x10);
                                                    lVar9 = *(long *)
                                                  Method_Newtonsoft_Json_Linq_JProperty_Load__;
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
                                                  lVar4 = *(long *)(unaff_x20 + 0x10);
                                                  *(int *)(unaff_x20 + 0x1c) =
                                                       *(int *)(unaff_x20 + 0x1c) + 1;
                                                  if (lVar4 != 0) {
                                                    uVar1 = *(uint *)(unaff_x20 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                                                      *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                                                      plVar5 = (long *)(lVar4 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar5 = lVar3;
                                                      thunk_FUN_02bb0e9c(plVar5,lVar3);
                                                    }
                                                    else {
                                                      FUN_037a6538();
                                                    }
                                                    lVar3 = thunk_FUN_02b79644(*unaff_x26);
                                                    FUN_04dbdb8c(lVar3,0);
                                                    puVar2 = 
                                                  Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_CreateNewList__
                                                  ;
                                                  if (lVar3 != 0) {
                                                    *(undefined8 *)(lVar3 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Oculus_Interaction_Interactable<HandGrabUseInteractor,_HandGrabUseInteractable>_get_Registry__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar3 + 0x20) =
                                                       *(undefined8 *)puVar2;
                                                  thunk_FUN_02bb0e9c((undefined8 *)(lVar3 + 0x20));
                                                  uVar6 = *unaff_x19;
                                                  *(undefined4 *)(lVar3 + 0x18) = 0;
                                                  lVar4 = thunk_FUN_02b79644(uVar6);
                                                  FUN_037a5cd0(lVar4,*unaff_x27);
                                                  puVar2 = PTR_DAT_063173b8;
                                                  if (lVar4 != 0) {
                                                    lVar7 = *(long *)(lVar4 + 0x10);
                                                    uVar6 = *(undefined8 *)
                                                                                                                          
                                                  Method_System_Linq_Enumerable_Select<FieldInfo,_Enum>__
                                                  ;
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
                                                                    (*(long *)(*(long *)(*(long *)
                                                  puVar2 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar3 + 0x30) = lVar4;
                                                  thunk_FUN_02bb0e9c((long *)(lVar3 + 0x30),lVar4);
                                                  lVar4 = thunk_FUN_02b79644(*unaff_x25);
                                                  FUN_037a5cd0(lVar4,*unaff_x29);
                                                  lVar7 = thunk_FUN_02b79644(*unaff_x24);
                                                  FUN_04dbdb8c(lVar7,0);
                                                  if (lVar7 != 0) {
                                                    *(undefined8 *)(lVar7 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_PopulateDictionary__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar7 + 0x10) = *unaff_x28;
                                                  thunk_FUN_02bb0e9c();
                                                  if (lVar4 != 0) {
                                                    lVar8 = *(long *)(lVar4 + 0x10);
                                                    lVar9 = *(long *)
                                                  Method_Newtonsoft_Json_Linq_JProperty_Load__;
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
                                                  lVar4 = *(long *)(unaff_x20 + 0x10);
                                                  *(int *)(unaff_x20 + 0x1c) =
                                                       *(int *)(unaff_x20 + 0x1c) + 1;
                                                  if (lVar4 != 0) {
                                                    uVar1 = *(uint *)(unaff_x20 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                                                      *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                                                      plVar5 = (long *)(lVar4 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar5 = lVar3;
                                                      thunk_FUN_02bb0e9c(plVar5,lVar3);
                                                    }
                                                    else {
                                                      FUN_037a6538();
                                                    }
                                                    lVar3 = thunk_FUN_02b79644(*unaff_x26);
                                                    FUN_04dbdb8c(lVar3,0);
                                                    puVar2 = 
                                                  Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_CreateList__
                                                  ;
                                                  if (lVar3 != 0) {
                                                    *(undefined8 *)(lVar3 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_EnsureArrayContract__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar3 + 0x20) =
                                                       *(undefined8 *)puVar2;
                                                  thunk_FUN_02bb0e9c((undefined8 *)(lVar3 + 0x20));
                                                  uVar6 = *unaff_x19;
                                                  *(undefined4 *)(lVar3 + 0x18) = 0;
                                                  lVar4 = thunk_FUN_02b79644(uVar6);
                                                  FUN_037a5cd0(lVar4,*unaff_x27);
                                                  puVar2 = PTR_DAT_063173b8;
                                                  if (lVar4 != 0) {
                                                    lVar7 = *(long *)(lVar4 + 0x10);
                                                    uVar6 = *(undefined8 *)
                                                                                                                          
                                                  Method_System_Linq_Enumerable_Select<EnumMemberAttribute,_string>__
                                                  ;
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
                                                                    (*(long *)(*(long *)(*(long *)
                                                  puVar2 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar3 + 0x30) = lVar4;
                                                  thunk_FUN_02bb0e9c((long *)(lVar3 + 0x30),lVar4);
                                                  lVar4 = thunk_FUN_02b79644(*unaff_x25);
                                                  FUN_037a5cd0(lVar4,*unaff_x29);
                                                  lVar7 = thunk_FUN_02b79644(*unaff_x24);
                                                  FUN_04dbdb8c(lVar7,0);
                                                  if (lVar7 != 0) {
                                                    *(undefined8 *)(lVar7 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_CreateObject__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar7 + 0x10) = *unaff_x28;
                                                  thunk_FUN_02bb0e9c();
                                                  if (lVar4 != 0) {
                                                    lVar8 = *(long *)(lVar4 + 0x10);
                                                    lVar9 = *(long *)
                                                  Method_Newtonsoft_Json_Linq_JProperty_Load__;
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
                                                  lVar4 = *(long *)(unaff_x20 + 0x10);
                                                  *(int *)(unaff_x20 + 0x1c) =
                                                       *(int *)(unaff_x20 + 0x1c) + 1;
                                                  if (lVar4 != 0) {
                                                    uVar1 = *(uint *)(unaff_x20 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                                                      *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                                                      plVar5 = (long *)(lVar4 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar5 = lVar3;
                                                      thunk_FUN_02bb0e9c(plVar5,lVar3);
                                                    }
                                                    else {
                                                      FUN_037a6538();
                                                    }
                                                    lVar3 = thunk_FUN_02b79644(*unaff_x26);
                                                    FUN_04dbdb8c(lVar3,0);
                                                    puVar2 = 
                                                  Method_LitJson_JsonData_LitJson_IJsonWrapper_GetBoolean__
                                                  ;
                                                  if (lVar3 != 0) {
                                                    *(undefined8 *)(lVar3 + 0x10) =
                                                         *(undefined8 *)
                                                          Method_LitJson_JsonData__ctor__;
                                                    thunk_FUN_02bb0e9c();
                                                    *(undefined8 *)(lVar3 + 0x20) =
                                                         *(undefined8 *)puVar2;
                                                    thunk_FUN_02bb0e9c((undefined8 *)(lVar3 + 0x20))
                                                    ;
                                                    uVar6 = *unaff_x19;
                                                    *(undefined4 *)(lVar3 + 0x18) = 3;
                                                    lVar4 = thunk_FUN_02b79644(uVar6);
                                                    FUN_037a5cd0(lVar4,*unaff_x27);
                                                    puVar2 = PTR_DAT_063173b8;
                                                    if (lVar4 != 0) {
                                                      lVar7 = *(long *)(lVar4 + 0x10);
                                                      uVar6 = *(undefined8 *)
                                                                                                                              
                                                  Method_System_Globalization_JapaneseCalendar_ToFourDigitYear__
                                                  ;
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
                                                                    (*(long *)(*(long *)(*(long *)
                                                  puVar2 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar3 + 0x30) = lVar4;
                                                  thunk_FUN_02bb0e9c((long *)(lVar3 + 0x30),lVar4);
                                                  lVar4 = thunk_FUN_02b79644(*unaff_x25);
                                                  FUN_037a5cd0(lVar4,*unaff_x29);
                                                  lVar7 = thunk_FUN_02b79644(*unaff_x24);
                                                  FUN_04dbdb8c(lVar7,0);
                                                  if (lVar7 != 0) {
                                                    *(undefined8 *)(lVar7 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_LitJson_JsonData_LitJson_IJsonWrapper_GetLong__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar7 + 0x10) = *unaff_x28;
                                                  thunk_FUN_02bb0e9c();
                                                  if (lVar4 != 0) {
                                                    lVar8 = *(long *)(lVar4 + 0x10);
                                                    lVar9 = *(long *)
                                                  Method_Newtonsoft_Json_Linq_JProperty_Load__;
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
                                                  lVar4 = *(long *)(unaff_x20 + 0x10);
                                                  *(int *)(unaff_x20 + 0x1c) =
                                                       *(int *)(unaff_x20 + 0x1c) + 1;
                                                  if (lVar4 != 0) {
                                                    uVar1 = *(uint *)(unaff_x20 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                                                      *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                                                      plVar5 = (long *)(lVar4 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar5 = lVar3;
                                                      thunk_FUN_02bb0e9c(plVar5,lVar3);
                                                    }
                                                    else {
                                                      FUN_037a6538();
                                                    }
                                                    lVar3 = thunk_FUN_02b79644(*unaff_x26);
                                                    FUN_04dbdb8c(lVar3,0);
                                                    puVar2 = 
                                                  Method_Newtonsoft_Json_JsonConvert_DeserializeObject<Dictionary<string,_string>>__
                                                  ;
                                                  if (lVar3 != 0) {
                                                    *(undefined8 *)(lVar3 + 0x10) =
                                                         *(undefined8 *)PTR_DAT_06332138;
                                                    thunk_FUN_02bb0e9c();
                                                    *(undefined8 *)(lVar3 + 0x20) =
                                                         *(undefined8 *)puVar2;
                                                    thunk_FUN_02bb0e9c((undefined8 *)(lVar3 + 0x20))
                                                    ;
                                                    uVar6 = *unaff_x19;
                                                    *(undefined4 *)(lVar3 + 0x18) = 3;
                                                    lVar4 = thunk_FUN_02b79644(uVar6);
                                                    FUN_037a5cd0(lVar4,*unaff_x27);
                                                    puVar2 = PTR_DAT_063173b8;
                                                    if (lVar4 != 0) {
                                                      lVar7 = *(long *)(lVar4 + 0x10);
                                                      uVar6 = *(undefined8 *)
                                                                                                                              
                                                  Method_System_Collections_Generic_List<IntegratedSubsystemDescriptor>_GetEnumerator__
                                                  ;
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
                                                                    (*(long *)(*(long *)(*(long *)
                                                  puVar2 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar3 + 0x30) = lVar4;
                                                  thunk_FUN_02bb0e9c((long *)(lVar3 + 0x30),lVar4);
                                                  lVar4 = thunk_FUN_02b79644(*unaff_x25);
                                                  FUN_037a5cd0(lVar4,*unaff_x29);
                                                  lVar7 = thunk_FUN_02b79644(*unaff_x24);
                                                  FUN_04dbdb8c(lVar7,0);
                                                  if (lVar7 != 0) {
                                                    *(undefined8 *)(lVar7 + 0x18) =
                                                         *(undefined8 *)
                                                          Method_LitJson_JsonData_EnsureDictionary__
                                                    ;
                                                    thunk_FUN_02bb0e9c();
                                                    *(undefined8 *)(lVar7 + 0x10) = *unaff_x28;
                                                    thunk_FUN_02bb0e9c();
                                                    if (lVar4 != 0) {
                                                      lVar8 = *(long *)(lVar4 + 0x10);
                                                      lVar9 = *(long *)
                                                  Method_Newtonsoft_Json_Linq_JProperty_Load__;
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
                                                  lVar4 = *(long *)(unaff_x20 + 0x10);
                                                  *(int *)(unaff_x20 + 0x1c) =
                                                       *(int *)(unaff_x20 + 0x1c) + 1;
                                                  if (lVar4 != 0) {
                                                    uVar1 = *(uint *)(unaff_x20 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                                                      *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                                                      plVar5 = (long *)(lVar4 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar5 = lVar3;
                                                      thunk_FUN_02bb0e9c(plVar5,lVar3);
                                                    }
                                                    else {
                                                      FUN_037a6538();
                                                    }
                                                    lVar3 = thunk_FUN_02b79644(*unaff_x26);
                                                    FUN_04dbdb8c(lVar3,0);
                                                    puVar2 = 
                                                  Method_Newtonsoft_Json_JsonSerializer_set_MetadataPropertyHandling__
                                                  ;
                                                  if (lVar3 != 0) {
                                                    *(undefined8 *)(lVar3 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Newtonsoft_Json_Serialization_JsonSerializerInternalBase_GetErrorContext__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar3 + 0x20) =
                                                       *(undefined8 *)puVar2;
                                                  thunk_FUN_02bb0e9c((undefined8 *)(lVar3 + 0x20));
                                                  uVar6 = *unaff_x19;
                                                  *(undefined4 *)(lVar3 + 0x18) = 4;
                                                  lVar4 = thunk_FUN_02b79644(uVar6);
                                                  FUN_037a5cd0(lVar4,*unaff_x27);
                                                  puVar2 = PTR_DAT_063173b8;
                                                  if (lVar4 != 0) {
                                                    lVar7 = *(long *)(lVar4 + 0x10);
                                                    uVar6 = *(undefined8 *)
                                                                                                                          
                                                  Method_UnityEngine_InputSystem_InputControlExtensions_CopyState__
                                                  ;
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
                                                                    (*(long *)(*(long *)(*(long *)
                                                  puVar2 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar3 + 0x30) = lVar4;
                                                  thunk_FUN_02bb0e9c((long *)(lVar3 + 0x30),lVar4);
                                                  lVar4 = thunk_FUN_02b79644(*unaff_x25);
                                                  FUN_037a5cd0(lVar4,*unaff_x29);
                                                  lVar7 = thunk_FUN_02b79644(*unaff_x24);
                                                  FUN_04dbdb8c(lVar7,0);
                                                  if (lVar7 != 0) {
                                                    *(undefined8 *)(lVar7 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Newtonsoft_Json_JsonReader_set_FloatParseHandling__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar7 + 0x10) = *unaff_x28;
                                                  thunk_FUN_02bb0e9c();
                                                  if (lVar4 != 0) {
                                                    lVar8 = *(long *)(lVar4 + 0x10);
                                                    lVar9 = *(long *)
                                                  Method_Newtonsoft_Json_Linq_JProperty_Load__;
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
                                                  lVar4 = *(long *)(unaff_x20 + 0x10);
                                                  *(int *)(unaff_x20 + 0x1c) =
                                                       *(int *)(unaff_x20 + 0x1c) + 1;
                                                  if (lVar4 != 0) {
                                                    uVar1 = *(uint *)(unaff_x20 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                                                      *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                                                      plVar5 = (long *)(lVar4 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar5 = lVar3;
                                                      thunk_FUN_02bb0e9c(plVar5,lVar3);
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
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


