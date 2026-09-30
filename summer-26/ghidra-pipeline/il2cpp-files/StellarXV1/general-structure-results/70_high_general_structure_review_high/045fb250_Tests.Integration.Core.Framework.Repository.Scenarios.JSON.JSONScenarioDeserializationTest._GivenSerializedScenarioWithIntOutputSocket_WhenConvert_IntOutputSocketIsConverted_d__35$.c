/*
FUNCTION_NAME: Tests.Integration.Core.Framework.Repository.Scenarios.JSON.JSONScenarioDeserializationTest.<GivenSerializedScenarioWithIntOutputSocket_WhenConvert_IntOutputSocketIsConverted>d__35$$SetStateMachine
ENTRY_POINT: 045fb250
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


void Tests_Integration_Core_Framework_Repository_Scenarios_JSON_JSONScenarioDeserializationTest_<GivenSerializedScenarioWithIntOutputSocket_WhenConvert_IntOutputSocketIsConverted>d__35__SetStateMachine
               (void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  int *piVar12;
  ulong uVar13;
  long unaff_x19;
  long unaff_x20;
  long *plVar14;
  long *unaff_x27;
  undefined1 auVar15 [16];
  
  FUN_051fe834();
  puVar8 = PTR_DAT_092a12e0;
  puVar7 = PTR_DAT_0929add0;
  lVar11 = *(long *)(unaff_x19 + 0x40);
  if ((lVar11 != 0) && (plVar14 = *(long **)(unaff_x19 + 0x68), plVar14 != (long *)0x0)) {
    lVar10 = *plVar14;
    uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
    uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
    uVar2 = *(undefined8 *)(lVar11 + 0x30);
    uVar5 = *(undefined8 *)(lVar11 + 0x38);
    uVar3 = *(undefined8 *)(lVar11 + 0x20);
    uVar6 = *(undefined8 *)(lVar11 + 0x28);
    uVar13 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar13 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_09295880) {
          puVar9 = (undefined8 *)(lVar10 + (long)(*piVar12 + 0xc) * 0x10 + 0x138);
          goto LAB_045fb2e0;
        }
        uVar13 = uVar13 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar13 != 0);
    }
    puVar9 = (undefined8 *)FUN_040b1e00(plVar14,*(long *)PTR_DAT_09295880,0xc);
LAB_045fb2e0:
    (*(code *)*puVar9)(plVar14,uVar1,uVar4,uVar2,uVar5,uVar6,uVar3,puVar9[1]);
    plVar14 = (long *)FUN_051fcd04(*(undefined8 *)(unaff_x19 + 0x10),1,*(undefined8 *)puVar8);
    if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
      thunk_FUN_040d65a8(*(long *)puVar7);
    }
    auVar15 = FUN_04a01538(*(undefined8 *)PTR_DAT_0929b320);
    if (plVar14 != (long *)0x0) {
      lVar11 = *plVar14;
      uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar13 != 0) {
        piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *unaff_x27) {
            puVar9 = (undefined8 *)(lVar11 + (long)(*piVar12 + 5) * 0x10 + 0x138);
            goto LAB_045fb398;
          }
          uVar13 = uVar13 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar13 != 0);
      }
      puVar9 = (undefined8 *)FUN_040b1e00(plVar14,*unaff_x27,5);
LAB_045fb398:
      (*(code *)*puVar9)(plVar14,auVar15._0_8_,auVar15._8_8_,0,puVar9[1]);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


