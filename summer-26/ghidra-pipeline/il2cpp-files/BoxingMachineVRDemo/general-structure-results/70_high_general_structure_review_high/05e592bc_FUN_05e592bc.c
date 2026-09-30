/*
FUNCTION_NAME: FUN_05e592bc
ENTRY_POINT: 05e592bc
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_5;telemetry_or_network_hits_4
*/


long FUN_05e592bc(long param_1,undefined4 param_2,long param_3)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  puVar1 = PTR_DAT_0675e1b8;
  if ((DAT_06b8377f & 1) == 0) {
    FUN_02d6084c(Method_UnityEngine_Rendering_AsyncGPUReadbackRequest_GetData<int>__);
    FUN_02d6084c(Method_UnityEngine_Rendering_AsyncGPUReadbackRequest_GetData<uint>__);
                    /* try { // try from 05e59304 to 05f5939b has its CatchHandler @ 05e59304
                       catch() { ... } // from try @ 05e59304 with catch @ 05e59304
                       catch() { ... } // from try @ 05e5949c with catch @ 05e59304
                       catch() { ... } // from try @ 05e594e8 with catch @ 05e59304
                       catch() { ... } // from try @ 05e59550 with catch @ 05e59304 */
    FUN_02d6084c(Method_System_Runtime_CompilerServices_AsyncMethodBuilderCore_SetStateMachine__);
    FUN_02d6084c(PTR_DAT_06767ea0);
    FUN_02d6084c(Method_Unity_Services_Core_Internal_AsyncOperationAwaiter_GetResult__);
    FUN_02d6084c(PTR_DAT_0675e1b8);
    DAT_06b8377f = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  uVar2 = UnityEngine_Font__add_textureRebuilt(param_3,0,0);
  if ((uVar2 & 1) != 0) {
    return 0;
  }
  lVar3 = thunk_FUN_02d9d534(*(undefined8 *)
                              Method_Unity_Services_Core_Internal_AsyncOperationAwaiter_GetResult__)
  ;
  FUN_05e59494();
  if (lVar3 != 0) {
    *(long *)(lVar3 + 0x18) = param_3;
    thunk_FUN_02dd37b4((long *)(lVar3 + 0x18),param_3);
    if (param_3 != 0) {
      if (*(long *)(param_3 + 0x40) != 0) {
        uVar4 = thunk_FUN_02d709fc(*(long *)(param_3 + 0x40),0);
        if (*(int *)(*(long *)PTR_DAT_06767ea0 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4(*(long *)PTR_DAT_06767ea0);
        }
        uVar4 = FUN_05e59570(uVar4);
        if (*(int *)(*(long *)(PTR_DAT_0675e258 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_02dbd7b4(*(long *)(PTR_DAT_0675e258 + 0xe0));
        }
        uVar2 = FUN_0501fa14(uVar4,0,0);
        if ((uVar2 & 1) != 0) {
          FUN_05e59634(lVar3,uVar4);
        }
      }
      FUN_05e59820(lVar3);
      FUN_05e59a24(lVar3);
      if (*(long *)(param_1 + 0x10) != 0) {
        uVar2 = FUN_047caff8(*(long *)(param_1 + 0x10),param_2,
                             *(undefined8 *)
                              Method_UnityEngine_Rendering_AsyncGPUReadbackRequest_GetData<uint>__);
        lVar5 = *(long *)(param_1 + 0x10);
        if (lVar5 != 0) {
          if ((uVar2 & 1) != 0) {
            FUN_047cadf0(lVar5,param_2,lVar3,
                         *(undefined8 *)
                          Method_System_Runtime_CompilerServices_AsyncMethodBuilderCore_SetStateMachine__
                        );
            return lVar3;
          }
          FUN_047cae04(lVar5,param_2,lVar3,
                       *(undefined8 *)
                        Method_UnityEngine_Rendering_AsyncGPUReadbackRequest_GetData<int>__);
          return lVar3;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


