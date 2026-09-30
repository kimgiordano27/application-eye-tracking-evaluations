/*
FUNCTION_NAME: OVRMeshJobs.NativeArrayHelper<OVRPlugin.Vector3f>$$.ctor
ENTRY_POINT: 04c8e9a8
PROGRAM: Waifu-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector3f>___ctor
               (undefined1 param_1 [16],undefined1 param_2 [16],undefined1 param_3 [16])

{
  ulong uVar1;
  ulong *puVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long unaff_x20;
  long unaff_x22;
  undefined8 uStack0000000000000030;
  undefined8 uStack0000000000000040;
  undefined8 uStack0000000000000050;
  
  uStack0000000000000040 = param_3._0_8_;
  uStack0000000000000030 = param_2._0_8_;
  uStack0000000000000050 = param_1._0_8_;
  lVar5 = *(long *)(unaff_x20 + 0x10);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_033d1d3c();
  }
  if ((uint)unaff_x22 < *(uint *)(lVar5 + 0x18)) {
    lVar6 = lVar5 + unaff_x22 * 0x30;
    *(long *)(lVar6 + 0x38) = param_3._8_8_;
    *(undefined8 *)(lVar6 + 0x30) = uStack0000000000000040;
    *(long *)(lVar6 + 0x48) = param_1._8_8_;
    *(undefined8 *)(lVar6 + 0x40) = uStack0000000000000050;
    *(long *)(lVar6 + 0x28) = param_2._8_8_;
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


