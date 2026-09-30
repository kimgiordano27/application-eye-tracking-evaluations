/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$set_ContractResolver
ENTRY_POINT: 055df9d4
PROGRAM: beastcraft-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerProxy__set_ContractResolver
               (undefined8 param_1,long param_2,uint param_3,undefined8 *param_4)

{
  undefined *puVar1;
  long unaff_x22;
  long lVar2;
  
  if ((*(byte *)(unaff_x22 + 0x642) & 1) == 0) {
    FUN_02e3ca1c(PTR_DAT_06a7b590);
    FUN_02e3ca1c(PTR_DAT_06a7ae10);
    FUN_02e3ca1c(PTR_DAT_06a7b180);
    *(undefined1 *)(unaff_x22 + 0x642) = 1;
  }
  FUN_05651144(*param_4,0);
  if (*(int *)(param_4 + 1) < 0) {
    FUN_056265f0(0);
  }
  FUN_045dab70();
  if ((*(byte *)((long)param_4 + 0x1c) & 1) == 0) {
    if (param_3 <= *(uint *)(param_4 + 1)) {
                    /* WARNING: Subroutine does not return */
      FUN_02e3cccc();
    }
    *(undefined2 *)(param_2 + (long)(int)*(uint *)(param_4 + 1) * 2) = 0x2f;
  }
  puVar1 = PTR_DAT_06a7ae10;
  FUN_05651144(param_4[2],0);
  if (*(int *)(param_4 + 3) < 0) {
    FUN_056265f0(0);
  }
  lVar2 = *(long *)puVar1;
  if (param_3 < *(int *)(param_4 + 1) + ((*(byte *)((long)param_4 + 0x1c) ^ 0xffffffff) & 1)) {
    FUN_056265f0(0);
  }
  if ((*(ushort *)(*(long *)(lVar2 + 0x20) + 0x135) & 1) == 0) {
    FUN_02e7568c();
  }
  FUN_045dab70();
  return;
}


