/*
FUNCTION_NAME: Tests.Integration.Core.Framework.Repository.Scenarios.JSON.JSONScenarioDeserializationTest.<GivenSerializedComponent_WhenConvert_FlowsComponentIsConverted>d__10$$SetStateMachine
ENTRY_POINT: 045f1950
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_9;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Tests_Integration_Core_Framework_Repository_Scenarios_JSON_JSONScenarioDeserializationTest_<GivenSerializedComponent_WhenConvert_FlowsComponentIsConverted>d__10__SetStateMachine
               (long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  undefined4 *unaff_x19;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  long *unaff_x25;
  long *unaff_x26;
  long unaff_x27;
  undefined8 in_stack_00000018;
  
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  plVar9 = *(long **)(unaff_x27 + 0x20);
  uVar10 = *(undefined8 *)(param_1 + 0x18);
  uVar3 = FUN_046e04f0(param_1,0);
  if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  lVar5 = *plVar9;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *unaff_x26) {
        puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 1) * 0x10 + 0x138);
        goto LAB_045f19d4;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar4 = (undefined8 *)FUN_040b1e00(plVar9,*unaff_x26,1);
LAB_045f19d4:
  uVar3 = (*(code *)*puVar4)(plVar9,uVar10,uVar3,puVar4[1]);
  uVar10 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_0929b338);
  FUN_05688af4();
  lVar8 = *(long *)PTR_DAT_0929b328;
  lVar5 = *(long *)(lVar8 + 0x38);
  if (lVar5 == 0) {
    FUN_040b1b28(lVar8);
    lVar5 = *(long *)(lVar8 + 0x38);
  }
  lVar5 = *(long *)(lVar5 + 0x10);
  if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_040b1acc();
  }
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  lVar5 = *(long *)(*(long *)(lVar8 + 0x38) + 0x10);
  if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_040b1acc();
  }
  FUN_051fd204(uVar3,uVar10,**(undefined8 **)(lVar5 + 0xb8),*(undefined8 *)PTR_DAT_0929b350);
  uVar3 = *(undefined8 *)(unaff_x27 + 0x20);
  uVar1 = *(undefined8 *)(unaff_x27 + 0x28);
  uVar10 = *(undefined8 *)(unaff_x27 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x27 + 0x18);
  lVar5 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092867e0);
  FUN_04639b10(lVar5,uVar10,uVar3,uVar1,uVar2,0);
  if (*(long *)(unaff_x27 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  lVar5 = FUN_0463a8dc(lVar5,*(undefined8 *)(*(long *)(unaff_x27 + 0x38) + 0x18),0);
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
    FUN_04e45814(unaff_x19 + 2,&stack0x00000018);
  }
  else {
    FUN_065f1330(&stack0x00000018,*(undefined8 *)PTR_DAT_09293ae8);
    if (unaff_x27 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    plVar9 = (long *)FUN_051fcb28(*(undefined8 *)(unaff_x27 + 0x20),*(undefined8 *)PTR_DAT_092a0f68)
    ;
    if (*(long *)(unaff_x27 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar5 = *plVar9;
    uVar3 = *(undefined8 *)(*(long *)(unaff_x27 + 0x38) + 0x18);
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *unaff_x26) {
          puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 2) * 0x10 + 0x138);
          goto LAB_045f1be8;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)FUN_040b1e00(plVar9,*unaff_x26,2);
LAB_045f1be8:
    (*(code *)*puVar4)(plVar9,0,uVar3,puVar4[1]);
    lVar5 = *unaff_x25;
    *unaff_x19 = 0xfffffffe;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    FUN_0759053c(unaff_x19 + 2,0);
  }
  return;
}


