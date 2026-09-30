/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector3f>$$AsReadOnlySpan
ENTRY_POINT: 059d07d8
PROGRAM: m3ar-libil2cpp.so
SCORE: 92
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector3f>__AsReadOnlySpan(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x19;
  long unaff_x20;
  int unaff_w21;
  
  FUN_07506818(0xf,0x15,0);
  if (*(long *)(unaff_x19 + 0x10) != 0) {
    if (*(int *)(*(long *)(unaff_x19 + 0x10) + 0x18) != unaff_w21) {
      lVar2 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0);
      if (unaff_w21 < 1) {
        lVar2 = *(long *)(lVar2 + 0x10);
        if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_0406aaec();
        }
        if (*(int *)(lVar2 + 0xe4) == 0) {
          thunk_FUN_0408f364();
        }
        lVar2 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x10);
        if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_0406aaec();
        }
        uVar1 = **(undefined8 **)(lVar2 + 0xb8);
      }
      else {
        lVar2 = *(long *)(lVar2 + 0x18);
        if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_0406aaec();
        }
        uVar1 = FUN_040316d0(lVar2,unaff_w21);
        if (0 < *(int *)(unaff_x19 + 0x18)) {
          FUN_07508590(*(undefined8 *)(unaff_x19 + 0x10),0,uVar1,0,*(int *)(unaff_x19 + 0x18),0);
        }
      }
      *(undefined8 *)(unaff_x19 + 0x10) = uVar1;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


