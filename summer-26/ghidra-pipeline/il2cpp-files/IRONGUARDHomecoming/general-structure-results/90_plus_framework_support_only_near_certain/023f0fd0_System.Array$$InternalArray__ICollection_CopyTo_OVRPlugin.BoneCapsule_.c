/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_CopyTo<OVRPlugin.BoneCapsule>
ENTRY_POINT: 023f0fd0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 149
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_3;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_2
*/


void System_Array__InternalArray__ICollection_CopyTo<OVRPlugin_BoneCapsule>(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int unaff_w20;
  int unaff_w21;
  long unaff_x22;
  void *unaff_x23;
  undefined *puVar4;
  
                    /* try { // try from 023f0fd0 to 024f0feb has its CatchHandler @ 023f0cec */
  if (unaff_x22 == 0) {
                    /* try { // try from 023f1078 to 024f109f has its CatchHandler @ 023f10b4 */
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingVideoStats>_get_Data__);
    uVar1 = thunk_FUN_01f117cc();
    uVar2 = thunk_FUN_01efb3a4(
                              Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<MouseCaptureOutEvent>__
                              );
    FUN_034efd20(uVar1,uVar2,0);
    goto LAB_023f10f0;
  }
  if (unaff_w21 < 0) {
LAB_023f1048:
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
    uVar1 = thunk_FUN_01f117cc();
    uVar2 = thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_BoundsIntField_<_ctor>b__10_0__);
    puVar4 = Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<MouseMoveEvent>__;
  }
  else {
    if (*(int *)(unaff_x22 + 0x18) < unaff_w21) goto LAB_023f1048;
                    /* try { // try from 023f0fec to 024f0fef has its CatchHandler @ 023f0ff8 */
    if ((-1 < unaff_w20) && (unaff_w20 <= *(int *)(unaff_x22 + 0x18) - unaff_w21)) {
                    /* try { // try from 023f0ff0 to 024f1027 has its CatchHandler @ 023f0cec */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 023f0fec with catch @ 023f0ff8
                        */
      memcpy(&stack0x00000000,unaff_x23,200);
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 023f0fc4 with catch @ 023f1004
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 023f0f08 with catch @ 023f1010
                        */
      memcpy(&stack0x000000c8,&stack0x00000000,200);
                    /* try { // try from 023f1028 to 024f102b has its CatchHandler @ 023f1038 */
      FUN_0247c1b0();
      return;
    }
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
    uVar1 = thunk_FUN_01f117cc();
    uVar2 = thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_BoundsField_<_ctor>b__10_1__);
    puVar4 = Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<MouseDownEvent>__;
  }
  uVar3 = thunk_FUN_01efb3a4(puVar4);
  FUN_034f3578(uVar1,uVar2,uVar3,0);
LAB_023f10f0:
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar1);
}


