/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$set_MissingMemberHandling
ENTRY_POINT: 055df9f4
PROGRAM: beastcraft-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerProxy__set_MissingMemberHandling(void)

{
  undefined *puVar1;
  long unaff_x19;
  uint unaff_w20;
  undefined8 *unaff_x21;
  long unaff_x22;
  long lVar2;
  
  FUN_02e3ca1c(PTR_DAT_06a7ae10);
  FUN_02e3ca1c(PTR_DAT_06a7b180);
  *(undefined1 *)(unaff_x22 + 0x642) = 1;
  FUN_05651144(*unaff_x21,0);
  if (*(int *)(unaff_x21 + 1) < 0) {
    FUN_056265f0(0);
  }
  FUN_045dab70();
  if ((*(byte *)((long)unaff_x21 + 0x1c) & 1) == 0) {
    if (unaff_w20 <= *(uint *)(unaff_x21 + 1)) {
                    /* WARNING: Subroutine does not return */
      FUN_02e3cccc();
    }
    *(undefined2 *)(unaff_x19 + (long)(int)*(uint *)(unaff_x21 + 1) * 2) = 0x2f;
  }
  puVar1 = PTR_DAT_06a7ae10;
  FUN_05651144(unaff_x21[2],0);
  if (*(int *)(unaff_x21 + 3) < 0) {
    FUN_056265f0(0);
  }
  lVar2 = *(long *)puVar1;
  if (unaff_w20 < *(int *)(unaff_x21 + 1) + ((*(byte *)((long)unaff_x21 + 0x1c) ^ 0xffffffff) & 1))
  {
    FUN_056265f0(0);
  }
  if ((*(ushort *)(*(long *)(lVar2 + 0x20) + 0x135) & 1) == 0) {
    FUN_02e7568c();
  }
  FUN_045dab70();
  return;
}


