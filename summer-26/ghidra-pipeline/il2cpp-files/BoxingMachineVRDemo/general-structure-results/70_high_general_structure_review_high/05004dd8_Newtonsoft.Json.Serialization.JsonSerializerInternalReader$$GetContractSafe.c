/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$GetContractSafe
ENTRY_POINT: 05004dd8
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


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__GetContractSafe(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined4 uVar4;
  long unaff_x21;
  
  FUN_02d6084c(*(undefined8 *)(param_1 + 0x428));
  *(undefined1 *)(unaff_x21 + 0xdad) = 1;
  puVar1 = PTR_DAT_06777060;
  if (unaff_x20 == 0) {
    uVar4 = 0;
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_04e8a8a0();
    uVar4 = *(undefined4 *)(unaff_x20 + 0x10);
  }
  uVar3 = FUN_04f6d5ec();
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4(*(long *)puVar1);
  }
  FUN_05003cb0(uVar2,uVar4,7,uVar3);
  return;
}


