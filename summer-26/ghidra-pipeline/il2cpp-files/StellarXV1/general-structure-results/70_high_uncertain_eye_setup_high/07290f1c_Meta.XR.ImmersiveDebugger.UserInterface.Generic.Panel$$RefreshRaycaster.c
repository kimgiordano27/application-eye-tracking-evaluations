/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Panel$$RefreshRaycaster
ENTRY_POINT: 07290f1c
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_Panel__RefreshRaycaster
               (long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  
  puVar6 = PTR_DAT_092c1ff8;
  puVar5 = PTR_DAT_092c1ff0;
  puVar4 = PTR_DAT_092c1fe8;
  puVar3 = PTR_DAT_092c1fe0;
  puVar2 = PTR_DAT_092c1fd8;
  puVar1 = PTR_DAT_092a50c8;
  if ((DAT_0988f807 & 1) == 0) {
    FUN_04077588(PTR_DAT_092c1fe8);
    FUN_04077588(PTR_DAT_09288398);
    FUN_04077588(PTR_DAT_092883a0);
    FUN_04077588(PTR_DAT_092c1ff8);
    FUN_04077588(PTR_DAT_092c1fe0);
    FUN_04077588(PTR_DAT_092c1ff0);
    FUN_04077588(PTR_DAT_092c1fd8);
    FUN_04077588(PTR_DAT_092a50c8);
    FUN_04077588(PTR_DAT_0928a700);
    FUN_04077588(PTR_DAT_092acd98);
    FUN_04077588(PTR_DAT_092c2000);
    DAT_0988f807 = 1;
  }
  uVar7 = thunk_FUN_040b4efc(*(undefined8 *)puVar1);
  FUN_076bca34(uVar7,0);
  *(undefined8 *)(param_1 + 0x10) = uVar7;
  thunk_FUN_040ec700((undefined8 *)(param_1 + 0x10),uVar7);
  uVar7 = thunk_FUN_040b4efc(*(undefined8 *)puVar1);
  FUN_076bca34(uVar7,0);
  *(undefined8 *)(param_1 + 0x18) = uVar7;
  thunk_FUN_040ec700((undefined8 *)(param_1 + 0x18),uVar7);
  uVar7 = thunk_FUN_040b4efc(*(undefined8 *)puVar2);
  FUN_05c26520(uVar7,*(undefined8 *)puVar3);
  *(undefined8 *)(param_1 + 0x38) = uVar7;
  thunk_FUN_040ec700((undefined8 *)(param_1 + 0x38),uVar7);
  uVar7 = thunk_FUN_040b4efc(*(undefined8 *)puVar4);
  FUN_07fe96e4(uVar7,0);
  *(undefined8 *)(param_1 + 0x40) = uVar7;
  thunk_FUN_040ec700((undefined8 *)(param_1 + 0x40),uVar7);
  uVar7 = thunk_FUN_040b4efc(*(undefined8 *)puVar5);
  FUN_05a2e720(uVar7,*(undefined8 *)puVar6);
  *(undefined8 *)(param_1 + 0x50) = uVar7;
  thunk_FUN_040ec700((undefined8 *)(param_1 + 0x50),uVar7);
  uVar7 = thunk_FUN_040b4efc(*(undefined8 *)puVar5);
  FUN_05a2e720(uVar7,*(undefined8 *)puVar6);
  *(undefined8 *)(param_1 + 0x58) = uVar7;
  thunk_FUN_040ec700((undefined8 *)(param_1 + 0x58),uVar7);
  FUN_076bca34(param_1,0);
  uVar7 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_0928a700);
  FUN_07f92d78(uVar7,param_2,0);
  *(undefined8 *)(param_1 + 0x68) = uVar7;
  thunk_FUN_040ec700((undefined8 *)(param_1 + 0x68),uVar7);
  if (param_4 == 0) {
    param_4 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092883a0);
    FUN_06efbe2c(param_4,*(undefined8 *)PTR_DAT_09288398);
  }
  *(long *)(param_1 + 0x20) = param_4;
  thunk_FUN_040ec700((long *)(param_1 + 0x20),param_4);
  *(undefined8 *)(param_1 + 0x60) = param_3;
  thunk_FUN_040ec700((undefined8 *)(param_1 + 0x60),param_3);
  if ((*(long *)(param_1 + 0x68) != 0) &&
     (lVar8 = FUN_07f96804(*(long *)(param_1 + 0x68),0), lVar8 != 0)) {
    uVar9 = FUN_074e4550(lVar8,*(undefined8 *)PTR_DAT_092c2000,0);
    if (((uVar9 & 1) == 0) &&
       (uVar9 = FUN_074e4550(lVar8,*(undefined8 *)PTR_DAT_092acd98,0), (uVar9 & 1) == 0)) {
      uVar7 = thunk_FUN_040dedf8(PTR_DAT_092c2008);
      uVar7 = FUN_074d875c(uVar7,lVar8,0);
      thunk_FUN_040dedf8(PTR_DAT_09287028);
      uVar10 = thunk_FUN_040b4efc();
      FUN_075d4b88(uVar10,uVar7,0);
      uVar7 = thunk_FUN_040dedf8(PTR_DAT_092c2020);
                    /* WARNING: Subroutine does not return */
      FUN_040776f4(uVar10,uVar7);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


