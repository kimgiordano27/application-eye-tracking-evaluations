/*
FUNCTION_NAME: OVRManager$$OnApplicationQuit
ENTRY_POINT: 063720d0
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x06372370) */

void OVRManager__OnApplicationQuit(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  long in_x9;
  ulong uVar8;
  int *piVar9;
  long *unaff_x19;
  long *unaff_x20;
  
  puVar1 = PTR_DAT_07d896f8;
  plVar4 = (long *)(**(code **)(param_1 + in_x9 * 0x10 + 0x138))();
  puVar3 = PTR_DAT_07d9b068;
  puVar2 = PTR_DAT_07d89700;
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  do {
    lVar7 = *plVar4;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_06372150;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)FUN_0377596c(plVar4,*(long *)puVar2,0);
LAB_06372150:
    uVar8 = (*(code *)*puVar5)(plVar4,puVar5[1]);
    if ((uVar8 & 1) == 0) {
      if (plVar4 == (long *)0x0) goto LAB_06372254;
      lVar7 = *plVar4;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 == 0) goto LAB_0637222c;
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      break;
    }
    lVar7 = *plVar4;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar3) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_063721ac;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)FUN_0377596c(plVar4,*(long *)puVar3,0);
LAB_063721ac:
    lVar7 = (*(code *)*puVar5)(plVar4,puVar5[1]);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    *(undefined8 *)(lVar7 + 0x10) = 0;
    thunk_FUN_037aeb94((undefined8 *)(lVar7 + 0x10),0);
    *(undefined8 *)(lVar7 + 0x18) = 0;
    thunk_FUN_037aeb94((undefined8 *)(lVar7 + 0x18),0);
    *(undefined8 *)(lVar7 + 0x20) = 0;
    thunk_FUN_037aeb94((undefined8 *)(lVar7 + 0x20),0);
  } while( true );
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar9 = piVar9 + 4;
    if (uVar8 == 0) break;
    if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
      puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_06372248;
    }
  }
LAB_0637222c:
  puVar5 = (undefined8 *)FUN_0377596c(plVar4,*(long *)puVar1,0);
LAB_06372248:
  (*(code *)*puVar5)(plVar4,puVar5[1]);
LAB_06372254:
  lVar7 = *unaff_x20;
  uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_07db3528) {
        puVar5 = (undefined8 *)(lVar7 + (long)(*piVar9 + 3) * 0x10 + 0x138);
        goto LAB_063722b0;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar5 = (undefined8 *)FUN_0377596c();
LAB_063722b0:
  (*(code *)*puVar5)();
  if (unaff_x19[6] != 0) {
    uVar6 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07db5a18);
    FUN_06ae967c(uVar6,0,0xffffffff,0);
    (**(code **)(*unaff_x19 + 0x618))();
  }
  if (unaff_x19[8] != 0) {
    uVar6 = thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07db5a20);
    FUN_06b19a20(uVar6,4,0);
                    /* WARNING: Could not recover jumptable at 0x0637234c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*unaff_x19 + 0x628))();
    return;
  }
  return;
}


