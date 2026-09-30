/*
FUNCTION_NAME: OVRPlugin$$SendMicrogestureHint
ENTRY_POINT: 0639a478
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0639a63c) */
/* WARNING: Removing unreachable block (ram,0x0639a668) */
/* WARNING: Removing unreachable block (ram,0x0639a6a8) */

void OVRPlugin__SendMicrogestureHint(void)

{
  byte bVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x22;
  long *unaff_x23;
  long *unaff_x25;
  long unaff_x26;
  long *plVar7;
  long unaff_x27;
  long *plVar8;
  
  plVar7 = *(long **)(unaff_x26 + 0x700);
  plVar8 = *(long **)(unaff_x27 + 0x888);
  do {
    lVar4 = *unaff_x20;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *plVar7) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_0639a4cc;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_0377596c();
LAB_0639a4cc:
    uVar5 = (*(code *)*puVar2)();
    if ((uVar5 & 1) == 0) {
      plVar7 = (long *)thunk_FUN_037787d0();
      if (plVar7 == (long *)0x0) goto LAB_0639a640;
      lVar4 = *plVar7;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 == 0) goto LAB_0639a608;
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      break;
    }
    lVar4 = *unaff_x20;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *plVar7) {
          puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 1) * 0x10 + 0x138);
          goto LAB_0639a52c;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_0377596c();
LAB_0639a52c:
    plVar3 = (long *)(*(code *)*puVar2)();
    if (plVar3 == (long *)0x0) {
      if (unaff_x22 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    bVar1 = *(byte *)(*plVar8 + 0x130);
    if ((*(byte *)(*plVar3 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar3 + 200) + (ulong)bVar1 * 8 + -8) != *plVar8)) {
                    /* WARNING: Subroutine does not return */
      FUN_0373bb54(plVar3);
    }
    if (unaff_x22 != 0) {
      FUN_063401c0();
    }
    (**(code **)(*unaff_x19 + 0x5d8))();
    if (unaff_x23 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    (**(code **)(*unaff_x23 + 0x178))();
  } while( true );
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar6 = piVar6 + 4;
    if (uVar5 == 0) break;
    if (*(long *)(piVar6 + -2) == *unaff_x25) {
      puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
      goto LAB_0639a624;
    }
  }
LAB_0639a608:
  puVar2 = (undefined8 *)FUN_0377596c(plVar7,*unaff_x25,0);
LAB_0639a624:
  (*(code *)*puVar2)(plVar7,puVar2[1]);
LAB_0639a640:
                    /* WARNING: Could not recover jumptable at 0x0639a664. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*unaff_x19 + 0x588))();
  return;
}


