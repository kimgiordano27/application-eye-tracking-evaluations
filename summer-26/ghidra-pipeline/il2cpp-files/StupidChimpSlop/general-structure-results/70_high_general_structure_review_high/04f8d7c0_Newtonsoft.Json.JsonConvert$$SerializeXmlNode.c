/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$SerializeXmlNode
ENTRY_POINT: 04f8d7c0
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


ulong Newtonsoft_Json_JsonConvert__SerializeXmlNode
                (ulong param_1,int param_2,int param_3,uint *param_4,uint *param_5)

{
  undefined8 uVar1;
  ulong uVar2;
  int unaff_w21;
  int iVar3;
  undefined8 in_stack_00000008;
  
  if (param_2 != param_3) {
    uVar1 = FUN_04f53e5c();
    uVar2 = FUN_04f53e78(uVar1,0);
    if ((((uVar2 & 1) == 0) || (uVar2 = FUN_04f53e78(*param_4,0), (uVar2 & 1) != 0)) ||
       ((*param_4 < 0x1e && ((1 << (ulong)(*param_4 & 0x1f) & 0x2001c000U) != 0)))) {
      param_1 = (ulong)*param_5;
      *param_4 = (uint)uVar1;
      *param_5 = in_stack_00000008._4_4_;
    }
    else {
      iVar3 = *param_5 + unaff_w21;
      do {
        iVar3 = iVar3 + in_stack_00000008._4_4_;
        if (param_3 <= iVar3) goto LAB_04f8d8a4;
        uVar1 = FUN_04f53e5c();
        uVar2 = FUN_04f53e78(uVar1,0);
      } while ((uVar2 & 1) != 0);
      *param_4 = (uint)uVar1;
      *param_5 = in_stack_00000008._4_4_;
LAB_04f8d8a4:
      param_1 = (ulong)(uint)(iVar3 - unaff_w21);
    }
  }
  return param_1;
}


