/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$set_Binder
ENTRY_POINT: 04ec58e8
PROGRAM: hellodot-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializerSettings__set_Binder(void)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *unaff_x19;
  long unaff_x20;
  long lVar5;
  undefined8 in_stack_00000008;
  
  lVar1 = (**(code **)(*unaff_x19 + 0x1f8))();
  puVar2 = PTR_DAT_065f1670;
  lVar1 = lVar1 + unaff_x20;
  if (lVar1 < 0) {
    thunk_FUN_02c7737c(PTR_DAT_065cfd98);
    uVar3 = thunk_FUN_02cea894();
    puVar2 = PTR_DAT_065f7f10;
  }
  else {
    if (unaff_x19[9] <= lVar1) {
      FUN_04ec3e1c();
      lVar5 = unaff_x19[7];
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      lVar1 = FUN_04ec37c0(lVar5,lVar1,0,(long)&stack0x00000008 + 4);
      unaff_x19[0xd] = lVar1;
      if (in_stack_00000008._4_4_ == 0) {
        return;
      }
      uVar3 = FUN_04ec2c20();
      thunk_FUN_02c7737c(PTR_DAT_065f1670);
      FUN_028be084();
      uVar3 = FUN_04ec2c98(uVar3,in_stack_00000008._4_4_);
      goto LAB_04ec5aac;
    }
    thunk_FUN_02c7737c(PTR_DAT_065cfd98);
    uVar3 = thunk_FUN_02cea894();
    puVar2 = PTR_DAT_065f7f18;
  }
  uVar4 = thunk_FUN_02c7737c(puVar2);
  FUN_04e7fa04(uVar3,uVar4,0);
LAB_04ec5aac:
  uVar4 = thunk_FUN_02c7737c(PTR_DAT_065f7f28);
                    /* WARNING: Subroutine does not return */
  FUN_02ce7b54(uVar3,uVar4);
}


