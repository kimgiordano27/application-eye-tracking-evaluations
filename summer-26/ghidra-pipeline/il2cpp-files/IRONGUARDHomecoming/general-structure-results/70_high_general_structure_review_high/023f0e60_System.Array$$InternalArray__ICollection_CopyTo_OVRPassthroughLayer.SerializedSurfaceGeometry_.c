/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_CopyTo<OVRPassthroughLayer.SerializedSurfaceGeometry>
ENTRY_POINT: 023f0e60
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_4;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void System_Array__InternalArray__ICollection_CopyTo<OVRPassthroughLayer_SerializedSurfaceGeometry>
               (long param_1,long param_2,undefined8 *param_3,int param_4,int param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x19;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined *puVar4;
  
  if (param_1 == 0) {
    FUN_01ecafa0();
  }
  if (param_2 == 0) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingVideoStats>_get_Data__);
    uVar1 = thunk_FUN_01f117cc();
    uVar2 = thunk_FUN_01efb3a4(
                              Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<MouseCaptureOutEvent>__
                              );
    FUN_034efd20(uVar1,uVar2,0);
    goto LAB_023f0f8c;
  }
  if (param_4 < 0) {
LAB_023f0ee4:
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
    uVar1 = thunk_FUN_01f117cc();
    uVar2 = thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_BoundsIntField_<_ctor>b__10_0__);
    puVar4 = Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<MouseMoveEvent>__;
                    /* try { // try from 023f0f08 to 024f0f2f has its CatchHandler @ 023f1010 */
  }
  else {
    if (*(int *)(param_2 + 0x18) < param_4) goto LAB_023f0ee4;
    if ((-1 < param_5) && (param_5 <= *(int *)(param_2 + 0x18) - param_4)) {
      in_stack_00000068 = param_3[5];
      in_stack_00000060 = param_3[4];
      in_stack_00000078 = param_3[7];
      in_stack_00000070 = param_3[6];
      in_stack_00000048 = param_3[1];
      in_stack_00000040 = *param_3;
      in_stack_00000058 = param_3[3];
      in_stack_00000050 = param_3[2];
      UnityEngine_UIElements_TreeDataController_<GetItemIds>d__9<object>__System_Collections_IEnumerable_GetEnumerator
                (param_2,&stack0x00000040,param_4,param_5,
                 *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x10));
      return;
    }
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
    uVar1 = thunk_FUN_01f117cc();
    uVar2 = thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_BoundsField_<_ctor>b__10_1__);
    puVar4 = Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<MouseDownEvent>__;
  }
  uVar3 = thunk_FUN_01efb3a4(puVar4);
  FUN_034f3578(uVar1,uVar2,uVar3,0);
LAB_023f0f8c:
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar1);
}


