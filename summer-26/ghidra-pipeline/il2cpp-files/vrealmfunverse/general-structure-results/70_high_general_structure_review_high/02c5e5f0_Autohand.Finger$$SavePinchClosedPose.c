/*
FUNCTION_NAME: Autohand.Finger$$SavePinchClosedPose
ENTRY_POINT: 02c5e5f0
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


void Autohand_Finger__SavePinchClosedPose(void)

{
  undefined *puVar1;
  ulong uVar2;
  long unaff_x19;
  undefined8 uVar3;
  long unaff_x21;
  long *unaff_x25;
  undefined4 uStack0000000000000000;
  undefined4 uStack0000000000000004;
  undefined4 in_stack_00000008;
  
  FUN_02b3c81c();
  *(undefined1 *)(unaff_x21 + 0xe90) = 1;
  puVar1 = PTR_DAT_06313938;
                    /* catch() { ... } // from try @ 02c5e5c4 with catch @ 02c5e600 */
  if (**(long **)(*(long *)PTR_DAT_06313938 + 0xb8) != 0) {
    uVar3 = *(undefined8 *)(**(long **)(*(long *)PTR_DAT_06313938 + 0xb8) + 0x48);
    if (*(int *)(*unaff_x25 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    uVar2 = FUN_05c8c45c(uVar3,0,0);
    if ((uVar2 & 1) != 0) {
      if (*(char *)(unaff_x21 + 0xe90) == '\0') {
        FUN_02b3c81c(PTR_DAT_06313938);
        *(undefined1 *)(unaff_x21 + 0xe90) = 1;
      }
      if ((**(long **)(*(long *)puVar1 + 0xb8) == 0) ||
         (*(long *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x48) == 0)) goto LAB_02c5e7c0;
      FUN_02c57ed8();
    }
    if (*(char *)(unaff_x21 + 0xe90) == '\0') {
      FUN_02b3c81c(PTR_DAT_06313938);
      *(undefined1 *)(unaff_x21 + 0xe90) = 1;
    }
    uVar3 = **(undefined8 **)(*(long *)puVar1 + 0xb8);
    if (*(int *)(*unaff_x25 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    uVar2 = FUN_05c8c45c(uVar3,0,0);
    if ((uVar2 & 1) != 0) {
      if (*(char *)(unaff_x21 + 0xe90) == '\0') {
        FUN_02b3c81c(PTR_DAT_06313938);
        *(undefined1 *)(unaff_x21 + 0xe90) = 1;
      }
      if (**(long **)(*(long *)puVar1 + 0xb8) == 0) goto LAB_02c5e7c0;
      FUN_02c5e7c8(uStack0000000000000000,uStack0000000000000004,in_stack_00000008,0x3f800000);
    }
    uVar3 = *(undefined8 *)(unaff_x19 + 0x28);
    if (*(int *)(*unaff_x25 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    uVar2 = FUN_05c8c45c(uVar3,0,0);
    if ((uVar2 & 1) != 0) {
      if (*(long *)(unaff_x19 + 0x28) == 0) goto LAB_02c5e7c0;
      FUN_05c59bb8(uStack0000000000000000,uStack0000000000000004,in_stack_00000008,0x3f800000,
                   *(long *)(unaff_x19 + 0x28),0);
    }
    uVar3 = *(undefined8 *)(unaff_x19 + 0x30);
    if (*(int *)(*unaff_x25 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    uVar2 = FUN_05c8c45c(uVar3,0,0);
    if ((uVar2 & 1) != 0) {
      if (*(long *)(unaff_x19 + 0x30) == 0) goto LAB_02c5e7c0;
      FUN_05c59bb8(uStack0000000000000000,uStack0000000000000004,in_stack_00000008,0x3f800000,
                   *(long *)(unaff_x19 + 0x30),0);
    }
    uVar3 = *(undefined8 *)(unaff_x19 + 0x38);
    if (*(int *)(*unaff_x25 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    uVar2 = FUN_05c8c45c(uVar3,0,0);
    if ((uVar2 & 1) != 0) {
      if (*(long *)(unaff_x19 + 0x38) == 0) goto LAB_02c5e7c0;
      FUN_02c5e970(uStack0000000000000000,uStack0000000000000004,in_stack_00000008,0x3f800000);
    }
    return;
  }
LAB_02c5e7c0:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


