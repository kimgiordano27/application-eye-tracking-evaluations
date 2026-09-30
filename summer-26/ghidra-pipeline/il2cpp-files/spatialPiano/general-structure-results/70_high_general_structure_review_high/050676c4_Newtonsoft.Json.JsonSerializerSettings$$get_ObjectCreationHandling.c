/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$get_ObjectCreationHandling
ENTRY_POINT: 050676c4
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializerSettings__get_ObjectCreationHandling(long param_1)

{
  long lVar1;
  long in_x9;
  long unaff_x20;
  ulong unaff_x21;
  
  while( true ) {
    unaff_x21 = unaff_x21 + 1;
    *(short *)(in_x9 + 0x20) = (short)*(undefined4 *)(param_1 + 0x20);
    lVar1 = FUN_05067464();
    if (lVar1 == 0) break;
    if ((long)*(int *)(lVar1 + 0x18) <= (long)unaff_x21) {
      return;
    }
    param_1 = FUN_05067464();
    if (param_1 == 0) break;
    if (*(uint *)(param_1 + 0x18) <= unaff_x21) {
LAB_050676ec:
                    /* WARNING: Subroutine does not return */
      FUN_02f089d0();
    }
    if (unaff_x20 == 0) break;
    if (*(uint *)(unaff_x20 + 0x18) <= unaff_x21) goto LAB_050676ec;
    param_1 = param_1 + unaff_x21 * 4;
    in_x9 = unaff_x20 + unaff_x21 * 2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


