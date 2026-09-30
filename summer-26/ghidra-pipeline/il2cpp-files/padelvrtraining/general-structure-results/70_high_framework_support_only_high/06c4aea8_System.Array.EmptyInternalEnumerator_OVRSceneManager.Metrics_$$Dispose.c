/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRSceneManager.Metrics>$$Dispose
ENTRY_POINT: 06c4aea8
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_1
*/


uint System_Array_EmptyInternalEnumerator<OVRSceneManager_Metrics>__Dispose
               (long param_1,undefined8 param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x20;
  long *unaff_x21;
  
  uVar2 = System_Array_EmptyInternalEnumerator<OVRPlugin_Vector4s>___ctor
                    (param_2,*(undefined8 *)(param_1 + 0x1f8));
  if ((uVar2 & 1) == 0) {
    uVar1 = 0;
  }
  else {
    lVar3 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x70);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03d8f26c(lVar3);
    }
    if (unaff_x21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    if (*(long *)(*unaff_x21 + 0x40) != *(long *)(lVar3 + 0x40)) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d8e4();
    }
    thunk_FUN_03d2f094();
    uVar1 = FUN_06c48ec4();
    uVar1 = ~uVar1 >> 0x1f;
  }
  return uVar1;
}


