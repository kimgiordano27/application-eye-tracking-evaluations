/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$set_TypeNameHandling
ENTRY_POINT: 066e8b90
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


undefined8 Newtonsoft_Json_JsonSerializer__set_TypeNameHandling(void)

{
  byte bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  
  if ((*(byte *)(unaff_x21 + 0x6f5) & 1) == 0) {
    FUN_03a8a718(PTR_DAT_084a79a8);
    *(undefined1 *)(unaff_x21 + 0x6f5) = 1;
  }
  if (unaff_x19 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)PTR_DAT_084a79a8 + 0x130);
    if ((bVar1 <= *(byte *)(*unaff_x19 + 0x130)) &&
       (*(long *)(*(long *)(*unaff_x19 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_084a79a8)
       ) {
      uVar2 = (**(code **)(*unaff_x20 + 0x208))();
      uVar3 = (**(code **)(*unaff_x19 + 0x208))();
      uVar2 = thunk_FUN_065cbffc(uVar2,uVar3,0);
      return uVar2;
    }
  }
  return 0;
}


