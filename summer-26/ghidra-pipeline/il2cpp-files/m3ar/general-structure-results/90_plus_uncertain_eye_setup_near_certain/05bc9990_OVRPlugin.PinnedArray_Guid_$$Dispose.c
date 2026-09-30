/*
FUNCTION_NAME: OVRPlugin.PinnedArray<Guid>$$Dispose
ENTRY_POINT: 05bc9990
PROGRAM: m3ar-libil2cpp.so
SCORE: 94
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_PinnedArray<Guid>__Dispose(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  long lVar3;
  undefined8 *unaff_x22;
  undefined8 uStack0000000000000040;
  undefined8 uStack0000000000000048;
  undefined8 uStack0000000000000050;
  undefined8 uStack0000000000000058;
  undefined8 uStack0000000000000060;
  undefined8 uStack0000000000000068;
  undefined8 uStack0000000000000070;
  undefined8 uStack0000000000000078;
  
  uStack0000000000000048 = unaff_x22[1];
  uStack0000000000000040 = *unaff_x22;
  uStack0000000000000058 = unaff_x22[3];
  uStack0000000000000050 = unaff_x22[2];
  lVar3 = **(long **)(param_1 + 0xb8);
  uStack0000000000000068 = unaff_x22[5];
  uStack0000000000000060 = unaff_x22[4];
  uStack0000000000000078 = unaff_x22[7];
  uStack0000000000000070 = unaff_x22[6];
  uVar1 = thunk_FUN_0406db0c(**(undefined8 **)(*(long *)(unaff_x20 + 0x20) + 0xc0),&stack0x00000040)
  ;
  uVar2 = thunk_FUN_0406db0c(**(undefined8 **)(*(long *)(unaff_x20 + 0x20) + 0xc0));
  if (lVar3 != 0) {
    FUN_0747f5b4(lVar3,uVar1,uVar2,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


