/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$WriteReference
ENTRY_POINT: 074e97f4
PROGRAM: m3ar-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__WriteReference(undefined8 param_1)

{
  ulong uVar1;
  long unaff_x19;
  long unaff_x25;
  long in_stack_00000098;
  
  uVar1 = FUN_074f3a04(param_1,0);
  if ((uVar1 & 1) == 0) {
    if (unaff_x19 == 0) goto LAB_074e98dc;
    uVar1 = *(ulong *)(unaff_x19 + 0x70);
  }
  else {
    if (unaff_x19 == 0) {
LAB_074e98dc:
      if (*(long *)(unaff_x25 + 0x28) == in_stack_00000098) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      goto LAB_074e98f0;
    }
    uVar1 = *(ulong *)(unaff_x19 + 0x78);
  }
  if (*(long *)(unaff_x25 + 0x28) == in_stack_00000098) {
    return;
  }
LAB_074e98f0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


