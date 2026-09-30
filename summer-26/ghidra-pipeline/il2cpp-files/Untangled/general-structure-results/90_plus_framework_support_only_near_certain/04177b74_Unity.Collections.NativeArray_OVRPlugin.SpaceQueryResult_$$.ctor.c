/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$.ctor
ENTRY_POINT: 04177b74
PROGRAM: Untangled-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>___ctor(void)

{
  char in_NG;
  bool in_ZR;
  char in_OV;
  undefined8 in_x4;
  uint in_w8;
  long lVar1;
  long unaff_x19;
  int unaff_w20;
  
  if (!in_ZR && in_NG == in_OV) {
    FUN_0562505c(*(undefined8 *)(unaff_x19 + 0x10),unaff_w20 + 1,*(undefined8 *)(unaff_x19 + 0x10),
                 unaff_w20,in_x4,0);
    in_w8 = *(uint *)(unaff_x19 + 0x18);
  }
  lVar1 = *(long *)(unaff_x19 + 0x10);
  if (lVar1 != 0) {
    if (in_w8 < *(uint *)(lVar1 + 0x18)) {
      lVar1 = lVar1 + (long)(int)in_w8 * 0x18;
      *(undefined8 *)(lVar1 + 0x30) = 0;
      *(undefined8 *)(lVar1 + 0x28) = 0;
      *(undefined8 *)(lVar1 + 0x20) = 0;
      thunk_FUN_02f411dc(lVar1 + 0x20,0);
      *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_02f080c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


