/*
FUNCTION_NAME: FUN_03a07a68
ENTRY_POINT: 03a07a68
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_18;validity_or_gating_hits_21;telemetry_or_network_hits_5
*/


void FUN_03a07a68(ulong param_1,ulong param_2,ulong param_3,ulong param_4,long param_5,long param_6,
                 long *param_7)

{
  int iVar1;
  int iVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined *puVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulong extraout_x1;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  undefined1 auVar16 [16];
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  ulong uStack_2a0;
  undefined8 uStack_298;
  ulong local_290;
  undefined8 uStack_288;
  ulong uStack_280;
  undefined8 uStack_278;
  undefined8 local_270;
  undefined8 uStack_268;
  ulong uStack_260;
  undefined8 uStack_258;
  ulong local_250;
  undefined8 uStack_248;
  ulong uStack_240;
  undefined8 uStack_238;
  undefined8 local_230;
  undefined8 uStack_228;
  ulong uStack_220;
  undefined8 uStack_218;
  ulong local_210;
  undefined8 uStack_208;
  ulong uStack_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  ulong uStack_1e0;
  undefined8 uStack_1d8;
  ulong local_1d0;
  undefined8 uStack_1c8;
  ulong uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  ulong uStack_1a0;
  undefined8 uStack_198;
  ulong local_190;
  undefined8 uStack_188;
  ulong uStack_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  ulong uStack_160;
  undefined8 uStack_158;
  ulong local_150;
  undefined8 uStack_148;
  ulong uStack_140;
  undefined8 uStack_138;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  ulong uStack_110;
  undefined8 uStack_108;
  ulong local_100;
  undefined8 uStack_f8;
  ulong uStack_f0;
  undefined8 uStack_e8;
  undefined1 local_e0 [16];
  undefined8 local_d0;
  undefined8 uStack_c8;
  ulong uStack_c0;
  undefined8 uStack_b8;
  ulong local_b0;
  undefined8 uStack_a8;
  ulong uStack_a0;
  undefined8 uStack_98;
  undefined1 local_48 [4];
  uint local_44;
  
  if ((DAT_03ffce55 & 1) == 0) {
    thunk_FUN_01ad9084(
                      Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                      );
    thunk_FUN_01ad9084(PTR_DAT_03db05a8);
    thunk_FUN_01ad9084(PTR_DAT_03db07c8);
    thunk_FUN_01ad9084(PTR_DAT_03db0830);
    thunk_FUN_01ad9084(PTR_DAT_03db0838);
    thunk_FUN_01ad9084(PTR_DAT_03db0840);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(PTR_DAT_03db01b8);
    thunk_FUN_01ad9084(PTR_DAT_03db0848);
    thunk_FUN_01ad9084(PTR_DAT_03db0850);
    thunk_FUN_01ad9084(PTR_DAT_03db0858);
    thunk_FUN_01ad9084(PTR_DAT_03db0860);
    thunk_FUN_01ad9084(PTR_DAT_03db0810);
    thunk_FUN_01ad9084(PTR_DAT_03db0818);
    thunk_FUN_01ad9084(PTR_DAT_03db0868);
    thunk_FUN_01ad9084(StringLiteral_2776);
    thunk_FUN_01ad9084(PTR_DAT_03db0870);
    thunk_FUN_01ad9084(PTR_DAT_03db0878);
    DAT_03ffce55 = 1;
  }
  puVar5 = PTR_DAT_03db0840;
  local_e0._0_8_ = 0;
  local_e0._8_8_ = 0;
  auVar16 = ZEXT816(0);
  local_48[0] = 0;
  uStack_f8 = 0;
  local_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_118 = 0;
  local_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  local_128 = 0;
  switch(*(undefined4 *)(param_5 + 0x34)) {
  case 1:
    if (*(long *)(param_5 + 0x18) == 0) break;
    uVar9 = FUN_03ac279c(*(long *)(param_5 + 0x18),0);
    if (*(int *)(*(long *)PTR_DAT_03db01b8 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    local_e0 = FUN_03a098a8(uVar9,param_2,param_3,param_4,param_1);
    if (*(int *)(*(long *)StringLiteral_2776 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    auVar16 = FUN_039f38b0(0);
    uVar7 = FUN_0390cf24(local_e0,auVar16._0_8_,auVar16._8_8_,0);
    auVar16 = local_e0;
    if ((uVar7 & 1) == 0) {
      return;
    }
  case 2:
    puVar5 = StringLiteral_2776;
    if (*param_7 != 0) {
      return;
    }
    local_e0 = auVar16;
    if (*(int *)(*(long *)StringLiteral_2776 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    FUN_039f39fc(&local_d0,0);
    uStack_118 = uStack_c8;
    local_120 = local_d0;
    uStack_108 = uStack_b8;
    uStack_110 = uStack_c0;
    uStack_f8 = uStack_a8;
    local_100 = local_b0;
    uStack_e8 = uStack_98;
    uStack_f0 = uStack_a0;
    uVar9 = FUN_038f1790(0);
    uVar10 = FUN_0390acec(0);
    auVar16 = local_e0;
    if ((param_6 != 0) && (*(long *)(param_6 + 0x18) != 0)) {
      iVar1 = *(int *)(*(long *)(param_6 + 0x18) + 0x18);
      if (1 < iVar1) {
        if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        FUN_039f3694(0);
      }
      auVar16 = local_e0;
      if (*(long *)(param_5 + 0x18) != 0) {
        FUN_03ac2900(&local_170,*(long *)(param_5 + 0x18),0);
        uStack_c8 = uStack_168;
        local_d0 = local_170;
        uStack_b8 = uStack_158;
        uStack_c0 = uStack_160;
        uStack_a8 = uStack_148;
        local_b0 = local_150;
        uStack_98 = uStack_138;
        uStack_a0 = uStack_140;
        auVar16 = local_e0;
        if (*(long *)(param_5 + 0x18) != 0) {
          FUN_03ac309c(*(long *)(param_5 + 0x18),0);
          uStack_1a8 = uStack_c8;
          local_1b0 = local_d0;
          uStack_198 = uStack_b8;
          uStack_1a0 = uStack_c0;
          uStack_188 = uStack_a8;
          local_190 = local_b0;
          uStack_178 = uStack_98;
          uStack_180 = uStack_a0;
          FUN_03940c88(local_48,&local_1b0,0);
          lVar8 = *(long *)(param_5 + 0x60);
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01b48178();
          }
          (**(code **)(lVar8 + 0x18))(*(undefined8 *)(lVar8 + 0x40),*(undefined8 *)(lVar8 + 0x28));
          FUN_03940cdc(local_48,0);
          FUN_038f1c08(uVar9,0);
          FUN_0390ad14(uVar10,0);
          auVar16 = local_e0;
          if (*(long *)(param_6 + 0x10) != 0) {
            FUN_021619f0(&local_d0,*(long *)(param_6 + 0x10),*(undefined8 *)PTR_DAT_03db0848);
            uStack_1e8 = uStack_c8;
            local_1f0 = local_d0;
            uStack_1d8 = uStack_b8;
            uStack_1e0 = uStack_c0;
            uStack_1c8 = uStack_a8;
            local_1d0 = local_b0;
            uStack_1b8 = uStack_98;
            uStack_1c0 = uStack_a0;
            FUN_038fc128(&local_1f0,0);
            uStack_228 = uStack_118;
            local_230 = local_120;
            uStack_218 = uStack_108;
            uStack_220 = uStack_110;
            uStack_208 = uStack_f8;
            local_210 = local_100;
            uStack_1f8 = uStack_e8;
            uStack_200 = uStack_f0;
            uVar7 = uStack_110;
            uVar14 = local_100;
            uVar15 = uStack_f0;
            FUN_038fc1ec(&local_230,0);
            if (1 < iVar1) {
              auVar16 = local_e0;
              if (*(long *)(param_6 + 0x18) == 0) break;
              uVar9 = System_Collections_Generic_Dictionary_ValueCollection<av,_er>__System_Collections_Generic_ICollection<TValue>_Clear
                                (*(long *)(param_6 + 0x18),*(undefined8 *)PTR_DAT_03db0850);
              if (*(int *)(*(long *)PTR_DAT_03db01b8 + 0xe0) == 0) {
                thunk_FUN_01ac7298();
              }
              auVar16 = FUN_03a098a8(uVar9,uVar7,uVar14,uVar15,param_1);
              lVar8 = *(long *)puVar5;
LAB_03a083f8:
              if (*(int *)(lVar8 + 0xe0) == 0) {
                thunk_FUN_01ac7298();
              }
              FUN_039f35d8(auVar16._0_8_,auVar16._8_8_,0);
            }
switchD_03a07bc8_default:
            return;
          }
        }
      }
    }
    break;
  case 3:
    if ((param_6 == 0) || (*(long *)(param_5 + 0x18) == 0)) break;
    lVar8 = *(long *)(param_6 + 0x10);
    FUN_03ac2900(&local_d0,*(long *)(param_5 + 0x18),0);
    auVar16._8_8_ = local_e0._8_8_;
    auVar16._0_8_ = local_e0._0_8_;
    uStack_168 = uStack_c8;
    local_170 = local_d0;
    uStack_158 = uStack_b8;
    uStack_160 = uStack_c0;
    uStack_148 = uStack_a8;
    local_150 = local_b0;
    uStack_138 = uStack_98;
    uStack_140 = uStack_a0;
    if (lVar8 == 0) break;
    FUN_02161ab0(lVar8,&local_d0,*(undefined8 *)PTR_DAT_03db0810);
    auVar16._8_8_ = local_e0._8_8_;
    auVar16._0_8_ = local_e0._0_8_;
    if (*(long *)(param_5 + 0x18) == 0) break;
    FUN_03ac2900(&local_d0,*(long *)(param_5 + 0x18),0);
    uStack_268 = uStack_c8;
    local_270 = local_d0;
    uStack_258 = uStack_b8;
    uStack_260 = uStack_c0;
    uStack_248 = uStack_a8;
    local_250 = local_b0;
    uStack_238 = uStack_98;
    uStack_240 = uStack_a0;
    param_2 = uStack_c0;
    param_3 = local_b0;
    param_4 = uStack_a0;
    FUN_038fc128(&local_270,0);
    auVar16._8_8_ = local_e0._8_8_;
    auVar16._0_8_ = local_e0._0_8_;
    if (*(long *)(param_5 + 0x18) == 0) break;
    local_128 = *(undefined8 *)(*(long *)(param_5 + 0x18) + 0x378);
    lVar8 = FUN_03acd748(&local_128,0);
    puVar5 = PTR_DAT_03db05a8;
    if (lVar8 == 0) {
      lVar8 = *(long *)PTR_DAT_03db05a8;
      if (*(int *)(lVar8 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        lVar8 = *(long *)puVar5;
      }
      lVar8 = *(long *)(lVar8 + 0xb8);
      uVar7 = (ulong)*(uint *)(lVar8 + 0x10);
      param_2 = (ulong)*(uint *)(lVar8 + 0x14);
      param_3 = (ulong)*(uint *)(lVar8 + 0x18);
      param_4 = (ulong)*(uint *)(lVar8 + 0x1c);
    }
    else {
      uVar7 = FUN_03ac309c(lVar8,0);
    }
    auVar16._8_8_ = local_e0._8_8_;
    auVar16._0_8_ = local_e0._0_8_;
    if (*(long *)(param_6 + 0x18) == 0) break;
    FUN_02163124(uVar7,param_2,param_3,param_4,*(long *)(param_6 + 0x18),
                 *(undefined8 *)PTR_DAT_03db0818);
    goto LAB_03a083b8;
  case 4:
    if ((param_6 == 0) || (*(long *)(param_6 + 0x10) == 0)) break;
    FUN_02161a44(&local_d0,*(long *)(param_6 + 0x10),*(undefined8 *)PTR_DAT_03db0858);
    auVar16._8_8_ = local_e0._8_8_;
    auVar16._0_8_ = local_e0._0_8_;
    if (*(long *)(param_6 + 0x10) == 0) break;
    FUN_021619f0(&local_d0,*(long *)(param_6 + 0x10),*(undefined8 *)PTR_DAT_03db0848);
    uStack_2a8 = uStack_c8;
    local_2b0 = local_d0;
    uStack_298 = uStack_b8;
    uStack_2a0 = uStack_c0;
    uStack_288 = uStack_a8;
    local_290 = local_b0;
    uStack_278 = uStack_98;
    uStack_280 = uStack_a0;
    param_2 = uStack_c0;
    param_3 = local_b0;
    param_4 = uStack_a0;
    FUN_038fc128(&local_2b0,0);
    goto LAB_03a08128;
  case 5:
    if (*(long *)(param_5 + 0x18) == 0) break;
    uVar9 = FUN_03ac309c(*(long *)(param_5 + 0x18),0);
    auVar4._8_8_ = local_e0._8_8_;
    auVar4._0_8_ = local_e0._0_8_;
    auVar16._8_8_ = local_e0._8_8_;
    auVar16._0_8_ = local_e0._0_8_;
    if (param_6 == 0) break;
    local_44 = (uint)param_1;
    auVar16 = auVar4;
    if (*(long *)(param_6 + 0x18) == 0) break;
    uVar7 = param_2;
    uVar14 = param_3;
    uVar15 = param_4;
    uVar10 = System_Collections_Generic_Dictionary_ValueCollection<av,_er>__System_Collections_Generic_ICollection<TValue>_Clear
                       (*(long *)(param_6 + 0x18),*(undefined8 *)PTR_DAT_03db0850);
    if (*(int *)(*(long *)PTR_DAT_03db01b8 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar7 = FUN_03a09c10(uVar9,param_2,param_3,param_4,uVar10,uVar7,uVar14,uVar15);
    auVar16._8_8_ = local_e0._8_8_;
    auVar16._0_8_ = local_e0._0_8_;
    if (*(long *)(param_6 + 0x18) == 0) break;
    FUN_02163124(*(long *)(param_6 + 0x18),*(undefined8 *)PTR_DAT_03db0818);
    param_1 = (ulong)local_44;
    goto LAB_03a083e4;
  case 6:
    if (param_6 == 0) break;
LAB_03a08128:
    auVar16._8_8_ = local_e0._8_8_;
    auVar16._0_8_ = local_e0._0_8_;
    if (*(long *)(param_6 + 0x18) == 0) break;
    FUN_021630d0(*(long *)(param_6 + 0x18),*(undefined8 *)PTR_DAT_03db0860);
    auVar16._8_8_ = local_e0._8_8_;
    auVar16._0_8_ = local_e0._0_8_;
    if (*(long *)(param_6 + 0x18) == 0) break;
    uVar7 = System_Collections_Generic_Dictionary_ValueCollection<av,_er>__System_Collections_Generic_ICollection<TValue>_Clear
                      (*(long *)(param_6 + 0x18),*(undefined8 *)PTR_DAT_03db0850);
    puVar5 = PTR_DAT_03db05a8;
    lVar8 = *(long *)PTR_DAT_03db05a8;
    if (*(int *)(lVar8 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar8 = *(long *)puVar5;
    }
    if ((float)uVar7 == **(float **)(lVar8 + 0xb8)) {
      if (*(int *)(*(long *)StringLiteral_2776 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      FUN_039f3694(0);
      return;
    }
LAB_03a083b8:
    if (*(int *)(*(long *)PTR_DAT_03db01b8 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
LAB_03a083e4:
    auVar16 = FUN_03a098a8(uVar7,param_2,param_3,param_4,param_1);
    lVar8 = *(long *)StringLiteral_2776;
    goto LAB_03a083f8;
  case 7:
    if (*(int *)(*(long *)StringLiteral_2776 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    FUN_039f38b0(0);
    uVar9 = FUN_0390c850(extraout_x1,extraout_x1 >> 0x20,0x18,2,0);
    FUN_0390ad14(uVar9,0);
    FUN_038fc518(0,0,0,0,DAT_00b55218,1,1,0);
    auVar16._8_8_ = local_e0._8_8_;
    auVar16._0_8_ = local_e0._0_8_;
    if (param_6 != 0) {
      lVar8 = *(long *)(param_6 + 0x20);
      uVar9 = FUN_0390acec(0);
      auVar3._8_8_ = local_e0._8_8_;
      auVar3._0_8_ = local_e0._0_8_;
      auVar16._8_8_ = local_e0._8_8_;
      auVar16._0_8_ = local_e0._0_8_;
      if (lVar8 != 0) {
        lVar12 = *(long *)(lVar8 + 0x10);
        lVar13 = *(long *)PTR_DAT_03db07c8;
        *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
        auVar16 = auVar3;
        if (lVar12 != 0) {
          uVar6 = *(uint *)(lVar8 + 0x18);
          if (uVar6 < *(uint *)(lVar12 + 0x18)) {
            *(uint *)(lVar8 + 0x18) = uVar6 + 1;
            *(undefined8 *)(lVar12 + (long)(int)uVar6 * 8 + 0x20) = uVar9;
            thunk_FUN_01b4f09c();
            return;
          }
          FUN_02b599e4(lVar8,uVar9,
                       *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
          return;
        }
      }
    }
    break;
  case 8:
    if ((param_6 != 0) && (*(long *)(param_6 + 0x20) != 0)) {
      iVar1 = *(int *)(*(long *)(param_6 + 0x20) + 0x18);
      iVar2 = iVar1 + -1;
      if (*(int *)(*(long *)
                    Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                  + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      UnityEngine_UIElements_UIR_Utility__HasMappedBufferRange(0 < iVar2,0);
      puVar5 = PTR_DAT_03db0840;
      auVar16._8_8_ = local_e0._8_8_;
      auVar16._0_8_ = local_e0._0_8_;
      if (*(long *)(param_6 + 0x20) != 0) {
        uVar9 = FUN_02b59714(*(long *)(param_6 + 0x20),iVar1 + -2,*(undefined8 *)PTR_DAT_03db0840);
        uVar10 = FUN_0390acec(0);
        if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298(*(long *)
                              Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                            );
        }
        uVar6 = FUN_03922f24(uVar9,uVar10,0);
        FUN_038f38f0(uVar6 & 1,*(undefined8 *)PTR_DAT_03db0870,0);
        auVar16._8_8_ = local_e0._8_8_;
        auVar16._0_8_ = local_e0._0_8_;
        if (*(long *)(param_6 + 0x20) != 0) {
          uVar9 = FUN_02b59714(*(long *)(param_6 + 0x20),iVar2,*(undefined8 *)puVar5);
          uVar7 = FUN_0391f968(uVar9,0,0);
          if ((uVar7 & 1) != 0) {
            FUN_0390b1d4(uVar9,0);
          }
          auVar16._8_8_ = local_e0._8_8_;
          auVar16._0_8_ = local_e0._0_8_;
          if (*(long *)(param_6 + 0x20) != 0) {
            FUN_02b5b0dc(*(long *)(param_6 + 0x20),iVar2,*(undefined8 *)PTR_DAT_03db0830);
            return;
          }
        }
      }
    }
    break;
  case 9:
    if ((param_6 != 0) && (lVar8 = *(long *)(param_6 + 0x20), lVar8 != 0)) {
      uVar9 = FUN_02b59714(lVar8,*(int *)(lVar8 + 0x18) + -1,*(undefined8 *)PTR_DAT_03db0840);
      auVar16._8_8_ = local_e0._8_8_;
      auVar16._0_8_ = local_e0._0_8_;
      lVar8 = *(long *)(param_6 + 0x20);
      if (lVar8 != 0) {
        uVar10 = FUN_02b59714(lVar8,*(int *)(lVar8 + 0x18) + -2,*(undefined8 *)puVar5);
        uVar11 = FUN_0390acec(0);
        if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298(*(long *)
                              Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                            );
        }
        uVar6 = FUN_03922f24(uVar9,uVar11,0);
        if (*(int *)(*(long *)
                      Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298(*(long *)
                              Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                            );
        }
        FUN_038f38f0(uVar6 & 1,*(undefined8 *)PTR_DAT_03db0878,0);
        UnityEngine_UI_LayoutGroup__get_preferredWidth(0,param_5,uVar9,uVar10);
        return;
      }
    }
    break;
  default:
    goto switchD_03a07bc8_default;
  }
  local_e0 = auVar16;
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


