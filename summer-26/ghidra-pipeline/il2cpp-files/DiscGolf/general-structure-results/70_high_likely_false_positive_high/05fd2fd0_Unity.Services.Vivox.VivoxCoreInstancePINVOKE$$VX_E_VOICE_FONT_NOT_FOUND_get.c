/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$VX_E_VOICE_FONT_NOT_FOUND_get
ENTRY_POINT: 05fd2fd0
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


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__VX_E_VOICE_FONT_NOT_FOUND_get
               (int *param_1,long param_2)

{
  uint uVar1;
  ushort uVar2;
  int iVar3;
  undefined1 in_ZR;
  ulong uVar4;
  ulong uVar5;
  char *pcVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  long lVar9;
  uint *puVar10;
  int *piVar11;
  ulong unaff_x19;
  long lVar12;
  long unaff_x20;
  undefined8 *unaff_x21;
  int iVar13;
  long unaff_x22;
  long unaff_x23;
  int unaff_w24;
  long lVar14;
  int unaff_w29;
  undefined1 auVar15 [16];
  long in_stack_00000010;
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
  
  do {
    if ((bool)in_ZR) {
LAB_05fd2ffc:
      if (in_stack_00000110 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      if (*(long *)(in_stack_00000110 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      if (*(uint *)(*(long *)(in_stack_00000110 + 0x48) + 0x18) <= unaff_x19) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96868();
      }
      uVar4 = FUN_05fd1a00();
      if ((uVar4 & 1) != 0) {
        if (in_stack_00000110 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        lVar9 = *(long *)(in_stack_00000110 + 0x48);
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        if (*(uint *)(lVar9 + 0x18) <= unaff_x19) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96868();
        }
        FUN_05fdd994(unaff_x23,*(undefined8 *)(lVar9 + unaff_x22),
                     *(undefined4 *)((undefined8 *)(lVar9 + unaff_x22) + 1));
        *(int *)(unaff_x23 + 0x3c) = *(int *)(unaff_x23 + 0x3c) + 1;
      }
    }
    else {
      if (*(int *)(param_2 + 0xe4) == 0) {
                    /* try { // try from 05fd2fdc to 060d2fdf has its CatchHandler @ 05fd3094 */
        thunk_FUN_02df485c();
                    /* try { // try from 05fd2fe0 to 060d3057 has its CatchHandler @ 05fd1e30 */
        param_1 = *(int **)(*(long *)PTR_DAT_06a0f5d8 + 0xb8);
      }
      if (unaff_w24 == param_1[1]) goto LAB_05fd2ffc;
    }
    do {
      unaff_x19 = unaff_x19 + 1;
      unaff_x22 = unaff_x22 + 0x1c;
      if (in_stack_00000110 == 0) {
Unity_Services_Vivox_VivoxCoreInstancePINVOKE__VX_E_SIP_BACKEND_REQUIRED_get:
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      while ((long)(*(int *)(in_stack_00000110 + 0x50) + 1) <= (long)unaff_x19) {
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
            lVar9 = *(long *)PTR_DAT_06a0f5d8;
            if (*(int *)(lVar9 + 0xe4) == 0) {
              thunk_FUN_02df485c();
              lVar9 = *(long *)PTR_DAT_06a0f5d8;
            }
            puVar10 = *(uint **)(lVar9 + 0xb8);
            if (uVar1 != *puVar10) {
              if (*(int *)(lVar9 + 0xe4) == 0) {
                thunk_FUN_02df485c();
                puVar10 = *(uint **)(*(long *)PTR_DAT_06a0f5d8 + 0xb8);
              }
              if (uVar1 != puVar10[1]) goto LAB_05fd3198;
            }
            lVar9 = *(long *)(unaff_x20 + 0x40);
            if ((*(ushort *)
                  (*(long *)(*(long *)
                              Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<Gamepad,_Gamepad>__
                            + 0x20) + 0x135) & 1) == 0) {
              FUN_02dcfd18();
            }
            *(undefined4 *)(unaff_x23 + 0x60) = *(undefined4 *)(lVar9 + 8);
            if (in_stack_00000110 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            FUN_05fd1a00();
          }
        }
LAB_05fd3198:
        lVar9 = *(long *)(unaff_x20 + 0x40);
        if ((*(ushort *)
              (*(long *)(*(long *)
                          Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<Gamepad,_Gamepad>__
                        + 0x20) + 0x135) & 1) == 0) {
          FUN_02dcfd18();
        }
        *(undefined4 *)(unaff_x23 + 0x40) = *(undefined4 *)(lVar9 + 8);
        if (in_stack_00000110 == 0) {
LAB_05fd3934:
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        uVar4 = 0;
        lVar9 = 0x20;
        while ((long)uVar4 < (long)(*(int *)(in_stack_00000110 + 0x90) + 1)) {
          lVar14 = *(long *)(in_stack_00000110 + 0x88);
          if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          if (*(uint *)(lVar14 + 0x18) <= uVar4) {
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
          uVar2 = *(ushort *)(lVar14 + lVar9 + 2);
          iVar3 = (uint)uVar2 << 0x10;
          if (uVar2 != 0) {
            lVar14 = *(long *)PTR_DAT_06a0f5d8;
            if (*(int *)(lVar14 + 0xe4) == 0) {
              thunk_FUN_02df485c();
              lVar14 = *(long *)PTR_DAT_06a0f5d8;
            }
            piVar11 = *(int **)(lVar14 + 0xb8);
            if (iVar3 != *piVar11) {
              if (*(int *)(lVar14 + 0xe4) == 0) {
                thunk_FUN_02df485c();
                piVar11 = *(int **)(*(long *)PTR_DAT_06a0f5d8 + 0xb8);
              }
              if (iVar3 != piVar11[1]) goto LAB_05fd3364;
            }
            if (in_stack_00000110 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            if (*(long *)(in_stack_00000110 + 0x88) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            if (*(uint *)(*(long *)(in_stack_00000110 + 0x88) + 0x18) <= uVar4) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96868();
            }
            uVar5 = FUN_05fd1a00();
            if ((uVar5 & 1) != 0) {
              if (in_stack_00000110 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96860();
              }
              lVar14 = *(long *)(in_stack_00000110 + 0x88);
              if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96860();
              }
              if (*(uint *)(lVar14 + 0x18) <= uVar4) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96868();
              }
              FUN_05fdd994(unaff_x23,*(undefined8 *)(lVar14 + lVar9),
                           *(undefined4 *)((undefined8 *)(lVar14 + lVar9) + 1));
              *(int *)(unaff_x23 + 0x44) = *(int *)(unaff_x23 + 0x44) + 1;
            }
          }
LAB_05fd3364:
          uVar4 = uVar4 + 1;
          lVar9 = lVar9 + 0x1c;
          if (in_stack_00000110 == 0) goto LAB_05fd3934;
        }
        lVar9 = *(long *)(unaff_x20 + 0x58);
        if ((*(ushort *)
              (*(long *)(*(long *)
                          Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<InputAction,_InputAction>__
                        + 0x20) + 0x135) & 1) == 0) {
          FUN_02dcfd18();
        }
        lVar14 = 0;
        uVar4 = 0;
        *(undefined4 *)(unaff_x23 + 0x48) = *(undefined4 *)(lVar9 + 8);
        while( true ) {
          lVar9 = FUN_0400ff1c(in_stack_00000010,unaff_w29,*unaff_x21);
          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          if ((long)(*(int *)(lVar9 + 0xa0) + 1) <= (long)uVar4) break;
          lVar9 = FUN_0400ff1c(in_stack_00000010,unaff_w29,*unaff_x21);
          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          lVar9 = *(long *)(lVar9 + 0x98);
          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          if (*(uint *)(lVar9 + 0x18) <= uVar4) {
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
          uVar2 = *(ushort *)(lVar9 + lVar14 + 0x22);
          iVar3 = (uint)uVar2 << 0x10;
          if (uVar2 != 0) {
            lVar9 = *(long *)PTR_DAT_06a0f5d8;
            if (*(int *)(lVar9 + 0xe4) == 0) {
              thunk_FUN_02df485c();
              lVar9 = *(long *)PTR_DAT_06a0f5d8;
            }
            piVar11 = *(int **)(lVar9 + 0xb8);
            if (iVar3 != *piVar11) {
              if (*(int *)(lVar9 + 0xe4) == 0) {
                thunk_FUN_02df485c();
                piVar11 = *(int **)(*(long *)PTR_DAT_06a0f5d8 + 0xb8);
              }
              if (iVar3 != piVar11[1])
              goto Unity_Services_Vivox_VivoxCoreInstancePINVOKE__VX_E_REQUEST_CANCELED_get;
            }
            uVar5 = FUN_05fd1da4();
            if ((uVar5 & 1) != 0) {
              FUN_05fdda1c(unaff_x23,0);
            }
          }
Unity_Services_Vivox_VivoxCoreInstancePINVOKE__VX_E_REQUEST_CANCELED_get:
          uVar4 = uVar4 + 1;
          lVar14 = lVar14 + 0x10;
        }
        do {
          lVar9 = *(long *)(unaff_x20 + 0x30);
          if ((*(ushort *)
                (*(long *)(*(long *)
                            Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<InputControl,_InputControl>__
                          + 0x20) + 0x135) & 1) == 0) {
            FUN_02dcfd18();
          }
          lVar12 = *(long *)(unaff_x20 + 0x38);
          lVar14 = *(long *)
                    Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<ButtonControl,_InputControl>__
          ;
          *(undefined4 *)(unaff_x23 + 0x28) = *(undefined4 *)(lVar9 + 8);
          if ((*(ushort *)(*(long *)(lVar14 + 0x20) + 0x135) & 1) == 0) {
            FUN_02dcfd18();
          }
          uVar4 = 0;
          *(undefined4 *)(unaff_x23 + 0x30) = *(undefined4 *)(lVar12 + 8);
          do {
            if (in_stack_00000110 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            lVar9 = *(long *)(in_stack_00000110 + 0xb0);
            if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            if (*(uint *)(lVar9 + 0x18) <= uVar4) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96868();
            }
            lVar9 = *(long *)(lVar9 + uVar4 * 8 + 0x20);
            if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            iVar3 = *(int *)(lVar9 + 0x18);
            if (0 < iVar3) {
              iVar13 = 0;
              do {
                auVar15 = FUN_040412e4(lVar9,iVar13,
                                       *(undefined8 *)
                                        Method_System_Span<GradientAlphaKey>_GetPinnableReference__)
                ;
                pcVar6 = (char *)FUN_05fdc35c();
                if ((*pcVar6 != '\0') && (*(char *)(unaff_x23 + 0x79) == '\0')) {
                  lVar14 = *(long *)(in_stack_00000020 + 0x48);
                  *(undefined1 *)(unaff_x23 + 0x79) = 1;
                  if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_02d96860();
                  }
                  FUN_047ccb88(lVar14,unaff_w29,
                               *(undefined8 *)Method_UnityEngine_AndroidJavaClass__ctor__);
                }
                if (*(long *)(unaff_x20 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02d96860();
                }
                in_stack_00000048 =
                     auVar15._8_8_ & 0xffffffff | in_stack_00000048 & 0xffffffff00000000;
                puVar7 = (undefined1 *)
                         FUN_05fdfe80(*(long *)(unaff_x20 + 0x10),auVar15._0_8_,in_stack_00000048,0)
                ;
                *(int *)(puVar7 + 4) = unaff_w29;
                *puVar7 = 1;
                in_stack_000000f8 = auVar15._8_4_;
                in_stack_000000f0 = auVar15._0_8_;
                FUN_042c7ad4(unaff_x20 + 0x38,&stack0x000000f0,
                             *(undefined8 *)
                              Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_HaveDuplicateReferences<InputControl>__
                            );
                iVar13 = iVar13 + 1;
                *(int *)(unaff_x23 + 0x34) = *(int *)(unaff_x23 + 0x34) + 1;
              } while (iVar3 != iVar13);
              if (in_stack_00000110 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96860();
              }
            }
            lVar9 = *(long *)(in_stack_00000110 + 0xa8);
            if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            if (*(uint *)(lVar9 + 0x18) <= uVar4) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96868();
            }
            lVar9 = *(long *)(lVar9 + uVar4 * 8 + 0x20);
            if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            iVar3 = *(int *)(lVar9 + 0x18);
            if (0 < iVar3) {
              iVar13 = 0;
              do {
                auVar15 = FUN_040412e4(lVar9,iVar13,
                                       *(undefined8 *)
                                        Method_System_Span<GradientAlphaKey>_GetPinnableReference__)
                ;
                if (*(long *)(unaff_x20 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02d96860();
                }
                in_stack_00000040 =
                     auVar15._8_8_ & 0xffffffff | in_stack_00000040 & 0xffffffff00000000;
                FUN_05fdfe80(*(long *)(unaff_x20 + 0x10),auVar15._0_8_,in_stack_00000040,0);
                FUN_05fdc434();
                in_stack_000000e8 = auVar15._8_4_;
                in_stack_000000e0 = auVar15._0_8_;
                FUN_042c73d8(unaff_x20 + 0x30,&stack0x000000e0,
                             *(undefined8 *)
                              Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOf<InputBinding>__
                            );
                iVar13 = iVar13 + 1;
                *(int *)(unaff_x23 + 0x2c) = *(int *)(unaff_x23 + 0x2c) + 1;
              } while (iVar3 != iVar13);
              if (in_stack_00000110 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96860();
              }
            }
            lVar9 = *(long *)(in_stack_00000110 + 0xb8);
            if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            if (*(uint *)(lVar9 + 0x18) <= uVar4) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96868();
            }
            lVar9 = *(long *)(lVar9 + uVar4 * 8 + 0x20);
            if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            iVar3 = *(int *)(lVar9 + 0x18);
            if (0 < iVar3) {
              iVar13 = 0;
              do {
                auVar15 = FUN_040412e4(lVar9,iVar13,
                                       *(undefined8 *)
                                        Method_System_Span<GradientAlphaKey>_GetPinnableReference__)
                ;
                uVar8 = auVar15._0_8_;
                if (*(long *)(unaff_x20 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02d96860();
                }
                uVar5 = auVar15._8_8_ & 0xffffffff;
                in_stack_00000030 = uVar5 | in_stack_00000030 & 0xffffffff00000000;
                FUN_05fdfe80(*(long *)(unaff_x20 + 0x10),uVar8,in_stack_00000030,0);
                FUN_05fdc434();
                in_stack_000000e0 = uVar8;
                in_stack_000000e8 = auVar15._8_4_;
                FUN_042c73d8(unaff_x20 + 0x30,&stack0x000000e0,
                             *(undefined8 *)
                              Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOf<InputBinding>__
                            );
                lVar14 = *(long *)(unaff_x20 + 0x10);
                *(int *)(unaff_x23 + 0x2c) = *(int *)(unaff_x23 + 0x2c) + 1;
                if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02d96860();
                }
                in_stack_00000028 = uVar5 | in_stack_00000028 & 0xffffffff00000000;
                puVar7 = (undefined1 *)FUN_05fdfe80(lVar14,uVar8,in_stack_00000028,0);
                *(int *)(puVar7 + 4) = unaff_w29;
                *puVar7 = 1;
                in_stack_000000f0 = uVar8;
                in_stack_000000f8 = auVar15._8_4_;
                FUN_042c7ad4(unaff_x20 + 0x38,&stack0x000000f0,
                             *(undefined8 *)
                              Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_HaveDuplicateReferences<InputControl>__
                            );
                iVar13 = iVar13 + 1;
                *(int *)(unaff_x23 + 0x34) = *(int *)(unaff_x23 + 0x34) + 1;
              } while (iVar3 != iVar13);
            }
            unaff_x21 = (undefined8 *)Method_Mono_Security_ASN1Convert_FromUnsignedBigInteger__;
            uVar4 = uVar4 + 1;
          } while (uVar4 != 3);
          unaff_w29 = unaff_w29 + 1;
          if (*(int *)(in_stack_00000010 + 0x18) <= unaff_w29) {
            FUN_05f4a1b4(&stack0x0000011c,0);
            return;
          }
          in_stack_00000110 =
               FUN_0400ff1c(in_stack_00000010,unaff_w29,
                            *(undefined8 *)Method_Mono_Security_ASN1Convert_FromUnsignedBigInteger__
                           );
          unaff_x23 = FUN_042c6444(unaff_x20 + 0x18,unaff_w29,
                                   *(undefined8 *)Method_Mono_Security_ASN1Convert_ToDateTime__);
          FUN_05fdd424(unaff_x23,&stack0x00000110,unaff_w29,0);
          if (in_stack_00000110 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          lVar9 = *(long *)(unaff_x20 + 0x28);
          in_stack_000000d0 = 0;
          in_stack_000000d8 = 0;
          Unity_Services_Vivox_VivoxCoreInstancePINVOKE__APP_UNIQUE_3_LETTERS_USER_AGENT_ID_STRING_get
                    (&stack0x000000d0,*(undefined8 *)(in_stack_00000110 + 0x10),1);
          in_stack_00000108 = in_stack_000000d8;
          in_stack_00000100 = in_stack_000000d0;
          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          FUN_0504d0d0(lVar9,&stack0x00000100,
                       *(undefined8 *)
                        Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_GrowBy<InputControl>__
                      );
          if (*(char *)(unaff_x23 + 0x79) != '\0') {
            if (*(long *)(in_stack_00000020 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            FUN_047ccb88(*(long *)(in_stack_00000020 + 0x48),unaff_w29,
                         *(undefined8 *)Method_UnityEngine_AndroidJavaClass__ctor__);
          }
        } while (*(int *)(unaff_x23 + 4) != 2);
        lVar9 = *(long *)(unaff_x20 + 0x40);
        if ((*(ushort *)
              (*(long *)(*(long *)
                          Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<Gamepad,_Gamepad>__
                        + 0x20) + 0x135) & 1) == 0) {
          FUN_02dcfd18();
        }
        *(undefined4 *)(unaff_x23 + 0x38) = *(undefined4 *)(lVar9 + 8);
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
          lVar9 = *(long *)PTR_DAT_06a0f5d8;
          if (*(int *)(lVar9 + 0xe4) == 0) {
            thunk_FUN_02df485c();
            lVar9 = *(long *)PTR_DAT_06a0f5d8;
          }
          puVar10 = *(uint **)(lVar9 + 0xb8);
          if (uVar1 != *puVar10) {
            if (*(int *)(lVar9 + 0xe4) == 0) {
              thunk_FUN_02df485c();
              puVar10 = *(uint **)(*(long *)PTR_DAT_06a0f5d8 + 0xb8);
            }
            if (uVar1 != puVar10[1]) goto LAB_05fd2f20;
          }
          *(undefined1 *)(unaff_x23 + 0x7d) = 1;
          if (in_stack_00000110 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          uVar4 = FUN_05fd1a00();
          if ((uVar4 & 1) != 0) {
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
        if (in_stack_00000110 == 0)
        goto Unity_Services_Vivox_VivoxCoreInstancePINVOKE__VX_E_SIP_BACKEND_REQUIRED_get;
        unaff_x22 = 0x20;
        unaff_x19 = 0;
      }
      lVar9 = *(long *)(in_stack_00000110 + 0x48);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      if (*(uint *)(lVar9 + 0x18) <= unaff_x19) {
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
      uVar2 = *(ushort *)(lVar9 + unaff_x22 + 2);
      unaff_w24 = (uint)uVar2 << 0x10;
    } while (uVar2 == 0);
    param_2 = *(long *)PTR_DAT_06a0f5d8;
    if (*(int *)(param_2 + 0xe4) == 0) {
      thunk_FUN_02df485c();
      param_2 = *(long *)PTR_DAT_06a0f5d8;
    }
    param_1 = *(int **)(param_2 + 0xb8);
    in_ZR = unaff_w24 == *param_1;
  } while( true );
}


