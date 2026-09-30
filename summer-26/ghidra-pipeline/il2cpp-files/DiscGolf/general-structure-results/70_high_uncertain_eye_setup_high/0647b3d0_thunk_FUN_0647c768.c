/*
FUNCTION_NAME: thunk_FUN_0647c768
ENTRY_POINT: 0647b3d0
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_21;weak_xr_or_state_hits_21;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_21
*/


void thunk_FUN_0647c768(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uVar8;
  
  puVar2 = Method_OVRPlugin_<>c_<_cctor>b__807_64__;
  puVar1 = Method_OVRPlugin_<>c_<_cctor>b__807_63__;
  if ((DAT_06dcd0d0 & 1) == 0) {
    FUN_02d965b8(Method_OVRPlugin_<>c_<_cctor>b__807_65__);
    FUN_02d965b8(Method_OVRPlugin_<>c_<_cctor>b__807_66__);
    FUN_02d965b8(Method_OVRPlugin_<>c_<_cctor>b__807_67__);
    FUN_02d965b8(Method_OVRPlugin_<>c_<_cctor>b__807_68__);
    FUN_02d965b8(Method_OVRPlugin_<>c_<_cctor>b__807_69__);
    FUN_02d965b8(Method_OVRPlugin_<>c_<_cctor>b__807_7__);
    FUN_02d965b8(Method_OVRPlugin_<>c_<_cctor>b__807_70__);
    FUN_02d965b8(PTR_DAT_06a0d2b0);
    FUN_02d965b8(Method_OVRPlugin_<>c_<_cctor>b__807_63__);
    FUN_02d965b8(Method_OVRPlugin_<>c_<_cctor>b__807_71__);
    FUN_02d965b8(Method_OVRPlugin_<>c_<_cctor>b__807_72__);
    FUN_02d965b8(Method_OVRPlugin_<>c_<_cctor>b__807_73__);
    FUN_02d965b8(Method_OVRPlugin_<>c_<_cctor>b__807_74__);
    FUN_02d965b8(Method_OVRPlugin_<>c_<_cctor>b__807_75__);
    FUN_02d965b8(Method_OVRPlugin_<>c_<_cctor>b__807_76__);
    FUN_02d965b8(Method_OVRPlugin_<>c_<_cctor>b__807_77__);
    FUN_02d965b8(Method_OVRPlugin_<>c_<_cctor>b__807_78__);
    FUN_02d965b8(Method_OVRPlugin_<>c_<_cctor>b__807_79__);
    FUN_02d965b8(Method_OVRPlugin_<>c_<_cctor>b__807_8__);
    FUN_02d965b8(Method_OVRPlugin_<>c_<_cctor>b__807_80__);
    FUN_02d965b8(Method_OVRPlugin_<>c_<_cctor>b__807_81__);
    FUN_02d965b8(Method_OVRPlugin_<>c_<_cctor>b__807_82__);
    FUN_02d965b8(Method_OVRPlugin_<>c_<_cctor>b__807_83__);
    FUN_02d965b8(Method_OVRPlugin_<>c_<_cctor>b__807_64__);
    DAT_06dcd0d0 = 1;
  }
  FUN_03c9c14c(param_1,*(undefined8 *)puVar1);
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
    lVar7 = thunk_FUN_02dd3144(*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__807_73__);
    FUN_048ff5d0(lVar7,uVar8,*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__807_78__,0);
    plVar5 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
    *plVar5 = lVar7;
    LeanTween__value(plVar5,lVar7);
  }
  puVar3 = Method_OVRPlugin_<>c_<_cctor>b__807_7__;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  FUN_035b920c(lVar7,*(undefined8 *)puVar3);
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
    lVar7 = thunk_FUN_02dd3144(*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__807_71__);
    FUN_048ff5d0(lVar7,uVar8,*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__807_79__,0);
    plVar5 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10);
    *plVar5 = lVar7;
    LeanTween__value(plVar5,lVar7);
  }
  puVar3 = Method_OVRPlugin_<>c_<_cctor>b__807_65__;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  FUN_035b920c(lVar7,*(undefined8 *)puVar3);
  lVar4 = *(long *)puVar2;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_02df485c();
    lVar4 = *(long *)puVar2;
  }
  puVar6 = *(undefined8 **)(lVar4 + 0xb8);
  lVar7 = puVar6[3];
  if (lVar7 == 0) {
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_02df485c();
      puVar6 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
    }
    uVar8 = *puVar6;
    lVar7 = thunk_FUN_02dd3144(*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__807_74__);
    FUN_048ff5d0(lVar7,uVar8,*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__807_8__,0);
    plVar5 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x18);
    *plVar5 = lVar7;
    LeanTween__value(plVar5,lVar7);
  }
  puVar3 = Method_OVRPlugin_<>c_<_cctor>b__807_70__;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  FUN_035b920c(lVar7,*(undefined8 *)puVar3);
  lVar4 = *(long *)puVar2;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_02df485c();
    lVar4 = *(long *)puVar2;
  }
  puVar6 = *(undefined8 **)(lVar4 + 0xb8);
  lVar7 = puVar6[4];
  if (lVar7 == 0) {
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_02df485c();
      puVar6 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
    }
    uVar8 = *puVar6;
    lVar7 = thunk_FUN_02dd3144(*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__807_75__);
    FUN_04901170(lVar7,uVar8,*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__807_80__,0);
    plVar5 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x20);
    *plVar5 = lVar7;
    LeanTween__value(plVar5,lVar7);
  }
  puVar3 = Method_OVRPlugin_<>c_<_cctor>b__807_68__;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  FUN_035b9d28(lVar7,*(undefined8 *)puVar3);
  lVar4 = *(long *)puVar2;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_02df485c();
    lVar4 = *(long *)puVar2;
  }
  puVar6 = *(undefined8 **)(lVar4 + 0xb8);
  lVar7 = puVar6[5];
  if (lVar7 == 0) {
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_02df485c();
      puVar6 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
    }
    uVar8 = *puVar6;
    lVar7 = thunk_FUN_02dd3144(*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__807_72__);
    FUN_04901170(lVar7,uVar8,*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__807_81__,0);
    plVar5 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x28);
    *plVar5 = lVar7;
    LeanTween__value(plVar5,lVar7);
  }
  puVar3 = Method_OVRPlugin_<>c_<_cctor>b__807_67__;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  FUN_035b9d28(lVar7,*(undefined8 *)puVar3);
  lVar4 = *(long *)puVar2;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_02df485c();
    lVar4 = *(long *)puVar2;
  }
  puVar6 = *(undefined8 **)(lVar4 + 0xb8);
  lVar7 = puVar6[6];
  if (lVar7 == 0) {
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_02df485c();
      puVar6 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
    }
    uVar8 = *puVar6;
    lVar7 = thunk_FUN_02dd3144(*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__807_76__);
    FUN_04901170(lVar7,uVar8,*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__807_82__,0);
    plVar5 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x30);
    *plVar5 = lVar7;
    LeanTween__value(plVar5,lVar7);
  }
  puVar3 = Method_OVRPlugin_<>c_<_cctor>b__807_66__;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  FUN_035b9d28(lVar7,*(undefined8 *)puVar3);
  lVar4 = *(long *)puVar2;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_02df485c();
    lVar4 = *(long *)puVar2;
  }
  puVar6 = *(undefined8 **)(lVar4 + 0xb8);
  lVar7 = puVar6[7];
  if (lVar7 == 0) {
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_02df485c();
      puVar6 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
    }
    uVar8 = *puVar6;
    lVar7 = thunk_FUN_02dd3144(*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__807_77__);
    FUN_04901170(lVar7,uVar8,*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__807_83__,0);
    plVar5 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x38);
    *plVar5 = lVar7;
    LeanTween__value(plVar5,lVar7);
  }
  puVar2 = Method_OVRPlugin_<>c_<_cctor>b__807_69__;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  FUN_035b9d28(lVar7,*(undefined8 *)puVar2);
  return;
}


