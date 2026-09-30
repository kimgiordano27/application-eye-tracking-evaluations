/*
FUNCTION_NAME: OVRPlugin.OVRP_1_104_0$$ovrp_GetOpenXRInstanceProcAddrFunc
ENTRY_POINT: 056a7c08
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_11;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_OVRP_1_104_0__ovrp_GetOpenXRInstanceProcAddrFunc(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined4 unaff_w20;
  void *unaff_x21;
  long *unaff_x23;
  long lVar5;
  long unaff_x24;
  long in_stack_00000098;
  long in_stack_000000a8;
  
  FUN_02d965b8(
              Unity_Services_Core_Scheduler_Internal_MinimumBinaryHeap<ScheduledInvocation>_TypeInfo
              );
  FUN_02d965b8(System_Threading_Tasks_TaskCompletionSource<Message<InvitePanelResultInfo>>_TypeInfo)
  ;
  FUN_02d965b8(
              System_Threading_Tasks_TaskCompletionSource<ValueTuple<OVRSpatialAnchor,_OVRSpatialAnchor_OperationResult>>_TypeInfo
              );
  FUN_02d965b8(System_Threading_Tasks_TaskCompletionSource<bool>_TypeInfo);
  FUN_02d965b8(System_Threading_Tasks_TaskCompletionSource<GoogleSignInUser>_TypeInfo);
  *(undefined1 *)(unaff_x24 + 0xa5b) = 1;
  puVar1 = System_Threading_Tasks_TaskCompletionSource<Message<InvitePanelResultInfo>>_TypeInfo;
  in_stack_000000a8 = 0;
  in_stack_00000098 = 0;
  lVar5 = **(long **)(*unaff_x23 + 0xb8);
  if (lVar5 != 0) {
    uVar2 = FUN_055339f0();
    uVar3 = FUN_04e3bce8(lVar5,uVar2,&stack0x000000a8,*(undefined8 *)puVar1);
    if ((uVar3 & 1) != 0) {
      if ((in_stack_000000a8 != 0) && (*(long *)(in_stack_000000a8 + 0x40) != 0)) {
        uVar3 = FUN_04dfa0cc(*(long *)(in_stack_000000a8 + 0x40),unaff_w20,&stack0x00000098,
                             *(undefined8 *)
                              System_Threading_Tasks_TaskCompletionSource<ValueTuple<OVRSpatialAnchor,_OVRSpatialAnchor_OperationResult>>_TypeInfo
                            );
        if ((uVar3 & 1) == 0) {
          memcpy(&stack0x00000030,unaff_x21,0x68);
          uVar2 = thunk_FUN_02dd3144(*(undefined8 *)
                                      System_Threading_Tasks_TaskCompletionSource<IReadOnlyList<OVRSpatialAnchor>>_TypeInfo
                                    );
          FUN_056a78e0(uVar2,&stack0x00000030,0);
          uVar4 = thunk_FUN_02dd3144(*(undefined8 *)
                                      Unity_Services_Core_Scheduler_Internal_MinimumBinaryHeap<ScheduledInvocation>_TypeInfo
                                    );
          FUN_056a6420();
          lVar5 = thunk_FUN_02dd3144(*(undefined8 *)
                                      System_Threading_Tasks_TaskCompletionSource<GoogleSignInUser>_TypeInfo
                                    );
          FUN_056a84f0(lVar5,uVar2,uVar4);
          in_stack_00000098 = lVar5;
          if ((in_stack_000000a8 == 0) || (*(long *)(in_stack_000000a8 + 0x40) == 0))
          goto LAB_056a7df8;
          FUN_04df85dc(*(long *)(in_stack_000000a8 + 0x40),unaff_w20,lVar5,
                       *(undefined8 *)System_Threading_Tasks_TaskCompletionSource<bool>_TypeInfo);
        }
        else {
          if ((in_stack_00000098 == 0) || (*(long *)(in_stack_00000098 + 0x18) == 0))
          goto LAB_056a7df8;
          FUN_056a6ee0();
        }
        if ((in_stack_00000098 != 0) && (in_stack_000000a8 != 0)) {
          lVar5 = *(long *)(in_stack_000000a8 + 0x30);
          if (lVar5 == 0) {
            return 0;
          }
          uVar3 = (**(code **)(lVar5 + 0x18))
                            (*(undefined8 *)(lVar5 + 0x40),unaff_w20,in_stack_00000098 + 0x18,
                             in_stack_00000098 + 0x10,*(undefined8 *)(in_stack_000000a8 + 0x38),
                             *(undefined8 *)(lVar5 + 0x28));
          if ((uVar3 & 1) == 0) {
            return 0;
          }
          if ((in_stack_00000098 != 0) && (*(long *)(in_stack_00000098 + 0x18) != 0)) {
            FUN_056a6df8();
            return 1;
          }
        }
      }
LAB_056a7df8:
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
  }
  return 0;
}


