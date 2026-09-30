/*
FUNCTION_NAME: Tests.Integration.Core.Framework.Repository.Scenarios.JSON.JSONScenarioDeserializationTest.<GivenSerializedScenarioWithIntOutputSocket_WhenConvert_IntOutputSocketIsConverted>d__35$$MoveNext
ENTRY_POINT: 045fab50
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


void Tests_Integration_Core_Framework_Repository_Scenarios_JSON_JSONScenarioDeserializationTest_<GivenSerializedScenarioWithIntOutputSocket_WhenConvert_IntOutputSocketIsConverted>d__35__MoveNext
               (long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long in_x9;
  long lVar10;
  int *piVar11;
  long unaff_x19;
  long *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  
  if (in_x9 != 0) {
    piVar11 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == param_3) {
        puVar6 = (undefined8 *)(param_1 + (long)(*piVar11 + 0xb) * 0x10 + 0x138);
        goto LAB_045fab94;
      }
      in_x9 = in_x9 + -1;
      piVar11 = piVar11 + 4;
    } while (in_x9 != 0);
  }
  puVar6 = (undefined8 *)FUN_040b1e00();
LAB_045fab94:
  uVar7 = (*(code *)*puVar6)();
  lVar8 = thunk_FUN_040b4efc(*unaff_x26);
  FUN_05cb7cbc(lVar8,*unaff_x25);
  if (lVar8 != 0) {
    lVar9 = *(long *)(lVar8 + 0x10);
    uVar1 = *(undefined8 *)(unaff_x19 + 0x50);
    uVar2 = *(undefined8 *)(unaff_x19 + 0x58);
    lVar10 = *(long *)PTR_DAT_092a1250;
    *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
    if (lVar9 != 0) {
      uVar3 = *(uint *)(lVar8 + 0x18);
      if (uVar3 < *(uint *)(lVar9 + 0x18)) {
        lVar9 = lVar9 + (long)(int)uVar3 * 0x10;
        *(uint *)(lVar8 + 0x18) = uVar3 + 1;
        puVar6 = (undefined8 *)(lVar9 + 0x20);
        *puVar6 = uVar1;
        *(undefined8 *)(lVar9 + 0x28) = uVar2;
        thunk_FUN_040ec700(puVar6,0);
      }
      else {
        FUN_05cb8568(lVar8,uVar1,uVar2,
                     *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
      }
      lVar10 = *unaff_x23;
      lVar9 = *(long *)(lVar10 + 0x38);
      if (lVar9 == 0) {
        FUN_040b1b28(lVar10);
        lVar9 = *(long *)(lVar10 + 0x38);
      }
      lVar9 = *(long *)(lVar9 + 0x10);
      if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_040b1acc();
      }
      if (*(int *)(lVar9 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      puVar5 = PTR_DAT_092a12c0;
      puVar4 = PTR_DAT_09295c80;
      lVar9 = *(long *)(*(long *)(lVar10 + 0x38) + 0x10);
      if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_040b1acc();
      }
      FUN_051fe21c(uVar7,lVar8,**(undefined8 **)(lVar9 + 0xb8),*unaff_x24);
      uVar7 = thunk_FUN_040b4efc(*(undefined8 *)puVar4);
      FUN_07895900();
      FUN_04e339c4(uVar7,*(undefined8 *)puVar5);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


