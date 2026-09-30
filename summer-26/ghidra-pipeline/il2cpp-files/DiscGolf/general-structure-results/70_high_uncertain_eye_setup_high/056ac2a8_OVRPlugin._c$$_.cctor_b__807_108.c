/*
FUNCTION_NAME: OVRPlugin.<>c$$<.cctor>b__807_108
ENTRY_POINT: 056ac2a8
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_<>c__<_cctor>b__807_108(void)

{
  undefined *puVar1;
  long lVar2;
  long unaff_x19;
  long unaff_x20;
  
  FUN_02d965b8();
  FUN_02d965b8(Meta_XR_ImmersiveDebugger_Manager_Watch_ToDisplayStringSignature<Vector3>_TypeInfo);
  *(undefined1 *)(unaff_x20 + 0xa90) = 1;
  puVar1 = PTR_DAT_06a0d500;
  if (unaff_x19 != 0) {
    if (*(long *)(unaff_x19 + 0x18) == 0) {
      if (*(int *)(*(long *)PTR_DAT_069fb930 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      FUN_0630bbe4(*(undefined8 *)
                    Meta_XR_ImmersiveDebugger_Manager_Watch_ToDisplayStringSignature<Vector3>_TypeInfo
                   ,0);
      return;
    }
    lVar2 = *(long *)PTR_DAT_06a0d500;
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_02df485c();
      lVar2 = *(long *)puVar1;
    }
    if (**(long **)(lVar2 + 0xb8) != 0) {
      FUN_04ff1a78(**(long **)(lVar2 + 0xb8),*(undefined8 *)(unaff_x19 + 0x18));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


