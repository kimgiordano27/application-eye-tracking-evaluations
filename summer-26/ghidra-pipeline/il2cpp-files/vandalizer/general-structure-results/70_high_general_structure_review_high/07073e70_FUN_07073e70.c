/*
FUNCTION_NAME: FUN_07073e70
ENTRY_POINT: 07073e70
PROGRAM: vandalizer-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_15;telemetry_or_network_hits_4
*/


void FUN_07073e70(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 *puVar7;
  long *plVar8;
  int *piVar9;
  ulong uVar10;
  long lVar11;
  undefined1 auVar12 [16];
  
  puVar1 = PTR_DAT_075d69f8;
  if ((DAT_07a5a64e & 1) == 0) {
    FUN_031f20f4(FriendEntry_<SetData>d__7_TypeInfo);
    FUN_031f20f4(FriendRequestEntry_<SetData>d__11_TypeInfo);
    FUN_031f20f4(PTR_DAT_075d7700);
    FUN_031f20f4(Fusion_FusionGlobalScriptableObjectResourceAttribute_<>c__DisplayClass8_1_TypeInfo)
    ;
    FUN_031f20f4(Meta_XR_MultiplayerBlocks_Colocation_Fusion_FusionMessenger_MessageEvent_TypeInfo);
    FUN_031f20f4(Fusion_FusionRealtimeProxy_<GetEnabledRegions>d__3_TypeInfo);
    FUN_031f20f4(
                Best_HTTP_Shared_TLS_Crypto_Impl_FastChaChaEngineHelper_ImplProcessBlock_Burst_0000077B_PostfixBurstDelegate_TypeInfo
                );
    FUN_031f20f4(PTR_DAT_075d69f8);
    DAT_07a5a64e = 1;
  }
  puVar2 = Meta_XR_MultiplayerBlocks_Colocation_Fusion_FusionMessenger_MessageEvent_TypeInfo;
  puVar3 = FriendRequestEntry_<SetData>d__11_TypeInfo;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  FUN_06fc5e0c(param_1,0);
  *(undefined8 *)(param_1 + 0x4d8) = param_2;
  thunk_FUN_0329bf60(param_1 + 0x4d8,param_2);
  lVar11 = *(long *)(param_1 + 0x4d8);
  uVar5 = thunk_FUN_0322f148(*(undefined8 *)puVar3);
  FUN_057cdeb8(uVar5,param_1,*(undefined8 *)puVar2,0);
  puVar2 = Fusion_FusionRealtimeProxy_<GetEnabledRegions>d__3_TypeInfo;
  puVar3 = FriendEntry_<SetData>d__7_TypeInfo;
  if (lVar11 != 0) {
    FUN_070a3094(lVar11,uVar5,0);
    lVar11 = *(long *)(param_1 + 0x4d8);
    uVar5 = thunk_FUN_0322f148(*(undefined8 *)puVar3);
    FUN_056fa11c(uVar5,param_1,*(undefined8 *)puVar2,0);
    puVar3 = 
    Best_HTTP_Shared_TLS_Crypto_Impl_FastChaChaEngineHelper_ImplProcessBlock_Burst_0000077B_PostfixBurstDelegate_TypeInfo
    ;
    if (lVar11 != 0) {
      FUN_070a31f4(lVar11,uVar5,0);
      lVar11 = *(long *)puVar3;
      if (*(int *)(lVar11 + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
        lVar11 = *(long *)puVar3;
      }
      FUN_06fc7f68(param_1,**(undefined8 **)(lVar11 + 0xb8),0);
      plVar6 = (long *)FUN_06fc2334(param_1,0);
      auVar12 = FUN_06fe1fb0(0,0);
      puVar2 = PTR_DAT_075d7700;
      if (plVar6 != (long *)0x0) {
        lVar11 = *plVar6;
        uVar10 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar10 != 0) {
          piVar9 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_075d7700) {
              puVar7 = (undefined8 *)(lVar11 + (long)(*piVar9 + 0x49) * 0x10 + 0x138);
              goto LAB_07074070;
            }
            uVar10 = uVar10 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar10 != 0);
        }
        puVar7 = (undefined8 *)FUN_0322c1e8(plVar6,*(long *)PTR_DAT_075d7700,0x49);
LAB_07074070:
        (*(code *)*puVar7)(plVar6,auVar12._0_8_,auVar12._8_8_ & 0xffffffff,puVar7[1]);
        plVar6 = (long *)FUN_06fc2334(param_1,0);
        auVar12 = FUN_06fe1fb0(0,0);
        if (plVar6 != (long *)0x0) {
          lVar11 = *plVar6;
          uVar10 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar10 != 0) {
            piVar9 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
                puVar7 = (undefined8 *)(lVar11 + (long)(*piVar9 + 0x4d) * 0x10 + 0x138);
                goto LAB_07074100;
              }
              uVar10 = uVar10 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar10 != 0);
          }
          puVar7 = (undefined8 *)FUN_0322c1e8(plVar6,*(long *)puVar2,0x4d);
