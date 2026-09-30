/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalBase$$get_DefaultReferenceMappings
ENTRY_POINT: 017718a8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalBase__get_DefaultReferenceMappings
               (long param_1)

{
  long lVar1;
  long *unaff_x20;
  
  FUN_017b46ec();
  *(undefined4 *)(param_1 + 0x10) = 0;
  **(long **)(*unaff_x20 + 0xb8) = param_1;
  lVar1 = thunk_FUN_00d62348(*unaff_x20);
  if (lVar1 != 0) {
    FUN_017b46ec(lVar1,0);
    *(undefined4 *)(lVar1 + 0x10) = 1;
    *(long *)(*(long *)(*unaff_x20 + 0xb8) + 8) = lVar1;
    lVar1 = thunk_FUN_00d62348();
    if (lVar1 != 0) {
      FUN_017b46ec(lVar1,0);
      *(undefined4 *)(lVar1 + 0x10) = 3;
      *(long *)(*(long *)(*unaff_x20 + 0xb8) + 0x10) = lVar1;
      lVar1 = thunk_FUN_00d62348();
      if (lVar1 != 0) {
        FUN_017b46ec(lVar1,0);
        *(undefined4 *)(lVar1 + 0x10) = 4;
        *(long *)(*(long *)(*unaff_x20 + 0xb8) + 0x18) = lVar1;
        lVar1 = thunk_FUN_00d62348();
        if (lVar1 != 0) {
          FUN_017b46ec(lVar1,0);
          *(undefined4 *)(lVar1 + 0x10) = 5;
          *(long *)(*(long *)(*unaff_x20 + 0xb8) + 0x20) = lVar1;
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


