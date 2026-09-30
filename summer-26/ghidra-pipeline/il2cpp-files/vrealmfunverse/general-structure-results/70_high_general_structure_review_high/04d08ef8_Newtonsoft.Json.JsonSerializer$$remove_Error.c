/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$remove_Error
ENTRY_POINT: 04d08ef8
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8 Newtonsoft_Json_JsonSerializer__remove_Error(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long *unaff_x21;
  long in_stack_00000000;
  char *in_stack_00000008;
  undefined8 *in_stack_00000010;
  undefined8 in_stack_00000028;
  
  FUN_04ddecfc(param_1,param_2,0);
  lVar1 = *unaff_x21;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
    lVar1 = *unaff_x21;
  }
  lVar3 = *(long *)(*(long *)(lVar1 + 0xb8) + 0x30);
  if (lVar3 != 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      lVar3 = *(long *)(*(long *)(*unaff_x21 + 0xb8) + 0x30);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
    }
    uVar2 = FUN_0452f928(lVar3);
    if ((uVar2 & 1) != 0) goto LAB_04d08f94;
    lVar1 = *unaff_x21;
  }
  in_stack_00000028 = thunk_FUN_02b79644(lVar1);
  FUN_04d19c44();
  if (*(int *)(*unaff_x21 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  FUN_04d1a028(in_stack_00000028);
LAB_04d08f94:
  if (*in_stack_00000008 != '\0') {
    thunk_FUN_02b4a54c(*in_stack_00000010,0);
  }
  if (in_stack_00000000 == 0) {
    return in_stack_00000028;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cabc();
}


