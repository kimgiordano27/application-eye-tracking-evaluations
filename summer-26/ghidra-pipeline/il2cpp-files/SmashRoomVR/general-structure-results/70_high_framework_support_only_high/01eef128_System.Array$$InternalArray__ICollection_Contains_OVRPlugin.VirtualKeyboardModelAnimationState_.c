/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Contains<OVRPlugin.VirtualKeyboardModelAnimationState>
ENTRY_POINT: 01eef128
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


void System_Array__InternalArray__ICollection_Contains<OVRPlugin_VirtualKeyboardModelAnimationState>
               (ulong param_1)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong uVar4;
  uint uVar5;
  long lVar6;
  int *piVar7;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  uint unaff_w23;
  uint unaff_w24;
  long unaff_x25;
  undefined8 uVar8;
  int iVar9;
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
  
code_r0x01eef128:
  if ((param_1 & 1) == 0) {
    lVar6 = *(long *)(unaff_x25 + 0x78);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    uVar8 = *(undefined8 *)(lVar6 + 0x58);
    uVar1 = *(undefined8 *)(lVar6 + 0x60);
    lVar6 = *(long *)StringLiteral_2501;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar6 = *(long *)StringLiteral_2501;
    }
    uVar4 = FUN_0352f118(*(long *)(lVar6 + 0xb8) + 0x10,in_stack_00000040,in_stack_00000048,uVar8,
                         uVar1,(long)&stack0x00000038 + 4,0);
    iVar9 = iStack000000000000003c;
    if ((uVar4 & 1) != 0) {
      if (*(int *)(*(long *)Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__
                  + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      iVar2 = -iVar9;
      if (-1 < iVar9) {
        iVar2 = iVar9;
      }
      unaff_s8 = unaff_s8 + unaff_s9 / (float)(iVar2 + 1) + unaff_s9;
      goto LAB_01eef1c8;
    }
  }
  unaff_s8 = unaff_s8 + unaff_s9;
LAB_01eef1c8:
  uVar4 = unaff_x29 + 1;
  if ((long)uVar4 < in_stack_00000020) {
    lVar6 = *(long *)(unaff_x20 + 0x10);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    if (*(uint *)(lVar6 + 0x18) <= uVar4) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48180();
    }
    uVar4 = FUN_0347aa34(lVar6 + uVar4 * 0x10 + 0x20,0);
    if ((uVar4 & 1) != 0) {
      in_stack_00000010._4_4_ = in_stack_00000010._4_4_ | (uint)(unaff_x25 == 0) & (unaff_w24 ^ 1);
      uStack0000000000000038 = uStack0000000000000038 | unaff_x25 != 0;
      goto LAB_01eef2d8;
    }
  }
  if (unaff_x29 == in_stack_00000018 && ((unaff_w23 ^ 0xffffffff) & 1) == 0) {
    if (unaff_x25 != 0) goto LAB_01eef2d8;
  }
  else {
    uStack0000000000000030 = uStack0000000000000030 & (unaff_w24 ^ 1 | (uint)(unaff_x25 != 0));
    uStack0000000000000034 = uStack0000000000000034 & (unaff_w24 | unaff_x25 != 0);
    if (unaff_x29 == 0) goto LAB_01eef2d8;
    lVar6 = *(long *)(unaff_x20 + 0x10);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    if (*(uint *)(lVar6 + 0x18) <= (uint)(unaff_x29 - 1)) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48180();
    }
    uVar4 = FUN_0347aa34(lVar6 + (unaff_x29 - 1) * 0x10 + 0x20,0);
    if ((uVar4 & 1) == 0) goto LAB_01eef2d8;
    if ((uStack0000000000000038 & 1) != 0) {
      uStack0000000000000038 = 0;
      goto LAB_01eef2d8;
    }
    uStack0000000000000038 = 0;
  }
  uStack0000000000000030 = in_stack_00000010._4_4_ & uStack0000000000000030;
  uStack0000000000000034 = uStack0000000000000034 & (in_stack_00000010._4_4_ ^ 1);
