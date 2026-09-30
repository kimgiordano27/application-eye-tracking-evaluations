/*
FUNCTION_NAME: Tests.Integration.Core.Framework.Repository.Scenarios.JSON.JSONScenarioDeserializationTest.<GivenSerializedScenarioWithNode_WhenConvert_NodeIsConverted>d__4$$SetStateMachine
ENTRY_POINT: 045fb7d0
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Tests_Integration_Core_Framework_Repository_Scenarios_JSON_JSONScenarioDeserializationTest_<GivenSerializedScenarioWithNode_WhenConvert_NodeIsConverted>d__4__SetStateMachine
               (ushort *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  int *piVar8;
  long unaff_x19;
  long *plVar9;
  long *unaff_x25;
  
  if ((*param_1 & 1) == 0) {
    FUN_040b1acc();
  }
  FUN_051fe834();
  puVar3 = PTR_DAT_092a12e0;
  lVar7 = *(long *)(unaff_x19 + 0x40);
  if ((lVar7 != 0) && (plVar9 = *(long **)(unaff_x19 + 0x68), plVar9 != (long *)0x0)) {
    lVar5 = *plVar9;
    uVar1 = *(undefined8 *)(lVar7 + 0x10);
    uVar2 = *(undefined8 *)(lVar7 + 0x18);
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_09295880) {
          puVar4 = (undefined8 *)(lVar5 + (long)(*piVar8 + 0xe) * 0x10 + 0x138);
          goto LAB_045fb874;
        }
        uVar6 = uVar6 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)FUN_040b1e00(plVar9,*(long *)PTR_DAT_09295880,0xe);
LAB_045fb874:
    (*(code *)*puVar4)(plVar9,uVar1,uVar2,puVar4[1]);
    plVar9 = (long *)FUN_051fcd04(*(undefined8 *)(unaff_x19 + 0x10),1,*(undefined8 *)puVar3);
    if (plVar9 != (long *)0x0) {
      lVar7 = *plVar9;
      uVar1 = *(undefined8 *)(unaff_x19 + 0x50);
      uVar2 = *(undefined8 *)(unaff_x19 + 0x58);
      uVar6 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar6 != 0) {
        piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *unaff_x25) {
            puVar4 = (undefined8 *)(lVar7 + (long)(*piVar8 + 0xe) * 0x10 + 0x138);
            goto LAB_045fb8f4;
          }
          uVar6 = uVar6 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar6 != 0);
      }
      puVar4 = (undefined8 *)FUN_040b1e00(plVar9,*unaff_x25,0xe);
LAB_045fb8f4:
                    /* WARNING: Could not recover jumptable at 0x045fb914. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar4)(plVar9,uVar1,uVar2,puVar4[1]);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


