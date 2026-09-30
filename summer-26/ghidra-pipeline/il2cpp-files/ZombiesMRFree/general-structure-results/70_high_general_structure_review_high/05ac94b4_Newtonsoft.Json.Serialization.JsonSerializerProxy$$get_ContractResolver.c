/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$get_ContractResolver
ENTRY_POINT: 05ac94b4
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerProxy__get_ContractResolver
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  uint in_w8;
  long in_x9;
  long in_x10;
  uint in_w12;
  uint *puVar4;
  uint unaff_w19;
  long unaff_x20;
  long unaff_x21;
  long *plVar5;
  long lVar6;
  
  do {
    plVar5 = (long *)(unaff_x20 + (long)(int)in_w12 * 0x18 + 0x20);
    lVar6 = (long)(int)in_w12;
    if ((*plVar5 == 0) || (*plVar5 == *(long *)(param_1 + 0x10))) {
      puVar3 = (undefined8 *)(unaff_x20 + lVar6 * 0x18 + 0x28);
      *puVar3 = param_4;
      thunk_FUN_03048534(puVar3,param_4);
      if (in_w12 < *(uint *)(unaff_x20 + 0x18)) {
        *plVar5 = unaff_x21;
        thunk_FUN_03048534(plVar5);
        if (in_w12 < *(uint *)(unaff_x20 + 0x18)) {
          lVar6 = unaff_x20 + lVar6 * 0x18;
          *(uint *)(lVar6 + 0x30) = *(uint *)(lVar6 + 0x30) | unaff_w19;
          return;
        }
      }
      break;
    }
    puVar4 = (uint *)(unaff_x20 + lVar6 * 0x18 + 0x30);
    uVar1 = *puVar4;
    if (-1 < (int)uVar1) {
      *puVar4 = uVar1 | 0x80000000;
      *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
    }
    iVar2 = 0;
    if (in_x9 != 0) {
      iVar2 = (int)((lVar6 + in_x10) / in_x9);
    }
    in_w12 = (int)(lVar6 + in_x10) - iVar2 * (int)in_x9;
  } while (in_w12 < in_w8);
                    /* WARNING: Subroutine does not return */
  FUN_02fe94f0();
}


