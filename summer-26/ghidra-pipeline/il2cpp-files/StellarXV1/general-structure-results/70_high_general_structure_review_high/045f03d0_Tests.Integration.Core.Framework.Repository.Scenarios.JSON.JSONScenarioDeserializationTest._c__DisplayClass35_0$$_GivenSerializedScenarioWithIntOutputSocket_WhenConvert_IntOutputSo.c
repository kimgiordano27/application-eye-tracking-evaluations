/*
FUNCTION_NAME: Tests.Integration.Core.Framework.Repository.Scenarios.JSON.JSONScenarioDeserializationTest.<>c__DisplayClass35_0$$<GivenSerializedScenarioWithIntOutputSocket_WhenConvert_IntOutputSocketIsConverted>b__0
ENTRY_POINT: 045f03d0
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


void Tests_Integration_Core_Framework_Repository_Scenarios_JSON_JSONScenarioDeserializationTest_<>c__DisplayClass35_0__<GivenSerializedScenarioWithIntOutputSocket_WhenConvert_IntOutputSocketIsConverted>b__0
               (long param_1)

{
  long lVar1;
  ulong uVar2;
  int *in_x10;
  undefined4 *unaff_x19;
  long *unaff_x25;
  undefined8 in_stack_00000018;
  
  lVar1 = (**(code **)(param_1 + (long)(*in_x10 + 5) * 0x10 + 0x138))();
  if (lVar1 != 0) {
    in_stack_00000018 = FUN_076f1ee4(lVar1,0);
    uVar2 = FUN_07591eb4(&stack0x00000018,0);
    if ((uVar2 & 1) == 0) {
      *unaff_x19 = 1;
      *(undefined8 *)(unaff_x19 + 0xe) = in_stack_00000018;
      thunk_FUN_040ec700(unaff_x19 + 0xe,0);
      if (*(int *)(*unaff_x25 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      FUN_04e4edc0(unaff_x19 + 2,&stack0x00000018);
    }
    else {
      FUN_07591f7c(&stack0x00000018,0);
      *(undefined8 *)(unaff_x19 + 10) = 0;
      *unaff_x19 = 0xfffffffe;
      thunk_FUN_040ec700(unaff_x19 + 10,0);
      if (*(int *)(*unaff_x25 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      FUN_0759053c(unaff_x19 + 2,0);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


