/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly<OVRPlugin.SpaceDiscoveryResult>$$GetEnumerator
ENTRY_POINT: 03f3a780
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


void Unity_Collections_NativeArray_ReadOnly<OVRPlugin_SpaceDiscoveryResult>__GetEnumerator
               (ushort *param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x19;
  
  if ((*param_1 & 1) == 0) {
    param_2 = FUN_02f41e9c();
  }
  lVar1 = *(long *)(*(long *)(param_2 + 0xc0) + 0x28);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_02f41e9c();
  }
  if (**(long **)(lVar1 + 0xb8) != 0) {
    lVar1 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_02f41e9c();
    }
    lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x28);
    if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_02f41e9c();
    }
    if (**(long **)(lVar1 + 0xb8) != 0) {
      lVar1 = *(long *)(**(long **)(lVar1 + 0xb8) + 0x18);
      uVar2 = thunk_FUN_02f45270(*(undefined8 *)PTR_DAT_067c8fb0);
      if ((*(ushort *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
        FUN_02f41e9c(*(long *)(unaff_x19 + 0x20));
      }
      FUN_05054f60(uVar2);
      if (lVar1 != 0) {
        FUN_0470de18(lVar1,uVar2,*(undefined8 *)PTR_DAT_067cc510);
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  return;
}


