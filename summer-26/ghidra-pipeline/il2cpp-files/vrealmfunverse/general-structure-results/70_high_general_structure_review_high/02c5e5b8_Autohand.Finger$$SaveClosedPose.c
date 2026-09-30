/*
FUNCTION_NAME: Autohand.Finger$$SaveClosedPose
ENTRY_POINT: 02c5e5b8
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;data_collection
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;strong_file_logging_hits_2
*/


void Autohand_Finger__SaveClosedPose
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  long unaff_x19;
  undefined8 uVar4;
  long *unaff_x25;
  undefined4 uStack0000000000000000;
  undefined4 uStack0000000000000004;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  
  uStack0000000000000008 = param_3;
  uStack000000000000000c = param_4;
  iVar2 = FUN_05c52798();
                    /* try { // try from 02c5e5c4 to 02d5e5cf has its CatchHandler @ 02c5e600 */
  if (iVar2 == 1) {
                    /* try { // try from 02c5e5d0 to 02d5e61b has its CatchHandler @ 02c5e4c8 */
    uStack0000000000000000 = FUN_02c6a2c4();
    uStack0000000000000004 = param_2;
    uStack0000000000000008 = param_3;
    uStack000000000000000c = param_4;
  }
  if (DAT_066c1e90 == '\0') {
    FUN_02b3c81c(PTR_DAT_06313938);
    DAT_066c1e90 = '\x01';
  }
  puVar1 = PTR_DAT_06313938;
  if (**(long **)(*(long *)PTR_DAT_06313938 + 0xb8) != 0) {
    uVar4 = *(undefined8 *)(**(long **)(*(long *)PTR_DAT_06313938 + 0xb8) + 0x48);
    if (*(int *)(*unaff_x25 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    uVar3 = FUN_05c8c45c(uVar4,0,0);
    if ((uVar3 & 1) != 0) {
      if (DAT_066c1e90 == '\0') {
        FUN_02b3c81c(PTR_DAT_06313938);
        DAT_066c1e90 = '\x01';
      }
      if ((**(long **)(*(long *)puVar1 + 0xb8) == 0) ||
         (*(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x48) == 0)) goto LAB_02c5e7c0;
      FUN_02c57ed8();
    }
    uStack000000000000000c = 0x3f800000;
    if (DAT_066c1e90 == '\0') {
      FUN_02b3c81c(PTR_DAT_06313938);
      DAT_066c1e90 = '\x01';
    }
    uVar4 = **(undefined8 **)(*(long *)puVar1 + 0xb8);
    if (*(int *)(*unaff_x25 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    uVar3 = FUN_05c8c45c(uVar4,0,0);
    if ((uVar3 & 1) != 0) {
      if (DAT_066c1e90 == '\0') {
        FUN_02b3c81c(PTR_DAT_06313938);
        DAT_066c1e90 = '\x01';
      }
      if (**(long **)(*(long *)puVar1 + 0xb8) == 0) goto LAB_02c5e7c0;
      FUN_02c5e7c8(uStack0000000000000000,uStack0000000000000004,uStack0000000000000008,
                   uStack000000000000000c);
    }
    uVar4 = *(undefined8 *)(unaff_x19 + 0x28);
    if (*(int *)(*unaff_x25 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    uVar3 = FUN_05c8c45c(uVar4,0,0);
    if ((uVar3 & 1) != 0) {
      if (*(long *)(unaff_x19 + 0x28) == 0) goto LAB_02c5e7c0;
      FUN_05c59bb8(uStack0000000000000000,uStack0000000000000004,uStack0000000000000008,
                   uStack000000000000000c,*(long *)(unaff_x19 + 0x28),0);
    }
    uVar4 = *(undefined8 *)(unaff_x19 + 0x30);
    if (*(int *)(*unaff_x25 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    uVar3 = FUN_05c8c45c(uVar4,0,0);
    if ((uVar3 & 1) != 0) {
      if (*(long *)(unaff_x19 + 0x30) == 0) goto LAB_02c5e7c0;
      FUN_05c59bb8(uStack0000000000000000,uStack0000000000000004,uStack0000000000000008,
                   uStack000000000000000c,*(long *)(unaff_x19 + 0x30),0);
    }
    uVar4 = *(undefined8 *)(unaff_x19 + 0x38);
    if (*(int *)(*unaff_x25 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    uVar3 = FUN_05c8c45c(uVar4,0,0);
    if ((uVar3 & 1) != 0) {
      if (*(long *)(unaff_x19 + 0x38) == 0) goto LAB_02c5e7c0;
      FUN_02c5e970(uStack0000000000000000,uStack0000000000000004,uStack0000000000000008,
                   uStack000000000000000c);
    }
    return;
  }
LAB_02c5e7c0:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


