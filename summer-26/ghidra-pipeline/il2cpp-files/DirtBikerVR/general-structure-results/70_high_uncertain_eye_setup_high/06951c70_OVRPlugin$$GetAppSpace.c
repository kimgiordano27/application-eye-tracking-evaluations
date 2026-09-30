/*
FUNCTION_NAME: OVRPlugin$$GetAppSpace
ENTRY_POINT: 06951c70
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


void OVRPlugin__GetAppSpace(undefined1 param_1 [16],float param_2,float param_3)

{
  undefined *puVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  float *pfVar6;
  code *in_x9;
  long unaff_x19;
  long *unaff_x21;
  long unaff_x22;
  long unaff_x23;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  float fVar10;
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fStack0000000000000058;
  float fStack000000000000005c;
  
  uVar2 = (*in_x9)();
  if ((uVar2 & 1) == 0) {
    if (DAT_08974d89 == '\0') {
      FUN_03a8a718(PTR_DAT_084868a0);
      DAT_08974d89 = '\x01';
    }
    lVar5 = *(long *)(*(long *)PTR_DAT_084868a0 + 0xb8);
    fVar7 = *(float *)(lVar5 + 0x18);
    fVar16 = *(float *)(lVar5 + 0x1c);
    fVar17 = *(float *)(lVar5 + 0x20);
  }
  else {
    if ((*(long *)(unaff_x19 + 0xa8) == 0) ||
       (plVar3 = *(long **)(*(long *)(unaff_x19 + 0xa8) + 0x80), plVar3 == (long *)0x0))
    goto LAB_06952554;
    fVar7 = (float)(**(code **)(*plVar3 + 0x588))(plVar3,*(undefined8 *)(*plVar3 + 0x590));
    fVar16 = param_2;
    fVar17 = param_3;
  }
  if ((*(long *)(unaff_x19 + 0xb0) != 0) &&
     (plVar3 = *(long **)(*(long *)(unaff_x19 + 0xb0) + 0x80), plVar3 != (long *)0x0)) {
    uVar2 = (**(code **)(*plVar3 + 0x2e8))(plVar3,*(undefined8 *)(*plVar3 + 0x2f0));
    if ((uVar2 & 1) == 0) {
      if (DAT_08974d89 == '\0') {
        FUN_03a8a718(PTR_DAT_084868a0);
        DAT_08974d89 = '\x01';
      }
      lVar5 = *(long *)(*(long *)PTR_DAT_084868a0 + 0xb8);
      fVar8 = *(float *)(lVar5 + 0x18);
      param_2 = *(float *)(lVar5 + 0x1c);
      param_3 = *(float *)(lVar5 + 0x20);
    }
    else {
      if ((*(long *)(unaff_x19 + 0xb0) == 0) ||
         (plVar3 = *(long **)(*(long *)(unaff_x19 + 0xb0) + 0x80), plVar3 == (long *)0x0))
      goto LAB_06952554;
      fVar8 = (float)(**(code **)(*plVar3 + 0x588))(plVar3,*(undefined8 *)(*plVar3 + 0x590));
    }
    if (*(char *)(unaff_x22 + 0xd8c) == '\0') {
      FUN_03a8a718(PTR_DAT_08486c60);
      *(undefined1 *)(unaff_x22 + 0xd8c) = 1;
    }
    fVar7 = fVar7 + fVar8;
    fVar16 = fVar16 + param_2;
    fVar17 = fVar17 + param_3;
    if (*(int *)(*unaff_x21 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    fVar8 = SQRT(fVar17 * fVar17 + fVar7 * fVar7 + fVar16 * fVar16);
    if (fVar8 <= *(float *)(unaff_x23 + 0xce0)) {
      if (DAT_08974d8f == '\0') {
        FUN_03a8a718(PTR_DAT_084868a0);
        DAT_08974d8f = '\x01';
      }
      pfVar6 = *(float **)(*(long *)PTR_DAT_084868a0 + 0xb8);
      fVar7 = *pfVar6;
      fVar16 = pfVar6[1];
      fVar17 = pfVar6[2];
    }
    else {
      fVar7 = fVar7 / fVar8;
      fVar16 = fVar16 / fVar8;
      fVar17 = fVar17 / fVar8;
    }
    lVar5 = *(long *)(unaff_x19 + 0x90);
    *(float *)(unaff_x19 + 0xe0) = fVar7;
    *(float *)(unaff_x19 + 0xe4) = fVar16;
    *(float *)(unaff_x19 + 0xe8) = fVar17;
    if (lVar5 != 0) {
      lVar4 = *(long *)(unaff_x19 + 0x80);
      *(undefined4 *)(lVar5 + 0x24) = *(undefined4 *)(unaff_x19 + 0x40);
      uVar11 = NEON_rev64(*(undefined8 *)(unaff_x19 + 0x44),4);
      *(undefined8 *)(lVar5 + 0x1c) = uVar11;
      fVar16 = -*(float *)(unaff_x19 + 0x3c);
      *(float *)(lVar5 + 0x10) = *(float *)(unaff_x19 + 0x3c);
      *(float *)(lVar5 + 0x14) = fVar16;
      if (lVar4 != 0) {
        uVar9 = FUN_07cac924(lVar4,0);
        *(undefined4 *)(unaff_x19 + 200) = uVar9;
        *(float *)(unaff_x19 + 0xcc) = fVar16;
        *(float *)(unaff_x19 + 0xd0) = fVar17;
        puVar1 = PTR_DAT_08486738;
        if (*(long *)(unaff_x19 + 0x80) != 0) {
          uVar9 = FUN_07cac824(*(long *)(unaff_x19 + 0x80),0);
          lVar5 = *(long *)puVar1;
          *(undefined4 *)(unaff_x19 + 0xd4) = uVar9;
          *(float *)(unaff_x19 + 0xd8) = fVar16;
          uVar11 = *(undefined8 *)(unaff_x19 + 0x58);
          *(float *)(unaff_x19 + 0xdc) = fVar17;
          if (*(int *)(lVar5 + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
          }
          uVar2 = FUN_07c9c218(uVar11,0,0);
          if ((uVar2 & 1) != 0) {
            if ((*(long *)(unaff_x19 + 0xb0) == 0) ||
               (plVar3 = *(long **)(*(long *)(unaff_x19 + 0xb0) + 0x80), plVar3 == (long *)0x0))
            goto LAB_06952554;
            lVar5 = *(long *)(unaff_x19 + 0x58);
            (**(code **)(*plVar3 + 0x2a8))(plVar3,*(undefined8 *)(*plVar3 + 0x2b0));
            if (lVar5 == 0) goto LAB_06952554;
            thunk_FUN_07cadac0(lVar5,0);
          }
          uVar11 = *(undefined8 *)(unaff_x19 + 0x50);
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
          }
          uVar2 = FUN_07c9c218(uVar11,0,0);
          if ((uVar2 & 1) != 0) {
            if ((*(long *)(unaff_x19 + 0xa8) == 0) ||
               (plVar3 = *(long **)(*(long *)(unaff_x19 + 0xa8) + 0x80), plVar3 == (long *)0x0))
            goto LAB_06952554;
            fVar7 = *(float *)(unaff_x19 + 0xb8);
            fVar8 = *(float *)(unaff_x19 + 0xbc);
            fVar17 = *(float *)(unaff_x19 + 0xc0);
            fVar18 = *(float *)(unaff_x19 + 0xc4);
            lVar5 = *(long *)(unaff_x19 + 0x50);
            uVar9 = (**(code **)(*plVar3 + 0x1e8))(plVar3,*(undefined8 *)(*plVar3 + 0x1f0));
            if (DAT_08974d89 == '\0') {
              FUN_03a8a718(PTR_DAT_084868a0);
              DAT_08974d89 = '\x01';
            }
            lVar4 = *(long *)(*(long *)PTR_DAT_084868a0 + 0xb8);
            fVar12 = *(float *)(lVar4 + 0x18);
            fVar14 = *(float *)(lVar4 + 0x1c);
            fVar15 = *(float *)(lVar4 + 0x20);
            fVar10 = (float)FUN_07c8b18c(uVar9,0);
            if (lVar5 == 0) goto LAB_06952554;
            fVar16 = (fVar17 * fVar10 + fVar18 * fVar12 + fVar8 * fVar15) - fVar7 * fVar14;
            FUN_07cac71c((fVar8 * fVar14 + fVar18 * fVar10 + fVar7 * fVar15) - fVar17 * fVar12,
                         fVar16,(fVar7 * fVar12 + fVar18 * fVar14 + fVar17 * fVar15) -
                                fVar8 * fVar10,
                         ((fVar18 * fVar15 - fVar7 * fVar10) - fVar8 * fVar12) - fVar17 * fVar14,
                         lVar5,0);
          }
          if (*(int *)(*(long *)PTR_DAT_08486c50 + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
          }
          FUN_07d27e2c(0);
          *(float *)(unaff_x19 + 0x98) = -fVar16;
          if (*(long *)(unaff_x19 + 0x10) != 0) {
            fVar17 = (float)FUN_06926524(*(long *)(unaff_x19 + 0x10),0);
            fVar16 = DAT_015c5928;
            fStack000000000000005c = *(float *)(unaff_x19 + 0xe0);
            fStack0000000000000058 = *(float *)(unaff_x19 + 0xe4);
            fVar7 = *(float *)(unaff_x19 + 0xe8);
            *(float *)(unaff_x19 + 0x9c) = fVar17;
            *(float *)(unaff_x19 + 0xa0) = ABS(fVar17);
            if (*(float *)(unaff_x19 + 0xdc) * fVar7 +
                *(float *)(unaff_x19 + 0xd4) * fStack000000000000005c +
                *(float *)(unaff_x19 + 0xd8) * fStack0000000000000058 <= fVar16) {
              *(undefined4 *)(unaff_x19 + 0x6c) = *(undefined4 *)(unaff_x19 + 0x70);
              return;
            }
            fVar8 = *(float *)(unaff_x19 + 200);
            fVar17 = *(float *)(unaff_x19 + 0xcc);
            fVar16 = *(float *)(unaff_x19 + 0xd0);
            if (DAT_08975819 == '\0') {
              FUN_03a8a718(PTR_DAT_08487160);
              DAT_08975819 = '\x01';
            }
            puVar1 = PTR_DAT_08487160;
            fVar18 = fVar16 * fVar16 + fVar8 * fVar8 + fVar17 * fVar17;
            if (**(float **)(*(long *)PTR_DAT_08487160 + 0xb8) <= fVar18) {
              fVar10 = fVar7 * fVar16 +
                       fStack000000000000005c * fVar8 + fStack0000000000000058 * fVar17;
              fStack000000000000005c = fStack000000000000005c - (fVar8 * fVar10) / fVar18;
              fStack0000000000000058 = fStack0000000000000058 - (fVar17 * fVar10) / fVar18;
              fVar7 = fVar7 - (fVar16 * fVar10) / fVar18;
            }
            if (*(char *)(unaff_x22 + 0xd8c) == '\0') {
              FUN_03a8a718(PTR_DAT_08486c60);
              *(undefined1 *)(unaff_x22 + 0xd8c) = 1;
            }
            if (*(int *)(*unaff_x21 + 0xe4) == 0) {
              thunk_FUN_03ae8be4();
            }
            fVar17 = *(float *)(unaff_x23 + 0xce0);
            fVar16 = SQRT(fVar7 * fVar7 +
                          fStack000000000000005c * fStack000000000000005c +
                          fStack0000000000000058 * fStack0000000000000058);
            if (fVar16 <= fVar17) {
              if (DAT_08974d8f == '\0') {
                FUN_03a8a718(PTR_DAT_084868a0);
                DAT_08974d8f = '\x01';
              }
              pfVar6 = *(float **)(*(long *)PTR_DAT_084868a0 + 0xb8);
              fStack000000000000005c = *pfVar6;
              fStack0000000000000058 = pfVar6[1];
              fVar7 = pfVar6[2];
            }
            else {
              fStack000000000000005c = fStack000000000000005c / fVar16;
              fStack0000000000000058 = fStack0000000000000058 / fVar16;
              fVar7 = fVar7 / fVar16;
            }
            fVar8 = *(float *)(unaff_x19 + 0xd8);
            fVar18 = *(float *)(unaff_x19 + 0xdc);
            fVar12 = *(float *)(unaff_x19 + 200);
            fVar10 = *(float *)(unaff_x19 + 0xcc);
            fVar14 = *(float *)(unaff_x19 + 0xd0);
            fVar16 = *(float *)(unaff_x19 + 0xd4);
            if (DAT_08975819 == '\0') {
              FUN_03a8a718(PTR_DAT_08487160);
              DAT_08975819 = '\x01';
            }
            fVar15 = fVar14 * fVar14 + fVar12 * fVar12 + fVar10 * fVar10;
            if (**(float **)(*(long *)puVar1 + 0xb8) <= fVar15) {
              fVar13 = fVar18 * fVar14 + fVar16 * fVar12 + fVar8 * fVar10;
              fVar16 = fVar16 - (fVar12 * fVar13) / fVar15;
              fVar8 = fVar8 - (fVar10 * fVar13) / fVar15;
              fVar18 = fVar18 - (fVar14 * fVar13) / fVar15;
            }
            if (*(char *)(unaff_x22 + 0xd8c) == '\0') {
              FUN_03a8a718(PTR_DAT_08486c60);
              *(undefined1 *)(unaff_x22 + 0xd8c) = 1;
            }
            if (*(int *)(*unaff_x21 + 0xe4) == 0) {
              thunk_FUN_03ae8be4();
            }
            fVar10 = SQRT(fVar18 * fVar18 + fVar16 * fVar16 + fVar8 * fVar8);
            if (fVar10 <= fVar17) {
              if (DAT_08974d8f == '\0') {
                FUN_03a8a718(PTR_DAT_084868a0);
                DAT_08974d8f = '\x01';
              }
              pfVar6 = *(float **)(*(long *)PTR_DAT_084868a0 + 0xb8);
              fVar16 = *pfVar6;
              fVar8 = pfVar6[1];
              fVar18 = pfVar6[2];
            }
            else {
              fVar16 = fVar16 / fVar10;
              fVar8 = fVar8 / fVar10;
              fVar18 = fVar18 / fVar10;
            }
            uVar9 = FUN_03ce0520(fVar16,fVar8,fVar18,fStack000000000000005c,fStack0000000000000058,
                                 fVar7,0);
            *(undefined4 *)(unaff_x19 + 0x6c) = uVar9;
            if ((*(long *)(unaff_x19 + 0x10) != 0) &&
               (lVar5 = *(long *)(*(long *)(unaff_x19 + 0x10) + 0xd8), lVar5 != 0)) {
              fVar16 = (float)FUN_06960788(lVar5,0);
              if (*(long *)(unaff_x19 + 0x30) != 0) {
                fVar17 = (float)FUN_07c42008(*(undefined4 *)(unaff_x19 + 0xa0),
                                             *(long *)(unaff_x19 + 0x30),0);
                *(float *)(unaff_x19 + 0x70) = fVar16 * fVar17;
                if ((*(long *)(unaff_x19 + 0xb0) != 0) &&
                   (plVar3 = *(long **)(*(long *)(unaff_x19 + 0xb0) + 0x80), plVar3 != (long *)0x0))
                {
                  fVar17 = (float)(**(code **)(*plVar3 + 0x4f8))
                                            (plVar3,*(undefined8 *)(*plVar3 + 0x500));
                  fVar16 = 1.0;
                  if (fVar17 <= 1.0) {
                    fVar16 = fVar17;
                  }
                  fVar7 = -1.0;
                  if (-1.0 <= fVar17) {
                    fVar7 = fVar16;
                  }
                  *(float *)(unaff_x19 + 0x78) = fVar7;
                  if (*(long *)(unaff_x19 + 0x10) != 0) {
                    fVar17 = (float)FUN_06926524(*(long *)(unaff_x19 + 0x10),0);
                    fVar17 = fVar17 * 0.5;
                    fVar16 = 1.0;
                    if (fVar17 <= 1.0) {
                      fVar16 = fVar17;
                    }
                    fVar8 = 0.0;
                    if (0.0 <= fVar17) {
                      fVar8 = fVar16;
                    }
                    *(float *)(unaff_x19 + 0x78) = fVar7 * fVar8;
                    *(float *)(unaff_x19 + 0x70) =
                         *(float *)(unaff_x19 + 0x70) + *(float *)(unaff_x19 + 0x38) * fVar7 * fVar8
                    ;
                    if (*(long *)(unaff_x19 + 0x28) != 0) {
                      fVar7 = (float)FUN_07c42008(*(undefined4 *)(unaff_x19 + 0xa0),
                                                  *(long *)(unaff_x19 + 0x28),0);
                      fVar17 = *(float *)(unaff_x19 + 0x70);
                      fVar10 = *(float *)(unaff_x19 + 0x74);
                      fVar8 = (float)FUN_07ca88b8(0);
                      fVar18 = fVar17 - fVar10;
                      fVar18 = fVar18 + (float)(int)(fVar18 / 360.0) * -360.0;
                      fVar16 = 360.0;
                      if (fVar18 <= 360.0) {
                        fVar16 = fVar18;
                      }
                      fVar12 = 0.0;
                      if (0.0 <= fVar18) {
                        fVar12 = fVar16;
                      }
                      fVar16 = fVar12 + -360.0;
                      if (fVar12 <= 180.0) {
                        fVar16 = fVar12;
                      }
                      fVar18 = fVar7 * fVar8;
                      if ((fVar16 <= -(fVar7 * fVar8)) || (fVar18 <= fVar16)) {
                        fVar16 = fVar10 + fVar16;
                        fVar17 = -(fVar7 * fVar8);
                        if (0.0 <= fVar16 - fVar10) {
                          fVar17 = fVar18;
                        }
                        fVar17 = fVar10 + fVar17;
                        if (ABS(fVar16 - fVar10) <= fVar18) {
                          fVar17 = fVar16;
                        }
                      }
                      lVar5 = *(long *)(unaff_x19 + 0x90);
                      *(float *)(unaff_x19 + 0x74) = fVar17;
                      if (lVar5 != 0) {
                        fVar8 = *(float *)(unaff_x19 + 0x48);
                        fVar16 = *(float *)(unaff_x19 + 0x4c);
                        fVar17 = *(float *)(unaff_x19 + 0x40);
                        fVar7 = *(float *)(unaff_x19 + 0x44);
                        *(undefined4 *)(lVar5 + 0x10) = *(undefined4 *)(unaff_x19 + 0x3c);
                        uVar9 = *(undefined4 *)(unaff_x19 + 0x6c);
                        *(float *)(lVar5 + 0x1c) = fVar16 * fVar8;
                        *(float *)(lVar5 + 0x20) = fVar16 * fVar7;
                        *(float *)(lVar5 + 0x24) = fVar16 * fVar17;
                        FUN_0692a5f4(uVar9,lVar5,0);
                        lVar5 = *(long *)(unaff_x19 + 0x90);
                        if (lVar5 != 0) {
                          *(undefined4 *)(lVar5 + 0x30) = *(undefined4 *)(unaff_x19 + 0x74);
                          FUN_07ca88b8(0);
                          fVar16 = (float)FUN_0692a624(lVar5,0);
                          fVar16 = -fVar16;
                          *(float *)(unaff_x19 + 100) = fVar16;
                          if (*(long *)(unaff_x19 + 0x88) != 0) {
                            FUN_07d32824(*(float *)(unaff_x19 + 200) * fVar16,
                                         *(float *)(unaff_x19 + 0xcc) * fVar16,
                                         *(float *)(unaff_x19 + 0xd0) * fVar16,
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


