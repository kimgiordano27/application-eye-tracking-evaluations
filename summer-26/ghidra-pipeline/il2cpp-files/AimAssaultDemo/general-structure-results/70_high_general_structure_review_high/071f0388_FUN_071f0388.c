/*
FUNCTION_NAME: FUN_071f0388
ENTRY_POINT: 071f0388
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_5;validity_or_gating_hits_21;telemetry_or_network_hits_3
*/


void FUN_071f0388(long param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
                    /* try { // try from 071f0388 to 072f0393 has its CatchHandler @ 071f0504 */
                    /* try { // try from 071f0394 to 072f039f has its CatchHandler @ 071f052c */
  if ((DAT_08268447 & 1) == 0) {
    FUN_0373b518(System_Func<float,_float,_float,_float>_TypeInfo);
    FUN_0373b518(Pico_Platform_Message_GetDataFromMessage<AssetFileDownloadCancelResult>_TypeInfo);
    FUN_0373b518(Pico_Platform_Message_GetDataFromMessage<GameRequestFailedReason>_TypeInfo);
    DAT_08268447 = 1;
  }
  puVar5 = Pico_Platform_Message_GetDataFromMessage<GameRequestFailedReason>_TypeInfo;
  puVar4 = Pico_Platform_Message_GetDataFromMessage<AssetFileDownloadCancelResult>_TypeInfo;
  puVar3 = System_Func<float,_float,_float,_float>_TypeInfo;
  if (*(long *)(param_1 + 0x130) != 0) {
    FUN_075d5a68(*(long *)(param_1 + 0x130),
                 *(undefined8 *)
                  Pico_Platform_Message_GetDataFromMessage<GameRequestFailedReason>_TypeInfo,0);
    uVar10 = 0;
    do {
      lVar7 = *(long *)(param_1 + 0xa8);
      if (lVar7 == 0) goto LAB_071f084c;
      if (*(uint *)(lVar7 + 0x18) <= uVar10) goto LAB_071f0850;
      lVar6 = *(long *)puVar4;
      lVar7 = *(long *)(lVar7 + uVar10 * 8 + 0x20);
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar6 = *(long *)puVar4;
      }
      lVar8 = *(long *)(param_1 + 0x140);
      if (lVar8 == 0) goto LAB_071f084c;
      if (*(int *)(lVar8 + 0x18) == 0) goto LAB_071f0850;
      if (lVar7 == 0) goto LAB_071f084c;
      FUN_07577edc(lVar7,*(undefined4 *)(*(long *)(lVar6 + 0xb8) + 0x60),
                   *(undefined4 *)(lVar8 + 0x20),0);
      lVar7 = *(long *)(param_1 + 0xa8);
      if (lVar7 == 0) goto LAB_071f084c;
      if (*(uint *)(lVar7 + 0x18) <= uVar10) goto LAB_071f0850;
      lVar6 = *(long *)(param_1 + 0x140);
      if (lVar6 == 0) goto LAB_071f084c;
      if (*(uint *)(lVar6 + 0x18) < 2) goto LAB_071f0850;
      lVar7 = *(long *)(lVar7 + uVar10 * 8 + 0x20);
      if (lVar7 == 0) goto LAB_071f084c;
      FUN_07577edc(lVar7,*(undefined4 *)(*(long *)(*(long *)puVar4 + 0xb8) + 100),
                   *(undefined4 *)(lVar6 + 0x24),0);
      lVar7 = *(long *)(param_1 + 0xa8);
      if (lVar7 == 0) goto LAB_071f084c;
      if (*(uint *)(lVar7 + 0x18) <= uVar10) goto LAB_071f0850;
      lVar6 = *(long *)(param_1 + 0x140);
      if (lVar6 == 0) goto LAB_071f084c;
      if (*(uint *)(lVar6 + 0x18) < 3) goto LAB_071f0850;
      lVar7 = *(long *)(lVar7 + uVar10 * 8 + 0x20);
      if (lVar7 == 0) goto LAB_071f084c;
      FUN_07577edc(lVar7,*(undefined4 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x68),
                   *(undefined4 *)(lVar6 + 0x28),0);
      lVar7 = *(long *)(param_1 + 0xa8);
      if (lVar7 == 0) goto LAB_071f084c;
      if (*(uint *)(lVar7 + 0x18) <= uVar10) goto LAB_071f0850;
      lVar7 = *(long *)(lVar7 + uVar10 * 8 + 0x20);
      if (lVar7 == 0) goto LAB_071f084c;
      FUN_07577edc(lVar7,*(undefined4 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x24),
                   uVar10 & 0xffffffff,0);
      lVar7 = *(long *)(param_1 + 0xa8);
      if (lVar7 == 0) goto LAB_071f084c;
      if (*(uint *)(lVar7 + 0x18) <= uVar10) goto LAB_071f0850;
      lVar7 = *(long *)(lVar7 + uVar10 * 8 + 0x20);
      if (lVar7 == 0) goto LAB_071f084c;
      thunk_FUN_07576f20(lVar7,*(undefined4 *)(*(long *)(*(long *)puVar4 + 0xb8) + 4),
                         *(undefined8 *)(param_1 + 0x80),0);
      lVar7 = *(long *)(param_1 + 0xa8);
      if (lVar7 == 0) goto LAB_071f084c;
      if (*(uint *)(lVar7 + 0x18) <= uVar10) goto LAB_071f0850;
      lVar7 = *(long *)(lVar7 + uVar10 * 8 + 0x20);
      if (lVar7 == 0) goto LAB_071f084c;
      thunk_FUN_07576f20(lVar7,*(undefined4 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x14),
                         *(undefined8 *)(param_1 + 0x88),0);
      puVar2 = PTR_DAT_07d923b0;
      uVar10 = uVar10 + 1;
    } while (uVar10 != 3);
    lVar7 = *(long *)(param_1 + 0x130);
    if (lVar7 != 0) {
      lVar6 = 4;
      lVar8 = 0x20;
      do {
        FUN_075d2bc8(lVar7,0);
        lVar7 = *(long *)(param_1 + 0x130);
        if (lVar6 == 7) {
          if (lVar7 != 0) {
            FUN_075d5c10(lVar7,*(undefined8 *)puVar5,0);
            return;
          }
          break;
        }
        lVar9 = *(long *)(param_1 + 0x20);
        if (lVar9 == 0) break;
        uVar10 = lVar6 - 4;
        if (*(uint *)(lVar9 + 0x18) <= uVar10) {
LAB_071f0850:
                    /* WARNING: Subroutine does not return */
          FUN_0373b7bc();
        }
        FUN_075cae58(&local_100,*(undefined8 *)(lVar9 + lVar6 * 8),0);
        uStack_88 = uStack_f8;
        local_90 = local_100;
        uStack_78 = uStack_e8;
        uStack_80 = uStack_f0;
        local_70 = local_e0;
        if (lVar7 == 0) break;
        uStack_b8 = uStack_f8;
        local_c0 = local_100;
        uStack_a8 = uStack_e8;
        uStack_b0 = uStack_f0;
        local_a0 = local_e0;
        FUN_075d6824(lVar7,&local_c0,0);
        if (*(long *)(param_1 + 0x130) == 0) break;
        FUN_075d3550(0,0,0,0x3f800000,0x3f800000,*(long *)(param_1 + 0x130),1,1,0);
        lVar7 = *(long *)(param_1 + 0x130);
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_03798b70();
        }
        if (lVar7 == 0) break;
        FUN_075dc5c8(lVar7,*(int *)(*(long *)(*(long *)puVar3 + 0xb8) + 8) + 4,
                     *(undefined8 *)(param_1 + 0x90),0,0);
        if (*(long *)(param_1 + 0x130) == 0) break;
        FUN_075dc5c8(*(long *)(param_1 + 0x130),*(int *)(*(long *)(*(long *)puVar3 + 0xb8) + 8) + 1,
                     *(undefined8 *)(param_1 + 0xf8),0,0);
        if (*(long *)(param_1 + 0x130) == 0) break;
        FUN_075dc5c8(*(long *)(param_1 + 0x130),*(int *)(*(long *)(*(long *)puVar3 + 0xb8) + 8) + 2,
                     *(undefined8 *)(param_1 + 0x28),0,0);
        lVar7 = *(long *)(param_1 + 0xc0);
        if (lVar7 == 0) break;
        if (*(uint *)(lVar7 + 0x18) <= uVar10) goto LAB_071f0850;
        puVar1 = (undefined8 *)(lVar7 + lVar8);
        uStack_d8 = puVar1[5];
        local_e0 = puVar1[4];
        uStack_c8 = puVar1[7];
        uStack_d0 = puVar1[6];
        uStack_f8 = puVar1[1];
        local_100 = *puVar1;
        uStack_e8 = puVar1[3];
        uStack_f0 = puVar1[2];
        lVar7 = *(long *)(param_1 + 0xb8);
        if (lVar7 == 0) break;
        if (*(uint *)(lVar7 + 0x18) <= uVar10) goto LAB_071f0850;
        puVar1 = (undefined8 *)(lVar7 + lVar8);
        uStack_118 = puVar1[5];
        local_120 = puVar1[4];
        uStack_108 = puVar1[7];
        uStack_110 = puVar1[6];
        uStack_138 = puVar1[1];
        local_140 = *puVar1;
        uStack_128 = puVar1[3];
        uStack_130 = puVar1[2];
        if (*(long *)(param_1 + 0x130) == 0) break;
        local_1c0 = local_140;
        uStack_1b8 = uStack_138;
        uStack_1b0 = uStack_130;
        uStack_1a8 = uStack_128;
        local_1a0 = local_120;
        uStack_198 = uStack_118;
        uStack_190 = uStack_110;
        uStack_188 = uStack_108;
        local_180 = local_100;
        uStack_178 = uStack_f8;
        uStack_170 = uStack_f0;
        uStack_168 = uStack_e8;
        local_160 = local_e0;
        uStack_158 = uStack_d8;
        uStack_150 = uStack_d0;
        uStack_148 = uStack_c8;
        FUN_075d4b74(*(long *)(param_1 + 0x130),&local_180,&local_1c0,0);
        lVar7 = *(long *)(param_1 + 0x130);
        if (DAT_08253f87 == '\0') {
          FUN_0373b518(puVar2);
          DAT_08253f87 = '\x01';
        }
        lVar9 = *(long *)(*(long *)puVar2 + 0xb8);
        uStack_1d8 = *(undefined8 *)(lVar9 + 0x68);
        local_1e0 = *(undefined8 *)(lVar9 + 0x60);
        uStack_1c8 = *(undefined8 *)(lVar9 + 0x78);
        uStack_1d0 = *(undefined8 *)(lVar9 + 0x70);
        uStack_1f8 = *(undefined8 *)(lVar9 + 0x48);
        local_200 = *(undefined8 *)(lVar9 + 0x40);
        uStack_1e8 = *(undefined8 *)(lVar9 + 0x58);
        uStack_1f0 = *(undefined8 *)(lVar9 + 0x50);
        lVar9 = *(long *)(param_1 + 0xa8);
        if (lVar9 == 0) break;
        if (*(uint *)(lVar9 + 0x18) <= uVar10) goto LAB_071f0850;
        if (lVar7 == 0) break;
        local_240 = local_200;
        uStack_238 = uStack_1f8;
        uStack_230 = uStack_1f0;
        uStack_228 = uStack_1e8;
        local_220 = local_1e0;
        uStack_218 = uStack_1d8;
        uStack_210 = uStack_1d0;
        uStack_208 = uStack_1c8;
        FUN_075db0bc(lVar7,&local_240,*(undefined8 *)(lVar9 + lVar6 * 8),0,0,
                     *(int *)(param_1 + 0x114) * 3,0);
        lVar7 = *(long *)(param_1 + 0x130);
        lVar6 = lVar6 + 1;
        lVar8 = lVar8 + 0x40;
      } while (lVar7 != 0);
    }
  }
LAB_071f084c:
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


