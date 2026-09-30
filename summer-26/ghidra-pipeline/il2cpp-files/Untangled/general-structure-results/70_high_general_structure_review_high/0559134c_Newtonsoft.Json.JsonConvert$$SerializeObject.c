/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$SerializeObject
ENTRY_POINT: 0559134c
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


void Newtonsoft_Json_JsonConvert__SerializeObject
               (undefined8 param_1,long param_2,uint param_3,undefined8 *param_4)

{
  undefined *puVar1;
  long unaff_x22;
  long lVar2;
  undefined4 uStack000000000000000c;
  uint uStack0000000000000018;
  
  uStack0000000000000018 = param_3;
  if ((*(byte *)(unaff_x22 + 0x8a7) & 1) == 0) {
    FUN_02f07e70(PTR_DAT_06d48af8);
    FUN_02f07e70(PTR_DAT_06d48268);
    FUN_02f07e70(PTR_DAT_06d486e0);
    *(undefined1 *)(unaff_x22 + 0x8a7) = 1;
  }
  FUN_0564ec5c(*param_4,0);
  if (*(int *)(param_4 + 1) < 0) {
    FUN_0562295c(0);
  }
  uStack000000000000000c = 0;
  FUN_0462c89c();
  if ((*(byte *)((long)param_4 + 0x1c) & 1) == 0) {
    if (param_3 <= *(uint *)(param_4 + 1)) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c8();
    }
    *(undefined2 *)(param_2 + (long)(int)*(uint *)(param_4 + 1) * 2) = 0x2f;
  }
  puVar1 = PTR_DAT_06d48268;
  FUN_0564ec5c(param_4[2],0);
  if (*(int *)(param_4 + 3) < 0) {
    FUN_0562295c(0);
  }
  uStack000000000000000c = 0;
  lVar2 = *(long *)puVar1;
  if (uStack0000000000000018 < *(int *)(param_4 + 1) + (~(uint)*(byte *)((long)param_4 + 0x1c) & 1))
  {
    FUN_0562295c(0);
  }
  if ((*(byte *)(*(long *)(lVar2 + 0x20) + 0x135) & 1) == 0) {
    FUN_02eea768();
  }
  FUN_0462c89c();
  return;
}


