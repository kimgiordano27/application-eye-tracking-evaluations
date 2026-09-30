/*
FUNCTION_NAME: Tests.Integration.Core.Framework.Repository.Scenarios.JSON.JSONScenarioDeserializationTest.<>c__DisplayClass22_0$$<GivenSerializedScenarioWithStringInputSocket_WhenConvert_StringInputSocketIsConverted>b__0
ENTRY_POINT: 045efca0
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Tests_Integration_Core_Framework_Repository_Scenarios_JSON_JSONScenarioDeserializationTest_<>c__DisplayClass22_0__<GivenSerializedScenarioWithStringInputSocket_WhenConvert_StringInputSocketIsConverted>b__0
               (void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  undefined4 *unaff_x19;
  long *unaff_x25;
  long unaff_x26;
  undefined8 in_stack_00000018;
  
  uVar1 = *(undefined8 *)(unaff_x26 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x26 + 0x28);
  uVar2 = *(undefined8 *)(unaff_x26 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x26 + 0x18);
  lVar5 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092867e0);
  FUN_04639b10(lVar5,uVar2,uVar1,uVar3,uVar4,0);
  if (*(long *)(unaff_x26 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  if (lVar5 != 0) {
    lVar5 = FUN_0463a8dc(lVar5,*(undefined8 *)(*(long *)(unaff_x26 + 0x38) + 0x18),0);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    in_stack_00000018 = FUN_06649f2c(lVar5,*(undefined8 *)PTR_DAT_09293af8);
    uVar6 = FUN_065f12f0(&stack0x00000018,*(undefined8 *)PTR_DAT_09293af0);
    if ((uVar6 & 1) == 0) {
      *unaff_x19 = 0;
      *(undefined8 *)(unaff_x19 + 10) = in_stack_00000018;
      thunk_FUN_040ec700(unaff_x19 + 10,0);
      if (*(int *)(*unaff_x25 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      FUN_04e455a8(unaff_x19 + 2,&stack0x00000018);
    }
    else {
      lVar5 = FUN_065f1330(&stack0x00000018,*(undefined8 *)PTR_DAT_09293ae8);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      FUN_07891318(*(char *)(lVar5 + 0x10) == '\0',0);
      lVar5 = *unaff_x25;
      *unaff_x19 = 0xfffffffe;
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      FUN_0759053c(unaff_x19 + 2,0);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


