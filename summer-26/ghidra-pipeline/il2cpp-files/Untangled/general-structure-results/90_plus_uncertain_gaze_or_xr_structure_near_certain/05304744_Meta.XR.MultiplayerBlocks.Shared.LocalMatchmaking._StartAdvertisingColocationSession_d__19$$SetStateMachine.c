/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.LocalMatchmaking.<StartAdvertisingColocationSession>d__19$$SetStateMachine
ENTRY_POINT: 05304744
PROGRAM: Untangled-libil2cpp.so
SCORE: 92
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_2
*/


undefined8
Meta_XR_MultiplayerBlocks_Shared_LocalMatchmaking_<StartAdvertisingColocationSession>d__19__SetStateMachine
          (long param_1,undefined8 param_2,long param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long in_x9;
  int *in_x10;
  long *plVar7;
  long unaff_x20;
  int unaff_w22;
  
  do {
    in_x9 = in_x9 + -1;
    piVar1 = in_x10 + 4;
    if (in_x9 == 0) {
      puVar2 = (undefined8 *)FUN_02eea86c();
      goto LAB_0530476c;
    }
    plVar7 = (long *)(in_x10 + 2);
    in_x10 = piVar1;
  } while (*plVar7 != param_3);
  puVar2 = (undefined8 *)(param_1 + (long)*piVar1 * 0x10 + 0x138);
LAB_0530476c:
  (*(code *)*puVar2)();
  if (unaff_x20 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ecbb70();
  }
  if (unaff_w22 != 1) {
                    /* WARNING: Subroutine does not return */
    FUN_02fafaac();
  }
  puVar2 = (undefined8 *)RootMotion_FinalIK_IKSolverFABRIK__MapToSolverPositionsLimited();
  uVar3 = thunk_FUN_02f239f0(PTR_DAT_06d021d0);
  uVar4 = thunk_FUN_02f1f520(uVar3,*(undefined8 *)*puVar2);
  if ((uVar4 & 1) == 0) {
    puVar6 = (undefined8 *)__cxa_allocate_exception(8);
    *puVar6 = *puVar2;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar6,&PTR_PTR_069384f8,0);
  }
  plVar7 = (long *)*puVar2;
  __cxa_end_catch();
  if (plVar7 != (long *)0x0) {
    uVar3 = (**(code **)(*plVar7 + 0x188))(plVar7,*(undefined8 *)(*plVar7 + 400));
    uVar5 = thunk_FUN_02f239f0(PTR_DAT_06d3e5c0);
    FUN_05458458(uVar5,uVar3,0);
    FUN_052fc3fc();
    return 0xffffffffffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


