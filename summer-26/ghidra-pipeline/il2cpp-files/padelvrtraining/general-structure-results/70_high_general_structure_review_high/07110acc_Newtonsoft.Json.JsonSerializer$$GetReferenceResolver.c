/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$GetReferenceResolver
ENTRY_POINT: 07110acc
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


long * Newtonsoft_Json_JsonSerializer__GetReferenceResolver(void)

{
  long *plVar1;
  int in_w8;
  long *unaff_x19;
  undefined8 uVar2;
  
  if (in_w8 == 0) {
    plVar1 = (long *)unaff_x19[7];
    thunk_FUN_03d187c8();
    if (plVar1 != (long *)0x0) {
      return plVar1;
    }
  }
  uVar2 = *(undefined8 *)PTR_StringLiteral_49806_0920fdd8;
  if (*(int *)(*(long *)PTR_DAT_091a1be8 + 0xe0) == 0) {
    thunk_FUN_03db619c();
  }
  FUN_07186ef4(uVar2,0);
  plVar1 = (long *)(**(code **)(*unaff_x19 + 0x278))();
  if ((plVar1 != (long *)0x0) && (*plVar1 != *(long *)PTR_DAT_091addc8)) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d8e4(plVar1);
  }
  return plVar1;
}


