/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$GetHashCode
ENTRY_POINT: 044edae8
PROGRAM: waitwhat-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__GetHashCode(void)

{
  long lVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  
  lVar1 = FUN_031c09d4();
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_031e5338(lVar1);
  }
  uVar2 = FUN_044ecbe8();
  if ((uVar2 & 1) == 0) {
    return 0xffffffff;
  }
  lVar1 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x48);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_031c09d4(lVar1);
  }
  if (unaff_x21 != (long *)0x0) {
    if (*(long *)(*unaff_x21 + 0x40) == *(long *)(lVar1 + 0x40)) {
      puVar3 = (undefined8 *)thunk_FUN_031c3ef0();
      uVar4 = FUN_03d19160(*(undefined8 *)(unaff_x19 + 0x10),*puVar3,puVar3[1],0,
                           *(undefined4 *)(unaff_x19 + 0x18),
                           *(undefined8 *)
                            (*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) +
                                                                    0xc0) + 0xd0) + 0x20) + 0xc0) +
                            0x150));
      return uVar4;
    }
                    /* WARNING: Subroutine does not return */
    FUN_03189058();
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


