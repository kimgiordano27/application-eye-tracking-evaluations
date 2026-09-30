/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Fusion.AvatarBehaviourFusion$$Meta.XR.MultiplayerBlocks.Shared.IAvatarBehaviour.get_HasInputAuthority
ENTRY_POINT: 052f3c30
PROGRAM: Untangled-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x052f3c94) */

void Meta_XR_MultiplayerBlocks_Fusion_AvatarBehaviourFusion__Meta_XR_MultiplayerBlocks_Shared_IAvatarBehaviour_get_HasInputAuthority
               (undefined8 param_1,int param_2)

{
  ulong uVar1;
  long *plVar2;
  long unaff_x19;
  long lVar3;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  long in_stack_00000028;
  
  if (param_2 != 1) {
    FUN_04df65b0(&stack0x00000030,*(undefined8 *)PTR_DAT_06d12fc8);
                    /* WARNING: Subroutine does not return */
    FUN_02fafaac();
  }
  plVar2 = (long *)RootMotion_FinalIK_IKSolverFABRIK__MapToSolverPositionsLimited();
  lVar3 = *plVar2;
  __cxa_end_catch();
  FUN_04df65b0(&stack0x00000030,*(undefined8 *)PTR_DAT_06d12fc8);
  if (lVar3 == 0) {
    if (*(long *)(unaff_x19 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    FUN_052421e8(&stack0x00000018,*(long *)(unaff_x19 + 0x30),*unaff_x24);
    while( true ) {
      uVar1 = System_Collections_Generic_EqualityComparer<OVRTask_CallbackWithState<Int32Enum,_OVRTask_CombinedTaskDataWithCompletedTaskId<Int32Enum>>>__get_Default
                        (&stack0x00000018,*unaff_x23);
      if ((uVar1 & 1) == 0) {
        FUN_04df65b0(&stack0x00000018,*unaff_x22);
        return;
      }
      if (in_stack_00000028 == 0) break;
      FUN_066a1214(in_stack_00000028,0,0);
    }
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ecbb70(lVar3);
}


