/*
FUNCTION_NAME: OVRPlugin.LogCallback2DelegateType$$BeginInvoke
ENTRY_POINT: 0369334c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_4
*/


void OVRPlugin_LogCallback2DelegateType__BeginInvoke(ulong param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  if ((param_1 & 1) == 0) {
    thunk_FUN_01efb3a4(
                      Method_Oculus_Interaction_PointerInteractor<DistanceGrabInteractor,_DistanceGrabInteractable>_InteractableUnselected__
                      );
    thunk_FUN_01efb3a4(Method_Gameplay_MeleeWeaponModule_<>c_<Start>b__21_1__);
    thunk_FUN_01efb3a4(Method_OVRPlugin_<>c_<_cctor>b__653_63__);
    *(undefined1 *)(unaff_x20 + 0xed7) = 1;
  }
  puVar2 = Method_OVRPlugin_<>c_<_cctor>b__653_63__;
  puVar1 = Method_Gameplay_MeleeWeaponModule_<>c_<Start>b__21_1__;
                    /* catch() { ... } // from try @ 036933ac with catch @ 03693384
                       catch() { ... } // from try @ 036933dc with catch @ 03693384
                       catch() { ... } // from try @ 03693418 with catch @ 03693384 */
  if (*(char *)(param_2 + 0x38) != '\0') {
    uVar3 = thunk_FUN_01f117cc(*(undefined8 *)
                                Method_Oculus_Interaction_PointerInteractor<DistanceGrabInteractor,_DistanceGrabInteractable>_InteractableUnselected__
                              );
                    /* try { // try from 036933a8 to 037933ab has its CatchHandler @ 036933c0 */
                    /* try { // try from 036933ac to 037933d7 has its CatchHandler @ 03693384 */
    FUN_034f6024(uVar3,param_2,*(undefined8 *)puVar2,0);
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 036933a8 with catch @ 036933c0
                        */
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
                    /* try { // try from 036933d8 to 037933db has its CatchHandler @ 03693408 */
                    /* try { // try from 036933dc to 0379340b has its CatchHandler @ 03693384 */
    FUN_03666afc(param_2,uVar3,0);
    return;
  }
  return;
}


