/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$ReadMetadataProperties
ENTRY_POINT: 027464d4
PROGRAM: vrlegs-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;data_collection;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_2;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__ReadMetadataProperties(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 in_w8;
  undefined4 uVar6;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  undefined4 uVar7;
  
  *(undefined1 *)(unaff_x22 + 0x9e3) = in_w8;
  if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0277ed90(0x30,0);
  }
  if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0277ed90(0x32,0);
  }
  if (DAT_041221cf == '\0') {
    FUN_01ab69ac(PTR_DAT_03cdba00);
    DAT_041221cf = '\x01';
  }
  if (unaff_x21 == 0) {
    uVar7 = 0;
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_025bb98c();
    uVar7 = *(undefined4 *)(unaff_x21 + 0x10);
    if (DAT_041221cf == '\0') {
      FUN_01ab69ac(PTR_DAT_03cdba00);
      DAT_041221cf = '\x01';
    }
  }
  puVar1 = PTR_DAT_03cf6080;
  if (unaff_x20 == 0) {
    uVar4 = 0;
    uVar6 = 0;
  }
  else {
    uVar4 = FUN_025bb98c();
    uVar6 = *(undefined4 *)(unaff_x20 + 0x10);
  }
  puVar2 = PTR_DAT_03cf7bd0;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar5 = FUN_026f401c();
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01a58e78(*(long *)puVar2);
  }
  FUN_027465a8(uVar3,uVar7,uVar4,uVar6,uVar5,0);
  return;
}


