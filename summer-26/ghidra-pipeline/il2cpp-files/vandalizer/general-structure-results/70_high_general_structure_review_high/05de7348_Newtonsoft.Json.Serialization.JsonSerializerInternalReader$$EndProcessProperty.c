/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$EndProcessProperty
ENTRY_POINT: 05de7348
PROGRAM: vandalizer-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined1  [16]
Newtonsoft_Json_Serialization_JsonSerializerInternalReader__EndProcessProperty
          (long param_1,long param_2,undefined8 param_3,undefined4 param_4)

{
  undefined1 auVar1 [16];
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000028;
  
  puVar2 = PTR_DAT_075abab8;
  if ((DAT_07a45454 & 1) == 0) {
    FUN_031f20f4(PTR_DAT_075a9128);
    FUN_031f20f4(PTR_DAT_075abab8);
    FUN_031f20f4(PTR_DAT_075e81c8);
    FUN_031f20f4(PTR_DAT_0759c258);
    FUN_031f20f4(PTR_DAT_075ebe30);
    DAT_07a45454 = 1;
  }
  puVar3 = PTR_DAT_075ebe30;
  in_stack_00000028 = 0;
  in_stack_00000008 = 0;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  uVar4 = FUN_05de7170(param_4,*(undefined8 *)puVar3);
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_05e134d8(0x31,0);
  }
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_05e134d8(0x32,0);
  }
  if (DAT_07a3d293 == '\0') {
    FUN_031f20f4(PTR_DAT_075a1470);
    DAT_07a3d293 = '\x01';
  }
  if (param_1 == 0) {
    uVar8 = 0;
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_05c857f0(param_1,0);
    uVar8 = *(undefined4 *)(param_1 + 0x10);
    if (DAT_07a3d293 == '\0') {
      FUN_031f20f4(PTR_DAT_075a1470);
      DAT_07a3d293 = '\x01';
    }
  }
  puVar2 = PTR_DAT_075a9128;
  if (param_2 == 0) {
    uVar9 = 0;
    uVar6 = 0;
  }
  else {
    uVar6 = FUN_05c857f0(param_2,0);
    uVar9 = *(undefined4 *)(param_2 + 0x10);
  }
  puVar3 = PTR_DAT_075e81c8;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  puVar2 = PTR_DAT_0759c258;
  uVar7 = FUN_05d547ec(param_3,0);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(*(long *)puVar3);
  }
  in_stack_00000008 = FUN_05de755c(uVar5,uVar8,uVar6,uVar9,uVar7,uVar4,&stack0x00000028);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(*(long *)puVar2);
  }
  uVar5 = FUN_05ddf7e0(&stack0x00000008);
  in_stack_00000010 = 0;
  in_stack_00000018 = 0;
  FUN_05de51a8(&stack0x00000010,uVar5,in_stack_00000028);
  auVar1._8_8_ = in_stack_00000018;
  auVar1._0_8_ = in_stack_00000010;
  return auVar1;
}


