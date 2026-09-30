/*
FUNCTION_NAME: Tests.Integration.Core.Framework.Repository.Scenarios.JSON.JSONScenarioDeserializationTest.<GivenSerializedScenarioWithBasicNode_WhenConvert_NodeIsConverted>d__6$$MoveNext
ENTRY_POINT: 045f1efc
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_15;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Tests_Integration_Core_Framework_Repository_Scenarios_JSON_JSONScenarioDeserializationTest_<GivenSerializedScenarioWithBasicNode_WhenConvert_NodeIsConverted>d__6__MoveNext
               (void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  int in_w8;
  ulong uVar6;
  int *piVar7;
  undefined4 *unaff_x19;
  undefined8 *puVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  long *unaff_x25;
  long unaff_x26;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000038;
  
  if (in_w8 == 1) {
    in_stack_00000018 = *(undefined8 *)(unaff_x19 + 0xe);
    *(undefined8 *)(unaff_x19 + 0xe) = 0;
    *unaff_x19 = 0xffffffff;
  }
  else {
    lVar3 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092a0fb8);
    FUN_044dbf3c(lVar3,0);
    plVar5 = (long *)(unaff_x19 + 10);
    *plVar5 = lVar3;
    thunk_FUN_040ec700(plVar5,lVar3);
    if (unaff_x26 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    if (*(long *)(unaff_x26 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    uVar4 = FUN_046e0e04(*(long *)(unaff_x26 + 0x38),0);
    *(undefined8 *)(unaff_x26 + 0x18) = uVar4;
    thunk_FUN_040ec700();
    if (*(long *)(unaff_x26 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar3 = *plVar5;
    uVar4 = FUN_046e3b34(*(long *)(unaff_x26 + 0x40),0);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    puVar8 = (undefined8 *)(lVar3 + 0x10);
    *puVar8 = uVar4;
    thunk_FUN_040ec700(puVar8);
    lVar3 = *(long *)(unaff_x26 + 0x38);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    plVar9 = *(long **)(unaff_x26 + 0x20);
    uVar10 = *(undefined8 *)(lVar3 + 0x18);
    uVar4 = FUN_046e04f0(lVar3,0);
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar3 = *plVar9;
    uVar6 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_0929b340) {
          puVar8 = (undefined8 *)(lVar3 + (long)(*piVar7 + 1) * 0x10 + 0x138);
          goto LAB_045f2028;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar8 = (undefined8 *)FUN_040b1e00(plVar9,*(long *)PTR_DAT_0929b340,1);
LAB_045f2028:
    uVar4 = (*(code *)*puVar8)(plVar9,uVar10,uVar4,puVar8[1]);
    lVar3 = *plVar5;
    uVar10 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_0929b338);
    FUN_05688af4(uVar10,lVar3,*(undefined8 *)PTR_DAT_092a0fb0,0);
    lVar11 = *(long *)PTR_DAT_0929b328;
    lVar3 = *(long *)(lVar11 + 0x38);
    if (lVar3 == 0) {
      FUN_040b1b28(lVar11);
      lVar3 = *(long *)(lVar11 + 0x38);
    }
    lVar3 = *(long *)(lVar3 + 0x10);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_040b1acc();
    }
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    lVar3 = *(long *)(*(long *)(lVar11 + 0x38) + 0x10);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_040b1acc();
    }
    FUN_051fd204(uVar4,uVar10,**(undefined8 **)(lVar3 + 0xb8),*(undefined8 *)PTR_DAT_0929b350);
    uVar4 = *(undefined8 *)(unaff_x26 + 0x20);
    uVar1 = *(undefined8 *)(unaff_x26 + 0x28);
    uVar10 = *(undefined8 *)(unaff_x26 + 0x10);
    uVar2 = *(undefined8 *)(unaff_x26 + 0x18);
    lVar3 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092867e0);
    FUN_04639b10(lVar3,uVar10,uVar4,uVar1,uVar2,0);
    if (*(long *)(unaff_x26 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar3 = FUN_0463a8dc(lVar3,*(undefined8 *)(*(long *)(unaff_x26 + 0x38) + 0x18),0);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    in_stack_00000038 = FUN_06649f2c(lVar3,*(undefined8 *)PTR_DAT_09293af8);
    uVar6 = FUN_065f12f0(&stack0x00000038,*(undefined8 *)PTR_DAT_09293af0);
    if ((uVar6 & 1) == 0) {
      *unaff_x19 = 0;
      *(undefined8 *)(unaff_x19 + 0xc) = in_stack_00000038;
      thunk_FUN_040ec700(unaff_x19 + 0xc,0);
      if (*(int *)(*unaff_x25 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      FUN_04e45890(unaff_x19 + 2,&stack0x00000038);
      return;
    }
    FUN_065f1330(&stack0x00000038,*(undefined8 *)PTR_DAT_09293ae8);
    if (*(long *)(unaff_x19 + 10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar3 = *(long *)(*(long *)(unaff_x19 + 10) + 0x10);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    FUN_045931ac(&stack0x00000020,*(undefined8 *)(lVar3 + 0x18),*(undefined8 *)(lVar3 + 0x20),0);
    if (unaff_x26 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    plVar5 = (long *)FUN_051fcb28(*(undefined8 *)(unaff_x26 + 0x10),*(undefined8 *)PTR_DAT_09296150)
    ;
    uVar10 = in_stack_00000028;
    uVar4 = in_stack_00000020;
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar3 = *plVar5;
    uVar6 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_09296148) {
          puVar8 = (undefined8 *)(lVar3 + (long)(*piVar7 + 5) * 0x10 + 0x138);
          goto LAB_045f2260;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar8 = (undefined8 *)FUN_040b1e00(plVar5,*(long *)PTR_DAT_09296148,5);
LAB_045f2260:
    lVar3 = (*(code *)*puVar8)(plVar5,uVar4,uVar10,1,puVar8[1]);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    in_stack_00000018 = FUN_076f1ee4(lVar3,0);
    uVar6 = FUN_07591eb4(&stack0x00000018,0);
    if ((uVar6 & 1) == 0) {
      *unaff_x19 = 1;
      *(undefined8 *)(unaff_x19 + 0xe) = in_stack_00000018;
      thunk_FUN_040ec700(unaff_x19 + 0xe,0);
      if (*(int *)(*unaff_x25 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      FUN_04e4ee3c(unaff_x19 + 2,&stack0x00000018);
      return;
    }
  }
  FUN_07591f7c(&stack0x00000018,0);
  *(undefined8 *)(unaff_x19 + 10) = 0;
  *unaff_x19 = 0xfffffffe;
  thunk_FUN_040ec700(unaff_x19 + 10,0);
  if (*(int *)(*unaff_x25 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  FUN_0759053c(unaff_x19 + 2,0);
  return;
}


