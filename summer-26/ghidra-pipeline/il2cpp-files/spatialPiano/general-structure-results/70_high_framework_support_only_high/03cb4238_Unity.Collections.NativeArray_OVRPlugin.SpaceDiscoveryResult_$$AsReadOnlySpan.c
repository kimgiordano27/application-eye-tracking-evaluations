/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$AsReadOnlySpan
ENTRY_POINT: 03cb4238
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__AsReadOnlySpan
               (undefined8 param_1,undefined4 param_2,undefined8 param_3,long param_4)

{
  void *__src;
  long lVar1;
  long *unaff_x19;
  
  FUN_035777d4();
  lVar1 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x48);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_02f41e9c(lVar1);
  }
  if (unaff_x19 != (long *)0x0) {
    if (*(long *)(*unaff_x19 + 0x40) == *(long *)(lVar1 + 0x40)) {
      __src = (void *)thunk_FUN_02f453b8();
      memcpy(&stack0x00000008,__src,0x48);
      FUN_03cb411c(param_1,param_2,&stack0x00000008);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_02f08d48();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


