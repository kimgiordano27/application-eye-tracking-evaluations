/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$.ctor
ENTRY_POINT: 05591550
PROGRAM: Untangled-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializerSettings___ctor(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  bool in_CY;
  uint unaff_w19;
  long unaff_x20;
  long unaff_x21;
  long lVar3;
  uint in_stack_00000018;
  
  if (!in_CY) {
    *(undefined2 *)(unaff_x20 + param_1 * 2) = 0x2f;
    puVar2 = PTR_DAT_06d48268;
    FUN_0564ec5c(*(undefined8 *)(unaff_x21 + 0x10),0);
    if (*(int *)(unaff_x21 + 0x18) < 0) {
      FUN_0562295c(0);
    }
    lVar3 = *(long *)puVar2;
    if (in_stack_00000018 < *(int *)(unaff_x21 + 8) + (~(uint)*(byte *)(unaff_x21 + 0x2c) & 1)) {
      FUN_0562295c(0);
    }
    if ((*(byte *)(*(long *)(lVar3 + 0x20) + 0x135) & 1) == 0) {
      FUN_02eea768();
    }
    FUN_0462c89c();
    if ((*(byte *)(unaff_x21 + 0x2d) & 1) == 0) {
      if (!CARRY4(unaff_w19,~*(uint *)(unaff_x21 + 0x28))) goto LAB_05591688;
      *(undefined2 *)(unaff_x20 + (long)(int)(unaff_w19 + ~*(uint *)(unaff_x21 + 0x28)) * 2) = 0x2f;
    }
    FUN_0564ec5c(*(undefined8 *)(unaff_x21 + 0x20),0);
    uVar1 = *(uint *)(unaff_x21 + 0x28);
    if ((int)uVar1 < 0) {
      FUN_0562295c(0);
      uVar1 = *(uint *)(unaff_x21 + 0x28);
    }
    lVar3 = *(long *)puVar2;
    if (unaff_w19 < uVar1) {
      FUN_0562295c(0);
    }
    if ((*(byte *)(*(long *)(lVar3 + 0x20) + 0x135) & 1) == 0) {
      FUN_02eea768();
    }
    FUN_0462c89c();
    return;
  }
LAB_05591688:
                    /* WARNING: Subroutine does not return */
  FUN_02f080c8();
}


