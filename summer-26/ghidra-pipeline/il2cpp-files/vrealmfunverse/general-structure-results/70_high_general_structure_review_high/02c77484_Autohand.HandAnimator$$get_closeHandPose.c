/*
FUNCTION_NAME: Autohand.HandAnimator$$get_closeHandPose
ENTRY_POINT: 02c77484
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;data_collection;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Autohand_HandAnimator__get_closeHandPose
               (undefined1 param_1 [16],float param_2,float param_3,float param_4,undefined8 param_5
               )

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  long unaff_x19;
  long unaff_x20;
  long unaff_x22;
  long *unaff_x23;
  float fVar7;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  float unaff_s14;
  
  fVar7 = (float)FUN_05c9a10c(param_5,0);
  if (unaff_x22 != 0) {
                    /* try { // try from 02c7749c to 02d774a7 has its CatchHandler @ 02c77520 */
                    /* try { // try from 02c774c8 to 02d774e3 has its CatchHandler @ 02c7752c */
    FUN_05c9c22c((unaff_s13 * param_3 + unaff_s14 * fVar7 + unaff_s12 * param_4) -
                 unaff_s11 * param_2,
                 (unaff_s11 * fVar7 + unaff_s14 * param_2 + unaff_s13 * param_4) -
                 unaff_s12 * param_3,
                 (unaff_s12 * param_2 + unaff_s14 * param_3 + unaff_s11 * param_4) -
                 unaff_s13 * fVar7,
                 ((unaff_s14 * param_4 - unaff_s12 * fVar7) - unaff_s13 * param_2) -
                 unaff_s11 * param_3);
    lVar2 = FUN_05c8c8e0();
    if ((unaff_x20 != 0) && (uVar3 = FUN_05c8c8e0(), lVar2 != 0)) {
      FUN_05c9ca60(lVar2,uVar3,0);
      lVar2 = *(long *)(unaff_x19 + 0x68);
      if (lVar2 != 0) {
        if (0 < *(int *)(lVar2 + 0x18)) {
          uVar1 = FUN_05c846b4(0,*(int *)(lVar2 + 0x18),0);
          lVar2 = FUN_037a6268(lVar2,uVar1,*(undefined8 *)PTR_DAT_063142e8);
          if (*(int *)(*unaff_x23 + 0xe4) == 0) {
            thunk_FUN_02b9ad44(*unaff_x23);
          }
          uVar4 = FUN_05c921ac(lVar2,0);
          if ((uVar4 & 1) != 0) {
            plVar5 = (long *)FUN_05c854dc(*(undefined8 *)PTR_DAT_06312ca8,0);
            if (DAT_066c1d9a == '\0') {
              FUN_02b3c81c(PTR_DAT_06312cd8);
              DAT_066c1d9a = '\x01';
            }
            if (lVar2 != 0) {
              FUN_05c30b28(lVar2,0);
              if (plVar5 == (long *)0x0) {
                plVar5 = (long *)0x0;
              }
              else if (*plVar5 != *(long *)PTR_DAT_06312cb0) {
                plVar5 = (long *)0x0;
              }
              lVar6 = FUN_02c7d81c(plVar5,0);
              if (lVar6 != 0) {
                lVar6 = FUN_031d80b0(lVar6,*(undefined8 *)PTR_DAT_06312ce8);
                fVar7 = (float)FUN_05c84674(0x3f400000,0x3f800000,0);
                if (lVar6 != 0) {
                  FUN_05c31d34(fVar7 * *(float *)(unaff_x19 + 100),lVar6,0);
                  FUN_05c84674(DAT_01031cf8,DAT_01031fd4,0);
                  thunk_FUN_05c31770(lVar6,0);
                  FUN_05c32304(lVar6,lVar2,0);
                  return;
                }
              }
            }
            goto LAB_02c776fc;
          }
        }
        return;
      }
    }
  }
LAB_02c776fc:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


