/*
FUNCTION_NAME: Tests.Integration.Core.Framework.Repository.Scenarios.JSON.JSONScenarioDeserializationTest.<GivenSerializedScenarioWithFlowsComponentAndFlowOutputSocket_WhenConvert_FlowOutputSocketIdIsConverted>d__18$$MoveNext
ENTRY_POINT: 045f61e4
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_13;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Tests_Integration_Core_Framework_Repository_Scenarios_JSON_JSONScenarioDeserializationTest_<GivenSerializedScenarioWithFlowsComponentAndFlowOutputSocket_WhenConvert_FlowOutputSocketIdIsConverted>d__18__MoveNext
               (long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  int *piVar5;
  undefined4 *unaff_x19;
  long *unaff_x20;
  long lVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  long *unaff_x25;
  long unaff_x26;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000028;
  
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  uVar3 = FUN_046e12b8(param_1,0,0);
  *(undefined8 *)(unaff_x26 + 0x18) = uVar3;
  thunk_FUN_040ec700();
  if (*(long *)(unaff_x26 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  lVar6 = *unaff_x20;
  uVar3 = FUN_046e3b34(*(long *)(unaff_x26 + 0x40),0);
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  puVar7 = (undefined8 *)(lVar6 + 0x10);
  *puVar7 = uVar3;
  thunk_FUN_040ec700(puVar7);
  lVar6 = *(long *)(unaff_x26 + 0x38);
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  plVar8 = *(long **)(unaff_x26 + 0x20);
  uVar9 = *(undefined8 *)(lVar6 + 0x18);
  uVar3 = FUN_046e04f0(lVar6,0);
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  lVar6 = *plVar8;
  uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_0929b340) {
        puVar7 = (undefined8 *)(lVar6 + (long)(*piVar5 + 1) * 0x10 + 0x138);
        goto LAB_045f62a4;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar7 = (undefined8 *)FUN_040b1e00(plVar8,*(long *)PTR_DAT_0929b340,1);
LAB_045f62a4:
  uVar3 = (*(code *)*puVar7)(plVar8,uVar9,uVar3,puVar7[1]);
  lVar6 = *unaff_x20;
  uVar9 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_0929b338);
  FUN_05688af4(uVar9,lVar6,*(undefined8 *)PTR_DAT_092a1098,0);
  lVar10 = *(long *)PTR_DAT_0929b328;
  lVar6 = *(long *)(lVar10 + 0x38);
  if (lVar6 == 0) {
    FUN_040b1b28(lVar10);
    lVar6 = *(long *)(lVar10 + 0x38);
  }
  lVar6 = *(long *)(lVar6 + 0x10);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_040b1acc();
  }
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  lVar6 = *(long *)(*(long *)(lVar10 + 0x38) + 0x10);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_040b1acc();
  }
  FUN_051fd204(uVar3,uVar9,**(undefined8 **)(lVar6 + 0xb8),*(undefined8 *)PTR_DAT_0929b350);
  uVar3 = *(undefined8 *)(unaff_x26 + 0x20);
  uVar1 = *(undefined8 *)(unaff_x26 + 0x28);
  uVar9 = *(undefined8 *)(unaff_x26 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x26 + 0x18);
  lVar6 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092867e0);
  FUN_04639b10(lVar6,uVar9,uVar3,uVar1,uVar2,0);
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  lVar6 = FUN_04639bf8(lVar6,0);
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  in_stack_00000028 = FUN_076f1ee4(lVar6,0);
  uVar4 = FUN_07591eb4(&stack0x00000028,0);
  if ((uVar4 & 1) == 0) {
    *unaff_x19 = 0;
    *(undefined8 *)(unaff_x19 + 0xc) = in_stack_00000028;
    thunk_FUN_040ec700(unaff_x19 + 0xc,0);
    if (*(int *)(*unaff_x25 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    FUN_04e4f314(unaff_x19 + 2,&stack0x00000028);
  }
  else {
    FUN_07591f7c(&stack0x00000028,0);
    if (*(long *)(unaff_x19 + 10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar6 = *(long *)(*(long *)(unaff_x19 + 10) + 0x10);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    FUN_045931ac(&stack0x00000010,*(undefined8 *)(lVar6 + 0x18),*(undefined8 *)(lVar6 + 0x20),0);
    if (unaff_x26 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    plVar8 = (long *)FUN_051fcb28(*(undefined8 *)(unaff_x26 + 0x10),*(undefined8 *)PTR_DAT_09296150)
    ;
    uVar9 = in_stack_00000018;
    uVar3 = in_stack_00000010;
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar6 = *plVar8;
    uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_09296148) {
          puVar7 = (undefined8 *)(lVar6 + (long)(*piVar5 + 5) * 0x10 + 0x138);
          goto LAB_045f64b8;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar7 = (undefined8 *)FUN_040b1e00(plVar8,*(long *)PTR_DAT_09296148,5);
LAB_045f64b8:
    lVar6 = (*(code *)*puVar7)(plVar8,uVar3,uVar9,1,puVar7[1]);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    in_stack_00000028 = FUN_076f1ee4(lVar6,0);
    uVar4 = FUN_07591eb4(&stack0x00000028,0);
    if ((uVar4 & 1) == 0) {
      *unaff_x19 = 1;
      *(undefined8 *)(unaff_x19 + 0xc) = in_stack_00000028;
      thunk_FUN_040ec700(unaff_x19 + 0xc,0);
      if (*(int *)(*unaff_x25 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      FUN_04e4f314(unaff_x19 + 2,&stack0x00000028);
    }
    else {
      FUN_07591f7c(&stack0x00000028,0);
      *(undefined8 *)(unaff_x19 + 10) = 0;
      *unaff_x19 = 0xfffffffe;
      thunk_FUN_040ec700(unaff_x19 + 10,0);
      if (*(int *)(*unaff_x25 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      FUN_0759053c(unaff_x19 + 2,0);
    }
  }
  return;
}


