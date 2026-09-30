/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$PopulateDictionary
ENTRY_POINT: 06247478
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__PopulateDictionary(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined4 uVar4;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x29;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  undefined8 uStack_8;
  
  FUN_0373b518();
  FUN_0373b518(PTR_DAT_07da57a8);
  *(undefined1 *)(unaff_x21 + 0x9c7) = 1;
  *(undefined8 *)(unaff_x29 + -0x20) = 0;
  *(undefined8 *)(unaff_x29 + -0x28) = 0;
  *(undefined8 *)(unaff_x29 + -0x30) = 0;
  *(undefined8 *)(unaff_x29 + -0x38) = 0;
  uStack_18 = 0;
  uStack_20 = 0;
  uStack_8 = 0;
  uStack_10 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_28 = 0;
  uStack_30 = 0;
  FUN_060dbd74(unaff_x29 + -0x38,&uStack_40,0x20,0);
  if (DAT_08255bd1 == '\0') {
    FUN_0373b518(PTR_DAT_07d98650);
    DAT_08255bd1 = '\x01';
  }
  puVar1 = PTR_DAT_07daae20;
  if (unaff_x20 == 0) {
    uVar2 = 0;
    uVar4 = 0;
  }
  else {
    uVar2 = FUN_060be1d4();
    uVar4 = *(undefined4 *)(unaff_x20 + 0x10);
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  lVar3 = FUN_06247570(unaff_x29 + -0x38,uVar2,uVar4);
  if (lVar3 == 0) {
    FUN_060dbdb0(unaff_x29 + -0x38,0);
  }
  if (*(long *)(unaff_x22 + 0x28) == *(long *)(unaff_x29 + -0x10)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


