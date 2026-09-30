/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$CopyTo
ENTRY_POINT: 04176ff8
PROGRAM: Untangled-libil2cpp.so
SCORE: 103
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__CopyTo(void)

{
  int iVar1;
  long lVar2;
  long unaff_x19;
  uint unaff_w20;
  undefined8 *unaff_x21;
  undefined8 uVar3;
  undefined8 uVar4;
  
  FUN_05623180();
  iVar1 = *(int *)(unaff_x19 + 0x18);
  if (*(long *)(unaff_x19 + 0x10) != 0) {
    if (iVar1 == *(int *)(*(long *)(unaff_x19 + 0x10) + 0x18)) {
      FUN_04176760();
      iVar1 = *(int *)(unaff_x19 + 0x18);
    }
    if (iVar1 - unaff_w20 != 0 && (int)unaff_w20 <= iVar1) {
      FUN_0562505c(*(undefined8 *)(unaff_x19 + 0x10),unaff_w20,*(undefined8 *)(unaff_x19 + 0x10),
                   unaff_w20 + 1,iVar1 - unaff_w20,0);
    }
    lVar2 = *(long *)(unaff_x19 + 0x10);
    uVar4 = unaff_x21[1];
    uVar3 = *unaff_x21;
    if (lVar2 != 0) {
      if (unaff_w20 < *(uint *)(lVar2 + 0x18)) {
        lVar2 = lVar2 + (long)(int)unaff_w20 * 0x18;
        *(undefined8 *)(lVar2 + 0x30) = unaff_x21[2];
        *(undefined8 *)(lVar2 + 0x28) = uVar4;
        *(undefined8 *)(lVar2 + 0x20) = uVar3;
        thunk_FUN_02f411dc(lVar2 + 0x20,0);
        *(ulong *)(unaff_x19 + 0x18) =
             CONCAT44((int)((ulong)*(undefined8 *)(unaff_x19 + 0x18) >> 0x20) + 1,
                      (int)*(undefined8 *)(unaff_x19 + 0x18) + 1);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_02f080c8();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


