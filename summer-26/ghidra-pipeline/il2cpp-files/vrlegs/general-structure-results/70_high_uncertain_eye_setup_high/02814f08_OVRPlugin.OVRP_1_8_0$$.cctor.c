/*
FUNCTION_NAME: OVRPlugin.OVRP_1_8_0$$.cctor
ENTRY_POINT: 02814f08
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


undefined8 OVRPlugin_OVRP_1_8_0___cctor(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  char *pcVar7;
  long lVar8;
  undefined1 *puVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  ulong uVar13;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined4 uVar14;
  long *unaff_x23;
  long *unaff_x24;
  int iStack0000000000000038;
  
  pcVar7 = (char *)thunk_FUN_01a59484(&stack0x00000018,
                                      *(undefined8 *)(*(long *)(param_1 + 8) + 0x80));
  if (*pcVar7 == '\0') {
    FUN_022412e0(&stack0x00000028,&stack0x00000038,*(undefined8 *)PTR_DAT_03cc17a0);
    uVar10 = _iStack0000000000000038;
    if (*(int *)(*(long *)PTR_DAT_03cfdb18 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar12 = FUN_02820198(uVar10);
    *unaff_x19 = uVar12;
  }
  else {
    lVar8 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03ce5190);
    Animancer_AnimancerState__OnSetIsPlaying(lVar8,*(undefined8 *)PTR_DAT_03ce51a0);
    puVar1 = PTR_DAT_03cc17a0;
    FUN_022412e0(&stack0x00000028,&stack0x00000038,*(undefined8 *)PTR_DAT_03cc17a0);
    puVar2 = PTR_DAT_03ce51a8;
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    FUN_01b5f01c(lVar8,&stack0x00000038,*(undefined8 *)PTR_DAT_03ce51a8);
    uVar12 = *(undefined8 *)puVar1;
    puVar9 = &stack0x00000018;
    while( true ) {
      FUN_022412e0(puVar9,&stack0x00000038,uVar12);
      FUN_01b5f01c(lVar8,&stack0x00000038,*(undefined8 *)puVar2);
      if (*(int *)(*unaff_x23 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar10 = FUN_02828e90();
      if ((uVar10 & 1) == 0) {
        return 0;
      }
      lVar11 = *(long *)(*unaff_x24 + 0x20);
      if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
        lVar11 = FUN_01a46ff8();
      }
      pcVar7 = (char *)thunk_FUN_01a59484(&stack0x00000008,
                                          *(undefined8 *)
                                           (*(long *)(*(long *)(lVar11 + 0xc0) + 8) + 0x80));
      if (*pcVar7 == '\0') break;
      uVar12 = *(undefined8 *)puVar1;
      puVar9 = &stack0x00000008;
    }
    if (7 < *(int *)(lVar8 + 0x18)) {
      *unaff_x20 = *(undefined8 *)PTR_DAT_03cfe468;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      return 0;
    }
    if (*(int *)(lVar8 + 0x18) != 7) {
      do {
        _iStack0000000000000038 = 0;
        FUN_01b5f01c(lVar8,&stack0x00000038,*(undefined8 *)puVar2);
      } while (*(int *)(lVar8 + 0x18) < 7);
    }
    puVar1 = PTR_DAT_03ce5170;
    FUN_02215a88(lVar8,0,&stack0x00000038,*(undefined8 *)PTR_DAT_03ce5170);
    uVar10 = _iStack0000000000000038;
    FUN_02215a88(lVar8,1,&stack0x00000038,*(undefined8 *)puVar1);
    iVar3 = iStack0000000000000038;
    FUN_02215a88(lVar8,2,&stack0x00000038,*(undefined8 *)puVar1);
    uVar14 = 1;
    if (_iStack0000000000000038 != 0) {
      FUN_02215a88(lVar8,2,&stack0x00000038,*(undefined8 *)puVar1);
      uVar14 = iStack0000000000000038;
    }
    FUN_02215a88(lVar8,3,&stack0x00000038,*(undefined8 *)puVar1);
    uVar4 = _iStack0000000000000038;
    FUN_02215a88(lVar8,4,&stack0x00000038,*(undefined8 *)puVar1);
    uVar5 = _iStack0000000000000038;
    FUN_02215a88(lVar8,5,&stack0x00000038,*(undefined8 *)puVar1);
    uVar6 = _iStack0000000000000038;
    FUN_02215a88(lVar8,6,&stack0x00000038,*(undefined8 *)puVar1);
    uVar13 = _iStack0000000000000038 & 0xffffffff;
    _iStack0000000000000038 = 0;
    FUN_02743284(&stack0x00000038,uVar10 & 0xffffffff,iVar3 + 1,uVar14,uVar4 & 0xffffffff,
                 uVar5 & 0xffffffff,uVar6 & 0xffffffff,uVar13);
    *unaff_x19 = _iStack0000000000000038;
  }
  return 1;
}


