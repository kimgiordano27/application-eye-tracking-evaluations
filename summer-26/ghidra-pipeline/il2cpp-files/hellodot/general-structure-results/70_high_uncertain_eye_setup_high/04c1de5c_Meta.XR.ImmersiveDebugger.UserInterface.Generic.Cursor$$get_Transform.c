/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Cursor$$get_Transform
ENTRY_POINT: 04c1de5c
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


/* WARNING: Removing unreachable block (ram,0x04c1e3cc) */
/* WARNING: Removing unreachable block (ram,0x04c1e3dc) */

long Meta_XR_ImmersiveDebugger_UserInterface_Generic_Cursor__get_Transform(void)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 *puVar7;
  long *plVar8;
  long *plVar9;
  undefined8 uVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  int *piVar15;
  long unaff_x19;
  long *unaff_x20;
  undefined8 *unaff_x21;
  undefined1 auVar16 [16];
  
  AkMIDIEventCallbackInfo__get_byProgramNum();
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c8d08);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065dc190);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065dc198);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e5990);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c8688);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065dcac8);
  *(undefined1 *)(unaff_x19 + 0x64e) = 1;
  lVar6 = thunk_FUN_02cea894(*unaff_x21);
  FUN_04c1d68c();
  if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  lVar12 = *unaff_x20;
  uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
  if (uVar14 != 0) {
    piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
    do {
      if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_065dc180) {
        puVar7 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
        goto LAB_04c1df18;
      }
      uVar14 = uVar14 - 1;
      piVar15 = piVar15 + 4;
    } while (uVar14 != 0);
  }
  puVar7 = (undefined8 *)FUN_02ce0a7c();
LAB_04c1df18:
  plVar8 = (long *)(*(code *)*puVar7)();
  puVar5 = PTR_DAT_065dcac8;
  puVar4 = PTR_DAT_065dc188;
  puVar3 = PTR_DAT_065c9a68;
  puVar2 = PTR_DAT_065c8d08;
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
LAB_04c1df4c:
  do {
    lVar12 = *plVar8;
    uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)puVar2) {
          puVar7 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_04c1df98;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar7 = (undefined8 *)FUN_02ce0a7c(plVar8,*(long *)puVar2,0);
LAB_04c1df98:
    uVar14 = (*(code *)*puVar7)(plVar8,puVar7[1]);
    if ((uVar14 & 1) == 0) {
      if (plVar8 == (long *)0x0) {
        return lVar6;
      }
      lVar12 = *plVar8;
      uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar14 == 0) goto LAB_04c1e2e0;
      piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      goto LAB_04c1e2c8;
    }
    lVar12 = *plVar8;
    uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)puVar4) {
          puVar7 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_04c1dff4;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar7 = (undefined8 *)FUN_02ce0a7c(plVar8,*(long *)puVar4,0);
LAB_04c1dff4:
    auVar16 = (*(code *)*puVar7)(plVar8,puVar7[1]);
    plVar11 = auVar16._8_8_;
    plVar9 = (long *)thunk_FUN_02cea798(plVar11,*(undefined8 *)puVar3);
    if (plVar11 == (long *)0x0) {
      plVar1 = (long *)0x0;
    }
    else {
      plVar1 = plVar11;
      if (*plVar11 != *(long *)PTR_DAT_065c8688) {
        plVar1 = (long *)0x0;
      }
    }
    if ((plVar9 != (long *)0x0) && (plVar1 == (long *)0x0)) {
      lVar13 = *plVar9;
      lVar12 = *(long *)puVar3;
      uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == lVar12) {
            puVar7 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
            goto FUN_04c1e094;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      puVar7 = (undefined8 *)FUN_02ce0a7c(plVar9,lVar12,0);
FUN_04c1e094:
      plVar9 = (long *)(*(code *)*puVar7)(plVar9,puVar7[1]);
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      do {
        lVar12 = *plVar9;
        uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar14 != 0) {
          piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == *(long *)puVar2) {
              puVar7 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
              goto LAB_04c1e0f4;
            }
            uVar14 = uVar14 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar14 != 0);
        }
        puVar7 = (undefined8 *)FUN_02ce0a7c(plVar9,*(long *)puVar2,0);
LAB_04c1e0f4:
        uVar14 = (*(code *)*puVar7)(plVar9,puVar7[1]);
        if ((uVar14 & 1) == 0) goto LAB_04c1e194;
        lVar12 = *plVar9;
        uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar14 != 0) {
          piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == *(long *)puVar2) {
              puVar7 = (undefined8 *)(lVar12 + (long)(*piVar15 + 1) * 0x10 + 0x138);
              goto LAB_04c1e154;
            }
            uVar14 = uVar14 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar14 != 0);
        }
        puVar7 = (undefined8 *)FUN_02ce0a7c(plVar9,*(long *)puVar2,1);
LAB_04c1e154:
        uVar10 = (*(code *)*puVar7)(plVar9,puVar7[1]);
        if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
          thunk_FUN_02cd038c();
        }
        uVar10 = FUN_04c1a3b8(uVar10);
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02ce7c7c();
        }
        FUN_04c1d774(lVar6,auVar16._0_8_,uVar10);
      } while( true );
    }
    if (plVar11 == (long *)0x0) {
      uVar10 = 0;
    }
    else {
      if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      uVar10 = FUN_04c1a3b8(plVar11);
    }
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    FUN_04c1d774(lVar6,auVar16._0_8_,uVar10);
  } while( true );
LAB_04c1e194:
  plVar9 = (long *)thunk_FUN_02cea798(plVar9,*(undefined8 *)PTR_DAT_065c8a48);
  if (plVar9 != (long *)0x0) {
    lVar12 = *plVar9;
    uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_065c8a48) {
          puVar7 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_04c1e20c;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar7 = (undefined8 *)FUN_02ce0a7c(plVar9,*(long *)PTR_DAT_065c8a48,0);
LAB_04c1e20c:
    (*(code *)*puVar7)(plVar9,puVar7[1]);
  }
  goto LAB_04c1df4c;
  while( true ) {
    uVar14 = uVar14 - 1;
    piVar15 = piVar15 + 4;
    if (uVar14 == 0) break;
LAB_04c1e2c8:
    if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_065c8a48) {
      puVar7 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
      goto LAB_04c1e2fc;
    }
  }
LAB_04c1e2e0:
  puVar7 = (undefined8 *)FUN_02ce0a7c(plVar8,*(long *)PTR_DAT_065c8a48,0);
LAB_04c1e2fc:
  (*(code *)*puVar7)(plVar8,puVar7[1]);
  return lVar6;
}


