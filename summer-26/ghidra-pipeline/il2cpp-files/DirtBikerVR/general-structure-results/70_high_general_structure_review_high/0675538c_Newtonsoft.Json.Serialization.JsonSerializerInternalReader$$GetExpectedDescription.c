/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$GetExpectedDescription
ENTRY_POINT: 0675538c
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


uint Newtonsoft_Json_Serialization_JsonSerializerInternalReader__GetExpectedDescription
               (long param_1,undefined1 param_2 [16])

{
  undefined4 uVar1;
  uint uVar2;
  long *unaff_x19;
  int unaff_w21;
  undefined4 unaff_w27;
  long unaff_x28;
  long unaff_x29;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = param_2._8_8_;
  uVar3 = param_2._0_8_;
  *(undefined8 *)(param_1 + -0x38) = uVar4;
  *(undefined8 *)(param_1 + -0x40) = uVar3;
  *(undefined8 *)(param_1 + -0x28) = uVar4;
  *(undefined8 *)(param_1 + -0x30) = uVar3;
  *(undefined8 *)(param_1 + -0x18) = uVar4;
  *(undefined8 *)(param_1 + -0x20) = uVar3;
  *(undefined8 *)(param_1 + -8) = uVar4;
  *(undefined8 *)(param_1 + -0x10) = uVar3;
  FUN_065e59c0();
  if (unaff_w21 == 0) {
    if (*(int *)(*unaff_x19 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    FUN_067540a0(unaff_x29 + -0xd0,unaff_x29 + -0xa0);
  }
  else {
    uVar1 = *(undefined4 *)(unaff_x29 + -0xa4);
    if (*(int *)(*unaff_x19 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    FUN_06753ad4(unaff_x29 + -0xd0,unaff_x29 + -0xa0,unaff_w27,uVar1);
  }
  uVar2 = FUN_065e5ac8(unaff_x29 + -0xd0,*(undefined8 *)(unaff_x29 + -0xe8),
                       *(undefined8 *)(unaff_x29 + -0xe0),*(undefined8 *)(unaff_x29 + -0xd8),0);
  if (*(long *)(unaff_x28 + 0x28) == *(long *)(unaff_x29 + -0x18)) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


