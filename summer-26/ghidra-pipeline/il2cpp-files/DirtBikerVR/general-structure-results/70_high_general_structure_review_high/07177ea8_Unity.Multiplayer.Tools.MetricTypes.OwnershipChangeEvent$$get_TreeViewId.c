/*
FUNCTION_NAME: Unity.Multiplayer.Tools.MetricTypes.OwnershipChangeEvent$$get_TreeViewId
ENTRY_POINT: 07177ea8
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_8;ui_or_gameplay_sink_hits_8;telemetry_or_network_hits_8
*/


void Unity_Multiplayer_Tools_MetricTypes_OwnershipChangeEvent__get_TreeViewId(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x22;
  long *unaff_x26;
  undefined1 auVar10 [16];
  int iStack0000000000000004;
  int iStack0000000000000008;
  int iStack000000000000000c;
  int iStack0000000000000010;
  int iStack0000000000000014;
  int iStack0000000000000018;
  undefined4 uStack000000000000001c;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  int in_stack_00000048;
  undefined4 uStack000000000000004c;
  
  _in_stack_00000020 = FUN_0719a7fc();
  puVar2 = PTR_DAT_084e2950;
  auVar10 = Unity_Netcode_NetworkManager_OnGetSessionConfigHandler__BeginInvoke
                      (&stack0x00000020,*(undefined8 *)PTR_DAT_084e2950,0);
  _in_stack_00000020 = auVar10;
  if (*(int *)(*(long *)PTR_DAT_084883b0 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  uVar4 = FUN_066e1a5c(0);
  plVar5 = (long *)FUN_03a8a804(*(undefined8 *)PTR_DAT_08486858,4);
  puVar1 = PTR_DAT_08486760;
  uStack000000000000004c = *(undefined4 *)(unaff_x19 + 0x14);
  lVar6 = thunk_FUN_03ac70f4(*(undefined8 *)(PTR_DAT_08486760 + 0x48),&stack0x0000004c);
  if (plVar5 == (long *)0x0) {
LAB_071783cc:
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  if ((lVar6 != 0) &&
     (lVar7 = thunk_FUN_03ac73c0(lVar6,*(undefined8 *)(*plVar5 + 0x40)), lVar7 == 0)) {
LAB_071783d4:
    uVar4 = thunk_FUN_03ad4f64();
                    /* WARNING: Subroutine does not return */
    FUN_03a8a884(uVar4,0);
  }
  if ((int)plVar5[3] != 0) {
    plVar5[4] = lVar6;
    thunk_FUN_03afed3c(plVar5 + 4,lVar6);
    in_stack_00000048 = *(int *)(unaff_x19 + 0x10) + 1;
    lVar6 = thunk_FUN_03ac70f4(*(undefined8 *)(puVar1 + 0x48),&stack0x00000048);
    if ((lVar6 != 0) &&
       (lVar7 = thunk_FUN_03ac73c0(lVar6,*(undefined8 *)(*plVar5 + 0x40)), lVar7 == 0))
    goto LAB_071783d4;
    if ((*(uint *)(plVar5 + 3) & 0xfffffffe) != 0) {
      plVar5[5] = lVar6;
      thunk_FUN_03afed3c(plVar5 + 5,lVar6);
      lVar6 = FUN_070d8b70(&stack0x00000030,0);
      if ((lVar6 != 0) &&
         (lVar7 = thunk_FUN_03ac73c0(lVar6,*(undefined8 *)(*plVar5 + 0x40)), lVar7 == 0))
      goto LAB_071783d4;
      if (2 < *(uint *)(plVar5 + 3)) {
        plVar5[6] = lVar6;
        thunk_FUN_03afed3c(plVar5 + 6,lVar6);
        uStack000000000000001c = *(undefined4 *)(unaff_x19 + 0x14);
        lVar6 = thunk_FUN_03ac70f4(*(undefined8 *)(puVar1 + 0x48),(long)&stack0x00000018 + 4);
        if ((lVar6 != 0) &&
           (lVar7 = thunk_FUN_03ac73c0(lVar6,*(undefined8 *)(*plVar5 + 0x40)), lVar7 == 0))
        goto LAB_071783d4;
        if ((*(uint *)(plVar5 + 3) & 0xfffffffc) != 0) {
          plVar5[7] = lVar6;
          thunk_FUN_03afed3c(plVar5 + 7,lVar6);
          uVar4 = FUN_065ce98c(uVar4,*(undefined8 *)PTR_DAT_084e4ed8,plVar5,0);
          auVar10 = FUN_0719ae14(&stack0x00000020,uVar4,0);
          _in_stack_00000020 = auVar10;
          auVar10 = Unity_Netcode_NetworkManager_OnSessionOwnerPromotedDelegateHandler__BeginInvoke
                              (&stack0x00000020,*(uint *)(unaff_x20 + 0x30) & 7,0);
          _in_stack_00000020 = auVar10;
          FUN_0719aa28(&stack0x00000020,*(undefined4 *)(unaff_x19 + 0x2c),0);
          lVar6 = *unaff_x22;
          uVar4 = FUN_065c0764();
          if (lVar6 != 0) {
            auVar10 = FUN_0719a264(lVar6,uVar4,0);
            _in_stack_00000020 = auVar10;
            auVar10 = FUN_0719a7fc(&stack0x00000020,
                                   *(undefined4 *)(*(long *)(*unaff_x26 + 0xb8) + 4),0);
            _in_stack_00000020 = auVar10;
            auVar10 = Unity_Netcode_NetworkManager_OnGetSessionConfigHandler__BeginInvoke
                                (&stack0x00000020,*(undefined8 *)puVar2,0);
            _in_stack_00000020 = auVar10;
            uVar4 = FUN_066e1a5c(0);
            iStack0000000000000018 = *(int *)(unaff_x19 + 0x10) + 1;
            uVar8 = thunk_FUN_03ac70f4(*(undefined8 *)(puVar1 + 0x48),&stack0x00000018);
            iStack0000000000000014 = *(int *)(unaff_x19 + 0x10) + 3;
            uVar9 = thunk_FUN_03ac70f4(*(undefined8 *)(puVar1 + 0x48),(long)&stack0x00000010 + 4);
            puVar3 = PTR_DAT_084e4ec0;
            uVar4 = FUN_065ce8d8(uVar4,*(undefined8 *)PTR_DAT_084e4ec0,uVar8,uVar9,0);
            auVar10 = FUN_0719ae14(&stack0x00000020,uVar4,0);
            _in_stack_00000020 = auVar10;
            auVar10 = Unity_Netcode_NetworkManager_OnSessionOwnerPromotedDelegateHandler__BeginInvoke
                                (&stack0x00000020,*(uint *)(unaff_x20 + 0x30) & 7,0);
            _in_stack_00000020 = auVar10;
            FUN_0719aa28(&stack0x00000020,*(undefined4 *)(unaff_x19 + 0x2c),0);
            lVar6 = *unaff_x22;
            uVar4 = FUN_065c0764();
            if (lVar6 != 0) {
              auVar10 = FUN_0719a264(lVar6,uVar4,0);
              _in_stack_00000020 = auVar10;
              auVar10 = FUN_0719a7fc(&stack0x00000020,
                                     *(undefined4 *)(*(long *)(*unaff_x26 + 0xb8) + 4),0);
              _in_stack_00000020 = auVar10;
              auVar10 = Unity_Netcode_NetworkManager_OnGetSessionConfigHandler__BeginInvoke
                                  (&stack0x00000020,*(undefined8 *)puVar2,0);
              _in_stack_00000020 = auVar10;
              uVar4 = FUN_066e1a5c(0);
              iStack0000000000000010 = *(int *)(unaff_x19 + 0x10) + 3;
              uVar8 = thunk_FUN_03ac70f4(*(undefined8 *)(puVar1 + 0x48),&stack0x00000010);
              iStack000000000000000c = *(int *)(unaff_x19 + 0x10) + 5;
              uVar9 = thunk_FUN_03ac70f4(*(undefined8 *)(puVar1 + 0x48),(long)&stack0x00000008 + 4);
              uVar4 = FUN_065ce8d8(uVar4,*(undefined8 *)puVar3,uVar8,uVar9,0);
              auVar10 = FUN_0719ae14(&stack0x00000020,uVar4,0);
              _in_stack_00000020 = auVar10;
              auVar10 = Unity_Netcode_NetworkManager_OnSessionOwnerPromotedDelegateHandler__BeginInvoke
                                  (&stack0x00000020,*(uint *)(unaff_x20 + 0x30) & 7,0);
              _in_stack_00000020 = auVar10;
              FUN_0719aa28(&stack0x00000020,*(undefined4 *)(unaff_x19 + 0x2c),0);
              lVar6 = *unaff_x22;
              uVar4 = FUN_065c0764();
              if (lVar6 != 0) {
                auVar10 = FUN_0719a264(lVar6,uVar4,0);
                _in_stack_00000020 = auVar10;
                auVar10 = FUN_0719a7fc(&stack0x00000020,
                                       *(undefined4 *)(*(long *)(*unaff_x26 + 0xb8) + 4),0);
                _in_stack_00000020 = auVar10;
                auVar10 = Unity_Netcode_NetworkManager_OnGetSessionConfigHandler__BeginInvoke
                                    (&stack0x00000020,*(undefined8 *)puVar2,0);
                _in_stack_00000020 = auVar10;
                uVar4 = FUN_066e1a5c(0);
                iStack0000000000000008 = *(int *)(unaff_x19 + 0x10) + 5;
                uVar8 = thunk_FUN_03ac70f4(*(undefined8 *)(puVar1 + 0x48),&stack0x00000008);
                iStack0000000000000004 = *(int *)(unaff_x19 + 0x10) + 7;
                uVar9 = thunk_FUN_03ac70f4(*(undefined8 *)(puVar1 + 0x48),&stack0x00000004);
                uVar4 = FUN_065ce8d8(uVar4,*(undefined8 *)puVar3,uVar8,uVar9,0);
                auVar10 = FUN_0719ae14(&stack0x00000020,uVar4,0);
                _in_stack_00000020 = auVar10;
                auVar10 = Unity_Netcode_NetworkManager_OnSessionOwnerPromotedDelegateHandler__BeginInvoke
                                    (&stack0x00000020,*(uint *)(unaff_x20 + 0x30) & 7,0);
                _in_stack_00000020 = auVar10;
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


