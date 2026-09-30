/*
FUNCTION_NAME: OVRManager$$add_BoundaryVisibilityChanged
ENTRY_POINT: 06366e80
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

void OVRManager__add_BoundaryVisibilityChanged(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  uint in_w8;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  long *unaff_x21;
  long unaff_x22;
  long *plVar7;
  long *unaff_x25;
  long *unaff_x26;
  long *unaff_x27;
  long *unaff_x28;
  long *unaff_x29;
  
  do {
    if (in_w8 == 0) {
      FUN_06345a08(unaff_x22,0);
      lVar1 = FUN_06365b68();
      lVar2 = FUN_0633ab28(unaff_x22,0);
      if (lVar2 != 0) {
        uVar3 = FUN_0633ab28(unaff_x22,0);
        if (*(int *)(*unaff_x29 + 0xe4) == 0) {
          thunk_FUN_03798b70();
        }
        uVar3 = FUN_063853bc(uVar3,0);
        if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        *(undefined8 *)(lVar1 + 0xf0) = uVar3;
        thunk_FUN_037aeb94();
      }
      if (*(long *)(unaff_x19 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      plVar7 = *(long **)(*(long *)(unaff_x19 + 0x30) + 0xb8);
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      lVar2 = *plVar7;
      uVar3 = *(undefined8 *)(unaff_x22 + 0x30);
      uVar5 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *unaff_x28) {
            puVar4 = (undefined8 *)(lVar2 + (long)(*piVar6 + 5) * 0x10 + 0x138);
            goto LAB_06366f90;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar4 = (undefined8 *)FUN_0377596c(plVar7,*unaff_x28,5);
LAB_06366f90:
      (*(code *)*puVar4)(plVar7,uVar3,lVar1,puVar4[1]);
    }
    lVar1 = *unaff_x21;
    uVar5 = (ulong)*(ushort *)(lVar1 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x26) {
          puVar4 = (undefined8 *)(lVar1 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_06366e0c;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar4 = (undefined8 *)FUN_0377596c();
LAB_06366e0c:
    uVar5 = (*(code *)*puVar4)();
    if ((uVar5 & 1) == 0) {
      if (unaff_x21 == (long *)0x0) goto LAB_0636702c;
      lVar1 = *unaff_x21;
      uVar5 = (ulong)*(ushort *)(lVar1 + 0x12e);
      if (uVar5 == 0) goto LAB_06366ff4;
      piVar6 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
      break;
    }
    lVar1 = *unaff_x21;
    uVar5 = (ulong)*(ushort *)(lVar1 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x27) {
          puVar4 = (undefined8 *)(lVar1 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_06366e68;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar4 = (undefined8 *)FUN_0377596c();
LAB_06366e68:
    unaff_x22 = (*(code *)*puVar4)();
    if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    in_w8 = (uint)*(byte *)(unaff_x22 + 0x80);
  } while( true );
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar6 = piVar6 + 4;
    if (uVar5 == 0) break;
    if (*(long *)(piVar6 + -2) == *unaff_x25) {
      puVar4 = (undefined8 *)(lVar1 + (long)*piVar6 * 0x10 + 0x138);
      goto LAB_06367010;
    }
  }
LAB_06366ff4:
  puVar4 = (undefined8 *)FUN_0377596c();
LAB_06367010:
  (*(code *)*puVar4)();
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


