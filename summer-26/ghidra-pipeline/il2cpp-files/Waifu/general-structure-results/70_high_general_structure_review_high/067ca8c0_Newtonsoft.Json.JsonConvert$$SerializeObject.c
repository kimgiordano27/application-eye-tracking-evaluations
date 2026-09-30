/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$SerializeObject
ENTRY_POINT: 067ca8c0
PROGRAM: Waifu-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


long Newtonsoft_Json_JsonConvert__SerializeObject(void)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  int unaff_w19;
  int unaff_w21;
  long unaff_x23;
  undefined1 unaff_w24;
  
  FUN_0335b6c8();
  DataMemoryBarrier(2,3);
  *(undefined1 *)(unaff_x23 + 0x9b2) = unaff_w24;
  lVar3 = FUN_067ca950();
  if (*(int *)(DAT_083cc118 + 0xe0) == 0) {
    FUN_033b9870(DAT_083cc118);
  }
  lVar4 = *(long *)(*(long *)(DAT_083cc118 + 0xb8) + 8);
  if (lVar4 != 0) {
    if (unaff_w21 - 1U < *(uint *)(lVar4 + 0x18)) {
      iVar1 = *(int *)(lVar4 + (long)(int)(unaff_w21 - 1U) * 4 + 0x20);
      uVar2 = FUN_067caa0c();
      return lVar3 + unaff_w19 + (long)iVar1 + (long)(int)~uVar2;
    }
                    /* WARNING: Subroutine does not return */
    FUN_033d1d44();
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


