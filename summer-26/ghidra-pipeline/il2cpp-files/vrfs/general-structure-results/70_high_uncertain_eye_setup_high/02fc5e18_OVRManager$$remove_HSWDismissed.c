/*
FUNCTION_NAME: OVRManager$$remove_HSWDismissed
ENTRY_POINT: 02fc5e18
PROGRAM: vrfs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02fc60d4) */

void OVRManager__remove_HSWDismissed(long *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool in_ZR;
  undefined4 uVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long unaff_x19;
  undefined8 unaff_x20;
  long *unaff_x21;
  
  uVar1 = 0;
  if (!in_ZR) {
    uVar1 = unaff_x20;
  }
  if (param_1 == (long *)0x0) {
    uVar4 = 0;
  }
  else {
    lVar7 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x28);
    if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
      lVar7 = FUN_015c2790(lVar7);
    }
    lVar8 = *param_1;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12a);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == lVar7) {
          puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_02fc5e98;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)FUN_015c2a80(param_1,lVar7,0);
LAB_02fc5e98:
    uVar4 = (*(code *)*puVar5)(param_1,puVar5[1]);
    unaff_x20 = uVar1;
  }
  (**(code **)(**(long **)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 8))(unaff_x20,uVar4);
  if (unaff_x21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_031cb62c(6,0);
  }
  lVar7 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x50);
  if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
    lVar7 = FUN_015c2790(lVar7);
  }
  lVar8 = *unaff_x21;
  uVar9 = (ulong)*(ushort *)(lVar8 + 0x12a);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == lVar7) {
        puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
        goto LAB_02fc5f30;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar5 = (undefined8 *)FUN_015c2a80();
LAB_02fc5f30:
  puVar3 = PTR_DAT_06e636c0;
  plVar6 = (long *)(*(code *)*puVar5)();
  puVar2 = PTR_DAT_06ddc938;
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0160eeb4();
  }
  do {
    lVar7 = *plVar6;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12a);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_02fc5fa0;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)FUN_015c2a80(plVar6,*(long *)puVar2,0);
LAB_02fc5fa0:
    uVar9 = (*(code *)*puVar5)(plVar6,puVar5[1]);
    if ((uVar9 & 1) == 0) break;
    lVar7 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x60);
    if ((*(byte *)(lVar7 + 0x132) & 1) == 0) {
      lVar7 = FUN_015c2790(lVar7);
    }
    lVar8 = *plVar6;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12a);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == lVar7) {
          puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_02fc6018;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)FUN_015c2a80(plVar6,lVar7,0);
LAB_02fc6018:
    (*(code *)*puVar5)(plVar6,puVar5[1]);
    (**(code **)(*(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x48) + 8))();
  } while( true );
  if (plVar6 != (long *)0x0) {
    lVar7 = *plVar6;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12a);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar3) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_02fc609c;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)FUN_015c2a80(plVar6,*(long *)puVar3,0);
LAB_02fc609c:
    (*(code *)*puVar5)(plVar6,puVar5[1]);
  }
  return;
}


