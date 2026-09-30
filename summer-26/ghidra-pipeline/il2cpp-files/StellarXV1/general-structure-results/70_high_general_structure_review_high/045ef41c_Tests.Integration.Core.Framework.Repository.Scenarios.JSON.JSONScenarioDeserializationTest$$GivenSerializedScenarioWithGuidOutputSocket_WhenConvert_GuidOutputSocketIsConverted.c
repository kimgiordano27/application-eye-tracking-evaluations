/*
FUNCTION_NAME: Tests.Integration.Core.Framework.Repository.Scenarios.JSON.JSONScenarioDeserializationTest$$GivenSerializedScenarioWithGuidOutputSocket_WhenConvert_GuidOutputSocketIsConverted
ENTRY_POINT: 045ef41c
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


void Tests_Integration_Core_Framework_Repository_Scenarios_JSON_JSONScenarioDeserializationTest__GivenSerializedScenarioWithGuidOutputSocket_WhenConvert_GuidOutputSocketIsConverted
               (void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  int in_w8;
  ulong uVar7;
  int *piVar8;
  undefined4 *unaff_x19;
  long *plVar9;
  undefined8 uVar10;
  long *unaff_x25;
  long unaff_x26;
  undefined1 auVar11 [16];
  undefined4 uStack0000000000000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000028;
  
  uStack0000000000000010 = 0;
  if (in_w8 == 0) {
    in_stack_00000028 = *(undefined8 *)(unaff_x19 + 10);
    *(undefined8 *)(unaff_x19 + 10) = 0;
    *unaff_x19 = 0xffffffff;
  }
  else {
    if (in_w8 == 1) {
      in_stack_00000018 = *(undefined8 *)(unaff_x19 + 0xc);
      *(undefined8 *)(unaff_x19 + 0xc) = 0;
      *unaff_x19 = 0xffffffff;
      goto LAB_045ef7b0;
    }
    lVar6 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092a0ee8);
    FUN_044dbfa8(lVar6,0);
    if (unaff_x26 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    if (*(long *)(unaff_x26 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    uVar3 = FUN_046e0e04(*(long *)(unaff_x26 + 0x38),0);
    *(undefined8 *)(unaff_x26 + 0x18) = uVar3;
    thunk_FUN_040ec700();
    if (*(long *)(unaff_x26 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    uVar3 = FUN_046e3b44(*(long *)(unaff_x26 + 0x40),0);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    *(undefined8 *)(lVar6 + 0x10) = uVar3;
    thunk_FUN_040ec700();
    lVar4 = *(long *)(unaff_x26 + 0x38);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    plVar9 = *(long **)(unaff_x26 + 0x20);
    uVar10 = *(undefined8 *)(lVar4 + 0x18);
    uVar3 = FUN_046e04f0(lVar4,0);
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar4 = *plVar9;
    uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_0929b340) {
          puVar5 = (undefined8 *)(lVar4 + (long)(*piVar8 + 1) * 0x10 + 0x138);
          goto LAB_045ef538;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar5 = (undefined8 *)FUN_040b1e00(plVar9,*(long *)PTR_DAT_0929b340,1);
LAB_045ef538:
    uVar3 = (*(code *)*puVar5)(plVar9,uVar10,uVar3,puVar5[1]);
    uVar10 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_0929b338);
    FUN_05688af4(uVar10,lVar6,*(undefined8 *)PTR_DAT_092a0ee0,0);
    lVar4 = *(long *)PTR_DAT_0929b328;
    lVar6 = *(long *)(lVar4 + 0x38);
    if (lVar6 == 0) {
      FUN_040b1b28(lVar4);
      lVar6 = *(long *)(lVar4 + 0x38);
    }
    lVar6 = *(long *)(lVar6 + 0x10);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_040b1acc();
    }
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    lVar6 = *(long *)(*(long *)(lVar4 + 0x38) + 0x10);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_040b1acc();
    }
    FUN_051fd204(uVar3,uVar10,**(undefined8 **)(lVar6 + 0xb8),*(undefined8 *)PTR_DAT_0929b350);
    uVar3 = *(undefined8 *)(unaff_x26 + 0x20);
    uVar1 = *(undefined8 *)(unaff_x26 + 0x28);
    uVar10 = *(undefined8 *)(unaff_x26 + 0x10);
    uVar2 = *(undefined8 *)(unaff_x26 + 0x18);
    lVar6 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092867e0);
    FUN_04639b10(lVar6,uVar10,uVar3,uVar1,uVar2,0);
    if (*(long *)(unaff_x26 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar6 = FUN_0463a8dc(lVar6,*(undefined8 *)(*(long *)(unaff_x26 + 0x38) + 0x18),0);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    in_stack_00000028 = FUN_06649f2c(lVar6,*(undefined8 *)PTR_DAT_09293af8);
    uVar7 = FUN_065f12f0(&stack0x00000028,*(undefined8 *)PTR_DAT_09293af0);
    if ((uVar7 & 1) == 0) {
      *unaff_x19 = 0;
      *(undefined8 *)(unaff_x19 + 10) = in_stack_00000028;
      thunk_FUN_040ec700(unaff_x19 + 10,0);
      if (*(int *)(*unaff_x25 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      FUN_04e4552c(unaff_x19 + 2,&stack0x00000028);
      return;
    }
  }
  FUN_065f1330(&stack0x00000028,*(undefined8 *)PTR_DAT_09293ae8);
  if (unaff_x26 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  plVar9 = (long *)FUN_051fc4b0(*(undefined8 *)(unaff_x26 + 0x10),*(undefined8 *)PTR_DAT_0929b348);
  if (*(int *)(*(long *)PTR_DAT_0929add0 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  auVar11 = FUN_04a01538(*(undefined8 *)PTR_DAT_0929b320);
  if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  lVar6 = *plVar9;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_09296148) {
        puVar5 = (undefined8 *)(lVar6 + (long)(*piVar8 + 5) * 0x10 + 0x138);
        goto LAB_045ef778;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar5 = (undefined8 *)FUN_040b1e00(plVar9,*(long *)PTR_DAT_09296148,5);
LAB_045ef778:
  lVar6 = (*(code *)*puVar5)(plVar9,auVar11._0_8_,auVar11._8_8_,1,puVar5[1]);
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  in_stack_00000018 = FUN_076f1ee4(lVar6,0);
  uVar7 = FUN_07591eb4(&stack0x00000018,0);
  if ((uVar7 & 1) == 0) {
    *unaff_x19 = 1;
    *(undefined8 *)(unaff_x19 + 0xc) = in_stack_00000018;
    thunk_FUN_040ec700(unaff_x19 + 0xc,0);
    if (*(int *)(*unaff_x25 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    FUN_04e4ed44(unaff_x19 + 2,&stack0x00000018);
    return;
  }
LAB_045ef7b0:
  FUN_07591f7c(&stack0x00000018,0);
  lVar6 = *unaff_x25;
  *unaff_x19 = 0xfffffffe;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  FUN_0759053c(unaff_x19 + 2,0);
  return;
}


