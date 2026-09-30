/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$op_Equality
ENTRY_POINT: 044edb00
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


undefined8 Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__op_Equality(void)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  
  uVar1 = FUN_044ecbe8();
  if ((uVar1 & 1) == 0) {
    return 0xffffffff;
  }
  lVar4 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x48);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_031c09d4(lVar4);
  }
  if (unaff_x21 != (long *)0x0) {
    if (*(long *)(*unaff_x21 + 0x40) == *(long *)(lVar4 + 0x40)) {
      puVar2 = (undefined8 *)thunk_FUN_031c3ef0();
      uVar3 = FUN_03d19160(*(undefined8 *)(unaff_x19 + 0x10),*puVar2,puVar2[1],0,
                           *(undefined4 *)(unaff_x19 + 0x18),
                           *(undefined8 *)
                            (*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) +
                                                                    0xc0) + 0xd0) + 0x20) + 0xc0) +
                            0x150));
      return uVar3;
    }
                    /* WARNING: Subroutine does not return */
    FUN_03189058();
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


