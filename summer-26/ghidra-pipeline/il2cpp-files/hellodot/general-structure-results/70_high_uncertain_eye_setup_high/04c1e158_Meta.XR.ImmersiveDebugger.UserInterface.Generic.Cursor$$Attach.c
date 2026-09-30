/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Cursor$$Attach
ENTRY_POINT: 04c1e158
PROGRAM: hellodot-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_11;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x04c1e3dc) */
/* WARNING: Removing unreachable block (ram,0x04c1e3cc) */

void Meta_XR_ImmersiveDebugger_UserInterface_Generic_Cursor__Attach
               (code *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long *plVar3;
  long *extraout_x1;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x23;
  long *unaff_x26;
  long *unaff_x27;
  long *unaff_x28;
  long *unaff_x29;
  
  do {
    uVar2 = (*param_1)(unaff_x23,param_3);
                    /* try { // try from 04c1e164 to 04d1e18b has its CatchHandler @ 04c1e384 */
    if (*(int *)(*unaff_x29 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    FUN_04c1a3b8(uVar2);
    if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    FUN_04c1d774();
LAB_04c1e0a8:
    lVar5 = *unaff_x23;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *unaff_x26) {
          puVar1 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_04c1e0f4;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar1 = (undefined8 *)FUN_02ce0a7c(unaff_x23,*unaff_x26,0);
LAB_04c1e0f4:
    uVar6 = (*(code *)*puVar1)(unaff_x23,puVar1[1]);
    if ((uVar6 & 1) == 0) {
                    /* try { // try from 04c1e1a4 to 04d1e203 has its CatchHandler @ 04c1e388 */
      plVar3 = (long *)thunk_FUN_02cea798(unaff_x23,*(undefined8 *)PTR_DAT_065c8a48);
      if (plVar3 != (long *)0x0) {
        lVar5 = *plVar3;
        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_065c8a48) {
              puVar1 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_04c1e20c;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar1 = (undefined8 *)FUN_02ce0a7c(plVar3,*(long *)PTR_DAT_065c8a48,0);
LAB_04c1e20c:
        (*(code *)*puVar1)(plVar3,puVar1[1]);
      }
      do {
        lVar5 = *unaff_x20;
        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *unaff_x26) {
              puVar1 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_04c1df98;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar1 = (undefined8 *)FUN_02ce0a7c();
LAB_04c1df98:
        uVar6 = (*(code *)*puVar1)();
        if ((uVar6 & 1) == 0) {
          if (unaff_x20 == (long *)0x0) {
            return;
          }
          lVar5 = *unaff_x20;
          uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar6 == 0) goto LAB_04c1e2e0;
          piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          goto LAB_04c1e2c8;
        }
        lVar5 = *unaff_x20;
        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *unaff_x27) {
              puVar1 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_04c1dff4;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar1 = (undefined8 *)FUN_02ce0a7c();
LAB_04c1dff4:
        (*(code *)*puVar1)();
        plVar3 = (long *)thunk_FUN_02cea798(extraout_x1,*unaff_x28);
        if (extraout_x1 == (long *)0x0) {
          plVar4 = (long *)0x0;
        }
        else {
          plVar4 = extraout_x1;
          if (*extraout_x1 != *(long *)PTR_DAT_065c8688) {
            plVar4 = (long *)0x0;
          }
        }
        if ((plVar3 != (long *)0x0) && (plVar4 == (long *)0x0)) goto code_r0x04c1e048;
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
    }
    lVar5 = *unaff_x23;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 == 0) {
LAB_04c1e134:
      puVar1 = (undefined8 *)FUN_02ce0a7c(unaff_x23,*unaff_x26,1);
    }
    else {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      while (*(long *)(piVar7 + -2) != *unaff_x26) {
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
        if (uVar6 == 0) goto LAB_04c1e134;
      }
      puVar1 = (undefined8 *)(lVar5 + (long)(*piVar7 + 1) * 0x10 + 0x138);
    }
    param_1 = (code *)*puVar1;
    param_3 = puVar1[1];
  } while( true );
code_r0x04c1e048:
  lVar5 = *plVar3;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *unaff_x28) {
        puVar1 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
        goto FUN_04c1e094;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar1 = (undefined8 *)FUN_02ce0a7c(plVar3,*unaff_x28,0);
FUN_04c1e094:
  unaff_x23 = (long *)(*(code *)*puVar1)(plVar3,puVar1[1]);
  if (unaff_x23 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  goto LAB_04c1e0a8;
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar7 = piVar7 + 4;
    if (uVar6 == 0) break;
LAB_04c1e2c8:
    if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_065c8a48) {
      puVar1 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_04c1e2fc;
    }
  }
LAB_04c1e2e0:
  puVar1 = (undefined8 *)FUN_02ce0a7c();
LAB_04c1e2fc:
  (*(code *)*puVar1)();
  return;
}


