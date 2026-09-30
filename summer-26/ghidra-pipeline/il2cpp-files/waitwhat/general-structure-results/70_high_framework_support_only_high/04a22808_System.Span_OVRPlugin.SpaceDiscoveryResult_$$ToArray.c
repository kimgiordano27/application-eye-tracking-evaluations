/*
FUNCTION_NAME: System.Span<OVRPlugin.SpaceDiscoveryResult>$$ToArray
ENTRY_POINT: 04a22808
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


void System_Span<OVRPlugin_SpaceDiscoveryResult>__ToArray(ushort *param_1,long param_2)

{
  long *plVar1;
  undefined8 uVar2;
  long unaff_x19;
  undefined8 uVar3;
  long unaff_x22;
  undefined4 uStack000000000000000c;
  
  if ((*param_1 & 1) == 0) {
    param_2 = FUN_031c09d4();
  }
  uVar3 = *(undefined8 *)(*(long *)(param_2 + 0xc0) + 0x38);
  if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_031e5338(*(long *)(unaff_x22 + 0xe0));
  }
  plVar1 = (long *)FUN_0593e698(uVar3,0);
  if (plVar1 != (long *)0x0) {
    uVar3 = (**(code **)(*plVar1 + 0x1b8))(plVar1,*(undefined8 *)(*plVar1 + 0x1c0));
    uStack000000000000000c = *(undefined4 *)(unaff_x19 + 8);
    uVar2 = thunk_FUN_031c39fc(*(undefined8 *)(unaff_x22 + 0x48),&stack0x0000000c);
                    /* try { // try from 04a2287c to 04b228c3 has its CatchHandler @ 04a22bd0 */
    FUN_057c02e8(*(undefined8 *)PTR_DAT_070f48e0,uVar3,uVar2,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


