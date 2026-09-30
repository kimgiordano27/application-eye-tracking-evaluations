/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.RoomGuardian2$$Update
ENTRY_POINT: 0319e5f4
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_RoomGuardian2__Update
               (float param_1,undefined1 param_2 [16],float param_3,undefined1 param_4 [16],
               float param_5)

{
  long lVar1;
  undefined4 *puVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x21;
  long *unaff_x22;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  undefined8 unaff_d9;
  undefined8 unaff_d10;
  float in_s19;
  float in_s22;
  float in_s24;
  
  FUN_06904520(param_1 - in_s24,param_5 - in_s22,param_3 - in_s19);
  if (*(long *)(unaff_x19 + 0x68) != 0) {
    fVar4 = (float)FUN_069042b4(*(long *)(unaff_x19 + 0x68),0);
    if (*(long *)(unaff_x19 + 0x78) != 0) {
      fVar5 = (float)FUN_069042b4(*(long *)(unaff_x19 + 0x78),0);
      fVar4 = fVar4 - fVar5;
      uVar13 = 0;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0319e71c with catch @ 0319e648
                        */
      uVar7 = FUN_068ec938(0);
      if ((*(long *)(unaff_x19 + 0x98) != 0) &&
         (lVar1 = *(long *)(*(long *)(unaff_x19 + 0x98) + 0x40), lVar1 != 0)) {
        lVar1 = *(long *)(lVar1 + 0x38);
        if (*(char *)(unaff_x21 + 0x663) == '\0') {
          FUN_02fe925c(PTR_DAT_06f6d7e8);
          *(undefined1 *)(unaff_x21 + 0x663) = 1;
        }
        puVar2 = *(undefined4 **)(*unaff_x22 + 0xb8);
        fVar5 = (float)puVar2[1];
        fVar9 = (float)puVar2[2];
        fVar11 = (float)puVar2[3];
                    /* try { // try from 0319e6c4 to 0329e6cf has its CatchHandler @ 0319e804 */
        fVar4 = (float)FUN_068ecc2c(*puVar2,fVar5,fVar9,fVar11,uVar7,unaff_d9,unaff_d10,
                                    CONCAT44(uVar13,fVar4),0);
                    /* try { // try from 0319e6d0 to 0329e6db has its CatchHandler @ 0319e7e8 */
        if ((((*(long *)(unaff_x19 + 0x98) != 0) &&
             (lVar3 = *(long *)(*(long *)(unaff_x19 + 0x98) + 0x40), lVar3 != 0)) &&
            (lVar3 = *(long *)(lVar3 + 0x38), lVar3 != 0)) &&
           (fVar12 = fVar11, fVar8 = fVar5, fVar10 = fVar9, fVar6 = (float)FUN_0690449c(lVar3,0),
           lVar1 != 0)) {
                    /* try { // try from 0319e710 to 0329e71b has its CatchHandler @ 0319e7cc */
                    /* try { // try from 0319e71c to 0329e80f has its CatchHandler @ 0319e648 */
          FUN_06904520((fVar5 * fVar10 + fVar11 * fVar6 + fVar4 * fVar12) - fVar9 * fVar8,
                       (fVar9 * fVar6 + fVar11 * fVar8 + fVar5 * fVar12) - fVar4 * fVar10,
                       (fVar4 * fVar8 + fVar11 * fVar10 + fVar9 * fVar12) - fVar5 * fVar6,
                       ((fVar11 * fVar12 - fVar4 * fVar6) - fVar5 * fVar8) - fVar9 * fVar10,lVar1,0)
          ;
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


