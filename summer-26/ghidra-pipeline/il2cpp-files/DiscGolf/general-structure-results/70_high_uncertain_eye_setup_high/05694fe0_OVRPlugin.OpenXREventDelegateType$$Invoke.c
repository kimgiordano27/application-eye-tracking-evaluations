/*
FUNCTION_NAME: OVRPlugin.OpenXREventDelegateType$$Invoke
ENTRY_POINT: 05694fe0
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 88
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OpenXREventDelegateType__Invoke(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 unaff_x19;
  long *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  long unaff_x23;
  undefined8 *puVar6;
  
  puVar6 = *(undefined8 **)(unaff_x23 + 0x1c0);
  FUN_03bfff24(param_1,param_2,*puVar6);
  FUN_03bfff24();
  FUN_03bfff24();
  FUN_03bfff24();
  *(undefined8 *)(*(long *)(*unaff_x20 + 0xb8) + 8) = unaff_x19;
  LeanTween__value();
  lVar3 = thunk_FUN_02dd3144(*unaff_x22);
  FUN_03bfece4(lVar3,*unaff_x21);
  if (lVar3 != 0) {
    FUN_03bfff24(lVar3,6,*puVar6);
    FUN_03bfff24(lVar3,7,*puVar6);
    FUN_03bfff24(lVar3,8,*puVar6);
    FUN_03bfff24(lVar3,9,*puVar6);
    FUN_03bfff24(lVar3,10,*puVar6);
    plVar4 = (long *)(*(long *)(*unaff_x20 + 0xb8) + 0x10);
    *plVar4 = lVar3;
    LeanTween__value(plVar4,lVar3);
    lVar3 = thunk_FUN_02dd3144(*unaff_x22);
    FUN_03bfece4(lVar3,*unaff_x21);
    puVar2 = UnityEngine_UIElements_ObjectPool<VisualElementFocusChangeTarget>_TypeInfo;
    puVar1 = UnityEngine_UIElements_ObjectPool<PropagationPaths>_TypeInfo;
    if (lVar3 != 0) {
      FUN_03bfff24(lVar3,6,*puVar6);
      FUN_03bfff24(lVar3,7,*puVar6);
      FUN_03bfff24(lVar3,8,*puVar6);
      FUN_03bfff24(lVar3,9,*puVar6);
      FUN_03bfff24(lVar3,10,*puVar6);
      plVar4 = (long *)(*(long *)(*unaff_x20 + 0xb8) + 0x18);
      *plVar4 = lVar3;
      LeanTween__value(plVar4,lVar3);
      uVar5 = thunk_FUN_02dd3144(*(undefined8 *)puVar2);
      FUN_04e8b9a0(uVar5,*(undefined8 *)puVar1);
      puVar6 = (undefined8 *)(*(long *)(*unaff_x20 + 0xb8) + 0x20);
      *puVar6 = uVar5;
      LeanTween__value(puVar6,uVar5);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


