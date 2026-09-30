/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$get_DefaultValueHandling
ENTRY_POINT: 0178a934
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


undefined8 Newtonsoft_Json_Serialization_JsonSerializerProxy__get_DefaultValueHandling(void)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  long *unaff_x19;
  uint uVar5;
  
  uVar2 = (**(code **)(*unaff_x19 + 1000))();
  if ((uVar2 & 1) != 0) {
    lVar3 = (**(code **)(*unaff_x19 + 0x488))();
    if (lVar3 == 0) {
LAB_0178a9c0:
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    uVar1 = *(uint *)(lVar3 + 0x18);
    if (0 < (int)uVar1) {
      uVar5 = 0;
      do {
        if (uVar1 <= uVar5) {
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        plVar4 = *(long **)(lVar3 + (long)(int)uVar5 * 8 + 0x20);
        if (plVar4 == (long *)0x0) goto LAB_0178a9c0;
        uVar2 = (**(code **)(*plVar4 + 0x298))(plVar4,*(undefined8 *)(*plVar4 + 0x2a0));
        if ((uVar2 & 1) != 0) {
          return 1;
        }
        uVar1 = *(uint *)(lVar3 + 0x18);
        uVar5 = uVar5 + 1;
      } while ((int)uVar5 < (int)uVar1);
    }
  }
  return 0;
}


