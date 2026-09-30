/*
FUNCTION_NAME: Tests.Integration.Core.Framework.Repository.Scenarios.JSON.JSONScenarioDeserializationTest.<GivenSerializedScenarioWithFloatInputSocket_WhenConvert_FloatInputSocketIsConverted>d__23$$SetStateMachine
ENTRY_POINT: 045f4f28
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


void Tests_Integration_Core_Framework_Repository_Scenarios_JSON_JSONScenarioDeserializationTest_<GivenSerializedScenarioWithFloatInputSocket_WhenConvert_FloatInputSocketIsConverted>d__23__SetStateMachine
               (void)

{
  uint uVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  undefined4 *unaff_x19;
  long *unaff_x25;
  long unaff_x26;
  undefined1 auVar7 [16];
  undefined8 in_stack_00000018;
  
  FUN_07591f7c();
  if (unaff_x26 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  plVar2 = (long *)FUN_051fc4b0(*(undefined8 *)(unaff_x26 + 0x10),*(undefined8 *)PTR_DAT_0929b348);
  if (*(int *)(*(long *)PTR_DAT_0929add0 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  auVar7 = FUN_04a01538(*(undefined8 *)PTR_DAT_0929b320);
  uVar1 = FUN_04a00ed8(*(undefined8 *)PTR_DAT_0929b318);
  if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  lVar4 = *plVar2;
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_09296148) {
        puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 5) * 0x10 + 0x138);
        goto LAB_045f5030;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar3 = (undefined8 *)FUN_040b1e00(plVar2,*(long *)PTR_DAT_09296148,5);
LAB_045f5030:
  lVar4 = (*(code *)*puVar3)(plVar2,auVar7._0_8_,auVar7._8_8_,uVar1 & 1,puVar3[1]);
  if (lVar4 != 0) {
    in_stack_00000018 = FUN_076f1ee4(lVar4,0);
    uVar5 = FUN_07591eb4(&stack0x00000018,0);
    if ((uVar5 & 1) == 0) {
      *unaff_x19 = 1;
      *(undefined8 *)(unaff_x19 + 10) = in_stack_00000018;
      thunk_FUN_040ec700(unaff_x19 + 10,0);
      if (*(int *)(*unaff_x25 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      FUN_04e4f1a0(unaff_x19 + 2,&stack0x00000018);
    }
    else {
      FUN_07591f7c(&stack0x00000018,0);
      lVar4 = *unaff_x25;
      *unaff_x19 = 0xfffffffe;
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      FUN_0759053c(unaff_x19 + 2,0);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


