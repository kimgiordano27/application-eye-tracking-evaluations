/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$AsReadOnlySpan
ENTRY_POINT: 059ce5c8
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


uint Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__AsReadOnlySpan(long param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x20;
  long *unaff_x21;
  
  lVar3 = *(long *)(*(long *)(param_1 + 0xc0) + 0x10);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_0406aaec(lVar3);
  }
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_0408f364(lVar3);
  }
  uVar2 = FUN_059cdee0();
  if ((uVar2 & 1) == 0) {
    uVar1 = 0;
  }
  else {
    lVar3 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x48);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_0406aaec(lVar3);
    }
    if (unaff_x21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    if (*(long *)(*unaff_x21 + 0x40) != *(long *)(lVar3 + 0x40)) {
                    /* WARNING: Subroutine does not return */
      FUN_04031c0c();
    }
    thunk_FUN_0406e000();
    uVar1 = FUN_059ce550();
  }
  return uVar1 & 1;
}


