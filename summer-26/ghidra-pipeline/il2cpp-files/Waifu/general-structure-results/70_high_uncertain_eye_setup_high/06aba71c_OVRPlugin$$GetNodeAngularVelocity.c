/*
FUNCTION_NAME: OVRPlugin$$GetNodeAngularVelocity
ENTRY_POINT: 06aba71c
PROGRAM: Waifu-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetNodeAngularVelocity(long param_1,undefined8 param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  long unaff_x19;
  ulong unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  long unaff_x26;
  long unaff_x28;
  ulong uVar6;
  undefined8 uVar7;
  
  while( true ) {
    puVar4 = (undefined8 *)(param_1 + 0x20);
    *puVar4 = param_2;
    if (*(int *)(unaff_x23 + 0xcd0) != 0) {
      puVar1 = (ulong *)((long)&DAT_086f67d0 + unaff_x28 + ((ulong)puVar4 >> 0x12 & 0x7fff) * 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = *puVar1 | unaff_x25 << ((ulong)puVar4 >> 0xc & 0x3f);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (0 < *(int *)(unaff_x19 + 0x80)) {
      uVar6 = 0;
      do {
        lVar5 = *(long *)(unaff_x19 + 0x88);
        if (lVar5 == 0) goto LAB_06aba7dc;
        if (*(uint *)(lVar5 + 0x18) <= unaff_x21) goto LAB_06aba7fc;
        lVar5 = *(long *)(lVar5 + unaff_x21 * 8 + 0x20);
        if (*(char *)(unaff_x24 + 0xc53) == '\0') {
          FUN_0335b6c8();
          DataMemoryBarrier(2,3);
          *(char *)(unaff_x24 + 0xc53) = (char)unaff_x25;
        }
        if (lVar5 == 0) goto LAB_06aba7dc;
        if (*(uint *)(lVar5 + 0x18) <= uVar6) goto LAB_06aba7fc;
        puVar4 = *(undefined8 **)(*(long *)(unaff_x26 + 0x300) + 0xb8);
        uVar7 = *puVar4;
        lVar5 = lVar5 + uVar6 * 0x10;
        uVar6 = uVar6 + 1;
        *(undefined8 *)(lVar5 + 0x28) = puVar4[1];
        *(undefined8 *)(lVar5 + 0x20) = uVar7;
      } while ((long)uVar6 < (long)*(int *)(unaff_x19 + 0x80));
    }
    param_1 = *(long *)(unaff_x19 + 0x88);
    unaff_x21 = unaff_x21 + 1;
    if (param_1 == 0) break;
    if ((long)*(int *)(param_1 + 0x18) <= (long)unaff_x21) {
      return;
    }
    param_2 = FUN_03398188(*(undefined8 *)(unaff_x22 + 0xad8),*(undefined4 *)(unaff_x19 + 0x80));
    if (*(uint *)(param_1 + 0x18) <= unaff_x21) {
LAB_06aba7fc:
                    /* WARNING: Subroutine does not return */
      FUN_033d1d44();
    }
    param_1 = param_1 + unaff_x21 * 8;
  }
LAB_06aba7dc:
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


