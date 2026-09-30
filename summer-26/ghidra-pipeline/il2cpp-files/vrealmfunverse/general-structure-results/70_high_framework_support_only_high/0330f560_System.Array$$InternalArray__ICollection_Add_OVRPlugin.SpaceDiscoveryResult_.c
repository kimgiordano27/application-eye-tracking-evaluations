/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Add<OVRPlugin.SpaceDiscoveryResult>
ENTRY_POINT: 0330f560
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 86
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 System_Array__InternalArray__ICollection_Add<OVRPlugin_SpaceDiscoveryResult>(void)

{
  byte bVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  long unaff_x19;
  undefined8 uVar5;
  long unaff_x21;
  
  lVar2 = FUN_04d8a7b0();
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  uVar3 = FUN_04d957a4(lVar2,0);
  if ((uVar3 & 1) == 0) {
    return 1;
  }
  uVar5 = **(undefined8 **)(unaff_x19 + 0x38);
  if (*(int *)(*(long *)(unaff_x21 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  plVar4 = (long *)FUN_04d8a7b0(uVar5,0);
  if (plVar4 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)PTR_DAT_0631ece0 + 0x130);
    if (*(byte *)(*plVar4 + 0x130) < bVar1) {
      plVar4 = (long *)0x0;
    }
    else if (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) !=
             *(long *)PTR_DAT_0631ece0) {
      plVar4 = (long *)0x0;
    }
  }
  uVar5 = thunk_FUN_02b4feb4(plVar4,0);
  return uVar5;
}


