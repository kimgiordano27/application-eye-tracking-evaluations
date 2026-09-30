/*
FUNCTION_NAME: DG.Tweening.Core.TweenerCore<Color2,-Color2,-ColorOptions>$$ApplyTween
ENTRY_POINT: 026daec8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 86
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_17;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_3;source_validity_pose_sink_structure
*/


void DG_Tweening_Core_TweenerCore<Color2,_Color2,_ColorOptions>__ApplyTween(long param_1)

{
  void *__dest;
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  void *__src;
  long lVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  long unaff_x20;
  long *unaff_x21;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 uVar14;
  long unaff_x29;
  
  if (*(int *)(param_1 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c(param_1);
  }
  puVar2 = Method_System_Runtime_Remoting_ConfigHandler_ReadPreload__;
  uVar5 = FUN_03579868();
  lVar6 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x38))();
  if (lVar6 == 0) {
    if (unaff_x21 == (long *)0x0) goto LAB_026db81c;
    lVar6 = *unaff_x21;
    uVar12 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)puVar2) {
          puVar7 = (undefined8 *)(lVar6 + (long)(*piVar13 + 8) * 0x10 + 0x138);
          goto LAB_026daf70;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar7 = (undefined8 *)FUN_01ecb238();
LAB_026daf70:
    lVar6 = (*(code *)*puVar7)();
    if ((lVar6 == 0) || (lVar6 = FUN_0390b368(lVar6,0), lVar6 == 0)) goto LAB_026db81c;
    lVar6 = FUN_0390b3d4(lVar6,0);
  }
  if (*(int *)(*(long *)
                Method_UnityEngine_UIElements_CallbackEventHandler_UnregisterCallback<FocusInEvent>__
              + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  *(undefined8 *)(unaff_x29 + -0x70) = unaff_x24;
  *(undefined8 *)(unaff_x29 + -0x68) = unaff_x23;
  lVar6 = FUN_0390b514(uVar5,lVar6,0);
  puVar3 = Method_UnityEngine_Rendering_UI_DebugUIHandlerVector2_<SetWidget>b__6_0__;
  if (unaff_x21 != (long *)0x0) {
    uVar4 = *(uint *)(unaff_x29 + -0x20);
    *(ulong *)(unaff_x29 + -0x50) = (ulong)uVar4;
    *(uint *)(unaff_x29 + -0x7c) = uVar4 + 1;
    *(long *)(unaff_x29 + -0x78) = (long)(int)uVar4;
LAB_026daff4:
    do {
      lVar10 = *unaff_x21;
      uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)puVar2) {
            puVar7 = (undefined8 *)(lVar10 + (long)(*piVar13 + 0x10) * 0x10 + 0x138);
            goto LAB_026db044;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar7 = (undefined8 *)FUN_01ecb238();
LAB_026db044:
      uVar4 = (*(code *)*puVar7)();
      if (((uVar4 & 0xff) < 0x10) && ((1 << (ulong)(uVar4 & 0x1f) & 0xa100U) != 0)) {
        *(int *)(unaff_x29 + -0x20) = (int)*(undefined8 *)(unaff_x29 + -0x50);
        lVar6 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x28);
        if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_01ecaf44(lVar6);
        }
        __dest = *(void **)(unaff_x29 + -0x70);
        lVar10 = *(long *)(unaff_x29 + -0x68);
        __src = (void *)FUN_01f08934(*(undefined8 *)(unaff_x29 + -0x48),lVar6,
                                     *(undefined8 *)(unaff_x29 + -0x60));
        memcpy(__dest,__src,*(size_t *)(unaff_x29 + -0x58));
        lVar6 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x28);
        if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_01ecaf44();
        }
        FUN_01f087b0(lVar6,__dest,__src);
        if (*(long *)(lVar10 + 0x28) == *(long *)(unaff_x29 + -8)) {
          return;
        }
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      uVar12 = FUN_0340eec4(*(undefined8 *)(unaff_x29 + -0x10),0);
      if ((uVar12 & 1) != 0) {
        lVar10 = *unaff_x21;
        uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *(long *)puVar2) {
              puVar7 = (undefined8 *)(lVar10 + (long)(*piVar13 + 8) * 0x10 + 0x138);
              goto LAB_026db1dc;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        puVar7 = (undefined8 *)FUN_01ecb238();
LAB_026db1dc:
        lVar10 = (*(code *)*puVar7)();
        if ((lVar10 == 0) || (lVar10 = FUN_0390b368(lVar10,0), lVar10 == 0)) goto LAB_026db814;
        lVar10 = FUN_0390b70c(lVar10,0);
        lVar9 = FUN_01f08890(*(undefined8 *)
                              Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_get_localPosition__
                             ,5);
        if (lVar9 == 0) goto LAB_026db814;
        if (*(int *)(lVar9 + 0x18) == 0) {
LAB_026db808:
          *(int *)(unaff_x29 + -0x20) = (int)*(undefined8 *)(unaff_x29 + -0x50);
                    /* WARNING: Subroutine does not return */
          FUN_01f08a44();
        }
        *(undefined8 *)(lVar9 + 0x20) =
             *(undefined8 *)
              Method_UnityEngine_Rendering_UI_DebugUIHandlerColor_<SetupSettings>b__11_1__;
        thunk_FUN_01f51358((undefined8 *)(lVar9 + 0x20));
        puVar1 = 
        Method_UnityEngine_UIElements_ComputedTransitionUtils_GetWrappingTransitionData<EasingFunction>__
        ;
        *(char *)(unaff_x29 + -0x30) = (char)uVar4;
        *(undefined8 *)(unaff_x29 + -0x40) = *(undefined8 *)puVar1;
        *(undefined8 *)(unaff_x29 + -0x38) = 0xffffffffffffffff;
        uVar5 = FUN_0359ff90(unaff_x29 + -0x40,0);
        if (*(uint *)(lVar9 + 0x18) < 2) goto LAB_026db808;
        *(undefined8 *)(lVar9 + 0x28) = uVar5;
        thunk_FUN_01f51358((undefined8 *)(lVar9 + 0x28),uVar5);
        if (*(uint *)(lVar9 + 0x18) < 3) goto LAB_026db808;
        *(undefined8 *)(lVar9 + 0x30) = *(undefined8 *)puVar3;
        thunk_FUN_01f51358();
        lVar11 = *unaff_x21;
        uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *(long *)puVar2) {
              puVar7 = (undefined8 *)(lVar11 + (long)(*piVar13 + 5) * 0x10 + 0x138);
              goto LAB_026db2f4;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        puVar7 = (undefined8 *)FUN_01ecb238();
LAB_026db2f4:
        uVar5 = (*(code *)*puVar7)();
        if (*(uint *)(lVar9 + 0x18) < 4) goto LAB_026db808;
        *(undefined8 *)(lVar9 + 0x38) = uVar5;
        thunk_FUN_01f51358((undefined8 *)(lVar9 + 0x38),uVar5);
        if (*(uint *)(lVar9 + 0x18) < 5) goto LAB_026db808;
        *(undefined8 *)(lVar9 + 0x40) =
             *(undefined8 *)
              Method_UnityEngine_Rendering_UI_DebugUIHandlerColor_<SetupSettings>b__11_0__;
        thunk_FUN_01f51358();
        uVar5 = FUN_0340efe8(lVar9,0);
        if (lVar10 == 0) goto LAB_026db814;
        FUN_0390b840(lVar10,uVar5,0);
        lVar10 = *unaff_x21;
        uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *(long *)puVar2) goto LAB_026db658;
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
LAB_026db648:
        puVar7 = (undefined8 *)FUN_01ecb238();
        goto LAB_026db668;
      }
      if (lVar6 == 0) {
LAB_026db814:
        *(int *)(unaff_x29 + -0x20) = (int)*(undefined8 *)(unaff_x29 + -0x50);
        break;
      }
      uVar12 = Unity_Collections_FixedList64Bytes_Enumerator<byte>__Reset
                         (lVar6,*(undefined8 *)(unaff_x29 + -0x10),unaff_x29 + -0x18,
                          *(undefined8 *)
                           Method_UnityEngine_Rendering_UI_DebugUIHandlerColor_<SetWidget>b__9_7__);
      if ((uVar12 & 1) == 0) {
        lVar10 = *unaff_x21;
        uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *(long *)puVar2) {
              puVar7 = (undefined8 *)(lVar10 + (long)(*piVar13 + 8) * 0x10 + 0x138);
              goto LAB_026db3a8;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        puVar7 = (undefined8 *)FUN_01ecb238();
LAB_026db3a8:
        lVar10 = (*(code *)*puVar7)();
        if ((lVar10 != 0) && (lVar10 = FUN_0390b368(lVar10,0), lVar10 != 0)) {
          lVar10 = FUN_0390b70c(lVar10,0);
          lVar9 = FUN_01f08890(*(undefined8 *)
                                Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_get_localPosition__
                               ,9);
          if (lVar9 != 0) {
            if (*(int *)(lVar9 + 0x18) == 0) goto LAB_026db808;
            *(undefined8 *)(lVar9 + 0x20) =
                 *(undefined8 *)
                  Method_UnityEngine_Rendering_UI_DebugUIHandlerColor_<SetupSettings>b__11_2__;
            thunk_FUN_01f51358((undefined8 *)(lVar9 + 0x20));
            if (*(uint *)(lVar9 + 0x18) < 2) goto LAB_026db808;
            *(undefined8 *)(lVar9 + 0x28) = *(undefined8 *)(unaff_x29 + -0x10);
            thunk_FUN_01f51358((undefined8 *)(lVar9 + 0x28));
            if (*(uint *)(lVar9 + 0x18) < 3) goto LAB_026db808;
            *(undefined8 *)(lVar9 + 0x30) =
                 *(undefined8 *)
                  Method_UnityEngine_Rendering_UI_DebugUIHandlerIndirectToggle_OnToggleValueChanged__
            ;
            thunk_FUN_01f51358((undefined8 *)(lVar9 + 0x30));
            puVar1 = 
            Method_UnityEngine_UIElements_ComputedTransitionUtils_GetWrappingTransitionData<EasingFunction>__
            ;
            *(char *)(unaff_x29 + -0x30) = (char)uVar4;
            *(undefined8 *)(unaff_x29 + -0x40) = *(undefined8 *)puVar1;
            *(undefined8 *)(unaff_x29 + -0x38) = 0xffffffffffffffff;
            uVar5 = FUN_0359ff90(unaff_x29 + -0x40,0);
            if (*(uint *)(lVar9 + 0x18) < 4) goto LAB_026db808;
            *(undefined8 *)(lVar9 + 0x38) = uVar5;
            thunk_FUN_01f51358((undefined8 *)(lVar9 + 0x38),uVar5);
            if (*(uint *)(lVar9 + 0x18) < 5) goto LAB_026db808;
            *(undefined8 *)(lVar9 + 0x40) = *(undefined8 *)puVar3;
            thunk_FUN_01f51358();
            lVar11 = *unaff_x21;
            uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
            if (uVar12 != 0) {
              piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == *(long *)puVar2) {
                  puVar7 = (undefined8 *)(lVar11 + (long)(*piVar13 + 5) * 0x10 + 0x138);
                  goto LAB_026db508;
                }
                uVar12 = uVar12 - 1;
                piVar13 = piVar13 + 4;
              } while (uVar12 != 0);
            }
            puVar7 = (undefined8 *)FUN_01ecb238();
LAB_026db508:
            uVar5 = (*(code *)*puVar7)();
            if (*(uint *)(lVar9 + 0x18) < 6) goto LAB_026db808;
            *(undefined8 *)(lVar9 + 0x48) = uVar5;
            thunk_FUN_01f51358((undefined8 *)(lVar9 + 0x48),uVar5);
            if (*(uint *)(lVar9 + 0x18) < 7) goto LAB_026db808;
            *(undefined8 *)(lVar9 + 0x50) =
                 *(undefined8 *)
                  Method_UnityEngine_Rendering_UI_DebugUIHandlerToggle_OnToggleValueChanged__;
            thunk_FUN_01f51358();
            uVar5 = *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x30);
            if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0)
                == 0) {
              thunk_FUN_01ee6d7c();
            }
            uVar5 = FUN_03579868(uVar5,0);
            if (*(int *)(*(long *)Method_UnityEngine_Rendering_Universal_ClipperBase_AddPath__ +
                        0xe0) == 0) {
              thunk_FUN_01ee6d7c(*(long *)
                                  Method_UnityEngine_Rendering_Universal_ClipperBase_AddPath__);
            }
            uVar5 = FUN_0392f7cc(uVar5,0);
            if (*(uint *)(lVar9 + 0x18) < 8) goto LAB_026db808;
            *(undefined8 *)(lVar9 + 0x58) = uVar5;
            thunk_FUN_01f51358((undefined8 *)(lVar9 + 0x58),uVar5);
            if (*(uint *)(lVar9 + 0x18) < 9) goto LAB_026db808;
            *(undefined8 *)(lVar9 + 0x60) =
                 *(undefined8 *)
                  Method_UnityEngine_UIElements_ObjectPool<UIRAtlasAllocator_Row>_Release__;
            thunk_FUN_01f51358();
            uVar5 = FUN_0340efe8(lVar9,0);
            if (lVar10 != 0) {
              FUN_0390b988(lVar10,uVar5,0);
              lVar10 = *unaff_x21;
              uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
              if (uVar12 != 0) {
                piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar13 + -2) == *(long *)puVar2) goto LAB_026db658;
                  uVar12 = uVar12 - 1;
                  piVar13 = piVar13 + 4;
                } while (uVar12 != 0);
              }
              goto LAB_026db648;
            }
          }
        }
        goto LAB_026db814;
      }
      uVar5 = *(undefined8 *)(unaff_x29 + -0x18);
      if (*(int *)(*(long *)
                    Method_UnityEngine_UIElements_CallbackEventHandler_UnregisterCallback<FocusInEvent>__
                  + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar5 = FUN_0390bad0(uVar5,0);
      if (*(int *)(*(long *)Method_System_Runtime_Remoting_ConfigHandler_ReadClientActivated__ +
                  0xe0) == 0) {
        thunk_FUN_01ee6d7c(*(long *)
                            Method_System_Runtime_Remoting_ConfigHandler_ReadClientActivated__);
      }
      plVar8 = (long *)FUN_0390bc14(uVar5,0);
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar5 = (**(code **)(*plVar8 + 0x178))();
      uVar14 = *(undefined8 *)(unaff_x29 + -0x18);
      if (*(int *)(*(long *)
                    Method_UnityEngine_UIElements_CallbackEventHandler_UnregisterCallback<FocusInEvent>__
                  + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      FUN_0390bc6c(uVar14,*(undefined8 *)(unaff_x29 + -0x48),uVar5,0);
    } while( true );
  }
LAB_026db81c:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
LAB_026db658:
  puVar7 = (undefined8 *)(lVar10 + (long)(*piVar13 + 0x25) * 0x10 + 0x138);
LAB_026db668:
  (*(code *)*puVar7)();
  goto LAB_026daff4;
}


