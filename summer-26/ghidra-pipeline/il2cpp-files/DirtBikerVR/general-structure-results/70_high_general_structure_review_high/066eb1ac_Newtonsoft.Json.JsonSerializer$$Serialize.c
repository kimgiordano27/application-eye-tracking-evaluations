/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$Serialize
ENTRY_POINT: 066eb1ac
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


void Newtonsoft_Json_JsonSerializer__Serialize(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long *unaff_x19;
  
  lVar1 = thunk_FUN_03ac70f4(*(undefined8 *)(param_1 + 0x68));
  if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  if ((lVar1 != 0) &&
     (lVar2 = thunk_FUN_03ac73c0(lVar1,*(undefined8 *)(*unaff_x19 + 0x40)), lVar2 == 0)) {
    uVar3 = thunk_FUN_03ad4f64();
                    /* WARNING: Subroutine does not return */
    FUN_03a8a884(uVar3,0);
  }
  if ((int)unaff_x19[3] != 0) {
    unaff_x19[4] = lVar1;
    thunk_FUN_03afed3c(unaff_x19 + 4,lVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c8();
}


