/*
FUNCTION_NAME: OVRPlugin.OVRP_1_44_0$$ovrp_GetUseOverriddenExternalCameraStaticPose
ENTRY_POINT: 05350b14
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 91
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_44_0__ovrp_GetUseOverriddenExternalCameraStaticPose(void)

{
  undefined *puVar1;
  long lVar2;
  undefined1 in_w8;
  uint unaff_w19;
  long unaff_x20;
  int iVar3;
  
  *(undefined1 *)(unaff_x20 + 0x562) = in_w8;
  puVar1 = PTR_DAT_067c9ca0;
  if (unaff_w19 != 0) {
    iVar3 = 1;
    do {
      lVar2 = FUN_05350804();
      if (lVar2 == 0) {
        return;
      }
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      FUN_053508d8(lVar2);
      lVar2 = (long)iVar3;
      iVar3 = iVar3 + 1;
    } while (lVar2 < (long)(ulong)unaff_w19);
  }
  return;
}


