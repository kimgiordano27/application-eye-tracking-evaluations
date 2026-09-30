/*
FUNCTION_NAME: Tests.Integration.Core.Framework.Repository.Scenarios.JSON.JSONScenarioDeserializationTest$$GivenSerializedScenarioWithFloatOutputSocket_WhenConvert_FloatOutputSocketIsConverted
ENTRY_POINT: 045ef340
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_14;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Tests_Integration_Core_Framework_Repository_Scenarios_JSON_JSONScenarioDeserializationTest__GivenSerializedScenarioWithFloatOutputSocket_WhenConvert_FloatOutputSocketIsConverted
               (long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  int *piVar9;
  int *unaff_x19;
  long unaff_x20;
  long *plVar10;
  undefined8 uVar11;
  long lVar12;
  undefined1 auVar13 [16];
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000028;
  
  FUN_04077588(*(undefined8 *)(param_1 + 0xdd0));
  FUN_04077588(PTR_DAT_0929b328);
  FUN_04077588(PTR_DAT_092a0ed0);
  FUN_04077588(PTR_DAT_092a0ed8);
  FUN_04077588(PTR_DAT_09285a68);
  FUN_04077588(PTR_DAT_0929b338);
  FUN_04077588(PTR_DAT_09296148);
  FUN_04077588(PTR_DAT_0929b340);
  FUN_04077588(PTR_DAT_092867e0);
  FUN_04077588(PTR_DAT_0929b348);
  FUN_04077588(PTR_DAT_0929b350);
  FUN_04077588(PTR_DAT_09293ae8);
  FUN_04077588(PTR_DAT_09293af0);
  FUN_04077588(PTR_DAT_09293af8);
  FUN_04077588(PTR_DAT_092a0ee0);
  FUN_04077588(PTR_DAT_092a0ee8);
  *(undefined1 *)(unaff_x20 + 0x436) = 1;
  puVar3 = PTR_DAT_09285a68;
  lVar12 = *(long *)(unaff_x19 + 8);
  in_stack_00000028 = 0;
  in_stack_00000018 = 0;
  if (*unaff_x19 == 0) {
    in_stack_00000028 = *(undefined8 *)(unaff_x19 + 10);
    unaff_x19[10] = 0;
    unaff_x19[0xb] = 0;
    *unaff_x19 = -1;
  }
  else {
    if (*unaff_x19 == 1) {
      in_stack_00000018 = *(undefined8 *)(unaff_x19 + 0xc);
      unaff_x19[0xc] = 0;
      unaff_x19[0xd] = 0;
      *unaff_x19 = -1;
      goto LAB_045ef7b0;
    }
    lVar4 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092a0ee8);
    FUN_044dbfa8(lVar4,0);
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    if (*(long *)(lVar12 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    uVar5 = FUN_046e0e04(*(long *)(lVar12 + 0x38),0);
    *(undefined8 *)(lVar12 + 0x18) = uVar5;
    thunk_FUN_040ec700();
    if (*(long *)(lVar12 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    uVar5 = FUN_046e3b44(*(long *)(lVar12 + 0x40),0);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    *(undefined8 *)(lVar4 + 0x10) = uVar5;
    thunk_FUN_040ec700();
    lVar6 = *(long *)(lVar12 + 0x38);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    plVar10 = *(long **)(lVar12 + 0x20);
    uVar11 = *(undefined8 *)(lVar6 + 0x18);
    uVar5 = FUN_046e04f0(lVar6,0);
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar6 = *plVar10;
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_0929b340) {
          puVar7 = (undefined8 *)(lVar6 + (long)(*piVar9 + 1) * 0x10 + 0x138);
          goto LAB_045ef538;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar7 = (undefined8 *)FUN_040b1e00(plVar10,*(long *)PTR_DAT_0929b340,1);
LAB_045ef538:
    uVar5 = (*(code *)*puVar7)(plVar10,uVar11,uVar5,puVar7[1]);
    uVar11 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_0929b338);
    FUN_05688af4(uVar11,lVar4,*(undefined8 *)PTR_DAT_092a0ee0,0);
    lVar6 = *(long *)PTR_DAT_0929b328;
    lVar4 = *(long *)(lVar6 + 0x38);
    if (lVar4 == 0) {
      FUN_040b1b28(lVar6);
      lVar4 = *(long *)(lVar6 + 0x38);
    }
    lVar4 = *(long *)(lVar4 + 0x10);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_040b1acc();
    }
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    lVar4 = *(long *)(*(long *)(lVar6 + 0x38) + 0x10);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_040b1acc();
    }
    FUN_051fd204(uVar5,uVar11,**(undefined8 **)(lVar4 + 0xb8),*(undefined8 *)PTR_DAT_0929b350);
    uVar5 = *(undefined8 *)(lVar12 + 0x20);
    uVar1 = *(undefined8 *)(lVar12 + 0x28);
    uVar11 = *(undefined8 *)(lVar12 + 0x10);
    uVar2 = *(undefined8 *)(lVar12 + 0x18);
    lVar4 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092867e0);
    FUN_04639b10(lVar4,uVar11,uVar5,uVar1,uVar2,0);
    if (*(long *)(lVar12 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar4 = FUN_0463a8dc(lVar4,*(undefined8 *)(*(long *)(lVar12 + 0x38) + 0x18),0);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    in_stack_00000028 = FUN_06649f2c(lVar4,*(undefined8 *)PTR_DAT_09293af8);
    uVar8 = FUN_065f12f0(&stack0x00000028,*(undefined8 *)PTR_DAT_09293af0);
    if ((uVar8 & 1) == 0) {
      *unaff_x19 = 0;
      *(undefined8 *)(unaff_x19 + 10) = in_stack_00000028;
      thunk_FUN_040ec700(unaff_x19 + 10,0);
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      FUN_04e4552c(unaff_x19 + 2,&stack0x00000028);
      return;
    }
  }
  FUN_065f1330(&stack0x00000028,*(undefined8 *)PTR_DAT_09293ae8);
  if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  plVar10 = (long *)FUN_051fc4b0(*(undefined8 *)(lVar12 + 0x10),*(undefined8 *)PTR_DAT_0929b348);
  if (*(int *)(*(long *)PTR_DAT_0929add0 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  auVar13 = FUN_04a01538(*(undefined8 *)PTR_DAT_0929b320);
  if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  lVar12 = *plVar10;
  uVar8 = (ulong)*(ushort *)(lVar12 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_09296148) {
        puVar7 = (undefined8 *)(lVar12 + (long)(*piVar9 + 5) * 0x10 + 0x138);
        goto LAB_045ef778;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar7 = (undefined8 *)FUN_040b1e00(plVar10,*(long *)PTR_DAT_09296148,5);
LAB_045ef778:
  lVar12 = (*(code *)*puVar7)(plVar10,auVar13._0_8_,auVar13._8_8_,1,puVar7[1]);
  if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  in_stack_00000018 = FUN_076f1ee4(lVar12,0);
  uVar8 = FUN_07591eb4(&stack0x00000018,0);
  if ((uVar8 & 1) == 0) {
    *unaff_x19 = 1;
    *(undefined8 *)(unaff_x19 + 0xc) = in_stack_00000018;
    thunk_FUN_040ec700(unaff_x19 + 0xc,0);
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    FUN_04e4ed44(unaff_x19 + 2,&stack0x00000018);
    return;
  }
LAB_045ef7b0:
  FUN_07591f7c(&stack0x00000018,0);
  lVar12 = *(long *)puVar3;
  *unaff_x19 = -2;
  if (*(int *)(lVar12 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  FUN_0759053c(unaff_x19 + 2,0);
  return;
}


