/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$.cctor
ENTRY_POINT: 066ec88c
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializerSettings___cctor(long param_1)

{
  ulong uVar1;
  long lVar2;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x22;
  
  while( true ) {
    lVar2 = param_1;
    if (lVar2 == 0) {
      return;
    }
    if (*(long **)(lVar2 + 0x10) == (long *)0x0) break;
    uVar1 = (**(code **)(**(long **)(lVar2 + 0x10) + 0x138))();
    if ((uVar1 & 1) != 0) {
      if (lVar2 == *unaff_x20) {
        *unaff_x20 = *(long *)(lVar2 + 0x20);
      }
      else {
        if (unaff_x22 == 0) break;
        *(undefined8 *)(unaff_x22 + 0x20) = *(undefined8 *)(lVar2 + 0x20);
      }
      thunk_FUN_03afed3c();
      *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + -1;
      return;
    }
    param_1 = *(long *)(lVar2 + 0x20);
    unaff_x22 = lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


