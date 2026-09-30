/*
FUNCTION_NAME: OVRPlugin.OVRP_1_66_0$$ovrp_GetInsightPassthroughInitializationState
ENTRY_POINT: 06976004
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_19;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
OVRPlugin_OVRP_1_66_0__ovrp_GetInsightPassthroughInitializationState
          (undefined1 param_1 [16],undefined1 param_2 [16],float param_3)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  uint uVar7;
  long *plVar8;
  undefined8 uVar9;
  int in_w8;
  long lVar10;
  long lVar11;
  long lVar12;
  float *pfVar13;
  long lVar14;
  long *unaff_x19;
  long unaff_x20;
  int iVar15;
  long unaff_x21;
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
  float fVar28;
  double dVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float unaff_s8;
  float fVar37;
  double dVar38;
  float unaff_s11;
  float fVar39;
  float unaff_s14;
  float fVar40;
  float fVar41;
  float fStack0000000000000014;
  undefined4 uStack0000000000000040;
  undefined4 uStack0000000000000044;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  undefined4 in_stack_00000050;
  undefined8 in_stack_00000058;
  float fStack0000000000000060;
  float fStack0000000000000064;
  float in_stack_00000068;
  float fStack000000000000006c;
  double in_stack_00000070;
  double in_stack_00000078;
  double in_stack_00000080;
  undefined4 uStack0000000000000088;
  float fStack000000000000008c;
  undefined4 uStack0000000000000090;
  undefined8 uStack0000000000000094;
  double in_stack_000000a0;
  double in_stack_000000a8;
  double in_stack_000000b0;
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
  
  if (in_w8 == 0) {
    FUN_03a8a718(PTR_DAT_08486c60);
    *(undefined1 *)(unaff_x21 + 0x452) = 1;
  }
  if (*(int *)(*unaff_x19 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  dVar38 = (double)(unaff_s8 + unaff_s8);
  dVar29 = modf(dVar38,&stack0x00000100);
  if (0.0 <= unaff_s8 + unaff_s8) {
                    /* try { // try from 06976060 to 06a7608b has its CatchHandler @ 06976808 */
    if (dVar29 != 0.5) {
      dVar29 = (double)(long)(dVar38 + 0.5);
      goto LAB_0697609c;
    }
    dVar38 = 1.0;
  }
  else {
    if (dVar29 != -0.5) {
      dVar29 = (double)(long)(dVar38 + -0.5);
      goto LAB_0697609c;
    }
    dVar38 = -1.0;
  }
  dVar29 = in_stack_00000100;
  if (((long)in_stack_00000100 & 1U) != 0) {
    dVar29 = in_stack_00000100 + dVar38;
  }
