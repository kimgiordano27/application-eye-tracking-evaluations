/*
FUNCTION_NAME: Newtonsoft.Json.JsonWriter$$BuildStateArray
ENTRY_POINT: 054807c4
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 75
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;strong_file_logging_hits_2
*/


undefined8 Newtonsoft_Json_JsonWriter__BuildStateArray(long param_1)

{
  ulong uVar1;
  long lVar2;
  long *unaff_x21;
  long in_stack_00000000;
  char *in_stack_00000008;
  undefined8 *in_stack_00000010;
  undefined8 in_stack_00000028;
  
  if (*(int *)(param_1 + 0xe4) == 0) {
    thunk_FUN_02df485c();
    param_1 = *unaff_x21;
  }
  lVar2 = *(long *)(*(long *)(param_1 + 0xb8) + 0x30);
  if (lVar2 != 0) {
    if (*(int *)(param_1 + 0xe4) == 0) {
      thunk_FUN_02df485c();
      lVar2 = *(long *)(*(long *)(*unaff_x21 + 0xb8) + 0x30);
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
    }
    uVar1 = FUN_04e95158(lVar2);
    if ((uVar1 & 1) != 0) goto LAB_05480854;
    param_1 = *unaff_x21;
  }
  in_stack_00000028 = thunk_FUN_02dd3144(param_1);
  FUN_0547ffa4();
  if (*(int *)(*unaff_x21 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  FUN_05480388(in_stack_00000028);
LAB_05480854:
  if (*in_stack_00000008 != '\0') {
    thunk_FUN_02da42ec(*in_stack_00000010,0);
  }
  if (in_stack_00000000 == 0) {
    return in_stack_00000028;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96858();
}


