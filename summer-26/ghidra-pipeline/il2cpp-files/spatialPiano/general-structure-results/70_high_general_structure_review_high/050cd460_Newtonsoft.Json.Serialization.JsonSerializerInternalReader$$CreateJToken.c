/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$CreateJToken
ENTRY_POINT: 050cd460
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CreateJToken(void)

{
  int iVar1;
  int iVar2;
  undefined1 in_w8;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  
  *(undefined1 *)(unaff_x22 + 0xb36) = in_w8;
  iVar2 = *(int *)(*unaff_x21 + 0xe4);
  iVar1 = *(int *)(unaff_x20 + 0x14) + *(int *)(unaff_x20 + 0x10);
  *(int *)(unaff_x19 + 2) = iVar1;
  if (iVar2 == 0) {
    thunk_FUN_02f6670c();
  }
  if ((DAT_06bb9b21 & 1) == 0) {
    FUN_02f08768(PTR_DAT_067d5bb0);
    DAT_06bb9b21 = 1;
  }
  if (iVar1 < (int)*(uint *)(unaff_x19 + 1)) {
    if (*(uint *)(unaff_x19 + 1) <= *(uint *)(unaff_x19 + 2)) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089d0();
    }
    *(undefined2 *)((long)unaff_x19 + 0x14) =
         *(undefined2 *)(*unaff_x19 + (long)(int)*(uint *)(unaff_x19 + 2) * 2);
  }
  return;
}


