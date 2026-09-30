/*
FUNCTION_NAME: Tests.Integration.Core.Framework.Repository.Scenarios.JSON.JSONScenarioDeserializationTest.<GivenSerializedScenarioWithIntInputSocket_WhenConvert_IntInputSocketIsConverted>d__25$$SetStateMachine
ENTRY_POINT: 045faae8
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


void Tests_Integration_Core_Framework_Repository_Scenarios_JSON_JSONScenarioDeserializationTest_<GivenSerializedScenarioWithIntInputSocket_WhenConvert_IntInputSocketIsConverted>d__25__SetStateMachine
               (long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  int *piVar13;
  long unaff_x19;
  long *plVar14;
  long unaff_x22;
  long *unaff_x23;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  long *unaff_x27;
  
  if ((*(ushort *)(param_1 + 0x135) & 1) == 0) {
    param_1 = FUN_040b1acc();
  }
                    /* try { // try from 045faafc to 046fab0b has its CatchHandler @ 045fab0c */
  if (*(int *)(param_1 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  puVar5 = PTR_DAT_092a1270;
                    /* catch() { ... } // from try @ 045faabc with catch @ 045fab0c
                       catch() { ... } // from try @ 045faafc with catch @ 045fab0c */
                    /* try { // try from 045fab10 to 046fab13 has its CatchHandler @ 045fab1c */
                    /* try { // try from 045fab14 to 046fab1f has its CatchHandler @ 045fa8b0 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 045fab10 with catch @ 045fab1c
                        */
  if ((*(ushort *)(*(long *)(*(long *)(unaff_x22 + 0x38) + 0x10) + 0x135) & 1) == 0) {
    FUN_040b1acc();
  }
  FUN_051fe21c();
  plVar14 = *(long **)(unaff_x19 + 0x10);
  if (plVar14 != (long *)0x0) {
    lVar9 = *plVar14;
    uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar11 != 0) {
      piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *unaff_x27) {
          puVar7 = (undefined8 *)(lVar9 + (long)(*piVar13 + 0xb) * 0x10 + 0x138);
          goto LAB_045fab94;
        }
        uVar11 = uVar11 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar11 != 0);
    }
    puVar7 = (undefined8 *)FUN_040b1e00(plVar14,*unaff_x27,0xb);
LAB_045fab94:
    uVar8 = (*(code *)*puVar7)(plVar14,puVar7[1]);
    lVar9 = thunk_FUN_040b4efc(*unaff_x26);
    FUN_05cb7cbc(lVar9,*unaff_x25);
    if (lVar9 != 0) {
      lVar10 = *(long *)(lVar9 + 0x10);
      uVar1 = *(undefined8 *)(unaff_x19 + 0x50);
      uVar2 = *(undefined8 *)(unaff_x19 + 0x58);
      lVar12 = *(long *)PTR_DAT_092a1250;
      *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
      if (lVar10 != 0) {
        uVar3 = *(uint *)(lVar9 + 0x18);
        if (uVar3 < *(uint *)(lVar10 + 0x18)) {
          lVar10 = lVar10 + (long)(int)uVar3 * 0x10;
          *(uint *)(lVar9 + 0x18) = uVar3 + 1;
          puVar7 = (undefined8 *)(lVar10 + 0x20);
          *puVar7 = uVar1;
          *(undefined8 *)(lVar10 + 0x28) = uVar2;
          thunk_FUN_040ec700(puVar7,0);
        }
        else {
          FUN_05cb8568(lVar9,uVar1,uVar2,
                       *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
        }
        lVar12 = *unaff_x23;
        lVar10 = *(long *)(lVar12 + 0x38);
        if (lVar10 == 0) {
          FUN_040b1b28(lVar12);
          lVar10 = *(long *)(lVar12 + 0x38);
        }
        lVar10 = *(long *)(lVar10 + 0x10);
        if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
          lVar10 = FUN_040b1acc();
        }
        if (*(int *)(lVar10 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
        }
        puVar6 = PTR_DAT_092a12c0;
        puVar4 = PTR_DAT_09295c80;
        lVar10 = *(long *)(*(long *)(lVar12 + 0x38) + 0x10);
        if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
          lVar10 = FUN_040b1acc();
        }
        FUN_051fe21c(uVar8,lVar9,**(undefined8 **)(lVar10 + 0xb8),*(undefined8 *)puVar5);
        uVar8 = thunk_FUN_040b4efc(*(undefined8 *)puVar4);
        FUN_07895900();
        FUN_04e339c4(uVar8,*(undefined8 *)puVar6);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


