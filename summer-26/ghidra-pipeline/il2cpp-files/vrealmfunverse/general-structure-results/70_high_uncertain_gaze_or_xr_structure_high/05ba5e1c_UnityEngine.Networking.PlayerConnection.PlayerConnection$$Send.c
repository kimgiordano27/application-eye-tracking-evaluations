/*
FUNCTION_NAME: UnityEngine.Networking.PlayerConnection.PlayerConnection$$Send
ENTRY_POINT: 05ba5e1c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 89
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;telemetry;structure_combo;keyword_support
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_1;paired_field_refs_with_structure_only;telemetry_or_network_hits_18;source_validity_pose_sink_structure;eye_or_gaze_keyword_boost_only;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void UnityEngine_Networking_PlayerConnection_PlayerConnection__Send(void)

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
  long unaff_x20;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  long unaff_x28;
  
  lVar8 = thunk_FUN_02b79644();
  FUN_04dbdb8c(lVar8,0);
  puVar6 = PTR_DAT_0631b1e8;
  puVar5 = PTR_DAT_063145b8;
  puVar2 = PTR_DAT_063145b0;
  if (lVar8 != 0) {
    *(undefined8 *)(lVar8 + 0x10) =
         *(undefined8 *)
          Method_Oculus_Interaction_Interactable<HandGrabInteractor,_HandGrabInteractable>_remove_WhenStateChanged__
    ;
    thunk_FUN_02bb0e9c();
    *(undefined8 *)(lVar8 + 0x20) = *(undefined8 *)puVar6;
    thunk_FUN_02bb0e9c((undefined8 *)(lVar8 + 0x20));
    uVar9 = *(undefined8 *)puVar2;
    *(undefined4 *)(lVar8 + 0x18) = 1;
    lVar10 = thunk_FUN_02b79644(uVar9);
    FUN_037a5cd0(lVar10,*(undefined8 *)puVar5);
    if (lVar10 != 0) {
      lVar12 = *(long *)(lVar10 + 0x10);
      uVar9 = *(undefined8 *)puVar6;
      lVar13 = *(long *)PTR_DAT_063173b8;
      *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
      puVar7 = Method_OVRSimpleJSON_JSONLazyCreator_Set<JSONNumber>__;
      puVar6 = Method_Newtonsoft_Json_Linq_JPropertyKeyedCollection_Contains__;
      puVar2 = Method_Newtonsoft_Json_Linq_JObject_ValidateToken__;
      if (lVar12 != 0) {
        uVar1 = *(uint *)(lVar10 + 0x18);
        if (uVar1 < *(uint *)(lVar12 + 0x18)) {
          *(uint *)(lVar10 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar12 + (long)(int)uVar1 * 8 + 0x20) = uVar9;
          thunk_FUN_02bb0e9c();
        }
        else {
          FUN_037a6538(lVar10,uVar9,
                       *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
        }
        *(long *)(lVar8 + 0x30) = lVar10;
        thunk_FUN_02bb0e9c((long *)(lVar8 + 0x30),lVar10);
        lVar10 = thunk_FUN_02b79644(*(undefined8 *)puVar7);
        FUN_037a5cd0(lVar10,*(undefined8 *)puVar6);
        lVar12 = thunk_FUN_02b79644(*(undefined8 *)puVar2);
        FUN_04dbdb8c(lVar12,0);
        puVar4 = 
        Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_EndProcessProperty__;
        if (lVar12 != 0) {
          *(undefined8 *)(lVar12 + 0x18) =
               *(undefined8 *)
                Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_EndProcessProperty__
          ;
          thunk_FUN_02bb0e9c();
          *(undefined8 *)(lVar12 + 0x10) = *unaff_x26;
          thunk_FUN_02bb0e9c();
          if (lVar10 != 0) {
            lVar13 = *(long *)(lVar10 + 0x10);
            lVar14 = *(long *)Method_Newtonsoft_Json_Linq_JProperty_Load__;
            *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
            if (lVar13 != 0) {
              uVar1 = *(uint *)(lVar10 + 0x18);
              if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                plVar11 = (long *)(lVar13 + (long)(int)uVar1 * 8 + 0x20);
                *plVar11 = lVar12;
                thunk_FUN_02bb0e9c(plVar11,lVar12);
              }
              else {
                FUN_037a6538(lVar10,lVar12,
                             *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
              }
              *(long *)(lVar8 + 0x28) = lVar10;
              thunk_FUN_02bb0e9c((long *)(lVar8 + 0x28),lVar10);
              if (unaff_x20 != 0) {
                lVar10 = *(long *)(unaff_x20 + 0x10);
                *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
                if (lVar10 != 0) {
                  uVar1 = *(uint *)(unaff_x20 + 0x18);
                  if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                    *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                    plVar11 = (long *)(lVar10 + (long)(int)uVar1 * 8 + 0x20);
                    *plVar11 = lVar8;
                    thunk_FUN_02bb0e9c(plVar11,lVar8);
                  }
                  else {
                    FUN_037a6538();
                  }
                  lVar8 = thunk_FUN_02b79644(*unaff_x27);
                  FUN_04dbdb8c(lVar8,0);
                  puVar3 = Method_Newtonsoft_Json_JsonSerializer_set_NullValueHandling__;
                  if (lVar8 != 0) {
                    *(undefined8 *)(lVar8 + 0x10) =
                         *(undefined8 *)
                          Method_Oculus_Interaction_Interactable<HandGrabInteractor,_HandGrabInteractable>_add_WhenStateChanged__
                    ;
                    thunk_FUN_02bb0e9c();
                    *(undefined8 *)(lVar8 + 0x20) = *(undefined8 *)puVar3;
                    thunk_FUN_02bb0e9c((undefined8 *)(lVar8 + 0x20));
                    puVar3 = PTR_DAT_063145b0;
                    *(undefined4 *)(lVar8 + 0x18) = 0;
                    lVar10 = thunk_FUN_02b79644(*(undefined8 *)puVar3);
                    FUN_037a5cd0(lVar10,*(undefined8 *)puVar5);
                    puVar3 = PTR_DAT_063173b8;
                    if (lVar10 != 0) {
                      lVar12 = *(long *)(lVar10 + 0x10);
                      uVar9 = *(undefined8 *)
                               Method_System_Linq_Enumerable_Select<DataColumn,_Type>__;
                      *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
                      if (lVar12 != 0) {
                        uVar1 = *(uint *)(lVar10 + 0x18);
                        if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                          *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                          *(undefined8 *)(lVar12 + (long)(int)uVar1 * 8 + 0x20) = uVar9;
                          thunk_FUN_02bb0e9c();
                        }
                        else {
                          FUN_037a6538(lVar10,uVar9,
                                       *(undefined8 *)
                                        (*(long *)(*(long *)(*(long *)puVar3 + 0x20) + 0xc0) + 0x70)
                                      );
                        }
                        *(long *)(lVar8 + 0x30) = lVar10;
                        thunk_FUN_02bb0e9c((long *)(lVar8 + 0x30),lVar10);
                        lVar10 = thunk_FUN_02b79644(*(undefined8 *)puVar7);
                        FUN_037a5cd0(lVar10,*(undefined8 *)puVar6);
                        lVar12 = thunk_FUN_02b79644(*(undefined8 *)puVar2);
                        FUN_04dbdb8c(lVar12,0);
                        if (lVar12 != 0) {
                          *(undefined8 *)(lVar12 + 0x18) = *(undefined8 *)puVar4;
                          thunk_FUN_02bb0e9c();
                          *(undefined8 *)(lVar12 + 0x10) = *unaff_x26;
                          thunk_FUN_02bb0e9c();
                          if (lVar10 != 0) {
                            lVar13 = *(long *)(lVar10 + 0x10);
                            lVar14 = *(long *)Method_Newtonsoft_Json_Linq_JProperty_Load__;
                            *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
                            if (lVar13 != 0) {
                              uVar1 = *(uint *)(lVar10 + 0x18);
                              if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                plVar11 = (long *)(lVar13 + (long)(int)uVar1 * 8 + 0x20);
                                *plVar11 = lVar12;
                                thunk_FUN_02bb0e9c(plVar11,lVar12);
                              }
                              else {
                                FUN_037a6538(lVar10,lVar12,
                                             *(undefined8 *)
                                              (*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
                              }
                              puVar4 = PTR_DAT_063145b0;
                              *(long *)(lVar8 + 0x28) = lVar10;
                              thunk_FUN_02bb0e9c((long *)(lVar8 + 0x28),lVar10);
                              lVar10 = *(long *)(unaff_x20 + 0x10);
                              *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
                              if (lVar10 != 0) {
                                uVar1 = *(uint *)(unaff_x20 + 0x18);
                                if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                  *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                                  plVar11 = (long *)(lVar10 + (long)(int)uVar1 * 8 + 0x20);
                                  *plVar11 = lVar8;
                                  thunk_FUN_02bb0e9c(plVar11,lVar8);
                                }
                                else {
                                  FUN_037a6538();
                                }
                                lVar8 = thunk_FUN_02b79644(*unaff_x27);
                                FUN_04dbdb8c(lVar8,0);
                                puVar3 = OVR_OpenVR_IVRSystem__GetControllerStateWithPose_TypeInfo;
                                if (lVar8 != 0) {
                                  *(undefined8 *)(lVar8 + 0x10) = *(undefined8 *)PTR_DAT_063210b8;
                                  thunk_FUN_02bb0e9c();
                                  *(undefined8 *)(lVar8 + 0x20) = *(undefined8 *)puVar3;
                                  thunk_FUN_02bb0e9c((undefined8 *)(lVar8 + 0x20));
                                  uVar9 = *(undefined8 *)puVar4;
                                  *(undefined4 *)(lVar8 + 0x18) = 0;
                                  lVar10 = thunk_FUN_02b79644(uVar9);
                                  FUN_037a5cd0(lVar10,*(undefined8 *)puVar5);
                                  puVar3 = PTR_DAT_063173b8;
                                  if (lVar10 != 0) {
                                    lVar12 = *(long *)(lVar10 + 0x10);
                                    uVar9 = *(undefined8 *)
                                             Method_System_Linq_Enumerable_Select<Enum,_int>__;
                                    *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
                                    if (lVar12 != 0) {
                                      uVar1 = *(uint *)(lVar10 + 0x18);
                                      if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                        *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                        *(undefined8 *)(lVar12 + (long)(int)uVar1 * 8 + 0x20) =
                                             uVar9;
                                        thunk_FUN_02bb0e9c();
                                      }
                                      else {
                                        FUN_037a6538(lVar10,uVar9,
                                                     *(undefined8 *)
                                                      (*(long *)(*(long *)(*(long *)puVar3 + 0x20) +
                                                                0xc0) + 0x70));
                                      }
                                      *(long *)(lVar8 + 0x30) = lVar10;
                                      thunk_FUN_02bb0e9c((long *)(lVar8 + 0x30),lVar10);
                                      lVar10 = thunk_FUN_02b79644(*(undefined8 *)puVar7);
                                      FUN_037a5cd0(lVar10,*(undefined8 *)puVar6);
                                      lVar12 = thunk_FUN_02b79644(*(undefined8 *)puVar2);
                                      FUN_04dbdb8c(lVar12,0);
                                      if (lVar12 != 0) {
                                        *(undefined8 *)(lVar12 + 0x18) =
                                             *(undefined8 *)
                                              Method_Newtonsoft_Json_JsonReader_set_DateParseHandling__
                                        ;
                                        thunk_FUN_02bb0e9c();
                                        *(undefined8 *)(lVar12 + 0x10) = *unaff_x26;
                                        thunk_FUN_02bb0e9c();
                                        if (lVar10 != 0) {
                                          lVar13 = *(long *)(lVar10 + 0x10);
                                          lVar14 = *(long *)
                                                  Method_Newtonsoft_Json_Linq_JProperty_Load__;
                                          *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
                                          if (lVar13 != 0) {
                                            uVar1 = *(uint *)(lVar10 + 0x18);
                                            if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                              *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                              plVar11 = (long *)(lVar13 + (long)(int)uVar1 * 8 +
                                                                0x20);
                                              *plVar11 = lVar12;
                                              thunk_FUN_02bb0e9c(plVar11,lVar12);
                                            }
                                            else {
                                              FUN_037a6538(lVar10,lVar12,
                                                           *(undefined8 *)
                                                            (*(long *)(*(long *)(lVar14 + 0x20) +
                                                                      0xc0) + 0x70));
                                            }
                                            *(long *)(lVar8 + 0x28) = lVar10;
                                            thunk_FUN_02bb0e9c((long *)(lVar8 + 0x28),lVar10);
                                            lVar10 = *(long *)(unaff_x20 + 0x10);
                                            *(int *)(unaff_x20 + 0x1c) =
                                                 *(int *)(unaff_x20 + 0x1c) + 1;
                                            if (lVar10 != 0) {
                                              uVar1 = *(uint *)(unaff_x20 + 0x18);
                                              if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                                                plVar11 = (long *)(lVar10 + (long)(int)uVar1 * 8 +
                                                                  0x20);
                                                *plVar11 = lVar8;
                                                thunk_FUN_02bb0e9c(plVar11,lVar8);
                                              }
                                              else {
                                                FUN_037a6538();
                                              }
                                              lVar8 = thunk_FUN_02b79644(*unaff_x27);
                                              FUN_04dbdb8c(lVar8,0);
                                              puVar3 = 
                                              Method_Meta_XR_MRUtilityKit_DestructibleGlobalMeshSpawner_Shuffle<Vector3>__
                                              ;
                                              if (lVar8 != 0) {
                                                *(undefined8 *)(lVar8 + 0x10) =
                                                     *(undefined8 *)
                                                                                                            
                                                  Method_System_Collections_Generic_List<Controller>_GetEnumerator__
                                                ;
                                                thunk_FUN_02bb0e9c();
                                                *(undefined8 *)(lVar8 + 0x20) =
                                                     *(undefined8 *)puVar3;
                                                thunk_FUN_02bb0e9c((undefined8 *)(lVar8 + 0x20));
                                                uVar9 = *(undefined8 *)puVar4;
                                                *(undefined4 *)(lVar8 + 0x18) = 0;
                                                lVar10 = thunk_FUN_02b79644(uVar9);
                                                FUN_037a5cd0(lVar10,*(undefined8 *)puVar5);
                                                puVar3 = PTR_DAT_063173b8;
                                                if (lVar10 != 0) {
                                                  lVar12 = *(long *)(lVar10 + 0x10);
                                                  uVar9 = *(undefined8 *)
                                                                                                                      
                                                  Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_Populate__
                                                  ;
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar12 != 0) {
                                                    uVar1 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar12 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar9;
                                                      thunk_FUN_02bb0e9c();
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar10,uVar9,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(*(long *)
                                                  puVar3 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar8 + 0x30) = lVar10;
                                                  thunk_FUN_02bb0e9c((long *)(lVar8 + 0x30),lVar10);
                                                  lVar10 = thunk_FUN_02b79644(*(undefined8 *)puVar7)
                                                  ;
                                                  FUN_037a5cd0(lVar10,*(undefined8 *)puVar6);
                                                  lVar12 = thunk_FUN_02b79644(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_04dbdb8c(lVar12,0);
                                                  if (lVar12 != 0) {
                                                    *(undefined8 *)(lVar12 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_CreateNewDictionary__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar12 + 0x10) = *unaff_x26;
                                                  thunk_FUN_02bb0e9c();
                                                  if (lVar10 != 0) {
                                                    lVar13 = *(long *)(lVar10 + 0x10);
                                                    lVar14 = *(long *)
                                                  Method_Newtonsoft_Json_Linq_JProperty_Load__;
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                      plVar11 = (long *)(lVar13 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar11 = lVar12;
                                                      thunk_FUN_02bb0e9c(plVar11,lVar12);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar10,lVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar8 + 0x28) = lVar10;
                                                  thunk_FUN_02bb0e9c((long *)(lVar8 + 0x28),lVar10);
                                                  lVar10 = *(long *)(unaff_x20 + 0x10);
                                                  *(int *)(unaff_x20 + 0x1c) =
                                                       *(int *)(unaff_x20 + 0x1c) + 1;
                                                  if (lVar10 != 0) {
                                                    uVar1 = *(uint *)(unaff_x20 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                      *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                                                      plVar11 = (long *)(lVar10 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar11 = lVar8;
                                                      thunk_FUN_02bb0e9c(plVar11,lVar8);
                                                    }
                                                    else {
                                                      FUN_037a6538();
                                                    }
                                                    lVar8 = thunk_FUN_02b79644(*unaff_x27);
                                                    FUN_04dbdb8c(lVar8,0);
                                                    puVar3 = PTR_DAT_0631b1f0;
                                                    if (lVar8 != 0) {
                                                      *(undefined8 *)(lVar8 + 0x10) =
                                                           *(undefined8 *)
                                                                                                                        
                                                  Method_Oculus_Interaction_Interactable<HandGrabUseInteractor,_HandGrabUseInteractable>_SelectingInteractorAdded__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar8 + 0x20) =
                                                       *(undefined8 *)puVar3;
                                                  thunk_FUN_02bb0e9c((undefined8 *)(lVar8 + 0x20));
                                                  uVar9 = *(undefined8 *)puVar4;
                                                  *(undefined4 *)(lVar8 + 0x18) = 1;
                                                  lVar10 = thunk_FUN_02b79644(uVar9);
                                                  FUN_037a5cd0(lVar10,*(undefined8 *)puVar5);
                                                  if (lVar10 != 0) {
                                                    lVar12 = *(long *)(lVar10 + 0x10);
                                                    uVar9 = *(undefined8 *)puVar3;
                                                    lVar13 = *(long *)PTR_DAT_063173b8;
                                                    *(int *)(lVar10 + 0x1c) =
                                                         *(int *)(lVar10 + 0x1c) + 1;
                                                    if (lVar12 != 0) {
                                                      uVar1 = *(uint *)(lVar10 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                        *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                        *(undefined8 *)
                                                         (lVar12 + (long)(int)uVar1 * 8 + 0x20) =
                                                             uVar9;
                                                        thunk_FUN_02bb0e9c();
                                                      }
                                                      else {
                                                        FUN_037a6538(lVar10,uVar9,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar13 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar8 + 0x30) = lVar10;
                                                  thunk_FUN_02bb0e9c((long *)(lVar8 + 0x30),lVar10);
                                                  lVar10 = thunk_FUN_02b79644(*(undefined8 *)puVar7)
                                                  ;
                                                  FUN_037a5cd0(lVar10,*(undefined8 *)puVar6);
                                                  lVar12 = thunk_FUN_02b79644(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_04dbdb8c(lVar12,0);
                                                  if (lVar12 != 0) {
                                                    *(undefined8 *)(lVar12 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Newtonsoft_Json_JsonSerializer_set_SerializationBinder__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar12 + 0x10) = *unaff_x26;
                                                  thunk_FUN_02bb0e9c();
                                                  if (lVar10 != 0) {
                                                    lVar13 = *(long *)(lVar10 + 0x10);
                                                    lVar14 = *(long *)
                                                  Method_Newtonsoft_Json_Linq_JProperty_Load__;
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                      plVar11 = (long *)(lVar13 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar11 = lVar12;
                                                      thunk_FUN_02bb0e9c(plVar11,lVar12);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar10,lVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar8 + 0x28) = lVar10;
                                                  thunk_FUN_02bb0e9c((long *)(lVar8 + 0x28),lVar10);
                                                  lVar10 = *(long *)(unaff_x20 + 0x10);
                                                  *(int *)(unaff_x20 + 0x1c) =
                                                       *(int *)(unaff_x20 + 0x1c) + 1;
                                                  if (lVar10 != 0) {
                                                    uVar1 = *(uint *)(unaff_x20 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                      *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                                                      plVar11 = (long *)(lVar10 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar11 = lVar8;
                                                      thunk_FUN_02bb0e9c(plVar11,lVar8);
                                                    }
                                                    else {
                                                      FUN_037a6538();
                                                    }
                                                    lVar8 = thunk_FUN_02b79644(*unaff_x27);
                                                    FUN_04dbdb8c(lVar8,0);
                                                    puVar3 = 
                                                  Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_AddReference__
                                                  ;
                                                  if (lVar8 != 0) {
                                                    *(undefined8 *)(lVar8 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Oculus_Interaction_Interactable<HandGrabUseInteractor,_HandGrabUseInteractable>_Awake__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar8 + 0x20) =
                                                       *(undefined8 *)puVar3;
                                                  thunk_FUN_02bb0e9c((undefined8 *)(lVar8 + 0x20));
                                                  uVar9 = *(undefined8 *)puVar4;
                                                  *(undefined4 *)(lVar8 + 0x18) = 0;
                                                  lVar10 = thunk_FUN_02b79644(uVar9);
                                                  FUN_037a5cd0(lVar10,*(undefined8 *)puVar5);
                                                  puVar3 = PTR_DAT_063173b8;
                                                  if (lVar10 != 0) {
                                                    lVar12 = *(long *)(lVar10 + 0x10);
                                                    uVar9 = *(undefined8 *)
                                                                                                                          
                                                  Method_System_Linq_Enumerable_Select<AndroidAxis,_string>__
                                                  ;
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar12 != 0) {
                                                    uVar1 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar12 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar9;
                                                      thunk_FUN_02bb0e9c();
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar10,uVar9,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(*(long *)
                                                  puVar3 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar8 + 0x30) = lVar10;
                                                  thunk_FUN_02bb0e9c((long *)(lVar8 + 0x30),lVar10);
                                                  lVar10 = thunk_FUN_02b79644(*(undefined8 *)puVar7)
                                                  ;
                                                  FUN_037a5cd0(lVar10,*(undefined8 *)puVar6);
                                                  lVar12 = thunk_FUN_02b79644(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_04dbdb8c(lVar12,0);
                                                  if (lVar12 != 0) {
                                                    *(undefined8 *)(lVar12 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_GetExpectedDescription__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar12 + 0x10) = *unaff_x26;
                                                  thunk_FUN_02bb0e9c();
                                                  if (lVar10 != 0) {
                                                    lVar13 = *(long *)(lVar10 + 0x10);
                                                    lVar14 = *(long *)
                                                  Method_Newtonsoft_Json_Linq_JProperty_Load__;
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                      plVar11 = (long *)(lVar13 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar11 = lVar12;
                                                      thunk_FUN_02bb0e9c(plVar11,lVar12);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar10,lVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar8 + 0x28) = lVar10;
                                                  thunk_FUN_02bb0e9c((long *)(lVar8 + 0x28),lVar10);
                                                  lVar10 = *(long *)(unaff_x20 + 0x10);
                                                  *(int *)(unaff_x20 + 0x1c) =
                                                       *(int *)(unaff_x20 + 0x1c) + 1;
                                                  if (lVar10 != 0) {
                                                    uVar1 = *(uint *)(unaff_x20 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                      *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                                                      plVar11 = (long *)(lVar10 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar11 = lVar8;
                                                      thunk_FUN_02bb0e9c(plVar11,lVar8);
                                                    }
                                                    else {
                                                      FUN_037a6538();
                                                    }
                                                    lVar8 = thunk_FUN_02b79644(*unaff_x27);
                                                    FUN_04dbdb8c(lVar8,0);
                                                    puVar3 = 
                                                  Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_EnsureType__
                                                  ;
                                                  if (lVar8 != 0) {
                                                    *(undefined8 *)(lVar8 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Oculus_Interaction_Interactable<LocomotionAxisTurnerInteractor,_LocomotionAxisTurnerInteractable>__ctor__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar8 + 0x20) =
                                                       *(undefined8 *)puVar3;
                                                  thunk_FUN_02bb0e9c((undefined8 *)(lVar8 + 0x20));
                                                  uVar9 = *(undefined8 *)puVar4;
                                                  *(undefined4 *)(lVar8 + 0x18) = 2;
                                                  lVar10 = thunk_FUN_02b79644(uVar9);
                                                  FUN_037a5cd0(lVar10,*(undefined8 *)puVar5);
                                                  puVar3 = PTR_DAT_063173b8;
                                                  if (lVar10 != 0) {
                                                    lVar12 = *(long *)(lVar10 + 0x10);
                                                    uVar9 = *(undefined8 *)
                                                                                                                          
                                                  Method_System_Linq_Enumerable_Select<KeyValuePair<string,_JsonParser_JsonValue>,_string>__
                                                  ;
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar12 != 0) {
                                                    uVar1 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar12 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar9;
                                                      thunk_FUN_02bb0e9c();
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar10,uVar9,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(*(long *)
                                                  puVar3 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar8 + 0x30) = lVar10;
                                                  thunk_FUN_02bb0e9c((long *)(lVar8 + 0x30),lVar10);
                                                  lVar10 = thunk_FUN_02b79644(*(undefined8 *)puVar7)
                                                  ;
                                                  FUN_037a5cd0(lVar10,*(undefined8 *)puVar6);
                                                  lVar12 = thunk_FUN_02b79644(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_04dbdb8c(lVar12,0);
                                                  if (lVar12 != 0) {
                                                    *(undefined8 *)(lVar12 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_CreateNewObject__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar12 + 0x10) = *unaff_x26;
                                                  thunk_FUN_02bb0e9c();
                                                  if (lVar10 != 0) {
                                                    lVar13 = *(long *)(lVar10 + 0x10);
                                                    lVar14 = *(long *)
                                                  Method_Newtonsoft_Json_Linq_JProperty_Load__;
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                      plVar11 = (long *)(lVar13 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar11 = lVar12;
                                                      thunk_FUN_02bb0e9c(plVar11,lVar12);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar10,lVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar8 + 0x28) = lVar10;
                                                  thunk_FUN_02bb0e9c((long *)(lVar8 + 0x28),lVar10);
                                                  lVar10 = *(long *)(unaff_x20 + 0x10);
                                                  *(int *)(unaff_x20 + 0x1c) =
                                                       *(int *)(unaff_x20 + 0x1c) + 1;
                                                  if (lVar10 != 0) {
                                                    uVar1 = *(uint *)(unaff_x20 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                      *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                                                      plVar11 = (long *)(lVar10 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar11 = lVar8;
                                                      thunk_FUN_02bb0e9c(plVar11,lVar8);
                                                    }
                                                    else {
                                                      FUN_037a6538();
                                                    }
                                                    lVar8 = thunk_FUN_02b79644(*unaff_x27);
                                                    FUN_04dbdb8c(lVar8,0);
                                                    puVar3 = 
                                                  Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_CreateNewList__
                                                  ;
                                                  if (lVar8 != 0) {
                                                    *(undefined8 *)(lVar8 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Oculus_Interaction_Interactable<HandGrabUseInteractor,_HandGrabUseInteractable>_get_Registry__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar8 + 0x20) =
                                                       *(undefined8 *)puVar3;
                                                  thunk_FUN_02bb0e9c((undefined8 *)(lVar8 + 0x20));
                                                  uVar9 = *(undefined8 *)puVar4;
                                                  *(undefined4 *)(lVar8 + 0x18) = 0;
                                                  lVar10 = thunk_FUN_02b79644(uVar9);
                                                  FUN_037a5cd0(lVar10,*(undefined8 *)puVar5);
                                                  puVar3 = PTR_DAT_063173b8;
                                                  if (lVar10 != 0) {
                                                    lVar12 = *(long *)(lVar10 + 0x10);
                                                    uVar9 = *(undefined8 *)
                                                                                                                          
                                                  Method_System_Linq_Enumerable_Select<FieldInfo,_Enum>__
                                                  ;
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar12 != 0) {
                                                    uVar1 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar12 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar9;
                                                      thunk_FUN_02bb0e9c();
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar10,uVar9,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(*(long *)
                                                  puVar3 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar8 + 0x30) = lVar10;
                                                  thunk_FUN_02bb0e9c((long *)(lVar8 + 0x30),lVar10);
                                                  lVar10 = thunk_FUN_02b79644(*(undefined8 *)puVar7)
                                                  ;
                                                  FUN_037a5cd0(lVar10,*(undefined8 *)puVar6);
                                                  lVar12 = thunk_FUN_02b79644(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_04dbdb8c(lVar12,0);
                                                  if (lVar12 != 0) {
                                                    *(undefined8 *)(lVar12 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_PopulateDictionary__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar12 + 0x10) = *unaff_x26;
                                                  thunk_FUN_02bb0e9c();
                                                  if (lVar10 != 0) {
                                                    lVar13 = *(long *)(lVar10 + 0x10);
                                                    lVar14 = *(long *)
                                                  Method_Newtonsoft_Json_Linq_JProperty_Load__;
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                      plVar11 = (long *)(lVar13 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar11 = lVar12;
                                                      thunk_FUN_02bb0e9c(plVar11,lVar12);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar10,lVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar8 + 0x28) = lVar10;
                                                  thunk_FUN_02bb0e9c((long *)(lVar8 + 0x28),lVar10);
                                                  lVar10 = *(long *)(unaff_x20 + 0x10);
                                                  *(int *)(unaff_x20 + 0x1c) =
                                                       *(int *)(unaff_x20 + 0x1c) + 1;
                                                  if (lVar10 != 0) {
                                                    uVar1 = *(uint *)(unaff_x20 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                      *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                                                      plVar11 = (long *)(lVar10 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar11 = lVar8;
                                                      thunk_FUN_02bb0e9c(plVar11,lVar8);
                                                    }
                                                    else {
                                                      FUN_037a6538();
                                                    }
                                                    lVar8 = thunk_FUN_02b79644(*unaff_x27);
                                                    FUN_04dbdb8c(lVar8,0);
                                                    puVar3 = 
                                                  Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_CreateList__
                                                  ;
                                                  if (lVar8 != 0) {
                                                    *(undefined8 *)(lVar8 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_EnsureArrayContract__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar8 + 0x20) =
                                                       *(undefined8 *)puVar3;
                                                  thunk_FUN_02bb0e9c((undefined8 *)(lVar8 + 0x20));
                                                  uVar9 = *(undefined8 *)puVar4;
                                                  *(undefined4 *)(lVar8 + 0x18) = 0;
                                                  lVar10 = thunk_FUN_02b79644(uVar9);
                                                  FUN_037a5cd0(lVar10,*(undefined8 *)puVar5);
                                                  puVar3 = PTR_DAT_063173b8;
                                                  if (lVar10 != 0) {
                                                    lVar12 = *(long *)(lVar10 + 0x10);
                                                    uVar9 = *(undefined8 *)
                                                                                                                          
                                                  Method_System_Linq_Enumerable_Select<EnumMemberAttribute,_string>__
                                                  ;
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar12 != 0) {
                                                    uVar1 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar12 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar9;
                                                      thunk_FUN_02bb0e9c();
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar10,uVar9,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(*(long *)
                                                  puVar3 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar8 + 0x30) = lVar10;
                                                  thunk_FUN_02bb0e9c((long *)(lVar8 + 0x30),lVar10);
                                                  lVar10 = thunk_FUN_02b79644(*(undefined8 *)puVar7)
                                                  ;
                                                  FUN_037a5cd0(lVar10,*(undefined8 *)puVar6);
                                                  lVar12 = thunk_FUN_02b79644(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_04dbdb8c(lVar12,0);
                                                  if (lVar12 != 0) {
                                                    *(undefined8 *)(lVar12 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_CreateObject__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar12 + 0x10) = *unaff_x26;
                                                  thunk_FUN_02bb0e9c();
                                                  if (lVar10 != 0) {
                                                    lVar13 = *(long *)(lVar10 + 0x10);
                                                    lVar14 = *(long *)
                                                  Method_Newtonsoft_Json_Linq_JProperty_Load__;
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                      plVar11 = (long *)(lVar13 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar11 = lVar12;
                                                      thunk_FUN_02bb0e9c(plVar11,lVar12);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar10,lVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar8 + 0x28) = lVar10;
                                                  thunk_FUN_02bb0e9c((long *)(lVar8 + 0x28),lVar10);
                                                  lVar10 = *(long *)(unaff_x20 + 0x10);
                                                  *(int *)(unaff_x20 + 0x1c) =
                                                       *(int *)(unaff_x20 + 0x1c) + 1;
                                                  if (lVar10 != 0) {
                                                    uVar1 = *(uint *)(unaff_x20 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                      *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                                                      plVar11 = (long *)(lVar10 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar11 = lVar8;
                                                      thunk_FUN_02bb0e9c(plVar11,lVar8);
                                                    }
                                                    else {
                                                      FUN_037a6538();
                                                    }
                                                    lVar8 = thunk_FUN_02b79644(*unaff_x27);
                                                    FUN_04dbdb8c(lVar8,0);
                                                    puVar3 = 
                                                  Method_LitJson_JsonData_LitJson_IJsonWrapper_GetBoolean__
                                                  ;
                                                  if (lVar8 != 0) {
                                                    *(undefined8 *)(lVar8 + 0x10) =
                                                         *(undefined8 *)
                                                          Method_LitJson_JsonData__ctor__;
                                                    thunk_FUN_02bb0e9c();
                                                    *(undefined8 *)(lVar8 + 0x20) =
                                                         *(undefined8 *)puVar3;
                                                    thunk_FUN_02bb0e9c((undefined8 *)(lVar8 + 0x20))
                                                    ;
                                                    uVar9 = *(undefined8 *)puVar4;
                                                    *(undefined4 *)(lVar8 + 0x18) = 3;
                                                    lVar10 = thunk_FUN_02b79644(uVar9);
                                                    FUN_037a5cd0(lVar10,*(undefined8 *)puVar5);
                                                    puVar3 = PTR_DAT_063173b8;
                                                    if (lVar10 != 0) {
                                                      lVar12 = *(long *)(lVar10 + 0x10);
                                                      uVar9 = *(undefined8 *)
                                                                                                                              
                                                  Method_System_Globalization_JapaneseCalendar_ToFourDigitYear__
                                                  ;
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar12 != 0) {
                                                    uVar1 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar12 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar9;
                                                      thunk_FUN_02bb0e9c();
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar10,uVar9,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(*(long *)
                                                  puVar3 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar8 + 0x30) = lVar10;
                                                  thunk_FUN_02bb0e9c((long *)(lVar8 + 0x30),lVar10);
                                                  lVar10 = thunk_FUN_02b79644(*(undefined8 *)puVar7)
                                                  ;
                                                  FUN_037a5cd0(lVar10,*(undefined8 *)puVar6);
                                                  lVar12 = thunk_FUN_02b79644(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_04dbdb8c(lVar12,0);
                                                  if (lVar12 != 0) {
                                                    *(undefined8 *)(lVar12 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_LitJson_JsonData_LitJson_IJsonWrapper_GetLong__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar12 + 0x10) = *unaff_x26;
                                                  thunk_FUN_02bb0e9c();
                                                  if (lVar10 != 0) {
                                                    lVar13 = *(long *)(lVar10 + 0x10);
                                                    lVar14 = *(long *)
                                                  Method_Newtonsoft_Json_Linq_JProperty_Load__;
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                      plVar11 = (long *)(lVar13 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar11 = lVar12;
                                                      thunk_FUN_02bb0e9c(plVar11,lVar12);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar10,lVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar8 + 0x28) = lVar10;
                                                  thunk_FUN_02bb0e9c((long *)(lVar8 + 0x28),lVar10);
                                                  lVar10 = *(long *)(unaff_x20 + 0x10);
                                                  *(int *)(unaff_x20 + 0x1c) =
                                                       *(int *)(unaff_x20 + 0x1c) + 1;
                                                  if (lVar10 != 0) {
                                                    uVar1 = *(uint *)(unaff_x20 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                      *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                                                      plVar11 = (long *)(lVar10 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar11 = lVar8;
                                                      thunk_FUN_02bb0e9c(plVar11,lVar8);
                                                    }
                                                    else {
                                                      FUN_037a6538();
                                                    }
                                                    lVar8 = thunk_FUN_02b79644(*unaff_x27);
                                                    FUN_04dbdb8c(lVar8,0);
                                                    puVar3 = 
                                                  Method_Newtonsoft_Json_JsonConvert_DeserializeObject<Dictionary<string,_string>>__
                                                  ;
                                                  if (lVar8 != 0) {
                                                    *(undefined8 *)(lVar8 + 0x10) =
                                                         *(undefined8 *)PTR_DAT_06332138;
                                                    thunk_FUN_02bb0e9c();
                                                    *(undefined8 *)(lVar8 + 0x20) =
                                                         *(undefined8 *)puVar3;
                                                    thunk_FUN_02bb0e9c((undefined8 *)(lVar8 + 0x20))
                                                    ;
                                                    uVar9 = *(undefined8 *)puVar4;
                                                    *(undefined4 *)(lVar8 + 0x18) = 3;
                                                    lVar10 = thunk_FUN_02b79644(uVar9);
                                                    FUN_037a5cd0(lVar10,*(undefined8 *)puVar5);
                                                    puVar3 = PTR_DAT_063173b8;
                                                    if (lVar10 != 0) {
                                                      lVar12 = *(long *)(lVar10 + 0x10);
                                                      uVar9 = *(undefined8 *)
                                                                                                                              
                                                  Method_System_Collections_Generic_List<IntegratedSubsystemDescriptor>_GetEnumerator__
                                                  ;
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar12 != 0) {
                                                    uVar1 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar12 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar9;
                                                      thunk_FUN_02bb0e9c();
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar10,uVar9,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(*(long *)
                                                  puVar3 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar8 + 0x30) = lVar10;
                                                  thunk_FUN_02bb0e9c((long *)(lVar8 + 0x30),lVar10);
                                                  lVar10 = thunk_FUN_02b79644(*(undefined8 *)puVar7)
                                                  ;
                                                  FUN_037a5cd0(lVar10,*(undefined8 *)puVar6);
                                                  lVar12 = thunk_FUN_02b79644(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_04dbdb8c(lVar12,0);
                                                  if (lVar12 != 0) {
                                                    *(undefined8 *)(lVar12 + 0x18) =
                                                         *(undefined8 *)
                                                          Method_LitJson_JsonData_EnsureDictionary__
                                                    ;
                                                    thunk_FUN_02bb0e9c();
                                                    *(undefined8 *)(lVar12 + 0x10) = *unaff_x26;
                                                    thunk_FUN_02bb0e9c();
                                                    if (lVar10 != 0) {
                                                      lVar13 = *(long *)(lVar10 + 0x10);
                                                      lVar14 = *(long *)
                                                  Method_Newtonsoft_Json_Linq_JProperty_Load__;
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                      plVar11 = (long *)(lVar13 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar11 = lVar12;
                                                      thunk_FUN_02bb0e9c(plVar11,lVar12);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar10,lVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar8 + 0x28) = lVar10;
                                                  thunk_FUN_02bb0e9c((long *)(lVar8 + 0x28),lVar10);
                                                  lVar10 = *(long *)(unaff_x20 + 0x10);
                                                  *(int *)(unaff_x20 + 0x1c) =
                                                       *(int *)(unaff_x20 + 0x1c) + 1;
                                                  if (lVar10 != 0) {
                                                    uVar1 = *(uint *)(unaff_x20 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                      *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                                                      plVar11 = (long *)(lVar10 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar11 = lVar8;
                                                      thunk_FUN_02bb0e9c(plVar11,lVar8);
                                                    }
                                                    else {
                                                      FUN_037a6538();
                                                    }
                                                    lVar8 = thunk_FUN_02b79644(*unaff_x27);
                                                    FUN_04dbdb8c(lVar8,0);
                                                    puVar3 = 
                                                  Method_Newtonsoft_Json_JsonSerializer_set_MetadataPropertyHandling__
                                                  ;
                                                  if (lVar8 != 0) {
                                                    *(undefined8 *)(lVar8 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Newtonsoft_Json_Serialization_JsonSerializerInternalBase_GetErrorContext__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar8 + 0x20) =
                                                       *(undefined8 *)puVar3;
                                                  thunk_FUN_02bb0e9c((undefined8 *)(lVar8 + 0x20));
                                                  uVar9 = *(undefined8 *)puVar4;
                                                  *(undefined4 *)(lVar8 + 0x18) = 4;
                                                  lVar10 = thunk_FUN_02b79644(uVar9);
                                                  FUN_037a5cd0(lVar10,*(undefined8 *)puVar5);
                                                  puVar5 = PTR_DAT_063173b8;
                                                  if (lVar10 != 0) {
                                                    lVar12 = *(long *)(lVar10 + 0x10);
                                                    uVar9 = *(undefined8 *)
                                                                                                                          
                                                  Method_UnityEngine_InputSystem_InputControlExtensions_CopyState__
                                                  ;
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar12 != 0) {
                                                    uVar1 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar12 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar9;
                                                      thunk_FUN_02bb0e9c();
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar10,uVar9,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(*(long *)
                                                  puVar5 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar8 + 0x30) = lVar10;
                                                  thunk_FUN_02bb0e9c((long *)(lVar8 + 0x30),lVar10);
                                                  lVar10 = thunk_FUN_02b79644(*(undefined8 *)puVar7)
                                                  ;
                                                  FUN_037a5cd0(lVar10,*(undefined8 *)puVar6);
                                                  lVar12 = thunk_FUN_02b79644(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_04dbdb8c(lVar12,0);
                                                  if (lVar12 != 0) {
                                                    *(undefined8 *)(lVar12 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Newtonsoft_Json_JsonReader_set_FloatParseHandling__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar12 + 0x10) = *unaff_x26;
                                                  thunk_FUN_02bb0e9c();
                                                  if (lVar10 != 0) {
                                                    lVar13 = *(long *)(lVar10 + 0x10);
                                                    lVar14 = *(long *)
                                                  Method_Newtonsoft_Json_Linq_JProperty_Load__;
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                      plVar11 = (long *)(lVar13 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar11 = lVar12;
                                                      thunk_FUN_02bb0e9c(plVar11,lVar12);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar10,lVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar8 + 0x28) = lVar10;
                                                  thunk_FUN_02bb0e9c((long *)(lVar8 + 0x28),lVar10);
                                                  lVar10 = *(long *)(unaff_x20 + 0x10);
                                                  *(int *)(unaff_x20 + 0x1c) =
                                                       *(int *)(unaff_x20 + 0x1c) + 1;
                                                  if (lVar10 != 0) {
                                                    uVar1 = *(uint *)(unaff_x20 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                      *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                                                      plVar11 = (long *)(lVar10 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar11 = lVar8;
                                                      thunk_FUN_02bb0e9c(plVar11,lVar8);
                                                    }
                                                    else {
                                                      FUN_037a6538();
                                                    }
                                                    *(long *)(unaff_x28 + 0x28) = unaff_x20;
                                                    uVar9 = thunk_FUN_02bb0e9c();
                                                    FUN_05b9ad1c(uVar9,unaff_x28);
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
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


