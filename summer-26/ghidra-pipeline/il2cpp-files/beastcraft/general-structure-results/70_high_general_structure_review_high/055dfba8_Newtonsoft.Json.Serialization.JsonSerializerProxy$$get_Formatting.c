/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$get_Formatting
ENTRY_POINT: 055dfba8
PROGRAM: beastcraft-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerProxy__get_Formatting(void)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  long unaff_x19;
  uint unaff_w20;
  long unaff_x21;
  int unaff_w24;
  long lVar4;
  uint uStack0000000000000008;
  undefined4 uStack000000000000000c;
  
  uStack000000000000000c = 0;
  uStack0000000000000008 = unaff_w24;
  FUN_045dab70();
  if ((*(byte *)(unaff_x21 + 0x2c) & 1) == 0) {
    if (unaff_w20 <= *(uint *)(unaff_x21 + 8)) goto LAB_055dfd08;
    *(undefined2 *)(unaff_x19 + (long)(int)*(uint *)(unaff_x21 + 8) * 2) = 0x2f;
  }
  puVar3 = PTR_DAT_06a7ae10;
  FUN_05651144(*(undefined8 *)(unaff_x21 + 0x10),0);
  uStack0000000000000008 = *(int *)(unaff_x21 + 0x18);
  if ((int)uStack0000000000000008 < 0) {
    FUN_056265f0(0);
  }
  lVar4 = *(long *)puVar3;
  uStack000000000000000c = 0;
  if (unaff_w20 < *(int *)(unaff_x21 + 8) + ((*(byte *)(unaff_x21 + 0x2c) ^ 0xffffffff) & 1)) {
    FUN_056265f0(0);
  }
  if ((*(ushort *)(*(long *)(lVar4 + 0x20) + 0x135) & 1) == 0) {
    FUN_02e7568c();
  }
  FUN_045dab70();
  if ((*(byte *)(unaff_x21 + 0x2d) & 1) == 0) {
    if (!CARRY4(unaff_w20,~*(uint *)(unaff_x21 + 0x28))) {
LAB_055dfd08:
                    /* WARNING: Subroutine does not return */
      FUN_02e3cccc();
    }
    *(undefined2 *)(unaff_x19 + (long)(int)(unaff_w20 + ~*(uint *)(unaff_x21 + 0x28)) * 2) = 0x2f;
  }
  FUN_05651144(*(undefined8 *)(unaff_x21 + 0x20),0);
  uVar1 = *(uint *)(unaff_x21 + 0x28);
  uVar2 = uVar1;
  if ((int)uVar1 < 0) {
    FUN_056265f0(0);
    uVar2 = *(uint *)(unaff_x21 + 0x28);
  }
  lVar4 = *(long *)puVar3;
  uStack000000000000000c = 0;
  uStack0000000000000008 = uVar1;
  if (unaff_w20 < uVar2) {
    FUN_056265f0(0);
  }
  if ((*(ushort *)(*(long *)(lVar4 + 0x20) + 0x135) & 1) == 0) {
    FUN_02e7568c();
  }
  FUN_045dab70();
  return;
}


