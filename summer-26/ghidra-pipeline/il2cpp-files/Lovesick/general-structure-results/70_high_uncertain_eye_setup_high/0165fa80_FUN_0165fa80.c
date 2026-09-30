/*
FUNCTION_NAME: FUN_0165fa80
ENTRY_POINT: 0165fa80
PROGRAM: Lovesick-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_4;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void FUN_0165fa80(long param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if ((DAT_0377834e & 1) == 0) {
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List<FocusController_FocusedElement>__ctor__
                      );
    DAT_0377834e = 1;
  }
  *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
  FUN_017b46ec(param_1,0);
  if (param_2 != 0) {
    uVar2 = FUN_0178c03c(param_2,0);
    if (((uVar2 & 1) == 0) && (uVar2 = FUN_0178b0b0(param_2,0), (uVar2 & 1) == 0)) {
      thunk_FUN_00d48444(Method_OVRLocatable_TrackingSpacePose_ComputeWorldRotation__);
      uVar3 = thunk_FUN_00d62348();
      FUN_00ac2be8();
      uVar4 = thunk_FUN_00d48444(Method_Oculus_Interaction_HandRayPinchGlow_UpdateVisual__);
      FUN_016f2f28(uVar3,uVar4,0);
    }
    else {
      puVar1 = Method_System_Collections_Generic_List<FocusController_FocusedElement>__ctor__;
      *(long *)(param_1 + 0x10) = param_2;
      uVar2 = FUN_017bc96c(param_3,**(undefined8 **)(*(long *)puVar1 + 0xb8),0);
      if ((uVar2 & 1) == 0) {
        return;
      }
      thunk_FUN_00d48444(Method_RCG_Events_ShowPromptOnMessage_OnTeleport__);
      uVar3 = thunk_FUN_00d62348();
      FUN_00ac2be8();
      uVar4 = thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_53__);
      FUN_0176c578(uVar3,uVar4,0);
    }
    uVar4 = thunk_FUN_00d48444(System_Collections_Generic_HashSet<RTHandle>_TypeInfo);
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar3,uVar4);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


