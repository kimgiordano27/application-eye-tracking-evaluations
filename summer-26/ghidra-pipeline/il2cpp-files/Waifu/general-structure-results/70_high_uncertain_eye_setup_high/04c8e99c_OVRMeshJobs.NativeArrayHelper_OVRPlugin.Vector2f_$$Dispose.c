/*
FUNCTION_NAME: OVRMeshJobs.NativeArrayHelper<OVRPlugin.Vector2f>$$Dispose
ENTRY_POINT: 04c8e99c
PROGRAM: Waifu-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector2f>__Dispose(void)

{
  ulong uVar1;
  ulong *puVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined4 unaff_w21;
  long unaff_x22;
  undefined8 uStack0000000000000030;
  undefined8 uStack0000000000000038;
  undefined8 uStack0000000000000040;
  undefined8 uStack0000000000000048;
  undefined8 uStack0000000000000050;
  undefined8 uStack0000000000000058;
  
  *(undefined4 *)(unaff_x20 + 0x18) = unaff_w21;
  uStack0000000000000048 = unaff_x19[3];
  uStack0000000000000040 = unaff_x19[2];
  uStack0000000000000058 = unaff_x19[5];
  uStack0000000000000050 = unaff_x19[4];
  uStack0000000000000038 = unaff_x19[1];
  uStack0000000000000030 = *unaff_x19;
  lVar5 = *(long *)(unaff_x20 + 0x10);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_033d1d3c();
  }
  if ((uint)unaff_x22 < *(uint *)(lVar5 + 0x18)) {
    lVar6 = lVar5 + unaff_x22 * 0x30;
    *(undefined8 *)(lVar6 + 0x38) = uStack0000000000000048;
    *(undefined8 *)(lVar6 + 0x30) = uStack0000000000000040;
    *(undefined8 *)(lVar6 + 0x48) = uStack0000000000000058;
    *(undefined8 *)(lVar6 + 0x40) = uStack0000000000000050;
    *(undefined8 *)(lVar6 + 0x28) = uStack0000000000000038;
    *(undefined8 *)(lVar6 + 0x20) = uStack0000000000000030;
    if (DAT_08908cd0 != 0) {
      uVar1 = lVar5 + unaff_x22 * 0x30 + 0x28;
      puVar2 = &DAT_0873ccb0 + (uVar1 >> 0x12 & 0x7fff);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar4) {
          *puVar2 = *puVar2 | 1L << (uVar1 >> 0xc & 0x3f);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d44();
}


