/*
FUNCTION_NAME: Tests.Integration.Core.Framework.Repository.Scenarios.JSON.JSONScenarioDeserializationTest.<GivenSerializedScenarioWithStringOutputSocket_WhenConvert_StringOutputSocketIsConverted>d__32$$SetStateMachine
ENTRY_POINT: 045fe1f8
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


void Tests_Integration_Core_Framework_Repository_Scenarios_JSON_JSONScenarioDeserializationTest_<GivenSerializedScenarioWithStringOutputSocket_WhenConvert_StringOutputSocketIsConverted>d__32__SetStateMachine
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long *in_x11;
  long unaff_x19;
  long *plVar11;
  long *unaff_x23;
  long lVar12;
  undefined1 auVar13 [16];
  
  uVar9 = (ulong)*(ushort *)(param_1 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == *in_x11) {
        puVar5 = (undefined8 *)(param_1 + (long)(*piVar10 + 9) * 0x10 + 0x138);
        goto LAB_045fe244;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar5 = (undefined8 *)FUN_040b1e00();
LAB_045fe244:
  auVar13 = (*(code *)*puVar5)();
  lVar12 = *unaff_x23;
  uVar6 = *(undefined8 *)(unaff_x19 + 0x50);
  uVar7 = *(undefined8 *)(unaff_x19 + 0x58);
  lVar8 = *(long *)(lVar12 + 0x38);
  if (lVar8 == 0) {
    FUN_040b1b28(lVar12);
    lVar8 = *(long *)(lVar12 + 0x38);
  }
  lVar8 = *(long *)(lVar8 + 0x10);
  if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_040b1acc();
  }
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  puVar1 = PTR_DAT_092a11a8;
  lVar8 = *(long *)(*(long *)(lVar12 + 0x38) + 0x10);
  if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_040b1acc();
  }
  FUN_051fe834(auVar13._0_8_,auVar13._8_8_,uVar6,uVar7,**(undefined8 **)(lVar8 + 0xb8),
               *(undefined8 *)puVar1);
  puVar4 = PTR_DAT_092a13e0;
  puVar3 = PTR_DAT_092a11e0;
  puVar2 = PTR_DAT_092955b8;
  puVar1 = PTR_DAT_09285978;
  lVar8 = *(long *)(unaff_x19 + 0x40);
  if ((lVar8 == 0) || (plVar11 = *(long **)(unaff_x19 + 0x20), plVar11 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  lVar12 = *plVar11;
  uVar9 = (ulong)*(ushort *)(lVar12 + 0x12e);
  uVar6 = *(undefined8 *)(lVar8 + 0x10);
  uVar7 = *(undefined8 *)(lVar8 + 0x18);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_092a11e8) {
        puVar5 = (undefined8 *)(lVar12 + (long)(*piVar10 + 0xb) * 0x10 + 0x138);
        goto LAB_045fe370;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar5 = (undefined8 *)FUN_040b1e00(plVar11,*(long *)PTR_DAT_092a11e8,0xb);
LAB_045fe370:
  uVar6 = (*(code *)*puVar5)(plVar11,uVar6,uVar7,puVar5[1]);
  uVar7 = thunk_FUN_040b4efc(*(undefined8 *)puVar2);
  FUN_045b8dc4(uVar7,*(undefined8 *)puVar1,0);
  FUN_077efa74(uVar6,uVar7,0);
  uVar6 = thunk_FUN_040b4efc(*(undefined8 *)puVar3);
  FUN_078959d8();
  FUN_04e33ad8(uVar6,*(undefined8 *)puVar4);
  return;
}


