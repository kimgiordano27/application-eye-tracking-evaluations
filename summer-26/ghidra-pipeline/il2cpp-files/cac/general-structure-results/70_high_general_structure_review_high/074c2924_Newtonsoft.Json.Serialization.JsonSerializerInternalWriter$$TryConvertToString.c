/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$TryConvertToString
ENTRY_POINT: 074c2924
PROGRAM: cac-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;weak_data_support;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;weak_string_building_near_file_sink_1;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__TryConvertToString
               (undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  ulong uVar2;
  int iVar3;
  undefined8 *unaff_x19;
  uint unaff_w20;
  long unaff_x22;
  int unaff_w23;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  long in_stack_00000018;
  
  if (unaff_w23 < 1) {
    if (unaff_w23 < -0x1c) {
      param_2 = 0;
      uVar2 = 0;
      param_4 = 0;
      iVar3 = 0x1c;
    }
    else {
      uVar2 = param_2 >> 0x20;
      iVar3 = -unaff_w23;
    }
    in_stack_00000010 = 0;
    in_stack_00000008 = 0;
    FUN_0751239c(&stack0x00000008,param_2,uVar2,param_4,unaff_w20 & 1,iVar3,0);
    uVar1 = 1;
    unaff_x19[1] = in_stack_00000010;
    *unaff_x19 = in_stack_00000008;
  }
  else {
    uVar1 = 0;
  }
  if (*(long *)(unaff_x22 + 0x28) == in_stack_00000018) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


