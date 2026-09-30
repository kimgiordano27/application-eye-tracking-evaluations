/*
FUNCTION_NAME: FluffyUnderware.Curvy.Generator.CGModule$$RenameResource
ENTRY_POINT: 02ef09e0
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

long FluffyUnderware_Curvy_Generator_CGModule__RenameResource(long param_1)

{
  long lVar1;
  long *plVar2;
  int *piVar3;
  undefined8 *puVar4;
  long lVar5;
  int iVar6;
  undefined8 *unaff_x21;
  undefined8 uVar7;
  long *unaff_x29;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 uStack0000000000000060;
  undefined8 uStack0000000000000068;
  undefined8 uStack0000000000000070;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  
  uStack0000000000000068 = in_stack_000000a8;
  uStack0000000000000060 = in_stack_000000a0;
  uStack0000000000000070 = in_stack_000000b0;
  FUN_02ef0fa0(param_1,&stack0x00000060);
  lVar5 = *unaff_x29;
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_01a58e78(lVar5);
    lVar5 = *unaff_x29;
  }
  lVar1 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x18);
  if (lVar1 != 0) {
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_01a58e78(lVar5);
      lVar1 = *(long *)(*(long *)(*unaff_x29 + 0xb8) + 0x18);
      if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
    }
    *(long *)(lVar1 + 0x10) = param_1;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists
              ((long *)(lVar1 + 0x10),param_1);
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(*(long *)(*unaff_x29 + 0xb8) + 0x18);
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    lVar5 = *unaff_x29;
  }
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_01a58e78(lVar5);
    lVar5 = *unaff_x29;
  }
  plVar2 = (long *)(*(long *)(lVar5 + 0xb8) + 0x18);
  *plVar2 = param_1;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar2,param_1);
  lVar5 = *unaff_x29;
  lVar1 = *(long *)(lVar5 + 0xb8);
  iVar6 = *(int *)(lVar1 + 0x10) + 1;
  *(int *)(lVar1 + 0x10) = iVar6;
  if (9 < iVar6) {
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar5 = *unaff_x29;
      lVar1 = *(long *)(lVar5 + 0xb8);
      iVar6 = *(int *)(lVar1 + 0x10);
    }
    if (iVar6 == 10) {
      FUN_02ef1074();
    }
    else {
      if (*(int *)(lVar5 + 0xe0) == 0) {
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
      FUN_0219b9a4(*(long *)(lVar1 + 8),&stack0x00000040,param_1,*(undefined8 *)PTR_DAT_03d213e8);
    }
  }
  lVar5 = *unaff_x29;
  iVar6 = *(int *)(lVar5 + 0xe0);
  if (iVar6 == 0) {
    thunk_FUN_01a58e78(lVar5);
    lVar5 = *unaff_x29;
    iVar6 = *(int *)(lVar5 + 0xe0);
  }
  piVar3 = *(int **)(lVar5 + 0xb8);
  if (*(long *)(piVar3 + 8) == 0) {
    if (iVar6 == 0) {
      thunk_FUN_01a58e78(lVar5);
      piVar3 = *(int **)(*unaff_x29 + 0xb8);
    }
    *(long *)(piVar3 + 8) = param_1;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(piVar3 + 8,param_1);
  }
  else {
    if (iVar6 == 0) {
      thunk_FUN_01a58e78(lVar5);
      lVar5 = *unaff_x29;
      piVar3 = *(int **)(lVar5 + 0xb8);
    }
    iVar6 = piVar3[4];
    if (*piVar3 < iVar6) {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_01a58e78(lVar5);
        lVar5 = *unaff_x29;
        piVar3 = *(int **)(lVar5 + 0xb8);
        iVar6 = piVar3[4];
      }
      lVar1 = *(long *)(piVar3 + 8);
      if (iVar6 < 10) {
        if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
      }
      else {
        if (*(int *)(lVar5 + 0xe0) == 0) {
          thunk_FUN_01a58e78(lVar5);
          piVar3 = *(int **)(*unaff_x29 + 0xb8);
        }
        if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        in_stack_000000b0 = *(undefined8 *)(lVar1 + 0x30);
        in_stack_000000a8 = *(undefined8 *)(lVar1 + 0x28);
        in_stack_000000a0 = *(undefined8 *)(lVar1 + 0x20);
        if (*(long *)(piVar3 + 2) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        in_stack_00000020 = in_stack_000000a0;
        in_stack_00000028 = in_stack_000000a8;
        in_stack_00000030 = in_stack_000000b0;
        FUN_0219eaf8(*(long *)(piVar3 + 2),&stack0x00000020,*(undefined8 *)PTR_DAT_03d213f0);
      }
      if (*(long *)(lVar1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      puVar4 = (undefined8 *)(*(long *)(lVar1 + 0x10) + 0x18);
      *puVar4 = 0;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar4,0);
      lVar5 = *unaff_x29;
      uVar7 = *(undefined8 *)(lVar1 + 0x10);
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
        lVar5 = *unaff_x29;
      }
      puVar4 = (undefined8 *)(*(long *)(lVar5 + 0xb8) + 0x20);
      *puVar4 = uVar7;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar4,uVar7);
      *(int *)(*(long *)(*unaff_x29 + 0xb8) + 0x10) =
           *(int *)(*(long *)(*unaff_x29 + 0xb8) + 0x10) + -1;
    }
  }
  if (in_stack_000000b8._4_1_ != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0();
  }
  return param_1;
}


