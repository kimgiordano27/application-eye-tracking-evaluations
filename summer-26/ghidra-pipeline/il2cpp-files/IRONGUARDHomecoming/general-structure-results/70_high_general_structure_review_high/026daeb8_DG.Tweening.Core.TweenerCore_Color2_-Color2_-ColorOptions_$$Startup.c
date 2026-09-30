/*
FUNCTION_NAME: DG.Tweening.Core.TweenerCore<Color2,-Color2,-ColorOptions>$$Startup
ENTRY_POINT: 026daeb8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_17;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_3;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void DG_Tweening_Core_TweenerCore<Color2,_Color2,_ColorOptions>__Startup
               (long *param_1,undefined8 param_2)

{
  void *__dest;
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  long lVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  void *__src;
  long lVar9;
  long lVar10;
  long in_x9;
  ulong uVar11;
  int *piVar12;
  long unaff_x20;
  long *unaff_x21;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 uVar13;
  undefined8 uVar14;
  long unaff_x29;
  
  *(undefined8 *)(unaff_x29 + -0x48) = param_2;
  uVar13 = *(undefined8 *)(*(long *)(in_x9 + 0xc0) + 0x30);
  if (*(int *)(*param_1 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c(*param_1);
  }
  puVar2 = Method_System_Runtime_Remoting_ConfigHandler_ReadPreload__;
  uVar13 = FUN_03579868(uVar13,0);
  lVar5 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x38))();
  if (lVar5 == 0) {
    if (unaff_x21 == (long *)0x0) goto LAB_026db81c;
    lVar5 = *unaff_x21;
    uVar11 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
          puVar6 = (undefined8 *)(lVar5 + (long)(*piVar12 + 8) * 0x10 + 0x138);
          goto LAB_026daf70;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238();
LAB_026daf70:
    lVar5 = (*(code *)*puVar6)();
    if ((lVar5 == 0) || (lVar5 = FUN_0390b368(lVar5,0), lVar5 == 0)) goto LAB_026db81c;
    lVar5 = FUN_0390b3d4(lVar5,0);
  }
  if (*(int *)(*(long *)
                Method_UnityEngine_UIElements_CallbackEventHandler_UnregisterCallback<FocusInEvent>__
              + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  *(undefined8 *)(unaff_x29 + -0x70) = unaff_x24;
  *(undefined8 *)(unaff_x29 + -0x68) = unaff_x23;
  lVar5 = FUN_0390b514(uVar13,lVar5,0);
  puVar3 = Method_UnityEngine_Rendering_UI_DebugUIHandlerVector2_<SetWidget>b__6_0__;
  if (unaff_x21 != (long *)0x0) {
    uVar4 = *(uint *)(unaff_x29 + -0x20);
    *(ulong *)(unaff_x29 + -0x50) = (ulong)uVar4;
    *(uint *)(unaff_x29 + -0x7c) = uVar4 + 1;
    *(long *)(unaff_x29 + -0x78) = (long)(int)uVar4;
LAB_026daff4:
    do {
      lVar9 = *unaff_x21;
      uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
            puVar6 = (undefined8 *)(lVar9 + (long)(*piVar12 + 0x10) * 0x10 + 0x138);
            goto LAB_026db044;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar6 = (undefined8 *)FUN_01ecb238();
LAB_026db044:
      uVar4 = (*(code *)*puVar6)();
      if (((uVar4 & 0xff) < 0x10) && ((1 << (ulong)(uVar4 & 0x1f) & 0xa100U) != 0)) {
        *(int *)(unaff_x29 + -0x20) = (int)*(undefined8 *)(unaff_x29 + -0x50);
        lVar5 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x28);
        if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_01ecaf44(lVar5);
        }
        __dest = *(void **)(unaff_x29 + -0x70);
        lVar9 = *(long *)(unaff_x29 + -0x68);
        __src = (void *)FUN_01f08934(*(undefined8 *)(unaff_x29 + -0x48),lVar5,
                                     *(undefined8 *)(unaff_x29 + -0x60));
        memcpy(__dest,__src,*(size_t *)(unaff_x29 + -0x58));
        lVar5 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x28);
        if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_01ecaf44();
        }
        FUN_01f087b0(lVar5,__dest,__src);
        if (*(long *)(lVar9 + 0x28) == *(long *)(unaff_x29 + -8)) {
          return;
        }
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      uVar11 = FUN_0340eec4(*(undefined8 *)(unaff_x29 + -0x10),0);
      if ((uVar11 & 1) != 0) {
        lVar9 = *unaff_x21;
        uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
              puVar6 = (undefined8 *)(lVar9 + (long)(*piVar12 + 8) * 0x10 + 0x138);
              goto LAB_026db1dc;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar6 = (undefined8 *)FUN_01ecb238();
LAB_026db1dc:
        lVar9 = (*(code *)*puVar6)();
        if ((lVar9 == 0) || (lVar9 = FUN_0390b368(lVar9,0), lVar9 == 0)) goto LAB_026db814;
        lVar9 = FUN_0390b70c(lVar9,0);
        lVar8 = FUN_01f08890(*(undefined8 *)
                              Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_get_localPosition__
                             ,5);
        if (lVar8 == 0) goto LAB_026db814;
        if (*(int *)(lVar8 + 0x18) == 0) {
LAB_026db808:
          *(int *)(unaff_x29 + -0x20) = (int)*(undefined8 *)(unaff_x29 + -0x50);
                    /* WARNING: Subroutine does not return */
          FUN_01f08a44();
        }
        *(undefined8 *)(lVar8 + 0x20) =
             *(undefined8 *)
              Method_UnityEngine_Rendering_UI_DebugUIHandlerColor_<SetupSettings>b__11_1__;
        thunk_FUN_01f51358((undefined8 *)(lVar8 + 0x20));
        puVar1 = 
        Method_UnityEngine_UIElements_ComputedTransitionUtils_GetWrappingTransitionData<EasingFunction>__
        ;
        *(char *)(unaff_x29 + -0x30) = (char)uVar4;
        *(undefined8 *)(unaff_x29 + -0x40) = *(undefined8 *)puVar1;
        *(undefined8 *)(unaff_x29 + -0x38) = 0xffffffffffffffff;
        uVar13 = FUN_0359ff90(unaff_x29 + -0x40,0);
        if (*(uint *)(lVar8 + 0x18) < 2) goto LAB_026db808;
        *(undefined8 *)(lVar8 + 0x28) = uVar13;
        thunk_FUN_01f51358((undefined8 *)(lVar8 + 0x28),uVar13);
        if (*(uint *)(lVar8 + 0x18) < 3) goto LAB_026db808;
        *(undefined8 *)(lVar8 + 0x30) = *(undefined8 *)puVar3;
        thunk_FUN_01f51358();
        lVar10 = *unaff_x21;
        uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
              puVar6 = (undefined8 *)(lVar10 + (long)(*piVar12 + 5) * 0x10 + 0x138);
              goto LAB_026db2f4;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar6 = (undefined8 *)FUN_01ecb238();
