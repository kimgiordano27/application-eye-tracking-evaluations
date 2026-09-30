/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$GetReference
ENTRY_POINT: 074ed8c8
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


void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__GetReference(void)

{
  short sVar1;
  uint uVar2;
  short sVar3;
  char cVar4;
  long unaff_x19;
  short *unaff_x20;
  long unaff_x23;
  int unaff_w24;
  short unaff_w25;
  
  do {
    FUN_073869c4();
    cVar4 = *(char *)(unaff_x23 + 0x2cd);
    while( true ) {
      unaff_w24 = unaff_w24 + -1;
      if (unaff_w24 < 2) {
                    /* try { // try from 074ed8e4 to 075ed96b has its CatchHandler @ 074eda30 */
        return;
      }
      sVar1 = *unaff_x20;
      sVar3 = unaff_w25;
      if (sVar1 != 0) {
        unaff_x20 = unaff_x20 + 1;
        sVar3 = sVar1;
      }
      if (cVar4 == '\0') {
        FUN_0403162c();
        cVar4 = '\x01';
        *(undefined1 *)(unaff_x23 + 0x2cd) = 1;
      }
      uVar2 = *(uint *)(unaff_x19 + 0x18);
      if ((int)*(uint *)(unaff_x19 + 0x10) <= (int)uVar2) break;
      if (*(uint *)(unaff_x19 + 0x10) <= uVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_04031894();
      }
      *(uint *)(unaff_x19 + 0x18) = uVar2 + 1;
      *(short *)(*(long *)(unaff_x19 + 8) + (long)(int)uVar2 * 2) = sVar3;
    }
  } while( true );
}


