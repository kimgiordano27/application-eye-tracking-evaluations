/*
FUNCTION_NAME: System.ReadOnlySpan<OVRPlugin.SpaceDiscoveryResult>$$ToArray
ENTRY_POINT: 04936a20
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


void System_ReadOnlySpan<OVRPlugin_SpaceDiscoveryResult>__ToArray
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
               long *param_5)

{
  undefined8 uVar1;
  ulong uVar2;
  long unaff_x19;
  undefined4 uVar3;
  
  if (param_5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03188cd8();
  }
  uVar1 = (**(code **)(*param_5 + 0xdb8))(param_5,*(undefined8 *)(*param_5 + 0xdc0));
  uVar2 = FUN_057bebf8(uVar1,0);
  if ((uVar2 & 1) != 0) {
    uVar3 = FUN_049368e4();
    *(undefined4 *)(unaff_x19 + 0x70) = uVar3;
    *(undefined4 *)(unaff_x19 + 0x74) = param_2;
    *(undefined4 *)(unaff_x19 + 0x78) = param_3;
    *(undefined4 *)(unaff_x19 + 0x7c) = param_4;
    return;
  }
  FUN_06c3a4d0();
  return;
}


