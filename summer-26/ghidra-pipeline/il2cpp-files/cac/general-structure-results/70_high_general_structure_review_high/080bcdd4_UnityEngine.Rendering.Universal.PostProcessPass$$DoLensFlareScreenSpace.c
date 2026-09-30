/*
FUNCTION_NAME: UnityEngine.Rendering.Universal.PostProcessPass$$DoLensFlareScreenSpace
ENTRY_POINT: 080bcdd4
PROGRAM: cac-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;ray_or_cast_sink_hits_6;telemetry_or_network_hits_2
*/


void UnityEngine_Rendering_Universal_PostProcessPass__DoLensFlareScreenSpace
               (undefined1 param_1 [16],ulong param_2,ulong param_3)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  float *pfVar12;
  int in_w9;
  long unaff_x19;
  long *unaff_x21;
  undefined8 *unaff_x22;
  uint uVar13;
  long unaff_x25;
  uint unaff_w28;
  undefined8 uVar14;
  long unaff_x29;
  long lVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined4 uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  long lVar23;
  float unaff_s8;
  float fVar24;
  float unaff_s9;
  float fVar25;
  float unaff_s10;
  undefined4 unaff_s11;
  undefined4 uVar26;
  undefined4 unaff_s12;
  float fVar27;
  float fVar28;
  float unaff_s13;
  float fVar29;
  float unaff_s14;
  float fVar30;
  float fStack000000000000002c;
  float fStack000000000000003c;
  undefined4 uStack0000000000000044;
  float fStack0000000000000064;
  uint uStack0000000000000074;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  long in_stack_00000150;
  undefined8 in_stack_00000158;
  undefined8 in_stack_00000160;
  undefined8 in_stack_00000168;
  undefined8 in_stack_00000170;
  undefined8 in_stack_00000178;
  undefined8 in_stack_00000188;
  undefined8 *in_stack_00000190;
  long in_stack_00000198;
  undefined8 in_stack_000001a0;
  undefined8 in_stack_000001a8;
  long in_stack_000001b0;
  byte in_stack_00000260;
  
  if (in_w9 == 0) {
    thunk_FUN_03f6fea8();
  }
  if (unaff_x19 != 0) {
    FUN_088245fc();
    if ((in_stack_00000260 & 1) == 0) {
      param_2 = 0;
      param_3 = 0;
      FUN_088240a0(0,0,0,0x3f800000);
    }
    lVar8 = *unaff_x21;
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
      lVar8 = *unaff_x21;
    }
    lVar8 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x10);
    if (lVar8 != 0) {
      uStack0000000000000044 = unaff_s11;
      fStack0000000000000064 = unaff_s9;
      uStack0000000000000074 = unaff_w28;
      FUN_056b1374(&stack0x00000140,lVar8,*(undefined8 *)PTR_DAT_091767b0);
      puVar5 = PTR_DAT_091767a0;
      puVar3 = PTR_DAT_0910bb08;
      in_stack_000001a8 = in_stack_00000148;
      in_stack_000001a0 = in_stack_00000140;
      in_stack_000001b0 = in_stack_00000150;
      in_stack_00000190 = &stack0x000001a0;
      in_stack_00000188 = 0;
      fStack000000000000003c = unaff_s13;
LAB_080bcec0:
      uVar9 = FUN_072070ec(&stack0x000001a0,*(undefined8 *)puVar5);
      lVar8 = in_stack_000001b0;
      if ((uVar9 & 1) != 0) {
        if (in_stack_000001b0 != 0) {
          uVar14 = *(undefined8 *)(in_stack_000001b0 + 0x18);
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            thunk_FUN_03f6fea8();
          }
          uVar9 = FUN_087f814c(uVar14,0,0);
          if ((uVar9 & 1) == 0) {
            lVar15 = *(long *)(lVar8 + 0x18);
            if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f1362c();
            }
            if (*(int *)(*unaff_x21 + 0xe4) == 0) {
              thunk_FUN_03f6fea8();
            }
            uVar9 = FUN_080bbdd8();
            fVar25 = (float)param_3;
            fVar24 = (float)param_2;
            if ((((uVar9 & 1) == 0) && (*(char *)(lVar15 + 0x58) != '\0')) &&
               (*(int *)(lVar15 + 0x60) != 0)) {
              in_stack_00000198 = 0;
              uVar9 = FUN_048a2f98(lVar15,&stack0x00000198,*(undefined8 *)PTR_DAT_091767b8);
              if ((uVar9 & 1) == 0) {
                in_stack_00000198 = 0;
              }
              lVar10 = in_stack_00000198;
              if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                thunk_FUN_03f6fea8();
              }
              uVar9 = FUN_087fdf64(lVar10,0,0);
              if ((uVar9 & 1) == 0) {
LAB_080bd004:
                lVar10 = FUN_087f1584(lVar15,0);
                if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f1362c();
                }
                fVar16 = (float)FUN_08808ca8(lVar10,0);
                uVar13 = 0;
              }
              else {
                if (in_stack_00000198 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f1362c();
                }
                iVar6 = FUN_087b5500(in_stack_00000198,0);
                if (iVar6 != 1) goto LAB_080bd004;
                if (in_stack_00000198 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f1362c();
                }
                lVar10 = FUN_087f1584(in_stack_00000198,0);
                if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f1362c();
                }
                fVar16 = (float)FUN_088095c8(lVar10,0);
                if (unaff_x25 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f1362c();
                }
                fVar17 = (float)FUN_0878bd84();
                uVar13 = 1;
                fVar16 = fVar17 * -fVar16;
                fVar24 = fVar17 * -fVar24;
                fVar25 = fVar17 * -fVar25;
              }
              in_stack_00000148 = unaff_x22[1];
              in_stack_00000140 = *unaff_x22;
              in_stack_00000158 = unaff_x22[3];
              in_stack_00000150 = unaff_x22[2];
              in_stack_00000168 = unaff_x22[5];
              in_stack_00000160 = unaff_x22[4];
              in_stack_00000178 = unaff_x22[7];
              in_stack_00000170 = unaff_x22[6];
              if (*(int *)(*unaff_x21 + 0xe4) == 0) {
                thunk_FUN_03f6fea8();
              }
              uVar9 = (ulong)(uint)fVar24;
              param_3 = (ulong)(uint)fVar25;
              fVar18 = (float)FUN_080bc124(fVar16);
              fVar17 = (float)uVar9;
              fVar28 = (float)param_3;
              param_2 = uVar9;
              if ((uStack0000000000000074 & 1) == 0) {
LAB_080bd110:
                if (fVar28 < 0.0) goto LAB_080bcec0;
              }
              else {
                FUN_0878e360(0);
                if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                  thunk_FUN_03f6fea8();
                }
                uVar11 = FUN_087f814c();
                if ((uVar11 & 1) == 0) goto LAB_080bd110;
                if (unaff_x25 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f1362c();
                }
                uVar19 = FUN_0878bf0c();
                if (*(int *)(*unaff_x21 + 0xe4) == 0) {
                  thunk_FUN_03f6fea8();
                }
                param_2 = uVar9 & 0xffffffff;
                param_3 = (ulong)(uint)unaff_s14;
                fVar18 = (float)FUN_080bdb4c(fVar18,param_2,param_3,fStack000000000000003c,uVar19,
                                             uStack0000000000000044,unaff_s12);
                fVar17 = (float)param_2;
              }
              fVar28 = (float)param_2;
              if ((*(char *)(lVar15 + 0x6c) != '\0') ||
                 (((0.0 <= fVar18 && (fVar18 <= 1.0)) && ((0.0 <= fVar17 && (fVar17 <= 1.0)))))) {
                if (unaff_x25 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f1362c();
                }
                lVar10 = FUN_087f1584();
                if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f1362c();
                }
                fVar20 = (float)FUN_088095c8(lVar10,0);
                fVar29 = fVar16 - unaff_s10;
                fVar30 = fVar24 - fStack0000000000000064;
                fVar27 = fVar25 - unaff_s8;
                fVar21 = (float)param_3;
                fVar22 = fVar27 * fVar21;
                param_2 = (ulong)(uint)fVar22;
                if (0.0 <= fVar22 + fVar29 * fVar20 + fVar30 * fVar28) {
                  if (DAT_09684cbd == '\0') {
                    FUN_03f13384(PTR_DAT_0910c388);
                    DAT_09684cbd = '\x01';
                  }
                  if (*(int *)(*(long *)PTR_DAT_0910c388 + 0xe4) == 0) {
                    thunk_FUN_03f6fea8();
                  }
                  if (uVar13 == 0) {
                    if (*(long *)(lVar15 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_03f1362c();
                    }
                    fVar20 = *(float *)(lVar15 + 0x30);
                    fVar28 = *(float *)(lVar15 + 0x34);
                    iVar6 = UnityEngine_Physics__Raycast(*(long *)(lVar15 + 0x38),0);
                    fVar27 = fVar27 * fVar27;
                    fVar22 = SQRT(fVar27 + fVar29 * fVar29 + fVar30 * fVar30);
                    if (iVar6 < 1) {
                      fStack000000000000002c = 1.0;
                    }
                    else {
                      if (*(long *)(lVar15 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_03f1362c();
                      }
                      fStack000000000000002c =
                           (float)FUN_0878688c(fVar22 / fVar20,*(long *)(lVar15 + 0x38),0);
                    }
                    if (*(long *)(lVar15 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_03f1362c();
                    }
                    iVar6 = UnityEngine_Physics__Raycast(*(long *)(lVar15 + 0x40),0);
                    if (0 < iVar6) {
                      if (*(long *)(lVar15 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_03f1362c();
                      }
                      FUN_0878688c(fVar22 / fVar28,*(long *)(lVar15 + 0x40),0);
                    }
                    lVar10 = FUN_087f1584();
                    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_03f1362c();
                    }
                    fVar29 = (float)FUN_08808ca8(lVar10,0);
                    fVar28 = fVar27;
                    fVar20 = fVar21;
                    lVar10 = FUN_087f1584(lVar15,0);
                    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_03f1362c();
                    }
                    fVar22 = (float)FUN_08808ca8(lVar10,0);
                    if (DAT_096847b4 == '\0') {
                      FUN_03f13384(PTR_DAT_0910c388);
                      DAT_096847b4 = '\x01';
                    }
                    if (*(int *)(*(long *)PTR_DAT_0910c388 + 0xe4) == 0) {
                      thunk_FUN_03f6fea8();
                    }
                    fVar29 = fVar29 - fVar22;
                    fVar27 = fVar27 - fVar28;
                    fVar21 = fVar21 - fVar20;
                    fVar28 = SQRT(fVar21 * fVar21 + fVar29 * fVar29 + fVar27 * fVar27);
                    if (fVar28 <= DAT_01928e98) {
                      if (DAT_096847b5 == '\0') {
                        FUN_03f13384(PTR_DAT_0910c4c8);
                        DAT_096847b5 = '\x01';
                      }
                      pfVar12 = *(float **)(*(long *)PTR_DAT_0910c4c8 + 0xb8);
                      fVar29 = *pfVar12;
                      fVar22 = pfVar12[1];
                      fVar21 = pfVar12[2];
                    }
                    else {
                      fVar29 = fVar29 / fVar28;
                      fVar22 = fVar27 / fVar28;
                      fVar21 = fVar21 / fVar28;
                    }
                  }
                  else {
                    lVar10 = FUN_087f1584(lVar15,0);
                    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_03f1362c();
                    }
                    fVar29 = (float)FUN_088095c8(lVar10,0);
                    fStack000000000000002c = 1.0;
                  }
                  in_stack_00000148 = unaff_x22[1];
                  in_stack_00000140 = *unaff_x22;
                  in_stack_00000158 = unaff_x22[3];
                  in_stack_00000150 = unaff_x22[2];
                  fVar28 = *(float *)(lVar15 + 100);
                  in_stack_00000168 = unaff_x22[5];
                  in_stack_00000160 = unaff_x22[4];
                  in_stack_00000178 = unaff_x22[7];
                  in_stack_00000170 = unaff_x22[6];
                  if (*(int *)(*unaff_x21 + 0xe4) == 0) {
                    thunk_FUN_03f6fea8();
                  }
                  fVar20 = fVar25 + fVar21 * fVar28;
                  FUN_080bc124(fVar16 + fVar29 * fVar28,fVar24 + fVar22 * fVar28);
                  if (uVar13 == 0) {
                    fVar28 = *(float *)(lVar15 + 0x5c);
                  }
                  else {
                    fVar28 = (float)FUN_080bdcb8(lVar15);
                  }
                  in_stack_00000148 = unaff_x22[1];
                  in_stack_00000140 = *unaff_x22;
                  in_stack_00000158 = unaff_x22[3];
                  lVar23 = unaff_x22[2];
                  in_stack_00000168 = unaff_x22[5];
                  in_stack_00000160 = unaff_x22[4];
                  in_stack_00000178 = unaff_x22[7];
                  uVar14 = unaff_x22[6];
                  in_stack_00000150 = lVar23;
                  in_stack_00000170 = uVar14;
                  lVar10 = FUN_087f1584();
                  fVar27 = (float)uVar14;
                  fVar22 = (float)lVar23;
                  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f1362c();
                  }
                  fVar21 = (float)UnityEngine_UI_FontData__get_horizontalOverflow(lVar10,0);
                  if (*(int *)(*unaff_x21 + 0xe4) == 0) {
                    thunk_FUN_03f6fea8();
                  }
                  fVar24 = fVar24 + fVar28 * fVar22;
                  fVar25 = (float)FUN_080bc124(fVar16 + fVar28 * fVar21,fVar24,
                                               fVar25 + fVar28 * fVar27);
                  if (DAT_096847b2 == '\0') {
                    FUN_03f13384(PTR_DAT_0910c388);
                    DAT_096847b2 = '\x01';
                  }
                  if (*(int *)(*(long *)PTR_DAT_0910c388 + 0xe4) == 0) {
                    thunk_FUN_03f6fea8();
                  }
                  uVar19 = NEON_ucvtf(*(undefined4 *)(lVar15 + 0x60));
                  FUN_08824774(SQRT((fVar25 - fVar18) * (fVar25 - fVar18) +
                                    (fVar24 - fVar17) * (fVar24 - fVar17)),uVar19,fVar20,
                               unaff_s13 / unaff_s14);
                  FUN_080bc63c();
                  FUN_088249b8();
                  uVar7 = FUN_08803b78(0);
                  fVar28 = fVar18 + fVar18 + -1.0;
                  fVar16 = fVar17 + fVar17 + -1.0;
                  fVar25 = ABS(fVar28);
                  param_3 = (ulong)(uint)fVar25;
                  fVar24 = fVar16;
                  if ((uVar13 & (uVar7 ^ 1)) == 0) {
                    fVar24 = -fVar16;
                  }
                  if (fVar25 <= ABS(fVar16)) {
                    fVar25 = ABS(fVar16);
                  }
                  if (*(long *)(lVar15 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f1362c();
                  }
                  iVar6 = UnityEngine_Physics__Raycast(*(long *)(lVar15 + 0x50),0);
                  if (iVar6 < 1) {
                    fVar25 = 1.0;
                  }
                  else {
                    if (*(long *)(lVar15 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_03f1362c();
                    }
                    fVar25 = (float)FUN_0878688c(fVar25,*(long *)(lVar15 + 0x50),0);
                  }
                  param_2 = (ulong)(uint)fStack000000000000002c;
                  if (0.0 < fStack000000000000002c * fVar25 * *(float *)(lVar15 + 0x2c)) {
                    if (*(int *)(*unaff_x21 + 0xe4) == 0) {
                      thunk_FUN_03f6fea8();
                    }
                    uVar19 = 0xbf800000;
                    if (*(char *)(lVar15 + 0x6c) != '\0') {
                      uVar19 = 0x3f800000;
                    }
                    FUN_08824774(uVar19,DAT_01928df4,DAT_01928a34,DAT_01928b30);
                    puVar4 = PTR_DAT_0910c3e8;
                    if (*(int *)(*unaff_x21 + 0xe4) == 0) {
                      thunk_FUN_03f6fea8();
                    }
                    if (DAT_0968516a == '\0') {
                      FUN_03f13384(puVar4);
                      DAT_0968516a = '\x01';
                    }
                    uVar19 = *(undefined4 *)(*(long *)(*(long *)puVar4 + 0xb8) + 8);
                    uVar26 = *(undefined4 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0xc);
                    if (DAT_09684878 == '\0') {
                      FUN_03f13384(puVar4);
                      DAT_09684878 = '\x01';
                    }
                    FUN_080bbefc(fVar28,fVar24,uVar19,uVar26,
                                 (fVar24 - fVar24) * 0.0 - (fVar28 - fVar28),
                                 -(fVar24 - fVar24) - (fVar28 - fVar28) * 0.0,unaff_s14 / unaff_s13,
                                 0x3f800000,0);
                    FUN_08824774();
                    FUN_08824774(fVar28,fVar24,0,0);
                    param_2 = 0;
                    iVar6 = *(int *)(lVar8 + 0x10);
                    if ((in_stack_00000260 & 1) != 0) {
                      lVar8 = *unaff_x21;
                      if (*(int *)(lVar8 + 0xe4) == 0) {
                        thunk_FUN_03f6fea8();
                        lVar8 = *unaff_x21;
                      }
                      param_2 = (ulong)(uint)(float)(*(int *)(*(long *)(lVar8 + 0xb8) + 0x28) +
                                                    *(int *)(*(long *)(lVar8 + 0xb8) + 0x38));
                    }
                    param_3 = 0x3f800000;
                    FUN_08823878((float)iVar6,param_2,0x3f800000,0x3f800000);
                    if (unaff_x29 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_03f1362c();
                    }
                    UnityEngine_Bindings_NativeTypeAttribute__set_IntermediateScriptingStructName
                              (unaff_x29,*(undefined8 *)PTR_DAT_091767c0,0);
                    if (*(int *)(*(long *)PTR_DAT_09110270 + 0xe4) == 0) {
                      thunk_FUN_03f6fea8();
                    }
                    FUN_080db654();
                  }
                }
              }
            }
          }
        }
        goto LAB_080bcec0;
      }
      FUN_072070e8(&stack0x000001a0,*(undefined8 *)PTR_DAT_09176798);
      if ((in_stack_00000260 & 1) != 0) {
        if (*(int *)(*unaff_x21 + 0xe4) == 0) {
          thunk_FUN_03f6fea8();
        }
        if (*(int *)(*(long *)PTR_DAT_09110220 + 0xe4) == 0) {
          thunk_FUN_03f6fea8(*(long *)PTR_DAT_09110220);
        }
        FUN_080e1400();
        lVar8 = *(long *)(*unaff_x21 + 0xb8);
        if (*(long *)(lVar8 + 0x10) == 0) goto LAB_080bd930;
        iVar6 = *(int *)(*(long *)(lVar8 + 0x10) + 0x18);
        FUN_08823878((float)iVar6,0,(float)(*(int *)(lVar8 + 0x20) - iVar6),
                     (float)(*(int *)(lVar8 + 0x24) + *(int *)(lVar8 + 0x28)));
        FUN_088240a0(0,0,0,0x3f800000);
      }
      lVar8 = *unaff_x21;
      if (*(int *)(lVar8 + 0xe4) == 0) {
        thunk_FUN_03f6fea8();
        lVar8 = *unaff_x21;
      }
      lVar8 = *(long *)(lVar8 + 0xb8);
      iVar1 = *(int *)(lVar8 + 0x24);
      iVar6 = *(int *)(lVar8 + 0x38) + 1;
      iVar2 = 0;
      if (iVar1 != 0) {
        iVar2 = iVar6 / iVar1;
      }
      *(int *)(lVar8 + 0x38) = iVar6 - iVar2 * iVar1;
      FUN_0806681c();
      return;
    }
  }
LAB_080bd930:
                    /* WARNING: Subroutine does not return */
  FUN_03f1362c();
}


