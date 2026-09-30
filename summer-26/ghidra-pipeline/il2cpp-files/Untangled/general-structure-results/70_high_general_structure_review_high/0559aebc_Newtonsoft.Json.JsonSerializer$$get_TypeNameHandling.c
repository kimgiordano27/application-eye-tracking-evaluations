/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$get_TypeNameHandling
ENTRY_POINT: 0559aebc
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


void Newtonsoft_Json_JsonSerializer__get_TypeNameHandling(long param_1,long param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long *unaff_x19;
  undefined8 uVar6;
  long *unaff_x21;
  
  uVar6 = **(undefined8 **)(param_1 + 0x338);
  if (*(int *)(param_2 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  FUN_056109c0(uVar6,0);
  lVar3 = *unaff_x19;
  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_06d487f8) {
        puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
        goto FUN_0559af34;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar1 = (undefined8 *)FUN_02eea86c();
FUN_0559af34:
  plVar2 = (long *)(*(code *)*puVar1)();
  lVar3 = *unaff_x21;
  if ((plVar2 != (long *)0x0) && (*plVar2 == lVar3)) {
    return;
  }
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_02f12b58(lVar3);
  }
  FUN_0559acd0();
  return;
}


