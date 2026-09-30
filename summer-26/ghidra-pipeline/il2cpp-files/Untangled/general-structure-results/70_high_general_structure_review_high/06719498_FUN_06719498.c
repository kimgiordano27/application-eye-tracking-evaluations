/*
FUNCTION_NAME: FUN_06719498
ENTRY_POINT: 06719498
PROGRAM: Untangled-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_6;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_8
*/


undefined8 FUN_06719498(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined8 uVar12;
  int iVar13;
  undefined8 uVar14;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long *plStack_68;
  
  puVar1 = PTR_DAT_06d02130;
  if ((bRam00000000071d3f9e & 1) == 0) {
    FUN_02f07e70(System_Net_Cache_RequestCacheProtocol_TypeInfo);
    FUN_02f07e70(System_Net_Cache_RequestCachingSectionInternal_TypeInfo);
    FUN_02f07e70(PlayFab_MultiplayerModels_RequestMultiplayerServerRequest_TypeInfo);
    FUN_02f07e70(System_ResolveEventHandler_TypeInfo);
    FUN_02f07e70(PlayFab_MultiplayerModels_RequestMultiplayerServerResponse_TypeInfo);
    FUN_02f07e70(PTR_DAT_06d02220);
    FUN_02f07e70(PTR_DAT_06d02798);
    FUN_02f07e70(Fusion_RpcHeader_TypeInfo);
    FUN_02f07e70(PTR_DAT_06d09430);
    FUN_02f07e70(PTR_DAT_06d12e28);
    FUN_02f07e70(PTR_DAT_06d02130);
    FUN_02f07e70(Fusion_RpcInvokeDelegate_TypeInfo);
    bRam00000000071d3f9e = 1;
  }
  puVar8 = Fusion_RpcInvokeDelegate_TypeInfo;
  puVar7 = Fusion_RpcHeader_TypeInfo;
  puVar6 = System_ResolveEventHandler_TypeInfo;
  puVar5 = System_Net_Cache_RequestCachingSectionInternal_TypeInfo;
  puVar4 = PTR_DAT_06d09430;
  puVar3 = PTR_DAT_06d02798;
  puVar2 = PTR_DAT_06d02220;
  uVar14 = *(undefined8 *)puVar1;
  iVar13 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  plStack_68 = (long *)0x0;
  uVar10 = uVar14;
  while( true ) {
    lVar9 = *(long *)puVar6;
    if (*(int *)(lVar9 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
      lVar9 = *(long *)puVar6;
    }
    if (*(int *)(*(long *)(lVar9 + 0xb8) + 0x10) <= iVar13) break;
    uVar10 = FUN_05458458(uVar10,*(undefined8 *)puVar4,0);
    iVar13 = iVar13 + 1;
  }
  lVar9 = FUN_02f07f14(*(undefined8 *)puVar2,5);
  if (lVar9 == 0) {
LAB_067197ec:
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  if (*(int *)(lVar9 + 0x18) != 0) {
    *(undefined8 *)(lVar9 + 0x20) = uVar14;
    thunk_FUN_02f411dc((undefined8 *)(lVar9 + 0x20),uVar14);
    uVar14 = FUN_06716a30(param_1);
    if (1 < *(uint *)(lVar9 + 0x18)) {
      *(undefined8 *)(lVar9 + 0x28) = uVar14;
      thunk_FUN_02f411dc((undefined8 *)(lVar9 + 0x28),uVar14);
      if (2 < *(uint *)(lVar9 + 0x18)) {
        *(undefined8 *)(lVar9 + 0x30) = *(undefined8 *)puVar8;
        thunk_FUN_02f411dc((undefined8 *)(lVar9 + 0x30));
        uVar14 = FUN_05614484(param_1 + 0x78,0);
        if (3 < *(uint *)(lVar9 + 0x18)) {
          *(undefined8 *)(lVar9 + 0x38) = uVar14;
          thunk_FUN_02f411dc((undefined8 *)(lVar9 + 0x38),uVar14);
          if (4 < *(uint *)(lVar9 + 0x18)) {
            *(undefined8 *)(lVar9 + 0x40) = *(undefined8 *)puVar7;
            thunk_FUN_02f411dc();
            uVar14 = FUN_0546583c(lVar9,0);
            lVar9 = *(long *)puVar6;
            if (*(int *)(lVar9 + 0xe0) == 0) {
              thunk_FUN_02f12b58(lVar9);
              lVar9 = *(long *)puVar6;
            }
            *(int *)(*(long *)(lVar9 + 0xb8) + 0x10) = *(int *)(*(long *)(lVar9 + 0xb8) + 0x10) + 4;
            if (*(long *)(param_1 + 0x48) != 0) {
              FUN_03fd16fc(&uStack_78,*(long *)(param_1 + 0x48),
                           *(undefined8 *)
                            PlayFab_MultiplayerModels_RequestMultiplayerServerResponse_TypeInfo);
              do {
                uVar11 = FUN_04df6d30(&uStack_78,*(undefined8 *)puVar5);
                if ((uVar11 & 1) == 0) {
                  FUN_04df6d2c(&uStack_78,
                               *(undefined8 *)System_Net_Cache_RequestCacheProtocol_TypeInfo);
                  uVar10 = FUN_05465414(uVar14,uVar10,*(undefined8 *)PTR_DAT_06d12e28,0);
                  lVar9 = *(long *)puVar6;
                  if (*(int *)(lVar9 + 0xe0) == 0) {
                    thunk_FUN_02f12b58(lVar9);
                    lVar9 = *(long *)puVar6;
                  }
                  *(int *)(*(long *)(lVar9 + 0xb8) + 0x10) =
                       *(int *)(*(long *)(lVar9 + 0xb8) + 0x10) + -4;
                  return uVar10;
                }
                if (plStack_68 == (long *)0x0) {
                  uVar12 = 0;
                }
                else {
                  if (plStack_68 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_02f080c0();
                  }
                  uVar12 = (**(code **)(*plStack_68 + 0x168))
                                     (plStack_68,*(undefined8 *)(*plStack_68 + 0x170));
                }
                uVar14 = FUN_05465414(uVar14,uVar12,*(undefined8 *)puVar3,0);
              } while( true );
            }
            goto LAB_067197ec;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c8();
}


