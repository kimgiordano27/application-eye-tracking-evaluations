/*
FUNCTION_NAME: DG.Tweening.Core.TweenerCore<Color2,-Color2,-ColorOptions>$$ChangeValues
ENTRY_POINT: 026da51c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 83
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


void DG_Tweening_Core_TweenerCore<Color2,_Color2,_ColorOptions>__ChangeValues
               (undefined8 *param_1,undefined8 param_2)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  long unaff_x27;
  long unaff_x28;
  long *in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  
code_r0x026da51c:
  thunk_FUN_01f51358(param_1,param_2);
  if (4 < *(uint *)(unaff_x26 + -4)) {
    *(undefined8 *)(unaff_x28 + 0x40) = *unaff_x25;
    thunk_FUN_01f51358();
    lVar7 = *unaff_x21;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *unaff_x24) {
          puVar4 = (undefined8 *)(lVar7 + (long)(*piVar9 + 5) * 0x10 + 0x138);
          goto LAB_026da58c;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_01ecb238();
LAB_026da58c:
    uVar5 = (*(code *)*puVar4)();
    if (5 < *(uint *)(unaff_x28 + 0x18)) {
      *(undefined8 *)(unaff_x28 + 0x48) = uVar5;
      thunk_FUN_01f51358((undefined8 *)(unaff_x28 + 0x48),uVar5);
      if (6 < *(uint *)(unaff_x28 + 0x18)) {
        *(undefined8 *)(unaff_x28 + 0x50) =
             *(undefined8 *)
              Method_UnityEngine_Rendering_UI_DebugUIHandlerToggle_OnToggleValueChanged__;
        thunk_FUN_01f51358();
        uVar5 = *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x30);
        if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0
           ) {
          thunk_FUN_01ee6d7c();
        }
        uVar5 = FUN_03579868(uVar5,0);
        if (*(int *)(*(long *)Method_UnityEngine_Rendering_Universal_ClipperBase_AddPath__ + 0xe0)
            == 0) {
          thunk_FUN_01ee6d7c(*(long *)Method_UnityEngine_Rendering_Universal_ClipperBase_AddPath__);
        }
        uVar5 = FUN_0392f7cc(uVar5,0);
        if (7 < *(uint *)(unaff_x28 + 0x18)) {
          *(undefined8 *)(unaff_x28 + 0x58) = uVar5;
          thunk_FUN_01f51358((undefined8 *)(unaff_x28 + 0x58),uVar5);
          if (8 < *(uint *)(unaff_x28 + 0x18)) {
            *(undefined8 *)(unaff_x28 + 0x60) =
                 *(undefined8 *)
                  Method_UnityEngine_UIElements_ObjectPool<UIRAtlasAllocator_Row>_Release__;
            thunk_FUN_01f51358();
            uVar5 = FUN_0340efe8(unaff_x28,0);
            if (unaff_x27 != 0) {
              FUN_0390b988(unaff_x27,uVar5,0);
              lVar7 = *unaff_x21;
              uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
              if (uVar8 != 0) {
                piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar9 + -2) == *unaff_x24) goto LAB_026da6dc;
                  uVar8 = uVar8 - 1;
                  piVar9 = piVar9 + 4;
                } while (uVar8 != 0);
              }
LAB_026da6cc:
              puVar4 = (undefined8 *)FUN_01ecb238();
LAB_026da6ec:
              (*(code *)*puVar4)();
              do {
                lVar7 = *unaff_x21;
                uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
                if (uVar8 != 0) {
                  piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar9 + -2) == *unaff_x24) {
                      puVar4 = (undefined8 *)(lVar7 + (long)(*piVar9 + 0x10) * 0x10 + 0x138);
                      goto LAB_026da0c8;
                    }
                    uVar8 = uVar8 - 1;
                    piVar9 = piVar9 + 4;
                  } while (uVar8 != 0);
                }
                puVar4 = (undefined8 *)FUN_01ecb238();
LAB_026da0c8:
                uVar1 = (*(code *)*puVar4)();
                if (((uVar1 & 0xff) < 0x10) && ((1 << (ulong)(uVar1 & 0x1f) & 0xa100U) != 0)) {
                  lVar7 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x28);
                  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
                    FUN_01ecaf44(lVar7);
                  }
                  if (unaff_x22 == 0) {
                    lVar7 = 0;
                  }
                  else {
                    lVar7 = thunk_FUN_01f116d0();
                    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_01f08cfc();
                    }
                  }
                  *in_stack_00000000 = lVar7;
                  lVar7 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x28);
                  if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
                    FUN_01ecaf44(lVar7);
                  }
                  if (unaff_x22 == 0) {
                    lVar7 = 0;
                  }
                  else {
                    lVar7 = thunk_FUN_01f116d0();
                    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_01f08cfc();
                    }
                  }
                  thunk_FUN_01f51358(in_stack_00000000,lVar7);
                  return;
                }
                uVar8 = FUN_0340eec4(in_stack_00000028,0);
                if ((uVar8 & 1) != 0) goto code_r0x026da10c;
                if (unaff_x23 == 0) break;
                uVar8 = Unity_Collections_FixedList64Bytes_Enumerator<byte>__Reset();
                if ((uVar8 & 1) == 0) {
                  lVar7 = *unaff_x21;
                  uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
                  if (uVar8 == 0) goto LAB_026da240;
                  piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                  goto LAB_026da228;
                }
                if (*(int *)(*(long *)
                              Method_UnityEngine_UIElements_CallbackEventHandler_UnregisterCallback<FocusInEvent>__
                            + 0xe0) == 0) {
                  thunk_FUN_01ee6d7c();
                }
                uVar5 = FUN_0390bad0(in_stack_00000020,0);
                if (*(int *)(*(long *)
                              Method_System_Runtime_Remoting_ConfigHandler_ReadClientActivated__ +
                            0xe0) == 0) {
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
                FUN_0390bc6c(in_stack_00000020);
              } while( true );
            }
            goto LAB_026da8a0;
          }
        }
      }
    }
  }
LAB_026da89c:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a44();
code_r0x026da10c:
  lVar7 = *unaff_x21;
  uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *unaff_x24) {
        puVar4 = (undefined8 *)(lVar7 + (long)(*piVar9 + 8) * 0x10 + 0x138);
        goto LAB_026da260;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar4 = (undefined8 *)FUN_01ecb238();
LAB_026da260:
  lVar7 = (*(code *)*puVar4)();
  if ((lVar7 == 0) || (lVar7 = FUN_0390b368(lVar7,0), lVar7 == 0)) goto LAB_026da8a0;
  lVar7 = FUN_0390b70c(lVar7,0);
  lVar3 = FUN_01f08890(*(undefined8 *)
                        Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_get_localPosition__
                       ,5);
  if (lVar3 == 0) goto LAB_026da8a0;
  if (*(int *)(lVar3 + 0x18) == 0) goto LAB_026da89c;
  *(undefined8 *)(lVar3 + 0x20) =
       *(undefined8 *)Method_UnityEngine_Rendering_UI_DebugUIHandlerColor_<SetupSettings>b__11_1__;
  thunk_FUN_01f51358((undefined8 *)(lVar3 + 0x20));
  in_stack_00000008 =
       *(undefined8 *)
        Method_UnityEngine_UIElements_ComputedTransitionUtils_GetWrappingTransitionData<EasingFunction>__
  ;
  uVar5 = FUN_0359ff90(&stack0x00000008,0);
  if (*(uint *)(lVar3 + 0x18) < 2) goto LAB_026da89c;
  *(undefined8 *)(lVar3 + 0x28) = uVar5;
  thunk_FUN_01f51358((undefined8 *)(lVar3 + 0x28),uVar5);
  if (*(uint *)(lVar3 + 0x18) < 3) goto LAB_026da89c;
  *(undefined8 *)(lVar3 + 0x30) = *unaff_x25;
  thunk_FUN_01f51358();
  lVar6 = *unaff_x21;
  uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *unaff_x24) {
        puVar4 = (undefined8 *)(lVar6 + (long)(*piVar9 + 5) * 0x10 + 0x138);
        goto LAB_026da378;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar4 = (undefined8 *)FUN_01ecb238();
LAB_026da378:
  uVar5 = (*(code *)*puVar4)();
  if (*(uint *)(lVar3 + 0x18) < 4) goto LAB_026da89c;
  *(undefined8 *)(lVar3 + 0x38) = uVar5;
  thunk_FUN_01f51358((undefined8 *)(lVar3 + 0x38),uVar5);
  if (*(uint *)(lVar3 + 0x18) < 5) goto LAB_026da89c;
  *(undefined8 *)(lVar3 + 0x40) =
       *(undefined8 *)Method_UnityEngine_Rendering_UI_DebugUIHandlerColor_<SetupSettings>b__11_0__;
  thunk_FUN_01f51358();
  uVar5 = FUN_0340efe8(lVar3,0);
  if (lVar7 == 0) goto LAB_026da8a0;
  FUN_0390b840(lVar7,uVar5,0);
  lVar7 = *unaff_x21;
  uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar8 == 0) goto LAB_026da6cc;
  piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
  while (*(long *)(piVar9 + -2) != *unaff_x24) {
    uVar8 = uVar8 - 1;
    piVar9 = piVar9 + 4;
    if (uVar8 == 0) goto LAB_026da6cc;
  }
LAB_026da6dc:
  puVar4 = (undefined8 *)(lVar7 + (long)(*piVar9 + 0x25) * 0x10 + 0x138);
  goto LAB_026da6ec;
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar9 = piVar9 + 4;
    if (uVar8 == 0) break;
LAB_026da228:
    if (*(long *)(piVar9 + -2) == *unaff_x24) {
      puVar4 = (undefined8 *)(lVar7 + (long)(*piVar9 + 8) * 0x10 + 0x138);
      goto LAB_026da42c;
    }
  }
LAB_026da240:
  puVar4 = (undefined8 *)FUN_01ecb238();
LAB_026da42c:
  lVar7 = (*(code *)*puVar4)();
  if ((lVar7 != 0) && (lVar7 = FUN_0390b368(lVar7,0), lVar7 != 0)) {
    unaff_x27 = FUN_0390b70c(lVar7,0);
    unaff_x28 = FUN_01f08890(*(undefined8 *)
                              Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_get_localPosition__
                             ,9);
    if (unaff_x28 != 0) {
      if (*(int *)(unaff_x28 + 0x18) == 0) goto LAB_026da89c;
      *(undefined8 *)(unaff_x28 + 0x20) =
           *(undefined8 *)
            Method_UnityEngine_Rendering_UI_DebugUIHandlerColor_<SetupSettings>b__11_2__;
      thunk_FUN_01f51358((undefined8 *)(unaff_x28 + 0x20));
      if (*(uint *)(unaff_x28 + 0x18) < 2) goto LAB_026da89c;
      *(undefined8 *)(unaff_x28 + 0x28) = in_stack_00000028;
      thunk_FUN_01f51358((undefined8 *)(unaff_x28 + 0x28));
      if (*(uint *)(unaff_x28 + 0x18) < 3) goto LAB_026da89c;
      *(undefined8 *)(unaff_x28 + 0x30) =
           *(undefined8 *)
            Method_UnityEngine_Rendering_UI_DebugUIHandlerIndirectToggle_OnToggleValueChanged__;
      thunk_FUN_01f51358((undefined8 *)(unaff_x28 + 0x30));
      in_stack_00000008 =
           *(undefined8 *)
            Method_UnityEngine_UIElements_ComputedTransitionUtils_GetWrappingTransitionData<EasingFunction>__
      ;
      param_2 = FUN_0359ff90(&stack0x00000008,0);
      if (*(uint *)(unaff_x28 + 0x18) < 4) goto LAB_026da89c;
      param_1 = (undefined8 *)(unaff_x28 + 0x38);
      *param_1 = param_2;
      unaff_x26 = param_1;
      goto code_r0x026da51c;
    }
  }
LAB_026da8a0:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