LAB_026db2f4:
        uVar13 = (*(code *)*puVar6)();
        if (*(uint *)(lVar8 + 0x18) < 4) goto LAB_026db808;
        *(undefined8 *)(lVar8 + 0x38) = uVar13;
        thunk_FUN_01f51358((undefined8 *)(lVar8 + 0x38),uVar13);
        if (*(uint *)(lVar8 + 0x18) < 5) goto LAB_026db808;
        *(undefined8 *)(lVar8 + 0x40) =
             *(undefined8 *)
              Method_UnityEngine_Rendering_UI_DebugUIHandlerColor_<SetupSettings>b__11_0__;
        thunk_FUN_01f51358();
        uVar13 = FUN_0340efe8(lVar8,0);
        if (lVar9 == 0) goto LAB_026db814;
        FUN_0390b840(lVar9,uVar13,0);
        lVar9 = *unaff_x21;
        uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)puVar2) goto LAB_026db658;
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
LAB_026db648:
        puVar6 = (undefined8 *)FUN_01ecb238();
        goto LAB_026db668;
      }
      if (lVar5 == 0) {
LAB_026db814:
        *(int *)(unaff_x29 + -0x20) = (int)*(undefined8 *)(unaff_x29 + -0x50);
        break;
      }
      uVar11 = Unity_Collections_FixedList64Bytes_Enumerator<byte>__Reset
                         (lVar5,*(undefined8 *)(unaff_x29 + -0x10),unaff_x29 + -0x18,
                          *(undefined8 *)
                           Method_UnityEngine_Rendering_UI_DebugUIHandlerColor_<SetWidget>b__9_7__);
      if ((uVar11 & 1) == 0) {
        lVar9 = *unaff_x21;
        uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
              puVar6 = (undefined8 *)(lVar9 + (long)(*piVar12 + 8) * 0x10 + 0x138);
              goto LAB_026db3a8;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar6 = (undefined8 *)FUN_01ecb238();
LAB_026db3a8:
        lVar9 = (*(code *)*puVar6)();
        if ((lVar9 != 0) && (lVar9 = FUN_0390b368(lVar9,0), lVar9 != 0)) {
          lVar9 = FUN_0390b70c(lVar9,0);
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
            *(undefined8 *)(lVar8 + 0x28) = *(undefined8 *)(unaff_x29 + -0x10);
            thunk_FUN_01f51358((undefined8 *)(lVar8 + 0x28));
            if (*(uint *)(lVar8 + 0x18) < 3) goto LAB_026db808;
            *(undefined8 *)(lVar8 + 0x30) =
                 *(undefined8 *)
                  Method_UnityEngine_Rendering_UI_DebugUIHandlerIndirectToggle_OnToggleValueChanged__
            ;
            thunk_FUN_01f51358((undefined8 *)(lVar8 + 0x30));
            puVar1 = 
            Method_UnityEngine_UIElements_ComputedTransitionUtils_GetWrappingTransitionData<EasingFunction>__
            ;
            *(char *)(unaff_x29 + -0x30) = (char)uVar4;
            *(undefined8 *)(unaff_x29 + -0x40) = *(undefined8 *)puVar1;
            *(undefined8 *)(unaff_x29 + -0x38) = 0xffffffffffffffff;
            uVar13 = FUN_0359ff90(unaff_x29 + -0x40,0);
            if (*(uint *)(lVar8 + 0x18) < 4) goto LAB_026db808;
            *(undefined8 *)(lVar8 + 0x38) = uVar13;
            thunk_FUN_01f51358((undefined8 *)(lVar8 + 0x38),uVar13);
            if (*(uint *)(lVar8 + 0x18) < 5) goto LAB_026db808;
            *(undefined8 *)(lVar8 + 0x40) = *(undefined8 *)puVar3;
            thunk_FUN_01f51358();
            lVar10 = *unaff_x21;
            uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
            if (uVar11 != 0) {
              piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
                  puVar6 = (undefined8 *)(lVar10 + (long)(*piVar12 + 5) * 0x10 + 0x138);
                  goto LAB_026db508;
                }
                uVar11 = uVar11 - 1;
                piVar12 = piVar12 + 4;
              } while (uVar11 != 0);
            }
            puVar6 = (undefined8 *)FUN_01ecb238();
