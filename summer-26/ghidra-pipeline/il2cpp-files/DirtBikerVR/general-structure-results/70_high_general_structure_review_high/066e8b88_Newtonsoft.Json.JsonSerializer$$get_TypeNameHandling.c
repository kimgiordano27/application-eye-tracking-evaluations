/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$get_TypeNameHandling
ENTRY_POINT: 066e8b88
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


undefined8 Newtonsoft_Json_JsonSerializer__get_TypeNameHandling(long *param_1,long *param_2)

{
  byte bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x21;
  
  if ((*(byte *)(unaff_x21 + 0x6f5) & 1) == 0) {
    FUN_03a8a718(PTR_DAT_084a79a8);
    *(undefined1 *)(unaff_x21 + 0x6f5) = 1;
  }
  if (param_2 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)PTR_DAT_084a79a8 + 0x130);
    if ((bVar1 <= *(byte *)(*param_2 + 0x130)) &&
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_084a79a8))
    {
      uVar2 = (**(code **)(*param_1 + 0x208))(param_1,*(undefined8 *)(*param_1 + 0x210));
      uVar3 = (**(code **)(*param_2 + 0x208))(param_2,*(undefined8 *)(*param_2 + 0x210));
      uVar2 = thunk_FUN_065cbffc(uVar2,uVar3,0);
      return uVar2;
    }
  }
  return 0;
}


