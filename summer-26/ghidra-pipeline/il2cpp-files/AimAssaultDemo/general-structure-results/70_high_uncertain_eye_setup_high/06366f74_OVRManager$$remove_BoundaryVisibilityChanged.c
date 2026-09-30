/*
FUNCTION_NAME: OVRManager$$remove_BoundaryVisibilityChanged
ENTRY_POINT: 06366f74
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x06367028) */
/* WARNING: Removing unreachable block (ram,0x0636707c) */

void OVRManager__remove_BoundaryVisibilityChanged
               (undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  long *unaff_x21;
  undefined8 unaff_x22;
  long unaff_x23;
  long *unaff_x24;
  long *unaff_x25;
  long *unaff_x26;
  long *unaff_x27;
  long *unaff_x28;
  long *unaff_x29;
  
code_r0x06366f74:
  puVar3 = (undefined8 *)FUN_0377596c(unaff_x24,param_2,param_3);
  do {
    (*(code *)*puVar3)(unaff_x24,unaff_x22,unaff_x23,puVar3[1]);
    do {
      lVar4 = *unaff_x21;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *unaff_x26) {
            puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_06366e0c;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar3 = (undefined8 *)FUN_0377596c();
LAB_06366e0c:
      uVar5 = (*(code *)*puVar3)();
      if ((uVar5 & 1) == 0) {
        if (unaff_x21 == (long *)0x0) goto LAB_0636702c;
        lVar4 = *unaff_x21;
        uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar5 == 0) goto LAB_06366ff4;
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        goto LAB_06366fdc;
      }
      lVar4 = *unaff_x21;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *unaff_x27) {
            puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_06366e68;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar3 = (undefined8 *)FUN_0377596c();
LAB_06366e68:
      lVar4 = (*(code *)*puVar3)();
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
    } while (*(char *)(lVar4 + 0x80) != '\0');
    FUN_06345a08(lVar4,0);
    unaff_x23 = FUN_06365b68();
    lVar1 = FUN_0633ab28(lVar4,0);
    if (lVar1 != 0) {
      uVar2 = FUN_0633ab28(lVar4,0);
      if (*(int *)(*unaff_x29 + 0xe4) == 0) {
        thunk_FUN_03798b70();
      }
      uVar2 = FUN_063853bc(uVar2,0);
      if (unaff_x23 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      *(undefined8 *)(unaff_x23 + 0xf0) = uVar2;
      thunk_FUN_037aeb94();
    }
    if (*(long *)(unaff_x19 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    unaff_x24 = *(long **)(*(long *)(unaff_x19 + 0x30) + 0xb8);
    if (unaff_x24 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    lVar1 = *unaff_x24;
    unaff_x22 = *(undefined8 *)(lVar4 + 0x30);
    param_2 = *unaff_x28;
    uVar5 = (ulong)*(ushort *)(lVar1 + 0x12e);
    if (uVar5 == 0) break;
    piVar6 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
    while (*(long *)(piVar6 + -2) != param_2) {
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
      if (uVar5 == 0) goto LAB_06366f70;
    }
    puVar3 = (undefined8 *)(lVar1 + (long)(*piVar6 + 5) * 0x10 + 0x138);
  } while( true );
LAB_06366f70:
  param_3 = 5;
  goto code_r0x06366f74;
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar6 = piVar6 + 4;
    if (uVar5 == 0) break;
LAB_06366fdc:
    if (*(long *)(piVar6 + -2) == *unaff_x25) {
      puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
      goto LAB_06367010;
    }
  }
LAB_06366ff4:
  puVar3 = (undefined8 *)FUN_0377596c();
LAB_06367010:
  (*(code *)*puVar3)();
LAB_0636702c:
  uVar5 = FUN_06335a34();
  if ((uVar5 & 1) != 0) {
    if (*(long *)(unaff_x19 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    *(undefined1 *)(*(long *)(unaff_x19 + 0x30) + 0xd0) = 0;
  }
  return;
}