LAB_026db508:
            uVar13 = (*(code *)*puVar6)();
            if (*(uint *)(lVar8 + 0x18) < 6) goto LAB_026db808;
            *(undefined8 *)(lVar8 + 0x48) = uVar13;
            thunk_FUN_01f51358((undefined8 *)(lVar8 + 0x48),uVar13);
            if (*(uint *)(lVar8 + 0x18) < 7) goto LAB_026db808;
            *(undefined8 *)(lVar8 + 0x50) =
                 *(undefined8 *)
                  Method_UnityEngine_Rendering_UI_DebugUIHandlerToggle_OnToggleValueChanged__;
            thunk_FUN_01f51358();
            uVar13 = *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x30);
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
            if (lVar9 != 0) {
              FUN_0390b988(lVar9,uVar13,0);
              lVar9 = *unaff_x21;
              uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
              if (uVar11 != 0) {
                piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar12 + -2) == *(long *)puVar2) goto LAB_026db658;
                  uVar11 = uVar11 - 1;
                  piVar12 = piVar12 + 4;
                } while (uVar11 != 0);
              }
              goto LAB_026db648;
            }
          }
        }
        goto LAB_026db814;
      }
      uVar13 = *(undefined8 *)(unaff_x29 + -0x18);
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
      plVar7 = (long *)FUN_0390bc14(uVar13,0);
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar13 = (**(code **)(*plVar7 + 0x178))();
      uVar14 = *(undefined8 *)(unaff_x29 + -0x18);
      if (*(int *)(*(long *)
                    Method_UnityEngine_UIElements_CallbackEventHandler_UnregisterCallback<FocusInEvent>__
                  + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      FUN_0390bc6c(uVar14,*(undefined8 *)(unaff_x29 + -0x48),uVar13,0);
    } while( true );
  }
LAB_026db81c:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
LAB_026db658:
  puVar6 = (undefined8 *)(lVar9 + (long)(*piVar12 + 0x25) * 0x10 + 0x138);
LAB_026db668:
  (*(code *)*puVar6)();
  goto LAB_026daff4;
}


