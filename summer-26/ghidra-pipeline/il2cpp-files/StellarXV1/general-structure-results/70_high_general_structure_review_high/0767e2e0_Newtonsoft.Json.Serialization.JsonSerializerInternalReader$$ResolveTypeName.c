/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$ResolveTypeName
ENTRY_POINT: 0767e2e0
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


uint Newtonsoft_Json_Serialization_JsonSerializerInternalReader__ResolveTypeName(ulong param_1)

{
  uint uVar1;
  long lVar2;
  long unaff_x25;
  long *unaff_x26;
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
  
  if ((param_1 & 1) == 0) {
    FUN_04077588(PTR_DAT_092d6630);
    FUN_04077588(PTR_DAT_092d0730);
    *(undefined1 *)(unaff_x27 + 0x225) = 1;
  }
  *(undefined8 *)(unaff_x29 + -0x20) = 0;
  *(undefined8 *)(unaff_x29 + -0x28) = 0;
  *(undefined8 *)(unaff_x29 + -0x30) = 0;
  *(undefined8 *)(unaff_x29 + -0x38) = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_28 = 0;
  uStack_30 = 0;
  uStack_18 = 0;
  uStack_20 = 0;
  uStack_8 = 0;
  uStack_10 = 0;
  FUN_07503a7c(unaff_x29 + -0x38,&uStack_40,0x20,0);
  if (*(int *)(*unaff_x26 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  lVar2 = FUN_0767df8c(unaff_x29 + -0x38);
  if (lVar2 == 0) {
    uVar1 = FUN_07503b84(unaff_x29 + -0x38);
  }
  else {
    if (*(int *)(*unaff_x26 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    uVar1 = FUN_0767e3e0(lVar2);
  }
  if (*(long *)(unaff_x25 + 0x28) == *(long *)(unaff_x29 + -0x10)) {
    return uVar1 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


