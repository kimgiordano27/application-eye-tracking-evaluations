/*
FUNCTION_NAME: FUN_026d9e64
ENTRY_POINT: 026d9e64
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_6;ui_or_gameplay_sink_hits_4;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_026d9e64(long param_1,long *param_2,long *param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined1 local_78;
  undefined8 local_70;
  undefined8 local_68;
  
  if ((DAT_0483018a & 1) == 0) {
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
    DAT_0483018a = 1;
  }
  local_70 = 0;
  local_68 = 0;
  lVar12 = *param_2;
  uVar14 = *(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x30);
  if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  uVar14 = FUN_03579868(uVar14,0);
  lVar13 = *(long *)(param_1 + 0x10);
  if (lVar13 == 0) {
    if (param_3 == (long *)0x0) goto LAB_026da8a0;
    lVar13 = *param_3;
    uVar10 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) ==
            *(long *)Method_System_Runtime_Remoting_ConfigHandler_ReadPreload__) {
          puVar4 = (undefined8 *)(lVar13 + (long)(*piVar11 + 8) * 0x10 + 0x138);
          goto LAB_026da004;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar4 = (undefined8 *)
             FUN_01ecb238(param_3,*(long *)
                                   Method_System_Runtime_Remoting_ConfigHandler_ReadPreload__,8);
LAB_026da004:
    lVar13 = (*(code *)*puVar4)(param_3,puVar4[1]);
    if ((lVar13 == 0) || (lVar13 = FUN_0390b368(lVar13,0), lVar13 == 0)) goto LAB_026da8a0;
    lVar13 = FUN_0390b3d4(lVar13,0);
  }
  if (*(int *)(*(long *)
                Method_UnityEngine_UIElements_CallbackEventHandler_UnregisterCallback<FocusInEvent>__
              + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  lVar13 = FUN_0390b514(uVar14,lVar13,0);
  puVar2 = Method_UnityEngine_Rendering_UI_DebugUIHandlerVector2_<SetWidget>b__6_0__;
  puVar1 = Method_System_Runtime_Remoting_ConfigHandler_ReadPreload__;
  if (param_3 != (long *)0x0) {
LAB_026da078:
    lVar8 = *param_3;
    uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
          puVar4 = (undefined8 *)(lVar8 + (long)(*piVar11 + 0x10) * 0x10 + 0x138);
          goto LAB_026da0c8;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar4 = (undefined8 *)FUN_01ecb238(param_3,*(long *)puVar1,0x10);
LAB_026da0c8:
    uVar3 = (*(code *)*puVar4)(param_3,&local_68,puVar4[1]);
    if (((uVar3 & 0xff) < 0x10) && ((1 << (ulong)(uVar3 & 0x1f) & 0xa100U) != 0)) {
      lVar13 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x28);
      if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
        lVar13 = FUN_01ecaf44(lVar13);
      }
      if (lVar12 == 0) {
        lVar8 = 0;
      }
      else {
        lVar8 = thunk_FUN_01f116d0(lVar12,lVar13);
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08cfc(lVar12,lVar13);
        }
      }
      *param_2 = lVar8;
      lVar13 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x28);
      if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
        lVar13 = FUN_01ecaf44(lVar13);
      }
      if (lVar12 == 0) {
        lVar8 = 0;
      }
      else {
        lVar8 = thunk_FUN_01f116d0(lVar12,lVar13);
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08cfc(lVar12,lVar13);
        }
      }
      thunk_FUN_01f51358(param_2,lVar8);
      return;
    }
    uVar10 = FUN_0340eec4(local_68,0);
    if ((uVar10 & 1) == 0) {
      if (lVar13 != 0) {
        uVar10 = Unity_Collections_FixedList64Bytes_Enumerator<byte>__Reset
                           (lVar13,local_68,&local_70,
                            *(undefined8 *)
                             Method_UnityEngine_Rendering_UI_DebugUIHandlerColor_<SetWidget>b__9_7__
                           );
        uVar14 = local_70;
        if ((uVar10 & 1) != 0) goto code_r0x026da170;
        lVar8 = *param_3;
        uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
              puVar4 = (undefined8 *)(lVar8 + (long)(*piVar11 + 8) * 0x10 + 0x138);
              goto LAB_026da42c;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar4 = (undefined8 *)FUN_01ecb238(param_3,*(long *)puVar1,8);
LAB_026da42c:
        lVar8 = (*(code *)*puVar4)(param_3,puVar4[1]);
        if ((lVar8 != 0) && (lVar8 = FUN_0390b368(lVar8,0), lVar8 != 0)) {
          lVar8 = FUN_0390b70c(lVar8,0);
          lVar7 = FUN_01f08890(*(undefined8 *)
                                Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_get_localPosition__
                               ,9);
          if (lVar7 != 0) {
            if (*(int *)(lVar7 + 0x18) == 0) goto LAB_026da89c;
            *(undefined8 *)(lVar7 + 0x20) =
                 *(undefined8 *)
                  Method_UnityEngine_Rendering_UI_DebugUIHandlerColor_<SetupSettings>b__11_2__;
            thunk_FUN_01f51358((undefined8 *)(lVar7 + 0x20));
            if (*(uint *)(lVar7 + 0x18) < 2) goto LAB_026da89c;
            *(undefined8 *)(lVar7 + 0x28) = local_68;
            thunk_FUN_01f51358((undefined8 *)(lVar7 + 0x28));
            if (*(uint *)(lVar7 + 0x18) < 3) goto LAB_026da89c;
            *(undefined8 *)(lVar7 + 0x30) =
                 *(undefined8 *)
                  Method_UnityEngine_Rendering_UI_DebugUIHandlerIndirectToggle_OnToggleValueChanged__
            ;
            thunk_FUN_01f51358((undefined8 *)(lVar7 + 0x30));
            local_88 = *(undefined8 *)
                        Method_UnityEngine_UIElements_ComputedTransitionUtils_GetWrappingTransitionData<EasingFunction>__
            ;
            uStack_80 = 0xffffffffffffffff;
            local_78 = (char)uVar3;
            uVar14 = FUN_0359ff90(&local_88,0);
            if (*(uint *)(lVar7 + 0x18) < 4) goto LAB_026da89c;
            *(undefined8 *)(lVar7 + 0x38) = uVar14;
            thunk_FUN_01f51358((undefined8 *)(lVar7 + 0x38),uVar14);
            if (*(uint *)(lVar7 + 0x18) < 5) goto LAB_026da89c;
            *(undefined8 *)(lVar7 + 0x40) = *(undefined8 *)puVar2;
            thunk_FUN_01f51358();
            lVar9 = *param_3;
            uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
            if (uVar10 != 0) {
              piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
                  puVar4 = (undefined8 *)(lVar9 + (long)(*piVar11 + 5) * 0x10 + 0x138);
                  goto LAB_026da58c;
                }
                uVar10 = uVar10 - 1;
                piVar11 = piVar11 + 4;
              } while (uVar10 != 0);
            }
            puVar4 = (undefined8 *)FUN_01ecb238(param_3,*(long *)puVar1,5);
LAB_026da58c:
            uVar14 = (*(code *)*puVar4)(param_3,puVar4[1]);
            if (*(uint *)(lVar7 + 0x18) < 6) goto LAB_026da89c;
            *(undefined8 *)(lVar7 + 0x48) = uVar14;
            thunk_FUN_01f51358((undefined8 *)(lVar7 + 0x48),uVar14);
            if (*(uint *)(lVar7 + 0x18) < 7) goto LAB_026da89c;
            *(undefined8 *)(lVar7 + 0x50) =
                 *(undefined8 *)
                  Method_UnityEngine_Rendering_UI_DebugUIHandlerToggle_OnToggleValueChanged__;
            thunk_FUN_01f51358();
            uVar14 = *(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x30);
            if (*(int *)(*(long *)Method_Unity_Collections_NativeArray<Matrix4x4>_Dispose__ + 0xe0)
                == 0) {
              thunk_FUN_01ee6d7c();
            }
            uVar14 = FUN_03579868(uVar14,0);
            if (*(int *)(*(long *)Method_UnityEngine_Rendering_Universal_ClipperBase_AddPath__ +
                        0xe0) == 0) {
              thunk_FUN_01ee6d7c(*(long *)
                                  Method_UnityEngine_Rendering_Universal_ClipperBase_AddPath__);
            }
            uVar14 = FUN_0392f7cc(uVar14,0);
            if (*(uint *)(lVar7 + 0x18) < 8) goto LAB_026da89c;
            *(undefined8 *)(lVar7 + 0x58) = uVar14;
            thunk_FUN_01f51358((undefined8 *)(lVar7 + 0x58),uVar14);
            if (*(uint *)(lVar7 + 0x18) < 9) goto LAB_026da89c;
            *(undefined8 *)(lVar7 + 0x60) =
                 *(undefined8 *)
                  Method_UnityEngine_UIElements_ObjectPool<UIRAtlasAllocator_Row>_Release__;
            thunk_FUN_01f51358();
            uVar14 = FUN_0340efe8(lVar7,0);
            if (lVar8 != 0) {
              FUN_0390b988(lVar8,uVar14,0);
              lVar7 = *param_3;
              lVar8 = *(long *)puVar1;
              uVar10 = (ulong)*(ushort *)(lVar7 + 0x12e);
              if (uVar10 != 0) {
                piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar11 + -2) == lVar8) goto LAB_026da6dc;
                  uVar10 = uVar10 - 1;
                  piVar11 = piVar11 + 4;
                } while (uVar10 != 0);
              }
              goto LAB_026da6cc;
            }
          }
        }
      }
    }
    else {
      lVar8 = *param_3;
      uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
            puVar4 = (undefined8 *)(lVar8 + (long)(*piVar11 + 8) * 0x10 + 0x138);
            goto LAB_026da260;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar4 = (undefined8 *)FUN_01ecb238(param_3,*(long *)puVar1,8);
LAB_026da260:
      lVar8 = (*(code *)*puVar4)(param_3,puVar4[1]);
      if ((lVar8 != 0) && (lVar8 = FUN_0390b368(lVar8,0), lVar8 != 0)) {
        lVar8 = FUN_0390b70c(lVar8,0);
        lVar7 = FUN_01f08890(*(undefined8 *)
                              Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>_get_localPosition__
                             ,5);
        if (lVar7 != 0) {
          if (*(int *)(lVar7 + 0x18) == 0) {
LAB_026da89c:
                    /* WARNING: Subroutine does not return */
            FUN_01f08a44();
          }
          *(undefined8 *)(lVar7 + 0x20) =
               *(undefined8 *)
                Method_UnityEngine_Rendering_UI_DebugUIHandlerColor_<SetupSettings>b__11_1__;
          thunk_FUN_01f51358((undefined8 *)(lVar7 + 0x20));
          local_88 = *(undefined8 *)
                      Method_UnityEngine_UIElements_ComputedTransitionUtils_GetWrappingTransitionData<EasingFunction>__
          ;
          uStack_80 = 0xffffffffffffffff;
          local_78 = (char)uVar3;
          uVar14 = FUN_0359ff90(&local_88,0);
          if (*(uint *)(lVar7 + 0x18) < 2) goto LAB_026da89c;
          *(undefined8 *)(lVar7 + 0x28) = uVar14;
          thunk_FUN_01f51358((undefined8 *)(lVar7 + 0x28),uVar14);
          if (*(uint *)(lVar7 + 0x18) < 3) goto LAB_026da89c;
          *(undefined8 *)(lVar7 + 0x30) = *(undefined8 *)puVar2;
          thunk_FUN_01f51358();
          lVar9 = *param_3;
          uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar10 != 0) {
            piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
                puVar4 = (undefined8 *)(lVar9 + (long)(*piVar11 + 5) * 0x10 + 0x138);
                goto LAB_026da378;
              }
              uVar10 = uVar10 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar10 != 0);
          }
          puVar4 = (undefined8 *)FUN_01ecb238(param_3,*(long *)puVar1,5);
