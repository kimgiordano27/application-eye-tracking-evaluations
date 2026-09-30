/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$Copy
ENTRY_POINT: 059cdf8c
PROGRAM: m3ar-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__Copy
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long *unaff_x19;
  undefined4 unaff_w21;
  
  FUN_04d4e514();
  lVar1 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x48);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_0406aaec(lVar1);
  }
  if (unaff_x19 != (long *)0x0) {
    if (*(long *)(*unaff_x19 + 0x40) == *(long *)(lVar1 + 0x40)) {
      thunk_FUN_0406e000();
      FUN_059cde74(param_1,unaff_w21);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_04031c0c();
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


