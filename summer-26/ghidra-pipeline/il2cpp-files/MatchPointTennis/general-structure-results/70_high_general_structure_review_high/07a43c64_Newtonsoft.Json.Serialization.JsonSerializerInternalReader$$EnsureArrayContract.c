/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$EnsureArrayContract
ENTRY_POINT: 07a43c64
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


uint Newtonsoft_Json_Serialization_JsonSerializerInternalReader__EnsureArrayContract
               (long param_1,undefined1 param_2 [16],undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  long lVar2;
  long unaff_x25;
  long *unaff_x26;
  long unaff_x29;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = param_2._8_8_;
  uVar3 = param_2._0_8_;
  *(undefined8 *)(param_1 + -0x18) = uVar4;
  *(undefined8 *)(param_1 + -0x20) = uVar3;
  *(undefined8 *)(param_1 + -8) = uVar4;
  *(undefined8 *)(param_1 + -0x10) = uVar3;
  *(undefined8 *)(param_1 + -0x38) = uVar4;
  *(undefined8 *)(param_1 + -0x40) = uVar3;
  *(undefined8 *)(param_1 + -0x28) = uVar4;
  *(undefined8 *)(param_1 + -0x30) = uVar3;
  FUN_078d0a64(unaff_x29 + -0x38,param_4,0x20,0);
  if (*(int *)(*unaff_x26 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  lVar2 = FUN_07a438d8(unaff_x29 + -0x38);
  if (lVar2 == 0) {
    uVar1 = FUN_078d0b6c(unaff_x29 + -0x38);
  }
  else {
    if (*(int *)(*unaff_x26 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    uVar1 = FUN_07a42df8(lVar2);
  }
  if (*(long *)(unaff_x25 + 0x28) == *(long *)(unaff_x29 + -0x10)) {
    return uVar1 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


