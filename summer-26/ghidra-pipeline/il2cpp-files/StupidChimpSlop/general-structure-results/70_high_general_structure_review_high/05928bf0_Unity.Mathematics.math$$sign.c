/*
FUNCTION_NAME: Unity.Mathematics.math$$sign
ENTRY_POINT: 05928bf0
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 72
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_1;telemetry_or_network_hits_8
*/


long Unity_Mathematics_math__sign(ulong param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  long unaff_x24;
  undefined8 unaff_x26;
  undefined4 unaff_w27;
  
                    /* try { // try from 05928bf8 to 05a28bfb has its CatchHandler @ 05928c08 */
  if ((param_1 & 1) == 0) {
    FUN_02d4dc40(
                Method_Cysharp_Threading_Tasks_TaskPool<UnityAsyncExtensions_ResourceRequestConfiguredSource>_TryPush__
                );
                    /* catch() { ... } // from try @ 05928bf8 with catch @ 05928c08 */
                    /* try { // try from 05928c0c to 05a28c13 has its CatchHandler @ 05928c1c */
    FUN_02d4dc40(Method_System_Collections_Generic_Stack<NCommand>_Push__);
                    /* try { // try from 05928c14 to 05a28c1f has its CatchHandler @ 05928a2c */
    *(undefined1 *)(unaff_x24 + 0x227) = 1;
  }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 05928bd0 with catch @ 05928c1c
                       catch(type#2 @ 00000000) { ... } // from try @ 05928c0c with catch @ 05928c1c
                        */
  if (param_2 == 0) {
    thunk_FUN_02db45e8(PTR_DAT_0664a210);
    uVar5 = thunk_FUN_02d8a638();
    uVar4 = thunk_FUN_02db45e8(
                              Method_Cysharp_Threading_Tasks_TaskPool<UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource>_TryPop__
                              );
    FUN_04f681bc(uVar5,uVar4,0);
  }
  else {
    uVar2 = FUN_04e7faf0(param_3,0);
    if ((uVar2 & 1) == 0) {
      FUN_05915dfc(param_2,0);
      lVar3 = Unity_Mathematics_math__transpose(param_2,param_3,0,0);
      if (lVar3 != 0) {
        uVar4 = thunk_FUN_02db45e8(PTR_DAT_06646310);
        uVar4 = FUN_02d4dd2c(uVar4,5);
        FUN_0291d7ec();
        uVar5 = thunk_FUN_02db45e8(
                                  Method_Cysharp_Threading_Tasks_TaskPool<UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource>_TryPush__
                                  );
        FUN_0291b630(uVar4,0,uVar5);
        FUN_0291b630(uVar4,1,param_3);
        uVar5 = thunk_FUN_02db45e8(
                                  Method_Cysharp_Threading_Tasks_TaskPool<UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource>_get_Size__
                                  );
        FUN_0291b630(uVar4,2,uVar5);
        FUN_0291d7ec(param_2);
        FUN_0291b630(uVar4,3,*(undefined8 *)(param_2 + 0x10));
        uVar5 = thunk_FUN_02db45e8(PTR_DAT_066492f8);
        FUN_0291b630(uVar4,4,uVar5);
        uVar4 = FUN_04e80ce4(uVar4,0);
        thunk_FUN_02db45e8(PTR_DAT_066463b8);
        uVar5 = thunk_FUN_02d8a638();
        FUN_05002ed0(uVar5,uVar4,0);
LAB_05928f10:
        uVar4 = thunk_FUN_02db45e8(
                                  Method_Cysharp_Threading_Tasks_TaskPool<UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource>_TryPop__
                                  );
                    /* WARNING: Subroutine does not return */
        FUN_02d4ddac(uVar5,uVar4);
      }
      lVar3 = thunk_FUN_02d8a638(*(undefined8 *)
                                  Method_System_Collections_Generic_Stack<NCommand>_Push__);
      FUN_05910d08(lVar3,param_3,unaff_w27,0,0,0,0,0);
      puVar1 = 
      Method_Cysharp_Threading_Tasks_TaskPool<UnityAsyncExtensions_ResourceRequestConfiguredSource>_TryPush__
      ;
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d4dee8();
      }
      *(undefined8 *)(lVar3 + 0x20) = unaff_x26;
      thunk_FUN_02dc1ef0();
      FUN_05911d88(lVar3,0);
      FUN_03123b90(param_2 + 0x28,lVar3,*(undefined8 *)puVar1);
      *(long *)(lVar3 + 200) = param_2;
      thunk_FUN_02dc1ef0((long *)(lVar3 + 200),param_2);
      uVar2 = FUN_04e7faf0();
      if ((uVar2 & 1) == 0) {
        FUN_05928f28(&stack0x00000008,lVar3);
      }
      else {
        uVar2 = FUN_04e7faf0();
        if ((uVar2 & 1) == 0) {
          uVar4 = thunk_FUN_02db45e8(
                                    Method_System_Net_Sockets_Socket_TaskSocketAsyncEventArgs<int>__ctor__
                                    );
          uVar4 = FUN_04e80fdc(uVar4,lVar3);
          thunk_FUN_02db45e8(PTR_DAT_06649f68);
          uVar5 = thunk_FUN_02d8a638();
          uVar6 = thunk_FUN_02db45e8(
                                    Method_System_Net_Sockets_Socket_TaskSocketAsyncEventArgs<int>_GetCompletionResponsibility__
                                    );
          FUN_04f68234(uVar5,uVar4,uVar6,0);
          goto LAB_05928f10;
        }
        *(undefined8 *)(lVar3 + 0x38) = unaff_x22;
        thunk_FUN_02dc1ef0();
        *(undefined8 *)(lVar3 + 0x30) = unaff_x21;
        thunk_FUN_02dc1ef0();
        Unity_Mathematics_math__double3x3(param_2,0);
      }
      return lVar3;
    }
    thunk_FUN_02db45e8(PTR_DAT_06649f68);
    uVar5 = thunk_FUN_02d8a638();
    uVar4 = thunk_FUN_02db45e8(
                              Method_Cysharp_Threading_Tasks_TaskPool<UnityAsyncExtensions_ResourceRequestConfiguredSource>_get_Size__
                              );
    uVar6 = thunk_FUN_02db45e8(PTR_DAT_0664d150);
    FUN_04f68234(uVar5,uVar4,uVar6,0);
  }
  uVar4 = thunk_FUN_02db45e8(
                            Method_Cysharp_Threading_Tasks_TaskPool<UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource>_TryPop__
                            );
                    /* WARNING: Subroutine does not return */
  FUN_02d4ddac(uVar5,uVar4);
}


