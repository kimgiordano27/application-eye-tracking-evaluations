/*
FUNCTION_NAME: Meta.XR.Experimental.ShaderPrewarmer.SimpleSimController$$Start
ENTRY_POINT: 0319e088
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x0319e140) */

void Meta_XR_Experimental_ShaderPrewarmer_SimpleSimController__Start
               (undefined1 param_1 [16],float param_2,float param_3)

{
  undefined *puVar1;
  char in_NG;
  bool in_ZR;
  char in_OV;
  long lVar2;
  undefined4 *puVar3;
  long lVar4;
  long unaff_x19;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  float fVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  float fVar13;
  float fVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  float fVar18;
  ulong uVar19;
  float fVar20;
  undefined4 uVar21;
  float fVar22;
  undefined4 uVar23;
  float fVar24;
  float fVar25;
  
  if (!in_ZR && in_NG == in_OV) {
    if (((*(long *)(unaff_x19 + 0x98) == 0) ||
        (lVar2 = *(long *)(*(long *)(unaff_x19 + 0x98) + 0x48), lVar2 == 0)) ||
       (lVar2 = FUN_03153f8c(lVar2,0), lVar2 == 0)) goto LAB_0319e7bc;
    *(undefined4 *)(lVar2 + 0x20) = 0;
    if (((*(long *)(unaff_x19 + 0x98) == 0) ||
        (lVar2 = *(long *)(*(long *)(unaff_x19 + 0x98) + 0x48), lVar2 == 0)) ||
       (lVar2 = FUN_03153f8c(lVar2,0), lVar2 == 0)) goto LAB_0319e7bc;
    *(undefined4 *)(lVar2 + 0x24) = 0;
  }
  *(float *)(unaff_x19 + 0xbc) = *(float *)(unaff_x19 + 0x20);
  if (*(float *)(unaff_x19 + 0x20) <= 0.0) {
    return;
  }
  lVar2 = FUN_068f5d7c();
  if (*(long *)(unaff_x19 + 0x70) != 0) {
    fVar22 = *(float *)(unaff_x19 + 0x28);
    fVar24 = *(float *)(unaff_x19 + 0x2c);
    fVar25 = *(float *)(unaff_x19 + 0x30);
    fVar5 = (float)FUN_069042b4(*(long *)(unaff_x19 + 0x70),0);
    if (*(long *)(unaff_x19 + 0x70) != 0) {
      fVar13 = param_3;
      fVar9 = param_2;
      FUN_0690449c(*(long *)(unaff_x19 + 0x70),0);
                    /* try { // try from 0319e128 to 0329e12f has its CatchHandler @ 0319e134 */
      fVar6 = (float)FUN_068ed2ec(0);
      fVar18 = *(float *)(unaff_x19 + 0x20);
      if (*(float *)(unaff_x19 + 0x20) < 0.0) {
        fVar18 = 0.0;
      }
      if (lVar2 != 0) {
        fVar20 = *(float *)(unaff_x19 + 0x24);
        FUN_06904354(fVar22 + ((fVar5 + fVar6 * fVar20) - fVar22) * fVar18,
                     fVar24 + ((param_2 + fVar9 * fVar20) - fVar24) * fVar18,
                     fVar25 + ((param_3 + fVar13 * fVar20) - fVar25) * fVar18,lVar2,0);
        lVar2 = FUN_068f5d7c();
        if (*(long *)(unaff_x19 + 0x70) != 0) {
          uVar15 = (ulong)*(uint *)(unaff_x19 + 0x3c);
          uVar21 = *(undefined4 *)(unaff_x19 + 0x40);
          uVar23 = *(undefined4 *)(unaff_x19 + 0x34);
          uVar10 = (ulong)*(uint *)(unaff_x19 + 0x38);
          FUN_0690449c(*(long *)(unaff_x19 + 0x70),0);
          FUN_068ecc2c(uVar23,0);
          if (lVar2 != 0) {
            FUN_06904520(lVar2,0);
            if ((*(long *)(unaff_x19 + 0x98) != 0) &&
               (lVar2 = *(long *)(*(long *)(unaff_x19 + 0x98) + 0x48), lVar2 != 0)) {
              lVar2 = FUN_03153f8c(lVar2,0);
              if ((*(long *)(unaff_x19 + 0x50) != 0) &&
                 (uVar23 = FUN_069042b4(*(long *)(unaff_x19 + 0x50),0), lVar2 != 0)) {
                *(undefined4 *)(lVar2 + 0x28) = uVar23;
                *(int *)(lVar2 + 0x2c) = (int)uVar10;
                *(int *)(lVar2 + 0x30) = (int)uVar15;
                if ((*(long *)(unaff_x19 + 0x98) != 0) &&
                   (lVar2 = *(long *)(*(long *)(unaff_x19 + 0x98) + 0x48), lVar2 != 0)) {
                  lVar2 = FUN_03153f8c(lVar2,0);
                  if ((*(long *)(unaff_x19 + 0x50) != 0) &&
                     (uVar23 = FUN_0690449c(*(long *)(unaff_x19 + 0x50),0), lVar2 != 0)) {
                    *(undefined4 *)(lVar2 + 0x34) = uVar23;
                    *(int *)(lVar2 + 0x38) = (int)uVar10;
                    *(int *)(lVar2 + 0x3c) = (int)uVar15;
                    *(undefined4 *)(lVar2 + 0x40) = uVar21;
                    if (((*(long *)(unaff_x19 + 0x98) != 0) &&
                        (lVar2 = *(long *)(*(long *)(unaff_x19 + 0x98) + 0x40), lVar2 != 0)) &&
                       (lVar2 = *(long *)(lVar2 + 0x18), lVar2 != 0)) {
                      FUN_0690449c(lVar2,0);
                      uVar7 = FUN_068ed2ec(0);
                      if (*(long *)(unaff_x19 + 0x58) != 0) {
                        uVar11 = uVar10;
                        uVar16 = uVar15;
                        fVar5 = (float)FUN_069042b4(*(long *)(unaff_x19 + 0x58),0);
                        if (*(long *)(unaff_x19 + 0x80) != 0) {
                          fVar22 = (float)uVar11;
                          fVar24 = (float)uVar16;
                          fVar25 = (float)FUN_069042b4(*(long *)(unaff_x19 + 0x80),0);
                          uVar19 = (ulong)(uint)(fVar5 - fVar25);
                          uVar12 = uVar10;
                          uVar17 = uVar15;
                          uVar8 = FUN_068ec938(uVar7,uVar10,uVar15,uVar19,(float)uVar11 - fVar22,
                                               (float)uVar16 - fVar24,0);
                          if ((*(long *)(unaff_x19 + 0x98) != 0) &&
                             (lVar2 = *(long *)(*(long *)(unaff_x19 + 0x98) + 0x40), lVar2 != 0)) {
                            lVar2 = *(long *)(lVar2 + 0x68);
                            if (DAT_0738e663 == '\0') {
                              FUN_02fe925c(PTR_DAT_06f6d7e8);
                              DAT_0738e663 = '\x01';
                            }
                            puVar1 = PTR_DAT_06f6d7e8;
                            puVar3 = *(undefined4 **)(*(long *)PTR_DAT_06f6d7e8 + 0xb8);
                            fVar22 = (float)puVar3[1];
                            fVar24 = (float)puVar3[2];
                            fVar25 = (float)puVar3[3];
                            fVar5 = (float)FUN_068ecc2c(*puVar3,fVar22,fVar24,fVar25,uVar8,uVar12,
                                                        uVar17,uVar19,0);
                            if (((*(long *)(unaff_x19 + 0x98) != 0) &&
                                (lVar4 = *(long *)(*(long *)(unaff_x19 + 0x98) + 0x40), lVar4 != 0))
                               && ((lVar4 = *(long *)(lVar4 + 0x68), lVar4 != 0 &&
                                   (fVar18 = fVar25, fVar13 = fVar24, fVar9 = fVar22,
                                   fVar6 = (float)FUN_0690449c(lVar4,0), lVar2 != 0)))) {
                              fVar14 = (fVar5 * fVar9 + fVar25 * fVar13 + fVar24 * fVar18) -
                                       fVar22 * fVar6;
                              fVar20 = (fVar24 * fVar6 + fVar25 * fVar9 + fVar22 * fVar18) -
                                       fVar5 * fVar13;
                              FUN_06904520((fVar22 * fVar13 + fVar25 * fVar6 + fVar5 * fVar18) -
                                           fVar24 * fVar9,fVar20,fVar14,
                                           ((fVar25 * fVar18 - fVar5 * fVar6) - fVar22 * fVar9) -
                                           fVar24 * fVar13,lVar2,0);
                              if (*(long *)(unaff_x19 + 0x60) != 0) {
                                fVar5 = (float)FUN_069042b4(*(long *)(unaff_x19 + 0x60),0);
                                if (*(long *)(unaff_x19 + 0x78) != 0) {
                                  fVar22 = fVar20;
                                  fVar24 = fVar14;
                                  fVar25 = (float)FUN_069042b4(*(long *)(unaff_x19 + 0x78),0);
                                  uVar12 = (ulong)(uint)(fVar5 - fVar25);
                                  uVar11 = uVar10;
                                  uVar16 = uVar15;
                                  uVar8 = FUN_068ec938(uVar7,uVar10,uVar15,uVar12,fVar20 - fVar22,
                                                       fVar14 - fVar24,0);
                                  if ((*(long *)(unaff_x19 + 0x98) != 0) &&
                                     (lVar2 = *(long *)(*(long *)(unaff_x19 + 0x98) + 0x40),
                                     lVar2 != 0)) {
                                    lVar2 = *(long *)(lVar2 + 0x20);
                                    if (DAT_0738e663 == '\0') {
                                      FUN_02fe925c(PTR_DAT_06f6d7e8);
                                      DAT_0738e663 = '\x01';
                                    }
                                    puVar3 = *(undefined4 **)(*(long *)puVar1 + 0xb8);
                                    fVar22 = (float)puVar3[1];
                                    fVar24 = (float)puVar3[2];
                                    fVar25 = (float)puVar3[3];
                                    fVar5 = (float)FUN_068ecc2c(*puVar3,fVar22,fVar24,fVar25,uVar8,
                                                                uVar11,uVar16,uVar12,0);
                                    if ((((*(long *)(unaff_x19 + 0x98) != 0) &&
                                         (lVar4 = *(long *)(*(long *)(unaff_x19 + 0x98) + 0x40),
                                         lVar4 != 0)) &&
                                        (lVar4 = *(long *)(lVar4 + 0x20), lVar4 != 0)) &&
                                       (fVar18 = fVar25, fVar13 = fVar24, fVar9 = fVar22,
                                       fVar6 = (float)FUN_0690449c(lVar4,0), lVar2 != 0)) {
                                      fVar14 = (fVar5 * fVar9 + fVar25 * fVar13 + fVar24 * fVar18) -
                                               fVar22 * fVar6;
                                      fVar20 = (fVar24 * fVar6 + fVar25 * fVar9 + fVar22 * fVar18) -
                                               fVar5 * fVar13;
                                      FUN_06904520((fVar22 * fVar13 +
                                                   fVar25 * fVar6 + fVar5 * fVar18) - fVar24 * fVar9
                                                   ,fVar20,fVar14,
                                                   ((fVar25 * fVar18 - fVar5 * fVar6) -
                                                   fVar22 * fVar9) - fVar24 * fVar13,lVar2,0);
                                      if (*(long *)(unaff_x19 + 0x68) != 0) {
                                        fVar5 = (float)FUN_069042b4(*(long *)(unaff_x19 + 0x68),0);
                                        if (*(long *)(unaff_x19 + 0x78) != 0) {
                                          fVar22 = fVar20;
                                          fVar24 = fVar14;
                                          fVar25 = (float)FUN_069042b4(*(long *)(unaff_x19 + 0x78),0
                                                                      );
                                          uVar11 = (ulong)(uint)(fVar5 - fVar25);
                                          uVar7 = FUN_068ec938(uVar7,uVar10,uVar15,uVar11,
                                                               fVar20 - fVar22,fVar14 - fVar24,0);
                                          if ((*(long *)(unaff_x19 + 0x98) != 0) &&
                                             (lVar2 = *(long *)(*(long *)(unaff_x19 + 0x98) + 0x40),
                                             lVar2 != 0)) {
                                            lVar2 = *(long *)(lVar2 + 0x38);
                                            if (DAT_0738e663 == '\0') {
                                              FUN_02fe925c(PTR_DAT_06f6d7e8);
                                              DAT_0738e663 = '\x01';
                                            }
                                            puVar3 = *(undefined4 **)(*(long *)puVar1 + 0xb8);
                                            fVar22 = (float)puVar3[1];
                                            fVar24 = (float)puVar3[2];
                                            fVar25 = (float)puVar3[3];
                                            fVar5 = (float)FUN_068ecc2c(*puVar3,fVar22,fVar24,fVar25
                                                                        ,uVar7,uVar10,uVar15,uVar11,
                                                                        0);
                                            if (((*(long *)(unaff_x19 + 0x98) != 0) &&
                                                (lVar4 = *(long *)(*(long *)(unaff_x19 + 0x98) +
                                                                  0x40), lVar4 != 0)) &&
                                               ((lVar4 = *(long *)(lVar4 + 0x38), lVar4 != 0 &&
                                                (fVar18 = fVar25, fVar13 = fVar22, fVar9 = fVar24,
                                                fVar6 = (float)FUN_0690449c(lVar4,0), lVar2 != 0))))
                                            {
                                              FUN_06904520((fVar22 * fVar9 +
                                                           fVar25 * fVar6 + fVar5 * fVar18) -
                                                           fVar24 * fVar13,
                                                           (fVar24 * fVar6 +
                                                           fVar25 * fVar13 + fVar22 * fVar18) -
                                                           fVar5 * fVar9,
                                                           (fVar5 * fVar13 +
                                                           fVar25 * fVar9 + fVar24 * fVar18) -
                                                           fVar22 * fVar6,
                                                           ((fVar25 * fVar18 - fVar5 * fVar6) -
                                                           fVar22 * fVar13) - fVar24 * fVar9,lVar2,0
                                                          );
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
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_0319e7bc:
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


