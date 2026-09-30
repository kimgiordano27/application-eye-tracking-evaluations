/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$VX_E_FAILED_TO_SEND_REQUEST_TO_VOICE_SERVICE_get
ENTRY_POINT: 05fd2d14
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 76
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;ui_or_gameplay_sink_hits_8;telemetry_or_network_hits_4
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__VX_E_FAILED_TO_SEND_REQUEST_TO_VOICE_SERVICE_get
               (void)

{
  uint uVar1;
  ushort uVar2;
  int iVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  char *pcVar8;
  undefined1 *puVar9;
  undefined8 uVar10;
  uint *puVar11;
  int *piVar12;
  long lVar13;
  long lVar14;
  long unaff_x20;
  int iVar15;
  long unaff_x22;
  long lVar16;
  int iVar17;
  undefined1 auVar18 [16];
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
  
  if (0 < *(int *)(unaff_x22 + 0x18)) {
    iVar17 = 0;
    do {
      puVar4 = Method_Mono_Security_ASN1Convert_FromUnsignedBigInteger__;
      in_stack_00000110 =
           FUN_0400ff1c(unaff_x22,iVar17,
                        *(undefined8 *)Method_Mono_Security_ASN1Convert_FromUnsignedBigInteger__);
      lVar5 = FUN_042c6444(unaff_x20 + 0x18,iVar17,
                           *(undefined8 *)Method_Mono_Security_ASN1Convert_ToDateTime__);
      FUN_05fdd424(lVar5,&stack0x00000110,iVar17,0);
      if (in_stack_00000110 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      lVar13 = *(long *)(unaff_x20 + 0x28);
      in_stack_000000d0 = 0;
      in_stack_000000d8 = 0;
      Unity_Services_Vivox_VivoxCoreInstancePINVOKE__APP_UNIQUE_3_LETTERS_USER_AGENT_ID_STRING_get
                (&stack0x000000d0,*(undefined8 *)(in_stack_00000110 + 0x10),1);
      in_stack_00000108 = in_stack_000000d8;
      in_stack_00000100 = in_stack_000000d0;
      if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      FUN_0504d0d0(lVar13,&stack0x00000100,
                   *(undefined8 *)
                    Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_GrowBy<InputControl>__);
      if (*(char *)(lVar5 + 0x79) != '\0') {
        if (*(long *)(in_stack_00000020 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        FUN_047ccb88(*(long *)(in_stack_00000020 + 0x48),iVar17,
                     *(undefined8 *)Method_UnityEngine_AndroidJavaClass__ctor__);
      }
      if (*(int *)(lVar5 + 4) == 2) {
        lVar13 = *(long *)(unaff_x20 + 0x40);
        if ((*(ushort *)
              (*(long *)(*(long *)
                          Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<Gamepad,_Gamepad>__
                        + 0x20) + 0x135) & 1) == 0) {
          FUN_02dcfd18();
        }
        *(undefined4 *)(lVar5 + 0x38) = *(undefined4 *)(lVar13 + 8);
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
          lVar13 = *(long *)PTR_DAT_06a0f5d8;
          if (*(int *)(lVar13 + 0xe4) == 0) {
            thunk_FUN_02df485c();
            lVar13 = *(long *)PTR_DAT_06a0f5d8;
          }
          puVar11 = *(uint **)(lVar13 + 0xb8);
          if (uVar1 != *puVar11) {
            if (*(int *)(lVar13 + 0xe4) == 0) {
              thunk_FUN_02df485c();
              puVar11 = *(uint **)(*(long *)PTR_DAT_06a0f5d8 + 0xb8);
            }
            if (uVar1 != puVar11[1]) goto LAB_05fd2f20;
          }
          *(undefined1 *)(lVar5 + 0x7d) = 1;
          if (in_stack_00000110 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          uVar6 = FUN_05fd1a00();
          if ((uVar6 & 1) != 0) {
            if (in_stack_00000110 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            FUN_05fdd994(lVar5,*(undefined8 *)(in_stack_00000110 + 0x2c),
                         *(undefined4 *)(in_stack_00000110 + 0x34));
            *(int *)(lVar5 + 0x3c) = *(int *)(lVar5 + 0x3c) + 1;
          }
        }
LAB_05fd2f20:
        if (in_stack_00000110 == 0) {
Unity_Services_Vivox_VivoxCoreInstancePINVOKE__VX_E_SIP_BACKEND_REQUIRED_get:
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        uVar6 = 0;
        lVar13 = 0x20;
        while ((long)uVar6 < (long)(*(int *)(in_stack_00000110 + 0x50) + 1)) {
          lVar16 = *(long *)(in_stack_00000110 + 0x48);
          if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          if (*(uint *)(lVar16 + 0x18) <= uVar6) {
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
          uVar2 = *(ushort *)(lVar16 + lVar13 + 2);
          iVar3 = (uint)uVar2 << 0x10;
          if (uVar2 != 0) {
            lVar16 = *(long *)PTR_DAT_06a0f5d8;
            if (*(int *)(lVar16 + 0xe4) == 0) {
              thunk_FUN_02df485c();
              lVar16 = *(long *)PTR_DAT_06a0f5d8;
            }
            piVar12 = *(int **)(lVar16 + 0xb8);
            if (iVar3 != *piVar12) {
              if (*(int *)(lVar16 + 0xe4) == 0) {
                thunk_FUN_02df485c();
                piVar12 = *(int **)(*(long *)PTR_DAT_06a0f5d8 + 0xb8);
              }
              if (iVar3 != piVar12[1]) goto LAB_05fd3084;
            }
            if (in_stack_00000110 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            if (*(long *)(in_stack_00000110 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            if (*(uint *)(*(long *)(in_stack_00000110 + 0x48) + 0x18) <= uVar6) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96868();
            }
            uVar7 = FUN_05fd1a00();
            if ((uVar7 & 1) != 0) {
              if (in_stack_00000110 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96860();
              }
              lVar16 = *(long *)(in_stack_00000110 + 0x48);
              if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96860();
              }
              if (*(uint *)(lVar16 + 0x18) <= uVar6) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96868();
              }
              FUN_05fdd994(lVar5,*(undefined8 *)(lVar16 + lVar13),
                           *(undefined4 *)((undefined8 *)(lVar16 + lVar13) + 1));
              *(int *)(lVar5 + 0x3c) = *(int *)(lVar5 + 0x3c) + 1;
            }
          }
LAB_05fd3084:
          uVar6 = uVar6 + 1;
          lVar13 = lVar13 + 0x1c;
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
            lVar13 = *(long *)PTR_DAT_06a0f5d8;
            if (*(int *)(lVar13 + 0xe4) == 0) {
              thunk_FUN_02df485c();
              lVar13 = *(long *)PTR_DAT_06a0f5d8;
            }
            puVar11 = *(uint **)(lVar13 + 0xb8);
            if (uVar1 != *puVar11) {
              if (*(int *)(lVar13 + 0xe4) == 0) {
                thunk_FUN_02df485c();
                puVar11 = *(uint **)(*(long *)PTR_DAT_06a0f5d8 + 0xb8);
              }
              if (uVar1 != puVar11[1]) goto LAB_05fd3198;
            }
            lVar13 = *(long *)(unaff_x20 + 0x40);
            if ((*(ushort *)
                  (*(long *)(*(long *)
                              Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<Gamepad,_Gamepad>__
                            + 0x20) + 0x135) & 1) == 0) {
              FUN_02dcfd18();
            }
            *(undefined4 *)(lVar5 + 0x60) = *(undefined4 *)(lVar13 + 8);
            if (in_stack_00000110 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            FUN_05fd1a00();
          }
        }
LAB_05fd3198:
        lVar13 = *(long *)(unaff_x20 + 0x40);
        if ((*(ushort *)
              (*(long *)(*(long *)
                          Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<Gamepad,_Gamepad>__
                        + 0x20) + 0x135) & 1) == 0) {
          FUN_02dcfd18();
        }
        *(undefined4 *)(lVar5 + 0x40) = *(undefined4 *)(lVar13 + 8);
        if (in_stack_00000110 == 0) {
LAB_05fd3934:
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        uVar6 = 0;
        lVar13 = 0x20;
        while ((long)uVar6 < (long)(*(int *)(in_stack_00000110 + 0x90) + 1)) {
          lVar16 = *(long *)(in_stack_00000110 + 0x88);
          if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          if (*(uint *)(lVar16 + 0x18) <= uVar6) {
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
          uVar2 = *(ushort *)(lVar16 + lVar13 + 2);
          iVar3 = (uint)uVar2 << 0x10;
          if (uVar2 != 0) {
            lVar16 = *(long *)PTR_DAT_06a0f5d8;
            if (*(int *)(lVar16 + 0xe4) == 0) {
              thunk_FUN_02df485c();
              lVar16 = *(long *)PTR_DAT_06a0f5d8;
            }
            piVar12 = *(int **)(lVar16 + 0xb8);
            if (iVar3 != *piVar12) {
              if (*(int *)(lVar16 + 0xe4) == 0) {
                thunk_FUN_02df485c();
                piVar12 = *(int **)(*(long *)PTR_DAT_06a0f5d8 + 0xb8);
              }
              if (iVar3 != piVar12[1]) goto LAB_05fd3364;
            }
            if (in_stack_00000110 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            if (*(long *)(in_stack_00000110 + 0x88) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            if (*(uint *)(*(long *)(in_stack_00000110 + 0x88) + 0x18) <= uVar6) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96868();
            }
            uVar7 = FUN_05fd1a00();
            if ((uVar7 & 1) != 0) {
              if (in_stack_00000110 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96860();
              }
              lVar16 = *(long *)(in_stack_00000110 + 0x88);
              if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96860();
              }
              if (*(uint *)(lVar16 + 0x18) <= uVar6) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96868();
              }
              FUN_05fdd994(lVar5,*(undefined8 *)(lVar16 + lVar13),
                           *(undefined4 *)((undefined8 *)(lVar16 + lVar13) + 1));
              *(int *)(lVar5 + 0x44) = *(int *)(lVar5 + 0x44) + 1;
            }
          }
LAB_05fd3364:
          uVar6 = uVar6 + 1;
          lVar13 = lVar13 + 0x1c;
          if (in_stack_00000110 == 0) goto LAB_05fd3934;
        }
        lVar13 = *(long *)(unaff_x20 + 0x58);
        if ((*(ushort *)
              (*(long *)(*(long *)
                          Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<InputAction,_InputAction>__
                        + 0x20) + 0x135) & 1) == 0) {
          FUN_02dcfd18();
        }
        lVar16 = 0;
        uVar6 = 0;
        *(undefined4 *)(lVar5 + 0x48) = *(undefined4 *)(lVar13 + 8);
        while( true ) {
          lVar13 = FUN_0400ff1c(unaff_x22,iVar17,*(undefined8 *)puVar4);
          if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          if ((long)(*(int *)(lVar13 + 0xa0) + 1) <= (long)uVar6) break;
          lVar13 = FUN_0400ff1c(unaff_x22,iVar17,*(undefined8 *)puVar4);
          if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          lVar13 = *(long *)(lVar13 + 0x98);
          if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          if (*(uint *)(lVar13 + 0x18) <= uVar6) {
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
          uVar2 = *(ushort *)(lVar13 + lVar16 + 0x22);
          iVar3 = (uint)uVar2 << 0x10;
          if (uVar2 != 0) {
            lVar13 = *(long *)PTR_DAT_06a0f5d8;
            if (*(int *)(lVar13 + 0xe4) == 0) {
              thunk_FUN_02df485c();
              lVar13 = *(long *)PTR_DAT_06a0f5d8;
            }
            piVar12 = *(int **)(lVar13 + 0xb8);
            if (iVar3 != *piVar12) {
              if (*(int *)(lVar13 + 0xe4) == 0) {
                thunk_FUN_02df485c();
                piVar12 = *(int **)(*(long *)PTR_DAT_06a0f5d8 + 0xb8);
              }
              if (iVar3 != piVar12[1])
              goto Unity_Services_Vivox_VivoxCoreInstancePINVOKE__VX_E_REQUEST_CANCELED_get;
            }
            uVar7 = FUN_05fd1da4();
            if ((uVar7 & 1) != 0) {
              FUN_05fdda1c(lVar5,0);
            }
          }
Unity_Services_Vivox_VivoxCoreInstancePINVOKE__VX_E_REQUEST_CANCELED_get:
          uVar6 = uVar6 + 1;
          lVar16 = lVar16 + 0x10;
        }
      }
      lVar13 = *(long *)(unaff_x20 + 0x30);
      if ((*(ushort *)
            (*(long *)(*(long *)
                        Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<InputControl,_InputControl>__
                      + 0x20) + 0x135) & 1) == 0) {
        FUN_02dcfd18();
      }
      lVar14 = *(long *)(unaff_x20 + 0x38);
      lVar16 = *(long *)
                Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<ButtonControl,_InputControl>__
      ;
      *(undefined4 *)(lVar5 + 0x28) = *(undefined4 *)(lVar13 + 8);
      if ((*(ushort *)(*(long *)(lVar16 + 0x20) + 0x135) & 1) == 0) {
        FUN_02dcfd18();
      }
      uVar6 = 0;
      *(undefined4 *)(lVar5 + 0x30) = *(undefined4 *)(lVar14 + 8);
      do {
        if (in_stack_00000110 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        lVar13 = *(long *)(in_stack_00000110 + 0xb0);
        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        if (*(uint *)(lVar13 + 0x18) <= uVar6) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96868();
        }
        lVar13 = *(long *)(lVar13 + uVar6 * 8 + 0x20);
        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        iVar3 = *(int *)(lVar13 + 0x18);
        if (0 < iVar3) {
          iVar15 = 0;
          do {
            auVar18 = FUN_040412e4(lVar13,iVar15,
                                   *(undefined8 *)
                                    Method_System_Span<GradientAlphaKey>_GetPinnableReference__);
            pcVar8 = (char *)FUN_05fdc35c();
            if ((*pcVar8 != '\0') && (*(char *)(lVar5 + 0x79) == '\0')) {
              lVar16 = *(long *)(in_stack_00000020 + 0x48);
              *(undefined1 *)(lVar5 + 0x79) = 1;
              if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96860();
              }
              FUN_047ccb88(lVar16,iVar17,*(undefined8 *)Method_UnityEngine_AndroidJavaClass__ctor__)
              ;
            }
            if (*(long *)(unaff_x20 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            in_stack_00000048 = auVar18._8_8_ & 0xffffffff | in_stack_00000048 & 0xffffffff00000000;
            puVar9 = (undefined1 *)
                     FUN_05fdfe80(*(long *)(unaff_x20 + 0x10),auVar18._0_8_,in_stack_00000048,0);
            *(int *)(puVar9 + 4) = iVar17;
            *puVar9 = 1;
            in_stack_000000f8 = auVar18._8_4_;
            in_stack_000000f0 = auVar18._0_8_;
            FUN_042c7ad4(unaff_x20 + 0x38,&stack0x000000f0,
                         *(undefined8 *)
                          Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_HaveDuplicateReferences<InputControl>__
                        );
            iVar15 = iVar15 + 1;
            *(int *)(lVar5 + 0x34) = *(int *)(lVar5 + 0x34) + 1;
          } while (iVar3 != iVar15);
          if (in_stack_00000110 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
        }
        lVar13 = *(long *)(in_stack_00000110 + 0xa8);
        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        if (*(uint *)(lVar13 + 0x18) <= uVar6) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96868();
        }
        lVar13 = *(long *)(lVar13 + uVar6 * 8 + 0x20);
        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        iVar3 = *(int *)(lVar13 + 0x18);
        if (0 < iVar3) {
          iVar15 = 0;
          do {
            auVar18 = FUN_040412e4(lVar13,iVar15,
                                   *(undefined8 *)
                                    Method_System_Span<GradientAlphaKey>_GetPinnableReference__);
            if (*(long *)(unaff_x20 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            in_stack_00000040 = auVar18._8_8_ & 0xffffffff | in_stack_00000040 & 0xffffffff00000000;
            FUN_05fdfe80(*(long *)(unaff_x20 + 0x10),auVar18._0_8_,in_stack_00000040,0);
            FUN_05fdc434();
            in_stack_000000e8 = auVar18._8_4_;
            in_stack_000000e0 = auVar18._0_8_;
            FUN_042c73d8(unaff_x20 + 0x30,&stack0x000000e0,
                         *(undefined8 *)
                          Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOf<InputBinding>__
                        );
            iVar15 = iVar15 + 1;
            *(int *)(lVar5 + 0x2c) = *(int *)(lVar5 + 0x2c) + 1;
          } while (iVar3 != iVar15);
          if (in_stack_00000110 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
        }
        lVar13 = *(long *)(in_stack_00000110 + 0xb8);
        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        if (*(uint *)(lVar13 + 0x18) <= uVar6) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96868();
        }
        lVar13 = *(long *)(lVar13 + uVar6 * 8 + 0x20);
        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        iVar3 = *(int *)(lVar13 + 0x18);
        if (0 < iVar3) {
          iVar15 = 0;
          do {
            auVar18 = FUN_040412e4(lVar13,iVar15,
                                   *(undefined8 *)
                                    Method_System_Span<GradientAlphaKey>_GetPinnableReference__);
            uVar10 = auVar18._0_8_;
            if (*(long *)(unaff_x20 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            uVar7 = auVar18._8_8_ & 0xffffffff;
            in_stack_00000030 = uVar7 | in_stack_00000030 & 0xffffffff00000000;
            FUN_05fdfe80(*(long *)(unaff_x20 + 0x10),uVar10,in_stack_00000030,0);
            FUN_05fdc434();
            in_stack_000000e0 = uVar10;
            in_stack_000000e8 = auVar18._8_4_;
            FUN_042c73d8(unaff_x20 + 0x30,&stack0x000000e0,
                         *(undefined8 *)
                          Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOf<InputBinding>__
                        );
            lVar16 = *(long *)(unaff_x20 + 0x10);
            *(int *)(lVar5 + 0x2c) = *(int *)(lVar5 + 0x2c) + 1;
            if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            in_stack_00000028 = uVar7 | in_stack_00000028 & 0xffffffff00000000;
            puVar9 = (undefined1 *)FUN_05fdfe80(lVar16,uVar10,in_stack_00000028,0);
            *(int *)(puVar9 + 4) = iVar17;
            *puVar9 = 1;
            in_stack_000000f0 = uVar10;
            in_stack_000000f8 = auVar18._8_4_;
            FUN_042c7ad4(unaff_x20 + 0x38,&stack0x000000f0,
                         *(undefined8 *)
                          Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_HaveDuplicateReferences<InputControl>__
                        );
            iVar15 = iVar15 + 1;
            *(int *)(lVar5 + 0x34) = *(int *)(lVar5 + 0x34) + 1;
          } while (iVar3 != iVar15);
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 != 3);
      iVar17 = iVar17 + 1;
    } while (iVar17 < *(int *)(unaff_x22 + 0x18));
  }
  FUN_05f4a1b4(&stack0x0000011c,0);
  return;
}


