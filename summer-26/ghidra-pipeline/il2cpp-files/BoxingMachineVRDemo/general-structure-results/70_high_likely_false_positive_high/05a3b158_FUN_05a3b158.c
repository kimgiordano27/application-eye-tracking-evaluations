/*
FUNCTION_NAME: FUN_05a3b158
ENTRY_POINT: 05a3b158
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 89
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_12;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_05a3b158(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                 float param_5,float param_6,undefined8 param_7,undefined4 param_8,
                 undefined8 param_9,long param_10,long param_11,undefined4 param_12,uint param_13,
                 uint param_14,undefined8 *param_15,long param_16,undefined8 param_17,float param_18
                 )

{
  uint uVar1;
  float fVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  ulong uVar12;
  long lVar13;
  undefined4 uVar14;
  float *pfVar15;
  long lVar16;
  uint uVar17;
  undefined8 uVar18;
  long lVar19;
  long lVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  ulong uVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined8 *in_stack_00000030;
  long in_stack_00000038;
  byte in_stack_00000040;
  float local_2c8;
  float local_2a8;
  float local_284;
  undefined8 local_280;
  undefined8 uStack_278;
  long lStack_270;
  undefined8 uStack_268;
  undefined8 local_260;
  undefined8 local_250;
  undefined8 uStack_248;
  long lStack_240;
  undefined8 uStack_238;
  undefined8 local_230;
  undefined8 local_220;
  undefined8 uStack_218;
  long lStack_210;
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
  long lStack_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  long local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  long lStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 local_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  long local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  long local_b0;
  
  if ((DAT_06b81213 & 1) == 0) {
    FUN_02d6084c(Method_UnityEngine_UIElements_BaseField<Vector2>_get_visualInput__);
    FUN_02d6084c(PTR_DAT_06767d28);
    FUN_02d6084c(Method_UnityEngine_UIElements_BaseField<Vector2>_SetValueWithoutNotify__);
    FUN_02d6084c(Method_UnityEngine_UIElements_BaseField<Vector2>_StartEditing__);
    FUN_02d6084c(Method_UnityEngine_UIElements_BaseField<Vector2>_get_labelElement__);
    FUN_02d6084c(Method_UnityEngine_UIElements_BaseField<ToggleButtonGroupState>_OnViewDataReady__);
    FUN_02d6084c(Method_UnityEngine_UIElements_BaseField<Vector2>_get_rawValue__);
    FUN_02d6084c(PTR_DAT_0675e1b8);
    FUN_02d6084c(Method_UnityEngine_UIElements_BaseField<Vector3Int>_set_showMixedValue__);
    FUN_02d6084c(Method_UnityEngine_UIElements_BaseField<Vector4>_get_labelElement__);
    DAT_06b81213 = 1;
  }
  puVar4 = Method_UnityEngine_UIElements_BaseField<ToggleButtonGroupState>_OnViewDataReady__;
  uStack_b8 = 0;
  local_c0 = 0;
  local_b0 = 0;
  local_c8 = 0;
  if (param_11 != 0) {
    FUN_059e3ce4(param_11,param_16,0);
    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    lVar7 = FUN_05a362e8();
    if (lVar7 != 0) {
      uVar8 = FUN_05a364cc();
      if ((uVar8 & 1) == 0) {
        uVar8 = FUN_059e0b14(param_11,0);
        if (((uVar8 & 1) == 0) || (uVar8 = FUN_059e0c5c(param_11,0), (uVar8 & 1) == 0)) {
          local_140 = in_stack_00000030[4];
          uStack_158 = in_stack_00000030[1];
          local_160 = *in_stack_00000030;
          uStack_148 = in_stack_00000030[3];
          local_150 = in_stack_00000030[2];
          if (*(int *)(*(long *)PTR_DAT_06767d28 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
          }
          uStack_118 = uStack_158;
          local_120 = local_160;
          uStack_108 = uStack_148;
          lStack_110 = local_150;
          local_100 = local_140;
          FUN_05a5bb74(param_16,&local_120,0,0,0xffffffff,0xffffffff,0);
          uVar8 = FUN_059e0b14(param_11,0);
          lVar7 = *(long *)puVar4;
          if (*(int *)(lVar7 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4(lVar7);
            lVar7 = *(long *)puVar4;
          }
          uVar14 = *(undefined4 *)(*(long *)(lVar7 + 0xb8) + 0x78);
          if ((uVar8 & 1) == 0) {
            if (param_16 == 0) goto LAB_05a3bf24;
            param_12 = 0;
          }
          else {
            if (param_16 == 0) goto LAB_05a3bf24;
            param_12 = *(undefined4 *)(param_11 + 0x24);
          }
        }
        else {
          local_140 = in_stack_00000030[4];
          uStack_158 = in_stack_00000030[1];
          local_160 = *in_stack_00000030;
          uStack_148 = in_stack_00000030[3];
          local_150 = in_stack_00000030[2];
          if (*(int *)(*(long *)PTR_DAT_06767d28 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
          }
          uStack_e8 = uStack_158;
          local_f0 = local_160;
          uStack_d8 = uStack_148;
          lStack_e0 = local_150;
          local_d0 = local_140;
          FUN_05a5bb74(param_16,&local_f0,0,0,0xffffffff,param_12,0);
          if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
          }
          if (param_16 == 0) goto LAB_05a3bf24;
          uVar14 = *(undefined4 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x78);
        }
        FUN_06091988(param_16,uVar14,param_12,0);
        FUN_06090bec(param_1,param_2,param_3,param_4,param_16,0);
        if ((in_stack_00000040 & 1) != 0) {
          param_3 = 0;
          FUN_06091440(0,0,0,0x3f800000,param_16,0,1,0);
        }
        lVar7 = *(long *)puVar4;
        if (*(int *)(lVar7 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
          lVar7 = *(long *)puVar4;
        }
        lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x10);
        if (lVar7 == 0) goto LAB_05a3bf24;
        FUN_03aaceb0(&local_160,lVar7,
                     *(undefined8 *)Method_UnityEngine_UIElements_BaseField<Vector2>_get_rawValue__)
        ;
        puVar5 = Method_UnityEngine_UIElements_BaseField<Vector2>_StartEditing__;
        puVar3 = PTR_DAT_0675e1b8;
        fVar2 = DAT_01208410;
        uVar8 = (ulong)(uint)(param_6 / param_5);
        uStack_b8 = uStack_158;
        local_c0 = local_160;
        local_b0 = local_150;
LAB_05a3b4d4:
        uVar9 = FUN_04a7a4a0(&local_c0,*(undefined8 *)puVar5);
        lVar7 = local_b0;
        if ((uVar9 & 1) != 0) {
          if (local_b0 != 0) {
            uVar18 = *(undefined8 *)(local_b0 + 0x18);
            if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
              thunk_FUN_02dbd7b4();
            }
            uVar9 = UnityEngine_Font__add_textureRebuilt(uVar18,0,0);
            if ((uVar9 & 1) == 0) {
              lVar19 = *(long *)(lVar7 + 0x18);
              if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d60ae8();
              }
              lVar20 = *(long *)(lVar19 + 0x20);
              if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                thunk_FUN_02dbd7b4();
              }
              uVar9 = FUN_05a372f8(param_10,lVar19,lVar20);
              local_284 = (float)param_3;
              if ((uVar9 & 1) == 0) {
                local_c8 = 0;
                uVar9 = FUN_0335c1c4(lVar19,&local_c8,
                                     *(undefined8 *)
                                      Method_UnityEngine_UIElements_BaseField<Vector2>_get_visualInput__
                                    );
                if ((uVar9 & 1) == 0) {
                  local_c8 = 0;
                }
                lVar10 = local_c8;
                if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                  thunk_FUN_02dbd7b4();
                }
                uVar9 = FUN_0606a004(lVar10,0,0);
                if ((uVar9 & 1) == 0) {
UnityEngine_Rendering_Universal_PostProcessPass_<>c__<RenderStopNaN>b__125_0:
                  lVar10 = FUN_06066c74(lVar19,0);
                  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_02d60ae8();
                  }
                  uVar12 = FUN_06078c44(lVar10,0);
                  uVar17 = 0;
                  uVar9 = uVar8;
                }
                else {
                  if (local_c8 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_02d60ae8();
                  }
                  iVar6 = FUN_0603b4e0(local_c8,0);
                  if (iVar6 != 1)
                  goto UnityEngine_Rendering_Universal_PostProcessPass_<>c__<RenderStopNaN>b__125_0;
                  if (local_c8 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_02d60ae8();
                  }
                  lVar10 = FUN_06066c74(local_c8,0);
                  fVar27 = (float)uVar8;
                  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_02d60ae8();
                  }
                  fVar21 = (float)FUN_060791e8(lVar10,0);
                  if (param_10 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_02d60ae8();
                  }
                  fVar22 = (float)FUN_0601be58(param_10,0);
                  uVar12 = (ulong)(uint)(fVar22 * -fVar21);
                  local_284 = fVar22 * -local_284;
                  uVar17 = 1;
                  uVar9 = (ulong)(uint)(fVar22 * -fVar27);
                }
                uVar18 = *(undefined8 *)(lVar19 + 0x78);
                if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                  thunk_FUN_02dbd7b4();
                }
                uVar8 = FUN_0606a004(uVar18,0,0);
                if ((uVar8 & 1) != 0) {
                  local_c8 = *(long *)(lVar19 + 0x78);
                }
                uStack_138 = param_15[5];
                local_140 = param_15[4];
                uStack_128 = param_15[7];
                uStack_130 = param_15[6];
                uStack_158 = param_15[1];
                local_160 = *param_15;
                uStack_148 = param_15[3];
                local_150 = param_15[2];
                if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                  thunk_FUN_02dbd7b4();
                }
                uVar1 = uVar17 ^ 1;
                uStack_198 = uStack_158;
                local_1a0 = local_160;
                uStack_188 = uStack_148;
                lStack_190 = local_150;
                uStack_178 = uStack_138;
                local_180 = local_140;
                uStack_168 = uStack_128;
                uStack_170 = uStack_130;
                uVar26 = (ulong)(uint)local_284;
                fVar21 = (float)uVar9;
                fVar27 = (float)uVar12;
                uVar18 = FUN_05a3766c(uVar12,param_10,uVar1,param_14 & 1,&local_1a0);
                uVar8 = uVar9;
                param_3 = uVar26;
                if ((param_13 & 1) == 0) {
LAB_05a3b758:
                  if ((float)uVar26 < 0.0) goto LAB_05a3b4d4;
                }
                else {
                  uVar11 = FUN_0601e748(0);
                  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                    thunk_FUN_02dbd7b4();
                  }
                  uVar12 = UnityEngine_Font__add_textureRebuilt(param_10,uVar11,0);
                  if ((uVar12 & 1) == 0) goto LAB_05a3b758;
                  if (param_10 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_02d60ae8();
                  }
                  uVar11 = FUN_0601bfe0(param_10,0);
                  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                    thunk_FUN_02dbd7b4();
                  }
                  param_3 = (ulong)(uint)param_5;
                  uVar18 = FUN_05a390ec(uVar18,uVar9,param_3,param_6,uVar11,param_8,param_7);
                  uVar8 = uVar9;
                }
                fVar22 = (float)uVar9;
                fVar25 = (float)uVar18;
                if ((*(char *)(lVar19 + 0x6c) != '\0') ||
                   ((((fVar22 <= 1.0 && (0.0 <= fVar25)) && (fVar25 <= 1.0)) && (0.0 <= fVar22)))) {
                  if (param_10 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_02d60ae8();
                  }
                  lVar10 = FUN_06066c74(param_10,0);
                  fVar31 = (float)uVar8;
                  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_02d60ae8();
                  }
                  fVar23 = (float)FUN_060791e8(lVar10,0);
                  fVar28 = fVar27 - (float)param_17;
                  fVar29 = fVar21 - param_17._4_4_;
                  fVar30 = local_284 - param_18;
                  fVar24 = fVar30 * (float)param_3;
                  uVar8 = (ulong)(uint)fVar24;
                  if (0.0 <= fVar24 + fVar28 * fVar23 + fVar29 * fVar31) {
                    if (DAT_06b722a5 == '\0') {
                      FUN_02d6084c(PTR_DAT_0675e6d8);
                      DAT_06b722a5 = '\x01';
                    }
                    if (*(int *)(*(long *)PTR_DAT_0675e6d8 + 0xe4) == 0) {
                      thunk_FUN_02dbd7b4();
                    }
                    fVar31 = SQRT(fVar30 * fVar30 + fVar28 * fVar28 + fVar29 * fVar29);
                    local_2a8 = 1.0;
                    if (uVar17 == 0) {
                      if (*(long *)(lVar19 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_02d60ae8();
                      }
                      fVar24 = *(float *)(lVar19 + 0x30);
                      fVar23 = *(float *)(lVar19 + 0x34);
                      iVar6 = FUN_06018414(*(long *)(lVar19 + 0x38),0);
                      if (iVar6 < 1) {
                        local_2a8 = 1.0;
                      }
                      else {
                        if (*(long *)(lVar19 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_02d60ae8();
                        }
                        local_2a8 = (float)FUN_06017d20(fVar31 / fVar24,*(long *)(lVar19 + 0x38),0);
                      }
                      if (*(long *)(lVar19 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_02d60ae8();
                      }
                      iVar6 = FUN_06018414(*(long *)(lVar19 + 0x40),0);
                      if (0 < iVar6) {
                        if (*(long *)(lVar19 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_02d60ae8();
                        }
                        FUN_06017d20(fVar31 / fVar23,*(long *)(lVar19 + 0x40),0);
                      }
                    }
                    lVar10 = local_c8;
                    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                      thunk_FUN_02dbd7b4();
                    }
                    uVar8 = FUN_0606a004(lVar10,0,0);
                    lVar10 = local_c8;
                    local_2c8 = 1.0;
                    if (((uVar8 & 1) != 0) && (*(char *)(lVar19 + 0x48) != '\0')) {
                      if (DAT_06b72248 == '\0') {
                        FUN_02d6084c(PTR_DAT_0675e6d8);
                        DAT_06b72248 = '\x01';
                      }
                      if (*(int *)(*(long *)PTR_DAT_0675e6d8 + 0xe4) == 0) {
                        thunk_FUN_02dbd7b4();
                      }
                      if (fVar31 <= fVar2) {
                        if (DAT_06b7224b == '\0') {
                          FUN_02d6084c(PTR_DAT_0675e318);
                          DAT_06b7224b = '\x01';
                        }
                        pfVar15 = *(float **)(*(long *)PTR_DAT_0675e318 + 0xb8);
                        fVar28 = *pfVar15;
                        fVar29 = pfVar15[1];
                        fVar30 = pfVar15[2];
                      }
                      else {
                        fVar28 = fVar28 / fVar31;
                        fVar29 = fVar29 / fVar31;
                        fVar30 = fVar30 / fVar31;
                      }
                      if (in_stack_00000038 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_02d60ae8();
                      }
                      local_2c8 = (float)(**(code **)(in_stack_00000038 + 0x18))
                                                   (-fVar28,-fVar29,-fVar30,
                                                    *(undefined8 *)(in_stack_00000038 + 0x40),lVar10
                                                    ,param_10,
                                                    *(undefined8 *)(in_stack_00000038 + 0x28));
                    }
                    FUN_060741d8(0);
                    fVar25 = ABS(fVar25 + fVar25 + -1.0);
                    param_3 = (ulong)(uint)fVar25;
                    fVar22 = ABS(fVar22 + fVar22 + -1.0);
                    if (fVar25 <= fVar22) {
                      fVar25 = fVar22;
                    }
                    if (*(long *)(lVar19 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_02d60ae8();
                    }
                    iVar6 = FUN_06018414(*(long *)(lVar19 + 0x50),0);
                    if (iVar6 < 1) {
                      fVar22 = 1.0;
                    }
                    else {
                      if (*(long *)(lVar19 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_02d60ae8();
                      }
                      fVar22 = (float)FUN_06017d20(fVar25,*(long *)(lVar19 + 0x50),0);
                    }
                    fVar25 = (float)param_3;
                    uVar8 = (ulong)(uint)local_2a8;
                    if (0.0 < local_2a8 * fVar22 * *(float *)(lVar19 + 0x2c)) {
                      lVar10 = FUN_06066c74(param_10,0);
                      fVar22 = (float)uVar8;
                      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_02d60ae8();
                      }
                      fVar28 = (float)FUN_06078c44(lVar10,0);
                      fVar31 = fVar22;
                      fVar23 = fVar25;
                      lVar10 = FUN_06066c74(lVar19,0);
                      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_02d60ae8();
                      }
                      fVar24 = (float)FUN_06078c44(lVar10,0);
                      if (DAT_06b72248 == '\0') {
                        FUN_02d6084c(PTR_DAT_0675e6d8);
                        DAT_06b72248 = '\x01';
                      }
                      if (*(int *)(*(long *)PTR_DAT_0675e6d8 + 0xe4) == 0) {
                        thunk_FUN_02dbd7b4();
                      }
                      fVar28 = fVar28 - fVar24;
                      fVar22 = fVar22 - fVar31;
                      fVar25 = SQRT((fVar25 - fVar23) * (fVar25 - fVar23) +
                                    fVar28 * fVar28 + fVar22 * fVar22);
                      if (fVar25 <= fVar2) {
                        if (DAT_06b7224b == '\0') {
                          FUN_02d6084c(PTR_DAT_0675e318);
                          DAT_06b7224b = '\x01';
                        }
                        fVar28 = **(float **)(*(long *)PTR_DAT_0675e318 + 0xb8);
                        fVar22 = (*(float **)(*(long *)PTR_DAT_0675e318 + 0xb8))[1];
                      }
                      else {
                        fVar28 = fVar28 / fVar25;
                        fVar22 = fVar22 / fVar25;
                      }
                      uStack_138 = param_15[5];
                      local_140 = param_15[4];
                      uStack_128 = param_15[7];
                      uStack_130 = param_15[6];
                      uStack_158 = param_15[1];
                      local_160 = *param_15;
                      uStack_148 = param_15[3];
                      local_150 = param_15[2];
                      fVar25 = *(float *)(lVar19 + 100);
                      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                        thunk_FUN_02dbd7b4();
                      }
                      uStack_1d8 = uStack_158;
                      local_1e0 = local_160;
                      uStack_1c8 = uStack_148;
                      uStack_1d0 = local_150;
                      uStack_1b8 = uStack_138;
                      local_1c0 = local_140;
                      uStack_1a8 = uStack_128;
                      uStack_1b0 = uStack_130;
                      FUN_05a3766c(fVar27 + fVar28 * fVar25,fVar21 + fVar22 * fVar25,param_10,uVar1,
                                   param_14 & 1,&local_1e0);
                      if (uVar17 == 0) {
                        fVar22 = *(float *)(lVar19 + 0x5c);
                      }
                      else {
                        fVar22 = (float)FUN_05a3924c(lVar19,param_10);
                      }
                      uStack_138 = param_15[5];
                      uVar18 = param_15[4];
                      uStack_128 = param_15[7];
                      uStack_130 = param_15[6];
                      uStack_158 = param_15[1];
                      local_160 = *param_15;
                      uStack_148 = param_15[3];
                      lVar13 = param_15[2];
                      local_150 = lVar13;
                      local_140 = uVar18;
                      lVar10 = FUN_06066c74(param_10,0);
                      fVar31 = (float)lVar13;
                      fVar25 = (float)uVar18;
                      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_02d60ae8();
                      }
                      fVar23 = (float)FUN_0607916c(lVar10,0);
                      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                        thunk_FUN_02dbd7b4();
                      }
                      uStack_218 = uStack_158;
                      local_220 = local_160;
                      uStack_208 = uStack_148;
                      lStack_210 = local_150;
                      uStack_1f8 = uStack_138;
                      local_200 = local_140;
                      uStack_1e8 = uStack_128;
                      uStack_1f0 = uStack_130;
                      FUN_05a3766c(fVar27 + fVar22 * fVar23,fVar21 + fVar22 * fVar25,
                                   local_284 + fVar22 * fVar31,param_10,uVar1,param_14 & 1,
                                   &local_220);
                      if (DAT_06b725ce == '\0') {
                        FUN_02d6084c(PTR_DAT_0675e6d8);
                        DAT_06b725ce = '\x01';
                      }
                      if (*(int *)(*(long *)PTR_DAT_0675e6d8 + 0xe4) == 0) {
                        thunk_FUN_02dbd7b4();
                      }
                      if (*(char *)(lVar19 + 0x58) == '\0') {
LAB_05a3bd78:
                        FUN_060921e0(param_16,*(undefined8 *)
                                               Method_UnityEngine_UIElements_BaseField<Vector4>_get_labelElement__
                                     ,0);
                      }
                      else {
                        lVar10 = *(long *)puVar4;
                        if (*(int *)(lVar10 + 0xe4) == 0) {
                          thunk_FUN_02dbd7b4(lVar10);
                          lVar10 = *(long *)puVar4;
                        }
                        lVar16 = *(long *)(lVar10 + 0xb8);
                        lVar13 = *(long *)(lVar16 + 0x30);
                        if (lVar13 == 0) goto LAB_05a3bd78;
                        if (*(int *)(lVar10 + 0xe4) == 0) {
                          thunk_FUN_02dbd7b4(lVar10);
                          lVar16 = *(long *)(*(long *)puVar4 + 0xb8);
                          lVar13 = *(long *)(lVar16 + 0x30);
                        }
                        uVar14 = *(undefined4 *)(lVar16 + 0x44);
                        FUN_05a4812c(&local_160,lVar13,0);
                        uStack_248 = uStack_158;
                        local_250 = local_160;
                        uStack_238 = uStack_148;
                        lStack_240 = local_150;
                        local_230 = local_140;
                        FUN_0609adc4(param_16,uVar14,&local_250,0);
                        FUN_06091d30(param_16,*(undefined8 *)
                                               Method_UnityEngine_UIElements_BaseField<Vector4>_get_labelElement__
                                     ,0);
                      }
                      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                        thunk_FUN_02dbd7b4();
                      }
                      uVar8 = FUN_05a35ef0();
                      if ((uVar8 & 1) == 0) {
                        FUN_06091d30(param_16,*(undefined8 *)
                                               Method_UnityEngine_UIElements_BaseField<Vector3Int>_set_showMixedValue__
                                     ,0);
                      }
                      else {
                        FUN_060921e0(param_16,*(undefined8 *)
                                               Method_UnityEngine_UIElements_BaseField<Vector3Int>_set_showMixedValue__
                                     ,0);
                      }
                      lVar10 = *(long *)puVar4;
                      if (*(int *)(lVar10 + 0xe4) == 0) {
                        thunk_FUN_02dbd7b4();
                        lVar10 = *(long *)puVar4;
                      }
                      FUN_06091af8((float)*(int *)(lVar7 + 0x10),0,0,0,param_16,
                                   *(undefined4 *)(*(long *)(lVar10 + 0xb8) + 0x48),0);
                      if (*(long *)(lVar19 + 0x70) == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_02d60ae8();
                      }
                      uVar14 = *(undefined4 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x40);
                      uVar18 = FUN_05a652d8(*(long *)(lVar19 + 0x70),0);
                      FUN_06088f24(&local_160,uVar18,0);
                      uStack_278 = uStack_158;
                      local_280 = local_160;
                      uStack_268 = uStack_148;
                      lStack_270 = local_150;
                      local_260 = local_140;
                      FUN_0609adc4(param_16,uVar14,&local_280,0);
                      if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_02d60ae8();
                      }
                      uVar8 = (ulong)(uint)(local_2a8 * local_2c8);
                      NEON_ucvtf(*(undefined4 *)(lVar19 + 0x60));
                      param_3 = uVar8;
                      FUN_05a3a9b8(lVar20 + 0x18,param_16,local_c8,param_9,
                                   *(undefined1 *)(lVar19 + 0x6c),0,0);
                    }
                  }
                }
              }
            }
          }
          goto LAB_05a3b4d4;
        }
        FUN_04a7a49c(&local_c0,
                     *(undefined8 *)
                      Method_UnityEngine_UIElements_BaseField<Vector2>_SetValueWithoutNotify__);
        FUN_059e3da0(param_11,param_16,0);
      }
      return;
    }
  }
LAB_05a3bf24:
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


