/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.SpaceQueryResult>$$Dispose
ENTRY_POINT: 0265cb50
PROGRAM: vrfs-libil2cpp.so
SCORE: 94
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


long System_Array_EmptyInternalEnumerator<OVRPlugin_SpaceQueryResult>__Dispose(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long *unaff_x20;
  long unaff_x21;
  
  *(undefined1 *)(unaff_x21 + 0x3d7) = 1;
  puVar1 = PTR_DAT_06e04028;
  if (*(int *)(*unaff_x20 + 0xe0) == 0) {
    thunk_FUN_016466fc();
  }
  FUN_0264fcc0();
  uVar2 = FUN_0264e7ec();
  lVar3 = thunk_FUN_015d056c(*(undefined8 *)puVar1);
  if (lVar3 != 0) {
    FUN_0265cbb0(lVar3,uVar2);
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


