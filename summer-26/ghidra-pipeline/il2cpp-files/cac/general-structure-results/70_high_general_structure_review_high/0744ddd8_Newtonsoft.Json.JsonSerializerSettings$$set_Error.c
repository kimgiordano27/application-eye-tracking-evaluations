/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$set_Error
ENTRY_POINT: 0744ddd8
PROGRAM: cac-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8 Newtonsoft_Json_JsonSerializerSettings__set_Error(void)

{
  long lVar1;
  undefined8 uVar2;
  char *pcVar3;
  undefined8 *puVar4;
  long *unaff_x19;
  long unaff_x20;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  FUN_03f13384();
  FUN_03f13384(PTR_DAT_09131288);
  *(undefined1 *)(unaff_x20 + 0x43) = 1;
  in_stack_00000010 = 0;
  in_stack_00000018 = 0;
  pcVar3 = *(char **)(*unaff_x19 + 0xb8);
  if (*pcVar3 == '\0') {
    lVar1 = FUN_073ec3e4(0);
    if (lVar1 != 0) {
      FUN_074acf20();
      in_stack_00000018 = 0;
      in_stack_00000010 = 0;
      uVar2 = thunk_FUN_074aef34(&stack0x00000010,*(undefined8 *)PTR_DAT_09131288,0);
      puVar4 = (undefined8 *)(*(long *)(*unaff_x19 + 0xb8) + 8);
      *puVar4 = uVar2;
      thunk_FUN_03f86000(puVar4,uVar2);
    }
    pcVar3 = *(char **)(*unaff_x19 + 0xb8);
    *pcVar3 = '\x01';
  }
  return *(undefined8 *)(pcVar3 + 8);
}


