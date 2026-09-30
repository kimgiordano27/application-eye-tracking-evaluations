/*
FUNCTION_NAME: Tests.Integration.Core.Framework.Repository.Scenarios.JSON.JSONScenarioDeserializationTest.<GivenSerializedFlowsComponent_WhenConvert_FlowsComponentIsConverted>d__9$$MoveNext
ENTRY_POINT: 045f19b8
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


void Tests_Integration_Core_Framework_Repository_Scenarios_JSON_JSONScenarioDeserializationTest_<GivenSerializedFlowsComponent_WhenConvert_FlowsComponentIsConverted>d__9__MoveNext
               (undefined8 param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined4 in_w9;
  ulong uVar4;
  int *piVar5;
  undefined4 *unaff_x19;
  undefined8 uVar6;
  long *unaff_x25;
  long *unaff_x26;
  long unaff_x27;
  undefined8 uStack0000000000000018;
  
  *unaff_x19 = in_w9;
  uStack0000000000000018 = param_1;
  FUN_065f1330(&stack0x00000018,*(undefined8 *)PTR_DAT_09293ae8);
  if (unaff_x27 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  plVar1 = (long *)FUN_051fcb28(*(undefined8 *)(unaff_x27 + 0x20),*(undefined8 *)PTR_DAT_092a0f68);
  if (*(long *)(unaff_x27 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  lVar3 = *plVar1;
  uVar6 = *(undefined8 *)(*(long *)(unaff_x27 + 0x38) + 0x18);
  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == *unaff_x26) {
        puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 2) * 0x10 + 0x138);
        goto LAB_045f1be8;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar2 = (undefined8 *)FUN_040b1e00(plVar1,*unaff_x26,2);
LAB_045f1be8:
  (*(code *)*puVar2)(plVar1,0,uVar6,puVar2[1]);
  lVar3 = *unaff_x25;
  *unaff_x19 = 0xfffffffe;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  FUN_0759053c(unaff_x19 + 2,0);
  return;
}


