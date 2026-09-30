/*
FUNCTION_NAME: OVRManager$$add_BoundaryVisibilityChanged
ENTRY_POINT: 02fc5b54
PROGRAM: vrfs-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02fc5ce4) */

void OVRManager__add_BoundaryVisibilityChanged(void)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long unaff_x19;
  long *unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  long *plVar6;
  
  plVar6 = *(long **)(unaff_x23 + 0x938);
  do {
    lVar2 = *unaff_x21;
    uVar4 = (ulong)*(ushort *)(lVar2 + 0x12a);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *plVar6) {
          puVar1 = (undefined8 *)(lVar2 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_02fc5ba4;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_015c2a80();
LAB_02fc5ba4:
    uVar4 = (*(code *)*puVar1)();
    if ((uVar4 & 1) == 0) break;
    lVar2 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x60);
    if ((*(byte *)(lVar2 + 0x132) & 1) == 0) {
      lVar2 = FUN_015c2790(lVar2);
    }
    lVar3 = *unaff_x21;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12a);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == lVar2) {
          puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_02fc5c1c;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_015c2a80();
LAB_02fc5c1c:
    (*(code *)*puVar1)();
    (**(code **)(*(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x48) + 8))();
  } while( true );
  if (unaff_x21 != (long *)0x0) {
    lVar2 = *unaff_x21;
    uVar4 = (ulong)*(ushort *)(lVar2 + 0x12a);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x22) {
          puVar1 = (undefined8 *)(lVar2 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_02fc5ca0;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_015c2a80();
LAB_02fc5ca0:
    (*(code *)*puVar1)();
  }
  return;
}


