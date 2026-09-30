/*
FUNCTION_NAME: OVRPlugin$$GetLocalTrackingSpaceRecenterCount
ENTRY_POINT: 07c87130
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 71
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin__GetLocalTrackingSpaceRecenterCount(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar7;
  long *unaff_x22;
  
  if (unaff_x20 == 0) {
    if (*(int *)(param_1 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
      param_1 = *unaff_x22;
    }
    uVar7 = **(undefined8 **)(param_1 + 0xb8);
    unaff_x20 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f1ea48);
    FUN_0799ce68(unaff_x20,uVar7,*(undefined8 *)PTR_DAT_09f50b00,0);
    plVar6 = (long *)(*(long *)(*unaff_x22 + 0xb8) + 8);
    *plVar6 = unaff_x20;
    thunk_FUN_044bb4b4(plVar6,unaff_x20);
  }
  puVar5 = PTR_DAT_09f50af8;
  puVar4 = PTR_DAT_09f50af0;
  puVar3 = PTR_DAT_09f50ae8;
  puVar2 = PTR_DAT_09f50ae0;
  puVar1 = PTR_DAT_09f50ad8;
  if (unaff_x19 != 0) {
    *(long *)(unaff_x19 + 0x18) = unaff_x20;
    thunk_FUN_044bb4b4((long *)(unaff_x19 + 0x18),unaff_x20);
    uVar7 = thunk_FUN_0448520c(*(undefined8 *)puVar4);
    FUN_05d479a8(uVar7,*(undefined8 *)puVar3);
    *(undefined8 *)(unaff_x19 + 0x28) = uVar7;
    thunk_FUN_044bb4b4((undefined8 *)(unaff_x19 + 0x28),uVar7);
    uVar7 = thunk_FUN_0448520c(*(undefined8 *)puVar2);
    FUN_07379444(uVar7,*(undefined8 *)puVar1);
    *(undefined8 *)(unaff_x19 + 0x30) = uVar7;
    thunk_FUN_044bb4b4((undefined8 *)(unaff_x19 + 0x30),uVar7);
    uVar7 = thunk_FUN_0448520c(*(undefined8 *)puVar2);
    FUN_07379444(uVar7,*(undefined8 *)puVar1);
    *(undefined8 *)(unaff_x19 + 0x38) = uVar7;
    thunk_FUN_044bb4b4((undefined8 *)(unaff_x19 + 0x38),uVar7);
    uVar7 = thunk_FUN_0448520c(*(undefined8 *)puVar5);
    FUN_07c87274();
    *(undefined8 *)(unaff_x19 + 0x40) = uVar7;
    thunk_FUN_044bb4b4((undefined8 *)(unaff_x19 + 0x40),uVar7);
    FUN_0952dd88();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


