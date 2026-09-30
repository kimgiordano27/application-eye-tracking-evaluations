/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$get_MissingMemberHandling
ENTRY_POINT: 05067688
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializerSettings__get_MissingMemberHandling(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  ulong unaff_x21;
  
  while( true ) {
    if (param_1 <= (long)unaff_x21) {
      return;
    }
    lVar3 = FUN_05067464();
    if (lVar3 == 0) break;
    if (*(uint *)(lVar3 + 0x18) <= unaff_x21) {
LAB_050676ec:
                    /* WARNING: Subroutine does not return */
      FUN_02f089d0();
    }
    if (unaff_x20 == 0) break;
    if (*(uint *)(unaff_x20 + 0x18) <= unaff_x21) goto LAB_050676ec;
    lVar1 = unaff_x21 * 4;
    lVar2 = unaff_x21 * 2;
    unaff_x21 = unaff_x21 + 1;
    *(short *)(unaff_x20 + lVar2 + 0x20) = (short)*(undefined4 *)(lVar3 + lVar1 + 0x20);
    lVar3 = FUN_05067464();
    if (lVar3 == 0) break;
    param_1 = (long)*(int *)(lVar3 + 0x18);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


