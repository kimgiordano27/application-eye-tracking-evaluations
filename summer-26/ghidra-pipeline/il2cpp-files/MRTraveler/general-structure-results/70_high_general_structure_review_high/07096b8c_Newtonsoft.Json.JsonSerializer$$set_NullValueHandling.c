/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$set_NullValueHandling
ENTRY_POINT: 07096b8c
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializer__set_NullValueHandling(void)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint unaff_w21;
  
  puVar1 = PTR_DAT_08ea2830;
  if (unaff_w21 != 0x10000000) {
    if (0x1f < unaff_w21) {
                    /* try { // try from 07096ce0 to 07196cf7 has its CatchHandler @ 07096d2c */
      thunk_FUN_03ce5214(PTR_DAT_08e76350);
      uVar3 = thunk_FUN_03cf5234();
                    /* try { // try from 07096cf8 to 07196d1b has its CatchHandler @ 070969b8 */
      uVar4 = thunk_FUN_03ce5214(PTR_DAT_08e9d680);
      uVar5 = thunk_FUN_03ce5214(PTR_DAT_08e82ec0);
                    /* try { // try from 07096d1c to 07196d2b has its CatchHandler @ 07096d2c */
      FUN_0705df24(uVar3,uVar4,uVar5,0);
      uVar4 = thunk_FUN_03ce5214(PTR_DAT_08ea2890);
                    /* WARNING: Subroutine does not return */
      FUN_03c8f9fc(uVar3,uVar4);
    }
    if (*(int *)(*(long *)PTR_DAT_08ea2830 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    if (DAT_0941be42 == '\0') {
      FUN_03c8f898(PTR_DAT_08ea2830);
      DAT_0941be42 = '\x01';
    }
    lVar2 = *(long *)puVar1;
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
      lVar2 = *(long *)puVar1;
    }
    if (**(char **)(lVar2 + 0xb8) == '\0') {
      FUN_07096d3c();
      return;
    }
  }
  FUN_06f74138();
  return;
}


