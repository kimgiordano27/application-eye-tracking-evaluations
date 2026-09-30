/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$get_NullValueHandling
ENTRY_POINT: 066e8de0
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializer__get_NullValueHandling(void)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int in_w8;
  long unaff_x19;
  long *unaff_x20;
  
  if (in_w8 == 0) {
    thunk_FUN_03ae8be4();
  }
  uVar1 = FUN_067690d8();
  if ((uVar1 & 1) == 0) {
    if (unaff_x20 != (long *)0x0) {
      uVar2 = (**(code **)(*unaff_x20 + 0x2e8))();
      *(undefined8 *)(unaff_x19 + 0x10) = uVar2;
      thunk_FUN_03afed3c((undefined8 *)(unaff_x19 + 0x10),uVar2);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  thunk_FUN_03af1434(PTR_DAT_08491298);
  uVar2 = thunk_FUN_03ac74bc();
  uVar3 = thunk_FUN_03af1434(PTR_DAT_08492520);
  FUN_066af6a0(uVar2,uVar3,0);
  uVar3 = thunk_FUN_03af1434(PTR_DAT_084a7a38);
                    /* WARNING: Subroutine does not return */
  FUN_03a8a884(uVar2,uVar3);
}


