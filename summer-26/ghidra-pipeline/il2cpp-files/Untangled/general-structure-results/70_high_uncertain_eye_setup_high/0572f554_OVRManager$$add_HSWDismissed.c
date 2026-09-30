/*
FUNCTION_NAME: OVRManager$$add_HSWDismissed
ENTRY_POINT: 0572f554
PROGRAM: Untangled-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0572f7c8) */

void OVRManager__add_HSWDismissed(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long *unaff_x23;
  long unaff_x24;
  long *plVar6;
  long unaff_x25;
  long *plVar7;
  
  plVar6 = *(long **)(unaff_x24 + 0x48);
  plVar7 = *(long **)(unaff_x25 + 0x610);
  do {
    lVar3 = *unaff_x21;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *plVar6) {
          puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_0572f5a8;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_02eea86c();
LAB_0572f5a8:
    uVar4 = (*(code *)*puVar1)();
    if ((uVar4 & 1) == 0) {
      if (unaff_x21 == (long *)0x0) goto LAB_0572f6ac;
      lVar3 = *unaff_x21;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar4 == 0) goto LAB_0572f684;
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      break;
    }
    lVar3 = *unaff_x21;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *plVar7) {
          puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_0572f604;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_02eea86c();
LAB_0572f604:
    lVar3 = (*(code *)*puVar1)();
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    *(undefined8 *)(lVar3 + 0x10) = 0;
    thunk_FUN_02f411dc((undefined8 *)(lVar3 + 0x10),0);
    *(undefined8 *)(lVar3 + 0x18) = 0;
    thunk_FUN_02f411dc((undefined8 *)(lVar3 + 0x18),0);
    *(undefined8 *)(lVar3 + 0x20) = 0;
    thunk_FUN_02f411dc((undefined8 *)(lVar3 + 0x20),0);
  } while( true );
  while( true ) {
    uVar4 = uVar4 - 1;
    piVar5 = piVar5 + 4;
    if (uVar4 == 0) break;
    if (*(long *)(piVar5 + -2) == *unaff_x23) {
      puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
      goto LAB_0572f6a0;
    }
  }
LAB_0572f684:
  puVar1 = (undefined8 *)FUN_02eea86c();
LAB_0572f6a0:
  (*(code *)*puVar1)();
LAB_0572f6ac:
  lVar3 = *unaff_x20;
  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_06d56470) {
        puVar1 = (undefined8 *)(lVar3 + (long)(*piVar5 + 3) * 0x10 + 0x138);
        goto LAB_0572f708;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar1 = (undefined8 *)FUN_02eea86c();
LAB_0572f708:
  (*(code *)*puVar1)();
  if (unaff_x19[6] != 0) {
    uVar2 = thunk_FUN_02ef1808(*(undefined8 *)PTR_DAT_06d3aef0);
    FUN_05fcf3e0(uVar2,0,0xffffffff,0);
    (**(code **)(*unaff_x19 + 0x618))();
  }
  if (unaff_x19[8] == 0) {
    return;
  }
  uVar2 = thunk_FUN_02ef1808(*(undefined8 *)PTR_DAT_06d58898);
  FUN_06016b0c(uVar2,4,0);
                    /* WARNING: Could not recover jumptable at 0x0572f7a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*unaff_x19 + 0x628))();
  return;
}


