/*
FUNCTION_NAME: FUN_026dad58
ENTRY_POINT: 026dad58
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_17;strong_pose_or_ray_construction_hits_8;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_4;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_026dad58(undefined8 param_1,void *param_2,long *param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  void *__dest;
  uint uVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  void *__src;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long lVar12;
  undefined1 *__dest_00;
  undefined8 uVar13;
  undefined1 auStack_e0 [4];
  int local_dc;
  long local_d8;
  void *local_d0;
  long lStack_c8;
  undefined1 *local_c0;
  ulong local_b8;
  ulong local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined1 local_90;
  uint local_80;
  undefined8 local_78;
  undefined8 local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  if ((DAT_0483018c & 1) == 0) {
    thunk_FUN_01efb3a4(Method_UnityEngine_Rendering_UI_DebugUIHandlerColor_<SetWidget>b__9_7__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_ComputedTransitionUtils_GetWrappingTransitionData<EasingFunction>__
                      );
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_CallbackEventHandler_UnregisterCallback<FocusInEvent>__
                      );
    thunk_FUN_01efb3a4(Method_System_Runtime_Remoting_ConfigHandler_ReadPreload__);
    thunk_FUN_01efb3a4(Method_System_Runtime_Remoting_ConfigHandler_ReadClientActivated__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_get_localPosition__
                      );
    thunk_FUN_01efb3a4(Method_UnityEngine_Rendering_Universal_ClipperBase_AddPath__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Rendering_UI_DebugUIHandlerColor_<SetupSettings>b__11_0__)
    ;
    thunk_FUN_01efb3a4(Method_UnityEngine_Rendering_UI_DebugUIHandlerColor_<SetupSettings>b__11_1__)
    ;
    thunk_FUN_01efb3a4(Method_UnityEngine_Rendering_UI_DebugUIHandlerColor_<SetupSettings>b__11_2__)
    ;
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_Rendering_UI_DebugUIHandlerIndirectToggle_OnToggleValueChanged__
                      );
    thunk_FUN_01efb3a4(Method_UnityEngine_Rendering_UI_DebugUIHandlerToggle_OnToggleValueChanged__);
    thunk_FUN_01efb3a4(Method_UnityEngine_Rendering_UI_DebugUIHandlerVector2_<SetWidget>b__6_0__);
    thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_ObjectPool<UIRAtlasAllocator_Row>_Release__);
    DAT_0483018c = 1;
  }
  lVar12 = *(long *)(param_4 + 0x20);
  local_b8 = (ulong)*(uint *)(*(long *)(*(long *)(lVar12 + 0xc0) + 0x28) + 0xfc);
  __dest_00 = auStack_e0 + -(local_b8 + 0xf & 0x1fffffff0);
  local_78 = 0;
  local_70 = 0;
  local_80 = 0;
  memcpy(__dest_00,param_2,local_b8);
  local_c0 = __dest_00;
  local_a8 = thunk_FUN_01f113fc(*(undefined8 *)(*(long *)(lVar12 + 0xc0) + 0x28),__dest_00);
  uVar13 = *(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x30);
  if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
  }
  puVar1 = Method_System_Runtime_Remoting_ConfigHandler_ReadPreload__;
  uVar13 = FUN_03579868(uVar13,0);
  lVar12 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x38))(param_1)
  ;
  if (lVar12 == 0) {
    if (param_3 == (long *)0x0) goto LAB_026db81c;
    lVar12 = *param_3;
    uVar10 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
          puVar5 = (undefined8 *)(lVar12 + (long)(*piVar11 + 8) * 0x10 + 0x138);
          goto LAB_026daf70;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238(param_3,*(long *)puVar1,8);
LAB_026daf70:
    lVar12 = (*(code *)*puVar5)(param_3,puVar5[1]);
    if ((lVar12 == 0) || (lVar12 = FUN_0390b368(lVar12,0), lVar12 == 0)) goto LAB_026db81c;
    lVar12 = FUN_0390b3d4(lVar12,0);
  }
  if (*(int *)(*(long *)
                Method_UnityEngine_UIElements_CallbackEventHandler_UnregisterCallback<FocusInEvent>__
              + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  local_d0 = param_2;
  lStack_c8 = lVar4;
  lVar4 = FUN_0390b514(uVar13,lVar12,0);
  puVar2 = Method_UnityEngine_Rendering_UI_DebugUIHandlerVector2_<SetWidget>b__6_0__;
  if (param_3 != (long *)0x0) {
    local_b0 = (ulong)local_80;
    local_dc = local_80 + 1;
    local_d8 = (long)(int)local_80;
LAB_026daff4:
    do {
      lVar12 = *param_3;
      uVar10 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
            puVar5 = (undefined8 *)(lVar12 + (long)(*piVar11 + 0x10) * 0x10 + 0x138);
            goto LAB_026db044;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar5 = (undefined8 *)FUN_01ecb238(param_3,*(long *)puVar1,0x10);
LAB_026db044:
      uVar3 = (*(code *)*puVar5)(param_3,&local_70,puVar5[1]);
      if (((uVar3 & 0xff) < 0x10) && ((1 << (ulong)(uVar3 & 0x1f) & 0xa100U) != 0)) {
        local_80 = (uint)local_b0;
        lVar4 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x28);
        if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_01ecaf44(lVar4);
        }
        lVar12 = lStack_c8;
        __dest = local_d0;
        __src = (void *)FUN_01f08934(local_a8,lVar4,local_c0);
        memcpy(__dest,__src,local_b8);
        lVar4 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x28);
        if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_01ecaf44();
        }
        FUN_01f087b0(lVar4,__dest,__src);
        if (*(long *)(lVar12 + 0x28) == local_68) {
          return;
        }
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      uVar10 = FUN_0340eec4(local_70,0);
      if ((uVar10 & 1) != 0) {
        lVar12 = *param_3;
        uVar10 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
              puVar5 = (undefined8 *)(lVar12 + (long)(*piVar11 + 8) * 0x10 + 0x138);
              goto LAB_026db1dc;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar5 = (undefined8 *)FUN_01ecb238(param_3,*(long *)puVar1,8);
LAB_026db1dc:
        lVar12 = (*(code *)*puVar5)(param_3,puVar5[1]);
        if ((lVar12 == 0) || (lVar12 = FUN_0390b368(lVar12,0), lVar12 == 0)) goto LAB_026db814;
        lVar12 = FUN_0390b70c(lVar12,0);
        lVar8 = FUN_01f08890(*(undefined8 *)
                              Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_get_localPosition__
                             ,5);
        if (lVar8 == 0) goto LAB_026db814;
        if (*(int *)(lVar8 + 0x18) == 0) {
LAB_026db808:
          local_80 = (uint)local_b0;
                    /* WARNING: Subroutine does not return */
          FUN_01f08a44();
        }
        *(undefined8 *)(lVar8 + 0x20) =
             *(undefined8 *)
              Method_UnityEngine_Rendering_UI_DebugUIHandlerColor_<SetupSettings>b__11_1__;
        thunk_FUN_01f51358((undefined8 *)(lVar8 + 0x20));
        local_a0 = *(undefined8 *)
                    Method_UnityEngine_UIElements_ComputedTransitionUtils_GetWrappingTransitionData<EasingFunction>__
        ;
        uStack_98 = 0xffffffffffffffff;
        local_90 = (char)uVar3;
        uVar13 = FUN_0359ff90(&local_a0,0);
        if (*(uint *)(lVar8 + 0x18) < 2) goto LAB_026db808;
        *(undefined8 *)(lVar8 + 0x28) = uVar13;
        thunk_FUN_01f51358((undefined8 *)(lVar8 + 0x28),uVar13);
        if (*(uint *)(lVar8 + 0x18) < 3) goto LAB_026db808;
        *(undefined8 *)(lVar8 + 0x30) = *(undefined8 *)puVar2;
        thunk_FUN_01f51358();
        lVar9 = *param_3;
        uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
              puVar5 = (undefined8 *)(lVar9 + (long)(*piVar11 + 5) * 0x10 + 0x138);
              goto LAB_026db2f4;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar5 = (undefined8 *)FUN_01ecb238(param_3,*(long *)puVar1,5);
