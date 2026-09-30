/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$get_ContractResolver
ENTRY_POINT: 04f9e468
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x04f9e548) */

undefined8 Newtonsoft_Json_JsonSerializerSettings__get_ContractResolver(long param_1)

{
  ulong uVar1;
  long *unaff_x22;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000018;
  
  if (*(long *)(param_1 + 0x30) != 0) {
    uVar1 = FUN_0489720c();
    if ((uVar1 & 1) == 0) {
      in_stack_00000018 = thunk_FUN_02d9d534(*unaff_x22);
      FUN_04f9dc18();
      if (*(int *)(*unaff_x22 + 0xe4) == 0) {
        thunk_FUN_02dbd7b4();
      }
      FUN_04f9dfe8(in_stack_00000018);
    }
    if (in_stack_00000008._4_1_ != '\0') {
      thunk_FUN_02d6ec70();
    }
    return in_stack_00000018;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


