/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$CreateDefault
ENTRY_POINT: 07097edc
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializer__CreateDefault(long param_1)

{
  undefined *puVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x20;
  undefined1 auVar7 [16];
  
  lVar6 = **(long **)(param_1 + 0x750);
  lVar3 = *(long *)(lVar6 + 0x20);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03cf1244();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03cf1244();
  }
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  lVar3 = *(long *)(lVar6 + 0x20);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03cf1244();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03cf1244();
  }
  plVar4 = (long *)**(long **)(lVar3 + 0xb8);
  if (plVar4 != (long *)0x0) {
    uVar5 = (**(code **)(*plVar4 + 0x178))
                      (plVar4,*(undefined4 *)(unaff_x20 + 0x10),*(undefined8 *)(*plVar4 + 0x180));
    auVar7 = FUN_05a7d8bc(uVar5,*(undefined8 *)PTR_DAT_08e9bef0);
    puVar1 = PTR_DAT_08e9b410;
    if (DAT_0941b3fe == '\0') {
      FUN_03c8f898(PTR_DAT_08e83798);
      DAT_0941b3fe = '\x01';
    }
    uVar5 = System_Convert__ToInt16();
    uVar2 = FUN_07102b88(uVar5,*(undefined4 *)(unaff_x20 + 0x10),auVar7._0_8_,auVar7._8_8_,0);
    lVar3 = *(long *)puVar1;
    if (auVar7._8_4_ < uVar2) {
      FUN_07122110(0);
    }
    FUN_088d7068(*(undefined1 *)(*(long *)(lVar3 + 0x20) + 0x135));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


