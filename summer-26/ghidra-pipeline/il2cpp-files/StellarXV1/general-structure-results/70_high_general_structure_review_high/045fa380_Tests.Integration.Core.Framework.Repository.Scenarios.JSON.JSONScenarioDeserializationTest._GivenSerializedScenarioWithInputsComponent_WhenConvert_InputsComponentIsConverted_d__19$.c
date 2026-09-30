/*
FUNCTION_NAME: Tests.Integration.Core.Framework.Repository.Scenarios.JSON.JSONScenarioDeserializationTest.<GivenSerializedScenarioWithInputsComponent_WhenConvert_InputsComponentIsConverted>d__19$$SetStateMachine
ENTRY_POINT: 045fa380
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


void Tests_Integration_Core_Framework_Repository_Scenarios_JSON_JSONScenarioDeserializationTest_<GivenSerializedScenarioWithInputsComponent_WhenConvert_InputsComponentIsConverted>d__19__SetStateMachine
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long unaff_x19;
  long *plVar9;
  long lVar10;
  long unaff_x24;
  undefined8 *puVar11;
  long unaff_x25;
  undefined8 *puVar12;
  long *unaff_x27;
  
  puVar1 = PTR_DAT_092a1248;
  puVar12 = *(undefined8 **)(unaff_x25 + 0x268);
  puVar11 = *(undefined8 **)(unaff_x24 + 600);
  uVar7 = (ulong)*(ushort *)(param_1 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *unaff_x27) {
        puVar3 = (undefined8 *)(param_1 + (long)(*piVar8 + 10) * 0x10 + 0x138);
        goto LAB_045fa3e0;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar3 = (undefined8 *)FUN_040b1e00();
LAB_045fa3e0:
  uVar4 = (*(code *)*puVar3)();
  uVar5 = thunk_FUN_040b4efc(*puVar12);
  FUN_05cb7cbc(uVar5,*puVar11);
  lVar10 = *(long *)puVar1;
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
  puVar2 = PTR_DAT_092a1270;
  lVar6 = *(long *)(*(long *)(lVar10 + 0x38) + 0x10);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_040b1acc();
  }
  FUN_051fe21c(uVar4,uVar5,**(undefined8 **)(lVar6 + 0xb8),*(undefined8 *)puVar2);
  plVar9 = *(long **)(unaff_x19 + 0x10);
  if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  lVar6 = *plVar9;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *unaff_x27) {
        puVar3 = (undefined8 *)(lVar6 + (long)(*piVar8 + 0xb) * 0x10 + 0x138);
        goto LAB_045fa4d4;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar3 = (undefined8 *)FUN_040b1e00(plVar9,*unaff_x27,0xb);
LAB_045fa4d4:
  uVar4 = (*(code *)*puVar3)(plVar9,puVar3[1]);
  uVar5 = thunk_FUN_040b4efc(*puVar12);
  FUN_05cb7cbc(uVar5,*puVar11);
  lVar10 = *(long *)puVar1;
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
  puVar1 = PTR_DAT_09295c80;
  lVar6 = *(long *)(*(long *)(lVar10 + 0x38) + 0x10);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_040b1acc();
  }
  FUN_051fe21c(uVar4,uVar5,**(undefined8 **)(lVar6 + 0xb8),*(undefined8 *)puVar2);
  uVar4 = thunk_FUN_040b4efc(*(undefined8 *)puVar1);
  FUN_07895900();
  FUN_078950c4(uVar4,0);
  return;
}


