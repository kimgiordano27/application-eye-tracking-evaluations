/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalBase$$.ctor
ENTRY_POINT: 07a3c0fc
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8 Newtonsoft_Json_Serialization_JsonSerializerInternalBase___ctor(undefined8 param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 *unaff_x19;
  undefined4 unaff_w20;
  long unaff_x22;
  
  FUN_079b92f4(param_1,0);
  puVar2 = PTR_DAT_09f40bf0;
  if (unaff_x22 != 0) {
    if (DAT_0a51d028 == '\0') {
      FUN_04447ba8(PTR_DAT_09f28738);
      DAT_0a51d028 = '\x01';
    }
    uVar3 = FUN_078b1c78();
    uVar1 = *(undefined4 *)(unaff_x22 + 0x10);
    uVar4 = FUN_079b8cc0();
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_044a54b4(*(long *)puVar2);
    }
    uVar3 = FUN_07a3b004(uVar3,uVar1,unaff_w20,uVar4);
    return uVar3;
  }
  *unaff_x19 = 0;
  return 0;
}


