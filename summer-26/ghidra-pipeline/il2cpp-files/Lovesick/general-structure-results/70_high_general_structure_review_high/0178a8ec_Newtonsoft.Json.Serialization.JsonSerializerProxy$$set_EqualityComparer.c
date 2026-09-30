/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$set_EqualityComparer
ENTRY_POINT: 0178a8ec
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


undefined8 Newtonsoft_Json_Serialization_JsonSerializerProxy__set_EqualityComparer(ulong param_1)

{
  uint uVar1;
  long *plVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long *unaff_x19;
  uint uVar6;
  
  if ((param_1 & 1) != 0) {
    plVar2 = (long *)FUN_0178a9d8();
    if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0178a910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)(*plVar2 + 0x298))(plVar2,*(undefined8 *)(*plVar2 + 0x2a0));
      return uVar3;
    }
LAB_0178a9c0:
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  uVar4 = (**(code **)(*unaff_x19 + 0x3c8))();
  if ((uVar4 & 1) == 0) {
    uVar4 = (**(code **)(*unaff_x19 + 1000))();
    if ((uVar4 & 1) != 0) {
      lVar5 = (**(code **)(*unaff_x19 + 0x488))();
      if (lVar5 == 0) goto LAB_0178a9c0;
      uVar1 = *(uint *)(lVar5 + 0x18);
      if (0 < (int)uVar1) {
        uVar6 = 0;
        do {
          if (uVar1 <= uVar6) {
                    /* WARNING: Subroutine does not return */
            FUN_00da5194();
          }
          plVar2 = *(long **)(lVar5 + (long)(int)uVar6 * 8 + 0x20);
          if (plVar2 == (long *)0x0) goto LAB_0178a9c0;
          uVar4 = (**(code **)(*plVar2 + 0x298))(plVar2,*(undefined8 *)(*plVar2 + 0x2a0));
          if ((uVar4 & 1) != 0) goto LAB_0178a92c;
          uVar1 = *(uint *)(lVar5 + 0x18);
          uVar6 = uVar6 + 1;
        } while ((int)uVar6 < (int)uVar1);
      }
    }
    uVar3 = 0;
  }
  else {
LAB_0178a92c:
    uVar3 = 1;
  }
  return uVar3;
}


