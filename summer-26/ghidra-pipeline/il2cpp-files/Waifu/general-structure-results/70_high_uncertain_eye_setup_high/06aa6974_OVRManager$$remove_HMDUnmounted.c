/*
FUNCTION_NAME: OVRManager$$remove_HMDUnmounted
ENTRY_POINT: 06aa6974
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


/* WARNING: Removing unreachable block (ram,0x06aa6bb0) */

void OVRManager__remove_HMDUnmounted(long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long unaff_x20;
  
  uVar6 = (ulong)*(ushort *)(param_1 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == param_3) {
        puVar1 = (undefined8 *)(param_1 + (long)*piVar7 * 0x10 + 0x138);
        goto LAB_06aa69b8;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar1 = (undefined8 *)FUN_0338f71c();
                    /* try { // try from 06aa69a8 to 06ba69cf has its CatchHandler @ 06aa70c4 */
LAB_06aa69b8:
  plVar2 = (long *)(*(code *)*puVar1)();
  if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_033d1d3c();
  }
  do {
    lVar5 = *plVar2;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == DAT_083cc870) {
          puVar1 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_06aa6a28;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar1 = (undefined8 *)FUN_0338f71c(plVar2,DAT_083cc870,0);
LAB_06aa6a28:
    uVar6 = (*(code *)*puVar1)(plVar2,puVar1[1]);
    if ((uVar6 & 1) == 0) {
      if (plVar2 == (long *)0x0) {
        return;
      }
      lVar5 = *plVar2;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 == 0) goto LAB_06aa6b5c;
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      break;
    }
    lVar5 = *plVar2;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == DAT_083c35d8) {
          puVar1 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_06aa6a84;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar1 = (undefined8 *)FUN_0338f71c(plVar2,DAT_083c35d8,0);
LAB_06aa6a84:
    plVar3 = (long *)(*(code *)*puVar1)(plVar2,puVar1[1]);
    uVar4 = FUN_03398a84(DAT_083be228);
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_033d1d3c();
    }
                    /* try { // try from 06aa6ab4 to 06ba6acf has its CatchHandler @ 06aa70c0 */
    FUN_06039da8();
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_033d1d3c();
    }
    lVar5 = *plVar3;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == DAT_083ccc60) {
          puVar1 = (undefined8 *)(lVar5 + (long)(*piVar7 + 1) * 0x10 + 0x138);
          goto LAB_06aa6b0c;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar1 = (undefined8 *)FUN_0338f71c(plVar3,DAT_083ccc60,1);
LAB_06aa6b0c:
    (*(code *)*puVar1)(plVar3,uVar4,puVar1[1]);
  } while( true );
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar7 = piVar7 + 4;
    if (uVar6 == 0) break;
    if (*(long *)(piVar7 + -2) == DAT_083cc7a8) {
      puVar1 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_06aa6b78;
    }
  }
LAB_06aa6b5c:
  puVar1 = (undefined8 *)FUN_0338f71c(plVar2,DAT_083cc7a8,0);
LAB_06aa6b78:
  (*(code *)*puVar1)(plVar2,puVar1[1]);
  return;
}


