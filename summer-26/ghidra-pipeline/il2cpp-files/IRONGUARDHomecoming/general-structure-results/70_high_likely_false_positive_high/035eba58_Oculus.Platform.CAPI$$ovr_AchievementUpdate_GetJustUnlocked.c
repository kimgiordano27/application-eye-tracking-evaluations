/*
FUNCTION_NAME: Oculus.Platform.CAPI$$ovr_AchievementUpdate_GetJustUnlocked
ENTRY_POINT: 035eba58
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 72
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_6;telemetry_or_network_hits_3;frame_or_lifecycle_behavior
*/


void Oculus_Platform_CAPI__ovr_AchievementUpdate_GetJustUnlocked(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 in_w8;
  int unaff_w19;
  int unaff_w20;
  int unaff_w21;
  long unaff_x22;
  long *unaff_x23;
  long unaff_x24;
  long unaff_x25;
  undefined1 auVar5 [16];
  undefined *puVar4;
  
                    /* catch() { ... } // from try @ 035eba10 with catch @ 035eba58 */
  *(undefined1 *)(unaff_x25 + 0x7ee) = in_w8;
  puVar4 = Method_UnityEngine_Bindings_NativeMethodAttribute__ctor__;
                    /* catch() { ... } // from try @ 035eb8d4 with catch @ 035eba5c */
                    /* catch() { ... } // from try @ 035eb86c with catch @ 035eba60 */
  if ((unaff_x22 == 0) || (unaff_x24 == 0)) {
    puVar4 = Method_Internal_Cryptography_OidLookup_ToOid__;
    if (unaff_x22 != 0) {
      puVar4 = 
      Method_System_Runtime_Remoting_Channels_CrossAppDomainSink_<AsyncProcessMessage>b__10_0__;
    }
    uVar1 = thunk_FUN_01efb3a4(puVar4);
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingVideoStats>_get_Data__);
    uVar3 = thunk_FUN_01f117cc();
    uVar2 = thunk_FUN_01efb3a4(Method_Unity_VisualScripting_OnButtonInput_ShouldTrigger__);
    FUN_034f7d10(uVar3,uVar1,uVar2,0);
  }
  else {
                    /* catch() { ... } // from try @ 035eb9c4 with catch @ 035eba64
                       catch() { ... } // from try @ 035eba3c with catch @ 035eba64 */
    if ((-1 < unaff_w20) && (-1 < unaff_w21)) {
                    /* catch() { ... } // from try @ 035eba0c with catch @ 035eba70 */
                    /* catch() { ... } // from try @ 035eba08 with catch @ 035eba74 */
      if (*(int *)(unaff_x22 + 0x10) - unaff_w21 < unaff_w20) {
        thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
        uVar1 = thunk_FUN_01f117cc();
                    /* try { // try from 035ebc0c to 036ebc23 has its CatchHandler @ 035ebc28 */
        uVar2 = thunk_FUN_01efb3a4(Method_Internal_Cryptography_OidLookup_ToOid__);
        puVar4 = Method_UnityEngine_Object_FindObjectOfType<Camera>__;
      }
      else {
        if (-1 < unaff_w19) {
          if (unaff_w19 <= *(int *)(unaff_x24 + 0x18)) {
                    /* try { // try from 035eba90 to 036eba93 has its CatchHandler @ 035ebba4 */
            thunk_FUN_01ed2e78(0);
            auVar5 = FUN_02721b04();
            FUN_0238dcd0(auVar5._0_8_,auVar5._8_8_,*(undefined8 *)puVar4);
                    /* WARNING: Could not recover jumptable at 0x035ebaf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*unaff_x23 + 600))();
            return;
          }
        }
                    /* try { // try from 035ebb04 to 036ebb1b has its CatchHandler @ 035eb818 */
        thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
        uVar1 = thunk_FUN_01f117cc();
        uVar2 = thunk_FUN_01efb3a4(Method_Unity_VisualScripting_OnKeyboardInput_ShouldTrigger__);
        puVar4 = 
        Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<MouseMoveEvent>__;
                    /* try { // try from 035ebb1c to 036ebb6b has its CatchHandler @ 035ebbb4 */
      }
      uVar3 = thunk_FUN_01efb3a4(puVar4);
                    /* try { // try from 035ebc24 to 036ebc43 has its CatchHandler @ 035ebbc8 */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 035ebc0c with catch @ 035ebc28
                        */
      FUN_034f3578(uVar1,uVar2,uVar3,0);
      uVar2 = thunk_FUN_01efb3a4(Method_Unity_VisualScripting_EqualityHandler_<>c_<_ctor>b__0_103__)
      ;
                    /* WARNING: Subroutine does not return */
      FUN_01f08910(uVar1,uVar2);
    }
    puVar4 = Method_Unity_VisualScripting_OnMouseInput_ShouldTrigger__;
    if (-1 < unaff_w21) {
      puVar4 = Method_UnityEngine_Object_Instantiate<GameObject>__;
    }
    uVar1 = thunk_FUN_01efb3a4(puVar4);
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LaunchFriendRequestFlowResult>__ctor__);
    uVar3 = thunk_FUN_01f117cc();
    uVar2 = thunk_FUN_01efb3a4(
                              Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<NavigationCancelEvent>__
                              );
    FUN_034f3578(uVar3,uVar1,uVar2,0);
  }
  uVar1 = thunk_FUN_01efb3a4(Method_Unity_VisualScripting_EqualityHandler_<>c_<_ctor>b__0_103__);
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar3,uVar1);
}


