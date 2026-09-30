/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$get_Culture
ENTRY_POINT: 04f9ee00
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


undefined8 Newtonsoft_Json_JsonSerializerSettings__get_Culture(uint param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  uint in_w8;
  undefined8 uVar3;
  
  if (in_w8 < param_1) {
    if (0x5836603c < param_1) {
      if (param_1 < 0x5867fd09) {
        if (param_1 == 0x583add6a) {
          uVar1 = thunk_FUN_04e8bd3c();
          if ((uVar1 & 1) == 0) goto LAB_04fa0d28;
          uVar3 = 0x42b;
        }
        else {
          if ((param_1 != 0x5867fd08) || (uVar1 = thunk_FUN_04e8bd3c(), (uVar1 & 1) == 0))
          goto LAB_04fa0d28;
          uVar3 = 0x435;
        }
      }
      else if (param_1 == 0x5a432f55) {
        uVar1 = thunk_FUN_04e8bd3c();
        if ((uVar1 & 1) == 0) goto LAB_04fa0d28;
        uVar3 = 0x480;
      }
      else if (param_1 == 0x5b31e7c7) {
        uVar1 = thunk_FUN_04e8bd3c();
        if ((uVar1 & 1) == 0) goto LAB_04fa0d28;
        uVar3 = 0x426;
      }
      else {
        if ((param_1 != 0x5c1ccea2) || (uVar1 = thunk_FUN_04e8bd3c(), (uVar1 & 1) == 0))
        goto LAB_04fa0d28;
        uVar3 = 0x407;
      }
      goto FUN_04fa0cf4;
    }
    if (param_1 < 0x581cc857) {
      if (param_1 == 0x57365ea9) {
        uVar1 = thunk_FUN_04e8bd3c();
        if ((uVar1 & 1) == 0) goto LAB_04fa0d28;
        uVar3 = 0x414;
      }
      else {
        if ((param_1 != 0x581cc856) || (uVar1 = thunk_FUN_04e8bd3c(), (uVar1 & 1) == 0))
        goto LAB_04fa0d28;
        uVar3 = 0x406;
      }
    }
    else if (param_1 == 0x58299449) {
      uVar1 = thunk_FUN_04e8bd3c();
      if ((uVar1 & 1) == 0) goto LAB_04fa0d28;
      uVar3 = 0x403;
    }
    else {
      if ((param_1 != 0x5836603c) || (uVar1 = thunk_FUN_04e8bd3c(), (uVar1 & 1) == 0))
      goto LAB_04fa0d28;
      uVar3 = 0x461;
    }
  }
  else if (param_1 < 0x55251263) {
    if (param_1 < 0x504e588b) {
      if (param_1 == 0x503d0f69) {
        uVar1 = thunk_FUN_04e8bd3c();
        if ((uVar1 & 1) == 0) goto LAB_04fa0d28;
        uVar3 = 0x440;
      }
      else {
        if ((param_1 != 0x504e588a) || (uVar1 = thunk_FUN_04e8bd3c(), (uVar1 & 1) == 0)) {
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
        uVar3 = 0x446;
      }
    }
    else if (param_1 == 0x54ecc315) {
      uVar1 = thunk_FUN_04e8bd3c();
      if ((uVar1 & 1) == 0) goto LAB_04fa0d28;
      uVar3 = 0x428;
    }
    else {
      if ((param_1 != 0x55251262) || (uVar1 = thunk_FUN_04e8bd3c(), (uVar1 & 1) == 0))
      goto LAB_04fa0d28;
      uVar3 = 0x42c;
    }
  }
  else if (param_1 < 0x5539c889) {
    if (param_1 == 0x552e0cbe) {
      uVar1 = thunk_FUN_04e8bd3c();
      if ((uVar1 & 1) == 0) goto LAB_04fa0d28;
      uVar3 = 0x44e;
    }
    else {
      if ((param_1 != 0x5539c888) || (uVar1 = thunk_FUN_04e8bd3c(), (uVar1 & 1) == 0))
      goto LAB_04fa0d28;
      uVar3 = 0x484;
    }
  }
  else if (param_1 == 0x562e0e51) {
    uVar1 = thunk_FUN_04e8bd3c();
    if ((uVar1 & 1) == 0) goto LAB_04fa0d28;
    uVar3 = 0x43e;
  }
  else if (param_1 == 0x5722d6f1) {
    uVar1 = thunk_FUN_04e8bd3c();
    if ((uVar1 & 1) == 0) goto LAB_04fa0d28;
    uVar3 = 0x40c;
  }
  else {
    if ((param_1 != 0x572e0fe4) || (uVar1 = thunk_FUN_04e8bd3c(), (uVar1 & 1) == 0))
    goto LAB_04fa0d28;
    uVar3 = 0x43a;
  }
FUN_04fa0cf4:
  uVar2 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_0675eef8);
  FUN_04f9d984(uVar2,uVar3,1,0);
  return uVar2;
}


