/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$CoerceEmptyStringToNull
ENTRY_POINT: 067552a4
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


uint Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CoerceEmptyStringToNull
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  undefined *puVar4;
  uint uVar5;
  long lVar6;
  long unaff_x29;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  undefined8 uStack_8;
  
  *(undefined8 *)(unaff_x29 + -0xe8) = param_6;
  lVar3 = tpidr_el0;
  *(undefined8 *)(unaff_x29 + -0x18) = *(undefined8 *)(lVar3 + 0x28);
  puVar4 = PTR_DAT_084a5b08;
  if ((DAT_0897bb08 & 1) == 0) {
    FUN_03a8a718(PTR_DAT_084a5b08);
    FUN_03a8a718(PTR_DAT_0849fc10);
    DAT_0897bb08 = 1;
  }
  lVar6 = *(long *)puVar4;
  *(undefined4 *)(unaff_x29 + -0xa4) = 0;
  iVar1 = *(int *)(lVar6 + 0xe4);
  *(undefined8 *)(unaff_x29 + -0x2e) = 0;
  *(undefined8 *)(unaff_x29 + -0x36) = 0;
  *(undefined8 *)(unaff_x29 + -200) = 0;
  *(undefined8 *)(unaff_x29 + -0xd0) = 0;
  *(undefined8 *)(unaff_x29 + -0xb8) = 0;
  *(undefined8 *)(unaff_x29 + -0xc0) = 0;
  *(undefined8 *)(unaff_x29 + -0x88) = 0;
  *(undefined8 *)(unaff_x29 + -0x90) = 0;
  *(undefined8 *)(unaff_x29 + -0x78) = 0;
  *(undefined8 *)(unaff_x29 + -0x80) = 0;
  *(undefined8 *)(unaff_x29 + -0x68) = 0;
  *(undefined8 *)(unaff_x29 + -0x70) = 0;
  *(undefined8 *)(unaff_x29 + -0x58) = 0;
  *(undefined8 *)(unaff_x29 + -0x60) = 0;
  *(undefined8 *)(unaff_x29 + -0x48) = 0;
  *(undefined8 *)(unaff_x29 + -0x50) = 0;
  *(undefined8 *)(unaff_x29 + -0x38) = 0;
  *(undefined8 *)(unaff_x29 + -0x40) = 0;
  *(undefined8 *)(unaff_x29 + -0x98) = 0;
  *(undefined8 *)(unaff_x29 + -0xa0) = 0;
  if (iVar1 == 0) {
    thunk_FUN_03ae8be4();
  }
  uVar5 = FUN_06753758(param_3,param_4,unaff_x29 + -0xa4);
  *(undefined8 *)(unaff_x29 + -0x98) = 0;
  *(undefined8 *)(unaff_x29 + -0xa0) = 0;
  *(undefined8 *)(unaff_x29 + -0x88) = 0;
  *(undefined8 *)(unaff_x29 + -0x90) = 0;
  *(undefined8 *)(unaff_x29 + -0x78) = 0;
  *(undefined8 *)(unaff_x29 + -0x80) = 0;
  *(undefined8 *)(unaff_x29 + -0x68) = 0;
  *(undefined8 *)(unaff_x29 + -0x70) = 0;
  *(undefined8 *)(unaff_x29 + -0x58) = 0;
  *(undefined8 *)(unaff_x29 + -0x60) = 0;
  *(undefined8 *)(unaff_x29 + -0x48) = 0;
  *(undefined8 *)(unaff_x29 + -0x50) = 0;
  *(undefined8 *)(unaff_x29 + -0x38) = 0;
  *(undefined8 *)(unaff_x29 + -0x40) = 0;
  *(undefined8 *)(unaff_x29 + -0x2e) = 0;
  *(undefined8 *)(unaff_x29 + -0x36) = 0;
  FUN_0675389c(param_1,param_2,unaff_x29 + -0xa0);
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_28 = 0;
  uStack_30 = 0;
  uStack_18 = 0;
  uStack_20 = 0;
  uStack_8 = 0;
  uStack_10 = 0;
  FUN_065e59c0(unaff_x29 + -0xd0,&uStack_40,0x20,0);
  if ((uVar5 & 0xffff) == 0) {
    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    FUN_067540a0(unaff_x29 + -0xd0,unaff_x29 + -0xa0,param_3,param_4,param_5);
  }
  else {
    uVar2 = *(undefined4 *)(unaff_x29 + -0xa4);
    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    FUN_06753ad4(unaff_x29 + -0xd0,unaff_x29 + -0xa0,uVar5,uVar2,param_5,1);
  }
  uVar5 = FUN_065e5ac8(unaff_x29 + -0xd0,*(undefined8 *)(unaff_x29 + -0xe8),
                       *(undefined8 *)(unaff_x29 + -0xe0),*(undefined8 *)(unaff_x29 + -0xd8),0);
  if (*(long *)(lVar3 + 0x28) == *(long *)(unaff_x29 + -0x18)) {
    return uVar5 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


