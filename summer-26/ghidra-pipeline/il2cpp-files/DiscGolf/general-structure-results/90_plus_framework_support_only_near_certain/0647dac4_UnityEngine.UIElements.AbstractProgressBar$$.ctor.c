/*
FUNCTION_NAME: UnityEngine.UIElements.AbstractProgressBar$$.ctor
ENTRY_POINT: 0647dac4
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 95
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_9;weak_xr_or_state_hits_11;validity_or_gating_hits_4;ray_or_cast_sink_hits_2;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_9
*/


void UnityEngine_UIElements_AbstractProgressBar___ctor(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  long unaff_x20;
  undefined8 uVar7;
  long *unaff_x21;
  
  FUN_02d965b8();
  FUN_02d965b8(
              Method_OVRSceneLoader_<DelayCanvasPosUpdate>d__24_System_Collections_IEnumerator_Reset__
              );
  FUN_02d965b8(Method_OVRPlugin_<>c_<_cctor>b__807_99__);
  *(undefined1 *)(unaff_x20 + 0xd2) = 1;
  FUN_03c9fa04();
  lVar3 = *unaff_x21;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02df485c();
    lVar3 = *unaff_x21;
  }
  puVar1 = PTR_DAT_06a0d2b0;
  puVar5 = *(undefined8 **)(lVar3 + 0xb8);
  lVar6 = puVar5[1];
  if (lVar6 == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02df485c();
      puVar5 = *(undefined8 **)(*unaff_x21 + 0xb8);
    }
    uVar7 = *puVar5;
    lVar6 = thunk_FUN_02dd3144(*(undefined8 *)Method_OVRPlugin_RectiPair_get_Item__);
    FUN_04900cc8(lVar6,uVar7,*(undefined8 *)Method_OVRRaycaster_<>c_<GraphicRaycast>b__20_0__,0);
    plVar4 = (long *)(*(long *)(*unaff_x21 + 0xb8) + 8);
    *plVar4 = lVar6;
    LeanTween__value(plVar4,lVar6);
  }
  puVar2 = Method_OVRPlugin_<>c__DisplayClass528_0_<GetVirtualKeyboardModelAnimationStates>b__1__;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  FUN_035b9974(lVar6,*(undefined8 *)puVar2);
  lVar3 = *unaff_x21;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02df485c();
    lVar3 = *unaff_x21;
  }
  puVar5 = *(undefined8 **)(lVar3 + 0xb8);
  lVar6 = puVar5[2];
  if (lVar6 == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02df485c();
      puVar5 = *(undefined8 **)(*unaff_x21 + 0xb8);
    }
    uVar7 = *puVar5;
    lVar6 = thunk_FUN_02dd3144(*(undefined8 *)Method_OVRPlugin_RectfPair_set_Item__);
    FUN_048fcf48(lVar6,uVar7,*(undefined8 *)Method_OVRResources_<>c__DisplayClass2_0_<Load>b__0__,0)
    ;
    plVar4 = (long *)(*(long *)(*unaff_x21 + 0xb8) + 0x10);
    *plVar4 = lVar6;
    LeanTween__value(plVar4,lVar6);
  }
  puVar2 = Method_OVRPlugin_<>c__DisplayClass528_0_<GetVirtualKeyboardModelAnimationStates>b__0__;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  FUN_035b7330(lVar6,*(undefined8 *)puVar2);
  lVar3 = *unaff_x21;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02df485c();
    lVar3 = *unaff_x21;
  }
  puVar5 = *(undefined8 **)(lVar3 + 0xb8);
  lVar6 = puVar5[3];
  if (lVar6 == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02df485c();
      puVar5 = *(undefined8 **)(*unaff_x21 + 0xb8);
    }
    uVar7 = *puVar5;
    lVar6 = thunk_FUN_02dd3144(*(undefined8 *)Method_OVRPlugin_RectfPair_get_Item__);
    FUN_049024a4(lVar6,uVar7,
                 *(undefined8 *)
                  Method_OVRRuntimeController_<UpdateControllerModel>d__16_System_Collections_IEnumerator_Reset__
                 ,0);
    plVar4 = (long *)(*(long *)(*unaff_x21 + 0xb8) + 0x18);
    *plVar4 = lVar6;
    LeanTween__value(plVar4,lVar6);
  }
  puVar2 = Method_OVRPlugin_FovfPair_set_Item__;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  FUN_035bbc04(lVar6,*(undefined8 *)puVar2);
  lVar3 = *unaff_x21;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02df485c();
    lVar3 = *unaff_x21;
  }
  puVar5 = *(undefined8 **)(lVar3 + 0xb8);
  lVar6 = puVar5[4];
  if (lVar6 == 0) {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02df485c();
      puVar5 = *(undefined8 **)(*unaff_x21 + 0xb8);
    }
    uVar7 = *puVar5;
    lVar6 = thunk_FUN_02dd3144(*(undefined8 *)Method_OVRPlugin_RectiPair_set_Item__);
    FUN_04902258(lVar6,uVar7,
                 *(undefined8 *)
                  Method_OVRSceneLoader_<DelayCanvasPosUpdate>d__24_System_Collections_IEnumerator_Reset__
                 ,0);
    plVar4 = (long *)(*(long *)(*unaff_x21 + 0xb8) + 0x20);
    *plVar4 = lVar6;
    LeanTween__value(plVar4,lVar6);
  }
  puVar2 = Method_OVRPlugin_FovfPair_get_Item__;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  FUN_035bb850(lVar6,*(undefined8 *)puVar2);
  return;
}


