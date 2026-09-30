/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$get_DateParseHandling
ENTRY_POINT: 058bb8ac
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_8;strong_file_logging_hits_2;telemetry_or_network_hits_3
*/


ulong Newtonsoft_Json_JsonSerializerSettings__get_DateParseHandling
                (long param_1,long param_2,long param_3,int param_4,int param_5,uint param_6)

{
  int iVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  lVar3 = param_1;
  if ((DAT_076d500b & 1) == 0) {
    lVar3 = thunk_FUN_032e1da0(PTR_DAT_07297108);
    DAT_076d500b = 1;
  }
  puVar5 = PTR_DAT_07297108;
  if (param_2 == 0) {
    thunk_FUN_032e1da0(PTR_DAT_0727dbc0);
    uVar6 = thunk_FUN_032a56a0();
    puVar5 = PTR_DAT_0727fe10;
  }
  else {
    if (param_3 != 0) {
      iVar1 = *(int *)(param_2 + 0x10);
      if (iVar1 < param_4) {
LAB_058bba28:
        thunk_FUN_032e1da0(PTR_DAT_0727dd28);
        uVar6 = thunk_FUN_032a56a0();
        uVar7 = thunk_FUN_032e1da0(PTR_DAT_0727fb10);
        puVar5 = PTR_DAT_0727ff08;
      }
      else {
        if (iVar1 == 0) {
          return (ulong)-(uint)(*(int *)(param_3 + 0x10) != 0);
        }
        if (param_4 < 0) goto LAB_058bba28;
        if ((-1 < param_5) && (param_4 <= iVar1 - param_5)) {
          if (param_6 == 0x10000000) {
            bVar2 = true;
LAB_058bb9cc:
            uVar4 = Newtonsoft_Json_JsonSerializerSettings__get_Culture
                              (lVar3,param_2,param_3,param_4,param_5,bVar2);
            return uVar4;
          }
          if ((param_6 < 0x20) || (param_6 == 0x40000000)) {
            if (*(int *)(*(long *)PTR_DAT_07297108 + 0xe0) == 0) {
              thunk_FUN_032cd7c0();
            }
            if (DAT_076d5068 == '\0') {
              thunk_FUN_032e1da0(PTR_DAT_07297108);
              DAT_076d5068 = '\x01';
            }
            lVar3 = *(long *)puVar5;
            if (*(int *)(lVar3 + 0xe0) == 0) {
              thunk_FUN_032cd7c0();
              lVar3 = *(long *)puVar5;
            }
            if (**(char **)(lVar3 + 0xb8) == '\0') {
              uVar4 = FUN_058bd26c(param_1,param_2,param_4,param_5,param_3,param_6,1);
              return uVar4;
            }
            bVar2 = (param_6 & 0x10000001) != 0;
            goto LAB_058bb9cc;
          }
          thunk_FUN_032e1da0(PTR_DAT_0727dd40);
          uVar6 = thunk_FUN_032a56a0();
          uVar7 = thunk_FUN_032e1da0(PTR_DAT_072970f0);
          uVar8 = thunk_FUN_032e1da0(PTR_DAT_07296c28);
          FUN_05897d8c(uVar6,uVar7,uVar8,0);
          goto LAB_058bbaf0;
        }
        thunk_FUN_032e1da0(PTR_DAT_0727dd28);
        uVar6 = thunk_FUN_032a56a0();
        uVar7 = thunk_FUN_032e1da0(PTR_DAT_0727e620);
        puVar5 = PTR_DAT_0727ff00;
      }
      uVar8 = thunk_FUN_032e1da0(puVar5);
      FUN_0589b56c(uVar6,uVar7,uVar8,0);
      goto LAB_058bbaf0;
    }
    thunk_FUN_032e1da0(PTR_DAT_0727dbc0);
    uVar6 = thunk_FUN_032a56a0();
    puVar5 = PTR_DAT_07280568;
  }
  uVar7 = thunk_FUN_032e1da0(puVar5);
  FUN_05897d14(uVar6,uVar7,0);
LAB_058bbaf0:
  uVar7 = thunk_FUN_032e1da0(PTR_DAT_07297190);
                    /* WARNING: Subroutine does not return */
  FUN_032d5dbc(uVar6,uVar7);
}


