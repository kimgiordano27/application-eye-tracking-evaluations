/*
FUNCTION_NAME: UnityEngine.Rendering.Universal.PostProcessPass$$RenderUberPost
ENTRY_POINT: 05a389ac
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;telemetry_or_network_hits_4;source_validity_pose_sink_structure;negative_framework_namespace_without_eye_use_flow
*/


void UnityEngine_Rendering_Universal_PostProcessPass__RenderUberPost
               (undefined1 param_1 [16],undefined8 param_2,undefined1 param_3 [16],
               undefined1 param_4 [16])

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  float *pfVar8;
  uint unaff_w20;
  long *unaff_x21;
  undefined8 *unaff_x22;
  long unaff_x23;
  long *unaff_x24;
  long unaff_x25;
  undefined8 *unaff_x26;
  undefined8 uVar9;
  long unaff_x29;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  ulong unaff_d8;
  ulong unaff_d9;
  undefined4 uVar19;
  undefined8 unaff_d11;
  float fVar20;
  float fVar21;
  float unaff_s13;
  ulong unaff_d15;
  undefined8 in_stack_00000030;
  float fStack0000000000000038;
  undefined4 uStack000000000000003c;
  ulong in_stack_00000040;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  long in_stack_00000050;
  undefined4 uStack0000000000000060;
  float fStack0000000000000064;
  float fStack0000000000000068;
  float fStack000000000000006c;
  undefined8 in_stack_00000070;
  ulong in_stack_00000080;
  float in_stack_00000088;
  undefined8 uStack0000000000000150;
  undefined8 uStack0000000000000158;
  undefined8 uStack0000000000000160;
  undefined8 uStack0000000000000168;
  long in_stack_00000198;
  long in_stack_000001b0;
  
  uStack0000000000000158 = param_4._8_8_;
  uStack0000000000000150 = param_4._0_8_;
  uStack0000000000000168 = param_3._8_8_;
  uVar9 = param_3._0_8_;
  do {
    fVar11 = (float)param_2;
    uStack0000000000000160 = uVar9;
    lVar7 = FUN_06066c74();
    fVar17 = (float)uVar9;
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    fVar10 = (float)FUN_0607916c(lVar7,0);
    if (*(int *)(*unaff_x21 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    uVar13 = (ulong)(uint)((float)unaff_d8 + unaff_s13 * fVar11);
    fVar11 = (float)FUN_05a3766c(in_stack_00000088 + unaff_s13 * fVar10,uVar13,
                                 (float)unaff_d9 + unaff_s13 * fVar17);
    uVar14 = uVar13;
    if (DAT_06b725ce == '\0') {
      FUN_02d6084c(PTR_DAT_0675e6d8);
      DAT_06b725ce = '\x01';
    }
    uVar19 = (undefined4)(uVar14 >> 0x20);
    if (*(int *)(*(long *)PTR_DAT_0675e6d8 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    fVar10 = (float)unaff_d11;
    fVar16 = (float)unaff_d15;
    fVar17 = (float)uVar13 - fVar16;
    uVar12 = NEON_ucvtf(*(undefined4 *)(unaff_x29 + 0x60));
    FUN_06091af8(SQRT((fVar11 - fVar10) * (fVar11 - fVar10) + fVar17 * fVar17),
                 CONCAT44(uVar19,uVar12),fStack0000000000000038,uStack0000000000000060);
    FUN_05a37ba8();
    FUN_06091d30();
    uVar4 = FUN_060741d8(0);
    fVar18 = fVar10 + fVar10 + -1.0;
    fVar10 = fVar16 + fVar16 + -1.0;
    fVar17 = ABS(fVar18);
    uVar14 = (ulong)(uint)fVar17;
    fVar11 = fVar10;
    if ((unaff_w20 & (uVar4 ^ 1)) == 0) {
      fVar11 = -fVar10;
    }
    if (fVar17 <= ABS(fVar10)) {
      fVar17 = ABS(fVar10);
    }
    if (*(long *)(unaff_x29 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    iVar5 = FUN_06018414(*(long *)(unaff_x29 + 0x50),0);
    if (iVar5 < 1) {
      fVar17 = 1.0;
    }
    else {
      if (*(long *)(unaff_x29 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      fVar17 = (float)FUN_06017d20(fVar17,*(long *)(unaff_x29 + 0x50),0);
    }
    uVar13 = (ulong)(uint)in_stack_00000030._4_4_;
    if (0.0 < in_stack_00000030._4_4_ * fVar17 * *(float *)(unaff_x29 + 0x2c)) {
      if (*(int *)(*unaff_x21 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar19 = 0xbf800000;
      if (*(char *)(unaff_x29 + 0x6c) != '\0') {
        uVar19 = 0x3f800000;
      }
      FUN_06091af8(uVar19,DAT_01208434,DAT_01208564,DAT_01208300);
      puVar3 = PTR_DAT_06762360;
      if (*(int *)(*unaff_x21 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      if (DAT_06b72a50 == '\0') {
        FUN_02d6084c(puVar3);
        DAT_06b72a50 = '\x01';
      }
      uVar12 = *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 8);
      uVar19 = *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0xc);
      if (DAT_06b7297d == '\0') {
        FUN_02d6084c(puVar3);
        DAT_06b7297d = '\x01';
      }
      FUN_05a3741c(fVar18,fVar11,uVar12,uVar19,(fVar11 - fVar11) * 0.0 - (fVar18 - fVar18),
                   -(fVar11 - fVar11) - (fVar18 - fVar18) * 0.0,uStack000000000000003c,0x3f800000,0)
      ;
      FUN_06091af8();
      FUN_06091af8(fVar18,fVar11,0,0);
      iVar5 = *(int *)(unaff_x23 + 0x10);
      uVar13 = 0;
      if ((in_stack_00000080 & 1) != 0) {
        lVar7 = *unaff_x21;
        if (*(int *)(lVar7 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
          lVar7 = *unaff_x21;
        }
        uVar13 = (ulong)(uint)(float)(*(int *)(*(long *)(lVar7 + 0xb8) + 0x28) +
                                     *(int *)(*(long *)(lVar7 + 0xb8) + 0x38));
      }
      uVar14 = 0x3f800000;
      FUN_06090bec((float)iVar5,uVar13,0x3f800000,0x3f800000);
      if (in_stack_00000050 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      FUN_06038110(in_stack_00000050,
                   *(undefined8 *)Method_UnityEngine_UIElements_BaseField<Vector2>_set_rawValue__,0)
      ;
      if (*(int *)(*(long *)Method_UnityEngine_UIElements_BaseField<Vector2>_get_value__ + 0xe4) ==
          0) {
        thunk_FUN_02dbd7b4();
      }
      FUN_05a56870();
    }
LAB_05a38430:
    do {
      do {
        do {
          uVar6 = FUN_04a7a4a0(&stack0x000001a0,*unaff_x26);
          unaff_x23 = in_stack_000001b0;
          if ((uVar6 & 1) == 0) {
            FUN_04a7a49c(&stack0x000001a0,
                         *(undefined8 *)
                          Method_UnityEngine_UIElements_BaseField<Vector2>_SetValueWithoutNotify__);
            if ((in_stack_00000080 & 1) != 0) {
              if (*(int *)(*unaff_x21 + 0xe4) == 0) {
                thunk_FUN_02dbd7b4();
              }
              if (*(int *)(*(long *)PTR_DAT_06767d28 + 0xe4) == 0) {
                thunk_FUN_02dbd7b4(*(long *)PTR_DAT_06767d28);
              }
              FUN_05a57de4();
              lVar7 = *(long *)(*unaff_x21 + 0xb8);
              if (*(long *)(lVar7 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d60ae8();
              }
              iVar5 = *(int *)(*(long *)(lVar7 + 0x10) + 0x18);
              FUN_06090bec((float)iVar5,0,(float)(*(int *)(lVar7 + 0x20) - iVar5),
                           (float)(*(int *)(lVar7 + 0x24) + *(int *)(lVar7 + 0x28)));
              FUN_06091440(0,0,0,0x3f800000);
            }
            lVar7 = *unaff_x21;
            if (*(int *)(lVar7 + 0xe4) == 0) {
              thunk_FUN_02dbd7b4();
              lVar7 = *unaff_x21;
            }
            lVar7 = *(long *)(lVar7 + 0xb8);
            iVar1 = *(int *)(lVar7 + 0x24);
            iVar5 = *(int *)(lVar7 + 0x38) + 1;
            iVar2 = 0;
            if (iVar1 != 0) {
              iVar2 = iVar5 / iVar1;
            }
            *(int *)(lVar7 + 0x38) = iVar5 - iVar2 * iVar1;
            FUN_059e3da0(in_stack_00000070);
            return;
          }
        } while (in_stack_000001b0 == 0);
        uVar9 = *(undefined8 *)(in_stack_000001b0 + 0x18);
        if (*(int *)(*unaff_x24 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        uVar6 = UnityEngine_Font__add_textureRebuilt(uVar9,0,0);
      } while ((uVar6 & 1) != 0);
      unaff_x29 = *(long *)(unaff_x23 + 0x18);
      if (unaff_x29 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      if (*(int *)(*unaff_x21 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar6 = FUN_05a372f8();
    } while ((((uVar6 & 1) != 0) || (*(char *)(unaff_x29 + 0x58) == '\0')) ||
            (*(int *)(unaff_x29 + 0x60) == 0));
    in_stack_00000198 = 0;
    uVar6 = FUN_0335c1c4(unaff_x29,&stack0x00000198,
                         *(undefined8 *)
                          Method_UnityEngine_UIElements_BaseField<Vector2>_get_visualInput__);
    if ((uVar6 & 1) == 0) {
      in_stack_00000198 = 0;
    }
    lVar7 = in_stack_00000198;
    if (*(int *)(*unaff_x24 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    uVar6 = FUN_0606a004(lVar7,0,0);
    if ((uVar6 & 1) == 0) {
LAB_05a38574:
      lVar7 = FUN_06066c74(unaff_x29,0);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      uVar6 = FUN_06078c44(lVar7,0);
      unaff_w20 = 0;
      unaff_d8 = uVar13;
      unaff_d9 = uVar14;
    }
    else {
      if (in_stack_00000198 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      iVar5 = FUN_0603b4e0(in_stack_00000198,0);
      fVar11 = (float)uVar14;
      if (iVar5 != 1) goto LAB_05a38574;
      if (in_stack_00000198 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      lVar7 = FUN_06066c74(in_stack_00000198,0);
      fVar17 = (float)uVar13;
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      fVar10 = (float)FUN_060791e8(lVar7,0);
      if (unaff_x25 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      fVar18 = (float)FUN_0601be58();
      uVar6 = (ulong)(uint)(fVar18 * -fVar10);
      unaff_w20 = 1;
      unaff_d8 = (ulong)(uint)(fVar18 * -fVar17);
      unaff_d9 = (ulong)(uint)(fVar18 * -fVar11);
    }
    uStack0000000000000158 = unaff_x22[1];
    uStack0000000000000150 = *unaff_x22;
    uStack0000000000000168 = unaff_x22[3];
    uStack0000000000000160 = unaff_x22[2];
    if (*(int *)(*unaff_x21 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    in_stack_00000088 = (float)uVar6;
    unaff_d15 = unaff_d8;
    uVar15 = unaff_d9;
    unaff_d11 = FUN_05a3766c(uVar6);
    uVar13 = unaff_d15;
    uVar14 = uVar15;
    if ((in_stack_00000080 & 0x100000000) == 0) {
LAB_05a38684:
      if ((float)uVar15 < 0.0) goto LAB_05a38430;
    }
    else {
      FUN_0601e748(0);
      if (*(int *)(*unaff_x24 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar6 = UnityEngine_Font__add_textureRebuilt();
      if ((uVar6 & 1) == 0) goto LAB_05a38684;
      if (unaff_x25 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      uVar9 = FUN_0601bfe0();
      if (*(int *)(*unaff_x21 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar14 = in_stack_00000040 & 0xffffffff;
      unaff_d11 = FUN_05a390ec(unaff_d11,unaff_d15,uVar14,in_stack_00000040._4_4_,uVar9,
                               uStack000000000000004c,uStack0000000000000048);
      uVar13 = unaff_d15;
    }
    if ((*(char *)(unaff_x29 + 0x6c) == '\0') &&
       (((1.0 < (float)unaff_d15 || ((float)unaff_d11 < 0.0)) ||
        ((1.0 < (float)unaff_d11 || ((float)unaff_d15 < 0.0)))))) goto LAB_05a38430;
    if (unaff_x25 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    lVar7 = FUN_06066c74();
    fVar11 = (float)uVar13;
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    fVar17 = (float)FUN_060791e8(lVar7,0);
    fVar21 = in_stack_00000088 - fStack0000000000000064;
    fVar18 = (float)unaff_d8 - fStack0000000000000068;
    fVar20 = (float)unaff_d9 - fStack000000000000006c;
    fVar16 = (float)uVar14;
    fVar10 = fVar20 * fVar16;
    uVar13 = (ulong)(uint)fVar10;
    if (fVar10 + fVar21 * fVar17 + fVar18 * fVar11 < 0.0) goto LAB_05a38430;
    if (DAT_06b722a5 == '\0') {
      FUN_02d6084c(PTR_DAT_0675e6d8);
      fVar10 = (float)uVar13;
      DAT_06b722a5 = '\x01';
    }
    if (*(int *)(*(long *)PTR_DAT_0675e6d8 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    if (unaff_w20 == 0) {
      if (*(long *)(unaff_x29 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      fVar17 = *(float *)(unaff_x29 + 0x30);
      fVar11 = *(float *)(unaff_x29 + 0x34);
      iVar5 = FUN_06018414(*(long *)(unaff_x29 + 0x38),0);
      fVar18 = fVar18 * fVar18;
      fVar20 = fVar20 * fVar20;
      fVar10 = SQRT(fVar20 + fVar21 * fVar21 + fVar18);
      if (iVar5 < 1) {
        in_stack_00000030._4_4_ = 1.0;
      }
      else {
        if (*(long *)(unaff_x29 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        in_stack_00000030._4_4_ = (float)FUN_06017d20(fVar10 / fVar17,*(long *)(unaff_x29 + 0x38),0)
        ;
      }
      if (*(long *)(unaff_x29 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      iVar5 = FUN_06018414(*(long *)(unaff_x29 + 0x40),0);
      if (0 < iVar5) {
        if (*(long *)(unaff_x29 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        FUN_06017d20(fVar10 / fVar11,*(long *)(unaff_x29 + 0x40),0);
      }
      lVar7 = FUN_06066c74();
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      fVar21 = (float)FUN_06078c44(lVar7,0);
      fVar11 = fVar18;
      fVar17 = fVar20;
      lVar7 = FUN_06066c74(unaff_x29,0);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      fVar10 = (float)FUN_06078c44(lVar7,0);
      if (DAT_06b72248 == '\0') {
        FUN_02d6084c(PTR_DAT_0675e6d8);
        DAT_06b72248 = '\x01';
      }
      if (*(int *)(*(long *)PTR_DAT_0675e6d8 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      fVar21 = fVar21 - fVar10;
      fVar18 = fVar18 - fVar11;
      fVar20 = fVar20 - fVar17;
      fVar16 = SQRT(fVar20 * fVar20 + fVar21 * fVar21 + fVar18 * fVar18);
      if (fVar16 <= DAT_01208410) {
        if (DAT_06b7224b == '\0') {
          FUN_02d6084c(PTR_DAT_0675e318);
          DAT_06b7224b = '\x01';
        }
        pfVar8 = *(float **)(*(long *)PTR_DAT_0675e318 + 0xb8);
        fVar21 = *pfVar8;
        fVar10 = pfVar8[1];
        fVar16 = pfVar8[2];
      }
      else {
        fVar21 = fVar21 / fVar16;
        fVar10 = fVar18 / fVar16;
        fVar16 = fVar20 / fVar16;
      }
    }
    else {
      lVar7 = FUN_06066c74(unaff_x29,0);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      fVar21 = (float)FUN_060791e8(lVar7,0);
      in_stack_00000030._4_4_ = 1.0;
    }
    uStack0000000000000158 = unaff_x22[1];
    uStack0000000000000150 = *unaff_x22;
    uStack0000000000000168 = unaff_x22[3];
    uStack0000000000000160 = unaff_x22[2];
    fVar11 = *(float *)(unaff_x29 + 100);
    if (*(int *)(*unaff_x21 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    fStack0000000000000038 = (float)unaff_d9 + fVar16 * fVar11;
    FUN_05a3766c(in_stack_00000088 + fVar21 * fVar11,(float)unaff_d8 + fVar10 * fVar11);
    if (unaff_w20 == 0) {
      unaff_s13 = *(float *)(unaff_x29 + 0x5c);
    }
    else {
      unaff_s13 = (float)FUN_05a3924c(unaff_x29);
    }
    param_2 = unaff_x22[4];
    uStack0000000000000158 = unaff_x22[1];
    uStack0000000000000150 = *unaff_x22;
    uStack0000000000000168 = unaff_x22[3];
    uVar9 = unaff_x22[2];
  } while( true );
}


