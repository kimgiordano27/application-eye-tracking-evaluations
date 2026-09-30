/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$Create
ENTRY_POINT: 05a7f334
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializer__Create(void)

{
  undefined *puVar1;
  long unaff_x19;
  long unaff_x20;
  uint unaff_w21;
  long lVar2;
  int unaff_w24;
  undefined4 uStack000000000000000c;
  uint in_stack_00000018;
  
  if (unaff_w24 < 0) {
    FUN_05b0fafc(0);
  }
  uStack000000000000000c = 0;
  FUN_04ba5894();
  if ((*(byte *)(unaff_x20 + 0x1c) & 1) == 0) {
    if (unaff_w21 <= *(uint *)(unaff_x20 + 8)) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe94f0();
    }
    *(undefined2 *)(unaff_x19 + (long)(int)*(uint *)(unaff_x20 + 8) * 2) = 0x2f;
  }
  puVar1 = PTR_DAT_06fa3c88;
  FUN_05b3c260(*(undefined8 *)(unaff_x20 + 0x10),0);
  if (*(int *)(unaff_x20 + 0x18) < 0) {
    FUN_05b0fafc(0);
  }
  uStack000000000000000c = 0;
  lVar2 = *(long *)puVar1;
  if (in_stack_00000018 < *(int *)(unaff_x20 + 8) + (~(uint)*(byte *)(unaff_x20 + 0x1c) & 1)) {
    FUN_05b0fafc(0);
  }
  if ((*(byte *)(*(long *)(lVar2 + 0x20) + 0x135) & 1) == 0) {
    FUN_02feb2c4();
  }
  FUN_04ba5894();
  return;
}


