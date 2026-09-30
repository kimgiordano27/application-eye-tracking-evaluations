/*
FUNCTION_NAME: OVRPlugin.OVRP_1_64_0$$.cctor
ENTRY_POINT: 06975e78
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
OVRPlugin_OVRP_1_64_0___cctor
          (float param_1,float param_2,float param_3,float param_4,float param_5,float param_6,
          undefined4 param_7,float param_8,long param_9,double *param_10,ulong param_11)

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
  int iVar15;
  double *pdVar16;
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
  double dVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  double dVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fStack0000000000000044;
  float fStack0000000000000048;
  undefined4 uStack000000000000004c;
  ulong uStack0000000000000050;
  float fStack000000000000005c;
  float fStack0000000000000060;
  float fStack0000000000000064;
  float fStack0000000000000068;
  double in_stack_00000070;
  double in_stack_00000078;
  double in_stack_00000080;
  undefined4 in_stack_00000088;
  float fStack000000000000008c;
  undefined4 in_stack_00000090;
  undefined8 uStack0000000000000094;
  double in_stack_000000a0;
  double in_stack_000000a8;
  double in_stack_000000b0;
  undefined4 in_stack_000000b8;
  float fStack00000000000000bc;
  undefined4 in_stack_000000c0;
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
  
  uStack000000000000004c = param_7;
  uStack0000000000000050 = param_11;
  fStack0000000000000060 = param_1;
  fStack0000000000000064 = param_2;
  fStack0000000000000068 = param_3;
  if ((DAT_0897d120 & 1) == 0) {
    FUN_03a8a718(PTR_DAT_08497e38);
    FUN_03a8a718(PTR_DAT_084b7448);
    FUN_03a8a718(PTR_DAT_084b7450);
    FUN_03a8a718(PTR_DAT_084b7458);
    FUN_03a8a718(PTR_DAT_084b7460);
    FUN_03a8a718(PTR_DAT_08486c50);
    DAT_0897d120 = 1;
  }
  uStack00000000000000c4 = 0;
  in_stack_000000c0 = 0;
  in_stack_000000a8 = 0.0;
  in_stack_000000a0 = 0.0;
  in_stack_000000b8 = 0;
  fStack00000000000000bc = 0.0;
  in_stack_000000b0 = 0.0;
  uStack0000000000000094 = 0;
  in_stack_00000090 = 0;
  in_stack_00000078 = 0.0;
  in_stack_00000070 = 0.0;
  in_stack_00000088 = 0;
  fStack000000000000008c = 0.0;
  in_stack_00000080 = 0.0;
  if (DAT_08974d8c == '\0') {
    FUN_03a8a718(PTR_DAT_08486c60);
    DAT_08974d8c = '\x01';
  }
  puVar2 = PTR_DAT_08486c60;
  if (*(int *)(*(long *)PTR_DAT_08486c60 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  in_stack_000001d0 = in_stack_000001d0 * 0.5;
  fVar20 = SQRT(param_6 * param_6 + param_4 * param_4 + param_5 * param_5);
  if (fVar20 <= DAT_015c5ce0) {
    if (DAT_08974d8f == '\0') {
      FUN_03a8a718(PTR_DAT_084868a0);
      DAT_08974d8f = '\x01';
    }
    pfVar13 = *(float **)(*(long *)PTR_DAT_084868a0 + 0xb8);
    param_5 = *pfVar13;
    fStack0000000000000044 = pfVar13[1];
    param_6 = pfVar13[2];
    fStack0000000000000048 = param_5;
  }
  else {
    param_3 = param_4 / fVar20;
    param_5 = param_5 / fVar20;
    param_6 = param_6 / fVar20;
    fStack0000000000000044 = param_5;
    fStack0000000000000048 = param_3;
  }
  fStack000000000000005c = DAT_015c5994;
  if (in_stack_000001d0 <= DAT_015c5994) {
    uVar12 = 1;
    goto LAB_069760b4;
  }
  if (DAT_08975452 == '\0') {
    FUN_03a8a718(PTR_DAT_08486c60);
    DAT_08975452 = '\x01';
  }
  fVar20 = param_8 / in_stack_000001d0 + param_8 / in_stack_000001d0;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  dVar37 = (double)fVar20;
  dVar27 = modf(dVar37,&stack0x00000100);
  if (0.0 <= fVar20) {
    if (dVar27 == 0.5) {
      dVar27 = 1.0;
      goto LAB_06976074;
    }
    dVar37 = (double)(long)(dVar37 + 0.5);
  }
  else if (dVar27 == -0.5) {
    dVar27 = -1.0;
LAB_06976074:
    dVar37 = in_stack_00000100;
    if (((long)in_stack_00000100 & 1U) != 0) {
      dVar37 = in_stack_00000100 + dVar27;
    }
  }
  else {
    dVar37 = (double)(long)(dVar37 + -0.5);
  }
  param_5 = 0.0;
  uVar12 = 0x80000000;
  if (dVar37 != INFINITY) {
    uVar12 = (int)dVar37;
  }
LAB_069760b4:
  if ((int)uVar12 < 4) {
    uVar12 = 3;
  }
  if (*(long *)(param_9 + 0x58) != 0) {
    fVar20 = (float)FUN_07cac824(*(long *)(param_9 + 0x58),0);
    if (*(long *)(param_9 + 0x58) != 0) {
      fVar31 = param_3;
      fVar26 = param_5;
      fVar21 = (float)FUN_07cac924(*(long *)(param_9 + 0x58),0);
      plVar7 = *(long **)(param_9 + 0x50);
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 0x1e8))(plVar7,*(undefined8 *)(*plVar7 + 0x1f0));
        fVar22 = (float)FUN_07c8b18c(0);
        if (*(long *)(param_9 + 0x58) != 0) {
          fVar28 = fVar20;
          fVar32 = param_5;
          fVar23 = (float)FUN_07cac7a8(*(long *)(param_9 + 0x58),0);
          fVar24 = (float)FUN_07c8b18c(180.0 / (float)(uVar12 & 0x7ffffffe),fVar23,fVar28,fVar32,0);
          if (DAT_08974d8a == '\0') {
            FUN_03a8a718(PTR_DAT_08486860);
            DAT_08974d8a = '\x01';
          }
          puVar2 = PTR_DAT_084b7448;
          lVar9 = *(long *)(param_9 + 0x70);
          if (lVar9 != 0) {
            uVar19 = 0;
            pfVar13 = *(float **)(*(long *)PTR_DAT_08486860 + 0xb8);
            fVar40 = *pfVar13;
            fVar39 = pfVar13[1];
            fVar38 = pfVar13[2];
            fVar36 = pfVar13[3];
            *(undefined4 *)(lVar9 + 0x18) = 0;
            *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
            lVar9 = 0x60;
            if (fStack000000000000005c < in_stack_000001d0) {
              lVar9 = 0x68;
            }
            do {
              fVar29 = (param_5 * fVar40 + param_3 * fVar39 + fVar20 * fVar36) - fVar22 * fVar38;
              fVar30 = (fVar22 * fVar39 + param_3 * fVar38 + param_5 * fVar36) - fVar20 * fVar40;
              fVar25 = (float)FUN_07c8b548((fVar20 * fVar38 + param_3 * fVar40 + fVar22 * fVar36) -
                                           param_5 * fVar39,fVar29,fVar30,
                                           ((param_3 * fVar36 - fVar22 * fVar40) - fVar20 * fVar39)
                                           - param_5 * fVar38,fVar21 * param_8,fVar26 * param_8,
                                           fVar31 * param_8,0);
              lVar17 = *(long *)(param_9 + lVar9);
              fVar25 = fStack0000000000000060 + fVar25;
              fVar29 = fStack0000000000000064 + fVar29;
              fVar30 = fStack0000000000000068 + fVar30;
              uVar5 = FUN_07c9da10(uStack0000000000000050 & 0xffffffff,0);
              lVar10 = *(long *)PTR_DAT_08486c50;
              if (fStack000000000000005c < in_stack_000001d0) {
                if (*(int *)(lVar10 + 0xe4) == 0) {
                  thunk_FUN_03ae8be4(lVar10);
                }
                uVar6 = FUN_07d2b360(fVar25,fVar29,fVar30,in_stack_000001d0,fStack0000000000000048,
                                     fStack0000000000000044,param_6,uStack000000000000004c,lVar17,
                                     uVar5,1,0);
              }
              else {
                if (*(int *)(lVar10 + 0xe4) == 0) {
                  thunk_FUN_03ae8be4(lVar10);
                }
                uVar6 = FUN_07d2a554(fVar25,fVar29,fVar30,fStack0000000000000048,
                                     fStack0000000000000044,param_6,uStack000000000000004c,lVar17,
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
                  lVar10 = *(long *)(param_9 + 0x70);
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
              fVar33 = fVar24 * fVar40;
              fVar29 = fVar23 * fVar40;
              fVar34 = fVar23 * fVar39;
              fVar25 = fVar28 * fVar40;
              fVar30 = fVar24 * fVar39;
              fVar35 = fVar28 * fVar38;
              fVar40 = (fVar28 * fVar39 + fVar32 * fVar40 + fVar24 * fVar36) - fVar23 * fVar38;
              fVar39 = (fVar24 * fVar38 + fVar32 * fVar39 + fVar23 * fVar36) - fVar25;
              fVar38 = (fVar29 + fVar32 * fVar38 + fVar28 * fVar36) - fVar30;
              fVar36 = ((fVar32 * fVar36 - fVar33) - fVar34) - fVar35;
            } while (uVar19 != (uVar12 | 1));
            lVar9 = *(long *)(param_9 + 0x70);
            if (lVar9 != 0) {
              if (*(int *)(lVar9 + 0x18) < 1) {
                return 0;
              }
              fVar20 = 3.4028235e+38;
              iVar15 = 0;
              uStack00000000000000c4 = 0;
              in_stack_000000c0 = 0;
              in_stack_000000a8 = 0.0;
              in_stack_000000a0 = 0.0;
              in_stack_000000b8 = 0;
              fStack00000000000000bc = 0.0;
              in_stack_000000b0 = 0.0;
              do {
                if (*(int *)(lVar9 + 0x18) <= iVar15) {
                  if (fVar20 == 3.4028235e+38) {
                    return 0;
                  }
                  param_10[1] = in_stack_000000a8;
                  *param_10 = in_stack_000000a0;
                  param_10[3] = (double)CONCAT44(fStack00000000000000bc,in_stack_000000b8);
                  param_10[2] = in_stack_000000b0;
                  *(undefined8 *)((long)param_10 + 0x24) = uStack00000000000000c4;
                  *(ulong *)((long)param_10 + 0x1c) =
                       CONCAT44(in_stack_000000c0,fStack00000000000000bc);
                  return 1;
                }
                FUN_04e28000(&stack0x00000100,lVar9,iVar15,*(undefined8 *)puVar4);
                in_stack_00000078 = in_stack_00000108;
                in_stack_00000070 = in_stack_00000100;
                in_stack_00000088 = uStack0000000000000118;
                in_stack_00000080 = in_stack_00000110;
                uStack0000000000000094 = uStack0000000000000124;
                fStack000000000000008c = fStack000000000000011c;
                in_stack_00000090 = uStack0000000000000120;
                if (*(long *)(param_9 + 0x50) == 0) break;
                lVar9 = *(long *)(*(long *)(param_9 + 0x50) + 0xd0);
                dVar27 = in_stack_00000110;
                fVar31 = fStack000000000000011c;
                uVar8 = FUN_07d2fce4(&stack0x00000070,0);
                fVar26 = SUB84(dVar27,0);
                if (lVar9 == 0) break;
                uVar18 = FUN_049d96b4(lVar9,uVar8,*(undefined8 *)puVar3);
                if ((uVar18 & 1) == 0) {
                  fVar21 = (float)FUN_07d2fd90(&stack0x00000070,0);
                  if (*(long *)(param_9 + 0x58) == 0) break;
                  fVar31 = fVar31 - fStack0000000000000068;
                  fVar26 = (float)FUN_07cadd74(fVar21 - fStack0000000000000060,
                                               fVar26 - fStack0000000000000064,
                                               *(long *)(param_9 + 0x58),0);
                  if ((((-in_stack_000001d0 <= fVar26) && (fVar26 <= in_stack_000001d0)) &&
                      (fVar31 <= param_8)) &&
                     ((-param_8 <= fVar31 &&
                      (fVar31 = (float)FUN_07d2fdc0(&stack0x00000070,0), fVar31 < fVar20)))) {
                    fVar20 = (float)FUN_07d2fdc0(&stack0x00000070,0);
                    in_stack_000000a8 = in_stack_00000078;
                    in_stack_000000a0 = in_stack_00000070;
                    in_stack_000000b0 = in_stack_00000080;
                    uStack00000000000000c4 = uStack0000000000000094;
                    in_stack_000000b8 = in_stack_00000088;
                    fStack00000000000000bc = fStack000000000000008c;
                    in_stack_000000c0 = in_stack_00000090;
                  }
                }
                lVar9 = *(long *)(param_9 + 0x70);
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


