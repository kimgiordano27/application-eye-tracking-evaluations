/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$SerializeObject
ENTRY_POINT: 055913c8
PROGRAM: Untangled-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonConvert__SerializeObject(void)

{
  undefined *puVar1;
  long unaff_x19;
  long unaff_x20;
  uint unaff_w21;
  long lVar2;
  int iStack0000000000000008;
  undefined4 uStack000000000000000c;
  uint in_stack_00000018;
  
  uStack000000000000000c = 0;
  FUN_0462c89c();
  if ((*(byte *)(unaff_x20 + 0x1c) & 1) == 0) {
    if (unaff_w21 <= *(uint *)(unaff_x20 + 8)) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c8();
    }
    *(undefined2 *)(unaff_x19 + (long)(int)*(uint *)(unaff_x20 + 8) * 2) = 0x2f;
  }
  puVar1 = PTR_DAT_06d48268;
  FUN_0564ec5c(*(undefined8 *)(unaff_x20 + 0x10),0);
  iStack0000000000000008 = *(int *)(unaff_x20 + 0x18);
  if (iStack0000000000000008 < 0) {
    FUN_0562295c(0);
  }
  uStack000000000000000c = 0;
  lVar2 = *(long *)puVar1;
  if (in_stack_00000018 < *(int *)(unaff_x20 + 8) + (~(uint)*(byte *)(unaff_x20 + 0x1c) & 1)) {
    FUN_0562295c(0);
  }
  if ((*(byte *)(*(long *)(lVar2 + 0x20) + 0x135) & 1) == 0) {
    FUN_02eea768();
  }
  FUN_0462c89c();
  return;
}


