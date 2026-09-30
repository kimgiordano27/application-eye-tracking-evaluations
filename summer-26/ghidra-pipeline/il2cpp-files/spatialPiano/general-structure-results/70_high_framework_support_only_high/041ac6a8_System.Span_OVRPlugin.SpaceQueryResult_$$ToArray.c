/*
FUNCTION_NAME: System.Span<OVRPlugin.SpaceQueryResult>$$ToArray
ENTRY_POINT: 041ac6a8
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Span<OVRPlugin_SpaceQueryResult>__ToArray(void)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x19;
  long unaff_x22;
  undefined4 uStack000000000000000c;
  
  thunk_FUN_02f6670c();
  plVar1 = (long *)FUN_050e4454();
  if (plVar1 != (long *)0x0) {
    uVar2 = (**(code **)(*plVar1 + 0x1b8))(plVar1,*(undefined8 *)(*plVar1 + 0x1c0));
    uStack000000000000000c = *(undefined4 *)(unaff_x19 + 8);
    uVar3 = thunk_FUN_02f44ec4(*(undefined8 *)(unaff_x22 + 0x48),&stack0x0000000c);
    FUN_04f70018(*(undefined8 *)PTR_DAT_067cc958,uVar2,uVar3,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


