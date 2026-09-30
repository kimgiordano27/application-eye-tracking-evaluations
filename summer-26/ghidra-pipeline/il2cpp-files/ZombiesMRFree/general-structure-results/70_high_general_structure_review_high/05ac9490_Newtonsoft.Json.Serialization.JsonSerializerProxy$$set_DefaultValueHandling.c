/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$set_DefaultValueHandling
ENTRY_POINT: 05ac9490
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_6;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerProxy__set_DefaultValueHandling
               (long param_1,long param_2,long param_3,undefined8 param_4,uint param_5)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 *puVar5;
  uint in_w8;
  uint in_w10;
  uint *puVar6;
  uint unaff_w19;
  long *plVar7;
  long lVar8;
  
  uVar2 = in_w8 - 1;
  uVar3 = 0;
  if (uVar2 != 0) {
    uVar3 = in_w10 / uVar2;
  }
  uVar4 = 0;
  if (in_w8 != 0) {
    uVar4 = param_5 / in_w8;
  }
  param_5 = param_5 - uVar4 * in_w8;
  do {
    plVar7 = (long *)(param_2 + (long)(int)param_5 * 0x18 + 0x20);
    lVar8 = (long)(int)param_5;
    if ((*plVar7 == 0) || (*plVar7 == *(long *)(param_1 + 0x10))) {
      puVar5 = (undefined8 *)(param_2 + lVar8 * 0x18 + 0x28);
      *puVar5 = param_4;
      thunk_FUN_03048534(puVar5,param_4);
      if (param_5 < *(uint *)(param_2 + 0x18)) {
        *plVar7 = param_3;
        thunk_FUN_03048534(plVar7,param_3);
        if (param_5 < *(uint *)(param_2 + 0x18)) {
          param_2 = param_2 + lVar8 * 0x18;
          *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) | unaff_w19;
          return;
        }
      }
      break;
    }
    puVar6 = (uint *)(param_2 + lVar8 * 0x18 + 0x30);
    uVar4 = *puVar6;
    if (-1 < (int)uVar4) {
      *puVar6 = uVar4 | 0x80000000;
      *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
    }
    lVar8 = lVar8 + (ulong)((in_w10 - uVar3 * uVar2) + 1);
    iVar1 = 0;
    if ((ulong)in_w8 != 0) {
      iVar1 = (int)(lVar8 / (long)(ulong)in_w8);
    }
    param_5 = (int)lVar8 - iVar1 * in_w8;
  } while (param_5 < in_w8);
                    /* WARNING: Subroutine does not return */
  FUN_02fe94f0();
}


