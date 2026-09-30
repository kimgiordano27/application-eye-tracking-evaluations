/*
FUNCTION_NAME: Unity.Services.Core.Internal.DependencyTreeExtensions$$ToJson
ENTRY_POINT: 05f35844
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_8;telemetry_or_network_hits_2
*/


long Unity_Services_Core_Internal_DependencyTreeExtensions__ToJson
               (undefined8 *param_1,undefined8 param_2,long param_3,undefined8 param_4,
               undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  long unaff_x19;
  long lVar5;
  undefined8 uVar6;
  undefined8 unaff_x20;
  long unaff_x21;
  long unaff_x22;
  undefined8 *unaff_x24;
  long unaff_x25;
  ulong unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  long *unaff_x29;
  long in_stack_00000008;
  long in_stack_00000010;
  long in_stack_00000018;
  long in_stack_00000020;
  long in_stack_00000028;
  long in_stack_00000030;
  long in_stack_00000038;
  long in_stack_00000040;
  long in_stack_00000048;
  long in_stack_00000050;
  long in_stack_00000058;
  long in_stack_00000060;
  undefined8 in_stack_00000068;
  
  do {
    FUN_03b6fe3c(param_2,param_3,*param_1,param_5);
    *(undefined8 *)(unaff_x22 + 0x48) = param_2;
    LeanTween__value((undefined8 *)(unaff_x22 + 0x48),param_2);
    if (unaff_x19 == 0) {
LAB_05f35d40:
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    FUN_044193fc(unaff_x19,unaff_x22,*unaff_x24);
    lVar5 = *(long *)(in_stack_00000050 + 0x48);
    lVar2 = thunk_FUN_02dd3144(*unaff_x27);
    FUN_05f394f0(lVar2,0);
    if (lVar2 == 0) goto LAB_05f35d40;
    *(undefined8 *)(lVar2 + 0x28) = unaff_x20;
    LeanTween__value((undefined8 *)(lVar2 + 0x28),unaff_x20);
    uVar3 = thunk_FUN_02dd3144(*unaff_x28);
    FUN_03b6fe3c(uVar3,unaff_x21,
                 *(undefined8 *)
                  Method_System_Threading_ThreadPoolWorkQueue_SparseArray<ThreadPoolWorkQueue_WorkStealingQueue>__ctor__
                 ,0);
    *(undefined8 *)(lVar2 + 0x48) = uVar3;
    LeanTween__value((undefined8 *)(lVar2 + 0x48),uVar3);
    if (lVar5 == 0) goto LAB_05f35d40;
    FUN_044193fc(lVar5,lVar2,*unaff_x24);
    lVar5 = *(long *)(in_stack_00000048 + 0x48);
    lVar2 = thunk_FUN_02dd3144(*unaff_x27);
    FUN_05f394f0(lVar2,0);
    if (lVar2 == 0) goto LAB_05f35d40;
    *(undefined8 *)(lVar2 + 0x28) = unaff_x20;
    LeanTween__value((undefined8 *)(lVar2 + 0x28),unaff_x20);
    uVar3 = thunk_FUN_02dd3144(*unaff_x28);
    FUN_03b6fe3c(uVar3,unaff_x21,
                 *(undefined8 *)
                  Method_System_Threading_ThreadPoolWorkQueue_SparseArray<ThreadPoolWorkQueue_WorkStealingQueue>_Add__
                 ,0);
    *(undefined8 *)(lVar2 + 0x48) = uVar3;
    LeanTween__value((undefined8 *)(lVar2 + 0x48),uVar3);
    if (lVar5 == 0) goto LAB_05f35d40;
    FUN_044193fc(lVar5,lVar2,*unaff_x24);
    lVar5 = *(long *)(in_stack_00000040 + 0x48);
    lVar2 = thunk_FUN_02dd3144(*unaff_x27);
    FUN_05f394f0(lVar2,0);
    if (lVar2 == 0) goto LAB_05f35d40;
    *(undefined8 *)(lVar2 + 0x28) = unaff_x20;
    LeanTween__value((undefined8 *)(lVar2 + 0x28),unaff_x20);
    uVar3 = thunk_FUN_02dd3144(*unaff_x28);
    FUN_03b6fe3c(uVar3,unaff_x21,
                 *(undefined8 *)
                  Method_System_Threading_ThreadPoolWorkQueue_SparseArray<ThreadPoolWorkQueue_WorkStealingQueue>_Remove__
                 ,0);
    *(undefined8 *)(lVar2 + 0x48) = uVar3;
    LeanTween__value((undefined8 *)(lVar2 + 0x48),uVar3);
    if (lVar5 == 0) goto LAB_05f35d40;
    FUN_044193fc(lVar5,lVar2,*unaff_x24);
    lVar5 = *(long *)(in_stack_00000038 + 0x48);
    lVar2 = thunk_FUN_02dd3144(*unaff_x27);
    FUN_05f394f0(lVar2,0);
    if (lVar2 == 0) goto LAB_05f35d40;
    *(undefined8 *)(lVar2 + 0x28) = unaff_x20;
    LeanTween__value((undefined8 *)(lVar2 + 0x28),unaff_x20);
    uVar3 = thunk_FUN_02dd3144(*unaff_x28);
    FUN_03b6fe3c(uVar3,unaff_x21,
                 *(undefined8 *)
                  Method_System_Threading_ThreadPoolWorkQueue_SparseArray<ThreadPoolWorkQueue_WorkStealingQueue>_get_Current__
                 ,0);
    *(undefined8 *)(lVar2 + 0x48) = uVar3;
    LeanTween__value((undefined8 *)(lVar2 + 0x48),uVar3);
    if (lVar5 == 0) goto LAB_05f35d40;
    FUN_044193fc(lVar5,lVar2,*unaff_x24);
    lVar5 = *(long *)(in_stack_00000030 + 0x48);
    lVar2 = thunk_FUN_02dd3144(*unaff_x27);
    FUN_05f394f0(lVar2,0);
    if (lVar2 == 0) goto LAB_05f35d40;
    *(undefined8 *)(lVar2 + 0x28) = unaff_x20;
    LeanTween__value((undefined8 *)(lVar2 + 0x28),unaff_x20);
    uVar3 = thunk_FUN_02dd3144(*unaff_x28);
    FUN_03b6fe3c(uVar3,unaff_x21,
                 *(undefined8 *)
                  Method_System_Threading_SparselyPopulatedArrayAddInfo<CancellationCallbackInfo>_get_Index__
                 ,0);
    *(undefined8 *)(lVar2 + 0x48) = uVar3;
    LeanTween__value((undefined8 *)(lVar2 + 0x48),uVar3);
    if (lVar5 == 0) goto LAB_05f35d40;
    FUN_044193fc(lVar5,lVar2,*unaff_x24);
    lVar5 = *(long *)(in_stack_00000028 + 0x48);
    lVar2 = thunk_FUN_02dd3144(*unaff_x27);
    FUN_05f394f0(lVar2,0);
    if (lVar2 == 0) goto LAB_05f35d40;
    *(undefined8 *)(lVar2 + 0x28) = unaff_x20;
    LeanTween__value((undefined8 *)(lVar2 + 0x28),unaff_x20);
    uVar3 = thunk_FUN_02dd3144(*unaff_x28);
    FUN_03b6fe3c(uVar3,unaff_x21,
                 *(undefined8 *)
                  Method_System_Threading_SparselyPopulatedArrayAddInfo<CancellationCallbackInfo>_get_Source__
                 ,0);
    *(undefined8 *)(lVar2 + 0x48) = uVar3;
    LeanTween__value((undefined8 *)(lVar2 + 0x48),uVar3);
    if (lVar5 == 0) goto LAB_05f35d40;
    FUN_044193fc(lVar5,lVar2,*unaff_x24);
    lVar5 = *(long *)(in_stack_00000020 + 0x48);
    lVar2 = thunk_FUN_02dd3144(*unaff_x27);
    FUN_05f394f0(lVar2,0);
    if (lVar2 == 0) goto LAB_05f35d40;
    *(undefined8 *)(lVar2 + 0x28) = unaff_x20;
    LeanTween__value((undefined8 *)(lVar2 + 0x28),unaff_x20);
    uVar3 = thunk_FUN_02dd3144(*unaff_x28);
    FUN_03b6fe3c(uVar3,unaff_x21,
                 *(undefined8 *)
                  Method_System_Threading_SparselyPopulatedArrayFragment<CancellationCallbackInfo>_SafeAtomicRemove__
                 ,0);
    *(undefined8 *)(lVar2 + 0x48) = uVar3;
    LeanTween__value((undefined8 *)(lVar2 + 0x48),uVar3);
    if (lVar5 == 0) goto LAB_05f35d40;
    FUN_044193fc(lVar5,lVar2,*unaff_x24);
    lVar5 = *(long *)(in_stack_00000018 + 0x48);
    lVar2 = thunk_FUN_02dd3144(*unaff_x27);
    FUN_05f394f0(lVar2,0);
    if (lVar2 == 0) goto LAB_05f35d40;
    *(undefined8 *)(lVar2 + 0x28) = unaff_x20;
    LeanTween__value((undefined8 *)(lVar2 + 0x28),unaff_x20);
    uVar3 = thunk_FUN_02dd3144(*unaff_x28);
    FUN_03b6fe3c(uVar3,unaff_x21,
                 *(undefined8 *)
                  Method_System_Threading_SparselyPopulatedArrayFragment<CancellationCallbackInfo>_get_Item__
                 ,0);
    *(undefined8 *)(lVar2 + 0x48) = uVar3;
    LeanTween__value((undefined8 *)(lVar2 + 0x48),uVar3);
    puVar1 = 
    Method_Unity_XR_CoreUtils_ScriptableSettingsBase<XRDeviceSimulatorSettings>_GetFilePath__;
    if (lVar5 == 0) goto LAB_05f35d40;
    FUN_044193fc(lVar5,lVar2,*unaff_x24);
    if ((long)*(int *)(unaff_x25 + 0x18) <= (long)unaff_x26) {
      if (*(long *)(in_stack_00000008 + 0x48) != 0) {
        FUN_044193fc(*(long *)(in_stack_00000008 + 0x48),in_stack_00000060,*unaff_x24);
        if (*(long *)(in_stack_00000008 + 0x48) != 0) {
          FUN_044193fc(*(long *)(in_stack_00000008 + 0x48),in_stack_00000058,*unaff_x24);
          if (*(long *)(in_stack_00000008 + 0x48) != 0) {
            FUN_044193fc(*(long *)(in_stack_00000008 + 0x48),in_stack_00000050,*unaff_x24);
            if (*(long *)(in_stack_00000008 + 0x48) != 0) {
              FUN_044193fc(*(long *)(in_stack_00000008 + 0x48),in_stack_00000048,*unaff_x24);
              if (*(long *)(in_stack_00000008 + 0x48) != 0) {
                FUN_044193fc(*(long *)(in_stack_00000008 + 0x48),in_stack_00000040,*unaff_x24);
                if (*(long *)(in_stack_00000008 + 0x48) != 0) {
                  FUN_044193fc(*(long *)(in_stack_00000008 + 0x48),in_stack_00000038,*unaff_x24);
                  if (*(long *)(in_stack_00000008 + 0x48) != 0) {
                    FUN_044193fc(*(long *)(in_stack_00000008 + 0x48),in_stack_00000030,*unaff_x24);
                    if (*(long *)(in_stack_00000008 + 0x48) != 0) {
                      FUN_044193fc(*(long *)(in_stack_00000008 + 0x48),in_stack_00000028,*unaff_x24)
                      ;
                      if (*(long *)(in_stack_00000008 + 0x48) != 0) {
                        FUN_044193fc(*(long *)(in_stack_00000008 + 0x48),in_stack_00000020,
                                     *unaff_x24);
                        if (*(long *)(in_stack_00000008 + 0x48) != 0) {
                          FUN_044193fc(*(long *)(in_stack_00000008 + 0x48),in_stack_00000018,
                                       *unaff_x24);
                          return in_stack_00000008;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      goto LAB_05f35d40;
    }
    param_3 = thunk_FUN_02dd3144(*(undefined8 *)
                                  Method_System_Threading_SparselyPopulatedArrayFragment<CancellationCallbackInfo>_get_Length__
                                );
    FUN_05f36988(param_3,0);
    if (*(uint *)(unaff_x25 + 0x18) <= unaff_x26) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96868();
    }
    if (param_3 == 0) goto LAB_05f35d40;
    plVar4 = (long *)(param_3 + 0x10);
    *plVar4 = *(long *)(in_stack_00000010 + unaff_x26 * 8);
    LeanTween__value(plVar4);
    lVar2 = *unaff_x29;
    unaff_x26 = unaff_x26 + 1;
    in_stack_00000068._4_4_ = (undefined4)unaff_x26;
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_02df485c();
      lVar2 = *unaff_x29;
    }
    uVar6 = *(undefined8 *)(*(long *)(lVar2 + 0xb8) + 8);
    uVar3 = FUN_054e5768((long)&stack0x00000068 + 4,0);
    unaff_x20 = FUN_05362cb4(uVar6,uVar3,0);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_02df485c(*(long *)puVar1);
    }
    lVar2 = FUN_0631776c(0);
    if (lVar2 == *plVar4) {
      lVar2 = *unaff_x29;
      if (*(int *)(lVar2 + 0xe4) == 0) {
        thunk_FUN_02df485c();
        lVar2 = *unaff_x29;
      }
      unaff_x20 = FUN_05362cb4(unaff_x20,*(undefined8 *)(*(long *)(lVar2 + 0xb8) + 0x10),0);
    }
    lVar5 = *(long *)(in_stack_00000060 + 0x48);
    lVar2 = thunk_FUN_02dd3144(*unaff_x27);
    FUN_05f394f0(lVar2,0);
    if (lVar2 == 0) goto LAB_05f35d40;
    *(undefined8 *)(lVar2 + 0x28) = unaff_x20;
    LeanTween__value((undefined8 *)(lVar2 + 0x28),unaff_x20);
    uVar3 = thunk_FUN_02dd3144(*unaff_x28);
    FUN_03b6fe3c(uVar3,param_3,*(undefined8 *)Method_System_Span<jvalue>_get_Length__,0);
    *(undefined8 *)(lVar2 + 0x48) = uVar3;
    LeanTween__value((undefined8 *)(lVar2 + 0x48),uVar3);
    if (lVar5 == 0) goto LAB_05f35d40;
    FUN_044193fc(lVar5,lVar2,*unaff_x24);
    unaff_x19 = *(long *)(in_stack_00000058 + 0x48);
    unaff_x22 = thunk_FUN_02dd3144(*unaff_x27);
    FUN_05f394f0(unaff_x22,0);
    if (unaff_x22 == 0) goto LAB_05f35d40;
    *(undefined8 *)(unaff_x22 + 0x28) = unaff_x20;
    LeanTween__value((undefined8 *)(unaff_x22 + 0x28),unaff_x20);
    param_2 = thunk_FUN_02dd3144(*unaff_x28);
    param_5 = 0;
    param_1 = (undefined8 *)Method_System_Span<jvalue>_op_Implicit__;
    unaff_x21 = param_3;
  } while( true );
}


