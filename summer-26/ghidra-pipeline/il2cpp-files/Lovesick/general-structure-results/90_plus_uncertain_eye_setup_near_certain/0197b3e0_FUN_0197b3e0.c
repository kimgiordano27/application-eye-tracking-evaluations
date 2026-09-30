/*
FUNCTION_NAME: FUN_0197b3e0
ENTRY_POINT: 0197b3e0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 97
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_0197b3e0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  puVar1 = OVRPlugin_VirtualKeyboardModelAnimationStateHandler_TypeInfo;
  if ((DAT_0377a38d & 1) == 0) {
    thunk_FUN_00d48444(
                      Method_DG_Tweening_TweenSettingsExtensions_SetTarget<TweenerCore<Quaternion,_Vector3,_QuaternionOptions>>__
                      );
    thunk_FUN_00d48444(StringLiteral_9163);
    thunk_FUN_00d48444(OVRPlugin_VirtualKeyboardModelAnimationStateHandler_TypeInfo);
    DAT_0377a38d = 1;
  }
  *(undefined4 *)(param_1 + 0x78) = 0xffffffff;
  *(undefined2 *)(param_1 + 0x88) = 0x101;
  lVar3 = *(long *)puVar1;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar3 = *(long *)puVar1;
  }
  puVar2 = 
  Method_DG_Tweening_TweenSettingsExtensions_SetTarget<TweenerCore<Quaternion,_Vector3,_QuaternionOptions>>__
  ;
  lVar4 = *(long *)(*(long *)(lVar3 + 0xb8) + 8);
  if (lVar4 == 0) {
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar3 = *(long *)puVar1;
    }
    uVar5 = **(undefined8 **)(lVar3 + 0xb8);
    lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    FUN_012d1810(lVar4,uVar5,*(undefined8 *)StringLiteral_9163,0);
    *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8) = lVar4;
  }
  *(long *)(param_1 + 0x90) = lVar4;
  FUN_019a0c98(param_1,0);
  return;
}


