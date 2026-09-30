/*
FUNCTION_NAME: Newtonsoft.Json.JsonTextReader$$ParsePostValueAsync
ENTRY_POINT: 066ecf90
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


bool Newtonsoft_Json_JsonTextReader__ParsePostValueAsync(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  if (*(int *)(param_2 + 0x20) == *(int *)(param_1 + 0x18)) {
    if (*(char *)(param_2 + 0x25) == '\0') {
      lVar3 = *(long *)(param_2 + 0x18);
      if (lVar3 != 0) {
        *(long *)(param_2 + 0x18) = *(long *)(lVar3 + 0x20);
        thunk_FUN_03afed3c();
      }
    }
    else {
      *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_1 + 0x10);
      thunk_FUN_03afed3c((undefined8 *)(param_2 + 0x18));
      *(undefined1 *)(param_2 + 0x25) = 0;
    }
    return *(long *)(param_2 + 0x18) != 0;
  }
  thunk_FUN_03af1434(PTR_DAT_08486870);
  uVar1 = thunk_FUN_03ac74bc();
  uVar2 = thunk_FUN_03af1434(PTR_DAT_08495550);
  FUN_06750b44(uVar1,uVar2,0);
  uVar2 = thunk_FUN_03af1434(PTR_DAT_084a7c40);
                    /* WARNING: Subroutine does not return */
  FUN_03a8a884(uVar1,uVar2);
}


