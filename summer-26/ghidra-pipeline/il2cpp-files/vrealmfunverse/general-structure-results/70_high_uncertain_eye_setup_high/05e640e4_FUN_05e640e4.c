/*
FUNCTION_NAME: FUN_05e640e4
ENTRY_POINT: 05e640e4
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 84
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;ui_interaction
EVIDENCE: strong_eye_source_hits_8;weak_xr_or_state_hits_16;ui_or_gameplay_sink_hits_4;functionality_eye_api_context_without_clear_sink_hits_8
*/


void FUN_05e640e4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  puVar5 = Method_OVRPlugin_FovfPair_get_Item__;
  puVar4 = Method_OVRPlugin_<>c__DisplayClass531_0_<GetVirtualKeyboardModelAnimationStates>b__1__;
  puVar3 = Method_OVRPlugin_<>c__DisplayClass531_0_<GetVirtualKeyboardModelAnimationStates>b__0__;
  puVar2 = Method_OVRPlugin_<>c_<_cctor>b__810_99__;
  puVar1 = 
  Method_UnityEngine_Rendering_DebugDisplayGPUResidentDrawer_<>c__DisplayClass36_0_<AddInstanceOcclusionPassDataRow>b__7__
  ;
  if ((DAT_066dc65d & 1) == 0) {
    FUN_02b3c81c(
                Method_UnityEngine_Rendering_DebugDisplayGPUResidentDrawer_<>c__DisplayClass36_0_<AddInstanceOcclusionPassDataRow>b__7__
                );
    FUN_02b3c81c(
                Method_OVRPlugin_<>c__DisplayClass531_0_<GetVirtualKeyboardModelAnimationStates>b__0__
                );
    FUN_02b3c81c(Method_OVRPlugin_<>c_<_cctor>b__810_99__);
    FUN_02b3c81c(
                Method_OVRPlugin_<>c__DisplayClass531_0_<GetVirtualKeyboardModelAnimationStates>b__1__
                );
    FUN_02b3c81c(Method_OVRPlugin_FovfPair_get_Item__);
    DAT_066dc65d = 1;
  }
  uVar6 = UnityEngine_Bindings_NativeConditionalAttribute__set_Enabled
                    (*(undefined8 *)puVar2,1,0,0,0);
  uVar7 = *(undefined8 *)puVar3;
  **(undefined8 **)(*(long *)puVar1 + 0xb8) = uVar6;
  uVar6 = UnityEngine_Bindings_NativeConditionalAttribute__set_Enabled(uVar7,1,0,0,0);
  uVar7 = *(undefined8 *)puVar4;
  *(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 8) = uVar6;
  uVar6 = UnityEngine_Bindings_NativeConditionalAttribute__set_Enabled(uVar7,1,0,0,0);
  uVar7 = *(undefined8 *)puVar5;
  *(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10) = uVar6;
  uVar6 = UnityEngine_Bindings_NativeConditionalAttribute__set_Enabled(uVar7,1,0,0,0);
  *(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x18) = uVar6;
  return;
}


