/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_CopyTo<OVRPlugin.Vector4s>
ENTRY_POINT: 023f1254
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 152
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_3;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_2
*/


void System_Array__InternalArray__ICollection_CopyTo<OVRPlugin_Vector4s>
               (long param_1,long param_2,undefined8 *param_3,int param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x19;
  int unaff_w20;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
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
    goto LAB_023f137c;
  }
  if (param_4 < 0) {
LAB_023f12d4:
                    /* try { // try from 023f12d4 to 024f12fb has its CatchHandler @ 023f13dc */
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
    uVar1 = thunk_FUN_01f117cc();
    uVar2 = thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_BoundsIntField_<_ctor>b__10_0__);
    puVar4 = Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<MouseMoveEvent>__;
                    /* try { // try from 023f12fc to 024f138f has its CatchHandler @ 023f10b8 */
  }
  else {
    if (*(int *)(param_2 + 0x18) < param_4) goto LAB_023f12d4;
    if ((-1 < unaff_w20) && (unaff_w20 <= *(int *)(param_2 + 0x18) - param_4)) {
      in_stack_00000050 = param_3[4];
      in_stack_00000038 = param_3[1];
      in_stack_00000030 = *param_3;
      in_stack_00000048 = param_3[3];
      in_stack_00000040 = param_3[2];
      FUN_0247c2d8(param_2,&stack0x00000030,param_4,unaff_w20,
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
LAB_023f137c:
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar1);
}


