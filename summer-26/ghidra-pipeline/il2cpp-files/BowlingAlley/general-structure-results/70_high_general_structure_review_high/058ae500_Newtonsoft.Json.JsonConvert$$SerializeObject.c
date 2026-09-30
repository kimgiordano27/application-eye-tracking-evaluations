/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$SerializeObject
ENTRY_POINT: 058ae500
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8 Newtonsoft_Json_JsonConvert__SerializeObject(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar5;
  long lVar6;
  int unaff_w19;
  long lVar7;
  uint unaff_w20;
  long unaff_x21;
  long unaff_x22;
  undefined *puVar4;
  
  thunk_FUN_032e1da0(PTR_DAT_07291180);
  thunk_FUN_032e1da0(PTR_DAT_0727f070);
  *(undefined1 *)(unaff_x22 + 0xf9a) = 1;
  if (unaff_x21 == 0) {
    thunk_FUN_032e1da0(PTR_DAT_0727dbc0);
    uVar2 = thunk_FUN_032a56a0();
    uVar1 = thunk_FUN_032e1da0(PTR_DAT_07296c18);
    FUN_05897d14(uVar2,uVar1);
  }
  else {
    if (unaff_w19 < 0) {
      thunk_FUN_032e1da0(PTR_DAT_0727dd28);
      uVar2 = thunk_FUN_032a56a0();
      uVar1 = thunk_FUN_032e1da0(PTR_DAT_0727ff20);
      puVar4 = PTR_DAT_0727ff08;
    }
    else if ((int)unaff_w20 < 0) {
      thunk_FUN_032e1da0(PTR_DAT_0727dd28);
      uVar2 = thunk_FUN_032a56a0();
      uVar1 = thunk_FUN_032e1da0(PTR_DAT_07288098);
      puVar4 = PTR_DAT_07291000;
    }
    else {
      iVar5 = (int)*(long *)(unaff_x21 + 0x18);
      if ((int)unaff_w20 <= iVar5 - unaff_w19) {
        if (*(long *)(unaff_x21 + 0x18) == 0) {
          lVar7 = *(long *)PTR_DAT_07291180;
          lVar6 = *(long *)(lVar7 + 0x38);
          if (lVar6 == 0) {
            FUN_03293514(lVar7);
            lVar6 = *(long *)(lVar7 + 0x38);
          }
          lVar6 = *(long *)(lVar6 + 0x10);
          if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
            lVar6 = FUN_032934b8();
          }
          if (*(int *)(lVar6 + 0xe0) == 0) {
            thunk_FUN_032cd7c0();
          }
          lVar6 = *(long *)(*(long *)(lVar7 + 0x38) + 0x10);
          if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
            lVar6 = FUN_032934b8();
          }
          return **(undefined8 **)(lVar6 + 0xb8);
        }
        if (iVar5 != 0) {
          if (*(int *)(*(long *)PTR_DAT_0727f070 + 0xe0) == 0) {
            thunk_FUN_032cd7c0();
          }
          uVar1 = FUN_058add30(unaff_x21 + 0x20 + (ulong)unaff_w20 * 2,unaff_w19);
          return uVar1;
        }
                    /* WARNING: Subroutine does not return */
        Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
      }
      thunk_FUN_032e1da0(PTR_DAT_0727dd28);
      uVar2 = thunk_FUN_032a56a0();
      uVar1 = thunk_FUN_032e1da0(PTR_DAT_07288098);
      puVar4 = PTR_DAT_07296c38;
    }
    uVar3 = thunk_FUN_032e1da0(puVar4);
    FUN_0589b56c(uVar2,uVar1,uVar3);
  }
  uVar1 = thunk_FUN_032e1da0(PTR_DAT_07296ca0);
                    /* WARNING: Subroutine does not return */
  FUN_032d5dbc(uVar2,uVar1);
}


