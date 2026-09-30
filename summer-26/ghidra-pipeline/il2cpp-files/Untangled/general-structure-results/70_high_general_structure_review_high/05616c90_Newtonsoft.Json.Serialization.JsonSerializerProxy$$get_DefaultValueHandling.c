/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$get_DefaultValueHandling
ENTRY_POINT: 05616c90
PROGRAM: Untangled-libil2cpp.so
SCORE: 81
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


int Newtonsoft_Json_Serialization_JsonSerializerProxy__get_DefaultValueHandling(long param_1)

{
  int in_w8;
  int iVar1;
  int unaff_w19;
  int unaff_w20;
  int iVar2;
  undefined8 *unaff_x21;
  long unaff_x22;
  long *unaff_x23;
  long in_stack_00000018;
  
  while (iVar2 = in_w8, param_1 == 0) {
    if (unaff_w19 < 0)
    goto Newtonsoft_Json_Serialization_JsonSerializerProxy__set_DefaultValueHandling;
    if (*(int *)(*unaff_x23 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    param_1 = FUN_0492e29c(&stack0x00000008,unaff_w19,*unaff_x21);
    unaff_w19 = unaff_w19 + -1;
    in_w8 = iVar2 + -4;
    unaff_w20 = iVar2;
  }
  iVar2 = unaff_w20;
  if (param_1 < 1) {
Newtonsoft_Json_Serialization_JsonSerializerProxy__set_DefaultValueHandling:
    iVar1 = 3;
    unaff_w20 = iVar2;
  }
  else {
    iVar1 = 3;
    do {
      param_1 = param_1 * 0x10000;
      iVar1 = iVar1 + -1;
    } while (0 < param_1);
  }
  if (*(long *)(unaff_x22 + 0x28) != in_stack_00000018) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar1 + unaff_w20;
}


