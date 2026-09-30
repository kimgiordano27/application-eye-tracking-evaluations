/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Remove<Dictionary.Entry<object,-TTSServiceLogging.TTSServiceRequestLog>>
ENTRY_POINT: 023f5488
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_13;strong_pose_or_ray_construction_hits_10;ui_or_gameplay_sink_hits_5;telemetry_or_network_hits_2;source_validity_pose_sink_structure;negative_framework_namespace_without_eye_use_flow
*/


void System_Array__InternalArray__ICollection_Remove<Dictionary_Entry<object,_TTSServiceLogging_TTSServiceRequestLog>>
               (long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  void *__dest;
  undefined8 uVar15;
  undefined8 uStack_80;
  void *pvStack_78;
  undefined8 uStack_70;
  long lStack_60;
  undefined8 uStack_58;
  void *pvStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  void *pvStack_38;
  undefined8 uStack_30;
  undefined8 uStack_20;
  void *pvStack_18;
  undefined8 uStack_10;
  long lStack_8;
  
  lVar3 = tpidr_el0;
  lStack_8 = *(long *)(lVar3 + 0x28);
  puVar11 = *(undefined8 **)(param_3 + 0x38);
  if (puVar11 == (undefined8 *)0x0) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<AchievementDefinitionList>__ctor__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_InputSystem_Utilities_CSharpCodeHelpers_IsProperIdentifier__
                      );
    thunk_FUN_01efb3a4(Method_System_Nullable<AxisAlignedBox_BoxSurface>__ctor__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_CallbackEventHandler_UnregisterCallback<FocusEvent>__
                      );
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_CallbackEventHandler_UnregisterCallback<FocusInEvent>__
                      );
    thunk_FUN_01efb3a4(Method_System_Runtime_Remoting_ConfigHandler_ParseElement__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_ConcurrentMask_TryAllocate<Long1024>__);
    thunk_FUN_01efb3a4(Method_System_Collections_Generic_Queue<fsVersionedType>_Enqueue__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
    puVar11 = *(undefined8 **)(param_3 + 0x38);
    if (puVar11 == (undefined8 *)0x0) {
      FUN_01ecafa0(param_3);
      puVar11 = *(undefined8 **)(param_3 + 0x38);
    }
  }
  puVar4 = Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__;
  uVar1 = *(uint *)(puVar11[3] + 0xfc);
  __dest = (void *)((long)&uStack_80 - ((ulong)uVar1 + 0xf & 0x1fffffff0));
  uStack_58 = 0;
  pvStack_50 = (void *)0x0;
  uStack_48 = 0;
  lStack_60 = 0;
  uVar15 = *puVar11;
  if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar15 = FUN_03579868(uVar15,0);
  if (*(int *)(*(long *)
                Method_UnityEngine_UIElements_CallbackEventHandler_UnregisterCallback<FocusInEvent>__
              + 0xe0) == 0) {
    thunk_FUN_01ee6d7c(*(long *)
                        Method_UnityEngine_UIElements_CallbackEventHandler_UnregisterCallback<FocusInEvent>__
                      );
  }
  uVar6 = FUN_03916c60(uVar15,0);
  uVar15 = **(undefined8 **)(param_3 + 0x38);
  if ((uVar6 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
    FUN_01bc4c70();
    plVar9 = (long *)FUN_03579868(uVar15,0);
    FUN_01bc50c0();
    uVar15 = (**(code **)(*plVar9 + 0x1a8))(plVar9,*(undefined8 *)(*plVar9 + 0x1b0));
    uVar7 = thunk_FUN_01efb3a4(
                              Method_UnityEngine_UIElements_CallbackEventHandler_UnregisterCallback<KeyDownEvent>__
                              );
    uVar10 = thunk_FUN_01efb3a4(
                               Method_UnityEngine_UIElements_CallbackEventHandler_UnregisterCallback<KeyUpEvent>__
                               );
    uVar15 = FUN_0340ebc0(uVar7,uVar15,uVar10,0);
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__);
    uVar7 = thunk_FUN_01f117cc();
    FUN_034f6754(uVar7,uVar15,0);
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar7,param_3);
  }
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar15 = FUN_03579868(uVar15,0);
  uVar7 = FUN_03579868(*(undefined8 *)
                        Method_UnityEngine_InputSystem_Utilities_CSharpCodeHelpers_IsProperIdentifier__
                       ,0);
  uVar6 = FUN_03582560(uVar15,uVar7,0);
  if ((uVar6 & 1) == 0) {
    lVar8 = FUN_038f3358(param_1,0);
    puVar5 = Method_System_Collections_Generic_Queue<fsVersionedType>_Enqueue__;
    pvStack_50 = (void *)0x0;
    uStack_48 = 0;
    uStack_58 = **(undefined8 **)
                  (*(long *)Method_System_Collections_Generic_Queue<fsVersionedType>_Enqueue__ +
                  0xb8);
    thunk_FUN_01f51358(&uStack_58);
    pvStack_50 = (void *)CONCAT71(pvStack_50._1_7_,0xe);
    if (param_2 == (long *)0x0) goto LAB_023f5a14;
    lStack_60 = (long)(int)param_2[3];
    if (*(int *)(*(long *)Method_System_Nullable<AxisAlignedBox_BoxSurface>__ctor__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar15 = FUN_03532f80(0);
    uStack_48 = FUN_03569988(&lStack_60,uVar15,0);
    thunk_FUN_01f51358(&uStack_48);
    pvStack_78 = pvStack_50;
    uStack_80 = uStack_58;
    uStack_70 = uStack_48;
    if (lVar8 == 0) goto LAB_023f5a14;
    pvStack_38 = pvStack_50;
    uStack_40 = uStack_58;
    uStack_30 = uStack_48;
    lVar12 = *(long *)(lVar8 + 0x10);
    lVar14 = *(long *)Method_System_Runtime_Remoting_ConfigHandler_ParseElement__;
    *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
    if (lVar12 == 0) goto LAB_023f5a14;
    uVar2 = *(uint *)(lVar8 + 0x18);
    if (uVar2 < *(uint *)(lVar12 + 0x18)) {
      *(uint *)(lVar8 + 0x18) = uVar2 + 1;
      lVar12 = lVar12 + (long)(int)uVar2 * 0x18;
      *(undefined8 *)(lVar12 + 0x30) = uStack_48;
      *(void **)(lVar12 + 0x28) = pvStack_50;
      *(undefined8 *)(lVar12 + 0x20) = uStack_58;
      thunk_FUN_01f51358(lVar12 + 0x20,0);
    }
    else {
      pvStack_18 = pvStack_50;
      uStack_20 = uStack_58;
      uStack_10 = uStack_48;
      FUN_031433d8(lVar8,&uStack_20,
                   *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
    }
    if (param_1 == (long *)0x0) goto LAB_023f5a14;
    FUN_038d84c4(param_1,0);
    lVar8 = param_1[7];
    uVar15 = **(undefined8 **)(param_3 + 0x38);
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar15 = FUN_03579868(uVar15,0);
    if (lVar8 == 0) goto LAB_023f5a14;
    lVar8 = FUN_02b6b264(lVar8,uVar15,
                         *(undefined8 *)
                          Method_UnityEngine_UIElements_CallbackEventHandler_UnregisterCallback<FocusEvent>__
                        );
    lVar12 = *(long *)(*(long *)(param_3 + 0x38) + 0x10);
    if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
      lVar12 = FUN_01ecaf44(lVar12);
    }
    if (lVar8 == 0) {
      lVar14 = 0;
    }
    else {
      lVar14 = thunk_FUN_01f116d0(lVar8,lVar12);
      if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08cfc(lVar8,lVar12);
      }
    }
    if (0 < (int)param_2[3]) {
      uVar6 = 0;
      uVar13 = param_2[3] & 0xffffffff;
      do {
        if (uVar13 <= uVar6) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a44();
        }
        uVar15 = **(undefined8 **)(*(long *)puVar5 + 0xb8);
        memcpy(__dest,(void *)((long)param_2 + uVar6 * *(uint *)(*param_2 + 0x104) + 0x20),
               (ulong)uVar1);
        if (lVar14 == 0) goto LAB_023f5a14;
        puVar11 = *(undefined8 **)(*(long *)(param_3 + 0x38) + 0x20);
        uStack_20 = uVar15;
        pvStack_18 = __dest;
        (*(code *)puVar11[2])(*puVar11,puVar11,lVar14,&uStack_20,__dest);
        uVar13 = (ulong)*(uint *)(param_2 + 3);
        uVar6 = uVar6 + 1;
      } while ((long)uVar6 < (long)(int)*(uint *)(param_2 + 3));
    }
    (**(code **)(*param_1 + 0x468))(param_1,*(undefined8 *)(*param_1 + 0x470));
    goto LAB_023f59e4;
  }
  if (*(int *)(*(long *)Method_Unity_Collections_ConcurrentMask_TryAllocate<Long1024>__ + 0xe0) == 0
     ) {
    thunk_FUN_01ee6d7c();
    if (param_2 == (long *)0x0)
    goto System_Array__InternalArray__ICollection_Remove<Dictionary_Entry<ulong,_object>>;
LAB_023f562c:
    uVar15 = *(undefined8 *)Method_Oculus_Platform_Message<AchievementDefinitionList>__ctor__;
    lVar8 = thunk_FUN_01f116d0(param_2,uVar15);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08cfc(param_2,uVar15);
    }
  }
  else {
    if (param_2 != (long *)0x0) goto LAB_023f562c;
System_Array__InternalArray__ICollection_Remove<Dictionary_Entry<ulong,_object>>:
    lVar8 = 0;
  }
  uVar15 = FUN_0391b48c(lVar8,1,0);
  lVar8 = FUN_038f3358(param_1,0);
  pvStack_50 = (void *)0x0;
  uStack_48 = 0;
  uStack_58 = **(undefined8 **)
                (*(long *)Method_System_Collections_Generic_Queue<fsVersionedType>_Enqueue__ + 0xb8)
  ;
  thunk_FUN_01f51358(&uStack_58);
  pvStack_50 = (void *)CONCAT71(pvStack_50._1_7_,0xe);
  uStack_48 = uVar15;
  thunk_FUN_01f51358(&uStack_48,uVar15);
  pvStack_78 = pvStack_50;
  uStack_80 = uStack_58;
  uStack_70 = uStack_48;
  if (lVar8 != 0) {
    pvStack_38 = pvStack_50;
    uStack_40 = uStack_58;
    uStack_30 = uStack_48;
    lVar12 = *(long *)(lVar8 + 0x10);
    lVar14 = *(long *)Method_System_Runtime_Remoting_ConfigHandler_ParseElement__;
    *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
    if (lVar12 != 0) {
      uVar1 = *(uint *)(lVar8 + 0x18);
      if (uVar1 < *(uint *)(lVar12 + 0x18)) {
        *(uint *)(lVar8 + 0x18) = uVar1 + 1;
        lVar12 = lVar12 + (long)(int)uVar1 * 0x18;
        *(undefined8 *)(lVar12 + 0x30) = uStack_48;
        *(void **)(lVar12 + 0x28) = pvStack_50;
        *(undefined8 *)(lVar12 + 0x20) = uStack_58;
        thunk_FUN_01f51358(lVar12 + 0x20,0);
      }
      else {
        pvStack_18 = pvStack_50;
        uStack_20 = uStack_58;
        uStack_10 = uStack_48;
        FUN_031433d8(lVar8,&uStack_20,
                     *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
      }
LAB_023f59e4:
      if (*(long *)(lVar3 + 0x28) == lStack_8) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
LAB_023f5a14:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


