/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$.ctor
ENTRY_POINT: 04f9ef5c
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8 Newtonsoft_Json_JsonSerializerSettings___ctor(uint param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (param_1 < 0x411a658b) {
    if (param_1 < 0x3f1a6265) {
      if (param_1 < 0x3e4541d9) {
        if (param_1 == 0x3e3cf313) {
          uVar1 = thunk_FUN_04e8bd3c();
          if ((uVar1 & 1) == 0) goto LAB_04fa0d28;
          uVar3 = 0x43f;
        }
        else {
          if ((param_1 != 0x3e4541d8) || (uVar1 = thunk_FUN_04e8bd3c(), (uVar1 & 1) == 0)) {
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
          uVar3 = 0x442;
        }
      }
      else if (param_1 == 0x3e520dcb) {
        uVar1 = thunk_FUN_04e8bd3c();
        if ((uVar1 & 1) == 0) goto LAB_04fa0d28;
        uVar3 = 0x41b;
      }
      else {
        if ((param_1 != 0x3f1a6264) || (uVar1 = thunk_FUN_04e8bd3c(), (uVar1 & 1) == 0))
        goto LAB_04fa0d28;
        uVar3 = 0x408;
      }
    }
    else if (param_1 < 0x4024f154) {
      if (param_1 == 0x40207425) {
        uVar1 = thunk_FUN_04e8bd3c();
        if ((uVar1 & 1) == 0) goto LAB_04fa0d28;
        uVar3 = 0x83c;
      }
      else {
        if ((param_1 != 0x4024f153) || (uVar1 = thunk_FUN_04e8bd3c(), (uVar1 & 1) == 0))
        goto LAB_04fa0d28;
        uVar3 = 0x45e;
      }
    }
    else if (param_1 == 0x405210f1) {
      uVar1 = thunk_FUN_04e8bd3c();
      if ((uVar1 & 1) == 0) goto LAB_04fa0d28;
      uVar3 = 0x45b;
    }
    else if (param_1 == 0x40d59ee7) {
      uVar1 = thunk_FUN_04e8bd3c();
      if ((uVar1 & 1) == 0) goto LAB_04fa0d28;
      uVar3 = 0x82c;
    }
    else {
      if ((param_1 != 0x411a658a) || (uVar1 = thunk_FUN_04e8bd3c(), (uVar1 & 1) == 0))
      goto LAB_04fa0d28;
      uVar3 = 0x409;
    }
  }
  else {
    if (0x4231c06c < param_1) {
      if (param_1 < 0x432078df) {
        if (param_1 == 0x423cf95f) {
          uVar1 = thunk_FUN_04e8bd3c();
          if ((uVar1 & 1) == 0) goto LAB_04fa0d28;
          uVar3 = 0x412;
        }
        else {
          if ((param_1 != 0x432078de) || (uVar1 = thunk_FUN_04e8bd3c(), (uVar1 & 1) == 0))
          goto LAB_04fa0d28;
          uVar3 = 0x456;
        }
      }
      else if (param_1 == 0x432bb1d1) {
        uVar1 = thunk_FUN_04e8bd3c();
        if ((uVar1 & 1) == 0) goto LAB_04fa0d28;
        uVar3 = 0x445;
      }
      else if (param_1 == 0x433cfaf2) {
        uVar1 = thunk_FUN_04e8bd3c();
        if ((uVar1 & 1) == 0) goto LAB_04fa0d28;
        uVar3 = 0x46f;
      }
      else {
        if ((param_1 != 0x434549b7) || (uVar1 = thunk_FUN_04e8bd3c(), (uVar1 & 1) == 0))
        goto LAB_04fa0d28;
        uVar3 = 0x432;
      }
      goto FUN_04fa0cf4;
    }
    if (param_1 < 0x41454692) {
      if (param_1 == 0x413cf7cc) {
        uVar1 = thunk_FUN_04e8bd3c();
        if ((uVar1 & 1) == 0) goto LAB_04fa0d28;
        uVar3 = 1099;
      }
      else {
        if ((param_1 != 0x41454691) || (uVar1 = thunk_FUN_04e8bd3c(), (uVar1 & 1) == 0))
        goto LAB_04fa0d28;
        uVar3 = 0x41e;
      }
    }
    else if (param_1 == 0x422bb03e) {
      uVar1 = thunk_FUN_04e8bd3c();
      if ((uVar1 & 1) == 0) goto LAB_04fa0d28;
      uVar3 = 0x451;
    }
    else {
      if ((param_1 != 0x4231c06c) || (uVar1 = thunk_FUN_04e8bd3c(), (uVar1 & 1) == 0))
      goto LAB_04fa0d28;
      uVar3 = 0x454;
    }
  }
FUN_04fa0cf4:
  uVar2 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_0675eef8);
  FUN_04f9d984(uVar2,uVar3,1,0);
  return uVar2;
}


