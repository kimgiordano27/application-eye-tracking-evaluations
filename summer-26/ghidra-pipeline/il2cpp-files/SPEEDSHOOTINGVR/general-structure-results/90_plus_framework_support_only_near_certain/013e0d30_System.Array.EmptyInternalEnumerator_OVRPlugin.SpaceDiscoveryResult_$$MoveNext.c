/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.SpaceDiscoveryResult>$$MoveNext
ENTRY_POINT: 013e0d30
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 92
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_EmptyInternalEnumerator<OVRPlugin_SpaceDiscoveryResult>__MoveNext(void)

{
  long lVar1;
  long unaff_x19;
  undefined4 unaff_w21;
  ulong uVar2;
  long *unaff_x26;
  
  lVar1 = thunk_FUN_0103ffe0();
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fdc8d0();
  }
  if (0 < *(int *)(lVar1 + 0x18)) {
    uVar2 = 0;
    do {
      if (*(uint *)(lVar1 + 0x18) <= uVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_00fdc53c();
      }
      FUN_013e05a8();
      uVar2 = uVar2 + 1;
    } while ((long)uVar2 < (long)*(int *)(lVar1 + 0x18));
  }
  *(undefined4 *)(unaff_x19 + 0x2c) = unaff_w21;
  if (*(int *)(*unaff_x26 + 0xe0) == 0) {
    thunk_FUN_01022c14();
  }
  lVar1 = FUN_01d2c6a4(0);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fdc534();
  }
  FUN_01367508();
  return;
}


