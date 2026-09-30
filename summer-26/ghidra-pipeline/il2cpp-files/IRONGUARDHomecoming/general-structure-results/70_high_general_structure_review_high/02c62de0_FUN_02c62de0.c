/*
FUNCTION_NAME: FUN_02c62de0
ENTRY_POINT: 02c62de0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_7;ui_or_gameplay_sink_hits_3;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_02c62de0(undefined8 param_1,long *param_2,void *param_3,long param_4)

{
  ushort uVar1;
  long lVar2;
  undefined *puVar3;
  char cVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  void *pvVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  ulong __n;
  void *__s;
  void *local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  char local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined1 local_80;
  undefined8 local_78;
  undefined8 local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  if ((DAT_048314e9 & 1) == 0) {
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_ComputedTransitionUtils_GetWrappingTransitionData<EasingFunction>__
                      );
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_ObjectPool<VisualElementFocusChangeTarget>__ctor__
                      );
    thunk_FUN_01efb3a4(Method_System_Runtime_Remoting_ConfigHandler_ReadPreload__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_get_localPosition__
                      );
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_EventBus_Register<EmptyEventArgs>__);
    thunk_FUN_01efb3a4(Method_System_Linq_Enumerable_Select<ContourVertex,_Vector3>__);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_EventBus_Trigger<EmptyEventArgs>__);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_EventBus_Trigger<AxisEventData>__);
    DAT_048314e9 = 1;
  }
  __n = (ulong)*(uint *)(*(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 8) + 0xfc);
  uVar11 = __n + 0xf & 0x1fffffff0;
  pvVar8 = (void *)((long)&local_b0 - uVar11);
  __s = (void *)((long)pvVar8 - uVar11);
  local_78 = 0;
  local_70 = 0;
  memset(__s,0,__n);
  puVar3 = Method_System_Runtime_Remoting_ConfigHandler_ReadPreload__;
  if (param_2 == (long *)0x0) goto LAB_02c633dc;
  lVar9 = *param_2;
  uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar11 != 0) {
    piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) ==
          *(long *)Method_System_Runtime_Remoting_ConfigHandler_ReadPreload__) {
        puVar5 = (undefined8 *)(lVar9 + (long)(*piVar12 + 0x10) * 0x10 + 0x138);
        goto LAB_02c62f38;
      }
      uVar11 = uVar11 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar11 != 0);
  }
  puVar5 = (undefined8 *)
           FUN_01ecb238(param_2,*(long *)Method_System_Runtime_Remoting_ConfigHandler_ReadPreload__,
                        0x10);
LAB_02c62f38:
  cVar4 = (*(code *)*puVar5)(param_2,&local_70,puVar5[1]);
  lVar10 = *param_2;
  lVar9 = *(long *)puVar3;
  uVar1 = *(ushort *)(lVar10 + 0x12e);
  uVar11 = (ulong)uVar1;
  if (cVar4 == '\x03') {
    if (uVar1 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == lVar9) {
          puVar5 = (undefined8 *)(lVar10 + (long)(*piVar12 + 0x1f) * 0x10 + 0x138);
          goto LAB_02c62fdc;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238(param_2,lVar9,0x1f);
LAB_02c62fdc:
    uVar11 = (*(code *)*puVar5)(param_2,&local_78,puVar5[1]);
    if ((uVar11 & 1) == 0) {
      lVar10 = *param_2;
      lVar9 = *(long *)puVar3;
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == lVar9) {
            puVar5 = (undefined8 *)(lVar10 + (long)(*piVar12 + 8) * 0x10 + 0x138);
            goto LAB_02c63274;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar5 = (undefined8 *)FUN_01ecb238(param_2,lVar9,8);
LAB_02c63274:
      lVar9 = (*(code *)*puVar5)(param_2,puVar5[1]);
      if ((lVar9 == 0) || (lVar9 = FUN_0390b368(lVar9,0), lVar9 == 0)) goto LAB_02c633dc;
      lVar9 = FUN_0390b70c(lVar9,0);
      uVar7 = local_70;
      local_90 = *(undefined8 *)
                  Method_UnityEngine_UIElements_ComputedTransitionUtils_GetWrappingTransitionData<EasingFunction>__
      ;
      uStack_88 = 0xffffffffffffffff;
      local_80 = 3;
      uVar6 = FUN_0359ff90(&local_90,0);
      uVar7 = FUN_0340eee0(*(undefined8 *)
                            Method_Unity_VisualScripting_EventBus_Register<EmptyEventArgs>__,uVar7,
                           *(undefined8 *)
                            Method_System_Linq_Enumerable_Select<ContourVertex,_Vector3>__,uVar6,0);
      if (lVar9 == 0) goto LAB_02c633dc;
      FUN_0390b988(lVar9,uVar7,0);
    }
    uVar7 = **(undefined8 **)(*(long *)(param_4 + 0x20) + 0xc0);
    if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar6 = FUN_03579868(uVar7,0);
    uVar7 = local_78;
    if (*(int *)(*(long *)
                  Method_UnityEngine_UIElements_ObjectPool<VisualElementFocusChangeTarget>__ctor__ +
                0xe0) == 0) {
      thunk_FUN_01ee6d7c(*(long *)
                          Method_UnityEngine_UIElements_ObjectPool<VisualElementFocusChangeTarget>__ctor__
                        );
    }
    uVar7 = FUN_0359e488(uVar6,uVar7,0);
    lVar9 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 8);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_01ecaf44(lVar9);
    }
    pvVar8 = (void *)FUN_01f08934(uVar7,lVar9,pvVar8);
LAB_02c633a4:
    memcpy(param_3,pvVar8,__n);
    if (*(long *)(lVar2 + 0x28) == local_68) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  if (uVar1 != 0) {
    piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == lVar9) {
        puVar5 = (undefined8 *)(lVar10 + (long)(*piVar12 + 8) * 0x10 + 0x138);
        goto LAB_02c63040;
      }
      uVar11 = uVar11 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar11 != 0);
  }
  puVar5 = (undefined8 *)FUN_01ecb238(param_2,lVar9,8);
LAB_02c63040:
  lVar9 = (*(code *)*puVar5)(param_2,puVar5[1]);
  if ((lVar9 != 0) && (lVar9 = FUN_0390b368(lVar9,0), lVar9 != 0)) {
    local_b0 = pvVar8;
    lVar9 = FUN_0390b70c(lVar9,0);
    lVar10 = FUN_01f08890(*(undefined8 *)
                           Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_get_localPosition__
                          ,6);
    if (lVar10 != 0) {
      if (*(int *)(lVar10 + 0x18) == 0) {
LAB_02c633e0:
                    /* WARNING: Subroutine does not return */
        FUN_01f08a44();
      }
      *(undefined8 *)(lVar10 + 0x20) =
           *(undefined8 *)Method_Unity_VisualScripting_EventBus_Trigger<AxisEventData>__;
      thunk_FUN_01f51358((undefined8 *)(lVar10 + 0x20));
      puVar3 = 
      Method_UnityEngine_UIElements_ComputedTransitionUtils_GetWrappingTransitionData<EasingFunction>__
      ;
      local_90 = *(undefined8 *)
                  Method_UnityEngine_UIElements_ComputedTransitionUtils_GetWrappingTransitionData<EasingFunction>__
      ;
      local_80 = 3;
      uStack_88 = 0xffffffffffffffff;
      uVar7 = FUN_0359ff90(&local_90,0);
      if (*(uint *)(lVar10 + 0x18) < 2) goto LAB_02c633e0;
      *(undefined8 *)(lVar10 + 0x28) = uVar7;
      thunk_FUN_01f51358((undefined8 *)(lVar10 + 0x28),uVar7);
      if (*(uint *)(lVar10 + 0x18) < 3) goto LAB_02c633e0;
      *(undefined8 *)(lVar10 + 0x30) =
           *(undefined8 *)Method_Unity_VisualScripting_EventBus_Trigger<EmptyEventArgs>__;
      thunk_FUN_01f51358((undefined8 *)(lVar10 + 0x30));
      if (*(uint *)(lVar10 + 0x18) < 4) goto LAB_02c633e0;
      *(undefined8 *)(lVar10 + 0x38) = local_70;
      thunk_FUN_01f51358((undefined8 *)(lVar10 + 0x38));
      if (*(uint *)(lVar10 + 0x18) < 5) goto LAB_02c633e0;
      *(undefined8 *)(lVar10 + 0x40) =
           *(undefined8 *)Method_System_Linq_Enumerable_Select<ContourVertex,_Vector3>__;
      thunk_FUN_01f51358((undefined8 *)(lVar10 + 0x40));
      local_a8 = *(undefined8 *)puVar3;
      uStack_a0 = 0xffffffffffffffff;
      local_98 = cVar4;
      uVar7 = FUN_0359ff90(&local_a8,0);
      if (*(uint *)(lVar10 + 0x18) < 6) goto LAB_02c633e0;
      *(undefined8 *)(lVar10 + 0x48) = uVar7;
      thunk_FUN_01f51358();
      uVar7 = FUN_0340efe8(lVar10,0);
      if (lVar9 == 0) goto LAB_02c633dc;
      FUN_0390b988(lVar9,uVar7,0);
      lVar9 = *param_2;
      uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) ==
              *(long *)Method_System_Runtime_Remoting_ConfigHandler_ReadPreload__) {
            puVar5 = (undefined8 *)(lVar9 + (long)(*piVar12 + 0x25) * 0x10 + 0x138);
            goto LAB_02c63228;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar5 = (undefined8 *)
               FUN_01ecb238(param_2,*(long *)
                                     Method_System_Runtime_Remoting_ConfigHandler_ReadPreload__,0x25
                           );
LAB_02c63228:
      (*(code *)*puVar5)(param_2,puVar5[1]);
      memset(__s,0,__n);
      pvVar8 = local_b0;
      memcpy(local_b0,__s,__n);
      goto LAB_02c633a4;
    }
  }
LAB_02c633dc:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


