/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$set_Context
ENTRY_POINT: 058bb474
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8 Newtonsoft_Json_JsonSerializerSettings__set_Context(ulong param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x19;
  long unaff_x20;
  uint unaff_w21;
  long unaff_x23;
  
  if ((param_1 & 1) == 0) {
    thunk_FUN_032e1da0(PTR_DAT_07297108);
    *(undefined1 *)(unaff_x23 + 10) = 1;
  }
  puVar1 = PTR_DAT_07297108;
  if ((unaff_x20 == 0) || (unaff_x19 == 0)) {
    puVar1 = PTR_DAT_0727fe10;
    if (unaff_x20 != 0) {
      puVar1 = PTR_DAT_07297178;
    }
    uVar3 = thunk_FUN_032e1da0(puVar1);
    thunk_FUN_032e1da0(PTR_DAT_0727dbc0);
    uVar4 = thunk_FUN_032a56a0();
    uVar5 = thunk_FUN_032e1da0(PTR_DAT_07291510);
    FUN_0589fdac(uVar4,uVar3,uVar5,0);
    uVar3 = thunk_FUN_032e1da0(PTR_DAT_07297180);
                    /* WARNING: Subroutine does not return */
    FUN_032d5dbc(uVar4,uVar3);
  }
  if (*(int *)(unaff_x19 + 0x10) == 0) {
    uVar3 = 1;
  }
  else {
    if (*(int *)(unaff_x20 + 0x10) != 0) {
      if ((unaff_w21 != 0x40000000) && (unaff_w21 != 0x10000000)) {
        if (0x1f < unaff_w21) {
          thunk_FUN_032e1da0(PTR_DAT_0727dd40);
          uVar3 = thunk_FUN_032a56a0();
          uVar4 = thunk_FUN_032e1da0(PTR_DAT_072970f0);
          uVar5 = thunk_FUN_032e1da0(PTR_DAT_07296c28);
          FUN_05897d8c(uVar3,uVar4,uVar5,0);
          uVar4 = thunk_FUN_032e1da0(PTR_DAT_07297180);
                    /* WARNING: Subroutine does not return */
          FUN_032d5dbc(uVar3,uVar4);
        }
        if (*(int *)(*(long *)PTR_DAT_07297108 + 0xe0) == 0) {
          thunk_FUN_032cd7c0();
        }
        if (DAT_076d5068 == '\0') {
          thunk_FUN_032e1da0(PTR_DAT_07297108);
          DAT_076d5068 = '\x01';
        }
        lVar2 = *(long *)puVar1;
        if (*(int *)(lVar2 + 0xe0) == 0) {
          thunk_FUN_032cd7c0();
          lVar2 = *(long *)puVar1;
        }
        if (**(char **)(lVar2 + 0xb8) == '\0') {
          uVar3 = FUN_058bb660();
          return uVar3;
        }
      }
      uVar3 = FUN_057a9fc0();
      return uVar3;
    }
    uVar3 = 0;
  }
  return uVar3;
}


