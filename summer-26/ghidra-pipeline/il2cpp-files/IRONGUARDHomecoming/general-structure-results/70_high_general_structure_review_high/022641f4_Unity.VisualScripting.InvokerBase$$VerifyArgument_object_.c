/*
FUNCTION_NAME: Unity.VisualScripting.InvokerBase$$VerifyArgument<object>
ENTRY_POINT: 022641f4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_4;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_1;frame_or_lifecycle_behavior
*/


void Unity_VisualScripting_InvokerBase__VerifyArgument<object>(void)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int in_w8;
  long unaff_x19;
  int unaff_w20;
  int unaff_w22;
  long unaff_x23;
  long lVar6;
  
                    /* try { // try from 022641f4 to 023641f7 has its CatchHandler @ 02264ec4 */
  if (in_w8 < 0) {
                    /* try { // try from 0226430c to 02364327 has its CatchHandler @ 02264ef8 */
    puVar1 = 
    Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<NavigationMoveEvent>__;
    if (-1 < unaff_w20) {
      puVar1 = Method_Oculus_Platform_Callback_SetNotificationCallback<PartyUpdateNotification>__;
    }
    uVar5 = thunk_FUN_01efb3a4(puVar1);
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
    uVar4 = thunk_FUN_01f117cc();
                    /* try { // try from 02264340 to 02364343 has its CatchHandler @ 02264e84 */
                    /* try { // try from 02264344 to 0236434f has its CatchHandler @ 02264ee8 */
    uVar3 = thunk_FUN_01efb3a4(
                              Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<NavigationCancelEvent>__
                              );
    FUN_034f3578(uVar4,uVar5,uVar3,0);
                    /* try { // try from 02264360 to 0236436b has its CatchHandler @ 02264ed8 */
  }
  else {
                    /* try { // try from 022641f8 to 02364203 has its CatchHandler @ 02264f14 */
    if (unaff_w20 <= *(int *)(unaff_x23 + 0x18) - unaff_w22) {
      if (unaff_w20 < 2) {
                    /* try { // try from 022642cc to 023642d7 has its CatchHandler @ 02264f00 */
        return;
      }
                    /* try { // try from 02264214 to 0236421f has its CatchHandler @ 02264f0c */
      lVar2 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x10);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
                    /* try { // try from 02264220 to 0236422b has its CatchHandler @ 02264f04 */
        lVar2 = FUN_01ecaf44();
      }
      if (*(int *)(lVar2 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
                    /* try { // try from 02264234 to 0236423b has its CatchHandler @ 02264ef0 */
      lVar6 = *(long *)(*(long *)(unaff_x19 + 0x38) + 8);
      lVar2 = *(long *)(lVar6 + 0x20);
                    /* try { // try from 0226423c to 0236424b has its CatchHandler @ 02264ee0 */
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_01ecaf44();
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x48);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_01ecaf44();
      }
                    /* try { // try from 0226425c to 02364267 has its CatchHandler @ 02264ed0 */
      if (*(int *)(lVar2 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      lVar2 = *(long *)(lVar6 + 0x20);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_01ecaf44();
      }
                    /* try { // try from 0226427c to 02364297 has its CatchHandler @ 02264ef4 */
      lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x48);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_01ecaf44();
      }
      if (**(long **)(lVar2 + 0xb8) != 0) {
                    /* try { // try from 022642a0 to 023642a3 has its CatchHandler @ 02264ec0 */
                    /* try { // try from 022642a4 to 023642af has its CatchHandler @ 02264f10 */
                    /* try { // try from 022642c0 to 023642cb has its CatchHandler @ 02264f08 */
        FUN_0323ada4();
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
                    /* try { // try from 0226436c to 02364377 has its CatchHandler @ 02264ecc */
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
    uVar4 = thunk_FUN_01f117cc();
                    /* try { // try from 02264380 to 02364387 has its CatchHandler @ 02264eb8 */
    uVar5 = thunk_FUN_01efb3a4(
                              Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<NavigationSubmitEvent>__
                              );
                    /* try { // try from 02264388 to 02364397 has its CatchHandler @ 02264ea8 */
    FUN_034f6754(uVar4,uVar5,0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar4);
}


