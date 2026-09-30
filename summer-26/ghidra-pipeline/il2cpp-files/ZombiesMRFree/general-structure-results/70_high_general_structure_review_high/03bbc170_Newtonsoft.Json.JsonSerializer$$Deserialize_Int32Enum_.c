/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$Deserialize<Int32Enum>
ENTRY_POINT: 03bbc170
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 81
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


void Newtonsoft_Json_JsonSerializer__Deserialize<Int32Enum>
               (undefined8 *param_1,undefined4 param_2,long param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined4 uStack000000000000000c;
  
  uStack000000000000000c = param_2;
  if (*(long *)(param_3 + 0x38) == 0) {
    FUN_02feb320(param_3);
  }
  plVar4 = (long *)*param_1;
  if (plVar4 != (long *)0x0) {
    iVar1 = (int)plVar4[1];
    FUN_064494d4(*plVar4 != 0,0);
    FUN_064494d4((long)iVar1 + *plVar4 != 0,0);
    lVar5 = *plVar4;
    lVar3 = *(long *)(*(long *)(param_3 + 0x38) + 0x10);
    lVar2 = *(long *)(lVar3 + 0x38);
    if (lVar2 == 0) {
      FUN_02feb320(lVar3);
      lVar2 = *(long *)(lVar3 + 0x38);
    }
    FUN_03e4f34c(&stack0x0000000c,lVar5 + iVar1,*(undefined8 *)(lVar2 + 8));
    *(int *)(plVar4 + 1) = iVar1 + 4;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


