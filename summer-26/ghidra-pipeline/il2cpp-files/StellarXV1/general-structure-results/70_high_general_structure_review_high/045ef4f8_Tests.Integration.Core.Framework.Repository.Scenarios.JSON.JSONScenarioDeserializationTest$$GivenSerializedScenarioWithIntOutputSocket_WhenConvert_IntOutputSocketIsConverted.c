/*
FUNCTION_NAME: Tests.Integration.Core.Framework.Repository.Scenarios.JSON.JSONScenarioDeserializationTest$$GivenSerializedScenarioWithIntOutputSocket_WhenConvert_IntOutputSocketIsConverted
ENTRY_POINT: 045ef4f8
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_7;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Tests_Integration_Core_Framework_Repository_Scenarios_JSON_JSONScenarioDeserializationTest__GivenSerializedScenarioWithIntOutputSocket_WhenConvert_IntOutputSocketIsConverted
               (long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  long in_x9;
  int *piVar9;
  undefined4 *unaff_x19;
  long lVar10;
  long *unaff_x25;
  long unaff_x26;
  undefined1 auVar11 [16];
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000028;
  
  piVar9 = (int *)(*(long *)(param_1 + 0xb0) + 8);
  do {
    if (*(long *)(piVar9 + -2) == param_3) {
      puVar3 = (undefined8 *)(param_1 + (long)(*piVar9 + 1) * 0x10 + 0x138);
      goto LAB_045ef538;
    }
    in_x9 = in_x9 + -1;
    piVar9 = piVar9 + 4;
  } while (in_x9 != 0);
  puVar3 = (undefined8 *)FUN_040b1e00();
LAB_045ef538:
  uVar4 = (*(code *)*puVar3)();
  uVar5 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_0929b338);
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
  lVar8 = *(long *)(*(long *)(lVar10 + 0x38) + 0x10);
  if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_040b1acc();
  }
  FUN_051fd204(uVar4,uVar5,**(undefined8 **)(lVar8 + 0xb8),*(undefined8 *)PTR_DAT_0929b350);
  uVar4 = *(undefined8 *)(unaff_x26 + 0x20);
  uVar1 = *(undefined8 *)(unaff_x26 + 0x28);
  uVar5 = *(undefined8 *)(unaff_x26 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x26 + 0x18);
  lVar8 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092867e0);
  FUN_04639b10(lVar8,uVar5,uVar4,uVar1,uVar2,0);
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
  in_stack_00000028 = FUN_06649f2c(lVar8,*(undefined8 *)PTR_DAT_09293af8);
  uVar6 = FUN_065f12f0(&stack0x00000028,*(undefined8 *)PTR_DAT_09293af0);
  if ((uVar6 & 1) == 0) {
    *unaff_x19 = 0;
    *(undefined8 *)(unaff_x19 + 10) = in_stack_00000028;
    thunk_FUN_040ec700(unaff_x19 + 10,0);
    if (*(int *)(*unaff_x25 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    FUN_04e4552c(unaff_x19 + 2,&stack0x00000028);
  }
  else {
    FUN_065f1330(&stack0x00000028,*(undefined8 *)PTR_DAT_09293ae8);
    if (unaff_x26 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    plVar7 = (long *)FUN_051fc4b0(*(undefined8 *)(unaff_x26 + 0x10),*(undefined8 *)PTR_DAT_0929b348)
    ;
    if (*(int *)(*(long *)PTR_DAT_0929add0 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    auVar11 = FUN_04a01538(*(undefined8 *)PTR_DAT_0929b320);
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar8 = *plVar7;
    uVar6 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar6 != 0) {
      piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_09296148) {
          puVar3 = (undefined8 *)(lVar8 + (long)(*piVar9 + 5) * 0x10 + 0x138);
          goto LAB_045ef778;
        }
        uVar6 = uVar6 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_040b1e00(plVar7,*(long *)PTR_DAT_09296148,5);
LAB_045ef778:
    lVar8 = (*(code *)*puVar3)(plVar7,auVar11._0_8_,auVar11._8_8_,1,puVar3[1]);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    in_stack_00000018 = FUN_076f1ee4(lVar8,0);
    uVar6 = FUN_07591eb4(&stack0x00000018,0);
    if ((uVar6 & 1) == 0) {
      *unaff_x19 = 1;
      *(undefined8 *)(unaff_x19 + 0xc) = in_stack_00000018;
      thunk_FUN_040ec700(unaff_x19 + 0xc,0);
      if (*(int *)(*unaff_x25 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      FUN_04e4ed44(unaff_x19 + 2,&stack0x00000018);
    }
    else {
      FUN_07591f7c(&stack0x00000018,0);
      lVar8 = *unaff_x25;
      *unaff_x19 = 0xfffffffe;
      if (*(int *)(lVar8 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      FUN_0759053c(unaff_x19 + 2,0);
    }
  }
  return;
}


