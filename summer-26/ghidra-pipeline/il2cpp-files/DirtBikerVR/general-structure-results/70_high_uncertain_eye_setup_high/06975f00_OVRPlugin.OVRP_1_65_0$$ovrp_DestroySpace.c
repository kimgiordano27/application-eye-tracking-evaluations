/*
FUNCTION_NAME: OVRPlugin.OVRP_1_65_0$$ovrp_DestroySpace
ENTRY_POINT: 06975f00
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_20;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
OVRPlugin_OVRP_1_65_0__ovrp_DestroySpace
          (undefined1 param_1 [16],undefined1 param_2 [16],float param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  uint uVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  uint uVar12;
  float *pfVar13;
  long lVar14;
  long unaff_x19;
  long unaff_x20;
  int iVar15;
  double *pdVar16;
  double *unaff_x22;
  long lVar17;
  ulong uVar18;
  uint uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  double dVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float unaff_s8;
  float fVar38;
  double dVar39;
  float unaff_s9;
  float unaff_s10;
  float fVar40;
  float fVar41;
  float unaff_s14;
  float fVar42;
  float fVar43;
  float fStack0000000000000014;
  float fStack0000000000000044;
  float fStack0000000000000048;
  undefined4 uStack000000000000004c;
  undefined4 in_stack_00000050;
  float fStack000000000000005c;
  float fStack0000000000000060;
  float fStack0000000000000064;
  float in_stack_00000068;
  double dStack0000000000000070;
  double dStack0000000000000078;
  double dStack0000000000000080;
  undefined4 uStack0000000000000088;
  float fStack000000000000008c;
  undefined4 uStack0000000000000090;
  undefined8 uStack0000000000000094;
  double dStack00000000000000a0;
  double dStack00000000000000a8;
  double dStack00000000000000b0;
  undefined4 uStack00000000000000b8;
  float fStack00000000000000bc;
  undefined4 uStack00000000000000c0;
  undefined8 uStack00000000000000c4;
  double in_stack_000000d0;
  double in_stack_000000d8;
  double in_stack_000000e0;
  undefined4 uStack00000000000000e8;
  float fStack00000000000000ec;
  undefined4 uStack00000000000000f0;
  undefined8 uStack00000000000000f4;
  double in_stack_00000100;
  double in_stack_00000108;
  double in_stack_00000110;
  undefined4 uStack0000000000000118;
  float fStack000000000000011c;
  undefined4 uStack0000000000000120;
  undefined8 uStack0000000000000124;
  float in_stack_000001d0;
  
  *(undefined1 *)(unaff_x19 + 0x120) = 1;
  uStack00000000000000c4 = 0;
  uStack00000000000000c0 = 0;
  dStack00000000000000a8 = 0.0;
  dStack00000000000000a0 = 0.0;
  uStack00000000000000b8 = 0;
  fStack00000000000000bc = 0.0;
  dStack00000000000000b0 = 0.0;
  uStack0000000000000094 = 0;
  uStack0000000000000090 = 0;
  dStack0000000000000078 = 0.0;
  dStack0000000000000070 = 0.0;
  uStack0000000000000088 = 0;
  fStack000000000000008c = 0.0;
  dStack0000000000000080 = 0.0;
  if (DAT_08974d8c == '\0') {
    FUN_03a8a718(PTR_DAT_08486c60);
    DAT_08974d8c = '\x01';
  }
  fVar40 = in_stack_000001d0;
  puVar2 = PTR_DAT_08486c60;
  if (*(int *)(*(long *)PTR_DAT_08486c60 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  fVar40 = fVar40 * 0.5;
  fVar20 = SQRT(unaff_s8 * unaff_s8 + unaff_s10 * unaff_s10 + unaff_s9 * unaff_s9);
  if (fVar20 <= DAT_015c5ce0) {
    if (DAT_08974d8f == '\0') {
      FUN_03a8a718(PTR_DAT_084868a0);
      DAT_08974d8f = '\x01';
    }
    pfVar13 = *(float **)(*(long *)PTR_DAT_084868a0 + 0xb8);
    fVar29 = *pfVar13;
    fStack0000000000000044 = pfVar13[1];
    fVar20 = pfVar13[2];
    fStack0000000000000048 = fVar29;
  }
  else {
    param_3 = unaff_s10 / fVar20;
    fVar29 = unaff_s9 / fVar20;
    fVar20 = unaff_s8 / fVar20;
    fStack0000000000000044 = fVar29;
    fStack0000000000000048 = param_3;
  }
  fStack000000000000005c = DAT_015c5994;
  if (fVar40 <= DAT_015c5994) {
    uVar12 = 1;
    goto LAB_069760b4;
  }
  if (DAT_08975452 == '\0') {
    FUN_03a8a718(PTR_DAT_08486c60);
    DAT_08975452 = '\x01';
  }
  fVar29 = unaff_s14 / fVar40 + unaff_s14 / fVar40;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  dVar39 = (double)fVar29;
  dVar28 = modf(dVar39,&stack0x00000100);
  if (0.0 <= fVar29) {
    if (dVar28 == 0.5) {
      dVar28 = 1.0;
      goto LAB_06976074;
    }
    dVar39 = (double)(long)(dVar39 + 0.5);
  }
  else if (dVar28 == -0.5) {
    dVar28 = -1.0;
LAB_06976074:
    dVar39 = in_stack_00000100;
    if (((long)in_stack_00000100 & 1U) != 0) {
      dVar39 = in_stack_00000100 + dVar28;
    }
  }
  else {
    dVar39 = (double)(long)(dVar39 + -0.5);
  }
  fVar29 = 0.0;
  uVar12 = 0x80000000;
  if (dVar39 != INFINITY) {
    uVar12 = (int)dVar39;
  }
LAB_069760b4:
  if ((int)uVar12 < 4) {
    uVar12 = 3;
  }
  if (*(long *)(unaff_x20 + 0x58) != 0) {
    fVar21 = (float)FUN_07cac824(*(long *)(unaff_x20 + 0x58),0);
    if (*(long *)(unaff_x20 + 0x58) != 0) {
      fVar27 = param_3;
      fVar30 = fVar29;
      fVar22 = (float)FUN_07cac924(*(long *)(unaff_x20 + 0x58),0);
      plVar7 = *(long **)(unaff_x20 + 0x50);
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 0x1e8))(plVar7,*(undefined8 *)(*plVar7 + 0x1f0));
        fVar23 = (float)FUN_07c8b18c(0);
        if (*(long *)(unaff_x20 + 0x58) != 0) {
          fVar31 = fVar21;
          fVar34 = fVar29;
          fVar24 = (float)FUN_07cac7a8(*(long *)(unaff_x20 + 0x58),0);
          fVar25 = (float)FUN_07c8b18c(180.0 / (float)(uVar12 & 0x7ffffffe),fVar24,fVar31,fVar34,0);
          if (DAT_08974d8a == '\0') {
            FUN_03a8a718(PTR_DAT_08486860);
            DAT_08974d8a = '\x01';
          }
          puVar2 = PTR_DAT_084b7448;
          lVar9 = *(long *)(unaff_x20 + 0x70);
          if (lVar9 != 0) {
            uVar19 = 0;
            pfVar13 = *(float **)(*(long *)PTR_DAT_08486860 + 0xb8);
            fVar43 = *pfVar13;
            fVar42 = pfVar13[1];
            fVar41 = pfVar13[2];
            fVar38 = pfVar13[3];
            *(undefined4 *)(lVar9 + 0x18) = 0;
            *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
            lVar9 = 0x60;
            fStack0000000000000014 = unaff_s14;
            if (fStack000000000000005c < fVar40) {
              lVar9 = 0x68;
            }
            do {
              fVar32 = (fVar29 * fVar43 + param_3 * fVar42 + fVar21 * fVar38) - fVar23 * fVar41;
              fVar33 = (fVar23 * fVar42 + param_3 * fVar41 + fVar29 * fVar38) - fVar21 * fVar43;
              fVar26 = (float)FUN_07c8b548((fVar21 * fVar41 + param_3 * fVar43 + fVar23 * fVar38) -
                                           fVar29 * fVar42,fVar32,fVar33,
                                           ((param_3 * fVar38 - fVar23 * fVar43) - fVar21 * fVar42)
                                           - fVar29 * fVar41,fVar22 * unaff_s14,fVar30 * unaff_s14,
                                           fVar27 * unaff_s14,0);
              lVar17 = *(long *)(unaff_x20 + lVar9);
              uVar5 = FUN_07c9da10(in_stack_00000050,0);
              lVar10 = *(long *)PTR_DAT_08486c50;
              if (fStack000000000000005c < fVar40) {
                if (*(int *)(lVar10 + 0xe4) == 0) {
                  thunk_FUN_03ae8be4(lVar10);
                }
                uVar6 = FUN_07d2b360(fStack0000000000000060 + fVar26,fStack0000000000000064 + fVar32
                                     ,in_stack_00000068 + fVar33,fVar40,fStack0000000000000048,
                                     fStack0000000000000044,fVar20,uStack000000000000004c,lVar17,
                                     uVar5,1,0);
              }
              else {
                if (*(int *)(lVar10 + 0xe4) == 0) {
                  thunk_FUN_03ae8be4(lVar10);
                }
                uVar6 = FUN_07d2a554(fStack0000000000000060 + fVar26,fStack0000000000000064 + fVar32
                                     ,in_stack_00000068 + fVar33,fStack0000000000000048,
                                     fStack0000000000000044,fVar20,uStack000000000000004c,lVar17,
                                     uVar5,1,0);
              }
              if (0 < (int)uVar6) {
                if (lVar17 == 0) goto LAB_06976640;
                uVar18 = 0;
                pdVar16 = (double *)(lVar17 + 0x20);
                do {
                  if (*(uint *)(lVar17 + 0x18) <= uVar18) {
                    /* WARNING: Subroutine does not return */
                    FUN_03a8a9c8();
                  }
                  lVar10 = *(long *)(unaff_x20 + 0x70);
                  if (lVar10 == 0) goto LAB_06976640;
                  in_stack_000000d8 = pdVar16[1];
                  in_stack_000000d0 = *pdVar16;
                  in_stack_000000e0 = pdVar16[2];
                  uStack00000000000000f4 = *(undefined8 *)((long)pdVar16 + 0x24);
                  uVar8 = *(undefined8 *)((long)pdVar16 + 0x1c);
                  lVar11 = *(long *)(lVar10 + 0x10);
                  lVar14 = *(long *)puVar2;
                  uStack00000000000000e8 = SUB84(pdVar16[3],0);
                  fStack00000000000000ec = (float)uVar8;
                  uStack00000000000000f0 = (undefined4)((ulong)uVar8 >> 0x20);
                  *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
                  if (lVar11 == 0) goto LAB_06976640;
                  uVar1 = *(uint *)(lVar10 + 0x18);
                  if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                    lVar11 = lVar11 + (long)(int)uVar1 * 0x2c;
                    *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                    *(double *)(lVar11 + 0x28) = in_stack_000000d8;
                    *(double *)(lVar11 + 0x20) = in_stack_000000d0;
                    *(ulong *)(lVar11 + 0x38) =
                         CONCAT44(fStack00000000000000ec,uStack00000000000000e8);
                    *(double *)(lVar11 + 0x30) = in_stack_000000e0;
                    *(undefined8 *)(lVar11 + 0x44) = uStack00000000000000f4;
                    *(undefined8 *)(lVar11 + 0x3c) = uVar8;
                  }
                  else {
                    uStack0000000000000118 = uStack00000000000000e8;
                    in_stack_00000100 = in_stack_000000d0;
                    in_stack_00000108 = in_stack_000000d8;
                    in_stack_00000110 = in_stack_000000e0;
                    fStack000000000000011c = fStack00000000000000ec;
                    uStack0000000000000120 = uStack00000000000000f0;
                    uStack0000000000000124 = uStack00000000000000f4;
                    FUN_04e28380(lVar10,&stack0x00000100,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70))
                    ;
                  }
                  uVar18 = uVar18 + 1;
                  pdVar16 = (double *)((long)pdVar16 + 0x2c);
                } while (uVar6 != uVar18);
              }
              puVar4 = PTR_DAT_084b7460;
              puVar3 = PTR_DAT_08497e38;
              uVar19 = uVar19 + 1;
              fVar35 = fVar25 * fVar43;
              fVar32 = fVar24 * fVar43;
              fVar36 = fVar24 * fVar42;
              fVar26 = fVar31 * fVar43;
              fVar33 = fVar25 * fVar42;
              fVar37 = fVar31 * fVar41;
              fVar43 = (fVar31 * fVar42 + fVar34 * fVar43 + fVar25 * fVar38) - fVar24 * fVar41;
              fVar42 = (fVar25 * fVar41 + fVar34 * fVar42 + fVar24 * fVar38) - fVar26;
              fVar41 = (fVar32 + fVar34 * fVar41 + fVar31 * fVar38) - fVar33;
              fVar38 = ((fVar34 * fVar38 - fVar35) - fVar36) - fVar37;
            } while (uVar19 != (uVar12 | 1));
            lVar9 = *(long *)(unaff_x20 + 0x70);
            if (lVar9 != 0) {
              if (*(int *)(lVar9 + 0x18) < 1) {
                return 0;
              }
              fVar20 = 3.4028235e+38;
              iVar15 = 0;
              uStack00000000000000c4 = 0;
              uStack00000000000000c0 = 0;
              dStack00000000000000a8 = 0.0;
              dStack00000000000000a0 = 0.0;
              uStack00000000000000b8 = 0;
              fStack00000000000000bc = 0.0;
              dStack00000000000000b0 = 0.0;
              do {
                if (*(int *)(lVar9 + 0x18) <= iVar15) {
                  if (fVar20 == 3.4028235e+38) {
                    return 0;
                  }
                  unaff_x22[1] = dStack00000000000000a8;
                  *unaff_x22 = dStack00000000000000a0;
                  unaff_x22[3] = (double)CONCAT44(fStack00000000000000bc,uStack00000000000000b8);
                  unaff_x22[2] = dStack00000000000000b0;
                  *(undefined8 *)((long)unaff_x22 + 0x24) = uStack00000000000000c4;
                  *(ulong *)((long)unaff_x22 + 0x1c) =
                       CONCAT44(uStack00000000000000c0,fStack00000000000000bc);
                  return 1;
                }
                FUN_04e28000(&stack0x00000100,lVar9,iVar15,*(undefined8 *)puVar4);
                dStack0000000000000078 = in_stack_00000108;
                dStack0000000000000070 = in_stack_00000100;
                uStack0000000000000088 = uStack0000000000000118;
                dStack0000000000000080 = in_stack_00000110;
                uStack0000000000000094 = uStack0000000000000124;
                fStack000000000000008c = fStack000000000000011c;
                uStack0000000000000090 = uStack0000000000000120;
                if (*(long *)(unaff_x20 + 0x50) == 0) break;
                lVar9 = *(long *)(*(long *)(unaff_x20 + 0x50) + 0xd0);
                dVar28 = in_stack_00000110;
                fVar29 = fStack000000000000011c;
                uVar8 = FUN_07d2fce4(&stack0x00000070,0);
                fVar21 = SUB84(dVar28,0);
                if (lVar9 == 0) break;
                uVar18 = FUN_049d96b4(lVar9,uVar8,*(undefined8 *)puVar3);
                if ((uVar18 & 1) == 0) {
                  fVar27 = (float)FUN_07d2fd90(&stack0x00000070,0);
                  if (*(long *)(unaff_x20 + 0x58) == 0) break;
                  fVar29 = fVar29 - in_stack_00000068;
                  fVar21 = (float)FUN_07cadd74(fVar27 - fStack0000000000000060,
                                               fVar21 - fStack0000000000000064,
                                               *(long *)(unaff_x20 + 0x58),0);
                  if ((((-fVar40 <= fVar21) && (fVar21 <= fVar40)) &&
                      (fVar29 <= fStack0000000000000014)) &&
                     ((-fStack0000000000000014 <= fVar29 &&
                      (fVar29 = (float)FUN_07d2fdc0(&stack0x00000070,0), fVar29 < fVar20)))) {
                    fVar20 = (float)FUN_07d2fdc0(&stack0x00000070,0);
                    dStack00000000000000a8 = dStack0000000000000078;
                    dStack00000000000000a0 = dStack0000000000000070;
                    dStack00000000000000b0 = dStack0000000000000080;
                    uStack00000000000000c4 = uStack0000000000000094;
                    uStack00000000000000b8 = uStack0000000000000088;
                    fStack00000000000000bc = fStack000000000000008c;
                    uStack00000000000000c0 = uStack0000000000000090;
                  }
                }
                lVar9 = *(long *)(unaff_x20 + 0x70);
                iVar15 = iVar15 + 1;
              } while (lVar9 != 0);
            }
          }
        }
      }
    }
  }
LAB_06976640:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


