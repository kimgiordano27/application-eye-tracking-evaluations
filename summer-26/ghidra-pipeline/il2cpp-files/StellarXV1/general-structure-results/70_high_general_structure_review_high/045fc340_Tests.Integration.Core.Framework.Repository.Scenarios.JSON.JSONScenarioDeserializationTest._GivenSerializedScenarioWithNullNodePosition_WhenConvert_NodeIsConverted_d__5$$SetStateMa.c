/*
FUNCTION_NAME: Tests.Integration.Core.Framework.Repository.Scenarios.JSON.JSONScenarioDeserializationTest.<GivenSerializedScenarioWithNullNodePosition_WhenConvert_NodeIsConverted>d__5$$SetStateMachine
ENTRY_POINT: 045fc340
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Tests_Integration_Core_Framework_Repository_Scenarios_JSON_JSONScenarioDeserializationTest_<GivenSerializedScenarioWithNullNodePosition_WhenConvert_NodeIsConverted>d__5__SetStateMachine
               (long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  int *piVar11;
  long *plVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined1 auVar16 [16];
  
  if ((DAT_09888486 & 1) == 0) {
    FUN_04077588(PTR_DAT_092a1310);
    FUN_04077588(PTR_DAT_0929add0);
    FUN_04077588(PTR_DAT_092a11a0);
    FUN_04077588(PTR_DAT_092a1210);
    FUN_04077588(PTR_DAT_092a11e0);
    FUN_04077588(PTR_DAT_09296148);
    FUN_04077588(PTR_DAT_092a11e8);
    FUN_04077588(PTR_DAT_092a1318);
    FUN_04077588(PTR_DAT_09295598);
    FUN_04077588(PTR_DAT_092a11a8);
    FUN_04077588(PTR_DAT_09285978);
    DAT_09888486 = 1;
  }
  puVar1 = PTR_DAT_092a11a0;
  lVar10 = *(long *)(param_1 + 0x40);
  if ((lVar10 != 0) && (plVar12 = *(long **)(param_1 + 0x10), plVar12 != (long *)0x0)) {
    lVar8 = *plVar12;
    uVar6 = *(undefined8 *)(lVar10 + 0x10);
    uVar7 = *(undefined8 *)(lVar10 + 0x18);
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_09296148) {
          puVar4 = (undefined8 *)(lVar8 + (long)(*piVar11 + 9) * 0x10 + 0x138);
          goto LAB_045fc464;
        }
        uVar9 = uVar9 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined8 *)FUN_040b1e00(plVar12,*(long *)PTR_DAT_09296148,9);
LAB_045fc464:
    auVar16 = (*(code *)*puVar4)(plVar12,uVar6,uVar7,puVar4[1]);
    lVar8 = *(long *)puVar1;
    uVar6 = *(undefined8 *)(param_1 + 0x50);
    uVar7 = *(undefined8 *)(param_1 + 0x58);
    lVar10 = *(long *)(lVar8 + 0x38);
    if (lVar10 == 0) {
      FUN_040b1b28(lVar8);
      lVar10 = *(long *)(lVar8 + 0x38);
    }
    lVar10 = *(long *)(lVar10 + 0x10);
    if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_040b1acc();
    }
    if (*(int *)(lVar10 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    puVar1 = PTR_DAT_092a11a8;
    lVar10 = *(long *)(*(long *)(lVar8 + 0x38) + 0x10);
    if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_040b1acc();
    }
    FUN_051fe834(auVar16._0_8_,auVar16._8_8_,uVar6,uVar7,**(undefined8 **)(lVar10 + 0xb8),
                 *(undefined8 *)puVar1);
    puVar1 = PTR_DAT_092a1310;
    lVar10 = *(long *)(param_1 + 0x40);
    if (lVar10 != 0) {
      plVar12 = *(long **)(param_1 + 0x20);
      uVar6 = *(undefined8 *)(lVar10 + 0x10);
      uVar7 = *(undefined8 *)(lVar10 + 0x18);
      uVar14 = *(undefined8 *)(lVar10 + 0x20);
      uVar15 = *(undefined8 *)(lVar10 + 0x50);
      uVar13 = *(undefined8 *)(lVar10 + 0x78);
      if (*(int *)(*(long *)PTR_DAT_0929add0 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      uVar5 = FUN_04a0134c(*(undefined8 *)puVar1);
      puVar3 = PTR_DAT_092a11e0;
      puVar2 = PTR_DAT_09295598;
      puVar1 = PTR_DAT_09285978;
      if (plVar12 != (long *)0x0) {
        lVar10 = *plVar12;
        uVar9 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar9 != 0) {
          piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_092a11e8) {
              puVar4 = (undefined8 *)(lVar10 + (long)(*piVar11 + 7) * 0x10 + 0x138);
              goto LAB_045fc5d0;
            }
            uVar9 = uVar9 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar9 != 0);
        }
        puVar4 = (undefined8 *)FUN_040b1e00(plVar12,*(long *)PTR_DAT_092a11e8,7);
LAB_045fc5d0:
        uVar6 = (*(code *)*puVar4)(plVar12,uVar6,uVar7,uVar14,uVar15,uVar13,uVar5,puVar4[1]);
        uVar7 = thunk_FUN_040b4efc(*(undefined8 *)puVar2);
        FUN_045b8e2c(uVar7,*(undefined8 *)puVar1,0);
        FUN_077efa74(uVar6,uVar7,0);
        uVar6 = thunk_FUN_040b4efc(*(undefined8 *)puVar3);
        FUN_078959d8(uVar6,param_1,*(undefined8 *)PTR_DAT_092a1318,0);
        FUN_04e33ad8(uVar6,*(undefined8 *)PTR_DAT_092a1210);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


