/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$delete_vx_evt_aux_audio_properties_t
ENTRY_POINT: 05fdac64
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_19;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_1
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__delete_vx_evt_aux_audio_properties_t
               (int *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  undefined4 uVar5;
  char *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  int unaff_w19;
  ulong uVar10;
  long *unaff_x21;
  long unaff_x22;
  int unaff_w23;
  undefined4 *puVar11;
  undefined8 *unaff_x24;
  ulong unaff_x25;
  int *unaff_x26;
  long lVar12;
  long *plVar13;
  long lVar14;
  long unaff_x29;
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
  
  while (lVar14 = *(long *)(unaff_x29 + 0x30), lVar14 != 0) {
    iVar3 = *param_1;
    plVar13 = *(long **)(lVar14 + 0x18);
    if ((*(ushort *)
          (*(long *)(*(long *)
                      Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Select<InternedString,_string>__
                    + 0x20) + 0x135) & 1) == 0) {
      FUN_02dcfd18(*(long *)(*(long *)
                              Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Select<InternedString,_string>__
                            + 0x20));
      lVar14 = *(long *)(unaff_x29 + 0x30);
    }
    memcpy(&stack0x00000060,(void *)(*plVar13 + (long)iVar3 * 0x80),0x80);
    uVar5 = in_stack_00000060;
    uVar7 = FUN_05fdf5d4(lVar14,unaff_x26[8],in_stack_00000060,0);
    uVar8 = FUN_05fd80a8(*(undefined8 *)(unaff_x29 + 0x30),&stack0x00000060,unaff_x26,uVar7);
    in_stack_000000e0 =
         FUN_05362cb4(*(undefined8 *)
                       Method_UnityEngine_Rendering_AsyncGPUReadbackRequest_GetData<uint>__,uVar8,0)
    ;
    lVar14 = *(long *)(unaff_x22 + 0x20);
    in_stack_000000e8 = 0;
    LeanTween__value(&stack0x000000e0,in_stack_000000e0);
    in_stack_000000e8 = CONCAT71(in_stack_000000e8._1_7_,(int)uVar7 == 0xc);
    if (lVar14 == 0) break;
    FUN_04dec6b0(lVar14,uVar5,in_stack_000000e0,in_stack_000000e8,
                 *(undefined8 *)Method_UnityEngine_Assertions_Assert_AreEqual<PanelSettings>__);
    unaff_w19 = unaff_w19 + 1;
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
                    lVar14 = *(long *)(*(long *)(in_stack_00000048 + 0x30) + 0x18);
                    if ((*(ushort *)
                          (*(long *)(*(long *)Method_Mono_Security_ASN1Convert_ToInt32__ + 0x20) +
                          0x135) & 1) == 0) {
                      FUN_02dcfd18();
                    }
                    if (*(int *)(lVar14 + 8) <= in_stack_00000010._4_4_) {
                      return;
                    }
                    if (*(long *)(in_stack_00000048 + 0x30) == 0) goto LAB_05fdad7c;
                    unaff_x26 = (int *)FUN_042c6444(*(long *)(in_stack_00000048 + 0x30) + 0x18,
                                                    in_stack_00000010._4_4_,
                                                    *(undefined8 *)
                                                     Method_Mono_Security_ASN1Convert_ToDateTime__);
                    if (((*in_stack_00000028 == 0) ||
                        (lVar14 = *(long *)(*in_stack_00000028 + 0x10), lVar14 == 0)) ||
                       (FUN_041c332c(&stack0x00000350,lVar14,*unaff_x26,
                                     *(undefined8 *)Method_AssetInputExample_DoPressedThing__),
                       in_stack_00000388 == 0)) goto LAB_05fdad7c;
                    unaff_x22 = *(long *)(in_stack_00000388 + 0x10);
                  } while (unaff_x22 == 0);
                  lVar14 = *(long *)(in_stack_00000048 + 0x30);
                  if (DAT_06dc4872 == '\0') {
                    FUN_02d965b8(
                                Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<PlayerInput,_PlayerInput>__
                                );
                    DAT_06dc4872 = '\x01';
                  }
                  puVar4 = 
                  Method_System_Runtime_CompilerServices_AsyncMethodBuilderCore_SetStateMachine__;
                  if (lVar14 == 0) goto LAB_05fdad7c;
                  iVar3 = unaff_x26[10];
                  uVar1 = unaff_x26[0xb];
                  uVar10 = (ulong)uVar1;
                  lVar12 = *(long *)
                            Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<PlayerInput,_PlayerInput>__
                  ;
                  lVar9 = *(long *)(lVar12 + 0x38);
                  if (lVar9 == 0) {
                    FUN_02dcfd74(lVar12);
                    lVar9 = *(long *)(lVar12 + 0x38);
                  }
                  lVar14 = FUN_036ee4d8(*(undefined8 *)(lVar14 + 0x30),*(undefined8 *)(lVar9 + 0x10)
                                       );
                  if ((int)uVar1 < 0) {
                    FUN_05508bc8(0);
                  }
                  else if (uVar1 != 0) {
                    puVar11 = (undefined4 *)(lVar14 + (long)iVar3 * 0xc + 8);
                    do {
                      if ((*(long *)(in_stack_00000048 + 0x30) == 0) ||
                         (lVar14 = *(long *)(*(long *)(in_stack_00000048 + 0x30) + 0x10),
                         lVar14 == 0)) goto LAB_05fdad7c;
                      pcVar6 = (char *)FUN_05fdfe80(lVar14,*(undefined8 *)(puVar11 + -2),*puVar11,0)
                      ;
                      if (*pcVar6 != '\0') {
                        if (*(long *)(in_stack_00000048 + 0x30) == 0) goto LAB_05fdad7c;
                        iVar3 = *(int *)(pcVar6 + 4);
                        plVar13 = *(long **)(*(long *)(in_stack_00000048 + 0x30) + 0x18);
                        if ((*(ushort *)
                              (*(long *)(*(long *)
                                          Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Select<InternedString,_string>__
                                        + 0x20) + 0x135) & 1) == 0) {
                          FUN_02dcfd18(*(long *)(*(long *)
                                                  Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Select<InternedString,_string>__
                                                + 0x20));
                        }
                        memcpy(&stack0x000000f0,(void *)(*plVar13 + (long)iVar3 * 0x80),0x80);
                        if (in_stack_00000110 < 0) {
                          FUN_05fde34c(&stack0x00000350,3,*unaff_x26,0);
                          uVar7 = 0;
                        }
                        else {
                          uVar7 = FUN_05fdf5d4(*(undefined8 *)(in_stack_00000048 + 0x30),
                                               in_stack_00000110,*unaff_x26,0);
                        }
                        uVar8 = FUN_05fd80a8(*(undefined8 *)(in_stack_00000048 + 0x30),unaff_x26,
                                             &stack0x000000f0,uVar7);
                        in_stack_000000e0 = FUN_05362cb4(*(undefined8 *)puVar4,uVar8,0);
                        uVar5 = in_stack_000000f0;
                        lVar14 = *(long *)(unaff_x22 + 0x20);
                        in_stack_000000e8 = 0;
                        LeanTween__value(&stack0x000000e0,in_stack_000000e0);
                        in_stack_000000e8 = CONCAT71(in_stack_000000e8._1_7_,(int)uVar7 == 0xc);
                        if (lVar14 == 0) goto LAB_05fdad7c;
                        FUN_04dec6b0(lVar14,uVar5,in_stack_000000e0,in_stack_000000e8,
                                     *(undefined8 *)
                                      Method_UnityEngine_Assertions_Assert_AreEqual<PanelSettings>__
                                    );
                      }
                      uVar10 = uVar10 - 1;
                      puVar11 = puVar11 + 3;
                    } while (uVar10 != 0);
                  }
                } while (unaff_x26[8] < 0);
                lVar14 = *(long *)(in_stack_00000048 + 0x30);
                if (DAT_06dc4873 == '\0') {
                  FUN_02d965b8(
                              Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<Pointer,_InputDevice>__
                              );
                  DAT_06dc4873 = '\x01';
                }
                if (lVar14 == 0) goto LAB_05fdad7c;
                iVar3 = unaff_x26[0xc];
                uVar1 = unaff_x26[0xd];
                in_stack_00000018 = (ulong)uVar1;
                lVar12 = *(long *)
                          Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<Pointer,_InputDevice>__
                ;
                lVar9 = *(long *)(lVar12 + 0x38);
                if (lVar9 == 0) {
                  FUN_02dcfd74(lVar12);
                  lVar9 = *(long *)(lVar12 + 0x38);
                }
                in_stack_00000020 =
                     FUN_036ee4ec(*(undefined8 *)(lVar14 + 0x38),*(undefined8 *)(lVar9 + 0x10));
                if (-1 < (int)uVar1) break;
                FUN_05508bc8(0);
              }
            } while (uVar1 == 0);
            unaff_x25 = 0;
            in_stack_00000020 = in_stack_00000020 + (long)iVar3 * 0xc;
          }
          if (*(long *)(in_stack_00000048 + 0x30) == 0) goto LAB_05fdad7c;
          unaff_x24 = (undefined8 *)(in_stack_00000020 + unaff_x25 * 0xc);
          in_stack_00000030 =
               in_stack_00000030 & 0xffffffff00000000 | (ulong)*(uint *)(unaff_x24 + 1);
          lVar14 = FUN_05fdc35c(*(long *)(in_stack_00000048 + 0x30),*unaff_x24,in_stack_00000030,0);
        } while (*(int *)(lVar14 + 8) == *unaff_x26);
        if ((*(long *)(in_stack_00000048 + 0x30) == 0) ||
           (lVar14 = *(long *)(*(long *)(in_stack_00000048 + 0x30) + 0x10), lVar14 == 0))
        goto LAB_05fdad7c;
        lVar14 = FUN_05fdfe80(lVar14,*unaff_x24,*(undefined4 *)(unaff_x24 + 1),0);
        unaff_w23 = *(int *)(lVar14 + 8);
      } while (unaff_w23 < 1);
      unaff_w19 = 0;
    }
    if ((*(long *)(in_stack_00000048 + 0x30) == 0) ||
       (lVar14 = *(long *)(*(long *)(in_stack_00000048 + 0x30) + 0x10), lVar14 == 0)) break;
    uVar7 = *unaff_x24;
    if (DAT_06dc486d == '\0') {
      FUN_02d965b8();
      DAT_06dc486d = '\x01';
    }
    if (*(int *)(*unaff_x21 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    if ((*(long *)(in_stack_00000048 + 0x30) == 0) ||
       (lVar9 = *(long *)(*(long *)(in_stack_00000048 + 0x30) + 0x10), lVar9 == 0)) break;
    lVar9 = *(long *)(lVar9 + 0x20);
    iVar3 = *(int *)(lVar14 + 0x28);
    iVar2 = *(int *)(lVar14 + 0x2c);
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
    if (lVar9 == 0) break;
    if (*(uint *)(lVar9 + 0x18) <= *(uint *)(unaff_x24 + 1)) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96868();
    }
    param_1 = (int *)FUN_042c8e28(lVar9 + (long)(int)*(uint *)(unaff_x24 + 1) * 8 + 0x20,
                                  unaff_w19 +
                                  ((int)((ulong)uVar7 >> 0x20) + iVar3 * ((uint)uVar7 & 0xffff)) *
                                  iVar2,*(undefined8 *)
                                         Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_Copy<InputControl>__
                                 );
    unaff_x29 = in_stack_00000048;
  }
LAB_05fdad7c:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


