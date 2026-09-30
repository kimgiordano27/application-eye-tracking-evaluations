/*
FUNCTION_NAME: FUN_089ed708
ENTRY_POINT: 089ed708
PROGRAM: cac-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


void FUN_089ed708(long param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  uint uVar18;
  long lVar20;
  long *plVar21;
  undefined8 *puVar22;
  int iVar23;
  int *piVar24;
  undefined8 *puVar25;
  undefined8 local_280;
  undefined8 *puStack_278;
  undefined8 uStack_270;
  long lStack_268;
  ulong local_260;
  long lStack_258;
  ulong local_250;
  undefined8 local_220;
  long lStack_218;
  ulong local_210;
  undefined8 local_200;
  long lStack_1f8;
  ulong local_1f0;
  undefined8 local_1e0;
  undefined8 *puStack_1d8;
  undefined8 local_1d0;
  long local_1c8;
  ulong local_1c0;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  long lStack_158;
  int local_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 local_124;
  long local_120;
  ulong uStack_118;
  undefined8 local_110;
  undefined8 *puStack_108;
  undefined8 local_100;
  long lStack_f8;
  ulong local_f0;
  long lStack_e8;
  ulong local_e0;
  undefined8 local_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  ulong local_b0;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  long local_68;
  long lVar19;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  lVar12 = param_1;
  if ((DAT_096a4837 & 1) == 0) {
    FUN_03f13384(Unity_VisualScripting_FullSerializer_fsResult_var);
    FUN_03f13384(Unity_VisualScripting_FullSerializer_Internal_fsVersionedType_var);
    FUN_03f13384(System_Net_NetworkInformation_ifaddrs_var);
    FUN_03f13384(System_Net_NetworkInformation_MacOsStructs_ifaddrs_var);
    FUN_03f13384(System_Net_NetworkInformation_AixStructs_ifreq_var);
    FUN_03f13384(System_Net_NetworkInformation_MacOsStructs_sockaddr_var);
    FUN_03f13384(System_Net_NetworkInformation_sockaddr_in_var);
    FUN_03f13384(System_Net_NetworkInformation_AixStructs_sockaddr_in_var);
    FUN_03f13384(System_Net_NetworkInformation_MacOsStructs_sockaddr_in_var);
    FUN_03f13384(System_Net_NetworkInformation_sockaddr_in6_var);
    FUN_03f13384(System_Net_NetworkInformation_AixStructs_sockaddr_in6_var);
    FUN_03f13384(System_Net_NetworkInformation_MacOsStructs_sockaddr_in6_var);
    FUN_03f13384(System_Net_NetworkInformation_sockaddr_ll_var);
    FUN_03f13384(UnityEngine_XR_ARFoundation_ARPoseDriver_NullablePose_var);
    FUN_03f13384(Cysharp_Threading_Tasks_AddressablesAsyncExtensions_AsyncOperationHandleAwaiter_var
                );
    FUN_03f13384(
                Cysharp_Threading_Tasks_AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource_var
                );
    FUN_03f13384(Unity_VisualScripting_UnityOnMouseExitMessageListener_var);
    FUN_03f13384(UnityEngine_UIElements_UIR_Allocator2D_Alloc2D_var);
    FUN_03f13384(System_Array_SorterGenericArray_var);
    FUN_03f13384(Unity_VisualScripting_UnityOnScrollMessageListener_var);
    FUN_03f13384(UnityEngine_UIElements_StyleCursor_var);
    lVar12 = FUN_03f13384(Cysharp_Threading_Tasks_AutoResetUniTaskCompletionSource_var);
    DAT_096a4837 = 1;
  }
  local_e0 = 0;
  uStack_78 = 0;
  uVar1 = *(int *)(param_1 + 0x68) + 1;
  lVar15 = *(long *)(param_1 + 0x50);
  local_80 = 0;
  local_70 = 0;
  lStack_158 = 0;
  local_160 = 0;
  uStack_148 = 0;
  uStack_144 = 0;
  local_150 = 0;
  uStack_14c = 0;
  uStack_138 = 0;
  uStack_134 = 0;
  local_140 = 0;
  uStack_13c = 0;
  uStack_128 = 0;
  local_124 = 0;
  uStack_130 = 0;
  uStack_12c = 0;
  uStack_118 = 0;
  local_120 = 0;
  puStack_108 = (undefined8 *)0x0;
  local_110 = 0;
  lStack_f8 = 0;
  local_100 = 0;
  lStack_e8 = 0;
  local_f0 = 0;
  uStack_168 = 0;
  local_170 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  local_90 = 0;
  local_180 = 0;
  uStack_178 = 0;
  local_190 = 0;
  uStack_188 = 0;
  local_1a0 = 0;
  uStack_198 = 0;
  local_1b0 = 0;
  uStack_1a8 = 0;
  local_1c0 = 0;
  puStack_1d8 = (undefined8 *)0x0;
  local_1e0 = 0;
  local_1c8 = 0;
  local_1d0 = 0;
  *(uint *)(param_1 + 0x68) = uVar1;
  *(uint *)(param_1 + 0x70) = uVar1;
  if (lVar15 != 0) {
    uVar18 = (uint)*(undefined8 *)(lVar15 + 0x18);
    lVar19 = (long)(int)uVar18;
    lVar20 = 0;
    if (lVar19 != 0) {
      lVar20 = (long)(ulong)uVar1 / lVar19;
    }
    lVar20 = (ulong)uVar1 - lVar20 * lVar19;
    if (uVar18 <= (uint)lVar20) {
LAB_089ee0d4:
      if (*(long *)(lVar4 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
        FUN_03f13634();
      }
      goto LAB_089ee268;
    }
    FUN_089fb1d4(lVar12,*(undefined4 *)(lVar15 + lVar20 * 4 + 0x20));
    lVar12 = *(long *)(param_1 + 0x50);
    if (lVar12 != 0) {
      if (*(uint *)(lVar12 + 0x18) <= (uint)lVar20) goto LAB_089ee0d4;
      *(undefined4 *)(lVar12 + lVar20 * 4 + 0x20) = 0;
      lVar12 = *(long *)(param_1 + 0x38);
      *(undefined4 *)(param_1 + 0x6c) = 1;
      if (lVar12 != 0) {
        uVar1 = *(uint *)(lVar12 + 0x18);
        uVar18 = 0;
        if (uVar1 != 0) {
          uVar18 = *(uint *)(param_1 + 0x68) / uVar1;
        }
        lVar12 = FUN_056b0600(lVar12,*(uint *)(param_1 + 0x68) - uVar18 * uVar1,
                              *(undefined8 *)
                               Cysharp_Threading_Tasks_AddressablesAsyncExtensions_AsyncOperationHandleAwaiter_var
                             );
        puVar8 = 
        Cysharp_Threading_Tasks_AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource_var
        ;
        puVar7 = System_Net_NetworkInformation_MacOsStructs_sockaddr_in6_var;
        puVar6 = System_Net_NetworkInformation_MacOsStructs_sockaddr_var;
        puVar5 = System_Net_NetworkInformation_ifaddrs_var;
        if (lVar12 != 0) {
          FUN_058fd7a8(&local_280,lVar12,
                       *(undefined8 *)System_Net_NetworkInformation_sockaddr_ll_var);
          local_110 = local_280;
          local_280 = 0;
          puStack_108 = puStack_278;
          lStack_f8 = lStack_268;
          local_100 = uStack_270;
          lStack_e8 = lStack_258;
          local_f0 = local_260;
          local_e0 = local_250;
          puStack_278 = &local_110;
          while (uVar13 = FUN_0726e62c(&local_110,*(undefined8 *)puVar6), (uVar13 & 1) != 0) {
            if ((local_e0 & 1) == 0) {
              if (lStack_e8 == 0) {
                if (*(long *)(lVar4 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f1362c();
                }
                goto LAB_089ee268;
              }
              if (*(long *)(lStack_e8 + 0x20) == 0) {
                if (*(long *)(lVar4 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f1362c();
                }
                goto LAB_089ee268;
              }
              lVar15 = *(long *)(*(long *)(lStack_e8 + 0x20) + 0x40);
              if (lVar15 == 0) {
                if (*(long *)(lVar4 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f1362c();
                }
                goto LAB_089ee268;
              }
              lStack_218 = lStack_f8;
              local_220 = local_100;
              local_210 = local_f0;
              FUN_089fc908(lVar15,&local_220,0);
            }
            else {
              if (lStack_e8 == 0) {
                if (*(long *)(lVar4 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f1362c();
                }
                goto LAB_089ee268;
              }
              if (*(long *)(lStack_e8 + 0x18) == 0) {
                if (*(long *)(lVar4 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f1362c();
                }
                goto LAB_089ee268;
              }
              lVar15 = *(long *)(*(long *)(lStack_e8 + 0x18) + 0x40);
              if (lVar15 == 0) {
                if (*(long *)(lVar4 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f1362c();
                }
                goto LAB_089ee268;
              }
              lStack_1f8 = lStack_f8;
              local_200 = local_100;
              local_1f0 = local_f0;
              FUN_089fc908(lVar15,&local_200,0);
            }
          }
          FUN_0726e628(&local_110,*(undefined8 *)puVar5);
          iVar2 = *(int *)(lVar12 + 0x18);
          *(undefined4 *)(lVar12 + 0x18) = 0;
          *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
          if (0 < iVar2) {
            FUN_074d9400(*(undefined8 *)(lVar12 + 0x10),0,iVar2,0);
          }
          if ((*(long *)(param_1 + 0x38) != 0) && (*(long *)(param_1 + 0x40) != 0)) {
            uVar1 = *(uint *)(*(long *)(param_1 + 0x38) + 0x18);
            uVar18 = 0;
            if (uVar1 != 0) {
              uVar18 = *(uint *)(param_1 + 0x68) / uVar1;
            }
            lVar15 = FUN_056b0600(*(long *)(param_1 + 0x40),
                                  *(uint *)(param_1 + 0x68) - uVar18 * uVar1,*(undefined8 *)puVar8);
            if (lVar15 != 0) {
              FUN_059004f0(&local_280,lVar15,*(undefined8 *)puVar7);
              memcpy(&local_170,&local_280,0x60);
              puVar22 = (undefined8 *)System_Net_NetworkInformation_AixStructs_ifreq_var;
              while (uVar14 = FUN_0726e86c(&local_170,*puVar22), uVar13 = uStack_118,
                    lVar19 = local_120, uVar9 = uStack_138, iVar2 = local_150, lVar20 = lStack_158,
                    (uVar14 & 1) != 0) {
                local_70 = uStack_13c;
                uStack_78 = CONCAT44(local_140,uStack_144);
                local_80 = CONCAT44(uStack_148,uStack_14c);
                uStack_98 = CONCAT44(uStack_128,uStack_12c);
                local_a0 = CONCAT44(uStack_130,uStack_134);
                local_90 = local_124;
                if (lStack_158 == 0) {
                  if (*(long *)(lVar4 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f1362c();
                  }
                  goto LAB_089ee268;
                }
                if ((*(int *)(lStack_158 + 0x5c) == (int)local_160) &&
                   (*(int *)(lStack_158 + 0x58) == local_160._4_4_)) {
                  plVar21 = (long *)(lStack_158 + 0x50);
                  if (*plVar21 == 0) {
                    if (*(long *)(lVar4 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                      FUN_03f1362c();
                    }
                    goto LAB_089ee268;
                  }
                  lVar16 = *(long *)(*plVar21 + 0x18);
                  if (lVar16 == 0) {
                    if (*(long *)(lVar4 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                      FUN_03f1362c();
                    }
                    goto LAB_089ee268;
                  }
                  piVar24 = (int *)(lStack_158 + 0x18);
                  puVar25 = (undefined8 *)(lStack_158 + 0x1c);
                  FUN_05afe38c(&local_180,*(undefined8 *)(lVar16 + 0x20),
                               *(undefined8 *)(lVar16 + 0x28),*piVar24,*(undefined4 *)puVar25,
                               *(undefined8 *)UnityEngine_UIElements_UIR_Allocator2D_Alloc2D_var);
                  if (lVar19 == 0) {
                    if (*(long *)(lVar4 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                      FUN_03f1362c();
                    }
                    goto LAB_089ee268;
                  }
                  lVar16 = *(long *)(lVar19 + 0x18);
                  if (lVar16 == 0) {
                    if (*(long *)(lVar4 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                      FUN_03f1362c();
                    }
                    goto LAB_089ee268;
                  }
                  FUN_05afe38c(&local_190,*(undefined8 *)(lVar16 + 0x20),
                               *(undefined8 *)(lVar16 + 0x28),iVar2,*(undefined4 *)puVar25,
                               *(undefined8 *)UnityEngine_UIElements_UIR_Allocator2D_Alloc2D_var);
                  FUN_05afe49c(&local_190,local_180,uStack_178,
                               *(undefined8 *)
                                Unity_VisualScripting_UnityOnMouseExitMessageListener_var);
                  if (*(long *)(lVar19 + 0x18) == 0) {
                    if (*(long *)(lVar4 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                      FUN_03f1362c();
                    }
                    goto LAB_089ee268;
                  }
                  FUN_06e70fe8(*(long *)(lVar19 + 0x18),iVar2,*(undefined4 *)puVar25,
                               *(undefined8 *)Unity_VisualScripting_FullSerializer_fsResult_var);
                  if ((uVar13 & 1) != 0) {
                    if (*plVar21 == 0) {
                      if (*(long *)(lVar4 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                        FUN_03f1362c();
                      }
                      goto LAB_089ee268;
                    }
                    lVar16 = *(long *)(*plVar21 + 0x20);
                    if (lVar16 == 0) {
                      if (*(long *)(lVar4 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                        FUN_03f1362c();
                      }
                      goto LAB_089ee268;
                    }
                    FUN_05afd2f0(&local_1a0,*(undefined8 *)(lVar16 + 0x20),
                                 *(undefined8 *)(lVar16 + 0x28),*(undefined4 *)(lVar20 + 0x30),
                                 *(undefined4 *)(lVar20 + 0x34),
                                 *(undefined8 *)System_Array_SorterGenericArray_var);
                    lVar16 = *(long *)(lVar19 + 0x20);
                    if (lVar16 == 0) {
                      if (*(long *)(lVar4 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                        FUN_03f1362c();
                      }
                      goto LAB_089ee268;
                    }
                    FUN_05afd2f0(&local_1b0,*(undefined8 *)(lVar16 + 0x20),
                                 *(undefined8 *)(lVar16 + 0x28),uVar9,*(undefined4 *)(lVar20 + 0x34)
                                 ,*(undefined8 *)System_Array_SorterGenericArray_var);
                    iVar10 = FUN_05afd4dc(&local_1b0,
                                          *(undefined8 *)UnityEngine_UIElements_StyleCursor_var);
                    if (0 < iVar10) {
                      iVar3 = *piVar24;
                      iVar23 = 0;
                      do {
                        iVar11 = FUN_05afd348(&local_1a0,iVar23,
                                              *(undefined8 *)
                                               Unity_VisualScripting_UnityOnScrollMessageListener_var
                                             );
                        FUN_05afd388(&local_1b0,iVar23,iVar11 + (iVar2 - iVar3),
                                     *(undefined8 *)
                                      Cysharp_Threading_Tasks_AutoResetUniTaskCompletionSource_var);
                        iVar23 = iVar23 + 1;
                      } while (iVar10 != iVar23);
                    }
                    if (*(long *)(lVar19 + 0x20) == 0) {
                      if (*(long *)(lVar4 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                        FUN_03f1362c();
                      }
                      goto LAB_089ee268;
                    }
                    FUN_06e7086c(*(long *)(lVar19 + 0x20),uVar9,*(undefined4 *)(lVar20 + 0x34),
                                 *(undefined8 *)
                                  Unity_VisualScripting_FullSerializer_Internal_fsVersionedType_var)
                    ;
                    puVar22 = (undefined8 *)System_Net_NetworkInformation_AixStructs_ifreq_var;
                  }
                  local_1c8 = 0;
                  local_1c0 = 0;
                  puStack_1d8 = *(undefined8 **)(lVar20 + 0x20);
                  local_1e0 = *(undefined8 *)piVar24;
                  local_1d0 = *(undefined8 *)(lVar20 + 0x28);
                  thunk_FUN_03f86000((ulong)&local_1e0 | 8,0);
                  local_1c8 = *plVar21;
                  thunk_FUN_03f86000(&local_1c8);
                  puVar5 = System_Net_NetworkInformation_MacOsStructs_sockaddr_in_var;
                  local_1c0 = CONCAT71(local_1c0._1_7_,1);
                  lVar16 = *(long *)(lVar12 + 0x10);
                  puStack_c8 = puStack_1d8;
                  local_d0 = local_1e0;
                  lStack_b8 = local_1c8;
                  uStack_c0 = local_1d0;
                  local_b0 = local_1c0;
                  lVar17 = *(long *)System_Net_NetworkInformation_MacOsStructs_sockaddr_in_var;
                  *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
                  if (lVar16 == 0) {
                    if (*(long *)(lVar4 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                      FUN_03f1362c();
                    }
                    goto LAB_089ee268;
                  }
                  uVar1 = *(uint *)(lVar12 + 0x18);
                  if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                    lVar16 = lVar16 + (long)(int)uVar1 * 0x28;
                    *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                    *(undefined8 **)(lVar16 + 0x28) = puStack_1d8;
                    *(undefined8 *)(lVar16 + 0x20) = local_1e0;
                    *(long *)(lVar16 + 0x38) = local_1c8;
                    *(undefined8 *)(lVar16 + 0x30) = local_1d0;
                    *(ulong *)(lVar16 + 0x40) = local_1c0;
                    thunk_FUN_03f86000(lVar16 + 0x28,0);
                  }
                  else {
                    puStack_278 = puStack_1d8;
                    local_280 = local_1e0;
                    lStack_268 = local_1c8;
                    uStack_270 = local_1d0;
                    local_260 = local_1c0;
                    FUN_058fcadc(lVar12,&local_280,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70))
                    ;
                  }
                  puStack_1d8 = *(undefined8 **)(lVar20 + 0x38);
                  local_1e0 = *(undefined8 *)(lVar20 + 0x30);
                  local_1d0 = *(undefined8 *)(lVar20 + 0x40);
                  local_1c8 = 0;
                  local_1c0 = 0;
                  thunk_FUN_03f86000((ulong)&local_1e0 | 8,0);
                  local_1c8 = *plVar21;
                  thunk_FUN_03f86000(&local_1c8);
                  local_1c0 = local_1c0 & 0xffffffffffffff00;
                  lVar16 = *(long *)(lVar12 + 0x10);
                  local_b0 = local_1c0;
                  lVar17 = *(long *)puVar5;
                  puStack_c8 = puStack_1d8;
                  local_d0 = local_1e0;
                  lStack_b8 = local_1c8;
                  uStack_c0 = local_1d0;
                  *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
                  if (lVar16 == 0) {
                    if (*(long *)(lVar4 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                      FUN_03f1362c();
                    }
                    goto LAB_089ee268;
                  }
                  uVar1 = *(uint *)(lVar12 + 0x18);
                  if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                    lVar16 = lVar16 + (long)(int)uVar1 * 0x28;
                    *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                    *(undefined8 **)(lVar16 + 0x28) = puStack_1d8;
                    *(undefined8 *)(lVar16 + 0x20) = local_1e0;
                    *(long *)(lVar16 + 0x38) = local_1c8;
                    *(undefined8 *)(lVar16 + 0x30) = local_1d0;
                    *(ulong *)(lVar16 + 0x40) = local_1c0;
                    thunk_FUN_03f86000(lVar16 + 0x28,0);
                  }
                  else {
                    puStack_278 = puStack_1d8;
                    local_280 = local_1e0;
                    lStack_268 = local_1c8;
                    uStack_270 = local_1d0;
                    local_260 = local_1c0;
                    FUN_058fcadc(lVar12,&local_280,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70))
                    ;
                  }
                  *(int *)(lVar20 + 0x18) = iVar2;
                  *(undefined8 *)(lVar20 + 0x24) = uStack_78;
                  *puVar25 = local_80;
                  *(undefined4 *)(lVar20 + 0x2c) = local_70;
                  thunk_FUN_03f86000(lVar20 + 0x20,0);
                  *(undefined4 *)(lVar20 + 0x30) = uVar9;
                  *(undefined8 *)(lVar20 + 0x3c) = uStack_98;
                  *(undefined8 *)(lVar20 + 0x34) = local_a0;
                  *(undefined4 *)(lVar20 + 0x44) = local_90;
                  thunk_FUN_03f86000(lVar20 + 0x38,0);
                  *plVar21 = lVar19;
                  thunk_FUN_03f86000(plVar21,lVar19);
                  *(undefined4 *)(lVar20 + 0x5c) = 0;
                }
              }
              FUN_0726e868(&local_170,
                           *(undefined8 *)System_Net_NetworkInformation_MacOsStructs_ifaddrs_var);
              iVar2 = *(int *)(lVar15 + 0x18);
              *(undefined4 *)(lVar15 + 0x18) = 0;
              *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
              if (0 < iVar2) {
                FUN_074d9400(*(undefined8 *)(lVar15 + 0x10),0,iVar2,0);
              }
              FUN_089fb25c(param_1);
              if (*(long *)(lVar4 + 0x28) == local_68) {
                return;
              }
              goto LAB_089ee268;
            }
          }
        }
      }
    }
  }
  if (*(long *)(lVar4 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
    FUN_03f1362c();
  }
LAB_089ee268:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


