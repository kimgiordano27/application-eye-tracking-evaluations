/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$Create
ENTRY_POINT: 05066d04
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializer__Create(void)

{
  uint uVar1;
  undefined8 uVar2;
  long in_x9;
  undefined8 *puVar3;
  long unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  undefined8 uStack0000000000000008;
  undefined8 uStack0000000000000010;
  undefined4 uStack0000000000000018;
  
  puVar3 = *(undefined8 **)(in_x9 + 0x100);
  uStack0000000000000018 = *(undefined4 *)(unaff_x19 + 0x20);
  *(undefined8 *)(unaff_x20 + 0x30) = *unaff_x21;
  uStack0000000000000008 = *puVar3;
  uStack0000000000000010 = 0xffffffffffffffff;
  uVar2 = FUN_0510aa48();
  uVar1 = *(uint *)(unaff_x20 + 0x18);
  if (((3 < uVar1) && (*(undefined8 *)(unaff_x20 + 0x38) = uVar2, uVar1 != 4)) &&
     (*(undefined8 *)(unaff_x20 + 0x40) = *unaff_x21, 5 < uVar1)) {
    *(undefined8 *)(unaff_x20 + 0x48) = *(undefined8 *)(unaff_x19 + 0x10);
    FUN_04f6fd20();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089d0();
}


