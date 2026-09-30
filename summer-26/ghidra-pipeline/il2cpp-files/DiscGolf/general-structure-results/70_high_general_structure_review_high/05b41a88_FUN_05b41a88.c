/*
FUNCTION_NAME: FUN_05b41a88
ENTRY_POINT: 05b41a88
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


void FUN_05b41a88(long param_1,long *param_2)

{
  uint uVar1;
  byte bVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  uint uVar10;
  long lVar11;
  long *plVar12;
  
  puVar3 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response>_AwaitUnsafeOnCompleted<TaskAwaiter<HttpClientResponse>,_DataApiClient_<DeletePublicItemsAsync>d__16>__
  ;
  if ((DAT_06dc2137 & 1) == 0) {
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Response>_AwaitUnsafeOnCompleted<TaskAwaiter<HttpClientResponse>,_DataApiClient_<DeletePublicItemsAsync>d__16>__
                );
    FUN_02d965b8(
                System_Linq_Expressions_Interpreter_GreaterThanInstruction_GreaterThanUInt64_TypeInfo
                );
    FUN_02d965b8(
                System_Linq_Expressions_Interpreter_GreaterThanOrEqualInstruction_GreaterThanOrEqualByte_TypeInfo
                );
    FUN_02d965b8(Method_Unity_Properties_ContainerPropertyBag<TransformOrigin>_AddProperty<Length>__
                );
    DAT_06dc2137 = 1;
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  FUN_05b261e8(param_1,param_2,0);
  for (; param_2 != (long *)0x0; param_2 = (long *)param_2[0xc]) {
    if (*(int *)((long)param_2 + 0x5c) != 4) {
      bVar2 = *(byte *)(*(long *)
                         System_Linq_Expressions_Interpreter_GreaterThanOrEqualInstruction_GreaterThanOrEqualByte_TypeInfo
                       + 0x130);
      if ((bVar2 <= *(byte *)(*param_2 + 0x130)) &&
         (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar2 * 8 + -8) ==
          *(long *)
           System_Linq_Expressions_Interpreter_GreaterThanOrEqualInstruction_GreaterThanOrEqualByte_TypeInfo
         )) {
        param_2 = (long *)param_2[0x13];
        if (param_2 == (long *)0x0) break;
        bVar2 = *(byte *)(*(long *)
                           System_Linq_Expressions_Interpreter_GreaterThanInstruction_GreaterThanUInt64_TypeInfo
                         + 0x130);
        if ((bVar2 <= *(byte *)(*param_2 + 0x130)) &&
           (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar2 * 8 + -8) ==
            *(long *)
             System_Linq_Expressions_Interpreter_GreaterThanInstruction_GreaterThanUInt64_TypeInfo))
        {
          lVar9 = param_2[0xc];
          if (lVar9 != 0) {
            uVar5 = FUN_02d966a4(*(undefined8 *)
                                  Method_Unity_Properties_ContainerPropertyBag<TransformOrigin>_AddProperty<Length>__
                                 ,*(undefined4 *)(lVar9 + 0x18));
            puVar8 = (undefined8 *)(param_1 + 0x28);
            *puVar8 = uVar5;
            LeanTween__value(puVar8,uVar5);
            uVar1 = *(uint *)(lVar9 + 0x18);
            if ((int)uVar1 < 1) {
              return;
            }
            uVar10 = 0;
            lVar11 = 0x20;
            goto LAB_05b41be4;
          }
          break;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_02d96be0(param_2);
    }
  }
LAB_05b41b40:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
LAB_05b41be4:
  if (uVar1 <= uVar10) {
LAB_05b41cd0:
                    /* WARNING: Subroutine does not return */
    FUN_02d96868();
  }
  if (*(long *)(lVar9 + lVar11) == 0) goto LAB_05b41b40;
  plVar12 = (long *)*puVar8;
  lVar6 = FUN_05b1b128(*(long *)(lVar9 + lVar11),0);
  if (plVar12 == (long *)0x0) goto LAB_05b41b40;
  if ((lVar6 != 0) &&
     (lVar7 = thunk_FUN_02dd3048(lVar6,*(undefined8 *)(*plVar12 + 0x40)), lVar7 == 0)) {
    uVar5 = thunk_FUN_02de0bec();
                    /* WARNING: Subroutine does not return */
    FUN_02d96724(uVar5,0);
  }
  if (*(uint *)(plVar12 + 3) <= uVar10) goto LAB_05b41cd0;
  *(long *)((long)plVar12 + lVar11) = lVar6;
  LeanTween__value((long)plVar12 + lVar11,lVar6);
  if (*(uint *)(lVar9 + 0x18) <= uVar10) goto LAB_05b41cd0;
  if ((*(long *)(lVar9 + lVar11) == 0) ||
     (plVar12 = *(long **)(*(long *)(lVar9 + lVar11) + 0x68), plVar12 == (long *)0x0))
  goto LAB_05b41b40;
  iVar4 = (**(code **)(*plVar12 + 0x1a8))(plVar12,*(undefined8 *)(*plVar12 + 0x1b0));
  if (iVar4 == 1) {
    *(undefined1 *)(param_1 + 0x31) = 1;
  }
  else {
    if (*(uint *)(lVar9 + 0x18) <= uVar10) goto LAB_05b41cd0;
    if ((*(long *)(lVar9 + lVar11) == 0) ||
       (plVar12 = *(long **)(*(long *)(lVar9 + lVar11) + 0x68), plVar12 == (long *)0x0))
    goto LAB_05b41b40;
    iVar4 = (**(code **)(*plVar12 + 0x1a8))(plVar12,*(undefined8 *)(*plVar12 + 0x1b0));
    if (iVar4 == 0) {
      *(undefined1 *)(param_1 + 0x30) = 1;
    }
  }
  uVar1 = *(uint *)(lVar9 + 0x18);
  uVar10 = uVar10 + 1;
  lVar11 = lVar11 + 8;
  if ((int)uVar1 <= (int)uVar10) {
    return;
  }
  goto LAB_05b41be4;
}


