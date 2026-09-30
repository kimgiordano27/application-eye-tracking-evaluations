/*
FUNCTION_NAME: DG.Tweening.Core.TweenerCore<Color,-Color,-ColorOptions>$$ChangeValues
ENTRY_POINT: 026d904c
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


void DG_Tweening_Core_TweenerCore<Color,_Color,_ColorOptions>__ChangeValues
               (long *param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long in_x9;
  ulong uVar11;
  int *piVar12;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x24;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 *in_stack_00000010;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined1 in_stack_00000030;
  undefined4 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  
  uVar14 = *(undefined8 *)(*(long *)(in_x9 + 0xc0) + 0x30);
  if (*(int *)(*param_1 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c(*param_1);
  }
  puVar1 = Method_System_Runtime_Remoting_ConfigHandler_ReadPreload__;
  uVar14 = FUN_03579868(uVar14,0);
  lVar13 = *(long *)(unaff_x24 + 0x10);
  if (lVar13 == 0) {
    uVar3 = in_stack_00000048;
    if (unaff_x21 == (long *)0x0) goto LAB_026d9970;
    lVar13 = *unaff_x21;
    uVar11 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
          puVar5 = (undefined8 *)(lVar13 + (long)(*piVar12 + 8) * 0x10 + 0x138);
          goto LAB_026d90ec;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238();
LAB_026d90ec:
    lVar13 = (*(code *)*puVar5)();
    uVar3 = in_stack_00000048;
    if ((lVar13 == 0) || (lVar13 = FUN_0390b368(lVar13,0), uVar3 = in_stack_00000048, lVar13 == 0))
    goto LAB_026d9970;
    lVar13 = FUN_0390b3d4(lVar13,0);
  }
  if (*(int *)(*(long *)
                Method_UnityEngine_UIElements_CallbackEventHandler_UnregisterCallback<FocusInEvent>__
              + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  lVar13 = FUN_0390b514(uVar14,lVar13,0);
  uVar3 = in_stack_00000048;
  puVar2 = Method_UnityEngine_Rendering_UI_DebugUIHandlerVector2_<SetWidget>b__6_0__;
  if (unaff_x21 != (long *)0x0) {
LAB_026d916c:
    lVar9 = *unaff_x21;
    uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
          puVar5 = (undefined8 *)(lVar9 + (long)(*piVar12 + 0x10) * 0x10 + 0x138);
          goto LAB_026d91bc;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ecb238();
LAB_026d91bc:
    uVar4 = (*(code *)*puVar5)();
    if (((uVar4 & 0xff) < 0x10) && ((1 << (ulong)(uVar4 & 0x1f) & 0xa100U) != 0)) {
      lVar13 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x28);
      in_stack_00000048 = uVar3;
      if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
        lVar13 = FUN_01ecaf44(lVar13);
      }
      uVar3 = in_stack_00000048;
      if (param_2 != (long *)0x0) {
        if (*(long *)(*param_2 + 0x40) == *(long *)(lVar13 + 0x40)) {
          puVar5 = (undefined8 *)thunk_FUN_01f11920();
          uVar14 = *puVar5;
          uVar15 = *(undefined8 *)((long)puVar5 + 0x14);
          uVar7 = *(undefined8 *)((long)puVar5 + 0xc);
          in_stack_00000010[1] = puVar5[1];
          *in_stack_00000010 = uVar14;
          *(undefined8 *)((long)in_stack_00000010 + 0x14) = uVar15;
          *(undefined8 *)((long)in_stack_00000010 + 0xc) = uVar7;
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_01f08cfc(param_2);
      }
    }
    else {
      uVar11 = FUN_0340eec4(in_stack_00000058,0);
      if ((uVar11 & 1) == 0) {
        if (lVar13 != 0) {
          uVar11 = Unity_Collections_FixedList64Bytes_Enumerator<byte>__Reset
                             (lVar13,in_stack_00000058,&stack0x00000050,
                              *(undefined8 *)
                               Method_UnityEngine_Rendering_UI_DebugUIHandlerColor_<SetWidget>b__9_7__
                             );
          uVar14 = in_stack_00000050;
          if ((uVar11 & 1) != 0) goto code_r0x026d9264;
          lVar9 = *unaff_x21;
          uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar11 != 0) {
            piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
                puVar5 = (undefined8 *)(lVar9 + (long)(*piVar12 + 8) * 0x10 + 0x138);
                goto FUN_026d9520;
              }
              uVar11 = uVar11 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar11 != 0);
          }
          puVar5 = (undefined8 *)FUN_01ecb238();
FUN_026d9520:
          lVar9 = (*(code *)*puVar5)();
          if ((lVar9 != 0) && (lVar9 = FUN_0390b368(lVar9,0), lVar9 != 0)) {
            lVar9 = FUN_0390b70c(lVar9,0);
            lVar8 = FUN_01f08890(*(undefined8 *)
                                  Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_get_localPosition__
                                 ,9);
            if (lVar8 != 0) {
              if (*(int *)(lVar8 + 0x18) == 0) goto LAB_026d995c;
              *(undefined8 *)(lVar8 + 0x20) =
                   *(undefined8 *)
                    Method_UnityEngine_Rendering_UI_DebugUIHandlerColor_<SetupSettings>b__11_2__;
              thunk_FUN_01f51358((undefined8 *)(lVar8 + 0x20));
              if (*(uint *)(lVar8 + 0x18) < 2) goto LAB_026d995c;
              *(undefined8 *)(lVar8 + 0x28) = in_stack_00000058;
              thunk_FUN_01f51358((undefined8 *)(lVar8 + 0x28));
              if (*(uint *)(lVar8 + 0x18) < 3) goto LAB_026d995c;
              *(undefined8 *)(lVar8 + 0x30) =
                   *(undefined8 *)
                    Method_UnityEngine_Rendering_UI_DebugUIHandlerIndirectToggle_OnToggleValueChanged__
              ;
              thunk_FUN_01f51358((undefined8 *)(lVar8 + 0x30));
              in_stack_00000020 =
                   *(undefined8 *)
                    Method_UnityEngine_UIElements_ComputedTransitionUtils_GetWrappingTransitionData<EasingFunction>__
              ;
              in_stack_00000028 = 0xffffffffffffffff;
              in_stack_00000030 = (char)uVar4;
              uVar14 = FUN_0359ff90(&stack0x00000020,0);
              if (*(uint *)(lVar8 + 0x18) < 4) goto LAB_026d995c;
              *(undefined8 *)(lVar8 + 0x38) = uVar14;
              thunk_FUN_01f51358((undefined8 *)(lVar8 + 0x38),uVar14);
              if (*(uint *)(lVar8 + 0x18) < 5) goto LAB_026d995c;
              *(undefined8 *)(lVar8 + 0x40) = *(undefined8 *)puVar2;
              thunk_FUN_01f51358();
              lVar10 = *unaff_x21;
              uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
              if (uVar11 != 0) {
                piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
                    puVar5 = (undefined8 *)(lVar10 + (long)(*piVar12 + 5) * 0x10 + 0x138);
                    goto LAB_026d9680;
                  }
                  uVar11 = uVar11 - 1;
                  piVar12 = piVar12 + 4;
                } while (uVar11 != 0);
              }
              puVar5 = (undefined8 *)FUN_01ecb238();
LAB_026d9680:
              uVar14 = (*(code *)*puVar5)();
              if (*(uint *)(lVar8 + 0x18) < 6) goto LAB_026d995c;
              *(undefined8 *)(lVar8 + 0x48) = uVar14;
              thunk_FUN_01f51358((undefined8 *)(lVar8 + 0x48),uVar14);
              if (*(uint *)(lVar8 + 0x18) < 7) goto LAB_026d995c;
              *(undefined8 *)(lVar8 + 0x50) =
                   *(undefined8 *)
                    Method_UnityEngine_Rendering_UI_DebugUIHandlerToggle_OnToggleValueChanged__;
              thunk_FUN_01f51358();
              uVar14 = *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x30);
              if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0
                          ) == 0) {
                thunk_FUN_01ee6d7c();
              }
              uVar14 = FUN_03579868(uVar14,0);
              if (*(int *)(*(long *)Method_UnityEngine_Rendering_Universal_ClipperBase_AddPath__ +
                          0xe0) == 0) {
                thunk_FUN_01ee6d7c(*(long *)
                                    Method_UnityEngine_Rendering_Universal_ClipperBase_AddPath__);
              }
              uVar14 = FUN_0392f7cc(uVar14,0);
              if (*(uint *)(lVar8 + 0x18) < 8) goto LAB_026d995c;
              *(undefined8 *)(lVar8 + 0x58) = uVar14;
              thunk_FUN_01f51358((undefined8 *)(lVar8 + 0x58),uVar14);
              if (*(uint *)(lVar8 + 0x18) < 9) goto LAB_026d995c;
              *(undefined8 *)(lVar8 + 0x60) =
                   *(undefined8 *)
                    Method_UnityEngine_UIElements_ObjectPool<UIRAtlasAllocator_Row>_Release__;
              thunk_FUN_01f51358();
              uVar14 = FUN_0340efe8(lVar8,0);
              if (lVar9 != 0) {
                FUN_0390b988(lVar9,uVar14,0);
                lVar9 = *unaff_x21;
                uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
                if (uVar11 != 0) {
                  piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar12 + -2) == *(long *)puVar1) goto LAB_026d97d0;
                    uVar11 = uVar11 - 1;
                    piVar12 = piVar12 + 4;
                  } while (uVar11 != 0);
                }
                goto LAB_026d97c0;
              }
            }
          }
        }
      }
      else {
        lVar9 = *unaff_x21;
        uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
              puVar5 = (undefined8 *)(lVar9 + (long)(*piVar12 + 8) * 0x10 + 0x138);
              goto LAB_026d9354;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar5 = (undefined8 *)FUN_01ecb238();
LAB_026d9354:
        lVar9 = (*(code *)*puVar5)();
        if ((lVar9 != 0) && (lVar9 = FUN_0390b368(lVar9,0), lVar9 != 0)) {
          lVar9 = FUN_0390b70c(lVar9,0);
          lVar8 = FUN_01f08890(*(undefined8 *)
                                Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_get_localPosition__
                               ,5);
          if (lVar8 != 0) {
            if (*(int *)(lVar8 + 0x18) == 0) {
LAB_026d995c:
              in_stack_00000048 = uVar3;
                    /* WARNING: Subroutine does not return */
              FUN_01f08a44();
            }
            *(undefined8 *)(lVar8 + 0x20) =
                 *(undefined8 *)
                  Method_UnityEngine_Rendering_UI_DebugUIHandlerColor_<SetupSettings>b__11_1__;
            thunk_FUN_01f51358((undefined8 *)(lVar8 + 0x20));
            in_stack_00000020 =
                 *(undefined8 *)
                  Method_UnityEngine_UIElements_ComputedTransitionUtils_GetWrappingTransitionData<EasingFunction>__
            ;
            in_stack_00000028 = 0xffffffffffffffff;
            in_stack_00000030 = (char)uVar4;
            uVar14 = FUN_0359ff90(&stack0x00000020,0);
            if (*(uint *)(lVar8 + 0x18) < 2) goto LAB_026d995c;
            *(undefined8 *)(lVar8 + 0x28) = uVar14;
            thunk_FUN_01f51358((undefined8 *)(lVar8 + 0x28),uVar14);
            if (*(uint *)(lVar8 + 0x18) < 3) goto LAB_026d995c;
            *(undefined8 *)(lVar8 + 0x30) = *(undefined8 *)puVar2;
            thunk_FUN_01f51358();
            lVar10 = *unaff_x21;
            uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
            if (uVar11 != 0) {
              piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
                  puVar5 = (undefined8 *)(lVar10 + (long)(*piVar12 + 5) * 0x10 + 0x138);
                  goto LAB_026d946c;
                }
                uVar11 = uVar11 - 1;
                piVar12 = piVar12 + 4;
              } while (uVar11 != 0);
            }
            puVar5 = (undefined8 *)FUN_01ecb238();
