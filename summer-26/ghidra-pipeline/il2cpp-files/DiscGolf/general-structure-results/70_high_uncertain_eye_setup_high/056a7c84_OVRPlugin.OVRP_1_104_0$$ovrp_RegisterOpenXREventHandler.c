/*
FUNCTION_NAME: OVRPlugin.OVRP_1_104_0$$ovrp_RegisterOpenXREventHandler
ENTRY_POINT: 056a7c84
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_10;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_OVRP_1_104_0__ovrp_RegisterOpenXREventHandler(void)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined4 unaff_w20;
  void *unaff_x21;
  long in_stack_00000098;
  long in_stack_000000a8;
  
  uVar1 = FUN_04e3bce8();
  if ((uVar1 & 1) == 0) {
    return 0;
  }
  if ((in_stack_000000a8 != 0) && (*(long *)(in_stack_000000a8 + 0x40) != 0)) {
    uVar1 = FUN_04dfa0cc(*(long *)(in_stack_000000a8 + 0x40),unaff_w20,&stack0x00000098,
                         *(undefined8 *)
                          System_Threading_Tasks_TaskCompletionSource<ValueTuple<OVRSpatialAnchor,_OVRSpatialAnchor_OperationResult>>_TypeInfo
                        );
    if ((uVar1 & 1) == 0) {
      memcpy(&stack0x00000030,unaff_x21,0x68);
      uVar2 = thunk_FUN_02dd3144(*(undefined8 *)
                                  System_Threading_Tasks_TaskCompletionSource<IReadOnlyList<OVRSpatialAnchor>>_TypeInfo
                                );
      FUN_056a78e0(uVar2,&stack0x00000030,0);
      uVar3 = thunk_FUN_02dd3144(*(undefined8 *)
                                  Unity_Services_Core_Scheduler_Internal_MinimumBinaryHeap<ScheduledInvocation>_TypeInfo
                                );
      FUN_056a6420();
      lVar4 = thunk_FUN_02dd3144(*(undefined8 *)
                                  System_Threading_Tasks_TaskCompletionSource<GoogleSignInUser>_TypeInfo
                                );
      FUN_056a84f0(lVar4,uVar2,uVar3);
      in_stack_00000098 = lVar4;
      if ((in_stack_000000a8 == 0) || (*(long *)(in_stack_000000a8 + 0x40) == 0)) goto LAB_056a7df8;
      FUN_04df85dc(*(long *)(in_stack_000000a8 + 0x40),unaff_w20,lVar4,
                   *(undefined8 *)System_Threading_Tasks_TaskCompletionSource<bool>_TypeInfo);
    }
    else {
      if ((in_stack_00000098 == 0) || (*(long *)(in_stack_00000098 + 0x18) == 0)) goto LAB_056a7df8;
      FUN_056a6ee0();
    }
    if ((in_stack_00000098 != 0) && (in_stack_000000a8 != 0)) {
      lVar4 = *(long *)(in_stack_000000a8 + 0x30);
      if (lVar4 == 0) {
        return 0;
      }
      uVar1 = (**(code **)(lVar4 + 0x18))
                        (*(undefined8 *)(lVar4 + 0x40),unaff_w20,in_stack_00000098 + 0x18,
                         in_stack_00000098 + 0x10,*(undefined8 *)(in_stack_000000a8 + 0x38),
                         *(undefined8 *)(lVar4 + 0x28));
      if ((uVar1 & 1) == 0) {
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


