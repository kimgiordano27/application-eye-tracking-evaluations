/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Contains<OVRPlugin.Vector4s>
ENTRY_POINT: 01eeefd0
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_15;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__ICollection_Contains<OVRPlugin_Vector4s>(code *param_1)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  uint unaff_w23;
  uint unaff_w24;
  undefined8 unaff_x26;
  int unaff_w27;
  long *unaff_x28;
  ulong unaff_x29;
  float unaff_s8;
  float unaff_s9;
  void *in_stack_00000008;
  undefined8 in_stack_00000010;
  ulong in_stack_00000018;
  long in_stack_00000020;
  ulong in_stack_00000028;
  uint uStack0000000000000030;
  uint uStack0000000000000034;
  uint uStack0000000000000038;
  int iStack000000000000003c;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined4 uStack0000000000000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  
  do {
    iVar3 = (*param_1)();
    if (unaff_w27 < iVar3) {
      lVar7 = *unaff_x22;
      uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *unaff_x19) {
            puVar4 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_01eef028;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar4 = (undefined8 *)FUN_01ae9f78();
LAB_01eef028:
      lVar7 = (*(code *)*puVar4)();
      if (((unaff_x21 != 0) && (unaff_w27 != 0)) && (lVar7 == unaff_x21)) {
        lVar7 = *unaff_x22;
        uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *unaff_x19) {
              puVar4 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_01eef0a8;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar4 = (undefined8 *)FUN_01ae9f78();
LAB_01eef0a8:
        (*(code *)*puVar4)();
      }
      lVar7 = FUN_03479fb0();
      if ((lVar7 != 0) &&
         (uVar9 = FUN_02994a58(&stack0x000000a0,lVar7,*(undefined8 *)StringLiteral_2518),
         (uVar9 & 1) == 0)) {
        uVar5 = FUN_03486fdc(unaff_x26,0);
        FUN_034654e4(&stack0x00000040,uVar5,0);
        uVar9 = FUN_0346dce4(&stack0x00000040,0);
        if ((uVar9 & 1) == 0) {
          lVar8 = *(long *)(lVar7 + 0x78);
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01b48178();
          }
          uVar5 = *(undefined8 *)(lVar8 + 0x58);
          uVar2 = *(undefined8 *)(lVar8 + 0x60);
          lVar8 = *(long *)StringLiteral_2501;
          if (*(int *)(lVar8 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
            lVar8 = *(long *)StringLiteral_2501;
          }
          uVar9 = FUN_0352f118(*(long *)(lVar8 + 0xb8) + 0x10,in_stack_00000040,in_stack_00000048,
                               uVar5,uVar2,(long)&stack0x00000038 + 4,0);
          iVar3 = iStack000000000000003c;
          if ((uVar9 & 1) != 0) {
            if (*(int *)(*(long *)
                          Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__ +
                        0xe0) == 0) {
              thunk_FUN_01ac7298();
            }
            iVar1 = -iVar3;
            if (-1 < iVar3) {
              iVar1 = iVar3;
            }
            unaff_s8 = unaff_s8 + unaff_s9 / (float)(iVar1 + 1) + unaff_s9;
            goto LAB_01eef1c8;
          }
        }
        unaff_s8 = unaff_s8 + unaff_s9;
        goto LAB_01eef1c8;
      }
      unaff_w27 = unaff_w27 + 1;
    }
    else {
      lVar7 = 0;
LAB_01eef1c8:
      uVar9 = unaff_x29 + 1;
      if ((long)uVar9 < in_stack_00000020) {
        lVar8 = *(long *)(unaff_x20 + 0x10);
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48178();
        }
        if (*(uint *)(lVar8 + 0x18) <= uVar9) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48180();
        }
        uVar9 = FUN_0347aa34(lVar8 + uVar9 * 0x10 + 0x20,0);
        if ((uVar9 & 1) == 0) goto LAB_01eef230;
        in_stack_00000010._4_4_ = in_stack_00000010._4_4_ | (uint)(lVar7 == 0) & (unaff_w24 ^ 1);
        uStack0000000000000038 = uStack0000000000000038 | lVar7 != 0;
      }
      else {
LAB_01eef230:
        if (unaff_x29 == in_stack_00000018 && ((unaff_w23 ^ 0xffffffff) & 1) == 0) {
          if (lVar7 == 0) {
LAB_01eef2b8:
            uStack0000000000000030 = in_stack_00000010._4_4_ & uStack0000000000000030;
            uStack0000000000000034 = uStack0000000000000034 & (in_stack_00000010._4_4_ ^ 1);
          }
        }
        else {
          uStack0000000000000030 = uStack0000000000000030 & (unaff_w24 ^ 1 | (uint)(lVar7 != 0));
          uStack0000000000000034 = uStack0000000000000034 & (unaff_w24 | lVar7 != 0);
          if (unaff_x29 != 0) {
            lVar8 = *(long *)(unaff_x20 + 0x10);
            if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01b48178();
            }
            if (*(uint *)(lVar8 + 0x18) <= (uint)(unaff_x29 - 1)) {
                    /* WARNING: Subroutine does not return */
              FUN_01b48180();
            }
            uVar9 = FUN_0347aa34(lVar8 + (unaff_x29 - 1) * 0x10 + 0x20,0);
            if ((uVar9 & 1) != 0) {
              if ((uStack0000000000000038 & 1) == 0) {
                uStack0000000000000038 = 0;
                goto LAB_01eef2b8;
              }
              uStack0000000000000038 = 0;
            }
          }
        }
      }
      FUN_029940fc(&stack0x000000a0,lVar7,*(undefined8 *)StringLiteral_2517);
      while( true ) {
        while( true ) {
          unaff_x29 = unaff_x29 + 1;
          if (unaff_x29 == in_stack_00000028) {
            in_stack_00000070 = 0;
            in_stack_00000058 = 0;
            in_stack_00000068 = 0;
            in_stack_00000060 = 0;
            if ((uStack0000000000000030 & 1) == 0) {
              uVar6 = 2;
            }
            else {
              uVar6 = 0;
            }
            if ((uStack0000000000000034 & 1) == 0) {
              uVar6 = 1;
            }
            _uStack0000000000000050 = (ulong)uVar6;
            in_stack_00000080 = in_stack_000000a8;
            in_stack_00000078 = in_stack_000000a0;
            in_stack_00000090 = in_stack_000000b8;
            in_stack_00000088 = in_stack_000000b0;
            in_stack_00000098 = *(undefined8 *)(unaff_x20 + 0x10);
            thunk_FUN_01b4f09c(&stack0x00000098);
            _uStack0000000000000050 = CONCAT44(unaff_s8,uStack0000000000000050);
            memcpy(in_stack_00000008,&stack0x00000050,0x50);
            return;
          }
          lVar7 = *(long *)(unaff_x20 + 0x10);
          if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01b48178();
          }
          if (*(uint *)(lVar7 + 0x18) <= unaff_x29) {
                    /* WARNING: Subroutine does not return */
            FUN_01b48180();
          }
          unaff_w23 = FUN_0347aa34(lVar7 + unaff_x29 * 0x10 + 0x20,0);
          lVar7 = *(long *)(unaff_x20 + 0x10);
          if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01b48178();
          }
          if (*(uint *)(lVar7 + 0x18) <= unaff_x29) {
                    /* WARNING: Subroutine does not return */
            FUN_01b48180();
          }
          unaff_w24 = FUN_0347a880(lVar7 + unaff_x29 * 0x10 + 0x20,0);
          if ((uStack0000000000000038 & unaff_w23 & 1) == 0) break;
          FUN_029940fc(&stack0x000000a0,0,*(undefined8 *)StringLiteral_2517);
          uStack0000000000000038 = 1;
        }
        lVar7 = *(long *)(unaff_x20 + 0x10);
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48178();
        }
        if (*(uint *)(lVar7 + 0x18) <= unaff_x29) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48180();
        }
        unaff_x26 = *(undefined8 *)(lVar7 + unaff_x29 * 0x10 + 0x20);
        uVar9 = FUN_02ee6cf0(unaff_x26,0);
        if ((uVar9 & 1) == 0) break;
        FUN_029940fc(&stack0x000000a0,0,*(undefined8 *)StringLiteral_2517);
        unaff_s8 = unaff_s8 + unaff_s9;
      }
      if (unaff_x22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      unaff_w27 = 0;
    }
    lVar7 = *unaff_x22;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *unaff_x28) {
          puVar4 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_01eeefc8;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined8 *)FUN_01ae9f78();
LAB_01eeefc8:
    param_1 = (code *)*puVar4;
  } while( true );
}


