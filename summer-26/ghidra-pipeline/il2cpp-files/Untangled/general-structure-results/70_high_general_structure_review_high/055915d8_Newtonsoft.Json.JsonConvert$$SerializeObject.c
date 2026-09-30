/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$SerializeObject
ENTRY_POINT: 055915d8
PROGRAM: Untangled-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonConvert__SerializeObject(void)

{
  uint uVar1;
  uint unaff_w19;
  long unaff_x20;
  long unaff_x21;
  long lVar2;
  long *unaff_x24;
  undefined4 uStack000000000000000c;
  
  FUN_0462c89c();
  if ((*(byte *)(unaff_x21 + 0x2d) & 1) == 0) {
    if (!CARRY4(unaff_w19,~*(uint *)(unaff_x21 + 0x28))) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c8();
    }
    *(undefined2 *)(unaff_x20 + (long)(int)(unaff_w19 + ~*(uint *)(unaff_x21 + 0x28)) * 2) = 0x2f;
  }
  FUN_0564ec5c(*(undefined8 *)(unaff_x21 + 0x20),0);
  uVar1 = *(uint *)(unaff_x21 + 0x28);
  if ((int)uVar1 < 0) {
    FUN_0562295c(0);
    uVar1 = *(uint *)(unaff_x21 + 0x28);
  }
  lVar2 = *unaff_x24;
  uStack000000000000000c = 0;
  if (unaff_w19 < uVar1) {
    FUN_0562295c(0);
  }
  if ((*(byte *)(*(long *)(lVar2 + 0x20) + 0x135) & 1) == 0) {
    FUN_02eea768();
  }
  FUN_0462c89c();
  return;
}


