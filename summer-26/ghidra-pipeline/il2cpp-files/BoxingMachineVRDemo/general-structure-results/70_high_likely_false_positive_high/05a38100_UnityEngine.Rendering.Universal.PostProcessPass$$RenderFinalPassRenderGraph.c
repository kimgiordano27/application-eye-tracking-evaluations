/*
FUNCTION_NAME: UnityEngine.Rendering.Universal.PostProcessPass$$RenderFinalPassRenderGraph
ENTRY_POINT: 05a38100
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 89
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_15;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;negative_framework_namespace_without_eye_use_flow;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void UnityEngine_Rendering_Universal_PostProcessPass__RenderFinalPassRenderGraph
               (ulong param_1,float param_2,float param_3,ulong param_4,undefined4 param_5,
               float param_6,float param_7,float param_8,long param_9,long param_10,long param_11,
               undefined4 param_12,uint param_13,uint param_14,undefined8 *param_15,long param_16)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  ulong uVar13;
  float *pfVar14;
  uint uVar15;
  long unaff_x20;
  long *unaff_x21;
  undefined8 uVar16;
  long lVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined4 uVar24;
  ulong uVar25;
  ulong uVar26;
  float fVar27;
  ulong uVar28;
  long lVar29;
  float fVar30;
  float fVar31;
  ulong uVar32;
  undefined4 uVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fStack0000000000000034;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  long in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  long in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000158;
  long in_stack_00000160;
  undefined8 in_stack_00000168;
  undefined8 in_stack_00000170;
  undefined8 in_stack_00000178;
  undefined8 in_stack_00000180;
  undefined8 in_stack_00000188;
  long in_stack_00000198;
  undefined8 in_stack_000001a0;
  undefined8 in_stack_000001a8;
  long in_stack_000001b0;
  byte in_stack_00000260;
  undefined8 in_stack_00000278;
  
  uVar26 = param_4;
  if ((param_1 & 1) == 0) {
    FUN_02d6084c(Method_UnityEngine_UIElements_BaseField<Vector2>_get_value__);
    FUN_02d6084c(Method_UnityEngine_UIElements_BaseField<Vector2>_get_visualInput__);
    FUN_02d6084c(PTR_DAT_06767d28);
    FUN_02d6084c(Method_UnityEngine_UIElements_BaseField<Vector2>_SetValueWithoutNotify__);
    FUN_02d6084c(Method_UnityEngine_UIElements_BaseField<Vector2>_StartEditing__);
    FUN_02d6084c(Method_UnityEngine_UIElements_BaseField<Vector2>_get_labelElement__);
    FUN_02d6084c(Method_UnityEngine_UIElements_BaseField<ToggleButtonGroupState>_OnViewDataReady__);
    FUN_02d6084c(Method_UnityEngine_UIElements_BaseField<Vector2>_get_rawValue__);
    FUN_02d6084c(
                Method_UnityEngine_UIElements_BaseField<ToggleButtonGroupState>_get_showMixedValue__
                );
    FUN_02d6084c(PTR_DAT_0675e1b8);
    FUN_02d6084c(Method_UnityEngine_UIElements_BaseField<Vector2>_set_rawValue__);
    FUN_02d6084c(Method_UnityEngine_UIElements_BaseField<Vector2>_set_value__);
    *(undefined1 *)(unaff_x20 + 0x20d) = 1;
  }
  in_stack_000001a0 = 0;
  in_stack_000001a8 = 0;
  in_stack_000001b0 = 0;
  in_stack_00000198 = 0;
  if (*(int *)(*unaff_x21 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  uVar8 = FUN_05a35ef0();
  if ((uVar8 & 1) == 0) {
    return;
  }
  if (param_11 != 0) {
    FUN_059e3ce4(param_11,param_16,0);
    if (*(int *)(*unaff_x21 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    lVar9 = FUN_05a362e8();
    if (lVar9 != 0) {
      uVar8 = FUN_05a364cc();
      if ((uVar8 & 1) != 0) {
        return;
      }
      uVar8 = FUN_059e0b14(param_11,0);
      if (((uVar8 & 1) == 0) || (uVar8 = FUN_059e0c5c(param_11,0), (uVar8 & 1) == 0)) {
        lVar9 = *unaff_x21;
        if (*(int *)(lVar9 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
          lVar9 = *unaff_x21;
        }
        uVar16 = *(undefined8 *)(*(long *)(lVar9 + 0xb8) + 0x30);
        if (*(int *)(*(long *)PTR_DAT_06767d28 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4(*(long *)PTR_DAT_06767d28);
        }
        FUN_05a57de4(param_16,uVar16,0,0,0xffffffff,0xffffffff,0);
        uVar8 = FUN_059e0b14(param_11,0);
        lVar9 = *unaff_x21;
        if (*(int *)(lVar9 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4(lVar9);
          lVar9 = *unaff_x21;
        }
        uVar33 = *(undefined4 *)(*(long *)(lVar9 + 0xb8) + 0x78);
        if ((uVar8 & 1) == 0) {
          if (param_16 == 0) goto LAB_05a38eb0;
          uVar24 = 0xffffffff;
        }
        else {
          if (param_16 == 0) goto LAB_05a38eb0;
          uVar24 = *(undefined4 *)(param_11 + 0x24);
        }
      }
      else {
        lVar9 = *unaff_x21;
        if (*(int *)(lVar9 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
          lVar9 = *unaff_x21;
        }
        uVar16 = *(undefined8 *)(*(long *)(lVar9 + 0xb8) + 0x30);
        if (*(int *)(*(long *)PTR_DAT_06767d28 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4(*(long *)PTR_DAT_06767d28);
        }
        FUN_05a57de4(param_16,uVar16,0,0,0xffffffff,param_12,0);
        if (param_16 == 0) goto LAB_05a38eb0;
        uVar33 = *(undefined4 *)(*(long *)(*unaff_x21 + 0xb8) + 0x78);
        uVar24 = param_12;
      }
      FUN_06091988(param_16,uVar33,uVar24,0);
      if ((in_stack_00000260 & 1) == 0) {
        uVar26 = 0;
        FUN_06091440(0,0,0,0x3f800000,param_16,0,1,0);
      }
      lVar9 = *unaff_x21;
      if (*(int *)(lVar9 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
        lVar9 = *unaff_x21;
      }
      lVar9 = *(long *)(*(long *)(lVar9 + 0xb8) + 0x10);
      if (lVar9 != 0) {
        FUN_03aaceb0(&stack0x00000150,lVar9,
                     *(undefined8 *)Method_UnityEngine_UIElements_BaseField<Vector2>_get_rawValue__)
        ;
        puVar5 = Method_UnityEngine_UIElements_BaseField<Vector2>_StartEditing__;
        puVar3 = PTR_DAT_0675e1b8;
        uVar8 = (ulong)(uint)(param_3 / param_2);
        in_stack_000001a8 = in_stack_00000158;
        in_stack_000001a0 = in_stack_00000150;
        in_stack_000001b0 = in_stack_00000160;
LAB_05a38430:
        uVar10 = FUN_04a7a4a0(&stack0x000001a0,*(undefined8 *)puVar5);
        lVar9 = in_stack_000001b0;
        if ((uVar10 & 1) != 0) {
          if (in_stack_000001b0 != 0) {
            uVar16 = *(undefined8 *)(in_stack_000001b0 + 0x18);
            if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
              thunk_FUN_02dbd7b4();
            }
            uVar10 = UnityEngine_Font__add_textureRebuilt(uVar16,0,0);
            if ((uVar10 & 1) == 0) {
              lVar17 = *(long *)(lVar9 + 0x18);
              if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d60ae8();
              }
              uVar16 = *(undefined8 *)(lVar17 + 0x20);
              if (*(int *)(*unaff_x21 + 0xe4) == 0) {
                thunk_FUN_02dbd7b4();
              }
              uVar10 = FUN_05a372f8(param_10,lVar17,uVar16);
              if ((((uVar10 & 1) == 0) && (*(char *)(lVar17 + 0x58) != '\0')) &&
                 (*(int *)(lVar17 + 0x60) != 0)) {
                in_stack_00000198 = 0;
                uVar10 = FUN_0335c1c4(lVar17,&stack0x00000198,
                                      *(undefined8 *)
                                       Method_UnityEngine_UIElements_BaseField<Vector2>_get_visualInput__
                                     );
                if ((uVar10 & 1) == 0) {
                  in_stack_00000198 = 0;
                }
                lVar11 = in_stack_00000198;
                if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                  thunk_FUN_02dbd7b4();
                }
                uVar10 = FUN_0606a004(lVar11,0,0);
                if ((uVar10 & 1) == 0) {
LAB_05a38574:
                  lVar11 = FUN_06066c74(lVar17,0);
                  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_02d60ae8();
                  }
                  uVar13 = FUN_06078c44(lVar11,0);
                  uVar15 = 0;
                  uVar10 = uVar8;
                  uVar32 = uVar26;
                }
                else {
                  if (in_stack_00000198 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_02d60ae8();
                  }
                  iVar6 = FUN_0603b4e0(in_stack_00000198,0);
                  fVar22 = (float)uVar26;
                  if (iVar6 != 1) goto LAB_05a38574;
                  if (in_stack_00000198 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_02d60ae8();
                  }
                  lVar11 = FUN_06066c74(in_stack_00000198,0);
                  fVar27 = (float)uVar8;
                  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_02d60ae8();
                  }
                  fVar18 = (float)FUN_060791e8(lVar11,0);
                  if (param_10 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_02d60ae8();
                  }
                  fVar19 = (float)FUN_0601be58(param_10,0);
                  uVar13 = (ulong)(uint)(fVar19 * -fVar18);
                  uVar15 = 1;
                  uVar10 = (ulong)(uint)(fVar19 * -fVar27);
                  uVar32 = (ulong)(uint)(fVar19 * -fVar22);
                }
                in_stack_00000178 = param_15[5];
                in_stack_00000170 = param_15[4];
                in_stack_00000188 = param_15[7];
                in_stack_00000180 = param_15[6];
                in_stack_00000158 = param_15[1];
                in_stack_00000150 = *param_15;
                in_stack_00000168 = param_15[3];
                in_stack_00000160 = param_15[2];
                if (*(int *)(*unaff_x21 + 0xe4) == 0) {
                  thunk_FUN_02dbd7b4();
                }
                uVar7 = uVar15 ^ 1;
                in_stack_00000118 = in_stack_00000158;
                in_stack_00000110 = in_stack_00000150;
                in_stack_00000128 = in_stack_00000168;
                in_stack_00000120 = in_stack_00000160;
                in_stack_00000138 = in_stack_00000178;
                in_stack_00000130 = in_stack_00000170;
                in_stack_00000148 = in_stack_00000188;
                in_stack_00000140 = in_stack_00000180;
                fVar22 = (float)uVar13;
                uVar25 = uVar10;
                uVar28 = uVar32;
                uVar16 = FUN_05a3766c(uVar13,param_10,uVar7,param_14 & 1,&stack0x00000110);
                uVar8 = uVar25;
                uVar26 = uVar28;
                if ((param_13 & 1) == 0) {
LAB_05a38684:
                  if ((float)uVar28 < 0.0) goto LAB_05a38430;
                }
                else {
                  uVar12 = FUN_0601e748(0);
                  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                    thunk_FUN_02dbd7b4();
                  }
                  uVar13 = UnityEngine_Font__add_textureRebuilt(param_10,uVar12,0);
                  if ((uVar13 & 1) == 0) goto LAB_05a38684;
                  if (param_10 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_02d60ae8();
                  }
                  uVar12 = FUN_0601bfe0(param_10,0);
                  if (*(int *)(*unaff_x21 + 0xe4) == 0) {
                    thunk_FUN_02dbd7b4();
                  }
                  uVar26 = (ulong)(uint)param_2;
                  uVar16 = FUN_05a390ec(uVar16,uVar25,uVar26,param_3,uVar12,param_5,(int)param_4);
                  uVar8 = uVar25;
                }
                fVar18 = (float)uVar25;
                fVar27 = (float)uVar16;
                if ((*(char *)(lVar17 + 0x6c) != '\0') ||
                   (((fVar18 <= 1.0 && (0.0 <= fVar27)) && ((fVar27 <= 1.0 && (0.0 <= fVar18)))))) {
                  if (param_10 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_02d60ae8();
                  }
                  lVar11 = FUN_06066c74(param_10,0);
                  fVar19 = (float)uVar8;
                  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_02d60ae8();
                  }
                  fVar20 = (float)FUN_060791e8(lVar11,0);
                  fVar35 = fVar22 - param_6;
                  fVar30 = (float)uVar10;
                  fVar36 = fVar30 - param_7;
                  fVar31 = (float)uVar32;
                  fVar34 = fVar31 - param_8;
                  fVar21 = (float)uVar26;
                  fVar23 = fVar34 * fVar21;
                  uVar8 = (ulong)(uint)fVar23;
                  if (0.0 <= fVar23 + fVar35 * fVar20 + fVar36 * fVar19) {
                    if (DAT_06b722a5 == '\0') {
                      FUN_02d6084c(PTR_DAT_0675e6d8);
                      fVar23 = (float)uVar8;
                      DAT_06b722a5 = '\x01';
                    }
                    if (*(int *)(*(long *)PTR_DAT_0675e6d8 + 0xe4) == 0) {
                      thunk_FUN_02dbd7b4();
                    }
                    if (uVar15 == 0) {
                      if (*(long *)(lVar17 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_02d60ae8();
                      }
                      fVar20 = *(float *)(lVar17 + 0x30);
                      fVar19 = *(float *)(lVar17 + 0x34);
                      iVar6 = FUN_06018414(*(long *)(lVar17 + 0x38),0);
                      fVar36 = fVar36 * fVar36;
                      fVar34 = fVar34 * fVar34;
                      fVar23 = SQRT(fVar34 + fVar35 * fVar35 + fVar36);
                      if (iVar6 < 1) {
                        fStack0000000000000034 = 1.0;
                      }
                      else {
                        if (*(long *)(lVar17 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_02d60ae8();
                        }
                        fStack0000000000000034 =
                             (float)FUN_06017d20(fVar23 / fVar20,*(long *)(lVar17 + 0x38),0);
                      }
                      if (*(long *)(lVar17 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_02d60ae8();
                      }
                      iVar6 = FUN_06018414(*(long *)(lVar17 + 0x40),0);
                      if (0 < iVar6) {
                        if (*(long *)(lVar17 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_02d60ae8();
                        }
                        FUN_06017d20(fVar23 / fVar19,*(long *)(lVar17 + 0x40),0);
                      }
                      lVar11 = FUN_06066c74(param_10,0);
                      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_02d60ae8();
                      }
                      fVar35 = (float)FUN_06078c44(lVar11,0);
                      fVar19 = fVar36;
                      fVar20 = fVar34;
                      lVar11 = FUN_06066c74(lVar17,0);
                      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_02d60ae8();
                      }
                      fVar23 = (float)FUN_06078c44(lVar11,0);
                      if (DAT_06b72248 == '\0') {
                        FUN_02d6084c(PTR_DAT_0675e6d8);
                        DAT_06b72248 = '\x01';
                      }
                      if (*(int *)(*(long *)PTR_DAT_0675e6d8 + 0xe4) == 0) {
                        thunk_FUN_02dbd7b4();
                      }
                      fVar35 = fVar35 - fVar23;
                      fVar36 = fVar36 - fVar19;
                      fVar34 = fVar34 - fVar20;
                      fVar21 = SQRT(fVar34 * fVar34 + fVar35 * fVar35 + fVar36 * fVar36);
                      if (fVar21 <= DAT_01208410) {
                        if (DAT_06b7224b == '\0') {
                          FUN_02d6084c(PTR_DAT_0675e318);
                          DAT_06b7224b = '\x01';
                        }
                        pfVar14 = *(float **)(*(long *)PTR_DAT_0675e318 + 0xb8);
                        fVar35 = *pfVar14;
                        fVar23 = pfVar14[1];
                        fVar21 = pfVar14[2];
                      }
                      else {
                        fVar35 = fVar35 / fVar21;
                        fVar23 = fVar36 / fVar21;
                        fVar21 = fVar34 / fVar21;
                      }
                    }
                    else {
                      lVar11 = FUN_06066c74(lVar17,0);
                      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_02d60ae8();
                      }
                      fVar35 = (float)FUN_060791e8(lVar11,0);
                      fStack0000000000000034 = 1.0;
                    }
                    in_stack_00000178 = param_15[5];
                    in_stack_00000170 = param_15[4];
                    in_stack_00000188 = param_15[7];
                    in_stack_00000180 = param_15[6];
                    in_stack_00000158 = param_15[1];
                    in_stack_00000150 = *param_15;
                    in_stack_00000168 = param_15[3];
                    in_stack_00000160 = param_15[2];
                    fVar19 = *(float *)(lVar17 + 100);
                    if (*(int *)(*unaff_x21 + 0xe4) == 0) {
                      thunk_FUN_02dbd7b4();
                    }
                    fVar20 = fVar31 + fVar21 * fVar19;
                    in_stack_000000d8 = in_stack_00000158;
                    in_stack_000000d0 = in_stack_00000150;
                    in_stack_000000e8 = in_stack_00000168;
                    in_stack_000000e0 = in_stack_00000160;
                    in_stack_000000f8 = in_stack_00000178;
                    in_stack_000000f0 = in_stack_00000170;
                    in_stack_00000108 = in_stack_00000188;
                    in_stack_00000100 = in_stack_00000180;
                    FUN_05a3766c(fVar22 + fVar35 * fVar19,fVar30 + fVar23 * fVar19,param_10,uVar7,
                                 param_14 & 1,&stack0x000000d0);
                    if (uVar15 == 0) {
                      fVar19 = *(float *)(lVar17 + 0x5c);
                    }
                    else {
                      fVar19 = (float)FUN_05a3924c(lVar17,param_10);
                    }
                    in_stack_00000178 = param_15[5];
                    uVar16 = param_15[4];
                    in_stack_00000188 = param_15[7];
                    in_stack_00000180 = param_15[6];
                    in_stack_00000158 = param_15[1];
                    in_stack_00000150 = *param_15;
                    in_stack_00000168 = param_15[3];
                    lVar29 = param_15[2];
                    in_stack_00000160 = lVar29;
                    in_stack_00000170 = uVar16;
                    lVar11 = FUN_06066c74(param_10,0);
                    fVar36 = (float)lVar29;
                    fVar23 = (float)uVar16;
                    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_02d60ae8();
                    }
                    fVar21 = (float)FUN_0607916c(lVar11,0);
                    if (*(int *)(*unaff_x21 + 0xe4) == 0) {
                      thunk_FUN_02dbd7b4();
                    }
                    uVar8 = (ulong)(uint)(fVar30 + fVar19 * fVar23);
                    in_stack_00000098 = in_stack_00000158;
                    in_stack_00000090 = in_stack_00000150;
                    in_stack_000000a8 = in_stack_00000168;
                    in_stack_000000a0 = in_stack_00000160;
                    in_stack_000000b8 = in_stack_00000178;
                    in_stack_000000b0 = in_stack_00000170;
                    in_stack_000000c8 = in_stack_00000188;
                    in_stack_000000c0 = in_stack_00000180;
                    fVar22 = (float)FUN_05a3766c(fVar22 + fVar19 * fVar21,uVar8,
                                                 fVar31 + fVar19 * fVar36,param_10,uVar7,
                                                 param_14 & 1,&stack0x00000090);
                    uVar26 = uVar8;
                    if (DAT_06b725ce == '\0') {
                      FUN_02d6084c(PTR_DAT_0675e6d8);
                      DAT_06b725ce = '\x01';
                    }
                    uVar33 = (undefined4)(uVar26 >> 0x20);
                    if (*(int *)(*(long *)PTR_DAT_0675e6d8 + 0xe4) == 0) {
                      thunk_FUN_02dbd7b4();
                    }
                    fVar19 = (float)uVar8 - fVar18;
                    uVar24 = NEON_ucvtf(*(undefined4 *)(lVar17 + 0x60));
                    FUN_06091af8(SQRT((fVar22 - fVar27) * (fVar22 - fVar27) + fVar19 * fVar19),
                                 CONCAT44(uVar33,uVar24),fVar20,param_3 / param_2,param_16,
                                 *(undefined4 *)(*(long *)(*unaff_x21 + 0xb8) + 0x60),0);
                    FUN_05a37ba8(param_16,*(undefined1 *)(lVar17 + 0x5a),
                                 *(undefined4 *)(*(long *)(*unaff_x21 + 0xb8) + 0x50),
                                 in_stack_00000278);
                    FUN_06091d30(param_16,*(undefined8 *)
                                           Method_UnityEngine_UIElements_BaseField<Vector2>_set_value__
                                 ,0);
                    uVar7 = FUN_060741d8(0);
                    fVar19 = fVar27 + fVar27 + -1.0;
                    fVar18 = fVar18 + fVar18 + -1.0;
                    fVar27 = ABS(fVar19);
                    uVar26 = (ulong)(uint)fVar27;
                    fVar22 = fVar18;
                    if ((uVar15 & (uVar7 ^ 1)) == 0) {
                      fVar22 = -fVar18;
                    }
                    if (fVar27 <= ABS(fVar18)) {
                      fVar27 = ABS(fVar18);
                    }
                    if (*(long *)(lVar17 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_02d60ae8();
                    }
                    iVar6 = FUN_06018414(*(long *)(lVar17 + 0x50),0);
                    if (iVar6 < 1) {
                      fVar27 = 1.0;
                    }
                    else {
                      if (*(long *)(lVar17 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_02d60ae8();
                      }
                      fVar27 = (float)FUN_06017d20(fVar27,*(long *)(lVar17 + 0x50),0);
                    }
                    uVar8 = (ulong)(uint)fStack0000000000000034;
                    if (0.0 < fStack0000000000000034 * fVar27 * *(float *)(lVar17 + 0x2c)) {
                      lVar11 = *unaff_x21;
                      if (*(int *)(lVar11 + 0xe4) == 0) {
                        thunk_FUN_02dbd7b4();
                        lVar11 = *unaff_x21;
                      }
                      uVar33 = 0xbf800000;
                      if (*(char *)(lVar17 + 0x6c) != '\0') {
                        uVar33 = 0x3f800000;
                      }
                      FUN_06091af8(uVar33,DAT_01208434,DAT_01208564,DAT_01208300,param_16,
                                   *(undefined4 *)(*(long *)(lVar11 + 0xb8) + 0x68),0);
                      puVar4 = PTR_DAT_06762360;
                      if (*(int *)(*unaff_x21 + 0xe4) == 0) {
                        thunk_FUN_02dbd7b4();
                      }
                      if (DAT_06b72a50 == '\0') {
                        FUN_02d6084c(puVar4);
                        DAT_06b72a50 = '\x01';
                      }
                      uVar24 = *(undefined4 *)(*(long *)(*(long *)puVar4 + 0xb8) + 8);
                      uVar33 = *(undefined4 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0xc);
                      if (DAT_06b7297d == '\0') {
                        FUN_02d6084c(puVar4);
                        DAT_06b7297d = '\x01';
                      }
                      FUN_05a3741c(fVar19,fVar22,uVar24,uVar33,
                                   (fVar22 - fVar22) * 0.0 - (fVar19 - fVar19),
                                   -(fVar22 - fVar22) - (fVar19 - fVar19) * 0.0,param_2 / param_3,
                                   0x3f800000,0);
                      FUN_06091af8(param_16,*(undefined4 *)(*(long *)(*unaff_x21 + 0xb8) + 0x5c),0);
                      FUN_06091af8(fVar19,fVar22,0,0,param_16,
                                   *(undefined4 *)(*(long *)(*unaff_x21 + 0xb8) + 100),0);
                      iVar6 = *(int *)(lVar9 + 0x10);
                      uVar8 = 0;
                      if ((in_stack_00000260 & 1) != 0) {
                        lVar9 = *unaff_x21;
                        if (*(int *)(lVar9 + 0xe4) == 0) {
                          thunk_FUN_02dbd7b4();
                          lVar9 = *unaff_x21;
                        }
                        uVar8 = (ulong)(uint)(float)(*(int *)(*(long *)(lVar9 + 0xb8) + 0x28) +
                                                    *(int *)(*(long *)(lVar9 + 0xb8) + 0x38));
                      }
                      uVar26 = 0x3f800000;
                      FUN_06090bec((float)iVar6,uVar8,0x3f800000,0x3f800000,param_16,0);
                      if (param_9 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_02d60ae8();
                      }
                      uVar33 = FUN_06038110(param_9,*(undefined8 *)
                                                                                                          
                                                  Method_UnityEngine_UIElements_BaseField<Vector2>_set_rawValue__
                                            ,0);
                      if (*(int *)(*(long *)
                                    Method_UnityEngine_UIElements_BaseField<Vector2>_get_value__ +
                                  0xe4) == 0) {
                        thunk_FUN_02dbd7b4();
                      }
                      FUN_05a56870(param_16,param_9,uVar33,0);
                    }
                  }
                }
              }
            }
          }
          goto LAB_05a38430;
        }
        FUN_04a7a49c(&stack0x000001a0,
                     *(undefined8 *)
                      Method_UnityEngine_UIElements_BaseField<Vector2>_SetValueWithoutNotify__);
        if ((in_stack_00000260 & 1) != 0) {
          lVar9 = *unaff_x21;
          if (*(int *)(lVar9 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
            lVar9 = *unaff_x21;
          }
          uVar16 = *(undefined8 *)(*(long *)(lVar9 + 0xb8) + 0x30);
          if (*(int *)(*(long *)PTR_DAT_06767d28 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4(*(long *)PTR_DAT_06767d28);
          }
          FUN_05a57de4(param_16,uVar16,0,0,0xffffffff,param_12,0);
          lVar9 = *(long *)(*unaff_x21 + 0xb8);
          if (*(long *)(lVar9 + 0x10) == 0) goto LAB_05a38eb0;
          iVar6 = *(int *)(*(long *)(lVar9 + 0x10) + 0x18);
          FUN_06090bec((float)iVar6,0,(float)(*(int *)(lVar9 + 0x20) - iVar6),
                       (float)(*(int *)(lVar9 + 0x24) + *(int *)(lVar9 + 0x28)),param_16,0);
          FUN_06091440(0,0,0,0x3f800000,param_16,0,1,0);
        }
        lVar9 = *unaff_x21;
        if (*(int *)(lVar9 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
          lVar9 = *unaff_x21;
        }
        lVar9 = *(long *)(lVar9 + 0xb8);
        iVar1 = *(int *)(lVar9 + 0x24);
        iVar6 = *(int *)(lVar9 + 0x38) + 1;
        iVar2 = 0;
        if (iVar1 != 0) {
          iVar2 = iVar6 / iVar1;
        }
        *(int *)(lVar9 + 0x38) = iVar6 - iVar2 * iVar1;
        FUN_059e3da0(param_11,param_16,0);
        return;
      }
    }
  }
LAB_05a38eb0:
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


