/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$WriteObjectStart
ENTRY_POINT: 0718b094
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


undefined8 Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__WriteObjectStart(void)

{
  ulong uVar1;
  undefined4 uVar2;
  undefined4 *unaff_x19;
  int unaff_w21;
  long unaff_x22;
  int iVar3;
  long lVar4;
  long unaff_x25;
  long unaff_x26;
  
  uVar1 = FUN_048d37c4();
  if ((uVar1 & 1) == 0) {
    lVar4 = *(long *)(unaff_x22 + 0x78);
    if (*(char *)(unaff_x26 + 0xd82) == '\0') {
      FUN_03d2d2b0(PTR_DAT_091a8170);
      *(undefined1 *)(unaff_x26 + 0xd82) = 1;
    }
    iVar3 = 0;
    if (lVar4 != 0) {
      FUN_06fd0380(lVar4,0);
      iVar3 = *(int *)(lVar4 + 0x10);
    }
    if (*(char *)(unaff_x25 + 0xc83) == '\0') {
      FUN_03d2d2b0(PTR_DAT_091dad58);
      FUN_03d2d2b0(PTR_DAT_091dad78);
      *(undefined1 *)(unaff_x25 + 0xc83) = 1;
    }
    if ((unaff_w21 == iVar3) && ((unaff_w21 == 0 || (uVar1 = FUN_048d37c4(), (uVar1 & 1) != 0)))) {
      uVar2 = 0xff800000;
    }
    else {
      lVar4 = *(long *)(unaff_x22 + 0x68);
      if (*(char *)(unaff_x26 + 0xd82) == '\0') {
        FUN_03d2d2b0(PTR_DAT_091a8170);
        *(undefined1 *)(unaff_x26 + 0xd82) = 1;
      }
      iVar3 = 0;
      if (lVar4 != 0) {
        FUN_06fd0380(lVar4,0);
        iVar3 = *(int *)(lVar4 + 0x10);
      }
      if (*(char *)(unaff_x25 + 0xc83) == '\0') {
        FUN_03d2d2b0(PTR_DAT_091dad58);
        FUN_03d2d2b0(PTR_DAT_091dad78);
        *(undefined1 *)(unaff_x25 + 0xc83) = 1;
      }
      if ((unaff_w21 != iVar3) || ((unaff_w21 != 0 && (uVar1 = FUN_048d37c4(), (uVar1 & 1) == 0))))
      {
        return 0;
      }
      uVar2 = 0x7fc00000;
    }
  }
  else {
    uVar2 = 0x7f800000;
  }
  *unaff_x19 = uVar2;
  return 1;
}


