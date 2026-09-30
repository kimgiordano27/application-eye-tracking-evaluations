/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$ResolvePropertyAndCreatorValues
ENTRY_POINT: 0592be58
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__ResolvePropertyAndCreatorValues
               (void)

{
  short sVar1;
  uint uVar2;
  long unaff_x19;
  short *unaff_x20;
  short unaff_w22;
  int unaff_w23;
  short unaff_w24;
  long unaff_x25;
  undefined1 unaff_w26;
  
  do {
    thunk_FUN_032e1da0();
    *(undefined1 *)(unaff_x25 + 0x7fe) = unaff_w26;
    do {
      uVar2 = *(uint *)(unaff_x19 + 0x18);
      if ((int)uVar2 < (int)*(uint *)(unaff_x19 + 0x10)) {
        if (*(uint *)(unaff_x19 + 0x10) <= uVar2) {
                    /* WARNING: Subroutine does not return */
          Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
        }
        *(short *)(*(long *)(unaff_x19 + 8) + (long)(int)uVar2 * 2) = unaff_w22;
        *(uint *)(unaff_x19 + 0x18) = uVar2 + 1;
      }
      else {
        FUN_057c5d34();
      }
      unaff_w23 = unaff_w23 + -1;
      if (unaff_w23 < 2) {
        return;
      }
      sVar1 = *unaff_x20;
      unaff_w22 = unaff_w24;
      if (sVar1 != 0) {
        unaff_x20 = unaff_x20 + 1;
        unaff_w22 = sVar1;
      }
    } while (*(char *)(unaff_x25 + 0x7fe) != '\0');
  } while( true );
}


