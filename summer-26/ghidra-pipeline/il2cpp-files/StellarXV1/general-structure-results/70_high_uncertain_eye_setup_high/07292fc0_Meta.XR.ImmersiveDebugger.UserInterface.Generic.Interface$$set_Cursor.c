/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Interface$$set_Cursor
ENTRY_POINT: 07292fc0
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_13;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_Interface__set_Cursor(void)

{
  byte bVar1;
  undefined *puVar2;
  bool in_ZR;
  undefined4 uVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined4 *unaff_x19;
  long unaff_x20;
  undefined8 *puVar8;
  long *plVar9;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  long *unaff_x25;
  long in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000068;
  
  if (in_ZR) {
    in_stack_00000048 = *(undefined8 *)(unaff_x19 + 0x1c);
    *(undefined8 *)(unaff_x19 + 0x1c) = 0;
    *unaff_x19 = 0xffffffff;
  }
  else {
    while( true ) {
      if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      plVar9 = *(long **)(unaff_x20 + 0x40);
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      iVar4 = (**(code **)(*plVar9 + 0x188))(plVar9,*(undefined8 *)(*plVar9 + 400));
      if (iVar4 != 2) goto LAB_072931d8;
      *(undefined8 *)(unaff_x19 + 0x18) = 0;
      thunk_FUN_040ec700(unaff_x19 + 0x18,0);
      do {
        plVar9 = *(long **)(unaff_x20 + 0x40);
        if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        lVar6 = (**(code **)(*plVar9 + 0x1d8))
                          (plVar9,*(undefined8 *)(unaff_x19 + 0xc),*(undefined8 *)(unaff_x19 + 0xe),
                           *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(*plVar9 + 0x1e0));
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        in_stack_00000068 = FUN_06649f2c(lVar6,*unaff_x22);
        uVar5 = FUN_065f12f0(&stack0x00000068,*unaff_x23);
        if ((uVar5 & 1) == 0) {
          *unaff_x19 = 1;
          *(undefined8 *)(unaff_x19 + 0x1a) = in_stack_00000068;
          thunk_FUN_040ec700(unaff_x19 + 0x1a,0);
          if (*(int *)(*(long *)PTR_DAT_09285a68 + 0xe4) == 0) {
            thunk_FUN_040d65a8();
          }
          FUN_04e461c4(unaff_x19 + 2,&stack0x00000068);
          return;
        }
        lVar6 = FUN_065f1330(&stack0x00000068,*unaff_x24);
        plVar9 = (long *)(unaff_x19 + 0x18);
        *plVar9 = lVar6;
        thunk_FUN_040ec700(plVar9);
        if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        lVar6 = *(long *)(unaff_x20 + 0x78);
        if (lVar6 != 0) {
          if (*(int *)(*unaff_x25 + 0xe4) == 0) {
            thunk_FUN_040d65a8();
          }
          if (*plVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          (**(code **)(lVar6 + 0x18))
                    (*(undefined8 *)(lVar6 + 0x40),*(undefined8 *)(unaff_x19 + 0xc),unaff_x19[0xe],
                     *(undefined4 *)(*plVar9 + 0x10),*(undefined8 *)(lVar6 + 0x28));
        }
        lVar6 = *plVar9;
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
      } while (*(char *)(lVar6 + 0x14) == '\0');
      if (*(int *)(lVar6 + 0x18) == 2) break;
      *plVar9 = 0;
      thunk_FUN_040ec700(plVar9,0);
    }
    lVar6 = FUN_07291c48();
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    in_stack_00000048 = FUN_076f1ee4(lVar6,0);
    uVar5 = FUN_07591eb4(&stack0x00000048,0);
    if ((uVar5 & 1) == 0) {
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
  uVar3 = FUN_07290360();
  unaff_x19[10] = uVar3;
LAB_072931d8:
  lVar6 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092c20f8);
  FUN_089c8688(lVar6,0);
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  in_stack_00000038 = FUN_072936cc(lVar6);
  if (in_stack_00000038 != 0) {
    if (*(char *)(in_stack_00000038 + 0x18) == '\0') {
      *unaff_x19 = 3;
      *(long *)(unaff_x19 + 0x1e) = in_stack_00000038;
      thunk_FUN_040ec700();
      if (*(int *)(*(long *)PTR_DAT_09285a68 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      FUN_04e3c074(unaff_x19 + 2,&stack0x00000038);
    }
    else {
      if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      lVar6 = *(long *)(unaff_x20 + 0x88);
      if (lVar6 != 0) {
        (**(code **)(lVar6 + 0x18))
                  (*(undefined8 *)(lVar6 + 0x40),unaff_x19[10],*(undefined8 *)(lVar6 + 0x28));
      }
      puVar8 = (undefined8 *)(unaff_x19 + 0x14);
      plVar9 = (long *)*puVar8;
      if (plVar9 != (long *)0x0) {
        bVar1 = *(byte *)(*(long *)PTR_DAT_09285a20 + 0x130);
        if ((*(byte *)(*plVar9 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_09285a20
           )) {
          uVar7 = thunk_FUN_040dedf8(PTR_DAT_092c2100);
                    /* WARNING: Subroutine does not return */
          FUN_040776f4(plVar9,uVar7);
        }
        lVar6 = FUN_0758fe20(plVar9,0);
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        FUN_0758fee0(lVar6,0);
      }
      *puVar8 = 0;
      thunk_FUN_040ec700(puVar8,0);
      puVar2 = PTR_DAT_09285a68;
      *(undefined8 *)(unaff_x19 + 0xc) = 0;
      *(undefined8 *)(unaff_x19 + 0xe) = 0;
      *unaff_x19 = 0xfffffffe;
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      FUN_0759053c(unaff_x19 + 2,0);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


