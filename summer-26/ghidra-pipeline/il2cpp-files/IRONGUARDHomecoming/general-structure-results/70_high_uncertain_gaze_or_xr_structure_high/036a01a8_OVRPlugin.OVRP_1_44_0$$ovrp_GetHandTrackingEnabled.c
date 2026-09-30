/*
FUNCTION_NAME: OVRPlugin.OVRP_1_44_0$$ovrp_GetHandTrackingEnabled
ENTRY_POINT: 036a01a8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 71
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_2;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin_OVRP_1_44_0__ovrp_GetHandTrackingEnabled(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  puVar4 = Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_50__;
  puVar3 = Method_Unity_VisualScripting_GreaterThanOrEqualHandler_<>c_<_ctor>b__0_65__;
  puVar2 = Method_UnityEngine_Events_UnityEvent<byte[],_int,_int>_AddListener__;
  puVar1 = Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_GetPooled__;
  if ((DAT_04833f9b & 1) == 0) {
    thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_GetPooled__);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_GreaterThanOrEqualHandler_<>c_<_ctor>b__0_65__);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_50__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Events_UnityEvent<byte[],_int,_int>_AddListener__);
    DAT_04833f9b = 1;
  }
  uVar5 = FUN_01f08890(*(undefined8 *)puVar4,0x18);
  *(undefined8 *)(param_1 + 0x38) = uVar5;
  thunk_FUN_01f51358();
  uVar5 = FUN_01f08890(*(undefined8 *)puVar1,5);
  *(undefined8 *)(param_1 + 0x48) = uVar5;
  thunk_FUN_01f51358();
  uVar5 = FUN_01f08890(*(undefined8 *)puVar1,5);
  *(undefined8 *)(param_1 + 0x50) = uVar5;
  thunk_FUN_01f51358();
  uVar5 = FUN_01f08890(*(undefined8 *)puVar2,5);
  *(undefined8 *)(param_1 + 0x58) = uVar5;
  thunk_FUN_01f51358();
  uVar5 = thunk_FUN_01f117cc(*(undefined8 *)puVar3);
  FUN_035ac8e8(uVar5,0);
  *(undefined8 *)(param_1 + 0x88) = uVar5;
  thunk_FUN_01f51358((undefined8 *)(param_1 + 0x88),uVar5);
  FUN_035ac8e8(param_1,0);
  return;
}