LAB_026da378:
          uVar14 = (*(code *)*puVar4)(param_3,puVar4[1]);
          if (*(uint *)(lVar7 + 0x18) < 4) goto LAB_026da89c;
          *(undefined8 *)(lVar7 + 0x38) = uVar14;
          thunk_FUN_01f51358((undefined8 *)(lVar7 + 0x38),uVar14);
          if (*(uint *)(lVar7 + 0x18) < 5) goto LAB_026da89c;
          *(undefined8 *)(lVar7 + 0x40) =
               *(undefined8 *)
                Method_UnityEngine_Rendering_UI_DebugUIHandlerColor_<SetupSettings>b__11_0__;
          thunk_FUN_01f51358();
          uVar14 = FUN_0340efe8(lVar7,0);
          if (lVar8 != 0) {
            FUN_0390b840(lVar8,uVar14,0);
            lVar7 = *param_3;
            lVar8 = *(long *)puVar1;
            uVar10 = (ulong)*(ushort *)(lVar7 + 0x12e);
            if (uVar10 != 0) {
              piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
              do {
                if (*(long *)(piVar11 + -2) == lVar8) goto LAB_026da6dc;
                uVar10 = uVar10 - 1;
                piVar11 = piVar11 + 4;
              } while (uVar10 != 0);
            }
LAB_026da6cc:
            puVar4 = (undefined8 *)FUN_01ecb238(param_3,lVar8,0x25);
            goto LAB_026da6ec;
          }
        }
      }
    }
  }
LAB_026da8a0:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
code_r0x026da170:
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
  plVar5 = (long *)FUN_0390bc14(uVar14,0);
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  uVar6 = (**(code **)(*plVar5 + 0x178))(plVar5,param_3,*(undefined8 *)(*plVar5 + 0x180));
  uVar14 = local_70;
  if (*(int *)(*(long *)
                Method_UnityEngine_UIElements_CallbackEventHandler_UnregisterCallback<FocusInEvent>__
              + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  FUN_0390bc6c(uVar14,lVar12,uVar6,0);
  goto LAB_026da078;
LAB_026da6dc:
  puVar4 = (undefined8 *)(lVar7 + (long)(*piVar11 + 0x25) * 0x10 + 0x138);
LAB_026da6ec:
  (*(code *)*puVar4)(param_3,puVar4[1]);
  goto LAB_026da078;
}


