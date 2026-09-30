/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$set_TypeNameAssemblyFormatHandling
ENTRY_POINT: 04d521a4
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x04d52224) */

undefined4
Newtonsoft_Json_Serialization_JsonSerializerProxy__set_TypeNameAssemblyFormatHandling(long param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long *in_stack_00000010;
  undefined8 in_stack_00000018;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  if (*(int *)(*(long *)PTR_DAT_06329c90 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  uVar1 = FUN_02b45288(uVar2);
  if (in_stack_00000018._4_1_ != '\0') {
    if (*in_stack_00000010 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    FUN_04ca4af4(*in_stack_00000010,0);
  }
  return uVar1;
}


