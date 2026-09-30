/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$OnDeserializing
ENTRY_POINT: 0624f950
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__OnDeserializing
               (undefined8 param_1,ulong param_2,undefined8 param_3,ulong param_4)

{
  bool bVar1;
  undefined8 uVar2;
  ulong uVar3;
  int iVar4;
  int in_w8;
  long in_x9;
  int in_w11;
  undefined8 *unaff_x19;
  uint unaff_w20;
  long unaff_x22;
  int unaff_w23;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  long in_stack_00000018;
  
  if (((in_w11 != 0x2a) && (in_w8 != 0)) &&
     (bVar1 = param_2 == 0xffffffffffffffff, param_2 = param_2 + 1, bVar1)) {
    iVar4 = (int)param_4;
    param_4 = (ulong)(iVar4 + 1);
    if (iVar4 == -1) {
      unaff_w23 = unaff_w23 + 1;
      param_2 = in_x9 + 2;
      param_4 = 0x19999999;
    }
    else {
      param_2 = 0;
    }
  }
  if (unaff_w23 < 1) {
    if (unaff_w23 < -0x1c) {
      iVar4 = 0x1c;
      param_2 = 0;
      uVar3 = 0;
      param_4 = 0;
    }
    else {
      uVar3 = param_2 >> 0x20;
      iVar4 = -unaff_w23;
    }
    in_stack_00000010 = 0;
    in_stack_00000008 = 0;
    FUN_0629eb34(&stack0x00000008,param_2,uVar3,param_4,unaff_w20 & 1,iVar4,0);
    uVar2 = 1;
    unaff_x19[1] = in_stack_00000010;
    *unaff_x19 = in_stack_00000008;
  }
  else {
    uVar2 = 0;
  }
  if (*(long *)(unaff_x22 + 0x28) == in_stack_00000018) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


