/*
FUNCTION_NAME: RootMotion.FinalIK.IKSolverVR.Spine$$ResetOffsets
ENTRY_POINT: 029bbc90
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x029bbe30) */

int RootMotion_FinalIK_IKSolverVR_Spine__ResetOffsets(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  long *unaff_x23;
  undefined8 in_stack_00000008;
  long in_stack_00000018;
  
  FUN_027e3218(param_1,param_2,0);
  FUN_027e3114();
  FUN_027e2600();
  puVar1 = PTR_DAT_03d08750;
  iVar6 = 0;
  while( true ) {
    lVar4 = *unaff_x23;
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_01a58e78(lVar4);
      lVar4 = *unaff_x23;
    }
    lVar5 = **(long **)(lVar4 + 0xb8);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    if (*(int *)(lVar5 + 0x18) <= iVar6) break;
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_01a58e78(lVar4);
      lVar5 = **(long **)(*unaff_x23 + 0xb8);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
    }
    FUN_02215a88(lVar5,iVar6,&stack0x00000018,*(undefined8 *)puVar1);
    if (in_stack_00000018 == 0) {
      lVar4 = *unaff_x23;
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar4 = *unaff_x23;
      }
      if (**(long **)(lVar4 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      FUN_02215b6c(**(long **)(lVar4 + 0xb8),iVar6);
LAB_029bbdf0:
      if (in_stack_00000008._4_1_ != '\0') {
        OVRManager_<>c__<InitOVRManager>b__424_0();
      }
      return iVar6;
    }
    iVar6 = iVar6 + 1;
  }
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_01a58e78(lVar4);
    lVar4 = *unaff_x23;
    lVar5 = **(long **)(lVar4 + 0xb8);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
  }
  if (0xfe < *(int *)(lVar5 + 0x18)) {
    thunk_FUN_01a6ca08(PTR_DAT_03cbee40);
    uVar2 = thunk_FUN_01a89e68();
    uVar3 = thunk_FUN_01a6ca08(PTR_DAT_03d08770);
    FUN_02765308(uVar2,uVar3,0);
    uVar3 = thunk_FUN_01a6ca08(PTR_DAT_03d08778);
                    /* WARNING: Subroutine does not return */
    FUN_01ab6b14(uVar2,uVar3);
  }
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_01a58e78(lVar4);
    lVar5 = **(long **)(*unaff_x23 + 0xb8);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
  }
  FUN_01b5f01c(lVar5);
  if (**(long **)(*unaff_x23 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  iVar6 = *(byte *)(**(long **)(*unaff_x23 + 0xb8) + 0x18) - 1;
  goto LAB_029bbdf0;
}


