/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$DeserializeInternal
ENTRY_POINT: 05a8071c
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_6;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x05a80994) */

void Newtonsoft_Json_JsonSerializer__DeserializeInternal
               (long param_1,long param_2,uint param_3,int param_4)

{
  undefined2 uVar1;
  ulong uVar2;
  int iVar3;
  uint uVar4;
  char cStack000000000000000c;
  
  if (*(long *)(param_1 + 0x70) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02fe94e8();
  }
  if (*(char *)(*(long *)(param_1 + 0x70) + 0xa0) == '\0') {
    FUN_05a41b1c(param_1,param_2,param_3,param_4,0);
  }
  else {
    cStack000000000000000c = '\0';
    FUN_05b54040(param_1,&stack0x0000000c,0);
    iVar3 = 0;
    param_4 = param_4 + param_3;
    uVar4 = param_3;
    do {
      if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02fe94e8();
      }
      if (*(uint *)(param_2 + 0x18) <= param_3) {
                    /* WARNING: Subroutine does not return */
        FUN_02fe94f0();
      }
      if (*(long *)(param_1 + 0x70) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02fe94e8();
      }
      uVar1 = *(undefined2 *)(param_2 + (long)(int)param_3 * 2 + 0x20);
      uVar2 = FUN_05b43b0c(*(long *)(param_1 + 0x70),uVar1,0);
      param_3 = param_3 + 1;
      if ((uVar2 & 1) == 0) {
        iVar3 = iVar3 + 1;
      }
      else {
        if (0 < iVar3) {
          FUN_05a41b1c(param_1,param_2,uVar4,iVar3,0);
          iVar3 = 0;
        }
        if (*(long *)(param_1 + 0x70) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02fe94e8();
        }
        FUN_05b438dc(*(long *)(param_1 + 0x70),uVar1,0);
        uVar4 = param_3;
      }
    } while ((int)param_3 < param_4);
    if (0 < iVar3) {
      FUN_05a41b1c(param_1,param_2,uVar4,iVar3,0);
    }
    if (cStack000000000000000c != '\0') {
      thunk_FUN_0301ce48(param_1,0);
    }
  }
  return;
}


