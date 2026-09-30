/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$set_MetadataPropertyHandling
ENTRY_POINT: 05010b84
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


void Newtonsoft_Json_Serialization_JsonSerializerProxy__set_MetadataPropertyHandling
               (undefined8 param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  int in_w8;
  float *unaff_x19;
  long unaff_x24;
  long *unaff_x25;
  double in_stack_00000008;
  undefined8 uStack0000000000000010;
  undefined8 uStack0000000000000020;
  undefined8 uStack0000000000000030;
  undefined8 uStack0000000000000040;
  undefined8 uStack0000000000000050;
  undefined8 uStack0000000000000060;
  undefined8 uStack0000000000000070;
  undefined6 uStack000000000000007a;
  undefined2 uStack0000000000000080;
  long in_stack_00000098;
  
  uStack000000000000007a = (undefined6)param_1;
  uStack0000000000000080 = (undefined2)((ulong)param_1 >> 0x30);
  uStack0000000000000010 = param_1;
  uStack0000000000000020 = param_1;
  uStack0000000000000030 = param_1;
  uStack0000000000000040 = param_1;
  uStack0000000000000050 = param_1;
  uStack0000000000000060 = param_1;
  uStack0000000000000070 = param_1;
  if (in_w8 == 0) {
    thunk_FUN_02dabd98();
  }
  uVar1 = FUN_0500f824();
  uVar2 = 0;
  if ((uVar1 & 1) != 0) {
    if (*(int *)(*unaff_x25 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    uVar1 = FUN_050104d0(&stack0x00000010,&stack0x00000008);
    if ((uVar1 & 1) != 0) {
      if (ABS((float)in_stack_00000008) != INFINITY) {
        uVar2 = 1;
        *unaff_x19 = (float)in_stack_00000008;
        goto LAB_05010c18;
      }
    }
    uVar2 = 0;
  }
LAB_05010c18:
  if (*(long *)(unaff_x24 + 0x28) == in_stack_00000098) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


