/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$VX_E_HANDLE_IS_RESERVED_get
ENTRY_POINT: 05fd341c
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


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__VX_E_HANDLE_IS_RESERVED_get(void)

{
  uint uVar1;
  ushort uVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  char *pcVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  uint *puVar9;
  int *piVar10;
  long lVar11;
  ulong unaff_x19;
  long lVar12;
  long unaff_x20;
  undefined8 *unaff_x21;
  int iVar13;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  int unaff_w29;
  ulong uVar14;
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
    FUN_02d965b8(PTR_DAT_06a0f5d8);
                    /* try { // try from 05fd3428 to 060d34d7 has its CatchHandler @ 05fd3428
                       catch() { ... } // from try @ 05fd3428 with catch @ 05fd3428
                       catch() { ... } // from try @ 05fd34f4 with catch @ 05fd3428
                       catch() { ... } // from try @ 05fd3518 with catch @ 05fd3428
                       catch() { ... } // from try @ 05fd3544 with catch @ 05fd3428
                       catch() { ... } // from try @ 05fd3568 with catch @ 05fd3428 */
    DAT_06dc4286 = '\x01';
    do {
      uVar2 = *(ushort *)(unaff_x24 + unaff_x22 + 0x22);
      iVar3 = (uint)uVar2 << 0x10;
      if (uVar2 != 0) {
        lVar4 = *(long *)PTR_DAT_06a0f5d8;
        if (*(int *)(lVar4 + 0xe4) == 0) {
          thunk_FUN_02df485c();
          lVar4 = *(long *)PTR_DAT_06a0f5d8;
        }
        piVar10 = *(int **)(lVar4 + 0xb8);
        if (iVar3 != *piVar10) {
          if (*(int *)(lVar4 + 0xe4) == 0) {
            thunk_FUN_02df485c();
            piVar10 = *(int **)(*(long *)PTR_DAT_06a0f5d8 + 0xb8);
          }
          if (iVar3 != piVar10[1])
          goto Unity_Services_Vivox_VivoxCoreInstancePINVOKE__VX_E_REQUEST_CANCELED_get;
        }
        uVar5 = FUN_05fd1da4();
        if ((uVar5 & 1) != 0) {
          FUN_05fdda1c(unaff_x23,0);
        }
      }
Unity_Services_Vivox_VivoxCoreInstancePINVOKE__VX_E_REQUEST_CANCELED_get:
      unaff_x19 = unaff_x19 + 1;
      unaff_x22 = unaff_x22 + 0x10;
      while( true ) {
        lVar4 = FUN_0400ff1c(in_stack_00000010,unaff_w29,*unaff_x21);
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        if ((long)unaff_x19 < (long)(*(int *)(lVar4 + 0xa0) + 1)) break;
        do {
          lVar4 = *(long *)(unaff_x20 + 0x30);
          if ((*(ushort *)
                (*(long *)(*(long *)
                            Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<InputControl,_InputControl>__
                          + 0x20) + 0x135) & 1) == 0) {
            FUN_02dcfd18();
          }
          lVar12 = *(long *)(unaff_x20 + 0x38);
          lVar11 = *(long *)
                    Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<ButtonControl,_InputControl>__
          ;
          *(undefined4 *)(unaff_x23 + 0x28) = *(undefined4 *)(lVar4 + 8);
          if ((*(ushort *)(*(long *)(lVar11 + 0x20) + 0x135) & 1) == 0) {
            FUN_02dcfd18();
          }
          uVar5 = 0;
          *(undefined4 *)(unaff_x23 + 0x30) = *(undefined4 *)(lVar12 + 8);
          do {
            if (in_stack_00000110 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            lVar4 = *(long *)(in_stack_00000110 + 0xb0);
            if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            if (*(uint *)(lVar4 + 0x18) <= uVar5) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96868();
            }
            lVar4 = *(long *)(lVar4 + uVar5 * 8 + 0x20);
            if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            iVar3 = *(int *)(lVar4 + 0x18);
            if (0 < iVar3) {
              iVar13 = 0;
              do {
                auVar15 = FUN_040412e4(lVar4,iVar13,
                                       *(undefined8 *)
                                        Method_System_Span<GradientAlphaKey>_GetPinnableReference__)
                ;
                pcVar6 = (char *)FUN_05fdc35c();
                if ((*pcVar6 != '\0') && (*(char *)(unaff_x23 + 0x79) == '\0')) {
                  lVar11 = *(long *)(in_stack_00000020 + 0x48);
                  *(undefined1 *)(unaff_x23 + 0x79) = 1;
                  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_02d96860();
                  }
                  FUN_047ccb88(lVar11,unaff_w29,
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
            lVar4 = *(long *)(in_stack_00000110 + 0xa8);
            if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            if (*(uint *)(lVar4 + 0x18) <= uVar5) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96868();
            }
            lVar4 = *(long *)(lVar4 + uVar5 * 8 + 0x20);
            if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            iVar3 = *(int *)(lVar4 + 0x18);
            if (0 < iVar3) {
              iVar13 = 0;
              do {
                auVar15 = FUN_040412e4(lVar4,iVar13,
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
            lVar4 = *(long *)(in_stack_00000110 + 0xb8);
            if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            if (*(uint *)(lVar4 + 0x18) <= uVar5) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96868();
            }
            lVar4 = *(long *)(lVar4 + uVar5 * 8 + 0x20);
            if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            iVar3 = *(int *)(lVar4 + 0x18);
            if (0 < iVar3) {
              iVar13 = 0;
              do {
                auVar15 = FUN_040412e4(lVar4,iVar13,
                                       *(undefined8 *)
                                        Method_System_Span<GradientAlphaKey>_GetPinnableReference__)
                ;
                uVar8 = auVar15._0_8_;
                if (*(long *)(unaff_x20 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02d96860();
                }
                uVar14 = auVar15._8_8_ & 0xffffffff;
                in_stack_00000030 = uVar14 | in_stack_00000030 & 0xffffffff00000000;
                FUN_05fdfe80(*(long *)(unaff_x20 + 0x10),uVar8,in_stack_00000030,0);
                FUN_05fdc434();
                in_stack_000000e0 = uVar8;
                in_stack_000000e8 = auVar15._8_4_;
                FUN_042c73d8(unaff_x20 + 0x30,&stack0x000000e0,
                             *(undefined8 *)
                              Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOf<InputBinding>__
                            );
                lVar11 = *(long *)(unaff_x20 + 0x10);
                *(int *)(unaff_x23 + 0x2c) = *(int *)(unaff_x23 + 0x2c) + 1;
                if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02d96860();
                }
                in_stack_00000028 = uVar14 | in_stack_00000028 & 0xffffffff00000000;
                puVar7 = (undefined1 *)FUN_05fdfe80(lVar11,uVar8,in_stack_00000028,0);
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
            uVar5 = uVar5 + 1;
          } while (uVar5 != 3);
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
          lVar4 = *(long *)(unaff_x20 + 0x28);
          in_stack_000000d0 = 0;
          in_stack_000000d8 = 0;
          Unity_Services_Vivox_VivoxCoreInstancePINVOKE__APP_UNIQUE_3_LETTERS_USER_AGENT_ID_STRING_get
                    (&stack0x000000d0,*(undefined8 *)(in_stack_00000110 + 0x10),1);
          in_stack_00000108 = in_stack_000000d8;
          in_stack_00000100 = in_stack_000000d0;
          if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          FUN_0504d0d0(lVar4,&stack0x00000100,
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
        lVar4 = *(long *)(unaff_x20 + 0x40);
        if ((*(ushort *)
              (*(long *)(*(long *)
                          Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<Gamepad,_Gamepad>__
                        + 0x20) + 0x135) & 1) == 0) {
          FUN_02dcfd18();
        }
        *(undefined4 *)(unaff_x23 + 0x38) = *(undefined4 *)(lVar4 + 8);
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
          lVar4 = *(long *)PTR_DAT_06a0f5d8;
          if (*(int *)(lVar4 + 0xe4) == 0) {
            thunk_FUN_02df485c();
            lVar4 = *(long *)PTR_DAT_06a0f5d8;
          }
          puVar9 = *(uint **)(lVar4 + 0xb8);
          if (uVar1 != *puVar9) {
            if (*(int *)(lVar4 + 0xe4) == 0) {
              thunk_FUN_02df485c();
              puVar9 = *(uint **)(*(long *)PTR_DAT_06a0f5d8 + 0xb8);
            }
            if (uVar1 != puVar9[1]) goto LAB_05fd2f20;
          }
          *(undefined1 *)(unaff_x23 + 0x7d) = 1;
          if (in_stack_00000110 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          uVar5 = FUN_05fd1a00();
          if ((uVar5 & 1) != 0) {
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
        uVar5 = 0;
        lVar4 = 0x20;
        while ((long)uVar5 < (long)(*(int *)(in_stack_00000110 + 0x50) + 1)) {
          lVar11 = *(long *)(in_stack_00000110 + 0x48);
          if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          if (*(uint *)(lVar11 + 0x18) <= uVar5) {
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
          uVar2 = *(ushort *)(lVar11 + lVar4 + 2);
          iVar3 = (uint)uVar2 << 0x10;
          if (uVar2 != 0) {
            lVar11 = *(long *)PTR_DAT_06a0f5d8;
            if (*(int *)(lVar11 + 0xe4) == 0) {
              thunk_FUN_02df485c();
              lVar11 = *(long *)PTR_DAT_06a0f5d8;
            }
            piVar10 = *(int **)(lVar11 + 0xb8);
            if (iVar3 != *piVar10) {
              if (*(int *)(lVar11 + 0xe4) == 0) {
                thunk_FUN_02df485c();
                piVar10 = *(int **)(*(long *)PTR_DAT_06a0f5d8 + 0xb8);
              }
              if (iVar3 != piVar10[1]) goto LAB_05fd3084;
            }
            if (in_stack_00000110 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            if (*(long *)(in_stack_00000110 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            if (*(uint *)(*(long *)(in_stack_00000110 + 0x48) + 0x18) <= uVar5) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96868();
            }
            uVar14 = FUN_05fd1a00();
            if ((uVar14 & 1) != 0) {
              if (in_stack_00000110 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96860();
              }
              lVar11 = *(long *)(in_stack_00000110 + 0x48);
              if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96860();
              }
              if (*(uint *)(lVar11 + 0x18) <= uVar5) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96868();
              }
              FUN_05fdd994(unaff_x23,*(undefined8 *)(lVar11 + lVar4),
                           *(undefined4 *)((undefined8 *)(lVar11 + lVar4) + 1));
              *(int *)(unaff_x23 + 0x3c) = *(int *)(unaff_x23 + 0x3c) + 1;
            }
          }
LAB_05fd3084:
          uVar5 = uVar5 + 1;
          lVar4 = lVar4 + 0x1c;
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
            lVar4 = *(long *)PTR_DAT_06a0f5d8;
            if (*(int *)(lVar4 + 0xe4) == 0) {
              thunk_FUN_02df485c();
              lVar4 = *(long *)PTR_DAT_06a0f5d8;
            }
            puVar9 = *(uint **)(lVar4 + 0xb8);
            if (uVar1 != *puVar9) {
              if (*(int *)(lVar4 + 0xe4) == 0) {
                thunk_FUN_02df485c();
                puVar9 = *(uint **)(*(long *)PTR_DAT_06a0f5d8 + 0xb8);
              }
              if (uVar1 != puVar9[1]) goto LAB_05fd3198;
            }
            lVar4 = *(long *)(unaff_x20 + 0x40);
            if ((*(ushort *)
                  (*(long *)(*(long *)
                              Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<Gamepad,_Gamepad>__
                            + 0x20) + 0x135) & 1) == 0) {
              FUN_02dcfd18();
            }
            *(undefined4 *)(unaff_x23 + 0x60) = *(undefined4 *)(lVar4 + 8);
            if (in_stack_00000110 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            FUN_05fd1a00();
          }
        }
LAB_05fd3198:
        lVar4 = *(long *)(unaff_x20 + 0x40);
        if ((*(ushort *)
              (*(long *)(*(long *)
                          Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<Gamepad,_Gamepad>__
                        + 0x20) + 0x135) & 1) == 0) {
          FUN_02dcfd18();
        }
        *(undefined4 *)(unaff_x23 + 0x40) = *(undefined4 *)(lVar4 + 8);
        if (in_stack_00000110 == 0) {
LAB_05fd3934:
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        uVar5 = 0;
        lVar4 = 0x20;
        while ((long)uVar5 < (long)(*(int *)(in_stack_00000110 + 0x90) + 1)) {
          lVar11 = *(long *)(in_stack_00000110 + 0x88);
          if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          if (*(uint *)(lVar11 + 0x18) <= uVar5) {
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
          uVar2 = *(ushort *)(lVar11 + lVar4 + 2);
          iVar3 = (uint)uVar2 << 0x10;
          if (uVar2 != 0) {
            lVar11 = *(long *)PTR_DAT_06a0f5d8;
            if (*(int *)(lVar11 + 0xe4) == 0) {
              thunk_FUN_02df485c();
              lVar11 = *(long *)PTR_DAT_06a0f5d8;
            }
            piVar10 = *(int **)(lVar11 + 0xb8);
            if (iVar3 != *piVar10) {
              if (*(int *)(lVar11 + 0xe4) == 0) {
                thunk_FUN_02df485c();
                piVar10 = *(int **)(*(long *)PTR_DAT_06a0f5d8 + 0xb8);
              }
              if (iVar3 != piVar10[1]) goto LAB_05fd3364;
            }
            if (in_stack_00000110 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            if (*(long *)(in_stack_00000110 + 0x88) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            if (*(uint *)(*(long *)(in_stack_00000110 + 0x88) + 0x18) <= uVar5) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96868();
            }
            uVar14 = FUN_05fd1a00();
            if ((uVar14 & 1) != 0) {
              if (in_stack_00000110 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96860();
              }
              lVar11 = *(long *)(in_stack_00000110 + 0x88);
              if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96860();
              }
              if (*(uint *)(lVar11 + 0x18) <= uVar5) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96868();
              }
              FUN_05fdd994(unaff_x23,*(undefined8 *)(lVar11 + lVar4),
                           *(undefined4 *)((undefined8 *)(lVar11 + lVar4) + 1));
              *(int *)(unaff_x23 + 0x44) = *(int *)(unaff_x23 + 0x44) + 1;
            }
          }
LAB_05fd3364:
          uVar5 = uVar5 + 1;
          lVar4 = lVar4 + 0x1c;
          if (in_stack_00000110 == 0) goto LAB_05fd3934;
        }
        lVar4 = *(long *)(unaff_x20 + 0x58);
        if ((*(ushort *)
              (*(long *)(*(long *)
                          Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<InputAction,_InputAction>__
                        + 0x20) + 0x135) & 1) == 0) {
          FUN_02dcfd18();
        }
        unaff_x22 = 0;
        unaff_x19 = 0;
        *(undefined4 *)(unaff_x23 + 0x48) = *(undefined4 *)(lVar4 + 8);
      }
      lVar4 = FUN_0400ff1c(in_stack_00000010,unaff_w29,*unaff_x21);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      unaff_x24 = *(long *)(lVar4 + 0x98);
      if (unaff_x24 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      if (*(uint *)(unaff_x24 + 0x18) <= unaff_x19) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96868();
      }
      if (*(int *)(*(long *)PTR_DAT_06a0f5d8 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
    } while (DAT_06dc4286 != '\0');
  } while( true );
}


