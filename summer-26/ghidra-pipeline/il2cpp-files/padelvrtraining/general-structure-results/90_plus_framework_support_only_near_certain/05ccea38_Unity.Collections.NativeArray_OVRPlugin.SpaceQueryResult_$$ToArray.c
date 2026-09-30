/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$ToArray
ENTRY_POINT: 05ccea38
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 94
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ToArray
               (long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  long unaff_x22;
  
  if ((*(byte *)(unaff_x22 + 0x4ed) & 1) == 0) {
    FUN_03d2d2b0(PTR_DAT_091a0c40);
    *(undefined1 *)(unaff_x22 + 0x4ed) = 1;
  }
  iVar1 = FUN_06093590(param_2,*(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0xe0));
  if (iVar1 == 1) {
    uVar2 = FUN_0609352c(param_2,*(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0xe8)
                        );
    if (*(int *)(*(long *)PTR_DAT_091a0c40 + 0xe0) == 0) {
      thunk_FUN_03db619c(*(long *)PTR_DAT_091a0c40);
    }
    uVar3 = FUN_08a508b0(uVar2,0,0);
    if ((uVar3 & 1) != 0) {
      uVar2 = FUN_0609352c(param_2,*(undefined8 *)
                                    (*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0xe8));
      if (param_1 != 0) {
        FUN_05fbbdc8(param_1,uVar2,1,0,
                     *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x60));
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
  }
  FUN_05cce510(param_1,*(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x88));
  return;
}


