/*
FUNCTION_NAME: Unity.Multiplayer.Tools.MetricTypes.OwnershipChangeEvent$$.ctor
ENTRY_POINT: 07177e58
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_9;ui_or_gameplay_sink_hits_8;telemetry_or_network_hits_8
*/


void Unity_Multiplayer_Tools_MetricTypes_OwnershipChangeEvent___ctor
               (undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x22;
  long unaff_x23;
  undefined1 auVar11 [16];
  int iStack0000000000000004;
  int iStack0000000000000008;
  int iStack000000000000000c;
  int iStack0000000000000010;
  int iStack0000000000000014;
  int iStack0000000000000018;
  undefined4 uStack000000000000001c;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  int iStack0000000000000048;
  undefined4 uStack000000000000004c;
  
  FUN_065c0764(param_2,*param_1);
  if (unaff_x23 != 0) {
    _in_stack_00000020 = FUN_0719a264();
    puVar2 = PTR_DAT_084920f8;
    lVar5 = *(long *)PTR_DAT_084920f8;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
      lVar5 = *(long *)puVar2;
    }
    auVar11 = FUN_0719a7fc(&stack0x00000020,*(undefined4 *)(*(long *)(lVar5 + 0xb8) + 4),0);
    puVar3 = PTR_DAT_084e2950;
    _in_stack_00000020 = auVar11;
    auVar11 = Unity_Netcode_NetworkManager_OnGetSessionConfigHandler__BeginInvoke
                        (&stack0x00000020,*(undefined8 *)PTR_DAT_084e2950,0);
    _in_stack_00000020 = auVar11;
    if (*(int *)(*(long *)PTR_DAT_084883b0 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    uVar6 = FUN_066e1a5c(0);
    plVar7 = (long *)FUN_03a8a804(*(undefined8 *)PTR_DAT_08486858,4);
    puVar1 = PTR_DAT_08486760;
    uStack000000000000004c = *(undefined4 *)(unaff_x19 + 0x14);
    lVar5 = thunk_FUN_03ac70f4(*(undefined8 *)(PTR_DAT_08486760 + 0x48),(long)&stack0x00000048 + 4);
    if (plVar7 != (long *)0x0) {
      if ((lVar5 != 0) &&
         (lVar8 = thunk_FUN_03ac73c0(lVar5,*(undefined8 *)(*plVar7 + 0x40)), lVar8 == 0)) {
LAB_071783d4:
        uVar6 = thunk_FUN_03ad4f64();
                    /* WARNING: Subroutine does not return */
        FUN_03a8a884(uVar6,0);
      }
      if ((int)plVar7[3] != 0) {
        plVar7[4] = lVar5;
        thunk_FUN_03afed3c(plVar7 + 4,lVar5);
        iStack0000000000000048 = *(int *)(unaff_x19 + 0x10) + 1;
        lVar5 = thunk_FUN_03ac70f4(*(undefined8 *)(puVar1 + 0x48),&stack0x00000048);
        if ((lVar5 != 0) &&
           (lVar8 = thunk_FUN_03ac73c0(lVar5,*(undefined8 *)(*plVar7 + 0x40)), lVar8 == 0))
        goto LAB_071783d4;
        if ((*(uint *)(plVar7 + 3) & 0xfffffffe) != 0) {
          plVar7[5] = lVar5;
          thunk_FUN_03afed3c(plVar7 + 5,lVar5);
          lVar5 = FUN_070d8b70(&stack0x00000030,0);
          if ((lVar5 != 0) &&
             (lVar8 = thunk_FUN_03ac73c0(lVar5,*(undefined8 *)(*plVar7 + 0x40)), lVar8 == 0))
          goto LAB_071783d4;
          if (2 < *(uint *)(plVar7 + 3)) {
            plVar7[6] = lVar5;
            thunk_FUN_03afed3c(plVar7 + 6,lVar5);
            uStack000000000000001c = *(undefined4 *)(unaff_x19 + 0x14);
            lVar5 = thunk_FUN_03ac70f4(*(undefined8 *)(puVar1 + 0x48),(long)&stack0x00000018 + 4);
            if ((lVar5 != 0) &&
               (lVar8 = thunk_FUN_03ac73c0(lVar5,*(undefined8 *)(*plVar7 + 0x40)), lVar8 == 0))
            goto LAB_071783d4;
            if ((*(uint *)(plVar7 + 3) & 0xfffffffc) != 0) {
              plVar7[7] = lVar5;
              thunk_FUN_03afed3c(plVar7 + 7,lVar5);
              uVar6 = FUN_065ce98c(uVar6,*(undefined8 *)PTR_DAT_084e4ed8,plVar7,0);
              auVar11 = FUN_0719ae14(&stack0x00000020,uVar6,0);
              _in_stack_00000020 = auVar11;
              auVar11 = Unity_Netcode_NetworkManager_OnSessionOwnerPromotedDelegateHandler__BeginInvoke
                                  (&stack0x00000020,*(uint *)(unaff_x20 + 0x30) & 7,0);
              _in_stack_00000020 = auVar11;
              FUN_0719aa28(&stack0x00000020,*(undefined4 *)(unaff_x19 + 0x2c),0);
              lVar5 = *unaff_x22;
              uVar6 = FUN_065c0764();
              if (lVar5 != 0) {
                auVar11 = FUN_0719a264(lVar5,uVar6,0);
                _in_stack_00000020 = auVar11;
                auVar11 = FUN_0719a7fc(&stack0x00000020,
                                       *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 4),0);
                _in_stack_00000020 = auVar11;
                auVar11 = Unity_Netcode_NetworkManager_OnGetSessionConfigHandler__BeginInvoke
                                    (&stack0x00000020,*(undefined8 *)puVar3,0);
                _in_stack_00000020 = auVar11;
                uVar6 = FUN_066e1a5c(0);
                iStack0000000000000018 = *(int *)(unaff_x19 + 0x10) + 1;
                uVar9 = thunk_FUN_03ac70f4(*(undefined8 *)(puVar1 + 0x48),&stack0x00000018);
                iStack0000000000000014 = *(int *)(unaff_x19 + 0x10) + 3;
                uVar10 = thunk_FUN_03ac70f4(*(undefined8 *)(puVar1 + 0x48),
                                            (long)&stack0x00000010 + 4);
                puVar4 = PTR_DAT_084e4ec0;
                uVar6 = FUN_065ce8d8(uVar6,*(undefined8 *)PTR_DAT_084e4ec0,uVar9,uVar10,0);
                auVar11 = FUN_0719ae14(&stack0x00000020,uVar6,0);
                _in_stack_00000020 = auVar11;
                auVar11 = Unity_Netcode_NetworkManager_OnSessionOwnerPromotedDelegateHandler__BeginInvoke
                                    (&stack0x00000020,*(uint *)(unaff_x20 + 0x30) & 7,0);
                _in_stack_00000020 = auVar11;
                FUN_0719aa28(&stack0x00000020,*(undefined4 *)(unaff_x19 + 0x2c),0);
                lVar5 = *unaff_x22;
                uVar6 = FUN_065c0764();
                if (lVar5 != 0) {
                  auVar11 = FUN_0719a264(lVar5,uVar6,0);
                  _in_stack_00000020 = auVar11;
                  auVar11 = FUN_0719a7fc(&stack0x00000020,
                                         *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 4),0);
                  _in_stack_00000020 = auVar11;
                  auVar11 = Unity_Netcode_NetworkManager_OnGetSessionConfigHandler__BeginInvoke
                                      (&stack0x00000020,*(undefined8 *)puVar3,0);
                  _in_stack_00000020 = auVar11;
                  uVar6 = FUN_066e1a5c(0);
                  iStack0000000000000010 = *(int *)(unaff_x19 + 0x10) + 3;
                  uVar9 = thunk_FUN_03ac70f4(*(undefined8 *)(puVar1 + 0x48),&stack0x00000010);
                  iStack000000000000000c = *(int *)(unaff_x19 + 0x10) + 5;
                  uVar10 = thunk_FUN_03ac70f4(*(undefined8 *)(puVar1 + 0x48),
                                              (long)&stack0x00000008 + 4);
                  uVar6 = FUN_065ce8d8(uVar6,*(undefined8 *)puVar4,uVar9,uVar10,0);
                  auVar11 = FUN_0719ae14(&stack0x00000020,uVar6,0);
                  _in_stack_00000020 = auVar11;
                  auVar11 = Unity_Netcode_NetworkManager_OnSessionOwnerPromotedDelegateHandler__BeginInvoke
                                      (&stack0x00000020,*(uint *)(unaff_x20 + 0x30) & 7,0);
                  _in_stack_00000020 = auVar11;
                  FUN_0719aa28(&stack0x00000020,*(undefined4 *)(unaff_x19 + 0x2c),0);
                  lVar5 = *unaff_x22;
                  uVar6 = FUN_065c0764();
                  if (lVar5 != 0) {
                    auVar11 = FUN_0719a264(lVar5,uVar6,0);
                    _in_stack_00000020 = auVar11;
                    auVar11 = FUN_0719a7fc(&stack0x00000020,
                                           *(undefined4 *)(*(long *)(*(long *)puVar2 + 0xb8) + 4),0)
                    ;
                    _in_stack_00000020 = auVar11;
                    auVar11 = Unity_Netcode_NetworkManager_OnGetSessionConfigHandler__BeginInvoke
                                        (&stack0x00000020,*(undefined8 *)puVar3,0);
                    _in_stack_00000020 = auVar11;
                    uVar6 = FUN_066e1a5c(0);
                    iStack0000000000000008 = *(int *)(unaff_x19 + 0x10) + 5;
                    uVar9 = thunk_FUN_03ac70f4(*(undefined8 *)(puVar1 + 0x48),&stack0x00000008);
                    iStack0000000000000004 = *(int *)(unaff_x19 + 0x10) + 7;
                    uVar10 = thunk_FUN_03ac70f4(*(undefined8 *)(puVar1 + 0x48),&stack0x00000004);
                    uVar6 = FUN_065ce8d8(uVar6,*(undefined8 *)puVar4,uVar9,uVar10,0);
                    auVar11 = FUN_0719ae14(&stack0x00000020,uVar6,0);
                    _in_stack_00000020 = auVar11;
                    auVar11 = Unity_Netcode_NetworkManager_OnSessionOwnerPromotedDelegateHandler__BeginInvoke
                                        (&stack0x00000020,*(uint *)(unaff_x20 + 0x30) & 7,0);
                    _in_stack_00000020 = auVar11;
                    FUN_0719aa28(&stack0x00000020,*(undefined4 *)(unaff_x19 + 0x2c),0);
                    return;
                  }
                }
              }
              goto LAB_071783cc;
            }
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c8();
    }
  }
LAB_071783cc:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