LAB_026db2f4:
        uVar13 = (*(code *)*puVar5)(param_3,puVar5[1]);
        if (*(uint *)(lVar8 + 0x18) < 4) goto LAB_026db808;
        *(undefined8 *)(lVar8 + 0x38) = uVar13;
        thunk_FUN_01f51358((undefined8 *)(lVar8 + 0x38),uVar13);
        if (*(uint *)(lVar8 + 0x18) < 5) goto LAB_026db808;
        *(undefined8 *)(lVar8 + 0x40) =
             *(undefined8 *)
              Method_UnityEngine_Rendering_UI_DebugUIHandlerColor_<SetupSettings>b__11_0__;
        thunk_FUN_01f51358();
        uVar13 = FUN_0340efe8(lVar8,0);
        if (lVar12 == 0) goto LAB_026db814;
        FUN_0390b840(lVar12,uVar13,0);
        lVar8 = *param_3;
        lVar12 = *(long *)puVar1;
        uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == lVar12) goto LAB_026db658;
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
LAB_026db648:
        puVar5 = (undefined8 *)FUN_01ecb238(param_3,lVar12,0x25);
        goto LAB_026db668;
      }
      if (lVar4 == 0) {
LAB_026db814:
        local_80 = (uint)local_b0;
        break;
      }
      uVar10 = Unity_Collections_FixedList64Bytes_Enumerator<byte>__Reset
                         (lVar4,local_70,&local_78,
                          *(undefined8 *)
                           Method_UnityEngine_Rendering_UI_DebugUIHandlerColor_<SetWidget>b__9_7__);
      uVar13 = local_78;
      if ((uVar10 & 1) == 0) {
        lVar12 = *param_3;
        uVar10 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
              puVar5 = (undefined8 *)(lVar12 + (long)(*piVar11 + 8) * 0x10 + 0x138);
              goto LAB_026db3a8;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar5 = (undefined8 *)FUN_01ecb238(param_3,*(long *)puVar1,8);
LAB_026db3a8:
        lVar12 = (*(code *)*puVar5)(param_3,puVar5[1]);
        if ((lVar12 != 0) && (lVar12 = FUN_0390b368(lVar12,0), lVar12 != 0)) {
          lVar12 = FUN_0390b70c(lVar12,0);
          lVar8 = FUN_01f08890(*(undefined8 *)
                                Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_get_localPosition__
                               ,9);
          if (lVar8 != 0) {
            if (*(int *)(lVar8 + 0x18) == 0) goto LAB_026db808;
            *(undefined8 *)(lVar8 + 0x20) =
                 *(undefined8 *)
                  Method_UnityEngine_Rendering_UI_DebugUIHandlerColor_<SetupSettings>b__11_2__;
            thunk_FUN_01f51358((undefined8 *)(lVar8 + 0x20));
            if (*(uint *)(lVar8 + 0x18) < 2) goto LAB_026db808;
            *(undefined8 *)(lVar8 + 0x28) = local_70;
            thunk_FUN_01f51358((undefined8 *)(lVar8 + 0x28));
            if (*(uint *)(lVar8 + 0x18) < 3) goto LAB_026db808;
            *(undefined8 *)(lVar8 + 0x30) =
                 *(undefined8 *)
                  Method_UnityEngine_Rendering_UI_DebugUIHandlerIndirectToggle_OnToggleValueChanged__
            ;
            thunk_FUN_01f51358((undefined8 *)(lVar8 + 0x30));
            local_a0 = *(undefined8 *)
                        Method_UnityEngine_UIElements_ComputedTransitionUtils_GetWrappingTransitionData<EasingFunction>__
            ;
            uStack_98 = 0xffffffffffffffff;
            local_90 = (char)uVar3;
            uVar13 = FUN_0359ff90(&local_a0,0);
            if (*(uint *)(lVar8 + 0x18) < 4) goto LAB_026db808;
            *(undefined8 *)(lVar8 + 0x38) = uVar13;
            thunk_FUN_01f51358((undefined8 *)(lVar8 + 0x38),uVar13);
            if (*(uint *)(lVar8 + 0x18) < 5) goto LAB_026db808;
            *(undefined8 *)(lVar8 + 0x40) = *(undefined8 *)puVar2;
            thunk_FUN_01f51358();
            lVar9 = *param_3;
            uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
            if (uVar10 != 0) {
              piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
                  puVar5 = (undefined8 *)(lVar9 + (long)(*piVar11 + 5) * 0x10 + 0x138);
                  goto LAB_026db508;
                }
                uVar10 = uVar10 - 1;
                piVar11 = piVar11 + 4;
              } while (uVar10 != 0);
            }
            puVar5 = (undefined8 *)FUN_01ecb238(param_3,*(long *)puVar1,5);
LAB_026db508:
            uVar13 = (*(code *)*puVar5)(param_3,puVar5[1]);
            if (*(uint *)(lVar8 + 0x18) < 6) goto LAB_026db808;
            *(undefined8 *)(lVar8 + 0x48) = uVar13;
            thunk_FUN_01f51358((undefined8 *)(lVar8 + 0x48),uVar13);
            if (*(uint *)(lVar8 + 0x18) < 7) goto LAB_026db808;
            *(undefined8 *)(lVar8 + 0x50) =
                 *(undefined8 *)
                  Method_UnityEngine_Rendering_UI_DebugUIHandlerToggle_OnToggleValueChanged__;
            thunk_FUN_01f51358();
            uVar13 = *(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x30);
            if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0)
                == 0) {
              thunk_FUN_01ee6d7c();
            }
            uVar13 = FUN_03579868(uVar13,0);
            if (*(int *)(*(long *)Method_UnityEngine_Rendering_Universal_ClipperBase_AddPath__ +
                        0xe0) == 0) {
              thunk_FUN_01ee6d7c(*(long *)
                                  Method_UnityEngine_Rendering_Universal_ClipperBase_AddPath__);
            }
            uVar13 = FUN_0392f7cc(uVar13,0);
            if (*(uint *)(lVar8 + 0x18) < 8) goto LAB_026db808;
            *(undefined8 *)(lVar8 + 0x58) = uVar13;
            thunk_FUN_01f51358((undefined8 *)(lVar8 + 0x58),uVar13);
            if (*(uint *)(lVar8 + 0x18) < 9) goto LAB_026db808;
            *(undefined8 *)(lVar8 + 0x60) =
                 *(undefined8 *)
                  Method_UnityEngine_UIElements_ObjectPool<UIRAtlasAllocator_Row>_Release__;
            thunk_FUN_01f51358();
            uVar13 = FUN_0340efe8(lVar8,0);
            if (lVar12 != 0) {
              FUN_0390b988(lVar12,uVar13,0);
              lVar8 = *param_3;
              lVar12 = *(long *)puVar1;
              uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
              if (uVar10 != 0) {
                piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar11 + -2) == lVar12) goto LAB_026db658;
                  uVar10 = uVar10 - 1;
                  piVar11 = piVar11 + 4;
                } while (uVar10 != 0);
              }
              goto LAB_026db648;
            }
          }
        }
        goto LAB_026db814;
      }
      if (*(int *)(*(long *)
                    Method_UnityEngine_UIElements_CallbackEventHandler_UnregisterCallback<FocusInEvent>__
                  + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar13 = FUN_0390bad0(uVar13,0);
      if (*(int *)(*(long *)Method_System_Runtime_Remoting_ConfigHandler_ReadClientActivated__ +
                  0xe0) == 0) {
        thunk_FUN_01ee6d7c(*(long *)
                            Method_System_Runtime_Remoting_ConfigHandler_ReadClientActivated__);
      }
      plVar6 = (long *)FUN_0390bc14(uVar13,0);
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar7 = (**(code **)(*plVar6 + 0x178))(plVar6,param_3,*(undefined8 *)(*plVar6 + 0x180));
      uVar13 = local_78;
      if (*(int *)(*(long *)
                    Method_UnityEngine_UIElements_CallbackEventHandler_UnregisterCallback<FocusInEvent>__
                  + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      FUN_0390bc6c(uVar13,local_a8,uVar7,0);
    } while( true );
  }
LAB_026db81c:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
LAB_026db658:
  puVar5 = (undefined8 *)(lVar8 + (long)(*piVar11 + 0x25) * 0x10 + 0x138);
LAB_026db668:
  (*(code *)*puVar5)(param_3,puVar5[1]);
  goto LAB_026daff4;
}


