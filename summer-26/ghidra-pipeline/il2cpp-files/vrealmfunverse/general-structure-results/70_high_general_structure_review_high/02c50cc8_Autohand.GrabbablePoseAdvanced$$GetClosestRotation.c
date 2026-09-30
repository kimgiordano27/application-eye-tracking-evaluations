/*
FUNCTION_NAME: Autohand.GrabbablePoseAdvanced$$GetClosestRotation
ENTRY_POINT: 02c50cc8
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;data_collection
EVIDENCE: validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;strong_file_logging_hits_2
*/


void Autohand_GrabbablePoseAdvanced__GetClosestRotation(long param_1)

{
  ulong uVar1;
  long lVar2;
  long unaff_x19;
  uint unaff_w20;
  long unaff_x21;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  long *unaff_x25;
  undefined8 *unaff_x26;
  
  while (FUN_038689ac(param_1,unaff_w20,*unaff_x23), unaff_x21 != 0) {
    FUN_02c4f340(unaff_x21);
    do {
      lVar2 = *(long *)(unaff_x19 + 0x30);
                    /* try { // try from 02c50ce4 to 02d50cef has its CatchHandler @ 02c50d94 */
      unaff_w20 = unaff_w20 + 1;
      if (lVar2 == 0) goto LAB_02c50cec;
      if (*(int *)(lVar2 + 0x18) <= (int)unaff_w20) {
                    /* try { // try from 02c50cf0 to 02d50db3 has its CatchHandler @ 02c50cac */
        return;
      }
      lVar2 = FUN_037a6268(lVar2,unaff_w20,*unaff_x22);
      if (lVar2 == 0) goto LAB_02c50cec;
      FUN_05c8cb28(lVar2,0,0);
      if ((*(long *)(unaff_x19 + 0x30) == 0) ||
         (lVar2 = FUN_037a6268(*(long *)(unaff_x19 + 0x30),unaff_w20,*unaff_x22), lVar2 == 0))
      goto LAB_02c50cec;
      lVar2 = FUN_05c8c8e0(lVar2,0);
      if ((*(long *)(unaff_x19 + 0x38) == 0) ||
         (FUN_038689ac(*(long *)(unaff_x19 + 0x38),unaff_w20,*unaff_x23), lVar2 == 0))
      goto LAB_02c50cec;
      FUN_05c9c070(lVar2,0);
      lVar2 = *(long *)(unaff_x19 + 0x20);
      if (lVar2 == 0) goto LAB_02c50cec;
      if (*(uint *)(lVar2 + 0x18) <= unaff_w20) {
LAB_02c50d08:
                    /* WARNING: Subroutine does not return */
        FUN_02b3cacc();
      }
      lVar2 = *(long *)(lVar2 + (long)(int)unaff_w20 * 8 + 0x20);
      if (lVar2 == 0) goto LAB_02c50cec;
      lVar2 = FUN_031d80b0(lVar2,*unaff_x24);
      if (*(int *)(*unaff_x25 + 0xe4) == 0) {
        thunk_FUN_02b9ad44(*unaff_x25);
      }
      uVar1 = FUN_05c8c45c(lVar2,0,0);
      if ((uVar1 & 1) != 0) {
        if (lVar2 == 0) goto LAB_02c50cec;
        FUN_05c88b34(lVar2,1,0);
      }
      lVar2 = *(long *)(unaff_x19 + 0x20);
      if (lVar2 == 0) goto LAB_02c50cec;
      if (*(uint *)(lVar2 + 0x18) <= unaff_w20) goto LAB_02c50d08;
      lVar2 = *(long *)(lVar2 + (long)(int)unaff_w20 * 8 + 0x20);
      if (lVar2 == 0) goto LAB_02c50cec;
      unaff_x21 = FUN_031d80b0(lVar2,*unaff_x26);
      if (*(int *)(*unaff_x25 + 0xe4) == 0) {
        thunk_FUN_02b9ad44(*unaff_x25);
      }
      uVar1 = FUN_05c8c45c(unaff_x21,0,0);
    } while ((uVar1 & 1) == 0);
    param_1 = *(long *)(unaff_x19 + 0x38);
    if (param_1 == 0) break;
  }
LAB_02c50cec:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


