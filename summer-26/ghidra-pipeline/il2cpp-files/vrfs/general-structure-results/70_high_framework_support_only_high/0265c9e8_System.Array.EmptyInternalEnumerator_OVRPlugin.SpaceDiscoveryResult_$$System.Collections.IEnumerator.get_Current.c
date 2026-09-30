/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.SpaceDiscoveryResult>$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 0265c9e8
PROGRAM: vrfs-libil2cpp.so
SCORE: 86
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


long System_Array_EmptyInternalEnumerator<OVRPlugin_SpaceDiscoveryResult>__System_Collections_IEnumerator_get_Current
               (void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long *unaff_x20;
  long unaff_x21;
  
  thunk_FUN_0159f088(PTR_DAT_06e29ab0);
  thunk_FUN_0159f088(PTR_DAT_06dbf2b0);
  *(undefined1 *)(unaff_x21 + 0x3d4) = 1;
  puVar1 = PTR_DAT_06e29ab0;
  if (*(int *)(*unaff_x20 + 0xe0) == 0) {
    thunk_FUN_016466fc();
  }
  FUN_0264fcc0();
  uVar2 = FUN_0264e770();
  lVar3 = thunk_FUN_015d056c(*(undefined8 *)puVar1);
  if (lVar3 != 0) {
    FUN_0265ca60(lVar3,uVar2);
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


