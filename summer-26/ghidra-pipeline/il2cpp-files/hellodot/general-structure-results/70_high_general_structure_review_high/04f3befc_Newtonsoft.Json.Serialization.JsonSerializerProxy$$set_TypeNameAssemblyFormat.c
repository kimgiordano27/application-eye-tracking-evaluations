/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$set_TypeNameAssemblyFormat
ENTRY_POINT: 04f3befc
PROGRAM: hellodot-libil2cpp.so
SCORE: 77
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;weak_data_support;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;weak_string_building_near_file_sink_1;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerProxy__set_TypeNameAssemblyFormat(void)

{
  ulong uVar1;
  int in_w8;
  long unaff_x23;
  undefined8 *unaff_x24;
  undefined8 in_stack_00000008;
  long in_stack_00000098;
  
  if (in_w8 == 0) {
    thunk_FUN_02cd038c();
  }
  FUN_04f3b3a4();
  uVar1 = FUN_04f3a88c(&stack0x00000010,(long)&stack0x00000008 + 4);
  if ((uVar1 & 1) == 0) {
    FUN_028be084(*unaff_x24);
    uVar1 = FUN_04f3afcc(1,*(undefined8 *)PTR_DAT_065f7538);
  }
  else {
    uVar1 = (ulong)in_stack_00000008._4_4_;
    if (*(long *)(unaff_x23 + 0x28) == in_stack_00000098) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


