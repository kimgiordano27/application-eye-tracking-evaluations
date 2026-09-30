/*
FUNCTION_NAME: FUN_062fd1dc
ENTRY_POINT: 062fd1dc
PROGRAM: Untangled-libil2cpp.so
SCORE: 76
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_4
*/


undefined4 FUN_062fd1dc(long param_1,long param_2,int param_3,byte param_4)

{
  undefined1 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  bool bVar9;
  bool bVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  long *plVar20;
  undefined4 uVar21;
  long lVar22;
  ulong uVar23;
  long lVar24;
  ulong *puVar25;
  ulong uVar26;
  int iVar27;
  int iVar28;
  ulong uVar29;
  ulong uVar30;
  long *plVar31;
  int iVar32;
  double dVar33;
  double dVar34;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  long lStack_1e8;
  long lStack_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  long lStack_1b8;
  long lStack_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  long lStack_188;
  long lStack_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  long lStack_158;
  long lStack_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  long lStack_128;
  long lStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  long lStack_f8;
  long lStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  long lStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  long lStack_98;
  long local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  
  if ((DAT_071ccffa & 1) == 0) {
    FUN_02f07e70(UnityEngine_GUITargetAttribute_var);
    FUN_02f07e70(System_IO_Compression_GZipStream_var);
    FUN_02f07e70(UnityEngine_GameObject_var);
    FUN_02f07e70(UnityEngine_InputSystem_Gamepad_var);
    FUN_02f07e70(UnityEngine_InputSystem_LowLevel_GamepadButton_var);
    FUN_02f07e70(System_Collections_Generic_GenericComparer<T>_var);
    FUN_02f07e70(System_Collections_Generic_GenericEqualityComparer<T>_var);
    FUN_02f07e70(UnityEngine_GUIStyleState_var);
    FUN_02f07e70(PlayFab_ClientModels_GetAccountInfoRequest_var);
    DAT_071ccffa = 1;
  }
  puVar8 = System_Collections_Generic_GenericComparer<T>_var;
  if ((param_3 == 1) && (((param_4 ^ 1) & 1) != 0)) {
    thunk_FUN_02f239f0(UnityEngine_GUILayoutGroup_var);
    uVar12 = thunk_FUN_02ef1808();
    uVar14 = thunk_FUN_02f239f0(PlayFab_ClientModels_GetAccountInfoResult_var);
    FUN_0630be38(uVar12,uVar14,0);
    uVar14 = thunk_FUN_02f239f0(PlayFab_ClientModels_GetAdPlacementsRequest_var);
                    /* WARNING: Subroutine does not return */
    FUN_02f07f94(uVar12,uVar14);
  }
  if (param_2 != 0) {
    iVar27 = *(int *)(param_2 + 0x18);
    iVar28 = iVar27 + -1;
    puVar6 = (undefined8 *)PlayFab_ClientModels_GetAccountInfoRequest_var;
    puVar13 = (undefined8 *)System_Collections_Generic_GenericEqualityComparer<T>_var;
    puVar7 = (undefined8 *)UnityEngine_InputSystem_LowLevel_GamepadButton_var;
    plVar20 = (long *)UnityEngine_GUITargetAttribute_var;
    if (0 < iVar27 + -1 && ((param_4 ^ 1) & 1) == 0) {
      do {
        iVar27 = iVar27 + -1;
        FUN_03f8ae4c(&local_a0,param_2,iVar27,*(undefined8 *)puVar8);
        lVar18 = local_90;
        lVar11 = lStack_98;
        FUN_03f8ae4c(&local_a0,param_2,0,*(undefined8 *)puVar8);
        iVar28 = iVar27;
        puVar6 = (undefined8 *)PlayFab_ClientModels_GetAccountInfoRequest_var;
        puVar13 = (undefined8 *)System_Collections_Generic_GenericEqualityComparer<T>_var;
        puVar7 = (undefined8 *)UnityEngine_InputSystem_LowLevel_GamepadButton_var;
        plVar20 = (long *)UnityEngine_GUITargetAttribute_var;
        if ((lVar11 != lStack_98) || (lVar18 != local_90)) goto LAB_062fd340;
      } while (1 < iVar27);
      iVar28 = 0;
    }
LAB_062fd340:
    do {
      iVar27 = iVar28;
      iVar28 = iVar27 + -1;
      if (iVar27 < 1) goto LAB_062fd390;
      FUN_03f8ae4c(&local_a0,param_2,iVar27,*(undefined8 *)puVar8);
      lVar18 = local_90;
      lVar11 = lStack_98;
      FUN_03f8ae4c(&local_a0,param_2,iVar28,*(undefined8 *)puVar8);
      if ((lVar11 != lStack_98) || (lVar18 != local_90)) goto LAB_062fd390;
    } while( true );
  }
  goto LAB_062fd930;
LAB_062fd390:
  if ((param_4 & 1) == 0) {
    if (iVar27 < 1) {
      return 0;
    }
  }
  else if (iVar27 < 2) {
    return 0;
  }
  lVar11 = thunk_FUN_02ef1808(*puVar13);
  FUN_03fd04d8(lVar11,iVar27 + 1,*(undefined8 *)UnityEngine_GameObject_var);
  iVar32 = 0;
  do {
    uVar12 = thunk_FUN_02ef1808(*puVar6);
    FUN_05645a04(uVar12,0);
    if (lVar11 == 0) goto LAB_062fd930;
    lVar18 = *(long *)(lVar11 + 0x10);
    lVar22 = *plVar20;
    *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
    if (lVar18 == 0) goto LAB_062fd930;
    uVar5 = *(uint *)(lVar11 + 0x18);
    if (uVar5 < *(uint *)(lVar18 + 0x18)) {
      *(uint *)(lVar11 + 0x18) = uVar5 + 1;
      puVar13 = (undefined8 *)(lVar18 + (long)(int)uVar5 * 8 + 0x20);
      *puVar13 = uVar12;
      thunk_FUN_02f411dc(puVar13,uVar12);
    }
    else {
      FUN_03fd0c9c(lVar11,uVar12,*(undefined8 *)(*(long *)(*(long *)(lVar22 + 0x20) + 0xc0) + 0x70))
      ;
    }
    iVar32 = iVar32 + 1;
  } while (iVar32 <= iVar27);
  lVar18 = FUN_03fd09cc(lVar11,1,*puVar7);
  FUN_03f8ae4c(&local_d0,param_2,1,*(undefined8 *)puVar8);
  lStack_98 = lStack_c8;
  local_a0 = local_d0;
  uStack_88 = uStack_b8;
  local_90 = lStack_c0;
  uStack_78 = uStack_a8;
  local_80 = local_b0;
  if (lVar18 != 0) {
    *(undefined8 *)(lVar18 + 0x58) = uStack_b8;
    *(long *)(lVar18 + 0x50) = lStack_c0;
    *(undefined8 *)(lVar18 + 0x68) = uStack_a8;
    *(undefined8 *)(lVar18 + 0x60) = local_b0;
    *(long *)(lVar18 + 0x48) = lStack_c8;
    *(undefined8 *)(lVar18 + 0x40) = local_d0;
    FUN_03f8ae4c(&local_d0,param_2,0,*(undefined8 *)puVar8);
    puVar1 = (undefined1 *)(param_1 + 0x40);
    lStack_f8 = lStack_c8;
    local_100 = local_d0;
    uStack_e8 = uStack_b8;
    lStack_f0 = lStack_c0;
    uStack_d8 = uStack_a8;
    local_e0 = local_b0;
    FUN_062fc9c0(param_1,&local_100,puVar1);
    FUN_03f8ae4c(&local_d0,param_2,iVar27,*(undefined8 *)puVar8);
    lStack_128 = lStack_c8;
    local_130 = local_d0;
    uStack_118 = uStack_b8;
    lStack_120 = lStack_c0;
    uStack_108 = uStack_a8;
    local_110 = local_b0;
    FUN_062fc9c0(param_1,&local_130,puVar1);
    uVar12 = FUN_03fd09cc(lVar11,0,*puVar7);
    uVar14 = FUN_03fd09cc(lVar11,1,*puVar7);
    uVar15 = FUN_03fd09cc(lVar11,iVar27,*puVar7);
    uVar16 = FUN_03f8ae4c(&local_d0,param_2,0,*(undefined8 *)puVar8);
    lStack_158 = lStack_c8;
    local_160 = local_d0;
    uStack_148 = uStack_b8;
    lStack_150 = lStack_c0;
    uStack_138 = uStack_a8;
    local_140 = local_b0;
    FUN_062fcac0(uVar16,uVar12,uVar14,uVar15,&local_160);
    uVar12 = FUN_03fd09cc(lVar11,iVar27,*puVar7);
    uVar14 = FUN_03fd09cc(lVar11,0,*puVar7);
    uVar15 = FUN_03fd09cc(lVar11,iVar28,*puVar7);
    uVar16 = FUN_03f8ae4c(&local_d0,param_2,iVar27,*(undefined8 *)puVar8);
    lStack_188 = lStack_c8;
    local_190 = local_d0;
    uStack_178 = uStack_b8;
    lStack_180 = lStack_c0;
    uStack_168 = uStack_a8;
    local_170 = local_b0;
    FUN_062fcac0(uVar16,uVar12,uVar14,uVar15,&local_190);
    if (0 < iVar28) {
      do {
        FUN_03f8ae4c(&local_a0,param_2,iVar28,*(undefined8 *)puVar8);
        lStack_1b8 = lStack_98;
        local_1c0 = local_a0;
        uStack_1a8 = uStack_88;
        lStack_1b0 = local_90;
        uStack_198 = uStack_78;
        local_1a0 = local_80;
        FUN_062fc9c0(param_1,&local_1c0,puVar1);
        uVar12 = FUN_03fd09cc(lVar11,iVar28,*puVar7);
        uVar14 = FUN_03fd09cc(lVar11,iVar28 + 1,*puVar7);
        uVar15 = FUN_03fd09cc(lVar11,iVar28 + -1,*puVar7);
        uVar16 = FUN_03f8ae4c(&local_a0,param_2,iVar28,*(undefined8 *)puVar8);
        lStack_1e8 = lStack_98;
        local_1f0 = local_a0;
        uStack_1d8 = uStack_88;
        lStack_1e0 = local_90;
        uStack_1c8 = uStack_78;
        local_1d0 = local_80;
        FUN_062fcac0(uVar16,uVar12,uVar14,uVar15,&local_1f0);
        iVar27 = iVar28 + -1;
        bVar10 = 0 < iVar28;
        iVar28 = iVar27;
      } while (iVar27 != 0 && bVar10);
    }
    uVar17 = FUN_03fd09cc(lVar11,0,*puVar7);
    if (uVar17 != 0) {
      uVar29 = uVar17;
      uVar30 = uVar17;
      uVar26 = uVar17;
      while (uVar19 = *(ulong *)(uVar29 + 0xf0), uVar19 != 0) {
        if ((*(long *)(uVar29 + 0x48) == *(long *)(uVar19 + 0x48)) &&
           (*(long *)(uVar29 + 0x50) == *(long *)(uVar19 + 0x50))) {
          if ((uVar19 == uVar26 & (param_4 ^ 1)) == 0) {
            if (uVar29 != uVar19) {
              uVar23 = uVar19;
              if (uVar29 != uVar26) {
                uVar23 = uVar26;
              }
              uVar19 = FUN_062fdd94(uVar17,uVar29);
              uVar30 = uVar19;
              uVar17 = uVar19;
              uVar26 = uVar23;
              goto joined_r0x062fd844;
            }
            goto LAB_062fd874;
          }
          if (*(ulong *)(uVar29 + 0xf8) != uVar26) goto LAB_062fd800;
LAB_062fd89c:
          if (uVar29 == *(ulong *)(uVar29 + 0xf0)) {
            return 0;
          }
          *(undefined1 *)(param_1 + 0x41) = 1;
          if ((uVar26 != 0) && (*(long *)(uVar26 + 0xf8) != 0)) {
            *(undefined4 *)(*(long *)(uVar26 + 0xf8) + 0xec) = 0xfffffffe;
LAB_062fd8c8:
            FUN_062fcb24(param_1,uVar26,param_3);
            if (uVar26 != 0) {
              bVar10 = true;
              uVar17 = uVar26;
              goto LAB_062fd8e4;
            }
          }
          break;
        }
        uVar23 = *(ulong *)(uVar29 + 0xf8);
        if (uVar23 == uVar19) {
LAB_062fd874:
          if ((param_4 & 1) == 0) {
            if (uVar29 != 0) goto LAB_062fd89c;
          }
          else if (uVar29 != 0) {
            if (*(long *)(uVar29 + 0xf8) == *(long *)(uVar29 + 0xf0)) {
              return 0;
            }
            goto LAB_062fd8c8;
          }
          break;
        }
        if ((param_4 & 1) != 0) {
          if (uVar23 == 0) break;
          uStack_208 = *(undefined8 *)(uVar23 + 0x58);
          local_210 = *(undefined8 *)(uVar23 + 0x50);
          uStack_1f8 = *(undefined8 *)(uVar23 + 0x68);
          uStack_200 = *(undefined8 *)(uVar23 + 0x60);
          uStack_218 = *(undefined8 *)(uVar23 + 0x48);
          uStack_220 = *(undefined8 *)(uVar23 + 0x40);
          uStack_238 = *(undefined8 *)(uVar29 + 0x58);
          uStack_240 = *(undefined8 *)(uVar29 + 0x50);
          uStack_228 = *(undefined8 *)(uVar29 + 0x68);
          local_230 = *(undefined8 *)(uVar29 + 0x60);
          uStack_248 = *(undefined8 *)(uVar29 + 0x48);
          local_250 = *(undefined8 *)(uVar29 + 0x40);
          uStack_268 = *(undefined8 *)(uVar19 + 0x58);
          local_270 = *(undefined8 *)(uVar19 + 0x50);
          uStack_258 = *(undefined8 *)(uVar19 + 0x68);
          uStack_260 = *(undefined8 *)(uVar19 + 0x60);
          uStack_278 = *(undefined8 *)(uVar19 + 0x48);
          local_280 = *(undefined8 *)(uVar19 + 0x40);
          uVar17 = FUN_062fc5cc(&uStack_220,&local_250,&local_280,*puVar1);
          if ((uVar17 & 1) != 0) {
            if (*(char *)(param_1 + 0x42) != '\0') {
              lVar18 = *(long *)(uVar29 + 0xf8);
              if ((lVar18 == 0) || (uVar19 = *(ulong *)(uVar29 + 0xf0), uVar19 == 0)) break;
              lVar22 = *(long *)(lVar18 + 0x48);
              lVar3 = *(long *)(lVar18 + 0x50);
              lVar24 = *(long *)(uVar19 + 0x48);
              lVar4 = *(long *)(uVar19 + 0x50);
              lVar2 = *(long *)(uVar29 + 0x48);
              lVar18 = *(long *)(uVar29 + 0x50);
              if ((((lVar22 != lVar24) || (lVar3 != lVar4)) &&
                  ((lVar22 != lVar2 || (lVar3 != lVar18)))) &&
                 ((lVar24 != lVar2 || (lVar4 != lVar18)))) {
                if (lVar22 == lVar24) {
                  bVar10 = lVar18 <= lVar3;
                  bVar9 = SBORROW8(lVar18,lVar4);
                  lVar18 = lVar18 - lVar4;
                }
                else {
                  bVar10 = lVar2 <= lVar22;
                  bVar9 = SBORROW8(lVar2,lVar24);
                  lVar18 = lVar2 - lVar24;
                }
                if ((bool)(bVar10 ^ lVar18 < 0 != bVar9)) goto LAB_062fd800;
              }
            }
            if (uVar29 == uVar26) {
              uVar26 = *(ulong *)(uVar29 + 0xf0);
            }
            uVar17 = FUN_062fdd94(uVar17,uVar29);
            if (uVar17 != 0) {
              uVar19 = *(ulong *)(uVar17 + 0xf8);
              uVar30 = uVar19;
              goto joined_r0x062fd844;
            }
            break;
          }
          uVar19 = *(ulong *)(uVar29 + 0xf0);
        }
LAB_062fd800:
        uVar29 = uVar30;
        if (uVar19 == uVar30) goto LAB_062fd874;
        if ((param_4 & 1) == 0) {
          if (uVar19 == 0) break;
          uVar29 = uVar19;
          if (*(ulong *)(uVar19 + 0xf0) == uVar26) goto LAB_062fd89c;
        }
joined_r0x062fd844:
        uVar29 = uVar19;
        if (uVar19 == 0) break;
      }
    }
  }
  goto LAB_062fd930;
LAB_062fda08:
  lVar22 = lVar11;
  if (lVar18 != 0) {
    lVar22 = lVar18;
  }
  lVar18 = thunk_FUN_02ef1808(*(undefined8 *)puVar8);
  FUN_05645a04(lVar18,0);
  if (lVar18 == 0) goto LAB_062fd930;
  *(undefined8 *)(lVar18 + 0x28) = 0;
  thunk_FUN_02f411dc((undefined8 *)(lVar18 + 0x28),0);
  if (lVar11 == 0) goto LAB_062fd930;
  *(undefined8 *)(lVar18 + 0x10) = *(undefined8 *)(lVar11 + 0x20);
  lVar24 = *(long *)(lVar11 + 0xf8);
  if (lVar24 == 0) goto LAB_062fd930;
  dVar33 = *(double *)(lVar11 + 0xd0);
  dVar34 = *(double *)(lVar24 + 0xd0);
  plVar20 = (long *)(lVar18 + 0x18);
  if (dVar34 <= dVar33) {
    *(long *)(lVar18 + 0x18) = lVar11;
    thunk_FUN_02f411dc(plVar20,lVar11);
    lVar11 = *(long *)(lVar11 + 0xf8);
    *(long *)(lVar18 + 0x20) = lVar11;
  }
  else {
    *(long *)(lVar18 + 0x18) = lVar24;
    thunk_FUN_02f411dc(plVar20);
    *(long *)(lVar18 + 0x20) = lVar11;
  }
  thunk_FUN_02f411dc(lVar18 + 0x20,lVar11);
  lVar11 = *plVar20;
  if (lVar11 == 0) goto LAB_062fd930;
  *(undefined4 *)(lVar11 + 0xdc) = 0;
  plVar31 = (long *)(lVar18 + 0x20);
  lVar24 = *plVar31;
  if (lVar24 == 0) goto LAB_062fd930;
  *(undefined4 *)(lVar24 + 0xdc) = 1;
  if ((param_4 & 1) == 0) {
    uVar21 = 0;
    *(undefined4 *)(lVar11 + 0xe0) = 0;
  }
  else if (*(long *)(lVar11 + 0xf0) == lVar24) {
    *(undefined4 *)(lVar11 + 0xe0) = 0xffffffff;
    uVar21 = 1;
  }
  else {
    uVar21 = 0xffffffff;
    *(undefined4 *)(lVar11 + 0xe0) = 1;
  }
  *(undefined4 *)(lVar24 + 0xe0) = uVar21;
  lVar11 = FUN_062fccf0(param_1,lVar11,dVar34 <= dVar33);
  if (lVar11 == 0) goto LAB_062fd930;
  if (*(int *)(lVar11 + 0xec) == -2) {
    lVar11 = FUN_062fccf0(param_1,lVar11,dVar34 <= dVar33);
  }
  lVar24 = FUN_062fccf0(param_1,*plVar31,dVar33 < dVar34);
  if (lVar24 == 0) goto LAB_062fd930;
  if (*(int *)(lVar24 + 0xec) == -2) {
    lVar24 = FUN_062fccf0(param_1,lVar24,dVar33 < dVar34);
  }
  if (*plVar20 == 0) goto LAB_062fd930;
  if (*(int *)(*plVar20 + 0xec) == -2) {
    *plVar20 = 0;
    plVar31 = plVar20;
LAB_062fdba0:
    thunk_FUN_02f411dc(plVar31,0);
  }
  else {
    if (*plVar31 == 0) goto LAB_062fd930;
    if (*(int *)(*plVar31 + 0xec) == -2) {
      *plVar31 = 0;
      goto LAB_062fdba0;
    }
  }
  uVar12 = FUN_062fd130(param_1,lVar18);
  if (dVar34 <= dVar33) {
    lVar24 = lVar11;
  }
  lVar11 = FUN_062fcbf8(uVar12,lVar24);
  lVar18 = lVar22;
  if (lVar11 == lVar22) {
    return 1;
  }
  goto LAB_062fda08;
LAB_062fdc80:
  if (*(long *)(uVar26 + 0xf8) == 0) goto LAB_062fd930;
  if (*(long *)(uVar26 + 0x18) != *(long *)(*(long *)(uVar26 + 0xf8) + 0x78)) {
    uVar12 = *(undefined8 *)(uVar26 + 0x78);
    *(long *)(uVar26 + 0x78) = *(long *)(uVar26 + 0x18);
    *(undefined8 *)(uVar26 + 0x18) = uVar12;
  }
  lVar22 = *(long *)(uVar26 + 0xf0);
  if (lVar22 == 0) goto LAB_062fd930;
  if (*(int *)(lVar22 + 0xec) == -2) {
    FUN_062fd130(param_1,lVar18);
    lVar18 = *(long *)(param_1 + 0x20);
    if (lVar18 != 0) {
      lVar22 = *(long *)(lVar18 + 0x10);
      lVar24 = *(long *)System_IO_Compression_GZipStream_var;
      *(int *)(lVar18 + 0x1c) = *(int *)(lVar18 + 0x1c) + 1;
      if (lVar22 != 0) {
        uVar5 = *(uint *)(lVar18 + 0x18);
        if (uVar5 < *(uint *)(lVar22 + 0x18)) {
          *(uint *)(lVar18 + 0x18) = uVar5 + 1;
          plVar20 = (long *)(lVar22 + (long)(int)uVar5 * 8 + 0x20);
          *plVar20 = lVar11;
          thunk_FUN_02f411dc(plVar20,lVar11);
          return 1;
        }
        FUN_03fd0c9c(lVar18,lVar11,
                     *(undefined8 *)(*(long *)(*(long *)(lVar24 + 0x20) + 0xc0) + 0x70));
        return 1;
      }
    }
    goto LAB_062fd930;
  }
  *(long *)(uVar26 + 0x100) = lVar22;
  thunk_FUN_02f411dc(uVar26 + 0x100);
  uVar26 = *(ulong *)(uVar26 + 0xf0);
  if (uVar26 == 0) goto LAB_062fd930;
  goto LAB_062fdc80;
  while (FUN_062fcb24(param_1,uVar17,param_3), uVar17 != 0) {
LAB_062fd8e4:
    uVar17 = *(ulong *)(uVar17 + 0xf0);
    if (bVar10) {
      if ((uVar17 == 0) || (uVar26 == 0)) break;
      bVar10 = *(long *)(uVar17 + 0x50) == *(long *)(uVar26 + 0x50);
      if (uVar17 == uVar26) {
        if (*(long *)(uVar17 + 0x50) == *(long *)(uVar26 + 0x50)) {
          if ((param_4 & 1) != 0) {
            return 0;
          }
          if ((uVar26 != 0) && (*(long *)(uVar26 + 0xf8) != 0)) {
            *(undefined4 *)(*(long *)(uVar26 + 0xf8) + 0xec) = 0xfffffffe;
            lVar18 = thunk_FUN_02ef1808(*(undefined8 *)UnityEngine_GUIStyleState_var);
            FUN_05645a04(lVar18,0);
            if (lVar18 != 0) {
              *(undefined8 *)(lVar18 + 0x28) = 0;
              thunk_FUN_02f411dc((undefined8 *)(lVar18 + 0x28),0);
              *(undefined8 *)(lVar18 + 0x10) = *(undefined8 *)(uVar26 + 0x20);
              *(undefined8 *)(lVar18 + 0x18) = 0;
              thunk_FUN_02f411dc((undefined8 *)(lVar18 + 0x18),0);
              puVar25 = (ulong *)(lVar18 + 0x20);
              *puVar25 = uVar26;
              thunk_FUN_02f411dc(puVar25,uVar26);
              if (*puVar25 != 0) {
                *(undefined8 *)(*puVar25 + 0xdc) = DAT_013f6078;
                goto LAB_062fdc80;
              }
            }
          }
        }
        else {
LAB_062fd948:
          lVar18 = *(long *)(param_1 + 0x20);
          if (lVar18 != 0) {
            lVar22 = *(long *)(lVar18 + 0x10);
            lVar24 = *(long *)System_IO_Compression_GZipStream_var;
            *(int *)(lVar18 + 0x1c) = *(int *)(lVar18 + 0x1c) + 1;
            if (lVar22 != 0) {
              uVar5 = *(uint *)(lVar18 + 0x18);
              if (uVar5 < *(uint *)(lVar22 + 0x18)) {
                *(uint *)(lVar18 + 0x18) = uVar5 + 1;
                plVar20 = (long *)(lVar22 + (long)(int)uVar5 * 8 + 0x20);
                *plVar20 = lVar11;
                uVar12 = thunk_FUN_02f411dc(plVar20,lVar11);
              }
              else {
                uVar12 = FUN_03fd0c9c(lVar18,lVar11,
                                      *(undefined8 *)
                                       (*(long *)(*(long *)(lVar24 + 0x20) + 0xc0) + 0x70));
              }
              if ((uVar26 != 0) && (lVar11 = *(long *)(uVar26 + 0xf8), lVar11 != 0)) {
                if ((*(long *)(lVar11 + 0x18) == *(long *)(lVar11 + 0x78)) &&
                   (*(long *)(lVar11 + 0x20) == *(long *)(lVar11 + 0x80))) {
                  uVar26 = *(ulong *)(uVar26 + 0xf0);
                }
                lVar11 = FUN_062fcbf8(uVar12,uVar26);
                puVar8 = UnityEngine_GUIStyleState_var;
                if (lVar11 == 0) {
                  return 1;
                }
                lVar18 = 0;
                goto LAB_062fda08;
              }
            }
          }
        }
        break;
      }
    }
    else {
      if (uVar17 == uVar26) goto LAB_062fd948;
      bVar10 = false;
    }
  }
LAB_062fd930:
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


