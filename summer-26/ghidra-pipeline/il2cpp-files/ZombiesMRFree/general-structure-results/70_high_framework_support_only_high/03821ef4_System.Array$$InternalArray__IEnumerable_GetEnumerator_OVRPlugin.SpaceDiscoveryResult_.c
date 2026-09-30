/*
FUNCTION_NAME: System.Array$$InternalArray__IEnumerable_GetEnumerator<OVRPlugin.SpaceDiscoveryResult>
ENTRY_POINT: 03821ef4
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__IEnumerable_GetEnumerator<OVRPlugin_SpaceDiscoveryResult>
               (long param_1)

{
  long lVar1;
  long unaff_x20;
  long *unaff_x21;
  
  if ((*(byte *)(param_1 + 0x130) <= *(byte *)(*unaff_x21 + 0x130)) &&
     (*(long *)(*(long *)(*unaff_x21 + 200) + (ulong)*(byte *)(param_1 + 0x130) * 8 + -8) == param_1
     )) {
    memcpy(unaff_x21 + 6,&stack0x00000000,0x60);
    lVar1 = *(long *)(*(long *)(unaff_x20 + 0x38) + 8);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_02feb2c4(lVar1);
    }
    if ((*(byte *)(lVar1 + 0x130) <= *(byte *)(*unaff_x21 + 0x130)) &&
       (*(long *)(*(long *)(*unaff_x21 + 200) + (ulong)*(byte *)(lVar1 + 0x130) * 8 + -8) == lVar1))
    {
      thunk_FUN_03048534(unaff_x21 + 7,0);
      FUN_05da8a30();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe9884();
}


