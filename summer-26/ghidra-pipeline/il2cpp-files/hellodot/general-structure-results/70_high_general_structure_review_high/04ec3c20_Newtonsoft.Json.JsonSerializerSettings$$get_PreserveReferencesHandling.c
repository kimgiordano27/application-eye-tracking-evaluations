/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$get_PreserveReferencesHandling
ENTRY_POINT: 04ec3c20
PROGRAM: hellodot-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


long Newtonsoft_Json_JsonSerializerSettings__get_PreserveReferencesHandling(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *unaff_x19;
  long lVar4;
  undefined8 in_stack_00000008;
  
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  uVar1 = FUN_04e56b1c(param_1,0);
  if ((uVar1 & 1) == 0) {
    uVar1 = (**(code **)(*unaff_x19 + 0x1c8))();
    if ((uVar1 & 1) != 0) {
      if ((char)unaff_x19[8] == '\0') {
        lVar4 = unaff_x19[0xd] + (long)*(int *)((long)unaff_x19 + 100);
      }
      else {
        lVar4 = unaff_x19[7];
        if (*(int *)(*(long *)PTR_DAT_065f1670 + 0xe0) == 0) {
          thunk_FUN_02cd038c();
        }
        lVar4 = FUN_04ec37c0(lVar4,0,1,(long)&stack0x00000008 + 4);
        if (in_stack_00000008._4_4_ != 0) {
          uVar2 = FUN_04ec2c20();
          thunk_FUN_02c7737c(PTR_DAT_065f1670);
          FUN_028be084();
          uVar2 = FUN_04ec2c98(uVar2,in_stack_00000008._4_4_);
          goto LAB_04ec3d3c;
        }
      }
      return lVar4;
    }
    thunk_FUN_02c7737c(PTR_DAT_065c9f08);
    uVar2 = thunk_FUN_02cea894();
    uVar3 = thunk_FUN_02c7737c(PTR_DAT_065f7e20);
    FUN_04f2c64c(uVar2,uVar3,0);
  }
  else {
    thunk_FUN_02c7737c(PTR_DAT_065de2c8);
    uVar2 = thunk_FUN_02cea894();
    uVar3 = thunk_FUN_02c7737c(PTR_DAT_065f7e18);
    FUN_04f3f918(uVar2,uVar3,0);
  }
LAB_04ec3d3c:
  uVar3 = thunk_FUN_02c7737c(PTR_DAT_065f7e30);
                    /* WARNING: Subroutine does not return */
  FUN_02ce7b54(uVar2,uVar3);
}


