/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$VX_E_LOOP_MODE_RECORDING_NOT_ENABLED_get
ENTRY_POINT: 05fd2f08
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 80
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;ui_or_gameplay_sink_hits_8;telemetry_or_network_hits_2
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__VX_E_LOOP_MODE_RECORDING_NOT_ENABLED_get
               (long param_1,undefined8 param_2,ulong param_3)

{
  uint uVar1;
  ushort uVar2;
  int iVar3;
  ulong uVar4;
  char *pcVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  int *piVar8;
  uint *puVar9;
  ulong uVar10;
  long lVar11;
  long unaff_x20;
  undefined8 *unaff_x21;
  int iVar12;
  long lVar13;
  long unaff_x23;
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
    FUN_05fdd994(param_1,param_2,param_3);
                    /* try { // try from 05fd2f1c to 060d2f23 has its CatchHandler @ 05fd2fb8 */
    *(int *)(unaff_x23 + 0x3c) = *(int *)(unaff_x23 + 0x3c) + 1;
    param_1 = unaff_x23;
LAB_05fd2f20:
    do {
      do {
        if (in_stack_00000110 == 0) {
Unity_Services_Vivox_VivoxCoreInstancePINVOKE__VX_E_SIP_BACKEND_REQUIRED_get:
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        uVar10 = 0;
        lVar13 = 0x20;
        while ((long)uVar10 < (long)(*(int *)(in_stack_00000110 + 0x50) + 1)) {
                    /* try { // try from 05fd2f40 to 060d2f47 has its CatchHandler @ 05fd2fb4 */
          lVar14 = *(long *)(in_stack_00000110 + 0x48);
          if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
                    /* try { // try from 05fd2f50 to 060d2f5f has its CatchHandler @ 05fd2fb0 */
          if (*(uint *)(lVar14 + 0x18) <= uVar10) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96868();
          }
                    /* try { // try from 05fd2f60 to 060d2f6b has its CatchHandler @ 05fd2fac */
          if (*(int *)(*(long *)PTR_DAT_06a0f5d8 + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          if (DAT_06dc4286 == '\0') {
            FUN_02d965b8(PTR_DAT_06a0f5d8);
            DAT_06dc4286 = '\x01';
          }
          uVar2 = *(ushort *)(lVar14 + lVar13 + 2);
          iVar3 = (uint)uVar2 << 0x10;
          if (uVar2 != 0) {
            lVar14 = *(long *)PTR_DAT_06a0f5d8;
            if (*(int *)(lVar14 + 0xe4) == 0) {
              thunk_FUN_02df485c();
              lVar14 = *(long *)PTR_DAT_06a0f5d8;
            }
            piVar8 = *(int **)(lVar14 + 0xb8);
            if (iVar3 != *piVar8) {
              if (*(int *)(lVar14 + 0xe4) == 0) {
                thunk_FUN_02df485c();
                piVar8 = *(int **)(*(long *)PTR_DAT_06a0f5d8 + 0xb8);
              }
              if (iVar3 != piVar8[1]) goto LAB_05fd3084;
            }
            if (in_stack_00000110 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            if (*(long *)(in_stack_00000110 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            if (*(uint *)(*(long *)(in_stack_00000110 + 0x48) + 0x18) <= uVar10) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96868();
            }
            uVar4 = FUN_05fd1a00();
            if ((uVar4 & 1) != 0) {
              if (in_stack_00000110 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96860();
              }
              lVar14 = *(long *)(in_stack_00000110 + 0x48);
              if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96860();
              }
              if (*(uint *)(lVar14 + 0x18) <= uVar10) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96868();
              }
              FUN_05fdd994(param_1,*(undefined8 *)(lVar14 + lVar13),
                           *(undefined4 *)((undefined8 *)(lVar14 + lVar13) + 1));
              *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + 1;
            }
          }
LAB_05fd3084:
          uVar10 = uVar10 + 1;
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
            puVar9 = *(uint **)(lVar13 + 0xb8);
            if (uVar1 != *puVar9) {
              if (*(int *)(lVar13 + 0xe4) == 0) {
                thunk_FUN_02df485c();
                puVar9 = *(uint **)(*(long *)PTR_DAT_06a0f5d8 + 0xb8);
              }
              if (uVar1 != puVar9[1]) goto LAB_05fd3198;
            }
            lVar13 = *(long *)(unaff_x20 + 0x40);
            if ((*(ushort *)
                  (*(long *)(*(long *)
                              Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<Gamepad,_Gamepad>__
                            + 0x20) + 0x135) & 1) == 0) {
              FUN_02dcfd18();
            }
            *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(lVar13 + 8);
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
        *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(lVar13 + 8);
        if (in_stack_00000110 == 0) {
LAB_05fd3934:
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        uVar10 = 0;
        lVar13 = 0x20;
        while ((long)uVar10 < (long)(*(int *)(in_stack_00000110 + 0x90) + 1)) {
          lVar14 = *(long *)(in_stack_00000110 + 0x88);
          if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          if (*(uint *)(lVar14 + 0x18) <= uVar10) {
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
          uVar2 = *(ushort *)(lVar14 + lVar13 + 2);
          iVar3 = (uint)uVar2 << 0x10;
          if (uVar2 != 0) {
            lVar14 = *(long *)PTR_DAT_06a0f5d8;
            if (*(int *)(lVar14 + 0xe4) == 0) {
              thunk_FUN_02df485c();
              lVar14 = *(long *)PTR_DAT_06a0f5d8;
            }
            piVar8 = *(int **)(lVar14 + 0xb8);
            if (iVar3 != *piVar8) {
              if (*(int *)(lVar14 + 0xe4) == 0) {
                thunk_FUN_02df485c();
                piVar8 = *(int **)(*(long *)PTR_DAT_06a0f5d8 + 0xb8);
              }
              if (iVar3 != piVar8[1]) goto LAB_05fd3364;
            }
            if (in_stack_00000110 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            if (*(long *)(in_stack_00000110 + 0x88) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            if (*(uint *)(*(long *)(in_stack_00000110 + 0x88) + 0x18) <= uVar10) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96868();
            }
            uVar4 = FUN_05fd1a00();
            if ((uVar4 & 1) != 0) {
              if (in_stack_00000110 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96860();
              }
              lVar14 = *(long *)(in_stack_00000110 + 0x88);
              if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96860();
              }
              if (*(uint *)(lVar14 + 0x18) <= uVar10) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96868();
              }
              FUN_05fdd994(param_1,*(undefined8 *)(lVar14 + lVar13),
                           *(undefined4 *)((undefined8 *)(lVar14 + lVar13) + 1));
              *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + 1;
            }
          }
LAB_05fd3364:
          uVar10 = uVar10 + 1;
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
        lVar14 = 0;
        uVar10 = 0;
        *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(lVar13 + 8);
        while( true ) {
          lVar13 = FUN_0400ff1c(in_stack_00000010,unaff_w29,*unaff_x21);
          if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          if ((long)(*(int *)(lVar13 + 0xa0) + 1) <= (long)uVar10) break;
          lVar13 = FUN_0400ff1c(in_stack_00000010,unaff_w29,*unaff_x21);
          if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          lVar13 = *(long *)(lVar13 + 0x98);
          if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          if (*(uint *)(lVar13 + 0x18) <= uVar10) {
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
          uVar2 = *(ushort *)(lVar13 + lVar14 + 0x22);
          iVar3 = (uint)uVar2 << 0x10;
          if (uVar2 != 0) {
            lVar13 = *(long *)PTR_DAT_06a0f5d8;
            if (*(int *)(lVar13 + 0xe4) == 0) {
              thunk_FUN_02df485c();
              lVar13 = *(long *)PTR_DAT_06a0f5d8;
            }
            piVar8 = *(int **)(lVar13 + 0xb8);
            if (iVar3 != *piVar8) {
              if (*(int *)(lVar13 + 0xe4) == 0) {
                thunk_FUN_02df485c();
                piVar8 = *(int **)(*(long *)PTR_DAT_06a0f5d8 + 0xb8);
              }
              if (iVar3 != piVar8[1])
              goto Unity_Services_Vivox_VivoxCoreInstancePINVOKE__VX_E_REQUEST_CANCELED_get;
            }
            uVar4 = FUN_05fd1da4();
            if ((uVar4 & 1) != 0) {
              FUN_05fdda1c(param_1,0);
            }
          }
Unity_Services_Vivox_VivoxCoreInstancePINVOKE__VX_E_REQUEST_CANCELED_get:
          uVar10 = uVar10 + 1;
          lVar14 = lVar14 + 0x10;
        }
        do {
          lVar13 = *(long *)(unaff_x20 + 0x30);
          if ((*(ushort *)
                (*(long *)(*(long *)
                            Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<InputControl,_InputControl>__
                          + 0x20) + 0x135) & 1) == 0) {
            FUN_02dcfd18();
          }
          lVar11 = *(long *)(unaff_x20 + 0x38);
          lVar14 = *(long *)
                    Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<ButtonControl,_InputControl>__
          ;
          *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(lVar13 + 8);
          if ((*(ushort *)(*(long *)(lVar14 + 0x20) + 0x135) & 1) == 0) {
            FUN_02dcfd18();
          }
          uVar10 = 0;
          *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(lVar11 + 8);
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
            if (*(uint *)(lVar13 + 0x18) <= uVar10) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96868();
            }
            lVar13 = *(long *)(lVar13 + uVar10 * 8 + 0x20);
            if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            iVar3 = *(int *)(lVar13 + 0x18);
            if (0 < iVar3) {
              iVar12 = 0;
              do {
                auVar15 = FUN_040412e4(lVar13,iVar12,
                                       *(undefined8 *)
                                        Method_System_Span<GradientAlphaKey>_GetPinnableReference__)
                ;
                pcVar5 = (char *)FUN_05fdc35c();
                if ((*pcVar5 != '\0') && (*(char *)(param_1 + 0x79) == '\0')) {
                  lVar14 = *(long *)(in_stack_00000020 + 0x48);
                  *(undefined1 *)(param_1 + 0x79) = 1;
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
                puVar6 = (undefined1 *)
                         FUN_05fdfe80(*(long *)(unaff_x20 + 0x10),auVar15._0_8_,in_stack_00000048,0)
                ;
                *(int *)(puVar6 + 4) = unaff_w29;
                *puVar6 = 1;
                in_stack_000000f8 = auVar15._8_4_;
                in_stack_000000f0 = auVar15._0_8_;
                FUN_042c7ad4(unaff_x20 + 0x38,&stack0x000000f0,
                             *(undefined8 *)
                              Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_HaveDuplicateReferences<InputControl>__
                            );
                iVar12 = iVar12 + 1;
                *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
              } while (iVar3 != iVar12);
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
            if (*(uint *)(lVar13 + 0x18) <= uVar10) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96868();
            }
            lVar13 = *(long *)(lVar13 + uVar10 * 8 + 0x20);
            if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            iVar3 = *(int *)(lVar13 + 0x18);
            if (0 < iVar3) {
              iVar12 = 0;
              do {
                auVar15 = FUN_040412e4(lVar13,iVar12,
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
                iVar12 = iVar12 + 1;
                *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
              } while (iVar3 != iVar12);
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
            if (*(uint *)(lVar13 + 0x18) <= uVar10) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96868();
            }
            lVar13 = *(long *)(lVar13 + uVar10 * 8 + 0x20);
            if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            iVar3 = *(int *)(lVar13 + 0x18);
            if (0 < iVar3) {
              iVar12 = 0;
              do {
                auVar15 = FUN_040412e4(lVar13,iVar12,
                                       *(undefined8 *)
                                        Method_System_Span<GradientAlphaKey>_GetPinnableReference__)
                ;
                uVar7 = auVar15._0_8_;
                if (*(long *)(unaff_x20 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02d96860();
                }
                uVar4 = auVar15._8_8_ & 0xffffffff;
                in_stack_00000030 = uVar4 | in_stack_00000030 & 0xffffffff00000000;
                FUN_05fdfe80(*(long *)(unaff_x20 + 0x10),uVar7,in_stack_00000030,0);
                FUN_05fdc434();
                in_stack_000000e0 = uVar7;
                in_stack_000000e8 = auVar15._8_4_;
                FUN_042c73d8(unaff_x20 + 0x30,&stack0x000000e0,
                             *(undefined8 *)
                              Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOf<InputBinding>__
                            );
                lVar14 = *(long *)(unaff_x20 + 0x10);
                *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
                if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02d96860();
                }
                in_stack_00000028 = uVar4 | in_stack_00000028 & 0xffffffff00000000;
                puVar6 = (undefined1 *)FUN_05fdfe80(lVar14,uVar7,in_stack_00000028,0);
                *(int *)(puVar6 + 4) = unaff_w29;
                *puVar6 = 1;
                in_stack_000000f0 = uVar7;
                in_stack_000000f8 = auVar15._8_4_;
                FUN_042c7ad4(unaff_x20 + 0x38,&stack0x000000f0,
                             *(undefined8 *)
                              Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_HaveDuplicateReferences<InputControl>__
                            );
                iVar12 = iVar12 + 1;
                *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
              } while (iVar3 != iVar12);
            }
            unaff_x21 = (undefined8 *)Method_Mono_Security_ASN1Convert_FromUnsignedBigInteger__;
            uVar10 = uVar10 + 1;
          } while (uVar10 != 3);
          unaff_w29 = unaff_w29 + 1;
          if (*(int *)(in_stack_00000010 + 0x18) <= unaff_w29) {
            FUN_05f4a1b4(&stack0x0000011c,0);
            return;
          }
          in_stack_00000110 =
               FUN_0400ff1c(in_stack_00000010,unaff_w29,
                            *(undefined8 *)Method_Mono_Security_ASN1Convert_FromUnsignedBigInteger__
                           );
          param_1 = FUN_042c6444(unaff_x20 + 0x18,unaff_w29,
                                 *(undefined8 *)Method_Mono_Security_ASN1Convert_ToDateTime__);
          FUN_05fdd424(param_1,&stack0x00000110,unaff_w29,0);
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
                        Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_GrowBy<InputControl>__
                      );
          if (*(char *)(param_1 + 0x79) != '\0') {
            if (*(long *)(in_stack_00000020 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            FUN_047ccb88(*(long *)(in_stack_00000020 + 0x48),unaff_w29,
                         *(undefined8 *)Method_UnityEngine_AndroidJavaClass__ctor__);
          }
        } while (*(int *)(param_1 + 4) != 2);
        lVar13 = *(long *)(unaff_x20 + 0x40);
        if ((*(ushort *)
              (*(long *)(*(long *)
                          Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<Gamepad,_Gamepad>__
                        + 0x20) + 0x135) & 1) == 0) {
          FUN_02dcfd18();
        }
        *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(lVar13 + 8);
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
      } while (uVar1 == 0);
      lVar13 = *(long *)PTR_DAT_06a0f5d8;
      if (*(int *)(lVar13 + 0xe4) == 0) {
        thunk_FUN_02df485c();
        lVar13 = *(long *)PTR_DAT_06a0f5d8;
      }
      puVar9 = *(uint **)(lVar13 + 0xb8);
      if (uVar1 != *puVar9) {
        if (*(int *)(lVar13 + 0xe4) == 0) {
          thunk_FUN_02df485c();
          puVar9 = *(uint **)(*(long *)PTR_DAT_06a0f5d8 + 0xb8);
        }
        if (uVar1 != puVar9[1]) goto LAB_05fd2f20;
      }
      *(undefined1 *)(param_1 + 0x7d) = 1;
      if (in_stack_00000110 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      uVar10 = FUN_05fd1a00();
    } while ((uVar10 & 1) == 0);
    if (in_stack_00000110 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    param_2 = *(undefined8 *)(in_stack_00000110 + 0x2c);
    param_3 = (ulong)*(uint *)(in_stack_00000110 + 0x34);
    unaff_x23 = param_1;
  } while( true );
}


