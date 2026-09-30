/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader.<>c$$<CreateObjectUsingCreatorWithParameters>b__38_0
ENTRY_POINT: 05901dc0
PROGRAM: waitwhat-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader_<>c__<CreateObjectUsingCreatorWithParameters>b__38_0
               (void)

{
  uint uVar1;
  bool in_ZR;
  long lVar2;
  int in_w9;
  long unaff_x19;
  undefined1 unaff_w20;
  
  if (in_ZR) {
    FUN_05901960();
    in_w9 = *(int *)(unaff_x19 + 0x5c);
  }
  lVar2 = *(long *)(unaff_x19 + 0x28);
  if (in_w9 == 0) {
    if (lVar2 == 0) goto LAB_05901e4c;
    if (*(int *)(lVar2 + 0x18) != 0) {
      *(undefined1 *)(lVar2 + 0x20) = unaff_w20;
      *(undefined1 *)(unaff_x19 + 0x58) = 1;
      *(undefined4 *)(unaff_x19 + 0x60) = 1;
      FUN_05901960();
      return;
    }
  }
  else {
    uVar1 = *(uint *)(unaff_x19 + 100);
    *(uint *)(unaff_x19 + 100) = uVar1 + 1;
    if (lVar2 == 0) {
LAB_05901e4c:
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    if (uVar1 < *(uint *)(lVar2 + 0x18)) {
      *(undefined1 *)(lVar2 + (int)uVar1 + 0x20) = unaff_w20;
      if (*(int *)(unaff_x19 + 0x60) < *(int *)(unaff_x19 + 100)) {
        *(int *)(unaff_x19 + 0x60) = *(int *)(unaff_x19 + 100);
      }
      *(undefined1 *)(unaff_x19 + 0x58) = 1;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188ce0();
}


