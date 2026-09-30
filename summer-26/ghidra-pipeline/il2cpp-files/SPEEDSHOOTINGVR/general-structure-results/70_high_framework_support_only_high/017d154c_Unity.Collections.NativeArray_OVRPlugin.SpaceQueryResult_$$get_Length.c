/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$get_Length
ENTRY_POINT: 017d154c
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


undefined8 Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__get_Length(long param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  
  if ((*(byte *)(param_1 + 0x135) & 1) == 0) {
    param_1 = FUN_0103c244(param_1);
  }
  if (*(int *)(param_1 + 0xe0) == 0) {
    thunk_FUN_01022c14(param_1);
  }
  uVar1 = FUN_017d0824();
  if ((uVar1 & 1) != 0) {
    lVar4 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x48);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_0103c244(lVar4);
    }
    if (unaff_x21 != (long *)0x0) {
      if (*(long *)(*unaff_x21 + 0x40) == *(long *)(lVar4 + 0x40)) {
        puVar2 = (undefined8 *)thunk_FUN_01040230();
        uVar3 = FUN_01209dcc(*(undefined8 *)(unaff_x19 + 0x10),*puVar2,0,
                             *(undefined4 *)(unaff_x19 + 0x18),
                             *(undefined8 *)
                              (*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) +
                                                                      0xc0) + 0xd0) + 0x20) + 0xc0)
                              + 0x148));
        return uVar3;
      }
                    /* WARNING: Subroutine does not return */
      FUN_00fdc8d0();
    }
                    /* WARNING: Subroutine does not return */
    FUN_00fdc534();
  }
  return 0xffffffff;
}


