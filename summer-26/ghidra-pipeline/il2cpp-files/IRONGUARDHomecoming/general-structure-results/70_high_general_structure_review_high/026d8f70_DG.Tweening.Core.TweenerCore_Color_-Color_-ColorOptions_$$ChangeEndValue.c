/*
FUNCTION_NAME: DG.Tweening.Core.TweenerCore<Color,-Color,-ColorOptions>$$ChangeEndValue
ENTRY_POINT: 026d8f70
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_17;strong_pose_or_ray_construction_hits_8;ui_or_gameplay_sink_hits_3;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void DG_Tweening_Core_TweenerCore<Color,_Color,_ColorOptions>__ChangeEndValue(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  uint uVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  undefined8 *unaff_x22;
  long unaff_x24;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 in_stack_00000020;
  undefined4 in_stack_00000028;
  undefined4 uStack000000000000002c;
  undefined4 in_stack_00000030;
  undefined8 uStack0000000000000034;
  undefined4 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  
  thunk_FUN_01efb3a4(*(undefined8 *)(param_1 + 0x700));
  thunk_FUN_01efb3a4(Method_System_Runtime_Remoting_ConfigHandler_ReadPreload__);
  thunk_FUN_01efb3a4(Method_System_Runtime_Remoting_ConfigHandler_ReadClientActivated__);
  thunk_FUN_01efb3a4(
                    Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_get_localPosition__
                    );
  thunk_FUN_01efb3a4(Method_UnityEngine_Rendering_Universal_ClipperBase_AddPath__);
  thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
  thunk_FUN_01efb3a4(Method_UnityEngine_Rendering_UI_DebugUIHandlerColor_<SetupSettings>b__11_0__);
  thunk_FUN_01efb3a4(Method_UnityEngine_Rendering_UI_DebugUIHandlerColor_<SetupSettings>b__11_1__);
  thunk_FUN_01efb3a4(Method_UnityEngine_Rendering_UI_DebugUIHandlerColor_<SetupSettings>b__11_2__);
  thunk_FUN_01efb3a4(
                    Method_UnityEngine_Rendering_UI_DebugUIHandlerIndirectToggle_OnToggleValueChanged__
                    );
  thunk_FUN_01efb3a4(Method_UnityEngine_Rendering_UI_DebugUIHandlerToggle_OnToggleValueChanged__);
  thunk_FUN_01efb3a4(Method_UnityEngine_Rendering_UI_DebugUIHandlerVector2_<SetWidget>b__6_0__);
  thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_ObjectPool<UIRAtlasAllocator_Row>_Release__);
  *(undefined1 *)(unaff_x19 + 0x188) = 1;
  in_stack_00000050 = 0;
  in_stack_00000058 = 0;
  in_stack_00000048 = 0;
  uStack0000000000000034 = *(undefined8 *)((long)unaff_x22 + 0x14);
  in_stack_00000020 = *unaff_x22;
  in_stack_00000030 = (undefined4)((ulong)*(undefined8 *)((long)unaff_x22 + 0xc) >> 0x20);
  in_stack_00000028 = (undefined4)unaff_x22[1];
  uStack000000000000002c = (undefined4)((ulong)unaff_x22[1] >> 0x20);
  plVar5 = (long *)thunk_FUN_01f113fc(*(undefined8 *)
                                       (*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x28),
                                      &stack0x00000020);
  uVar15 = *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x30);
  if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__);
  }
  puVar1 = Method_System_Runtime_Remoting_ConfigHandler_ReadPreload__;
  uVar15 = FUN_03579868(uVar15,0);
  lVar14 = *(long *)(unaff_x24 + 0x10);
  if (lVar14 == 0) {
    uVar3 = in_stack_00000048;
    if (unaff_x21 == (long *)0x0) goto LAB_026d9970;
    lVar14 = *unaff_x21;
    uVar12 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)puVar1) {
          puVar6 = (undefined8 *)(lVar14 + (long)(*piVar13 + 8) * 0x10 + 0x138);
          goto LAB_026d90ec;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238();
LAB_026d90ec:
    lVar14 = (*(code *)*puVar6)();
    uVar3 = in_stack_00000048;
    if ((lVar14 == 0) || (lVar14 = FUN_0390b368(lVar14,0), uVar3 = in_stack_00000048, lVar14 == 0))
    goto LAB_026d9970;
    lVar14 = FUN_0390b3d4(lVar14,0);
  }
  if (*(int *)(*(long *)
                Method_UnityEngine_UIElements_CallbackEventHandler_UnregisterCallback<FocusInEvent>__
              + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  lVar14 = FUN_0390b514(uVar15,lVar14,0);
  uVar3 = in_stack_00000048;
  puVar2 = Method_UnityEngine_Rendering_UI_DebugUIHandlerVector2_<SetWidget>b__6_0__;
  if (unaff_x21 != (long *)0x0) {
LAB_026d916c:
    lVar10 = *unaff_x21;
    uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)puVar1) {
          puVar6 = (undefined8 *)(lVar10 + (long)(*piVar13 + 0x10) * 0x10 + 0x138);
          goto LAB_026d91bc;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238();
LAB_026d91bc:
    uVar4 = (*(code *)*puVar6)();
    if (((uVar4 & 0xff) < 0x10) && ((1 << (ulong)(uVar4 & 0x1f) & 0xa100U) != 0)) {
      lVar14 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x28);
      in_stack_00000048 = uVar3;
      if ((*(byte *)(lVar14 + 0x135) & 1) == 0) {
        lVar14 = FUN_01ecaf44(lVar14);
      }
      uVar3 = in_stack_00000048;
      if (plVar5 != (long *)0x0) {
        if (*(long *)(*plVar5 + 0x40) == *(long *)(lVar14 + 0x40)) {
          puVar6 = (undefined8 *)thunk_FUN_01f11920();
          uVar15 = *puVar6;
          uVar16 = *(undefined8 *)((long)puVar6 + 0x14);
          uVar8 = *(undefined8 *)((long)puVar6 + 0xc);
          unaff_x22[1] = puVar6[1];
          *unaff_x22 = uVar15;
          *(undefined8 *)((long)unaff_x22 + 0x14) = uVar16;
          *(undefined8 *)((long)unaff_x22 + 0xc) = uVar8;
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_01f08cfc(plVar5);
      }
    }
    else {
      uVar12 = FUN_0340eec4(in_stack_00000058,0);
      if ((uVar12 & 1) == 0) {
        if (lVar14 != 0) {
          uVar12 = Unity_Collections_FixedList64Bytes_Enumerator<byte>__Reset
                             (lVar14,in_stack_00000058,&stack0x00000050,
                              *(undefined8 *)
                               Method_UnityEngine_Rendering_UI_DebugUIHandlerColor_<SetWidget>b__9_7__
                             );
          uVar15 = in_stack_00000050;
          if ((uVar12 & 1) != 0) goto code_r0x026d9264;
          lVar10 = *unaff_x21;
          uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar12 != 0) {
            piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == *(long *)puVar1) {
                puVar6 = (undefined8 *)(lVar10 + (long)(*piVar13 + 8) * 0x10 + 0x138);
                goto FUN_026d9520;
              }
              uVar12 = uVar12 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar12 != 0);
          }
          puVar6 = (undefined8 *)FUN_01ecb238();
FUN_026d9520:
          lVar10 = (*(code *)*puVar6)();
          if ((lVar10 != 0) && (lVar10 = FUN_0390b368(lVar10,0), lVar10 != 0)) {
            lVar10 = FUN_0390b70c(lVar10,0);
            lVar9 = FUN_01f08890(*(undefined8 *)
                                  Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_get_localPosition__
                                 ,9);
            if (lVar9 != 0) {
              if (*(int *)(lVar9 + 0x18) == 0) goto LAB_026d995c;
              *(undefined8 *)(lVar9 + 0x20) =
                   *(undefined8 *)
                    Method_UnityEngine_Rendering_UI_DebugUIHandlerColor_<SetupSettings>b__11_2__;
              thunk_FUN_01f51358((undefined8 *)(lVar9 + 0x20));
              if (*(uint *)(lVar9 + 0x18) < 2) goto LAB_026d995c;
              *(undefined8 *)(lVar9 + 0x28) = in_stack_00000058;
              thunk_FUN_01f51358((undefined8 *)(lVar9 + 0x28));
              if (*(uint *)(lVar9 + 0x18) < 3) goto LAB_026d995c;
              *(undefined8 *)(lVar9 + 0x30) =
                   *(undefined8 *)
                    Method_UnityEngine_Rendering_UI_DebugUIHandlerIndirectToggle_OnToggleValueChanged__
              ;
              thunk_FUN_01f51358((undefined8 *)(lVar9 + 0x30));
              in_stack_00000030 = CONCAT31(in_stack_00000030._1_3_,(char)uVar4);
              in_stack_00000020 =
                   *(undefined8 *)
                    Method_UnityEngine_UIElements_ComputedTransitionUtils_GetWrappingTransitionData<EasingFunction>__
              ;
              in_stack_00000028 = 0xffffffff;
              uStack000000000000002c = 0xffffffff;
              uVar15 = FUN_0359ff90(&stack0x00000020,0);
              if (*(uint *)(lVar9 + 0x18) < 4) goto LAB_026d995c;
              *(undefined8 *)(lVar9 + 0x38) = uVar15;
              thunk_FUN_01f51358((undefined8 *)(lVar9 + 0x38),uVar15);
              if (*(uint *)(lVar9 + 0x18) < 5) goto LAB_026d995c;
              *(undefined8 *)(lVar9 + 0x40) = *(undefined8 *)puVar2;
              thunk_FUN_01f51358();
              lVar11 = *unaff_x21;
              uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
              if (uVar12 != 0) {
                piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar13 + -2) == *(long *)puVar1) {
                    puVar6 = (undefined8 *)(lVar11 + (long)(*piVar13 + 5) * 0x10 + 0x138);
                    goto LAB_026d9680;
                  }
                  uVar12 = uVar12 - 1;
                  piVar13 = piVar13 + 4;
                } while (uVar12 != 0);
              }
              puVar6 = (undefined8 *)FUN_01ecb238();
LAB_026d9680:
              uVar15 = (*(code *)*puVar6)();
              if (*(uint *)(lVar9 + 0x18) < 6) goto LAB_026d995c;
              *(undefined8 *)(lVar9 + 0x48) = uVar15;
              thunk_FUN_01f51358((undefined8 *)(lVar9 + 0x48),uVar15);
              if (*(uint *)(lVar9 + 0x18) < 7) goto LAB_026d995c;
              *(undefined8 *)(lVar9 + 0x50) =
                   *(undefined8 *)
                    Method_UnityEngine_Rendering_UI_DebugUIHandlerToggle_OnToggleValueChanged__;
              thunk_FUN_01f51358();
              uVar15 = *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x30);
              if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0
                          ) == 0) {
                thunk_FUN_01ee6d7c();
              }
              uVar15 = FUN_03579868(uVar15,0);
              if (*(int *)(*(long *)Method_UnityEngine_Rendering_Universal_ClipperBase_AddPath__ +
                          0xe0) == 0) {
                thunk_FUN_01ee6d7c(*(long *)
                                    Method_UnityEngine_Rendering_Universal_ClipperBase_AddPath__);
              }
              uVar15 = FUN_0392f7cc(uVar15,0);
              if (*(uint *)(lVar9 + 0x18) < 8) goto LAB_026d995c;
              *(undefined8 *)(lVar9 + 0x58) = uVar15;
              thunk_FUN_01f51358((undefined8 *)(lVar9 + 0x58),uVar15);
              if (*(uint *)(lVar9 + 0x18) < 9) goto LAB_026d995c;
              *(undefined8 *)(lVar9 + 0x60) =
                   *(undefined8 *)
                    Method_UnityEngine_UIElements_ObjectPool<UIRAtlasAllocator_Row>_Release__;
              thunk_FUN_01f51358();
              uVar15 = FUN_0340efe8(lVar9,0);
              if (lVar10 != 0) {
                FUN_0390b988(lVar10,uVar15,0);
                lVar10 = *unaff_x21;
                uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
                if (uVar12 != 0) {
                  piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar13 + -2) == *(long *)puVar1) goto LAB_026d97d0;
                    uVar12 = uVar12 - 1;
                    piVar13 = piVar13 + 4;
                  } while (uVar12 != 0);
                }
                goto LAB_026d97c0;
              }
            }
          }
        }
      }
      else {
        lVar10 = *unaff_x21;
        uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *(long *)puVar1) {
              puVar6 = (undefined8 *)(lVar10 + (long)(*piVar13 + 8) * 0x10 + 0x138);
              goto LAB_026d9354;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        puVar6 = (undefined8 *)FUN_01ecb238();
LAB_026d9354:
        lVar10 = (*(code *)*puVar6)();
        if ((lVar10 != 0) && (lVar10 = FUN_0390b368(lVar10,0), lVar10 != 0)) {
          lVar10 = FUN_0390b70c(lVar10,0);
          lVar9 = FUN_01f08890(*(undefined8 *)
                                Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_get_localPosition__
                               ,5);
          if (lVar9 != 0) {
            if (*(int *)(lVar9 + 0x18) == 0) {
LAB_026d995c:
              in_stack_00000048 = uVar3;
                    /* WARNING: Subroutine does not return */
              FUN_01f08a44();
            }
            *(undefined8 *)(lVar9 + 0x20) =
                 *(undefined8 *)
                  Method_UnityEngine_Rendering_UI_DebugUIHandlerColor_<SetupSettings>b__11_1__;
            thunk_FUN_01f51358((undefined8 *)(lVar9 + 0x20));
            in_stack_00000030 = CONCAT31(in_stack_00000030._1_3_,(char)uVar4);
            in_stack_00000020 =
                 *(undefined8 *)
                  Method_UnityEngine_UIElements_ComputedTransitionUtils_GetWrappingTransitionData<EasingFunction>__
            ;
            in_stack_00000028 = 0xffffffff;
            uStack000000000000002c = 0xffffffff;
            uVar15 = FUN_0359ff90(&stack0x00000020,0);
            if (*(uint *)(lVar9 + 0x18) < 2) goto LAB_026d995c;
            *(undefined8 *)(lVar9 + 0x28) = uVar15;
            thunk_FUN_01f51358((undefined8 *)(lVar9 + 0x28),uVar15);
            if (*(uint *)(lVar9 + 0x18) < 3) goto LAB_026d995c;
            *(undefined8 *)(lVar9 + 0x30) = *(undefined8 *)puVar2;
            thunk_FUN_01f51358();
            lVar11 = *unaff_x21;
            uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
            if (uVar12 != 0) {
              piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == *(long *)puVar1) {
                  puVar6 = (undefined8 *)(lVar11 + (long)(*piVar13 + 5) * 0x10 + 0x138);
                  goto LAB_026d946c;
                }
                uVar12 = uVar12 - 1;
                piVar13 = piVar13 + 4;
              } while (uVar12 != 0);
            }
            puVar6 = (undefined8 *)FUN_01ecb238();
