/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.SpaceDiscoveryResult>$$System.Collections.IEnumerator.Reset
ENTRY_POINT: 06652c30
PROGRAM: Hyper-libil2cpp.so
SCORE: 89
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_InternalEnumerator<OVRPlugin_SpaceDiscoveryResult>__System_Collections_IEnumerator_Reset
               (void)

{
  char in_NG;
  bool in_ZR;
  char in_OV;
  long lVar1;
  undefined8 uVar2;
  int in_w8;
  int *unaff_x19;
  int *unaff_x20;
  undefined8 *unaff_x21;
  undefined4 unaff_w22;
  long unaff_x23;
  
  if (!in_ZR && in_NG == in_OV) {
    lVar1 = *(long *)(unaff_x23 + 0x20);
    if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_04980b34();
    }
    lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x28);
    if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_04980b34();
    }
    uVar2 = FUN_04947fd0(lVar1,unaff_w22);
    *unaff_x21 = uVar2;
    thunk_FUN_049ee3d8();
    in_w8 = *unaff_x19;
  }
  *unaff_x20 = in_w8;
  if (0 < in_w8) {
    *(undefined8 *)(unaff_x20 + 2) = *(undefined8 *)(unaff_x19 + 2);
    if (in_w8 + -1 != 0) {
      FUN_08da0170(*(undefined8 *)(unaff_x19 + 4),*unaff_x21,in_w8 + -1,0);
      return;
    }
  }
  return;
}


