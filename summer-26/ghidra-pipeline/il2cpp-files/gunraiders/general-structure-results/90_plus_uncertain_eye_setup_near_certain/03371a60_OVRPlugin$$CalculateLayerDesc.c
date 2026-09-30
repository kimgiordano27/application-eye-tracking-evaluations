/*
FUNCTION_NAME: OVRPlugin$$CalculateLayerDesc
ENTRY_POINT: 03371a60
PROGRAM: gunraiders-libil2cpp.so
SCORE: 118
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;telemetry_or_network_hits_6;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__CalculateLayerDesc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 *unaff_x19;
  long *unaff_x20;
  undefined8 uVar15;
  long unaff_x21;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  
                    /* try { // try from 03371a64 to 03471a6f has its CatchHandler @ 03371760 */
  FUN_01c5d288(
              Method_System_Collections_Generic_List_Enumerator<VolumeAndPlaneSwitcher_LabelGeometryPair>_Dispose__
              );
                    /* try { // try from 03371a70 to 03471a77 has its CatchHandler @ 03371a78 */
  FUN_01c5d288(PTR_DAT_0422fb68);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03371a58 with catch @ 03371a78
                       catch(type#2 @ 00000000) { ... } // from try @ 03371a70 with catch @ 03371a78
                        */
  FUN_01c5d288(PTR_DAT_0422fb70);
  FUN_01c5d288(
              Method_System_Collections_Generic_List_Enumerator<EffectsBase_RegionManager_TextRegion>_Dispose__
              );
  FUN_01c5d288(
              Method_System_Collections_Generic_List_Enumerator<BinaryStorageBuffer_Writer_Chunk>_MoveNext__
              );
  FUN_01c5d288(
              Method_System_Collections_Generic_List_Enumerator<BinaryStorageBuffer_Writer_Chunk>_Dispose__
              );
  FUN_01c5d288(PTR_DAT_0422fb78);
  FUN_01c5d288(
              Method_System_Collections_Generic_List_Enumerator<EffectsBase_RegionManager_TextRegion>_MoveNext__
              );
  FUN_01c5d288(
              Method_System_Collections_Generic_List_Enumerator<VolumeAndPlaneSwitcher_LabelGeometryPair>_MoveNext__
              );
  FUN_01c5d288(PTR_DAT_0422fb80);
  FUN_01c5d288(PTR_DAT_0422fb88);
  FUN_01c5d288(PTR_DAT_0422fb90);
  FUN_01c5d288(UnityEngine_Splines_SplineAnimate_LoopMode_TypeInfo);
  FUN_01c5d288(
              Method_System_Collections_Generic_List_Enumerator<EffectsBase_RegionManager_TextRegion>_get_Current__
              );
  FUN_01c5d288(
              Method_System_Collections_Generic_Dictionary_Enumerator<KeyValuePair<Type,_XmlRootAttribute>,_XmlSerializer>_Dispose__
              );
  FUN_01c5d288(
              Method_System_Collections_Generic_Dictionary_Enumerator<KeyValuePair<Type,_XmlRootAttribute>,_XmlSerializer>_MoveNext__
              );
  FUN_01c5d288(
              Method_System_Collections_Generic_Dictionary_Enumerator<KeyValuePair<Type,_XmlRootAttribute>,_XmlSerializer>_get_Current__
              );
  FUN_01c5d288(
              Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator<byte,_HashSet<Player>>_Dispose__
              );
  FUN_01c5d288(
              Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator<byte,_HashSet<Player>>_MoveNext__
              );
  FUN_01c5d288(
              Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator<byte,_HashSet<Player>>_get_Current__
              );
  FUN_01c5d288(Method_System_Collections_Generic_Dictionary_Enumerator<byte,_LocalVoice>_Dispose__);
  FUN_01c5d288(Method_System_Collections_Generic_Dictionary_Enumerator<byte,_LocalVoice>_MoveNext__)
  ;
  FUN_01c5d288(
              Method_System_Collections_Generic_Dictionary_Enumerator<byte,_LocalVoice>_get_Current__
              );
  FUN_01c5d288(
              Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<MqttClientUnsubscribeResult>_Start<MqttClient_<UnsubscribeAsync>d__48>__
              );
  FUN_01c5d288(Method_System_Collections_Generic_Dictionary_Enumerator<byte,_object>_Dispose__);
  FUN_01c5d288(Method_System_Collections_Generic_Dictionary_Enumerator<byte,_object>_MoveNext__);
  FUN_01c5d288(Method_System_Collections_Generic_Dictionary_Enumerator<byte,_object>_get_Current__);
  FUN_01c5d288(UnityEngine_Splines_SplineAnimate_Method_TypeInfo);
  FUN_01c5d288(
              Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator<byte,_PhotonTeam>_Dispose__
              );
  FUN_01c5d288(
              Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator<byte,_PhotonTeam>_MoveNext__
              );
  FUN_01c5d288(System_MonoCustomAttrs_TypeInfo);
  FUN_01c5d288(PTR_DAT_0422fb20);
  FUN_01c5d288(PTR_DAT_0422fbd0);
  FUN_01c5d288(PTR_DAT_0422fbe0);
  FUN_01c5d288(
              Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator<byte,_PhotonTeam>_get_Current__
              );
  FUN_01c5d288(Method_System_Collections_Generic_Dictionary_Enumerator<byte,_RemoteVoice>_Dispose__)
  ;
  FUN_01c5d288(System_Linq_Expressions_Interpreter_NotInstruction_NotInt32_TypeInfo);
  FUN_01c5d288(Method_System_Collections_Generic_Dictionary_Enumerator<byte,_RemoteVoice>_MoveNext__
              );
  FUN_01c5d288(
              Method_System_Collections_Generic_Dictionary_Enumerator<byte,_RemoteVoice>_get_Current__
              );
  FUN_01c5d288(PTR_DAT_0422fb28);
  FUN_01c5d288(PTR_DAT_0422fbe8);
  FUN_01c5d288(PTR_DAT_0422fbf0);
  FUN_01c5d288(PTR_DAT_0422fbf8);
  FUN_01c5d288(
              Method_System_Collections_Generic_List_Enumerator<VolumeAndPlaneSwitcher_LabelGeometryPair>_get_Current__
              );
  *(undefined1 *)(unaff_x21 + 0x58e) = 1;
  lVar11 = thunk_FUN_01c496e0(*unaff_x22);
  FUN_02905dc0(lVar11,*unaff_x19);
  uVar15 = *unaff_x23;
  if (*(int *)(*unaff_x20 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  uVar15 = FUN_032e04b8(uVar15,0);
  puVar10 = Method_System_Collections_Generic_Dictionary_Enumerator<byte,_object>_MoveNext__;
  puVar9 = Method_System_Collections_Generic_Dictionary_Enumerator<byte,_LocalVoice>_MoveNext__;
  puVar8 = 
  Method_System_Collections_Generic_List_Enumerator<EffectsBase_RegionManager_TextRegion>_Dispose__;
  puVar7 = Method_System_Collections_Generic_Queue_Enumerator<SoundGroupVariationUpdater>_MoveNext__
  ;
  puVar6 = System_MonoCustomAttrs_TypeInfo;
  puVar5 = PTR_DAT_0422fb80;
  puVar4 = PTR_DAT_0422fb78;
  puVar3 = PTR_DAT_0422fb68;
  puVar2 = PTR_DAT_0422fb38;
  puVar1 = PTR_DAT_0422fb20;
  if (lVar11 != 0) {
    FUN_02906718(lVar11,uVar15,2,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List_Enumerator<EffectsBase_RegionManager_TextRegion>_Dispose__
                );
    uVar15 = FUN_032e04b8(*(undefined8 *)puVar10,0);
    FUN_02906718(lVar11,uVar15,3,*(undefined8 *)puVar8);
    uVar15 = FUN_032e04b8(*(undefined8 *)puVar2,0);
    FUN_02906718(lVar11,uVar15,4,*(undefined8 *)puVar8);
    uVar15 = FUN_032e04b8(*(undefined8 *)puVar9,0);
    FUN_02906718(lVar11,uVar15,5,*(undefined8 *)puVar8);
    uVar15 = FUN_032e04b8(*(undefined8 *)puVar1,0);
    FUN_02906718(lVar11,uVar15,6,*(undefined8 *)puVar8);
    uVar15 = FUN_032e04b8(*(undefined8 *)
                           Method_System_Collections_Generic_Dictionary_Enumerator<byte,_LocalVoice>_get_Current__
                          ,0);
    FUN_02906718(lVar11,uVar15,7,*(undefined8 *)puVar8);
    uVar15 = FUN_032e04b8(*(undefined8 *)puVar5,0);
    FUN_02906718(lVar11,uVar15,8,*(undefined8 *)puVar8);
    puVar2 = PTR_DAT_0422fb70;
    uVar15 = FUN_032e04b8(*(undefined8 *)
                           Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator<byte,_HashSet<Player>>_MoveNext__
                          ,0);
    FUN_02906718(lVar11,uVar15,9,*(undefined8 *)puVar8);
    puVar5 = 
    Method_System_Collections_Generic_Dictionary_Enumerator<byte,_RemoteVoice>_get_Current__;
    uVar15 = FUN_032e04b8(*(undefined8 *)PTR_DAT_0422fbe8,0);
    FUN_02906718(lVar11,uVar15,10,*(undefined8 *)puVar8);
    uVar15 = FUN_032e04b8(*(undefined8 *)
                           Method_System_Collections_Generic_Dictionary_Enumerator<byte,_LocalVoice>_Dispose__
                          ,0);
    FUN_02906718(lVar11,uVar15,0xb,*(undefined8 *)puVar8);
    uVar15 = FUN_032e04b8(*(undefined8 *)PTR_DAT_0422fb88,0);
    FUN_02906718(lVar11,uVar15,0xc,*(undefined8 *)puVar8);
    uVar15 = FUN_032e04b8(*(undefined8 *)
                           Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<MqttClientUnsubscribeResult>_Start<MqttClient_<UnsubscribeAsync>d__48>__
                          ,0);
    FUN_02906718(lVar11,uVar15,0xd,*(undefined8 *)puVar8);
    puVar1 = PTR_DAT_0422fb48;
    uVar15 = FUN_032e04b8(*(undefined8 *)PTR_DAT_0422fb48,0);
    FUN_02906718(lVar11,uVar15,0xe,*(undefined8 *)puVar8);
    uVar15 = FUN_032e04b8(*(undefined8 *)
                           Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator<byte,_PhotonTeam>_Dispose__
                          ,0);
    FUN_02906718(lVar11,uVar15,0xf,*(undefined8 *)puVar8);
    uVar15 = FUN_032e04b8(*(undefined8 *)PTR_DAT_0422fbf0,0);
    FUN_02906718(lVar11,uVar15,0x10,*(undefined8 *)puVar8);
    uVar15 = FUN_032e04b8(*(undefined8 *)
                           Method_System_Collections_Generic_Dictionary_Enumerator<byte,_object>_Dispose__
                          ,0);
    FUN_02906718(lVar11,uVar15,0x11,*(undefined8 *)puVar8);
    uVar15 = FUN_032e04b8(*(undefined8 *)PTR_DAT_0422fb90,0);
    FUN_02906718(lVar11,uVar15,0x12,*(undefined8 *)puVar8);
    uVar15 = FUN_032e04b8(*(undefined8 *)
                           Method_System_Collections_Generic_Dictionary_Enumerator<KeyValuePair<Type,_XmlRootAttribute>,_XmlSerializer>_Dispose__
                          ,0);
    FUN_02906718(lVar11,uVar15,0x13,*(undefined8 *)puVar8);
    uVar15 = FUN_032e04b8(*(undefined8 *)PTR_DAT_0422fbf8,0);
    FUN_02906718(lVar11,uVar15,0x14,*(undefined8 *)puVar8);
    uVar15 = FUN_032e04b8(*(undefined8 *)
                           Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator<byte,_PhotonTeam>_MoveNext__
                          ,0);
    FUN_02906718(lVar11,uVar15,0x15,*(undefined8 *)puVar8);
    uVar15 = FUN_032e04b8(*(undefined8 *)PTR_DAT_0422fbd0,0);
    FUN_02906718(lVar11,uVar15,0x16,*(undefined8 *)puVar8);
    uVar15 = FUN_032e04b8(*(undefined8 *)
                           Method_System_Collections_Generic_Dictionary_Enumerator<KeyValuePair<Type,_XmlRootAttribute>,_XmlSerializer>_MoveNext__
                          ,0);
    FUN_02906718(lVar11,uVar15,0x17,*(undefined8 *)puVar8);
    uVar15 = FUN_032e04b8(*(undefined8 *)puVar4,0);
    FUN_02906718(lVar11,uVar15,0x18,*(undefined8 *)puVar8);
    uVar15 = FUN_032e04b8(*(undefined8 *)
                           Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator<byte,_HashSet<Player>>_get_Current__
                          ,0);
    FUN_02906718(lVar11,uVar15,0x19,*(undefined8 *)puVar8);
    uVar15 = FUN_032e04b8(*(undefined8 *)puVar3,0);
    FUN_02906718(lVar11,uVar15,0x1a,*(undefined8 *)puVar8);
    uVar15 = FUN_032e04b8(*(undefined8 *)UnityEngine_Splines_SplineAnimate_Method_TypeInfo,0);
    FUN_02906718(lVar11,uVar15,0x1b,*(undefined8 *)puVar8);
    uVar15 = FUN_032e04b8(*(undefined8 *)
                           Method_System_Collections_Generic_List_Enumerator<VolumeAndPlaneSwitcher_LabelGeometryPair>_Dispose__
                          ,0);
    FUN_02906718(lVar11,uVar15,0x1c,*(undefined8 *)puVar8);
    uVar15 = FUN_032e04b8(*(undefined8 *)
                           Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator<byte,_HashSet<Player>>_Dispose__
                          ,0);
    FUN_02906718(lVar11,uVar15,0x1d,*(undefined8 *)puVar8);
    uVar15 = FUN_032e04b8(*(undefined8 *)puVar2,0);
    FUN_02906718(lVar11,uVar15,0x1e,*(undefined8 *)puVar8);
    uVar15 = FUN_032e04b8(*(undefined8 *)UnityEngine_Splines_SplineAnimate_LoopMode_TypeInfo,0);
    FUN_02906718(lVar11,uVar15,0x1f,*(undefined8 *)puVar8);
    uVar15 = FUN_032e04b8(*(undefined8 *)
                           Method_System_Collections_Generic_List_Enumerator<VolumeAndPlaneSwitcher_LabelGeometryPair>_MoveNext__
                          ,0);
    FUN_02906718(lVar11,uVar15,0x20,*(undefined8 *)puVar8);
    uVar15 = FUN_032e04b8(*(undefined8 *)
                           Method_System_Collections_Generic_List_Enumerator<EffectsBase_RegionManager_TextRegion>_get_Current__
                          ,0);
    FUN_02906718(lVar11,uVar15,0x21,*(undefined8 *)puVar8);
    uVar15 = FUN_032e04b8(*(undefined8 *)
                           System_Linq_Expressions_Interpreter_NotInstruction_NotInt32_TypeInfo,0);
    FUN_02906718(lVar11,uVar15,0x22,*(undefined8 *)puVar8);
    uVar15 = FUN_032e04b8(*(undefined8 *)
                           Method_System_Collections_Generic_Dictionary_Enumerator<byte,_object>_get_Current__
                          ,0);
    FUN_02906718(lVar11,uVar15,0x23,*(undefined8 *)puVar8);
    uVar15 = FUN_032e04b8(*(undefined8 *)PTR_DAT_0422fb30,0);
    FUN_02906718(lVar11,uVar15,0x24,*(undefined8 *)puVar8);
    uVar15 = FUN_032e04b8(*(undefined8 *)
                           Method_System_Collections_Generic_Dictionary_Enumerator<KeyValuePair<Type,_XmlRootAttribute>,_XmlSerializer>_get_Current__
                          ,0);
    FUN_02906718(lVar11,uVar15,0x25,*(undefined8 *)puVar8);
    uVar15 = FUN_032e04b8(*(undefined8 *)
                           Method_System_Collections_Generic_List_Enumerator<VolumeAndPlaneSwitcher_LabelGeometryPair>_get_Current__
                          ,0);
    FUN_02906718(lVar11,uVar15,0x26,*(undefined8 *)puVar8);
    uVar15 = FUN_032e04b8(*(undefined8 *)PTR_DAT_0422fbe0,0);
    FUN_02906718(lVar11,uVar15,0x27,*(undefined8 *)puVar8);
    uVar15 = FUN_032e04b8(*(undefined8 *)PTR_DAT_0422fb40,0);
    FUN_02906718(lVar11,uVar15,0x28,*(undefined8 *)puVar8);
    uVar15 = FUN_032e04b8(*(undefined8 *)
                           Method_UnityEngine_AddressableAssets_AssetReferenceT<Texture>__ctor__,0);
    FUN_02906718(lVar11,uVar15,0x29,*(undefined8 *)puVar8);
    **(long **)(*(long *)puVar7 + 0xb8) = lVar11;
    plVar12 = (long *)FUN_01c5d2fc(*(undefined8 *)
                                    Method_System_Collections_Generic_Dictionary_Enumerator<byte,_RemoteVoice>_MoveNext__
                                   ,0x13);
    uVar15 = FUN_032e04b8(*(undefined8 *)puVar6,0);
    lVar11 = thunk_FUN_01c496e0(*(undefined8 *)puVar5);
    FUN_03313b6c(lVar11,0);
    *(undefined8 *)(lVar11 + 0x10) = uVar15;
    *(undefined4 *)(lVar11 + 0x18) = 0;
    if (plVar12 != (long *)0x0) {
      lVar13 = thunk_FUN_01c495e4(lVar11,*(undefined8 *)(*plVar12 + 0x40));
      if (lVar13 != 0) {
        if ((int)plVar12[3] != 0) {
          plVar12[4] = lVar11;
          uVar15 = FUN_032e04b8(*(undefined8 *)puVar6,0);
          lVar11 = thunk_FUN_01c496e0(*(undefined8 *)puVar5);
          FUN_03313b6c(lVar11,0);
          *(undefined8 *)(lVar11 + 0x10) = uVar15;
          *(undefined4 *)(lVar11 + 0x18) = 1;
          lVar13 = thunk_FUN_01c495e4(lVar11,*(undefined8 *)(*plVar12 + 0x40));
          if (lVar13 == 0) goto LAB_03372a98;
          if (1 < *(uint *)(plVar12 + 3)) {
            plVar12[5] = lVar11;
            uVar15 = FUN_032e04b8(*(undefined8 *)puVar6,0);
            lVar11 = thunk_FUN_01c496e0(*(undefined8 *)puVar5);
            FUN_03313b6c(lVar11,0);
            *(undefined8 *)(lVar11 + 0x10) = uVar15;
            *(undefined4 *)(lVar11 + 0x18) = 0x29;
            lVar13 = thunk_FUN_01c495e4(lVar11,*(undefined8 *)(*plVar12 + 0x40));
            if (lVar13 == 0) goto LAB_03372a98;
            if (2 < *(uint *)(plVar12 + 3)) {
              plVar12[6] = lVar11;
              uVar15 = FUN_032e04b8(*(undefined8 *)PTR_DAT_0422fb38,0);
              lVar11 = thunk_FUN_01c496e0(*(undefined8 *)puVar5);
              FUN_03313b6c(lVar11,0);
              *(undefined8 *)(lVar11 + 0x10) = uVar15;
              *(undefined4 *)(lVar11 + 0x18) = 4;
              lVar13 = thunk_FUN_01c495e4(lVar11,*(undefined8 *)(*plVar12 + 0x40));
              if (lVar13 == 0) goto LAB_03372a98;
              if (3 < *(uint *)(plVar12 + 3)) {
                plVar12[7] = lVar11;
                uVar15 = FUN_032e04b8(*(undefined8 *)PTR_DAT_0422fb50,0);
                lVar11 = thunk_FUN_01c496e0(*(undefined8 *)puVar5);
                FUN_03313b6c(lVar11,0);
                *(undefined8 *)(lVar11 + 0x10) = uVar15;
                *(undefined4 *)(lVar11 + 0x18) = 2;
                lVar13 = thunk_FUN_01c495e4(lVar11,*(undefined8 *)(*plVar12 + 0x40));
                if (lVar13 == 0) goto LAB_03372a98;
                if (4 < *(uint *)(plVar12 + 3)) {
                  plVar12[8] = lVar11;
                  uVar15 = FUN_032e04b8(*(undefined8 *)PTR_DAT_0422fb20,0);
                  lVar11 = thunk_FUN_01c496e0(*(undefined8 *)puVar5);
                  FUN_03313b6c(lVar11,0);
                  *(undefined8 *)(lVar11 + 0x10) = uVar15;
                  *(undefined4 *)(lVar11 + 0x18) = 6;
                  lVar13 = thunk_FUN_01c495e4(lVar11,*(undefined8 *)(*plVar12 + 0x40));
                  if (lVar13 == 0) goto LAB_03372a98;
                  if (5 < *(uint *)(plVar12 + 3)) {
                    plVar12[9] = lVar11;
                    uVar15 = FUN_032e04b8(*(undefined8 *)puVar1,0);
                    lVar11 = thunk_FUN_01c496e0(*(undefined8 *)puVar5);
                    FUN_03313b6c(lVar11,0);
                    *(undefined8 *)(lVar11 + 0x10) = uVar15;
                    *(undefined4 *)(lVar11 + 0x18) = 0xe;
                    lVar13 = thunk_FUN_01c495e4(lVar11,*(undefined8 *)(*plVar12 + 0x40));
                    if (lVar13 == 0) goto LAB_03372a98;
                    if (6 < *(uint *)(plVar12 + 3)) {
                      plVar12[10] = lVar11;
                      uVar15 = FUN_032e04b8(*(undefined8 *)PTR_DAT_0422fb80,0);
                      lVar11 = thunk_FUN_01c496e0(*(undefined8 *)puVar5);
                      FUN_03313b6c(lVar11,0);
                      *(undefined8 *)(lVar11 + 0x10) = uVar15;
                      *(undefined4 *)(lVar11 + 0x18) = 8;
                      lVar13 = thunk_FUN_01c495e4(lVar11,*(undefined8 *)(*plVar12 + 0x40));
                      if (lVar13 == 0) goto LAB_03372a98;
                      if (7 < *(uint *)(plVar12 + 3)) {
                        plVar12[0xb] = lVar11;
                        uVar15 = FUN_032e04b8(*(undefined8 *)PTR_DAT_0422fbe8,0);
                        lVar11 = thunk_FUN_01c496e0(*(undefined8 *)puVar5);
                        FUN_03313b6c(lVar11,0);
                        *(undefined8 *)(lVar11 + 0x10) = uVar15;
                        *(undefined4 *)(lVar11 + 0x18) = 10;
                        lVar13 = thunk_FUN_01c495e4(lVar11,*(undefined8 *)(*plVar12 + 0x40));
                        if (lVar13 == 0) goto LAB_03372a98;
                        if (8 < *(uint *)(plVar12 + 3)) {
                          plVar12[0xc] = lVar11;
                          uVar15 = FUN_032e04b8(*(undefined8 *)PTR_DAT_0422fb88,0);
                          lVar11 = thunk_FUN_01c496e0(*(undefined8 *)puVar5);
                          FUN_03313b6c(lVar11,0);
                          *(undefined8 *)(lVar11 + 0x10) = uVar15;
                          *(undefined4 *)(lVar11 + 0x18) = 0xc;
                          lVar13 = thunk_FUN_01c495e4(lVar11,*(undefined8 *)(*plVar12 + 0x40));
                          if (lVar13 == 0) goto LAB_03372a98;
                          if (9 < *(uint *)(plVar12 + 3)) {
                            plVar12[0xd] = lVar11;
                            uVar15 = FUN_032e04b8(*(undefined8 *)PTR_DAT_0422fbf0,0);
                            lVar11 = thunk_FUN_01c496e0(*(undefined8 *)puVar5);
                            FUN_03313b6c(lVar11,0);
                            *(undefined8 *)(lVar11 + 0x10) = uVar15;
                            *(undefined4 *)(lVar11 + 0x18) = 0x10;
                            lVar13 = thunk_FUN_01c495e4(lVar11,*(undefined8 *)(*plVar12 + 0x40));
                            if (lVar13 == 0) goto LAB_03372a98;
                            if (10 < *(uint *)(plVar12 + 3)) {
                              plVar12[0xe] = lVar11;
                              uVar15 = FUN_032e04b8(*(undefined8 *)PTR_DAT_0422fb90,0);
                              lVar11 = thunk_FUN_01c496e0(*(undefined8 *)puVar5);
                              FUN_03313b6c(lVar11,0);
                              *(undefined8 *)(lVar11 + 0x10) = uVar15;
                              *(undefined4 *)(lVar11 + 0x18) = 0x12;
                              lVar13 = thunk_FUN_01c495e4(lVar11,*(undefined8 *)(*plVar12 + 0x40));
                              if (lVar13 == 0) goto LAB_03372a98;
                              if (0xb < *(uint *)(plVar12 + 3)) {
                                plVar12[0xf] = lVar11;
                                uVar15 = FUN_032e04b8(*(undefined8 *)PTR_DAT_0422fbf8,0);
                                lVar11 = thunk_FUN_01c496e0(*(undefined8 *)puVar5);
                                FUN_03313b6c(lVar11,0);
                                *(undefined8 *)(lVar11 + 0x10) = uVar15;
                                *(undefined4 *)(lVar11 + 0x18) = 0x14;
                                lVar13 = thunk_FUN_01c495e4(lVar11,*(undefined8 *)(*plVar12 + 0x40))
                                ;
                                if (lVar13 == 0) goto LAB_03372a98;
                                if (0xc < *(uint *)(plVar12 + 3)) {
                                  plVar12[0x10] = lVar11;
                                  uVar15 = FUN_032e04b8(*(undefined8 *)PTR_DAT_0422fbd0,0);
                                  lVar11 = thunk_FUN_01c496e0(*(undefined8 *)puVar5);
                                  FUN_03313b6c(lVar11,0);
                                  *(undefined8 *)(lVar11 + 0x10) = uVar15;
                                  *(undefined4 *)(lVar11 + 0x18) = 0x16;
                                  lVar13 = thunk_FUN_01c495e4(lVar11,*(undefined8 *)
                                                                      (*plVar12 + 0x40));
                                  if (lVar13 == 0) goto LAB_03372a98;
                                  if (0xd < *(uint *)(plVar12 + 3)) {
                                    plVar12[0x11] = lVar11;
                                    uVar15 = FUN_032e04b8(*(undefined8 *)PTR_DAT_0422fb78,0);
                                    lVar11 = thunk_FUN_01c496e0(*(undefined8 *)puVar5);
                                    FUN_03313b6c(lVar11,0);
                                    *(undefined8 *)(lVar11 + 0x10) = uVar15;
                                    *(undefined4 *)(lVar11 + 0x18) = 0x18;
                                    lVar13 = thunk_FUN_01c495e4(lVar11,*(undefined8 *)
                                                                        (*plVar12 + 0x40));
                                    if (lVar13 == 0) goto LAB_03372a98;
                                    if (0xe < *(uint *)(plVar12 + 3)) {
                                      plVar12[0x12] = lVar11;
                                      uVar15 = FUN_032e04b8(*(undefined8 *)puVar2,0);
                                      lVar11 = thunk_FUN_01c496e0(*(undefined8 *)puVar5);
                                      FUN_03313b6c(lVar11,0);
                                      *(undefined8 *)(lVar11 + 0x10) = uVar15;
                                      *(undefined4 *)(lVar11 + 0x18) = 0x1e;
                                      lVar13 = thunk_FUN_01c495e4(lVar11,*(undefined8 *)
                                                                          (*plVar12 + 0x40));
                                      if (lVar13 == 0) goto LAB_03372a98;
                                      if (0xf < *(uint *)(plVar12 + 3)) {
                                        plVar12[0x13] = lVar11;
                                        uVar15 = FUN_032e04b8(*(undefined8 *)PTR_DAT_0422fb68,0);
                                        lVar11 = thunk_FUN_01c496e0(*(undefined8 *)puVar5);
                                        FUN_03313b6c(lVar11,0);
                                        *(undefined8 *)(lVar11 + 0x10) = uVar15;
                                        *(undefined4 *)(lVar11 + 0x18) = 0x1a;
                                        lVar13 = thunk_FUN_01c495e4(lVar11,*(undefined8 *)
                                                                            (*plVar12 + 0x40));
                                        if (lVar13 == 0) goto LAB_03372a98;
                                        if (0x10 < *(uint *)(plVar12 + 3)) {
                                          plVar12[0x14] = lVar11;
                                          uVar15 = FUN_032e04b8(*(undefined8 *)puVar6,0);
                                          lVar11 = thunk_FUN_01c496e0(*(undefined8 *)puVar5);
                                          FUN_03313b6c(lVar11,0);
                                          *(undefined8 *)(lVar11 + 0x10) = uVar15;
                                          *(undefined4 *)(lVar11 + 0x18) = 0;
                                          lVar13 = thunk_FUN_01c495e4(lVar11,*(undefined8 *)
                                                                              (*plVar12 + 0x40));
                                          if (lVar13 == 0) goto LAB_03372a98;
                                          if (0x11 < *(uint *)(plVar12 + 3)) {
                                            plVar12[0x15] = lVar11;
                                            uVar15 = FUN_032e04b8(*(undefined8 *)PTR_DAT_0422fbe0,0)
                                            ;
                                            lVar11 = thunk_FUN_01c496e0(*(undefined8 *)puVar5);
                                            FUN_03313b6c(lVar11,0);
                                            *(undefined8 *)(lVar11 + 0x10) = uVar15;
                                            *(undefined4 *)(lVar11 + 0x18) = 0x27;
                                            lVar13 = thunk_FUN_01c495e4(lVar11,*(undefined8 *)
                                                                                (*plVar12 + 0x40));
                                            if (lVar13 == 0) goto LAB_03372a98;
                                            if (0x12 < *(uint *)(plVar12 + 3)) {
                                              plVar12[0x16] = lVar11;
                                              puVar2 = 
                                              Method_System_Collections_Generic_List_Enumerator<EffectsBase_RegionManager_TextRegion>_MoveNext__
                                              ;
                                              *(long **)(*(long *)(*(long *)puVar7 + 0xb8) + 8) =
                                                   plVar12;
                                              puVar4 = 
                                              Method_System_Collections_Generic_Dictionary_Enumerator<byte,_RemoteVoice>_Dispose__
                                              ;
                                              puVar3 = 
                                              Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator<byte,_PhotonTeam>_get_Current__
                                              ;
                                              puVar1 = 
                                              Method_System_Collections_Generic_List_Enumerator<BinaryStorageBuffer_Writer_Chunk>_get_Current__
                                              ;
                                              uVar15 = thunk_FUN_01c496e0(*(undefined8 *)puVar2);
                                              FUN_02b65188(uVar15,0,*(undefined8 *)puVar1,0);
                                              uVar14 = thunk_FUN_01c496e0(*(undefined8 *)puVar4);
                                              FUN_025ec1d8(uVar14,uVar15,*(undefined8 *)puVar3);
                                              *(undefined8 *)
                                               (*(long *)(*(long *)puVar7 + 0xb8) + 0x10) = uVar14;
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
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4ac();
      }
LAB_03372a98:
      uVar15 = thunk_FUN_01c58458();
                    /* WARNING: Subroutine does not return */
      FUN_01c5d37c(uVar15,0);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


