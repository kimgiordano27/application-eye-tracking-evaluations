/*
FUNCTION_NAME: Tests.Integration.Core.Framework.Repository.Scenarios.JSON.JSONScenarioDeserializationTest.<GivenSerializedScenarioWithOutputSocket_WhenConvert_OutputSocketIsConverted>d__29$$MoveNext
ENTRY_POINT: 045fc970
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Tests_Integration_Core_Framework_Repository_Scenarios_JSON_JSONScenarioDeserializationTest_<GivenSerializedScenarioWithOutputSocket_WhenConvert_OutputSocketIsConverted>d__29__MoveNext
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
  long lVar10;
  int *piVar11;
  long unaff_x19;
  long *plVar12;
  long unaff_x24;
  
  if ((*(ushort *)(param_1 + 0x135) & 1) == 0) {
    param_1 = FUN_040b1acc();
  }
  if (*(int *)(param_1 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  if ((*(ushort *)(*(long *)(*(long *)(unaff_x24 + 0x38) + 0x10) + 0x135) & 1) == 0) {
    FUN_040b1acc();
  }
  FUN_051fe834();
  puVar4 = PTR_DAT_092a1210;
  puVar3 = PTR_DAT_092a11e0;
  puVar2 = PTR_DAT_09295598;
  puVar1 = PTR_DAT_09285978;
  lVar10 = *(long *)(unaff_x19 + 0x40);
  if ((lVar10 == 0) || (plVar12 = *(long **)(unaff_x19 + 0x20), plVar12 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  lVar8 = *plVar12;
  uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
  uVar6 = *(undefined8 *)(lVar10 + 0x10);
  uVar7 = *(undefined8 *)(lVar10 + 0x18);
  if (uVar9 != 0) {
    piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_092a11e8) {
        puVar5 = (undefined8 *)(lVar8 + (long)(*piVar11 + 10) * 0x10 + 0x138);
        goto LAB_045fca60;
      }
      uVar9 = uVar9 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar9 != 0);
  }
  puVar5 = (undefined8 *)FUN_040b1e00(plVar12,*(long *)PTR_DAT_092a11e8,10);
LAB_045fca60:
  uVar6 = (*(code *)*puVar5)(plVar12,uVar6,uVar7,puVar5[1]);
  uVar7 = thunk_FUN_040b4efc(*(undefined8 *)puVar2);
  FUN_045b8e2c(uVar7,*(undefined8 *)puVar1,0);
  FUN_077efa74(uVar6,uVar7,0);
  uVar6 = thunk_FUN_040b4efc(*(undefined8 *)puVar3);
  FUN_078959d8();
  FUN_04e33ad8(uVar6,*(undefined8 *)puVar4);
  return;
}