LAB_0697609c:
  fVar28 = 0.0;
  uVar1 = 0x80000000;
  if (dVar29 != INFINITY) {
    uVar1 = (int)dVar29;
  }
  if ((int)uVar1 < 4) {
    uVar1 = 3;
  }
  if (*(long *)(unaff_x20 + 0x58) != 0) {
    fVar20 = (float)FUN_07cac824(*(long *)(unaff_x20 + 0x58),0);
    if (*(long *)(unaff_x20 + 0x58) != 0) {
      fVar27 = param_3;
      fVar26 = fVar28;
      fVar21 = (float)FUN_07cac924(*(long *)(unaff_x20 + 0x58),0);
      plVar8 = *(long **)(unaff_x20 + 0x50);
      if (plVar8 != (long *)0x0) {
        (**(code **)(*plVar8 + 0x1e8))(plVar8,*(undefined8 *)(*plVar8 + 0x1f0));
        fVar22 = (float)FUN_07c8b18c(0);
        if (*(long *)(unaff_x20 + 0x58) != 0) {
          fVar30 = fVar20;
          fVar33 = fVar28;
          fVar23 = (float)FUN_07cac7a8(*(long *)(unaff_x20 + 0x58),0);
          fVar24 = (float)FUN_07c8b18c(180.0 / (float)(uVar1 & 0x7ffffffe),fVar23,fVar30,fVar33,0);
          if (DAT_08974d8a == '\0') {
            FUN_03a8a718(PTR_DAT_08486860);
            DAT_08974d8a = '\x01';
          }
          puVar4 = PTR_DAT_084b7448;
          lVar10 = *(long *)(unaff_x20 + 0x70);
          if (lVar10 != 0) {
            uVar19 = 0;
            pfVar13 = *(float **)(*(long *)PTR_DAT_08486860 + 0xb8);
            fVar41 = *pfVar13;
            fVar40 = pfVar13[1];
            fVar39 = pfVar13[2];
            fVar37 = pfVar13[3];
            *(undefined4 *)(lVar10 + 0x18) = 0;
            *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
            lVar10 = 0x60;
            fStack0000000000000014 = unaff_s14;
            fStack000000000000006c = unaff_s11;
            if (in_stack_00000058._4_4_ < unaff_s11) {
              lVar10 = 0x68;
            }
            do {
              fVar31 = (fVar28 * fVar41 + param_3 * fVar40 + fVar20 * fVar37) - fVar22 * fVar39;
              fVar32 = (fVar22 * fVar40 + param_3 * fVar39 + fVar28 * fVar37) - fVar20 * fVar41;
              fVar25 = (float)FUN_07c8b548((fVar20 * fVar39 + param_3 * fVar41 + fVar22 * fVar37) -
                                           fVar28 * fVar40,fVar31,fVar32,
                                           ((param_3 * fVar37 - fVar22 * fVar41) - fVar20 * fVar40)
                                           - fVar28 * fVar39,fVar21 * unaff_s14,fVar26 * unaff_s14,
                                           fVar27 * unaff_s14,0);
              lVar17 = *(long *)(unaff_x20 + lVar10);
              uVar6 = FUN_07c9da10(in_stack_00000050,0);
              lVar11 = *(long *)PTR_DAT_08486c50;
              if (in_stack_00000058._4_4_ < fStack000000000000006c) {
                if (*(int *)(lVar11 + 0xe4) == 0) {
                  thunk_FUN_03ae8be4(lVar11);
                }
                uVar7 = FUN_07d2b360(fStack0000000000000060 + fVar25,fStack0000000000000064 + fVar31
                                     ,in_stack_00000068 + fVar32,fStack000000000000006c,
                                     uStack0000000000000048,uStack0000000000000044,
                                     uStack0000000000000040,uStack000000000000004c,lVar17,uVar6,1,0)
                ;
              }
              else {
                if (*(int *)(lVar11 + 0xe4) == 0) {
                  thunk_FUN_03ae8be4(lVar11);
                }
                uVar7 = FUN_07d2a554(fStack0000000000000060 + fVar25,fStack0000000000000064 + fVar31
                                     ,in_stack_00000068 + fVar32,uStack0000000000000048,
                                     uStack0000000000000044,uStack0000000000000040,
                                     uStack000000000000004c,lVar17,uVar6,1,0);
              }
              if (0 < (int)uVar7) {
                if (lVar17 == 0) goto LAB_06976640;
                uVar18 = 0;
                pdVar16 = (double *)(lVar17 + 0x20);
                do {
                  if (*(uint *)(lVar17 + 0x18) <= uVar18) {
                    /* WARNING: Subroutine does not return */
                    FUN_03a8a9c8();
                  }
                  lVar11 = *(long *)(unaff_x20 + 0x70);
                  if (lVar11 == 0) goto LAB_06976640;
                  in_stack_000000d8 = pdVar16[1];
                  in_stack_000000d0 = *pdVar16;
                  in_stack_000000e0 = pdVar16[2];
                  uStack00000000000000f4 = *(undefined8 *)((long)pdVar16 + 0x24);
                  uVar9 = *(undefined8 *)((long)pdVar16 + 0x1c);
                  lVar12 = *(long *)(lVar11 + 0x10);
                  lVar14 = *(long *)puVar4;
                  uStack00000000000000e8 = SUB84(pdVar16[3],0);
                  fStack00000000000000ec = (float)uVar9;
                  uStack00000000000000f0 = (undefined4)((ulong)uVar9 >> 0x20);
                  *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
                  if (lVar12 == 0) goto LAB_06976640;
                  uVar2 = *(uint *)(lVar11 + 0x18);
                  if (uVar2 < *(uint *)(lVar12 + 0x18)) {
                    lVar12 = lVar12 + (long)(int)uVar2 * 0x2c;
                    *(uint *)(lVar11 + 0x18) = uVar2 + 1;
                    *(double *)(lVar12 + 0x28) = in_stack_000000d8;
                    *(double *)(lVar12 + 0x20) = in_stack_000000d0;
                    *(ulong *)(lVar12 + 0x38) =
                         CONCAT44(fStack00000000000000ec,uStack00000000000000e8);
                    *(double *)(lVar12 + 0x30) = in_stack_000000e0;
                    *(undefined8 *)(lVar12 + 0x44) = uStack00000000000000f4;
                    *(undefined8 *)(lVar12 + 0x3c) = uVar9;
                  }
                  else {
                    uStack0000000000000118 = uStack00000000000000e8;
                    in_stack_00000100 = in_stack_000000d0;
                    in_stack_00000108 = in_stack_000000d8;
                    in_stack_00000110 = in_stack_000000e0;
                    fStack000000000000011c = fStack00000000000000ec;
                    uStack0000000000000120 = uStack00000000000000f0;
                    uStack0000000000000124 = uStack00000000000000f4;
                    FUN_04e28380(lVar11,&stack0x00000100,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70))
                    ;
                  }
                  uVar18 = uVar18 + 1;
                  pdVar16 = (double *)((long)pdVar16 + 0x2c);
                } while (uVar7 != uVar18);
              }
              puVar5 = PTR_DAT_084b7460;
              puVar3 = PTR_DAT_08497e38;
              uVar19 = uVar19 + 1;
              fVar34 = fVar24 * fVar41;
              fVar31 = fVar23 * fVar41;
              fVar35 = fVar23 * fVar40;
              fVar25 = fVar30 * fVar41;
              fVar32 = fVar24 * fVar40;
              fVar36 = fVar30 * fVar39;
              fVar41 = (fVar30 * fVar40 + fVar33 * fVar41 + fVar24 * fVar37) - fVar23 * fVar39;
              fVar40 = (fVar24 * fVar39 + fVar33 * fVar40 + fVar23 * fVar37) - fVar25;
              fVar39 = (fVar31 + fVar33 * fVar39 + fVar30 * fVar37) - fVar32;
              fVar37 = ((fVar33 * fVar37 - fVar34) - fVar35) - fVar36;
            } while (uVar19 != (uVar1 | 1));
            lVar10 = *(long *)(unaff_x20 + 0x70);
            if (lVar10 != 0) {
              if (*(int *)(lVar10 + 0x18) < 1) {
                return 0;
              }
              fVar28 = 3.4028235e+38;
              iVar15 = 0;
              uStack00000000000000c4 = 0;
              uStack00000000000000c0 = 0;
              in_stack_000000a8 = 0.0;
              in_stack_000000a0 = 0.0;
              uStack00000000000000b8 = 0;
              fStack00000000000000bc = 0.0;
              in_stack_000000b0 = 0.0;
              do {
                if (*(int *)(lVar10 + 0x18) <= iVar15) {
                  if (fVar28 == 3.4028235e+38) {
                    return 0;
                  }
                  unaff_x22[1] = in_stack_000000a8;
                  *unaff_x22 = in_stack_000000a0;
                  unaff_x22[3] = (double)CONCAT44(fStack00000000000000bc,uStack00000000000000b8);
                  unaff_x22[2] = in_stack_000000b0;
                  *(undefined8 *)((long)unaff_x22 + 0x24) = uStack00000000000000c4;
                  *(ulong *)((long)unaff_x22 + 0x1c) =
                       CONCAT44(uStack00000000000000c0,fStack00000000000000bc);
                  return 1;
                }
                FUN_04e28000(&stack0x00000100,lVar10,iVar15,*(undefined8 *)puVar5);
                in_stack_00000078 = in_stack_00000108;
                in_stack_00000070 = in_stack_00000100;
                uStack0000000000000088 = uStack0000000000000118;
                in_stack_00000080 = in_stack_00000110;
                uStack0000000000000094 = uStack0000000000000124;
                fStack000000000000008c = fStack000000000000011c;
                uStack0000000000000090 = uStack0000000000000120;
                if (*(long *)(unaff_x20 + 0x50) == 0) break;
                lVar10 = *(long *)(*(long *)(unaff_x20 + 0x50) + 0xd0);
                dVar29 = in_stack_00000110;
                fVar20 = fStack000000000000011c;
                uVar9 = FUN_07d2fce4(&stack0x00000070,0);
                fVar27 = SUB84(dVar29,0);
                if (lVar10 == 0) break;
                uVar18 = FUN_049d96b4(lVar10,uVar9,*(undefined8 *)puVar3);
                if ((uVar18 & 1) == 0) {
                  fVar26 = (float)FUN_07d2fd90(&stack0x00000070,0);
                  if (*(long *)(unaff_x20 + 0x58) == 0) break;
                  fVar20 = fVar20 - in_stack_00000068;
                  fVar27 = (float)FUN_07cadd74(fVar26 - fStack0000000000000060,
                                               fVar27 - fStack0000000000000064,
                                               *(long *)(unaff_x20 + 0x58),0);
                  if ((((-fStack000000000000006c <= fVar27) && (fVar27 <= fStack000000000000006c))
                      && (fVar20 <= fStack0000000000000014)) &&
                     ((-fStack0000000000000014 <= fVar20 &&
                      (fVar20 = (float)FUN_07d2fdc0(&stack0x00000070,0), fVar20 < fVar28)))) {
                    fVar28 = (float)FUN_07d2fdc0(&stack0x00000070,0);
                    in_stack_000000a8 = in_stack_00000078;
                    in_stack_000000a0 = in_stack_00000070;
                    in_stack_000000b0 = in_stack_00000080;
                    uStack00000000000000c4 = uStack0000000000000094;
                    uStack00000000000000b8 = uStack0000000000000088;
                    fStack00000000000000bc = fStack000000000000008c;
                    uStack00000000000000c0 = uStack0000000000000090;
                  }
                }
                lVar10 = *(long *)(unaff_x20 + 0x70);
                iVar15 = iVar15 + 1;
              } while (lVar10 != 0);
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


