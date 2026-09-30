/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly<OVRPlugin.SpaceQueryResult>$$AsReadOnlySpan
ENTRY_POINT: 03f3ab90
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 86
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray_ReadOnly<OVRPlugin_SpaceQueryResult>__AsReadOnlySpan(void)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x19;
  long unaff_x20;
  
  lVar2 = FUN_05edcce4();
  if (lVar2 != 0) {
    uVar3 = FUN_0347b6f4(*(undefined8 *)(unaff_x19 + 0x38),*(undefined8 *)(unaff_x19 + 0x40),
                         *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x40));
    uVar4 = FUN_0347b628(*(undefined8 *)(unaff_x19 + 0x48),*(undefined8 *)(unaff_x19 + 0x50),
                         *(undefined8 *)PTR_DAT_067cc4a0);
    uVar1 = *(undefined4 *)(unaff_x19 + 0x58);
    if (*(int *)(*(long *)PTR_DAT_067cc4a8 + 0xe4) == 0) {
      thunk_FUN_02f6670c(*(long *)PTR_DAT_067cc4a8);
    }
    FUN_0604d5f0(uVar3,uVar4,uVar1,0x70,0);
  }
  *(undefined4 *)(unaff_x19 + 0x58) = 0;
  return;
}


