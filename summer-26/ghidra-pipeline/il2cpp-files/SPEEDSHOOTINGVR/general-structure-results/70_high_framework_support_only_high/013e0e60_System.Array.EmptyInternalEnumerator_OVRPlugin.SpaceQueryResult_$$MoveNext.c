/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.SpaceQueryResult>$$MoveNext
ENTRY_POINT: 013e0e60
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_3
*/


void System_Array_EmptyInternalEnumerator<OVRPlugin_SpaceQueryResult>__MoveNext
               (ulong param_1,long param_2,long param_3)

{
  undefined4 uVar1;
  long *unaff_x21;
  long unaff_x22;
  
  if ((param_1 & 1) == 0) {
    FUN_00fdc2e4(PTR_DAT_0234cc50);
    *(undefined1 *)(unaff_x22 + 0x434) = 1;
  }
  uVar1 = *(undefined4 *)(param_2 + 0x20);
  if (*(int *)(*unaff_x21 + 0xe0) == 0) {
    thunk_FUN_01022c14();
  }
  uVar1 = FUN_01d2c620(uVar1,0);
  System_Array_EmptyInternalEnumerator<OVRPlugin_SpaceQueryResult>___ctor
            (param_2,uVar1,0,*(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x1a0));
  return;
}


