/*
FUNCTION_NAME: OVRManager$$remove_VrFocusLost
ENTRY_POINT: 06364e5c
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__remove_VrFocusLost(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  int *piVar5;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x25;
  
  lVar2 = FUN_0636137c();
  if (lVar2 != 0) {
    if (unaff_x20 == (long *)0x0) goto LAB_06364f7c;
    lVar2 = *unaff_x20;
    uVar4 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x25) {
          puVar3 = (undefined8 *)(lVar2 + (long)(*piVar5 + 2) * 0x10 + 0x138);
          goto LAB_06364ec4;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined8 *)FUN_0377596c();
LAB_06364ec4:
    (*(code *)*puVar3)();
  }
  if (unaff_x20 != (long *)0x0) {
    lVar2 = *unaff_x20;
    uVar4 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x25) {
          puVar3 = (undefined8 *)(lVar2 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_06364f24;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined8 *)FUN_0377596c();
LAB_06364f24:
    iVar1 = (*(code *)*puVar3)();
    if (iVar1 < 1) {
      return;
    }
    if (*(long *)(unaff_x19 + 0x28) != 0) {
      *(long **)(*(long *)(unaff_x19 + 0x28) + 0xf8) = unaff_x20;
      thunk_FUN_037aeb94();
      return;
    }
  }
LAB_06364f7c:
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


