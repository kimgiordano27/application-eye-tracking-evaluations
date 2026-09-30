/*
FUNCTION_NAME: RootMotion.FinalIK.IKSolverFABRIK$$OnPreSolve
ENTRY_POINT: 0299c278
PROGRAM: vrlegs-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_8;weak_xr_or_state_hits_8;validity_or_gating_hits_18;functionality_eye_api_context_without_clear_sink_hits_8
*/


/* WARNING: Removing unreachable block (ram,0x0299c324) */

void RootMotion_FinalIK_IKSolverFABRIK__OnPreSolve(undefined8 param_1,int param_2)

{
  char cVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long *unaff_x19;
  undefined8 uVar5;
  long unaff_x20;
  long lVar6;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 in_stack_00000000;
  char cStack0000000000000008;
  char cStack000000000000000c;
  long in_stack_00000010;
  long in_stack_00000018;
  
  if (param_2 != 1) {
    if (in_stack_00000000._4_1_ != '\0') {
      OVRManager_<>c__<InitOVRManager>b__424_0();
    }
                    /* WARNING: Subroutine does not return */
    FUN_01b3fef0(param_1);
  }
  plVar4 = (long *)__cxa_begin_catch();
  lVar6 = *plVar4;
  __cxa_end_catch();
code_r0x0299c168:
  if (in_stack_00000000._4_1_ != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0(unaff_x20,0);
  }
  if (lVar6 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01a28d1c(lVar6);
  }
  FUN_027e2830(0,0);
  do {
    if (unaff_x19[0x22] == 0) {
LAB_0299bfd4:
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    uVar5 = *(undefined8 *)(unaff_x19[0x22] + 0x40);
    cStack000000000000000c = '\0';
    FUN_027e0bd8(uVar5,(long)&stack0x00000008 + 4,0);
    if (unaff_x19[0x22] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    cVar1 = *(char *)(unaff_x19[0x22] + 0x10);
    if (cStack000000000000000c != '\0') {
      OVRManager_<>c__<InitOVRManager>b__424_0(uVar5,0);
    }
    if (cVar1 != '\0') break;
    if ((unaff_x19[0x22] == 0) ||
       (plVar4 = *(long **)(unaff_x19[0x22] + 0x40), plVar4 == (long *)0x0)) goto LAB_0299bfd4;
    (**(code **)(*plVar4 + 0x1c8))(plVar4,*(undefined8 *)(*plVar4 + 0x1d0));
  } while( true );
  lVar6 = unaff_x19[0x21];
  cStack0000000000000008 = '\0';
  FUN_027e0bd8(lVar6,&stack0x00000008,0);
  while( true ) {
    if (unaff_x19[0x21] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    lVar2 = *(long *)(unaff_x19[0x21] + 0x10);
    if (lVar2 == 0) break;
    FUN_01ea4674(lVar2,&stack0x00000010,*unaff_x22);
    lVar2 = in_stack_00000010;
    if (in_stack_00000010 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    if (*(long *)(in_stack_00000010 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    lVar3 = FUN_02f0ce18(*(long *)(in_stack_00000010 + 0x10),0);
    if (lVar3 < *(int *)(lVar2 + 0x28)) break;
    if (*(long *)(lVar2 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    (**(code **)(*unaff_x19 + 0x238))();
    if (unaff_x19[0x21] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    FUN_02211b20(unaff_x19[0x21],*unaff_x23);
  }
  if (cStack0000000000000008 != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0(lVar6,0);
  }
  unaff_x20 = unaff_x19[0x20];
  in_stack_00000000._4_1_ = '\0';
  FUN_027e0bd8(unaff_x20,(long)&stack0x00000000 + 4,0);
  while( true ) {
    if (unaff_x19[0x20] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    lVar6 = *(long *)(unaff_x19[0x20] + 0x10);
    if (lVar6 == 0) break;
    FUN_01ea4674(lVar6,&stack0x00000018,*unaff_x22);
    lVar6 = in_stack_00000018;
    if (in_stack_00000018 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    if (*(long *)(in_stack_00000018 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    lVar2 = FUN_02f0ce18(*(long *)(in_stack_00000018 + 0x10),0);
    if (lVar2 < *(int *)(lVar6 + 0x28)) break;
    plVar4 = (long *)unaff_x19[5];
    if ((plVar4 != (long *)0x0) && (*(int *)((long)plVar4 + 0x1c) == 2)) {
      lVar6 = *(long *)(lVar6 + 0x20);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      (**(code **)(*plVar4 + 0x198))
                (plVar4,lVar6,*(undefined4 *)(lVar6 + 0x18),*(undefined8 *)(*plVar4 + 0x1a0));
    }
    if (unaff_x19[0x20] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    FUN_02211b20(unaff_x19[0x20],*unaff_x23);
  }
  lVar6 = 0;
  goto code_r0x0299c168;
}


