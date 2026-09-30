/*
FUNCTION_NAME: Tests.Integration.Core.Framework.Repository.Scenarios.JSON.JSONScenarioDeserializationTest.<GivenSerializedComponent_WhenConvert_FlowsComponentIsConverted>d__10$$MoveNext
ENTRY_POINT: 045f1474
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


void Tests_Integration_Core_Framework_Repository_Scenarios_JSON_JSONScenarioDeserializationTest_<GivenSerializedComponent_WhenConvert_FlowsComponentIsConverted>d__10__MoveNext
               (void)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  int *piVar6;
  undefined4 *unaff_x19;
  undefined8 uVar7;
  long *unaff_x25;
  long unaff_x26;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000028;
  
  uVar1 = FUN_065f12f0(&stack0x00000028);
  if ((uVar1 & 1) == 0) {
    *unaff_x19 = 0;
    *(undefined8 *)(unaff_x19 + 10) = in_stack_00000028;
    thunk_FUN_040ec700(unaff_x19 + 10,0);
    if (*(int *)(*unaff_x25 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    FUN_04e45798(unaff_x19 + 2,&stack0x00000028);
  }
  else {
    FUN_065f1330(&stack0x00000028,*(undefined8 *)PTR_DAT_09293ae8);
    if (unaff_x26 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    plVar2 = (long *)FUN_051fcb28(*(undefined8 *)(unaff_x26 + 0x20),*(undefined8 *)PTR_DAT_092a0f68)
    ;
    lVar3 = *(long *)(unaff_x26 + 0x38);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    uVar7 = *(undefined8 *)(lVar3 + 0x18);
    uVar4 = FUN_046e04f0(lVar3,0);
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar3 = *plVar2;
    uVar1 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar1 != 0) {
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_0929b340) {
          puVar5 = (undefined8 *)(lVar3 + (long)(*piVar6 + 1) * 0x10 + 0x138);
          goto LAB_045f156c;
        }
        uVar1 = uVar1 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar1 != 0);
    }
    puVar5 = (undefined8 *)FUN_040b1e00(plVar2,*(long *)PTR_DAT_0929b340,1);
LAB_045f156c:
    lVar3 = (*(code *)*puVar5)(plVar2,uVar7,uVar4,puVar5[1]);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    in_stack_00000018 = FUN_06636d80(lVar3,*(undefined8 *)PTR_DAT_092a0f80);
    uVar1 = FUN_065f05dc(&stack0x00000018,*(undefined8 *)PTR_DAT_092a0f78);
    if ((uVar1 & 1) == 0) {
      *unaff_x19 = 1;
      *(undefined8 *)(unaff_x19 + 0xc) = in_stack_00000018;
      thunk_FUN_040ec700(unaff_x19 + 0xc,0);
      if (*(int *)(*unaff_x25 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      FUN_04e3e3d4(unaff_x19 + 2,&stack0x00000018);
    }
    else {
      FUN_065f061c(&stack0x00000018,*(undefined8 *)PTR_DAT_092a0f70);
      lVar3 = *unaff_x25;
      *unaff_x19 = 0xfffffffe;
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      FUN_0759053c(unaff_x19 + 2,0);
    }
  }
  return;
}


