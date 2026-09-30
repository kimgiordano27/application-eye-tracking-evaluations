/*
FUNCTION_NAME: FUN_022660b8
ENTRY_POINT: 022660b8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_1;frame_or_lifecycle_behavior
*/


void FUN_022660b8(long param_1,uint param_2,uint param_3,undefined8 param_4,long param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
                    /* catch() { ... } // from try @ 02265300 with catch @ 022660b8 */
                    /* catch() { ... } // from try @ 02265440 with catch @ 022660bc */
                    /* catch() { ... } // from try @ 02265380 with catch @ 022660c0 */
                    /* catch() { ... } // from try @ 02265434 with catch @ 022660c4 */
                    /* catch() { ... } // from try @ 02265374 with catch @ 022660c8 */
                    /* catch() { ... } // from try @ 02265418 with catch @ 022660cc */
                    /* catch() { ... } // from try @ 02265358 with catch @ 022660d0 */
                    /* catch() { ... } // from try @ 02265538 with catch @ 022660d4
                       catch() { ... } // from try @ 02265e10 with catch @ 022660d4 */
                    /* catch() { ... } // from try @ 0226532c with catch @ 022660d8 */
                    /* catch() { ... } // from try @ 022653c0 with catch @ 022660dc
                       catch() { ... } // from try @ 02265dfc with catch @ 022660dc
                       catch() { ... } // from try @ 02265e08 with catch @ 022660dc */
                    /* catch() { ... } // from try @ 0226545c with catch @ 022660e0
                       catch() { ... } // from try @ 02265df8 with catch @ 022660e0
                       catch() { ... } // from try @ 02265e00 with catch @ 022660e0 */
  if (*(long *)(param_5 + 0x38) == 0) {
                    /* catch() { ... } // from try @ 02265304 with catch @ 022660e4 */
    FUN_01ecafa0(param_5);
  }
  if (param_1 == 0) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingVideoStats>_get_Data__);
    uVar4 = thunk_FUN_01f117cc();
    uVar5 = thunk_FUN_01efb3a4(
                              Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<MouseCaptureOutEvent>__
                              );
    FUN_034efd20(uVar4,uVar5,0);
  }
  else if ((int)(param_3 | param_2) < 0) {
    puVar1 = 
    Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<NavigationMoveEvent>__;
    if (-1 < (int)param_3) {
      puVar1 = Method_Oculus_Platform_Callback_SetNotificationCallback<PartyUpdateNotification>__;
    }
    uVar5 = thunk_FUN_01efb3a4(puVar1);
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
    uVar4 = thunk_FUN_01f117cc();
    uVar3 = thunk_FUN_01efb3a4(
                              Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<NavigationCancelEvent>__
                              );
    FUN_034f3578(uVar4,uVar5,uVar3,0);
  }
  else {
    if ((int)param_3 <= (int)(*(int *)(param_1 + 0x18) - param_2)) {
      if ((int)param_3 < 2) {
        return;
      }
      lVar2 = *(long *)(*(long *)(param_5 + 0x38) + 0x10);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_01ecaf44();
      }
      if (*(int *)(lVar2 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      lVar6 = *(long *)(*(long *)(param_5 + 0x38) + 8);
      lVar2 = *(long *)(lVar6 + 0x20);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_01ecaf44();
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x48);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_01ecaf44();
      }
      if (*(int *)(lVar2 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      lVar2 = *(long *)(lVar6 + 0x20);
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
      System_Collections_Generic_ObjectComparer<FocusController_FocusedElement>__GetHashCode
                (**(long **)(lVar2 + 0xb8),param_1,param_2,param_3,param_4,
                 *(undefined8 *)(*(long *)(param_5 + 0x38) + 0x28));
      return;
    }
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
    uVar4 = thunk_FUN_01f117cc();
    uVar5 = thunk_FUN_01efb3a4(
                              Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<NavigationSubmitEvent>__
                              );
    FUN_034f6754(uVar4,uVar5,0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar4,param_5);
}


