/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$GetInternalSerializer
ENTRY_POINT: 055da198
PROGRAM: beastcraft-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__GetInternalSerializer
               (undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 in_stack_00000008;
  
  FUN_055d9cf0(param_1,0,1);
  if (in_stack_00000008._4_4_ != 0) {
    uVar1 = FUN_055d9144();
    thunk_FUN_02ea289c(PTR_DAT_06a7aba8);
    FUN_02a73238();
    uVar1 = FUN_055d91c8(uVar1,in_stack_00000008._4_4_);
    uVar2 = thunk_FUN_02ea289c(PTR_DAT_06a83638);
                    /* WARNING: Subroutine does not return */
    FUN_02e3cb88(uVar1,uVar2);
  }
  return;
}


