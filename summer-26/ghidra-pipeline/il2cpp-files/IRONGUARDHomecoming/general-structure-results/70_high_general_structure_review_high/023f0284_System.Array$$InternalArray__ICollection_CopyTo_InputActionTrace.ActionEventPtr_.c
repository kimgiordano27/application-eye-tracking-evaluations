/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_CopyTo<InputActionTrace.ActionEventPtr>
ENTRY_POINT: 023f0284
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void System_Array__InternalArray__ICollection_CopyTo<InputActionTrace_ActionEventPtr>(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong __n;
  int unaff_w20;
  int unaff_w21;
  long unaff_x22;
  void *unaff_x23;
  undefined8 *__dest;
  long unaff_x25;
  long unaff_x26;
  long unaff_x29;
  undefined *puVar5;
  
  __n = (ulong)*(uint *)(*(long *)(unaff_x26 + 8) + 0xfc);
  __dest = (undefined8 *)(&stack0x00000000 + -(__n + 0xf & 0x1fffffff0));
  if (unaff_x22 == 0) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingVideoStats>_get_Data__);
    uVar3 = thunk_FUN_01f117cc();
    uVar2 = thunk_FUN_01efb3a4(
                              Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<MouseCaptureOutEvent>__
                              );
    FUN_034efd20(uVar3,uVar2,0);
  }
  else {
                    /* try { // try from 023f02a8 to 024f02cf has its CatchHandler @ 023f04a4 */
    if ((unaff_w21 < 0) || (*(int *)(unaff_x22 + 0x18) < unaff_w21)) {
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
      uVar3 = thunk_FUN_01f117cc();
      uVar2 = thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_BoundsIntField_<_ctor>b__10_0__);
      puVar5 = Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<MouseMoveEvent>__
      ;
    }
    else {
      if ((-1 < unaff_w20) && (unaff_w20 <= *(int *)(unaff_x22 + 0x18) - unaff_w21)) {
        if (-1 < *(int *)(*(long *)(unaff_x26 + 8) + 0x28)) {
          unaff_x23 = (void *)(unaff_x29 + -0x40);
        }
        memcpy(__dest,unaff_x23,__n);
        puVar1 = *(undefined8 **)(unaff_x26 + 0x10);
        uVar2 = *puVar1;
        if (-1 < *(int *)(*(long *)(unaff_x26 + 8) + 0x28)) {
          __dest = (undefined8 *)*__dest;
        }
        *(int *)(unaff_x29 + -0x10) = unaff_w20;
        *(int *)(unaff_x29 + -0xc) = unaff_w21;
        *(long *)(unaff_x29 + -0x38) = unaff_x22;
        *(undefined8 **)(unaff_x29 + -0x30) = __dest;
        *(long *)(unaff_x29 + -0x28) = unaff_x29 + -0xc;
        *(long *)(unaff_x29 + -0x20) = unaff_x29 + -0x10;
        (*(code *)puVar1[2])(uVar2,puVar1,0,unaff_x29 + -0x38,unaff_x29 + -0x14);
        if (*(long *)(unaff_x25 + 0x28) == *(long *)(unaff_x29 + -8)) {
          return;
        }
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail(*(undefined4 *)(unaff_x29 + -0x14));
      }
      thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
      uVar3 = thunk_FUN_01f117cc();
      uVar2 = thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_BoundsField_<_ctor>b__10_1__);
      puVar5 = Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<MouseDownEvent>__
      ;
    }
    uVar4 = thunk_FUN_01efb3a4(puVar5);
    FUN_034f3578(uVar3,uVar2,uVar4,0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar3);
}


