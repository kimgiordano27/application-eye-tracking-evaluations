/*
FUNCTION_NAME: FUN_023ee4d4
ENTRY_POINT: 023ee4d4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_1;telemetry_or_network_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_023ee4d4(long param_1,undefined8 *param_2,int param_3,int param_4,long param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined *puVar4;
  
  if (*(long *)(param_5 + 0x38) == 0) {
    FUN_01ecafa0(param_5);
  }
  if (param_1 == 0) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingVideoStats>_get_Data__);
    uVar1 = thunk_FUN_01f117cc();
    uVar2 = thunk_FUN_01efb3a4(
                              Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<MouseCaptureOutEvent>__
                              );
    FUN_034efd20(uVar1,uVar2,0);
    goto LAB_023ee618;
  }
  if (param_3 < 0) {
LAB_023ee570:
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
    uVar1 = thunk_FUN_01f117cc();
    uVar2 = thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_BoundsIntField_<_ctor>b__10_0__);
    puVar4 = Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<MouseMoveEvent>__;
  }
  else {
    if (*(int *)(param_1 + 0x18) < param_3) goto LAB_023ee570;
    if ((-1 < param_4) && (param_4 <= *(int *)(param_1 + 0x18) - param_3)) {
      local_40 = param_2[2];
      uStack_48 = param_2[1];
      local_50 = *param_2;
      System_Linq_Lookup_Grouping_<GetEnumerator>d__7<Int32Enum,_ValueTuple<Int32Enum,_object>>__System_IDisposable_Dispose
                (param_1,&local_50,param_3,param_4,*(undefined8 *)(*(long *)(param_5 + 0x38) + 0x10)
                );
      return;
    }
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
    uVar1 = thunk_FUN_01f117cc();
    uVar2 = thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_BoundsField_<_ctor>b__10_1__);
    puVar4 = Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<MouseDownEvent>__;
  }
  uVar3 = thunk_FUN_01efb3a4(puVar4);
  FUN_034f3578(uVar1,uVar2,uVar3,0);
LAB_023ee618:
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar1,param_5);
}


