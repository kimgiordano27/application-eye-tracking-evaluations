/*
FUNCTION_NAME: FUN_068522b8
ENTRY_POINT: 068522b8
PROGRAM: Untangled-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_4
*/


void FUN_068522b8(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  
  puVar3 = OVRInput_OVRControllerTouch_TypeInfo;
  puVar2 = OVRInput_OVRControllerRTouch_TypeInfo;
  puVar1 = UnityEngine_XR_ARSubsystems_XREnvironmentProbe_TypeInfo;
  if ((DAT_071d6b14 & 1) == 0) {
    FUN_02f07e70(UnityEngine_EventSystems_OVRInputModule_InputSource_TypeInfo);
    FUN_02f07e70(UnityEngine_UIElements_MouseMoveEvent_<>c_TypeInfo);
    FUN_02f07e70(UnityEngine_XR_ARSubsystems_XREnvironmentProbe_TypeInfo);
    FUN_02f07e70(Gley_TrafficSystem_Internal_VehicleAI_TypeInfo);
    FUN_02f07e70(OVRInput_OVRControllerTouch_TypeInfo);
    FUN_02f07e70(OVRInput_OVRControllerRTouch_TypeInfo);
    FUN_02f07e70(OVRManager_<>c_TypeInfo);
    FUN_02f07e70(OVRManager_CompositionMethod_TypeInfo);
    FUN_02f07e70(PTR_DAT_06d37040);
    DAT_071d6b14 = 1;
  }
  puVar5 = OVRManager_CompositionMethod_TypeInfo;
  puVar4 = UnityEngine_EventSystems_OVRInputModule_InputSource_TypeInfo;
  lVar6 = thunk_FUN_02ef1808(*(undefined8 *)puVar2);
  FUN_03fd0468(lVar6,*(undefined8 *)puVar3);
  param_1[0x89] = lVar6;
  thunk_FUN_02f411dc(param_1 + 0x89,lVar6);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  puVar2 = UnityEngine_UIElements_MouseMoveEvent_<>c_TypeInfo;
  puVar1 = PTR_DAT_06d37040;
  FUN_045e7200(param_1,param_2,0,*(undefined8 *)puVar4);
  lVar6 = *(long *)puVar5;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar6 = *(long *)puVar5;
  }
  FUN_068cbd7c(param_1,**(undefined8 **)(lVar6 + 0xb8),0);
  lVar6 = FUN_045e66ec(param_1,*(undefined8 *)puVar2);
  lVar7 = thunk_FUN_02ef1808(*(undefined8 *)puVar1);
  FUN_068c963c(lVar7,0);
  if (lVar7 != 0) {
    FUN_068c920c(lVar7,*(undefined8 *)(*(long *)(*(long *)puVar5 + 0xb8) + 8),0);
    param_1[0x8b] = lVar7;
    thunk_FUN_02f411dc(param_1 + 0x8b,lVar7);
    if (lVar6 != 0) {
      FUN_068d0324(lVar6,lVar7,0);
      puVar3 = OVRManager_<>c_TypeInfo;
      puVar1 = Gley_TrafficSystem_Internal_VehicleAI_TypeInfo;
      lVar6 = param_1[0x8b];
      if (lVar6 != 0) {
        FUN_068cbd7c(lVar6,*(undefined8 *)(*(long *)(*(long *)puVar5 + 0xb8) + 8),0);
        lVar6 = thunk_FUN_02ef1808(*(undefined8 *)puVar1);
        FUN_05025f00(lVar6,param_1,*(undefined8 *)puVar3,0);
        param_1[0x8a] = lVar6;
        thunk_FUN_02f411dc(param_1 + 0x8a,lVar6);
        FUN_068519fc(param_1,param_3);
        (**(code **)(*param_1 + 0x7f8))(param_1,0xffffffff,*(undefined8 *)(*param_1 + 0x800));
        lVar6 = FUN_045e66ec(param_1,*(undefined8 *)puVar2);
        if (lVar6 != 0) {
          *(undefined1 *)(lVar6 + 0x20) = 0;
          FUN_06887bdc(param_1,1,0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


