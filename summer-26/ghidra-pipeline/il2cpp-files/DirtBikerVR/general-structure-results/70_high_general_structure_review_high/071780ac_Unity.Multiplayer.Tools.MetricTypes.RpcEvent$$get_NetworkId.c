/*
FUNCTION_NAME: Unity.Multiplayer.Tools.MetricTypes.RpcEvent$$get_NetworkId
ENTRY_POINT: 071780ac
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_3;ui_or_gameplay_sink_hits_6;telemetry_or_network_hits_6
*/


void Unity_Multiplayer_Tools_MetricTypes_RpcEvent__get_NetworkId(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x22;
  long lVar5;
  long *unaff_x26;
  undefined8 *unaff_x27;
  long unaff_x28;
  undefined1 auVar6 [16];
  int iStack0000000000000004;
  int iStack0000000000000008;
  int iStack000000000000000c;
  int iStack0000000000000010;
  int iStack0000000000000014;
  int in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  
  lVar5 = *unaff_x22;
  uVar2 = FUN_065c0764(param_2,**(undefined8 **)(param_1 + 0xeb8),0);
  if (lVar5 != 0) {
    _in_stack_00000020 = FUN_0719a264(lVar5,uVar2,0);
    auVar6 = FUN_0719a7fc(&stack0x00000020,*(undefined4 *)(*(long *)(*unaff_x26 + 0xb8) + 4),0);
    _in_stack_00000020 = auVar6;
    auVar6 = Unity_Netcode_NetworkManager_OnGetSessionConfigHandler__BeginInvoke
                       (&stack0x00000020,*unaff_x27,0);
    _in_stack_00000020 = auVar6;
    uVar2 = FUN_066e1a5c(0);
    in_stack_00000018 = *(int *)(unaff_x19 + 0x10) + 1;
    uVar3 = thunk_FUN_03ac70f4(*(undefined8 *)(unaff_x28 + 0x48),&stack0x00000018);
    iStack0000000000000014 = *(int *)(unaff_x19 + 0x10) + 3;
    uVar4 = thunk_FUN_03ac70f4(*(undefined8 *)(unaff_x28 + 0x48),(long)&stack0x00000010 + 4);
    puVar1 = PTR_DAT_084e4ec0;
    uVar2 = FUN_065ce8d8(uVar2,*(undefined8 *)PTR_DAT_084e4ec0,uVar3,uVar4,0);
    auVar6 = FUN_0719ae14(&stack0x00000020,uVar2,0);
    _in_stack_00000020 = auVar6;
    auVar6 = Unity_Netcode_NetworkManager_OnSessionOwnerPromotedDelegateHandler__BeginInvoke
                       (&stack0x00000020,*(uint *)(unaff_x20 + 0x30) & 7,0);
    _in_stack_00000020 = auVar6;
    FUN_0719aa28(&stack0x00000020,*(undefined4 *)(unaff_x19 + 0x2c),0);
    lVar5 = *unaff_x22;
    uVar2 = FUN_065c0764();
    if (lVar5 != 0) {
      auVar6 = FUN_0719a264(lVar5,uVar2,0);
      _in_stack_00000020 = auVar6;
      auVar6 = FUN_0719a7fc(&stack0x00000020,*(undefined4 *)(*(long *)(*unaff_x26 + 0xb8) + 4),0);
      _in_stack_00000020 = auVar6;
      auVar6 = Unity_Netcode_NetworkManager_OnGetSessionConfigHandler__BeginInvoke
                         (&stack0x00000020,*unaff_x27,0);
      _in_stack_00000020 = auVar6;
      uVar2 = FUN_066e1a5c(0);
      iStack0000000000000010 = *(int *)(unaff_x19 + 0x10) + 3;
      uVar3 = thunk_FUN_03ac70f4(*(undefined8 *)(unaff_x28 + 0x48),&stack0x00000010);
      iStack000000000000000c = *(int *)(unaff_x19 + 0x10) + 5;
      uVar4 = thunk_FUN_03ac70f4(*(undefined8 *)(unaff_x28 + 0x48),(long)&stack0x00000008 + 4);
      uVar2 = FUN_065ce8d8(uVar2,*(undefined8 *)puVar1,uVar3,uVar4,0);
      auVar6 = FUN_0719ae14(&stack0x00000020,uVar2,0);
      _in_stack_00000020 = auVar6;
      auVar6 = Unity_Netcode_NetworkManager_OnSessionOwnerPromotedDelegateHandler__BeginInvoke
                         (&stack0x00000020,*(uint *)(unaff_x20 + 0x30) & 7,0);
      _in_stack_00000020 = auVar6;
      FUN_0719aa28(&stack0x00000020,*(undefined4 *)(unaff_x19 + 0x2c),0);
      lVar5 = *unaff_x22;
      uVar2 = FUN_065c0764();
      if (lVar5 != 0) {
        auVar6 = FUN_0719a264(lVar5,uVar2,0);
        _in_stack_00000020 = auVar6;
        auVar6 = FUN_0719a7fc(&stack0x00000020,*(undefined4 *)(*(long *)(*unaff_x26 + 0xb8) + 4),0);
        _in_stack_00000020 = auVar6;
        auVar6 = Unity_Netcode_NetworkManager_OnGetSessionConfigHandler__BeginInvoke
                           (&stack0x00000020,*unaff_x27,0);
        _in_stack_00000020 = auVar6;
        uVar2 = FUN_066e1a5c(0);
        iStack0000000000000008 = *(int *)(unaff_x19 + 0x10) + 5;
        uVar3 = thunk_FUN_03ac70f4(*(undefined8 *)(unaff_x28 + 0x48),&stack0x00000008);
        iStack0000000000000004 = *(int *)(unaff_x19 + 0x10) + 7;
        uVar4 = thunk_FUN_03ac70f4(*(undefined8 *)(unaff_x28 + 0x48),&stack0x00000004);
        uVar2 = FUN_065ce8d8(uVar2,*(undefined8 *)puVar1,uVar3,uVar4,0);
        auVar6 = FUN_0719ae14(&stack0x00000020,uVar2,0);
        _in_stack_00000020 = auVar6;
        auVar6 = Unity_Netcode_NetworkManager_OnSessionOwnerPromotedDelegateHandler__BeginInvoke
                           (&stack0x00000020,*(uint *)(unaff_x20 + 0x30) & 7,0);
        _in_stack_00000020 = auVar6;
        FUN_0719aa28(&stack0x00000020,*(undefined4 *)(unaff_x19 + 0x2c),0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


