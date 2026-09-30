/*
FUNCTION_NAME: FUN_036976d4
ENTRY_POINT: 036976d4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 82
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_036976d4(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar1 = Method_OVRSpatialAnchor_UnboundAnchor_get_Pose__;
  if ((DAT_04833efa & 1) == 0) {
    thunk_FUN_01efb3a4(Method_OVRPlugin_<>c_<_cctor>b__653_53__);
    thunk_FUN_01efb3a4(
                      Method_OVRSpectatorModeDomeTest_<TimerCoroutine>d__20_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_01efb3a4(Method_OVRTrackedKeyboard_<>c_<_ctor>b__110_0__);
    thunk_FUN_01efb3a4(Method_OVRSpatialAnchor_UnboundAnchor_get_Pose__);
    DAT_04833efa = 1;
  }
  *(undefined4 *)(param_1 + 0x140) = 0x3dcccccd;
  lVar3 = *(long *)puVar1;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar3 = *(long *)puVar1;
  }
  puVar2 = 
  Method_OVRSpectatorModeDomeTest_<TimerCoroutine>d__20_System_Collections_IEnumerator_Reset__;
  lVar5 = *(long *)(*(long *)(lVar3 + 0xb8) + 8);
  if (lVar5 == 0) {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar3 = *(long *)puVar1;
    }
    uVar6 = **(undefined8 **)(lVar3 + 0xb8);
    lVar5 = thunk_FUN_01f117cc(*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__653_53__);
    FUN_02ab0644(lVar5,uVar6,*(undefined8 *)Method_OVRTrackedKeyboard_<>c_<_ctor>b__110_0__,0);
    plVar4 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
    *plVar4 = lVar5;
    thunk_FUN_01f51358(plVar4,lVar5);
  }
  *(long *)(param_1 + 0x170) = lVar5;
  thunk_FUN_01f51358(param_1 + 0x170,lVar5);
  FUN_02f499f0(param_1,*(undefined8 *)puVar2);
  return;
}


