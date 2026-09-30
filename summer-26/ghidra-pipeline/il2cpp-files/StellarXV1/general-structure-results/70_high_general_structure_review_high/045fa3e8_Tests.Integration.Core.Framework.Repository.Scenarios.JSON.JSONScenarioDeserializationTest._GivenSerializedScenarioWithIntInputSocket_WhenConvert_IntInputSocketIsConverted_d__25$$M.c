/*
FUNCTION_NAME: Tests.Integration.Core.Framework.Repository.Scenarios.JSON.JSONScenarioDeserializationTest.<GivenSerializedScenarioWithIntInputSocket_WhenConvert_IntInputSocketIsConverted>d__25$$MoveNext
ENTRY_POINT: 045fa3e8
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


void Tests_Integration_Core_Framework_Repository_Scenarios_JSON_JSONScenarioDeserializationTest_<GivenSerializedScenarioWithIntInputSocket_WhenConvert_IntInputSocketIsConverted>d__25__MoveNext
               (code *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long unaff_x19;
  long *plVar9;
  long lVar10;
  long *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  long *unaff_x27;
  
  uVar3 = (*param_1)();
  uVar4 = thunk_FUN_040b4efc(*unaff_x25);
  FUN_05cb7cbc(uVar4,*unaff_x24);
  lVar10 = *unaff_x23;
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
  FUN_051fe21c(uVar3,uVar4,**(undefined8 **)(lVar6 + 0xb8),*(undefined8 *)puVar2);
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
        puVar5 = (undefined8 *)(lVar6 + (long)(*piVar8 + 0xb) * 0x10 + 0x138);
        goto LAB_045fa4d4;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar5 = (undefined8 *)FUN_040b1e00(plVar9,*unaff_x27,0xb);
LAB_045fa4d4:
  uVar3 = (*(code *)*puVar5)(plVar9,puVar5[1]);
  uVar4 = thunk_FUN_040b4efc(*unaff_x25);
  FUN_05cb7cbc(uVar4,*unaff_x24);
  lVar10 = *unaff_x23;
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
  FUN_051fe21c(uVar3,uVar4,**(undefined8 **)(lVar6 + 0xb8),*(undefined8 *)puVar2);
  uVar3 = thunk_FUN_040b4efc(*(undefined8 *)puVar1);
  FUN_07895900();
  FUN_078950c4(uVar3,0);
  return;
}


