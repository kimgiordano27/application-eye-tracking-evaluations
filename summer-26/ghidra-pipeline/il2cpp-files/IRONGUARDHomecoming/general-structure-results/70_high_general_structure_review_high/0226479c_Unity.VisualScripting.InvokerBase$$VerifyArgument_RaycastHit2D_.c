/*
FUNCTION_NAME: Unity.VisualScripting.InvokerBase$$VerifyArgument<RaycastHit2D>
ENTRY_POINT: 0226479c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;ui_interaction;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_3;ray_or_cast_sink_hits_4;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Unity_VisualScripting_InvokerBase__VerifyArgument<RaycastHit2D>
               (long param_1,long param_2,uint param_3,uint param_4,undefined8 param_5,long param_6)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
                    /* try { // try from 022647ac to 023647b3 has its CatchHandler @ 02264e3c */
  if (param_1 == 0) {
                    /* try { // try from 022647b4 to 023647c3 has its CatchHandler @ 02264e38 */
    FUN_01ecafa0(param_6);
  }
  if (param_2 == 0) {
                    /* try { // try from 022648ac to 023648b3 has its CatchHandler @ 02264df4 */
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingVideoStats>_get_Data__);
                    /* try { // try from 022648b4 to 023648c3 has its CatchHandler @ 02264dec */
    uVar4 = thunk_FUN_01f117cc();
    uVar5 = thunk_FUN_01efb3a4(
                              Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<MouseCaptureOutEvent>__
                              );
                    /* try { // try from 022648d4 to 023648df has its CatchHandler @ 02264de4 */
    FUN_034efd20(uVar4,uVar5,0);
  }
  else if ((int)(param_4 | param_3) < 0) {
    puVar1 = 
    Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<NavigationMoveEvent>__;
    if (-1 < (int)param_4) {
      puVar1 = Method_Oculus_Platform_Callback_SetNotificationCallback<PartyUpdateNotification>__;
    }
                    /* try { // try from 022648f4 to 0236490f has its CatchHandler @ 02264df8 */
    uVar5 = thunk_FUN_01efb3a4(puVar1);
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
    uVar4 = thunk_FUN_01f117cc();
    uVar3 = thunk_FUN_01efb3a4(
                              Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<NavigationCancelEvent>__
                              );
                    /* try { // try from 02264928 to 0236492b has its CatchHandler @ 02264db4 */
                    /* try { // try from 0226492c to 02364937 has its CatchHandler @ 02264df0 */
    FUN_034f3578(uVar4,uVar5,uVar3,0);
  }
  else {
    if ((int)param_4 <= (int)(*(int *)(param_2 + 0x18) - param_3)) {
      if ((int)param_4 < 2) {
                    /* try { // try from 02264898 to 023648a3 has its CatchHandler @ 02264e04 */
        return;
      }
                    /* try { // try from 022647e4 to 023647f7 has its CatchHandler @ 02264e34 */
      lVar2 = *(long *)(*(long *)(param_6 + 0x38) + 0x10);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_01ecaf44();
      }
      if (*(int *)(lVar2 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
                    /* try { // try from 02264804 to 0236480f has its CatchHandler @ 02264e1c */
      lVar6 = *(long *)(*(long *)(param_6 + 0x38) + 8);
      lVar2 = *(long *)(lVar6 + 0x20);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_01ecaf44();
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x48);
                    /* try { // try from 02264824 to 0236483f has its CatchHandler @ 02264e28 */
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_01ecaf44();
      }
      if (*(int *)(lVar2 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      lVar2 = *(long *)(lVar6 + 0x20);
                    /* try { // try from 02264840 to 0236486b has its CatchHandler @ 02263edc */
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_01ecaf44();
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x48);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_01ecaf44();
      }
      if (**(long **)(lVar2 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
                    /* try { // try from 0226486c to 0236486f has its CatchHandler @ 02264ddc */
                    /* try { // try from 02264870 to 0236487b has its CatchHandler @ 02264e14 */
                    /* try { // try from 0226488c to 02364897 has its CatchHandler @ 02264e0c */
      FUN_0323ee34(**(long **)(lVar2 + 0xb8),param_2,param_3,param_4,param_5,
                   *(undefined8 *)(*(long *)(param_6 + 0x38) + 0x28));
      return;
    }
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
    uVar4 = thunk_FUN_01f117cc();
                    /* try { // try from 02264948 to 02364953 has its CatchHandler @ 02264de8 */
                    /* try { // try from 02264954 to 0236495f has its CatchHandler @ 02264de0 */
    uVar5 = thunk_FUN_01efb3a4(
                              Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<NavigationSubmitEvent>__
                              );
    FUN_034f6754(uVar4,uVar5,0);
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 02264970 to 0236497f has its CatchHandler @ 02264dc8 */
  FUN_01f08910(uVar4,param_6);
}


