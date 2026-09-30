/*
FUNCTION_NAME: Tests.Integration.Core.Framework.Repository.Scenarios.JSON.JSONScenarioDeserializationTest.<>c__DisplayClass32_0$$<GivenSerializedScenarioWithStringOutputSocket_WhenConvert_StringOutputSocketIsConverted>b__0
ENTRY_POINT: 045f01cc
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


void Tests_Integration_Core_Framework_Repository_Scenarios_JSON_JSONScenarioDeserializationTest_<>c__DisplayClass32_0__<GivenSerializedScenarioWithStringOutputSocket_WhenConvert_StringOutputSocketIsConverted>b__0
               (undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  int *piVar9;
  undefined4 *unaff_x19;
  long lVar10;
  long *unaff_x25;
  long unaff_x26;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000038;
  
  thunk_FUN_040b4efc(*param_1);
  FUN_05688af4();
  lVar10 = *(long *)PTR_DAT_0929b328;
  lVar8 = *(long *)(lVar10 + 0x38);
  if (lVar8 == 0) {
    FUN_040b1b28(lVar10);
    lVar8 = *(long *)(lVar10 + 0x38);
  }
  lVar8 = *(long *)(lVar8 + 0x10);
  if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_040b1acc();
  }
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  if ((*(ushort *)(*(long *)(*(long *)(lVar10 + 0x38) + 0x10) + 0x135) & 1) == 0) {
    FUN_040b1acc();
  }
  FUN_051fd204();
  uVar1 = *(undefined8 *)(unaff_x26 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x26 + 0x28);
  uVar2 = *(undefined8 *)(unaff_x26 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x26 + 0x18);
  lVar8 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092867e0);
  FUN_04639b10(lVar8,uVar2,uVar1,uVar3,uVar4,0);
  if (*(long *)(unaff_x26 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  lVar8 = FUN_0463a8dc(lVar8,*(undefined8 *)(*(long *)(unaff_x26 + 0x38) + 0x18),0);
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  in_stack_00000038 = FUN_06649f2c(lVar8,*(undefined8 *)PTR_DAT_09293af8);
  uVar5 = FUN_065f12f0(&stack0x00000038,*(undefined8 *)PTR_DAT_09293af0);
  if ((uVar5 & 1) == 0) {
    *unaff_x19 = 0;
    *(undefined8 *)(unaff_x19 + 0xc) = in_stack_00000038;
    thunk_FUN_040ec700(unaff_x19 + 0xc,0);
    if (*(int *)(*unaff_x25 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    FUN_04e45624(unaff_x19 + 2,&stack0x00000038);
  }
  else {
    FUN_065f1330(&stack0x00000038,*(undefined8 *)PTR_DAT_09293ae8);
    if (*(long *)(unaff_x19 + 10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar8 = *(long *)(*(long *)(unaff_x19 + 10) + 0x10);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    FUN_045931ac(&stack0x00000020,*(undefined8 *)(lVar8 + 0x18),*(undefined8 *)(lVar8 + 0x20),0);
    if (unaff_x26 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    plVar6 = (long *)FUN_051fcb28(*(undefined8 *)(unaff_x26 + 0x10),*(undefined8 *)PTR_DAT_09296150)
    ;
    uVar2 = in_stack_00000028;
    uVar1 = in_stack_00000020;
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar8 = *plVar6;
    uVar5 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar5 != 0) {
      piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_09296148) {
          puVar7 = (undefined8 *)(lVar8 + (long)(*piVar9 + 5) * 0x10 + 0x138);
          goto LAB_045f03e0;
        }
        uVar5 = uVar5 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar5 != 0);
    }
    puVar7 = (undefined8 *)FUN_040b1e00(plVar6,*(long *)PTR_DAT_09296148,5);
LAB_045f03e0:
    lVar8 = (*(code *)*puVar7)(plVar6,uVar1,uVar2,1,puVar7[1]);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    in_stack_00000018 = FUN_076f1ee4(lVar8,0);
    uVar5 = FUN_07591eb4(&stack0x00000018,0);
    if ((uVar5 & 1) == 0) {
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
  }
  return;
}


