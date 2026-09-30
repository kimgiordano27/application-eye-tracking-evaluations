/*
FUNCTION_NAME: Unity.Multiplayer.Tools.MetricTypes.ObjectSpawnedEvent$$get_BytesCount
ENTRY_POINT: 07177d74
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_13;ui_or_gameplay_sink_hits_8;telemetry_or_network_hits_8
*/


void Unity_Multiplayer_Tools_MetricTypes_ObjectSpawnedEvent__get_BytesCount
               (int *param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long *unaff_x22;
  long unaff_x23;
  long lVar11;
  undefined1 auVar12 [16];
  int iStack0000000000000004;
  int iStack0000000000000008;
  int iStack000000000000000c;
  int iStack0000000000000010;
  int iStack0000000000000014;
  int iStack0000000000000018;
  int iStack000000000000001c;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  int iStack0000000000000048;
  int iStack000000000000004c;
  
  if ((*(byte *)(unaff_x23 + 0x321) & 1) == 0) {
    FUN_03a8a718(PTR_DAT_084883b0);
    FUN_03a8a718(PTR_DAT_084920f8);
    FUN_03a8a718(PTR_DAT_08486858);
    FUN_03a8a718(PTR_DAT_084e4eb0);
    FUN_03a8a718(PTR_DAT_084e4eb8);
    FUN_03a8a718(PTR_DAT_084e4ec0);
    FUN_03a8a718(PTR_DAT_084e4ec8);
    FUN_03a8a718(PTR_DAT_084e4ed0);
    FUN_03a8a718(PTR_DAT_084e4ed8);
    FUN_03a8a718(PTR_DAT_084e2950);
    *(undefined1 *)(unaff_x23 + 0x321) = 1;
  }
  in_stack_00000030 = 0;
  in_stack_00000038 = 0;
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  if ((param_1[1] != 1) || (*param_1 != 0x39)) {
    return;
  }
  _in_stack_00000030 = FUN_071774c4(param_1);
  uVar5 = Unity_Mathematics_math__mul(&stack0x00000030,0);
  if ((uVar5 & 1) != 0) {
    return;
  }
  lVar11 = *unaff_x22;
  uVar6 = FUN_065c0764(param_3,*(undefined8 *)PTR_DAT_084e4ed0,0);
  if (lVar11 == 0) {
LAB_071783cc:
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  _in_stack_00000020 = FUN_0719a264(lVar11,uVar6,0);
  puVar2 = PTR_DAT_084920f8;
  lVar11 = *(long *)PTR_DAT_084920f8;
  if (*(int *)(lVar11 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
    lVar11 = *(long *)puVar2;
  }
  auVar12 = FUN_0719a7fc(&stack0x00000020,*(undefined4 *)(*(long *)(lVar11 + 0xb8) + 4),0);
  puVar3 = PTR_DAT_084e2950;
  _in_stack_00000020 = auVar12;
  auVar12 = Unity_Netcode_NetworkManager_OnGetSessionConfigHandler__BeginInvoke
                      (&stack0x00000020,*(undefined8 *)PTR_DAT_084e2950,0);
  _in_stack_00000020 = auVar12;
  if (*(int *)(*(long *)PTR_DAT_084883b0 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  uVar6 = FUN_066e1a5c(0);
  plVar7 = (long *)FUN_03a8a804(*(undefined8 *)PTR_DAT_08486858,4);
  puVar1 = PTR_DAT_08486760;
  iStack000000000000004c = param_1[5];
  lVar11 = thunk_FUN_03ac70f4(*(undefined8 *)(PTR_DAT_08486760 + 0x48),(long)&stack0x00000048 + 4);
  if (plVar7 == (long *)0x0) goto LAB_071783cc;
  if (lVar11 != 0) {
    lVar8 = thunk_FUN_03ac73c0(lVar11,*(undefined8 *)(*plVar7 + 0x40));
    if (lVar8 == 0) goto LAB_071783d4;
  }
  if ((int)plVar7[3] != 0) {
    plVar7[4] = lVar11;
    thunk_FUN_03afed3c(plVar7 + 4,lVar11);
    iStack0000000000000048 = param_1[4] + 1;
    lVar11 = thunk_FUN_03ac70f4(*(undefined8 *)(puVar1 + 0x48),&stack0x00000048);
    if (lVar11 != 0) {
      lVar8 = thunk_FUN_03ac73c0(lVar11,*(undefined8 *)(*plVar7 + 0x40));
      if (lVar8 == 0) goto LAB_071783d4;
    }
    if ((*(uint *)(plVar7 + 3) & 0xfffffffe) == 0) goto LAB_071783d0;
    plVar7[5] = lVar11;
    thunk_FUN_03afed3c(plVar7 + 5,lVar11);
    lVar11 = FUN_070d8b70(&stack0x00000030,0);
    if (lVar11 != 0) {
      lVar8 = thunk_FUN_03ac73c0(lVar11,*(undefined8 *)(*plVar7 + 0x40));
      if (lVar8 == 0) goto LAB_071783d4;
    }
    if (2 < *(uint *)(plVar7 + 3)) {
      plVar7[6] = lVar11;
      thunk_FUN_03afed3c(plVar7 + 6,lVar11);
      iStack000000000000001c = param_1[5];
      lVar11 = thunk_FUN_03ac70f4(*(undefined8 *)(puVar1 + 0x48),(long)&stack0x00000018 + 4);
      if (lVar11 != 0) {
        lVar8 = thunk_FUN_03ac73c0(lVar11,*(undefined8 *)(*plVar7 + 0x40));
        if (lVar8 == 0) {
LAB_071783d4:
          uVar6 = thunk_FUN_03ad4f64();
                    /* WARNING: Subroutine does not return */
          FUN_03a8a884(uVar6,0);
        }
      }
      if ((*(uint *)(plVar7 + 3) & 0xfffffffc) != 0) {
        plVar7[7] = lVar11;
        thunk_FUN_03afed3c(plVar7 + 7,lVar11);
        uVar6 = FUN_065ce98c(uVar6,*(undefined8 *)PTR_DAT_084e4ed8,plVar7,0);
        auVar12 = FUN_0719ae14(&stack0x00000020,uVar6,0);
        _in_stack_00000020 = auVar12;
        auVar12 = Unity_Netcode_NetworkManager_OnSessionOwnerPromotedDelegateHandler__BeginInvoke
                            (&stack0x00000020,*(uint *)(param_2 + 0x30) & 7,0);
        _in_stack_00000020 = auVar12;
        FUN_0719aa28(&stack0x00000020,param_1[0xb],0);
        lVar11 = *unaff_x22;
        uVar6 = FUN_065c0764(param_3,*(undefined8 *)PTR_DAT_084e4eb8,0);
        if (lVar11 != 0) {
          auVar12 = FUN_0719a264(lVar11,uVar6,0);
          _in_stack_00000020 = auVar12;
          auVar12 = FUN_0719a7fc(&stack0x00000020,
                                 *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 4),0);
          _in_stack_00000020 = auVar12;
          auVar12 = Unity_Netcode_NetworkManager_OnGetSessionConfigHandler__BeginInvoke
                              (&stack0x00000020,*(undefined8 *)puVar3,0);
          _in_stack_00000020 = auVar12;
          uVar6 = FUN_066e1a5c(0);
          iStack0000000000000018 = param_1[4] + 1;
          uVar9 = thunk_FUN_03ac70f4(*(undefined8 *)(puVar1 + 0x48),&stack0x00000018);
          iStack0000000000000014 = param_1[4] + 3;
          uVar10 = thunk_FUN_03ac70f4(*(undefined8 *)(puVar1 + 0x48),(long)&stack0x00000010 + 4);
          puVar4 = PTR_DAT_084e4ec0;
          uVar6 = FUN_065ce8d8(uVar6,*(undefined8 *)PTR_DAT_084e4ec0,uVar9,uVar10,0);
          auVar12 = FUN_0719ae14(&stack0x00000020,uVar6,0);
          _in_stack_00000020 = auVar12;
          auVar12 = Unity_Netcode_NetworkManager_OnSessionOwnerPromotedDelegateHandler__BeginInvoke
                              (&stack0x00000020,*(uint *)(param_2 + 0x30) & 7,0);
          _in_stack_00000020 = auVar12;
          FUN_0719aa28(&stack0x00000020,param_1[0xb],0);
          lVar11 = *unaff_x22;
          uVar6 = FUN_065c0764(param_3,*(undefined8 *)PTR_DAT_084e4ec8,0);
          if (lVar11 != 0) {
            auVar12 = FUN_0719a264(lVar11,uVar6,0);
            _in_stack_00000020 = auVar12;
            auVar12 = FUN_0719a7fc(&stack0x00000020,
                                   *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 4),0);
            _in_stack_00000020 = auVar12;
            auVar12 = Unity_Netcode_NetworkManager_OnGetSessionConfigHandler__BeginInvoke
                                (&stack0x00000020,*(undefined8 *)puVar3,0);
            _in_stack_00000020 = auVar12;
            uVar6 = FUN_066e1a5c(0);
            iStack0000000000000010 = param_1[4] + 3;
            uVar9 = thunk_FUN_03ac70f4(*(undefined8 *)(puVar1 + 0x48),&stack0x00000010);
            iStack000000000000000c = param_1[4] + 5;
            uVar10 = thunk_FUN_03ac70f4(*(undefined8 *)(puVar1 + 0x48),(long)&stack0x00000008 + 4);
            uVar6 = FUN_065ce8d8(uVar6,*(undefined8 *)puVar4,uVar9,uVar10,0);
            auVar12 = FUN_0719ae14(&stack0x00000020,uVar6,0);
            _in_stack_00000020 = auVar12;
            auVar12 = Unity_Netcode_NetworkManager_OnSessionOwnerPromotedDelegateHandler__BeginInvoke
                                (&stack0x00000020,*(uint *)(param_2 + 0x30) & 7,0);
            _in_stack_00000020 = auVar12;
            FUN_0719aa28(&stack0x00000020,param_1[0xb],0);
            lVar11 = *unaff_x22;
            uVar6 = FUN_065c0764(param_3,*(undefined8 *)PTR_DAT_084e4eb0,0);
            if (lVar11 != 0) {
              auVar12 = FUN_0719a264(lVar11,uVar6,0);
              _in_stack_00000020 = auVar12;
              auVar12 = FUN_0719a7fc(&stack0x00000020,
                                     *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 4),0);
              _in_stack_00000020 = auVar12;
              auVar12 = Unity_Netcode_NetworkManager_OnGetSessionConfigHandler__BeginInvoke
                                  (&stack0x00000020,*(undefined8 *)puVar3,0);
              _in_stack_00000020 = auVar12;
              uVar6 = FUN_066e1a5c(0);
              iStack0000000000000008 = param_1[4] + 5;
              uVar9 = thunk_FUN_03ac70f4(*(undefined8 *)(puVar1 + 0x48),&stack0x00000008);
              iStack0000000000000004 = param_1[4] + 7;
              uVar10 = thunk_FUN_03ac70f4(*(undefined8 *)(puVar1 + 0x48),&stack0x00000004);
              uVar6 = FUN_065ce8d8(uVar6,*(undefined8 *)puVar4,uVar9,uVar10,0);
              auVar12 = FUN_0719ae14(&stack0x00000020,uVar6,0);
              _in_stack_00000020 = auVar12;
              auVar12 = Unity_Netcode_NetworkManager_OnSessionOwnerPromotedDelegateHandler__BeginInvoke
                                  (&stack0x00000020,*(uint *)(param_2 + 0x30) & 7,0);
              _in_stack_00000020 = auVar12;
              FUN_0719aa28(&stack0x00000020,param_1[0xb],0);
              return;
            }
          }
        }
        goto LAB_071783cc;
      }
    }
  }
LAB_071783d0:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c8();
}


