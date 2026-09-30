/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$DeserializeInternal
ENTRY_POINT: 058ba260
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_8;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


undefined8
Newtonsoft_Json_JsonSerializer__DeserializeInternal
          (undefined8 param_1,undefined8 param_2,ulong param_3,ulong param_4,uint param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  if ((DAT_076d5004 & 1) == 0) {
    thunk_FUN_032e1da0(PTR_DAT_07290a18);
    thunk_FUN_032e1da0(PTR_DAT_07297108);
    DAT_076d5004 = 1;
  }
  puVar1 = PTR_DAT_07297108;
  puVar5 = PTR_DAT_07290a18;
  if (param_5 != 0x10000000) {
    if ((param_5 >> 0x1e & 1) == 0) {
      if ((param_5 & 0xdfffffe0) != 0) {
        thunk_FUN_032e1da0(PTR_DAT_0727dd40);
        uVar2 = thunk_FUN_032a56a0();
        puVar5 = PTR_DAT_072970f0;
        goto LAB_058ba5b0;
      }
      if (param_4 == 0) {
        return 1;
      }
      if (*(int *)(*(long *)PTR_DAT_07297108 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      if (DAT_076d5068 == '\0') {
        thunk_FUN_032e1da0(PTR_DAT_07297108);
        DAT_076d5068 = '\x01';
      }
      lVar3 = *(long *)puVar1;
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
        lVar3 = *(long *)puVar1;
      }
      if (**(char **)(lVar3 + 0xb8) == '\0') {
        uVar2 = FUN_058ba5f0(param_1,param_2,param_3,param_4,param_5);
        return uVar2;
      }
      if (DAT_076d46c2 == '\0') {
        thunk_FUN_032e1da0(PTR_DAT_07286280);
        DAT_076d46c2 = '\x01';
      }
      uVar2 = System_Convert__ToSByte(param_4,0);
      param_4 = (ulong)*(uint *)(param_4 + 0x10);
      if ((param_5 & 1) == 0) {
        if (DAT_076d5069 == '\0') {
          thunk_FUN_032e1da0(PTR_DAT_07290a68);
          thunk_FUN_032e1da0(PTR_DAT_07290a70);
          DAT_076d5069 = '\x01';
        }
        puVar5 = PTR_DAT_07290a68;
        uVar4 = FUN_03aca200(param_2,param_3,*(undefined8 *)PTR_DAT_07290a68);
        uVar6 = *(undefined8 *)puVar5;
        goto LAB_058ba4f4;
      }
      if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      goto LAB_058ba450;
    }
    if (param_5 != 0x40000000) {
      thunk_FUN_032e1da0(PTR_DAT_0727dd40);
      uVar2 = thunk_FUN_032a56a0();
      puVar5 = PTR_DAT_07297110;
LAB_058ba5b0:
      uVar4 = thunk_FUN_032e1da0(puVar5);
      uVar6 = thunk_FUN_032e1da0(PTR_DAT_07296c28);
      FUN_05897d8c(uVar2,uVar4,uVar6,0);
      uVar4 = thunk_FUN_032e1da0(PTR_DAT_07297120);
                    /* WARNING: Subroutine does not return */
      FUN_032d5dbc(uVar2,uVar4);
    }
    if (DAT_076d46c2 == '\0') {
      thunk_FUN_032e1da0(PTR_DAT_07286280);
      DAT_076d46c2 = '\x01';
      if (param_4 != 0) goto LAB_058ba400;
LAB_058ba4a0:
      uVar2 = 0;
    }
    else {
      if (param_4 == 0) goto LAB_058ba4a0;
LAB_058ba400:
      uVar2 = System_Convert__ToSByte(param_4,0);
      param_4 = (ulong)*(uint *)(param_4 + 0x10);
    }
    if (DAT_076d5069 == '\0') {
      thunk_FUN_032e1da0(PTR_DAT_07290a68);
      thunk_FUN_032e1da0(PTR_DAT_07290a70);
      DAT_076d5069 = '\x01';
    }
    puVar5 = PTR_DAT_07290a68;
    uVar4 = FUN_03aca200(param_2,param_3,*(undefined8 *)PTR_DAT_07290a68);
    uVar6 = *(undefined8 *)puVar5;
LAB_058ba4f4:
    uVar2 = FUN_03aca200(uVar2,param_4,uVar6);
    uVar2 = FUN_059371dc(uVar4,param_3 & 0xffffffff,uVar2,param_4 & 0xffffffff,0);
    return uVar2;
  }
  if (DAT_076d46c2 == '\0') {
    thunk_FUN_032e1da0(PTR_DAT_07286280);
    DAT_076d46c2 = '\x01';
    if (param_4 != 0) goto LAB_058ba2d0;
LAB_058ba430:
    uVar2 = 0;
  }
  else {
    if (param_4 == 0) goto LAB_058ba430;
LAB_058ba2d0:
    uVar2 = System_Convert__ToSByte(param_4,0);
    param_4 = (ulong)*(uint *)(param_4 + 0x10);
  }
  if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
LAB_058ba450:
  uVar2 = FUN_058b9f68(param_2,param_3,uVar2,param_4);
  return uVar2;
}


