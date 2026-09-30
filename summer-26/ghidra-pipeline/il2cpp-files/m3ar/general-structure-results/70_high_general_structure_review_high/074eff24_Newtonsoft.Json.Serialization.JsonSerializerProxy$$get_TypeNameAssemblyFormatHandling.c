/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$get_TypeNameAssemblyFormatHandling
ENTRY_POINT: 074eff24
PROGRAM: m3ar-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerProxy__get_TypeNameAssemblyFormatHandling(void)

{
  ulong uVar1;
  ulong uVar2;
  int in_w8;
  long unaff_x23;
  long *unaff_x24;
  char cStack0000000000000008;
  long in_stack_00000098;
  
  uVar2 = _cStack0000000000000008 >> 0x20;
  if (in_w8 == 0) {
    thunk_FUN_0408f364();
  }
  uVar1 = FUN_074f007c();
  if ((uVar1 & 1) == 0) {
    if (*(int *)(*unaff_x24 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    uVar2 = (ulong)(cStack0000000000000008 != '\0');
    if (*(long *)(unaff_x23 + 0x28) == in_stack_00000098) {
      uVar2 = FUN_074ef08c(uVar2,*(undefined8 *)PTR_DAT_08f9f678);
    }
  }
  else if (*(long *)(unaff_x23 + 0x28) == in_stack_00000098) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