LAB_026d946c:
            uVar15 = (*(code *)*puVar6)();
            if (*(uint *)(lVar9 + 0x18) < 4) goto LAB_026d995c;
            *(undefined8 *)(lVar9 + 0x38) = uVar15;
            thunk_FUN_01f51358((undefined8 *)(lVar9 + 0x38),uVar15);
            if (*(uint *)(lVar9 + 0x18) < 5) goto LAB_026d995c;
            *(undefined8 *)(lVar9 + 0x40) =
                 *(undefined8 *)
                  Method_UnityEngine_Rendering_UI_DebugUIHandlerColor_<SetupSettings>b__11_0__;
            thunk_FUN_01f51358();
            uVar15 = FUN_0340efe8(lVar9,0);
            if (lVar10 != 0) {
              FUN_0390b840(lVar10,uVar15,0);
              lVar10 = *unaff_x21;
              uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
              if (uVar12 != 0) {
                piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar13 + -2) == *(long *)puVar1) goto LAB_026d97d0;
                  uVar12 = uVar12 - 1;
                  piVar13 = piVar13 + 4;
                } while (uVar12 != 0);
              }
LAB_026d97c0:
              puVar6 = (undefined8 *)FUN_01ecb238();
              goto LAB_026d97e0;
            }
          }
        }
      }
    }
  }
