/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$PopulateInternal
ENTRY_POINT: 0590876c
PROGRAM: waitwhat-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerProxy__PopulateInternal(void)

{
  undefined *puVar1;
  long unaff_x19;
  uint unaff_w20;
  undefined8 *unaff_x21;
  long unaff_x22;
  long lVar2;
  
  FUN_03188a78();
  FUN_03188a78(PTR_DAT_070fbe70);
                    /* try { // try from 05908784 to 05a087ab has its CatchHandler @ 0590889c */
  FUN_03188a78(PTR_DAT_070fc128);
  *(undefined1 *)(unaff_x22 + 0x85e) = 1;
  FUN_0597a8f4(*unaff_x21,0);
  if (*(int *)(unaff_x21 + 1) < 0) {
    FUN_05950030(0);
  }
  FUN_04aad4c0();
  if ((*(byte *)((long)unaff_x21 + 0x1c) & 1) == 0) {
    if (unaff_w20 <= *(uint *)(unaff_x21 + 1)) {
                    /* WARNING: Subroutine does not return */
      FUN_03188ce0();
    }
    *(undefined2 *)(unaff_x19 + (long)(int)*(uint *)(unaff_x21 + 1) * 2) = 0x2f;
  }
  puVar1 = PTR_DAT_070fbe70;
  FUN_0597a8f4(unaff_x21[2],0);
  if (*(int *)(unaff_x21 + 3) < 0) {
    FUN_05950030(0);
  }
  lVar2 = *(long *)puVar1;
  if (unaff_w20 < *(int *)(unaff_x21 + 1) + ((*(byte *)((long)unaff_x21 + 0x1c) ^ 0xffffffff) & 1))
  {
    FUN_05950030(0);
  }
  if ((*(ushort *)(*(long *)(lVar2 + 0x20) + 0x135) & 1) == 0) {
    FUN_031c09d4();
  }
  FUN_04aad4c0();
  return;
}


