/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$SerializeObject
ENTRY_POINT: 055914a0
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


void Newtonsoft_Json_JsonConvert__SerializeObject
               (undefined8 param_1,long param_2,uint param_3,undefined8 *param_4)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  undefined4 uStack000000000000000c;
  uint uStack0000000000000018;
  
  uStack0000000000000018 = param_3;
  if ((DAT_071c28a8 & 1) == 0) {
    FUN_02f07e70(PTR_DAT_06d48af8);
    FUN_02f07e70(PTR_DAT_06d48268);
    FUN_02f07e70(PTR_DAT_06d486e0);
    FUN_02f07e70(PTR_DAT_06d48780);
    DAT_071c28a8 = 1;
  }
  FUN_0564ec5c(*param_4,0);
  if (*(int *)(param_4 + 1) < 0) {
    FUN_0562295c(0);
  }
  uStack000000000000000c = 0;
  FUN_0462c89c();
  if ((*(byte *)((long)param_4 + 0x2c) & 1) == 0) {
    if (param_3 <= *(uint *)(param_4 + 1)) goto LAB_05591688;
    *(undefined2 *)(param_2 + (long)(int)*(uint *)(param_4 + 1) * 2) = 0x2f;
  }
  puVar2 = PTR_DAT_06d48268;
  FUN_0564ec5c(param_4[2],0);
  if (*(int *)(param_4 + 3) < 0) {
    FUN_0562295c(0);
  }
  uStack000000000000000c = 0;
  lVar3 = *(long *)puVar2;
  if (uStack0000000000000018 < *(int *)(param_4 + 1) + (~(uint)*(byte *)((long)param_4 + 0x2c) & 1))
  {
    FUN_0562295c(0);
  }
  if ((*(byte *)(*(long *)(lVar3 + 0x20) + 0x135) & 1) == 0) {
    FUN_02eea768();
  }
  FUN_0462c89c();
  if ((*(byte *)((long)param_4 + 0x2d) & 1) == 0) {
    if (!CARRY4(param_3,~*(uint *)(param_4 + 5))) {
LAB_05591688:
                    /* WARNING: Subroutine does not return */
      FUN_02f080c8();
    }
    *(undefined2 *)(param_2 + (long)(int)(param_3 + ~*(uint *)(param_4 + 5)) * 2) = 0x2f;
  }
  FUN_0564ec5c(param_4[4],0);
  uVar1 = *(uint *)(param_4 + 5);
  if ((int)uVar1 < 0) {
    FUN_0562295c(0);
    uVar1 = *(uint *)(param_4 + 5);
  }
  lVar3 = *(long *)puVar2;
  uStack000000000000000c = 0;
  if (param_3 < uVar1) {
    FUN_0562295c(0);
  }
  if ((*(byte *)(*(long *)(lVar3 + 0x20) + 0x135) & 1) == 0) {
    FUN_02eea768();
  }
  FUN_0462c89c();
  return;
}