LAB_026d9970:
  in_stack_00000048 = uVar3;
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
code_r0x026d9264:
  if (*(int *)(*(long *)
                Method_UnityEngine_UIElements_CallbackEventHandler_UnregisterCallback<FocusInEvent>__
              + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar15 = FUN_0390bad0(uVar15,0);
  if (*(int *)(*(long *)Method_System_Runtime_Remoting_ConfigHandler_ReadClientActivated__ + 0xe0)
      == 0) {
    thunk_FUN_01ee6d7c(*(long *)Method_System_Runtime_Remoting_ConfigHandler_ReadClientActivated__);
  }
  plVar7 = (long *)FUN_0390bc14(uVar15,0);
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  uVar8 = (**(code **)(*plVar7 + 0x178))();
  uVar15 = in_stack_00000050;
  if (*(int *)(*(long *)
                Method_UnityEngine_UIElements_CallbackEventHandler_UnregisterCallback<FocusInEvent>__
              + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  FUN_0390bc6c(uVar15,plVar5,uVar8,0);
  goto LAB_026d916c;
LAB_026d97d0:
  puVar6 = (undefined8 *)(lVar10 + (long)(*piVar13 + 0x25) * 0x10 + 0x138);
LAB_026d97e0:
  (*(code *)*puVar6)();
  goto LAB_026d916c;
}


