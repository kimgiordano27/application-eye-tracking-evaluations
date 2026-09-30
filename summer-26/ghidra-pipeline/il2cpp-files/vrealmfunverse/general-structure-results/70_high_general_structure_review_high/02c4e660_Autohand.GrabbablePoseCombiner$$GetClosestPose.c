/*
FUNCTION_NAME: Autohand.GrabbablePoseCombiner$$GetClosestPose
ENTRY_POINT: 02c4e660
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;data_collection;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Autohand_GrabbablePoseCombiner__GetClosestPose
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  long unaff_x19;
  long unaff_x20;
  long *plVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  
  FUN_02b3c81c(*(undefined8 *)(param_4 + 0x330));
  *(undefined1 *)(unaff_x20 + 0xd6c) = 1;
  lVar3 = FUN_03172a30();
  plVar6 = (long *)(unaff_x19 + 0x30);
  *plVar6 = lVar3;
  thunk_FUN_02bb0e9c(plVar6,lVar3);
  uVar4 = FUN_03172a30();
  *(undefined8 *)(unaff_x19 + 0x28) = uVar4;
  thunk_FUN_02bb0e9c();
  lVar3 = FUN_05c89340();
  if (lVar3 != 0) {
    uVar8 = UnityEngine_UIElements_BackgroundPosition_PropertyBag_KeywordProperty__get_IsReadOnly
                      (lVar3,0);
    *(undefined4 *)(unaff_x19 + 0x24) = uVar8;
    lVar3 = FUN_05c89340();
    if (lVar3 == 0) goto LAB_02c4e824;
                    /* try { // try from 02c4e6d8 to 02d4e6df has its CatchHandler @ 02c4e8d8 */
    uVar8 = FUN_05c9bf94(lVar3,0);
    *(undefined4 *)(unaff_x19 + 0x38) = uVar8;
    *(undefined4 *)(unaff_x19 + 0x3c) = param_2;
    *(undefined4 *)(unaff_x19 + 0x40) = param_3;
    lVar3 = FUN_05c89340();
                    /* try { // try from 02c4e6f4 to 02d4e6fb has its CatchHandler @ 02c4e8d0 */
    if (lVar3 == 0) goto LAB_02c4e824;
    uVar8 = FUN_05c9c1cc(lVar3,0);
    lVar3 = *(long *)(unaff_x19 + 0x30);
    *(undefined4 *)(unaff_x19 + 0x44) = uVar8;
    *(undefined4 *)(unaff_x19 + 0x48) = param_2;
    *(undefined4 *)(unaff_x19 + 0x4c) = param_3;
    puVar2 = PTR_DAT_06313330;
    if (lVar3 == 0) goto LAB_02c4e824;
    plVar1 = (long *)(lVar3 + 0x238);
                    /* try { // try from 02c4e71c to 02d4e723 has its CatchHandler @ 02c4e8bc */
    uVar7 = *(undefined8 *)(lVar3 + 0x238);
    uVar4 = thunk_FUN_02b79644(*(undefined8 *)PTR_DAT_06313330);
    FUN_02d6e504();
                    /* try { // try from 02c4e748 to 02d4e75b has its CatchHandler @ 02c4e900 */
    plVar5 = (long *)FUN_04dc0fdc(uVar7,uVar4,0);
    if (plVar5 == (long *)0x0) {
      *plVar1 = 0;
    }
    else {
      lVar3 = *(long *)puVar2;
      if ((*plVar5 != lVar3) || (*plVar1 = (long)plVar5, *plVar5 != lVar3)) goto LAB_02c4e7fc;
    }
    thunk_FUN_02bb0e9c(plVar1,plVar5);
    lVar3 = *plVar6;
    if (lVar3 != 0) {
      plVar6 = (long *)(lVar3 + 0x248);
      uVar7 = *(undefined8 *)(lVar3 + 0x248);
      uVar4 = thunk_FUN_02b79644(*(undefined8 *)puVar2);
                    /* try { // try from 02c4e7b4 to 02d4e7bb has its CatchHandler @ 02c4e8b8 */
      FUN_02d6e504();
      plVar5 = (long *)FUN_04dc0fdc(uVar7,uVar4,0);
      if (plVar5 == (long *)0x0) {
        *plVar6 = 0;
      }
      else {
        lVar3 = *(long *)puVar2;
                    /* try { // try from 02c4e7e0 to 02d4e7f3 has its CatchHandler @ 02c4e8fc */
        if ((*plVar5 != lVar3) || (*plVar6 = (long)plVar5, *plVar5 != lVar3)) {
LAB_02c4e7fc:
                    /* WARNING: Subroutine does not return */
          FUN_02b3ce44(plVar5);
        }
      }
      thunk_FUN_02bb0e9c(plVar6,plVar5);
      return;
    }
  }
LAB_02c4e824:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


