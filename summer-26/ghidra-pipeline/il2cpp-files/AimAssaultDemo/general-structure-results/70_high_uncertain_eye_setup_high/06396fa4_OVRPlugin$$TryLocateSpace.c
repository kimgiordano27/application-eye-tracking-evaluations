/*
FUNCTION_NAME: OVRPlugin$$TryLocateSpace
ENTRY_POINT: 06396fa4
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x06396ccc) */

undefined8 OVRPlugin__TryLocateSpace(void)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  int *piVar5;
  long unaff_x19;
  undefined8 uVar6;
  long *unaff_x21;
  long lVar7;
  
  plVar3 = (long *)__cxa_begin_catch();
  lVar7 = *plVar3;
  __cxa_end_catch();
  if (unaff_x21 != (long *)0x0) {
    lVar2 = *unaff_x21;
    uVar4 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_07d896f8) {
          puVar1 = (undefined8 *)(lVar2 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_06396ec4;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_0377596c();
LAB_06396ec4:
    (*(code *)*puVar1)();
  }
  if (lVar7 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7ac(lVar7);
  }
  lVar7 = *(long *)(unaff_x19 + 0x38);
  if (*(int *)(*(long *)PTR_DAT_07d89e28 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  if (lVar7 == 0) {
    lVar2 = 0;
  }
  else {
    uVar6 = *(undefined8 *)PTR_DAT_07d867b8;
    lVar2 = thunk_FUN_037787d0(lVar7,uVar6);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373bb54(lVar7,uVar6);
    }
  }
  uVar6 = FUN_061b684c(lVar2,0);
  uVar6 = FUN_060bf6bc(uVar6);
  return uVar6;
}


