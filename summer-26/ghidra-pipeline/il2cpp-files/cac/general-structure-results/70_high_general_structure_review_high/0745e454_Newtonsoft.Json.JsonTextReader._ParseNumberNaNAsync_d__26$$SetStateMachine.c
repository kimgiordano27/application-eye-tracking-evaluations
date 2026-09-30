/*
FUNCTION_NAME: Newtonsoft.Json.JsonTextReader.<ParseNumberNaNAsync>d__26$$SetStateMachine
ENTRY_POINT: 0745e454
PROGRAM: cac-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0745e5d8) */

void Newtonsoft_Json_JsonTextReader_<ParseNumberNaNAsync>d__26__SetStateMachine(void)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x19;
  undefined8 uVar4;
  int unaff_w24;
  long unaff_x25;
  undefined8 *in_stack_00000018;
  undefined8 in_stack_00000020;
  
  FUN_073b1494();
  if (*(long *)(unaff_x19 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f1362c();
  }
  FUN_073b2b7c();
  puVar2 = PTR_DAT_0910c888;
  FUN_03f13470(*(undefined8 *)PTR_DAT_0910c888,*(undefined4 *)(unaff_x19 + 0x18));
  FUN_03f13470(*(undefined8 *)puVar2,*(undefined4 *)(unaff_x19 + 0x18));
  FUN_0745d0b4();
  FUN_0745d418();
  puVar2 = PTR_DAT_09126a70;
  uVar4 = *(undefined8 *)PTR_DAT_09126a70;
  if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_03f6fea8();
  }
  FUN_074c4a14(uVar4,0);
  FUN_073b1494();
  FUN_074c4a14(*(undefined8 *)puVar2,0);
  FUN_073b1494();
  iVar1 = *(int *)(unaff_x19 + 0x28);
  thunk_FUN_03f1faf4();
  if (iVar1 != unaff_w24) {
    thunk_FUN_03f786f8(PTR_DAT_09111b70);
    uVar4 = thunk_FUN_03f4e68c();
    uVar3 = thunk_FUN_03f786f8(PTR_DAT_091253f0);
    Newtonsoft_Json_Serialization_JsonSerializerInternalReader__GetInternalSerializer(uVar4,uVar3,0)
    ;
    uVar3 = thunk_FUN_03f786f8(PTR_DAT_091318e0);
                    /* WARNING: Subroutine does not return */
    FUN_03f134f0(uVar4,uVar3);
  }
  if (in_stack_00000020._4_1_ != '\0') {
    thunk_FUN_03f1f510(*in_stack_00000018,0);
  }
  return;
}


