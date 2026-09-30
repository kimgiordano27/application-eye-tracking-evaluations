/*
FUNCTION_NAME: thunk_FUN_0647c340
ENTRY_POINT: 0647b3f4
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_16;weak_xr_or_state_hits_16;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_16
*/


void thunk_FUN_0647c340(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uVar8;
  
  puVar2 = Method_OVRPlugin_<>c_<_cctor>b__807_55__;
  puVar1 = Method_OVRPlugin_<>c_<_cctor>b__807_54__;
  if ((DAT_06dcd0ce & 1) == 0) {
    FUN_02d965b8(Method_OVRPlugin_<>c_<_cctor>b__807_56__);
    FUN_02d965b8(Method_OVRPlugin_<>c_<_cctor>b__807_57__);
    FUN_02d965b8(PTR_DAT_06a0d2b0);
    FUN_02d965b8(Method_OVRPlugin_<>c_<_cctor>b__807_54__);
    FUN_02d965b8(Method_OVRPlugin_<>c_<_cctor>b__807_58__);
    FUN_02d965b8(Method_OVRPlugin_<>c_<_cctor>b__807_59__);
    FUN_02d965b8(Method_OVRPlugin_<>c_<_cctor>b__807_6__);
    FUN_02d965b8(Method_OVRPlugin_<>c_<_cctor>b__807_60__);
    FUN_02d965b8(Method_OVRPlugin_<>c_<_cctor>b__807_55__);
    DAT_06dcd0ce = 1;
  }
  FUN_03c9d7fc(param_1,*(undefined8 *)puVar1);
  lVar4 = *(long *)puVar2;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_02df485c();
    lVar4 = *(long *)puVar2;
  }
  puVar1 = PTR_DAT_06a0d2b0;
  puVar6 = *(undefined8 **)(lVar4 + 0xb8);
  lVar7 = puVar6[1];
  if (lVar7 == 0) {
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_02df485c();
      puVar6 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
    }
    uVar8 = *puVar6;
    lVar7 = thunk_FUN_02dd3144(*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__807_59__);
    FUN_048fb230(lVar7,uVar8,*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__807_6__,0);
    plVar5 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
    *plVar5 = lVar7;
    LeanTween__value(plVar5,lVar7);
  }
  puVar3 = Method_OVRPlugin_<>c_<_cctor>b__807_56__;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  FUN_035b6d04(lVar7,*(undefined8 *)puVar3);
  lVar4 = *(long *)puVar2;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_02df485c();
    lVar4 = *(long *)puVar2;
  }
  puVar6 = *(undefined8 **)(lVar4 + 0xb8);
  lVar7 = puVar6[2];
  if (lVar7 == 0) {
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_02df485c();
      puVar6 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
    }
    uVar8 = *puVar6;
    lVar7 = thunk_FUN_02dd3144(*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__807_58__);
    FUN_049017a0(lVar7,uVar8,*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__807_60__,0);
    plVar5 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10);
    *plVar5 = lVar7;
    LeanTween__value(plVar5,lVar7);
  }
  puVar2 = Method_OVRPlugin_<>c_<_cctor>b__807_57__;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  FUN_035ba708(lVar7,*(undefined8 *)puVar2);
  return;
}


