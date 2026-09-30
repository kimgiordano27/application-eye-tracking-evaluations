/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$ResolveTypeName
ENTRY_POINT: 06859508
PROGRAM: Waifu-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x068595bc) */

void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__ResolveTypeName(long param_1)

{
  long lVar1;
  int in_w8;
  undefined8 uVar2;
  long unaff_x21;
  char cStack000000000000000c;
  
  if (in_w8 == 0) {
    FUN_033b9870();
    param_1 = *(long *)(unaff_x21 + 0x988);
  }
  uVar2 = **(undefined8 **)(param_1 + 0xb8);
  cStack000000000000000c = '\0';
  FUN_0689bfb8(uVar2,&stack0x0000000c,0);
  lVar1 = *(long *)(unaff_x21 + 0x988);
  if (*(int *)(lVar1 + 0xe0) == 0) {
    FUN_033b9870();
    lVar1 = *(long *)(unaff_x21 + 0x988);
  }
  DataMemoryBarrier(2,3);
  if (*(char *)(*(long *)(lVar1 + 0xb8) + 8) == '\0') {
    if (*(int *)(DAT_083c8990 + 0xe0) == 0) {
      FUN_033b9870();
    }
    if (*(int *)(*(long *)(unaff_x21 + 0x988) + 0xe0) == 0) {
      FUN_033b9870();
    }
    DataMemoryBarrier(2,3);
    *(undefined1 *)(*(long *)(*(long *)(unaff_x21 + 0x988) + 0xb8) + 8) = 1;
  }
  if (cStack000000000000000c != '\0') {
    FUN_0336d814(uVar2);
  }
  return;
}


