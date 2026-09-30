/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.ColocationSessionEventHandler.<OnSessionCreatedWithSpatialAnchor>d__10$$SetStateMachine
ENTRY_POINT: 08a819b8
PROGRAM: Hyper-libil2cpp.so
SCORE: 91
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;telemetry_or_network_hits_4;functionality_data_collection_or_telemetry_hits_4
*/


void Meta_XR_MultiplayerBlocks_Shared_ColocationSessionEventHandler_<OnSessionCreatedWithSpatialAnchor>d__10__SetStateMachine
               (long param_1)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined4 *unaff_x19;
  undefined8 *unaff_x20;
  long *plVar9;
  int in_stack_00000018;
  
  uVar4 = thunk_FUN_049ae08c(*(undefined8 *)(param_1 + 0x8c8));
  uVar5 = thunk_FUN_049a9d1c(uVar4,*(undefined8 *)*unaff_x20);
  iVar3 = in_stack_00000018;
  if ((uVar5 & 1) == 0) {
    puVar8 = (undefined8 *)__cxa_allocate_exception(8);
    *puVar8 = *unaff_x20;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar8,&PTR_PTR_0a568bf8,0);
  }
  plVar9 = (long *)*unaff_x20;
  *(long **)(&stack0x00000008 + (long)in_stack_00000018 * 8) = plVar9;
  in_stack_00000018 = in_stack_00000018 + 1;
  __cxa_end_catch();
  lVar6 = thunk_FUN_049ae08c(PTR_DAT_0ac46eb8);
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_049a583c();
  }
  lVar6 = FUN_08795a9c(0);
  if (plVar9 != (long *)0x0) {
    uVar4 = (**(code **)(*plVar9 + 0x188))(plVar9,*(undefined8 *)(*plVar9 + 400));
    uVar7 = thunk_FUN_049ae08c(PTR_DAT_0ac54908);
    uVar4 = FUN_08bcc3c0(uVar7,uVar4,0);
    if (lVar6 != 0) {
      uVar7 = thunk_FUN_049ae08c(PTR_DAT_0ac46ed8);
      FUN_0433cdb4(3,uVar7,lVar6,uVar4);
      puVar2 = PTR_DAT_0ac12b40;
      iVar1 = *(int *)(*(long *)PTR_DAT_0ac12a40 + 0xe4);
      *unaff_x19 = 0xfffffffe;
      in_stack_00000018 = iVar3;
      if (iVar1 == 0) {
        thunk_FUN_049a583c();
      }
      FUN_07b63710(unaff_x19 + 2,0,*(undefined8 *)puVar2);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


