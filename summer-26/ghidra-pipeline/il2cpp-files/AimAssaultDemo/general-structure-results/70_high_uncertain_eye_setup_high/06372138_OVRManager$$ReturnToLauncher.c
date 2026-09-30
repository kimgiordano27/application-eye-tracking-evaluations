/*
FUNCTION_NAME: OVRManager$$ReturnToLauncher
ENTRY_POINT: 06372138
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x06372370) */

void OVRManager__ReturnToLauncher(void)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  int *piVar5;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long *unaff_x23;
  long *unaff_x24;
  long *unaff_x25;
  
code_r0x06372138:
  puVar1 = (undefined8 *)FUN_0377596c();
  do {
    uVar2 = (*(code *)*puVar1)();
    if ((uVar2 & 1) == 0) {
      if (unaff_x21 == (long *)0x0) goto LAB_06372254;
      lVar4 = *unaff_x21;
      uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar2 == 0) goto LAB_0637222c;
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      break;
    }
    lVar4 = *unaff_x21;
    uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar2 != 0) {
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x25) {
          puVar1 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_063721ac;
        }
        uVar2 = uVar2 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar2 != 0);
    }
    puVar1 = (undefined8 *)FUN_0377596c();
LAB_063721ac:
    lVar4 = (*(code *)*puVar1)();
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    *(undefined8 *)(lVar4 + 0x10) = 0;
    thunk_FUN_037aeb94((undefined8 *)(lVar4 + 0x10),0);
    *(undefined8 *)(lVar4 + 0x18) = 0;
    thunk_FUN_037aeb94((undefined8 *)(lVar4 + 0x18),0);
    *(undefined8 *)(lVar4 + 0x20) = 0;
    thunk_FUN_037aeb94((undefined8 *)(lVar4 + 0x20),0);
    lVar4 = *unaff_x21;
    uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar2 == 0) goto code_r0x06372138;
    piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    while (*(long *)(piVar5 + -2) != *unaff_x24) {
      uVar2 = uVar2 - 1;
      piVar5 = piVar5 + 4;
      if (uVar2 == 0) goto code_r0x06372138;
    }
    puVar1 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
  } while( true );
  while( true ) {
    uVar2 = uVar2 - 1;
    piVar5 = piVar5 + 4;
    if (uVar2 == 0) break;
    if (*(long *)(piVar5 + -2) == *unaff_x23) {
      puVar1 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
      goto LAB_06372248;
    }
  }
LAB_0637222c:
  puVar1 = (undefined8 *)FUN_0377596c();
LAB_06372248:
  (*(code *)*puVar1)();
LAB_06372254:
  lVar4 = *unaff_x20;
  uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar2 != 0) {
    piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_07db3528) {
        puVar1 = (undefined8 *)(lVar4 + (long)(*piVar5 + 3) * 0x10 + 0x138);
        goto LAB_063722b0;
      }
      uVar2 = uVar2 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar2 != 0);
  }
  puVar1 = (undefined8 *)FUN_0377596c();
LAB_063722b0:
  (*(code *)*puVar1)();
  if (unaff_x19[6] != 0) {
    uVar3 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07db5a18);
    FUN_06ae967c(uVar3,0,0xffffffff,0);
    (**(code **)(*unaff_x19 + 0x618))();
  }
  if (unaff_x19[8] != 0) {
    uVar3 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07db5a20);
    FUN_06b19a20(uVar3,4,0);
                    /* WARNING: Could not recover jumptable at 0x0637234c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*unaff_x19 + 0x628))();
    return;
  }
  return;
}


