/*
FUNCTION_NAME: OVRManager$$add_VrFocusLost
ENTRY_POINT: 06364d80
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x06364e5c) */
/* WARNING: Removing unreachable block (ram,0x06364e6c) */
/* WARNING: Removing unreachable block (ram,0x06364e70) */
/* WARNING: Removing unreachable block (ram,0x06364e84) */
/* WARNING: Removing unreachable block (ram,0x06364e8c) */
/* WARNING: Removing unreachable block (ram,0x06364eb4) */
/* WARNING: Removing unreachable block (ram,0x06364e98) */
/* WARNING: Removing unreachable block (ram,0x06364ea4) */
/* WARNING: Removing unreachable block (ram,0x06364ec4) */
/* WARNING: Removing unreachable block (ram,0x06364e58) */
/* WARNING: Removing unreachable block (ram,0x06364f84) */

void OVRManager__add_VrFocusLost(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x22;
  long *unaff_x24;
  long *unaff_x25;
  long *unaff_x26;
  
  do {
    uVar4 = (ulong)*(ushort *)(param_1 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(param_1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == param_3) {
          puVar2 = (undefined8 *)(param_1 + (long)(*piVar5 + 2) * 0x10 + 0x138);
          goto LAB_06364cb4;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_0377596c();
LAB_06364cb4:
    (*(code *)*puVar2)();
    lVar3 = *unaff_x22;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x24) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_06364d00;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_0377596c();
LAB_06364d00:
    uVar4 = (*(code *)*puVar2)();
    if ((uVar4 & 1) == 0) {
      if (unaff_x22 == (long *)0x0) goto LAB_06364e4c;
      lVar3 = *unaff_x22;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar4 == 0) goto LAB_06364e24;
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      break;
    }
    lVar3 = *unaff_x22;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x26) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_06364d5c;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_0377596c();
LAB_06364d5c:
    (*(code *)*puVar2)();
    FUN_0636137c();
    if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    param_1 = *unaff_x20;
    param_3 = *unaff_x25;
  } while( true );
  while( true ) {
    uVar4 = uVar4 - 1;
    piVar5 = piVar5 + 4;
    if (uVar4 == 0) break;
    if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_07d896f8) {
      puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
      goto LAB_06364e40;
    }
  }
LAB_06364e24:
  puVar2 = (undefined8 *)FUN_0377596c();
LAB_06364e40:
  (*(code *)*puVar2)();
LAB_06364e4c:
  if (unaff_x20 != (long *)0x0) {
    lVar3 = *unaff_x20;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x25) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_06364f24;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_0377596c();
LAB_06364f24:
    iVar1 = (*(code *)*puVar2)();
    if (iVar1 < 1) {
      return;
    }
    if (*(long *)(unaff_x19 + 0x28) != 0) {
      *(long **)(*(long *)(unaff_x19 + 0x28) + 0xf8) = unaff_x20;
      thunk_FUN_037aeb94();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


