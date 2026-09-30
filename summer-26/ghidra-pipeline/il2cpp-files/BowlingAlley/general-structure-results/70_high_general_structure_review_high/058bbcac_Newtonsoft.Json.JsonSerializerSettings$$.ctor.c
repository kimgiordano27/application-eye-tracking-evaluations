/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$.ctor
ENTRY_POINT: 058bbcac
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_6;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


ulong Newtonsoft_Json_JsonSerializerSettings___ctor
                (ulong param_1,long param_2,long param_3,int param_4,undefined4 param_5,uint param_6
                ,undefined4 *param_7)

{
  uint uVar1;
  undefined *puVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  
  uVar4 = param_1;
  if ((DAT_076d500c & 1) == 0) {
    uVar4 = thunk_FUN_032e1da0(PTR_DAT_07297108);
    DAT_076d500c = 1;
  }
  *param_7 = 0;
  puVar2 = PTR_DAT_07297108;
  if (param_2 != 0) {
    if (*(int *)(param_2 + 0x10) == 0) {
      if (param_3 == 0) goto LAB_058bbe40;
      uVar4 = (ulong)-(uint)(*(int *)(param_3 + 0x10) != 0);
    }
    else if (param_4 < *(int *)(param_2 + 0x10)) {
      if (param_6 == 0x10000000) {
        uVar4 = Newtonsoft_Json_JsonSerializerSettings__get_Culture
                          (uVar4,param_2,param_3,param_4,param_5,1);
        if ((int)uVar4 < 0) {
          return uVar4;
        }
      }
      else {
        if (*(int *)(*(long *)PTR_DAT_07297108 + 0xe0) == 0) {
          thunk_FUN_032cd7c0();
        }
        if (DAT_076d5068 == '\0') {
          thunk_FUN_032e1da0(PTR_DAT_07297108);
          DAT_076d5068 = '\x01';
        }
        lVar5 = *(long *)puVar2;
        if (*(int *)(lVar5 + 0xe0) == 0) {
          thunk_FUN_032cd7c0();
          lVar5 = *(long *)puVar2;
        }
        if (**(char **)(lVar5 + 0xb8) == '\0') {
          uVar4 = FUN_058bbc50(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
          return uVar4;
        }
        uVar3 = Newtonsoft_Json_JsonSerializerSettings__get_Culture
                          (lVar5,param_2,param_3,param_4,param_5,(param_6 & 0x10000001) != 0);
        uVar1 = 0;
        if (-1 < (int)uVar3) {
          uVar1 = uVar3;
        }
        uVar4 = (ulong)uVar1;
        if ((int)uVar3 < 0) {
          return (ulong)(uVar3 & (int)uVar3 >> 0x1f);
        }
      }
      if (param_3 == 0) goto LAB_058bbe40;
      *param_7 = *(undefined4 *)(param_3 + 0x10);
    }
    else {
      uVar4 = 0xffffffff;
    }
    return uVar4;
  }
LAB_058bbe40:
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8(uVar4);
}


