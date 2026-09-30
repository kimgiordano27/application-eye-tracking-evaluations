/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$Copy
ENTRY_POINT: 036d5a44
PROGRAM: vrfs-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__Copy
               (ulong param_1,undefined8 param_2)

{
  byte bVar1;
  ulong uVar2;
  long *unaff_x19;
  long unaff_x21;
  long *plVar3;
  long unaff_x22;
  
  if ((param_1 & 1) == 0) {
    thunk_FUN_0159f088(PTR_DAT_06e33c00);
    thunk_FUN_0159f088(PTR_DAT_06e2a298);
    *(undefined1 *)(unaff_x21 + 0x91c) = 1;
  }
  if (unaff_x22 != 0) {
    plVar3 = *(long **)(unaff_x22 + 0x68);
    if (*(int *)(unaff_x22 + 0x5c) == 4) {
      if (plVar3 == (long *)0x0) goto LAB_036d5b38;
      uVar2 = (**(code **)(*plVar3 + 0x1d8))(plVar3,*(undefined8 *)(*plVar3 + 0x1e0));
      if ((uVar2 & 1) != 0) {
LAB_036d5aac:
        FUN_01fbafc0(param_2,*(undefined8 *)PTR_DAT_06e2a298);
        return;
      }
      uVar2 = (**(code **)(*plVar3 + 0x1e8))(plVar3,*(undefined8 *)(*plVar3 + 0x1f0));
      if ((uVar2 & 1) != 0) goto LAB_036d5aac;
      plVar3 = *(long **)(unaff_x22 + 0x68);
    }
    if (plVar3 != (long *)0x0) {
      bVar1 = *(byte *)(*(long *)PTR_DAT_06e33c00 + 300);
      if (((bVar1 <= *(byte *)(*plVar3 + 300)) &&
          (*(long *)(*(long *)(*plVar3 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_06e33c00)
          ) && (unaff_x19 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x036d5b34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*unaff_x19 + 0x318))();
        return;
      }
    }
  }
LAB_036d5b38:
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


