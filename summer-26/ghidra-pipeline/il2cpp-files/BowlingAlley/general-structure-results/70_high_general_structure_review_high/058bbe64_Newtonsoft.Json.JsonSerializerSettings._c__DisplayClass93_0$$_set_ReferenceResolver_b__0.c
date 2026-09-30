/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings.<>c__DisplayClass93_0$$<set_ReferenceResolver>b__0
ENTRY_POINT: 058bbe64
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_9;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


ulong Newtonsoft_Json_JsonSerializerSettings_<>c__DisplayClass93_0__<set_ReferenceResolver>b__0
                (undefined8 param_1,long param_2,long param_3,uint param_4,int param_5,uint param_6)

{
  uint uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  
  uVar2 = param_1;
  if ((DAT_076d500e & 1) == 0) {
    thunk_FUN_032e1da0(PTR_DAT_07290a18);
    uVar2 = thunk_FUN_032e1da0(PTR_DAT_07297108);
    DAT_076d500e = 1;
  }
  puVar7 = PTR_DAT_07297108;
  if (param_2 == 0) {
    thunk_FUN_032e1da0(PTR_DAT_0727dbc0);
    uVar2 = thunk_FUN_032a56a0();
    puVar7 = PTR_DAT_0727fe10;
  }
  else {
    if (param_3 != 0) {
      if (((0x1f < param_6) && (param_6 != 0x10000000)) && (param_6 != 0x40000000)) {
        thunk_FUN_032e1da0(PTR_DAT_0727dd40);
        uVar2 = thunk_FUN_032a56a0();
        uVar5 = thunk_FUN_032e1da0(PTR_DAT_072970f0);
        uVar6 = thunk_FUN_032e1da0(PTR_DAT_07296c28);
        FUN_05897d8c(uVar2,uVar5,uVar6,0);
        goto LAB_058bc148;
      }
      uVar1 = *(uint *)(param_2 + 0x10);
      if ((uVar1 == 0) && (param_4 + 1 < 2)) {
        param_4 = -(uint)(*(int *)(param_3 + 0x10) != 0);
LAB_058bbf8c:
        return (ulong)param_4;
      }
      if (((int)param_4 < 0) || ((int)uVar1 < (int)param_4)) {
        thunk_FUN_032e1da0(PTR_DAT_0727dd28);
        uVar2 = thunk_FUN_032a56a0();
        uVar5 = thunk_FUN_032e1da0(PTR_DAT_0727fb10);
        puVar7 = PTR_DAT_0727ff08;
      }
      else {
        if (uVar1 == param_4) {
          param_5 = param_5 - (uint)(0 < param_5);
          param_4 = param_4 - 1;
          if ((param_5 < 0) || (*(int *)(param_3 + 0x10) != 0)) goto LAB_058bbf2c;
          if (-2 < (int)(param_4 - param_5)) goto LAB_058bbf8c;
LAB_058bbf30:
          if (-1 < (int)((param_4 - param_5) + 1)) {
            if (param_6 == 0x10000000) {
              uVar3 = FUN_058bc1a8(uVar2,param_2,param_3,param_4,param_5,1);
              return uVar3;
            }
            if (*(int *)(*(long *)PTR_DAT_07297108 + 0xe0) == 0) {
              thunk_FUN_032cd7c0();
            }
            if (DAT_076d5068 == '\0') {
              thunk_FUN_032e1da0(PTR_DAT_07297108);
              DAT_076d5068 = '\x01';
            }
            lVar4 = *(long *)puVar7;
            if (*(int *)(lVar4 + 0xe0) == 0) {
              thunk_FUN_032cd7c0();
              lVar4 = *(long *)puVar7;
            }
            if (**(char **)(lVar4 + 0xb8) == '\0') {
              uVar3 = FUN_058bd26c(param_1,param_2,param_4,param_5,param_3,param_6,0);
              return uVar3;
            }
            if (*(int *)(*(long *)PTR_DAT_07290a18 + 0xe0) == 0) {
              thunk_FUN_032cd7c0();
            }
            uVar3 = FUN_058b9634(param_2,param_3,param_4,param_5,(param_6 & 0x10000001) != 0);
            return uVar3;
          }
        }
        else {
LAB_058bbf2c:
          if (-1 < param_5) goto LAB_058bbf30;
        }
        thunk_FUN_032e1da0(PTR_DAT_0727dd28);
        uVar2 = thunk_FUN_032a56a0();
        uVar5 = thunk_FUN_032e1da0(PTR_DAT_0727e620);
        puVar7 = PTR_DAT_0727ff00;
      }
      uVar6 = thunk_FUN_032e1da0(puVar7);
      FUN_0589b56c(uVar2,uVar5,uVar6,0);
      goto LAB_058bc148;
    }
    thunk_FUN_032e1da0(PTR_DAT_0727dbc0);
    uVar2 = thunk_FUN_032a56a0();
    puVar7 = PTR_DAT_07280568;
  }
  uVar5 = thunk_FUN_032e1da0(puVar7);
  FUN_05897d14(uVar2,uVar5,0);
LAB_058bc148:
  uVar5 = thunk_FUN_032e1da0(PTR_DAT_072971a0);
                    /* WARNING: Subroutine does not return */
  FUN_032d5dbc(uVar2,uVar5);
}


