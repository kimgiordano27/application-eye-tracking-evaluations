/*
FUNCTION_NAME: Tests.Integration.Core.Framework.Repository.Scenarios.JSON.JSONScenarioDeserializationTest.<GivenSerializedScenarioWithVector3InputSocket_WhenConvert_Vector3InputSocketIsConverted>d__28$$MoveNext
ENTRY_POINT: 045fe260
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Tests_Integration_Core_Framework_Repository_Scenarios_JSON_JSONScenarioDeserializationTest_<GivenSerializedScenarioWithVector3InputSocket_WhenConvert_Vector3InputSocketIsConverted>d__28__MoveNext
               (undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long unaff_x19;
  long *plVar12;
  long unaff_x24;
  
  lVar8 = *(long *)(unaff_x24 + 0x38);
  if (lVar8 == 0) {
    FUN_040b1b28();
    lVar8 = *(long *)(unaff_x24 + 0x38);
  }
  lVar8 = *(long *)(lVar8 + 0x10);
  if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_040b1acc();
  }
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  if ((*(ushort *)(*(long *)(*(long *)(unaff_x24 + 0x38) + 0x10) + 0x135) & 1) == 0) {
    FUN_040b1acc();
  }
  FUN_051fe834(param_1,param_2);
  puVar4 = PTR_DAT_092a13e0;
  puVar3 = PTR_DAT_092a11e0;
  puVar2 = PTR_DAT_092955b8;
  puVar1 = PTR_DAT_09285978;
  lVar8 = *(long *)(unaff_x19 + 0x40);
  if ((lVar8 == 0) || (plVar12 = *(long **)(unaff_x19 + 0x20), plVar12 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  lVar9 = *plVar12;
  uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
  uVar6 = *(undefined8 *)(lVar8 + 0x10);
  uVar7 = *(undefined8 *)(lVar8 + 0x18);
  if (uVar10 != 0) {
    piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_092a11e8) {
        puVar5 = (undefined8 *)(lVar9 + (long)(*piVar11 + 0xb) * 0x10 + 0x138);
        goto LAB_045fe370;
      }
      uVar10 = uVar10 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar10 != 0);
  }
  puVar5 = (undefined8 *)FUN_040b1e00(plVar12,*(long *)PTR_DAT_092a11e8,0xb);
LAB_045fe370:
  uVar6 = (*(code *)*puVar5)(plVar12,uVar6,uVar7,puVar5[1]);
  uVar7 = thunk_FUN_040b4efc(*(undefined8 *)puVar2);
  FUN_045b8dc4(uVar7,*(undefined8 *)puVar1,0);
  FUN_077efa74(uVar6,uVar7,0);
  uVar6 = thunk_FUN_040b4efc(*(undefined8 *)puVar3);
  FUN_078959d8();
  FUN_04e33ad8(uVar6,*(undefined8 *)puVar4);
  return;
}


