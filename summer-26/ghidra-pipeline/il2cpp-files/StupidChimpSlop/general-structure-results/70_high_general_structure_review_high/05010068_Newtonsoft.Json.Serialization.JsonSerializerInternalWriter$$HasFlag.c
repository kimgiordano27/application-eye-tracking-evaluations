/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$HasFlag
ENTRY_POINT: 05010068
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__HasFlag
               (undefined8 param_1,ulong param_2,undefined8 param_3,ulong param_4)

{
  short *psVar1;
  bool bVar2;
  undefined8 uVar3;
  ulong uVar4;
  int iVar5;
  long lVar6;
  long in_x9;
  undefined8 *unaff_x19;
  uint unaff_w20;
  long unaff_x21;
  long unaff_x22;
  int unaff_w23;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  long in_stack_00000018;
  
  if ((param_2 & 1) == 0) {
    lVar6 = 2;
    do {
      psVar1 = (short *)(unaff_x21 + lVar6);
      iVar5 = (int)lVar6;
      if (iVar5 == 0x2a) break;
      lVar6 = lVar6 + 2;
    } while (*psVar1 == 0x30);
    if ((iVar5 == 0x2a) || (*psVar1 == 0)) goto LAB_050100c0;
  }
  bVar2 = param_2 == 0xffffffffffffffff;
  param_2 = param_2 + 1;
  if (bVar2) {
    iVar5 = (int)param_4;
    param_4 = (ulong)(iVar5 + 1);
    if (iVar5 == -1) {
      unaff_w23 = unaff_w23 + 1;
      param_2 = in_x9 + 2;
      param_4 = 0x19999999;
    }
    else {
      param_2 = 0;
    }
  }
LAB_050100c0:
  if (unaff_w23 < 1) {
    if (unaff_w23 < -0x1c) {
      param_2 = 0;
      uVar4 = 0;
      param_4 = 0;
      iVar5 = 0x1c;
    }
    else {
      uVar4 = param_2 >> 0x20;
      iVar5 = -unaff_w23;
    }
    in_stack_00000010 = 0;
    in_stack_00000008 = 0;
    FUN_0505d7f4(&stack0x00000008,param_2,uVar4,param_4,unaff_w20 & 1,iVar5,0);
    uVar3 = 1;
    unaff_x19[1] = in_stack_00000010;
    *unaff_x19 = in_stack_00000008;
  }
  else {
    uVar3 = 0;
  }
  if (*(long *)(unaff_x22 + 0x28) == in_stack_00000018) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


