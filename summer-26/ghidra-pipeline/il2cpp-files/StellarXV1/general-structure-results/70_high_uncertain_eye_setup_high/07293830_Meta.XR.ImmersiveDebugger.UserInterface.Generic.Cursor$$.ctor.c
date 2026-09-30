/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Cursor$$.ctor
ENTRY_POINT: 07293830
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x07293c9c) */
/* WARNING: Removing unreachable block (ram,0x07293cbc) */
/* WARNING: Removing unreachable block (ram,0x07293910) */
/* WARNING: Removing unreachable block (ram,0x07293a4c) */
/* WARNING: Removing unreachable block (ram,0x07293c88) */
/* WARNING: Removing unreachable block (ram,0x07293acc) */
/* WARNING: Removing unreachable block (ram,0x07293cd0) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void Meta_XR_ImmersiveDebugger_UserInterface_Generic_Cursor___ctor(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  uint uVar4;
  bool in_CY;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  undefined8 *puVar9;
  long in_x9;
  undefined4 *unaff_x19;
  long *unaff_x22;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  long lStack0000000000000050;
  undefined8 in_stack_00000058;
  
  if (in_CY) {
    lStack0000000000000050 = in_x9;
    if (*(int *)(*(long *)PTR_DAT_0929cde0 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    if (unaff_x19[0xb] == 0) goto LAB_07293c48;
    if (lStack0000000000000050 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    in_stack_00000048 = *(undefined8 *)(lStack0000000000000050 + 0x18);
    in_stack_00000040._4_1_ = '\0';
    FUN_076e7928(in_stack_00000048,(long)&stack0x00000040 + 4,0);
    if (lStack0000000000000050 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    cVar3 = *(char *)(lStack0000000000000050 + 0x28);
    if (cVar3 == '\0') {
      *(undefined1 *)(lStack0000000000000050 + 0x28) = 1;
    }
    if ((in_stack_00000058._4_4_ < 0) && (in_stack_00000040._4_1_ != '\0')) {
      thunk_FUN_0408541c(in_stack_00000048,0);
    }
    if (cVar3 != '\0') {
      if (lStack0000000000000050 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      in_stack_00000048 = *(undefined8 *)(lStack0000000000000050 + 0x18);
      in_stack_00000040._4_1_ = '\0';
      FUN_076e7928(in_stack_00000048,(long)&stack0x00000040 + 4,0);
      lVar5 = *(long *)(unaff_x19 + 0x10);
      if (lVar5 != 0) {
        lVar8 = *(long *)(lVar5 + 0x10);
        uVar1 = *(undefined8 *)(unaff_x19 + 8);
        uVar2 = *(undefined8 *)(unaff_x19 + 10);
        *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
        if (lVar8 != 0) {
          uVar4 = *(uint *)(lVar5 + 0x18);
          if (uVar4 < *(uint *)(lVar8 + 0x18)) {
            lVar8 = lVar8 + (long)(int)uVar4 * 0x10;
            *(uint *)(lVar5 + 0x18) = uVar4 + 1;
            puVar9 = (undefined8 *)(lVar8 + 0x20);
            *puVar9 = uVar1;
            *(undefined8 *)(lVar8 + 0x28) = uVar2;
            thunk_FUN_040ec700(puVar9,0);
          }
          else {
            FUN_05a2efcc();
          }
          if ((in_stack_00000058._4_4_ < 0) && (in_stack_00000040._4_1_ != '\0')) {
            thunk_FUN_0408541c(in_stack_00000048,0);
          }
          goto LAB_07293c48;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    if (lStack0000000000000050 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    uVar6 = NSubstitute_Routing_Handlers_RecordCallHandler___ctor
                      (*(undefined8 *)(lStack0000000000000050 + 0x40),1000,0);
    if ((uVar6 & 1) == 0) {
      if (lStack0000000000000050 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      plVar7 = *(long **)(lStack0000000000000050 + 0x40);
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      lVar5 = (**(code **)(*plVar7 + 0x1a8))
                        (plVar7,0x3f3,**(undefined8 **)(*(long *)(PTR_DAT_09285980 + 0x90) + 0xb8),
                         *(undefined8 *)(lStack0000000000000050 + 0x30),
                         *(undefined8 *)(*plVar7 + 0x1b0));
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      in_stack_00000038 = FUN_076f1ee4(lVar5,0);
      uVar6 = FUN_07591eb4(&stack0x00000038,0);
      if ((uVar6 & 1) == 0) {
        in_stack_00000058._4_4_ = 0;
        *unaff_x19 = 0;
        *(undefined8 *)(unaff_x19 + 0x12) = in_stack_00000038;
        thunk_FUN_040ec700(unaff_x19 + 0x12,0);
        if (*(int *)(*unaff_x22 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
        }
        FUN_04e535c4(unaff_x19 + 2,&stack0x00000038);
        return;
      }
    }
    else {
      if (lStack0000000000000050 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      plVar7 = *(long **)(lStack0000000000000050 + 0x40);
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      lVar5 = (**(code **)(*plVar7 + 0x1e8))
                        (plVar7,*(undefined8 *)(unaff_x19 + 8),*(undefined8 *)(unaff_x19 + 10),
                         unaff_x19[0xe],1,*(undefined8 *)(lStack0000000000000050 + 0x30),
                         *(undefined8 *)(*plVar7 + 0x1f0));
      if (lStack0000000000000050 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      FUN_076f8600(lVar5,*(undefined8 *)(lStack0000000000000050 + 0x30),0);
      if (in_stack_00000058._4_4_ < 0) {
        if (lStack0000000000000050 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        thunk_FUN_0408541c(*(undefined8 *)(lStack0000000000000050 + 0x40),0);
      }
      if (lStack0000000000000050 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      in_stack_00000048 = *(undefined8 *)(lStack0000000000000050 + 0x18);
      in_stack_00000040._4_1_ = '\0';
      FUN_076e7928(in_stack_00000048,(long)&stack0x00000040 + 4,0);
      if (lStack0000000000000050 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      *(undefined1 *)(lStack0000000000000050 + 0x28) = 0;
      if ((in_stack_00000058._4_4_ < 0) && (in_stack_00000040._4_1_ != '\0')) {
        thunk_FUN_0408541c(in_stack_00000048,0);
      }
      if (lStack0000000000000050 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      lVar5 = FUN_07291a6c(lStack0000000000000050,*(undefined8 *)(unaff_x19 + 0x10),unaff_x19[0xe]);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      in_stack_00000038 = FUN_076f1ee4(lVar5,0);
      uVar6 = FUN_07591eb4(&stack0x00000038,0);
      if ((uVar6 & 1) == 0) {
        in_stack_00000058._4_4_ = 1;
        *unaff_x19 = 1;
        *(undefined8 *)(unaff_x19 + 0x12) = in_stack_00000038;
        thunk_FUN_040ec700(unaff_x19 + 0x12,0);
        if (*(int *)(*unaff_x22 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
        }
        FUN_04e535c4(unaff_x19 + 2,&stack0x00000038);
        return;
      }
    }
  }
  else {
    in_stack_00000038 = *(undefined8 *)(unaff_x19 + 0x12);
    *(undefined8 *)(unaff_x19 + 0x12) = 0;
    in_stack_00000058._4_4_ = -1;
    *unaff_x19 = 0xffffffff;
  }
  FUN_07591f7c(&stack0x00000038,0);
LAB_07293c48:
  *unaff_x19 = 0xfffffffe;
  if (*(int *)(*unaff_x22 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  FUN_0759053c(unaff_x19 + 2,0);
  return;
}


