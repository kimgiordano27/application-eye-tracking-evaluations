/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$CopyTo
ENTRY_POINT: 031ff914
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 103
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__CopyTo
               (long param_1,uint param_2,undefined8 *param_3,long param_4)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x18);
  if (uVar1 < param_2) {
    FUN_0358b620(0xd,0x1b,0);
    uVar1 = *(uint *)(param_1 + 0x18);
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    if (uVar1 == *(uint *)(*(long *)(param_1 + 0x10) + 0x18)) {
      Unity_Collections_NativeArray<LightUtility_LightMeshVertex>__CopySafe
                (param_1,uVar1 + 1,
                 *(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x78));
      uVar1 = *(uint *)(param_1 + 0x18);
    }
    if (uVar1 - param_2 != 0 && (int)param_2 <= (int)uVar1) {
      FUN_0358d498(*(undefined8 *)(param_1 + 0x10),param_2,*(undefined8 *)(param_1 + 0x10),
                   param_2 + 1,uVar1 - param_2,0);
    }
    lVar2 = *(long *)(param_1 + 0x10);
    uVar4 = param_3[1];
    uVar3 = *param_3;
    if (lVar2 != 0) {
      if (param_2 < *(uint *)(lVar2 + 0x18)) {
        lVar2 = lVar2 + (long)(int)param_2 * 0x14;
        *(undefined4 *)(lVar2 + 0x30) = *(undefined4 *)(param_3 + 2);
        *(undefined8 *)(lVar2 + 0x28) = uVar4;
        *(undefined8 *)(lVar2 + 0x20) = uVar3;
        *(ulong *)(param_1 + 0x18) =
             CONCAT44((int)((ulong)*(undefined8 *)(param_1 + 0x18) >> 0x20) + 1,
                      (int)*(undefined8 *)(param_1 + 0x18) + 1);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


