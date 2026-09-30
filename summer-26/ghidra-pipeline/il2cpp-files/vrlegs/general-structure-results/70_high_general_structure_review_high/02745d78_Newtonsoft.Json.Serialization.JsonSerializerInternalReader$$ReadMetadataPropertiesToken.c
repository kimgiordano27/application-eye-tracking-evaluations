/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$ReadMetadataPropertiesToken
ENTRY_POINT: 02745d78
PROGRAM: vrlegs-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;data_collection;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8
Newtonsoft_Json_Serialization_JsonSerializerInternalReader__ReadMetadataPropertiesToken
          (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined1 uStack000000000000000c;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  puVar2 = PTR_DAT_03cd3d80;
  if (*(int *)(param_1 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  puVar1 = PTR_DAT_03cc4b20;
  uVar3 = FUN_02745e48();
  uStack000000000000000c = 0;
  in_stack_00000010 = uVar3;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  lVar4 = FUN_026a4574(uVar3,&stack0x0000000c,0);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01a58e78(*(long *)puVar1);
  }
  lVar5 = FUN_0274322c(&stack0x00000010);
  if (lVar5 + lVar4 < 0x2bca2875f4374000) {
    if (lVar5 + lVar4 < 0) {
      in_stack_00000018 = 0x8000000000000000;
    }
    else {
      in_stack_00000018 = 0;
      FUN_02742b00(&stack0x00000018);
    }
  }
  else {
    in_stack_00000018 = 0xabca2875f4373fff;
  }
  return in_stack_00000018;
}


