/*
FUNCTION_NAME: OVRPlugin.OVRP_1_15_0$$ovrp_UpdateExternalCamera
ENTRY_POINT: 0369d744
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_1;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_4
*/


void OVRPlugin_OVRP_1_15_0__ovrp_UpdateExternalCamera(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  
  puVar1 = Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_22__;
  if ((DAT_04833f3e & 1) == 0) {
    thunk_FUN_01efb3a4(Method_OVRPlugin_<>c_<_cctor>b__653_53__);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_23__);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_22__);
    DAT_04833f3e = 1;
  }
  *(undefined4 *)(param_1 + 0x44) = 0x42340000;
  uVar2 = FUN_040397e0(0,0,0x3f800000,0x42c80000,0);
  *(undefined8 *)(param_1 + 0x48) = uVar2;
  thunk_FUN_01f51358((undefined8 *)(param_1 + 0x48),uVar2);
  *(undefined1 *)(param_1 + 0x50) = 1;
  lVar3 = *(long *)puVar1;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar3 = *(long *)puVar1;
  }
  lVar5 = *(long *)(*(long *)(lVar3 + 0xb8) + 8);
  if (lVar5 == 0) {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar3 = *(long *)puVar1;
    }
    uVar2 = **(undefined8 **)(lVar3 + 0xb8);
    lVar5 = thunk_FUN_01f117cc(*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__653_53__);
    FUN_02ab0644(lVar5,uVar2,
                 *(undefined8 *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_23__,0);
    plVar4 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
    *plVar4 = lVar5;
    thunk_FUN_01f51358(plVar4,lVar5);
  }
  *(long *)(param_1 + 0x68) = lVar5;
  thunk_FUN_01f51358((long *)(param_1 + 0x68),lVar5);
  thunk_FUN_0406f928(param_1,0);
  return;
}


