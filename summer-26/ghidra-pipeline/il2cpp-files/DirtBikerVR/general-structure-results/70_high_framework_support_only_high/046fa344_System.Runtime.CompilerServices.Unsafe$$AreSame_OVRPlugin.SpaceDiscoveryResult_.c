/*
FUNCTION_NAME: System.Runtime.CompilerServices.Unsafe$$AreSame<OVRPlugin.SpaceDiscoveryResult>
ENTRY_POINT: 046fa344
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Runtime_CompilerServices_Unsafe__AreSame<OVRPlugin_SpaceDiscoveryResult>
               (long param_1,undefined8 param_2,undefined8 *param_3,uint param_4,long param_5)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  int iStack000000000000004c;
  
  if (param_1 == 0) {
    FUN_03ac40ec(param_5);
  }
  iStack000000000000004c = 0;
  uVar1 = FUN_04704fb4(param_2,param_3,&stack0x0000004c);
  if (((uVar1 | param_4) & 1) != 0) {
    return;
  }
  if (iStack000000000000004c < 2) {
    if (iStack000000000000004c == 0) {
      return;
    }
    if (iStack000000000000004c == 1) {
      thunk_FUN_03af1434(PTR_DAT_08488490);
      uVar2 = thunk_FUN_03ac74bc();
      uVar3 = thunk_FUN_03af1434(PTR_DAT_08492fa0);
      FUN_066b6070(uVar2,uVar3,0);
      goto 
      System_Runtime_CompilerServices_Unsafe__As<ConnectionDataMap_ConnectionSlot<TCPNetworkInterface_ConnectionData>,_byte>
      ;
    }
  }
  else {
    if (iStack000000000000004c == 2) {
      return;
    }
    if (iStack000000000000004c == 3) {
      in_stack_00000008 = FUN_03514ca0(*(undefined8 *)(param_5 + 0x38),2);
      in_stack_00000020 = param_3[1];
      in_stack_00000018 = *param_3;
      in_stack_00000030 = param_3[3];
      in_stack_00000028 = param_3[2];
      in_stack_00000010 = 0xffffffffffffffff;
      in_stack_00000038 = param_3[4];
      uVar3 = thunk_FUN_03a9a6e8(&stack0x00000008,0);
      thunk_FUN_03af1434(PTR_DAT_08492fa8);
      uVar2 = thunk_FUN_03ac74bc();
      FUN_07d3325c(uVar2,uVar3,0);
      goto 
      System_Runtime_CompilerServices_Unsafe__As<ConnectionDataMap_ConnectionSlot<TCPNetworkInterface_ConnectionData>,_byte>
      ;
    }
  }
  in_stack_00000008 = CONCAT44(in_stack_00000008._4_4_,iStack000000000000004c);
  uVar3 = thunk_FUN_03af1434(PTR_DAT_08492fb0);
  uVar3 = thunk_FUN_03ac70f4(uVar3,&stack0x00000008);
  uVar2 = thunk_FUN_03af1434(PTR_DAT_08492fb8);
  uVar4 = thunk_FUN_03af1434(PTR_DAT_08492fc0);
  uVar3 = FUN_065ce754(uVar2,uVar4,uVar3,0);
  thunk_FUN_03af1434(PTR_DAT_08488858);
  uVar2 = thunk_FUN_03ac74bc();
  FUN_06788354(uVar2,uVar3,0);

  System_Runtime_CompilerServices_Unsafe__As<ConnectionDataMap_ConnectionSlot<TCPNetworkInterface_ConnectionData>,_byte>
  :
                    /* WARNING: Subroutine does not return */
  FUN_03a8a884(uVar2,param_5);
}


