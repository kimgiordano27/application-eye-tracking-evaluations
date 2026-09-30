/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$VX_E_FEATURE_DISABLED_get
ENTRY_POINT: 05fd3804
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


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__VX_E_FEATURE_DISABLED_get(undefined8 *param_1)

{
  uint uVar1;
  ushort uVar2;
  int iVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  char *pcVar7;
  long lVar8;
  undefined1 *puVar9;
  uint *puVar10;
  int *piVar11;
  long lVar12;
  long unaff_x19;
  long unaff_x20;
  int unaff_w21;
  int iVar13;
  int iVar14;
  int unaff_w22;
  long unaff_x23;
  long lVar15;
  undefined8 unaff_x24;
  undefined8 unaff_x27;
  int unaff_w28;
  ulong unaff_x29;
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
  undefined4 uStack00000000000000e8;
  undefined8 in_stack_000000f0;
  undefined4 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  long in_stack_00000110;
  
  auVar16._8_8_ = unaff_x24;
  auVar16._0_8_ = unaff_x27;
  do {
                    /* try { // try from 05fd3810 to 060d3817 has its CatchHandler @ 05fd3928 */
    uStack00000000000000e8 = auVar16._8_4_;
    FUN_042c73d8(unaff_x20 + 0x30,&stack0x000000e0,*param_1);
    lVar8 = *(long *)(unaff_x20 + 0x10);
    *(int *)(unaff_x23 + 0x2c) = *(int *)(unaff_x23 + 0x2c) + 1;
                    /* try { // try from 05fd3828 to 060d382f has its CatchHandler @ 05fd391c */
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    in_stack_00000028 = unaff_x29 | in_stack_00000028 & 0xffffffff00000000;
    puVar9 = (undefined1 *)FUN_05fdfe80(lVar8,auVar16._0_8_,in_stack_00000028,0);
                    /* try { // try from 05fd3848 to 060d3857 has its CatchHandler @ 05fd3904 */
    *(int *)(puVar9 + 4) = unaff_w21;
    *puVar9 = 1;
    in_stack_000000f0 = auVar16._0_8_;
    in_stack_000000f8 = auVar16._8_4_;
    FUN_042c7ad4(unaff_x20 + 0x38,&stack0x000000f0,
                 *(undefined8 *)
                  Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_HaveDuplicateReferences<InputControl>__
                );
    unaff_w22 = unaff_w22 + 1;
    *(int *)(unaff_x23 + 0x34) = *(int *)(unaff_x23 + 0x34) + 1;
    iVar14 = unaff_w21;
    if (unaff_w28 == unaff_w22) {
      do {
        puVar4 = Method_Mono_Security_ASN1Convert_FromUnsignedBigInteger__;
        in_stack_00000018 = in_stack_00000018 + 1;
        if (in_stack_00000018 == 3) {
          iVar14 = iVar14 + 1;
          if (*(int *)(in_stack_00000010 + 0x18) <= iVar14) {
            FUN_05f4a1b4(&stack0x0000011c,0);
            return;
          }
          in_stack_00000110 =
               FUN_0400ff1c(in_stack_00000010,iVar14,
                            *(undefined8 *)Method_Mono_Security_ASN1Convert_FromUnsignedBigInteger__
                           );
          unaff_x23 = FUN_042c6444(unaff_x20 + 0x18,iVar14,
                                   *(undefined8 *)Method_Mono_Security_ASN1Convert_ToDateTime__);
          FUN_05fdd424(unaff_x23,&stack0x00000110,iVar14,0);
          if (in_stack_00000110 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          lVar8 = *(long *)(unaff_x20 + 0x28);
          in_stack_000000d0 = 0;
          in_stack_000000d8 = 0;
          Unity_Services_Vivox_VivoxCoreInstancePINVOKE__APP_UNIQUE_3_LETTERS_USER_AGENT_ID_STRING_get
                    (&stack0x000000d0,*(undefined8 *)(in_stack_00000110 + 0x10),1);
          in_stack_00000108 = in_stack_000000d8;
          in_stack_00000100 = in_stack_000000d0;
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          FUN_0504d0d0(lVar8,&stack0x00000100,
                       *(undefined8 *)
                        Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_GrowBy<InputControl>__
                      );
          if (*(char *)(unaff_x23 + 0x79) != '\0') {
            if (*(long *)(in_stack_00000020 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            FUN_047ccb88(*(long *)(in_stack_00000020 + 0x48),iVar14,
                         *(undefined8 *)Method_UnityEngine_AndroidJavaClass__ctor__);
          }
          if (*(int *)(unaff_x23 + 4) == 2) {
            lVar8 = *(long *)(unaff_x20 + 0x40);
            if ((*(ushort *)
                  (*(long *)(*(long *)
                              Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<Gamepad,_Gamepad>__
                            + 0x20) + 0x135) & 1) == 0) {
              FUN_02dcfd18();
            }
            *(undefined4 *)(unaff_x23 + 0x38) = *(undefined4 *)(lVar8 + 8);
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
              lVar8 = *(long *)PTR_DAT_06a0f5d8;
              if (*(int *)(lVar8 + 0xe4) == 0) {
                thunk_FUN_02df485c();
                lVar8 = *(long *)PTR_DAT_06a0f5d8;
              }
              puVar10 = *(uint **)(lVar8 + 0xb8);
              if (uVar1 != *puVar10) {
                if (*(int *)(lVar8 + 0xe4) == 0) {
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
            lVar8 = 0x20;
            while ((long)uVar5 < (long)(*(int *)(in_stack_00000110 + 0x50) + 1)) {
              lVar15 = *(long *)(in_stack_00000110 + 0x48);
              if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96860();
              }
              if (*(uint *)(lVar15 + 0x18) <= uVar5) {
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
              uVar2 = *(ushort *)(lVar15 + lVar8 + 2);
              iVar3 = (uint)uVar2 << 0x10;
              if (uVar2 != 0) {
                lVar15 = *(long *)PTR_DAT_06a0f5d8;
                if (*(int *)(lVar15 + 0xe4) == 0) {
                  thunk_FUN_02df485c();
                  lVar15 = *(long *)PTR_DAT_06a0f5d8;
                }
                piVar11 = *(int **)(lVar15 + 0xb8);
                if (iVar3 != *piVar11) {
                  if (*(int *)(lVar15 + 0xe4) == 0) {
                    thunk_FUN_02df485c();
                    piVar11 = *(int **)(*(long *)PTR_DAT_06a0f5d8 + 0xb8);
                  }
                  if (iVar3 != piVar11[1]) goto LAB_05fd3084;
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
                uVar6 = FUN_05fd1a00();
                if ((uVar6 & 1) != 0) {
                  if (in_stack_00000110 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_02d96860();
                  }
                  lVar15 = *(long *)(in_stack_00000110 + 0x48);
                  if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_02d96860();
                  }
                  if (*(uint *)(lVar15 + 0x18) <= uVar5) {
                    /* WARNING: Subroutine does not return */
                    FUN_02d96868();
                  }
                  FUN_05fdd994(unaff_x23,*(undefined8 *)(lVar15 + lVar8),
                               *(undefined4 *)((undefined8 *)(lVar15 + lVar8) + 1));
                  *(int *)(unaff_x23 + 0x3c) = *(int *)(unaff_x23 + 0x3c) + 1;
                }
              }
LAB_05fd3084:
              uVar5 = uVar5 + 1;
              lVar8 = lVar8 + 0x1c;
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
                lVar8 = *(long *)PTR_DAT_06a0f5d8;
                if (*(int *)(lVar8 + 0xe4) == 0) {
                  thunk_FUN_02df485c();
                  lVar8 = *(long *)PTR_DAT_06a0f5d8;
                }
                puVar10 = *(uint **)(lVar8 + 0xb8);
                if (uVar1 != *puVar10) {
                  if (*(int *)(lVar8 + 0xe4) == 0) {
                    thunk_FUN_02df485c();
                    puVar10 = *(uint **)(*(long *)PTR_DAT_06a0f5d8 + 0xb8);
                  }
                  if (uVar1 != puVar10[1]) goto LAB_05fd3198;
                }
                lVar8 = *(long *)(unaff_x20 + 0x40);
                if ((*(ushort *)
                      (*(long *)(*(long *)
                                  Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<Gamepad,_Gamepad>__
                                + 0x20) + 0x135) & 1) == 0) {
                  FUN_02dcfd18();
                }
                *(undefined4 *)(unaff_x23 + 0x60) = *(undefined4 *)(lVar8 + 8);
                if (in_stack_00000110 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02d96860();
                }
                FUN_05fd1a00();
              }
            }
LAB_05fd3198:
            lVar8 = *(long *)(unaff_x20 + 0x40);
            if ((*(ushort *)
                  (*(long *)(*(long *)
                              Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<Gamepad,_Gamepad>__
                            + 0x20) + 0x135) & 1) == 0) {
              FUN_02dcfd18();
            }
            *(undefined4 *)(unaff_x23 + 0x40) = *(undefined4 *)(lVar8 + 8);
            if (in_stack_00000110 == 0) {
LAB_05fd3934:
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            uVar5 = 0;
            lVar8 = 0x20;
            while ((long)uVar5 < (long)(*(int *)(in_stack_00000110 + 0x90) + 1)) {
              lVar15 = *(long *)(in_stack_00000110 + 0x88);
              if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96860();
              }
              if (*(uint *)(lVar15 + 0x18) <= uVar5) {
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
              uVar2 = *(ushort *)(lVar15 + lVar8 + 2);
              iVar3 = (uint)uVar2 << 0x10;
              if (uVar2 != 0) {
                lVar15 = *(long *)PTR_DAT_06a0f5d8;
                if (*(int *)(lVar15 + 0xe4) == 0) {
                  thunk_FUN_02df485c();
                  lVar15 = *(long *)PTR_DAT_06a0f5d8;
                }
                piVar11 = *(int **)(lVar15 + 0xb8);
                if (iVar3 != *piVar11) {
                  if (*(int *)(lVar15 + 0xe4) == 0) {
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
                if (*(uint *)(*(long *)(in_stack_00000110 + 0x88) + 0x18) <= uVar5) {
                    /* WARNING: Subroutine does not return */
                  FUN_02d96868();
                }
                uVar6 = FUN_05fd1a00();
                if ((uVar6 & 1) != 0) {
                  if (in_stack_00000110 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_02d96860();
                  }
                  lVar15 = *(long *)(in_stack_00000110 + 0x88);
                  if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_02d96860();
                  }
                  if (*(uint *)(lVar15 + 0x18) <= uVar5) {
                    /* WARNING: Subroutine does not return */
                    FUN_02d96868();
                  }
                  FUN_05fdd994(unaff_x23,*(undefined8 *)(lVar15 + lVar8),
                               *(undefined4 *)((undefined8 *)(lVar15 + lVar8) + 1));
                  *(int *)(unaff_x23 + 0x44) = *(int *)(unaff_x23 + 0x44) + 1;
                }
              }
LAB_05fd3364:
              uVar5 = uVar5 + 1;
              lVar8 = lVar8 + 0x1c;
              if (in_stack_00000110 == 0) goto LAB_05fd3934;
            }
            lVar8 = *(long *)(unaff_x20 + 0x58);
            if ((*(ushort *)
                  (*(long *)(*(long *)
                              Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<InputAction,_InputAction>__
                            + 0x20) + 0x135) & 1) == 0) {
              FUN_02dcfd18();
            }
            lVar15 = 0;
            uVar5 = 0;
            *(undefined4 *)(unaff_x23 + 0x48) = *(undefined4 *)(lVar8 + 8);
            while( true ) {
              lVar8 = FUN_0400ff1c(in_stack_00000010,iVar14,*(undefined8 *)puVar4);
              if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96860();
              }
              if ((long)(*(int *)(lVar8 + 0xa0) + 1) <= (long)uVar5) break;
              lVar8 = FUN_0400ff1c(in_stack_00000010,iVar14,*(undefined8 *)puVar4);
              if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96860();
              }
              lVar8 = *(long *)(lVar8 + 0x98);
              if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96860();
              }
              if (*(uint *)(lVar8 + 0x18) <= uVar5) {
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
              uVar2 = *(ushort *)(lVar8 + lVar15 + 0x22);
              iVar3 = (uint)uVar2 << 0x10;
              if (uVar2 != 0) {
                lVar8 = *(long *)PTR_DAT_06a0f5d8;
                if (*(int *)(lVar8 + 0xe4) == 0) {
                  thunk_FUN_02df485c();
                  lVar8 = *(long *)PTR_DAT_06a0f5d8;
                }
                piVar11 = *(int **)(lVar8 + 0xb8);
                if (iVar3 != *piVar11) {
                  if (*(int *)(lVar8 + 0xe4) == 0) {
                    thunk_FUN_02df485c();
                    piVar11 = *(int **)(*(long *)PTR_DAT_06a0f5d8 + 0xb8);
                  }
                  if (iVar3 != piVar11[1])
                  goto Unity_Services_Vivox_VivoxCoreInstancePINVOKE__VX_E_REQUEST_CANCELED_get;
                }
                uVar6 = FUN_05fd1da4();
                if ((uVar6 & 1) != 0) {
                  FUN_05fdda1c(unaff_x23,0);
                }
              }
Unity_Services_Vivox_VivoxCoreInstancePINVOKE__VX_E_REQUEST_CANCELED_get:
              uVar5 = uVar5 + 1;
              lVar15 = lVar15 + 0x10;
            }
          }
          lVar8 = *(long *)(unaff_x20 + 0x30);
          if ((*(ushort *)
                (*(long *)(*(long *)
                            Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<InputControl,_InputControl>__
                          + 0x20) + 0x135) & 1) == 0) {
            FUN_02dcfd18();
          }
          lVar12 = *(long *)(unaff_x20 + 0x38);
          lVar15 = *(long *)
                    Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<ButtonControl,_InputControl>__
          ;
          *(undefined4 *)(unaff_x23 + 0x28) = *(undefined4 *)(lVar8 + 8);
          if ((*(ushort *)(*(long *)(lVar15 + 0x20) + 0x135) & 1) == 0) {
            FUN_02dcfd18();
          }
          in_stack_00000018 = 0;
          *(undefined4 *)(unaff_x23 + 0x30) = *(undefined4 *)(lVar12 + 8);
          unaff_w21 = iVar14;
        }
        if (in_stack_00000110 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        lVar8 = *(long *)(in_stack_00000110 + 0xb0);
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        if (*(uint *)(lVar8 + 0x18) <= in_stack_00000018) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96868();
        }
        lVar8 = *(long *)(lVar8 + in_stack_00000018 * 8 + 0x20);
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        iVar3 = *(int *)(lVar8 + 0x18);
        if (0 < iVar3) {
          iVar13 = 0;
          do {
            auVar16 = FUN_040412e4(lVar8,iVar13,
                                   *(undefined8 *)
                                    Method_System_Span<GradientAlphaKey>_GetPinnableReference__);
            pcVar7 = (char *)FUN_05fdc35c();
            if ((*pcVar7 != '\0') && (*(char *)(unaff_x23 + 0x79) == '\0')) {
              lVar15 = *(long *)(in_stack_00000020 + 0x48);
              *(undefined1 *)(unaff_x23 + 0x79) = 1;
              if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96860();
              }
              FUN_047ccb88(lVar15,iVar14,*(undefined8 *)Method_UnityEngine_AndroidJavaClass__ctor__)
              ;
            }
            if (*(long *)(unaff_x20 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            in_stack_00000048 = auVar16._8_8_ & 0xffffffff | in_stack_00000048 & 0xffffffff00000000;
            puVar9 = (undefined1 *)
                     FUN_05fdfe80(*(long *)(unaff_x20 + 0x10),auVar16._0_8_,in_stack_00000048,0);
            *(int *)(puVar9 + 4) = iVar14;
            *puVar9 = 1;
            in_stack_000000f8 = auVar16._8_4_;
            in_stack_000000f0 = auVar16._0_8_;
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
        lVar8 = *(long *)(in_stack_00000110 + 0xa8);
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        if (*(uint *)(lVar8 + 0x18) <= in_stack_00000018) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96868();
        }
        lVar8 = *(long *)(lVar8 + in_stack_00000018 * 8 + 0x20);
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        iVar3 = *(int *)(lVar8 + 0x18);
        if (0 < iVar3) {
          iVar14 = 0;
          do {
            auVar16 = FUN_040412e4(lVar8,iVar14,
                                   *(undefined8 *)
                                    Method_System_Span<GradientAlphaKey>_GetPinnableReference__);
            if (*(long *)(unaff_x20 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            in_stack_00000040 = auVar16._8_8_ & 0xffffffff | in_stack_00000040 & 0xffffffff00000000;
            FUN_05fdfe80(*(long *)(unaff_x20 + 0x10),auVar16._0_8_,in_stack_00000040,0);
            FUN_05fdc434();
            uStack00000000000000e8 = auVar16._8_4_;
            in_stack_000000e0 = auVar16._0_8_;
            FUN_042c73d8(unaff_x20 + 0x30,&stack0x000000e0,
                         *(undefined8 *)
                          Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOf<InputBinding>__
                        );
            iVar14 = iVar14 + 1;
            *(int *)(unaff_x23 + 0x2c) = *(int *)(unaff_x23 + 0x2c) + 1;
          } while (iVar3 != iVar14);
          iVar14 = unaff_w21;
          if (in_stack_00000110 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
        }
        lVar8 = *(long *)(in_stack_00000110 + 0xb8);
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        if (*(uint *)(lVar8 + 0x18) <= in_stack_00000018) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96868();
        }
        unaff_x19 = *(long *)(lVar8 + in_stack_00000018 * 8 + 0x20);
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
    if (*(long *)(unaff_x20 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    unaff_x29 = auVar16._8_8_ & 0xffffffff;
    in_stack_00000030 = unaff_x29 | in_stack_00000030 & 0xffffffff00000000;
    FUN_05fdfe80(*(long *)(unaff_x20 + 0x10),auVar16._0_8_,in_stack_00000030,0);
    FUN_05fdc434();
    param_1 = (undefined8 *)
              Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOf<InputBinding>__;
    in_stack_000000e0 = auVar16._0_8_;
  } while( true );
}


