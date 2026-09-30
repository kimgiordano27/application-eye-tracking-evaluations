/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Cursor$$LateUpdate
ENTRY_POINT: 04c1e084
PROGRAM: hellodot-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_10;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x04c1e3dc) */
/* WARNING: Removing unreachable block (ram,0x04c1e3cc) */

void Meta_XR_ImmersiveDebugger_UserInterface_Generic_Cursor__LateUpdate(undefined8 *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long *extraout_x1;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x23;
  long *unaff_x26;
  long *unaff_x27;
  long *unaff_x28;
  long *unaff_x29;
  
FUN_04c1e094:
  plVar1 = (long *)(*(code *)*param_1)(unaff_x23,param_1[1]);
  if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  do {
    lVar4 = *plVar1;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x26) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_04c1e0f4;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_02ce0a7c(plVar1,*unaff_x26,0);
LAB_04c1e0f4:
    uVar5 = (*(code *)*puVar2)(plVar1,puVar2[1]);
    if ((uVar5 & 1) == 0) break;
    lVar4 = *plVar1;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x26) {
          puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 1) * 0x10 + 0x138);
          goto LAB_04c1e154;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_02ce0a7c(plVar1,*unaff_x26,1);
LAB_04c1e154:
    uVar3 = (*(code *)*puVar2)(plVar1,puVar2[1]);
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
  plVar1 = (long *)thunk_FUN_02cea798(plVar1,*(undefined8 *)PTR_DAT_065c8a48);
  if (plVar1 != (long *)0x0) {
    lVar4 = *plVar1;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_065c8a48) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_04c1e20c;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_02ce0a7c(plVar1,*(long *)PTR_DAT_065c8a48,0);
LAB_04c1e20c:
    (*(code *)*puVar2)(plVar1,puVar2[1]);
  }
  do {
    lVar4 = *unaff_x20;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x26) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_04c1df98;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_02ce0a7c();
LAB_04c1df98:
    uVar5 = (*(code *)*puVar2)();
    if ((uVar5 & 1) == 0) {
      if (unaff_x20 == (long *)0x0) {
        return;
      }
      lVar4 = *unaff_x20;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 == 0) goto LAB_04c1e2e0;
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      goto LAB_04c1e2c8;
    }
    lVar4 = *unaff_x20;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x27) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_04c1dff4;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_02ce0a7c();
LAB_04c1dff4:
    (*(code *)*puVar2)();
    unaff_x23 = (long *)thunk_FUN_02cea798(extraout_x1,*unaff_x28);
    if (extraout_x1 == (long *)0x0) {
      plVar1 = (long *)0x0;
    }
    else {
      plVar1 = extraout_x1;
      if (*extraout_x1 != *(long *)PTR_DAT_065c8688) {
        plVar1 = (long *)0x0;
      }
    }
    if ((unaff_x23 != (long *)0x0) && (plVar1 == (long *)0x0)) break;
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
  } while( true );
  lVar4 = *unaff_x23;
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == *unaff_x28) {
        param_1 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
        goto FUN_04c1e094;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  param_1 = (undefined8 *)FUN_02ce0a7c(unaff_x23,*unaff_x28,0);
  goto FUN_04c1e094;
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar6 = piVar6 + 4;
    if (uVar5 == 0) break;
LAB_04c1e2c8:
    if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_065c8a48) {
      puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
      goto LAB_04c1e2fc;
    }
  }
LAB_04c1e2e0:
  puVar2 = (undefined8 *)FUN_02ce0a7c();
LAB_04c1e2fc:
  (*(code *)*puVar2)();
  return;
}


