/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$VX_E_CALL_TERMINATED_NO_ANSWER_LOCAL_get
ENTRY_POINT: 05fd35ac
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 71
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;ui_or_gameplay_sink_hits_8;telemetry_or_network_hits_2
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__VX_E_CALL_TERMINATED_NO_ANSWER_LOCAL_get
               (undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  ushort uVar3;
  undefined *puVar4;
  ulong uVar5;
  char *pcVar6;
  long lVar7;
  undefined1 *puVar8;
  undefined8 uVar9;
  long lVar10;
  uint *puVar11;
  int *piVar12;
  long lVar13;
  long unaff_x19;
  long unaff_x20;
  int unaff_w21;
  int unaff_w22;
  int iVar14;
  long unaff_x23;
  undefined8 unaff_x27;
  int unaff_w28;
  int unaff_w29;
  ulong uVar15;
  undefined1 auVar16 [16];
  long in_stack_00000010;
  ulong in_stack_00000018;
  long in_stack_00000020;
  ulong in_stack_00000028;
  ulong in_stack_00000030;
  ulong in_stack_00000040;
  ulong in_stack_00000048;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined4 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined4 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  long in_stack_00000110;
  
  auVar16._8_8_ = param_2;
  auVar16._0_8_ = unaff_x27;
  do {
    pcVar6 = (char *)FUN_05fdc35c();
    if ((*pcVar6 != '\0') && (*(char *)(unaff_x23 + 0x79) == '\0')) {
      lVar7 = *(long *)(in_stack_00000020 + 0x48);
      *(undefined1 *)(unaff_x23 + 0x79) = 1;
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      FUN_047ccb88(lVar7,unaff_w29,*(undefined8 *)Method_UnityEngine_AndroidJavaClass__ctor__);
    }
    if (*(long *)(unaff_x20 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    in_stack_00000048 = auVar16._8_8_ & 0xffffffff | in_stack_00000048 & 0xffffffff00000000;
    puVar8 = (undefined1 *)
             FUN_05fdfe80(*(long *)(unaff_x20 + 0x10),auVar16._0_8_,in_stack_00000048,0);
    *(int *)(puVar8 + 4) = unaff_w29;
    *puVar8 = 1;
    in_stack_000000f8 = auVar16._8_4_;
    in_stack_000000f0 = auVar16._0_8_;
    FUN_042c7ad4(unaff_x20 + 0x38,&stack0x000000f0,
                 *(undefined8 *)
                  Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_HaveDuplicateReferences<InputControl>__
                );
    unaff_w22 = unaff_w22 + 1;
    *(int *)(unaff_x23 + 0x34) = *(int *)(unaff_x23 + 0x34) + 1;
    if (unaff_w28 == unaff_w22) {
      if (in_stack_00000110 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      do {
        lVar7 = *(long *)(in_stack_00000110 + 0xa8);
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        if (*(uint *)(lVar7 + 0x18) <= in_stack_00000018) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96868();
        }
        lVar7 = *(long *)(lVar7 + in_stack_00000018 * 8 + 0x20);
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        iVar2 = *(int *)(lVar7 + 0x18);
        if (0 < iVar2) {
          iVar14 = 0;
          do {
            auVar16 = FUN_040412e4(lVar7,iVar14,
                                   *(undefined8 *)
                                    Method_System_Span<GradientAlphaKey>_GetPinnableReference__);
            if (*(long *)(unaff_x20 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            in_stack_00000040 = auVar16._8_8_ & 0xffffffff | in_stack_00000040 & 0xffffffff00000000;
            FUN_05fdfe80(*(long *)(unaff_x20 + 0x10),auVar16._0_8_,in_stack_00000040,0);
            FUN_05fdc434();
            in_stack_000000e8 = auVar16._8_4_;
            in_stack_000000e0 = auVar16._0_8_;
            FUN_042c73d8(unaff_x20 + 0x30,&stack0x000000e0,
                         *(undefined8 *)
                          Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOf<InputBinding>__
                        );
            iVar14 = iVar14 + 1;
            *(int *)(unaff_x23 + 0x2c) = *(int *)(unaff_x23 + 0x2c) + 1;
          } while (iVar2 != iVar14);
          unaff_w29 = unaff_w21;
          if (in_stack_00000110 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
        }
        lVar7 = *(long *)(in_stack_00000110 + 0xb8);
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        if (*(uint *)(lVar7 + 0x18) <= in_stack_00000018) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96868();
        }
        lVar7 = *(long *)(lVar7 + in_stack_00000018 * 8 + 0x20);
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        iVar2 = *(int *)(lVar7 + 0x18);
        if (0 < iVar2) {
          iVar14 = 0;
          do {
            auVar16 = FUN_040412e4(lVar7,iVar14,
                                   *(undefined8 *)
                                    Method_System_Span<GradientAlphaKey>_GetPinnableReference__);
            uVar9 = auVar16._0_8_;
            if (*(long *)(unaff_x20 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            uVar15 = auVar16._8_8_ & 0xffffffff;
            in_stack_00000030 = uVar15 | in_stack_00000030 & 0xffffffff00000000;
            FUN_05fdfe80(*(long *)(unaff_x20 + 0x10),uVar9,in_stack_00000030,0);
            FUN_05fdc434();
            in_stack_000000e0 = uVar9;
            in_stack_000000e8 = auVar16._8_4_;
            FUN_042c73d8(unaff_x20 + 0x30,&stack0x000000e0,
                         *(undefined8 *)
                          Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOf<InputBinding>__
                        );
            lVar10 = *(long *)(unaff_x20 + 0x10);
            *(int *)(unaff_x23 + 0x2c) = *(int *)(unaff_x23 + 0x2c) + 1;
            if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            in_stack_00000028 = uVar15 | in_stack_00000028 & 0xffffffff00000000;
            puVar8 = (undefined1 *)FUN_05fdfe80(lVar10,uVar9,in_stack_00000028,0);
            *(int *)(puVar8 + 4) = unaff_w21;
            *puVar8 = 1;
            in_stack_000000f0 = uVar9;
            in_stack_000000f8 = auVar16._8_4_;
            FUN_042c7ad4(unaff_x20 + 0x38,&stack0x000000f0,
                         *(undefined8 *)
                          Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_HaveDuplicateReferences<InputControl>__
                        );
            iVar14 = iVar14 + 1;
            *(int *)(unaff_x23 + 0x34) = *(int *)(unaff_x23 + 0x34) + 1;
            unaff_w29 = unaff_w21;
          } while (iVar2 != iVar14);
        }
        puVar4 = Method_Mono_Security_ASN1Convert_FromUnsignedBigInteger__;
        in_stack_00000018 = in_stack_00000018 + 1;
        if (in_stack_00000018 == 3) {
          unaff_w21 = unaff_w29 + 1;
          if (*(int *)(in_stack_00000010 + 0x18) <= unaff_w21) {
            FUN_05f4a1b4(&stack0x0000011c,0);
            return;
          }
          in_stack_00000110 =
               FUN_0400ff1c(in_stack_00000010,unaff_w21,
                            *(undefined8 *)Method_Mono_Security_ASN1Convert_FromUnsignedBigInteger__
                           );
          unaff_x23 = FUN_042c6444(unaff_x20 + 0x18,unaff_w21,
                                   *(undefined8 *)Method_Mono_Security_ASN1Convert_ToDateTime__);
          FUN_05fdd424(unaff_x23,&stack0x00000110,unaff_w21,0);
          if (in_stack_00000110 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          lVar7 = *(long *)(unaff_x20 + 0x28);
          in_stack_000000d0 = 0;
          in_stack_000000d8 = 0;
          Unity_Services_Vivox_VivoxCoreInstancePINVOKE__APP_UNIQUE_3_LETTERS_USER_AGENT_ID_STRING_get
                    (&stack0x000000d0,*(undefined8 *)(in_stack_00000110 + 0x10),1);
          in_stack_00000108 = in_stack_000000d8;
          in_stack_00000100 = in_stack_000000d0;
          if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          FUN_0504d0d0(lVar7,&stack0x00000100,
                       *(undefined8 *)
                        Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_GrowBy<InputControl>__
                      );
          if (*(char *)(unaff_x23 + 0x79) != '\0') {
            if (*(long *)(in_stack_00000020 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            FUN_047ccb88(*(long *)(in_stack_00000020 + 0x48),unaff_w21,
                         *(undefined8 *)Method_UnityEngine_AndroidJavaClass__ctor__);
          }
          if (*(int *)(unaff_x23 + 4) == 2) {
            lVar7 = *(long *)(unaff_x20 + 0x40);
            if ((*(ushort *)
                  (*(long *)(*(long *)
                              Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<Gamepad,_Gamepad>__
                            + 0x20) + 0x135) & 1) == 0) {
              FUN_02dcfd18();
            }
            *(undefined4 *)(unaff_x23 + 0x38) = *(undefined4 *)(lVar7 + 8);
            if (in_stack_00000110 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            uVar1 = *(uint *)(in_stack_00000110 + 0x2c);
            if (*(int *)(*(long *)PTR_DAT_06a0f5d8 + 0xe4) == 0) {
              thunk_FUN_02df485c();
            }
            if (DAT_06dc4286 == '\0') {
              FUN_02d965b8(PTR_DAT_06a0f5d8);
              DAT_06dc4286 = '\x01';
            }
            uVar1 = uVar1 & 0xffff0000;
            if (uVar1 != 0) {
              lVar7 = *(long *)PTR_DAT_06a0f5d8;
              if (*(int *)(lVar7 + 0xe4) == 0) {
                thunk_FUN_02df485c();
                lVar7 = *(long *)PTR_DAT_06a0f5d8;
              }
              puVar11 = *(uint **)(lVar7 + 0xb8);
              if (uVar1 != *puVar11) {
                if (*(int *)(lVar7 + 0xe4) == 0) {
                  thunk_FUN_02df485c();
                  puVar11 = *(uint **)(*(long *)PTR_DAT_06a0f5d8 + 0xb8);
                }
                if (uVar1 != puVar11[1]) goto LAB_05fd2f20;
              }
              *(undefined1 *)(unaff_x23 + 0x7d) = 1;
              if (in_stack_00000110 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96860();
              }
              uVar15 = FUN_05fd1a00();
              if ((uVar15 & 1) != 0) {
                if (in_stack_00000110 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02d96860();
                }
                FUN_05fdd994(unaff_x23,*(undefined8 *)(in_stack_00000110 + 0x2c),
                             *(undefined4 *)(in_stack_00000110 + 0x34));
                *(int *)(unaff_x23 + 0x3c) = *(int *)(unaff_x23 + 0x3c) + 1;
              }
            }
LAB_05fd2f20:
            if (in_stack_00000110 == 0) {
Unity_Services_Vivox_VivoxCoreInstancePINVOKE__VX_E_SIP_BACKEND_REQUIRED_get:
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            uVar15 = 0;
            lVar7 = 0x20;
            while ((long)uVar15 < (long)(*(int *)(in_stack_00000110 + 0x50) + 1)) {
              lVar10 = *(long *)(in_stack_00000110 + 0x48);
              if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96860();
              }
              if (*(uint *)(lVar10 + 0x18) <= uVar15) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96868();
              }
              if (*(int *)(*(long *)PTR_DAT_06a0f5d8 + 0xe4) == 0) {
                thunk_FUN_02df485c();
              }
              if (DAT_06dc4286 == '\0') {
                FUN_02d965b8(PTR_DAT_06a0f5d8);
                DAT_06dc4286 = '\x01';
              }
              uVar3 = *(ushort *)(lVar10 + lVar7 + 2);
              iVar2 = (uint)uVar3 << 0x10;
              if (uVar3 != 0) {
                lVar10 = *(long *)PTR_DAT_06a0f5d8;
                if (*(int *)(lVar10 + 0xe4) == 0) {
                  thunk_FUN_02df485c();
                  lVar10 = *(long *)PTR_DAT_06a0f5d8;
                }
                piVar12 = *(int **)(lVar10 + 0xb8);
                if (iVar2 != *piVar12) {
                  if (*(int *)(lVar10 + 0xe4) == 0) {
                    thunk_FUN_02df485c();
                    piVar12 = *(int **)(*(long *)PTR_DAT_06a0f5d8 + 0xb8);
                  }
                  if (iVar2 != piVar12[1]) goto LAB_05fd3084;
                }
                if (in_stack_00000110 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02d96860();
                }
                if (*(long *)(in_stack_00000110 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02d96860();
                }
                if (*(uint *)(*(long *)(in_stack_00000110 + 0x48) + 0x18) <= uVar15) {
                    /* WARNING: Subroutine does not return */
                  FUN_02d96868();
                }
                uVar5 = FUN_05fd1a00();
                if ((uVar5 & 1) != 0) {
                  if (in_stack_00000110 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_02d96860();
                  }
                  lVar10 = *(long *)(in_stack_00000110 + 0x48);
                  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_02d96860();
                  }
                  if (*(uint *)(lVar10 + 0x18) <= uVar15) {
                    /* WARNING: Subroutine does not return */
                    FUN_02d96868();
                  }
                  FUN_05fdd994(unaff_x23,*(undefined8 *)(lVar10 + lVar7),
                               *(undefined4 *)((undefined8 *)(lVar10 + lVar7) + 1));
                  *(int *)(unaff_x23 + 0x3c) = *(int *)(unaff_x23 + 0x3c) + 1;
                }
              }
LAB_05fd3084:
              uVar15 = uVar15 + 1;
              lVar7 = lVar7 + 0x1c;
              if (in_stack_00000110 == 0)
              goto Unity_Services_Vivox_VivoxCoreInstancePINVOKE__VX_E_SIP_BACKEND_REQUIRED_get;
            }
            if (*(char *)(in_stack_00000110 + 0x54) != '\0') {
              uVar1 = *(uint *)(in_stack_00000110 + 0x58);
              if (*(int *)(*(long *)PTR_DAT_06a0f5d8 + 0xe4) == 0) {
                thunk_FUN_02df485c();
              }
              if (DAT_06dc4286 == '\0') {
                FUN_02d965b8(PTR_DAT_06a0f5d8);
                DAT_06dc4286 = '\x01';
              }
              uVar1 = uVar1 & 0xffff0000;
              if (uVar1 != 0) {
                lVar7 = *(long *)PTR_DAT_06a0f5d8;
                if (*(int *)(lVar7 + 0xe4) == 0) {
                  thunk_FUN_02df485c();
                  lVar7 = *(long *)PTR_DAT_06a0f5d8;
                }
                puVar11 = *(uint **)(lVar7 + 0xb8);
                if (uVar1 != *puVar11) {
                  if (*(int *)(lVar7 + 0xe4) == 0) {
                    thunk_FUN_02df485c();
                    puVar11 = *(uint **)(*(long *)PTR_DAT_06a0f5d8 + 0xb8);
                  }
                  if (uVar1 != puVar11[1]) goto LAB_05fd3198;
                }
                lVar7 = *(long *)(unaff_x20 + 0x40);
                if ((*(ushort *)
                      (*(long *)(*(long *)
                                  Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<Gamepad,_Gamepad>__
                                + 0x20) + 0x135) & 1) == 0) {
                  FUN_02dcfd18();
                }
                *(undefined4 *)(unaff_x23 + 0x60) = *(undefined4 *)(lVar7 + 8);
                if (in_stack_00000110 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02d96860();
                }
                FUN_05fd1a00();
              }
            }
LAB_05fd3198:
            lVar7 = *(long *)(unaff_x20 + 0x40);
            if ((*(ushort *)
                  (*(long *)(*(long *)
                              Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<Gamepad,_Gamepad>__
                            + 0x20) + 0x135) & 1) == 0) {
              FUN_02dcfd18();
            }
            *(undefined4 *)(unaff_x23 + 0x40) = *(undefined4 *)(lVar7 + 8);
            if (in_stack_00000110 == 0) {
LAB_05fd3934:
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            uVar15 = 0;
            lVar7 = 0x20;
            while ((long)uVar15 < (long)(*(int *)(in_stack_00000110 + 0x90) + 1)) {
              lVar10 = *(long *)(in_stack_00000110 + 0x88);
              if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96860();
              }
              if (*(uint *)(lVar10 + 0x18) <= uVar15) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96868();
              }
              if (*(int *)(*(long *)Method_System_Span<FrameTiming>__ctor__ + 0xe4) == 0) {
                thunk_FUN_02df485c();
              }
              if (DAT_06dc4285 == '\0') {
                FUN_02d965b8(PTR_DAT_06a0f5d8);
                DAT_06dc4285 = '\x01';
              }
              if (*(int *)(*(long *)PTR_DAT_06a0f5d8 + 0xe4) == 0) {
                thunk_FUN_02df485c();
              }
              if (DAT_06dc4286 == '\0') {
                FUN_02d965b8(PTR_DAT_06a0f5d8);
                DAT_06dc4286 = '\x01';
              }
              uVar3 = *(ushort *)(lVar10 + lVar7 + 2);
              iVar2 = (uint)uVar3 << 0x10;
              if (uVar3 != 0) {
                lVar10 = *(long *)PTR_DAT_06a0f5d8;
                if (*(int *)(lVar10 + 0xe4) == 0) {
                  thunk_FUN_02df485c();
                  lVar10 = *(long *)PTR_DAT_06a0f5d8;
                }
                piVar12 = *(int **)(lVar10 + 0xb8);
                if (iVar2 != *piVar12) {
                  if (*(int *)(lVar10 + 0xe4) == 0) {
                    thunk_FUN_02df485c();
                    piVar12 = *(int **)(*(long *)PTR_DAT_06a0f5d8 + 0xb8);
                  }
                  if (iVar2 != piVar12[1]) goto LAB_05fd3364;
                }
                if (in_stack_00000110 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02d96860();
                }
                if (*(long *)(in_stack_00000110 + 0x88) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02d96860();
                }
                if (*(uint *)(*(long *)(in_stack_00000110 + 0x88) + 0x18) <= uVar15) {
                    /* WARNING: Subroutine does not return */
                  FUN_02d96868();
                }
                uVar5 = FUN_05fd1a00();
                if ((uVar5 & 1) != 0) {
                  if (in_stack_00000110 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_02d96860();
                  }
                  lVar10 = *(long *)(in_stack_00000110 + 0x88);
                  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_02d96860();
                  }
                  if (*(uint *)(lVar10 + 0x18) <= uVar15) {
                    /* WARNING: Subroutine does not return */
                    FUN_02d96868();
                  }
                  FUN_05fdd994(unaff_x23,*(undefined8 *)(lVar10 + lVar7),
                               *(undefined4 *)((undefined8 *)(lVar10 + lVar7) + 1));
                  *(int *)(unaff_x23 + 0x44) = *(int *)(unaff_x23 + 0x44) + 1;
                }
              }
LAB_05fd3364:
              uVar15 = uVar15 + 1;
              lVar7 = lVar7 + 0x1c;
              if (in_stack_00000110 == 0) goto LAB_05fd3934;
            }
            lVar7 = *(long *)(unaff_x20 + 0x58);
            if ((*(ushort *)
                  (*(long *)(*(long *)
                              Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<InputAction,_InputAction>__
                            + 0x20) + 0x135) & 1) == 0) {
              FUN_02dcfd18();
            }
            lVar10 = 0;
            uVar15 = 0;
            *(undefined4 *)(unaff_x23 + 0x48) = *(undefined4 *)(lVar7 + 8);
            while( true ) {
              lVar7 = FUN_0400ff1c(in_stack_00000010,unaff_w21,*(undefined8 *)puVar4);
              if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96860();
              }
              if ((long)(*(int *)(lVar7 + 0xa0) + 1) <= (long)uVar15) break;
              lVar7 = FUN_0400ff1c(in_stack_00000010,unaff_w21,*(undefined8 *)puVar4);
              if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96860();
              }
              lVar7 = *(long *)(lVar7 + 0x98);
              if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96860();
              }
              if (*(uint *)(lVar7 + 0x18) <= uVar15) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96868();
              }
              if (*(int *)(*(long *)PTR_DAT_06a0f5d8 + 0xe4) == 0) {
                thunk_FUN_02df485c();
              }
              if (DAT_06dc4286 == '\0') {
                FUN_02d965b8(PTR_DAT_06a0f5d8);
                DAT_06dc4286 = '\x01';
              }
              uVar3 = *(ushort *)(lVar7 + lVar10 + 0x22);
              iVar2 = (uint)uVar3 << 0x10;
              if (uVar3 != 0) {
                lVar7 = *(long *)PTR_DAT_06a0f5d8;
                if (*(int *)(lVar7 + 0xe4) == 0) {
                  thunk_FUN_02df485c();
                  lVar7 = *(long *)PTR_DAT_06a0f5d8;
                }
                piVar12 = *(int **)(lVar7 + 0xb8);
                if (iVar2 != *piVar12) {
                  if (*(int *)(lVar7 + 0xe4) == 0) {
                    thunk_FUN_02df485c();
                    piVar12 = *(int **)(*(long *)PTR_DAT_06a0f5d8 + 0xb8);
                  }
                  if (iVar2 != piVar12[1])
                  goto Unity_Services_Vivox_VivoxCoreInstancePINVOKE__VX_E_REQUEST_CANCELED_get;
                }
                uVar5 = FUN_05fd1da4();
                if ((uVar5 & 1) != 0) {
                  FUN_05fdda1c(unaff_x23,0);
                }
              }
Unity_Services_Vivox_VivoxCoreInstancePINVOKE__VX_E_REQUEST_CANCELED_get:
              uVar15 = uVar15 + 1;
              lVar10 = lVar10 + 0x10;
            }
          }
          lVar7 = *(long *)(unaff_x20 + 0x30);
          if ((*(ushort *)
                (*(long *)(*(long *)
                            Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<InputControl,_InputControl>__
                          + 0x20) + 0x135) & 1) == 0) {
            FUN_02dcfd18();
          }
          lVar13 = *(long *)(unaff_x20 + 0x38);
          lVar10 = *(long *)
                    Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<ButtonControl,_InputControl>__
          ;
          *(undefined4 *)(unaff_x23 + 0x28) = *(undefined4 *)(lVar7 + 8);
          if ((*(ushort *)(*(long *)(lVar10 + 0x20) + 0x135) & 1) == 0) {
            FUN_02dcfd18();
          }
          in_stack_00000018 = 0;
          *(undefined4 *)(unaff_x23 + 0x30) = *(undefined4 *)(lVar13 + 8);
          unaff_w29 = unaff_w21;
        }
        if (in_stack_00000110 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        lVar7 = *(long *)(in_stack_00000110 + 0xb0);
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        if (*(uint *)(lVar7 + 0x18) <= in_stack_00000018) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96868();
        }
        unaff_x19 = *(long *)(lVar7 + in_stack_00000018 * 8 + 0x20);
        if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        unaff_w28 = *(int *)(unaff_x19 + 0x18);
      } while (unaff_w28 < 1);
      unaff_w22 = 0;
    }
    auVar16 = FUN_040412e4(unaff_x19,unaff_w22,
                           *(undefined8 *)
                            Method_System_Span<GradientAlphaKey>_GetPinnableReference__);
  } while( true );
}


