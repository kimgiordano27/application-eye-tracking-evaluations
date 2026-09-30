/*
FUNCTION_NAME: QRCoder.PayloadGenerator.RussiaPaymentOrder.OptionalFields$$set_Purpose
ENTRY_POINT: 06444cac
PROGRAM: Waifu-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


void QRCoder_PayloadGenerator_RussiaPaymentOrder_OptionalFields__set_Purpose(void)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *unaff_x22;
  
  lVar4 = FUN_0339898c();
  if (lVar4 != 0) {
    *unaff_x22 = lVar4;
    lVar4 = FUN_0339898c();
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
  FUN_033d1fec();
}


