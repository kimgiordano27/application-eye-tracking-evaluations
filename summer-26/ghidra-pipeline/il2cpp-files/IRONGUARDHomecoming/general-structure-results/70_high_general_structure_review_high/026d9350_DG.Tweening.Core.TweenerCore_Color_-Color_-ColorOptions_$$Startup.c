/*
FUNCTION_NAME: DG.Tweening.Core.TweenerCore<Color,-Color,-ColorOptions>$$Startup
ENTRY_POINT: 026d9350
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_20;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure
*/


void DG_Tweening_Core_TweenerCore<Color,_Color,_ColorOptions>__Startup(long param_1)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  long *unaff_x23;
  long unaff_x24;
  undefined8 *unaff_x25;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 *in_stack_00000010;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  
code_r0x026d9350:
  puVar6 = (undefined8 *)(param_1 + 0x138);
LAB_026d9354:
  lVar3 = (*(code *)*puVar6)();
  if ((lVar3 != 0) && (lVar3 = FUN_0390b368(lVar3,0), lVar3 != 0)) {
    lVar3 = FUN_0390b70c(lVar3,0);
    lVar4 = FUN_01f08890(*(undefined8 *)
                          Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_get_localPosition__
                         ,5);
    if (lVar4 != 0) {
      if (*(int *)(lVar4 + 0x18) != 0) {
        *(undefined8 *)(lVar4 + 0x20) =
             *(undefined8 *)
              Method_UnityEngine_Rendering_UI_DebugUIHandlerColor_<SetupSettings>b__11_1__;
        thunk_FUN_01f51358((undefined8 *)(lVar4 + 0x20));
        in_stack_00000020 =
             *(undefined8 *)
              Method_UnityEngine_UIElements_ComputedTransitionUtils_GetWrappingTransitionData<EasingFunction>__
        ;
        uVar5 = FUN_0359ff90(&stack0x00000020,0);
        if (1 < *(uint *)(lVar4 + 0x18)) {
          *(undefined8 *)(lVar4 + 0x28) = uVar5;
          thunk_FUN_01f51358((undefined8 *)(lVar4 + 0x28),uVar5);
          if (2 < *(uint *)(lVar4 + 0x18)) {
            *(undefined8 *)(lVar4 + 0x30) = *unaff_x25;
            thunk_FUN_01f51358();
            lVar7 = *unaff_x21;
            uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
            if (uVar8 != 0) {
              piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
              do {
                if (*(long *)(piVar9 + -2) == *unaff_x23) {
                  puVar6 = (undefined8 *)(lVar7 + (long)(*piVar9 + 5) * 0x10 + 0x138);
                  goto LAB_026d946c;
                }
                uVar8 = uVar8 - 1;
                piVar9 = piVar9 + 4;
              } while (uVar8 != 0);
            }
            puVar6 = (undefined8 *)FUN_01ecb238();
LAB_026d946c:
            uVar5 = (*(code *)*puVar6)();
            if (3 < *(uint *)(lVar4 + 0x18)) {
              *(undefined8 *)(lVar4 + 0x38) = uVar5;
              thunk_FUN_01f51358((undefined8 *)(lVar4 + 0x38),uVar5);
              if (4 < *(uint *)(lVar4 + 0x18)) {
                *(undefined8 *)(lVar4 + 0x40) =
                     *(undefined8 *)
                      Method_UnityEngine_Rendering_UI_DebugUIHandlerColor_<SetupSettings>b__11_0__;
                thunk_FUN_01f51358();
                uVar5 = FUN_0340efe8(lVar4,0);
                if (lVar3 != 0) {
                  FUN_0390b840(lVar3,uVar5,0);
                  lVar3 = *unaff_x21;
                  uVar8 = (ulong)*(ushort *)(lVar3 + 0x12e);
                  if (uVar8 != 0) {
                    piVar9 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar9 + -2) == *unaff_x23) goto LAB_026d97d0;
                      uVar8 = uVar8 - 1;
                      piVar9 = piVar9 + 4;
                    } while (uVar8 != 0);
                  }
LAB_026d97c0:
                  puVar6 = (undefined8 *)FUN_01ecb238();
LAB_026d97e0:
                  (*(code *)*puVar6)();
                  do {
                    lVar3 = *unaff_x21;
                    uVar8 = (ulong)*(ushort *)(lVar3 + 0x12e);
                    if (uVar8 != 0) {
                      piVar9 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar9 + -2) == *unaff_x23) {
                          puVar6 = (undefined8 *)(lVar3 + (long)(*piVar9 + 0x10) * 0x10 + 0x138);
                          goto LAB_026d91bc;
                        }
                        uVar8 = uVar8 - 1;
                        piVar9 = piVar9 + 4;
                      } while (uVar8 != 0);
                    }
                    puVar6 = (undefined8 *)FUN_01ecb238();
LAB_026d91bc:
                    uVar1 = (*(code *)*puVar6)();
                    if (((uVar1 & 0xff) < 0x10) && ((1 << (ulong)(uVar1 & 0x1f) & 0xa100U) != 0)) {
                      lVar3 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x28);
                      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
                        lVar3 = FUN_01ecaf44(lVar3);
                      }
                      if (unaff_x22 != (long *)0x0) {
                        if (*(long *)(*unaff_x22 + 0x40) != *(long *)(lVar3 + 0x40)) {
                    /* WARNING: Subroutine does not return */
                          FUN_01f08cfc();
                        }
                        puVar6 = (undefined8 *)thunk_FUN_01f11920();
                        uVar5 = *puVar6;
                        uVar11 = *(undefined8 *)((long)puVar6 + 0x14);
                        uVar10 = *(undefined8 *)((long)puVar6 + 0xc);
                        in_stack_00000010[1] = puVar6[1];
                        *in_stack_00000010 = uVar5;
                        *(undefined8 *)((long)in_stack_00000010 + 0x14) = uVar11;
                        *(undefined8 *)((long)in_stack_00000010 + 0xc) = uVar10;
                        return;
                      }
                      break;
                    }
                    uVar8 = FUN_0340eec4(in_stack_00000058,0);
                    if ((uVar8 & 1) != 0) {
                      param_1 = *unaff_x21;
                      uVar8 = (ulong)*(ushort *)(param_1 + 0x12e);
                      if (uVar8 == 0) goto LAB_026d9230;
                      piVar9 = (int *)(*(long *)(param_1 + 0xb0) + 8);
                      goto LAB_026d9218;
                    }
                    if (unaff_x24 == 0) break;
                    uVar8 = Unity_Collections_FixedList64Bytes_Enumerator<byte>__Reset();
                    if ((uVar8 & 1) == 0) goto LAB_026d9304;
                    if (*(int *)(*(long *)
                                  Method_UnityEngine_UIElements_CallbackEventHandler_UnregisterCallback<FocusInEvent>__
                                + 0xe0) == 0) {
                      thunk_FUN_01ee6d7c();
                    }
                    uVar5 = FUN_0390bad0(in_stack_00000050,0);
                    if (*(int *)(*(long *)
                                  Method_System_Runtime_Remoting_ConfigHandler_ReadClientActivated__
                                + 0xe0) == 0) {
                      thunk_FUN_01ee6d7c(*(long *)
                                          Method_System_Runtime_Remoting_ConfigHandler_ReadClientActivated__
                                        );
                    }
                    plVar2 = (long *)FUN_0390bc14(uVar5,0);
                    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                      FUN_01f08a3c();
                    }
                    (**(code **)(*plVar2 + 0x178))();
                    if (*(int *)(*(long *)
                                  Method_UnityEngine_UIElements_CallbackEventHandler_UnregisterCallback<FocusInEvent>__
                                + 0xe0) == 0) {
                      thunk_FUN_01ee6d7c();
                    }
                    FUN_0390bc6c(in_stack_00000050);
                  } while( true );
                }
                goto LAB_026d9970;
              }
            }
          }
        }
      }
