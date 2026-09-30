/*
FUNCTION_NAME: UnityEngine.Networking.PlayerConnection.PlayerConnection$$RegisterDisconnection
ENTRY_POINT: 05ba5cfc
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


void UnityEngine_Networking_PlayerConnection_PlayerConnection__RegisterDisconnection(long param_1)

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
  long *plVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined4 in_w10;
  long unaff_x20;
  undefined8 unaff_x21;
  undefined8 *unaff_x22;
  undefined8 *unaff_x26;
  long unaff_x28;
  
  *(undefined4 *)(unaff_x20 + 0x1c) = in_w10;
  if (param_1 != 0) {
    uVar1 = *(uint *)(unaff_x20 + 0x18);
    if (uVar1 < *(uint *)(param_1 + 0x18)) {
                    /* try { // try from 05ba5d18 to 05ca5d1b has its CatchHandler @ 05ba5d3c */
                    /* try { // try from 05ba5d1c to 05ca5d2b has its CatchHandler @ 05ba5a14 */
      *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
      *(undefined8 *)(param_1 + (long)(int)uVar1 * 8 + 0x20) = unaff_x21;
                    /* catch() { ... } // from try @ 05ba5c30 with catch @ 05ba5d28 */
      thunk_FUN_02bb0e9c();
                    /* try { // try from 05ba5d2c to 05ca5d33 has its CatchHandler @ 05ba5d98 */
    }
    else {
                    /* try { // try from 05ba5d34 to 05ca5d63 has its CatchHandler @ 05ba5a14 */
                    /* catch() { ... } // from try @ 05ba5d18 with catch @ 05ba5d3c */
                    /* catch() { ... } // from try @ 05ba5ce4 with catch @ 05ba5d40 */
                    /* catch() { ... } // from try @ 05ba5ca0 with catch @ 05ba5d44 */
      FUN_037a6538();
    }
                    /* catch() { ... } // from try @ 05ba5c8c with catch @ 05ba5d48 */
    lVar9 = thunk_FUN_02b79644(*unaff_x22);
    FUN_04dbdb8c(lVar9,0);
    if (lVar9 != 0) {
      *(undefined8 *)(lVar9 + 0x18) = *(undefined8 *)Method_Newtonsoft_Json_Linq_JToken_Replace__;
      *(undefined4 *)(lVar9 + 0x10) = 0x264;
      thunk_FUN_02bb0e9c();
      lVar13 = *(long *)(unaff_x20 + 0x10);
      *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
      puVar5 = Method_OVRSimpleJSON_JSONLazyCreator_Set<JSONBool>__;
      puVar2 = Method_Newtonsoft_Json_Linq_JProperty_RemoveItemAt__;
      puVar6 = Method_Newtonsoft_Json_Linq_JProperty_ClearItems__;
      if (lVar13 != 0) {
        uVar1 = *(uint *)(unaff_x20 + 0x18);
        if (uVar1 < *(uint *)(lVar13 + 0x18)) {
          *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
          plVar10 = (long *)(lVar13 + (long)(int)uVar1 * 8 + 0x20);
          *plVar10 = lVar9;
          thunk_FUN_02bb0e9c(plVar10,lVar9);
        }
        else {
          FUN_037a6538();
        }
        *(long *)(unaff_x28 + 0x20) = unaff_x20;
        thunk_FUN_02bb0e9c();
        lVar9 = thunk_FUN_02b79644(*(undefined8 *)puVar5);
        FUN_037a5cd0(lVar9,*(undefined8 *)puVar2);
        lVar13 = thunk_FUN_02b79644(*(undefined8 *)puVar6);
        FUN_04dbdb8c(lVar13,0);
        puVar7 = PTR_DAT_0631b1e8;
        puVar5 = PTR_DAT_063145b8;
        puVar2 = PTR_DAT_063145b0;
        if (lVar13 != 0) {
          *(undefined8 *)(lVar13 + 0x10) =
               *(undefined8 *)
                Method_Oculus_Interaction_Interactable<HandGrabInteractor,_HandGrabInteractable>_remove_WhenStateChanged__
          ;
          thunk_FUN_02bb0e9c();
          *(undefined8 *)(lVar13 + 0x20) = *(undefined8 *)puVar7;
          thunk_FUN_02bb0e9c((undefined8 *)(lVar13 + 0x20));
          uVar11 = *(undefined8 *)puVar2;
          *(undefined4 *)(lVar13 + 0x18) = 1;
          lVar12 = thunk_FUN_02b79644(uVar11);
          FUN_037a5cd0(lVar12,*(undefined8 *)puVar5);
          if (lVar12 != 0) {
            lVar14 = *(long *)(lVar12 + 0x10);
            uVar11 = *(undefined8 *)puVar7;
            lVar15 = *(long *)PTR_DAT_063173b8;
            *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
            puVar8 = Method_OVRSimpleJSON_JSONLazyCreator_Set<JSONNumber>__;
            puVar7 = Method_Newtonsoft_Json_Linq_JPropertyKeyedCollection_Contains__;
            puVar2 = Method_Newtonsoft_Json_Linq_JObject_ValidateToken__;
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
              *(long *)(lVar13 + 0x30) = lVar12;
              thunk_FUN_02bb0e9c((long *)(lVar13 + 0x30),lVar12);
              lVar12 = thunk_FUN_02b79644(*(undefined8 *)puVar8);
              FUN_037a5cd0(lVar12,*(undefined8 *)puVar7);
              lVar14 = thunk_FUN_02b79644(*(undefined8 *)puVar2);
              FUN_04dbdb8c(lVar14,0);
              puVar4 = 
              Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_EndProcessProperty__
              ;
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
                  lVar16 = *(long *)Method_Newtonsoft_Json_Linq_JProperty_Load__;
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
                                    (*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
                    }
                    *(long *)(lVar13 + 0x28) = lVar12;
                    thunk_FUN_02bb0e9c((long *)(lVar13 + 0x28),lVar12);
                    if (lVar9 != 0) {
                      lVar12 = *(long *)(lVar9 + 0x10);
                      lVar14 = *(long *)Method_Newtonsoft_Json_Linq_JProperty_RemoveItem__;
                      *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
                      if (lVar12 != 0) {
                        uVar1 = *(uint *)(lVar9 + 0x18);
                        if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                          *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                          plVar10 = (long *)(lVar12 + (long)(int)uVar1 * 8 + 0x20);
                          *plVar10 = lVar13;
                          thunk_FUN_02bb0e9c(plVar10,lVar13);
                        }
                        else {
                          FUN_037a6538(lVar9,lVar13,
                                       *(undefined8 *)
                                        (*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
                        }
                        lVar13 = thunk_FUN_02b79644(*(undefined8 *)puVar6);
                        FUN_04dbdb8c(lVar13,0);
                        puVar3 = Method_Newtonsoft_Json_JsonSerializer_set_NullValueHandling__;
                        if (lVar13 != 0) {
                          *(undefined8 *)(lVar13 + 0x10) =
                               *(undefined8 *)
                                Method_Oculus_Interaction_Interactable<HandGrabInteractor,_HandGrabInteractable>_add_WhenStateChanged__
                          ;
                          thunk_FUN_02bb0e9c();
                          *(undefined8 *)(lVar13 + 0x20) = *(undefined8 *)puVar3;
                          thunk_FUN_02bb0e9c((undefined8 *)(lVar13 + 0x20));
                          puVar3 = PTR_DAT_063145b0;
                          *(undefined4 *)(lVar13 + 0x18) = 0;
                          lVar12 = thunk_FUN_02b79644(*(undefined8 *)puVar3);
                          FUN_037a5cd0(lVar12,*(undefined8 *)puVar5);
                          puVar3 = PTR_DAT_063173b8;
                          if (lVar12 != 0) {
                            lVar14 = *(long *)(lVar12 + 0x10);
                            uVar11 = *(undefined8 *)
                                      Method_System_Linq_Enumerable_Select<DataColumn,_Type>__;
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
                                              (*(long *)(*(long *)(*(long *)puVar3 + 0x20) + 0xc0) +
                                              0x70));
                              }
                              *(long *)(lVar13 + 0x30) = lVar12;
                              thunk_FUN_02bb0e9c((long *)(lVar13 + 0x30),lVar12);
                              lVar12 = thunk_FUN_02b79644(*(undefined8 *)puVar8);
                              FUN_037a5cd0(lVar12,*(undefined8 *)puVar7);
                              lVar14 = thunk_FUN_02b79644(*(undefined8 *)puVar2);
                              FUN_04dbdb8c(lVar14,0);
                              if (lVar14 != 0) {
                                *(undefined8 *)(lVar14 + 0x18) = *(undefined8 *)puVar4;
                                thunk_FUN_02bb0e9c();
                                *(undefined8 *)(lVar14 + 0x10) = *unaff_x26;
                                thunk_FUN_02bb0e9c();
                                if (lVar12 != 0) {
                                  lVar15 = *(long *)(lVar12 + 0x10);
                                  lVar16 = *(long *)Method_Newtonsoft_Json_Linq_JProperty_Load__;
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
                                                    (*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) +
                                                    0x70));
                                    }
                                    puVar4 = PTR_DAT_063145b0;
                                    *(long *)(lVar13 + 0x28) = lVar12;
                                    thunk_FUN_02bb0e9c((long *)(lVar13 + 0x28),lVar12);
                                    lVar12 = *(long *)(lVar9 + 0x10);
                                    lVar14 = *(long *)
                                              Method_Newtonsoft_Json_Linq_JProperty_RemoveItem__;
                                    *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
                                    if (lVar12 != 0) {
                                      uVar1 = *(uint *)(lVar9 + 0x18);
                                      if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                        *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                        plVar10 = (long *)(lVar12 + (long)(int)uVar1 * 8 + 0x20);
                                        *plVar10 = lVar13;
                                        thunk_FUN_02bb0e9c(plVar10,lVar13);
                                      }
                                      else {
                                        FUN_037a6538(lVar9,lVar13,
                                                     *(undefined8 *)
                                                      (*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) +
                                                      0x70));
                                      }
                                      lVar13 = thunk_FUN_02b79644(*(undefined8 *)puVar6);
                                      FUN_04dbdb8c(lVar13,0);
                                      puVar3 = 
                                      OVR_OpenVR_IVRSystem__GetControllerStateWithPose_TypeInfo;
                                      if (lVar13 != 0) {
                                        *(undefined8 *)(lVar13 + 0x10) =
                                             *(undefined8 *)PTR_DAT_063210b8;
                                        thunk_FUN_02bb0e9c();
                                        *(undefined8 *)(lVar13 + 0x20) = *(undefined8 *)puVar3;
                                        thunk_FUN_02bb0e9c((undefined8 *)(lVar13 + 0x20));
                                        uVar11 = *(undefined8 *)puVar4;
                                        *(undefined4 *)(lVar13 + 0x18) = 0;
                                        lVar12 = thunk_FUN_02b79644(uVar11);
                                        FUN_037a5cd0(lVar12,*(undefined8 *)puVar5);
                                        puVar3 = PTR_DAT_063173b8;
                                        if (lVar12 != 0) {
                                          lVar14 = *(long *)(lVar12 + 0x10);
                                          uVar11 = *(undefined8 *)
                                                                                                        
                                                  Method_System_Linq_Enumerable_Select<Enum,_int>__;
                                          *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
                                          if (lVar14 != 0) {
                                            uVar1 = *(uint *)(lVar12 + 0x18);
                                            if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                              *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                              *(undefined8 *)(lVar14 + (long)(int)uVar1 * 8 + 0x20)
                                                   = uVar11;
                                              thunk_FUN_02bb0e9c();
                                            }
                                            else {
                                              FUN_037a6538(lVar12,uVar11,
                                                           *(undefined8 *)
                                                            (*(long *)(*(long *)(*(long *)puVar3 +
                                                                                0x20) + 0xc0) + 0x70
                                                            ));
                                            }
                                            *(long *)(lVar13 + 0x30) = lVar12;
                                            thunk_FUN_02bb0e9c((long *)(lVar13 + 0x30),lVar12);
                                            lVar12 = thunk_FUN_02b79644(*(undefined8 *)puVar8);
                                            FUN_037a5cd0(lVar12,*(undefined8 *)puVar7);
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
                                              if (lVar12 != 0) {
                                                lVar15 = *(long *)(lVar12 + 0x10);
                                                lVar16 = *(long *)
                                                  Method_Newtonsoft_Json_Linq_JProperty_Load__;
                                                *(int *)(lVar12 + 0x1c) =
                                                     *(int *)(lVar12 + 0x1c) + 1;
                                                if (lVar15 != 0) {
                                                  uVar1 = *(uint *)(lVar12 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                    *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                    plVar10 = (long *)(lVar15 + (long)(int)uVar1 * 8
                                                                      + 0x20);
                                                    *plVar10 = lVar14;
                                                    thunk_FUN_02bb0e9c(plVar10,lVar14);
                                                  }
                                                  else {
                                                    FUN_037a6538(lVar12,lVar14,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar16 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                  }
                                                  *(long *)(lVar13 + 0x28) = lVar12;
                                                  thunk_FUN_02bb0e9c((long *)(lVar13 + 0x28),lVar12)
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
                                                      plVar10 = (long *)(lVar12 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar10 = lVar13;
                                                      thunk_FUN_02bb0e9c(plVar10,lVar13);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar9,lVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar13 = thunk_FUN_02b79644(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_04dbdb8c(lVar13,0);
                                                  puVar3 = 
                                                  Method_Meta_XR_MRUtilityKit_DestructibleGlobalMeshSpawner_Shuffle<Vector3>__
                                                  ;
                                                  if (lVar13 != 0) {
                                                    *(undefined8 *)(lVar13 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Collections_Generic_List<Controller>_GetEnumerator__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar13 + 0x20) =
                                                       *(undefined8 *)puVar3;
                                                  thunk_FUN_02bb0e9c((undefined8 *)(lVar13 + 0x20));
                                                  uVar11 = *(undefined8 *)puVar4;
                                                  *(undefined4 *)(lVar13 + 0x18) = 0;
                                                  lVar12 = thunk_FUN_02b79644(uVar11);
                                                  FUN_037a5cd0(lVar12,*(undefined8 *)puVar5);
                                                  puVar3 = PTR_DAT_063173b8;
                                                  if (lVar12 != 0) {
                                                    lVar14 = *(long *)(lVar12 + 0x10);
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_Populate__
                                                  ;
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
                                                                    (*(long *)(*(long *)(*(long *)
                                                  puVar3 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar13 + 0x30) = lVar12;
                                                  thunk_FUN_02bb0e9c((long *)(lVar13 + 0x30),lVar12)
                                                  ;
                                                  lVar12 = thunk_FUN_02b79644(*(undefined8 *)puVar8)
                                                  ;
                                                  FUN_037a5cd0(lVar12,*(undefined8 *)puVar7);
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
                                                  if (lVar12 != 0) {
                                                    lVar15 = *(long *)(lVar12 + 0x10);
                                                    lVar16 = *(long *)
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
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar13 + 0x28) = lVar12;
                                                  thunk_FUN_02bb0e9c((long *)(lVar13 + 0x28),lVar12)
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
                                                      plVar10 = (long *)(lVar12 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar10 = lVar13;
                                                      thunk_FUN_02bb0e9c(plVar10,lVar13);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar9,lVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar13 = thunk_FUN_02b79644(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_04dbdb8c(lVar13,0);
                                                  puVar3 = PTR_DAT_0631b1f0;
                                                  if (lVar13 != 0) {
                                                    *(undefined8 *)(lVar13 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Oculus_Interaction_Interactable<HandGrabUseInteractor,_HandGrabUseInteractable>_SelectingInteractorAdded__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar13 + 0x20) =
                                                       *(undefined8 *)puVar3;
                                                  thunk_FUN_02bb0e9c((undefined8 *)(lVar13 + 0x20));
                                                  uVar11 = *(undefined8 *)puVar4;
                                                  *(undefined4 *)(lVar13 + 0x18) = 1;
                                                  lVar12 = thunk_FUN_02b79644(uVar11);
                                                  FUN_037a5cd0(lVar12,*(undefined8 *)puVar5);
                                                  if (lVar12 != 0) {
                                                    lVar14 = *(long *)(lVar12 + 0x10);
                                                    uVar11 = *(undefined8 *)puVar3;
                                                    lVar15 = *(long *)PTR_DAT_063173b8;
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
                                                  *(long *)(lVar13 + 0x30) = lVar12;
                                                  thunk_FUN_02bb0e9c((long *)(lVar13 + 0x30),lVar12)
                                                  ;
                                                  lVar12 = thunk_FUN_02b79644(*(undefined8 *)puVar8)
                                                  ;
                                                  FUN_037a5cd0(lVar12,*(undefined8 *)puVar7);
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
                                                  if (lVar12 != 0) {
                                                    lVar15 = *(long *)(lVar12 + 0x10);
                                                    lVar16 = *(long *)
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
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar13 + 0x28) = lVar12;
                                                  thunk_FUN_02bb0e9c((long *)(lVar13 + 0x28),lVar12)
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
                                                      plVar10 = (long *)(lVar12 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar10 = lVar13;
                                                      thunk_FUN_02bb0e9c(plVar10,lVar13);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar9,lVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar13 = thunk_FUN_02b79644(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_04dbdb8c(lVar13,0);
                                                  puVar3 = 
                                                  Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_AddReference__
                                                  ;
                                                  if (lVar13 != 0) {
                                                    *(undefined8 *)(lVar13 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Oculus_Interaction_Interactable<HandGrabUseInteractor,_HandGrabUseInteractable>_Awake__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar13 + 0x20) =
                                                       *(undefined8 *)puVar3;
                                                  thunk_FUN_02bb0e9c((undefined8 *)(lVar13 + 0x20));
                                                  uVar11 = *(undefined8 *)puVar4;
                                                  *(undefined4 *)(lVar13 + 0x18) = 0;
                                                  lVar12 = thunk_FUN_02b79644(uVar11);
                                                  FUN_037a5cd0(lVar12,*(undefined8 *)puVar5);
                                                  puVar3 = PTR_DAT_063173b8;
                                                  if (lVar12 != 0) {
                                                    lVar14 = *(long *)(lVar12 + 0x10);
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Linq_Enumerable_Select<AndroidAxis,_string>__
                                                  ;
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
                                                                    (*(long *)(*(long *)(*(long *)
                                                  puVar3 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar13 + 0x30) = lVar12;
                                                  thunk_FUN_02bb0e9c((long *)(lVar13 + 0x30),lVar12)
                                                  ;
                                                  lVar12 = thunk_FUN_02b79644(*(undefined8 *)puVar8)
                                                  ;
                                                  FUN_037a5cd0(lVar12,*(undefined8 *)puVar7);
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
                                                  if (lVar12 != 0) {
                                                    lVar15 = *(long *)(lVar12 + 0x10);
                                                    lVar16 = *(long *)
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
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar13 + 0x28) = lVar12;
                                                  thunk_FUN_02bb0e9c((long *)(lVar13 + 0x28),lVar12)
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
                                                      plVar10 = (long *)(lVar12 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar10 = lVar13;
                                                      thunk_FUN_02bb0e9c(plVar10,lVar13);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar9,lVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar13 = thunk_FUN_02b79644(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_04dbdb8c(lVar13,0);
                                                  puVar3 = 
                                                  Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_EnsureType__
                                                  ;
                                                  if (lVar13 != 0) {
                                                    *(undefined8 *)(lVar13 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Oculus_Interaction_Interactable<LocomotionAxisTurnerInteractor,_LocomotionAxisTurnerInteractable>__ctor__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar13 + 0x20) =
                                                       *(undefined8 *)puVar3;
                                                  thunk_FUN_02bb0e9c((undefined8 *)(lVar13 + 0x20));
                                                  uVar11 = *(undefined8 *)puVar4;
                                                  *(undefined4 *)(lVar13 + 0x18) = 2;
                                                  lVar12 = thunk_FUN_02b79644(uVar11);
                                                  FUN_037a5cd0(lVar12,*(undefined8 *)puVar5);
                                                  puVar3 = PTR_DAT_063173b8;
                                                  if (lVar12 != 0) {
                                                    lVar14 = *(long *)(lVar12 + 0x10);
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Linq_Enumerable_Select<KeyValuePair<string,_JsonParser_JsonValue>,_string>__
                                                  ;
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
                                                                    (*(long *)(*(long *)(*(long *)
                                                  puVar3 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar13 + 0x30) = lVar12;
                                                  thunk_FUN_02bb0e9c((long *)(lVar13 + 0x30),lVar12)
                                                  ;
                                                  lVar12 = thunk_FUN_02b79644(*(undefined8 *)puVar8)
                                                  ;
                                                  FUN_037a5cd0(lVar12,*(undefined8 *)puVar7);
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
                                                  if (lVar12 != 0) {
                                                    lVar15 = *(long *)(lVar12 + 0x10);
                                                    lVar16 = *(long *)
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
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar13 + 0x28) = lVar12;
                                                  thunk_FUN_02bb0e9c((long *)(lVar13 + 0x28),lVar12)
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
                                                      plVar10 = (long *)(lVar12 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar10 = lVar13;
                                                      thunk_FUN_02bb0e9c(plVar10,lVar13);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar9,lVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar13 = thunk_FUN_02b79644(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_04dbdb8c(lVar13,0);
                                                  puVar3 = 
                                                  Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_CreateNewList__
                                                  ;
                                                  if (lVar13 != 0) {
                                                    *(undefined8 *)(lVar13 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Oculus_Interaction_Interactable<HandGrabUseInteractor,_HandGrabUseInteractable>_get_Registry__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar13 + 0x20) =
                                                       *(undefined8 *)puVar3;
                                                  thunk_FUN_02bb0e9c((undefined8 *)(lVar13 + 0x20));
                                                  uVar11 = *(undefined8 *)puVar4;
                                                  *(undefined4 *)(lVar13 + 0x18) = 0;
                                                  lVar12 = thunk_FUN_02b79644(uVar11);
                                                  FUN_037a5cd0(lVar12,*(undefined8 *)puVar5);
                                                  puVar3 = PTR_DAT_063173b8;
                                                  if (lVar12 != 0) {
                                                    lVar14 = *(long *)(lVar12 + 0x10);
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Linq_Enumerable_Select<FieldInfo,_Enum>__
                                                  ;
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
                                                                    (*(long *)(*(long *)(*(long *)
                                                  puVar3 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar13 + 0x30) = lVar12;
                                                  thunk_FUN_02bb0e9c((long *)(lVar13 + 0x30),lVar12)
                                                  ;
                                                  lVar12 = thunk_FUN_02b79644(*(undefined8 *)puVar8)
                                                  ;
                                                  FUN_037a5cd0(lVar12,*(undefined8 *)puVar7);
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
                                                  if (lVar12 != 0) {
                                                    lVar15 = *(long *)(lVar12 + 0x10);
                                                    lVar16 = *(long *)
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
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar13 + 0x28) = lVar12;
                                                  thunk_FUN_02bb0e9c((long *)(lVar13 + 0x28),lVar12)
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
                                                      plVar10 = (long *)(lVar12 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar10 = lVar13;
                                                      thunk_FUN_02bb0e9c(plVar10,lVar13);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar9,lVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar13 = thunk_FUN_02b79644(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_04dbdb8c(lVar13,0);
                                                  puVar3 = 
                                                  Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_CreateList__
                                                  ;
                                                  if (lVar13 != 0) {
                                                    *(undefined8 *)(lVar13 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Newtonsoft_Json_Serialization_JsonSerializerInternalReader_EnsureArrayContract__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar13 + 0x20) =
                                                       *(undefined8 *)puVar3;
                                                  thunk_FUN_02bb0e9c((undefined8 *)(lVar13 + 0x20));
                                                  uVar11 = *(undefined8 *)puVar4;
                                                  *(undefined4 *)(lVar13 + 0x18) = 0;
                                                  lVar12 = thunk_FUN_02b79644(uVar11);
                                                  FUN_037a5cd0(lVar12,*(undefined8 *)puVar5);
                                                  puVar3 = PTR_DAT_063173b8;
                                                  if (lVar12 != 0) {
                                                    lVar14 = *(long *)(lVar12 + 0x10);
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Linq_Enumerable_Select<EnumMemberAttribute,_string>__
                                                  ;
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
                                                                    (*(long *)(*(long *)(*(long *)
                                                  puVar3 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar13 + 0x30) = lVar12;
                                                  thunk_FUN_02bb0e9c((long *)(lVar13 + 0x30),lVar12)
                                                  ;
                                                  lVar12 = thunk_FUN_02b79644(*(undefined8 *)puVar8)
                                                  ;
                                                  FUN_037a5cd0(lVar12,*(undefined8 *)puVar7);
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
                                                  if (lVar12 != 0) {
                                                    lVar15 = *(long *)(lVar12 + 0x10);
                                                    lVar16 = *(long *)
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
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar13 + 0x28) = lVar12;
                                                  thunk_FUN_02bb0e9c((long *)(lVar13 + 0x28),lVar12)
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
                                                      plVar10 = (long *)(lVar12 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar10 = lVar13;
                                                      thunk_FUN_02bb0e9c(plVar10,lVar13);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar9,lVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar13 = thunk_FUN_02b79644(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_04dbdb8c(lVar13,0);
                                                  puVar3 = 
                                                  Method_LitJson_JsonData_LitJson_IJsonWrapper_GetBoolean__
                                                  ;
                                                  if (lVar13 != 0) {
                                                    *(undefined8 *)(lVar13 + 0x10) =
                                                         *(undefined8 *)
                                                          Method_LitJson_JsonData__ctor__;
                                                    thunk_FUN_02bb0e9c();
                                                    *(undefined8 *)(lVar13 + 0x20) =
                                                         *(undefined8 *)puVar3;
                                                    thunk_FUN_02bb0e9c((undefined8 *)(lVar13 + 0x20)
                                                                      );
                                                    uVar11 = *(undefined8 *)puVar4;
                                                    *(undefined4 *)(lVar13 + 0x18) = 3;
                                                    lVar12 = thunk_FUN_02b79644(uVar11);
                                                    FUN_037a5cd0(lVar12,*(undefined8 *)puVar5);
                                                    puVar3 = PTR_DAT_063173b8;
                                                    if (lVar12 != 0) {
                                                      lVar14 = *(long *)(lVar12 + 0x10);
                                                      uVar11 = *(undefined8 *)
                                                                                                                                
                                                  Method_System_Globalization_JapaneseCalendar_ToFourDigitYear__
                                                  ;
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
                                                                    (*(long *)(*(long *)(*(long *)
                                                  puVar3 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar13 + 0x30) = lVar12;
                                                  thunk_FUN_02bb0e9c((long *)(lVar13 + 0x30),lVar12)
                                                  ;
                                                  lVar12 = thunk_FUN_02b79644(*(undefined8 *)puVar8)
                                                  ;
                                                  FUN_037a5cd0(lVar12,*(undefined8 *)puVar7);
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
                                                  if (lVar12 != 0) {
                                                    lVar15 = *(long *)(lVar12 + 0x10);
                                                    lVar16 = *(long *)
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
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar13 + 0x28) = lVar12;
                                                  thunk_FUN_02bb0e9c((long *)(lVar13 + 0x28),lVar12)
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
                                                      plVar10 = (long *)(lVar12 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar10 = lVar13;
                                                      thunk_FUN_02bb0e9c(plVar10,lVar13);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar9,lVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar13 = thunk_FUN_02b79644(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_04dbdb8c(lVar13,0);
                                                  puVar3 = 
                                                  Method_Newtonsoft_Json_JsonConvert_DeserializeObject<Dictionary<string,_string>>__
                                                  ;
                                                  if (lVar13 != 0) {
                                                    *(undefined8 *)(lVar13 + 0x10) =
                                                         *(undefined8 *)PTR_DAT_06332138;
                                                    thunk_FUN_02bb0e9c();
                                                    *(undefined8 *)(lVar13 + 0x20) =
                                                         *(undefined8 *)puVar3;
                                                    thunk_FUN_02bb0e9c((undefined8 *)(lVar13 + 0x20)
                                                                      );
                                                    uVar11 = *(undefined8 *)puVar4;
                                                    *(undefined4 *)(lVar13 + 0x18) = 3;
                                                    lVar12 = thunk_FUN_02b79644(uVar11);
                                                    FUN_037a5cd0(lVar12,*(undefined8 *)puVar5);
                                                    puVar3 = PTR_DAT_063173b8;
                                                    if (lVar12 != 0) {
                                                      lVar14 = *(long *)(lVar12 + 0x10);
                                                      uVar11 = *(undefined8 *)
                                                                                                                                
                                                  Method_System_Collections_Generic_List<IntegratedSubsystemDescriptor>_GetEnumerator__
                                                  ;
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
                                                                    (*(long *)(*(long *)(*(long *)
                                                  puVar3 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar13 + 0x30) = lVar12;
                                                  thunk_FUN_02bb0e9c((long *)(lVar13 + 0x30),lVar12)
                                                  ;
                                                  lVar12 = thunk_FUN_02b79644(*(undefined8 *)puVar8)
                                                  ;
                                                  FUN_037a5cd0(lVar12,*(undefined8 *)puVar7);
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
                                                    if (lVar12 != 0) {
                                                      lVar15 = *(long *)(lVar12 + 0x10);
                                                      lVar16 = *(long *)
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
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar13 + 0x28) = lVar12;
                                                  thunk_FUN_02bb0e9c((long *)(lVar13 + 0x28),lVar12)
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
                                                      plVar10 = (long *)(lVar12 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar10 = lVar13;
                                                      thunk_FUN_02bb0e9c(plVar10,lVar13);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar9,lVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar13 = thunk_FUN_02b79644(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_04dbdb8c(lVar13,0);
                                                  puVar6 = 
                                                  Method_Newtonsoft_Json_JsonSerializer_set_MetadataPropertyHandling__
                                                  ;
                                                  if (lVar13 != 0) {
                                                    *(undefined8 *)(lVar13 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_Newtonsoft_Json_Serialization_JsonSerializerInternalBase_GetErrorContext__
                                                  ;
                                                  thunk_FUN_02bb0e9c();
                                                  *(undefined8 *)(lVar13 + 0x20) =
                                                       *(undefined8 *)puVar6;
                                                  thunk_FUN_02bb0e9c((undefined8 *)(lVar13 + 0x20));
                                                  uVar11 = *(undefined8 *)puVar4;
                                                  *(undefined4 *)(lVar13 + 0x18) = 4;
                                                  lVar12 = thunk_FUN_02b79644(uVar11);
                                                  FUN_037a5cd0(lVar12,*(undefined8 *)puVar5);
                                                  puVar6 = PTR_DAT_063173b8;
                                                  if (lVar12 != 0) {
                                                    lVar14 = *(long *)(lVar12 + 0x10);
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  Method_UnityEngine_InputSystem_InputControlExtensions_CopyState__
                                                  ;
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
                                                                    (*(long *)(*(long *)(*(long *)
                                                  puVar6 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar13 + 0x30) = lVar12;
                                                  thunk_FUN_02bb0e9c((long *)(lVar13 + 0x30),lVar12)
                                                  ;
                                                  lVar12 = thunk_FUN_02b79644(*(undefined8 *)puVar8)
                                                  ;
                                                  FUN_037a5cd0(lVar12,*(undefined8 *)puVar7);
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
                                                  if (lVar12 != 0) {
                                                    lVar15 = *(long *)(lVar12 + 0x10);
                                                    lVar16 = *(long *)
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
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar13 + 0x28) = lVar12;
                                                  thunk_FUN_02bb0e9c((long *)(lVar13 + 0x28),lVar12)
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
                                                      plVar10 = (long *)(lVar12 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar10 = lVar13;
                                                      thunk_FUN_02bb0e9c(plVar10,lVar13);
                                                    }
                                                    else {
                                                      FUN_037a6538(lVar9,lVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(unaff_x28 + 0x28) = lVar9;
                                                  uVar11 = thunk_FUN_02bb0e9c((long *)(unaff_x28 +
                                                                                      0x28),lVar9);
                                                  FUN_05b9ad1c(uVar11,unaff_x28);
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
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


