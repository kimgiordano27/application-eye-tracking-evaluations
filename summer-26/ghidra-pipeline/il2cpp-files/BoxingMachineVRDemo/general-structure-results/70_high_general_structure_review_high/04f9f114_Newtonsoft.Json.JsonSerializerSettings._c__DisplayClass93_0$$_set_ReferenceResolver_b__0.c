/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings.<>c__DisplayClass93_0$$<set_ReferenceResolver>b__0
ENTRY_POINT: 04f9f114
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_12;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8
Newtonsoft_Json_JsonSerializerSettings_<>c__DisplayClass93_0__<set_ReferenceResolver>b__0
          (uint param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (0x3b68333a < param_1) {
    if (param_1 < 0x3c453eb3) {
      if (param_1 == 0x3c2ba6cc) {
        uVar1 = thunk_FUN_04e8bd3c();
        if ((uVar1 & 1) == 0) goto LAB_04fa0d28;
        uVar3 = 0x46d;
      }
      else {
        if ((param_1 != 0x3c453eb2) || (uVar1 = thunk_FUN_04e8bd3c(), (uVar1 & 1) == 0))
        goto LAB_04fa0d28;
        uVar3 = 0x44a;
      }
    }
    else if (param_1 == 0x3c49bbe0) {
      uVar1 = thunk_FUN_04e8bd3c();
      if ((uVar1 & 1) == 0) goto LAB_04fa0d28;
      uVar3 = 0x42a;
    }
    else if (param_1 == 0x3c520aa5) {
      uVar1 = thunk_FUN_04e8bd3c();
      if ((uVar1 & 1) == 0) goto LAB_04fa0d28;
      uVar3 = 0x43b;
    }
    else {
      if ((param_1 != 0x3d1e7e08) || (uVar1 = thunk_FUN_04e8bd3c(), (uVar1 & 1) == 0))
      goto LAB_04fa0d28;
      uVar3 = 0x85f;
    }
    goto FUN_04fa0cf4;
  }
  if (param_1 < 0x3a453b8d) {
    if (param_1 == 0x3a386f99) {
      uVar1 = thunk_FUN_04e8bd3c();
      if ((uVar1 & 1) == 0) goto LAB_04fa0d28;
      uVar3 = 0x470;
    }
    else {
      if ((param_1 != 0x3a453b8c) || (uVar1 = thunk_FUN_04e8bd3c(), (uVar1 & 1) == 0)) {
LAB_04fa0d28:
        thunk_FUN_02dc61f4(PTR_DAT_06778790);
        uVar3 = FUN_04e83184();
        thunk_FUN_02dc61f4(PTR_DAT_06769758);
        uVar2 = thunk_FUN_02d9d534();
        FUN_050095bc(uVar2,uVar3,0);
        uVar3 = thunk_FUN_02dc61f4(PTR_DAT_06778798);
                    /* WARNING: Subroutine does not return */
        FUN_02d609b4(uVar2,uVar3);
      }
      uVar3 = 0x428;
    }
  }
  else if (param_1 == 0x3b206c46) {
    uVar1 = thunk_FUN_04e8bd3c();
    if ((uVar1 & 1) == 0) goto LAB_04fa0d28;
    uVar3 = 0x491;
  }
  else {
    if ((param_1 != 0x3b68333a) || (uVar1 = thunk_FUN_04e8bd3c(), (uVar1 & 1) == 0))
    goto LAB_04fa0d28;
    uVar3 = 0x850;
  }
FUN_04fa0cf4:
  uVar2 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_0675eef8);
  FUN_04f9d984(uVar2,uVar3,1,0);
  return uVar2;
}


