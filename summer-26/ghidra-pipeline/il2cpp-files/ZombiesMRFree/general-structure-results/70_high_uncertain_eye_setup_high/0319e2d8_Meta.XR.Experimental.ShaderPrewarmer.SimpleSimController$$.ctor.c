/*
FUNCTION_NAME: Meta.XR.Experimental.ShaderPrewarmer.SimpleSimController$$.ctor
ENTRY_POINT: 0319e2d8
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_14;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_Experimental_ShaderPrewarmer_SimpleSimController___ctor
               (undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,undefined4 param_4,
               undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined4 *puVar3;
  long lVar4;
  long unaff_x19;
  long unaff_x20;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  float fVar20;
  
  uVar5 = FUN_0690449c(param_5,0);
                    /* try { // try from 0319e2e0 to 0329e2e7 has its CatchHandler @ 0319e34c */
  if (unaff_x20 != 0) {
    *(undefined4 *)(unaff_x20 + 0x34) = uVar5;
    *(int *)(unaff_x20 + 0x38) = (int)param_2;
    *(int *)(unaff_x20 + 0x3c) = (int)param_3;
    *(undefined4 *)(unaff_x20 + 0x40) = param_4;
    if (((*(long *)(unaff_x19 + 0x98) != 0) &&
        (lVar2 = *(long *)(*(long *)(unaff_x19 + 0x98) + 0x40), lVar2 != 0)) &&
       (lVar2 = *(long *)(lVar2 + 0x18), lVar2 != 0)) {
      FUN_0690449c(lVar2,0);
      uVar9 = FUN_068ed2ec(0);
      if (*(long *)(unaff_x19 + 0x58) != 0) {
        uVar10 = param_2;
        uVar18 = param_3;
        fVar6 = (float)FUN_069042b4(*(long *)(unaff_x19 + 0x58),0);
        if (*(long *)(unaff_x19 + 0x80) != 0) {
          fVar12 = (float)uVar10;
          fVar15 = (float)uVar18;
                    /* try { // try from 0319e340 to 0329e347 has its CatchHandler @ 0319e354 */
                    /* try { // try from 0319e348 to 0329e377 has its CatchHandler @ 0319e25c */
                    /* catch() { ... } // from try @ 0319e2e0 with catch @ 0319e34c */
          fVar7 = (float)FUN_069042b4(*(long *)(unaff_x19 + 0x80),0);
                    /* catch() { ... } // from try @ 0319e340 with catch @ 0319e354 */
          fVar6 = fVar6 - fVar7;
          uVar5 = 0;
          uVar11 = param_2;
          uVar19 = param_3;
          uVar10 = FUN_068ec938(uVar9,param_2,param_3,fVar6,(float)uVar10 - fVar12,
                                (float)uVar18 - fVar15,0);
          if ((*(long *)(unaff_x19 + 0x98) != 0) &&
             (lVar2 = *(long *)(*(long *)(unaff_x19 + 0x98) + 0x40), lVar2 != 0)) {
            lVar2 = *(long *)(lVar2 + 0x68);
            if (DAT_0738e663 == '\0') {
              FUN_02fe925c(PTR_DAT_06f6d7e8);
              DAT_0738e663 = '\x01';
            }
            puVar1 = PTR_DAT_06f6d7e8;
            puVar3 = *(undefined4 **)(*(long *)PTR_DAT_06f6d7e8 + 0xb8);
            fVar12 = (float)puVar3[1];
            fVar15 = (float)puVar3[2];
            fVar7 = (float)puVar3[3];
            fVar6 = (float)FUN_068ecc2c(*puVar3,fVar12,fVar15,fVar7,uVar10,uVar11,uVar19,
                                        CONCAT44(uVar5,fVar6),0);
            if (((*(long *)(unaff_x19 + 0x98) != 0) &&
                (lVar4 = *(long *)(*(long *)(unaff_x19 + 0x98) + 0x40), lVar4 != 0)) &&
               ((lVar4 = *(long *)(lVar4 + 0x68), lVar4 != 0 &&
                (fVar20 = fVar7, fVar16 = fVar15, fVar13 = fVar12,
                fVar8 = (float)FUN_0690449c(lVar4,0), lVar2 != 0)))) {
              fVar17 = (fVar6 * fVar13 + fVar7 * fVar16 + fVar15 * fVar20) - fVar12 * fVar8;
              fVar14 = (fVar15 * fVar8 + fVar7 * fVar13 + fVar12 * fVar20) - fVar6 * fVar16;
              FUN_06904520((fVar12 * fVar16 + fVar7 * fVar8 + fVar6 * fVar20) - fVar15 * fVar13,
                           fVar14,fVar17,
                           ((fVar7 * fVar20 - fVar6 * fVar8) - fVar12 * fVar13) - fVar15 * fVar16,
                           lVar2,0);
              if (*(long *)(unaff_x19 + 0x60) != 0) {
                fVar6 = (float)FUN_069042b4(*(long *)(unaff_x19 + 0x60),0);
                if (*(long *)(unaff_x19 + 0x78) != 0) {
                  fVar12 = fVar14;
                  fVar15 = fVar17;
                  fVar7 = (float)FUN_069042b4(*(long *)(unaff_x19 + 0x78),0);
                  fVar6 = fVar6 - fVar7;
                  uVar5 = 0;
                  uVar10 = param_2;
                  uVar18 = param_3;
                  uVar11 = FUN_068ec938(uVar9,param_2,param_3,fVar6,fVar14 - fVar12,fVar17 - fVar15,
                                        0);
                  if ((*(long *)(unaff_x19 + 0x98) != 0) &&
                     (lVar2 = *(long *)(*(long *)(unaff_x19 + 0x98) + 0x40), lVar2 != 0)) {
                    lVar2 = *(long *)(lVar2 + 0x20);
                    if (DAT_0738e663 == '\0') {
                      FUN_02fe925c(PTR_DAT_06f6d7e8);
                      DAT_0738e663 = '\x01';
                    }
                    puVar3 = *(undefined4 **)(*(long *)puVar1 + 0xb8);
                    fVar12 = (float)puVar3[1];
                    fVar15 = (float)puVar3[2];
                    fVar7 = (float)puVar3[3];
                    fVar6 = (float)FUN_068ecc2c(*puVar3,fVar12,fVar15,fVar7,uVar11,uVar10,uVar18,
                                                CONCAT44(uVar5,fVar6),0);
                    if ((((*(long *)(unaff_x19 + 0x98) != 0) &&
                         (lVar4 = *(long *)(*(long *)(unaff_x19 + 0x98) + 0x40), lVar4 != 0)) &&
                        (lVar4 = *(long *)(lVar4 + 0x20), lVar4 != 0)) &&
                       (fVar20 = fVar7, fVar16 = fVar15, fVar13 = fVar12,
                       fVar8 = (float)FUN_0690449c(lVar4,0), lVar2 != 0)) {
                      fVar17 = (fVar6 * fVar13 + fVar7 * fVar16 + fVar15 * fVar20) - fVar12 * fVar8;
                      fVar14 = (fVar15 * fVar8 + fVar7 * fVar13 + fVar12 * fVar20) - fVar6 * fVar16;
                      FUN_06904520((fVar12 * fVar16 + fVar7 * fVar8 + fVar6 * fVar20) -
                                   fVar15 * fVar13,fVar14,fVar17,
                                   ((fVar7 * fVar20 - fVar6 * fVar8) - fVar12 * fVar13) -
                                   fVar15 * fVar16,lVar2,0);
                      if (*(long *)(unaff_x19 + 0x68) != 0) {
                        fVar6 = (float)FUN_069042b4(*(long *)(unaff_x19 + 0x68),0);
                        if (*(long *)(unaff_x19 + 0x78) != 0) {
                          fVar12 = fVar14;
                          fVar15 = fVar17;
                          fVar7 = (float)FUN_069042b4(*(long *)(unaff_x19 + 0x78),0);
                          fVar6 = fVar6 - fVar7;
                          uVar5 = 0;
                          uVar9 = FUN_068ec938(uVar9,param_2,param_3,fVar6,fVar14 - fVar12,
                                               fVar17 - fVar15,0);
                          if ((*(long *)(unaff_x19 + 0x98) != 0) &&
                             (lVar2 = *(long *)(*(long *)(unaff_x19 + 0x98) + 0x40), lVar2 != 0)) {
                            lVar2 = *(long *)(lVar2 + 0x38);
                            if (DAT_0738e663 == '\0') {
                              FUN_02fe925c(PTR_DAT_06f6d7e8);
                              DAT_0738e663 = '\x01';
                            }
                            puVar3 = *(undefined4 **)(*(long *)puVar1 + 0xb8);
                            fVar12 = (float)puVar3[1];
                            fVar15 = (float)puVar3[2];
                            fVar7 = (float)puVar3[3];
                            fVar6 = (float)FUN_068ecc2c(*puVar3,fVar12,fVar15,fVar7,uVar9,param_2,
                                                        param_3,CONCAT44(uVar5,fVar6),0);
                            if (((*(long *)(unaff_x19 + 0x98) != 0) &&
                                (lVar4 = *(long *)(*(long *)(unaff_x19 + 0x98) + 0x40), lVar4 != 0))
                               && ((lVar4 = *(long *)(lVar4 + 0x38), lVar4 != 0 &&
                                   (fVar20 = fVar7, fVar16 = fVar12, fVar13 = fVar15,
                                   fVar8 = (float)FUN_0690449c(lVar4,0), lVar2 != 0)))) {
                              FUN_06904520((fVar12 * fVar13 + fVar7 * fVar8 + fVar6 * fVar20) -
                                           fVar15 * fVar16,
                                           (fVar15 * fVar8 + fVar7 * fVar16 + fVar12 * fVar20) -
                                           fVar6 * fVar13,
                                           (fVar6 * fVar16 + fVar7 * fVar13 + fVar15 * fVar20) -
                                           fVar12 * fVar8,
                                           ((fVar7 * fVar20 - fVar6 * fVar8) - fVar12 * fVar16) -
                                           fVar15 * fVar13,lVar2,0);
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
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