LAB_026d995c:
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
  }
LAB_026d9970:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar9 = piVar9 + 4;
    if (uVar8 == 0) break;
LAB_026d9218:
    if (*(long *)(piVar9 + -2) == *unaff_x23) {
      param_1 = param_1 + (long)(*piVar9 + 8) * 0x10;
      goto code_r0x026d9350;
    }
  }
LAB_026d9230:
  puVar6 = (undefined8 *)FUN_01ecb238();
  goto LAB_026d9354;
LAB_026d9304:
  lVar3 = *unaff_x21;
  uVar8 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *unaff_x23) {
        puVar6 = (undefined8 *)(lVar3 + (long)(*piVar9 + 8) * 0x10 + 0x138);
        goto FUN_026d9520;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar6 = (undefined8 *)FUN_01ecb238();
FUN_026d9520:
  lVar3 = (*(code *)*puVar6)();
  if ((lVar3 == 0) || (lVar3 = FUN_0390b368(lVar3,0), lVar3 == 0)) goto LAB_026d9970;
  lVar3 = FUN_0390b70c(lVar3,0);
  lVar4 = FUN_01f08890(*(undefined8 *)
                        Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_get_localPosition__
                       ,9);
  if (lVar4 == 0) goto LAB_026d9970;
  if (*(int *)(lVar4 + 0x18) == 0) goto LAB_026d995c;
  *(undefined8 *)(lVar4 + 0x20) =
       *(undefined8 *)Method_UnityEngine_Rendering_UI_DebugUIHandlerColor_<SetupSettings>b__11_2__;
  thunk_FUN_01f51358((undefined8 *)(lVar4 + 0x20));
  if (*(uint *)(lVar4 + 0x18) < 2) goto LAB_026d995c;
  *(undefined8 *)(lVar4 + 0x28) = in_stack_00000058;
  thunk_FUN_01f51358((undefined8 *)(lVar4 + 0x28));
  if (*(uint *)(lVar4 + 0x18) < 3) goto LAB_026d995c;
  *(undefined8 *)(lVar4 + 0x30) =
       *(undefined8 *)
        Method_UnityEngine_Rendering_UI_DebugUIHandlerIndirectToggle_OnToggleValueChanged__;
  thunk_FUN_01f51358((undefined8 *)(lVar4 + 0x30));
  in_stack_00000020 =
       *(undefined8 *)
        Method_UnityEngine_UIElements_ComputedTransitionUtils_GetWrappingTransitionData<EasingFunction>__
  ;
  uVar5 = FUN_0359ff90(&stack0x00000020,0);
  if (*(uint *)(lVar4 + 0x18) < 4) goto LAB_026d995c;
  *(undefined8 *)(lVar4 + 0x38) = uVar5;
  thunk_FUN_01f51358((undefined8 *)(lVar4 + 0x38),uVar5);
  if (*(uint *)(lVar4 + 0x18) < 5) goto LAB_026d995c;
  *(undefined8 *)(lVar4 + 0x40) = *unaff_x25;
  thunk_FUN_01f51358();
  lVar7 = *unaff_x21;
  uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *unaff_x23) {
        puVar6 = (undefined8 *)(lVar7 + (long)(*piVar9 + 5) * 0x10 + 0x138);
        goto LAB_026d9680;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar6 = (undefined8 *)FUN_01ecb238();
LAB_026d9680:
  uVar5 = (*(code *)*puVar6)();
  if (*(uint *)(lVar4 + 0x18) < 6) goto LAB_026d995c;
  *(undefined8 *)(lVar4 + 0x48) = uVar5;
  thunk_FUN_01f51358((undefined8 *)(lVar4 + 0x48),uVar5);
  if (*(uint *)(lVar4 + 0x18) < 7) goto LAB_026d995c;
  *(undefined8 *)(lVar4 + 0x50) =
       *(undefined8 *)Method_UnityEngine_Rendering_UI_DebugUIHandlerToggle_OnToggleValueChanged__;
  thunk_FUN_01f51358();
  uVar5 = *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x30);
  if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar5 = FUN_03579868(uVar5,0);
  if (*(int *)(*(long *)Method_UnityEngine_Rendering_Universal_ClipperBase_AddPath__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c(*(long *)Method_UnityEngine_Rendering_Universal_ClipperBase_AddPath__);
  }
  uVar5 = FUN_0392f7cc(uVar5,0);
  if (*(uint *)(lVar4 + 0x18) < 8) goto LAB_026d995c;
  *(undefined8 *)(lVar4 + 0x58) = uVar5;
  thunk_FUN_01f51358((undefined8 *)(lVar4 + 0x58),uVar5);
  if (*(uint *)(lVar4 + 0x18) < 9) goto LAB_026d995c;
  *(undefined8 *)(lVar4 + 0x60) =
       *(undefined8 *)Method_UnityEngine_UIElements_ObjectPool<UIRAtlasAllocator_Row>_Release__;
  thunk_FUN_01f51358();
  uVar5 = FUN_0340efe8(lVar4,0);
  if (lVar3 == 0) goto LAB_026d9970;
  FUN_0390b988(lVar3,uVar5,0);
  lVar3 = *unaff_x21;
  uVar8 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar8 == 0) goto LAB_026d97c0;
  piVar9 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
  while (*(long *)(piVar9 + -2) != *unaff_x23) {
    uVar8 = uVar8 - 1;
    piVar9 = piVar9 + 4;
    if (uVar8 == 0) goto LAB_026d97c0;
  }
LAB_026d97d0:
  puVar6 = (undefined8 *)(lVar3 + (long)(*piVar9 + 0x25) * 0x10 + 0x138);
  goto LAB_026d97e0;
}


