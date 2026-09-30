/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$CopySafe
ENTRY_POINT: 03cb3f48
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 112
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__CopySafe(void)

{
  char in_NG;
  bool in_ZR;
  char in_OV;
  undefined8 uVar1;
  long lVar2;
  long unaff_x19;
  long unaff_x20;
  int unaff_w21;
  
  if (!in_ZR && in_NG == in_OV) {
    FUN_050f6004(0xf,0x15,0);
  }
  if (*(long *)(unaff_x19 + 0x10) != 0) {
    if (*(int *)(*(long *)(unaff_x19 + 0x10) + 0x18) != unaff_w21) {
      lVar2 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0);
      if (unaff_w21 < 1) {
        lVar2 = *(long *)(lVar2 + 0x10);
        if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_02f41e9c();
        }
        if (*(int *)(lVar2 + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        lVar2 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x10);
        if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_02f41e9c();
        }
        uVar1 = **(undefined8 **)(lVar2 + 0xb8);
      }
      else {
        lVar2 = *(long *)(lVar2 + 0x18);
        if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_02f41e9c();
        }
        uVar1 = FUN_02f0880c(lVar2,unaff_w21);
        if (0 < *(int *)(unaff_x19 + 0x18)) {
          FUN_050f7d68(*(undefined8 *)(unaff_x19 + 0x10),0,uVar1,0,*(int *)(unaff_x19 + 0x18),0);
        }
      }
      *(undefined8 *)(unaff_x19 + 0x10) = uVar1;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


