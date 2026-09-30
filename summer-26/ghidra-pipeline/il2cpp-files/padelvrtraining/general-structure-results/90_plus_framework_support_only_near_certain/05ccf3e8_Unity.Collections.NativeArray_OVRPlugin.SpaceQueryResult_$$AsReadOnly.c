/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$AsReadOnly
ENTRY_POINT: 05ccf3e8
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 115
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__AsReadOnly(void)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x19;
  long unaff_x20;
  undefined8 unaff_x25;
  
  *(undefined8 *)(unaff_x19 + 0x158) = unaff_x25;
  thunk_FUN_03d1023c((long *)(unaff_x19 + 0x158));
  lVar1 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x50);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_03d8f26c();
  }
  plVar2 = (long *)FUN_03d2d394(lVar1,3);
  if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d2d548();
  }
  lVar1 = *(long *)(unaff_x19 + 0x160);
  if ((lVar1 != 0) &&
     (lVar3 = thunk_FUN_03d2ee44(lVar1,*(undefined8 *)(*plVar2 + 0x40)), lVar3 == 0)) {
LAB_05ccf4f4:
    uVar4 = thunk_FUN_03d3c630();
                    /* WARNING: Subroutine does not return */
    FUN_03d2d414(uVar4,0);
  }
  if ((int)plVar2[3] != 0) {
    plVar2[4] = lVar1;
    thunk_FUN_03d1023c(plVar2 + 4,lVar1);
    lVar1 = *(long *)(unaff_x19 + 0x158);
    if ((lVar1 != 0) &&
       (lVar3 = thunk_FUN_03d2ee44(lVar1,*(undefined8 *)(*plVar2 + 0x40)), lVar3 == 0))
    goto LAB_05ccf4f4;
    if (1 < *(uint *)(plVar2 + 3)) {
      plVar2[5] = lVar1;
      thunk_FUN_03d1023c(plVar2 + 5,lVar1);
      lVar1 = *(long *)(unaff_x19 + 0x150);
      if ((lVar1 != 0) &&
         (lVar3 = thunk_FUN_03d2ee44(lVar1,*(undefined8 *)(*plVar2 + 0x40)), lVar3 == 0))
      goto LAB_05ccf4f4;
      if (2 < *(uint *)(plVar2 + 3)) {
        plVar2[6] = lVar1;
        thunk_FUN_03d1023c(plVar2 + 6,lVar1);
        FUN_05cd023c();
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03d2d550();
}


