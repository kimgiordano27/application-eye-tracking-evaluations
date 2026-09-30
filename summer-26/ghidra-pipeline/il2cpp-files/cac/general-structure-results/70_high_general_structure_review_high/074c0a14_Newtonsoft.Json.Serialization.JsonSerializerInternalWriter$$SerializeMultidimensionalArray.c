/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$SerializeMultidimensionalArray
ENTRY_POINT: 074c0a14
PROGRAM: cac-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: pose_vector;data_collection;telemetry
EVIDENCE: strong_pose_or_ray_construction_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_4;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__SerializeMultidimensionalArray
               (void)

{
  ulong uVar1;
  long unaff_x23;
  ulong *unaff_x24;
  undefined8 in_stack_00000008;
  long in_stack_00000098;
  
  thunk_FUN_03f6fea8();
  FUN_074bfee4();
  uVar1 = FUN_074bf3e4(&stack0x00000010,(long)&stack0x00000008 + 4);
  if ((uVar1 & 1) == 0) {
    uVar1 = *unaff_x24;
    if (*(int *)(uVar1 + 0xe4) == 0) {
      uVar1 = thunk_FUN_03f6fea8();
    }
    if (*(long *)(unaff_x23 + 0x28) != in_stack_00000098) goto LAB_074c0b10;
    FUN_074bfb24(1,*(undefined8 *)PTR_DAT_0912f450);
    if (*(int *)(*unaff_x24 + 0xe4) == 0) {
      thunk_FUN_03f6fea8();
    }
    uVar1 = FUN_074bfbac();
    if ((uVar1 & 1) == 0) {
      if (*(int *)(*unaff_x24 + 0xe4) == 0) {
        thunk_FUN_03f6fea8();
      }
      uVar1 = 0;
      if (*(long *)(unaff_x23 + 0x28) == in_stack_00000098) {
        uVar1 = FUN_074bfb24(0,*(undefined8 *)PTR_DAT_0912f450);
      }
      goto LAB_074c0b10;
    }
  }
  uVar1 = (ulong)in_stack_00000008._4_4_;
  if (*(long *)(unaff_x23 + 0x28) == in_stack_00000098) {
    return;
  }
LAB_074c0b10:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


