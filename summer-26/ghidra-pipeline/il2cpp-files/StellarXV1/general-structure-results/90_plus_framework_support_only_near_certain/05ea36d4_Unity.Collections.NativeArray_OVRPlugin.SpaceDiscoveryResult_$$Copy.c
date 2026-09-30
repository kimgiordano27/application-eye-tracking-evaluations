/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$Copy
ENTRY_POINT: 05ea36d4
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 115
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__Copy(void)

{
  int iVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  long unaff_x19;
  long unaff_x20;
  long unaff_x23;
  long unaff_x24;
  long lVar6;
  
  iVar2 = FUN_064c43e8();
  if (iVar2 < unaff_x24) {
    lVar3 = *(long *)(unaff_x20 + 0x20);
    if (lVar3 == 0) goto LAB_05ea378c;
    lVar6 = *(long *)(lVar3 + 0x28);
    iVar2 = FUN_064c43e8(lVar3,*(undefined8 *)(*(long *)(*(long *)(unaff_x23 + 0x20) + 0xc0) + 0x10)
                        );
    *(long *)(unaff_x20 + 0x10) = lVar6 - iVar2;
  }
  uVar4 = FUN_05ea357c();
  if ((uVar4 & 1) == 0) {
    return 0xffffffff;
  }
  if (*(long *)(unaff_x20 + 0x20) != 0) {
    uVar5 = FUN_064c4c1c();
    iVar2 = *(int *)(unaff_x20 + 0x18) + (int)uVar5;
    *(int *)(unaff_x20 + 0x18) = iVar2;
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + (long)(int)uVar5;
    if (unaff_x19 != 0) {
      iVar1 = iVar2 - *(int *)(unaff_x19 + 0x18);
      if (iVar1 == 0 || iVar2 < *(int *)(unaff_x19 + 0x18)) {
        return uVar5;
      }
      *(int *)(unaff_x20 + 0x18) = iVar1;
      return uVar5;
    }
  }
LAB_05ea378c:
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


