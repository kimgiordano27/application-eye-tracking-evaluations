/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$CreateISerializable
ENTRY_POINT: 074e3e14
PROGRAM: m3ar-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CreateISerializable(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 unaff_w19;
  undefined4 uVar4;
  long unaff_x21;
  long unaff_x22;
  
  FUN_0403162c();
  *(undefined1 *)(unaff_x22 + 0xeb1) = 1;
  FUN_07469c20(unaff_w19,0);
  if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_074f6cdc(0x30,0);
  }
  if (DAT_0953f498 == '\0') {
    FUN_0403162c(PTR_DAT_08f8ca88);
    DAT_0953f498 = '\x01';
  }
  puVar1 = PTR_DAT_08f9f500;
  if (unaff_x21 == 0) {
    uVar2 = 0;
    uVar4 = 0;
  }
  else {
    uVar2 = FUN_0736648c();
    uVar4 = *(undefined4 *)(unaff_x21 + 0x10);
  }
  uVar3 = FUN_074695f4();
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0408f364(*(long *)puVar1);
  }
  FUN_074e3b00(uVar2,uVar4,unaff_w19,uVar3);
  return;
}


