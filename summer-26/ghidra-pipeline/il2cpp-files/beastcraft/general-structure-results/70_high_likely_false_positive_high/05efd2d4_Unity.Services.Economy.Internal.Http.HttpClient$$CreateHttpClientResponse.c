/*
FUNCTION_NAME: Unity.Services.Economy.Internal.Http.HttpClient$$CreateHttpClientResponse
ENTRY_POINT: 05efd2d4
PROGRAM: beastcraft-libil2cpp.so
SCORE: 73
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


void Unity_Services_Economy_Internal_Http_HttpClient__CreateHttpClientResponse
               (long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  ulong in_stack_000000a8;
  undefined8 in_stack_000000b8;
  
  puVar1 = PTR_DAT_06aaf0b8;
  if ((DAT_06e943b5 & 1) == 0) {
    FUN_02e3ca1c(PTR_DAT_06aaf0b8);
    FUN_02e3ca1c(UnityEngine_InputSystem_InputBindingResolver_var);
    FUN_02e3ca1c(VoxelPlay_InputButtonNames_var);
    FUN_02e3ca1c(UnityEngine_InputSystem_InputControl_var);
    FUN_02e3ca1c(UnityEngine_TextCore_Text_FontWeightPair_var);
    FUN_02e3ca1c(UnityEngine_InputSystem_InputControl<TValue>_var);
    DAT_06e943b5 = 1;
  }
  in_stack_000000b8 = 0;
  in_stack_000000a8 = 0;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02e9a04c();
  }
  if (DAT_06e939f3 == '\0') {
    FUN_02e3ca1c(PTR_DAT_06aaf0b8);
    DAT_06e939f3 = '\x01';
  }
  lVar3 = *(long *)puVar1;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02e9a04c();
    lVar3 = *(long *)puVar1;
  }
  lVar7 = *(long *)(*(long *)(lVar3 + 0xb8) + 8);
  if (lVar7 != 0) {
    if (*(char *)(lVar7 + 0x18) == '\0') {
      return;
    }
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02e9a04c();
    }
    if (DAT_06e939f3 == '\0') {
      FUN_02e3ca1c(PTR_DAT_06aaf0b8);
      DAT_06e939f3 = '\x01';
    }
    lVar3 = *(long *)puVar1;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_02e9a04c();
      lVar3 = *(long *)puVar1;
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 8);
    puVar4 = (undefined8 *)FUN_05f44534(param_3 + 8,0);
    if (lVar3 != 0) {
      uVar5 = FUN_05dd97f0(lVar3,*puVar4,&stack0x000000b8,&stack0x000000a8,0);
      if ((uVar5 & 1) == 0) {
        return;
      }
      plVar6 = (long *)FUN_05f4399c(param_3,0);
      if (*(long *)(param_1 + 0xb8) != 0) {
        lVar3 = *plVar6;
        uVar2 = FUN_06270b60(*(long *)(param_1 + 0xb8),
                             *(undefined8 *)UnityEngine_InputSystem_InputBindingResolver_var,0);
        uVar8 = *(undefined8 *)(param_1 + 0xb8);
        FUN_05e04508(&stack0x00000080,*(undefined8 *)(param_1 + 0xc0),0);
        if (lVar3 != 0) {
          in_stack_00000058 = in_stack_00000088;
          in_stack_00000050 = in_stack_00000080;
          in_stack_00000068 = in_stack_00000098;
          in_stack_00000060 = in_stack_00000090;
          in_stack_00000070 = in_stack_000000a0;
          FUN_06294d48(lVar3,uVar8,uVar2,*(undefined8 *)UnityEngine_TextCore_Text_FontWeightPair_var
                       ,&stack0x00000050,0);
          uVar8 = *(undefined8 *)(param_1 + 0xb8);
          FUN_05e04508(&stack0x00000028,*(undefined8 *)(param_1 + 200),0);
          FUN_06294d48(lVar3,uVar8,uVar2,*(undefined8 *)UnityEngine_InputSystem_InputControl_var);
          FUN_06294b94(in_stack_000000a8 & 0xffffffff,in_stack_000000a8._4_4_,0,0,lVar3,
                       *(undefined8 *)(param_1 + 0xb8),
                       *(undefined8 *)UnityEngine_InputSystem_InputControl<TValue>_var,0);
          FUN_06294f18(lVar3,*(undefined8 *)(param_1 + 0xb8),uVar2,
                       *(undefined8 *)VoxelPlay_InputButtonNames_var,in_stack_000000b8,0);
          thunk_FUN_06289cd0(lVar3,*(undefined8 *)(param_1 + 0xb8),uVar2,1,1,1,0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02e3ccc4();
}


