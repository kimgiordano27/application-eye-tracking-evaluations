/*
FUNCTION_NAME: UnityEngine.Rendering.Universal.PostProcessPass.<>c$$<UpdateCameraResolution>b__123_0
ENTRY_POINT: 05a3b578
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;telemetry_or_network_hits_4;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;negative_framework_namespace_without_eye_use_flow
*/


void UnityEngine_Rendering_Universal_PostProcessPass_<>c__<UpdateCameraResolution>b__123_0
               (undefined1 param_1 [16],ulong param_2,ulong param_3,long param_4)

{
  undefined4 uVar1;
  ulong uVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  float *pfVar9;
  long lVar10;
  bool bVar11;
  long *unaff_x20;
  undefined8 *unaff_x21;
  long unaff_x22;
  long *unaff_x23;
  long unaff_x24;
  undefined8 unaff_x25;
  undefined8 uVar12;
  undefined8 *unaff_x26;
  long unaff_x28;
  long unaff_x29;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 uVar16;
  float fVar17;
  undefined8 uVar18;
  float fVar19;
  undefined8 uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined8 unaff_d14;
  long in_stack_00000028;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  float fStack0000000000000058;
  undefined8 in_stack_00000060;
  undefined4 uStack0000000000000068;
  float fStack000000000000006c;
  float fStack0000000000000070;
  float fStack0000000000000074;
  float fStack0000000000000078;
  undefined8 in_stack_00000080;
  ulong in_stack_00000088;
  float fStack000000000000009c;
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
  long in_stack_00000258;
  long in_stack_00000270;
  
  uVar2 = _fStack0000000000000078 >> 0x20;
  do {
    fStack000000000000009c = (float)param_3;
    if (*(int *)(param_4 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    uVar4 = FUN_0606a004(unaff_x25,0,0);
    if ((uVar4 & 1) == 0) {
UnityEngine_Rendering_Universal_PostProcessPass_<>c__<RenderStopNaN>b__125_0:
      lVar5 = FUN_06066c74(unaff_x28,0);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      uVar7 = FUN_06078c44(lVar5,0);
      bVar11 = false;
      uVar4 = param_2;
    }
    else {
      if (in_stack_00000258 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      iVar3 = FUN_0603b4e0(in_stack_00000258,0);
      if (iVar3 != 1)
      goto UnityEngine_Rendering_Universal_PostProcessPass_<>c__<RenderStopNaN>b__125_0;
      if (in_stack_00000258 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      lVar5 = FUN_06066c74(in_stack_00000258,0);
      fVar21 = (float)param_2;
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      fVar13 = (float)FUN_060791e8(lVar5,0);
      if (unaff_x24 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      fVar14 = (float)FUN_0601be58();
      uVar7 = (ulong)(uint)(fVar14 * -fVar13);
      fStack000000000000009c = fVar14 * -fStack000000000000009c;
      bVar11 = true;
      uVar4 = (ulong)(uint)(fVar14 * -fVar21);
    }
    uVar12 = *(undefined8 *)(unaff_x28 + 0x78);
    if (*(int *)(*unaff_x23 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    uVar6 = FUN_0606a004(uVar12,0,0);
    if ((uVar6 & 1) != 0) {
      in_stack_00000258 = *(long *)(unaff_x28 + 0x78);
    }
    in_stack_000001e8 = unaff_x21[5];
    in_stack_000001e0 = unaff_x21[4];
    uVar16 = unaff_x21[7];
    uVar12 = unaff_x21[6];
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
    uVar6 = (ulong)(uint)fStack000000000000009c;
    fVar13 = (float)uVar4;
    fVar21 = (float)uVar7;
    in_stack_000001b0 = uVar12;
    in_stack_000001b8 = uVar16;
    uVar12 = FUN_05a3766c(uVar7);
    param_2 = uVar4;
    param_3 = uVar6;
    if ((in_stack_00000088 & 0x100000000) == 0) {
LAB_05a3b758:
      if (0.0 <= (float)uVar6) goto FUN_05a3b760;
    }
    else {
      FUN_0601e748(0);
      if (*(int *)(*unaff_x23 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      uVar7 = UnityEngine_Font__add_textureRebuilt();
      if ((uVar7 & 1) == 0) goto LAB_05a3b758;
      if (unaff_x24 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60ae8();
      }
      uVar16 = FUN_0601bfe0();
      if (*(int *)(*unaff_x20 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      param_3 = uVar2;
      uVar12 = FUN_05a390ec(uVar12,uVar4,uVar2,in_stack_00000050._4_4_,uVar16,uStack0000000000000068
                            ,unaff_d14);
      param_2 = uVar4;
FUN_05a3b760:
      fVar14 = (float)uVar4;
      fVar19 = (float)uVar12;
      if ((*(char *)(unaff_x28 + 0x6c) != '\0') ||
         ((((fVar14 <= 1.0 && (0.0 <= fVar19)) && (fVar19 <= 1.0)) && (0.0 <= fVar14)))) {
        if (unaff_x24 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        lVar5 = FUN_06066c74();
        fVar25 = (float)param_2;
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60ae8();
        }
        fVar15 = (float)FUN_060791e8(lVar5,0);
        fVar22 = fVar21 - fStack000000000000006c;
        fVar23 = fVar13 - fStack0000000000000070;
        fVar24 = fStack000000000000009c - fStack0000000000000074;
        fVar17 = fVar24 * (float)param_3;
        param_2 = (ulong)(uint)fVar17;
        if (0.0 <= fVar17 + fVar22 * fVar15 + fVar23 * fVar25) {
          if (DAT_06b722a5 == '\0') {
            FUN_02d6084c(PTR_DAT_0675e6d8);
            DAT_06b722a5 = '\x01';
          }
          if (*(int *)(*(long *)PTR_DAT_0675e6d8 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
          }
          fVar25 = SQRT(fVar24 * fVar24 + fVar22 * fVar22 + fVar23 * fVar23);
          fStack0000000000000078 = 1.0;
          if (!bVar11) {
            if (*(long *)(unaff_x28 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d60ae8();
            }
            fVar17 = *(float *)(unaff_x28 + 0x30);
            fVar15 = *(float *)(unaff_x28 + 0x34);
            iVar3 = FUN_06018414(*(long *)(unaff_x28 + 0x38),0);
            if (iVar3 < 1) {
              fStack0000000000000078 = 1.0;
            }
            else {
              if (*(long *)(unaff_x28 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d60ae8();
              }
              fStack0000000000000078 =
                   (float)FUN_06017d20(fVar25 / fVar17,*(long *)(unaff_x28 + 0x38),0);
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
              FUN_06017d20(fVar25 / fVar15,*(long *)(unaff_x28 + 0x40),0);
            }
          }
          if (*(int *)(*unaff_x23 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
          }
          uVar4 = FUN_0606a004(in_stack_00000258,0,0);
          fStack0000000000000058 = 1.0;
          if (((uVar4 & 1) != 0) && (*(char *)(unaff_x28 + 0x48) != '\0')) {
            if (DAT_06b72248 == '\0') {
              FUN_02d6084c(PTR_DAT_0675e6d8);
              DAT_06b72248 = '\x01';
            }
            if (*(int *)(*(long *)PTR_DAT_0675e6d8 + 0xe4) == 0) {
              thunk_FUN_02dbd7b4();
            }
            if (fVar25 <= in_stack_00000040._4_4_) {
              if (DAT_06b7224b == '\0') {
                FUN_02d6084c(PTR_DAT_0675e318);
                DAT_06b7224b = '\x01';
              }
              pfVar9 = *(float **)(*(long *)PTR_DAT_0675e318 + 0xb8);
              fVar22 = *pfVar9;
              fVar23 = pfVar9[1];
              fVar24 = pfVar9[2];
            }
            else {
              fVar22 = fVar22 / fVar25;
              fVar23 = fVar23 / fVar25;
              fVar24 = fVar24 / fVar25;
            }
            if (in_stack_00000028 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d60ae8();
            }
            fStack0000000000000058 =
                 (float)(**(code **)(in_stack_00000028 + 0x18))
                                  (-fVar22,-fVar23,-fVar24,*(undefined8 *)(in_stack_00000028 + 0x40)
                                   ,in_stack_00000258);
          }
          FUN_060741d8(0);
          fVar19 = ABS(fVar19 + fVar19 + -1.0);
          param_3 = (ulong)(uint)fVar19;
          fVar14 = ABS(fVar14 + fVar14 + -1.0);
          if (fVar19 <= fVar14) {
            fVar19 = fVar14;
          }
          if (*(long *)(unaff_x28 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d60ae8();
          }
          iVar3 = FUN_06018414(*(long *)(unaff_x28 + 0x50),0);
          if (iVar3 < 1) {
            fVar14 = 1.0;
          }
          else {
            if (*(long *)(unaff_x28 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d60ae8();
            }
            fVar14 = (float)FUN_06017d20(fVar19,*(long *)(unaff_x28 + 0x50),0);
          }
          fVar19 = (float)param_3;
          param_2 = (ulong)(uint)fStack0000000000000078;
          if (0.0 < fStack0000000000000078 * fVar14 * *(float *)(unaff_x28 + 0x2c)) {
            lVar5 = FUN_06066c74();
            fVar14 = (float)param_2;
            if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d60ae8();
            }
            fVar22 = (float)FUN_06078c44(lVar5,0);
            fVar25 = fVar14;
            fVar15 = fVar19;
            lVar5 = FUN_06066c74(unaff_x28,0);
            if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d60ae8();
            }
            fVar17 = (float)FUN_06078c44(lVar5,0);
            if (DAT_06b72248 == '\0') {
              FUN_02d6084c(PTR_DAT_0675e6d8);
              DAT_06b72248 = '\x01';
            }
            if (*(int *)(*(long *)PTR_DAT_0675e6d8 + 0xe4) == 0) {
              thunk_FUN_02dbd7b4();
            }
            fVar22 = fVar22 - fVar17;
            fVar14 = fVar14 - fVar25;
            fVar19 = SQRT((fVar19 - fVar15) * (fVar19 - fVar15) + fVar22 * fVar22 + fVar14 * fVar14)
            ;
            if (fVar19 <= in_stack_00000040._4_4_) {
              if (DAT_06b7224b == '\0') {
                FUN_02d6084c(PTR_DAT_0675e318);
                DAT_06b7224b = '\x01';
              }
              fVar22 = **(float **)(*(long *)PTR_DAT_0675e318 + 0xb8);
              fVar14 = (*(float **)(*(long *)PTR_DAT_0675e318 + 0xb8))[1];
            }
            else {
              fVar22 = fVar22 / fVar19;
              fVar14 = fVar14 / fVar19;
            }
            in_stack_000001e8 = unaff_x21[5];
            in_stack_000001e0 = unaff_x21[4];
            uVar16 = unaff_x21[7];
            uVar12 = unaff_x21[6];
            in_stack_000001c8 = unaff_x21[1];
            in_stack_000001c0 = *unaff_x21;
            in_stack_000001d8 = unaff_x21[3];
            in_stack_000001d0 = unaff_x21[2];
            fVar19 = *(float *)(unaff_x28 + 100);
            if (*(int *)(*unaff_x20 + 0xe4) == 0) {
              thunk_FUN_02dbd7b4();
            }
            in_stack_00000148 = in_stack_000001c8;
            in_stack_00000140 = in_stack_000001c0;
            in_stack_00000158 = in_stack_000001d8;
            in_stack_00000150 = in_stack_000001d0;
            in_stack_00000168 = in_stack_000001e8;
            in_stack_00000160 = in_stack_000001e0;
            in_stack_00000170 = uVar12;
            in_stack_00000178 = uVar16;
            FUN_05a3766c(fVar21 + fVar22 * fVar19,fVar13 + fVar14 * fVar19);
            if (bVar11) {
              fVar14 = (float)FUN_05a3924c(unaff_x28);
            }
            else {
              fVar14 = *(float *)(unaff_x28 + 0x5c);
            }
            in_stack_000001e8 = unaff_x21[5];
            uVar18 = unaff_x21[4];
            uVar16 = unaff_x21[7];
            uVar12 = unaff_x21[6];
            in_stack_000001c8 = unaff_x21[1];
            in_stack_000001c0 = *unaff_x21;
            in_stack_000001d8 = unaff_x21[3];
            uVar20 = unaff_x21[2];
            in_stack_000001d0 = uVar20;
            in_stack_000001e0 = uVar18;
            lVar5 = FUN_06066c74();
            fVar25 = (float)uVar20;
            fVar19 = (float)uVar18;
            if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d60ae8();
            }
            fVar15 = (float)FUN_0607916c(lVar5,0);
            if (*(int *)(*unaff_x20 + 0xe4) == 0) {
              thunk_FUN_02dbd7b4();
            }
            in_stack_00000108 = in_stack_000001c8;
            in_stack_00000100 = in_stack_000001c0;
            in_stack_00000118 = in_stack_000001d8;
            in_stack_00000110 = in_stack_000001d0;
            in_stack_00000128 = in_stack_000001e8;
            in_stack_00000120 = in_stack_000001e0;
            in_stack_00000130 = uVar12;
            in_stack_00000138 = uVar16;
            FUN_05a3766c(fVar21 + fVar14 * fVar15,fVar13 + fVar14 * fVar19,
                         fStack000000000000009c + fVar14 * fVar25);
            if (DAT_06b725ce == '\0') {
              FUN_02d6084c(PTR_DAT_0675e6d8);
              DAT_06b725ce = '\x01';
            }
            if (*(int *)(*(long *)PTR_DAT_0675e6d8 + 0xe4) == 0) {
              thunk_FUN_02dbd7b4();
            }
            if (*(char *)(unaff_x28 + 0x58) == '\0') {
LAB_05a3bd78:
              FUN_060921e0(in_stack_00000080,
                           *(undefined8 *)
                            Method_UnityEngine_UIElements_BaseField<Vector4>_get_labelElement__,0);
            }
            else {
              lVar5 = *unaff_x20;
              if (*(int *)(lVar5 + 0xe4) == 0) {
                thunk_FUN_02dbd7b4(lVar5);
                lVar5 = *unaff_x20;
              }
              lVar10 = *(long *)(lVar5 + 0xb8);
              lVar8 = *(long *)(lVar10 + 0x30);
              if (lVar8 == 0) goto LAB_05a3bd78;
              if (*(int *)(lVar5 + 0xe4) == 0) {
                thunk_FUN_02dbd7b4(lVar5);
                lVar10 = *(long *)(*unaff_x20 + 0xb8);
                lVar8 = *(long *)(lVar10 + 0x30);
              }
              uVar1 = *(undefined4 *)(lVar10 + 0x44);
              FUN_05a4812c(&stack0x000001c0,lVar8,0);
              in_stack_000000d8 = in_stack_000001c8;
              in_stack_000000d0 = in_stack_000001c0;
              in_stack_000000e8 = in_stack_000001d8;
              in_stack_000000e0 = in_stack_000001d0;
              in_stack_000000f0 = in_stack_000001e0;
              FUN_0609adc4(in_stack_00000080,uVar1,&stack0x000000d0,0);
              FUN_06091d30(in_stack_00000080,
                           *(undefined8 *)
                            Method_UnityEngine_UIElements_BaseField<Vector4>_get_labelElement__,0);
            }
            if (*(int *)(*unaff_x20 + 0xe4) == 0) {
              thunk_FUN_02dbd7b4();
            }
            uVar4 = FUN_05a35ef0();
            if ((uVar4 & 1) == 0) {
              FUN_06091d30(in_stack_00000080,
                           *(undefined8 *)
                            Method_UnityEngine_UIElements_BaseField<Vector3Int>_set_showMixedValue__
                           ,0);
            }
            else {
              FUN_060921e0(in_stack_00000080,
                           *(undefined8 *)
                            Method_UnityEngine_UIElements_BaseField<Vector3Int>_set_showMixedValue__
                           ,0);
            }
            lVar5 = *unaff_x20;
            if (*(int *)(lVar5 + 0xe4) == 0) {
              thunk_FUN_02dbd7b4();
              lVar5 = *unaff_x20;
            }
            FUN_06091af8((float)*(int *)(unaff_x22 + 0x10),0,0,0,in_stack_00000080,
                         *(undefined4 *)(*(long *)(lVar5 + 0xb8) + 0x48),0);
            if (*(long *)(unaff_x28 + 0x70) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d60ae8();
            }
            uVar1 = *(undefined4 *)(*(long *)(*unaff_x20 + 0xb8) + 0x40);
            uVar12 = FUN_05a652d8(*(long *)(unaff_x28 + 0x70),0);
            FUN_06088f24(&stack0x000001c0,uVar12,0);
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
            param_2 = (ulong)(uint)(fStack0000000000000078 * fStack0000000000000058);
            NEON_ucvtf(*(undefined4 *)(unaff_x28 + 0x60));
            param_3 = param_2;
            FUN_05a3a9b8(unaff_x29 + 0x18,in_stack_00000080,in_stack_00000258,in_stack_00000060,
                         *(undefined1 *)(unaff_x28 + 0x6c),0,0);
          }
        }
      }
    }
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
        uVar12 = *(undefined8 *)(in_stack_00000270 + 0x18);
        if (*(int *)(*unaff_x23 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        uVar4 = UnityEngine_Font__add_textureRebuilt(uVar12,0,0);
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
    } while ((uVar4 & 1) != 0);
    FUN_0335c1c4(unaff_x28,&stack0x00000258,
                 *(undefined8 *)Method_UnityEngine_UIElements_BaseField<Vector2>_get_visualInput__);
    in_stack_00000258 = 0;
    unaff_x25 = 0;
    param_4 = *unaff_x23;
    unaff_x22 = in_stack_00000270;
  } while( true );
}


