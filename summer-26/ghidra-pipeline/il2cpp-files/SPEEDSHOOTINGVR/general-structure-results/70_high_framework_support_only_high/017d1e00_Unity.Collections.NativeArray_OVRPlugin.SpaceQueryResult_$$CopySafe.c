/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$CopySafe
ENTRY_POINT: 017d1e00
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__CopySafe
               (long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  long unaff_x19;
  long *unaff_x20;
  
  lVar3 = *(long *)(*(long *)(param_1 + 0xc0) + 0x10);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_0103c244(lVar3);
  }
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_01022c14(lVar3);
  }
  uVar1 = FUN_017d0824();
  if ((uVar1 & 1) != 0) {
    lVar3 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x48);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_0103c244(lVar3);
    }
    if (unaff_x20 != (long *)0x0) {
      if (*(long *)(*unaff_x20 + 0x40) == *(long *)(lVar3 + 0x40)) {
        puVar2 = (undefined8 *)thunk_FUN_01040230();
        FUN_017d1d90(param_2,*puVar2,
                     *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x170));
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_00fdc8d0();
    }
                    /* WARNING: Subroutine does not return */
    FUN_00fdc534();
  }
  return;
}


