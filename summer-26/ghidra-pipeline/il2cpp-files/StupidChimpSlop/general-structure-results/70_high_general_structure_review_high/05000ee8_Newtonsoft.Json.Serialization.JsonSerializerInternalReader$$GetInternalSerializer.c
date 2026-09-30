/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$GetInternalSerializer
ENTRY_POINT: 05000ee8
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


undefined8 Newtonsoft_Json_Serialization_JsonSerializerInternalReader__GetInternalSerializer(void)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 *unaff_x19;
  undefined4 unaff_w20;
  long unaff_x22;
  long unaff_x23;
  
  FUN_02d4dc40(PTR_DAT_06656a10);
  *(undefined1 *)(unaff_x23 + 1) = 1;
  FUN_04f8d208(unaff_w20,0);
  puVar2 = PTR_DAT_06656a10;
  if (unaff_x22 != 0) {
    if (DAT_06a4dab6 == '\0') {
      FUN_02d4dc40(PTR_DAT_0664e730);
      DAT_06a4dab6 = '\x01';
    }
    uVar3 = FUN_04e7d3e0();
    uVar1 = *(undefined4 *)(unaff_x22 + 0x10);
    uVar4 = FUN_04f8cbd4();
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_02dabd98(*(long *)puVar2);
    }
    uVar3 = FUN_04fffe18(uVar3,uVar1,unaff_w20,uVar4);
    return uVar3;
  }
  *unaff_x19 = 0;
  return 0;
}


