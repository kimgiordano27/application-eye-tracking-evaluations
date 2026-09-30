/*
FUNCTION_NAME: Meta.XR.Experimental.ShaderPrewarmer.SimpleSimController$$StartGameSimSpawning
ENTRY_POINT: 0319e12c
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

void Meta_XR_Experimental_ShaderPrewarmer_SimpleSimController__StartGameSimSpawning
               (undefined1 param_1 [16],float param_2,float param_3)

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
  float fVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  float fVar11;
  float fVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
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
  
                    /* try { // try from 0319e130 to 0329e147 has its CatchHandler @ 0319e07c */
                    /* catch() { ... } // from try @ 0319e128 with catch @ 0319e134 */
  fVar5 = (float)FUN_068ed2ec(0);
  fVar6 = *(float *)(unaff_x19 + 0x20);
  if (*(float *)(unaff_x19 + 0x20) < 0.0) {
    fVar6 = 0.0;
  }
  if (unaff_x20 != 0) {
    fVar23 = *(float *)(unaff_x19 + 0x24);
    FUN_06904354(unaff_s11 + ((unaff_s8 + fVar5 * fVar23) - unaff_s11) * fVar6,
                 unaff_s12 + ((unaff_s9 + param_2 * fVar23) - unaff_s12) * fVar6,
                 unaff_s13 + ((unaff_s10 + param_3 * fVar23) - unaff_s13) * fVar6);
    lVar2 = FUN_068f5d7c();
    if (*(long *)(unaff_x19 + 0x70) != 0) {
      uVar18 = (ulong)*(uint *)(unaff_x19 + 0x3c);
      uVar24 = *(undefined4 *)(unaff_x19 + 0x40);
      uVar25 = *(undefined4 *)(unaff_x19 + 0x34);
      uVar13 = (ulong)*(uint *)(unaff_x19 + 0x38);
      FUN_0690449c(*(long *)(unaff_x19 + 0x70),0);
      FUN_068ecc2c(uVar25,0);
      if (lVar2 != 0) {
        FUN_06904520(lVar2,0);
        if ((*(long *)(unaff_x19 + 0x98) != 0) &&
           (lVar2 = *(long *)(*(long *)(unaff_x19 + 0x98) + 0x48), lVar2 != 0)) {
          lVar2 = FUN_03153f8c(lVar2,0);
          if ((*(long *)(unaff_x19 + 0x50) != 0) &&
             (uVar25 = FUN_069042b4(*(long *)(unaff_x19 + 0x50),0), lVar2 != 0)) {
            *(undefined4 *)(lVar2 + 0x28) = uVar25;
            *(int *)(lVar2 + 0x2c) = (int)uVar13;
            *(int *)(lVar2 + 0x30) = (int)uVar18;
            if ((*(long *)(unaff_x19 + 0x98) != 0) &&
               (lVar2 = *(long *)(*(long *)(unaff_x19 + 0x98) + 0x48), lVar2 != 0)) {
              lVar2 = FUN_03153f8c(lVar2,0);
              if ((*(long *)(unaff_x19 + 0x50) != 0) &&
                 (uVar25 = FUN_0690449c(*(long *)(unaff_x19 + 0x50),0), lVar2 != 0)) {
                *(undefined4 *)(lVar2 + 0x34) = uVar25;
                *(int *)(lVar2 + 0x38) = (int)uVar13;
                *(int *)(lVar2 + 0x3c) = (int)uVar18;
                *(undefined4 *)(lVar2 + 0x40) = uVar24;
                if (((*(long *)(unaff_x19 + 0x98) != 0) &&
                    (lVar2 = *(long *)(*(long *)(unaff_x19 + 0x98) + 0x40), lVar2 != 0)) &&
                   (lVar2 = *(long *)(lVar2 + 0x18), lVar2 != 0)) {
                  FUN_0690449c(lVar2,0);
                  uVar9 = FUN_068ed2ec(0);
                  if (*(long *)(unaff_x19 + 0x58) != 0) {
                    uVar14 = uVar13;
                    uVar19 = uVar18;
                    fVar6 = (float)FUN_069042b4(*(long *)(unaff_x19 + 0x58),0);
                    if (*(long *)(unaff_x19 + 0x80) != 0) {
                      fVar5 = (float)uVar14;
                      fVar23 = (float)uVar19;
                      fVar7 = (float)FUN_069042b4(*(long *)(unaff_x19 + 0x80),0);
                      uVar22 = (ulong)(uint)(fVar6 - fVar7);
                      uVar15 = uVar13;
                      uVar20 = uVar18;
                      uVar10 = FUN_068ec938(uVar9,uVar13,uVar18,uVar22,(float)uVar14 - fVar5,
                                            (float)uVar19 - fVar23,0);
                      if ((*(long *)(unaff_x19 + 0x98) != 0) &&
                         (lVar2 = *(long *)(*(long *)(unaff_x19 + 0x98) + 0x40), lVar2 != 0)) {
                        lVar2 = *(long *)(lVar2 + 0x68);
                        if (DAT_0738e663 == '\0') {
                          FUN_02fe925c(PTR_DAT_06f6d7e8);
                          DAT_0738e663 = '\x01';
                        }
                        puVar1 = PTR_DAT_06f6d7e8;
                        puVar3 = *(undefined4 **)(*(long *)PTR_DAT_06f6d7e8 + 0xb8);
                        fVar5 = (float)puVar3[1];
                        fVar23 = (float)puVar3[2];
                        fVar7 = (float)puVar3[3];
                        fVar6 = (float)FUN_068ecc2c(*puVar3,fVar5,fVar23,fVar7,uVar10,uVar15,uVar20,
                                                    uVar22,0);
                        if (((*(long *)(unaff_x19 + 0x98) != 0) &&
                            (lVar4 = *(long *)(*(long *)(unaff_x19 + 0x98) + 0x40), lVar4 != 0)) &&
                           ((lVar4 = *(long *)(lVar4 + 0x68), lVar4 != 0 &&
                            (fVar21 = fVar7, fVar16 = fVar23, fVar11 = fVar5,
                            fVar8 = (float)FUN_0690449c(lVar4,0), lVar2 != 0)))) {
                          fVar17 = (fVar6 * fVar11 + fVar7 * fVar16 + fVar23 * fVar21) -
                                   fVar5 * fVar8;
                          fVar12 = (fVar23 * fVar8 + fVar7 * fVar11 + fVar5 * fVar21) -
                                   fVar6 * fVar16;
                          FUN_06904520((fVar5 * fVar16 + fVar7 * fVar8 + fVar6 * fVar21) -
                                       fVar23 * fVar11,fVar12,fVar17,
                                       ((fVar7 * fVar21 - fVar6 * fVar8) - fVar5 * fVar11) -
                                       fVar23 * fVar16,lVar2,0);
                          if (*(long *)(unaff_x19 + 0x60) != 0) {
                            fVar6 = (float)FUN_069042b4(*(long *)(unaff_x19 + 0x60),0);
                            if (*(long *)(unaff_x19 + 0x78) != 0) {
                              fVar5 = fVar12;
                              fVar23 = fVar17;
                              fVar7 = (float)FUN_069042b4(*(long *)(unaff_x19 + 0x78),0);
                              uVar15 = (ulong)(uint)(fVar6 - fVar7);
                              uVar14 = uVar13;
                              uVar19 = uVar18;
                              uVar10 = FUN_068ec938(uVar9,uVar13,uVar18,uVar15,fVar12 - fVar5,
                                                    fVar17 - fVar23,0);
                              if ((*(long *)(unaff_x19 + 0x98) != 0) &&
                                 (lVar2 = *(long *)(*(long *)(unaff_x19 + 0x98) + 0x40), lVar2 != 0)
                                 ) {
                                lVar2 = *(long *)(lVar2 + 0x20);
                                if (DAT_0738e663 == '\0') {
                                  FUN_02fe925c(PTR_DAT_06f6d7e8);
                                  DAT_0738e663 = '\x01';
                                }
                                puVar3 = *(undefined4 **)(*(long *)puVar1 + 0xb8);
                                fVar5 = (float)puVar3[1];
                                fVar23 = (float)puVar3[2];
                                fVar7 = (float)puVar3[3];
                                fVar6 = (float)FUN_068ecc2c(*puVar3,fVar5,fVar23,fVar7,uVar10,uVar14
                                                            ,uVar19,uVar15,0);
                                if ((((*(long *)(unaff_x19 + 0x98) != 0) &&
                                     (lVar4 = *(long *)(*(long *)(unaff_x19 + 0x98) + 0x40),
                                     lVar4 != 0)) && (lVar4 = *(long *)(lVar4 + 0x20), lVar4 != 0))
                                   && (fVar21 = fVar7, fVar16 = fVar23, fVar11 = fVar5,
                                      fVar8 = (float)FUN_0690449c(lVar4,0), lVar2 != 0)) {
                                  fVar17 = (fVar6 * fVar11 + fVar7 * fVar16 + fVar23 * fVar21) -
                                           fVar5 * fVar8;
                                  fVar12 = (fVar23 * fVar8 + fVar7 * fVar11 + fVar5 * fVar21) -
                                           fVar6 * fVar16;
                                  FUN_06904520((fVar5 * fVar16 + fVar7 * fVar8 + fVar6 * fVar21) -
                                               fVar23 * fVar11,fVar12,fVar17,
                                               ((fVar7 * fVar21 - fVar6 * fVar8) - fVar5 * fVar11) -
                                               fVar23 * fVar16,lVar2,0);
                                  if (*(long *)(unaff_x19 + 0x68) != 0) {
                                    fVar6 = (float)FUN_069042b4(*(long *)(unaff_x19 + 0x68),0);
                                    if (*(long *)(unaff_x19 + 0x78) != 0) {
                                      fVar5 = fVar12;
                                      fVar23 = fVar17;
                                      fVar7 = (float)FUN_069042b4(*(long *)(unaff_x19 + 0x78),0);
                                      uVar14 = (ulong)(uint)(fVar6 - fVar7);
                                      uVar9 = FUN_068ec938(uVar9,uVar13,uVar18,uVar14,fVar12 - fVar5
                                                           ,fVar17 - fVar23,0);
                                      if ((*(long *)(unaff_x19 + 0x98) != 0) &&
                                         (lVar2 = *(long *)(*(long *)(unaff_x19 + 0x98) + 0x40),
                                         lVar2 != 0)) {
                                        lVar2 = *(long *)(lVar2 + 0x38);
                                        if (DAT_0738e663 == '\0') {
                                          FUN_02fe925c(PTR_DAT_06f6d7e8);
                                          DAT_0738e663 = '\x01';
                                        }
                                        puVar3 = *(undefined4 **)(*(long *)puVar1 + 0xb8);
                                        fVar5 = (float)puVar3[1];
                                        fVar23 = (float)puVar3[2];
                                        fVar7 = (float)puVar3[3];
                                        fVar6 = (float)FUN_068ecc2c(*puVar3,fVar5,fVar23,fVar7,uVar9
                                                                    ,uVar13,uVar18,uVar14,0);
                                        if (((*(long *)(unaff_x19 + 0x98) != 0) &&
                                            (lVar4 = *(long *)(*(long *)(unaff_x19 + 0x98) + 0x40),
                                            lVar4 != 0)) &&
                                           ((lVar4 = *(long *)(lVar4 + 0x38), lVar4 != 0 &&
                                            (fVar21 = fVar7, fVar16 = fVar5, fVar11 = fVar23,
                                            fVar8 = (float)FUN_0690449c(lVar4,0), lVar2 != 0)))) {
                                          FUN_06904520((fVar5 * fVar11 +
                                                       fVar7 * fVar8 + fVar6 * fVar21) -
                                                       fVar23 * fVar16,
                                                       (fVar23 * fVar8 +
                                                       fVar7 * fVar16 + fVar5 * fVar21) -
                                                       fVar6 * fVar11,
                                                       (fVar6 * fVar16 +
                                                       fVar7 * fVar11 + fVar23 * fVar21) -
                                                       fVar5 * fVar8,
                                                       ((fVar7 * fVar21 - fVar6 * fVar8) -
                                                       fVar5 * fVar16) - fVar23 * fVar11,lVar2,0);
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


