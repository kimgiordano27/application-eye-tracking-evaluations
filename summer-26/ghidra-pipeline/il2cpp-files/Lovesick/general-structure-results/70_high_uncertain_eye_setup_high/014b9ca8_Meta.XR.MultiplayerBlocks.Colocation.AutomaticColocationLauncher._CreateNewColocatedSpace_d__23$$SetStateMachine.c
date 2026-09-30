/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Colocation.AutomaticColocationLauncher.<CreateNewColocatedSpace>d__23$$SetStateMachine
ENTRY_POINT: 014b9ca8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8
Meta_XR_MultiplayerBlocks_Colocation_AutomaticColocationLauncher_<CreateNewColocatedSpace>d__23__SetStateMachine
          (long *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 in_stack_00000008;
  
  if ((DAT_03776da4 & 1) == 0) {
    thunk_FUN_00d48444(Method_System_Convert_ThrowUInt64OverflowException__);
    thunk_FUN_00d48444(StringLiteral_13948);
    thunk_FUN_00d48444(Method_System_Linq_Enumerable_Count<Renderer>__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List_Enumerator<IActiveState>_MoveNext__);
    DAT_03776da4 = 1;
  }
  puVar2 = Method_System_Linq_Enumerable_Count<Renderer>__;
  puVar1 = Method_System_Collections_Generic_List_Enumerator<IActiveState>_MoveNext__;
  in_stack_00000008 = 0;
  if (param_1 != (long *)0x0) {
    uVar3 = (**(code **)(*param_1 + 0x308))(param_1,*(undefined8 *)(*param_1 + 0x310));
    uVar3 = FUN_01600424(uVar3,*(undefined8 *)puVar1,param_2,0);
    lVar5 = *(long *)puVar2;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_00d32864(lVar5);
      lVar5 = *(long *)puVar2;
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
    if (lVar5 != 0) {
      uVar4 = FUN_0129eff4(lVar5,uVar3,&stack0x00000008,
                           *(undefined8 *)Method_System_Convert_ThrowUInt64OverflowException__);
      if ((uVar4 & 1) == 0) {
        in_stack_00000008 = FUN_0178c5cc(param_1,param_2,0x34,0);
        lVar5 = *(long *)puVar2;
        if (*(int *)(lVar5 + 0xe0) == 0) {
          thunk_FUN_00d32864(lVar5);
          lVar5 = *(long *)puVar2;
        }
        lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
        if (lVar5 == 0) goto LAB_014b9ddc;
        FUN_01299e64(lVar5,uVar3,in_stack_00000008,*(undefined8 *)StringLiteral_13948);
      }
      return in_stack_00000008;
    }
  }
LAB_014b9ddc:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


