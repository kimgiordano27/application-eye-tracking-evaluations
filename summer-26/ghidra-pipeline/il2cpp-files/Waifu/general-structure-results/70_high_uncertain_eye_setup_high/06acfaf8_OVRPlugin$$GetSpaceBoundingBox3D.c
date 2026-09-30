/*
FUNCTION_NAME: OVRPlugin$$GetSpaceBoundingBox3D
ENTRY_POINT: 06acfaf8
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


void OVRPlugin__GetSpaceBoundingBox3D(void)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  uint *puVar9;
  int *piVar10;
  long unaff_x19;
  long unaff_x20;
  long *plVar11;
  long unaff_x21;
  undefined1 unaff_w22;
  ulong uVar12;
  uint uVar13;
  uint uStack0000000000000008;
  uint uStack000000000000000c;
  uint uStack0000000000000010;
  uint uStack0000000000000014;
  uint uStack0000000000000018;
  uint uStack000000000000001c;
  
  FUN_0335b6c8(&DAT_083fb888,1);
  DataMemoryBarrier(2,3);
  *(undefined1 *)(unaff_x20 + 0x2ba) = unaff_w22;
  uVar12 = FUN_050631ac();
  *(undefined8 *)(unaff_x21 + 0x180) = 0;
  if (DAT_08908cd0 != 0) {
    puVar1 = &DAT_0873ccb0 + (unaff_x21 + 0x180U >> 0x12 & 0x7fff);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << (unaff_x21 + 0x180U >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar11 = *(long **)(unaff_x21 + 0x158);
  *(undefined4 *)(unaff_x21 + 0x178) = 0;
  if (plVar11 == (long *)0x0) {
    if (DAT_086d7cc6 == '\0') {
      FUN_0335b6c8(&DAT_083d2c90,1);
      DataMemoryBarrier(2,3);
      DAT_086d7cc6 = '\x01';
    }
    puVar9 = *(uint **)(DAT_083d2c90 + 0xb8);
    uStack0000000000000014 = *puVar9;
    uVar13 = puVar9[1];
    uStack000000000000001c = puVar9[2];
    uVar4 = uStack0000000000000014;
    uStack000000000000000c = uVar13;
    uVar5 = uStack000000000000001c;
  }
  else {
    if (unaff_x19 == 0) goto LAB_06acfc88;
    if (DAT_086ef188 == (code *)0x0) {
      DAT_086ef188 = (code *)FUN_033d1b68("UnityEngine.Component::get_transform()");
    }
    uVar6 = (*DAT_086ef188)();
    lVar8 = *plVar11;
    uVar12 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar12 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == DAT_083cd280) {
          puVar7 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_06acfc48;
        }
        uVar12 = uVar12 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar12 != 0);
    }
    puVar7 = (undefined8 *)FUN_0338f71c(plVar11,DAT_083cd280,0);
LAB_06acfc48:
    (*(code *)*puVar7)(&stack0x00000008,plVar11,uVar6,puVar7[1]);
    uVar13 = uStack0000000000000018;
    uVar4 = uStack0000000000000008;
    uVar5 = uStack0000000000000010;
  }
  uVar12 = (ulong)uVar4;
  if (unaff_x19 != 0) {
    FUN_06acd5cc(uVar12,uStack000000000000000c,uVar5,uStack0000000000000014,uVar13,
                 uStack000000000000001c);
    return;
  }
LAB_06acfc88:
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c(uVar12);
}


