/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.SpaceDiscoveryResult>$$MoveNext
ENTRY_POINT: 03ca60e4
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 86
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_InternalEnumerator<OVRPlugin_SpaceDiscoveryResult>__MoveNext
               (ulong param_1,long param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  int *unaff_x19;
  uint unaff_w20;
  int unaff_w22;
  int *piVar4;
  
  if ((param_1 & 1) == 0) {
    param_2 = FUN_02dcfd18();
  }
  lVar2 = *(long *)(*(long *)(param_2 + 0xc0) + 0x28);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_02dcfd18();
  }
  uVar3 = FUN_02d966a4(lVar2,unaff_w22 + -2);
  iVar1 = unaff_w20 - 1;
  if (iVar1 != 0) {
    FUN_0550b264(*(undefined8 *)(unaff_x19 + 2),0,uVar3,0,iVar1,0);
  }
  piVar4 = unaff_x19 + 2;
  FUN_0550b264(*(undefined8 *)piVar4,unaff_w20,uVar3,iVar1,*unaff_x19 + ~unaff_w20,0);
  *(undefined8 *)piVar4 = uVar3;
  LeanTween__value(piVar4,uVar3);
  *unaff_x19 = *unaff_x19 + -1;
  return;
}


