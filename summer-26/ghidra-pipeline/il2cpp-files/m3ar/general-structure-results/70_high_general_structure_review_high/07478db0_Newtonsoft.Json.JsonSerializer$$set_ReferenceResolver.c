/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$set_ReferenceResolver
ENTRY_POINT: 07478db0
PROGRAM: m3ar-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_11;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8 Newtonsoft_Json_JsonSerializer__set_ReferenceResolver(uint param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  uint in_w8;
  undefined8 uVar3;
  
  if ((in_w8 & 0xffff | 0x3b680000) < param_1) {
    if (param_1 < 0x3c453eb3) {
      if (param_1 == 0x3c2ba6cc) {
        uVar1 = thunk_FUN_07367938();
        if ((uVar1 & 1) == 0) goto LAB_0747aa18;
        uVar3 = 0x46d;
      }
      else {
        if ((param_1 != 0x3c453eb2) || (uVar1 = thunk_FUN_07367938(), (uVar1 & 1) == 0))
        goto LAB_0747aa18;
        uVar3 = 0x44a;
      }
    }
    else if (param_1 == 0x3c49bbe0) {
      uVar1 = thunk_FUN_07367938();
      if ((uVar1 & 1) == 0) goto LAB_0747aa18;
      uVar3 = 0x42a;
    }
    else if (param_1 == 0x3c520aa5) {
      uVar1 = thunk_FUN_07367938();
      if ((uVar1 & 1) == 0) goto LAB_0747aa18;
      uVar3 = 0x43b;
    }
    else {
      if ((param_1 != 0x3d1e7e08) || (uVar1 = thunk_FUN_07367938(), (uVar1 & 1) == 0))
      goto LAB_0747aa18;
      uVar3 = 0x85f;
    }
    goto FUN_0747a9e4;
  }
  if (param_1 < 0x3a453b8d) {
    if (param_1 == 0x3a386f99) {
      uVar1 = thunk_FUN_07367938();
      if ((uVar1 & 1) == 0) goto LAB_0747aa18;
      uVar3 = 0x470;
    }
    else {
      if ((param_1 != 0x3a453b8c) || (uVar1 = thunk_FUN_07367938(), (uVar1 & 1) == 0)) {
LAB_0747aa18:
        thunk_FUN_04097b88(PTR_DAT_08fa1148);
        uVar3 = FUN_0735c7b4();
        thunk_FUN_04097b88(PTR_DAT_08f7c590);
        uVar2 = thunk_FUN_0406deb8();
        FUN_074e732c(uVar2,uVar3,0);
        uVar3 = thunk_FUN_04097b88(PTR_DAT_08fa1150);
                    /* WARNING: Subroutine does not return */
        FUN_04031750(uVar2,uVar3);
      }
      uVar3 = 0x428;
    }
  }
  else if (param_1 == 0x3b206c46) {
    uVar1 = thunk_FUN_07367938();
    if ((uVar1 & 1) == 0) goto LAB_0747aa18;
    uVar3 = 0x491;
  }
  else {
    if ((param_1 != 0x3b68333a) || (uVar1 = thunk_FUN_07367938(), (uVar1 & 1) == 0))
    goto LAB_0747aa18;
    uVar3 = 0x850;
  }
FUN_0747a9e4:
  uVar2 = thunk_FUN_0406deb8(*(undefined8 *)PTR_DAT_08f656c8);
  FUN_07477650(uVar2,uVar3,1,0);
  return uVar2;
}


