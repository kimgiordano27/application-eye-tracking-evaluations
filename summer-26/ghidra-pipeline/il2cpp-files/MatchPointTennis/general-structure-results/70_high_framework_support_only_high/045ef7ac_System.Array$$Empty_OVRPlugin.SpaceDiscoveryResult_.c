/*
FUNCTION_NAME: System.Array$$Empty<OVRPlugin.SpaceDiscoveryResult>
ENTRY_POINT: 045ef7ac
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 89
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


long System_Array__Empty<OVRPlugin_SpaceDiscoveryResult>(ulong param_1,long param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined4 unaff_w21;
  byte unaff_w22;
  long unaff_x23;
  
  if ((param_1 & 1) == 0) {
    FUN_04447ba8(PTR_DAT_09f23bc8);
                    /* try { // try from 045ef7c0 to 046ef7d7 has its CatchHandler @ 045f00a4 */
    *(undefined1 *)(unaff_x23 + 0x5ef) = 1;
  }
  if ((param_2 != 0) && (*(char *)(param_2 + 0xe8) != '\0')) {
    *(byte *)(param_2 + 0x140) = unaff_w22 & 1;
    *(undefined4 *)(param_2 + 0x144) = unaff_w21;
    uVar1 = FUN_078b4450();
    if ((uVar1 & 1) == 0) {
      if ((unaff_x20 == 0) ||
         ((*(int *)(unaff_x20 + 0x10) < 2 && (unaff_x20 = FUN_078a7764(), unaff_x20 == 0)))) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      uVar2 = FUN_078b4364(unaff_x20,0);
      *(undefined8 *)(param_2 + 0x148) = uVar2;
      thunk_FUN_044bb4b4(param_2 + 0x148);
      uVar2 = *(undefined8 *)(param_2 + 0x148);
      if (*(int *)(*(long *)PTR_DAT_09f23bc8 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      FUN_0460772c(uVar2,0);
    }
  }
  return param_2;
}


