/*
FUNCTION_NAME: SharedDeoVR.Context.SessionWatcher.<UpdateSessionData>d__15$$SetStateMachine
ENTRY_POINT: 094d3b38
PROGRAM: Hyper-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;telemetry_or_network_hits_4;frame_or_lifecycle_behavior
*/


void SharedDeoVR_Context_SessionWatcher_<UpdateSessionData>d__15__SetStateMachine(void)

{
  undefined8 uVar1;
  long *plVar2;
  ulong uVar3;
  undefined4 *unaff_x19;
  long lVar4;
  long *unaff_x21;
  long unaff_x22;
  undefined8 in_stack_00000010;
  long in_stack_00000018;
  long in_stack_00000028;
  
  lVar4 = *(long *)(unaff_x22 + 0x18);
  uVar1 = FUN_08d78138(unaff_x22 + 0x10,0);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c(uVar1,uVar1);
  }
  FUN_08be0754(lVar4,uVar1,0);
  lVar4 = *(long *)(unaff_x22 + 0x18);
  uVar1 = FUN_08dc32c4(0);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c(uVar1,uVar1);
  }
  FUN_08be0754(lVar4,uVar1,0);
  if (*(long *)(unaff_x22 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  FUN_08be0754(*(long *)(unaff_x22 + 0x18),*(undefined8 *)PTR_DAT_0ac6c060,0);
  lVar4 = *(long *)(unaff_x22 + 0x18);
  uVar1 = FUN_08d78138(&stack0x00000028,0);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c(uVar1,uVar1);
  }
  FUN_08be0754(lVar4,uVar1,0);
  lVar4 = *(long *)(unaff_x22 + 0x18);
  uVar1 = FUN_08dc32c4(0);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c(uVar1,uVar1);
  }
  FUN_08be0754(lVar4,uVar1,0);
  if (*(long *)(unaff_x22 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  uVar1 = thunk_FUN_094d1504(*(long *)(unaff_x22 + 0x40),*(undefined8 *)(unaff_x19 + 10),
                             *(undefined8 *)(unaff_x19 + 0xc),0);
  if (*(long *)(unaff_x22 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c(0,uVar1);
  }
  FUN_08be0754(*(long *)(unaff_x22 + 0x18),uVar1,0);
  if (*(long *)(unaff_x19 + 0xc) != 0) {
    if (*(long *)(unaff_x22 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    FUN_08be0754(*(long *)(unaff_x22 + 0x18),*(undefined8 *)PTR_DAT_0ac93530,0);
    lVar4 = *(long *)(unaff_x22 + 0x18);
    in_stack_00000018 = FUN_094d336c();
    in_stack_00000018 = in_stack_00000018 - in_stack_00000028;
    uVar1 = FUN_08d78138(&stack0x00000018,0);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c(uVar1,uVar1);
    }
    FUN_08be0754(lVar4,uVar1,0);
    lVar4 = *(long *)(unaff_x22 + 0x18);
    uVar1 = FUN_08dc32c4(0);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c(uVar1,uVar1);
    }
    FUN_08be0754(lVar4,uVar1,0);
  }
  if (*(long *)(unaff_x22 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  FUN_08be8b18(*(long *)(unaff_x22 + 0x18),*(undefined8 *)PTR_DAT_0ac93510,0);
  lVar4 = *(long *)(unaff_x22 + 0x18);
  uVar1 = FUN_08dc32c4(0);
  if (lVar4 != 0) {
    FUN_08be0754(lVar4,uVar1,0);
    lVar4 = *(long *)(unaff_x22 + 0x18);
    uVar1 = FUN_08dc32c4(0);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c(uVar1,uVar1);
    }
    FUN_08be0754(lVar4,uVar1,0);
    if (*(long *)(unaff_x22 + 0x38) != 0) {
      FUN_094d3794(*(long *)(unaff_x22 + 0x38),*(undefined8 *)PTR_DAT_0ac93520);
      if (*(long *)(unaff_x22 + 0x38) != 0) {
        FUN_094d372c(*(long *)(unaff_x22 + 0x38),*(undefined8 *)PTR_DAT_0ac93518);
      }
    }
    plVar2 = *(long **)(unaff_x22 + 0x18);
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    lVar4 = *(long *)(unaff_x22 + 0x28);
    uVar1 = (**(code **)(*plVar2 + 0x168))(plVar2,*(undefined8 *)(*plVar2 + 0x170));
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c(uVar1,uVar1);
    }
    lVar4 = FUN_094d4080(lVar4);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    in_stack_00000010 = FUN_08df2f04(lVar4,0);
    uVar3 = FUN_08c80df8(&stack0x00000010,0);
    if ((uVar3 & 1) == 0) {
      *unaff_x19 = 0;
      *(undefined8 *)(unaff_x19 + 0xe) = in_stack_00000010;
      thunk_FUN_049ee3d8(unaff_x19 + 0xe,0);
      if (*(int *)(*unaff_x21 + 0xe4) == 0) {
        thunk_FUN_049a583c();
      }
      FUN_05a2d34c(unaff_x19 + 2,&stack0x00000010);
    }
    else {
      FUN_08c80ec0(&stack0x00000010,0);
      if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0494818c();
      }
      if ((*(long *)(unaff_x22 + 0x38) != 0) &&
         (FUN_094d3794(*(long *)(unaff_x22 + 0x38),*(undefined8 *)PTR_DAT_0ac93518),
         *(long *)(unaff_x22 + 0x38) != 0)) {
        lVar4 = *(long *)(unaff_x22 + 0x28);
        uVar1 = FUN_094d4178();
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0494818c(uVar1,uVar1);
        }
        lVar4 = FUN_094d4080(lVar4);
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0494818c();
        }
        in_stack_00000010 = FUN_08df2f04(lVar4,0);
        uVar3 = FUN_08c80df8(&stack0x00000010,0);
        if ((uVar3 & 1) == 0) {
          *unaff_x19 = 1;
          *(undefined8 *)(unaff_x19 + 0xe) = in_stack_00000010;
          thunk_FUN_049ee3d8(unaff_x19 + 0xe,0);
          if (*(int *)(*unaff_x21 + 0xe4) == 0) {
            thunk_FUN_049a583c();
          }
          FUN_05a2d34c(unaff_x19 + 2,&stack0x00000010);
          return;
        }
        FUN_08c80ec0(&stack0x00000010,0);
        if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0494818c();
        }
      }
      *(long *)(unaff_x22 + 0x10) = *(long *)(unaff_x22 + 0x10) + 1;
      lVar4 = *unaff_x21;
      *unaff_x19 = 0xfffffffe;
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_049a583c();
      }
      FUN_08c7f478(unaff_x19 + 2,0);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c(uVar1,uVar1);
}


