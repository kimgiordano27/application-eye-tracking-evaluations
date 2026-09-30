/*
FUNCTION_NAME: QRCoder.PayloadGenerator.RussiaPaymentOrder.OptionalFields$$get_Purpose
ENTRY_POINT: 06444ca4
PROGRAM: Waifu-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void QRCoder_PayloadGenerator_RussiaPaymentOrder_OptionalFields__get_Purpose(undefined8 param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 unaff_x20;
  long *unaff_x22;
  long unaff_x23;
  
  lVar4 = FUN_0339898c();
  if (lVar4 != 0) {
    *unaff_x22 = lVar4;
    unaff_x20 = *(undefined8 *)(unaff_x23 + 0x6c0);
    lVar4 = FUN_0339898c(param_1,unaff_x20);
    if (lVar4 != 0) {
      if (DAT_08908cd0 != 0) {
        puVar1 = &DAT_0873ccb0 + ((ulong)unaff_x22 >> 0x12 & 0x7fff);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = *puVar1 | 1L << ((ulong)unaff_x22 >> 0xc & 0x3f);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1fec(param_1,unaff_x20);
}


