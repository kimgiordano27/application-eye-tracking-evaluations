/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$get_Item
ENTRY_POINT: 03998f08
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 103
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__get_Item
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               long param_5,uint param_6,long param_7)

{
  long lVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(param_5 + 0x18);
  if (uVar2 < param_6) {
    FUN_04d9c54c(0xd,0x1b,0);
    uVar2 = *(uint *)(param_5 + 0x18);
  }
  lVar1 = *(long *)(param_5 + 0x10);
  if (lVar1 != 0) {
    if (uVar2 == *(uint *)(lVar1 + 0x18)) {
      FUN_0399871c(param_5,uVar2 + 1,
                   *(undefined8 *)(*(long *)(*(long *)(param_7 + 0x20) + 0xc0) + 0x78));
      uVar2 = *(uint *)(param_5 + 0x18);
      lVar1 = *(long *)(param_5 + 0x10);
    }
    if (uVar2 - param_6 != 0 && (int)param_6 <= (int)uVar2) {
      FUN_04d9e334(lVar1,param_6,lVar1,param_6 + 1,uVar2 - param_6,0);
      lVar1 = *(long *)(param_5 + 0x10);
    }
    if (lVar1 != 0) {
      if (param_6 < *(uint *)(lVar1 + 0x18)) {
        lVar1 = lVar1 + (long)(int)param_6 * 0x10;
        *(undefined4 *)(lVar1 + 0x20) = param_1;
        *(undefined4 *)(lVar1 + 0x24) = param_2;
        *(undefined4 *)(lVar1 + 0x28) = param_3;
        *(undefined4 *)(lVar1 + 0x2c) = param_4;
        *(ulong *)(param_5 + 0x18) =
             CONCAT44((int)((ulong)*(undefined8 *)(param_5 + 0x18) >> 0x20) + 1,
                      (int)*(undefined8 *)(param_5 + 0x18) + 1);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_02b3cacc();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


