/*
FUNCTION_NAME: Meta.XR.Experimental.ShaderPrewarmer.SimpleSimController$$Update
ENTRY_POINT: 0319e138
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

void Meta_XR_Experimental_ShaderPrewarmer_SimpleSimController__Update
               (float param_1,float param_2,float param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined4 *puVar3;
  long lVar4;
  long unaff_x19;
  long unaff_x20;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  float fVar21;
  ulong uVar22;
  float fVar23;
  float unaff_s8;
  undefined4 uVar24;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  undefined4 uVar25;
  float unaff_s12;
  float unaff_s13;
  
                    /* try { // try from 0319e148 to 0329e1ab has its CatchHandler @ 0319e148
                       catch() { ... } // from try @ 0319e148 with catch @ 0319e148
                       catch() { ... } // from try @ 0319e1fc with catch @ 0319e148 */
  fVar5 = *(float *)(unaff_x19 + 0x20);
  if (*(float *)(unaff_x19 + 0x20) < 0.0) {
    fVar5 = 0.0;
  }
  if (unaff_x20 != 0) {
    fVar23 = *(float *)(unaff_x19 + 0x24);
    FUN_06904354(unaff_s11 + ((unaff_s8 + param_1 * fVar23) - unaff_s11) * fVar5,
                 unaff_s12 + ((unaff_s9 + param_2 * fVar23) - unaff_s12) * fVar5,
                 unaff_s13 + ((unaff_s10 + param_3 * fVar23) - unaff_s13) * fVar5);
    lVar2 = FUN_068f5d7c();
                    /* try { // try from 0319e1ac to 0329e1fb has its CatchHandler @ 0319e200 */
    if (*(long *)(unaff_x19 + 0x70) != 0) {
      uVar18 = (ulong)*(uint *)(unaff_x19 + 0x3c);
      uVar24 = *(undefined4 *)(unaff_x19 + 0x40);
      uVar25 = *(undefined4 *)(unaff_x19 + 0x34);
      uVar12 = (ulong)*(uint *)(unaff_x19 + 0x38);
      FUN_0690449c(*(long *)(unaff_x19 + 0x70),0);
                    /* try { // try from 0319e1fc to 0329e213 has its CatchHandler @ 0319e148 */
                    /* catch() { ... } // from try @ 0319e1ac with catch @ 0319e200 */
                    /* try { // try from 0319e25c to 0329e2df has its CatchHandler @ 0319e25c
                       catch() { ... } // from try @ 0319e25c with catch @ 0319e25c
                       catch() { ... } // from try @ 0319e348 with catch @ 0319e25c */
      FUN_068ecc2c(uVar25,0);
      if (lVar2 != 0) {
        FUN_06904520(lVar2,0);
        if ((*(long *)(unaff_x19 + 0x98) != 0) &&
           (lVar2 = *(long *)(*(long *)(unaff_x19 + 0x98) + 0x48), lVar2 != 0)) {
          lVar2 = FUN_03153f8c(lVar2,0);
          if ((*(long *)(unaff_x19 + 0x50) != 0) &&
             (uVar25 = FUN_069042b4(*(long *)(unaff_x19 + 0x50),0), lVar2 != 0)) {
            *(undefined4 *)(lVar2 + 0x28) = uVar25;
            *(int *)(lVar2 + 0x2c) = (int)uVar12;
            *(int *)(lVar2 + 0x30) = (int)uVar18;
            if ((*(long *)(unaff_x19 + 0x98) != 0) &&
               (lVar2 = *(long *)(*(long *)(unaff_x19 + 0x98) + 0x48), lVar2 != 0)) {
              lVar2 = FUN_03153f8c(lVar2,0);
              if ((*(long *)(unaff_x19 + 0x50) != 0) &&
                 (uVar25 = FUN_0690449c(*(long *)(unaff_x19 + 0x50),0), lVar2 != 0)) {
                *(undefined4 *)(lVar2 + 0x34) = uVar25;
                *(int *)(lVar2 + 0x38) = (int)uVar12;
                *(int *)(lVar2 + 0x3c) = (int)uVar18;
                *(undefined4 *)(lVar2 + 0x40) = uVar24;
                if (((*(long *)(unaff_x19 + 0x98) != 0) &&
                    (lVar2 = *(long *)(*(long *)(unaff_x19 + 0x98) + 0x40), lVar2 != 0)) &&
                   (lVar2 = *(long *)(lVar2 + 0x18), lVar2 != 0)) {
                  FUN_0690449c(lVar2,0);
                  uVar8 = FUN_068ed2ec(0);
                  if (*(long *)(unaff_x19 + 0x58) != 0) {
                    uVar13 = uVar12;
                    uVar19 = uVar18;
                    fVar5 = (float)FUN_069042b4(*(long *)(unaff_x19 + 0x58),0);
                    if (*(long *)(unaff_x19 + 0x80) != 0) {
                      fVar23 = (float)uVar13;
                      fVar15 = (float)uVar19;
                      fVar6 = (float)FUN_069042b4(*(long *)(unaff_x19 + 0x80),0);
                      uVar22 = (ulong)(uint)(fVar5 - fVar6);
                      uVar14 = uVar12;
                      uVar20 = uVar18;
                      uVar9 = FUN_068ec938(uVar8,uVar12,uVar18,uVar22,(float)uVar13 - fVar23,
                                           (float)uVar19 - fVar15,0);
                      if ((*(long *)(unaff_x19 + 0x98) != 0) &&
                         (lVar2 = *(long *)(*(long *)(unaff_x19 + 0x98) + 0x40), lVar2 != 0)) {
                        lVar2 = *(long *)(lVar2 + 0x68);
                        if (DAT_0738e663 == '\0') {
                          FUN_02fe925c(PTR_DAT_06f6d7e8);
                          DAT_0738e663 = '\x01';
                        }
                        puVar1 = PTR_DAT_06f6d7e8;
                        puVar3 = *(undefined4 **)(*(long *)PTR_DAT_06f6d7e8 + 0xb8);
                        fVar23 = (float)puVar3[1];
                        fVar15 = (float)puVar3[2];
                        fVar6 = (float)puVar3[3];
                        fVar5 = (float)FUN_068ecc2c(*puVar3,fVar23,fVar15,fVar6,uVar9,uVar14,uVar20,
                                                    uVar22,0);
                        if (((*(long *)(unaff_x19 + 0x98) != 0) &&
                            (lVar4 = *(long *)(*(long *)(unaff_x19 + 0x98) + 0x40), lVar4 != 0)) &&
                           ((lVar4 = *(long *)(lVar4 + 0x68), lVar4 != 0 &&
                            (fVar21 = fVar6, fVar16 = fVar15, fVar10 = fVar23,
                            fVar7 = (float)FUN_0690449c(lVar4,0), lVar2 != 0)))) {
                          fVar17 = (fVar5 * fVar10 + fVar6 * fVar16 + fVar15 * fVar21) -
                                   fVar23 * fVar7;
                          fVar11 = (fVar15 * fVar7 + fVar6 * fVar10 + fVar23 * fVar21) -
                                   fVar5 * fVar16;
                          FUN_06904520((fVar23 * fVar16 + fVar6 * fVar7 + fVar5 * fVar21) -
                                       fVar15 * fVar10,fVar11,fVar17,
                                       ((fVar6 * fVar21 - fVar5 * fVar7) - fVar23 * fVar10) -
                                       fVar15 * fVar16,lVar2,0);
                          if (*(long *)(unaff_x19 + 0x60) != 0) {
                            fVar5 = (float)FUN_069042b4(*(long *)(unaff_x19 + 0x60),0);
                            if (*(long *)(unaff_x19 + 0x78) != 0) {
                              fVar23 = fVar11;
                              fVar15 = fVar17;
                              fVar6 = (float)FUN_069042b4(*(long *)(unaff_x19 + 0x78),0);
                              uVar14 = (ulong)(uint)(fVar5 - fVar6);
                              uVar13 = uVar12;
                              uVar19 = uVar18;
                              uVar9 = FUN_068ec938(uVar8,uVar12,uVar18,uVar14,fVar11 - fVar23,
                                                   fVar17 - fVar15,0);
                              if ((*(long *)(unaff_x19 + 0x98) != 0) &&
                                 (lVar2 = *(long *)(*(long *)(unaff_x19 + 0x98) + 0x40), lVar2 != 0)
                                 ) {
                                lVar2 = *(long *)(lVar2 + 0x20);
                                if (DAT_0738e663 == '\0') {
                                  FUN_02fe925c(PTR_DAT_06f6d7e8);
                                  DAT_0738e663 = '\x01';
                                }
                                puVar3 = *(undefined4 **)(*(long *)puVar1 + 0xb8);
                                fVar23 = (float)puVar3[1];
                                fVar15 = (float)puVar3[2];
                                fVar6 = (float)puVar3[3];
                                fVar5 = (float)FUN_068ecc2c(*puVar3,fVar23,fVar15,fVar6,uVar9,uVar13
                                                            ,uVar19,uVar14,0);
                                if ((((*(long *)(unaff_x19 + 0x98) != 0) &&
                                     (lVar4 = *(long *)(*(long *)(unaff_x19 + 0x98) + 0x40),
                                     lVar4 != 0)) && (lVar4 = *(long *)(lVar4 + 0x20), lVar4 != 0))
                                   && (fVar21 = fVar6, fVar16 = fVar15, fVar10 = fVar23,
                                      fVar7 = (float)FUN_0690449c(lVar4,0), lVar2 != 0)) {
                                  fVar17 = (fVar5 * fVar10 + fVar6 * fVar16 + fVar15 * fVar21) -
                                           fVar23 * fVar7;
                                  fVar11 = (fVar15 * fVar7 + fVar6 * fVar10 + fVar23 * fVar21) -
                                           fVar5 * fVar16;
                                  FUN_06904520((fVar23 * fVar16 + fVar6 * fVar7 + fVar5 * fVar21) -
                                               fVar15 * fVar10,fVar11,fVar17,
                                               ((fVar6 * fVar21 - fVar5 * fVar7) - fVar23 * fVar10)
                                               - fVar15 * fVar16,lVar2,0);
                                  if (*(long *)(unaff_x19 + 0x68) != 0) {
                                    fVar5 = (float)FUN_069042b4(*(long *)(unaff_x19 + 0x68),0);
                                    if (*(long *)(unaff_x19 + 0x78) != 0) {
                                      fVar23 = fVar11;
                                      fVar15 = fVar17;
                                      fVar6 = (float)FUN_069042b4(*(long *)(unaff_x19 + 0x78),0);
                                      uVar13 = (ulong)(uint)(fVar5 - fVar6);
                                      uVar8 = FUN_068ec938(uVar8,uVar12,uVar18,uVar13,
                                                           fVar11 - fVar23,fVar17 - fVar15,0);
                                      if ((*(long *)(unaff_x19 + 0x98) != 0) &&
                                         (lVar2 = *(long *)(*(long *)(unaff_x19 + 0x98) + 0x40),
                                         lVar2 != 0)) {
                                        lVar2 = *(long *)(lVar2 + 0x38);
                                        if (DAT_0738e663 == '\0') {
                                          FUN_02fe925c(PTR_DAT_06f6d7e8);
                                          DAT_0738e663 = '\x01';
                                        }
                                        puVar3 = *(undefined4 **)(*(long *)puVar1 + 0xb8);
                                        fVar23 = (float)puVar3[1];
                                        fVar15 = (float)puVar3[2];
                                        fVar6 = (float)puVar3[3];
                                        fVar5 = (float)FUN_068ecc2c(*puVar3,fVar23,fVar15,fVar6,
                                                                    uVar8,uVar12,uVar18,uVar13,0);
                                        if (((*(long *)(unaff_x19 + 0x98) != 0) &&
                                            (lVar4 = *(long *)(*(long *)(unaff_x19 + 0x98) + 0x40),
                                            lVar4 != 0)) &&
                                           ((lVar4 = *(long *)(lVar4 + 0x38), lVar4 != 0 &&
                                            (fVar21 = fVar6, fVar16 = fVar23, fVar10 = fVar15,
                                            fVar7 = (float)FUN_0690449c(lVar4,0), lVar2 != 0)))) {
                                          FUN_06904520((fVar23 * fVar10 +
                                                       fVar6 * fVar7 + fVar5 * fVar21) -
                                                       fVar15 * fVar16,
                                                       (fVar15 * fVar7 +
                                                       fVar6 * fVar16 + fVar23 * fVar21) -
                                                       fVar5 * fVar10,
                                                       (fVar5 * fVar16 +
                                                       fVar6 * fVar10 + fVar15 * fVar21) -
                                                       fVar23 * fVar7,
                                                       ((fVar6 * fVar21 - fVar5 * fVar7) -
                                                       fVar23 * fVar16) - fVar15 * fVar10,lVar2,0);
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
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


