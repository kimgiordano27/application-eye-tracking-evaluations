/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Cursor$$SetCursorStartDest
ENTRY_POINT: 04c1dff8
PROGRAM: hellodot-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_9;ui_or_gameplay_sink_hits_4;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x04c1e3dc) */
/* WARNING: Removing unreachable block (ram,0x04c1e3cc) */

void Meta_XR_ImmersiveDebugger_UserInterface_Generic_Cursor__SetCursorStartDest(code *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 uVar3;
  long *extraout_x1;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  int *piVar7;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x26;
  long *unaff_x27;
  long *unaff_x28;
  long *unaff_x29;
  
code_r0x04c1dff8:
  (*param_1)();
  plVar2 = (long *)thunk_FUN_02cea798(extraout_x1,*unaff_x28);
  if (extraout_x1 == (long *)0x0) {
    plVar5 = (long *)0x0;
  }
  else {
    plVar5 = extraout_x1;
    if (*extraout_x1 != *(long *)PTR_DAT_065c8688) {
      plVar5 = (long *)0x0;
    }
  }
  if ((plVar2 != (long *)0x0) && (plVar5 == (long *)0x0)) {
    lVar4 = *plVar2;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *unaff_x28) {
          puVar1 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
          goto FUN_04c1e094;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar1 = (undefined8 *)FUN_02ce0a7c(plVar2,*unaff_x28,0);
FUN_04c1e094:
    plVar2 = (long *)(*(code *)*puVar1)(plVar2,puVar1[1]);
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    do {
      lVar4 = *plVar2;
      uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *unaff_x26) {
            puVar1 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_04c1e0f4;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar1 = (undefined8 *)FUN_02ce0a7c(plVar2,*unaff_x26,0);
LAB_04c1e0f4:
      uVar6 = (*(code *)*puVar1)(plVar2,puVar1[1]);
      if ((uVar6 & 1) == 0) goto LAB_04c1e194;
      lVar4 = *plVar2;
      uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *unaff_x26) {
            puVar1 = (undefined8 *)(lVar4 + (long)(*piVar7 + 1) * 0x10 + 0x138);
            goto LAB_04c1e154;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar1 = (undefined8 *)FUN_02ce0a7c(plVar2,*unaff_x26,1);
LAB_04c1e154:
      uVar3 = (*(code *)*puVar1)(plVar2,puVar1[1]);
      if (*(int *)(*unaff_x29 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      FUN_04c1a3b8(uVar3);
      if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      FUN_04c1d774();
    } while( true );
  }
  if (extraout_x1 != (long *)0x0) {
    if (*(int *)(*unaff_x29 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    FUN_04c1a3b8(extraout_x1);
  }
  if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  FUN_04c1d774();
  goto LAB_04c1df4c;
LAB_04c1e194:
  plVar2 = (long *)thunk_FUN_02cea798(plVar2,*(undefined8 *)PTR_DAT_065c8a48);
  if (plVar2 != (long *)0x0) {
    lVar4 = *plVar2;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_065c8a48) {
          puVar1 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_04c1e20c;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar1 = (undefined8 *)FUN_02ce0a7c(plVar2,*(long *)PTR_DAT_065c8a48,0);
LAB_04c1e20c:
    (*(code *)*puVar1)(plVar2,puVar1[1]);
  }
LAB_04c1df4c:
  lVar4 = *unaff_x20;
  uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *unaff_x26) {
        puVar1 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
        goto LAB_04c1df98;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar1 = (undefined8 *)FUN_02ce0a7c();
LAB_04c1df98:
  uVar6 = (*(code *)*puVar1)();
  if ((uVar6 & 1) == 0) goto Meta_XR_ImmersiveDebugger_UserInterface_Generic_OverlayCanvas__Start;
  lVar4 = *unaff_x20;
  uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *unaff_x27) {
        puVar1 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
        goto LAB_04c1dff4;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar1 = (undefined8 *)FUN_02ce0a7c();
LAB_04c1dff4:
  param_1 = (code *)*puVar1;
  goto code_r0x04c1dff8;
Meta_XR_ImmersiveDebugger_UserInterface_Generic_OverlayCanvas__Start:
  if (unaff_x20 != (long *)0x0) {
    lVar4 = *unaff_x20;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_065c8a48) {
          puVar1 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_04c1e2fc;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar1 = (undefined8 *)FUN_02ce0a7c();
LAB_04c1e2fc:
    (*(code *)*puVar1)();
  }
  return;
}


