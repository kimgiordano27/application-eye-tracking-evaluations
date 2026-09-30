/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$DeserializeXmlNode
ENTRY_POINT: 08e011e8
PROGRAM: Hyper-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x08e0127c) */

void Newtonsoft_Json_JsonConvert__DeserializeXmlNode(void)

{
  long lVar1;
  long *unaff_x21;
  long *plVar2;
  long in_stack_00000018;
  
  lVar1 = thunk_FUN_04983e64();
  if (lVar1 != 0) {
    plVar2 = (long *)(*(long *)(*unaff_x21 + 0xb8) + 0x10);
    *plVar2 = lVar1;
    lVar1 = thunk_FUN_04983e64();
    if (lVar1 != 0) {
      thunk_FUN_049ee3d8(plVar2);
      if (in_stack_00000018 != 0) {
        FUN_08de4a2c(in_stack_00000018,0);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494850c();
}


