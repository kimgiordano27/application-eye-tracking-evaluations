/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$CheckPropertyName
ENTRY_POINT: 04d431d0
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;data_collection;telemetry
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_5;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined1  [16] Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CheckPropertyName(void)

{
  undefined1 auVar1 [16];
  long lVar2;
  int in_w8;
  long unaff_x21;
  int unaff_w22;
  long *in_stack_00000018;
  long in_stack_00000020;
  undefined8 in_stack_00000028;
  long in_stack_00000050;
  undefined2 uStack0000000000000058;
  undefined1 uStack000000000000005a;
  undefined5 uStack000000000000005b;
  undefined8 in_stack_00000068;
  
  if (in_w8 != 0) {
    if (*in_stack_00000018 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    FUN_04de299c(*in_stack_00000018,0);
  }
  if (unaff_x21 == 0) {
    if (unaff_w22 == 6) {
      in_stack_00000050 = in_stack_00000020;
      uStack0000000000000058 = (undefined2)in_stack_00000028;
      uStack000000000000005a = (undefined1)((ulong)in_stack_00000028 >> 0x10);
      uStack000000000000005b = (undefined5)((ulong)in_stack_00000028 >> 0x18);
    }
    else if (unaff_w22 == 0) {
      lVar2 = FUN_04d432c0();
      in_stack_00000050 = 0;
      uStack0000000000000058 = 0;
      uStack000000000000005a = 0;
      uStack000000000000005b = 0;
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        Oculus_Interaction_ActiveStateTracker__InjectOptionalGameObjects(0x26,0);
      }
      in_stack_00000050 = lVar2;
      thunk_FUN_02bb0e9c(&stack0x00000050,lVar2);
      uStack0000000000000058 = 0;
      uStack000000000000005a = 1;
    }
    auVar1._8_2_ = uStack0000000000000058;
    auVar1._0_8_ = in_stack_00000050;
    auVar1[10] = uStack000000000000005a;
    auVar1._11_5_ = uStack000000000000005b;
    return auVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cabc();
}


