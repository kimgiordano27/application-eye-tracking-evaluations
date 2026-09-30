/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$get_Culture
ENTRY_POINT: 050669f8
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


void Newtonsoft_Json_JsonSerializer__get_Culture(long param_1)

{
  uint uVar1;
  undefined1 uVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x20;
  undefined4 unaff_w21;
  undefined4 unaff_w22;
  long unaff_x23;
  ulong uVar4;
  
  FUN_02f08768(*(undefined8 *)(param_1 + 800));
  *(undefined1 *)(unaff_x23 + 0x7b1) = 1;
  FUN_05116b38();
  *(long *)(unaff_x20 + 0x10) = unaff_x19;
  *(undefined4 *)(unaff_x20 + 0x20) = unaff_w21;
  *(undefined4 *)(unaff_x20 + 0x24) = unaff_w22;
  if (unaff_x19 != 0) {
    uVar1 = *(uint *)(unaff_x19 + 0x10);
    lVar3 = FUN_02f0880c(*(undefined8 *)PTR_DAT_067c9320,(ulong)uVar1);
    if (0 < (int)uVar1) {
      uVar4 = 0;
      do {
        uVar2 = FUN_04f69818();
        if (lVar3 == 0) goto LAB_05066a94;
        if (*(uint *)(lVar3 + 0x18) <= uVar4) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089d0();
        }
        *(undefined1 *)(lVar3 + 0x20 + uVar4) = uVar2;
        uVar4 = uVar4 + 1;
      } while (uVar1 != uVar4);
    }
    *(long *)(unaff_x20 + 0x18) = lVar3;
    return;
  }
LAB_05066a94:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


