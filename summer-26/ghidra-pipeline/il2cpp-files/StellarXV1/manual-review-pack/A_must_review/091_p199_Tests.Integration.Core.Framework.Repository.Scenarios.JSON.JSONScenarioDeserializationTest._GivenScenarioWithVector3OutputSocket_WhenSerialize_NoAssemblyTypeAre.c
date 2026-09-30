/*
FUNCTION_NAME: Tests.Integration.Core.Framework.Repository.Scenarios.JSON.JSONScenarioDeserializationTest.<GivenScenarioWithVector3OutputSocket_WhenSerialize_NoAssemblyTypeAreSerialize>d__39$$MoveNext
ENTRY_POINT: 045f06f0
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_15;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


void Tests_Integration_Core_Framework_Repository_Scenarios_JSON_JSONScenarioDeserializationTest_<GivenScenarioWithVector3OutputSocket_WhenSerialize_NoAssemblyTypeAreSerialize>d__39__MoveNext
               (void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  ulong uVar7;
  int *piVar8;
  int *unaff_x19;
  long unaff_x20;
  undefined8 *puVar9;
  long *plVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000028;
  
  FUN_04077588(PTR_DAT_09285a68);
  FUN_04077588(PTR_DAT_0929b338);
  FUN_04077588(PTR_DAT_09296148);
  FUN_04077588(PTR_DAT_0929b340);
  FUN_04077588(PTR_DAT_092867e0);
  FUN_04077588(PTR_DAT_09296150);
  FUN_04077588(PTR_DAT_0929b350);
  FUN_04077588(PTR_DAT_09293ae8);
  FUN_04077588(PTR_DAT_09293af0);
  FUN_04077588(PTR_DAT_09293af8);
  FUN_04077588(PTR_DAT_092a0f30);
  FUN_04077588(PTR_DAT_092a0f38);
  *(undefined1 *)(unaff_x20 + 0x43c) = 1;
  puVar3 = PTR_DAT_09285a68;
  lVar13 = *(long *)(unaff_x19 + 8);
  in_stack_00000010 = 0;
  in_stack_00000018 = 0;
  in_stack_00000028 = 0;
  if (*unaff_x19 == 0) {
    in_stack_00000028 = *(undefined8 *)(unaff_x19 + 0xc);
    unaff_x19[0xc] = 0;
    unaff_x19[0xd] = 0;
    *unaff_x19 = -1;
  }
  else {
    lVar4 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092a0f38);
    FUN_044dbed0(lVar4,0);
    plVar6 = (long *)(unaff_x19 + 10);
    *plVar6 = lVar4;
    thunk_FUN_040ec700(plVar6,lVar4);
    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    if (*(long *)(lVar13 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    uVar5 = FUN_046e0e04(*(long *)(lVar13 + 0x38),0);
    *(undefined8 *)(lVar13 + 0x18) = uVar5;
    thunk_FUN_040ec700();
    if (*(long *)(lVar13 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar4 = *plVar6;
    uVar5 = FUN_046e3b24(*(long *)(lVar13 + 0x40),0);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    puVar9 = (undefined8 *)(lVar4 + 0x10);
    *puVar9 = uVar5;
    thunk_FUN_040ec700(puVar9);
    lVar4 = *(long *)(lVar13 + 0x38);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    plVar10 = *(long **)(lVar13 + 0x20);
    uVar11 = *(undefined8 *)(lVar4 + 0x18);
    uVar5 = FUN_046e04f0(lVar4,0);
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar4 = *plVar10;
    uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_0929b340) {
          puVar9 = (undefined8 *)(lVar4 + (long)(*piVar8 + 1) * 0x10 + 0x138);
          goto LAB_045f08b4;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar9 = (undefined8 *)FUN_040b1e00(plVar10,*(long *)PTR_DAT_0929b340,1);
LAB_045f08b4:
    uVar5 = (*(code *)*puVar9)(plVar10,uVar11,uVar5,puVar9[1]);
    lVar4 = *plVar6;
    uVar11 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_0929b338);
    FUN_05688af4(uVar11,lVar4,*(undefined8 *)PTR_DAT_092a0f30,0);
    lVar12 = *(long *)PTR_DAT_0929b328;
    lVar4 = *(long *)(lVar12 + 0x38);
    if (lVar4 == 0) {
      FUN_040b1b28(lVar12);
      lVar4 = *(long *)(lVar12 + 0x38);
    }
    lVar4 = *(long *)(lVar4 + 0x10);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_040b1acc();
    }
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    lVar4 = *(long *)(*(long *)(lVar12 + 0x38) + 0x10);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_040b1acc();
    }
    FUN_051fd204(uVar5,uVar11,**(undefined8 **)(lVar4 + 0xb8),*(undefined8 *)PTR_DAT_0929b350);
    uVar5 = *(undefined8 *)(lVar13 + 0x20);
    uVar1 = *(undefined8 *)(lVar13 + 0x28);
    uVar11 = *(undefined8 *)(lVar13 + 0x10);
    uVar2 = *(undefined8 *)(lVar13 + 0x18);
    lVar4 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092867e0);
    FUN_04639b10(lVar4,uVar11,uVar5,uVar1,uVar2,0);
    if (*(long *)(lVar13 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar4 = FUN_0463a8dc(lVar4,*(undefined8 *)(*(long *)(lVar13 + 0x38) + 0x18),0);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    in_stack_00000028 = FUN_06649f2c(lVar4,*(undefined8 *)PTR_DAT_09293af8);
    uVar7 = FUN_065f12f0(&stack0x00000028,*(undefined8 *)PTR_DAT_09293af0);
    if ((uVar7 & 1) == 0) {
      *unaff_x19 = 0;
      *(undefined8 *)(unaff_x19 + 0xc) = in_stack_00000028;
      thunk_FUN_040ec700(unaff_x19 + 0xc,0);
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      FUN_04e456a0(unaff_x19 + 2,&stack0x00000028);
      return;
    }
  }
  FUN_065f1330(&stack0x00000028,*(undefined8 *)PTR_DAT_09293ae8);
  lVar4 = *(long *)(unaff_x19 + 10);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  lVar4 = *(long *)(lVar4 + 0x10);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  FUN_045931ac(&stack0x00000010,*(undefined8 *)(lVar4 + 0x18),*(undefined8 *)(lVar4 + 0x20),0);
  if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  plVar6 = (long *)FUN_051fcb28(*(undefined8 *)(lVar13 + 0x10),*(undefined8 *)PTR_DAT_09296150);
  uVar11 = in_stack_00000018;
  uVar5 = in_stack_00000010;
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  lVar13 = *plVar6;
  uVar7 = (ulong)*(ushort *)(lVar13 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_09296148) {
        puVar9 = (undefined8 *)(lVar13 + (long)(*piVar8 + 6) * 0x10 + 0x138);
        goto LAB_045f0af0;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar9 = (undefined8 *)FUN_040b1e00(plVar6,*(long *)PTR_DAT_09296148,6);
LAB_045f0af0:
  (*(code *)*puVar9)(plVar6,uVar5,uVar11,puVar9[1]);
  *unaff_x19 = -2;
  unaff_x19[10] = 0;
  unaff_x19[0xb] = 0;
  thunk_FUN_040ec700(unaff_x19 + 10,0);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  FUN_0759053c(unaff_x19 + 2,0);
  return;
}


