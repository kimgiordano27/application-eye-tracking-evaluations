/*
FUNCTION_NAME: Tests.Integration.Core.Framework.Repository.Scenarios.JSON.JSONScenarioDeserializationTest.<GivenSerializedScenarioWithNullNodePosition_WhenConvert_NodeIsConverted>d__5$$MoveNext
ENTRY_POINT: 045fbddc
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_11;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Tests_Integration_Core_Framework_Repository_Scenarios_JSON_JSONScenarioDeserializationTest_<GivenSerializedScenarioWithNullNodePosition_WhenConvert_NodeIsConverted>d__5__MoveNext
               (void)

{
  undefined8 uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  int *piVar13;
  long unaff_x19;
  undefined8 uVar14;
  long unaff_x20;
  long *plVar15;
  undefined1 auVar16 [16];
  
  FUN_04077588();
  FUN_04077588(PTR_DAT_0929add0);
  FUN_04077588(PTR_DAT_092a1248);
  FUN_04077588(PTR_DAT_092a11a0);
  FUN_04077588(PTR_DAT_092a12f8);
  FUN_04077588(PTR_DAT_09295880);
  FUN_04077588(PTR_DAT_09296148);
  FUN_04077588(PTR_DAT_092a1250);
  FUN_04077588(PTR_DAT_092a1258);
  FUN_04077588(PTR_DAT_092a1268);
  FUN_04077588(PTR_DAT_092a1300);
  FUN_04077588(PTR_DAT_092a1270);
  FUN_04077588(PTR_DAT_092a11a8);
  *(undefined1 *)(unaff_x20 + 0x484) = 1;
  puVar4 = PTR_DAT_092a11a0;
  puVar3 = PTR_DAT_09296148;
  lVar12 = *(long *)(unaff_x19 + 0x40);
  if ((lVar12 != 0) && (plVar15 = *(long **)(unaff_x19 + 0x10), plVar15 != (long *)0x0)) {
    lVar9 = *plVar15;
    uVar8 = *(undefined8 *)(lVar12 + 0x10);
    uVar14 = *(undefined8 *)(lVar12 + 0x18);
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_09296148) {
          puVar7 = (undefined8 *)(lVar9 + (long)(*piVar13 + 9) * 0x10 + 0x138);
          goto LAB_045fbeec;
        }
        uVar10 = uVar10 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar10 != 0);
    }
    puVar7 = (undefined8 *)FUN_040b1e00(plVar15,*(long *)PTR_DAT_09296148,9);
LAB_045fbeec:
    auVar16 = (*(code *)*puVar7)(plVar15,uVar8,uVar14,puVar7[1]);
    lVar9 = *(long *)puVar4;
    uVar8 = *(undefined8 *)(unaff_x19 + 0x50);
    uVar14 = *(undefined8 *)(unaff_x19 + 0x58);
    lVar12 = *(long *)(lVar9 + 0x38);
    if (lVar12 == 0) {
      FUN_040b1b28(lVar9);
      lVar12 = *(long *)(lVar9 + 0x38);
    }
    lVar12 = *(long *)(lVar12 + 0x10);
    if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
      lVar12 = FUN_040b1acc();
    }
    if (*(int *)(lVar12 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    puVar5 = PTR_DAT_092a11a8;
    puVar4 = PTR_DAT_0929add0;
    lVar12 = *(long *)(*(long *)(lVar9 + 0x38) + 0x10);
    if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
      lVar12 = FUN_040b1acc();
    }
    puVar6 = PTR_DAT_092a12b0;
    FUN_051fe834(auVar16._0_8_,auVar16._8_8_,uVar8,uVar14,**(undefined8 **)(lVar12 + 0xb8),
                 *(undefined8 *)puVar5);
    plVar15 = *(long **)(unaff_x19 + 0x10);
    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    uVar8 = FUN_04a0134c(*(undefined8 *)puVar6);
    puVar5 = PTR_DAT_092a1268;
    puVar4 = PTR_DAT_092a1258;
    if (plVar15 != (long *)0x0) {
      lVar12 = *plVar15;
      uVar10 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar10 != 0) {
        piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)puVar3) {
            puVar7 = (undefined8 *)(lVar12 + (long)(*piVar13 + 10) * 0x10 + 0x138);
            goto LAB_045fc018;
          }
          uVar10 = uVar10 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar10 != 0);
      }
      puVar7 = (undefined8 *)FUN_040b1e00(plVar15,*(long *)puVar3,10);
LAB_045fc018:
      uVar8 = (*(code *)*puVar7)(plVar15,uVar8,puVar7[1]);
      lVar12 = thunk_FUN_040b4efc(*(undefined8 *)puVar5);
      FUN_05cb7cbc(lVar12,*(undefined8 *)puVar4);
      if (lVar12 != 0) {
        lVar9 = *(long *)(lVar12 + 0x10);
        uVar14 = *(undefined8 *)(unaff_x19 + 0x50);
        uVar1 = *(undefined8 *)(unaff_x19 + 0x58);
        lVar11 = *(long *)PTR_DAT_092a1250;
        *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
        puVar3 = PTR_DAT_092a1248;
        if (lVar9 != 0) {
          uVar2 = *(uint *)(lVar12 + 0x18);
          if (uVar2 < *(uint *)(lVar9 + 0x18)) {
            lVar9 = lVar9 + (long)(int)uVar2 * 0x10;
            *(uint *)(lVar12 + 0x18) = uVar2 + 1;
            puVar7 = (undefined8 *)(lVar9 + 0x20);
            *puVar7 = uVar14;
            *(undefined8 *)(lVar9 + 0x28) = uVar1;
            thunk_FUN_040ec700(puVar7,0);
          }
          else {
            FUN_05cb8568(lVar12,uVar14,uVar1,
                         *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
          }
          lVar11 = *(long *)puVar3;
          lVar9 = *(long *)(lVar11 + 0x38);
          if (lVar9 == 0) {
            FUN_040b1b28(lVar11);
            lVar9 = *(long *)(lVar11 + 0x38);
          }
          lVar9 = *(long *)(lVar9 + 0x10);
          if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
            lVar9 = FUN_040b1acc();
          }
          if (*(int *)(lVar9 + 0xe4) == 0) {
            thunk_FUN_040d65a8();
          }
          puVar3 = PTR_DAT_092a1270;
          lVar9 = *(long *)(*(long *)(lVar11 + 0x38) + 0x10);
          if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
            lVar9 = FUN_040b1acc();
          }
          FUN_051fe21c(uVar8,lVar12,**(undefined8 **)(lVar9 + 0xb8),*(undefined8 *)puVar3);
          puVar4 = PTR_DAT_092a1300;
          puVar3 = PTR_DAT_092a12f0;
          lVar12 = *(long *)(unaff_x19 + 0x40);
          if ((lVar12 != 0) && (plVar15 = *(long **)(unaff_x19 + 0x68), plVar15 != (long *)0x0)) {
            lVar9 = *plVar15;
            uVar8 = *(undefined8 *)(lVar12 + 0x10);
            uVar14 = *(undefined8 *)(lVar12 + 0x18);
            uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
            if (uVar10 != 0) {
              piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_09295880) {
                  puVar7 = (undefined8 *)(lVar9 + (long)(*piVar13 + 0xf) * 0x10 + 0x138);
                  goto LAB_045fc1a0;
                }
                uVar10 = uVar10 - 1;
                piVar13 = piVar13 + 4;
              } while (uVar10 != 0);
            }
            puVar7 = (undefined8 *)FUN_040b1e00(plVar15,*(long *)PTR_DAT_09295880,0xf);
LAB_045fc1a0:
            (*(code *)*puVar7)(plVar15,uVar8,uVar14,puVar7[1]);
            plVar15 = (long *)FUN_051fcd04(*(undefined8 *)(unaff_x19 + 0x18),1,*(undefined8 *)puVar4
                                          );
            uVar14 = *(undefined8 *)(unaff_x19 + 0x40);
            uVar8 = FUN_04a0134c(*(undefined8 *)puVar3);
            if (plVar15 != (long *)0x0) {
              lVar12 = *plVar15;
              uVar10 = (ulong)*(ushort *)(lVar12 + 0x12e);
              if (uVar10 != 0) {
                piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_092a12f8) {
                    puVar7 = (undefined8 *)(lVar12 + (long)(*piVar13 + 1) * 0x10 + 0x138);
                    goto LAB_045fc238;
                  }
                  uVar10 = uVar10 - 1;
                  piVar13 = piVar13 + 4;
                } while (uVar10 != 0);
              }
              puVar7 = (undefined8 *)FUN_040b1e00(plVar15,*(long *)PTR_DAT_092a12f8,1);
LAB_045fc238:
                    /* WARNING: Could not recover jumptable at 0x045fc25c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*(code *)*puVar7)(plVar15,uVar14,uVar8,puVar7[1]);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


