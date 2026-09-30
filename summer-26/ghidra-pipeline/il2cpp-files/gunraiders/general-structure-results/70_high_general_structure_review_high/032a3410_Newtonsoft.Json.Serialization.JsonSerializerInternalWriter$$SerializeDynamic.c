/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$SerializeDynamic
ENTRY_POINT: 032a3410
PROGRAM: gunraiders-libil2cpp.so
SCORE: 81
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__SerializeDynamic(void)

{
  char in_NG;
  char in_OV;
  int iVar1;
  long lVar2;
  long *unaff_x20;
  undefined8 *unaff_x22;
  long unaff_x23;
  
  while( true ) {
    if (in_NG == in_OV) {
                    /* try { // try from 032a3424 to 033a3427 has its CatchHandler @ 032a3590 */
      return;
    }
    if (unaff_x20[2] == 0) break;
    if ((ulong)*(uint *)(unaff_x20[2] + 0x18) <= unaff_x23 - 4U) {
LAB_032a342c:
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4ac();
    }
    if (unaff_x20[3] == 0) break;
    if ((ulong)*(uint *)(unaff_x20[3] + 0x18) <= unaff_x23 - 4U) goto LAB_032a342c;
    thunk_FUN_01c49334(*unaff_x22);
    FUN_032f3d60();
    iVar1 = (**(code **)(*unaff_x20 + 0x2a8))();
    lVar2 = unaff_x23 + -3;
    unaff_x23 = unaff_x23 + 1;
    in_OV = SBORROW8(lVar2,(long)iVar1);
    in_NG = lVar2 - iVar1 < 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


