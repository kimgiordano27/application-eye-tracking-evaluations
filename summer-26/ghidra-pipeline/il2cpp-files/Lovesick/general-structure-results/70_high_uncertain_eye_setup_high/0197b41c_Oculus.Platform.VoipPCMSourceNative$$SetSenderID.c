/*
FUNCTION_NAME: Oculus.Platform.VoipPCMSourceNative$$SetSenderID
ENTRY_POINT: 0197b41c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Oculus_Platform_VoipPCMSourceNative__SetSenderID(void)

{
  undefined *puVar1;
  long lVar2;
  long unaff_x19;
  long unaff_x20;
  long lVar3;
  undefined8 uVar4;
  long *unaff_x22;
  
  thunk_FUN_00d48444(OVRPlugin_VirtualKeyboardModelAnimationStateHandler_TypeInfo);
  *(undefined1 *)(unaff_x20 + 0x38d) = 1;
  *(undefined4 *)(unaff_x19 + 0x78) = 0xffffffff;
  *(undefined2 *)(unaff_x19 + 0x88) = 0x101;
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar2 = *unaff_x22;
  }
  puVar1 = 
  Method_DG_Tweening_TweenSettingsExtensions_SetTarget<TweenerCore<Quaternion,_Vector3,_QuaternionOptions>>__
  ;
  lVar3 = *(long *)(*(long *)(lVar2 + 0xb8) + 8);
  if (lVar3 == 0) {
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar2 = *unaff_x22;
    }
    uVar4 = **(undefined8 **)(lVar2 + 0xb8);
    lVar3 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    FUN_012d1810(lVar3,uVar4,*(undefined8 *)StringLiteral_9163,0);
    *(long *)(*(long *)(*unaff_x22 + 0xb8) + 8) = lVar3;
  }
  *(long *)(unaff_x19 + 0x90) = lVar3;
  FUN_019a0c98();
  return;
}


