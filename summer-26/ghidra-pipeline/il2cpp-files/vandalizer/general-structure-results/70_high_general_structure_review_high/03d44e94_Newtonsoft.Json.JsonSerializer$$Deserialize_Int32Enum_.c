/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$Deserialize<Int32Enum>
ENTRY_POINT: 03d44e94
PROGRAM: vandalizer-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


void Newtonsoft_Json_JsonSerializer__Deserialize<Int32Enum>(void)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long unaff_x22;
  long lVar5;
  
  FUN_0322bef4();
  plVar1 = (long *)thunk_FUN_0322f04c();
  if (plVar1 == (long *)0x0) {
    FUN_03f00918();
  }
  else {
    lVar2 = *plVar1;
    lVar5 = *(long *)(*(long *)(unaff_x22 + 0x38) + 0x70);
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == *(long *)(lVar5 + 0x20)) {
          lVar2 = lVar2 + (long)(int)(*piVar4 + (uint)*(ushort *)(lVar5 + 0x50)) * 0x10 + 0x138;
          goto LAB_03d44f44;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar3 != 0);
    }
    lVar2 = FUN_0322c1e8(plVar1);
LAB_03d44f44:
    lVar2 = thunk_FUN_03211620(*(undefined8 *)(lVar2 + 8),lVar5);
    (**(code **)(lVar2 + 8))(plVar1);
  }
  return;
}


