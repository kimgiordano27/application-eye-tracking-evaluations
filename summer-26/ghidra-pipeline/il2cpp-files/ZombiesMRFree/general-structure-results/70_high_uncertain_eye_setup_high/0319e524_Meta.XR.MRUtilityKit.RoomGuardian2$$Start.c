/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.RoomGuardian2$$Start
ENTRY_POINT: 0319e524
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_RoomGuardian2__Start(void)

{
  undefined4 *puVar1;
  long lVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  undefined8 unaff_d9;
  undefined8 unaff_d10;
  undefined4 uStack0000000000000000;
  
  *(undefined1 *)(unaff_x21 + 0x663) = 1;
  uStack0000000000000000 = *(undefined4 *)(unaff_x19 + 0x20);
  puVar1 = *(undefined4 **)(*unaff_x22 + 0xb8);
  fVar7 = (float)puVar1[1];
  fVar9 = (float)puVar1[2];
  fVar11 = (float)puVar1[3];
  fVar4 = (float)FUN_068ecc2c(*puVar1,fVar7,fVar9,fVar11,0);
                    /* try { // try from 0319e564 to 0329e56b has its CatchHandler @ 0319e56c */
                    /* catch() { ... } // from try @ 0319e564 with catch @ 0319e56c
                       try { // try from 0319e56c to 0329e57f has its CatchHandler @ 0319e510 */
  if ((((*(long *)(unaff_x19 + 0x98) != 0) &&
       (lVar2 = *(long *)(*(long *)(unaff_x19 + 0x98) + 0x40), lVar2 != 0)) &&
      (lVar2 = *(long *)(lVar2 + 0x20), lVar2 != 0)) &&
     (fVar12 = fVar11, fVar10 = fVar9, fVar8 = fVar7, fVar5 = (float)FUN_0690449c(lVar2,0),
     unaff_x20 != 0)) {
                    /* catch() { ... } // from try @ 0319e5b4 with catch @ 0319e594 */
                    /* try { // try from 0319e5ac to 0329e5b3 has its CatchHandler @ 0319e5dc */
                    /* try { // try from 0319e5b4 to 0329e5f3 has its CatchHandler @ 0319e594 */
                    /* catch() { ... } // from try @ 0319e5ac with catch @ 0319e5dc */
    FUN_06904520((fVar7 * fVar10 + fVar11 * fVar5 + fVar4 * fVar12) - fVar9 * fVar8,
                 (fVar9 * fVar5 + fVar11 * fVar8 + fVar7 * fVar12) - fVar4 * fVar10,
                 (fVar4 * fVar8 + fVar11 * fVar10 + fVar9 * fVar12) - fVar7 * fVar5,
                 ((fVar11 * fVar12 - fVar4 * fVar5) - fVar7 * fVar8) - fVar9 * fVar10);
    if (*(long *)(unaff_x19 + 0x68) != 0) {
      fVar4 = (float)FUN_069042b4(*(long *)(unaff_x19 + 0x68),0);
      if (*(long *)(unaff_x19 + 0x78) != 0) {
        fVar7 = (float)FUN_069042b4(*(long *)(unaff_x19 + 0x78),0);
        fVar4 = fVar4 - fVar7;
        uVar13 = 0;
        uVar6 = FUN_068ec938(0);
        if ((*(long *)(unaff_x19 + 0x98) != 0) &&
           (lVar2 = *(long *)(*(long *)(unaff_x19 + 0x98) + 0x40), lVar2 != 0)) {
          lVar2 = *(long *)(lVar2 + 0x38);
          if (*(char *)(unaff_x21 + 0x663) == '\0') {
            FUN_02fe925c(PTR_DAT_06f6d7e8);
            *(undefined1 *)(unaff_x21 + 0x663) = 1;
          }
          uStack0000000000000000 = *(undefined4 *)(unaff_x19 + 0x20);
          puVar1 = *(undefined4 **)(*unaff_x22 + 0xb8);
          fVar7 = (float)puVar1[1];
          fVar9 = (float)puVar1[2];
          fVar11 = (float)puVar1[3];
          fVar4 = (float)FUN_068ecc2c(*puVar1,fVar7,fVar9,fVar11,uVar6,unaff_d9,unaff_d10,
                                      CONCAT44(uVar13,fVar4),0);
          if (((*(long *)(unaff_x19 + 0x98) != 0) &&
              (lVar3 = *(long *)(*(long *)(unaff_x19 + 0x98) + 0x40), lVar3 != 0)) &&
             ((lVar3 = *(long *)(lVar3 + 0x38), lVar3 != 0 &&
              (fVar12 = fVar11, fVar10 = fVar7, fVar8 = fVar9, fVar5 = (float)FUN_0690449c(lVar3,0),
              lVar2 != 0)))) {
            FUN_06904520((fVar7 * fVar8 + fVar11 * fVar5 + fVar4 * fVar12) - fVar9 * fVar10,
                         (fVar9 * fVar5 + fVar11 * fVar10 + fVar7 * fVar12) - fVar4 * fVar8,
                         (fVar4 * fVar10 + fVar11 * fVar8 + fVar9 * fVar12) - fVar7 * fVar5,
                         ((fVar11 * fVar12 - fVar4 * fVar5) - fVar7 * fVar10) - fVar9 * fVar8,lVar2,
                         0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


