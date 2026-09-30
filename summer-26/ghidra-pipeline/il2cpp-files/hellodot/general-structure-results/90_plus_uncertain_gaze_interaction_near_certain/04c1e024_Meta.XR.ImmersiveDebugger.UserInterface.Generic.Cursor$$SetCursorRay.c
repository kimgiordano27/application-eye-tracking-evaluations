/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Cursor$$SetCursorRay
ENTRY_POINT: 04c1e024
PROGRAM: hellodot-libil2cpp.so
SCORE: 148
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_4;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x04c1e3cc) */
/* WARNING: Removing unreachable block (ram,0x04c1e3dc) */

void Meta_XR_ImmersiveDebugger_UserInterface_Generic_Cursor__SetCursorRay(long *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 uVar3;
  long *extraout_x1;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x22;
  long *unaff_x23;
  long *unaff_x26;
  long *unaff_x27;
  long *unaff_x28;
  long *unaff_x29;
  
code_r0x04c1e024:
  plVar2 = unaff_x22;
  if (*unaff_x22 != *param_1) {
    plVar2 = (long *)0x0;
  }
joined_r0x04c1e034:
  if ((unaff_x23 != (long *)0x0) && (plVar2 == (long *)0x0)) {
    lVar4 = *unaff_x23;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x28) {
          puVar1 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto FUN_04c1e094;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar1 = (undefined8 *)FUN_02ce0a7c(unaff_x23,*unaff_x28,0);
FUN_04c1e094:
    plVar2 = (long *)(*(code *)*puVar1)(unaff_x23,puVar1[1]);
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    do {
      lVar4 = *plVar2;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *unaff_x26) {
            puVar1 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_04c1e0f4;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar1 = (undefined8 *)FUN_02ce0a7c(plVar2,*unaff_x26,0);
LAB_04c1e0f4:
      uVar5 = (*(code *)*puVar1)(plVar2,puVar1[1]);
      if ((uVar5 & 1) == 0) goto LAB_04c1e194;
      lVar4 = *plVar2;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *unaff_x26) {
            puVar1 = (undefined8 *)(lVar4 + (long)(*piVar6 + 1) * 0x10 + 0x138);
            goto LAB_04c1e154;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
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
  if (unaff_x22 != (long *)0x0) {
    if (*(int *)(*unaff_x29 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    FUN_04c1a3b8(unaff_x22);
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
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_065c8a48) {
          puVar1 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_04c1e20c;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar1 = (undefined8 *)FUN_02ce0a7c(plVar2,*(long *)PTR_DAT_065c8a48,0);
LAB_04c1e20c:
    (*(code *)*puVar1)(plVar2,puVar1[1]);
  }
LAB_04c1df4c:
  lVar4 = *unaff_x20;
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == *unaff_x26) {
        puVar1 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
        goto LAB_04c1df98;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar1 = (undefined8 *)FUN_02ce0a7c();
LAB_04c1df98:
  uVar5 = (*(code *)*puVar1)();
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
        puVar1 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
        goto LAB_04c1dff4;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar1 = (undefined8 *)FUN_02ce0a7c();
LAB_04c1dff4:
  (*(code *)*puVar1)();
  unaff_x23 = (long *)thunk_FUN_02cea798(extraout_x1,*unaff_x28);
  param_1 = (long *)PTR_DAT_065c8688;
  unaff_x22 = extraout_x1;
  if (extraout_x1 != (long *)0x0) goto code_r0x04c1e024;
  plVar2 = (long *)0x0;
  goto joined_r0x04c1e034;
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar6 = piVar6 + 4;
    if (uVar5 == 0) break;
LAB_04c1e2c8:
    if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_065c8a48) {
      puVar1 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
      goto LAB_04c1e2fc;
    }
  }
LAB_04c1e2e0:
  puVar1 = (undefined8 *)FUN_02ce0a7c();
LAB_04c1e2fc:
  (*(code *)*puVar1)();
  return;
}


