/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Remove<Dictionary.Entry<object,-PokeInteractor.SurfaceHitCache.HitInfo>>
ENTRY_POINT: 023f5518
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 72
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ray_interaction;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_13;strong_pose_or_ray_construction_hits_8;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_3;source_validity_pose_sink_structure;negative_generic_transform_raycast_without_eye_source_or_attempt
*/


void System_Array__InternalArray__ICollection_Remove<Dictionary_Entry<object,_PokeInteractor_SurfaceHitCache_HitInfo>>
               (long param_1)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
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
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  undefined1 *__dest;
  undefined8 uVar15;
  long unaff_x27;
  long unaff_x29;
  
  thunk_FUN_01efb3a4(*(undefined8 *)(param_1 + 0x330));
  thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
  puVar11 = *(undefined8 **)(unaff_x19 + 0x38);
  if (puVar11 == (undefined8 *)0x0) {
    FUN_01ecafa0();
    puVar11 = *(undefined8 **)(unaff_x19 + 0x38);
  }
  puVar3 = Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__;
  uVar1 = *(uint *)(puVar11[3] + 0xfc);
  __dest = &stack0x00000000 + -((ulong)uVar1 + 0xf & 0x1fffffff0);
  *(undefined8 *)(unaff_x29 + -0x58) = 0;
  *(undefined8 *)(unaff_x29 + -0x50) = 0;
  *(undefined8 *)(unaff_x29 + -0x48) = 0;
  *(undefined8 *)(unaff_x29 + -0x60) = 0;
  uVar15 = *puVar11;
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
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
  uVar15 = **(undefined8 **)(unaff_x19 + 0x38);
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
    FUN_01f08910(uVar7);
  }
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar15 = FUN_03579868(uVar15,0);
  uVar7 = FUN_03579868(*(undefined8 *)
                        Method_UnityEngine_InputSystem_Utilities_CSharpCodeHelpers_IsProperIdentifier__
                       ,0);
  uVar6 = FUN_03582560(uVar15,uVar7,0);
  if ((uVar6 & 1) == 0) {
    lVar8 = FUN_038f3358();
    puVar5 = Method_System_Collections_Generic_Queue<fsVersionedType>_Enqueue__;
    *(undefined8 *)(unaff_x29 + -0x50) = 0;
    *(undefined8 *)(unaff_x29 + -0x48) = 0;
    *(undefined8 *)(unaff_x29 + -0x58) = 0;
    *(undefined8 *)(unaff_x29 + -0x58) = **(undefined8 **)(*(long *)puVar5 + 0xb8);
    thunk_FUN_01f51358(unaff_x29 + -0x58);
    *(undefined1 *)(unaff_x29 + -0x50) = 0xe;
    puVar4 = Method_System_Nullable<AxisAlignedBox_BoxSurface>__ctor__;
    if (unaff_x21 == (long *)0x0) goto LAB_023f5a14;
    *(long *)(unaff_x29 + -0x60) = (long)(int)unaff_x21[3];
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar15 = FUN_03532f80(0);
    uVar15 = FUN_03569988(unaff_x29 + -0x60,uVar15,0);
    *(undefined8 *)(unaff_x29 + -0x48) = uVar15;
    thunk_FUN_01f51358(unaff_x29 + -0x48);
    *(undefined8 *)(unaff_x29 + -0x78) = *(undefined8 *)(unaff_x29 + -0x50);
    *(undefined8 *)(unaff_x29 + -0x80) = *(undefined8 *)(unaff_x29 + -0x58);
    *(undefined8 *)(unaff_x29 + -0x70) = *(undefined8 *)(unaff_x29 + -0x48);
    puVar4 = Method_System_Runtime_Remoting_ConfigHandler_ParseElement__;
    if (lVar8 == 0) goto LAB_023f5a14;
    *(undefined8 *)(unaff_x29 + -0x38) = *(undefined8 *)(unaff_x29 + -0x78);
    *(undefined8 *)(unaff_x29 + -0x40) = *(undefined8 *)(unaff_x29 + -0x80);
    *(undefined8 *)(unaff_x29 + -0x30) = *(undefined8 *)(unaff_x29 + -0x70);
    lVar12 = *(long *)(lVar8 + 0x10);
    lVar14 = *(long *)puVar4;
    *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
    if (lVar12 == 0) goto LAB_023f5a14;
    uVar2 = *(uint *)(lVar8 + 0x18);
    if (uVar2 < *(uint *)(lVar12 + 0x18)) {
      *(uint *)(lVar8 + 0x18) = uVar2 + 1;
      uVar7 = *(undefined8 *)(unaff_x29 + -0x38);
      uVar15 = *(undefined8 *)(unaff_x29 + -0x40);
      lVar12 = lVar12 + (long)(int)uVar2 * 0x18;
      *(undefined8 *)(lVar12 + 0x30) = *(undefined8 *)(unaff_x29 + -0x30);
      *(undefined8 *)(lVar12 + 0x28) = uVar7;
      *(undefined8 *)(lVar12 + 0x20) = uVar15;
      thunk_FUN_01f51358(lVar12 + 0x20,0);
    }
    else {
      uVar15 = *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70);
      *(undefined8 *)(unaff_x29 + -0x18) = *(undefined8 *)(unaff_x29 + -0x38);
      *(undefined8 *)(unaff_x29 + -0x20) = *(undefined8 *)(unaff_x29 + -0x40);
      *(undefined8 *)(unaff_x29 + -0x10) = *(undefined8 *)(unaff_x29 + -0x30);
      FUN_031433d8(lVar8,unaff_x29 + -0x20,uVar15);
    }
    if (unaff_x20 == (long *)0x0) goto LAB_023f5a14;
    FUN_038d84c4();
    lVar8 = unaff_x20[7];
    uVar15 = **(undefined8 **)(unaff_x19 + 0x38);
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar15 = FUN_03579868(uVar15,0);
    if (lVar8 == 0) goto LAB_023f5a14;
    lVar8 = FUN_02b6b264(lVar8,uVar15,
                         *(undefined8 *)
                          Method_UnityEngine_UIElements_CallbackEventHandler_UnregisterCallback<FocusEvent>__
                        );
    lVar12 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x10);
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
    if (0 < (int)unaff_x21[3]) {
      uVar6 = 0;
      uVar13 = unaff_x21[3] & 0xffffffff;
      do {
        if (uVar13 <= uVar6) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a44();
        }
        uVar15 = **(undefined8 **)(*(long *)puVar5 + 0xb8);
        memcpy(__dest,(void *)((long)unaff_x21 + uVar6 * *(uint *)(*unaff_x21 + 0x104) + 0x20),
               (ulong)uVar1);
        if (lVar14 == 0) goto LAB_023f5a14;
        puVar11 = *(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x20);
        uVar7 = *puVar11;
        *(undefined8 *)(unaff_x29 + -0x20) = uVar15;
        *(undefined1 **)(unaff_x29 + -0x18) = __dest;
        (*(code *)puVar11[2])(uVar7,puVar11,lVar14,unaff_x29 + -0x20,__dest);
        uVar13 = (ulong)*(uint *)(unaff_x21 + 3);
        uVar6 = uVar6 + 1;
      } while ((long)uVar6 < (long)(int)*(uint *)(unaff_x21 + 3));
    }
    (**(code **)(*unaff_x20 + 0x468))();
    goto LAB_023f59e4;
  }
  if (*(int *)(*(long *)Method_Unity_Collections_ConcurrentMask_TryAllocate<Long1024>__ + 0xe0) == 0
     ) {
    thunk_FUN_01ee6d7c();
    if (unaff_x21 == (long *)0x0)
    goto System_Array__InternalArray__ICollection_Remove<Dictionary_Entry<ulong,_object>>;
LAB_023f562c:
    lVar8 = thunk_FUN_01f116d0();
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08cfc();
    }
  }
  else {
    if (unaff_x21 != (long *)0x0) goto LAB_023f562c;
System_Array__InternalArray__ICollection_Remove<Dictionary_Entry<ulong,_object>>:
    lVar8 = 0;
  }
  uVar15 = FUN_0391b48c(lVar8,1,0);
  lVar8 = FUN_038f3358();
  puVar3 = Method_System_Collections_Generic_Queue<fsVersionedType>_Enqueue__;
  *(undefined8 *)(unaff_x29 + -0x50) = 0;
  *(undefined8 *)(unaff_x29 + -0x48) = 0;
  *(undefined8 *)(unaff_x29 + -0x58) = 0;
  *(undefined8 *)(unaff_x29 + -0x58) = **(undefined8 **)(*(long *)puVar3 + 0xb8);
  thunk_FUN_01f51358(unaff_x29 + -0x58);
  *(undefined1 *)(unaff_x29 + -0x50) = 0xe;
  *(undefined8 *)(unaff_x29 + -0x48) = uVar15;
  thunk_FUN_01f51358(unaff_x29 + -0x48,uVar15);
  *(undefined8 *)(unaff_x29 + -0x78) = *(undefined8 *)(unaff_x29 + -0x50);
  *(undefined8 *)(unaff_x29 + -0x80) = *(undefined8 *)(unaff_x29 + -0x58);
  *(undefined8 *)(unaff_x29 + -0x70) = *(undefined8 *)(unaff_x29 + -0x48);
  puVar3 = Method_System_Runtime_Remoting_ConfigHandler_ParseElement__;
  if (lVar8 != 0) {
    *(undefined8 *)(unaff_x29 + -0x38) = *(undefined8 *)(unaff_x29 + -0x78);
    *(undefined8 *)(unaff_x29 + -0x40) = *(undefined8 *)(unaff_x29 + -0x80);
    *(undefined8 *)(unaff_x29 + -0x30) = *(undefined8 *)(unaff_x29 + -0x70);
    lVar12 = *(long *)(lVar8 + 0x10);
    lVar14 = *(long *)puVar3;
    *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
    if (lVar12 != 0) {
      uVar1 = *(uint *)(lVar8 + 0x18);
      if (uVar1 < *(uint *)(lVar12 + 0x18)) {
        *(uint *)(lVar8 + 0x18) = uVar1 + 1;
        uVar7 = *(undefined8 *)(unaff_x29 + -0x38);
        uVar15 = *(undefined8 *)(unaff_x29 + -0x40);
        lVar12 = lVar12 + (long)(int)uVar1 * 0x18;
        *(undefined8 *)(lVar12 + 0x30) = *(undefined8 *)(unaff_x29 + -0x30);
        *(undefined8 *)(lVar12 + 0x28) = uVar7;
        *(undefined8 *)(lVar12 + 0x20) = uVar15;
        thunk_FUN_01f51358(lVar12 + 0x20,0);
      }
      else {
        uVar15 = *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70);
        *(undefined8 *)(unaff_x29 + -0x18) = *(undefined8 *)(unaff_x29 + -0x38);
        *(undefined8 *)(unaff_x29 + -0x20) = *(undefined8 *)(unaff_x29 + -0x40);
        *(undefined8 *)(unaff_x29 + -0x10) = *(undefined8 *)(unaff_x29 + -0x30);
        FUN_031433d8(lVar8,unaff_x29 + -0x20,uVar15);
      }
LAB_023f59e4:
      if (*(long *)(unaff_x27 + 0x28) == *(long *)(unaff_x29 + -8)) {
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


