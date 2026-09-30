/*
FUNCTION_NAME: OVRPlugin$$UpdateInsightPassthroughGeometryTransform
ENTRY_POINT: 036794d0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__UpdateInsightPassthroughGeometryTransform(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  
  puVar3 = Method_Unity_VisualScripting_MultiplicationHandler_<>c_<_ctor>b__0_32__;
  puVar2 = Method_Unity_VisualScripting_LessThanOrEqualHandler_<>c_<_ctor>b__0_48__;
  puVar1 = Method_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_<>c_<Render>b__11_0__;
  if ((DAT_04833df3 & 1) == 0) {
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_Layouts_InputControlLayout_Cache_FindOrLoadLayout__
                      );
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_<>c_<Render>b__11_0__
                      );
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_LessThanOrEqualHandler_<>c_<_ctor>b__0_48__);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_MultiplicationHandler_<>c_<_ctor>b__0_33__);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_MultiplicationHandler_<>c_<_ctor>b__0_32__);
    DAT_04833df3 = 1;
  }
  uVar4 = thunk_FUN_01f116d0(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)puVar1);
  *(undefined8 *)(param_1 + 0x28) = uVar4;
  thunk_FUN_01f51358();
  uVar7 = *(undefined8 *)(param_1 + 0x30);
  uVar4 = thunk_FUN_01f116d0(uVar7,*(undefined8 *)puVar2);
  *(undefined8 *)(param_1 + 0x60) = uVar4;
  uVar4 = thunk_FUN_01f116d0(uVar7,*(undefined8 *)puVar2);
  thunk_FUN_01f51358((undefined8 *)(param_1 + 0x60),uVar4);
  lVar5 = *(long *)puVar3;
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar5 = *(long *)puVar3;
  }
  lVar8 = *(long *)(*(long *)(lVar5 + 0xb8) + 8);
  if (lVar8 == 0) {
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar5 = *(long *)puVar3;
    }
    uVar4 = **(undefined8 **)(lVar5 + 0xb8);
    lVar8 = thunk_FUN_01f117cc(*(undefined8 *)
                                Method_UnityEngine_InputSystem_Layouts_InputControlLayout_Cache_FindOrLoadLayout__
                              );
    FUN_02e63490(lVar8,uVar4,
                 *(undefined8 *)
                  Method_Unity_VisualScripting_MultiplicationHandler_<>c_<_ctor>b__0_33__,0);
    plVar6 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 8);
    *plVar6 = lVar8;
    thunk_FUN_01f51358(plVar6,lVar8);
  }
  *(long *)(param_1 + 0x68) = lVar8;
  thunk_FUN_01f51358((long *)(param_1 + 0x68),lVar8);
  return;
}


