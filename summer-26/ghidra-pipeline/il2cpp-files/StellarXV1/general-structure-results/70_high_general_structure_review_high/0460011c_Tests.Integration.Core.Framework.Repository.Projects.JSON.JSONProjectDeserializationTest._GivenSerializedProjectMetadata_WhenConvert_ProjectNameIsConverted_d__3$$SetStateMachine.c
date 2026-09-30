/*
FUNCTION_NAME: Tests.Integration.Core.Framework.Repository.Projects.JSON.JSONProjectDeserializationTest.<GivenSerializedProjectMetadata_WhenConvert_ProjectNameIsConverted>d__3$$SetStateMachine
ENTRY_POINT: 0460011c
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Tests_Integration_Core_Framework_Repository_Projects_JSON_JSONProjectDeserializationTest_<GivenSerializedProjectMetadata_WhenConvert_ProjectNameIsConverted>d__3__SetStateMachine
               (undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  undefined4 *unaff_x19;
  long *plVar6;
  long lVar7;
  long *unaff_x23;
  long unaff_x24;
  undefined8 uStack0000000000000008;
  undefined8 in_stack_00000028;
  
  uStack0000000000000008 = 0;
  FUN_07656fb4(&stack0x00000008,1000,0);
  lVar7 = *(long *)PTR_DAT_092a1420;
  lVar3 = *(long *)(lVar7 + 0x38);
  if (lVar3 == 0) {
    FUN_040b1b28(lVar7);
    lVar3 = *(long *)(lVar7 + 0x38);
  }
  lVar3 = *(long *)(lVar3 + 0x10);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_040b1acc();
  }
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  lVar3 = *(long *)(*(long *)(lVar7 + 0x38) + 0x10);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_040b1acc();
  }
  FUN_051fdbf0(param_1,uStack0000000000000008,**(undefined8 **)(lVar3 + 0xb8),
               *(undefined8 *)PTR_DAT_092a1440);
  plVar6 = *(long **)(unaff_x24 + 0x68);
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  lVar3 = *plVar6;
  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_09295880) {
        puVar1 = (undefined8 *)(lVar3 + (long)(*piVar5 + 6) * 0x10 + 0x138);
        goto LAB_0460020c;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar1 = (undefined8 *)FUN_040b1e00(plVar6,*(long *)PTR_DAT_09295880,6);
LAB_0460020c:
  lVar3 = (*(code *)*puVar1)(plVar6,puVar1[1]);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  in_stack_00000028 = FUN_06649f2c(lVar3,*(undefined8 *)PTR_DAT_092964b0);
  uVar4 = FUN_065f12f0(&stack0x00000028,*(undefined8 *)PTR_DAT_092964a8);
  if ((uVar4 & 1) == 0) {
    *unaff_x19 = 0;
    *(undefined8 *)(unaff_x19 + 10) = in_stack_00000028;
    thunk_FUN_040ec700(unaff_x19 + 10,0);
    if (*(int *)(*unaff_x23 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    FUN_04e442c4(unaff_x19 + 2,&stack0x00000028);
  }
  else {
    lVar3 = FUN_065f1330(&stack0x00000028,*(undefined8 *)PTR_DAT_092964a0);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    uVar2 = FUN_05c26ab8(lVar3,0,*(undefined8 *)PTR_DAT_092a1438);
    FUN_04e30ee8(uVar2,*(undefined8 *)PTR_DAT_092a1428);
    lVar3 = *unaff_x23;
    *unaff_x19 = 0xfffffffe;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    FUN_0759053c(unaff_x19 + 2,0);
  }
  return;
}


