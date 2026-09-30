/*
FUNCTION_NAME: Unity.Multiplayer.Tools.MetricTypes.RpcEvent$$.ctor
ENTRY_POINT: 07177f84
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_7;ui_or_gameplay_sink_hits_7;telemetry_or_network_hits_7
*/


void Unity_Multiplayer_Tools_MetricTypes_RpcEvent___ctor(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x22;
  long *unaff_x24;
  long unaff_x25;
  long *unaff_x26;
  undefined8 *unaff_x27;
  long unaff_x28;
  undefined1 auVar7 [16];
  int iStack0000000000000004;
  int iStack0000000000000008;
  int iStack000000000000000c;
  int iStack0000000000000010;
  int iStack0000000000000014;
  int iStack0000000000000018;
  undefined4 uStack000000000000001c;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  
  if ((param_1 != 0) && (lVar2 = thunk_FUN_03ac73c0(), lVar2 == 0)) {
LAB_071783d4:
    uVar4 = thunk_FUN_03ad4f64();
                    /* WARNING: Subroutine does not return */
    FUN_03a8a884(uVar4,0);
  }
  if ((*(uint *)(unaff_x24 + 3) & 0xfffffffe) != 0) {
    unaff_x24[5] = unaff_x25;
    thunk_FUN_03afed3c();
    lVar2 = FUN_070d8b70(&stack0x00000030,0);
    if ((lVar2 != 0) &&
       (lVar3 = thunk_FUN_03ac73c0(lVar2,*(undefined8 *)(*unaff_x24 + 0x40)), lVar3 == 0))
    goto LAB_071783d4;
    if (2 < *(uint *)(unaff_x24 + 3)) {
      unaff_x24[6] = lVar2;
      thunk_FUN_03afed3c(unaff_x24 + 6,lVar2);
      uStack000000000000001c = *(undefined4 *)(unaff_x19 + 0x14);
      lVar2 = thunk_FUN_03ac70f4(*(undefined8 *)(unaff_x28 + 0x48),(long)&stack0x00000018 + 4);
      if ((lVar2 != 0) &&
         (lVar3 = thunk_FUN_03ac73c0(lVar2,*(undefined8 *)(*unaff_x24 + 0x40)), lVar3 == 0))
      goto LAB_071783d4;
      if ((*(uint *)(unaff_x24 + 3) & 0xfffffffc) != 0) {
        unaff_x24[7] = lVar2;
        thunk_FUN_03afed3c(unaff_x24 + 7,lVar2);
        uVar4 = FUN_065ce98c();
        _in_stack_00000020 = FUN_0719ae14(&stack0x00000020,uVar4,0);
        auVar7 = Unity_Netcode_NetworkManager_OnSessionOwnerPromotedDelegateHandler__BeginInvoke
                           (&stack0x00000020,*(uint *)(unaff_x20 + 0x30) & 7,0);
        _in_stack_00000020 = auVar7;
        FUN_0719aa28(&stack0x00000020,*(undefined4 *)(unaff_x19 + 0x2c),0);
        lVar2 = *unaff_x22;
        uVar4 = FUN_065c0764();
        if (lVar2 != 0) {
          auVar7 = FUN_0719a264(lVar2,uVar4,0);
          _in_stack_00000020 = auVar7;
          auVar7 = FUN_0719a7fc(&stack0x00000020,*(undefined4 *)(*(long *)(*unaff_x26 + 0xb8) + 4),0
                               );
          _in_stack_00000020 = auVar7;
          auVar7 = Unity_Netcode_NetworkManager_OnGetSessionConfigHandler__BeginInvoke
                             (&stack0x00000020,*unaff_x27,0);
          _in_stack_00000020 = auVar7;
          uVar4 = FUN_066e1a5c(0);
          iStack0000000000000018 = *(int *)(unaff_x19 + 0x10) + 1;
          uVar5 = thunk_FUN_03ac70f4(*(undefined8 *)(unaff_x28 + 0x48),&stack0x00000018);
          iStack0000000000000014 = *(int *)(unaff_x19 + 0x10) + 3;
          uVar6 = thunk_FUN_03ac70f4(*(undefined8 *)(unaff_x28 + 0x48),(long)&stack0x00000010 + 4);
          puVar1 = PTR_DAT_084e4ec0;
          uVar4 = FUN_065ce8d8(uVar4,*(undefined8 *)PTR_DAT_084e4ec0,uVar5,uVar6,0);
          auVar7 = FUN_0719ae14(&stack0x00000020,uVar4,0);
          _in_stack_00000020 = auVar7;
          auVar7 = Unity_Netcode_NetworkManager_OnSessionOwnerPromotedDelegateHandler__BeginInvoke
                             (&stack0x00000020,*(uint *)(unaff_x20 + 0x30) & 7,0);
          _in_stack_00000020 = auVar7;
          FUN_0719aa28(&stack0x00000020,*(undefined4 *)(unaff_x19 + 0x2c),0);
          lVar2 = *unaff_x22;
          uVar4 = FUN_065c0764();
          if (lVar2 != 0) {
            auVar7 = FUN_0719a264(lVar2,uVar4,0);
            _in_stack_00000020 = auVar7;
            auVar7 = FUN_0719a7fc(&stack0x00000020,*(undefined4 *)(*(long *)(*unaff_x26 + 0xb8) + 4)
                                  ,0);
            _in_stack_00000020 = auVar7;
            auVar7 = Unity_Netcode_NetworkManager_OnGetSessionConfigHandler__BeginInvoke
                               (&stack0x00000020,*unaff_x27,0);
            _in_stack_00000020 = auVar7;
            uVar4 = FUN_066e1a5c(0);
            iStack0000000000000010 = *(int *)(unaff_x19 + 0x10) + 3;
            uVar5 = thunk_FUN_03ac70f4(*(undefined8 *)(unaff_x28 + 0x48),&stack0x00000010);
            iStack000000000000000c = *(int *)(unaff_x19 + 0x10) + 5;
            uVar6 = thunk_FUN_03ac70f4(*(undefined8 *)(unaff_x28 + 0x48),(long)&stack0x00000008 + 4)
            ;
            uVar4 = FUN_065ce8d8(uVar4,*(undefined8 *)puVar1,uVar5,uVar6,0);
            auVar7 = FUN_0719ae14(&stack0x00000020,uVar4,0);
            _in_stack_00000020 = auVar7;
            auVar7 = Unity_Netcode_NetworkManager_OnSessionOwnerPromotedDelegateHandler__BeginInvoke
                               (&stack0x00000020,*(uint *)(unaff_x20 + 0x30) & 7,0);
            _in_stack_00000020 = auVar7;
            FUN_0719aa28(&stack0x00000020,*(undefined4 *)(unaff_x19 + 0x2c),0);
            lVar2 = *unaff_x22;
            uVar4 = FUN_065c0764();
            if (lVar2 != 0) {
              auVar7 = FUN_0719a264(lVar2,uVar4,0);
              _in_stack_00000020 = auVar7;
              auVar7 = FUN_0719a7fc(&stack0x00000020,
                                    *(undefined4 *)(*(long *)(*unaff_x26 + 0xb8) + 4),0);
              _in_stack_00000020 = auVar7;
              auVar7 = Unity_Netcode_NetworkManager_OnGetSessionConfigHandler__BeginInvoke
                                 (&stack0x00000020,*unaff_x27,0);
              _in_stack_00000020 = auVar7;
              uVar4 = FUN_066e1a5c(0);
              iStack0000000000000008 = *(int *)(unaff_x19 + 0x10) + 5;
              uVar5 = thunk_FUN_03ac70f4(*(undefined8 *)(unaff_x28 + 0x48),&stack0x00000008);
              iStack0000000000000004 = *(int *)(unaff_x19 + 0x10) + 7;
              uVar6 = thunk_FUN_03ac70f4(*(undefined8 *)(unaff_x28 + 0x48),&stack0x00000004);
              uVar4 = FUN_065ce8d8(uVar4,*(undefined8 *)puVar1,uVar5,uVar6,0);
              auVar7 = FUN_0719ae14(&stack0x00000020,uVar4,0);
              _in_stack_00000020 = auVar7;
              auVar7 = Unity_Netcode_NetworkManager_OnSessionOwnerPromotedDelegateHandler__BeginInvoke
                                 (&stack0x00000020,*(uint *)(unaff_x20 + 0x30) & 7,0);
              _in_stack_00000020 = auVar7;
              FUN_0719aa28(&stack0x00000020,*(undefined4 *)(unaff_x19 + 0x2c),0);
              return;
            }
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c8();
}


