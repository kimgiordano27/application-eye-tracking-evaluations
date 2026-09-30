/*
FUNCTION_NAME: OVRManager.InstantiateMrcCameraDelegate$$EndInvoke
ENTRY_POINT: 05126a9c
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x05126cf4) */
/* WARNING: Removing unreachable block (ram,0x05126e08) */

void OVRManager_InstantiateMrcCameraDelegate__EndInvoke(void)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  code *UNRECOVERED_JUMPTABLE;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long unaff_x19;
  long unaff_x20;
  
  if (*(char *)(unaff_x20 + 0xa0) == '\0') {
    return;
  }
  plVar4 = *(long **)(unaff_x19 + 0x10);
  if (plVar4 == (long *)0x0) goto LAB_05126e00;
  (**(code **)(*plVar4 + 0x5d8))
            (plVar4,*(undefined8 *)PTR_DAT_06780c20,*(undefined8 *)(*plVar4 + 0x5e0));
  if (*(char *)(unaff_x20 + 0xa0) == '\0') {
    plVar4 = *(long **)(unaff_x20 + 0x98);
    if (plVar4 != (long *)0x0) {
      lVar7 = *plVar4;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_06780ab8) {
            puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_05126d2c;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar5 = (undefined8 *)FUN_02d9a5d4(plVar4,*(long *)PTR_DAT_06780ab8,0);
LAB_05126d2c:
      iVar3 = (*(code *)*puVar5)(plVar4,puVar5[1]);
      if (0 < iVar3) {
        plVar4 = *(long **)(unaff_x20 + 0x98);
        if (plVar4 != (long *)0x0) {
          lVar7 = *plVar4;
          uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar8 != 0) {
            piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_06780ad8) {
                puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
                goto LAB_05126dd8;
              }
              uVar8 = uVar8 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar8 != 0);
          }
          puVar5 = (undefined8 *)FUN_02d9a5d4(plVar4,*(long *)PTR_DAT_06780ad8,0);
LAB_05126dd8:
          (*(code *)*puVar5)(plVar4,0,puVar5[1]);
          FUN_05126010();
          return;
        }
        goto LAB_05126e00;
      }
    }
    plVar4 = *(long **)(unaff_x19 + 0x10);
    if (plVar4 == (long *)0x0) goto LAB_05126e00;
    (**(code **)(*plVar4 + 0x578))(plVar4,*(undefined8 *)(*plVar4 + 0x580));
    plVar4 = *(long **)(unaff_x19 + 0x10);
    if (plVar4 == (long *)0x0) goto LAB_05126e00;
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar4 + 0x588);
    uVar6 = *(undefined8 *)(*plVar4 + 0x590);
    goto LAB_05126dbc;
  }
  plVar4 = *(long **)(unaff_x19 + 0x10);
  if (plVar4 == (long *)0x0) goto LAB_05126e00;
  (**(code **)(*plVar4 + 0x598))(plVar4,*(undefined8 *)(*plVar4 + 0x5a0));
  plVar4 = *(long **)(unaff_x20 + 0x98);
  if (plVar4 != (long *)0x0) {
    lVar7 = *plVar4;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_06780ac8) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_05126b94;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)FUN_02d9a5d4(plVar4,*(long *)PTR_DAT_06780ac8,0);
LAB_05126b94:
    plVar4 = (long *)(*(code *)*puVar5)(plVar4,puVar5[1]);
    puVar2 = PTR_DAT_06780ad0;
    puVar1 = PTR_DAT_0675f3d8;
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    do {
      lVar7 = *plVar4;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
            puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_05126c04;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar5 = (undefined8 *)FUN_02d9a5d4(plVar4,*(long *)puVar1,0);
LAB_05126c04:
      uVar8 = (*(code *)*puVar5)(plVar4,puVar5[1]);
      if ((uVar8 & 1) == 0) goto LAB_05126c7c;
      lVar7 = *plVar4;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
            puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
            goto OVRMicrogestureEventSource__set_Hand;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar5 = (undefined8 *)FUN_02d9a5d4(plVar4,*(long *)puVar2,0);
OVRMicrogestureEventSource__set_Hand:
      (*(code *)*puVar5)(plVar4,puVar5[1]);
      FUN_05126010();
    } while( true );
  }
  goto LAB_05126cf8;
LAB_05126c7c:
  if (plVar4 != (long *)0x0) {
    lVar7 = *plVar4;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_0675f3d0) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_05126cdc;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)FUN_02d9a5d4(plVar4,*(long *)PTR_DAT_0675f3d0,0);
LAB_05126cdc:
    (*(code *)*puVar5)(plVar4,puVar5[1]);
  }
LAB_05126cf8:
  plVar4 = *(long **)(unaff_x19 + 0x10);
  if (plVar4 == (long *)0x0) {
LAB_05126e00:
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  UNRECOVERED_JUMPTABLE = *(code **)(*plVar4 + 0x5a8);
  uVar6 = *(undefined8 *)(*plVar4 + 0x5b0);
LAB_05126dbc:
                    /* WARNING: Could not recover jumptable at 0x05126dc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(plVar4,uVar6);
  return;
}


