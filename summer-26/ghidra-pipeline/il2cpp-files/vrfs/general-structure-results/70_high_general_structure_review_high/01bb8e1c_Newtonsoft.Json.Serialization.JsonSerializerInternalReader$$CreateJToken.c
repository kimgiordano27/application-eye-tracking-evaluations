/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$CreateJToken
ENTRY_POINT: 01bb8e1c
PROGRAM: vrfs-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_6;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CreateJToken(ulong param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long unaff_x19;
  long unaff_x20;
  long lVar5;
  
  if ((param_1 & 1) == 0) {
    thunk_FUN_0159f088(PTR_DAT_06deee58);
    *(undefined1 *)(unaff_x20 + 0xcb7) = 1;
  }
  if (0xfef9 < *(int *)(unaff_x19 + 0x38)) {
    FUN_01bb9b28();
  }
  iVar4 = *(int *)(unaff_x19 + 0x3c);
  if (iVar4 < 0x106) {
    iVar1 = *(int *)(unaff_x19 + 0x70);
    iVar3 = *(int *)(unaff_x19 + 0x74) - iVar1;
    if (iVar3 != 0 && iVar1 <= *(int *)(unaff_x19 + 0x74)) {
      iVar4 = *(int *)(unaff_x19 + 0x38) + iVar4;
      iVar2 = 0x10000 - iVar4;
      if (iVar2 <= iVar3) {
        iVar3 = iVar2;
      }
      FUN_031dd848(*(undefined8 *)(unaff_x19 + 0x60),iVar1,*(undefined8 *)(unaff_x19 + 0x40),iVar4,
                   iVar3,0);
      lVar5 = *(long *)(unaff_x19 + 0x88);
      if (lVar5 != 0) {
        FUN_020029c0();
        FUN_0187eff8(lVar5,0,0,0);
      }
      iVar4 = *(int *)(unaff_x19 + 0x3c) + iVar3;
      *(int *)(unaff_x19 + 0x70) = *(int *)(unaff_x19 + 0x70) + iVar3;
      *(long *)(unaff_x19 + 0x68) = *(long *)(unaff_x19 + 0x68) + (long)iVar3;
      *(int *)(unaff_x19 + 0x3c) = iVar4;
    }
    if (iVar4 < 3) {
      return;
    }
  }
  FUN_01bb9540();
  return;
}


