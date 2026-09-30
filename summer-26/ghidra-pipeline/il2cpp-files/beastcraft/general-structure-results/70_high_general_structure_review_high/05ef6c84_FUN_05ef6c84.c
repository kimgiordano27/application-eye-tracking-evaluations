/*
FUNCTION_NAME: FUN_05ef6c84
ENTRY_POINT: 05ef6c84
PROGRAM: beastcraft-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;ray_or_cast_sink_hits_2;telemetry_or_network_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x05ef76e4) */
/* WARNING: Removing unreachable block (ram,0x05ef7c3c) */

void FUN_05ef6c84(long param_1,long param_2,long param_3,undefined8 *param_4,undefined8 param_5,
                 undefined8 param_6,undefined8 param_7,byte param_8,undefined8 param_9,byte param_10
                 )

{
  bool bVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  byte bVar20;
  uint uVar21;
  undefined4 uVar29;
  uint uVar22;
  int iVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  undefined8 uVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  undefined8 uVar34;
  long *plVar35;
  ulong uVar36;
  undefined8 *puVar37;
  long *plVar38;
  int iVar28;
  int *piVar39;
  long lVar40;
  char cVar41;
  char cVar42;
  undefined8 uVar43;
  long lVar44;
  undefined8 uVar45;
  undefined8 uVar46;
  undefined8 uVar47;
  undefined8 uVar48;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  ulong in_stack_fffffffffffffe10;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined4 local_120;
  undefined8 local_110;
  long **pplStack_108;
  undefined1 local_100 [16];
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  long *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  if ((DAT_06e94392 & 1) == 0) {
    FUN_02e3ca1c(PTR_DAT_06a368b8);
    FUN_02e3ca1c(MessagePipe_ISingletonAsyncPublisher<TMessage>_var);
    FUN_02e3ca1c(PTR_DAT_06ab5e90);
    FUN_02e3ca1c(MessagePipe_ISingletonAsyncPublisher<TKey,_TMessage>_var);
    FUN_02e3ca1c(PTR_DAT_06ab5f18);
    FUN_02e3ca1c(PTR_DAT_06ab5e98);
    FUN_02e3ca1c(PTR_DAT_06a6ce50);
    FUN_02e3ca1c(PTR_DAT_06a2ed98);
    FUN_02e3ca1c(PTR_DAT_06ab07f8);
    FUN_02e3ca1c(PTR_DAT_06a2ef10);
    FUN_02e3ca1c(MessagePipe_ISingletonAsyncSubscriber<TMessage>_var);
    FUN_02e3ca1c(PTR_DAT_06ab0490);
    FUN_02e3ca1c(PTR_DAT_06a2ed80);
    FUN_02e3ca1c(PTR_DAT_06ab5e18);
    FUN_02e3ca1c(MessagePipe_ISingletonAsyncSubscriber<TKey,_TMessage>_var);
    FUN_02e3ca1c(PTR_DAT_06ab5ec8);
    FUN_02e3ca1c(Unity_Services_Economy_Internal_Models_CurrencyBalanceResponse_var);
    FUN_02e3ca1c(MessagePipe_ISingletonPublisher<TMessage>_var);
    FUN_02e3ca1c(MessagePipe_IAsyncRequestHandlerFilter_var);
    FUN_02e3ca1c(PTR_DAT_06a704f0);
    FUN_02e3ca1c(Best_HTTP_Hosts_Connections_HTTP2_HTTP2DataFrame_var);
    FUN_02e3ca1c(Best_HTTP_Hosts_Connections_HTTP2_HTTP2HeadersFrame_var);
    FUN_02e3ca1c(Best_HTTP_Hosts_Connections_HTTP2_HTTP2Settings_var);
    FUN_02e3ca1c(Best_HTTP_Hosts_Connections_HTTP2_HTTP2SettingsFrame_var);
    FUN_02e3ca1c(Best_HTTP_Shared_HTTPManager_var);
    FUN_02e3ca1c(UnityEngine_UIElements_HandleDragAndDropArgs_var);
    FUN_02e3ca1c(UnityEngine_Hash128_var);
    FUN_02e3ca1c(MemoryPack_Formatters_HashSetFormatter<T>_var);
    FUN_02e3ca1c(System_Collections_Generic_HashSet<T>_var);
    FUN_02e3ca1c(ExitGames_Client_Photon_Hashtable_var);
    FUN_02e3ca1c(
                System_Func<T1,_T2,_T3,_T4,_T5,_T6,_T7,_T8,_T9,_T10,_T11,_T12,_T13,_T14,_TResult>_var
                );
    FUN_02e3ca1c(System_Collections_Hashtable_var);
    FUN_02e3ca1c(MessagePipe_ISingletonPublisher<TKey,_TMessage>_var);
    FUN_02e3ca1c(MessagePipe_ISingletonSubscriber<TMessage>_var);
    FUN_02e3ca1c(Fusion_LagCompensation_HitboxCollider_var);
    FUN_02e3ca1c(System_ComponentModel_IChangeTracking_var);
    FUN_02e3ca1c(Unity_Hierarchy_HierarchySearchQueryDescriptor_var);
    DAT_06e94392 = 1;
  }
  puVar15 = MessagePipe_ISingletonAsyncPublisher<TKey,_TMessage>_var;
  puVar14 = PTR_DAT_06ab5f18;
  puVar13 = PTR_DAT_06ab5e90;
  puVar12 = PTR_DAT_06a704f0;
  local_70 = 0;
  uStack_68 = 0;
  local_80 = 0;
  local_78 = (long *)0x0;
  local_90 = 0;
  uStack_88 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_f0 = 0;
  uStack_e8 = 0;
  local_100._0_8_ = 0;
  local_100._8_8_ = 0;
  auVar49 = ZEXT816(0);
  if (param_3 == 0) goto LAB_05ef7c34;
  uVar30 = FUN_05eaedc0(param_3,*(undefined8 *)PTR_DAT_06ab5e98);
  FUN_05eaedc0(param_3,*(undefined8 *)puVar14);
  lVar31 = FUN_05eaedc0(param_3,*(undefined8 *)puVar13);
  lVar32 = FUN_05eaedc0(param_3,*(undefined8 *)puVar15);
  if (*(int *)(*(long *)puVar12 + 0xe4) == 0) {
    thunk_FUN_02e9a04c(*(long *)puVar12);
  }
  lVar33 = FUN_05db558c(0);
  puVar19 = System_Collections_Hashtable_var;
  puVar18 = ExitGames_Client_Photon_Hashtable_var;
  puVar17 = System_Collections_Generic_HashSet<T>_var;
  puVar16 = MemoryPack_Formatters_HashSetFormatter<T>_var;
  puVar15 = UnityEngine_Hash128_var;
  puVar14 = Best_HTTP_Hosts_Connections_HTTP2_HTTP2SettingsFrame_var;
  puVar13 = Best_HTTP_Hosts_Connections_HTTP2_HTTP2HeadersFrame_var;
  puVar12 = Best_HTTP_Hosts_Connections_HTTP2_HTTP2DataFrame_var;
  auVar50._8_8_ = local_100._8_8_;
  auVar50._0_8_ = local_100._0_8_;
  auVar49._8_8_ = local_100._8_8_;
  auVar49._0_8_ = local_100._0_8_;
  if ((lVar33 == 0) || (lVar33 = *(long *)(lVar33 + 0x10), auVar49 = auVar50, lVar33 == 0))
  goto LAB_05ef7c34;
  uVar34 = FUN_03b6bc54(lVar33,*(undefined8 *)Best_HTTP_Shared_HTTPManager_var);
  *(undefined8 *)(param_1 + 0x1b0) = uVar34;
  thunk_FUN_02ee2be8(param_1 + 0x1b0,uVar34);
  uVar34 = FUN_03b6bc54(lVar33,*(undefined8 *)puVar16);
  *(undefined8 *)(param_1 + 0x1b8) = uVar34;
  thunk_FUN_02ee2be8(param_1 + 0x1b8,uVar34);
  uVar34 = FUN_03b6bc54(lVar33,*(undefined8 *)puVar17);
  *(undefined8 *)(param_1 + 0x1c8) = uVar34;
  thunk_FUN_02ee2be8(param_1 + 0x1c8,uVar34);
  uVar34 = FUN_03b6bc54(lVar33,*(undefined8 *)puVar12);
  *(undefined8 *)(param_1 + 0x1d0) = uVar34;
  thunk_FUN_02ee2be8(param_1 + 0x1d0,uVar34);
  uVar34 = FUN_03b6bc54(lVar33,*(undefined8 *)puVar18);
  *(undefined8 *)(param_1 + 0x1c0) = uVar34;
  thunk_FUN_02ee2be8(param_1 + 0x1c0,uVar34);
  uVar34 = FUN_03b6bc54(lVar33,*(undefined8 *)puVar15);
  *(undefined8 *)(param_1 + 0x1d8) = uVar34;
  thunk_FUN_02ee2be8(param_1 + 0x1d8,uVar34);
  uVar34 = FUN_03b6bc54(lVar33,*(undefined8 *)puVar13);
  *(undefined8 *)(param_1 + 0x1e0) = uVar34;
  thunk_FUN_02ee2be8(param_1 + 0x1e0,uVar34);
  uVar34 = FUN_03b6bc54(lVar33,*(undefined8 *)puVar19);
  *(undefined8 *)(param_1 + 0x1e8) = uVar34;
  thunk_FUN_02ee2be8(param_1 + 0x1e8,uVar34);
  uVar34 = FUN_03b6bc54(lVar33,*(undefined8 *)puVar14);
  *(undefined8 *)(param_1 + 0x1f0) = uVar34;
  thunk_FUN_02ee2be8(param_1 + 0x1f0,uVar34);
  uVar34 = FUN_03b6bc54(lVar33,*(undefined8 *)Best_HTTP_Hosts_Connections_HTTP2_HTTP2Settings_var);
  *(undefined8 *)(param_1 + 0x1f8) = uVar34;
  thunk_FUN_02ee2be8(param_1 + 0x1f8,uVar34);
  uVar34 = FUN_03b6bc54(lVar33,*(undefined8 *)
                                System_Func<T1,_T2,_T3,_T4,_T5,_T6,_T7,_T8,_T9,_T10,_T11,_T12,_T13,_T14,_TResult>_var
                       );
  *(undefined8 *)(param_1 + 0x200) = uVar34;
  thunk_FUN_02ee2be8(param_1 + 0x200,uVar34);
  uVar34 = FUN_03b6bc54(lVar33,*(undefined8 *)UnityEngine_UIElements_HandleDragAndDropArgs_var);
  *(undefined8 *)(param_1 + 0x208) = uVar34;
  thunk_FUN_02ee2be8(param_1 + 0x208,uVar34);
  auVar2._8_8_ = local_100._8_8_;
  auVar2._0_8_ = local_100._0_8_;
  auVar49._8_8_ = local_100._8_8_;
  auVar49._0_8_ = local_100._0_8_;
  if (lVar32 == 0) goto LAB_05ef7c34;
  *(undefined1 *)(param_1 + 0x247) = *(undefined1 *)(lVar32 + 0x1c);
  *(undefined2 *)(param_1 + 0x248) = *(undefined2 *)(lVar32 + 0x1d);
  auVar49 = auVar2;
  if (lVar31 == 0) goto LAB_05ef7c34;
  uVar48 = *(undefined8 *)(lVar31 + 0x100);
  uVar46 = *(undefined8 *)(lVar31 + 0xf8);
  uVar45 = *(undefined8 *)(lVar31 + 0x110);
  uVar43 = *(undefined8 *)(lVar31 + 0x108);
  uVar47 = *(undefined8 *)(lVar31 + 0x120);
  uVar34 = *(undefined8 *)(lVar31 + 0x118);
  *(undefined4 *)(param_1 + 0xe8) = *(undefined4 *)(lVar31 + 0x128);
  *(undefined8 *)(param_1 + 0xe0) = uVar47;
  *(undefined8 *)(param_1 + 0xd8) = uVar34;
  puVar12 = PTR_DAT_06a2ed80;
  *(undefined8 *)(param_1 + 0xd0) = uVar45;
  *(undefined8 *)(param_1 + 200) = uVar43;
  *(undefined8 *)(param_1 + 0xc0) = uVar48;
  *(undefined8 *)(param_1 + 0xb8) = uVar46;
  FUN_0624d844(param_1 + 0xb8,0,0);
  FUN_0624d860(param_1 + 0xb8,0,0);
  *(byte *)(param_1 + 0x245) = param_8 & 1;
  *(byte *)(param_1 + 0x246) = param_10 & 1;
  uVar21 = FUN_05ed0714(lVar31,0);
  auVar49._8_8_ = local_100._8_8_;
  auVar49._0_8_ = local_100._0_8_;
  if (*(char *)(lVar31 + 0x1c8) == '\0') {
    uVar22 = 0;
  }
  else {
    if (*(long *)(param_1 + 0x1a0) == 0) goto LAB_05ef7c34;
    uVar34 = *(undefined8 *)(*(long *)(param_1 + 0x1a0) + 0x10);
    if (*(int *)(*(long *)puVar12 + 0xe4) == 0) {
      thunk_FUN_02e9a04c();
    }
    uVar22 = FUN_06267b6c(uVar34,0,0);
    uVar22 = uVar22 & 1;
  }
  auVar3._8_8_ = local_100._8_8_;
  auVar3._0_8_ = local_100._0_8_;
  auVar49._8_8_ = local_100._8_8_;
  auVar49._0_8_ = local_100._0_8_;
  if ((*(long *)(param_1 + 0x1b0) == 0) ||
     (plVar35 = *(long **)(*(long *)(param_1 + 0x1b0) + 0x38), auVar49 = auVar3,
     plVar35 == (long *)0x0)) goto LAB_05ef7c34;
  iVar28 = *(int *)(lVar31 + 0x1cc);
  iVar23 = (**(code **)(*plVar35 + 0x218))(plVar35,*(undefined8 *)(*plVar35 + 0x220));
  puVar13 = PTR_DAT_06ab0490;
  auVar49._8_8_ = local_100._8_8_;
  auVar49._0_8_ = local_100._0_8_;
  auVar5._8_8_ = local_100._8_8_;
  auVar5._0_8_ = local_100._0_8_;
  auVar4._8_8_ = local_100._8_8_;
  auVar4._0_8_ = local_100._0_8_;
  lVar33 = *(long *)(param_1 + 0x1a0);
  if (iVar23 == 1) {
    auVar49 = auVar4;
    if (lVar33 == 0) goto LAB_05ef7c34;
    puVar37 = (undefined8 *)(lVar33 + 0x20);
  }
  else {
    if (lVar33 == 0) goto LAB_05ef7c34;
    puVar37 = (undefined8 *)(lVar33 + 0x30);
  }
  auVar49 = auVar5;
  if (*(long *)(param_1 + 0x1b0) == 0) goto LAB_05ef7c34;
  uVar34 = *puVar37;
  uVar24 = FUN_05ed8e44(*(long *)(param_1 + 0x1b0),0);
  if (((uVar21 | uVar24 ^ 0xffffffff) & 1) == 0) {
    if (*(int *)(*(long *)puVar12 + 0xe4) == 0) {
      thunk_FUN_02e9a04c();
    }
    uVar24 = FUN_06267b6c(uVar34,0,0);
    uVar24 = uVar24 & 1;
  }
  else {
    uVar24 = 0;
  }
  if (*(int *)(*(long *)puVar13 + 0xe4) == 0) {
    thunk_FUN_02e9a04c();
  }
  lVar33 = FUN_05df3b90(0);
  auVar49._8_8_ = local_100._8_8_;
  auVar49._0_8_ = local_100._0_8_;
  if (lVar33 == 0) goto LAB_05ef7c34;
  uVar36 = FUN_05df3d78(lVar33,0);
  auVar49._8_8_ = local_100._8_8_;
  auVar49._0_8_ = local_100._0_8_;
  if ((uVar36 & 1) == 0) {
    cVar42 = *(char *)(param_1 + 0x249);
  }
  else {
    cVar42 = '\0';
  }
  if (*(long *)(param_1 + 0x1c0) == 0) goto LAB_05ef7c34;
  uVar36 = FUN_05eda014(*(long *)(param_1 + 0x1c0),0);
  auVar49._8_8_ = local_100._8_8_;
  auVar49._0_8_ = local_100._0_8_;
  if ((uVar36 & 1) == 0) {
    cVar41 = '\0';
  }
  else {
    cVar41 = *(char *)(param_1 + 0x248);
  }
  if (*(long *)(param_1 + 0x1b8) == 0) goto LAB_05ef7c34;
  uVar25 = FUN_05ed9814(*(long *)(param_1 + 0x1b8),0);
  auVar49._8_8_ = local_100._8_8_;
  auVar49._0_8_ = local_100._0_8_;
  if (*(long *)(param_1 + 0x1c8) == 0) goto LAB_05ef7c34;
  uVar26 = FUN_05ed9a44(*(long *)(param_1 + 0x1c8),0);
  if (((uVar21 | uVar25 ^ 0xffffffff) & 1) == 0) {
    if (*(int *)(*(long *)PTR_DAT_06a368b8 + 0xe4) == 0) {
      thunk_FUN_02e9a04c();
    }
    uVar36 = FUN_0621ad74(0);
    auVar6._8_8_ = local_100._8_8_;
    auVar6._0_8_ = local_100._0_8_;
    auVar49._8_8_ = local_100._8_8_;
    auVar49._0_8_ = local_100._0_8_;
    if ((uVar36 & 1) == 0) goto LAB_05ef73c4;
    if ((*(long *)(param_1 + 0x1b8) == 0) ||
       (plVar35 = *(long **)(*(long *)(param_1 + 0x1b8) + 0x38), auVar49 = auVar6,
       plVar35 == (long *)0x0)) goto LAB_05ef7c34;
    iVar23 = (**(code **)(*plVar35 + 0x218))(plVar35,*(undefined8 *)(*plVar35 + 0x220));
    auVar49._8_8_ = local_100._8_8_;
    auVar49._0_8_ = local_100._0_8_;
    if (iVar23 == 1) {
      plVar35 = *(long **)(lVar31 + 0x1d8);
      if (plVar35 == (long *)0x0) goto LAB_05ef7c34;
      uVar36 = (**(code **)(*plVar35 + 0x198))(plVar35,*(undefined8 *)(*plVar35 + 0x1a0));
      if ((uVar36 & 1) == 0) {
        uVar34 = *(undefined8 *)MessagePipe_ISingletonPublisher<TKey,_TMessage>_var;
        iVar23 = FUN_062641e8(0);
        if ((iVar23 * -0x11111111 + 0x8888888U >> 2 | iVar23 * -0x40000000) < 0x4444445) {
          if (*(int *)(*(long *)PTR_DAT_06a2ed98 + 0xe4) == 0) {
            thunk_FUN_02e9a04c();
          }
          FUN_06222224(uVar34,0);
        }
        goto LAB_05ef73c4;
      }
    }
    bVar1 = true;
  }
  else {
LAB_05ef73c4:
    bVar1 = false;
  }
  puVar12 = PTR_DAT_06ab5e18;
  uVar25 = FUN_05ed0d3c(lVar31,0);
  uVar27 = FUN_05ed0e2c(lVar31,0);
  if (((uVar25 & 1) == 0) && (uVar36 = FUN_05ed0d2c(lVar31,0), (uVar36 & 1) != 0)) {
    if (*(int *)(*(long *)Unity_Services_Economy_Internal_Models_CurrencyBalanceResponse_var + 0xe4)
        == 0) {
      thunk_FUN_02e9a04c();
    }
    Unity_Services_Leaderboards_Internal_Models_LeaderboardEntry__get_PlayerName
              (lVar31,uVar27 & 1,0);
  }
  uVar34 = FUN_03a21438(0x20,*(undefined8 *)puVar12);
  auVar49._8_8_ = local_100._8_8_;
  auVar49._0_8_ = local_100._0_8_;
  if (param_2 != 0) {
    plVar35 = (long *)UnityEngine_Rendering_VolumeProfile__Remove<object>
                                (param_2,*(undefined8 *)
                                          MessagePipe_ISingletonSubscriber<TMessage>_var,&local_80,
                                 uVar34,*(undefined8 *)System_ComponentModel_IChangeTracking_var,
                                 0x7f2,*(undefined8 *)
                                        MessagePipe_ISingletonAsyncSubscriber<TKey,_TMessage>_var);
    puVar12 = PTR_DAT_06ab07f8;
    pplStack_108 = &local_78;
    local_110 = 0;
    local_78 = plVar35;
    if (plVar35 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02e3ccc4();
    }
    lVar33 = *plVar35;
    uVar36 = (ulong)*(ushort *)(lVar33 + 0x12e);
    if (uVar36 != 0) {
      piVar39 = (int *)(*(long *)(lVar33 + 0xb0) + 8);
      do {
        if (*(long *)(piVar39 + -2) == *(long *)PTR_DAT_06ab07f8) {
          puVar37 = (undefined8 *)(lVar33 + (long)(*piVar39 + 0xb) * 0x10 + 0x138);
          goto LAB_05ef74e8;
        }
        uVar36 = uVar36 - 1;
        piVar39 = piVar39 + 4;
      } while (uVar36 != 0);
    }
    puVar37 = (undefined8 *)FUN_02e759c0(plVar35,*(long *)PTR_DAT_06ab07f8,0xb);
LAB_05ef74e8:
    (*(code *)*puVar37)(plVar35,0,puVar37[1]);
    plVar35 = local_78;
    if (local_78 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02e3ccc4();
    }
    lVar33 = *local_78;
    uVar36 = (ulong)*(ushort *)(lVar33 + 0x12e);
    if (uVar36 != 0) {
      piVar39 = (int *)(*(long *)(lVar33 + 0xb0) + 8);
      do {
        if (*(long *)(piVar39 + -2) == *(long *)puVar12) {
          puVar37 = (undefined8 *)(lVar33 + (long)(*piVar39 + 0xc) * 0x10 + 0x138);
          goto LAB_05ef7550;
        }
        uVar36 = uVar36 - 1;
        piVar39 = piVar39 + 4;
      } while (uVar36 != 0);
    }
    puVar37 = (undefined8 *)FUN_02e759c0(local_78,*(long *)puVar12,0xc);
LAB_05ef7550:
    (*(code *)*puVar37)(plVar35,1,puVar37[1]);
    plVar35 = local_78;
    puVar12 = MessagePipe_IAsyncRequestHandlerFilter_var;
    lVar33 = *(long *)MessagePipe_IAsyncRequestHandlerFilter_var;
    if (*(int *)(lVar33 + 0xe4) == 0) {
      thunk_FUN_02e9a04c();
      lVar33 = *(long *)puVar12;
    }
    puVar37 = *(undefined8 **)(lVar33 + 0xb8);
    lVar44 = puVar37[0x18];
    if (lVar44 == 0) {
      if (*(int *)(lVar33 + 0xe4) == 0) {
        thunk_FUN_02e9a04c();
        puVar37 = *(undefined8 **)(*(long *)puVar12 + 0xb8);
      }
      uVar34 = *puVar37;
      lVar44 = thunk_FUN_02e78ab8(*(undefined8 *)MessagePipe_ISingletonAsyncPublisher<TMessage>_var)
      ;
      FUN_04b2178c(lVar44,uVar34,*(undefined8 *)MessagePipe_ISingletonPublisher<TMessage>_var,0);
      plVar38 = (long *)(*(long *)(*(long *)puVar12 + 0xb8) + 0xc0);
      *plVar38 = lVar44;
      thunk_FUN_02ee2be8(plVar38,lVar44);
    }
    if (plVar35 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02e3ccc4();
    }
    lVar33 = *plVar35;
    lVar40 = *(long *)MessagePipe_ISingletonAsyncSubscriber<TMessage>_var;
    uVar36 = (ulong)*(ushort *)(lVar33 + 0x12e);
    if (uVar36 != 0) {
      piVar39 = (int *)(*(long *)(lVar33 + 0xb0) + 8);
      do {
        if (*(long *)(piVar39 + -2) == *(long *)(lVar40 + 0x20)) {
          lVar33 = lVar33 + (long)(int)(*piVar39 + (uint)*(ushort *)(lVar40 + 0x50)) * 0x10 + 0x138;
          goto LAB_05ef7644;
        }
        uVar36 = uVar36 - 1;
        piVar39 = piVar39 + 4;
      } while (uVar36 != 0);
    }
    lVar33 = FUN_02e759c0(plVar35);
LAB_05ef7644:
    lVar33 = thunk_FUN_02e5afdc(*(undefined8 *)(lVar33 + 8),lVar40);
    (**(code **)(lVar33 + 8))(plVar35,lVar44,lVar33);
    plVar35 = local_78;
    if (local_78 != (long *)0x0) {
      lVar33 = *local_78;
      uVar36 = (ulong)*(ushort *)(lVar33 + 0x12e);
      if (uVar36 != 0) {
        piVar39 = (int *)(*(long *)(lVar33 + 0xb0) + 8);
        do {
          if (*(long *)(piVar39 + -2) == *(long *)PTR_DAT_06a2ef10) {
            puVar37 = (undefined8 *)(lVar33 + (long)*piVar39 * 0x10 + 0x138);
            goto LAB_05ef76cc;
          }
          uVar36 = uVar36 - 1;
          piVar39 = piVar39 + 4;
        } while (uVar36 != 0);
      }
      puVar37 = (undefined8 *)FUN_02e759c0(local_78,*(long *)PTR_DAT_06a2ef10,0);
LAB_05ef76cc:
      (*(code *)*puVar37)(plVar35,puVar37[1]);
    }
    uStack_68 = param_4[1];
    local_70 = *param_4;
    if (uVar22 != 0) {
      uStack_148 = *(undefined8 *)(lVar31 + 0x100);
      local_150 = *(undefined8 *)(lVar31 + 0xf8);
      uStack_138 = *(undefined8 *)(lVar31 + 0x110);
      uStack_140 = *(undefined8 *)(lVar31 + 0x108);
      uStack_128 = *(undefined8 *)(lVar31 + 0x120);
      local_130 = *(undefined8 *)(lVar31 + 0x118);
      local_120 = *(undefined4 *)(lVar31 + 0x128);
      FUN_05eecb28(param_1,param_2,&local_150,&local_70,&local_90);
      uStack_68 = uStack_88;
      local_70 = local_90;
    }
    if (iVar28 == 2) {
      FUN_05eed0bc(param_1,param_2,uVar30,*(undefined4 *)(lVar31 + 0x1d0),&local_70,&local_a0);
      uStack_68 = uStack_98;
      local_70 = local_a0;
    }
    if (uVar24 != 0) {
      FUN_05eefd74(param_1,param_2,uVar30,lVar31,&local_70,&local_b0);
      uStack_68 = uStack_a8;
      local_70 = local_b0;
    }
    if ((uVar25 & 1) != 0) {
      if ((uVar25 & uVar27 & 1) == 0) {
        puVar37 = &local_d0;
        FUN_05ef1e0c(param_1,param_2,uVar30,lVar31,&local_70,&local_d0);
      }
      else {
        puVar37 = &local_c0;
        Unity_Services_Economy_Internal_Models_GetPlayerConfiguration400OneOf__FromJson
                  (param_1,param_2,uVar30,lVar31,&local_70,&local_c0);
      }
      uStack_68 = puVar37[1];
      local_70 = *puVar37;
    }
    if (bVar1) {
      FUN_05ef22c4(param_1,param_2,uVar30,lVar31,&local_70,&local_e0);
      uStack_68 = uStack_d8;
      local_70 = local_e0;
    }
    if (((uVar26 ^ 1 | uVar21) & 1) == 0) {
      FUN_05ef16bc(param_1,param_2,*(undefined8 *)(lVar31 + 0xd8),&local_70,&local_f0);
      uStack_68 = uStack_e8;
      local_70 = local_f0;
    }
    auVar7._8_8_ = local_100._8_8_;
    auVar7._0_8_ = local_100._0_8_;
    auVar49._8_8_ = local_100._8_8_;
    auVar49._0_8_ = local_100._0_8_;
    if ((*(long *)(param_1 + 0x1a0) != 0) &&
       (lVar33 = *(long *)(*(long *)(param_1 + 0x1a0) + 0x78), auVar49 = auVar7, lVar33 != 0)) {
      thunk_FUN_0623a5f0(lVar33,0,0);
      auVar49._8_8_ = local_100._8_8_;
      auVar49._0_8_ = local_100._0_8_;
      if (*(long *)(param_1 + 0x1d0) != 0) {
        uVar36 = FUN_05ecdde8(*(long *)(param_1 + 0x1d0),0);
        if ((cVar41 != '\0') || ((uVar36 & 1) != 0)) {
          FUN_05eeef50(param_1,param_2,&local_70,local_100,*(undefined1 *)(lVar31 + 399));
          if (cVar41 != '\0') {
            auVar49 = FUN_05eeeda8(param_1);
            iVar28 = FUN_05eeee48(param_1,auVar49._8_8_,auVar49._0_8_);
            auVar8._8_8_ = local_100._8_8_;
            auVar8._0_8_ = local_100._0_8_;
            auVar49._8_8_ = local_100._8_8_;
            auVar49._0_8_ = local_100._0_8_;
            if ((*(long *)(param_1 + 0x1d0) == 0) ||
               (plVar35 = *(long **)(*(long *)(param_1 + 0x1d0) + 0x78), auVar49 = auVar8,
               plVar35 == (long *)0x0)) goto LAB_05ef7c34;
            iVar23 = (**(code **)(*plVar35 + 0x218))(plVar35,*(undefined8 *)(*plVar35 + 0x220));
            auVar9._8_8_ = local_100._8_8_;
            auVar9._0_8_ = local_100._0_8_;
            auVar49._8_8_ = local_100._8_8_;
            auVar49._0_8_ = local_100._0_8_;
            uVar22 = iVar28 - 1;
            if (iVar23 < 0) {
              iVar23 = iVar23 + 1;
            }
            uVar24 = uVar22;
            if (iVar23 >> 1 <= (int)uVar22) {
              uVar24 = iVar23 >> 1;
            }
            uVar25 = 0;
            if (-1 < (int)uVar22) {
              uVar25 = uVar24;
            }
            if ((*(long *)(param_1 + 0x1c0) == 0) ||
               (plVar35 = *(long **)(*(long *)(param_1 + 0x1c0) + 0x48), auVar49 = auVar9,
               plVar35 == (long *)0x0)) goto LAB_05ef7c34;
            uVar24 = (**(code **)(*plVar35 + 0x218))(plVar35,*(undefined8 *)(*plVar35 + 0x220));
            uVar47 = local_100._8_8_;
            uVar34 = local_100._0_8_;
            auVar11._8_8_ = local_100._8_8_;
            auVar11._0_8_ = local_100._0_8_;
            auVar10._8_8_ = local_100._8_8_;
            auVar10._0_8_ = local_100._0_8_;
            auVar49._8_8_ = local_100._8_8_;
            auVar49._0_8_ = local_100._0_8_;
            lVar33 = *(long *)(param_1 + 0x148);
            uVar22 = uVar24;
            if ((int)uVar25 <= (int)uVar24) {
              uVar22 = uVar25;
            }
            uVar25 = 0;
            if (-1 < (int)uVar24) {
              uVar25 = uVar22;
            }
            if (lVar33 == 0) goto LAB_05ef7c34;
            if (*(uint *)(lVar33 + 0x18) <= uVar25) {
LAB_05ef7950:
                    /* WARNING: Subroutine does not return */
              FUN_02e3cccc();
            }
            if (iVar28 == 1) {
              lVar33 = *(long *)(param_1 + 0x150);
              auVar49 = auVar10;
              if (lVar33 == 0) goto LAB_05ef7c34;
              if (*(int *)(lVar33 + 0x18) == 0) goto LAB_05ef7950;
            }
            else {
              lVar33 = lVar33 + (long)(int)uVar25 * 0x10;
            }
            auVar49 = auVar11;
            if (*(long *)(lVar31 + 0x1a0) == 0) goto LAB_05ef7c34;
            uVar43 = *(undefined8 *)(lVar31 + 0xd8);
            uVar45 = *(undefined8 *)(lVar33 + 0x20);
            uVar46 = *(undefined8 *)(lVar33 + 0x28);
            FUN_05d9fec0(*(long *)(lVar31 + 0x1a0),0);
            local_100 = FUN_05ef37ec(param_1,param_2,uVar43,&local_70,uVar34,uVar47,uVar45,uVar46,
                                     in_stack_fffffffffffffe10 & 0xffffffffffffff00,uVar25 == 0);
          }
          auVar49 = local_100;
          if (*(long *)(param_1 + 0x1a0) == 0) goto LAB_05ef7c34;
          FUN_05eee634(param_1,param_2,local_100,*(undefined8 *)(*(long *)(param_1 + 0x1a0) + 0x78))
          ;
        }
        if (cVar42 != '\0') {
          FUN_05ef2bac(param_1,param_2,uVar30,lVar31);
          FUN_05ef3188(param_1,param_2,uVar30,lVar31,&local_70);
        }
        auVar49 = local_100;
        if (*(long *)(param_1 + 0x1a0) != 0) {
          FUN_05eea650(param_1,*(undefined8 *)(*(long *)(param_1 + 0x1a0) + 0x78),uVar21 & 1);
          auVar49 = local_100;
          if (*(long *)(param_1 + 0x1a0) != 0) {
            FUN_05eea94c(param_1,*(undefined8 *)(*(long *)(param_1 + 0x1a0) + 0x78));
            auVar49 = local_100;
            if (*(long *)(param_1 + 0x1a0) != 0) {
              Unity_Services_Economy_Model_AppleVerification___ctor
                        (param_1,*(undefined8 *)(*(long *)(param_1 + 0x1a0) + 0x78),
                         *(undefined8 *)(lVar31 + 0x1a0));
              auVar49 = local_100;
              if (*(long *)(param_1 + 0x1a0) != 0) {
                FUN_05eeafe8(param_1,lVar31,*(undefined8 *)(*(long *)(param_1 + 0x1a0) + 0x78));
                auVar49 = local_100;
                if (*(long *)(param_1 + 0x1a0) != 0) {
                  FUN_05eeb098(param_1,lVar31,*(undefined8 *)(*(long *)(param_1 + 0x1a0) + 0x78));
                  uVar36 = FUN_05ed056c(lVar31,0);
                  if (((uVar36 & 1) != 0) && (*(char *)(param_1 + 0x246) != '\0')) {
                    auVar49 = local_100;
                    if (*(long *)(param_1 + 0x1a0) == 0) goto LAB_05ef7c34;
                    uVar30 = *(undefined8 *)(*(long *)(param_1 + 0x1a0) + 0x78);
                    if (*(int *)(*(long *)PTR_DAT_06a6ce50 + 0xe4) == 0) {
                      thunk_FUN_02e9a04c();
                    }
                    uVar36 = FUN_05e1b7cc(uVar30,*(undefined8 *)
                                                  Unity_Hierarchy_HierarchySearchQueryDescriptor_var
                                          ,1,0);
                  }
                  if (*(char *)(param_1 + 0x247) != '\0') {
                    auVar49 = local_100;
                    if (*(long *)(param_1 + 0x1a0) == 0) goto LAB_05ef7c34;
                    uVar30 = *(undefined8 *)(*(long *)(param_1 + 0x1a0) + 0x78);
                    if (*(int *)(*(long *)PTR_DAT_06a6ce50 + 0xe4) == 0) {
                      thunk_FUN_02e9a04c();
                    }
                    uVar36 = FUN_05e1b7cc(uVar30,*(undefined8 *)
                                                  Fusion_LagCompensation_HitboxCollider_var,1,0);
                  }
                  bVar20 = FUN_05ee78fc(uVar36,lVar31);
                  if ((bVar20 & 1) != 0) {
                    if (*(char *)(param_1 + 0x245) == '\0') {
                      iVar28 = (uint)*(byte *)(param_1 + 0x246) << 1;
                    }
                    else {
                      iVar28 = 0;
                    }
                    auVar50 = FUN_05ed08a0(lVar31,0);
                    uVar29 = FUN_05ed0998(lVar31,0);
                    auVar49 = local_100;
                    if (*(long *)(param_1 + 0x1a0) == 0) goto LAB_05ef7c34;
                    uVar30 = *(undefined8 *)(*(long *)(param_1 + 0x1a0) + 0x78);
                    uVar21 = FUN_05ed0a28(lVar31,0);
                    FUN_05eeb134(param_1,auVar50._0_8_,auVar50._8_8_,uVar29,uVar30,iVar28,uVar21 & 1
                                );
                  }
                  cVar42 = *(char *)(lVar31 + 399);
                  if (*(int *)(*(long *)PTR_DAT_06ab5ec8 + 0xe4) == 0) {
                    thunk_FUN_02e9a04c();
                  }
                  FUN_05ebd50c(lVar31,0);
                  FUN_05ef5fcc(param_1,param_2,param_3,lVar31,lVar32,&local_70,param_7,param_5,
                               param_6,bVar20 & 1,cVar42 != '\0',0,param_8 & 1);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
LAB_05ef7c34:
  local_100 = auVar49;
                    /* WARNING: Subroutine does not return */
  FUN_02e3ccc4();
}


