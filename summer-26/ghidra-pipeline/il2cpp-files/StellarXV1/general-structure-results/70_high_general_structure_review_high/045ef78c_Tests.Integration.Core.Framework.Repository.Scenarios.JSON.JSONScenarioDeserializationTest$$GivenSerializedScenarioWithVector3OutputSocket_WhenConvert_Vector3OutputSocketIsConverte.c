/*
FUNCTION_NAME: Tests.Integration.Core.Framework.Repository.Scenarios.JSON.JSONScenarioDeserializationTest$$GivenSerializedScenarioWithVector3OutputSocket_WhenConvert_Vector3OutputSocketIsConverted
ENTRY_POINT: 045ef78c
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


void Tests_Integration_Core_Framework_Repository_Scenarios_JSON_JSONScenarioDeserializationTest__GivenSerializedScenarioWithVector3OutputSocket_WhenConvert_Vector3OutputSocketIsConverted
               (code *param_1)

{
  long lVar1;
  ulong uVar2;
  undefined4 *unaff_x19;
  long *unaff_x25;
  undefined8 in_stack_00000018;
  
  lVar1 = (*param_1)();
  if (lVar1 != 0) {
    in_stack_00000018 = FUN_076f1ee4(lVar1,0);
    uVar2 = FUN_07591eb4(&stack0x00000018,0);
    if ((uVar2 & 1) == 0) {
      *unaff_x19 = 1;
      *(undefined8 *)(unaff_x19 + 0xc) = in_stack_00000018;
      thunk_FUN_040ec700(unaff_x19 + 0xc,0);
      if (*(int *)(*unaff_x25 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      FUN_04e4ed44(unaff_x19 + 2,&stack0x00000018);
    }
    else {
      FUN_07591f7c(&stack0x00000018,0);
      lVar1 = *unaff_x25;
      *unaff_x19 = 0xfffffffe;
      if (*(int *)(lVar1 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      FUN_0759053c(unaff_x19 + 2,0);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


