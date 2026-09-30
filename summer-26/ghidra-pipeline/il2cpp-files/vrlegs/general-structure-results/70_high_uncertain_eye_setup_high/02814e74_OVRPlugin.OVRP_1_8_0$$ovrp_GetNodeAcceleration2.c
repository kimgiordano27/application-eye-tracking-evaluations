/*
FUNCTION_NAME: OVRPlugin.OVRP_1_8_0$$ovrp_GetNodeAcceleration2
ENTRY_POINT: 02814e74
PROGRAM: vrlegs-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_OVRP_1_8_0__ovrp_GetNodeAcceleration2(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  char *pcVar10;
  undefined1 *puVar11;
  long lVar12;
  undefined8 uVar13;
  ulong uVar14;
  undefined8 *unaff_x19;
  long *unaff_x20;
  undefined4 uVar15;
  long *unaff_x23;
  int iStack0000000000000038;
  
  if (*(int *)(param_1 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar8 = FUN_02828e90();
  puVar1 = PTR_DAT_03cc1788;
  if ((uVar8 & 1) != 0) {
    lVar9 = *(long *)(*(long *)PTR_DAT_03cc1788 + 0x20);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_01a46ff8();
    }
    pcVar10 = (char *)thunk_FUN_01a59484(&stack0x00000028,
                                         *(undefined8 *)
                                          (*(long *)(*(long *)(lVar9 + 0xc0) + 8) + 0x80));
    if (*pcVar10 != '\0') {
      if (*(int *)(*unaff_x23 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar8 = FUN_02828e90();
      if ((uVar8 & 1) == 0) {
        return 0;
      }
      lVar9 = *(long *)(*(long *)puVar1 + 0x20);
      if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_01a46ff8();
      }
      pcVar10 = (char *)thunk_FUN_01a59484(&stack0x00000018,
                                           *(undefined8 *)
                                            (*(long *)(*(long *)(lVar9 + 0xc0) + 8) + 0x80));
      if (*pcVar10 == '\0') {
        FUN_022412e0(&stack0x00000028,&stack0x00000038,*(undefined8 *)PTR_DAT_03cc17a0);
        uVar8 = _iStack0000000000000038;
        if (*(int *)(*(long *)PTR_DAT_03cfdb18 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar13 = FUN_02820198(uVar8);
        *unaff_x19 = uVar13;
        return 1;
      }
      lVar9 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03ce5190);
      Animancer_AnimancerState__OnSetIsPlaying(lVar9,*(undefined8 *)PTR_DAT_03ce51a0);
      puVar2 = PTR_DAT_03cc17a0;
      FUN_022412e0(&stack0x00000028,&stack0x00000038,*(undefined8 *)PTR_DAT_03cc17a0);
      puVar3 = PTR_DAT_03ce51a8;
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      FUN_01b5f01c(lVar9,&stack0x00000038,*(undefined8 *)PTR_DAT_03ce51a8);
      uVar13 = *(undefined8 *)puVar2;
      puVar11 = &stack0x00000018;
      while( true ) {
        FUN_022412e0(puVar11,&stack0x00000038,uVar13);
        FUN_01b5f01c(lVar9,&stack0x00000038,*(undefined8 *)puVar3);
        if (*(int *)(*unaff_x23 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar8 = FUN_02828e90();
        if ((uVar8 & 1) == 0) {
          return 0;
        }
        lVar12 = *(long *)(*(long *)puVar1 + 0x20);
        if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
          lVar12 = FUN_01a46ff8();
        }
        pcVar10 = (char *)thunk_FUN_01a59484(&stack0x00000008,
                                             *(undefined8 *)
                                              (*(long *)(*(long *)(lVar12 + 0xc0) + 8) + 0x80));
        if (*pcVar10 == '\0') break;
        uVar13 = *(undefined8 *)puVar2;
        puVar11 = &stack0x00000008;
      }
      if (*(int *)(lVar9 + 0x18) < 8) {
        if (*(int *)(lVar9 + 0x18) != 7) {
          do {
            _iStack0000000000000038 = 0;
            FUN_01b5f01c(lVar9,&stack0x00000038,*(undefined8 *)puVar3);
          } while (*(int *)(lVar9 + 0x18) < 7);
        }
        puVar1 = PTR_DAT_03ce5170;
        FUN_02215a88(lVar9,0,&stack0x00000038,*(undefined8 *)PTR_DAT_03ce5170);
        uVar8 = _iStack0000000000000038;
        FUN_02215a88(lVar9,1,&stack0x00000038,*(undefined8 *)puVar1);
        iVar4 = iStack0000000000000038;
        FUN_02215a88(lVar9,2,&stack0x00000038,*(undefined8 *)puVar1);
        uVar15 = 1;
        if (_iStack0000000000000038 != 0) {
          FUN_02215a88(lVar9,2,&stack0x00000038,*(undefined8 *)puVar1);
          uVar15 = iStack0000000000000038;
        }
        FUN_02215a88(lVar9,3,&stack0x00000038,*(undefined8 *)puVar1);
        uVar5 = _iStack0000000000000038;
        FUN_02215a88(lVar9,4,&stack0x00000038,*(undefined8 *)puVar1);
        uVar6 = _iStack0000000000000038;
        FUN_02215a88(lVar9,5,&stack0x00000038,*(undefined8 *)puVar1);
        uVar7 = _iStack0000000000000038;
        FUN_02215a88(lVar9,6,&stack0x00000038,*(undefined8 *)puVar1);
        uVar14 = _iStack0000000000000038 & 0xffffffff;
        _iStack0000000000000038 = 0;
        FUN_02743284(&stack0x00000038,uVar8 & 0xffffffff,iVar4 + 1,uVar15,uVar5 & 0xffffffff,
                     uVar6 & 0xffffffff,uVar7 & 0xffffffff,uVar14);
        *unaff_x19 = _iStack0000000000000038;
        return 1;
      }
      *unaff_x20 = *(long *)PTR_DAT_03cfe468;
      goto LAB_02815024;
    }
  }
  lVar9 = *(long *)PTR_DAT_03cfe460;
  if (*unaff_x20 != 0) {
    lVar9 = *unaff_x20;
  }
  *unaff_x20 = lVar9;
LAB_02815024:
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
  return 0;
}


