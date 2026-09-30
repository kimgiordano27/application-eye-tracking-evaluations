/*
FUNCTION_NAME: OVRPlugin$$CreateSpatialAnchor
ENTRY_POINT: 06951e18
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


void OVRPlugin__CreateSpatialAnchor(void)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  undefined4 *puVar5;
  long lVar6;
  float *pfVar7;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  long unaff_x23;
  float fVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fStack0000000000000058;
  float fStack000000000000005c;
  
  if (*(char *)(unaff_x20 + 0xd8f) == '\0') {
    FUN_03a8a718(PTR_DAT_084868a0);
    *(undefined1 *)(unaff_x20 + 0xd8f) = 1;
  }
  puVar5 = *(undefined4 **)(*(long *)PTR_DAT_084868a0 + 0xb8);
  uVar10 = puVar5[1];
  uVar14 = puVar5[2];
  lVar6 = *(long *)(unaff_x19 + 0x90);
  *(undefined4 *)(unaff_x19 + 0xe0) = *puVar5;
  *(undefined4 *)(unaff_x19 + 0xe4) = uVar10;
  *(undefined4 *)(unaff_x19 + 0xe8) = uVar14;
  if (lVar6 != 0) {
    lVar2 = *(long *)(unaff_x19 + 0x80);
    *(undefined4 *)(lVar6 + 0x24) = *(undefined4 *)(unaff_x19 + 0x40);
    uVar9 = NEON_rev64(*(undefined8 *)(unaff_x19 + 0x44),4);
    *(undefined8 *)(lVar6 + 0x1c) = uVar9;
    fVar11 = -*(float *)(unaff_x19 + 0x3c);
    *(float *)(lVar6 + 0x10) = *(float *)(unaff_x19 + 0x3c);
    *(float *)(lVar6 + 0x14) = fVar11;
    if (lVar2 != 0) {
                    /* try { // try from 06951e84 to 06a51e8b has its CatchHandler @ 0695232c */
      uVar10 = FUN_07cac924(lVar2,0);
      *(undefined4 *)(unaff_x19 + 200) = uVar10;
      *(float *)(unaff_x19 + 0xcc) = fVar11;
      *(undefined4 *)(unaff_x19 + 0xd0) = uVar14;
      puVar1 = PTR_DAT_08486738;
      if (*(long *)(unaff_x19 + 0x80) != 0) {
                    /* try { // try from 06951e9c to 06a51eaf has its CatchHandler @ 06952310 */
        uVar10 = FUN_07cac824(*(long *)(unaff_x19 + 0x80),0);
        lVar6 = *(long *)puVar1;
        *(undefined4 *)(unaff_x19 + 0xd4) = uVar10;
        *(float *)(unaff_x19 + 0xd8) = fVar11;
        uVar9 = *(undefined8 *)(unaff_x19 + 0x58);
        *(undefined4 *)(unaff_x19 + 0xdc) = uVar14;
        if (*(int *)(lVar6 + 0xe4) == 0) {
                    /* try { // try from 06951ec4 to 06a51edb has its CatchHandler @ 069522e4 */
          thunk_FUN_03ae8be4();
        }
        uVar3 = FUN_07c9c218(uVar9,0,0);
        if ((uVar3 & 1) != 0) {
                    /* try { // try from 06951ee4 to 06a51ef3 has its CatchHandler @ 069522f8 */
          if ((*(long *)(unaff_x19 + 0xb0) == 0) ||
             (plVar4 = *(long **)(*(long *)(unaff_x19 + 0xb0) + 0x80), plVar4 == (long *)0x0))
          goto LAB_06952554;
          lVar6 = *(long *)(unaff_x19 + 0x58);
          (**(code **)(*plVar4 + 0x2a8))(plVar4,*(undefined8 *)(*plVar4 + 0x2b0));
          if (lVar6 == 0) goto LAB_06952554;
          thunk_FUN_07cadac0(lVar6,0);
        }
        uVar9 = *(undefined8 *)(unaff_x19 + 0x50);
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        uVar3 = FUN_07c9c218(uVar9,0,0);
        if ((uVar3 & 1) != 0) {
          if ((*(long *)(unaff_x19 + 0xa8) == 0) ||
             (plVar4 = *(long **)(*(long *)(unaff_x19 + 0xa8) + 0x80), plVar4 == (long *)0x0))
          goto LAB_06952554;
          fVar18 = *(float *)(unaff_x19 + 0xb8);
          fVar19 = *(float *)(unaff_x19 + 0xbc);
          fVar17 = *(float *)(unaff_x19 + 0xc0);
          fVar20 = *(float *)(unaff_x19 + 0xc4);
          lVar6 = *(long *)(unaff_x19 + 0x50);
          uVar10 = (**(code **)(*plVar4 + 0x1e8))(plVar4,*(undefined8 *)(*plVar4 + 0x1f0));
          if (DAT_08974d89 == '\0') {
            FUN_03a8a718(PTR_DAT_084868a0);
            DAT_08974d89 = '\x01';
          }
          lVar2 = *(long *)(*(long *)PTR_DAT_084868a0 + 0xb8);
          fVar12 = *(float *)(lVar2 + 0x18);
          fVar15 = *(float *)(lVar2 + 0x1c);
          fVar16 = *(float *)(lVar2 + 0x20);
          fVar8 = (float)FUN_07c8b18c(uVar10,0);
          if (lVar6 == 0) goto LAB_06952554;
          fVar11 = (fVar17 * fVar8 + fVar20 * fVar12 + fVar19 * fVar16) - fVar18 * fVar15;
          FUN_07cac71c((fVar19 * fVar15 + fVar20 * fVar8 + fVar18 * fVar16) - fVar17 * fVar12,fVar11
                       ,(fVar18 * fVar12 + fVar20 * fVar15 + fVar17 * fVar16) - fVar19 * fVar8,
                       ((fVar20 * fVar16 - fVar18 * fVar8) - fVar19 * fVar12) - fVar17 * fVar15,
                       lVar6,0);
        }
        if (*(int *)(*(long *)PTR_DAT_08486c50 + 0xe4) == 0) {
          thunk_FUN_03ae8be4();
        }
        FUN_07d27e2c(0);
        *(float *)(unaff_x19 + 0x98) = -fVar11;
        if (*(long *)(unaff_x19 + 0x10) != 0) {
          fVar17 = (float)FUN_06926524(*(long *)(unaff_x19 + 0x10),0);
          fVar11 = DAT_015c5928;
          fStack000000000000005c = *(float *)(unaff_x19 + 0xe0);
          fStack0000000000000058 = *(float *)(unaff_x19 + 0xe4);
          fVar18 = *(float *)(unaff_x19 + 0xe8);
          *(float *)(unaff_x19 + 0x9c) = fVar17;
          *(float *)(unaff_x19 + 0xa0) = ABS(fVar17);
          if (*(float *)(unaff_x19 + 0xdc) * fVar18 +
              *(float *)(unaff_x19 + 0xd4) * fStack000000000000005c +
              *(float *)(unaff_x19 + 0xd8) * fStack0000000000000058 <= fVar11) {
            *(undefined4 *)(unaff_x19 + 0x6c) = *(undefined4 *)(unaff_x19 + 0x70);
            return;
          }
          fVar19 = *(float *)(unaff_x19 + 200);
          fVar17 = *(float *)(unaff_x19 + 0xcc);
          fVar11 = *(float *)(unaff_x19 + 0xd0);
          if (DAT_08975819 == '\0') {
            FUN_03a8a718(PTR_DAT_08487160);
            DAT_08975819 = '\x01';
          }
          puVar1 = PTR_DAT_08487160;
          fVar20 = fVar11 * fVar11 + fVar19 * fVar19 + fVar17 * fVar17;
          if (**(float **)(*(long *)PTR_DAT_08487160 + 0xb8) <= fVar20) {
            fVar8 = fVar18 * fVar11 +
                    fStack000000000000005c * fVar19 + fStack0000000000000058 * fVar17;
            fStack000000000000005c = fStack000000000000005c - (fVar19 * fVar8) / fVar20;
            fStack0000000000000058 = fStack0000000000000058 - (fVar17 * fVar8) / fVar20;
            fVar18 = fVar18 - (fVar11 * fVar8) / fVar20;
          }
          if (*(char *)(unaff_x22 + 0xd8c) == '\0') {
            FUN_03a8a718(PTR_DAT_08486c60);
            *(undefined1 *)(unaff_x22 + 0xd8c) = 1;
          }
          if (*(int *)(*unaff_x21 + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
          }
          fVar17 = *(float *)(unaff_x23 + 0xce0);
          fVar11 = SQRT(fVar18 * fVar18 +
                        fStack000000000000005c * fStack000000000000005c +
                        fStack0000000000000058 * fStack0000000000000058);
          if (fVar11 <= fVar17) {
            if (DAT_08974d8f == '\0') {
              FUN_03a8a718(PTR_DAT_084868a0);
              DAT_08974d8f = '\x01';
            }
            pfVar7 = *(float **)(*(long *)PTR_DAT_084868a0 + 0xb8);
            fStack000000000000005c = *pfVar7;
            fStack0000000000000058 = pfVar7[1];
            fVar18 = pfVar7[2];
          }
          else {
            fStack000000000000005c = fStack000000000000005c / fVar11;
            fStack0000000000000058 = fStack0000000000000058 / fVar11;
            fVar18 = fVar18 / fVar11;
          }
          fVar19 = *(float *)(unaff_x19 + 0xd8);
          fVar20 = *(float *)(unaff_x19 + 0xdc);
          fVar12 = *(float *)(unaff_x19 + 200);
          fVar8 = *(float *)(unaff_x19 + 0xcc);
          fVar15 = *(float *)(unaff_x19 + 0xd0);
          fVar11 = *(float *)(unaff_x19 + 0xd4);
          if (DAT_08975819 == '\0') {
            FUN_03a8a718(PTR_DAT_08487160);
            DAT_08975819 = '\x01';
          }
          fVar16 = fVar15 * fVar15 + fVar12 * fVar12 + fVar8 * fVar8;
          if (**(float **)(*(long *)puVar1 + 0xb8) <= fVar16) {
            fVar13 = fVar20 * fVar15 + fVar11 * fVar12 + fVar19 * fVar8;
            fVar11 = fVar11 - (fVar12 * fVar13) / fVar16;
            fVar19 = fVar19 - (fVar8 * fVar13) / fVar16;
            fVar20 = fVar20 - (fVar15 * fVar13) / fVar16;
          }
          if (*(char *)(unaff_x22 + 0xd8c) == '\0') {
            FUN_03a8a718(PTR_DAT_08486c60);
            *(undefined1 *)(unaff_x22 + 0xd8c) = 1;
          }
          if (*(int *)(*unaff_x21 + 0xe4) == 0) {
            thunk_FUN_03ae8be4();
          }
          fVar8 = SQRT(fVar20 * fVar20 + fVar11 * fVar11 + fVar19 * fVar19);
          if (fVar8 <= fVar17) {
            if (DAT_08974d8f == '\0') {
              FUN_03a8a718(PTR_DAT_084868a0);
              DAT_08974d8f = '\x01';
            }
            pfVar7 = *(float **)(*(long *)PTR_DAT_084868a0 + 0xb8);
            fVar11 = *pfVar7;
            fVar19 = pfVar7[1];
            fVar20 = pfVar7[2];
          }
          else {
            fVar11 = fVar11 / fVar8;
            fVar19 = fVar19 / fVar8;
            fVar20 = fVar20 / fVar8;
          }
          uVar10 = FUN_03ce0520(fVar11,fVar19,fVar20,fStack000000000000005c,fStack0000000000000058,
                                fVar18,0);
          *(undefined4 *)(unaff_x19 + 0x6c) = uVar10;
          if ((*(long *)(unaff_x19 + 0x10) != 0) &&
             (lVar6 = *(long *)(*(long *)(unaff_x19 + 0x10) + 0xd8), lVar6 != 0)) {
            fVar11 = (float)FUN_06960788(lVar6,0);
            if (*(long *)(unaff_x19 + 0x30) != 0) {
              fVar17 = (float)FUN_07c42008(*(undefined4 *)(unaff_x19 + 0xa0),
                                           *(long *)(unaff_x19 + 0x30),0);
              *(float *)(unaff_x19 + 0x70) = fVar11 * fVar17;
              if ((*(long *)(unaff_x19 + 0xb0) != 0) &&
                 (plVar4 = *(long **)(*(long *)(unaff_x19 + 0xb0) + 0x80), plVar4 != (long *)0x0)) {
                fVar17 = (float)(**(code **)(*plVar4 + 0x4f8))
                                          (plVar4,*(undefined8 *)(*plVar4 + 0x500));
                fVar11 = 1.0;
                if (fVar17 <= 1.0) {
                  fVar11 = fVar17;
                }
                fVar18 = -1.0;
                if (-1.0 <= fVar17) {
                  fVar18 = fVar11;
                }
                *(float *)(unaff_x19 + 0x78) = fVar18;
                if (*(long *)(unaff_x19 + 0x10) != 0) {
                  fVar17 = (float)FUN_06926524(*(long *)(unaff_x19 + 0x10),0);
                  fVar17 = fVar17 * 0.5;
                  fVar11 = 1.0;
                  if (fVar17 <= 1.0) {
                    fVar11 = fVar17;
                  }
                  fVar19 = 0.0;
                  if (0.0 <= fVar17) {
                    fVar19 = fVar11;
                  }
                  *(float *)(unaff_x19 + 0x78) = fVar18 * fVar19;
                  *(float *)(unaff_x19 + 0x70) =
                       *(float *)(unaff_x19 + 0x70) + *(float *)(unaff_x19 + 0x38) * fVar18 * fVar19
                  ;
                  if (*(long *)(unaff_x19 + 0x28) != 0) {
                    fVar18 = (float)FUN_07c42008(*(undefined4 *)(unaff_x19 + 0xa0),
                                                 *(long *)(unaff_x19 + 0x28),0);
                    fVar17 = *(float *)(unaff_x19 + 0x70);
                    fVar8 = *(float *)(unaff_x19 + 0x74);
                    fVar19 = (float)FUN_07ca88b8(0);
                    fVar20 = fVar17 - fVar8;
                    fVar20 = fVar20 + (float)(int)(fVar20 / 360.0) * -360.0;
                    fVar11 = 360.0;
                    if (fVar20 <= 360.0) {
                      fVar11 = fVar20;
                    }
                    fVar12 = 0.0;
                    if (0.0 <= fVar20) {
                      fVar12 = fVar11;
                    }
                    fVar11 = fVar12 + -360.0;
                    if (fVar12 <= 180.0) {
                      fVar11 = fVar12;
                    }
                    fVar20 = fVar18 * fVar19;
                    if ((fVar11 <= -(fVar18 * fVar19)) || (fVar20 <= fVar11)) {
                      fVar11 = fVar8 + fVar11;
                      fVar17 = -(fVar18 * fVar19);
                      if (0.0 <= fVar11 - fVar8) {
                        fVar17 = fVar20;
                      }
                      fVar17 = fVar8 + fVar17;
                      if (ABS(fVar11 - fVar8) <= fVar20) {
                        fVar17 = fVar11;
                      }
                    }
                    lVar6 = *(long *)(unaff_x19 + 0x90);
                    *(float *)(unaff_x19 + 0x74) = fVar17;
                    if (lVar6 != 0) {
                      fVar19 = *(float *)(unaff_x19 + 0x48);
                      fVar11 = *(float *)(unaff_x19 + 0x4c);
                      fVar17 = *(float *)(unaff_x19 + 0x40);
                      fVar18 = *(float *)(unaff_x19 + 0x44);
                      *(undefined4 *)(lVar6 + 0x10) = *(undefined4 *)(unaff_x19 + 0x3c);
                      uVar10 = *(undefined4 *)(unaff_x19 + 0x6c);
                      *(float *)(lVar6 + 0x1c) = fVar11 * fVar19;
                      *(float *)(lVar6 + 0x20) = fVar11 * fVar18;
                      *(float *)(lVar6 + 0x24) = fVar11 * fVar17;
                      FUN_0692a5f4(uVar10,lVar6,0);
                      lVar6 = *(long *)(unaff_x19 + 0x90);
                      if (lVar6 != 0) {
                        *(undefined4 *)(lVar6 + 0x30) = *(undefined4 *)(unaff_x19 + 0x74);
                        FUN_07ca88b8(0);
                        fVar11 = (float)FUN_0692a624(lVar6,0);
                        fVar11 = -fVar11;
                        *(float *)(unaff_x19 + 100) = fVar11;
                        if (*(long *)(unaff_x19 + 0x88) != 0) {
                          FUN_07d32824(*(float *)(unaff_x19 + 200) * fVar11,
                                       *(float *)(unaff_x19 + 0xcc) * fVar11,
                                       *(float *)(unaff_x19 + 0xd0) * fVar11,
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
LAB_06952554:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


