/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$get_ObjectCreationHandling
ENTRY_POINT: 07611260
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined1  [16] Newtonsoft_Json_JsonSerializerSettings__get_ObjectCreationHandling(long param_1)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 in_stack_00000008;
  
  if (param_1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    in_stack_00000008 = 0;
    thunk_FUN_040ec700();
    in_stack_00000008 = uVar3;
    thunk_FUN_040ec700(&stack0x00000008,uVar3);
    auVar1._8_8_ = in_stack_00000008;
    auVar1._0_8_ = uVar2;
    return auVar1;
  }
  thunk_FUN_040dedf8(PTR_DAT_0929cb88);
  uVar2 = thunk_FUN_040b4efc();
  uVar3 = thunk_FUN_040dedf8(PTR_DAT_092b9990);
  FUN_07679464(uVar2,uVar3,0);
  uVar3 = thunk_FUN_040dedf8(PTR_DAT_092d8568);
                    /* WARNING: Subroutine does not return */
  FUN_040776f4(uVar2,uVar3);
}


