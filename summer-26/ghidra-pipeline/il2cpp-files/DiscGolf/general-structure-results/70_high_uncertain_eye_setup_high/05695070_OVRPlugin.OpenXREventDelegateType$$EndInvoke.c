/*
FUNCTION_NAME: OVRPlugin.OpenXREventDelegateType$$EndInvoke
ENTRY_POINT: 05695070
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 85
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OpenXREventDelegateType__EndInvoke(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 unaff_x19;
  long *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  
  FUN_03bfff24(param_1,8);
  FUN_03bfff24();
  FUN_03bfff24();
  *(undefined8 *)(*(long *)(*unaff_x20 + 0xb8) + 0x10) = unaff_x19;
  LeanTween__value();
  lVar3 = thunk_FUN_02dd3144(*unaff_x22);
  FUN_03bfece4(lVar3,*unaff_x21);
  puVar2 = UnityEngine_UIElements_ObjectPool<VisualElementFocusChangeTarget>_TypeInfo;
  puVar1 = UnityEngine_UIElements_ObjectPool<PropagationPaths>_TypeInfo;
  if (lVar3 != 0) {
    FUN_03bfff24(lVar3,6,*unaff_x23);
    FUN_03bfff24(lVar3,7,*unaff_x23);
    FUN_03bfff24(lVar3,8,*unaff_x23);
    FUN_03bfff24(lVar3,9,*unaff_x23);
    FUN_03bfff24(lVar3,10,*unaff_x23);
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
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


