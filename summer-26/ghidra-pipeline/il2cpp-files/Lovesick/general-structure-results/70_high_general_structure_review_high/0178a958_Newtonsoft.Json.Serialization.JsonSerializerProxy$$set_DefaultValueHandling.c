/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$set_DefaultValueHandling
ENTRY_POINT: 0178a958
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
Newtonsoft_Json_Serialization_JsonSerializerProxy__set_DefaultValueHandling
          (long param_1,undefined8 param_2)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  code *in_x9;
  uint uVar5;
  
  lVar2 = (*in_x9)(param_2,*(undefined8 *)(param_1 + 0x490));
  if (lVar2 != 0) {
    uVar1 = *(uint *)(lVar2 + 0x18);
    if (0 < (int)uVar1) {
      uVar5 = 0;
      do {
        if (uVar1 <= uVar5) {
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        plVar3 = *(long **)(lVar2 + (long)(int)uVar5 * 8 + 0x20);
        if (plVar3 == (long *)0x0) goto LAB_0178a9c0;
        uVar4 = (**(code **)(*plVar3 + 0x298))(plVar3,*(undefined8 *)(*plVar3 + 0x2a0));
        if ((uVar4 & 1) != 0) {
          return 1;
        }
        uVar1 = *(uint *)(lVar2 + 0x18);
        uVar5 = uVar5 + 1;
      } while ((int)uVar5 < (int)uVar1);
    }
    return 0;
  }
LAB_0178a9c0:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


