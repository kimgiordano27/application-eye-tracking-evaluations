/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$ToArray
ENTRY_POINT: 031ff958
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 100
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_10;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ToArray(void)

{
  int iVar1;
  long lVar2;
  long unaff_x19;
  uint unaff_w20;
  undefined8 *unaff_x21;
  undefined8 uVar3;
  undefined8 uVar4;
  
  Unity_Collections_NativeArray<LightUtility_LightMeshVertex>__CopySafe();
  iVar1 = *(int *)(unaff_x19 + 0x18) - unaff_w20;
  if (iVar1 != 0 && (int)unaff_w20 <= *(int *)(unaff_x19 + 0x18)) {
    FUN_0358d498(*(undefined8 *)(unaff_x19 + 0x10),unaff_w20,*(undefined8 *)(unaff_x19 + 0x10),
                 unaff_w20 + 1,iVar1,0);
  }
  lVar2 = *(long *)(unaff_x19 + 0x10);
  uVar4 = unaff_x21[1];
  uVar3 = *unaff_x21;
  if (lVar2 != 0) {
    if (unaff_w20 < *(uint *)(lVar2 + 0x18)) {
      lVar2 = lVar2 + (long)(int)unaff_w20 * 0x14;
      *(undefined4 *)(lVar2 + 0x30) = *(undefined4 *)(unaff_x21 + 2);
      *(undefined8 *)(lVar2 + 0x28) = uVar4;
      *(undefined8 *)(lVar2 + 0x20) = uVar3;
      *(ulong *)(unaff_x19 + 0x18) =
           CONCAT44((int)((ulong)*(undefined8 *)(unaff_x19 + 0x18) >> 0x20) + 1,
                    (int)*(undefined8 *)(unaff_x19 + 0x18) + 1);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01f08a44();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


