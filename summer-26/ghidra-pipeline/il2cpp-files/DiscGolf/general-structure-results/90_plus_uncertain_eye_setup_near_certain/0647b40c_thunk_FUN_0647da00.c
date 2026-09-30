/*
FUNCTION_NAME: thunk_FUN_0647da00
ENTRY_POINT: 0647b40c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 119
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_20;weak_xr_or_state_hits_21;validity_or_gating_hits_4;ray_or_cast_sink_hits_4;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_20
*/


void thunk_FUN_0647da00(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uVar8;
  
  puVar2 = Method_OVRPlugin_<>c_<_cctor>b__807_99__;
  puVar1 = Method_OVRPlugin_<>c_<_cctor>b__807_98__;
  if ((DAT_06dcd0d2 & 1) == 0) {
    FUN_02d965b8(
                Method_OVRPlugin_<>c__DisplayClass528_0_<GetVirtualKeyboardModelAnimationStates>b__0__
                );
    FUN_02d965b8(
                Method_OVRPlugin_<>c__DisplayClass528_0_<GetVirtualKeyboardModelAnimationStates>b__1__
                );
    FUN_02d965b8(Method_OVRPlugin_FovfPair_get_Item__);
    FUN_02d965b8(Method_OVRPlugin_FovfPair_set_Item__);
    FUN_02d965b8(PTR_DAT_06a0d2b0);
    FUN_02d965b8(Method_OVRPlugin_<>c_<_cctor>b__807_98__);
    FUN_02d965b8(Method_OVRPlugin_RectfPair_get_Item__);
    FUN_02d965b8(Method_OVRPlugin_RectfPair_set_Item__);
    FUN_02d965b8(Method_OVRPlugin_RectiPair_get_Item__);
    FUN_02d965b8(Method_OVRPlugin_RectiPair_set_Item__);
    FUN_02d965b8(Method_OVRRaycaster_<>c_<GraphicRaycast>b__20_0__);
    FUN_02d965b8(Method_OVRResources_<>c__DisplayClass2_0_<Load>b__0__);
    FUN_02d965b8(
                Method_OVRRuntimeController_<UpdateControllerModel>d__16_System_Collections_IEnumerator_Reset__
                );
    FUN_02d965b8(
                Method_OVRSceneLoader_<DelayCanvasPosUpdate>d__24_System_Collections_IEnumerator_Reset__
                );
    FUN_02d965b8(Method_OVRPlugin_<>c_<_cctor>b__807_99__);
    DAT_06dcd0d2 = 1;
  }
  FUN_03c9fa04(param_1,*(undefined8 *)puVar1);
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
    lVar7 = thunk_FUN_02dd3144(*(undefined8 *)Method_OVRPlugin_RectiPair_get_Item__);
    FUN_04900cc8(lVar7,uVar8,*(undefined8 *)Method_OVRRaycaster_<>c_<GraphicRaycast>b__20_0__,0);
    plVar5 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
    *plVar5 = lVar7;
    LeanTween__value(plVar5,lVar7);
  }
  puVar3 = Method_OVRPlugin_<>c__DisplayClass528_0_<GetVirtualKeyboardModelAnimationStates>b__1__;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  FUN_035b9974(lVar7,*(undefined8 *)puVar3);
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
    lVar7 = thunk_FUN_02dd3144(*(undefined8 *)Method_OVRPlugin_RectfPair_set_Item__);
    FUN_048fcf48(lVar7,uVar8,*(undefined8 *)Method_OVRResources_<>c__DisplayClass2_0_<Load>b__0__,0)
    ;
    plVar5 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10);
    *plVar5 = lVar7;
    LeanTween__value(plVar5,lVar7);
  }
  puVar3 = Method_OVRPlugin_<>c__DisplayClass528_0_<GetVirtualKeyboardModelAnimationStates>b__0__;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  FUN_035b7330(lVar7,*(undefined8 *)puVar3);
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
    lVar7 = thunk_FUN_02dd3144(*(undefined8 *)Method_OVRPlugin_RectfPair_get_Item__);
    FUN_049024a4(lVar7,uVar8,
                 *(undefined8 *)
                  Method_OVRRuntimeController_<UpdateControllerModel>d__16_System_Collections_IEnumerator_Reset__
                 ,0);
    plVar5 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x18);
    *plVar5 = lVar7;
    LeanTween__value(plVar5,lVar7);
  }
  puVar3 = Method_OVRPlugin_FovfPair_set_Item__;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  FUN_035bbc04(lVar7,*(undefined8 *)puVar3);
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
    lVar7 = thunk_FUN_02dd3144(*(undefined8 *)Method_OVRPlugin_RectiPair_set_Item__);
    FUN_04902258(lVar7,uVar8,
                 *(undefined8 *)
                  Method_OVRSceneLoader_<DelayCanvasPosUpdate>d__24_System_Collections_IEnumerator_Reset__
                 ,0);
    plVar5 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x20);
    *plVar5 = lVar7;
    LeanTween__value(plVar5,lVar7);
  }
  puVar2 = Method_OVRPlugin_FovfPair_get_Item__;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  FUN_035bb850(lVar7,*(undefined8 *)puVar2);
  return;
}


