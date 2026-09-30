/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$get_Converters
ENTRY_POINT: 05616c6c
PROGRAM: Untangled-libil2cpp.so
SCORE: 84
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


int Newtonsoft_Json_Serialization_JsonSerializerProxy__get_Converters(long param_1)

{
  long lVar1;
  int iVar2;
  int unaff_w19;
  int unaff_w20;
  int iVar3;
  undefined8 *unaff_x21;
  long unaff_x22;
  long *unaff_x23;
  long in_stack_00000018;
  
  while( true ) {
    if (*(int *)(param_1 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    lVar1 = FUN_0492e29c(&stack0x00000008,unaff_w19,*unaff_x21);
    iVar3 = unaff_w20 + -4;
    unaff_w19 = unaff_w19 + -1;
    if (lVar1 != 0) break;
    if (unaff_w19 < 0)
    goto Newtonsoft_Json_Serialization_JsonSerializerProxy__set_DefaultValueHandling;
    param_1 = *unaff_x23;
    unaff_w20 = iVar3;
  }
  iVar3 = unaff_w20;
  if (0 < lVar1) {
    iVar2 = 3;
    do {
      lVar1 = lVar1 * 0x10000;
      iVar2 = iVar2 + -1;
    } while (0 < lVar1);
    goto LAB_05616cb8;
  }
Newtonsoft_Json_Serialization_JsonSerializerProxy__set_DefaultValueHandling:
  iVar2 = 3;
  unaff_w20 = iVar3;
LAB_05616cb8:
  if (*(long *)(unaff_x22 + 0x28) != in_stack_00000018) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar2 + unaff_w20;
}


