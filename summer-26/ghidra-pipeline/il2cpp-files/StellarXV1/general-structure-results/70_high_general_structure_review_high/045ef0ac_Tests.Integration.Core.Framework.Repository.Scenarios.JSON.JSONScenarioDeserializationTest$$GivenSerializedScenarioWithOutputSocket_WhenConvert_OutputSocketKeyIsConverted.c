/*
FUNCTION_NAME: Tests.Integration.Core.Framework.Repository.Scenarios.JSON.JSONScenarioDeserializationTest$$GivenSerializedScenarioWithOutputSocket_WhenConvert_OutputSocketKeyIsConverted
ENTRY_POINT: 045ef0ac
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Tests_Integration_Core_Framework_Repository_Scenarios_JSON_JSONScenarioDeserializationTest__GivenSerializedScenarioWithOutputSocket_WhenConvert_OutputSocketKeyIsConverted
               (long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long unaff_x19;
  long *unaff_x20;
  long *plVar6;
  long *unaff_x22;
  
  if ((param_1 != 0) && (*(long *)(param_1 + 0x30) != 0)) {
    lVar3 = *unaff_x20;
    plVar6 = *(long **)(*(long *)(param_1 + 0x30) + 0x70);
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x22) {
          puVar1 = (undefined8 *)(lVar3 + (long)(*piVar5 + 1) * 0x10 + 0x138);
          goto LAB_045ef10c;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_040b1e00();
LAB_045ef10c:
    lVar3 = (*(code *)*puVar1)();
    if ((lVar3 != 0) && (uVar2 = FUN_089ca988(lVar3,0), plVar6 != (long *)0x0)) {
      (**(code **)(*plVar6 + 0x1e8))(0x42c80000,plVar6,uVar2,1,0,*(undefined8 *)(*plVar6 + 0x1f0));
      if ((*(long *)(unaff_x19 + 0x28) != 0) &&
         ((lVar3 = *(long *)(*(long *)(unaff_x19 + 0x28) + 0x30), lVar3 != 0 &&
          (plVar6 = *(long **)(lVar3 + 0x70), plVar6 != (long *)0x0)))) {
                    /* WARNING: Could not recover jumptable at 0x045ef17c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar6 + 0x1f8))(plVar6,1,*(undefined8 *)(*plVar6 + 0x200));
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


