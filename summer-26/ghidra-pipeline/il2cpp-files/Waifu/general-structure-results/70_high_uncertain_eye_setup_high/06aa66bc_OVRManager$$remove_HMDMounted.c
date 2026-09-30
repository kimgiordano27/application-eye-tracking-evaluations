/*
FUNCTION_NAME: OVRManager$$remove_HMDMounted
ENTRY_POINT: 06aa66bc
PROGRAM: Waifu-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x06aa67fc) */

void OVRManager__remove_HMDMounted(void)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  long unaff_x26;
  
code_r0x06aa66bc:
  puVar1 = (undefined8 *)FUN_0338f71c();
  do {
    plVar2 = (long *)(*(code *)*puVar1)();
    uVar3 = FUN_03398a84(*(undefined8 *)(unaff_x25 + 0x228));
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_033d1d3c();
    }
    FUN_06039da8();
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_033d1d3c();
    }
    lVar4 = *plVar2;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)(unaff_x26 + 0xc60)) {
          puVar1 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_06aa662c;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar1 = (undefined8 *)FUN_0338f71c(plVar2,*(long *)(unaff_x26 + 0xc60),0);
LAB_06aa662c:
    (*(code *)*puVar1)(plVar2,uVar3,puVar1[1]);
    lVar4 = *unaff_x19;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)(unaff_x23 + 0x870)) {
          puVar1 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_06aa6678;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar1 = (undefined8 *)FUN_0338f71c();
LAB_06aa6678:
    uVar5 = (*(code *)*puVar1)();
    if ((uVar5 & 1) == 0) {
      if (unaff_x19 == (long *)0x0) {
        return;
      }
      lVar4 = *unaff_x19;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 == 0) goto LAB_06aa67a8;
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      break;
    }
    lVar4 = *unaff_x19;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 == 0) goto code_r0x06aa66bc;
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    while (*(long *)(piVar6 + -2) != *(long *)(unaff_x24 + 0x5d8)) {
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
      if (uVar5 == 0) goto code_r0x06aa66bc;
    }
    puVar1 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
  } while( true );
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar6 = piVar6 + 4;
    if (uVar5 == 0) break;
    if (*(long *)(piVar6 + -2) == DAT_083cc7a8) {
      puVar1 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
      goto LAB_06aa67c4;
    }
  }
LAB_06aa67a8:
  puVar1 = (undefined8 *)FUN_0338f71c();
LAB_06aa67c4:
  (*(code *)*puVar1)();
                    /* try { // try from 06aa67d0 to 06ba6827 has its CatchHandler @ 06aa68f0 */
  return;
}


