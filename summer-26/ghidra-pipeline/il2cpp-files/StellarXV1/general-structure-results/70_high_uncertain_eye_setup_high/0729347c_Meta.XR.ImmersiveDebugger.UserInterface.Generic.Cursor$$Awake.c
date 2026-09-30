/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Cursor$$Awake
ENTRY_POINT: 0729347c
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_7;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_Cursor__Awake(undefined8 param_1,int param_2)

{
  byte bVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined4 *unaff_x19;
  long unaff_x20;
  long *plVar8;
  int iVar9;
  int in_stack_00000030;
  long in_stack_00000038;
  
  if (param_2 == 1) {
    puVar4 = (undefined8 *)__cxa_begin_catch(param_1);
    uVar5 = thunk_FUN_040dedf8(PTR_DAT_09285a20);
    uVar6 = thunk_FUN_040daa88(uVar5,*(undefined8 *)*puVar4);
    iVar9 = in_stack_00000030;
    if ((uVar6 & 1) == 0) {
      puVar7 = (undefined8 *)__cxa_allocate_exception(8);
      *puVar7 = *puVar4;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar7,&PTR_PTR_08d635d8,0);
    }
    *(undefined8 *)(&stack0x00000018 + (long)in_stack_00000030 * 8) = *puVar4;
    in_stack_00000030 = in_stack_00000030 + 1;
    __cxa_end_catch();
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    if (*(long *)(unaff_x20 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    FUN_076e11d4(*(long *)(unaff_x20 + 0x48),0);
  }
  else {
    if (param_2 != 1) {
      if (param_2 != 1) {
                    /* WARNING: Subroutine does not return */
        FUN_041676cc(param_1);
      }
      puVar4 = (undefined8 *)__cxa_begin_catch(param_1);
      uVar5 = thunk_FUN_040dedf8(PTR_DAT_09285a20);
      uVar6 = thunk_FUN_040daa88(uVar5,*(undefined8 *)*puVar4);
      if ((uVar6 & 1) != 0) {
        uVar5 = *puVar4;
        *(undefined8 *)(&stack0x00000018 + (long)in_stack_00000030 * 8) = uVar5;
        in_stack_00000030 = in_stack_00000030 + 1;
        __cxa_end_catch();
        *(undefined8 *)(unaff_x19 + 0xc) = 0;
        *(undefined8 *)(unaff_x19 + 0xe) = 0;
        *unaff_x19 = 0xfffffffe;
        lVar3 = thunk_FUN_040dedf8(PTR_DAT_09285a68);
        if (*(int *)(lVar3 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
        }
        FUN_07590860(unaff_x19 + 2,uVar5,0);
        return;
      }
      puVar7 = (undefined8 *)__cxa_allocate_exception(8);
      *puVar7 = *puVar4;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar7,&PTR_PTR_08d635d8,0);
    }
    puVar4 = (undefined8 *)__cxa_begin_catch(param_1);
    uVar6 = thunk_FUN_040daa88(*(undefined8 *)(PTR_DAT_09285980 + 0x10),*(undefined8 *)*puVar4);
    iVar9 = in_stack_00000030;
    if ((uVar6 & 1) == 0) {
      puVar7 = (undefined8 *)__cxa_allocate_exception(8);
      *puVar7 = *puVar4;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar7,&PTR_PTR_08d635d8,0);
    }
    uVar5 = *puVar4;
    *(undefined8 *)(&stack0x00000018 + (long)in_stack_00000030 * 8) = uVar5;
    in_stack_00000030 = in_stack_00000030 + 1;
    __cxa_end_catch();
    *(undefined8 *)(unaff_x19 + 0x14) = uVar5;
    thunk_FUN_040ec700(unaff_x19 + 0x14,uVar5);
  }
  in_stack_00000030 = iVar9;
  lVar3 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092c20f8);
  FUN_089c8688(lVar3,0);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  in_stack_00000038 = FUN_072936cc(lVar3);
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
      lVar3 = *(long *)(unaff_x20 + 0x88);
      if (lVar3 != 0) {
        (**(code **)(lVar3 + 0x18))
                  (*(undefined8 *)(lVar3 + 0x40),unaff_x19[10],*(undefined8 *)(lVar3 + 0x28));
      }
      puVar4 = (undefined8 *)(unaff_x19 + 0x14);
      plVar8 = (long *)*puVar4;
      if (plVar8 != (long *)0x0) {
        bVar1 = *(byte *)(*(long *)PTR_DAT_09285a20 + 0x130);
        if ((*(byte *)(*plVar8 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_09285a20
           )) {
          uVar5 = thunk_FUN_040dedf8(PTR_DAT_092c2100);
                    /* WARNING: Subroutine does not return */
          FUN_040776f4(plVar8,uVar5);
        }
        lVar3 = FUN_0758fe20(plVar8,0);
        if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        FUN_0758fee0(lVar3,0);
      }
      *puVar4 = 0;
      thunk_FUN_040ec700(puVar4,0);
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


