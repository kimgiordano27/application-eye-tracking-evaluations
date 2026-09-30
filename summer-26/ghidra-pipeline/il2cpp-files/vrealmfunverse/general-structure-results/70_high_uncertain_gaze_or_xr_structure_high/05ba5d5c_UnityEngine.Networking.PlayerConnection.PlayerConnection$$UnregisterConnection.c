/*
FUNCTION_NAME: UnityEngine.Networking.PlayerConnection.PlayerConnection$$UnregisterConnection
ENTRY_POINT: 05ba5d5c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 89
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo;keyword_support
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_1;telemetry_or_network_hits_18;source_validity_pose_sink_structure;eye_or_gaze_keyword_boost_only;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void UnityEngine_Networking_PlayerConnection_PlayerConnection__UnregisterConnection(void)

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
  undefined8 uVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long unaff_x20;
  long unaff_x21;
  undefined8 *unaff_x26;
  long unaff_x28;
  
  if (unaff_x21 != 0) {
                    /* try { // try from 05ba5d64 to 05ca5d67 has its CatchHandler @ 05ba5d88 */
                    /* try { // try from 05ba5d68 to 05ca5d8b has its CatchHandler @ 05ba5a14 */
    *(undefined8 *)(unaff_x21 + 0x18) = *(undefined8 *)Method_Newtonsoft_Json_Linq_JToken_Replace__;
    *(undefined4 *)(unaff_x21 + 0x10) = 0x264;
    thunk_FUN_02bb0e9c();
    lVar13 = *(long *)(unaff_x20 + 0x10);
                    /* catch() { ... } // from try @ 05ba5d64 with catch @ 05ba5d88 */
                    /* try { // try from 05ba5d8c to 05ca5d93 has its CatchHandler @ 05ba5d98 */
    *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
    puVar5 = Method_OVRSimpleJSON_JSONLazyCreator_Set<JSONBool>__;
    puVar2 = Method_Newtonsoft_Json_Linq_JProperty_RemoveItemAt__;
    puVar6 = Method_Newtonsoft_Json_Linq_JProperty_ClearItems__;
    if (lVar13 != 0) {
                    /* catch() { ... } // from try @ 05ba5d2c with catch @ 05ba5d98
                       catch() { ... } // from try @ 05ba5d8c with catch @ 05ba5d98 */
      uVar1 = *(uint *)(unaff_x20 + 0x18);
      if (uVar1 < *(uint *)(lVar13 + 0x18)) {
        *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
        *(long *)(lVar13 + (long)(int)uVar1 * 8 + 0x20) = unaff_x21;
        thunk_FUN_02bb0e9c();
      }
      else {
        FUN_037a6538();
      }
      *(long *)(unaff_x28 + 0x20) = unaff_x20;
      thunk_FUN_02bb0e9c();
      lVar13 = thunk_FUN_02b79644(*(undefined8 *)puVar5);
      FUN_037a5cd0(lVar13,*(undefined8 *)puVar2);
      lVar9 = thunk_FUN_02b79644(*(undefined8 *)puVar6);
      FUN_04dbdb8c(lVar9,0);
      puVar7 = PTR_DAT_0631b1e8;
      puVar5 = PTR_DAT_063145b8;
      puVar2 = PTR_DAT_063145b0;
      if (lVar9 != 0) {
        *(undefined8 *)(lVar9 + 0x10) =
             *(undefined8 *)
              Method_Oculus_Interaction_Interactable<HandGrabInteractor,_HandGrabInteractable>_remove_WhenStateChanged__
        ;
        thunk_FUN_02bb0e9c();
        *(undefined8 *)(lVar9 + 0x20) = *(undefined8 *)puVar7;
        thunk_FUN_02bb0e9c((undefined8 *)(lVar9 + 0x20));
        uVar10 = *(undefined8 *)puVar2;
        *(undefined4 *)(lVar9 + 0x18) = 1;
        lVar11 = thunk_FUN_02b79644(uVar10);
        FUN_037a5cd0(lVar11,*(undefined8 *)puVar5);
        if (lVar11 != 0) {
          lVar14 = *(long *)(lVar11 + 0x10);
          uVar10 = *(undefined8 *)puVar7;
          lVar15 = *(long *)PTR_DAT_063173b8;
          *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
          puVar8 = Method_OVRSimpleJSON_JSONLazyCreator_Set<JSONNumber>__;
          puVar7 = Method_Newtonsoft_Json_Linq_JPropertyKeyedCollection_Contains__;
          puVar2 = Method_Newtonsoft_Json_Linq_JObject_ValidateToken__;
          if (lVar14 != 0) {
            uVar1 = *(uint *)(lVar11 + 0x18);
            if (uVar1 < *(uint *)(lVar14 + 0x18)) {
              *(uint *)(lVar11 + 0x18) = uVar1 + 1;
              *(undefined8 *)(lVar14 + (long)(int)uVar1 * 8 + 0x20) = uVar10;
              thunk_FUN_02bb0e9c();
            }
            else {
              FUN_037a6538(lVar11,uVar10,
                           *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
            }
            *(long *)(lVar9 + 0x30) = lVar11;
            thunk_FUN_02bb0e9c((long *)(lVar9 + 0x30),lVar11);
            lVar11 = thunk_FUN_02b79644(*(undefined8 *)puVar8);
            FUN_037a5cd0(lVar11,*(undefined8 *)puVar7);
            lVar14 = thunk_FUN_02b79644(*(undefined8 *)puVar2);
            FUN_04dbdb8c(lVar14,0);
            puVar4 = 
            Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_EndProcessProperty__;
            if (lVar14 != 0) {
              *(undefined8 *)(lVar14 + 0x18) =
                   *(undefined8 *)
                    Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_EndProcessProperty__
              ;
              thunk_FUN_02bb0e9c();
              *(undefined8 *)(lVar14 + 0x10) = *unaff_x26;
              thunk_FUN_02bb0e9c();
              if (lVar11 != 0) {
                lVar15 = *(long *)(lVar11 + 0x10);
                lVar16 = *(long *)Method_Newtonsoft_Json_Linq_JProperty_Load__;
                *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
                if (lVar15 != 0) {
                  uVar1 = *(uint *)(lVar11 + 0x18);
                  if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                    *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                    plVar12 = (long *)(lVar15 + (long)(int)uVar1 * 8 + 0x20);
                    *plVar12 = lVar14;
                    thunk_FUN_02bb0e9c(plVar12,lVar14);
                  }
                  else {
                    FUN_037a6538(lVar11,lVar14,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70))
                    ;
                  }
                  *(long *)(lVar9 + 0x28) = lVar11;
                  thunk_FUN_02bb0e9c((long *)(lVar9 + 0x28),lVar11);
                  if (lVar13 != 0) {
                    lVar11 = *(long *)(lVar13 + 0x10);
                    lVar14 = *(long *)Method_Newtonsoft_Json_Linq_JProperty_RemoveItem__;
                    *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
                    if (lVar11 != 0) {
                      uVar1 = *(uint *)(lVar13 + 0x18);
                      if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                        *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                        plVar12 = (long *)(lVar11 + (long)(int)uVar1 * 8 + 0x20);
                        *plVar12 = lVar9;
                        thunk_FUN_02bb0e9c(plVar12,lVar9);
                      }
                      else {
                        FUN_037a6538(lVar13,lVar9,
                                     *(undefined8 *)
                                      (*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
                      }
                      lVar9 = thunk_FUN_02b79644(*(undefined8 *)puVar6);
                      FUN_04dbdb8c(lVar9,0);
                      puVar3 = Method_Newtonsoft_Json_JsonSerializer_set_NullValueHandling__;
                      if (lVar9 != 0) {
                        *(undefined8 *)(lVar9 + 0x10) =
                             *(undefined8 *)
                              Method_Oculus_Interaction_Interactable<HandGrabInteractor,_HandGrabInteractable>_add_WhenStateChanged__
                        ;
                        thunk_FUN_02bb0e9c();
                        *(undefined8 *)(lVar9 + 0x20) = *(undefined8 *)puVar3;
                        thunk_FUN_02bb0e9c((undefined8 *)(lVar9 + 0x20));
                        puVar3 = PTR_DAT_063145b0;
                        *(undefined4 *)(lVar9 + 0x18) = 0;
                        lVar11 = thunk_FUN_02b79644(*(undefined8 *)puVar3);
                        FUN_037a5cd0(lVar11,*(undefined8 *)puVar5);
                        puVar3 = PTR_DAT_063173b8;
                        if (lVar11 != 0) {
                          lVar14 = *(long *)(lVar11 + 0x10);
                          uVar10 = *(undefined8 *)
                                    Method_System_Linq_Enumerable_Select<DataColumn,_Type>__;
                          *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
                          if (lVar14 != 0) {
                            uVar1 = *(uint *)(lVar11 + 0x18);
                            if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                              *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                              *(undefined8 *)(lVar14 + (long)(int)uVar1 * 8 + 0x20) = uVar10;
                              thunk_FUN_02bb0e9c();
                            }
                            else {
                              FUN_037a6538(lVar11,uVar10,
                                           *(undefined8 *)
                                            (*(long *)(*(long *)(*(long *)puVar3 + 0x20) + 0xc0) +
                                            0x70));
                            }
                            *(long *)(lVar9 + 0x30) = lVar11;
                            thunk_FUN_02bb0e9c((long *)(lVar9 + 0x30),lVar11);
                            lVar11 = thunk_FUN_02b79644(*(undefined8 *)puVar8);
                            FUN_037a5cd0(lVar11,*(undefined8 *)puVar7);
                            lVar14 = thunk_FUN_02b79644(*(undefined8 *)puVar2);
                            FUN_04dbdb8c(lVar14,0);
                            if (lVar14 != 0) {
                              *(undefined8 *)(lVar14 + 0x18) = *(undefined8 *)puVar4;
                              thunk_FUN_02bb0e9c();
                              *(undefined8 *)(lVar14 + 0x10) = *unaff_x26;
                              thunk_FUN_02bb0e9c();
                              if (lVar11 != 0) {
                                lVar15 = *(long *)(lVar11 + 0x10);
                                lVar16 = *(long *)Method_Newtonsoft_Json_Linq_JProperty_Load__;
                                *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
                                if (lVar15 != 0) {
                                  uVar1 = *(uint *)(lVar11 + 0x18);
                                  if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                    *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                    plVar12 = (long *)(lVar15 + (long)(int)uVar1 * 8 + 0x20);
                                    *plVar12 = lVar14;
                                    thunk_FUN_02bb0e9c(plVar12,lVar14);
                                  }
                                  else {
                                    FUN_037a6538(lVar11,lVar14,
                                                 *(undefined8 *)
                                                  (*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70
                                                  ));
                                  }
                                  puVar4 = PTR_DAT_063145b0;
                                  *(long *)(lVar9 + 0x28) = lVar11;
                                  thunk_FUN_02bb0e9c((long *)(lVar9 + 0x28),lVar11);
                                  lVar11 = *(long *)(lVar13 + 0x10);
                                  lVar14 = *(long *)
                                            Method_Newtonsoft_Json_Linq_JProperty_RemoveItem__;
                                  *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
                                  if (lVar11 != 0) {
                                    uVar1 = *(uint *)(lVar13 + 0x18);
                                    if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                      *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                      plVar12 = (long *)(lVar11 + (long)(int)uVar1 * 8 + 0x20);
                                      *plVar12 = lVar9;
                                      thunk_FUN_02bb0e9c(plVar12,lVar9);
                                    }
                                    else {
                                      FUN_037a6538(lVar13,lVar9,
                                                   *(undefined8 *)
                                                    (*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) +
                                                    0x70));
                                    }
                                    lVar9 = thunk_FUN_02b79644(*(undefined8 *)puVar6);
                                    FUN_04dbdb8c(lVar9,0);
                                    puVar3 = 
                                    OVR_OpenVR_IVRSystem__GetControllerStateWithPose_TypeInfo;
                                    if (lVar9 != 0) {
                                      *(undefined8 *)(lVar9 + 0x10) =
                                           *(undefined8 *)PTR_DAT_063210b8;
                                      thunk_FUN_02bb0e9c();
                                      *(undefined8 *)(lVar9 + 0x20) = *(undefined8 *)puVar3;
                                      thunk_FUN_02bb0e9c((undefined8 *)(lVar9 + 0x20));
                                      uVar10 = *(undefined8 *)puVar4;
                                      *(undefined4 *)(lVar9 + 0x18) = 0;
                                      lVar11 = thunk_FUN_02b79644(uVar10);
                                      FUN_037a5cd0(lVar11,*(undefined8 *)puVar5);
                                      puVar3 = PTR_DAT_063173b8;
                                      if (lVar11 != 0) {
                                        lVar14 = *(long *)(lVar11 + 0x10);
                                        uVar10 = *(undefined8 *)
                                                  Method_System_Linq_Enumerable_Select<Enum,_int>__;
                                        *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
                                        if (lVar14 != 0) {
                                          uVar1 = *(uint *)(lVar11 + 0x18);
                                          if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                            *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                            *(undefined8 *)(lVar14 + (long)(int)uVar1 * 8 + 0x20) =
                                                 uVar10;
                                            thunk_FUN_02bb0e9c();
                                          }
                                          else {
                                            FUN_037a6538(lVar11,uVar10,
                                                         *(undefined8 *)
                                                          (*(long *)(*(long *)(*(long *)puVar3 +
                                                                              0x20) + 0xc0) + 0x70))
                                            ;
                                          }
                                          *(long *)(lVar9 + 0x30) = lVar11;
                                          thunk_FUN_02bb0e9c((long *)(lVar9 + 0x30),lVar11);
                                          lVar11 = thunk_FUN_02b79644(*(undefined8 *)puVar8);
                                          FUN_037a5cd0(lVar11,*(undefined8 *)puVar7);
                                          lVar14 = thunk_FUN_02b79644(*(undefined8 *)puVar2);
                                          FUN_04dbdb8c(lVar14,0);
                                          if (lVar14 != 0) {
                                            *(undefined8 *)(lVar14 + 0x18) =
                                                 *(undefined8 *)
                                                  Method_Newtonsoft_Json_JsonReader_set_DateParseHandling__
                                            ;
                                            thunk_FUN_02bb0e9c();
                                            *(undefined8 *)(lVar14 + 0x10) = *unaff_x26;
                                            thunk_FUN_02bb0e9c();
                                            if (lVar11 != 0) {
                                              lVar15 = *(long *)(lVar11 + 0x10);
                                              lVar16 = *(long *)
                                                  Method_Newtonsoft_Json_Linq_JProperty_Load__;
                                              *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
                                              if (lVar15 != 0) {
                                                uVar1 = *(uint *)(lVar11 + 0x18);
                                                if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                  *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                  plVar12 = (long *)(lVar15 + (long)(int)uVar1 * 8 +
                                                                    0x20);
                                                  *plVar12 = lVar14;
                                                  thunk_FUN_02bb0e9c(plVar12,lVar14);
                                                }
                                                else {
                                                  FUN_037a6538(lVar11,lVar14,
                                                               *(undefined8 *)
                                                                (*(long *)(*(long *)(lVar16 + 0x20)
                                                                          + 0xc0) + 0x70));
                                                }
                                                *(long *)(lVar9 + 0x28) = lVar11;
                                                thunk_FUN_02bb0e9c((long *)(lVar9 + 0x28),lVar11);
                                                lVar11 = *(long *)(lVar13 + 0x10);
                                                lVar14 = *(long *)
                                                  Method_Newtonsoft_Json_Linq_JProperty_RemoveItem__
                                                ;
                                                *(int *)(lVar13 + 0x1c) =
                                                     *(int *)(lVar13 + 0x1c) + 1;
                                                if (lVar11 != 0) {
                                                  uVar1 = *(uint *)(lVar13 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                    *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                    plVar12 = (long *)(lVar11 + (long)(int)uVar1 * 8
                                                                      + 0x20);
                                                    *plVar12 = lVar9;
                                                    thunk_FUN_02bb0e9c(plVar12,lVar9);
                                                  }
                                                  else {
                                                    FUN_037a6538(lVar13,lVar9,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar14 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                  }
                                                  lVar9 = thunk_FUN_02b79644(*(undefined8 *)puVar6);
                                                  FUN_04dbdb8c(lVar9,0);
                                                  puVar3 = 
                                                  Method_Meta_XR_MRUtilityKit_DestructibleGlobalMeshSpawner_Shuffle<Vector3>__
                                                  ;
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Collections_Generic_List<Controller>_GetEnumerator__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar9 + 0x20) =
                                                       *(undefined8 *)puVar3;
                                                  thunk_FUN_02bb0e9c((undefined8 *)(lVar9 + 0x20));
                                                  uVar10 = *(undefined8 *)puVar4;
                                                  *(undefined4 *)(lVar9 + 0x18) = 0;
                                                  lVar11 = thunk_FUN_02b79644(uVar10);
                                                  FUN_037a5cd0(lVar11,*(undefined8 *)puVar5);
                                                  puVar3 = PTR_DAT_063173b8;
                                                  if (lVar11 != 0) {
                                                    lVar14 = *(long *)(lVar11 + 0x10);
                                                    uVar10 = *(undefined8 *)
                                                                                                                            
                                                  Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_Populate__
                                                  ;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar14 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar10;
                                                      thunk_FUN_02bb0e9c();
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar11,uVar10,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(*(long *)
                                                  puVar3 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x30) = lVar11;
                                                  thunk_FUN_02bb0e9c((long *)(lVar9 + 0x30),lVar11);
                                                  lVar11 = thunk_FUN_02b79644(*(undefined8 *)puVar8)
                                                  ;
                                                  FUN_037a5cd0(lVar11,*(undefined8 *)puVar7);
                                                  lVar14 = thunk_FUN_02b79644(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_04dbdb8c(lVar14,0);
                                                  if (lVar14 != 0) {
                                                    *(undefined8 *)(lVar14 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_CreateNewDictionary__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar14 + 0x10) = *unaff_x26;
                                                  thunk_FUN_02bb0e9c();
                                                  if (lVar11 != 0) {
                                                    lVar15 = *(long *)(lVar11 + 0x10);
                                                    lVar16 = *(long *)
                                                  Method_Newtonsoft_Json_Linq_JProperty_Load__;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar15 != 0) {
                                                    uVar1 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                      plVar12 = (long *)(lVar15 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar12 = lVar14;
                                                      thunk_FUN_02bb0e9c(plVar12,lVar14);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar11,lVar14,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x28) = lVar11;
                                                  thunk_FUN_02bb0e9c((long *)(lVar9 + 0x28),lVar11);
                                                  lVar11 = *(long *)(lVar13 + 0x10);
                                                  lVar14 = *(long *)
                                                  Method_Newtonsoft_Json_Linq_JProperty_RemoveItem__
                                                  ;
                                                  *(int *)(lVar13 + 0x1c) =
                                                       *(int *)(lVar13 + 0x1c) + 1;
                                                  if (lVar11 != 0) {
                                                    uVar1 = *(uint *)(lVar13 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                      *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                      plVar12 = (long *)(lVar11 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar12 = lVar9;
                                                      thunk_FUN_02bb0e9c(plVar12,lVar9);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar13,lVar9,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar9 = thunk_FUN_02b79644(*(undefined8 *)puVar6);
                                                  FUN_04dbdb8c(lVar9,0);
                                                  puVar3 = PTR_DAT_0631b1f0;
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Oculus_Interaction_Interactable<HandGrabUseInteractor,_HandGrabUseInteractable>_SelectingInteractorAdded__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar9 + 0x20) =
                                                       *(undefined8 *)puVar3;
                                                  thunk_FUN_02bb0e9c((undefined8 *)(lVar9 + 0x20));
                                                  uVar10 = *(undefined8 *)puVar4;
                                                  *(undefined4 *)(lVar9 + 0x18) = 1;
                                                  lVar11 = thunk_FUN_02b79644(uVar10);
                                                  FUN_037a5cd0(lVar11,*(undefined8 *)puVar5);
                                                  if (lVar11 != 0) {
                                                    lVar14 = *(long *)(lVar11 + 0x10);
                                                    uVar10 = *(undefined8 *)puVar3;
                                                    lVar15 = *(long *)PTR_DAT_063173b8;
                                                    *(int *)(lVar11 + 0x1c) =
                                                         *(int *)(lVar11 + 0x1c) + 1;
                                                    if (lVar14 != 0) {
                                                      uVar1 = *(uint *)(lVar11 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                        *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                        *(undefined8 *)
                                                         (lVar14 + (long)(int)uVar1 * 8 + 0x20) =
                                                             uVar10;
                                                        thunk_FUN_02bb0e9c();
                                                      }
                                                      else {
                                                        FUN_037a6538(lVar11,uVar10,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x30) = lVar11;
                                                  thunk_FUN_02bb0e9c((long *)(lVar9 + 0x30),lVar11);
                                                  lVar11 = thunk_FUN_02b79644(*(undefined8 *)puVar8)
                                                  ;
                                                  FUN_037a5cd0(lVar11,*(undefined8 *)puVar7);
                                                  lVar14 = thunk_FUN_02b79644(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_04dbdb8c(lVar14,0);
                                                  if (lVar14 != 0) {
                                                    *(undefined8 *)(lVar14 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Newtonsoft_Json_JsonSerializer_set_SerializationBinder__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar14 + 0x10) = *unaff_x26;
                                                  thunk_FUN_02bb0e9c();
                                                  if (lVar11 != 0) {
                                                    lVar15 = *(long *)(lVar11 + 0x10);
                                                    lVar16 = *(long *)
                                                  Method_Newtonsoft_Json_Linq_JProperty_Load__;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar15 != 0) {
                                                    uVar1 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                      plVar12 = (long *)(lVar15 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar12 = lVar14;
                                                      thunk_FUN_02bb0e9c(plVar12,lVar14);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar11,lVar14,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x28) = lVar11;
                                                  thunk_FUN_02bb0e9c((long *)(lVar9 + 0x28),lVar11);
                                                  lVar11 = *(long *)(lVar13 + 0x10);
                                                  lVar14 = *(long *)
                                                  Method_Newtonsoft_Json_Linq_JProperty_RemoveItem__
                                                  ;
                                                  *(int *)(lVar13 + 0x1c) =
                                                       *(int *)(lVar13 + 0x1c) + 1;
                                                  if (lVar11 != 0) {
                                                    uVar1 = *(uint *)(lVar13 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                      *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                      plVar12 = (long *)(lVar11 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar12 = lVar9;
                                                      thunk_FUN_02bb0e9c(plVar12,lVar9);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar13,lVar9,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar9 = thunk_FUN_02b79644(*(undefined8 *)puVar6);
                                                  FUN_04dbdb8c(lVar9,0);
                                                  puVar3 = 
                                                  Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_AddReference__
                                                  ;
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Oculus_Interaction_Interactable<HandGrabUseInteractor,_HandGrabUseInteractable>_Awake__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar9 + 0x20) =
                                                       *(undefined8 *)puVar3;
                                                  thunk_FUN_02bb0e9c((undefined8 *)(lVar9 + 0x20));
                                                  uVar10 = *(undefined8 *)puVar4;
                                                  *(undefined4 *)(lVar9 + 0x18) = 0;
                                                  lVar11 = thunk_FUN_02b79644(uVar10);
                                                  FUN_037a5cd0(lVar11,*(undefined8 *)puVar5);
                                                  puVar3 = PTR_DAT_063173b8;
                                                  if (lVar11 != 0) {
                                                    lVar14 = *(long *)(lVar11 + 0x10);
                                                    uVar10 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Linq_Enumerable_Select<AndroidAxis,_string>__
                                                  ;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar14 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar10;
                                                      thunk_FUN_02bb0e9c();
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar11,uVar10,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(*(long *)
                                                  puVar3 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x30) = lVar11;
                                                  thunk_FUN_02bb0e9c((long *)(lVar9 + 0x30),lVar11);
                                                  lVar11 = thunk_FUN_02b79644(*(undefined8 *)puVar8)
                                                  ;
                                                  FUN_037a5cd0(lVar11,*(undefined8 *)puVar7);
                                                  lVar14 = thunk_FUN_02b79644(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_04dbdb8c(lVar14,0);
                                                  if (lVar14 != 0) {
                                                    *(undefined8 *)(lVar14 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_GetExpectedDescription__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar14 + 0x10) = *unaff_x26;
                                                  thunk_FUN_02bb0e9c();
                                                  if (lVar11 != 0) {
                                                    lVar15 = *(long *)(lVar11 + 0x10);
                                                    lVar16 = *(long *)
                                                  Method_Newtonsoft_Json_Linq_JProperty_Load__;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar15 != 0) {
                                                    uVar1 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                      plVar12 = (long *)(lVar15 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar12 = lVar14;
                                                      thunk_FUN_02bb0e9c(plVar12,lVar14);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar11,lVar14,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x28) = lVar11;
                                                  thunk_FUN_02bb0e9c((long *)(lVar9 + 0x28),lVar11);
                                                  lVar11 = *(long *)(lVar13 + 0x10);
                                                  lVar14 = *(long *)
                                                  Method_Newtonsoft_Json_Linq_JProperty_RemoveItem__
                                                  ;
                                                  *(int *)(lVar13 + 0x1c) =
                                                       *(int *)(lVar13 + 0x1c) + 1;
                                                  if (lVar11 != 0) {
                                                    uVar1 = *(uint *)(lVar13 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                      *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                      plVar12 = (long *)(lVar11 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar12 = lVar9;
                                                      thunk_FUN_02bb0e9c(plVar12,lVar9);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar13,lVar9,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar9 = thunk_FUN_02b79644(*(undefined8 *)puVar6);
                                                  FUN_04dbdb8c(lVar9,0);
                                                  puVar3 = 
                                                  Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_EnsureType__
                                                  ;
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Oculus_Interaction_Interactable<LocomotionAxisTurnerInteractor,_LocomotionAxisTurnerInteractable>__ctor__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar9 + 0x20) =
                                                       *(undefined8 *)puVar3;
                                                  thunk_FUN_02bb0e9c((undefined8 *)(lVar9 + 0x20));
                                                  uVar10 = *(undefined8 *)puVar4;
                                                  *(undefined4 *)(lVar9 + 0x18) = 2;
                                                  lVar11 = thunk_FUN_02b79644(uVar10);
                                                  FUN_037a5cd0(lVar11,*(undefined8 *)puVar5);
                                                  puVar3 = PTR_DAT_063173b8;
                                                  if (lVar11 != 0) {
                                                    lVar14 = *(long *)(lVar11 + 0x10);
                                                    uVar10 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Linq_Enumerable_Select<KeyValuePair<string,_JsonParser_JsonValue>,_string>__
                                                  ;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar14 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar10;
                                                      thunk_FUN_02bb0e9c();
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar11,uVar10,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(*(long *)
                                                  puVar3 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x30) = lVar11;
                                                  thunk_FUN_02bb0e9c((long *)(lVar9 + 0x30),lVar11);
                                                  lVar11 = thunk_FUN_02b79644(*(undefined8 *)puVar8)
                                                  ;
                                                  FUN_037a5cd0(lVar11,*(undefined8 *)puVar7);
                                                  lVar14 = thunk_FUN_02b79644(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_04dbdb8c(lVar14,0);
                                                  if (lVar14 != 0) {
                                                    *(undefined8 *)(lVar14 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_CreateNewObject__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar14 + 0x10) = *unaff_x26;
                                                  thunk_FUN_02bb0e9c();
                                                  if (lVar11 != 0) {
                                                    lVar15 = *(long *)(lVar11 + 0x10);
                                                    lVar16 = *(long *)
                                                  Method_Newtonsoft_Json_Linq_JProperty_Load__;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar15 != 0) {
                                                    uVar1 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                      plVar12 = (long *)(lVar15 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar12 = lVar14;
                                                      thunk_FUN_02bb0e9c(plVar12,lVar14);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar11,lVar14,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x28) = lVar11;
                                                  thunk_FUN_02bb0e9c((long *)(lVar9 + 0x28),lVar11);
                                                  lVar11 = *(long *)(lVar13 + 0x10);
                                                  lVar14 = *(long *)
                                                  Method_Newtonsoft_Json_Linq_JProperty_RemoveItem__
                                                  ;
                                                  *(int *)(lVar13 + 0x1c) =
                                                       *(int *)(lVar13 + 0x1c) + 1;
                                                  if (lVar11 != 0) {
                                                    uVar1 = *(uint *)(lVar13 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                      *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                      plVar12 = (long *)(lVar11 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar12 = lVar9;
                                                      thunk_FUN_02bb0e9c(plVar12,lVar9);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar13,lVar9,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar9 = thunk_FUN_02b79644(*(undefined8 *)puVar6);
                                                  FUN_04dbdb8c(lVar9,0);
                                                  puVar3 = 
                                                  Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_CreateNewList__
                                                  ;
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Oculus_Interaction_Interactable<HandGrabUseInteractor,_HandGrabUseInteractable>_get_Registry__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar9 + 0x20) =
                                                       *(undefined8 *)puVar3;
                                                  thunk_FUN_02bb0e9c((undefined8 *)(lVar9 + 0x20));
                                                  uVar10 = *(undefined8 *)puVar4;
                                                  *(undefined4 *)(lVar9 + 0x18) = 0;
                                                  lVar11 = thunk_FUN_02b79644(uVar10);
                                                  FUN_037a5cd0(lVar11,*(undefined8 *)puVar5);
                                                  puVar3 = PTR_DAT_063173b8;
                                                  if (lVar11 != 0) {
                                                    lVar14 = *(long *)(lVar11 + 0x10);
                                                    uVar10 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Linq_Enumerable_Select<FieldInfo,_Enum>__
                                                  ;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar14 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar10;
                                                      thunk_FUN_02bb0e9c();
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar11,uVar10,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(*(long *)
                                                  puVar3 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x30) = lVar11;
                                                  thunk_FUN_02bb0e9c((long *)(lVar9 + 0x30),lVar11);
                                                  lVar11 = thunk_FUN_02b79644(*(undefined8 *)puVar8)
                                                  ;
                                                  FUN_037a5cd0(lVar11,*(undefined8 *)puVar7);
                                                  lVar14 = thunk_FUN_02b79644(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_04dbdb8c(lVar14,0);
                                                  if (lVar14 != 0) {
                                                    *(undefined8 *)(lVar14 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_PopulateDictionary__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar14 + 0x10) = *unaff_x26;
                                                  thunk_FUN_02bb0e9c();
                                                  if (lVar11 != 0) {
                                                    lVar15 = *(long *)(lVar11 + 0x10);
                                                    lVar16 = *(long *)
                                                  Method_Newtonsoft_Json_Linq_JProperty_Load__;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar15 != 0) {
                                                    uVar1 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                      plVar12 = (long *)(lVar15 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar12 = lVar14;
                                                      thunk_FUN_02bb0e9c(plVar12,lVar14);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar11,lVar14,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x28) = lVar11;
                                                  thunk_FUN_02bb0e9c((long *)(lVar9 + 0x28),lVar11);
                                                  lVar11 = *(long *)(lVar13 + 0x10);
                                                  lVar14 = *(long *)
                                                  Method_Newtonsoft_Json_Linq_JProperty_RemoveItem__
                                                  ;
                                                  *(int *)(lVar13 + 0x1c) =
                                                       *(int *)(lVar13 + 0x1c) + 1;
                                                  if (lVar11 != 0) {
                                                    uVar1 = *(uint *)(lVar13 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                      *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                      plVar12 = (long *)(lVar11 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar12 = lVar9;
                                                      thunk_FUN_02bb0e9c(plVar12,lVar9);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar13,lVar9,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar9 = thunk_FUN_02b79644(*(undefined8 *)puVar6);
                                                  FUN_04dbdb8c(lVar9,0);
                                                  puVar3 = 
                                                  Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_CreateList__
                                                  ;
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_EnsureArrayContract__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar9 + 0x20) =
                                                       *(undefined8 *)puVar3;
                                                  thunk_FUN_02bb0e9c((undefined8 *)(lVar9 + 0x20));
                                                  uVar10 = *(undefined8 *)puVar4;
                                                  *(undefined4 *)(lVar9 + 0x18) = 0;
                                                  lVar11 = thunk_FUN_02b79644(uVar10);
                                                  FUN_037a5cd0(lVar11,*(undefined8 *)puVar5);
                                                  puVar3 = PTR_DAT_063173b8;
                                                  if (lVar11 != 0) {
                                                    lVar14 = *(long *)(lVar11 + 0x10);
                                                    uVar10 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Linq_Enumerable_Select<EnumMemberAttribute,_string>__
                                                  ;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar14 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar10;
                                                      thunk_FUN_02bb0e9c();
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar11,uVar10,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(*(long *)
                                                  puVar3 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x30) = lVar11;
                                                  thunk_FUN_02bb0e9c((long *)(lVar9 + 0x30),lVar11);
                                                  lVar11 = thunk_FUN_02b79644(*(undefined8 *)puVar8)
                                                  ;
                                                  FUN_037a5cd0(lVar11,*(undefined8 *)puVar7);
                                                  lVar14 = thunk_FUN_02b79644(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_04dbdb8c(lVar14,0);
                                                  if (lVar14 != 0) {
                                                    *(undefined8 *)(lVar14 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_CreateObject__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar14 + 0x10) = *unaff_x26;
                                                  thunk_FUN_02bb0e9c();
                                                  if (lVar11 != 0) {
                                                    lVar15 = *(long *)(lVar11 + 0x10);
                                                    lVar16 = *(long *)
                                                  Method_Newtonsoft_Json_Linq_JProperty_Load__;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar15 != 0) {
                                                    uVar1 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                      plVar12 = (long *)(lVar15 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar12 = lVar14;
                                                      thunk_FUN_02bb0e9c(plVar12,lVar14);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar11,lVar14,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x28) = lVar11;
                                                  thunk_FUN_02bb0e9c((long *)(lVar9 + 0x28),lVar11);
                                                  lVar11 = *(long *)(lVar13 + 0x10);
                                                  lVar14 = *(long *)
                                                  Method_Newtonsoft_Json_Linq_JProperty_RemoveItem__
                                                  ;
                                                  *(int *)(lVar13 + 0x1c) =
                                                       *(int *)(lVar13 + 0x1c) + 1;
                                                  if (lVar11 != 0) {
                                                    uVar1 = *(uint *)(lVar13 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                      *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                      plVar12 = (long *)(lVar11 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar12 = lVar9;
                                                      thunk_FUN_02bb0e9c(plVar12,lVar9);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar13,lVar9,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar9 = thunk_FUN_02b79644(*(undefined8 *)puVar6);
                                                  FUN_04dbdb8c(lVar9,0);
                                                  puVar3 = 
                                                  Method_LitJson_JsonData_LitJson_IJsonWrapper_GetBoolean__
                                                  ;
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x10) =
                                                         *(undefined8 *)
                                                          Method_LitJson_JsonData__ctor__;
                                                    thunk_FUN_02bb0e9c();
                                                    *(undefined8 *)(lVar9 + 0x20) =
                                                         *(undefined8 *)puVar3;
                                                    thunk_FUN_02bb0e9c((undefined8 *)(lVar9 + 0x20))
                                                    ;
                                                    uVar10 = *(undefined8 *)puVar4;
                                                    *(undefined4 *)(lVar9 + 0x18) = 3;
                                                    lVar11 = thunk_FUN_02b79644(uVar10);
                                                    FUN_037a5cd0(lVar11,*(undefined8 *)puVar5);
                                                    puVar3 = PTR_DAT_063173b8;
                                                    if (lVar11 != 0) {
                                                      lVar14 = *(long *)(lVar11 + 0x10);
                                                      uVar10 = *(undefined8 *)
                                                                                                                                
                                                  Method_System_Globalization_JapaneseCalendar_ToFourDigitYear__
                                                  ;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar14 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar10;
                                                      thunk_FUN_02bb0e9c();
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar11,uVar10,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(*(long *)
                                                  puVar3 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x30) = lVar11;
                                                  thunk_FUN_02bb0e9c((long *)(lVar9 + 0x30),lVar11);
                                                  lVar11 = thunk_FUN_02b79644(*(undefined8 *)puVar8)
                                                  ;
                                                  FUN_037a5cd0(lVar11,*(undefined8 *)puVar7);
                                                  lVar14 = thunk_FUN_02b79644(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_04dbdb8c(lVar14,0);
                                                  if (lVar14 != 0) {
                                                    *(undefined8 *)(lVar14 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_LitJson_JsonData_LitJson_IJsonWrapper_GetLong__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar14 + 0x10) = *unaff_x26;
                                                  thunk_FUN_02bb0e9c();
                                                  if (lVar11 != 0) {
                                                    lVar15 = *(long *)(lVar11 + 0x10);
                                                    lVar16 = *(long *)
                                                  Method_Newtonsoft_Json_Linq_JProperty_Load__;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar15 != 0) {
                                                    uVar1 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                      plVar12 = (long *)(lVar15 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar12 = lVar14;
                                                      thunk_FUN_02bb0e9c(plVar12,lVar14);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar11,lVar14,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x28) = lVar11;
                                                  thunk_FUN_02bb0e9c((long *)(lVar9 + 0x28),lVar11);
                                                  lVar11 = *(long *)(lVar13 + 0x10);
                                                  lVar14 = *(long *)
                                                  Method_Newtonsoft_Json_Linq_JProperty_RemoveItem__
                                                  ;
                                                  *(int *)(lVar13 + 0x1c) =
                                                       *(int *)(lVar13 + 0x1c) + 1;
                                                  if (lVar11 != 0) {
                                                    uVar1 = *(uint *)(lVar13 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                      *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                      plVar12 = (long *)(lVar11 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar12 = lVar9;
                                                      thunk_FUN_02bb0e9c(plVar12,lVar9);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar13,lVar9,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar9 = thunk_FUN_02b79644(*(undefined8 *)puVar6);
                                                  FUN_04dbdb8c(lVar9,0);
                                                  puVar3 = 
                                                  Method_Newtonsoft_Json_JsonConvert_DeserializeObject<Dictionary<string,_string>>__
                                                  ;
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x10) =
                                                         *(undefined8 *)PTR_DAT_06332138;
                                                    thunk_FUN_02bb0e9c();
                                                    *(undefined8 *)(lVar9 + 0x20) =
                                                         *(undefined8 *)puVar3;
                                                    thunk_FUN_02bb0e9c((undefined8 *)(lVar9 + 0x20))
                                                    ;
                                                    uVar10 = *(undefined8 *)puVar4;
                                                    *(undefined4 *)(lVar9 + 0x18) = 3;
                                                    lVar11 = thunk_FUN_02b79644(uVar10);
                                                    FUN_037a5cd0(lVar11,*(undefined8 *)puVar5);
                                                    puVar3 = PTR_DAT_063173b8;
                                                    if (lVar11 != 0) {
                                                      lVar14 = *(long *)(lVar11 + 0x10);
                                                      uVar10 = *(undefined8 *)
                                                                                                                                
                                                  Method_System_Collections_Generic_List<IntegratedSubsystemDescriptor>_GetEnumerator__
                                                  ;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar14 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar10;
                                                      thunk_FUN_02bb0e9c();
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar11,uVar10,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(*(long *)
                                                  puVar3 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x30) = lVar11;
                                                  thunk_FUN_02bb0e9c((long *)(lVar9 + 0x30),lVar11);
                                                  lVar11 = thunk_FUN_02b79644(*(undefined8 *)puVar8)
                                                  ;
                                                  FUN_037a5cd0(lVar11,*(undefined8 *)puVar7);
                                                  lVar14 = thunk_FUN_02b79644(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_04dbdb8c(lVar14,0);
                                                  if (lVar14 != 0) {
                                                    *(undefined8 *)(lVar14 + 0x18) =
                                                         *(undefined8 *)
                                                          Method_LitJson_JsonData_EnsureDictionary__
                                                    ;
                                                    thunk_FUN_02bb0e9c();
                                                    *(undefined8 *)(lVar14 + 0x10) = *unaff_x26;
                                                    thunk_FUN_02bb0e9c();
                                                    if (lVar11 != 0) {
                                                      lVar15 = *(long *)(lVar11 + 0x10);
                                                      lVar16 = *(long *)
                                                  Method_Newtonsoft_Json_Linq_JProperty_Load__;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar15 != 0) {
                                                    uVar1 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                      plVar12 = (long *)(lVar15 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar12 = lVar14;
                                                      thunk_FUN_02bb0e9c(plVar12,lVar14);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar11,lVar14,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x28) = lVar11;
                                                  thunk_FUN_02bb0e9c((long *)(lVar9 + 0x28),lVar11);
                                                  lVar11 = *(long *)(lVar13 + 0x10);
                                                  lVar14 = *(long *)
                                                  Method_Newtonsoft_Json_Linq_JProperty_RemoveItem__
                                                  ;
                                                  *(int *)(lVar13 + 0x1c) =
                                                       *(int *)(lVar13 + 0x1c) + 1;
                                                  if (lVar11 != 0) {
                                                    uVar1 = *(uint *)(lVar13 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                      *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                      plVar12 = (long *)(lVar11 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar12 = lVar9;
                                                      thunk_FUN_02bb0e9c(plVar12,lVar9);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar13,lVar9,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar9 = thunk_FUN_02b79644(*(undefined8 *)puVar6);
                                                  FUN_04dbdb8c(lVar9,0);
                                                  puVar6 = 
                                                  Method_Newtonsoft_Json_JsonSerializer_set_MetadataPropertyHandling__
                                                  ;
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Newtonsoft_Json_Serialization_JsonSerializerInternalBase_GetErrorContext__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar9 + 0x20) =
                                                       *(undefined8 *)puVar6;
                                                  thunk_FUN_02bb0e9c((undefined8 *)(lVar9 + 0x20));
                                                  uVar10 = *(undefined8 *)puVar4;
                                                  *(undefined4 *)(lVar9 + 0x18) = 4;
                                                  lVar11 = thunk_FUN_02b79644(uVar10);
                                                  FUN_037a5cd0(lVar11,*(undefined8 *)puVar5);
                                                  puVar6 = PTR_DAT_063173b8;
                                                  if (lVar11 != 0) {
                                                    lVar14 = *(long *)(lVar11 + 0x10);
                                                    uVar10 = *(undefined8 *)
                                                                                                                            
                                                  Method_UnityEngine_InputSystem_InputControlExtensions_CopyState__
                                                  ;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar14 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar10;
                                                      thunk_FUN_02bb0e9c();
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar11,uVar10,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(*(long *)
                                                  puVar6 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x30) = lVar11;
                                                  thunk_FUN_02bb0e9c((long *)(lVar9 + 0x30),lVar11);
                                                  lVar11 = thunk_FUN_02b79644(*(undefined8 *)puVar8)
                                                  ;
                                                  FUN_037a5cd0(lVar11,*(undefined8 *)puVar7);
                                                  lVar14 = thunk_FUN_02b79644(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_04dbdb8c(lVar14,0);
                                                  if (lVar14 != 0) {
                                                    *(undefined8 *)(lVar14 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Newtonsoft_Json_JsonReader_set_FloatParseHandling__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar14 + 0x10) = *unaff_x26;
                                                  thunk_FUN_02bb0e9c();
                                                  if (lVar11 != 0) {
                                                    lVar15 = *(long *)(lVar11 + 0x10);
                                                    lVar16 = *(long *)
                                                  Method_Newtonsoft_Json_Linq_JProperty_Load__;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar15 != 0) {
                                                    uVar1 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                      plVar12 = (long *)(lVar15 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar12 = lVar14;
                                                      thunk_FUN_02bb0e9c(plVar12,lVar14);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar11,lVar14,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x28) = lVar11;
                                                  thunk_FUN_02bb0e9c((long *)(lVar9 + 0x28),lVar11);
                                                  lVar11 = *(long *)(lVar13 + 0x10);
                                                  lVar14 = *(long *)
                                                  Method_Newtonsoft_Json_Linq_JProperty_RemoveItem__
                                                  ;
                                                  *(int *)(lVar13 + 0x1c) =
                                                       *(int *)(lVar13 + 0x1c) + 1;
                                                  if (lVar11 != 0) {
                                                    uVar1 = *(uint *)(lVar13 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                      *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                      plVar12 = (long *)(lVar11 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar12 = lVar9;
                                                      thunk_FUN_02bb0e9c(plVar12,lVar9);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar13,lVar9,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(unaff_x28 + 0x28) = lVar13;
                                                  uVar10 = thunk_FUN_02bb0e9c((long *)(unaff_x28 +
                                                                                      0x28),lVar13);
                                                  FUN_05b9ad1c(uVar10,unaff_x28);
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
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


