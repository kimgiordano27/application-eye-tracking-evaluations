/*
FUNCTION_NAME: FUN_05e74d00
ENTRY_POINT: 05e74d00
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_21;validity_or_gating_hits_21;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_3
*/


void FUN_05e74d00(undefined4 param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5
                 ,undefined8 param_6,undefined8 param_7,char *param_8,uint param_9,
                 undefined8 param_10)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  uint uVar11;
  char *pcVar12;
  long lVar13;
  long lVar14;
  undefined8 *puVar15;
  int iVar16;
  char *pcVar17;
  long lVar18;
  char *pcVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  long *plVar23;
  uint uVar24;
  uint uVar25;
  undefined8 uVar26;
  long *plVar27;
  long lVar28;
  int iVar29;
  uint uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined1 auStack_41e0 [16396];
  int local_1d4;
  undefined8 local_1d0;
  uint local_1c4;
  undefined8 local_1c0;
  int local_1b4;
  ulong local_1b0;
  int local_1a8;
  int local_1a4;
  undefined8 local_1a0;
  int local_198;
  uint local_194;
  undefined8 local_190;
  undefined1 *local_188;
  int local_17c;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 local_f8;
  long local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  long local_c0;
  ulong local_b8;
  undefined8 local_a8;
  long local_a0;
  
  plVar27 = (long *)PTR_DAT_063224e8;
  uVar10 = tpidr_el0;
  local_a0 = *(long *)(uVar10 + 0x28);
  local_178 = param_5;
  if ((DAT_066dc740 & 1) == 0) {
    FUN_02b3c81c(PTR_DAT_06312d90);
    FUN_02b3c81c(Method_OVRSpatialAnchor_UnboundAnchor_TryGetPose__);
    FUN_02b3c81c(UnityEngine_AudioClip_TypeInfo);
    FUN_02b3c81c(Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__33_2__);
    FUN_02b3c81c(Method_OVRPlugin_<>c_<_cctor>b__810_72__);
    FUN_02b3c81c(Method_OVRPlugin_<>c_<_cctor>b__810_73__);
    FUN_02b3c81c(PTR_DAT_06327100);
    FUN_02b3c81c(PTR_DAT_06325d70);
    FUN_02b3c81c(PTR_DAT_06312520);
    FUN_02b3c81c(
                Method_UnityEngine_XR_OpenXR_OpenXRRestarter_<PauseAndRetryInitializationCoroutine>d__35_System_Collections_IEnumerator_Reset__
                );
    FUN_02b3c81c(PTR_DAT_0631eb50);
    FUN_02b3c81c(
                Method_UnityEngine_XR_OpenXR_OpenXRRestarter_<PauseAndShutdownAndRestartCoroutine>d__34_System_Collections_IEnumerator_Reset__
                );
    FUN_02b3c81c(PTR_DAT_063224e8);
    FUN_02b3c81c(
                Method_UnityEngine_XR_OpenXR_OpenXRRestarter_<RestartCoroutine>d__36_System_Collections_IEnumerator_Reset__
                );
    DAT_066dc740 = 1;
  }
  local_a8 = 0;
  uStack_148 = 0;
  local_150 = 0;
  local_138 = 0;
  local_140 = 0;
  uStack_128 = 0;
  local_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  local_110 = 0;
  local_f8 = 0;
  local_100 = 0;
  uStack_e8 = 0;
  local_f0 = 0;
  uStack_d8 = 0;
  local_e0 = 0;
  uStack_c8 = 0;
  local_d0 = 0;
  local_b8 = 0;
  local_c0 = 0;
  uStack_158 = 0;
  local_160 = 0;
  uStack_168 = 0;
  local_170 = 0;
  if (*(int *)(*plVar27 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  FUN_05e52db4(0);
  local_188 = auStack_41e0;
  local_194 = (uint)*(byte *)(param_2 + 0xb8);
  memset(local_188,0,0x4000);
  uStack_148 = *(undefined8 *)(param_2 + 0x58);
  local_a8 = 0;
  *(undefined4 *)(param_2 + 0xbc) = 0;
  local_150 = 0;
  local_138 = 0;
  local_140 = 0;
  uStack_128 = 0;
  local_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  local_110 = 0;
  thunk_FUN_02bb0e9c((ulong)&local_150 | 8);
  local_140 = *(undefined8 *)(param_2 + 0x60);
  thunk_FUN_02bb0e9c(&local_140);
  local_138 = local_178;
  thunk_FUN_02bb0e9c(&local_138);
  uStack_168 = 0;
  uStack_158 = 0;
  local_160 = 0;
  local_170 = param_4;
  thunk_FUN_02bb0e9c(&local_170,param_4);
  uStack_128 = uStack_168;
  local_130 = local_170;
  uStack_118 = uStack_158;
  uStack_120 = local_160;
  thunk_FUN_02bb0e9c(&local_130,0);
  uStack_108._0_3_ = CONCAT21(0x101,(undefined1)uStack_108);
  memcpy(&local_100,&local_150,0x50);
  if ((param_9 & 1) == 0) {
LAB_05e74f5c:
    puVar4 = 
    Method_UnityEngine_XR_OpenXR_OpenXRRestarter_<PauseAndRetryInitializationCoroutine>d__35_System_Collections_IEnumerator_Reset__
    ;
    lVar28 = *(long *)(param_2 + 0xa8);
    if (lVar28 != 0) {
      FUN_05e82f08(lVar28,0);
      puVar5 = Method_OVRSpatialAnchor_UnboundAnchor_TryGetPose__;
      if (*param_8 == '\0') {
        lVar7 = *(long *)Method_OVRSpatialAnchor_UnboundAnchor_TryGetPose__;
        if (*(int *)(lVar7 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
          lVar7 = *(long *)puVar5;
        }
        param_8 = *(char **)(lVar7 + 0xb8);
        pcVar19 = param_8 + 4;
        pcVar17 = param_8 + 8;
        pcVar12 = param_8 + 0xc;
      }
      else {
        pcVar12 = param_8 + 0x10;
        pcVar17 = param_8 + 0xc;
        pcVar19 = param_8 + 8;
        param_8 = param_8 + 4;
      }
      uVar31 = *(undefined4 *)param_8;
      uVar32 = *(undefined4 *)pcVar19;
      uVar33 = *(undefined4 *)pcVar17;
      uVar34 = *(undefined4 *)pcVar12;
      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      FUN_05e83d10(uVar31,uVar32,uVar33,uVar34,param_1,lVar28,0);
      if ((*(long *)(param_2 + 0xb0) != 0) && (FUN_05e7afd8(), local_f0 != 0)) {
        uVar8 = FUN_05c55b10(local_f0,0);
        FUN_05e80fbc(uVar8,local_f8,param_6,param_7);
        uVar8 = local_f8;
        if ((param_9 & 1) == 0) {
          if (*(int *)(*plVar27 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
          }
          FUN_05e52964(uVar8,0);
        }
        puVar4 = PTR_DAT_06312d90;
        local_190 = param_6;
        if (param_3 == 0) {
          iVar22 = 0;
          iVar16 = (int)local_a8;
        }
        else {
          iVar22 = 0;
          local_198 = 0;
          iVar20 = 0;
          iVar21 = 0;
          iVar29 = 0;
          local_1d0 = param_10;
          local_17c = -1;
          local_1a0 = param_7;
          plVar23 = (long *)PTR_DAT_06312520;
          lVar7 = param_3;
LAB_05e750b0:
          do {
            iVar16 = *(int *)(param_3 + 0x34);
            if (iVar16 == 10) {
              iVar16 = -1;
            }
            else {
              if (iVar16 != 9) {
                if (iVar22 < 1) {
                  iVar3 = *(int *)(param_2 + 0x80);
                  if (iVar16 == 0) {
                    iVar3 = iVar3 + 1;
                  }
                  *(int *)(param_2 + 0x80) = iVar3;
                  if (*(int *)(lVar7 + 0x34) == 0) {
                    uVar8 = *(undefined8 *)(lVar7 + 0x38);
                    local_1d4 = (int)local_a8;
                    local_1a8 = iVar20;
                    local_1a4 = iVar29;
                    if (*(int *)(*plVar23 + 0xe4) == 0) {
                      thunk_FUN_02b9ad44();
                    }
                    uVar9 = FUN_05c8c45c(uVar8,0,0);
                    uVar8 = local_e0;
                    uVar26 = local_178;
                    if ((uVar9 & 1) != 0) {
                      uVar26 = *(undefined8 *)(lVar7 + 0x38);
                    }
                    if (*(int *)(*plVar23 + 0xe4) == 0) {
                      thunk_FUN_02b9ad44();
                    }
                    uVar6 = FUN_05c8c45c(uVar26,uVar8,0);
                    puVar5 = PTR_DAT_0631eb50;
                    lVar13 = *(long *)(lVar7 + 0x58);
                    if (lVar13 == 0) goto LAB_05e75928;
                    if (*(long *)(lVar13 + 0x50) == local_c0) {
                      uVar30 = (long)*(int *)(lVar7 + 0x60) + (ulong)*(uint *)(lVar13 + 0x30) !=
                               (long)local_17c | uVar6;
                      uVar24 = uVar6;
                    }
                    else {
                      uVar30 = 1;
                      uVar24 = 1;
                    }
                    iVar16 = *(int *)(lVar7 + 0x40);
                    lVar13 = *(long *)PTR_DAT_0631eb50;
                    local_1c4 = uVar6;
                    local_1c0 = uVar26;
                    local_1b4 = iVar21;
                    local_1b0 = uVar10;
                    if (*(int *)(lVar13 + 0xe4) == 0) {
                      thunk_FUN_02b9ad44();
                      lVar13 = *(long *)puVar5;
                    }
                    puVar5 = PTR_DAT_0631eb50;
                    iVar20 = **(int **)(lVar13 + 0xb8);
                    if (DAT_066dc62d == '\0') {
                      FUN_02b3c81c(PTR_DAT_0631eb50);
                      lVar13 = *(long *)puVar5;
                      DAT_066dc62d = '\x01';
                    }
                    if (*(int *)(lVar13 + 0xe4) == 0) {
                      thunk_FUN_02b9ad44();
                    }
                    iVar29 = local_1a4;
                    if (iVar16 != iVar20) {
                      if (*(long *)(param_2 + 0xb0) != 0) {
                        uVar10 = FUN_05e7b2a8(*(long *)(param_2 + 0xb0),
                                              *(undefined4 *)(lVar7 + 0x40));
                        uVar9 = uVar10 & 0xffffffff;
                        if ((int)uVar10 < 0) {
                          if (*(long *)(param_2 + 0xb0) == 0) goto LAB_05e75940;
                          uVar6 = (uint)(*(int *)(*(long *)(param_2 + 0xb0) + 0x30) < 1);
                        }
                        else {
                          uVar6 = 0;
                        }
                        uVar11 = uVar6 | uVar24;
                        uVar30 = uVar6 | uVar30;
                        uVar24 = 1;
                        goto LAB_05e75330;
                      }
                      goto LAB_05e75940;
                    }
                    uVar9 = 0xffffffff;
                    uVar11 = uVar24;
LAB_05e75330:
                    plVar23 = (long *)PTR_DAT_06312520;
                    uVar6 = (uint)(*(int *)(lVar7 + 0x44) != uStack_d8._4_4_);
                    uVar25 = uVar6 | uVar24;
                    iVar21 = local_1b4;
                    if ((local_194 != 0) || (uVar6 != 0 || (uVar30 & 1) != 0)) {
                      uVar6 = (uint)(0 < local_1a8 && local_1d4 == 0x3ff) & (uVar6 | uVar30);
                      if (*(int *)(lVar7 + 0x44) != uStack_d8._4_4_) {
                        uVar6 = 1;
                      }
                      if (local_194 != 0) {
                        uVar6 = 1;
                      }
                      uVar6 = uVar6 | uVar11;
                      uVar10 = local_1b0;
                      iVar20 = local_1a8;
                      goto LAB_05e75484;
                    }
                    lVar13 = *(long *)(lVar7 + 0x58);
                    if (local_1a8 == 0) {
                      if (lVar13 == 0) goto LAB_05e75940;
                      iVar20 = *(int *)(lVar7 + 100);
                      local_198 = *(int *)(lVar7 + 0x60) + *(int *)(lVar13 + 0x30);
                      iVar16 = iVar20;
                      local_17c = local_198;
                    }
                    else {
                      if (lVar13 == 0) {
LAB_05e75940:
                        lVar28 = *(long *)(local_1b0 + 0x28);
                        goto LAB_05e7592c;
                      }
                      iVar20 = *(int *)(lVar7 + 100) + local_1a8;
                      iVar16 = *(int *)(lVar7 + 100);
                    }
                    iVar2 = *(int *)(lVar13 + 0x18);
                    iVar3 = *(int *)(lVar13 + 0x1c) + iVar2;
                    if (iVar2 <= local_1b4) {
                      iVar21 = iVar2;
                    }
                    iVar2 = local_1b4 + iVar29;
                    if (local_1b4 + iVar29 <= iVar3) {
                      iVar2 = iVar3;
                    }
                    *(int *)(param_2 + 0x74) = *(int *)(param_2 + 0x74) + iVar16;
                    if (uVar6 != 0 || (uVar24 & 1) != 0) {
                      FUN_05e81b74(param_2,lVar7,uVar9,local_1c0,local_1c4 & 1,&local_100,0);
                    }
                    param_3 = *(long *)(lVar7 + 0x28);
                    iVar29 = iVar2 - iVar21;
                    local_17c = iVar16 + local_17c;
                    uVar10 = local_1b0;
                  }
                  else {
                    uVar25 = 0;
                    uVar9 = 0xffffffff;
                    local_1c0 = 0;
                    uVar6 = 1;
                    local_1c4 = 0;
LAB_05e75484:
                    local_1b0 = CONCAT44(local_1b0._4_4_,(int)uVar9);
                    if (0 < iVar20) {
                      piVar1 = (int *)(local_188 +
                                      ((ulong)(uint)((int)local_a8 + local_a8._4_4_) & 0x3ff) * 0x10
                                      );
                      piVar1[2] = iVar21;
                      piVar1[3] = iVar29;
                      iVar16 = (int)local_a8 + 1;
                      local_a8 = CONCAT44(local_a8._4_4_,iVar16);
                      *piVar1 = local_198;
                      piVar1[1] = iVar20;
                      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                        thunk_FUN_02b9ad44();
                      }
                      FUN_05c45700(uVar6 & 1 | (uint)(iVar16 < 0x400),0);
                      iVar29 = 0;
                      local_198 = 0;
                      iVar21 = 0;
                      iVar20 = 0;
                      *(int *)(param_2 + 0x8c) = *(int *)(param_2 + 0x8c) + 1;
                      uVar9 = local_1b0 & 0xffffffff;
                    }
                    if (*(int *)(lVar7 + 0x34) == 0) {
                      lVar13 = *(long *)(lVar7 + 0x58);
                      if (lVar13 == 0) goto LAB_05e75928;
                      iVar20 = *(int *)(lVar7 + 100);
                      iVar21 = *(int *)(lVar13 + 0x18);
                      iVar29 = *(int *)(lVar13 + 0x1c);
                      local_198 = *(int *)(lVar7 + 0x60) + *(int *)(lVar13 + 0x30);
                      local_17c = iVar20 + local_198;
                      *(int *)(param_2 + 0x74) = *(int *)(param_2 + 0x74) + iVar20;
                    }
                    if ((uVar6 & 1) != 0) {
                      local_1a8 = iVar20;
                      local_1a4 = iVar29;
                      if (0 < (int)local_a8) {
                        FUN_05e80980(param_2,&local_100,local_190,local_1a0);
                        FUN_05e810d8(param_2,local_188,&local_a8,(long)&local_a8 + 4,0x400,local_c0,
                                     local_100);
                      }
                      iVar20 = local_1a8;
                      iVar29 = local_1a4;
                      if (*(int *)(lVar7 + 0x34) != 0) {
                        if (*(int *)(lVar7 + 0x34) == 0xb) {
                          if (*(long *)(lVar7 + 0x18) == 0) goto LAB_05e75928;
                          FUN_05e80dc0(param_2,&local_100,
                                       *(undefined8 *)(*(long *)(lVar7 + 0x18) + 0x10),local_178,
                                       local_190,local_1a0);
                        }
                        FUN_05e83294(param_1,lVar7,lVar28,local_1d0,0);
                        if ((*(uint *)(lVar7 + 0x34) < 9) &&
                           ((1 << (ulong)(*(uint *)(lVar7 + 0x34) & 0x1f) & 0x186U) != 0)) {
                          local_e0 = 0;
                          thunk_FUN_02bb0e9c(&local_e0,0);
                          local_b8 = local_b8 & 0xffffffffffffff00;
                          *(int *)(param_2 + 0x94) = *(int *)(param_2 + 0x94) + 1;
                          iVar16 = *(int *)(lVar7 + 0x34);
                          if (iVar16 == 8) {
                            lVar13 = *(long *)(lVar28 + 0x20);
                            if (lVar13 == 0) goto LAB_05e75928;
                            iVar16 = *(int *)(lVar13 + 0x18) + -1;
                            local_178 = FUN_037a6268(lVar13,iVar16,
                                                     *(undefined8 *)
                                                      Method_OVRPlugin_<>c_<_cctor>b__810_73__);
                            if (*(long *)(lVar28 + 0x20) == 0) goto LAB_05e75928;
                            FUN_037a7c9c(*(long *)(lVar28 + 0x20),iVar16,
                                         *(undefined8 *)
                                          Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__33_2__
                                        );
                            iVar16 = *(int *)(lVar7 + 0x34);
                          }
                          uVar9 = local_1b0 & 0xffffffff;
                          iVar20 = local_1a8;
                          iVar29 = local_1a4;
                          if (iVar16 != 7) goto LAB_05e75794;
                          lVar13 = *(long *)(lVar28 + 0x20);
                          if (lVar13 == 0) goto LAB_05e75928;
                          lVar14 = *(long *)(lVar13 + 0x10);
                          lVar18 = *(long *)UnityEngine_AudioClip_TypeInfo;
                          *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
                          if (lVar14 == 0) goto LAB_05e75928;
                          uVar6 = *(uint *)(lVar13 + 0x18);
                          if (uVar6 < *(uint *)(lVar14 + 0x18)) {
                            *(uint *)(lVar13 + 0x18) = uVar6 + 1;
                            puVar15 = (undefined8 *)(lVar14 + (long)(int)uVar6 * 8 + 0x20);
                            *puVar15 = local_178;
                            thunk_FUN_02bb0e9c(puVar15,local_178,uVar9);
                          }
                          else {
                            FUN_037a6538(lVar13,local_178,
                                         *(undefined8 *)
                                          (*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
                          }
                          local_178 = *(undefined8 *)(lVar7 + 0x38);
                        }
                        uVar9 = local_1b0 & 0xffffffff;
                        iVar20 = local_1a8;
                        iVar29 = local_1a4;
                      }
                    }
LAB_05e75794:
                    if (*(int *)(lVar7 + 0x34) == 0 && ((uVar25 ^ 0xffffffff) & 1) == 0) {
                      FUN_05e81b74(param_2,lVar7,uVar9,local_1c0,local_1c4 & 1,&local_100,0);
                    }
                    param_3 = *(long *)(lVar7 + 0x28);
                  }
                  plVar27 = (long *)PTR_DAT_063224e8;
                  lVar7 = param_3;
                  if (param_3 == 0) break;
                }
                else {
                  param_3 = *(long *)(param_3 + 0x28);
                  *(int *)(param_2 + 0x7c) = *(int *)(param_2 + 0x7c) + 1;
                  if (param_3 == 0) {
                    iVar22 = 1;
                    break;
                  }
                }
                goto LAB_05e750b0;
              }
              iVar16 = 1;
            }
            param_3 = *(long *)(param_3 + 0x28);
            iVar22 = iVar22 + iVar16;
            *(int *)(param_2 + 0x78) = *(int *)(param_2 + 0x78) + 1;
            lVar7 = param_3;
          } while (param_3 != 0);
          param_7 = local_1a0;
          iVar16 = (int)local_a8;
          if (0 < iVar20) {
            uVar6 = (int)local_a8 + local_a8._4_4_;
            iVar16 = (int)local_a8 + 1;
            local_a8 = CONCAT44(local_a8._4_4_,iVar16);
            piVar1 = (int *)(local_188 + ((ulong)uVar6 & 0x3ff) * 0x10);
            piVar1[2] = iVar21;
            piVar1[3] = iVar29;
            *piVar1 = local_198;
            piVar1[1] = iVar20;
          }
        }
        if (0 < iVar16) {
          FUN_05e80980(param_2,&local_100,local_190,param_7);
          FUN_05e810d8(param_2,local_188,&local_a8,(long)&local_a8 + 4,0x400,local_c0,local_100);
        }
        puVar5 = 
        Method_UnityEngine_XR_OpenXR_OpenXRRestarter_<RestartCoroutine>d__36_System_Collections_IEnumerator_Reset__
        ;
        if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        FUN_05c45830(iVar22 == 0,*(undefined8 *)puVar5,0);
        if (*(int *)(*(long *)
                      Method_UnityEngine_XR_OpenXR_OpenXRRestarter_<PauseAndRetryInitializationCoroutine>d__35_System_Collections_IEnumerator_Reset__
                    + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        FUN_05e83e7c(param_1,lVar28,0);
        FUN_05e8070c(param_2);
        if (*(int *)(*plVar27 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        FUN_05e52ddc(0);
        if (*(long *)(uVar10 + 0x28) == local_a0) {
          return;
        }
        goto LAB_05e7593c;
      }
    }
  }
  else if (*(long *)(param_2 + 0xc0) != 0) {
    FUN_05e5497c(*(long *)(param_2 + 0xc0),0,0,0);
    local_100 = *(undefined8 *)(param_2 + 0xc0);
    thunk_FUN_02bb0e9c(&local_100);
    goto LAB_05e74f5c;
  }
LAB_05e75928:
  lVar28 = *(long *)(uVar10 + 0x28);
LAB_05e7592c:
  if (lVar28 == local_a0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
LAB_05e7593c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


