/*
FUNCTION_NAME: FUN_06584c74
ENTRY_POINT: 06584c74
PROGRAM: waitwhat-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_16;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_06584c74(long param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  int iVar15;
  int iVar16;
  bool bVar17;
  bool bVar18;
  undefined4 uVar19;
  long lVar20;
  long lVar21;
  undefined8 uVar22;
  ulong uVar23;
  undefined8 *puVar24;
  undefined4 *puVar25;
  ulong uVar26;
  long lVar27;
  uint *puVar28;
  int iVar29;
  undefined8 uVar30;
  long lVar31;
  undefined8 uVar32;
  long lVar33;
  uint *puVar34;
  ulong uVar35;
  undefined1 auVar36 [16];
  undefined1 local_168 [4] [16];
  undefined1 local_120 [16];
  undefined1 local_110 [16];
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  long local_68;
  
  puVar14 = System_Collections_Generic_List<EntryPreProcessor_AllocSize>_TypeInfo;
  if ((DAT_075574a9 & 1) == 0) {
    FUN_03188a78(System_Predicate<TransferCodingHeaderValue>_TypeInfo);
    FUN_03188a78(System_Collections_Generic_List<EntryPreProcessor_AllocSize>_TypeInfo);
    FUN_03188a78(System_Collections_Generic_IEnumerable<KeyValuePair<string,_object>>_TypeInfo);
    FUN_03188a78(System_Predicate<Transform>_TypeInfo);
    FUN_03188a78(PTR_DAT_070f1f80);
    FUN_03188a78(System_Collections_Generic_IEnumerable<StringOrRegex>_TypeInfo);
    FUN_03188a78(System_Predicate<Type>_TypeInfo);
    FUN_03188a78(System_Predicate<VisualElement>_TypeInfo);
    FUN_03188a78(UnityEngine_TextCore_Text_FastAction<bool,_Material>_TypeInfo);
    FUN_03188a78(System_Predicate<Volume>_TypeInfo);
    FUN_03188a78(PTR_DAT_070c28d8);
    FUN_03188a78(System_Predicate<VolumeComponent>_TypeInfo);
    FUN_03188a78(System_Predicate<VolumeProfile>_TypeInfo);
    FUN_03188a78(System_Predicate<AvatarLODManager_ContributingCamera>_TypeInfo);
    FUN_03188a78(System_Predicate<Awaitable_AwaitableAndFrameIndex>_TypeInfo);
    FUN_03188a78(System_Predicate<DebugUI_Panel>_TypeInfo);
    FUN_03188a78(System_Predicate<DebugUI_ValueTuple>_TypeInfo);
    FUN_03188a78(System_Collections_Generic_List<NameValueHeaderValue>_TypeInfo);
    FUN_03188a78(System_Predicate<EnvironmentReferences_Reference>_TypeInfo);
    FUN_03188a78(System_Predicate<EventProvider_Registration>_TypeInfo);
    FUN_03188a78(System_Predicate<GameSetupData_DrawingTwist>_TypeInfo);
    FUN_03188a78(PTR_DAT_070cb828);
    FUN_03188a78(System_Predicate<GameSetupData_Tool>_TypeInfo);
    FUN_03188a78(System_Predicate<HID_HIDElementDescriptor>_TypeInfo);
    FUN_03188a78(System_Predicate<InputEventTrace_DeviceInfo>_TypeInfo);
    FUN_03188a78(System_Predicate<LensFlareCommonSRP_LensFlareCompInfo>_TypeInfo);
    FUN_03188a78(System_Predicate<OVRPassthroughLayer_DeferredPassthroughMeshAddition>_TypeInfo);
    FUN_03188a78(System_Predicate<OVRPlugin_BoneCapsule>_TypeInfo);
    DAT_075574a9 = 1;
  }
  local_70 = 0;
  local_68 = 0;
  local_c0 = 0;
  local_110._0_8_ = 0;
  local_110._8_8_ = 0;
  local_120._0_8_ = 0;
  local_120._8_8_ = 0;
  uStack_d8 = 0;
  local_e0 = 0;
  uStack_c8 = 0;
  local_d0 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  local_80 = 0;
  uStack_f8 = 0;
  local_100 = 0;
  uStack_e8 = 0;
  local_f0 = 0;
  lVar20 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                     (*(undefined8 *)puVar14);
  FUN_065a7fb0(lVar20,0);
  if (lVar20 != 0) {
    *(undefined8 *)(lVar20 + 0x18) = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(lVar20 + 0x20) = *(undefined8 *)(param_1 + 0x50);
    puVar14 = System_Predicate<Awaitable_AwaitableAndFrameIndex>_TypeInfo;
    FUN_065a7b14(lVar20,*(undefined8 *)(param_1 + 0x48),0);
    local_168[0]._0_8_ = local_168[0]._0_8_ & 0xffffffff00000000;
    FUN_064e34d8(local_168,0x48,0x49,0x44,0x20,0);
    lVar21 = *(long *)puVar14;
    *(undefined4 *)(lVar20 + 0x28) = local_168[0]._0_4_;
    uVar30 = *(undefined8 *)(param_1 + 0x38);
    local_68 = lVar20;
    if (*(int *)(lVar21 + 0xe4) == 0) {
      thunk_FUN_031e5338();
      lVar21 = *(long *)puVar14;
    }
    puVar11 = System_Predicate<TransferCodingHeaderValue>_TypeInfo;
    puVar24 = *(undefined8 **)(lVar21 + 0xb8);
    lVar31 = puVar24[1];
    if (lVar31 == 0) {
      if (*(int *)(lVar21 + 0xe4) == 0) {
        thunk_FUN_031e5338();
        puVar24 = *(undefined8 **)(*(long *)puVar14 + 0xb8);
      }
      uVar32 = *puVar24;
      lVar31 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                         (*(undefined8 *)System_Predicate<Type>_TypeInfo);
      FUN_047ba364(lVar31,uVar32,*(undefined8 *)System_Predicate<VolumeComponent>_TypeInfo,0);
      *(long *)(*(long *)(*(long *)puVar14 + 0xb8) + 8) = lVar31;
    }
    FUN_03bee160(local_168,uVar30,lVar31,*(undefined8 *)puVar11);
    memcpy(&local_b0,local_168,0x48);
    lVar21 = *(long *)puVar14;
    uVar30 = *(undefined8 *)(param_1 + 0x38);
    if (*(int *)(lVar21 + 0xe4) == 0) {
      thunk_FUN_031e5338();
      lVar21 = *(long *)puVar14;
    }
    puVar24 = *(undefined8 **)(lVar21 + 0xb8);
    lVar31 = puVar24[2];
    if (lVar31 == 0) {
      if (*(int *)(lVar21 + 0xe4) == 0) {
        thunk_FUN_031e5338();
        puVar24 = *(undefined8 **)(*(long *)puVar14 + 0xb8);
      }
      uVar32 = *puVar24;
      lVar31 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                         (*(undefined8 *)System_Predicate<Type>_TypeInfo);
      FUN_047ba364(lVar31,uVar32,*(undefined8 *)System_Predicate<VolumeProfile>_TypeInfo,0);
      *(long *)(*(long *)(*(long *)puVar14 + 0xb8) + 0x10) = lVar31;
    }
    FUN_03bee160(&local_100,uVar30,lVar31,*(undefined8 *)puVar11);
    bVar17 = (int)local_b0 != 0x30;
    bVar18 = (int)local_100 != 0x31;
    if (!bVar17 && !bVar18) {
      iVar2 = (int)local_80;
      iVar16 = (int)local_d0;
      iVar15 = uStack_d8._4_4_;
      if ((int)local_d0 < (int)local_80) {
        iVar29 = (uStack_88._4_4_ + (int)local_80) - uStack_d8._4_4_;
        iVar3 = (int)local_d0;
      }
      else {
        iVar29 = ((int)local_d0 - (int)local_80) + uStack_d8._4_4_;
        iVar3 = (int)local_80;
      }
      iVar1 = iVar3 + 7;
      if (-1 < iVar3) {
        iVar1 = iVar3;
      }
      iVar1 = iVar1 >> 3;
      local_110 = FUN_065a7bc0(lVar20,*(undefined8 *)System_Predicate<DebugUI_ValueTuple>_TypeInfo,0
                              );
      puVar11 = System_Collections_Generic_List<NameValueHeaderValue>_TypeInfo;
      auVar36 = FUN_065a7fb8(local_110,
                             *(undefined8 *)
                              System_Collections_Generic_List<NameValueHeaderValue>_TypeInfo,0);
      local_110 = auVar36;
      auVar36 = FUN_065a8000(local_110,*(undefined8 *)puVar11,0);
      local_110 = auVar36;
      auVar36 = FUN_065a81b0(local_110,iVar3 % 8,0);
      local_110 = auVar36;
      auVar36 = FUN_065a8168(local_110,iVar1,0);
      local_110 = auVar36;
      auVar36 = FUN_065a8318(local_110,iVar29,0);
      local_110 = auVar36;
      lVar21 = FUN_03188b1c(*(undefined8 *)
                             System_Collections_Generic_IEnumerable<StringOrRegex>_TypeInfo,1);
      puVar11 = System_Collections_Generic_IEnumerable<KeyValuePair<string,_object>>_TypeInfo;
      lVar31 = *(long *)
                System_Collections_Generic_IEnumerable<KeyValuePair<string,_object>>_TypeInfo;
      if (*(int *)(lVar31 + 0xe4) == 0) {
        thunk_FUN_031e5338(lVar31);
        lVar31 = *(long *)puVar11;
      }
      if (lVar21 == 0) goto LAB_06585834;
      if (*(int *)(lVar21 + 0x18) == 0) {
LAB_06585830:
                    /* WARNING: Subroutine does not return */
        FUN_03188ce0();
      }
      uVar30 = **(undefined8 **)(lVar31 + 0xb8);
      *(undefined8 *)(lVar21 + 0x28) = (*(undefined8 **)(lVar31 + 0xb8))[1];
      *(undefined8 *)(lVar21 + 0x20) = uVar30;
      FUN_065a83fc(local_110,lVar21,0);
      uVar30 = FUN_06585838(&local_b0);
      uVar32 = FUN_06585838(&local_100);
      auVar36 = FUN_065a7bc0(lVar20,*(undefined8 *)
                                     System_Predicate<GameSetupData_DrawingTwist>_TypeInfo,0);
      puVar11 = PTR_DAT_070f1f80;
      lVar21 = *(long *)PTR_DAT_070f1f80;
      local_110 = auVar36;
      if ((int)local_a0 < 0) {
        if (*(int *)(lVar21 + 0xe4) == 0) {
          thunk_FUN_031e5338();
          lVar21 = *(long *)puVar11;
        }
        puVar25 = (undefined4 *)(*(long *)(lVar21 + 0xb8) + 8);
      }
      else {
        if (*(int *)(lVar21 + 0xe4) == 0) {
          thunk_FUN_031e5338();
          lVar21 = *(long *)puVar11;
        }
        puVar25 = (undefined4 *)(*(long *)(lVar21 + 0xb8) + 4);
      }
      auVar36 = FUN_065a80ec(local_110,*puVar25,0);
      iVar29 = iVar2 + 7;
      if (-1 < iVar2) {
        iVar29 = iVar2;
      }
      local_110 = auVar36;
      auVar36 = FUN_065a8168(local_110,(iVar29 >> 3) - iVar1,0);
      local_110 = auVar36;
      auVar36 = FUN_065a81b0(local_110,iVar2 % 8,0);
      local_110 = auVar36;
      auVar36 = FUN_065a8318(local_110,uStack_88._4_4_,0);
      local_110 = auVar36;
      auVar36 = FUN_065a86f8(local_110,uVar30,0);
      local_110 = auVar36;
      auVar36 = FUN_06585974(&local_b0);
      auVar36 = FUN_065a888c(local_110,auVar36._0_8_,auVar36._8_8_,0);
      local_110 = auVar36;
      uVar22 = FUN_06585a40(&local_b0);
      FUN_065a87b4(local_110,uVar22,0);
      auVar36 = FUN_065a7bc0(lVar20,*(undefined8 *)
                                     System_Predicate<InputEventTrace_DeviceInfo>_TypeInfo,0);
      lVar21 = *(long *)puVar11;
      local_110 = auVar36;
      if ((int)local_f0 < 0) {
        if (*(int *)(lVar21 + 0xe4) == 0) {
          thunk_FUN_031e5338();
          lVar21 = *(long *)puVar11;
        }
        puVar25 = (undefined4 *)(*(long *)(lVar21 + 0xb8) + 8);
      }
      else {
        if (*(int *)(lVar21 + 0xe4) == 0) {
          thunk_FUN_031e5338();
          lVar21 = *(long *)puVar11;
        }
        puVar25 = (undefined4 *)(*(long *)(lVar21 + 0xb8) + 4);
      }
      auVar36 = FUN_065a80ec(local_110,*puVar25,0);
      iVar2 = iVar16 + 7;
      if (-1 < iVar16) {
        iVar2 = iVar16;
      }
      local_110 = auVar36;
      auVar36 = FUN_065a8168(local_110,(iVar2 >> 3) - iVar1,0);
      local_110 = auVar36;
      auVar36 = FUN_065a81b0(local_110,iVar16 % 8,0);
      local_110 = auVar36;
      auVar36 = FUN_065a8318(local_110,iVar15,0);
      local_110 = auVar36;
      auVar36 = FUN_065a86f8(local_110,uVar32,0);
      local_110 = auVar36;
      auVar36 = FUN_06585974(&local_100);
      auVar36 = FUN_065a888c(local_110,auVar36._0_8_,auVar36._8_8_,0);
      local_110 = auVar36;
      uVar22 = FUN_06585a40(&local_100);
      FUN_065a87b4(local_110,uVar22,0);
      auVar36 = FUN_065a7bc0(lVar20,*(undefined8 *)System_Predicate<DebugUI_Panel>_TypeInfo,0);
      puVar11 = PTR_DAT_070c28d8;
      local_110 = auVar36;
      lVar21 = FUN_03188b1c(*(undefined8 *)PTR_DAT_070c28d8,2);
      auVar7._8_8_ = local_120._8_8_;
      auVar7._0_8_ = local_120._0_8_;
      auVar36._8_8_ = local_168[0]._8_8_;
      auVar36._0_8_ = local_168[0]._0_8_;
      if (lVar21 == 0) goto LAB_06585834;
      if ((*(int *)(lVar21 + 0x18) == 0) ||
         (*(undefined8 *)(lVar21 + 0x20) = uVar32,
         puVar13 = UnityEngine_TextCore_Text_FastAction<bool,_Material>_TypeInfo,
         puVar12 = PTR_DAT_070cb828, local_168[0] = auVar36, local_120 = auVar7,
         *(int *)(lVar21 + 0x18) == 1)) goto LAB_06585830;
      *(undefined8 *)(lVar21 + 0x28) =
           *(undefined8 *)System_Predicate<LensFlareCommonSRP_LensFlareCompInfo>_TypeInfo;
      uVar22 = FUN_03c457d4(*(undefined8 *)puVar12,lVar21,*(undefined8 *)puVar13);
      FUN_065a86f8(local_110,uVar22,0);
      auVar36 = FUN_065a7bc0(lVar20,*(undefined8 *)System_Predicate<GameSetupData_Tool>_TypeInfo,0);
      local_110 = auVar36;
      lVar21 = FUN_03188b1c(*(undefined8 *)puVar11,2);
      auVar8._8_8_ = local_120._8_8_;
      auVar8._0_8_ = local_120._0_8_;
      auVar4._8_8_ = local_168[0]._8_8_;
      auVar4._0_8_ = local_168[0]._0_8_;
      if (lVar21 == 0) goto LAB_06585834;
      if ((*(int *)(lVar21 + 0x18) == 0) ||
         (*(undefined8 *)(lVar21 + 0x20) = uVar32, local_168[0] = auVar4, local_120 = auVar8,
         *(int *)(lVar21 + 0x18) == 1)) goto LAB_06585830;
      *(undefined8 *)(lVar21 + 0x28) =
           *(undefined8 *)System_Predicate<OVRPlugin_BoneCapsule>_TypeInfo;
      uVar32 = FUN_03c457d4(*(undefined8 *)puVar12,lVar21,*(undefined8 *)puVar13);
      FUN_065a86f8(local_110,uVar32,0);
      auVar36 = FUN_065a7bc0(lVar20,*(undefined8 *)
                                     System_Predicate<OVRPassthroughLayer_DeferredPassthroughMeshAddition>_TypeInfo
                             ,0);
      local_110 = auVar36;
      lVar21 = FUN_03188b1c(*(undefined8 *)puVar11,2);
      auVar9._8_8_ = local_120._8_8_;
      auVar9._0_8_ = local_120._0_8_;
      auVar5._8_8_ = local_168[0]._8_8_;
      auVar5._0_8_ = local_168[0]._0_8_;
      if (lVar21 == 0) goto LAB_06585834;
      if ((*(int *)(lVar21 + 0x18) == 0) ||
         (*(undefined8 *)(lVar21 + 0x20) = uVar30, local_168[0] = auVar5, local_120 = auVar9,
         *(int *)(lVar21 + 0x18) == 1)) goto LAB_06585830;
      *(undefined8 *)(lVar21 + 0x28) =
           *(undefined8 *)System_Predicate<EnvironmentReferences_Reference>_TypeInfo;
      uVar32 = FUN_03c457d4(*(undefined8 *)puVar12,lVar21,*(undefined8 *)puVar13);
      FUN_065a86f8(local_110,uVar32,0);
      auVar36 = FUN_065a7bc0(lVar20,*(undefined8 *)
                                     System_Predicate<HID_HIDElementDescriptor>_TypeInfo,0);
      local_110 = auVar36;
      lVar21 = FUN_03188b1c(*(undefined8 *)puVar11,2);
      auVar10._8_8_ = local_120._8_8_;
      auVar10._0_8_ = local_120._0_8_;
      auVar6._8_8_ = local_168[0]._8_8_;
      auVar6._0_8_ = local_168[0]._0_8_;
      if (lVar21 == 0) goto LAB_06585834;
      if ((*(int *)(lVar21 + 0x18) == 0) ||
         (*(undefined8 *)(lVar21 + 0x20) = uVar30, local_168[0] = auVar6, local_120 = auVar10,
         *(int *)(lVar21 + 0x18) == 1)) goto LAB_06585830;
      *(undefined8 *)(lVar21 + 0x28) =
           *(undefined8 *)System_Predicate<EventProvider_Registration>_TypeInfo;
      uVar30 = FUN_03c457d4(*(undefined8 *)puVar12,lVar21,*(undefined8 *)puVar13);
      FUN_065a86f8(local_110,uVar30,0);
    }
    lVar21 = *(long *)(param_1 + 0x38);
    if (lVar21 != 0) {
      uVar26 = *(ulong *)(lVar21 + 0x18);
      if (0 < (int)uVar26) {
        uVar35 = 0;
        puVar34 = (uint *)(lVar21 + 0x50);
        do {
          if (*(uint *)(lVar21 + 0x18) <= uVar35) goto LAB_06585830;
          if ((puVar34[-4] == 1) &&
             (((puVar28 = puVar34 + -0xc, bVar17 || bVar18 || (puVar34[-0xb] != 1)) ||
              ((*puVar28 & 0xfffffffe) != 0x30)))) {
            lVar31 = FUN_06585ad4(puVar28);
            if (lVar31 != 0) {
              uVar30 = FUN_06585bdc(puVar28);
              auVar36 = FUN_065a7b58(lVar20,0);
              local_168[0] = auVar36;
              uVar32 = thunk_FUN_031c39fc(*(undefined8 *)System_Predicate<VisualElement>_TypeInfo,
                                          local_168);
              lVar27 = *(long *)puVar14;
              if (*(int *)(lVar27 + 0xe4) == 0) {
                thunk_FUN_031e5338(lVar27);
                lVar27 = *(long *)puVar14;
              }
              puVar24 = *(undefined8 **)(lVar27 + 0xb8);
              lVar33 = puVar24[3];
              if (lVar33 == 0) {
                if (*(int *)(lVar27 + 0xe4) == 0) {
                  thunk_FUN_031e5338(lVar27);
                  puVar24 = *(undefined8 **)(*(long *)puVar14 + 0xb8);
                }
                uVar22 = *puVar24;
                lVar33 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                                   (*(undefined8 *)System_Predicate<Transform>_TypeInfo);
                FUN_03e02e04(lVar33,uVar22,
                             *(undefined8 *)
                              System_Predicate<AvatarLODManager_ContributingCamera>_TypeInfo,0);
                *(long *)(*(long *)(*(long *)puVar14 + 0xb8) + 0x18) = lVar33;
              }
              uVar30 = FUN_03c468e8(uVar30,uVar32,lVar33,
                                    *(undefined8 *)System_Predicate<Volume>_TypeInfo);
              auVar36 = FUN_065a7bc0(lVar20,uVar30,0);
              local_110 = auVar36;
              uVar32 = FUN_06585dd4(puVar28);
              auVar36 = FUN_065a7fb8(local_110,uVar32,0);
              local_110 = auVar36;
              auVar36 = FUN_065a8000(local_110,lVar31,0);
              local_110 = auVar36;
              auVar36 = FUN_065a8168(local_110,*puVar34 >> 3,0);
              local_110 = auVar36;
              auVar36 = FUN_065a81b0(local_110,*puVar34 & 7,0);
              local_110 = auVar36;
              auVar36 = FUN_065a8318(local_110,puVar34[-1],0);
              local_110 = auVar36;
              uVar19 = FUN_06585ec4(puVar28);
              auVar36 = FUN_065a80ec(local_110,uVar19,0);
              local_110 = auVar36;
              auVar36 = FUN_06585974(puVar28);
              auVar36 = FUN_065a888c(local_110,auVar36._0_8_,auVar36._8_8_,0);
              local_110 = auVar36;
              uVar32 = FUN_06585a40(puVar28);
              auVar36 = FUN_065a87b4(local_110,uVar32,0);
              local_120 = auVar36;
              uVar32 = FUN_06585838(puVar28);
              uVar23 = FUN_057bebf8(uVar32,0);
              if ((uVar23 & 1) == 0) {
                FUN_065a86f8(local_120,uVar32,0);
              }
              lVar31 = FUN_06586018(puVar28);
              if (lVar31 != 0) {
                FUN_065a83fc(local_120,lVar31,0);
              }
              FUN_065861c8(puVar28,puVar28,uVar30,&local_68);
            }
          }
          uVar35 = uVar35 + 1;
          puVar34 = puVar34 + 0x12;
        } while ((uVar26 & 0xffffffff) != uVar35);
      }
      FUN_065a7d90(lVar20,0);
      return;
    }
  }
LAB_06585834:
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


