/*
FUNCTION_NAME: OVRPlugin.VirtualKeyboardModelAnimationStateHandler$$EndInvoke
ENTRY_POINT: 05694f28
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_VirtualKeyboardModelAnimationStateHandler__EndInvoke
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 unaff_x19;
  long *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  
  FUN_04df85f0(param_2,param_3,*param_1);
  FUN_04df85f0();
  FUN_04df85f0();
  FUN_04df85f0();
  FUN_04df85f0();
  **(undefined8 **)(*unaff_x20 + 0xb8) = unaff_x19;
  LeanTween__value(*(undefined8 *)(*unaff_x20 + 0xb8));
  lVar4 = thunk_FUN_02dd3144(*unaff_x22);
  FUN_03bfece4(lVar4,*unaff_x21);
  puVar3 = UnityEngine_UIElements_ObjectPool<UIRAtlasAllocator_AreaNode>_TypeInfo;
  if (lVar4 != 0) {
    FUN_03bfff24(lVar4,2,*(undefined8 *)
                          UnityEngine_UIElements_ObjectPool<UIRAtlasAllocator_AreaNode>_TypeInfo);
    FUN_03bfff24(lVar4,3,*(undefined8 *)puVar3);
    FUN_03bfff24(lVar4,4,*(undefined8 *)puVar3);
    FUN_03bfff24(lVar4,5,*(undefined8 *)puVar3);
    plVar5 = (long *)(*(long *)(*unaff_x20 + 0xb8) + 8);
    *plVar5 = lVar4;
    LeanTween__value(plVar5,lVar4);
    lVar4 = thunk_FUN_02dd3144(*unaff_x22);
    FUN_03bfece4(lVar4,*unaff_x21);
    if (lVar4 != 0) {
      FUN_03bfff24(lVar4,6,*(undefined8 *)puVar3);
      FUN_03bfff24(lVar4,7,*(undefined8 *)puVar3);
      FUN_03bfff24(lVar4,8,*(undefined8 *)puVar3);
      FUN_03bfff24(lVar4,9,*(undefined8 *)puVar3);
      FUN_03bfff24(lVar4,10,*(undefined8 *)puVar3);
      plVar5 = (long *)(*(long *)(*unaff_x20 + 0xb8) + 0x10);
      *plVar5 = lVar4;
      LeanTween__value(plVar5,lVar4);
      lVar4 = thunk_FUN_02dd3144(*unaff_x22);
      FUN_03bfece4(lVar4,*unaff_x21);
      puVar2 = UnityEngine_UIElements_ObjectPool<VisualElementFocusChangeTarget>_TypeInfo;
      puVar1 = UnityEngine_UIElements_ObjectPool<PropagationPaths>_TypeInfo;
      if (lVar4 != 0) {
        FUN_03bfff24(lVar4,6,*(undefined8 *)puVar3);
        FUN_03bfff24(lVar4,7,*(undefined8 *)puVar3);
        FUN_03bfff24(lVar4,8,*(undefined8 *)puVar3);
        FUN_03bfff24(lVar4,9,*(undefined8 *)puVar3);
        FUN_03bfff24(lVar4,10,*(undefined8 *)puVar3);
        plVar5 = (long *)(*(long *)(*unaff_x20 + 0xb8) + 0x18);
        *plVar5 = lVar4;
        LeanTween__value(plVar5,lVar4);
        uVar6 = thunk_FUN_02dd3144(*(undefined8 *)puVar2);
        FUN_04e8b9a0(uVar6,*(undefined8 *)puVar1);
        puVar7 = (undefined8 *)(*(long *)(*unaff_x20 + 0xb8) + 0x20);
        *puVar7 = uVar6;
        LeanTween__value(puVar7,uVar6);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


