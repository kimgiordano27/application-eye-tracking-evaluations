/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$set_TypeNameAssemblyFormat
ENTRY_POINT: 058bb0e4
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;weak_data_support;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_file_logging_hits_2;weak_string_building_near_file_sink_1;telemetry_or_network_hits_3;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


undefined8
Newtonsoft_Json_JsonSerializerSettings__set_TypeNameAssemblyFormat
          (ulong param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x19;
  uint unaff_w21;
  long unaff_x23;
  
  if ((param_1 & 1) == 0) {
    thunk_FUN_032e1da0(PTR_DAT_07297108);
    *(undefined1 *)(unaff_x23 + 9) = 1;
  }
  puVar1 = PTR_DAT_07297108;
  if ((param_3 == 0) || (unaff_x19 == 0)) {
    puVar1 = PTR_DAT_0727fe10;
    if (param_3 != 0) {
      puVar1 = PTR_DAT_07297160;
    }
    uVar3 = thunk_FUN_032e1da0(puVar1);
    thunk_FUN_032e1da0(PTR_DAT_0727dbc0);
    uVar4 = thunk_FUN_032a56a0();
    uVar5 = thunk_FUN_032e1da0(PTR_DAT_07291510);
    FUN_0589fdac(uVar4,uVar3,uVar5,0);
    uVar3 = thunk_FUN_032e1da0(PTR_DAT_07297168);
                    /* WARNING: Subroutine does not return */
    FUN_032d5dbc(uVar4,uVar3);
  }
  if (*(int *)(unaff_x19 + 0x10) == 0) {
    uVar3 = 1;
  }
  else {
    if (*(int *)(param_3 + 0x10) != 0) {
      if ((unaff_w21 != 0x40000000) && (unaff_w21 != 0x10000000)) {
        if (0x1f < unaff_w21) {
          thunk_FUN_032e1da0(PTR_DAT_0727dd40);
          uVar3 = thunk_FUN_032a56a0();
          uVar4 = thunk_FUN_032e1da0(PTR_DAT_072970f0);
          uVar5 = thunk_FUN_032e1da0(PTR_DAT_07296c28);
          FUN_05897d8c(uVar3,uVar4,uVar5,0);
          uVar4 = thunk_FUN_032e1da0(PTR_DAT_07297168);
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
          uVar3 = Newtonsoft_Json_JsonSerializerSettings_<>c__DisplayClass93_0___ctor
                            (param_2,param_3);
          return uVar3;
        }
      }
      uVar3 = FUN_057aa9f0(param_3);
      return uVar3;
    }
    uVar3 = 0;
  }
  return uVar3;
}


