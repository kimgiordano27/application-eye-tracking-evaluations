/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$CreateNewList
ENTRY_POINT: 05928328
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


uint Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CreateNewList
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6)

{
  uint uVar1;
  long lVar2;
  long unaff_x25;
  long unaff_x26;
  long *plVar3;
  long unaff_x27;
  long unaff_x29;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  undefined8 uStack_8;
  
  plVar3 = *(long **)(unaff_x26 + 0x9e0);
  if ((*(byte *)(unaff_x27 + 0x3af) & 1) == 0) {
    thunk_FUN_032e1da0(PTR_DAT_072969e0);
    thunk_FUN_032e1da0(PTR_DAT_07290f98);
    *(undefined1 *)(unaff_x27 + 0x3af) = 1;
  }
  *(undefined8 *)(unaff_x29 + -0x20) = 0;
  *(undefined8 *)(unaff_x29 + -0x28) = 0;
  *(undefined8 *)(unaff_x29 + -0x30) = 0;
  *(undefined8 *)(unaff_x29 + -0x38) = 0;
  uStack_18 = 0;
  uStack_20 = 0;
  uStack_8 = 0;
  uStack_10 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_28 = 0;
  uStack_30 = 0;
  FUN_057c5ac8(unaff_x29 + -0x38,&uStack_40,0x20,0);
  if (*(int *)(*plVar3 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
  lVar2 = FUN_05928000(param_1,unaff_x29 + -0x38,param_2,param_3,param_4);
  if (lVar2 == 0) {
    uVar1 = FUN_057c5bd0(unaff_x29 + -0x38,param_5,param_6);
  }
  else {
    if (*(int *)(*plVar3 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    uVar1 = FUN_05928448(lVar2,param_5,param_6);
  }
  if (*(long *)(unaff_x25 + 0x28) == *(long *)(unaff_x29 + -0x10)) {
    return uVar1 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


