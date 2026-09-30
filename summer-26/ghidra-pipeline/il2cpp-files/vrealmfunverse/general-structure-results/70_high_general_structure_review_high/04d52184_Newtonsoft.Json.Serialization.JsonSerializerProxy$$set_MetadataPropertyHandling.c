/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$set_MetadataPropertyHandling
ENTRY_POINT: 04d52184
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


/* WARNING: Removing unreachable block (ram,0x04d52224) */

undefined4
Newtonsoft_Json_Serialization_JsonSerializerProxy__set_MetadataPropertyHandling(long *param_1)

{
  undefined4 uVar1;
  long unaff_x23;
  undefined8 uVar2;
  long *plStack0000000000000010;
  undefined8 in_stack_00000018;
  long in_stack_00000028;
  
  plStack0000000000000010 = param_1;
  if (unaff_x23 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  FUN_04ca4990();
  if (in_stack_00000028 != 0) {
    uVar2 = *(undefined8 *)(in_stack_00000028 + 0x10);
    if (*(int *)(*(long *)PTR_DAT_06329c90 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    uVar1 = FUN_02b45288(uVar2);
    if (in_stack_00000018._4_1_ != '\0') {
      if (*plStack0000000000000010 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      FUN_04ca4af4(*plStack0000000000000010,0);
    }
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


