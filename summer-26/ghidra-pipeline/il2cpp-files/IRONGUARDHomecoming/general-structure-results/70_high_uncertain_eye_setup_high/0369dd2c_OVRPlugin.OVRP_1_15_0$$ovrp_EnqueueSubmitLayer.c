/*
FUNCTION_NAME: OVRPlugin.OVRP_1_15_0$$ovrp_EnqueueSubmitLayer
ENTRY_POINT: 0369dd2c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_OVRP_1_15_0__ovrp_EnqueueSubmitLayer(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  long unaff_x19;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long *unaff_x22;
  
  thunk_FUN_01efb3a4(*(undefined8 *)(param_1 + 0x238));
  *(undefined1 *)(unaff_x19 + 0xfe8) = 1;
  lVar3 = *unaff_x22;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar3 = *unaff_x22;
  }
  lVar5 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x38);
  if (lVar5 == 0) {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar3 = *unaff_x22;
    }
    uVar6 = **(undefined8 **)(lVar3 + 0xb8);
    lVar5 = thunk_FUN_01f117cc(*(undefined8 *)
                                Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_31__);
    FUN_02e6c980(lVar5,uVar6,
                 *(undefined8 *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_35__,0);
    plVar4 = (long *)(*(long *)(*unaff_x22 + 0xb8) + 0x38);
    *plVar4 = lVar5;
    thunk_FUN_01f51358(plVar4,lVar5);
    lVar3 = *unaff_x22;
  }
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
    lVar3 = *unaff_x22;
  }
  puVar2 = Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_34__;
  puVar1 = Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_33__;
  lVar7 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x40);
  if (lVar7 == 0) {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar3 = *unaff_x22;
    }
    uVar6 = **(undefined8 **)(lVar3 + 0xb8);
    lVar7 = thunk_FUN_01f117cc(*(undefined8 *)
                                Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_32__);
    FUN_02e77dd4(lVar7,uVar6,
                 *(undefined8 *)Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_36__,0);
    plVar4 = (long *)(*(long *)(*unaff_x22 + 0xb8) + 0x40);
    *plVar4 = lVar7;
    thunk_FUN_01f51358(plVar4,lVar7);
  }
  uVar6 = thunk_FUN_01f117cc(*(undefined8 *)puVar2);
  FUN_025dc1fc(uVar6,4,lVar5,lVar7,*(undefined8 *)puVar1);
  return uVar6;
}


