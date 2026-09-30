/*
FUNCTION_NAME: Tests.Integration.Core.Framework.Repository.Scenarios.JSON.JSONScenarioDeserializationTest.<GivenSerializedBasicEmptyScenario_WhenConvert_ScenarioIsConverted>d__3$$MoveNext
ENTRY_POINT: 045f0f28
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


void Tests_Integration_Core_Framework_Repository_Scenarios_JSON_JSONScenarioDeserializationTest_<GivenSerializedBasicEmptyScenario_WhenConvert_ScenarioIsConverted>d__3__MoveNext
               (long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  undefined4 *unaff_x19;
  long lVar7;
  long *unaff_x25;
  long unaff_x26;
  undefined8 in_stack_00000018;
  
  uVar3 = (**(code **)(param_1 + 0x138))();
  uVar4 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_0929b338);
  FUN_05688af4();
  lVar7 = *(long *)PTR_DAT_0929b328;
  lVar6 = *(long *)(lVar7 + 0x38);
  if (lVar6 == 0) {
    FUN_040b1b28(lVar7);
    lVar6 = *(long *)(lVar7 + 0x38);
  }
  lVar6 = *(long *)(lVar6 + 0x10);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_040b1acc();
  }
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  lVar6 = *(long *)(*(long *)(lVar7 + 0x38) + 0x10);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_040b1acc();
  }
  FUN_051fd204(uVar3,uVar4,**(undefined8 **)(lVar6 + 0xb8),*(undefined8 *)PTR_DAT_0929b350);
  uVar3 = *(undefined8 *)(unaff_x26 + 0x20);
  uVar1 = *(undefined8 *)(unaff_x26 + 0x28);
  uVar4 = *(undefined8 *)(unaff_x26 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x26 + 0x18);
  lVar6 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092867e0);
  FUN_04639b10(lVar6,uVar4,uVar3,uVar1,uVar2,0);
  if (*(long *)(unaff_x26 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  lVar6 = FUN_0463a8dc(lVar6,*(undefined8 *)(*(long *)(unaff_x26 + 0x38) + 0x18),0);
  if (lVar6 != 0) {
    in_stack_00000018 = FUN_06649f2c(lVar6,*(undefined8 *)PTR_DAT_09293af8);
    uVar5 = FUN_065f12f0(&stack0x00000018,*(undefined8 *)PTR_DAT_09293af0);
    if ((uVar5 & 1) == 0) {
      *unaff_x19 = 0;
      *(undefined8 *)(unaff_x19 + 10) = in_stack_00000018;
      thunk_FUN_040ec700(unaff_x19 + 10,0);
      if (*(int *)(*unaff_x25 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      FUN_04e4571c(unaff_x19 + 2,&stack0x00000018);
    }
    else {
      lVar6 = FUN_065f1330(&stack0x00000018,*(undefined8 *)PTR_DAT_09293ae8);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      FUN_07891318(*(undefined1 *)(lVar6 + 0x10),0);
      lVar6 = *unaff_x25;
      *unaff_x19 = 0xfffffffe;
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      FUN_0759053c(unaff_x19 + 2,0);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


