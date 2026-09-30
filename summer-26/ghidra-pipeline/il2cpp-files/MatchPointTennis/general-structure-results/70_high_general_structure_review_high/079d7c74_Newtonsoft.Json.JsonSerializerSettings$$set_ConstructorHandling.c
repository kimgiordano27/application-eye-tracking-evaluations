/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$set_ConstructorHandling
ENTRY_POINT: 079d7c74
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializerSettings__set_ConstructorHandling(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x19;
  int unaff_w20;
  
  FUN_07a80df4(param_1,0);
  puVar3 = PTR_DAT_09f29478;
  puVar2 = PTR_DAT_09f21428;
  puVar1 = PTR_DAT_09f20d20;
  if (-1 < unaff_w20) {
    uVar4 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f20d20,unaff_w20);
    *(undefined8 *)(unaff_x19 + 0x10) = uVar4;
    thunk_FUN_044bb4b4();
    uVar4 = FUN_04447c90(*(undefined8 *)puVar1,unaff_w20);
    *(undefined8 *)(unaff_x19 + 0x18) = uVar4;
    thunk_FUN_044bb4b4();
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    uVar4 = FUN_079ca07c();
    uVar5 = thunk_FUN_0448520c(*(undefined8 *)puVar3);
    FUN_079d3cd4(uVar5,uVar4);
    *(undefined8 *)(unaff_x19 + 0x28) = uVar5;
    thunk_FUN_044bb4b4((undefined8 *)(unaff_x19 + 0x28),uVar5);
    return;
  }
  thunk_FUN_044adef4(PTR_DAT_09f25200);
  uVar4 = thunk_FUN_0448520c();
  uVar5 = thunk_FUN_044adef4(PTR_DAT_09f291b8);
  uVar6 = thunk_FUN_044adef4(PTR_DAT_09f25208);
  FUN_0799a4bc(uVar4,uVar5,uVar6,0);
  uVar5 = thunk_FUN_044adef4(PTR_DAT_09f42de8);
                    /* WARNING: Subroutine does not return */
  FUN_04447d10(uVar4,uVar5);
}


