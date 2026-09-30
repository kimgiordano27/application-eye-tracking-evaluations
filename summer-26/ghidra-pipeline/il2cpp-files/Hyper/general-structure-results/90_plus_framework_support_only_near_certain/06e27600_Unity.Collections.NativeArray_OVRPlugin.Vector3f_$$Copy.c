/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector3f>$$Copy
ENTRY_POINT: 06e27600
PROGRAM: Hyper-libil2cpp.so
SCORE: 92
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector3f>__Copy(void)

{
  long lVar1;
  long *plVar2;
  long unaff_x20;
  long unaff_x21;
  int unaff_w22;
  
  FUN_08d9d3c4();
  plVar2 = (long *)(unaff_x20 + 0x10);
  if (*plVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  if (*(int *)(*plVar2 + 0x18) == unaff_w22) {
    return;
  }
  lVar1 = *(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0);
  if (unaff_w22 < 1) {
    lVar1 = *(long *)(lVar1 + 0x10);
    if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_04980b34();
    }
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    lVar1 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x10);
    if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_04980b34();
    }
    lVar1 = **(long **)(lVar1 + 0xb8);
  }
  else {
    lVar1 = *(long *)(lVar1 + 0x18);
    if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_04980b34();
    }
    lVar1 = FUN_04947fd0(lVar1,unaff_w22);
    if (0 < *(int *)(unaff_x20 + 0x18)) {
      FUN_08d9f1fc(*plVar2,0,lVar1,0,*(int *)(unaff_x20 + 0x18),0);
    }
  }
  *plVar2 = lVar1;
  thunk_FUN_049ee3d8(plVar2,lVar1);
  return;
}