LAB_026d946c:
            uVar14 = (*(code *)*puVar5)();
            if (*(uint *)(lVar8 + 0x18) < 4) goto LAB_026d995c;
            *(undefined8 *)(lVar8 + 0x38) = uVar14;
            thunk_FUN_01f51358((undefined8 *)(lVar8 + 0x38),uVar14);
            if (*(uint *)(lVar8 + 0x18) < 5) goto LAB_026d995c;
            *(undefined8 *)(lVar8 + 0x40) =
                 *(undefined8 *)
                  Method_UnityEngine_Rendering_UI_DebugUIHandlerColor_<SetupSettings>b__11_0__;
            thunk_FUN_01f51358();
            uVar14 = FUN_0340efe8(lVar8,0);
            if (lVar9 != 0) {
              FUN_0390b840(lVar9,uVar14,0);
              lVar9 = *unaff_x21;
              uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
              if (uVar11 != 0) {
                piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar12 + -2) == *(long *)puVar1) goto LAB_026d97d0;
                  uVar11 = uVar11 - 1;
                  piVar12 = piVar12 + 4;
                } while (uVar11 != 0);
              }
LAB_026d97c0:
              puVar5 = (undefined8 *)FUN_01ecb238();
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
  uVar14 = FUN_0390bad0(uVar14,0);
  if (*(int *)(*(long *)Method_System_Runtime_Remoting_ConfigHandler_ReadClientActivated__ + 0xe0)
      == 0) {
    thunk_FUN_01ee6d7c(*(long *)Method_System_Runtime_Remoting_ConfigHandler_ReadClientActivated__);
  }
  plVar6 = (long *)FUN_0390bc14(uVar14,0);
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  uVar7 = (**(code **)(*plVar6 + 0x178))();
  uVar14 = in_stack_00000050;
  if (*(int *)(*(long *)
                Method_UnityEngine_UIElements_CallbackEventHandler_UnregisterCallback<FocusInEvent>__
              + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  FUN_0390bc6c(uVar14,param_2,uVar7,0);
  goto LAB_026d916c;
LAB_026d97d0:
  puVar5 = (undefined8 *)(lVar9 + (long)(*piVar12 + 0x25) * 0x10 + 0x138);
LAB_026d97e0:
  (*(code *)*puVar5)();
  goto LAB_026d916c;
}