LAB_07074100:
          (*(code *)*puVar7)(plVar6,auVar12._0_8_,auVar12._8_8_ & 0xffffffff,puVar7[1]);
          plVar6 = (long *)FUN_06fc2334(param_1,0);
          auVar12 = FUN_06fe1fb0(0,0);
          if (plVar6 != (long *)0x0) {
            lVar11 = *plVar6;
            uVar10 = (ulong)*(ushort *)(lVar11 + 0x12e);
            if (uVar10 != 0) {
              piVar9 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
                  puVar7 = (undefined8 *)(lVar11 + (long)(*piVar9 + 0x4b) * 0x10 + 0x138);
                  goto LAB_07074190;
                }
                uVar10 = uVar10 - 1;
                piVar9 = piVar9 + 4;
              } while (uVar10 != 0);
            }
            puVar7 = (undefined8 *)FUN_0322c1e8(plVar6,*(long *)puVar2,0x4b);
LAB_07074190:
            (*(code *)*puVar7)(plVar6,auVar12._0_8_,auVar12._8_8_ & 0xffffffff,puVar7[1]);
            plVar6 = (long *)FUN_06fc2334(param_1,0);
            auVar12 = FUN_06fe1fb0(0,0);
            if (plVar6 != (long *)0x0) {
              lVar11 = *plVar6;
              uVar10 = (ulong)*(ushort *)(lVar11 + 0x12e);
              if (uVar10 != 0) {
                piVar9 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
                    puVar7 = (undefined8 *)(lVar11 + (long)(*piVar9 + 0x47) * 0x10 + 0x138);
                    goto LAB_07074220;
                  }
                  uVar10 = uVar10 - 1;
                  piVar9 = piVar9 + 4;
                } while (uVar10 != 0);
              }
              puVar7 = (undefined8 *)FUN_0322c1e8(plVar6,*(long *)puVar2,0x47);
LAB_07074220:
              (*(code *)*puVar7)(plVar6,auVar12._0_8_,auVar12._8_8_ & 0xffffffff,puVar7[1]);
              plVar6 = (long *)FUN_06fc2334(param_1,0);
              auVar12 = FUN_06fe1fb0(0,0);
              if (plVar6 != (long *)0x0) {
                lVar11 = *plVar6;
                uVar10 = (ulong)*(ushort *)(lVar11 + 0x12e);
                if (uVar10 != 0) {
                  piVar9 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
                      puVar7 = (undefined8 *)(lVar11 + (long)(*piVar9 + 0x5d) * 0x10 + 0x138);
                      goto LAB_070742b0;
                    }
                    uVar10 = uVar10 - 1;
                    piVar9 = piVar9 + 4;
                  } while (uVar10 != 0);
                }
                puVar7 = (undefined8 *)FUN_0322c1e8(plVar6,*(long *)puVar2,0x5d);
LAB_070742b0:
                (*(code *)*puVar7)(plVar6,auVar12._0_8_,auVar12._8_8_ & 0xffffffff,puVar7[1]);
                plVar6 = (long *)FUN_06fc2334(param_1,0);
                auVar12 = FUN_06fe1fb0(0,0);
                if (plVar6 != (long *)0x0) {
                  lVar11 = *plVar6;
                  uVar10 = (ulong)*(ushort *)(lVar11 + 0x12e);
                  if (uVar10 != 0) {
                    piVar9 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
                        puVar7 = (undefined8 *)(lVar11 + (long)(*piVar9 + 0x61) * 0x10 + 0x138);
                        goto LAB_07074340;
                      }
                      uVar10 = uVar10 - 1;
                      piVar9 = piVar9 + 4;
                    } while (uVar10 != 0);
                  }
                  puVar7 = (undefined8 *)FUN_0322c1e8(plVar6,*(long *)puVar2,0x61);
LAB_07074340:
                  (*(code *)*puVar7)(plVar6,auVar12._0_8_,auVar12._8_8_ & 0xffffffff,puVar7[1]);
                  plVar6 = (long *)FUN_06fc2334(param_1,0);
                  auVar12 = FUN_06fe1fb0(0,0);
                  if (plVar6 != (long *)0x0) {
                    lVar11 = *plVar6;
                    uVar10 = (ulong)*(ushort *)(lVar11 + 0x12e);
                    if (uVar10 != 0) {
                      piVar9 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
                          puVar7 = (undefined8 *)(lVar11 + (long)(*piVar9 + 0x5f) * 0x10 + 0x138);
                          goto LAB_070743d0;
                        }
                        uVar10 = uVar10 - 1;
                        piVar9 = piVar9 + 4;
                      } while (uVar10 != 0);
                    }
                    puVar7 = (undefined8 *)FUN_0322c1e8(plVar6,*(long *)puVar2,0x5f);
