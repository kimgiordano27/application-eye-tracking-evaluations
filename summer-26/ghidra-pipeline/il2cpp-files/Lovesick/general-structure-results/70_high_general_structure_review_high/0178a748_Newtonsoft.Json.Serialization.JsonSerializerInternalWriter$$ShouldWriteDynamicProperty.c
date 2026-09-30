/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$ShouldWriteDynamicProperty
ENTRY_POINT: 0178a748
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


undefined8
Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__ShouldWriteDynamicProperty(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  long *unaff_x19;
  undefined8 uVar8;
  
  uVar4 = (**(code **)(param_1 + 0x4d8))();
  if ((uVar4 >> 0xd & 1) == 0) {
    plVar5 = (long *)(**(code **)(*unaff_x19 + 0x348))();
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    uVar6 = FUN_0178a838();
    puVar3 = StringLiteral_5172;
    puVar2 = Method_TMPro_TMP_TextProcessingStack<float>__ctor__;
    puVar1 = PTR_DAT_033ed430;
    plVar7 = (long *)(uVar6 & 1);
    while (plVar7 != (long *)0x0) {
      while( true ) {
        uVar8 = *(undefined8 *)puVar3;
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        plVar7 = (long *)FUN_01780344(uVar8);
        if (plVar5 == plVar7) goto LAB_0178a820;
        uVar8 = *(undefined8 *)puVar1;
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        plVar7 = (long *)FUN_01780344(uVar8);
        if (plVar5 == plVar7) goto LAB_0178a820;
        plVar5 = (long *)(**(code **)(*plVar5 + 0x888))(plVar5,*(undefined8 *)(*plVar5 + 0x890));
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) break;
        if (plVar5 == (long *)0x0) goto LAB_0178a818;
      }
      thunk_FUN_00d32864(*(long *)puVar2);
      plVar7 = plVar5;
    }
LAB_0178a818:
    uVar8 = 0;
  }
  else {
LAB_0178a820:
    uVar8 = 1;
  }
  return uVar8;
}


