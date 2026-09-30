/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.InteractableController$$set_Hover
ENTRY_POINT: 07292e18
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_15;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_InteractableController__set_Hover(void)

{
  byte bVar1;
  undefined1 auVar2 [16];
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  int *piVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  int *unaff_x19;
  long unaff_x20;
  long lVar12;
  long *plVar13;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined4 in_stack_00000030;
  long *in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000068;
  
  FUN_04077588(PTR_DAT_092c20e8);
  FUN_04077588(PTR_DAT_092c20f0);
  FUN_04077588(PTR_DAT_092c20f8);
  *(undefined1 *)(unaff_x20 + 0x81d) = 1;
  puVar3 = PTR_DAT_092c20f0;
  iVar7 = *unaff_x19;
  lVar12 = *(long *)(unaff_x19 + 8);
  in_stack_00000050 = 0;
  in_stack_00000058 = 0;
  in_stack_00000068 = 0;
  in_stack_00000040 = 0;
  in_stack_00000048 = 0;
  in_stack_00000038 = (long *)0x0;
  in_stack_00000030 = 0;
  auVar2 = ZEXT816(0);
  if (1 < iVar7 - 1U) {
    if (iVar7 == 0) {
      _in_stack_00000050 = *(undefined1 (*) [16])(unaff_x19 + 0x10);
      iVar7 = -1;
      unaff_x19[0x10] = 0;
      unaff_x19[0x11] = 0;
      unaff_x19[0x12] = 0;
      unaff_x19[0x13] = 0;
      *unaff_x19 = -1;
    }
    else {
      if (iVar7 == 3) {
        piVar8 = unaff_x19 + 0x1e;
        plVar13 = *(long **)piVar8;
        if (plVar13 != (long *)0x0) {
          bVar1 = *(byte *)(*(long *)PTR_DAT_092c20c8 + 0x130);
          if ((*(byte *)(*plVar13 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar1 * 8 + -8) !=
              *(long *)PTR_DAT_092c20c8)) {
                    /* WARNING: Subroutine does not return */
            FUN_04077bb0(plVar13);
          }
        }
        piVar8[0] = 0;
        piVar8[1] = 0;
        in_stack_00000038 = plVar13;
        thunk_FUN_040ec700(piVar8,0);
        *unaff_x19 = -1;
        if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        goto LAB_07293214;
      }
      unaff_x19[10] = 0x3ee;
      lVar9 = thunk_FUN_040b4efc(*(undefined8 *)puVar3);
      FUN_076bca34(lVar9,0);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      _in_stack_00000050 = FUN_07290678();
      uVar10 = FUN_0759254c(&stack0x00000050,0);
      if ((uVar10 & 1) == 0) {
        *unaff_x19 = 0;
        *(undefined1 (*) [16])(unaff_x19 + 0x10) = _in_stack_00000050;
        thunk_FUN_040ec700(unaff_x19 + 0x10,0);
        if (*(int *)(*(long *)PTR_DAT_09285a68 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
        }
        FUN_04e57254(unaff_x19 + 2,&stack0x00000050);
        return;
      }
    }
    FUN_07592564(&stack0x00000050,0);
    uVar11 = FUN_04077674(*(undefined8 *)PTR_DAT_09285880,0x2000);
    in_stack_00000008 = 0;
    in_stack_00000010 = 0;
    FUN_0713df88(&stack0x00000008,uVar11,*(undefined8 *)PTR_DAT_092c2050);
    *(undefined8 *)(unaff_x19 + 0xe) = in_stack_00000010;
    *(undefined8 *)(unaff_x19 + 0xc) = in_stack_00000008;
    thunk_FUN_040ec700(unaff_x19 + 0xc,0);
    piVar8 = unaff_x19 + 0x14;
    piVar8[0] = 0;
    piVar8[1] = 0;
    thunk_FUN_040ec700(piVar8,0);
    unaff_x19[0x16] = 0;
    auVar2 = _in_stack_00000050;
  }
  puVar6 = PTR_DAT_092c20e8;
  puVar5 = PTR_DAT_092c20e0;
  puVar4 = PTR_DAT_092c20d8;
  puVar3 = PTR_DAT_0929cde0;
  if (iVar7 == 1) {
    in_stack_00000068 = *(undefined8 *)(unaff_x19 + 0x1a);
    unaff_x19[0x1a] = 0;
    unaff_x19[0x1b] = 0;
    *unaff_x19 = -1;
    goto LAB_0729312c;
  }
  _in_stack_00000050 = auVar2;
  if (iVar7 == 2) {
    in_stack_00000048 = *(undefined8 *)(unaff_x19 + 0x1c);
    unaff_x19[0x1c] = 0;
    unaff_x19[0x1d] = 0;
    *unaff_x19 = -1;
  }
  else {
    while( true ) {
      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      plVar13 = *(long **)(lVar12 + 0x40);
      if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      iVar7 = (**(code **)(*plVar13 + 0x188))(plVar13,*(undefined8 *)(*plVar13 + 400));
      if (iVar7 != 2) goto LAB_072931d8;
      piVar8 = unaff_x19 + 0x18;
      piVar8[0] = 0;
      piVar8[1] = 0;
      thunk_FUN_040ec700(piVar8,0);
      do {
        plVar13 = *(long **)(lVar12 + 0x40);
        if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        lVar9 = (**(code **)(*plVar13 + 0x1d8))
                          (plVar13,*(undefined8 *)(unaff_x19 + 0xc),*(undefined8 *)(unaff_x19 + 0xe)
                           ,*(undefined8 *)(lVar12 + 0x30),*(undefined8 *)(*plVar13 + 0x1e0));
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        in_stack_00000068 = FUN_06649f2c(lVar9,*(undefined8 *)puVar6);
        uVar10 = FUN_065f12f0(&stack0x00000068,*(undefined8 *)puVar5);
        auVar2 = _in_stack_00000050;
        if ((uVar10 & 1) == 0) {
          *unaff_x19 = 1;
          *(undefined8 *)(unaff_x19 + 0x1a) = in_stack_00000068;
          thunk_FUN_040ec700(unaff_x19 + 0x1a,0);
          if (*(int *)(*(long *)PTR_DAT_09285a68 + 0xe4) == 0) {
            thunk_FUN_040d65a8();
          }
          FUN_04e461c4(unaff_x19 + 2,&stack0x00000068);
          return;
        }
LAB_0729312c:
        _in_stack_00000050 = auVar2;
        lVar9 = FUN_065f1330(&stack0x00000068,*(undefined8 *)puVar4);
        plVar13 = (long *)(unaff_x19 + 0x18);
        *plVar13 = lVar9;
        thunk_FUN_040ec700(plVar13);
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        lVar9 = *(long *)(lVar12 + 0x78);
        if (lVar9 != 0) {
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            thunk_FUN_040d65a8();
          }
          if (*plVar13 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          (**(code **)(lVar9 + 0x18))
                    (*(undefined8 *)(lVar9 + 0x40),*(undefined8 *)(unaff_x19 + 0xc),unaff_x19[0xe],
                     *(undefined4 *)(*plVar13 + 0x10),*(undefined8 *)(lVar9 + 0x28));
        }
        lVar9 = *plVar13;
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
      } while (*(char *)(lVar9 + 0x14) == '\0');
      if (*(int *)(lVar9 + 0x18) == 2) break;
      *plVar13 = 0;
      thunk_FUN_040ec700(plVar13,0);
    }
    lVar9 = FUN_07291c48(lVar12);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    in_stack_00000048 = FUN_076f1ee4(lVar9,0);
    uVar10 = FUN_07591eb4(&stack0x00000048,0);
    if ((uVar10 & 1) == 0) {
      *unaff_x19 = 2;
      *(undefined8 *)(unaff_x19 + 0x1c) = in_stack_00000048;
      thunk_FUN_040ec700(unaff_x19 + 0x1c,0);
      if (*(int *)(*(long *)PTR_DAT_09285a68 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      FUN_04e53548(unaff_x19 + 2,&stack0x00000048);
      return;
    }
  }
  FUN_07591f7c(&stack0x00000048,0);
  if (*(long *)(unaff_x19 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  in_stack_00000040 = *(undefined8 *)(*(long *)(unaff_x19 + 0x18) + 0x1c);
  FUN_06015900(&stack0x00000040,*(undefined8 *)PTR_DAT_092c20d0);
  iVar7 = FUN_07290360();
  unaff_x19[10] = iVar7;
LAB_072931d8:
  lVar9 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092c20f8);
  FUN_089c8688(lVar9,0);
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  in_stack_00000038 = (long *)FUN_072936cc(lVar9);
  if (in_stack_00000038 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  if ((char)in_stack_00000038[3] == '\0') {
    *unaff_x19 = 3;
    *(long **)(unaff_x19 + 0x1e) = in_stack_00000038;
    thunk_FUN_040ec700();
    if (*(int *)(*(long *)PTR_DAT_09285a68 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    FUN_04e3c074(unaff_x19 + 2,&stack0x00000038);
    return;
  }
LAB_07293214:
  if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  lVar12 = *(long *)(lVar12 + 0x88);
  if (lVar12 != 0) {
    (**(code **)(lVar12 + 0x18))
              (*(undefined8 *)(lVar12 + 0x40),unaff_x19[10],*(undefined8 *)(lVar12 + 0x28));
  }
  piVar8 = unaff_x19 + 0x14;
  plVar13 = *(long **)piVar8;
  if (plVar13 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)PTR_DAT_09285a20 + 0x130);
    if ((*(byte *)(*plVar13 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_09285a20))
    {
      uVar11 = thunk_FUN_040dedf8(PTR_DAT_092c2100);
                    /* WARNING: Subroutine does not return */
      FUN_040776f4(plVar13,uVar11);
    }
    lVar12 = FUN_0758fe20(plVar13,0);
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    FUN_0758fee0(lVar12,0);
  }
  piVar8[0] = 0;
  piVar8[1] = 0;
  thunk_FUN_040ec700(piVar8,0);
  puVar3 = PTR_DAT_09285a68;
  unaff_x19[0xc] = 0;
  unaff_x19[0xd] = 0;
  unaff_x19[0xe] = 0;
  unaff_x19[0xf] = 0;
  *unaff_x19 = -2;
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  FUN_0759053c(unaff_x19 + 2,0);
  return;
}


