/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$get_CheckAdditionalContent
ENTRY_POINT: 0178b02c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8
Newtonsoft_Json_Serialization_JsonSerializerProxy__get_CheckAdditionalContent
          (long param_1,undefined8 param_2)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  uint uVar6;
  
  lVar2 = (**(code **)(param_1 + 0x4b8))(param_2,*(undefined8 *)(param_1 + 0x4c0));
  if (lVar2 == 0) {
LAB_0178b0a8:
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  uVar1 = *(uint *)(lVar2 + 0x18);
  if (0 < (int)uVar1) {
    uVar6 = 0;
    lVar5 = lVar2;
    do {
      if (uVar1 <= uVar6) {
                    /* WARNING: Subroutine does not return */
        FUN_00da5194(lVar5);
      }
      plVar3 = *(long **)(lVar2 + (long)(int)uVar6 * 8 + 0x20);
      if (plVar3 == (long *)0x0) goto LAB_0178b0a8;
      uVar4 = (**(code **)(*plVar3 + 0x2c8))();
      if ((uVar4 & 1) == 0) {
        return 0;
      }
      uVar1 = *(uint *)(lVar2 + 0x18);
      uVar6 = uVar6 + 1;
      lVar5 = 1;
    } while ((int)uVar6 < (int)uVar1);
  }
  return 1;
}


