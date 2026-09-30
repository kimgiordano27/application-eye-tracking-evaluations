/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$get_ReferenceLoopHandling
ENTRY_POINT: 0170c930
PROGRAM: Lovesick-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8 Newtonsoft_Json_JsonSerializerSettings__get_ReferenceLoopHandling(long *param_1)

{
  byte bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long in_x9;
  long *unaff_x19;
  long *unaff_x20;
  
  bVar1 = *(byte *)(*param_1 + 300);
  if ((bVar1 <= *(byte *)(in_x9 + 300)) &&
     (*(long *)(*(long *)(in_x9 + 200) + (ulong)bVar1 * 8 + -8) == *param_1)) {
    uVar2 = (**(code **)(*unaff_x19 + 0x188))();
    if (unaff_x20 != (long *)0x0) {
      uVar3 = (**(code **)(*unaff_x20 + 0x188))(unaff_x20,*(undefined8 *)(*unaff_x20 + 400));
      uVar2 = thunk_FUN_015fe514(uVar2,uVar3,0);
      return uVar2;
    }
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  return 0;
}


