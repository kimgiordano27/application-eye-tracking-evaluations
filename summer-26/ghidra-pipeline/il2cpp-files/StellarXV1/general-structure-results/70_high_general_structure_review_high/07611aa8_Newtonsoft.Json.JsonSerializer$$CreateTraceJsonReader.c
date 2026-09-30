/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$CreateTraceJsonReader
ENTRY_POINT: 07611aa8
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializer__CreateTraceJsonReader(void)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  
  puVar1 = PTR_DAT_092d84d0;
  plVar2 = (long *)thunk_FUN_040b4e00();
  if (plVar2 == (long *)0x0) {
    thunk_FUN_040dedf8(PTR_DAT_09287028);
    uVar4 = thunk_FUN_040b4efc();
    uVar5 = thunk_FUN_040dedf8(PTR_DAT_092d84d8);
    FUN_075d4b88(uVar4,uVar5,0);
    uVar5 = thunk_FUN_040dedf8(PTR_DAT_092d85b8);
                    /* WARNING: Subroutine does not return */
    FUN_040776f4(uVar4,uVar5);
  }
  lVar6 = *plVar2;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
        puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_07611b3c;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar3 = (undefined8 *)FUN_040b1e00(plVar2,*(long *)puVar1,0);
LAB_07611b3c:
                    /* WARNING: Could not recover jumptable at 0x07611b54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar3)(plVar2);
  return;
}


