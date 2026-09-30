/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$set_DateParseHandling
ENTRY_POINT: 058bb8fc
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_file_logging_hits_2;telemetry_or_network_hits_3
*/


ulong Newtonsoft_Json_JsonSerializerSettings__set_DateParseHandling(void)

{
  char in_NG;
  char in_OV;
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int in_w8;
  int unaff_w19;
  int unaff_w20;
  long unaff_x21;
  uint unaff_w23;
  
  puVar3 = PTR_DAT_07297108;
  if (in_NG == in_OV) {
    if (in_w8 == 0) {
      return (ulong)-(uint)(*(int *)(unaff_x21 + 0x10) != 0);
    }
    if (unaff_w20 < 0) goto LAB_058bba28;
    if ((-1 < unaff_w19) && (unaff_w20 <= in_w8 - unaff_w19)) {
      if (unaff_w23 == 0x10000000) {
LAB_058bb9cc:
        uVar2 = Newtonsoft_Json_JsonSerializerSettings__get_Culture();
        return uVar2;
      }
      if ((unaff_w23 < 0x20) || (unaff_w23 == 0x40000000)) {
        if (*(int *)(*(long *)PTR_DAT_07297108 + 0xe0) == 0) {
          thunk_FUN_032cd7c0();
        }
        if (DAT_076d5068 == '\0') {
          thunk_FUN_032e1da0(PTR_DAT_07297108);
          DAT_076d5068 = '\x01';
        }
        lVar1 = *(long *)puVar3;
        if (*(int *)(lVar1 + 0xe0) == 0) {
          thunk_FUN_032cd7c0();
          lVar1 = *(long *)puVar3;
        }
        if (**(char **)(lVar1 + 0xb8) == '\0') {
          uVar2 = FUN_058bd26c();
          return uVar2;
        }
        goto LAB_058bb9cc;
      }
      thunk_FUN_032e1da0(PTR_DAT_0727dd40);
      uVar4 = thunk_FUN_032a56a0();
      uVar5 = thunk_FUN_032e1da0(PTR_DAT_072970f0);
      uVar6 = thunk_FUN_032e1da0(PTR_DAT_07296c28);
      FUN_05897d8c(uVar4,uVar5,uVar6,0);
      goto LAB_058bbaf0;
    }
    thunk_FUN_032e1da0(PTR_DAT_0727dd28);
    uVar4 = thunk_FUN_032a56a0();
    uVar5 = thunk_FUN_032e1da0(PTR_DAT_0727e620);
    puVar3 = PTR_DAT_0727ff00;
  }
  else {
LAB_058bba28:
    thunk_FUN_032e1da0(PTR_DAT_0727dd28);
    uVar4 = thunk_FUN_032a56a0();
    uVar5 = thunk_FUN_032e1da0(PTR_DAT_0727fb10);
    puVar3 = PTR_DAT_0727ff08;
  }
  uVar6 = thunk_FUN_032e1da0(puVar3);
  FUN_0589b56c(uVar4,uVar5,uVar6,0);
LAB_058bbaf0:
  uVar5 = thunk_FUN_032e1da0(PTR_DAT_07297190);
                    /* WARNING: Subroutine does not return */
  FUN_032d5dbc(uVar4,uVar5);
}


