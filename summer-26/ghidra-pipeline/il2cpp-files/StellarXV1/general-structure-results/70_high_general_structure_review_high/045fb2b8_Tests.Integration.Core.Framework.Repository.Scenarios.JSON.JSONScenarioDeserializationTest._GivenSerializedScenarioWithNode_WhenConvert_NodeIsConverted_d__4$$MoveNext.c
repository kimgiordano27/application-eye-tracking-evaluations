/*
FUNCTION_NAME: Tests.Integration.Core.Framework.Repository.Scenarios.JSON.JSONScenarioDeserializationTest.<GivenSerializedScenarioWithNode_WhenConvert_NodeIsConverted>d__4$$MoveNext
ENTRY_POINT: 045fb2b8
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Tests_Integration_Core_Framework_Repository_Scenarios_JSON_JSONScenarioDeserializationTest_<GivenSerializedScenarioWithNode_WhenConvert_NodeIsConverted>d__4__MoveNext
               (long param_1,undefined8 param_2,long param_3)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  int *in_x9;
  ulong uVar4;
  long in_x10;
  int *piVar5;
  long unaff_x19;
  long *unaff_x27;
  undefined8 *unaff_x28;
  long *unaff_x29;
  undefined1 auVar6 [16];
  
  while (!(bool)in_ZR) {
    if (*(long *)(in_x9 + 2) == param_3) {
      puVar1 = (undefined8 *)(param_1 + (long)(in_x9[4] + 0xc) * 0x10 + 0x138);
      goto LAB_045fb2e0;
    }
    in_x10 = in_x10 + -1;
    in_x9 = in_x9 + 4;
    in_ZR = in_x10 == 0;
  }
  puVar1 = (undefined8 *)FUN_040b1e00();
LAB_045fb2e0:
  (*(code *)*puVar1)();
  plVar2 = (long *)FUN_051fcd04(*(undefined8 *)(unaff_x19 + 0x10),1,*unaff_x28);
  if (*(int *)(*unaff_x29 + 0xe4) == 0) {
    thunk_FUN_040d65a8(*unaff_x29);
  }
  auVar6 = FUN_04a01538(*(undefined8 *)PTR_DAT_0929b320);
  if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  lVar3 = *plVar2;
  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == *unaff_x27) {
        puVar1 = (undefined8 *)(lVar3 + (long)(*piVar5 + 5) * 0x10 + 0x138);
        goto LAB_045fb398;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar1 = (undefined8 *)FUN_040b1e00(plVar2,*unaff_x27,5);
LAB_045fb398:
  (*(code *)*puVar1)(plVar2,auVar6._0_8_,auVar6._8_8_,0,puVar1[1]);
  return;
}


