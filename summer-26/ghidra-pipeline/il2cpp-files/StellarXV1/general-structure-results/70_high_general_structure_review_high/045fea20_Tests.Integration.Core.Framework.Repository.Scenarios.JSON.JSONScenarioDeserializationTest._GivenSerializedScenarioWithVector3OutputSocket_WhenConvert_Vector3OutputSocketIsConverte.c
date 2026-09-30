/*
FUNCTION_NAME: Tests.Integration.Core.Framework.Repository.Scenarios.JSON.JSONScenarioDeserializationTest.<GivenSerializedScenarioWithVector3OutputSocket_WhenConvert_Vector3OutputSocketIsConverted>d__38$$MoveNext
ENTRY_POINT: 045fea20
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Tests_Integration_Core_Framework_Repository_Scenarios_JSON_JSONScenarioDeserializationTest_<GivenSerializedScenarioWithVector3OutputSocket_WhenConvert_Vector3OutputSocketIsConverted>d__38__MoveNext
               (void)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  long in_x10;
  int *piVar4;
  long unaff_x19;
  long *plVar5;
  undefined8 uVar6;
  
  plVar5 = *(long **)(unaff_x19 + 0x68);
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  lVar2 = *plVar5;
  uVar6 = *(undefined8 *)(in_x10 + 0x20);
  uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_09295880) {
        puVar1 = (undefined8 *)(lVar2 + (long)(*piVar4 + 0xb) * 0x10 + 0x138);
        goto LAB_045fea84;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar3 != 0);
  }
  puVar1 = (undefined8 *)FUN_040b1e00(plVar5,*(long *)PTR_DAT_09295880,0xb);
LAB_045fea84:
                    /* WARNING: Could not recover jumptable at 0x045fea98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar1)(plVar5,uVar6,puVar1[1]);
  return;
}


