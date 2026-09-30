/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$set_CheckAdditionalContent
ENTRY_POINT: 02707f3c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializer__set_CheckAdditionalContent(long param_1)

{
  char in_NG;
  char in_OV;
  long lVar1;
  long lVar2;
  uint in_w9;
  long in_x10;
  uint in_w11;
  undefined4 in_w12;
  long in_x13;
  long *unaff_x19;
  undefined8 uVar3;
  undefined8 *unaff_x21;
  
  while (*(undefined4 *)(in_x13 + 0x20) = in_w12, in_NG != in_OV) {
    if (in_w9 <= in_w11) {
LAB_02707f7c:
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    lVar1 = *(long *)(param_1 + (long)(int)in_w11 * 8 + 0x20);
    if ((lVar1 == 0) || (in_x10 == 0)) goto LAB_02707f78;
    if (*(uint *)(in_x10 + 0x18) <= in_w11) goto LAB_02707f7c;
    in_w12 = *(undefined4 *)(lVar1 + 0x10);
    in_x13 = in_x10 + (long)(int)in_w11 * 4;
    in_w11 = in_w11 + 1;
    in_OV = SBORROW4(in_w11,in_w9);
    in_NG = (int)(in_w11 - in_w9) < 0;
  }
  if (*unaff_x19 != 0) {
    lVar1 = FUN_027941f0(*unaff_x19,0);
    if (lVar1 != 0) {
      uVar3 = *unaff_x21;
      lVar2 = thunk_FUN_01a89d6c(lVar1,uVar3);
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6ee0(lVar1,uVar3);
      }
    }
    return;
  }
LAB_02707f78:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


