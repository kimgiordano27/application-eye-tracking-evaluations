/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_evt_media_stream_updated_t_session_handle_get
ENTRY_POINT: 05fdace0
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_20;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_3;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_evt_media_stream_updated_t_session_handle_get
               (undefined8 param_1,undefined4 *param_2,int *param_3,undefined8 param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined *puVar4;
  undefined4 uVar5;
  char *pcVar6;
  undefined8 uVar7;
  int *piVar8;
  undefined8 uVar9;
  long lVar10;
  int unaff_w19;
  ulong uVar11;
  long *unaff_x21;
  long unaff_x22;
  int unaff_w23;
  undefined4 *puVar12;
  long *plVar13;
  undefined8 *unaff_x24;
  ulong unaff_x25;
  int *unaff_x26;
  undefined4 unaff_w27;
  long lVar14;
  long lVar15;
  undefined8 unaff_x29;
  undefined8 in_stack_00000010;
  ulong in_stack_00000018;
  long in_stack_00000020;
  long *in_stack_00000028;
  ulong in_stack_00000030;
  long in_stack_00000048;
  undefined4 in_stack_00000060;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined4 in_stack_000000f0;
  int in_stack_00000110;
  long in_stack_00000388;
  
  while( true ) {
    uVar9 = FUN_05fd80a8(param_1,param_2,param_3,param_4);
    in_stack_000000e0 =
         FUN_05362cb4(*(undefined8 *)
                       Method_UnityEngine_Rendering_AsyncGPUReadbackRequest_GetData<uint>__,uVar9,0)
    ;
    lVar15 = *(long *)(unaff_x22 + 0x20);
    in_stack_000000e8 = 0;
    LeanTween__value(&stack0x000000e0,in_stack_000000e0);
    in_stack_000000e8 = CONCAT71(in_stack_000000e8._1_7_,(int)unaff_x29 == 0xc);
    if (lVar15 == 0) break;
    FUN_04dec6b0(lVar15,unaff_w27,in_stack_000000e0,in_stack_000000e8,
                 *(undefined8 *)Method_UnityEngine_Assertions_Assert_AreEqual<PanelSettings>__);
    unaff_w19 = unaff_w19 + 1;
    param_3 = unaff_x26;
    if (unaff_w23 == unaff_w19) {
      do {
        do {
          unaff_x25 = unaff_x25 + 1;
          if (unaff_x25 == in_stack_00000018) {
            do {
              while( true ) {
                do {
                  do {
                    in_stack_00000010._4_4_ = in_stack_00000010._4_4_ + 1;
                    if (*(long *)(in_stack_00000048 + 0x30) == 0) goto LAB_05fdad7c;
                    lVar15 = *(long *)(*(long *)(in_stack_00000048 + 0x30) + 0x18);
                    if ((*(ushort *)
                          (*(long *)(*(long *)Method_Mono_Security_ASN1Convert_ToInt32__ + 0x20) +
                          0x135) & 1) == 0) {
                      FUN_02dcfd18();
                    }
                    if (*(int *)(lVar15 + 8) <= in_stack_00000010._4_4_) {
                      return;
                    }
                    if (*(long *)(in_stack_00000048 + 0x30) == 0) goto LAB_05fdad7c;
                    unaff_x26 = (int *)FUN_042c6444(*(long *)(in_stack_00000048 + 0x30) + 0x18,
                                                    in_stack_00000010._4_4_,
                                                    *(undefined8 *)
                                                     Method_Mono_Security_ASN1Convert_ToDateTime__);
                    if (((*in_stack_00000028 == 0) ||
                        (lVar15 = *(long *)(*in_stack_00000028 + 0x10), lVar15 == 0)) ||
                       (FUN_041c332c(&stack0x00000350,lVar15,*unaff_x26,
                                     *(undefined8 *)Method_AssetInputExample_DoPressedThing__),
                       in_stack_00000388 == 0)) goto LAB_05fdad7c;
                    unaff_x22 = *(long *)(in_stack_00000388 + 0x10);
                  } while (unaff_x22 == 0);
                  lVar15 = *(long *)(in_stack_00000048 + 0x30);
                  if (DAT_06dc4872 == '\0') {
                    FUN_02d965b8(
                                Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<PlayerInput,_PlayerInput>__
                                );
                    DAT_06dc4872 = '\x01';
                  }
                  puVar4 = 
                  Method_System_Runtime_CompilerServices_AsyncMethodBuilderCore_SetStateMachine__;
                  if (lVar15 == 0) goto LAB_05fdad7c;
                  iVar1 = unaff_x26[10];
                  uVar2 = unaff_x26[0xb];
                  uVar11 = (ulong)uVar2;
                  lVar14 = *(long *)
                            Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<PlayerInput,_PlayerInput>__
                  ;
                  lVar10 = *(long *)(lVar14 + 0x38);
                  if (lVar10 == 0) {
                    FUN_02dcfd74(lVar14);
                    lVar10 = *(long *)(lVar14 + 0x38);
                  }
                  lVar15 = FUN_036ee4d8(*(undefined8 *)(lVar15 + 0x30),
                                        *(undefined8 *)(lVar10 + 0x10));
                  if ((int)uVar2 < 0) {
                    FUN_05508bc8(0);
                  }
                  else if (uVar2 != 0) {
                    puVar12 = (undefined4 *)(lVar15 + (long)iVar1 * 0xc + 8);
                    do {
                      if ((*(long *)(in_stack_00000048 + 0x30) == 0) ||
                         (lVar15 = *(long *)(*(long *)(in_stack_00000048 + 0x30) + 0x10),
                         lVar15 == 0)) goto LAB_05fdad7c;
                      pcVar6 = (char *)FUN_05fdfe80(lVar15,*(undefined8 *)(puVar12 + -2),*puVar12,0)
                      ;
                      if (*pcVar6 != '\0') {
                        if (*(long *)(in_stack_00000048 + 0x30) == 0) goto LAB_05fdad7c;
                        iVar1 = *(int *)(pcVar6 + 4);
                        plVar13 = *(long **)(*(long *)(in_stack_00000048 + 0x30) + 0x18);
                        if ((*(ushort *)
                              (*(long *)(*(long *)
                                          Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Select<InternedString,_string>__
                                        + 0x20) + 0x135) & 1) == 0) {
                          FUN_02dcfd18(*(long *)(*(long *)
                                                  Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Select<InternedString,_string>__
                                                + 0x20));
                        }
                        memcpy(&stack0x000000f0,(void *)(*plVar13 + (long)iVar1 * 0x80),0x80);
                        if (in_stack_00000110 < 0) {
                          FUN_05fde34c(&stack0x00000350,3,*unaff_x26,0);
                          uVar9 = 0;
                        }
                        else {
                          uVar9 = FUN_05fdf5d4(*(undefined8 *)(in_stack_00000048 + 0x30),
                                               in_stack_00000110,*unaff_x26,0);
                        }
                        uVar7 = FUN_05fd80a8(*(undefined8 *)(in_stack_00000048 + 0x30),unaff_x26,
                                             &stack0x000000f0,uVar9);
                        in_stack_000000e0 = FUN_05362cb4(*(undefined8 *)puVar4,uVar7,0);
                        uVar5 = in_stack_000000f0;
                        lVar15 = *(long *)(unaff_x22 + 0x20);
                        in_stack_000000e8 = 0;
                        LeanTween__value(&stack0x000000e0,in_stack_000000e0);
                        in_stack_000000e8 = CONCAT71(in_stack_000000e8._1_7_,(int)uVar9 == 0xc);
                        if (lVar15 == 0) goto LAB_05fdad7c;
                        FUN_04dec6b0(lVar15,uVar5,in_stack_000000e0,in_stack_000000e8,
                                     *(undefined8 *)
                                      Method_UnityEngine_Assertions_Assert_AreEqual<PanelSettings>__
                                    );
                      }
                      uVar11 = uVar11 - 1;
                      puVar12 = puVar12 + 3;
                    } while (uVar11 != 0);
                  }
                } while (unaff_x26[8] < 0);
                lVar15 = *(long *)(in_stack_00000048 + 0x30);
                if (DAT_06dc4873 == '\0') {
                  FUN_02d965b8(
                              Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<Pointer,_InputDevice>__
                              );
                  DAT_06dc4873 = '\x01';
                }
                if (lVar15 == 0) goto LAB_05fdad7c;
                iVar1 = unaff_x26[0xc];
                uVar2 = unaff_x26[0xd];
                in_stack_00000018 = (ulong)uVar2;
                lVar14 = *(long *)
                          Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<Pointer,_InputDevice>__
                ;
                lVar10 = *(long *)(lVar14 + 0x38);
                if (lVar10 == 0) {
                  FUN_02dcfd74(lVar14);
                  lVar10 = *(long *)(lVar14 + 0x38);
                }
                in_stack_00000020 =
                     FUN_036ee4ec(*(undefined8 *)(lVar15 + 0x38),*(undefined8 *)(lVar10 + 0x10));
                if (-1 < (int)uVar2) break;
                FUN_05508bc8(0);
              }
            } while (uVar2 == 0);
            unaff_x25 = 0;
            in_stack_00000020 = in_stack_00000020 + (long)iVar1 * 0xc;
          }
          if (*(long *)(in_stack_00000048 + 0x30) == 0) goto LAB_05fdad7c;
          unaff_x24 = (undefined8 *)(in_stack_00000020 + unaff_x25 * 0xc);
          in_stack_00000030 =
               in_stack_00000030 & 0xffffffff00000000 | (ulong)*(uint *)(unaff_x24 + 1);
          lVar15 = FUN_05fdc35c(*(long *)(in_stack_00000048 + 0x30),*unaff_x24,in_stack_00000030,0);
        } while (*(int *)(lVar15 + 8) == *unaff_x26);
        if ((*(long *)(in_stack_00000048 + 0x30) == 0) ||
           (lVar15 = *(long *)(*(long *)(in_stack_00000048 + 0x30) + 0x10), lVar15 == 0))
        goto LAB_05fdad7c;
        lVar15 = FUN_05fdfe80(lVar15,*unaff_x24,*(undefined4 *)(unaff_x24 + 1),0);
        unaff_w23 = *(int *)(lVar15 + 8);
      } while (unaff_w23 < 1);
      unaff_w19 = 0;
      param_3 = unaff_x26;
    }
    if ((*(long *)(in_stack_00000048 + 0x30) == 0) ||
       (lVar15 = *(long *)(*(long *)(in_stack_00000048 + 0x30) + 0x10), lVar15 == 0)) break;
    uVar9 = *unaff_x24;
    if (DAT_06dc486d == '\0') {
      FUN_02d965b8();
      DAT_06dc486d = '\x01';
    }
    if (*(int *)(*unaff_x21 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    if ((*(long *)(in_stack_00000048 + 0x30) == 0) ||
       (lVar10 = *(long *)(*(long *)(in_stack_00000048 + 0x30) + 0x10), lVar10 == 0)) break;
    lVar10 = *(long *)(lVar10 + 0x20);
    iVar1 = *(int *)(lVar15 + 0x28);
    iVar3 = *(int *)(lVar15 + 0x2c);
    if (*(int *)(*unaff_x21 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    if (DAT_06dc4288 == '\0') {
      FUN_02d965b8();
      DAT_06dc4288 = '\x01';
    }
    if (*(int *)(*unaff_x21 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    if (lVar10 == 0) break;
    if (*(uint *)(lVar10 + 0x18) <= *(uint *)(unaff_x24 + 1)) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96868();
    }
    piVar8 = (int *)FUN_042c8e28(lVar10 + (long)(int)*(uint *)(unaff_x24 + 1) * 8 + 0x20,
                                 unaff_w19 +
                                 ((int)((ulong)uVar9 >> 0x20) + iVar1 * ((uint)uVar9 & 0xffff)) *
                                 iVar3,*(undefined8 *)
                                        Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Copy<InputControl>__
                                );
    lVar15 = *(long *)(in_stack_00000048 + 0x30);
    if (lVar15 == 0) break;
    iVar1 = *piVar8;
    plVar13 = *(long **)(lVar15 + 0x18);
    if ((*(ushort *)
          (*(long *)(*(long *)
                      Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Select<InternedString,_string>__
                    + 0x20) + 0x135) & 1) == 0) {
      FUN_02dcfd18(*(long *)(*(long *)
                              Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Select<InternedString,_string>__
                            + 0x20));
      lVar15 = *(long *)(in_stack_00000048 + 0x30);
    }
    memcpy(&stack0x00000060,(void *)(*plVar13 + (long)iVar1 * 0x80),0x80);
    unaff_w27 = in_stack_00000060;
    param_4 = FUN_05fdf5d4(lVar15,param_3[8],in_stack_00000060,0);
    param_1 = *(undefined8 *)(in_stack_00000048 + 0x30);
    param_2 = &stack0x00000060;
    unaff_x26 = param_3;
    unaff_x29 = param_4;
  }
LAB_05fdad7c:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


