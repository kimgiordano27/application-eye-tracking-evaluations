/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.SpaceDiscoveryResult>$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 06652c3c
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


void System_Array_InternalEnumerator<OVRPlugin_SpaceDiscoveryResult>__System_Collections_IEnumerator_get_Current
               (ushort *param_1,long param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  int *unaff_x19;
  int *unaff_x20;
  undefined8 *unaff_x21;
  undefined4 unaff_w22;
  
  if ((*param_1 & 1) == 0) {
    param_2 = FUN_04980b34();
  }
  lVar2 = *(long *)(*(long *)(param_2 + 0xc0) + 0x28);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_04980b34();
  }
  uVar3 = FUN_04947fd0(lVar2,unaff_w22);
  *unaff_x21 = uVar3;
  thunk_FUN_049ee3d8();
  iVar1 = *unaff_x19;
  *unaff_x20 = iVar1;
  if (0 < iVar1) {
    *(undefined8 *)(unaff_x20 + 2) = *(undefined8 *)(unaff_x19 + 2);
    if (iVar1 + -1 != 0) {
      FUN_08da0170(*(undefined8 *)(unaff_x19 + 4),*unaff_x21,iVar1 + -1,0);
      return;
    }
  }
  return;
}


