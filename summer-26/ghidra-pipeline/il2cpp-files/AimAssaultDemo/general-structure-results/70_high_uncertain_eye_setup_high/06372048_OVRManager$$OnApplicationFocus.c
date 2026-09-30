/*
FUNCTION_NAME: OVRManager$$OnApplicationFocus
ENTRY_POINT: 06372048
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x06372370) */

void OVRManager__OnApplicationFocus(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long *unaff_x19;
  long unaff_x20;
  
  FUN_0373b518();
  FUN_0373b518(PTR_DAT_07db5a20);
  *(undefined1 *)(unaff_x20 + 0x48f) = 1;
  FUN_0637078c();
  plVar4 = (long *)(**(code **)(*unaff_x19 + 0x5e8))();
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  lVar8 = *plVar4;
  uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_07db52e8) {
        puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
        goto LAB_063720d8;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar5 = (undefined8 *)FUN_0377596c(plVar4,*(long *)PTR_DAT_07db52e8,0);
LAB_063720d8:
  puVar1 = PTR_DAT_07d896f8;
  plVar6 = (long *)(*(code *)*puVar5)(plVar4,puVar5[1]);
  puVar3 = PTR_DAT_07d9b068;
  puVar2 = PTR_DAT_07d89700;
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  do {
    lVar8 = *plVar6;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
          puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_06372150;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)FUN_0377596c(plVar6,*(long *)puVar2,0);
LAB_06372150:
    uVar9 = (*(code *)*puVar5)(plVar6,puVar5[1]);
    if ((uVar9 & 1) == 0) {
      if (plVar6 == (long *)0x0) goto LAB_06372254;
      lVar8 = *plVar6;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 == 0) goto LAB_0637222c;
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      break;
    }
    lVar8 = *plVar6;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar3) {
          puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_063721ac;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)FUN_0377596c(plVar6,*(long *)puVar3,0);
LAB_063721ac:
    lVar8 = (*(code *)*puVar5)(plVar6,puVar5[1]);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    *(undefined8 *)(lVar8 + 0x10) = 0;
    thunk_FUN_037aeb94((undefined8 *)(lVar8 + 0x10),0);
    *(undefined8 *)(lVar8 + 0x18) = 0;
    thunk_FUN_037aeb94((undefined8 *)(lVar8 + 0x18),0);
    *(undefined8 *)(lVar8 + 0x20) = 0;
    thunk_FUN_037aeb94((undefined8 *)(lVar8 + 0x20),0);
  } while( true );
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar10 = piVar10 + 4;
    if (uVar9 == 0) break;
    if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
      puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_06372248;
    }
  }
LAB_0637222c:
  puVar5 = (undefined8 *)FUN_0377596c(plVar6,*(long *)puVar1,0);
LAB_06372248:
  (*(code *)*puVar5)(plVar6,puVar5[1]);
LAB_06372254:
  lVar8 = *plVar4;
  uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_07db3528) {
        puVar5 = (undefined8 *)(lVar8 + (long)(*piVar10 + 3) * 0x10 + 0x138);
        goto LAB_063722b0;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar5 = (undefined8 *)FUN_0377596c(plVar4,*(long *)PTR_DAT_07db3528,3);
LAB_063722b0:
  (*(code *)*puVar5)(plVar4,puVar5[1]);
  if (unaff_x19[6] != 0) {
    uVar7 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07db5a18);
    FUN_06ae967c(uVar7,0,0xffffffff,0);
    (**(code **)(*unaff_x19 + 0x618))();
  }
  if (unaff_x19[8] != 0) {
    uVar7 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07db5a20);
    FUN_06b19a20(uVar7,4,0);
                    /* WARNING: Could not recover jumptable at 0x0637234c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*unaff_x19 + 0x628))();
    return;
  }
  return;
}


