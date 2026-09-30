/*
FUNCTION_NAME: Unity.VisualScripting.FullSerializer.fsMetaType.<>c__DisplayClass18_0$$<CanSerializeProperty>b__0
ENTRY_POINT: 071ef59c
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_21;telemetry_or_network_hits_4
*/


void Unity_VisualScripting_FullSerializer_fsMetaType_<>c__DisplayClass18_0__<CanSerializeProperty>b__0
               (long param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  int iVar8;
  int iVar9;
  float fVar10;
  int iVar11;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 local_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 local_260;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 local_230;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  
  if ((DAT_0826844a & 1) == 0) {
    FUN_0373b518(Pico_Platform_Message_GetDataFromMessage<AssetFileDownloadCancelResult>_TypeInfo);
    FUN_0373b518(Pico_Platform_Message_GetDataFromMessage<GameConnectionEvent>_TypeInfo);
    DAT_0826844a = 1;
  }
  puVar4 = Pico_Platform_Message_GetDataFromMessage<GameConnectionEvent>_TypeInfo;
  if (*(long *)(param_1 + 0x130) != 0) {
    FUN_075d5a68(*(long *)(param_1 + 0x130),
                 *(undefined8 *)
                  Pico_Platform_Message_GetDataFromMessage<GameConnectionEvent>_TypeInfo,0);
    puVar3 = Pico_Platform_Message_GetDataFromMessage<AssetFileDownloadCancelResult>_TypeInfo;
    if (*(long *)(param_1 + 0xd0) != 0) {
      lVar6 = *(long *)(param_1 + 0x130);
      uVar7 = *(undefined8 *)(param_1 + 0x100);
      uVar1 = *(undefined4 *)(*(long *)(param_1 + 0xd0) + 0x4c);
      lVar5 = *(long *)
               Pico_Platform_Message_GetDataFromMessage<AssetFileDownloadCancelResult>_TypeInfo;
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_03798b70();
        lVar5 = *(long *)puVar3;
      }
      uVar2 = *(undefined4 *)(*(long *)(lVar5 + 0xb8) + 0x34);
      FUN_075cae58(&local_d0,*(undefined8 *)(param_1 + 0xe0),0);
      uStack_98 = uStack_c8;
      local_a0 = local_d0;
      uStack_88 = uStack_b8;
      uStack_90 = uStack_c0;
      local_80 = local_b0;
      if (lVar6 != 0) {
        uStack_f8 = uStack_c8;
        local_100 = local_d0;
        uStack_e8 = uStack_b8;
        uStack_f0 = uStack_c0;
        local_e0 = local_b0;
        FUN_075da0dc(lVar6,uVar7,uVar1,uVar2,&local_100,0,0);
        if (*(long *)(param_1 + 0xd0) != 0) {
          lVar5 = *(long *)(param_1 + 0x130);
          uVar7 = *(undefined8 *)(param_1 + 0x100);
          uVar1 = *(undefined4 *)(*(long *)(param_1 + 0xd0) + 0x4c);
          uVar2 = *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x38);
          FUN_075cae58(&local_130,*(undefined8 *)(param_1 + 0xe8),0);
          uStack_c8 = uStack_128;
          local_d0 = local_130;
          uStack_b8 = uStack_118;
          uStack_c0 = uStack_120;
          local_b0 = local_110;
          if (lVar5 != 0) {
            uStack_158 = uStack_128;
            local_160 = local_130;
            uStack_148 = uStack_118;
            uStack_150 = uStack_120;
            local_140 = local_110;
            FUN_075da0dc(lVar5,uVar7,uVar1,uVar2,&local_160,0,0);
            if ((*(long *)(param_1 + 0xd0) != 0) && (lVar5 = *(long *)(param_1 + 0x10), lVar5 != 0))
            {
              if (*(int *)(lVar5 + 0x18) == 0) goto LAB_071efb68;
              lVar6 = *(long *)(param_1 + 0x130);
              uVar7 = *(undefined8 *)(param_1 + 0x100);
              uVar1 = *(undefined4 *)(*(long *)(param_1 + 0xd0) + 0x4c);
              uVar2 = *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x3c);
              FUN_075cae58(&local_190,*(undefined8 *)(lVar5 + 0x20),0);
              uStack_128 = uStack_188;
              local_130 = local_190;
              uStack_118 = uStack_178;
              uStack_120 = uStack_180;
              local_110 = local_170;
              if (lVar6 != 0) {
                uStack_1b8 = uStack_188;
                local_1c0 = local_190;
                uStack_1a8 = uStack_178;
                uStack_1b0 = uStack_180;
                local_1a0 = local_170;
                FUN_075da0dc(lVar6,uVar7,uVar1,uVar2,&local_1c0,0,0);
                if ((*(long *)(param_1 + 0xd0) != 0) &&
                   (lVar5 = *(long *)(param_1 + 0x10), lVar5 != 0)) {
                  if (*(uint *)(lVar5 + 0x18) < 2) goto LAB_071efb68;
                  lVar6 = *(long *)(param_1 + 0x130);
                  uVar7 = *(undefined8 *)(param_1 + 0x100);
                  uVar1 = *(undefined4 *)(*(long *)(param_1 + 0xd0) + 0x4c);
                  uVar2 = *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x44);
                  FUN_075cae58(&local_1f0,*(undefined8 *)(lVar5 + 0x28),0);
                  uStack_188 = uStack_1e8;
                  local_190 = local_1f0;
                  uStack_178 = uStack_1d8;
                  uStack_180 = uStack_1e0;
                  local_170 = local_1d0;
                  if (lVar6 != 0) {
                    uStack_218 = uStack_1e8;
                    local_220 = local_1f0;
                    uStack_208 = uStack_1d8;
                    uStack_210 = uStack_1e0;
                    local_200 = local_1d0;
                    FUN_075da0dc(lVar6,uVar7,uVar1,uVar2,&local_220,0,0);
                    if ((*(long *)(param_1 + 0xd0) != 0) &&
                       (lVar5 = *(long *)(param_1 + 0x18), lVar5 != 0)) {
                      if (*(int *)(lVar5 + 0x18) == 0) goto LAB_071efb68;
                      lVar6 = *(long *)(param_1 + 0x130);
                      uVar7 = *(undefined8 *)(param_1 + 0x100);
                      uVar1 = *(undefined4 *)(*(long *)(param_1 + 0xd0) + 0x4c);
                      uVar2 = *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x94);
                      FUN_075cae58(&local_250,*(undefined8 *)(lVar5 + 0x20),0);
                      uStack_1e8 = uStack_248;
                      local_1f0 = local_250;
                      uStack_1d8 = uStack_238;
                      uStack_1e0 = uStack_240;
                      local_1d0 = local_230;
                      if (lVar6 != 0) {
                        uStack_278 = uStack_248;
                        local_280 = local_250;
                        uStack_268 = uStack_238;
                        uStack_270 = uStack_240;
                        local_260 = local_230;
                        FUN_075da0dc(lVar6,uVar7,uVar1,uVar2,&local_280,0,0);
                        if ((*(long *)(param_1 + 0xd0) != 0) &&
                           (lVar5 = *(long *)(param_1 + 0x18), lVar5 != 0)) {
                          if (*(uint *)(lVar5 + 0x18) < 2) goto LAB_071efb68;
                          lVar6 = *(long *)(param_1 + 0x130);
                          uVar7 = *(undefined8 *)(param_1 + 0x100);
                          uVar1 = *(undefined4 *)(*(long *)(param_1 + 0xd0) + 0x4c);
                          uVar2 = *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x9c);
                          FUN_075cae58(&local_2a8,*(undefined8 *)(lVar5 + 0x28),0);
                          uStack_248 = uStack_2a0;
                          local_250 = local_2a8;
                          uStack_238 = uStack_290;
                          uStack_240 = local_298;
                          local_230 = local_288;
                          if (lVar6 != 0) {
                            uStack_2c8 = uStack_2a0;
                            local_2d0 = local_2a8;
                            uStack_2b8 = uStack_290;
                            uStack_2c0 = local_298;
                            local_2b0 = local_288;
                            FUN_075da078(lVar6,uVar7,uVar1,uVar2,&local_2d0,0);
                            if ((*(long *)(param_1 + 0xd0) != 0) &&
                               (*(long *)(param_1 + 0x130) != 0)) {
                              thunk_FUN_075cea10(*(long *)(param_1 + 0x130),
                                                 *(undefined8 *)(param_1 + 0x100),
                                                 *(undefined4 *)(*(long *)(param_1 + 0xd0) + 0x4c),
                                                 *(undefined4 *)
                                                  (*(long *)(*(long *)puVar3 + 0xb8) + 0x28),
                                                 *(undefined8 *)(param_1 + 0xf8),0);
                              if ((*(long *)(param_1 + 0xd0) != 0) &&
                                 (*(long *)(param_1 + 0x130) != 0)) {
                                thunk_FUN_075cea10(*(long *)(param_1 + 0x130),
                                                   *(undefined8 *)(param_1 + 0x100),
                                                   *(undefined4 *)(*(long *)(param_1 + 0xd0) + 0x4c)
                                                   ,*(undefined4 *)
                                                     (*(long *)(*(long *)puVar3 + 0xb8) + 0x5c),
                                                   *(undefined8 *)(param_1 + 0x28),0);
                                if ((*(long *)(param_1 + 0xd0) != 0) &&
                                   (*(long *)(param_1 + 0x130) != 0)) {
                                  thunk_FUN_075cea10(*(long *)(param_1 + 0x130),
                                                     *(undefined8 *)(param_1 + 0x100),
                                                     *(undefined4 *)
                                                      (*(long *)(param_1 + 0xd0) + 0x4c),
                                                     *(undefined4 *)
                                                      (*(long *)(*(long *)puVar3 + 0xb8) + 0xbc),
                                                     *(undefined8 *)(param_1 + 0x30),0);
                                  if ((*(long *)(param_1 + 0xd0) != 0) &&
                                     (lVar5 = *(long *)(param_1 + 0x140), lVar5 != 0)) {
                                    if (*(int *)(lVar5 + 0x18) == 0) {
LAB_071efb68:
                    /* WARNING: Subroutine does not return */
                                      FUN_0373b7bc();
                                    }
                                    iVar8 = *(int *)(lVar5 + 0x20);
                                    lVar5 = *(long *)(param_1 + 0x130);
                                    uVar7 = *(undefined8 *)(param_1 + 0x100);
                                    uVar1 = *(undefined4 *)(*(long *)(param_1 + 0xd0) + 0x4c);
                                    if (DAT_08252d5d == '\0') {
                                      FUN_0373b518(PTR_DAT_07d863e8);
                                      DAT_08252d5d = '\x01';
                                    }
                                    puVar3 = PTR_DAT_07d863e8;
                                    fVar10 = (float)iVar8 * 0.125;
                                    if (*(int *)(*(long *)PTR_DAT_07d863e8 + 0xe4) == 0) {
                                      thunk_FUN_03798b70();
                                    }
                                    lVar6 = *(long *)(param_1 + 0x140);
                                    iVar8 = -0x80000000;
                                    if ((float)(int)fVar10 != INFINITY) {
                                      iVar8 = (int)fVar10;
                                    }
                                    if (lVar6 != 0) {
                                      if (*(uint *)(lVar6 + 0x18) < 2) goto LAB_071efb68;
                                      iVar9 = *(int *)(lVar6 + 0x24);
                                      if (DAT_08252d5d == '\0') {
                                        FUN_0373b518(PTR_DAT_07d863e8);
                                        DAT_08252d5d = '\x01';
                                      }
                                      fVar10 = (float)iVar9 * 0.125;
                                      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                                        thunk_FUN_03798b70();
                                      }
                                      lVar6 = *(long *)(param_1 + 0x140);
                                      iVar9 = -0x80000000;
                                      if ((float)(int)fVar10 != INFINITY) {
                                        iVar9 = (int)fVar10;
                                      }
                                      if (lVar6 != 0) {
                                        if (*(uint *)(lVar6 + 0x18) < 3) goto LAB_071efb68;
                                        iVar11 = *(int *)(lVar6 + 0x28);
                                        if (DAT_08252d5d == '\0') {
                                          FUN_0373b518(PTR_DAT_07d863e8);
                                          DAT_08252d5d = '\x01';
                                        }
                                        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                                          thunk_FUN_03798b70();
                                        }
                                        if (lVar5 != 0) {
                                          fVar10 = (float)(int)((float)iVar11 * 0.125);
                                          iVar11 = -0x80000000;
                                          if (fVar10 != INFINITY) {
                                            iVar11 = (int)fVar10;
                                          }
                                          thunk_FUN_075cee2c(lVar5,uVar7,uVar1,iVar8,iVar9,iVar11,0)
                                          ;
                                          if (*(long *)(param_1 + 0x130) != 0) {
                                            FUN_075d5c10(*(long *)(param_1 + 0x130),
                                                         *(undefined8 *)puVar4,0);
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
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


