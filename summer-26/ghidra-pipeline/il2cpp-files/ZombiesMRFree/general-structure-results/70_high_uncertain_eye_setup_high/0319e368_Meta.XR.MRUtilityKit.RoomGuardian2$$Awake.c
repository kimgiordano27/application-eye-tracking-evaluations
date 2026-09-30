/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.RoomGuardian2$$Awake
ENTRY_POINT: 0319e368
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_10;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_RoomGuardian2__Awake
               (undefined1 param_1 [16],undefined8 param_2,undefined1 param_3 [16],
               undefined1 param_4 [16])

{
  undefined *puVar1;
  long lVar2;
  undefined4 *puVar3;
  long lVar4;
  long unaff_x19;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined8 unaff_d9;
  undefined8 unaff_d10;
  
  uVar16 = param_4._4_4_;
  uVar17 = param_4._0_4_;
  uVar9 = unaff_d10;
  uVar7 = FUN_068ec938(0);
  if ((*(long *)(unaff_x19 + 0x98) != 0) &&
     (lVar2 = *(long *)(*(long *)(unaff_x19 + 0x98) + 0x40), lVar2 != 0)) {
    lVar2 = *(long *)(lVar2 + 0x68);
    if (DAT_0738e663 == '\0') {
      FUN_02fe925c(PTR_DAT_06f6d7e8);
      DAT_0738e663 = '\x01';
    }
    puVar1 = PTR_DAT_06f6d7e8;
    puVar3 = *(undefined4 **)(*(long *)PTR_DAT_06f6d7e8 + 0xb8);
    fVar10 = (float)puVar3[1];
    fVar12 = (float)puVar3[2];
    fVar14 = (float)puVar3[3];
    fVar5 = (float)FUN_068ecc2c(*puVar3,fVar10,fVar12,fVar14,uVar7,param_2,uVar9,
                                CONCAT44(uVar16,uVar17),0);
                    /* try { // try from 0319e418 to 0329e49b has its CatchHandler @ 0319e418
                       catch() { ... } // from try @ 0319e418 with catch @ 0319e418
                       catch() { ... } // from try @ 0319e4a4 with catch @ 0319e418 */
    if ((((*(long *)(unaff_x19 + 0x98) != 0) &&
         (lVar4 = *(long *)(*(long *)(unaff_x19 + 0x98) + 0x40), lVar4 != 0)) &&
        (lVar4 = *(long *)(lVar4 + 0x68), lVar4 != 0)) &&
       (fVar15 = fVar14, fVar13 = fVar12, fVar11 = fVar10, fVar6 = (float)FUN_0690449c(lVar4,0),
       lVar2 != 0)) {
                    /* try { // try from 0319e49c to 0329e4a3 has its CatchHandler @ 0319e4e0 */
      FUN_06904520((fVar10 * fVar13 + fVar14 * fVar6 + fVar5 * fVar15) - fVar12 * fVar11,
                   (fVar12 * fVar6 + fVar14 * fVar11 + fVar10 * fVar15) - fVar5 * fVar13,
                   (fVar5 * fVar11 + fVar14 * fVar13 + fVar12 * fVar15) - fVar10 * fVar6,
                   ((fVar14 * fVar15 - fVar5 * fVar6) - fVar10 * fVar11) - fVar12 * fVar13,lVar2,0);
                    /* try { // try from 0319e4a4 to 0329e4fb has its CatchHandler @ 0319e418 */
      if (*(long *)(unaff_x19 + 0x60) != 0) {
        fVar5 = (float)FUN_069042b4(*(long *)(unaff_x19 + 0x60),0);
        if (*(long *)(unaff_x19 + 0x78) != 0) {
          fVar10 = (float)FUN_069042b4(*(long *)(unaff_x19 + 0x78),0);
          fVar5 = fVar5 - fVar10;
          uVar17 = 0;
          uVar9 = unaff_d9;
          uVar7 = unaff_d10;
                    /* catch() { ... } // from try @ 0319e49c with catch @ 0319e4e0 */
          uVar8 = FUN_068ec938(0);
          if ((*(long *)(unaff_x19 + 0x98) != 0) &&
             (lVar2 = *(long *)(*(long *)(unaff_x19 + 0x98) + 0x40), lVar2 != 0)) {
            lVar2 = *(long *)(lVar2 + 0x20);
                    /* try { // try from 0319e510 to 0329e563 has its CatchHandler @ 0319e510
                       catch() { ... } // from try @ 0319e510 with catch @ 0319e510
                       catch() { ... } // from try @ 0319e56c with catch @ 0319e510 */
            if (DAT_0738e663 == '\0') {
              FUN_02fe925c(PTR_DAT_06f6d7e8);
              DAT_0738e663 = '\x01';
            }
            puVar3 = *(undefined4 **)(*(long *)puVar1 + 0xb8);
            fVar10 = (float)puVar3[1];
            fVar12 = (float)puVar3[2];
            fVar14 = (float)puVar3[3];
            fVar5 = (float)FUN_068ecc2c(*puVar3,fVar10,fVar12,fVar14,uVar8,uVar9,uVar7,
                                        CONCAT44(uVar17,fVar5),0);
            if (((*(long *)(unaff_x19 + 0x98) != 0) &&
                (lVar4 = *(long *)(*(long *)(unaff_x19 + 0x98) + 0x40), lVar4 != 0)) &&
               ((lVar4 = *(long *)(lVar4 + 0x20), lVar4 != 0 &&
                (fVar15 = fVar14, fVar13 = fVar12, fVar11 = fVar10,
                fVar6 = (float)FUN_0690449c(lVar4,0), lVar2 != 0)))) {
              FUN_06904520((fVar10 * fVar13 + fVar14 * fVar6 + fVar5 * fVar15) - fVar12 * fVar11,
                           (fVar12 * fVar6 + fVar14 * fVar11 + fVar10 * fVar15) - fVar5 * fVar13,
                           (fVar5 * fVar11 + fVar14 * fVar13 + fVar12 * fVar15) - fVar10 * fVar6,
                           ((fVar14 * fVar15 - fVar5 * fVar6) - fVar10 * fVar11) - fVar12 * fVar13,
                           lVar2,0);
              if (*(long *)(unaff_x19 + 0x68) != 0) {
                fVar5 = (float)FUN_069042b4(*(long *)(unaff_x19 + 0x68),0);
                if (*(long *)(unaff_x19 + 0x78) != 0) {
                  fVar10 = (float)FUN_069042b4(*(long *)(unaff_x19 + 0x78),0);
                  fVar5 = fVar5 - fVar10;
                  uVar17 = 0;
                  uVar9 = FUN_068ec938(0);
                  if ((*(long *)(unaff_x19 + 0x98) != 0) &&
                     (lVar2 = *(long *)(*(long *)(unaff_x19 + 0x98) + 0x40), lVar2 != 0)) {
                    lVar2 = *(long *)(lVar2 + 0x38);
                    if (DAT_0738e663 == '\0') {
                      FUN_02fe925c(PTR_DAT_06f6d7e8);
                      DAT_0738e663 = '\x01';
                    }
                    puVar3 = *(undefined4 **)(*(long *)puVar1 + 0xb8);
                    fVar10 = (float)puVar3[1];
                    fVar12 = (float)puVar3[2];
                    fVar14 = (float)puVar3[3];
                    fVar5 = (float)FUN_068ecc2c(*puVar3,fVar10,fVar12,fVar14,uVar9,unaff_d9,
                                                unaff_d10,CONCAT44(uVar17,fVar5),0);
                    if ((((*(long *)(unaff_x19 + 0x98) != 0) &&
                         (lVar4 = *(long *)(*(long *)(unaff_x19 + 0x98) + 0x40), lVar4 != 0)) &&
                        (lVar4 = *(long *)(lVar4 + 0x38), lVar4 != 0)) &&
                       (fVar15 = fVar14, fVar13 = fVar10, fVar11 = fVar12,
                       fVar6 = (float)FUN_0690449c(lVar4,0), lVar2 != 0)) {
                      FUN_06904520((fVar10 * fVar11 + fVar14 * fVar6 + fVar5 * fVar15) -
                                   fVar12 * fVar13,
                                   (fVar12 * fVar6 + fVar14 * fVar13 + fVar10 * fVar15) -
                                   fVar5 * fVar11,
                                   (fVar5 * fVar13 + fVar14 * fVar11 + fVar12 * fVar15) -
                                   fVar10 * fVar6,
                                   ((fVar14 * fVar15 - fVar5 * fVar6) - fVar10 * fVar13) -
                                   fVar12 * fVar11,lVar2,0);
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
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


