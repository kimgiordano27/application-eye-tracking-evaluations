/*
FUNCTION_NAME: RootMotion.FinalIK.IKSolverVR.Spine$$Write
ENTRY_POINT: 029bbac0
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x029bbe30) */

int RootMotion_FinalIK_IKSolverVR_Spine__Write(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 unaff_x19;
  undefined8 uVar9;
  int iVar10;
  long unaff_x21;
  undefined4 unaff_w22;
  undefined8 *unaff_x23;
  char cStack000000000000000c;
  long in_stack_00000018;
  
  FUN_01ab69ac(PTR_DAT_03d08738);
  FUN_01ab69ac(PTR_DAT_03d08740);
  FUN_01ab69ac(PTR_DAT_03d08748);
  FUN_01ab69ac(PTR_DAT_03d08750);
  FUN_01ab69ac(PTR_DAT_03d08758);
  FUN_01ab69ac(PTR_DAT_03d08760);
  FUN_01ab69ac(PTR_DAT_03cc9f98);
  FUN_01ab69ac(PTR_DAT_03cc1c00);
  FUN_01ab69ac(PTR_DAT_03cc1c08);
  FUN_01ab69ac(PTR_DAT_03d08768);
  FUN_01ab69ac(PTR_DAT_03d08730);
  *(undefined1 *)(unaff_x21 + 0xdc0) = 1;
  lVar4 = thunk_FUN_01a89e68(*unaff_x23);
  FUN_027b3d9c(lVar4,0);
  puVar1 = PTR_DAT_03cc9f98;
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  *(undefined8 *)(lVar4 + 0x18) = unaff_x19;
  *(undefined4 *)(lVar4 + 0x10) = unaff_w22;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
  lVar5 = *(long *)puVar1;
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar5 = *(long *)puVar1;
  }
  uVar9 = *(undefined8 *)(*(long *)(lVar5 + 0xb8) + 8);
  cStack000000000000000c = '\0';
  FUN_027e0bd8(uVar9,&stack0x0000000c,0);
  lVar5 = *(long *)puVar1;
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
    lVar5 = *(long *)puVar1;
  }
  if (**(long **)(lVar5 + 0xb8) == 0) {
    uVar6 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03d08760);
    Animancer_AnimancerState__OnSetIsPlaying(uVar6,*(undefined8 *)PTR_DAT_03d08740);
    lVar5 = *(long *)puVar1;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar5 = *(long *)puVar1;
    }
    **(undefined8 **)(lVar5 + 0xb8) = uVar6;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists
              (*(undefined8 *)(*(long *)puVar1 + 0xb8),uVar6);
  }
  uVar6 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cc1c00);
  FUN_027d737c(uVar6,lVar4,*(undefined8 *)PTR_DAT_03d08768,0);
  lVar4 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cc1c08);
  FUN_027e22f4(lVar4,uVar6,0);
  uVar7 = FUN_025be440();
  if ((uVar7 & 1) == 0) {
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    FUN_027e3218(lVar4);
  }
  else if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  FUN_027e3114(lVar4,1,0);
  FUN_027e2600(lVar4,0);
  puVar3 = PTR_DAT_03d08750;
  puVar2 = PTR_DAT_03d08738;
  iVar10 = 0;
  while( true ) {
    lVar5 = *(long *)puVar1;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_01a58e78(lVar5);
      lVar5 = *(long *)puVar1;
    }
    lVar8 = **(long **)(lVar5 + 0xb8);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    if (*(int *)(lVar8 + 0x18) <= iVar10) break;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_01a58e78(lVar5);
      lVar8 = **(long **)(*(long *)puVar1 + 0xb8);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
    }
    FUN_02215a88(lVar8,iVar10,&stack0x00000018,*(undefined8 *)puVar3);
    if (in_stack_00000018 == 0) {
      lVar5 = *(long *)puVar1;
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar5 = *(long *)puVar1;
      }
      if (**(long **)(lVar5 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      FUN_02215b6c(**(long **)(lVar5 + 0xb8),iVar10,lVar4,*(undefined8 *)PTR_DAT_03d08758);
LAB_029bbdf0:
      if (cStack000000000000000c != '\0') {
        OVRManager_<>c__<InitOVRManager>b__424_0(uVar9,0);
      }
      return iVar10;
    }
    iVar10 = iVar10 + 1;
  }
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_01a58e78(lVar5);
    lVar5 = *(long *)puVar1;
    lVar8 = **(long **)(lVar5 + 0xb8);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
  }
  if (0xfe < *(int *)(lVar8 + 0x18)) {
    thunk_FUN_01a6ca08(PTR_DAT_03cbee40);
    uVar9 = thunk_FUN_01a89e68();
    uVar6 = thunk_FUN_01a6ca08(PTR_DAT_03d08770);
    FUN_02765308(uVar9,uVar6,0);
    uVar6 = thunk_FUN_01a6ca08(PTR_DAT_03d08778);
                    /* WARNING: Subroutine does not return */
    FUN_01ab6b14(uVar9,uVar6);
  }
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_01a58e78(lVar5);
    lVar8 = **(long **)(*(long *)puVar1 + 0xb8);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
  }
  FUN_01b5f01c(lVar8,lVar4,*(undefined8 *)puVar2);
  if (**(long **)(*(long *)puVar1 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  iVar10 = *(byte *)(**(long **)(*(long *)puVar1 + 0xb8) + 0x18) - 1;
  goto LAB_029bbdf0;
}


