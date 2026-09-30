/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$set_ConstructorHandling
ENTRY_POINT: 055dfb2c
PROGRAM: beastcraft-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerProxy__set_ConstructorHandling
               (undefined8 param_1,long param_2,uint param_3,undefined8 *param_4)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  
                    /* try { // try from 055dfb38 to 056dfbdf has its CatchHandler @ 055dfa44 */
  if ((DAT_06e8d643 & 1) == 0) {
    FUN_02e3ca1c(PTR_DAT_06a7b590);
    FUN_02e3ca1c(PTR_DAT_06a7ae10);
    FUN_02e3ca1c(PTR_DAT_06a7b180);
    FUN_02e3ca1c(PTR_DAT_06a339f8);
    DAT_06e8d643 = 1;
  }
  FUN_05651144(*param_4,0);
  if (*(int *)(param_4 + 1) < 0) {
    FUN_056265f0(0);
  }
  FUN_045dab70();
  if ((*(byte *)((long)param_4 + 0x2c) & 1) == 0) {
    if (param_3 <= *(uint *)(param_4 + 1)) goto LAB_055dfd08;
    *(undefined2 *)(param_2 + (long)(int)*(uint *)(param_4 + 1) * 2) = 0x2f;
  }
  puVar2 = PTR_DAT_06a7ae10;
  FUN_05651144(param_4[2],0);
  if (*(int *)(param_4 + 3) < 0) {
    FUN_056265f0(0);
  }
  lVar3 = *(long *)puVar2;
  if (param_3 < *(int *)(param_4 + 1) + ((*(byte *)((long)param_4 + 0x2c) ^ 0xffffffff) & 1)) {
    FUN_056265f0(0);
  }
  if ((*(ushort *)(*(long *)(lVar3 + 0x20) + 0x135) & 1) == 0) {
    FUN_02e7568c();
  }
  FUN_045dab70();
  if ((*(byte *)((long)param_4 + 0x2d) & 1) == 0) {
    if (!CARRY4(param_3,~*(uint *)(param_4 + 5))) {
LAB_055dfd08:
                    /* WARNING: Subroutine does not return */
      FUN_02e3cccc();
    }
    *(undefined2 *)(param_2 + (long)(int)(param_3 + ~*(uint *)(param_4 + 5)) * 2) = 0x2f;
  }
  FUN_05651144(param_4[4],0);
  uVar1 = *(uint *)(param_4 + 5);
  if ((int)uVar1 < 0) {
    FUN_056265f0(0);
    uVar1 = *(uint *)(param_4 + 5);
  }
  lVar3 = *(long *)puVar2;
  if (param_3 < uVar1) {
    FUN_056265f0(0);
  }
  if ((*(ushort *)(*(long *)(lVar3 + 0x20) + 0x135) & 1) == 0) {
    FUN_02e7568c();
  }
  FUN_045dab70();
  return;
}


