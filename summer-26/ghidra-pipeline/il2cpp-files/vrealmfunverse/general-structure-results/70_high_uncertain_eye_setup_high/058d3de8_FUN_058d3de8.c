/*
FUNCTION_NAME: FUN_058d3de8
ENTRY_POINT: 058d3de8
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_3
*/


void FUN_058d3de8(uint param_1,ulong param_2,long *param_3,undefined8 param_4,undefined8 param_5,
                 undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
                 undefined8 param_10,long param_11,undefined8 param_12,undefined8 param_13,
                 undefined8 param_14,ulong param_15,undefined8 param_16,undefined8 param_17,
                 undefined8 param_18,undefined8 param_19)

{
  uint uVar1;
  undefined4 uVar2;
  short sVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  byte bVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  ulong uVar12;
  ulong uVar13;
  size_t __n;
  uint uVar14;
  int iVar15;
  long lVar16;
  long lVar17;
  undefined8 *puVar18;
  int iVar19;
  byte bVar20;
  long local_270;
  long local_268;
  int local_25c;
  void *local_258;
  ulong local_250;
  long local_248;
  long local_240;
  long local_238;
  long local_230;
  ulong local_228;
  ulong local_220;
  undefined8 local_218;
  undefined8 local_210;
  undefined8 local_208;
  long *local_200;
  undefined4 local_1f4;
  uint local_1f0;
  int local_1ec;
  ulong local_1e8;
  ulong local_1e0;
  long local_1d8;
  uint local_1cc;
  undefined4 local_1c8;
  uint local_1c4;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  uint local_1a8;
  undefined4 uStack_1a4;
  undefined4 local_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined8 uStack_190;
  undefined8 local_188;
  ulong local_180;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 local_170;
  undefined4 uStack_16c;
  undefined4 local_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  uint uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 local_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  uint uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  ulong local_e0;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  byte local_d0;
  undefined2 uStack_cf;
  undefined1 uStack_cd;
  undefined4 uStack_cc;
  byte local_c8;
  undefined2 uStack_c7;
  undefined1 uStack_c5;
  undefined4 uStack_c4;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  long local_78;
  
  puVar5 = Method_System_ReadOnlySpan<OVRPlugin_DynamicObjectClass>_GetPinnableReference__;
  local_270 = tpidr_el0;
  local_78 = *(long *)(local_270 + 0x28);
  local_a8 = param_9;
  uStack_a0 = param_10;
  local_b0 = param_13;
  local_98 = param_6;
  uStack_90 = param_7;
  local_88 = param_4;
  uStack_80 = param_5;
  if ((DAT_066d3343 & 1) == 0) {
    FUN_02b3c81c(PTR_DAT_06312d90);
    FUN_02b3c81c(Method_System_ReadOnlySpan<OVRPlugin_DynamicObjectClass>_get_Length__);
    FUN_02b3c81c(PTR_DAT_06322628);
    FUN_02b3c81c(Method_System_ReadOnlySpan<ProbeBrickIndex_Brick>_get_Length__);
    FUN_02b3c81c(Method_System_ReadOnlySpan<GradientColorKey>_GetPinnableReference__);
    FUN_02b3c81c(
                Method_UnityEngine_InputSystem_LowLevel_InputStateHistory_Record<TouchState>__ctor__
                );
    FUN_02b3c81c(Method_System_ReadOnlySpan<OVRPlugin_DynamicObjectClass>_GetPinnableReference__);
    FUN_02b3c81c(
                Method_UnityEngine_InputSystem_LowLevel_InputStateHistory_Record<TouchState>_Equals__
                );
    FUN_02b3c81c(
                Method_UnityEngine_InputSystem_LowLevel_InputStateHistory_Record<TouchState>_GetHashCode__
                );
    FUN_02b3c81c(
                Method_UnityEngine_InputSystem_LowLevel_InputStateHistory_Record<TouchState>_GetUnsafeExtraMemoryPtr__
                );
    DAT_066d3343 = 1;
  }
  local_c8 = 0;
  uStack_c7 = 0;
  uStack_c5 = 0;
  uStack_c4 = 0;
  local_e8 = 0;
  uStack_e4 = 0;
  local_ec = 0;
  uStack_1b8 = 0;
  local_1c0 = 0;
  local_1a8 = 0;
  uStack_1a4 = 0;
  local_1b0 = 0;
  uStack_198 = 0;
  uStack_194 = 0;
  local_1a0 = 0;
  uStack_19c = 0;
  local_188 = 0;
  uStack_190 = 0;
  iVar9 = *(int *)(param_3[0x12] + (long)(int)param_1 * 4);
  lVar16 = (long)iVar9;
  local_e0 = 0;
  uStack_d8 = 0;
  uStack_d4 = 0;
  local_d0 = 0;
  uStack_cf = 0;
  uStack_cd = 0;
  uStack_cc = 0;
  puVar18 = (undefined8 *)(param_3[0x2c] + (long)iVar9 * 0xc);
  uStack_108 = 0;
  local_110 = 0;
  uStack_f8 = 0;
  local_100 = 0;
  uStack_118 = 0;
  local_120 = 0;
  uStack_12c = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  local_b8 = *(undefined4 *)(puVar18 + 1);
  local_c0 = *puVar18;
  uStack_148 = 0;
  uStack_144 = 0;
  local_150 = 0;
  uStack_138 = 0;
  local_134 = 0;
  uStack_140 = 0;
  uStack_13c = 0;
  uStack_158 = 0;
  local_160 = 0;
  local_248 = (long)*(short *)(param_3[0x2e] + lVar16 * 2);
  local_25c = *(int *)(param_3[0x30] + lVar16 * 4);
  local_180 = 0;
  uStack_178 = 0;
  uStack_174 = 0;
  local_168 = 0;
  local_170 = 0;
  uStack_16c = 0;
  local_1c8 = FUN_03abfb04(&local_88,*(undefined4 *)(param_3[0x2a] + lVar16 * 4),
                           *(undefined8 *)puVar5);
  local_1f4 = *(undefined4 *)(*param_3 + (long)(int)param_1 * 4);
  uStack_c4 = *(undefined4 *)(param_3[0xe] + (long)(int)param_1 * 4);
  local_268 = (long)*(short *)(param_3[0x14] + (long)(int)param_1 * 2);
  uVar2 = *(undefined4 *)(param_3[8] + (long)(int)param_1 * 4);
  local_250 = (ulong)*(uint *)(param_3[0x16] + (long)(int)param_1 * 4);
  sVar3 = *(short *)(param_3[0x18] + (long)(int)param_1 * 2);
  local_240 = (long)sVar3;
  local_1c4 = *(uint *)(param_3[0xc] + (long)(int)param_1 * 4);
  local_220 = (ulong)param_1;
  if ((param_2 & 1) == 0) {
    local_1f0 = *(uint *)(param_3[0x1c] + (long)(int)param_1 * 4);
    if (local_1f0 == 0) goto LAB_058d4518;
    local_220 = (ulong)*(uint *)(param_3[0x1a] + (long)(int)param_1 * 4);
  }
  else {
    local_1f0 = 1;
  }
  local_1d8 = CONCAT44(local_1d8._4_4_,*(undefined4 *)(param_3[6] + (long)(int)param_1 * 4));
  local_1e0 = CONCAT44(local_1e0._4_4_,*(undefined4 *)(param_3[0x10] + (long)(int)param_1 * 4));
  uVar12 = FUN_05ccf14c(&uStack_c4,0);
  uVar14 = 3;
  if ((uVar12 & 1) == 0) {
    uVar14 = 1;
  }
  if (((local_1c4 ^ 0xffffffff) & 0xfffe) == 0) {
    iVar9 = FUN_05ccf128(&uStack_c4,0);
    local_1cc = uVar14 | 4;
    if (iVar9 != 1) {
      local_1cc = uVar14;
    }
  }
  else {
    local_1cc = uVar14 | 8;
  }
  __n = (long)(int)sVar3 * 4;
  if (sVar3 == 0) {
    memset((void *)0x0,0,0);
    local_258 = (void *)0x0;
LAB_058d4190:
    bVar4 = false;
    bVar20 = 1;
  }
  else {
    local_258 = (void *)((long)&local_270 - (__n + 0xf & 0xfffffffffffffff0));
    memset(local_258,0,__n);
    puVar7 = 
    Method_UnityEngine_InputSystem_LowLevel_InputStateHistory_Record<TouchState>_GetUnsafeExtraMemoryPtr__
    ;
    puVar6 = Method_UnityEngine_InputSystem_LowLevel_InputStateHistory_Record<TouchState>__ctor__;
    puVar5 = PTR_DAT_06312d90;
    if ((int)local_240 < 0) {
      FUN_04d9bcc4(0);
      goto LAB_058d4190;
    }
    local_1e8 = param_15;
    lVar16 = 0;
    bVar20 = 1;
    do {
      if (lVar16 < local_248) {
        lVar17 = (long)*(int *)(param_3[0x34] + (long)((int)local_250 + (int)lVar16) * 4);
        if ((int)param_3[0x39] < 1) {
          FUN_03abffd4(&local_98,*(undefined4 *)(param_3[0x36] + lVar17 * 4),&uStack_e4,
                       *(undefined8 *)puVar6);
        }
        else {
          uStack_e4 = *(undefined4 *)(param_3[0x38] + lVar17 * 4);
        }
        bVar8 = FUN_05ccf184(&uStack_e4,0);
        bVar20 = bVar20 & bVar8;
        *(undefined4 *)((long)local_258 + lVar16 * 4) = uStack_e4;
      }
      else {
        if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        FUN_05c41e34(*(undefined8 *)puVar7,0);
      }
      lVar16 = lVar16 + 1;
    } while (local_240 != lVar16);
    bVar4 = true;
    param_15 = local_1e8;
  }
  uVar10 = FUN_05ccf134(&uStack_c4,0);
  uVar11 = FUN_05ccf11c(&uStack_c4,0);
  local_d0 = FUN_05ccf104(&uStack_c4,0);
  local_d0 = local_d0 & 1;
  local_e0 = CONCAT44(uVar2,(undefined4)local_1d8) & 0xffffffff000000ff;
  uStack_cf = 0;
  uStack_cd = 0;
  uStack_cc = (undefined4)local_1e0;
  uStack_c7 = 0;
  uStack_c5 = 0;
  uStack_d8 = uVar10;
  uStack_d4 = uVar11;
  local_c8 = bVar20;
  local_230 = FUN_058d3af4(&local_e0,param_14,param_15,param_16);
  if (bVar4) {
    lVar16 = 0;
    local_208 = param_18;
    local_210 = param_17;
    local_218 = param_19;
    local_1d8 = param_11;
    local_228 = (ulong)local_1f0;
    local_200 = param_3;
    do {
      local_238 = lVar16;
      if (lVar16 < local_248) {
        iVar9 = *(int *)(param_3[0x36] +
                        (long)*(int *)(param_3[0x34] + (long)((int)local_250 + (int)lVar16) * 4) * 4
                        );
        local_e8 = *(undefined4 *)((long)local_258 + lVar16 * 4);
        if (iVar9 == 0) {
          iVar9 = *(int *)(*(long *)PTR_DAT_06312d90 + 0xe4);
          puVar18 = (undefined8 *)
                    Method_UnityEngine_InputSystem_LowLevel_InputStateHistory_Record<TouchState>_GetHashCode__
          ;
          goto joined_r0x058d44b4;
        }
        FUN_03abf504(&local_a8,iVar9,&local_ec,
                     *(undefined8 *)
                      Method_System_ReadOnlySpan<GradientColorKey>_GetPinnableReference__);
        uVar12 = FUN_05ccf178(&local_e8,0);
        uVar14 = 0x62;
        if ((uVar12 & 1) == 0) {
          uVar14 = 0x60;
        }
        uVar12 = FUN_05ccf16c(&local_e8,0);
        uVar1 = uVar14 | 8;
        if ((uVar12 & 1) == 0) {
          uVar1 = uVar14;
        }
        uVar12 = FUN_05ccf190(&local_e8,0);
        uVar14 = uVar1 | 0x10;
        if ((uVar12 & 1) == 0) {
          uVar14 = uVar1;
        }
        uVar12 = 0;
        uVar1 = (uint)local_c0;
        if ((int)(uint)local_c0 < 2) {
          uVar1 = 1;
        }
        local_1e8 = (ulong)uVar1;
        iVar9 = (int)lVar16 + (int)local_268;
        local_1ec = local_25c + uVar1 * iVar9;
        do {
          uVar2 = local_ec;
          iVar19 = (int)uVar12;
          uStack_178 = 0;
          uStack_174 = 0;
          local_170 = 0;
          uStack_16c = 0;
          puVar18 = (undefined8 *)(param_3[0x32] + (long)(local_1ec + iVar19) * 0x30);
          local_180 = 0;
          local_168 = 0;
          uStack_118 = puVar18[1];
          local_120 = *puVar18;
          uStack_108 = puVar18[3];
          local_110 = puVar18[2];
          uStack_f8 = puVar18[5];
          local_100 = puVar18[4];
          uVar13 = FUN_05ccf0f4(&local_c0,0);
          if ((uVar13 & 1) == 0) {
            iVar19 = -1;
          }
          local_1e0 = uVar12;
          uVar12 = FUN_05ccf16c(&local_e8,0);
          uStack_178 = uStack_d8;
          local_180 = local_e0;
          local_160 = CONCAT44(iVar9,local_1c8);
          uStack_16c = uStack_cc;
          local_168 = (undefined4)
                      (CONCAT17(uStack_c5,CONCAT25(uStack_c7,CONCAT14(local_c8,uStack_cc))) >> 0x20)
          ;
          uStack_174 = uStack_d4;
          local_170 = (undefined4)
                      (CONCAT17(uStack_cd,CONCAT25(uStack_cf,CONCAT14(local_d0,uStack_d4))) >> 0x20)
          ;
          uVar10 = local_1f4;
          if ((uVar12 & 1) == 0) {
            uVar10 = 0;
          }
          uStack_158 = CONCAT44(uVar2,iVar19);
          uStack_13c = uStack_d8;
          uStack_144 = (undefined4)local_e0;
          uStack_140 = (undefined4)(local_e0 >> 0x20);
          uStack_148 = local_1cc;
          local_150 = CONCAT44(uVar10,uVar14);
          uStack_130 = uStack_cc;
          uStack_12c = local_168;
          uStack_138 = uStack_d4;
          local_134 = local_170;
          uStack_128 = local_1c4;
          lVar16 = FUN_058d3c48(&local_160,&local_120,local_210,local_208,local_218);
          iVar15 = *(int *)(lVar16 + 0x3c);
          if (iVar15 == 0) {
            *(int *)(local_230 + 0x1c) = *(int *)(local_230 + 0x1c) + 1;
            iVar15 = *(int *)(lVar16 + 0x3c);
          }
          *(uint *)(lVar16 + 0x3c) = iVar15 + local_1f0;
          if (0 < (int)local_1f0) {
            uVar13 = local_220 & 0xffffffff;
            uVar12 = local_228;
            do {
              uVar11 = *(undefined4 *)(local_1d8 + (long)(int)uVar13 * 4);
              uStack_1b8 = CONCAT44(uVar2,iVar19);
              uStack_19c = uStack_178;
              uStack_1a4 = (undefined4)local_180;
              local_1a0 = (undefined4)(local_180 >> 0x20);
              uStack_190 = CONCAT44(local_168,uStack_16c);
              local_1b0 = CONCAT44(uVar10,uVar14);
              local_1c0 = CONCAT44(iVar9,local_1c8);
              local_1a8 = local_1cc;
              uStack_198 = uStack_174;
              uStack_194 = local_170;
              local_188 = (ulong)local_1c4;
              if (*(int *)(*(long *)PTR_DAT_06322628 + 0xe4) == 0) {
                thunk_FUN_02b9ad44();
              }
              local_188 = CONCAT44(uVar11,(undefined4)local_188);
              FUN_03aaaa18(&local_b0,&local_1c0,
                           *(undefined8 *)
                            Method_System_ReadOnlySpan<ProbeBrickIndex_Brick>_get_Length__);
              uVar12 = uVar12 - 1;
              uVar13 = (ulong)((int)uVar13 + 1);
            } while (uVar12 != 0);
          }
          uVar12 = local_1e0 + 1;
          param_3 = local_200;
        } while (uVar12 != local_1e8);
      }
      else {
        iVar9 = *(int *)(*(long *)PTR_DAT_06312d90 + 0xe4);
        puVar18 = (undefined8 *)
                  Method_UnityEngine_InputSystem_LowLevel_InputStateHistory_Record<TouchState>_GetUnsafeExtraMemoryPtr__
        ;
joined_r0x058d44b4:
        if (iVar9 == 0) {
          thunk_FUN_02b9ad44();
        }
        FUN_05c41e34(*puVar18,0);
      }
      lVar16 = local_238 + 1;
    } while (lVar16 != local_240);
  }
LAB_058d4518:
  if (*(long *)(local_270 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


