/*
FUNCTION_NAME: OVRPlugin$$SetKeyboardOverlayUV
ENTRY_POINT: 06951d40
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__SetKeyboardOverlayUV(undefined1 param_1 [16],float param_2,float param_3)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  float *pfVar6;
  long unaff_x19;
  long *unaff_x21;
  long unaff_x22;
  long unaff_x23;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  undefined8 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float fVar16;
  float fVar17;
  float fVar18;
  float fStack0000000000000058;
  float fStack000000000000005c;
  
  if ((*(long *)(unaff_x19 + 0xb0) != 0) &&
     (plVar2 = *(long **)(*(long *)(unaff_x19 + 0xb0) + 0x80), plVar2 != (long *)0x0)) {
    fVar7 = (float)(**(code **)(*plVar2 + 0x588))(plVar2,*(undefined8 *)(*plVar2 + 0x590));
    if (*(char *)(unaff_x22 + 0xd8c) == '\0') {
      FUN_03a8a718(PTR_DAT_08486c60);
      *(undefined1 *)(unaff_x22 + 0xd8c) = 1;
    }
    fVar7 = unaff_s8 + fVar7;
    param_2 = unaff_s9 + param_2;
    param_3 = unaff_s10 + param_3;
    if (*(int *)(*unaff_x21 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    fVar13 = SQRT(param_3 * param_3 + fVar7 * fVar7 + param_2 * param_2);
    if (fVar13 <= *(float *)(unaff_x23 + 0xce0)) {
      if (DAT_08974d8f == '\0') {
        FUN_03a8a718(PTR_DAT_084868a0);
        DAT_08974d8f = '\x01';
      }
      pfVar6 = *(float **)(*(long *)PTR_DAT_084868a0 + 0xb8);
      fVar7 = *pfVar6;
      param_2 = pfVar6[1];
      param_3 = pfVar6[2];
    }
    else {
      fVar7 = fVar7 / fVar13;
      param_2 = param_2 / fVar13;
      param_3 = param_3 / fVar13;
    }
    lVar5 = *(long *)(unaff_x19 + 0x90);
    *(float *)(unaff_x19 + 0xe0) = fVar7;
    *(float *)(unaff_x19 + 0xe4) = param_2;
    *(float *)(unaff_x19 + 0xe8) = param_3;
    if (lVar5 != 0) {
      lVar3 = *(long *)(unaff_x19 + 0x80);
      *(undefined4 *)(lVar5 + 0x24) = *(undefined4 *)(unaff_x19 + 0x40);
      uVar10 = NEON_rev64(*(undefined8 *)(unaff_x19 + 0x44),4);
      *(undefined8 *)(lVar5 + 0x1c) = uVar10;
      fVar7 = -*(float *)(unaff_x19 + 0x3c);
      *(float *)(lVar5 + 0x10) = *(float *)(unaff_x19 + 0x3c);
      *(float *)(lVar5 + 0x14) = fVar7;
      if (lVar3 != 0) {
        uVar8 = FUN_07cac924(lVar3,0);
        *(undefined4 *)(unaff_x19 + 200) = uVar8;
        *(float *)(unaff_x19 + 0xcc) = fVar7;
        *(float *)(unaff_x19 + 0xd0) = param_3;
        puVar1 = PTR_DAT_08486738;
        if (*(long *)(unaff_x19 + 0x80) != 0) {
          uVar8 = FUN_07cac824(*(long *)(unaff_x19 + 0x80),0);
          lVar5 = *(long *)puVar1;
          *(undefined4 *)(unaff_x19 + 0xd4) = uVar8;
          *(float *)(unaff_x19 + 0xd8) = fVar7;
          uVar10 = *(undefined8 *)(unaff_x19 + 0x58);
          *(float *)(unaff_x19 + 0xdc) = param_3;
          if (*(int *)(lVar5 + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
          }
          uVar4 = FUN_07c9c218(uVar10,0,0);
          if ((uVar4 & 1) != 0) {
            if ((*(long *)(unaff_x19 + 0xb0) == 0) ||
               (plVar2 = *(long **)(*(long *)(unaff_x19 + 0xb0) + 0x80), plVar2 == (long *)0x0))
            goto LAB_06952554;
            lVar5 = *(long *)(unaff_x19 + 0x58);
            (**(code **)(*plVar2 + 0x2a8))(plVar2,*(undefined8 *)(*plVar2 + 0x2b0));
            if (lVar5 == 0) goto LAB_06952554;
            thunk_FUN_07cadac0(lVar5,0);
          }
          uVar10 = *(undefined8 *)(unaff_x19 + 0x50);
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
          }
          uVar4 = FUN_07c9c218(uVar10,0,0);
          if ((uVar4 & 1) != 0) {
            if ((*(long *)(unaff_x19 + 0xa8) == 0) ||
               (plVar2 = *(long **)(*(long *)(unaff_x19 + 0xa8) + 0x80), plVar2 == (long *)0x0))
            goto LAB_06952554;
            fVar16 = *(float *)(unaff_x19 + 0xb8);
            fVar17 = *(float *)(unaff_x19 + 0xbc);
            fVar13 = *(float *)(unaff_x19 + 0xc0);
            fVar18 = *(float *)(unaff_x19 + 0xc4);
            lVar5 = *(long *)(unaff_x19 + 0x50);
            uVar8 = (**(code **)(*plVar2 + 0x1e8))(plVar2,*(undefined8 *)(*plVar2 + 0x1f0));
            if (DAT_08974d89 == '\0') {
              FUN_03a8a718(PTR_DAT_084868a0);
              DAT_08974d89 = '\x01';
            }
            lVar3 = *(long *)(*(long *)PTR_DAT_084868a0 + 0xb8);
            fVar11 = *(float *)(lVar3 + 0x18);
            fVar14 = *(float *)(lVar3 + 0x1c);
            fVar15 = *(float *)(lVar3 + 0x20);
            fVar9 = (float)FUN_07c8b18c(uVar8,0);
            if (lVar5 == 0) goto LAB_06952554;
            fVar7 = (fVar13 * fVar9 + fVar18 * fVar11 + fVar17 * fVar15) - fVar16 * fVar14;
            FUN_07cac71c((fVar17 * fVar14 + fVar18 * fVar9 + fVar16 * fVar15) - fVar13 * fVar11,
                         fVar7,(fVar16 * fVar11 + fVar18 * fVar14 + fVar13 * fVar15) -
                               fVar17 * fVar9,
                         ((fVar18 * fVar15 - fVar16 * fVar9) - fVar17 * fVar11) - fVar13 * fVar14,
                         lVar5,0);
          }
          if (*(int *)(*(long *)PTR_DAT_08486c50 + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
          }
          FUN_07d27e2c(0);
          *(float *)(unaff_x19 + 0x98) = -fVar7;
          if (*(long *)(unaff_x19 + 0x10) != 0) {
            fVar13 = (float)FUN_06926524(*(long *)(unaff_x19 + 0x10),0);
            fVar7 = DAT_015c5928;
            fStack000000000000005c = *(float *)(unaff_x19 + 0xe0);
            fStack0000000000000058 = *(float *)(unaff_x19 + 0xe4);
            fVar16 = *(float *)(unaff_x19 + 0xe8);
            *(float *)(unaff_x19 + 0x9c) = fVar13;
            *(float *)(unaff_x19 + 0xa0) = ABS(fVar13);
            if (*(float *)(unaff_x19 + 0xdc) * fVar16 +
                *(float *)(unaff_x19 + 0xd4) * fStack000000000000005c +
                *(float *)(unaff_x19 + 0xd8) * fStack0000000000000058 <= fVar7) {
              *(undefined4 *)(unaff_x19 + 0x6c) = *(undefined4 *)(unaff_x19 + 0x70);
              return;
            }
            fVar17 = *(float *)(unaff_x19 + 200);
            fVar13 = *(float *)(unaff_x19 + 0xcc);
            fVar7 = *(float *)(unaff_x19 + 0xd0);
            if (DAT_08975819 == '\0') {
              FUN_03a8a718(PTR_DAT_08487160);
              DAT_08975819 = '\x01';
            }
            puVar1 = PTR_DAT_08487160;
            fVar18 = fVar7 * fVar7 + fVar17 * fVar17 + fVar13 * fVar13;
            if (**(float **)(*(long *)PTR_DAT_08487160 + 0xb8) <= fVar18) {
              fVar9 = fVar16 * fVar7 +
                      fStack000000000000005c * fVar17 + fStack0000000000000058 * fVar13;
              fStack000000000000005c = fStack000000000000005c - (fVar17 * fVar9) / fVar18;
              fStack0000000000000058 = fStack0000000000000058 - (fVar13 * fVar9) / fVar18;
              fVar16 = fVar16 - (fVar7 * fVar9) / fVar18;
            }
            if (*(char *)(unaff_x22 + 0xd8c) == '\0') {
              FUN_03a8a718(PTR_DAT_08486c60);
              *(undefined1 *)(unaff_x22 + 0xd8c) = 1;
            }
            if (*(int *)(*unaff_x21 + 0xe4) == 0) {
              thunk_FUN_03ae8be4();
            }
            fVar13 = *(float *)(unaff_x23 + 0xce0);
            fVar7 = SQRT(fVar16 * fVar16 +
                         fStack000000000000005c * fStack000000000000005c +
                         fStack0000000000000058 * fStack0000000000000058);
            if (fVar7 <= fVar13) {
              if (DAT_08974d8f == '\0') {
                FUN_03a8a718(PTR_DAT_084868a0);
                DAT_08974d8f = '\x01';
              }
              pfVar6 = *(float **)(*(long *)PTR_DAT_084868a0 + 0xb8);
              fStack000000000000005c = *pfVar6;
              fStack0000000000000058 = pfVar6[1];
              fVar16 = pfVar6[2];
            }
            else {
              fStack000000000000005c = fStack000000000000005c / fVar7;
              fStack0000000000000058 = fStack0000000000000058 / fVar7;
              fVar16 = fVar16 / fVar7;
            }
            fVar17 = *(float *)(unaff_x19 + 0xd8);
            fVar18 = *(float *)(unaff_x19 + 0xdc);
            fVar11 = *(float *)(unaff_x19 + 200);
            fVar9 = *(float *)(unaff_x19 + 0xcc);
            fVar14 = *(float *)(unaff_x19 + 0xd0);
            fVar7 = *(float *)(unaff_x19 + 0xd4);
            if (DAT_08975819 == '\0') {
              FUN_03a8a718(PTR_DAT_08487160);
              DAT_08975819 = '\x01';
            }
            fVar15 = fVar14 * fVar14 + fVar11 * fVar11 + fVar9 * fVar9;
            if (**(float **)(*(long *)puVar1 + 0xb8) <= fVar15) {
              fVar12 = fVar18 * fVar14 + fVar7 * fVar11 + fVar17 * fVar9;
              fVar7 = fVar7 - (fVar11 * fVar12) / fVar15;
              fVar17 = fVar17 - (fVar9 * fVar12) / fVar15;
              fVar18 = fVar18 - (fVar14 * fVar12) / fVar15;
            }
            if (*(char *)(unaff_x22 + 0xd8c) == '\0') {
              FUN_03a8a718(PTR_DAT_08486c60);
              *(undefined1 *)(unaff_x22 + 0xd8c) = 1;
            }
            if (*(int *)(*unaff_x21 + 0xe4) == 0) {
              thunk_FUN_03ae8be4();
            }
            fVar9 = SQRT(fVar18 * fVar18 + fVar7 * fVar7 + fVar17 * fVar17);
            if (fVar9 <= fVar13) {
              if (DAT_08974d8f == '\0') {
                FUN_03a8a718(PTR_DAT_084868a0);
                DAT_08974d8f = '\x01';
              }
              pfVar6 = *(float **)(*(long *)PTR_DAT_084868a0 + 0xb8);
              fVar7 = *pfVar6;
              fVar17 = pfVar6[1];
              fVar18 = pfVar6[2];
            }
            else {
              fVar7 = fVar7 / fVar9;
              fVar17 = fVar17 / fVar9;
              fVar18 = fVar18 / fVar9;
            }
            uVar8 = FUN_03ce0520(fVar7,fVar17,fVar18,fStack000000000000005c,fStack0000000000000058,
                                 fVar16,0);
            *(undefined4 *)(unaff_x19 + 0x6c) = uVar8;
            if ((*(long *)(unaff_x19 + 0x10) != 0) &&
               (lVar5 = *(long *)(*(long *)(unaff_x19 + 0x10) + 0xd8), lVar5 != 0)) {
              fVar7 = (float)FUN_06960788(lVar5,0);
              if (*(long *)(unaff_x19 + 0x30) != 0) {
                fVar13 = (float)FUN_07c42008(*(undefined4 *)(unaff_x19 + 0xa0),
                                             *(long *)(unaff_x19 + 0x30),0);
                *(float *)(unaff_x19 + 0x70) = fVar7 * fVar13;
                if ((*(long *)(unaff_x19 + 0xb0) != 0) &&
                   (plVar2 = *(long **)(*(long *)(unaff_x19 + 0xb0) + 0x80), plVar2 != (long *)0x0))
                {
                  fVar13 = (float)(**(code **)(*plVar2 + 0x4f8))
                                            (plVar2,*(undefined8 *)(*plVar2 + 0x500));
                  fVar7 = 1.0;
                  if (fVar13 <= 1.0) {
                    fVar7 = fVar13;
                  }
                  fVar16 = -1.0;
                  if (-1.0 <= fVar13) {
                    fVar16 = fVar7;
                  }
                  *(float *)(unaff_x19 + 0x78) = fVar16;
                  if (*(long *)(unaff_x19 + 0x10) != 0) {
                    fVar13 = (float)FUN_06926524(*(long *)(unaff_x19 + 0x10),0);
                    fVar13 = fVar13 * 0.5;
                    fVar7 = 1.0;
                    if (fVar13 <= 1.0) {
                      fVar7 = fVar13;
                    }
                    fVar17 = 0.0;
                    if (0.0 <= fVar13) {
                      fVar17 = fVar7;
                    }
                    *(float *)(unaff_x19 + 0x78) = fVar16 * fVar17;
                    *(float *)(unaff_x19 + 0x70) =
                         *(float *)(unaff_x19 + 0x70) +
                         *(float *)(unaff_x19 + 0x38) * fVar16 * fVar17;
                    if (*(long *)(unaff_x19 + 0x28) != 0) {
                      fVar16 = (float)FUN_07c42008(*(undefined4 *)(unaff_x19 + 0xa0),
                                                   *(long *)(unaff_x19 + 0x28),0);
                      fVar13 = *(float *)(unaff_x19 + 0x70);
                      fVar9 = *(float *)(unaff_x19 + 0x74);
                      fVar17 = (float)FUN_07ca88b8(0);
                      fVar18 = fVar13 - fVar9;
                      fVar18 = fVar18 + (float)(int)(fVar18 / 360.0) * -360.0;
                      fVar7 = 360.0;
                      if (fVar18 <= 360.0) {
                        fVar7 = fVar18;
                      }
                      fVar11 = 0.0;
                      if (0.0 <= fVar18) {
                        fVar11 = fVar7;
                      }
                      fVar7 = fVar11 + -360.0;
                      if (fVar11 <= 180.0) {
                        fVar7 = fVar11;
                      }
                      fVar18 = fVar16 * fVar17;
                      if ((fVar7 <= -(fVar16 * fVar17)) || (fVar18 <= fVar7)) {
                        fVar7 = fVar9 + fVar7;
                        fVar13 = -(fVar16 * fVar17);
                        if (0.0 <= fVar7 - fVar9) {
                          fVar13 = fVar18;
                        }
                        fVar13 = fVar9 + fVar13;
                        if (ABS(fVar7 - fVar9) <= fVar18) {
                          fVar13 = fVar7;
                        }
                      }
                      lVar5 = *(long *)(unaff_x19 + 0x90);
                      *(float *)(unaff_x19 + 0x74) = fVar13;
                      if (lVar5 != 0) {
                        fVar17 = *(float *)(unaff_x19 + 0x48);
                        fVar7 = *(float *)(unaff_x19 + 0x4c);
                        fVar13 = *(float *)(unaff_x19 + 0x40);
                        fVar16 = *(float *)(unaff_x19 + 0x44);
                        *(undefined4 *)(lVar5 + 0x10) = *(undefined4 *)(unaff_x19 + 0x3c);
                        uVar8 = *(undefined4 *)(unaff_x19 + 0x6c);
                        *(float *)(lVar5 + 0x1c) = fVar7 * fVar17;
                        *(float *)(lVar5 + 0x20) = fVar7 * fVar16;
                        *(float *)(lVar5 + 0x24) = fVar7 * fVar13;
                        FUN_0692a5f4(uVar8,lVar5,0);
                        lVar5 = *(long *)(unaff_x19 + 0x90);
                        if (lVar5 != 0) {
                          *(undefined4 *)(lVar5 + 0x30) = *(undefined4 *)(unaff_x19 + 0x74);
                          FUN_07ca88b8(0);
                          fVar7 = (float)FUN_0692a624(lVar5,0);
                          fVar7 = -fVar7;
                          *(float *)(unaff_x19 + 100) = fVar7;
                          if (*(long *)(unaff_x19 + 0x88) != 0) {
                            FUN_07d32824(*(float *)(unaff_x19 + 200) * fVar7,
                                         *(float *)(unaff_x19 + 0xcc) * fVar7,
                                         *(float *)(unaff_x19 + 0xd0) * fVar7,
                                         *(long *)(unaff_x19 + 0x88),0);
                            return;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_06952554:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


