/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.ButtonWithIcon$$Setup
ENTRY_POINT: 04c0ec40
PROGRAM: hellodot-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_16;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_ButtonWithIcon__Setup(int *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long lVar11;
  long *plVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined1 auVar16 [16];
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  
  if ((DAT_06a6d5b9 & 1) == 0) {
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e52f8);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e5300);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e5308);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e52d8);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e5310);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e39a8);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e39b0);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e39c8);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e3968);
                    /* try { // try from 04c0ecc4 to 04d0ee7f has its CatchHandler @ 04c0ecc4
                       catch() { ... } // from try @ 04c0ecc4 with catch @ 04c0ecc4
                       catch() { ... } // from try @ 04c0ef04 with catch @ 04c0ecc4
                       catch() { ... } // from try @ 04c0f0f8 with catch @ 04c0ecc4
                       catch() { ... } // from try @ 04c0f190 with catch @ 04c0ecc4
                       catch() { ... } // from try @ 04c0f244 with catch @ 04c0ecc4
                       catch() { ... } // from try @ 04c0f254 with catch @ 04c0ecc4
                       catch() { ... } // from try @ 04c0f300 with catch @ 04c0ecc4
                       catch() { ... } // from try @ 04c0f3b8 with catch @ 04c0ecc4 */
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e5318);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065ce578);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e39e8);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e39f0);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065d75f8);
    AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e5320);
    DAT_06a6d5b9 = 1;
  }
  puVar3 = PTR_DAT_065e5310;
  puVar2 = PTR_DAT_065e52d8;
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  in_stack_00000018 = 0;
  lVar11 = *(long *)(param_1 + 8);
  if (*param_1 == 0) {
    _in_stack_00000020 = *(undefined1 (*) [16])(param_1 + 0xe);
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    *param_1 = -1;
LAB_04c0ee74:
    uVar6 = FUN_044a9014(&stack0x00000020,*(undefined8 *)PTR_DAT_065e39b0);
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    uVar9 = FUN_04c0eab4(lVar11,uVar6);
    puVar1 = PTR_DAT_065e3968;
    if ((uVar9 & 1) == 0) {
      lVar5 = thunk_FUN_02cea894(*(undefined8 *)puVar3);
      FUN_04f7383c(lVar5,0);
      uVar14 = *(undefined8 *)(lVar11 + 0x10);
      uVar15 = *(undefined8 *)(param_1 + 10);
      uVar13 = thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065e39f0);
      FUN_04c0c670(uVar13,uVar14,uVar15,uVar6,0);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      *(undefined8 *)(lVar5 + 0x10) = uVar13;
      goto LAB_04c0ef40;
    }
    plVar12 = *(long **)(lVar11 + 0x10);
    if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    lVar5 = *plVar12;
    uVar6 = *(undefined8 *)(lVar11 + 0x18);
    uVar9 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_065e3968) {
          puVar7 = (undefined8 *)(lVar5 + (long)(*piVar10 + 5) * 0x10 + 0x138);
          goto FUN_04c0efd4;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar7 = (undefined8 *)FUN_02ce0a7c(plVar12,*(long *)PTR_DAT_065e3968,5);
FUN_04c0efd4:
    uVar6 = (*(code *)*puVar7)(plVar12,uVar6,puVar7[1]);
    *(undefined8 *)(param_1 + 0x12) = uVar6;
    *(undefined8 *)(param_1 + 0x14) = *(undefined8 *)(lVar11 + 0x20);
    plVar12 = *(long **)(lVar11 + 0x10);
    if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    lVar8 = *plVar12;
    lVar5 = *(long *)puVar1;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == lVar5) {
          puVar7 = (undefined8 *)(lVar8 + (long)(*piVar10 + 2) * 0x10 + 0x138);
          goto LAB_04c0f048;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar7 = (undefined8 *)FUN_02ce0a7c(plVar12,lVar5,2);
LAB_04c0f048:
    lVar5 = (*(code *)*puVar7)(plVar12,puVar7[1]);
    if (lVar5 != 0) {
      uVar6 = FUN_04dc07bc(0,0x39,8,0);
      plVar12 = (long *)thunk_FUN_02cea894(*(undefined8 *)PTR_DAT_065ce578);
      FUN_04f418d8(plVar12,0);
      uVar9 = FUN_04f2e990(uVar6,0);
      if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c(uVar9,uVar9 & 0xffffffff);
      }
      uVar4 = (**(code **)(*plVar12 + 0x1a8))
                        (plVar12,uVar9 & 0xffffffff,*(undefined8 *)(*plVar12 + 0x1b0));
      in_stack_00000018 = CONCAT44(uVar4,8);
      uVar6 = FUN_04f2e660(&stack0x00000018,0);
      uVar6 = FUN_04db00f0(*(undefined8 *)PTR_DAT_065d75f8,uVar6,0);
      uVar6 = FUN_04f2e6f4((long)&stack0x00000018 + 4,uVar6,0);
      uVar6 = FUN_04db00f0(*(undefined8 *)(param_1 + 0x14),uVar6,0);
      *(undefined8 *)(param_1 + 0x14) = uVar6;
      plVar12 = *(long **)(lVar11 + 0x10);
      if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      lVar5 = *plVar12;
      lVar11 = *(long *)puVar1;
      uVar9 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == lVar11) {
            puVar7 = (undefined8 *)(lVar5 + (long)(*piVar10 + 2) * 0x10 + 0x138);
            goto LAB_04c0f158;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar7 = (undefined8 *)FUN_02ce0a7c(plVar12,lVar11,2);
LAB_04c0f158:
      plVar12 = (long *)(*(code *)*puVar7)(plVar12,puVar7[1]);
      uVar6 = FUN_04db00f0(*(undefined8 *)PTR_DAT_065e5320,*(undefined8 *)(param_1 + 10),0);
      if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      lVar11 = *plVar12;
      uVar13 = *(undefined8 *)(param_1 + 0x14);
      lVar5 = *(long *)PTR_DAT_065e5318;
      uVar9 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)(lVar5 + 0x20)) {
            lVar11 = lVar11 + (long)(int)(*piVar10 + (uint)*(ushort *)(lVar5 + 0x50)) * 0x10 + 0x138
            ;
            goto LAB_04c0f1e8;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      lVar11 = FUN_02ce0a7c(plVar12);
LAB_04c0f1e8:
      lVar11 = thunk_FUN_02d0bd98(*(undefined8 *)(lVar11 + 8),lVar5);
      lVar11 = (**(code **)(lVar11 + 8))(plVar12,uVar6,uVar13,lVar11);
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      auVar16 = FUN_04fa5130(lVar11,0,0);
      uVar9 = FUN_04e5bb90();
      if ((uVar9 & 1) == 0) {
        *param_1 = 1;
        *(undefined1 (*) [16])(param_1 + 0x16) = auVar16;
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_02cd038c();
        }
        FUN_030c14b8(param_1 + 2);
        return;
      }
      goto LAB_04c0ed50;
    }
  }
  else {
    if (*param_1 != 1) {
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      plVar12 = *(long **)(lVar11 + 0x10);
      if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      lVar5 = *plVar12;
      uVar6 = *(undefined8 *)(param_1 + 10);
      uVar13 = *(undefined8 *)(param_1 + 0xc);
      uVar9 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_065e3968) {
            puVar7 = (undefined8 *)(lVar5 + (long)(*piVar10 + 3) * 0x10 + 0x138);
            goto LAB_04c0ee28;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar7 = (undefined8 *)FUN_02ce0a7c(plVar12,*(long *)PTR_DAT_065e3968,3);
LAB_04c0ee28:
      lVar5 = (*(code *)*puVar7)(plVar12,uVar6,uVar13,puVar7[1]);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      _in_stack_00000020 = FUN_0404bcb8(lVar5,0,*(undefined8 *)PTR_DAT_065e39e8);
      uVar9 = FUN_044a8fc8(&stack0x00000020,*(undefined8 *)PTR_DAT_065e39c8);
      if ((uVar9 & 1) == 0) {
        *param_1 = 0;
        *(undefined1 (*) [16])(param_1 + 0xe) = _in_stack_00000020;
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_02cd038c();
        }
        FUN_030af7dc(param_1 + 2,&stack0x00000020,param_1,*(undefined8 *)PTR_DAT_065e52f8);
        return;
      }
      goto LAB_04c0ee74;
    }
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    param_1[0x18] = 0;
    param_1[0x19] = 0;
    *param_1 = -1;
    _in_stack_00000020 = ZEXT816(0);
LAB_04c0ed50:
    FUN_04e5bbac();
  }
  if (*(long *)(param_1 + 0x12) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  *(undefined8 *)(*(long *)(param_1 + 0x12) + 0x30) = *(undefined8 *)(param_1 + 0x14);
  lVar5 = thunk_FUN_02cea894(*(undefined8 *)puVar3);
  FUN_04f7383c(lVar5,0);
  if (*(long *)(param_1 + 0x12) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  lVar11 = FUN_04c11ddc(*(long *)(param_1 + 0x12),0);
  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  uVar6 = FUN_05685b20(lVar11,0);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  *(undefined8 *)(lVar5 + 0x18) = uVar6;
LAB_04c0ef40:
  *param_1 = -2;
  puVar3 = PTR_DAT_065e5308;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  FUN_04266690(param_1 + 2,lVar5,*(undefined8 *)puVar3);
  return;
}