LAB_01eef2d8:
  FUN_029940fc(&stack0x000000a0,unaff_x25,*(undefined8 *)StringLiteral_2517);
  while( true ) {
    while( true ) {
      unaff_x29 = unaff_x29 + 1;
      if (unaff_x29 == in_stack_00000028) {
        in_stack_00000070 = 0;
        in_stack_00000058 = 0;
        in_stack_00000068 = 0;
        in_stack_00000060 = 0;
        if ((uStack0000000000000030 & 1) == 0) {
          uVar5 = 2;
        }
        else {
          uVar5 = 0;
        }
        if ((uStack0000000000000034 & 1) == 0) {
          uVar5 = 1;
        }
        _uStack0000000000000050 = (ulong)uVar5;
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
      lVar6 = *(long *)(unaff_x20 + 0x10);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      if (*(uint *)(lVar6 + 0x18) <= unaff_x29) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48180();
      }
      unaff_w23 = FUN_0347aa34(lVar6 + unaff_x29 * 0x10 + 0x20,0);
      lVar6 = *(long *)(unaff_x20 + 0x10);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      if (*(uint *)(lVar6 + 0x18) <= unaff_x29) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48180();
      }
      unaff_w24 = FUN_0347a880(lVar6 + unaff_x29 * 0x10 + 0x20,0);
      if ((uStack0000000000000038 & unaff_w23 & 1) == 0) break;
      FUN_029940fc(&stack0x000000a0,0,*(undefined8 *)StringLiteral_2517);
      uStack0000000000000038 = 1;
    }
    lVar6 = *(long *)(unaff_x20 + 0x10);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    if (*(uint *)(lVar6 + 0x18) <= unaff_x29) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48180();
    }
    uVar8 = *(undefined8 *)(lVar6 + unaff_x29 * 0x10 + 0x20);
    uVar4 = FUN_02ee6cf0(uVar8,0);
    if ((uVar4 & 1) == 0) break;
    FUN_029940fc(&stack0x000000a0,0,*(undefined8 *)StringLiteral_2517);
    unaff_s8 = unaff_s8 + unaff_s9;
  }
  if (unaff_x22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01b48178();
  }
  iVar9 = 0;
  do {
    lVar6 = *unaff_x22;
    uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar4 != 0) {
      piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *unaff_x28) {
          puVar3 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_01eeefc8;
        }
        uVar4 = uVar4 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ae9f78();
LAB_01eeefc8:
    iVar2 = (*(code *)*puVar3)();
    if (iVar2 <= iVar9) break;
    lVar6 = *unaff_x22;
    uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar4 != 0) {
      piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *unaff_x19) {
          puVar3 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_01eef028;
        }
        uVar4 = uVar4 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ae9f78();
LAB_01eef028:
    lVar6 = (*(code *)*puVar3)();
    if (((unaff_x21 != 0) && (iVar9 != 0)) && (lVar6 == unaff_x21)) {
      lVar6 = *unaff_x22;
      uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar4 != 0) {
        piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *unaff_x19) {
            puVar3 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_01eef0a8;
          }
          uVar4 = uVar4 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar4 != 0);
      }
      puVar3 = (undefined8 *)FUN_01ae9f78();
LAB_01eef0a8:
      (*(code *)*puVar3)();
    }
    unaff_x25 = FUN_03479fb0();
    if ((unaff_x25 != 0) &&
       (uVar4 = FUN_02994a58(&stack0x000000a0,unaff_x25,*(undefined8 *)StringLiteral_2518),
       (uVar4 & 1) == 0)) {
      uVar8 = FUN_03486fdc(uVar8,0);
      FUN_034654e4(&stack0x00000040,uVar8,0);
      param_1 = FUN_0346dce4(&stack0x00000040,0);
      goto code_r0x01eef128;
    }
    iVar9 = iVar9 + 1;
  } while( true );
  unaff_x25 = 0;
  goto LAB_01eef1c8;
}


