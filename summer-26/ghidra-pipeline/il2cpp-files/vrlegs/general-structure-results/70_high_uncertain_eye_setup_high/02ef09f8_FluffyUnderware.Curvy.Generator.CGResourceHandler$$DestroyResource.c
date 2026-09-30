/*
FUNCTION_NAME: FluffyUnderware.Curvy.Generator.CGResourceHandler$$DestroyResource
ENTRY_POINT: 02ef09f8
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_15;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x02ef0cdc) */

void FluffyUnderware_Curvy_Generator_CGResourceHandler__DestroyResource(void)

{
  long lVar1;
  int *piVar2;
  undefined8 *puVar3;
  long lVar4;
  int iVar5;
  long unaff_x20;
  undefined8 *unaff_x21;
  undefined8 uVar6;
  long *unaff_x29;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  
  FUN_02ef0fa0();
  lVar4 = *unaff_x29;
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_01a58e78(lVar4);
    lVar4 = *unaff_x29;
  }
  lVar1 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x18);
  if (lVar1 != 0) {
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_01a58e78(lVar4);
      lVar1 = *(long *)(*(long *)(*unaff_x29 + 0xb8) + 0x18);
      if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
    }
    *(long *)(lVar1 + 0x10) = unaff_x20;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    *(undefined8 *)(unaff_x20 + 0x18) = *(undefined8 *)(*(long *)(*unaff_x29 + 0xb8) + 0x18);
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    lVar4 = *unaff_x29;
  }
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_01a58e78(lVar4);
    lVar4 = *unaff_x29;
  }
  *(long *)(*(long *)(lVar4 + 0xb8) + 0x18) = unaff_x20;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
  lVar4 = *unaff_x29;
  lVar1 = *(long *)(lVar4 + 0xb8);
  iVar5 = *(int *)(lVar1 + 0x10) + 1;
  *(int *)(lVar1 + 0x10) = iVar5;
  if (9 < iVar5) {
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar4 = *unaff_x29;
      lVar1 = *(long *)(lVar4 + 0xb8);
      iVar5 = *(int *)(lVar1 + 0x10);
    }
    if (iVar5 == 10) {
      FUN_02ef1074();
    }
    else {
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar1 = *(long *)(*unaff_x29 + 0xb8);
      }
      in_stack_000000b0 = unaff_x21[2];
      in_stack_000000a8 = unaff_x21[1];
      in_stack_000000a0 = *unaff_x21;
      if (*(long *)(lVar1 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      in_stack_00000040 = in_stack_000000a0;
      in_stack_00000048 = in_stack_000000a8;
      in_stack_00000050 = in_stack_000000b0;
      FUN_0219b9a4(*(long *)(lVar1 + 8),&stack0x00000040);
    }
  }
  lVar4 = *unaff_x29;
  iVar5 = *(int *)(lVar4 + 0xe0);
  if (iVar5 == 0) {
    thunk_FUN_01a58e78(lVar4);
    lVar4 = *unaff_x29;
    iVar5 = *(int *)(lVar4 + 0xe0);
  }
  piVar2 = *(int **)(lVar4 + 0xb8);
  if (*(long *)(piVar2 + 8) == 0) {
    if (iVar5 == 0) {
      thunk_FUN_01a58e78(lVar4);
      piVar2 = *(int **)(*unaff_x29 + 0xb8);
    }
    *(long *)(piVar2 + 8) = unaff_x20;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
  }
  else {
    if (iVar5 == 0) {
      thunk_FUN_01a58e78(lVar4);
      lVar4 = *unaff_x29;
      piVar2 = *(int **)(lVar4 + 0xb8);
    }
    iVar5 = piVar2[4];
    if (*piVar2 < iVar5) {
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_01a58e78(lVar4);
        lVar4 = *unaff_x29;
        piVar2 = *(int **)(lVar4 + 0xb8);
        iVar5 = piVar2[4];
      }
      lVar1 = *(long *)(piVar2 + 8);
      if (iVar5 < 10) {
        if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
      }
      else {
        if (*(int *)(lVar4 + 0xe0) == 0) {
          thunk_FUN_01a58e78(lVar4);
          piVar2 = *(int **)(*unaff_x29 + 0xb8);
        }
        if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        in_stack_000000b0 = *(undefined8 *)(lVar1 + 0x30);
        in_stack_000000a8 = *(undefined8 *)(lVar1 + 0x28);
        in_stack_000000a0 = *(undefined8 *)(lVar1 + 0x20);
        if (*(long *)(piVar2 + 2) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        in_stack_00000020 = in_stack_000000a0;
        in_stack_00000028 = in_stack_000000a8;
        in_stack_00000030 = in_stack_000000b0;
        FUN_0219eaf8(*(long *)(piVar2 + 2),&stack0x00000020,*(undefined8 *)PTR_DAT_03d213f0);
      }
      if (*(long *)(lVar1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      puVar3 = (undefined8 *)(*(long *)(lVar1 + 0x10) + 0x18);
      *puVar3 = 0;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar3,0);
      lVar4 = *unaff_x29;
      uVar6 = *(undefined8 *)(lVar1 + 0x10);
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar4 = *unaff_x29;
      }
      puVar3 = (undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x20);
      *puVar3 = uVar6;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar3,uVar6);
      *(int *)(*(long *)(*unaff_x29 + 0xb8) + 0x10) =
           *(int *)(*(long *)(*unaff_x29 + 0xb8) + 0x10) + -1;
    }
  }
  if (in_stack_000000b8._4_1_ != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0();
  }
  return;
}


