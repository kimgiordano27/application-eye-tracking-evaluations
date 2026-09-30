/*
FUNCTION_NAME: Tests.Integration.Core.Framework.Repository.Scenarios.JSON.JSONScenarioDeserializationTest.<GivenSerializedScenarioWithFlowOutputSocket_WhenConvert_FlowOutputSocketKeyIsConverted>d__17$$MoveNext
ENTRY_POINT: 045f5c6c
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


void Tests_Integration_Core_Framework_Repository_Scenarios_JSON_JSONScenarioDeserializationTest_<GivenSerializedScenarioWithFlowOutputSocket_WhenConvert_FlowOutputSocketKeyIsConverted>d__17__MoveNext
               (void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 *puVar9;
  int *piVar10;
  undefined4 *unaff_x19;
  long *unaff_x25;
  long unaff_x26;
  undefined1 auVar11 [16];
  undefined8 in_stack_00000018;
  
  FUN_051fe21c();
  uVar1 = *(undefined8 *)(unaff_x26 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x26 + 0x28);
  uVar2 = *(undefined8 *)(unaff_x26 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x26 + 0x18);
  lVar6 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092867e0);
  FUN_04639b10(lVar6,uVar2,uVar1,uVar3,uVar4,0);
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  lVar6 = FUN_04639bf8(lVar6,0);
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  in_stack_00000018 = FUN_076f1ee4(lVar6,0);
  uVar7 = FUN_07591eb4(&stack0x00000018,0);
  if ((uVar7 & 1) == 0) {
    *unaff_x19 = 0;
    *(undefined8 *)(unaff_x19 + 10) = in_stack_00000018;
    thunk_FUN_040ec700(unaff_x19 + 10,0);
    if (*(int *)(*unaff_x25 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    FUN_04e4f298(unaff_x19 + 2,&stack0x00000018);
  }
  else {
    FUN_07591f7c(&stack0x00000018,0);
    if (unaff_x26 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    plVar8 = (long *)FUN_051fc4b0(*(undefined8 *)(unaff_x26 + 0x10),*(undefined8 *)PTR_DAT_0929b348)
    ;
    if (*(int *)(*(long *)PTR_DAT_0929add0 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    auVar11 = FUN_04a01538(*(undefined8 *)PTR_DAT_0929b320);
    uVar5 = FUN_04a00ed8(*(undefined8 *)PTR_DAT_0929b318);
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar6 = *plVar8;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_09296148) {
          puVar9 = (undefined8 *)(lVar6 + (long)(*piVar10 + 5) * 0x10 + 0x138);
          goto LAB_045f5df4;
        }
        uVar7 = uVar7 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar7 != 0);
    }
    puVar9 = (undefined8 *)FUN_040b1e00(plVar8,*(long *)PTR_DAT_09296148,5);
LAB_045f5df4:
    lVar6 = (*(code *)*puVar9)(plVar8,auVar11._0_8_,auVar11._8_8_,uVar5 & 1,puVar9[1]);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    in_stack_00000018 = FUN_076f1ee4(lVar6,0);
    uVar7 = FUN_07591eb4(&stack0x00000018,0);
    if ((uVar7 & 1) == 0) {
      *unaff_x19 = 1;
      *(undefined8 *)(unaff_x19 + 10) = in_stack_00000018;
      thunk_FUN_040ec700(unaff_x19 + 10,0);
      if (*(int *)(*unaff_x25 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      FUN_04e4f298(unaff_x19 + 2,&stack0x00000018);
    }
    else {
      FUN_07591f7c(&stack0x00000018,0);
      lVar6 = *unaff_x25;
      *unaff_x19 = 0xfffffffe;
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      FUN_0759053c(unaff_x19 + 2,0);
    }
  }
  return;
}


