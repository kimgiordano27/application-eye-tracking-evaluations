/*
FUNCTION_NAME: UnityEngine.Rendering.Universal.PostProcessPass.<>c$$<UberPostSetupBloomPass>b__130_0
ENTRY_POINT: 05a3bd28
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


/* WARNING: Removing unreachable block (ram,0x05a3b5a0) */
/* WARNING: Removing unreachable block (ram,0x05a3b5b0) */
/* WARNING: Removing unreachable block (ram,0x05a3bf48) */
/* WARNING: Removing unreachable block (ram,0x05a3b5b8) */
/* WARNING: Removing unreachable block (ram,0x05a3bf3c) */
/* WARNING: Removing unreachable block (ram,0x05a3b5c4) */
/* WARNING: Removing unreachable block (ram,0x05a3bf40) */
/* WARNING: Removing unreachable block (ram,0x05a3b5d0) */
/* WARNING: Removing unreachable block (ram,0x05a3bbf8) */

void UnityEngine_Rendering_Universal_PostProcessPass_<>c__<UberPostSetupBloomPass>b__130_0
               (long param_1)

{
  undefined4 uVar1;
  ulong uVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  float *pfVar9;
  long lVar10;
  long *unaff_x20;
  undefined8 *unaff_x21;
  long unaff_x22;
  long *unaff_x23;
  long unaff_x24;
  undefined4 unaff_w25;
  undefined8 *unaff_x26;
  long unaff_x28;
  long unaff_x29;
  float fVar11;
  undefined8 uVar12;
  float fVar13;
  undefined8 uVar14;
  float fVar15;
  float fVar16;
  ulong uVar17;
  undefined8 uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined8 unaff_d14;
  long in_stack_00000028;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  float in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined4 uStack0000000000000068;
  float fStack000000000000006c;
  float fStack0000000000000070;
  float fStack0000000000000074;
  float fStack0000000000000078;
  undefined8 in_stack_00000080;
  ulong in_stack_00000088;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000158;
  undefined8 in_stack_00000160;
  undefined8 in_stack_00000168;
  undefined8 in_stack_00000170;
  undefined8 in_stack_00000178;
  undefined8 in_stack_00000180;
  undefined8 in_stack_00000188;
  undefined8 in_stack_00000190;
  undefined8 in_stack_00000198;
  undefined8 in_stack_000001a0;
  undefined8 in_stack_000001a8;
  undefined8 in_stack_000001b0;
  undefined8 in_stack_000001b8;
  undefined8 in_stack_000001c0;
  undefined8 in_stack_000001c8;
  undefined8 in_stack_000001d0;
  undefined8 in_stack_000001d8;
  undefined8 in_stack_000001e0;
  undefined8 in_stack_000001e8;
  undefined8 in_stack_00000258;
  long in_stack_00000270;
  ulong uVar18;
  
  uVar2 = _fStack0000000000000078 >> 0x20;
code_r0x05a3bd28:
  FUN_05a4812c(&stack0x000001c0,param_1,0);
  in_stack_000000d8 = in_stack_000001c8;
  in_stack_000000d0 = in_stack_000001c0;
  in_stack_000000e8 = in_stack_000001d8;
  in_stack_000000e0 = in_stack_000001d0;
  in_stack_000000f0 = in_stack_000001e0;
  FUN_0609adc4(in_stack_00000080,unaff_w25,&stack0x000000d0,0);
  FUN_06091d30(in_stack_00000080,
               *(undefined8 *)Method_UnityEngine_UIElements_BaseField<Vector4>_get_labelElement__,0)
  ;
  do {
    if (*(int *)(*unaff_x20 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    uVar6 = FUN_05a35ef0();
    if ((uVar6 & 1) == 0) {
      FUN_06091d30(in_stack_00000080,
                   *(undefined8 *)
                    Method_UnityEngine_UIElements_BaseField<Vector3Int>_set_showMixedValue__,0);
    }
    else {
      FUN_060921e0(in_stack_00000080,
                   *(undefined8 *)
                    Method_UnityEngine_UIElements_BaseField<Vector3Int>_set_showMixedValue__,0);
    }
    lVar7 = *unaff_x20;
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar7 = *unaff_x20;
    }
    FUN_06091af8((float)*(int *)(unaff_x22 + 0x10),0,0,0,in_stack_00000080,
                 *(undefined4 *)(*(long *)(lVar7 + 0xb8) + 0x48),0);
    if (*(long *)(unaff_x28 + 0x70) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    uVar1 = *(undefined4 *)(*(long *)(*unaff_x20 + 0xb8) + 0x40);
    uVar8 = FUN_05a652d8(*(long *)(unaff_x28 + 0x70),0);
    FUN_06088f24(&stack0x000001c0,uVar8,0);
    in_stack_000000a8 = in_stack_000001c8;
    in_stack_000000a0 = in_stack_000001c0;
    in_stack_000000b8 = in_stack_000001d8;
    in_stack_000000b0 = in_stack_000001d0;
    in_stack_000000c0 = in_stack_000001e0;
    FUN_0609adc4(in_stack_00000080,uVar1,&stack0x000000a0,0);
    if (unaff_x29 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    uVar6 = (ulong)(uint)(fStack0000000000000078 * in_stack_00000058);
    NEON_ucvtf(*(undefined4 *)(unaff_x28 + 0x60));
    uVar18 = uVar6;
    FUN_05a3a9b8(unaff_x29 + 0x18,in_stack_00000080,in_stack_00000258,in_stack_00000060,
                 *(undefined1 *)(unaff_x28 + 0x6c),0,0);
LAB_05a3b4d4:
    do {
      do {
        do {
          uVar4 = FUN_04a7a4a0(&stack0x00000260,*unaff_x26);
          if ((uVar4 & 1) == 0) {
            FUN_04a7a49c(&stack0x00000260,
                         *(undefined8 *)
                          Method_UnityEngine_UIElements_BaseField<Vector2>_SetValueWithoutNotify__);
            FUN_059e3da0(in_stack_00000048,in_stack_00000080,0);
            return;
          }
        } while (in_stack_00000270 == 0);
        uVar8 = *(undefined8 *)(in_stack_00000270 + 0x18);
        if (*(int *)(*unaff_x23 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        uVar4 = UnityEngine_Font__add_textureRebuilt(uVar8,0,0);
      } while ((uVar4 & 1) != 0);
      unaff_x28 = *(long *)(in_stack_00000270 + 0x18);
      if (unaff_x28 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      unaff_x29 = *(long *)(unaff_x28 + 0x20);
      if (*(int *)(*unaff_x20 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar4 = FUN_05a372f8();
      fVar15 = (float)uVar18;
    } while ((uVar4 & 1) != 0);
    FUN_0335c1c4(unaff_x28,&stack0x00000258,
                 *(undefined8 *)Method_UnityEngine_UIElements_BaseField<Vector2>_get_visualInput__);
    in_stack_00000258 = 0;
    uVar4 = uVar6;
    if (*(int *)(*unaff_x23 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      uVar4 = uVar6;
    }
    uVar6 = FUN_0606a004(0,0,0);
    if ((uVar6 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    lVar7 = FUN_06066c74(unaff_x28,0);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    uVar12 = FUN_06078c44(lVar7,0);
    uVar8 = *(undefined8 *)(unaff_x28 + 0x78);
    if (*(int *)(*unaff_x23 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    uVar6 = FUN_0606a004(uVar8,0,0);
    if ((uVar6 & 1) != 0) {
      in_stack_00000258 = *(undefined8 *)(unaff_x28 + 0x78);
    }
    in_stack_000001e8 = unaff_x21[5];
    in_stack_000001e0 = unaff_x21[4];
    uVar14 = unaff_x21[7];
    uVar8 = unaff_x21[6];
    in_stack_000001c8 = unaff_x21[1];
    in_stack_000001c0 = *unaff_x21;
    in_stack_000001d8 = unaff_x21[3];
    in_stack_000001d0 = unaff_x21[2];
    if (*(int *)(*unaff_x20 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    in_stack_00000188 = in_stack_000001c8;
    in_stack_00000180 = in_stack_000001c0;
    in_stack_00000198 = in_stack_000001d8;
    in_stack_00000190 = in_stack_000001d0;
    in_stack_000001a8 = in_stack_000001e8;
    in_stack_000001a0 = in_stack_000001e0;
    uVar17 = (ulong)(uint)fVar15;
    fVar22 = (float)uVar4;
    fVar21 = (float)uVar12;
    in_stack_000001b0 = uVar8;
    in_stack_000001b8 = uVar14;
    uVar8 = FUN_05a3766c(uVar12);
    uVar6 = uVar4;
    uVar18 = uVar17;
    if ((in_stack_00000088 & 0x100000000) == 0) {
LAB_05a3b758:
      if ((float)uVar17 < 0.0) goto LAB_05a3b4d4;
    }
    else {
      FUN_0601e748(0);
      if (*(int *)(*unaff_x23 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar5 = UnityEngine_Font__add_textureRebuilt();
      if ((uVar5 & 1) == 0) goto LAB_05a3b758;
      if (unaff_x24 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      uVar12 = FUN_0601bfe0();
      if (*(int *)(*unaff_x20 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar18 = uVar2;
      uVar8 = FUN_05a390ec(uVar8,uVar4,uVar2,in_stack_00000050._4_4_,uVar12,uStack0000000000000068,
                           unaff_d14);
      uVar6 = uVar4;
    }
    fVar20 = (float)uVar4;
    fVar16 = (float)uVar8;
    if ((*(char *)(unaff_x28 + 0x6c) == '\0') &&
       ((((1.0 < fVar20 || (fVar16 < 0.0)) || (1.0 < fVar16)) || (fVar20 < 0.0))))
    goto LAB_05a3b4d4;
    if (unaff_x24 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    lVar7 = FUN_06066c74();
    fVar26 = (float)uVar6;
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    fVar11 = (float)FUN_060791e8(lVar7,0);
    fVar23 = fVar21 - fStack000000000000006c;
    fVar24 = fVar22 - fStack0000000000000070;
    fVar25 = fVar15 - fStack0000000000000074;
    fVar13 = fVar25 * (float)uVar18;
    uVar6 = (ulong)(uint)fVar13;
    if (fVar13 + fVar23 * fVar11 + fVar24 * fVar26 < 0.0) goto LAB_05a3b4d4;
    if (DAT_06b722a5 == '\0') {
      FUN_02d6084c(PTR_DAT_0675e6d8);
      DAT_06b722a5 = '\x01';
    }
    if (*(int *)(*(long *)PTR_DAT_0675e6d8 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    fVar26 = SQRT(fVar25 * fVar25 + fVar23 * fVar23 + fVar24 * fVar24);
    if (*(long *)(unaff_x28 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    fVar13 = *(float *)(unaff_x28 + 0x30);
    fVar11 = *(float *)(unaff_x28 + 0x34);
    iVar3 = FUN_06018414(*(long *)(unaff_x28 + 0x38),0);
    if (iVar3 < 1) {
      fStack0000000000000078 = 1.0;
    }
    else {
      if (*(long *)(unaff_x28 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      fStack0000000000000078 = (float)FUN_06017d20(fVar26 / fVar13,*(long *)(unaff_x28 + 0x38),0);
    }
    if (*(long *)(unaff_x28 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    iVar3 = FUN_06018414(*(long *)(unaff_x28 + 0x40),0);
    if (0 < iVar3) {
      if (*(long *)(unaff_x28 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      FUN_06017d20(fVar26 / fVar11,*(long *)(unaff_x28 + 0x40),0);
    }
    if (*(int *)(*unaff_x23 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    uVar6 = FUN_0606a004(in_stack_00000258,0,0);
    in_stack_00000058 = 1.0;
    if (((uVar6 & 1) != 0) && (*(char *)(unaff_x28 + 0x48) != '\0')) {
      if (DAT_06b72248 == '\0') {
        FUN_02d6084c(PTR_DAT_0675e6d8);
        DAT_06b72248 = '\x01';
      }
      if (*(int *)(*(long *)PTR_DAT_0675e6d8 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      if (fVar26 <= in_stack_00000040._4_4_) {
        if (DAT_06b7224b == '\0') {
          FUN_02d6084c(PTR_DAT_0675e318);
          DAT_06b7224b = '\x01';
        }
        pfVar9 = *(float **)(*(long *)PTR_DAT_0675e318 + 0xb8);
        fVar23 = *pfVar9;
        fVar24 = pfVar9[1];
        fVar25 = pfVar9[2];
      }
      else {
        fVar23 = fVar23 / fVar26;
        fVar24 = fVar24 / fVar26;
        fVar25 = fVar25 / fVar26;
      }
      if (in_stack_00000028 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      in_stack_00000058 =
           (float)(**(code **)(in_stack_00000028 + 0x18))
                            (-fVar23,-fVar24,-fVar25,*(undefined8 *)(in_stack_00000028 + 0x40),
                             in_stack_00000258);
    }
    FUN_060741d8(0);
    fVar16 = ABS(fVar16 + fVar16 + -1.0);
    uVar18 = (ulong)(uint)fVar16;
    fVar20 = ABS(fVar20 + fVar20 + -1.0);
    if (fVar16 <= fVar20) {
      fVar16 = fVar20;
    }
    if (*(long *)(unaff_x28 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    iVar3 = FUN_06018414(*(long *)(unaff_x28 + 0x50),0);
    if (iVar3 < 1) {
      fVar20 = 1.0;
    }
    else {
      if (*(long *)(unaff_x28 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      fVar20 = (float)FUN_06017d20(fVar16,*(long *)(unaff_x28 + 0x50),0);
    }
    fVar16 = (float)uVar18;
    uVar6 = (ulong)(uint)fStack0000000000000078;
    if (fStack0000000000000078 * fVar20 * *(float *)(unaff_x28 + 0x2c) <= 0.0) goto LAB_05a3b4d4;
    lVar7 = FUN_06066c74();
    fVar20 = (float)uVar6;
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    fVar23 = (float)FUN_06078c44(lVar7,0);
    fVar26 = fVar20;
    fVar11 = fVar16;
    lVar7 = FUN_06066c74(unaff_x28,0);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    fVar13 = (float)FUN_06078c44(lVar7,0);
    if (DAT_06b72248 == '\0') {
      FUN_02d6084c(PTR_DAT_0675e6d8);
      DAT_06b72248 = '\x01';
    }
    if (*(int *)(*(long *)PTR_DAT_0675e6d8 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    fVar23 = fVar23 - fVar13;
    fVar20 = fVar20 - fVar26;
    fVar16 = SQRT((fVar16 - fVar11) * (fVar16 - fVar11) + fVar23 * fVar23 + fVar20 * fVar20);
    if (fVar16 <= in_stack_00000040._4_4_) {
      if (DAT_06b7224b == '\0') {
        FUN_02d6084c(PTR_DAT_0675e318);
        DAT_06b7224b = '\x01';
      }
      fVar23 = **(float **)(*(long *)PTR_DAT_0675e318 + 0xb8);
      fVar20 = (*(float **)(*(long *)PTR_DAT_0675e318 + 0xb8))[1];
    }
    else {
      fVar23 = fVar23 / fVar16;
      fVar20 = fVar20 / fVar16;
    }
    in_stack_000001e8 = unaff_x21[5];
    in_stack_000001e0 = unaff_x21[4];
    uVar12 = unaff_x21[7];
    uVar8 = unaff_x21[6];
    in_stack_000001c8 = unaff_x21[1];
    in_stack_000001c0 = *unaff_x21;
    in_stack_000001d8 = unaff_x21[3];
    in_stack_000001d0 = unaff_x21[2];
    fVar16 = *(float *)(unaff_x28 + 100);
    if (*(int *)(*unaff_x20 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    in_stack_00000148 = in_stack_000001c8;
    in_stack_00000140 = in_stack_000001c0;
    in_stack_00000158 = in_stack_000001d8;
    in_stack_00000150 = in_stack_000001d0;
    in_stack_00000168 = in_stack_000001e8;
    in_stack_00000160 = in_stack_000001e0;
    in_stack_00000170 = uVar8;
    in_stack_00000178 = uVar12;
    FUN_05a3766c(fVar21 + fVar23 * fVar16,fVar22 + fVar20 * fVar16);
    fVar26 = *(float *)(unaff_x28 + 0x5c);
    in_stack_000001e8 = unaff_x21[5];
    uVar14 = unaff_x21[4];
    uVar12 = unaff_x21[7];
    uVar8 = unaff_x21[6];
    in_stack_000001c8 = unaff_x21[1];
    in_stack_000001c0 = *unaff_x21;
    in_stack_000001d8 = unaff_x21[3];
    uVar19 = unaff_x21[2];
    in_stack_000001d0 = uVar19;
    in_stack_000001e0 = uVar14;
    lVar7 = FUN_06066c74();
    fVar16 = (float)uVar19;
    fVar20 = (float)uVar14;
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    fVar11 = (float)FUN_0607916c(lVar7,0);
    if (*(int *)(*unaff_x20 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    in_stack_00000108 = in_stack_000001c8;
    in_stack_00000100 = in_stack_000001c0;
    in_stack_00000118 = in_stack_000001d8;
    in_stack_00000110 = in_stack_000001d0;
    in_stack_00000128 = in_stack_000001e8;
    in_stack_00000120 = in_stack_000001e0;
    in_stack_00000130 = uVar8;
    in_stack_00000138 = uVar12;
    FUN_05a3766c(fVar21 + fVar26 * fVar11,fVar22 + fVar26 * fVar20,fVar15 + fVar26 * fVar16);
    if (DAT_06b725ce == '\0') {
      FUN_02d6084c(PTR_DAT_0675e6d8);
      DAT_06b725ce = '\x01';
    }
    if (*(int *)(*(long *)PTR_DAT_0675e6d8 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    unaff_x22 = in_stack_00000270;
    if (*(char *)(unaff_x28 + 0x58) != '\0') {
      lVar7 = *unaff_x20;
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4(lVar7);
        lVar7 = *unaff_x20;
      }
      lVar10 = *(long *)(lVar7 + 0xb8);
      param_1 = *(long *)(lVar10 + 0x30);
      if (param_1 != 0) break;
    }
    FUN_060921e0(in_stack_00000080,
                 *(undefined8 *)Method_UnityEngine_UIElements_BaseField<Vector4>_get_labelElement__,
                 0);
  } while( true );
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4(lVar7);
    lVar10 = *(long *)(*unaff_x20 + 0xb8);
    param_1 = *(long *)(lVar10 + 0x30);
  }
  unaff_w25 = *(undefined4 *)(lVar10 + 0x44);
  goto code_r0x05a3bd28;
}


