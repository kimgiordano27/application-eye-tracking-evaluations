/*
FUNCTION_NAME: OVRManager$$InitializeBoundary
ENTRY_POINT: 0636d63c
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0636d794) */
/* WARNING: Removing unreachable block (ram,0x0636d7f8) */

void OVRManager__InitializeBoundary(long param_1)

{
  byte bVar1;
  int iVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long *unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  int unaff_w24;
  long *unaff_x25;
  long *unaff_x26;
  long unaff_x27;
  long *unaff_x28;
  int iStack0000000000000008;
  int iStack000000000000000c;
  
  do {
                    /* catch() { ... } // from try @ 0636d25c with catch @ 0636d63c */
                    /* catch() { ... } // from try @ 0636d258 with catch @ 0636d640 */
                    /* catch() { ... } // from try @ 0636d254 with catch @ 0636d644 */
                    /* catch() { ... } // from try @ 0636d24c with catch @ 0636d648 */
    iVar2 = (**(code **)(param_1 + 0x228))(unaff_x22,*(undefined8 *)(param_1 + 0x230));
                    /* catch() { ... } // from try @ 0636d268 with catch @ 0636d64c */
                    /* catch() { ... } // from try @ 0636d260 with catch @ 0636d650
                       catch() { ... } // from try @ 0636d274 with catch @ 0636d650 */
    if (iVar2 != 10) {
                    /* catch() { ... } // from try @ 0636cf68 with catch @ 0636d654 */
      iStack0000000000000008 = unaff_w24;
      thunk_FUN_037784fc(*(undefined8 *)(unaff_x27 + 0x48),&stack0x00000008);
                    /* try { // try from 0636d670 to 0646d687 has its CatchHandler @ 0636d6bc */
      (**(code **)(*unaff_x20 + 600))();
    }
LAB_0636d4f8:
    do {
      unaff_w24 = unaff_w24 + 1;
      lVar5 = *unaff_x21;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *unaff_x26) {
            puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_0636d544;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar3 = (undefined8 *)FUN_0377596c();
LAB_0636d544:
      uVar6 = (*(code *)*puVar3)();
      if ((uVar6 & 1) == 0) {
        plVar4 = (long *)thunk_FUN_037787d0();
        if (plVar4 == (long *)0x0) {
          return;
        }
        lVar5 = *plVar4;
        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar6 == 0) goto LAB_0636d724;
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        goto LAB_0636d70c;
      }
      lVar5 = *unaff_x21;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *unaff_x26) {
            puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 1) * 0x10 + 0x138);
            goto LAB_0636d5a4;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar3 = (undefined8 *)FUN_0377596c();
LAB_0636d5a4:
      lVar5 = (*(code *)*puVar3)();
      if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      iVar2 = FUN_063728dc();
      if (iVar2 <= unaff_w24) {
                    /* try { // try from 0636d688 to 0646d6ab has its CatchHandler @ 0636cd24 */
        FUN_06372d34(lVar5);
        (**(code **)(*unaff_x20 + 0x6e8))();
        goto LAB_0636d4f8;
      }
      iStack000000000000000c = unaff_w24;
      thunk_FUN_037784fc(*(undefined8 *)(unaff_x27 + 0x48),(long)&stack0x00000008 + 4);
      plVar4 = (long *)(**(code **)(*unaff_x20 + 0x248))();
      if (plVar4 != (long *)0x0) {
        bVar1 = *(byte *)(*unaff_x28 + 0x130);
        if ((bVar1 <= *(byte *)(*plVar4 + 0x130)) &&
           (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) == *unaff_x28)) {
          if (lVar5 != 0) {
            FUN_06372ec8(plVar4,lVar5);
            (**(code **)(*plVar4 + 0x6f8))(plVar4,lVar5);
          }
          goto LAB_0636d4f8;
        }
      }
    } while (lVar5 == 0);
    unaff_x22 = (long *)FUN_06372d34(lVar5);
    if (unaff_x22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    param_1 = *unaff_x22;
  } while( true );
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar7 = piVar7 + 4;
    if (uVar6 == 0) break;
LAB_0636d70c:
    if (*(long *)(piVar7 + -2) == *unaff_x25) {
      puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_0636d740;
    }
  }
LAB_0636d724:
  puVar3 = (undefined8 *)FUN_0377596c(plVar4,*unaff_x25,0);
LAB_0636d740:
  (*(code *)*puVar3)(plVar4,puVar3[1]);
  return;
}