LAB_070743d0:
                    (*(code *)*puVar7)(plVar6,auVar12._0_8_,auVar12._8_8_ & 0xffffffff,puVar7[1]);
                    plVar6 = (long *)FUN_06fc2334(param_1,0);
                    auVar12 = FUN_06fe1fb0(0,0);
                    puVar4 = 
                    Fusion_FusionGlobalScriptableObjectResourceAttribute_<>c__DisplayClass8_1_TypeInfo
                    ;
                    if (plVar6 != (long *)0x0) {
                      lVar11 = *plVar6;
                      uVar10 = (ulong)*(ushort *)(lVar11 + 0x12e);
                      if (uVar10 != 0) {
                        piVar9 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
                            puVar7 = (undefined8 *)(lVar11 + (long)(*piVar9 + 0x5b) * 0x10 + 0x138);
                            goto LAB_07074468;
                          }
                          uVar10 = uVar10 - 1;
                          piVar9 = piVar9 + 4;
                        } while (uVar10 != 0);
                      }
                      puVar7 = (undefined8 *)FUN_0322c1e8(plVar6,*(long *)puVar2,0x5b);
LAB_07074468:
                      (*(code *)*puVar7)(plVar6,auVar12._0_8_,auVar12._8_8_ & 0xffffffff,puVar7[1]);
                      uVar5 = thunk_FUN_0322f148(*(undefined8 *)puVar4);
                      FUN_07077c84();
                      *(undefined8 *)(param_1 + 0x4b8) = uVar5;
                      thunk_FUN_0329bf60(param_1 + 0x4b8,uVar5);
                      FUN_06fcd3a0(param_1,uVar5,0);
                      uVar5 = thunk_FUN_0322f148(*(undefined8 *)puVar1);
                      FUN_06fc5e0c(uVar5,0);
                      plVar6 = (long *)(param_1 + 0x4a8);
                      *(undefined8 *)(param_1 + 0x4a8) = uVar5;
                      thunk_FUN_0329bf60(plVar6,uVar5);
                      if (*(long *)(param_1 + 0x4a8) != 0) {
                        plVar8 = (long *)FUN_06fc2334(*(long *)(param_1 + 0x4a8),0);
                        uVar5 = FUN_06fe1630(0x3f800000,0);
                        if (plVar8 != (long *)0x0) {
                          lVar11 = *plVar8;
                          uVar10 = (ulong)*(ushort *)(lVar11 + 0x12e);
                          if (uVar10 != 0) {
                            piVar9 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                            do {
                              if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
                                puVar7 = (undefined8 *)
                                         (lVar11 + (long)(*piVar9 + 0x37) * 0x10 + 0x138);
                                goto LAB_0707454c;
                              }
                              uVar10 = uVar10 - 1;
                              piVar9 = piVar9 + 4;
                            } while (uVar10 != 0);
                          }
                          puVar7 = (undefined8 *)FUN_0322c1e8(plVar8,*(long *)puVar2,0x37);
LAB_0707454c:
                          (*(code *)*puVar7)(plVar8,uVar5,puVar7[1]);
                          if (*plVar6 != 0) {
                            plVar8 = (long *)FUN_06fc2334(*plVar6,0);
                            uVar5 = FUN_06fe1630(0x3f800000,0);
                            if (plVar8 != (long *)0x0) {
                              lVar11 = *plVar8;
                              uVar10 = (ulong)*(ushort *)(lVar11 + 0x12e);
                              if (uVar10 != 0) {
                                piVar9 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                                do {
                                  if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
                                    puVar7 = (undefined8 *)
                                             (lVar11 + (long)(*piVar9 + 0x39) * 0x10 + 0x138);
                                    goto LAB_070745d4;
                                  }
                                  uVar10 = uVar10 - 1;
                                  piVar9 = piVar9 + 4;
                                } while (uVar10 != 0);
                              }
                              puVar7 = (undefined8 *)FUN_0322c1e8(plVar8,*(long *)puVar2,0x39);
LAB_070745d4:
                              (*(code *)*puVar7)(plVar8,uVar5,puVar7[1]);
                              if (*plVar6 != 0) {
                                FUN_06fc7f68(*plVar6,*(undefined8 *)
                                                      (*(long *)(*(long *)puVar3 + 0xb8) + 0x28),0);
                                FUN_06fcd3a0(param_1,*(undefined8 *)(param_1 + 0x4a8),0);
                                FUN_07078694(param_1);
                                FUN_07078888(param_1);
                                FUN_07078988(param_1);
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
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


