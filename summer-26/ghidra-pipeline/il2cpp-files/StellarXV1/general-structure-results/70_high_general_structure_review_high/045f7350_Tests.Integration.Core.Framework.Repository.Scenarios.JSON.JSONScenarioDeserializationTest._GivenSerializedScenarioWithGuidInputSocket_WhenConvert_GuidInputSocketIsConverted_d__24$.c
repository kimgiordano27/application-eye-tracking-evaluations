/*
FUNCTION_NAME: Tests.Integration.Core.Framework.Repository.Scenarios.JSON.JSONScenarioDeserializationTest.<GivenSerializedScenarioWithGuidInputSocket_WhenConvert_GuidInputSocketIsConverted>d__24$$MoveNext
ENTRY_POINT: 045f7350
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_6;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Tests_Integration_Core_Framework_Repository_Scenarios_JSON_JSONScenarioDeserializationTest_<GivenSerializedScenarioWithGuidInputSocket_WhenConvert_GuidInputSocketIsConverted>d__24__MoveNext
               (void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 *puVar8;
  int *piVar9;
  int *unaff_x19;
  long unaff_x20;
  undefined8 uVar10;
  long lVar11;
  undefined8 in_stack_00000018;
  
  FUN_04077588(PTR_DAT_092a10d0);
  FUN_04077588(PTR_DAT_09285a68);
  FUN_04077588(PTR_DAT_09296148);
  FUN_04077588(PTR_DAT_092867e0);
  FUN_04077588(PTR_DAT_09296150);
  *(undefined1 *)(unaff_x20 + 0x45e) = 1;
  puVar4 = PTR_DAT_09285a68;
  lVar11 = *(long *)(unaff_x19 + 8);
  in_stack_00000018 = 0;
  if (*unaff_x19 == 0) {
    in_stack_00000018 = *(undefined8 *)(unaff_x19 + 10);
    unaff_x19[10] = 0;
    unaff_x19[0xb] = 0;
    *unaff_x19 = -1;
  }
  else {
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    uVar10 = *(undefined8 *)(lVar11 + 0x20);
    uVar2 = *(undefined8 *)(lVar11 + 0x28);
    uVar1 = *(undefined8 *)(lVar11 + 0x10);
    uVar3 = *(undefined8 *)(lVar11 + 0x18);
    lVar5 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092867e0);
    FUN_04639b10(lVar5,uVar1,uVar10,uVar2,uVar3,0);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar5 = FUN_04639bf8(lVar5,0);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    in_stack_00000018 = FUN_076f1ee4(lVar5,0);
    uVar6 = FUN_07591eb4(&stack0x00000018,0);
    if ((uVar6 & 1) == 0) {
      *unaff_x19 = 0;
      *(undefined8 *)(unaff_x19 + 10) = in_stack_00000018;
      thunk_FUN_040ec700(unaff_x19 + 10,0);
      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      FUN_04e4f488(unaff_x19 + 2,&stack0x00000018);
      return;
    }
  }
  FUN_07591f7c(&stack0x00000018,0);
  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  plVar7 = (long *)FUN_051fcb28(*(undefined8 *)(lVar11 + 0x10),*(undefined8 *)PTR_DAT_09296150);
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  lVar5 = *plVar7;
  uVar10 = *(undefined8 *)(lVar11 + 0x18);
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_09296148) {
        puVar8 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
        goto LAB_045f74f8;
      }
      uVar6 = uVar6 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar6 != 0);
  }
  puVar8 = (undefined8 *)FUN_040b1e00(plVar7,*(long *)PTR_DAT_09296148,0);
LAB_045f74f8:
  (*(code *)*puVar8)(plVar7,uVar10,puVar8[1]);
  lVar11 = *(long *)puVar4;
  *unaff_x19 = -2;
  if (*(int *)(lVar11 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  FUN_0759053c(unaff_x19 + 2,0);
  return;
}


