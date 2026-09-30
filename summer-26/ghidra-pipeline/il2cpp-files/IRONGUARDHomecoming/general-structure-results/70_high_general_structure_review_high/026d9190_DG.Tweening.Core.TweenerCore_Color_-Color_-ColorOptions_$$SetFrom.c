/*
FUNCTION_NAME: DG.Tweening.Core.TweenerCore<Color,-Color,-ColorOptions>$$SetFrom
ENTRY_POINT: 026d9190
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 83
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_15;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


void DG_Tweening_Core_TweenerCore<Color,_Color,_ColorOptions>__SetFrom
               (long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  ulong in_x9;
  int *in_x10;
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
  
code_r0x026d9190:
  in_x9 = in_x9 - 1;
  in_x10 = in_x10 + 4;
  if (in_x9 != 0) goto LAB_026d9184;
LAB_026d919c:
  puVar2 = (undefined8 *)FUN_01ecb238();
LAB_026d91bc:
  uVar1 = (*(code *)*puVar2)();
  if (((uVar1 & 0xff) < 0x10) && ((1 << (ulong)(uVar1 & 0x1f) & 0xa100U) != 0)) {
    lVar7 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x28);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_01ecaf44(lVar7);
    }
    if (unaff_x22 != (long *)0x0) {
      if (*(long *)(*unaff_x22 + 0x40) != *(long *)(lVar7 + 0x40)) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08cfc();
      }
      puVar2 = (undefined8 *)thunk_FUN_01f11920();
      uVar6 = *puVar2;
      uVar11 = *(undefined8 *)((long)puVar2 + 0x14);
      uVar10 = *(undefined8 *)((long)puVar2 + 0xc);
      in_stack_00000010[1] = puVar2[1];
      *in_stack_00000010 = uVar6;
      *(undefined8 *)((long)in_stack_00000010 + 0x14) = uVar11;
      *(undefined8 *)((long)in_stack_00000010 + 0xc) = uVar10;
      return;
    }
    goto LAB_026d9970;
  }
  uVar3 = FUN_0340eec4(in_stack_00000058,0);
  if ((uVar3 & 1) != 0) {
    lVar7 = *unaff_x21;
    uVar3 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar3 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *unaff_x23) {
          puVar2 = (undefined8 *)(lVar7 + (long)(*piVar9 + 8) * 0x10 + 0x138);
          goto LAB_026d9354;
        }
        uVar3 = uVar3 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238();
LAB_026d9354:
    lVar7 = (*(code *)*puVar2)();
    if ((lVar7 == 0) || (lVar7 = FUN_0390b368(lVar7,0), lVar7 == 0)) {
LAB_026d9970:
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar7 = FUN_0390b70c(lVar7,0);
    lVar5 = FUN_01f08890(*(undefined8 *)
                          Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_get_localPosition__
                         ,5);
    if (lVar5 == 0) goto LAB_026d9970;
    if (*(int *)(lVar5 + 0x18) == 0) {
LAB_026d995c:
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    *(undefined8 *)(lVar5 + 0x20) =
         *(undefined8 *)Method_UnityEngine_Rendering_UI_DebugUIHandlerColor_<SetupSettings>b__11_1__
    ;
    thunk_FUN_01f51358((undefined8 *)(lVar5 + 0x20));
    in_stack_00000020 =
         *(undefined8 *)
          Method_UnityEngine_UIElements_ComputedTransitionUtils_GetWrappingTransitionData<EasingFunction>__
    ;
    uVar6 = FUN_0359ff90(&stack0x00000020,0);
    if (*(uint *)(lVar5 + 0x18) < 2) goto LAB_026d995c;
    *(undefined8 *)(lVar5 + 0x28) = uVar6;
    thunk_FUN_01f51358((undefined8 *)(lVar5 + 0x28),uVar6);
    if (*(uint *)(lVar5 + 0x18) < 3) goto LAB_026d995c;
    *(undefined8 *)(lVar5 + 0x30) = *unaff_x25;
    thunk_FUN_01f51358();
    lVar8 = *unaff_x21;
    uVar3 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar3 != 0) {
      piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *unaff_x23) {
          puVar2 = (undefined8 *)(lVar8 + (long)(*piVar9 + 5) * 0x10 + 0x138);
          goto LAB_026d946c;
        }
        uVar3 = uVar3 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238();
LAB_026d946c:
    uVar6 = (*(code *)*puVar2)();
    if (*(uint *)(lVar5 + 0x18) < 4) goto LAB_026d995c;
    *(undefined8 *)(lVar5 + 0x38) = uVar6;
    thunk_FUN_01f51358((undefined8 *)(lVar5 + 0x38),uVar6);
    if (*(uint *)(lVar5 + 0x18) < 5) goto LAB_026d995c;
    *(undefined8 *)(lVar5 + 0x40) =
         *(undefined8 *)Method_UnityEngine_Rendering_UI_DebugUIHandlerColor_<SetupSettings>b__11_0__
    ;
    thunk_FUN_01f51358();
    uVar6 = FUN_0340efe8(lVar5,0);
    if (lVar7 == 0) goto LAB_026d9970;
    FUN_0390b840(lVar7,uVar6,0);
    lVar7 = *unaff_x21;
    uVar3 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar3 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *unaff_x23) goto LAB_026d97d0;
        uVar3 = uVar3 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar3 != 0);
    }
LAB_026d97c0:
    puVar2 = (undefined8 *)FUN_01ecb238();
    goto LAB_026d97e0;
  }
  if (unaff_x24 == 0) goto LAB_026d9970;
  uVar3 = Unity_Collections_FixedList64Bytes_Enumerator<byte>__Reset();
  if ((uVar3 & 1) == 0) {
    lVar7 = *unaff_x21;
    uVar3 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar3 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *unaff_x23) {
          puVar2 = (undefined8 *)(lVar7 + (long)(*piVar9 + 8) * 0x10 + 0x138);
          goto FUN_026d9520;
        }
        uVar3 = uVar3 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238();
FUN_026d9520:
    lVar7 = (*(code *)*puVar2)();
    if ((lVar7 == 0) || (lVar7 = FUN_0390b368(lVar7,0), lVar7 == 0)) goto LAB_026d9970;
    lVar7 = FUN_0390b70c(lVar7,0);
    lVar5 = FUN_01f08890(*(undefined8 *)
                          Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_get_localPosition__
                         ,9);
    if (lVar5 == 0) goto LAB_026d9970;
    if (*(int *)(lVar5 + 0x18) == 0) goto LAB_026d995c;
    *(undefined8 *)(lVar5 + 0x20) =
         *(undefined8 *)Method_UnityEngine_Rendering_UI_DebugUIHandlerColor_<SetupSettings>b__11_2__
    ;
    thunk_FUN_01f51358((undefined8 *)(lVar5 + 0x20));
    if (*(uint *)(lVar5 + 0x18) < 2) goto LAB_026d995c;
    *(undefined8 *)(lVar5 + 0x28) = in_stack_00000058;
    thunk_FUN_01f51358((undefined8 *)(lVar5 + 0x28));
    if (*(uint *)(lVar5 + 0x18) < 3) goto LAB_026d995c;
    *(undefined8 *)(lVar5 + 0x30) =
         *(undefined8 *)
          Method_UnityEngine_Rendering_UI_DebugUIHandlerIndirectToggle_OnToggleValueChanged__;
    thunk_FUN_01f51358((undefined8 *)(lVar5 + 0x30));
    in_stack_00000020 =
         *(undefined8 *)
          Method_UnityEngine_UIElements_ComputedTransitionUtils_GetWrappingTransitionData<EasingFunction>__
    ;
    uVar6 = FUN_0359ff90(&stack0x00000020,0);
    if (*(uint *)(lVar5 + 0x18) < 4) goto LAB_026d995c;
    *(undefined8 *)(lVar5 + 0x38) = uVar6;
    thunk_FUN_01f51358((undefined8 *)(lVar5 + 0x38),uVar6);
    if (*(uint *)(lVar5 + 0x18) < 5) goto LAB_026d995c;
    *(undefined8 *)(lVar5 + 0x40) = *unaff_x25;
    thunk_FUN_01f51358();
    lVar8 = *unaff_x21;
    uVar3 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar3 != 0) {
      piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *unaff_x23) {
          puVar2 = (undefined8 *)(lVar8 + (long)(*piVar9 + 5) * 0x10 + 0x138);
          goto LAB_026d9680;
        }
        uVar3 = uVar3 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238();
LAB_026d9680:
    uVar6 = (*(code *)*puVar2)();
    if (*(uint *)(lVar5 + 0x18) < 6) goto LAB_026d995c;
    *(undefined8 *)(lVar5 + 0x48) = uVar6;
    thunk_FUN_01f51358((undefined8 *)(lVar5 + 0x48),uVar6);
    if (*(uint *)(lVar5 + 0x18) < 7) goto LAB_026d995c;
    *(undefined8 *)(lVar5 + 0x50) =
         *(undefined8 *)Method_UnityEngine_Rendering_UI_DebugUIHandlerToggle_OnToggleValueChanged__;
    thunk_FUN_01f51358();
    uVar6 = *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x30);
    if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar6 = FUN_03579868(uVar6,0);
    if (*(int *)(*(long *)Method_UnityEngine_Rendering_Universal_ClipperBase_AddPath__ + 0xe0) == 0)
    {
      thunk_FUN_01ee6d7c(*(long *)Method_UnityEngine_Rendering_Universal_ClipperBase_AddPath__);
    }
    uVar6 = FUN_0392f7cc(uVar6,0);
    if (*(uint *)(lVar5 + 0x18) < 8) goto LAB_026d995c;
    *(undefined8 *)(lVar5 + 0x58) = uVar6;
    thunk_FUN_01f51358((undefined8 *)(lVar5 + 0x58),uVar6);
    if (*(uint *)(lVar5 + 0x18) < 9) goto LAB_026d995c;
    *(undefined8 *)(lVar5 + 0x60) =
         *(undefined8 *)Method_UnityEngine_UIElements_ObjectPool<UIRAtlasAllocator_Row>_Release__;
    thunk_FUN_01f51358();
    uVar6 = FUN_0340efe8(lVar5,0);
    if (lVar7 == 0) goto LAB_026d9970;
    FUN_0390b988(lVar7,uVar6,0);
    lVar7 = *unaff_x21;
    uVar3 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar3 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *unaff_x23) goto LAB_026d97d0;
        uVar3 = uVar3 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar3 != 0);
    }
    goto LAB_026d97c0;
  }
  if (*(int *)(*(long *)
                Method_UnityEngine_UIElements_CallbackEventHandler_UnregisterCallback<FocusInEvent>__
              + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar6 = FUN_0390bad0(in_stack_00000050,0);
  if (*(int *)(*(long *)Method_System_Runtime_Remoting_ConfigHandler_ReadClientActivated__ + 0xe0)
      == 0) {
    thunk_FUN_01ee6d7c(*(long *)Method_System_Runtime_Remoting_ConfigHandler_ReadClientActivated__);
  }
  plVar4 = (long *)FUN_0390bc14(uVar6,0);
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  (**(code **)(*plVar4 + 0x178))();
  if (*(int *)(*(long *)
                Method_UnityEngine_UIElements_CallbackEventHandler_UnregisterCallback<FocusInEvent>__
              + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  FUN_0390bc6c(in_stack_00000050);
  goto LAB_026d916c;
LAB_026d97d0:
  puVar2 = (undefined8 *)(lVar7 + (long)(*piVar9 + 0x25) * 0x10 + 0x138);
LAB_026d97e0:
  (*(code *)*puVar2)();
LAB_026d916c:
  param_1 = *unaff_x21;
  param_3 = *unaff_x23;
  in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
  if (in_x9 == 0) goto LAB_026d919c;
  in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
LAB_026d9184:
  if (*(long *)(in_x10 + -2) != param_3) goto code_r0x026d9190;
  puVar2 = (undefined8 *)(param_1 + (long)(*in_x10 + 0x10) * 0x10 + 0x138);
  goto LAB_026d91bc;
}


