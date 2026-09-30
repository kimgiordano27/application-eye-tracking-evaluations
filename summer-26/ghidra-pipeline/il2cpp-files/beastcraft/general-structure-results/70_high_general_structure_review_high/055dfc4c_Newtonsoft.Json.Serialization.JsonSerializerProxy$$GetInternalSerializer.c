/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$GetInternalSerializer
ENTRY_POINT: 055dfc4c
PROGRAM: beastcraft-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


void Newtonsoft_Json_Serialization_JsonSerializerProxy__GetInternalSerializer(void)

{
  uint uVar1;
  long unaff_x19;
  uint unaff_w20;
  long unaff_x21;
  long lVar2;
  long *unaff_x24;
  undefined4 uStack000000000000000c;
  
  FUN_045dab70();
  if ((*(byte *)(unaff_x21 + 0x2d) & 1) == 0) {
    if (!CARRY4(unaff_w20,~*(uint *)(unaff_x21 + 0x28))) {
                    /* WARNING: Subroutine does not return */
      FUN_02e3cccc();
    }
    *(undefined2 *)(unaff_x19 + (long)(int)(unaff_w20 + ~*(uint *)(unaff_x21 + 0x28)) * 2) = 0x2f;
  }
  FUN_05651144(*(undefined8 *)(unaff_x21 + 0x20),0);
  uVar1 = *(uint *)(unaff_x21 + 0x28);
  if ((int)uVar1 < 0) {
    FUN_056265f0(0);
    uVar1 = *(uint *)(unaff_x21 + 0x28);
  }
  lVar2 = *unaff_x24;
  uStack000000000000000c = 0;
  if (unaff_w20 < uVar1) {
    FUN_056265f0(0);
  }
  if ((*(ushort *)(*(long *)(lVar2 + 0x20) + 0x135) & 1) == 0) {
    FUN_02e7568c();
  }
  FUN_045dab70();
  return;
}


