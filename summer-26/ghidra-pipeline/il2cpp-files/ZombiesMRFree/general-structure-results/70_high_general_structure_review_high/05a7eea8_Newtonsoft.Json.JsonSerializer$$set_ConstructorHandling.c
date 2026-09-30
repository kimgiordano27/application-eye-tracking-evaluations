/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$set_ConstructorHandling
ENTRY_POINT: 05a7eea8
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializer__set_ConstructorHandling(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  int unaff_w19;
  int unaff_w20;
  int unaff_w21;
  uint unaff_w22;
  long lVar7;
  undefined8 uVar8;
  uint unaff_w26;
  long *unaff_x27;
  undefined8 uStack0000000000000008;
  undefined8 uStack0000000000000080;
  undefined8 uStack0000000000000090;
  undefined8 uStack00000000000000a0;
  
  uStack0000000000000008 = param_1;
  uStack0000000000000080 = param_2;
  uStack0000000000000090 = param_2;
  uStack00000000000000a0 = param_2;
  FUN_04ec6c60(&stack0x00000080);
  lVar5 = *unaff_x27;
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
    lVar5 = *unaff_x27;
  }
  uVar4 = uStack00000000000000a0;
  uVar3 = uStack0000000000000090;
  uVar2 = uStack0000000000000080;
  puVar1 = PTR_DAT_06faa1d8;
  lVar7 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x10);
  if (lVar7 == 0) {
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
      lVar5 = *unaff_x27;
    }
    uVar8 = **(undefined8 **)(lVar5 + 0xb8);
    lVar7 = thunk_FUN_0301080c(*(undefined8 *)PTR_DAT_06faa1d0);
    FUN_04ba4c58(lVar7,uVar8,*(undefined8 *)PTR_DAT_06faa1e0,0);
    plVar6 = (long *)(*(long *)(*unaff_x27 + 0xb8) + 0x10);
    *plVar6 = lVar7;
    thunk_FUN_03048534(plVar6,lVar7);
  }
  uStack0000000000000080 = uVar2;
  uStack0000000000000090 = uVar3;
  uStack00000000000000a0 = uVar4;
  FUN_03db211c(unaff_w20 + unaff_w21 + unaff_w19 + (~unaff_w22 & 1) + (~unaff_w26 & 1),
               &stack0x00000080,lVar7,*(undefined8 *)puVar1);
  return;
}


