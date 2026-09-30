/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$GetInternalSerializer
ENTRY_POINT: 05606838
PROGRAM: Untangled-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__GetInternalSerializer(void)

{
  bool in_ZR;
  undefined8 uVar1;
  long unaff_x19;
  long unaff_x25;
  long *unaff_x26;
  double dVar2;
  double unaff_d8;
  long in_stack_00000098;
  
  if (in_ZR) {
    if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    uVar1 = *(undefined8 *)(unaff_x19 + 0x68);
  }
  else {
    if (*(int *)(*unaff_x26 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    dVar2 = (double)FUN_05606ffc(&stack0x00000010);
    if (*(int *)(*unaff_x26 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    if (dVar2 != unaff_d8) {
      FUN_05606c1c(0x11,&stack0x00000010);
    }
    FUN_05604ce8();
    uVar1 = 0;
  }
  if (*(long *)(unaff_x25 + 0x28) == in_stack_00000098) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


