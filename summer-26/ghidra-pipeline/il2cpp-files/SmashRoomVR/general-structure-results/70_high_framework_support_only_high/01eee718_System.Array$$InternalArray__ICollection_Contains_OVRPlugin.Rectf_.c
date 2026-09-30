/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Contains<OVRPlugin.Rectf>
ENTRY_POINT: 01eee718
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


void System_Array__InternalArray__ICollection_Contains<OVRPlugin_Rectf>(uint param_1)

{
  undefined8 uVar1;
  int iVar2;
  ulong uVar3;
  undefined8 *puVar4;
  uint in_w8;
  uint uVar5;
  long lVar6;
  long lVar7;
  int *piVar8;
  ulong unaff_x19;
  long unaff_x21;
  long unaff_x22;
  uint unaff_w25;
  undefined8 uVar9;
  int iVar10;
  long unaff_x28;
  float unaff_s8;
  float unaff_s9;
  void *in_stack_00000008;
  undefined8 in_stack_00000010;
  ulong in_stack_00000018;
  long in_stack_00000020;
  long in_stack_00000028;
  uint uStack0000000000000030;
  uint uStack0000000000000034;
  ulong in_stack_00000038;
  undefined8 in_stack_00000040;
  long in_stack_00000048;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined4 uStack0000000000000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  
code_r0x01eee718:
  if ((in_w8 & unaff_w25 & 1) == 0) {
    lVar6 = *(long *)(unaff_x28 + 0x10);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    if (*(uint *)(lVar6 + 0x18) <= unaff_x19) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48180();
    }
    uVar9 = *(undefined8 *)(lVar6 + unaff_x19 * 0x10 + 0x20);
    uVar3 = FUN_02ee6cf0(uVar9,0);
    if ((uVar3 & 1) == 0) {
      iVar10 = 0;
      do {
        lVar6 = **(long **)(unaff_x21 + 0x38);
        if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_01ae9e74();
        }
        uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
        in_stack_00000048 = lVar6;
        if (uVar3 != 0) {
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *(long *)StringLiteral_2515) {
              puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_01eee804;
            }
            uVar3 = uVar3 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar3 != 0);
        }
        puVar4 = (undefined8 *)FUN_01ae9f78(&stack0x00000048,*(long *)StringLiteral_2515,0);
LAB_01eee804:
        iVar2 = (*(code *)*puVar4)(&stack0x00000048,puVar4[1]);
        if (iVar2 <= iVar10) {
          lVar6 = 0;
          goto LAB_01eeea44;
        }
        lVar6 = **(long **)(unaff_x21 + 0x38);
        if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_01ae9e74();
        }
        uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
        in_stack_00000048 = lVar6;
        if (uVar3 != 0) {
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *(long *)StringLiteral_2516) {
              puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_01eee888;
            }
            uVar3 = uVar3 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar3 != 0);
        }
        puVar4 = (undefined8 *)FUN_01ae9f78(&stack0x00000048,*(long *)StringLiteral_2516,0);
LAB_01eee888:
        lVar6 = (*(code *)*puVar4)(&stack0x00000048,iVar10,puVar4[1]);
        if (((unaff_x22 != 0) && (iVar10 != 0)) && (lVar6 == unaff_x22)) {
          lVar6 = **(long **)(unaff_x21 + 0x38);
          if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
            lVar6 = FUN_01ae9e74();
          }
          uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
          in_stack_00000048 = lVar6;
          if (uVar3 != 0) {
            piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) == *(long *)StringLiteral_2516) {
                puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
                goto LAB_01eee920;
              }
              uVar3 = uVar3 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar3 != 0);
          }
          puVar4 = (undefined8 *)FUN_01ae9f78(&stack0x00000048,*(long *)StringLiteral_2516,0);
LAB_01eee920:
          (*(code *)*puVar4)(&stack0x00000048,0,puVar4[1]);
        }
        lVar6 = FUN_03479fb0();
        if ((lVar6 != 0) &&
           (uVar3 = FUN_02994a58(&stack0x000000d0,lVar6,*(undefined8 *)StringLiteral_2518),
           (uVar3 & 1) == 0)) goto LAB_01eee97c;
        iVar10 = iVar10 + 1;
      } while( true );
    }
    FUN_029940fc(&stack0x000000d0,0,*(undefined8 *)StringLiteral_2517);
    unaff_s8 = unaff_s8 + unaff_s9;
  }
  else {
    FUN_029940fc(&stack0x000000d0,0,*(undefined8 *)StringLiteral_2517);
    in_stack_00000040._4_4_ = 1;
  }
  goto LAB_01eeeb6c;
LAB_01eee97c:
  uVar9 = FUN_03486fdc(uVar9,0);
  FUN_034654e4(&stack0x00000070,uVar9,0);
  uVar3 = FUN_0346dce4(&stack0x00000070,0);
  if ((uVar3 & 1) == 0) {
    lVar7 = *(long *)(lVar6 + 0x78);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    uVar9 = *(undefined8 *)(lVar7 + 0x58);
    uVar1 = *(undefined8 *)(lVar7 + 0x60);
    lVar7 = *(long *)StringLiteral_2501;
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar7 = *(long *)StringLiteral_2501;
    }
    uVar3 = FUN_0352f118(*(long *)(lVar7 + 0xb8) + 0x10,in_stack_00000070,in_stack_00000078,uVar9,
                         uVar1,(long)&stack0x00000068 + 4,0);
    iVar10 = in_stack_00000068._4_4_;
    if ((uVar3 & 1) == 0) goto LAB_01eeea40;
    if (*(int *)(*(long *)Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    iVar2 = -iVar10;
    if (-1 < iVar10) {
      iVar2 = iVar10;
    }
    unaff_s8 = unaff_s8 + unaff_s9 / (float)(iVar2 + 1) + unaff_s9;
  }
  else {
LAB_01eeea40:
    unaff_s8 = unaff_s8 + unaff_s9;
  }
LAB_01eeea44:
  uVar3 = unaff_x19 + 1;
  if ((long)uVar3 < in_stack_00000020) {
    lVar7 = *(long *)(in_stack_00000028 + 0x10);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    if (*(uint *)(lVar7 + 0x18) <= uVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48180();
    }
    uVar3 = FUN_0347aa34(lVar7 + uVar3 * 0x10 + 0x20,0);
    if ((uVar3 & 1) != 0) {
      in_stack_00000010._4_4_ = in_stack_00000010._4_4_ | (uint)(lVar6 == 0) & (param_1 ^ 1);
      in_stack_00000040._4_4_ = in_stack_00000040._4_4_ | lVar6 != 0;
      goto LAB_01eeeb54;
    }
  }
  if (unaff_x19 == in_stack_00000018 && ((unaff_w25 ^ 0xffffffff) & 1) == 0) {
    if (lVar6 != 0) goto LAB_01eeeb54;
  }
  else {
    uStack0000000000000030 = uStack0000000000000030 & (param_1 ^ 1 | (uint)(lVar6 != 0));
    uStack0000000000000034 = uStack0000000000000034 & (param_1 | lVar6 != 0);
    if (unaff_x19 == 0) goto LAB_01eeeb54;
    lVar7 = *(long *)(in_stack_00000028 + 0x10);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    if (*(uint *)(lVar7 + 0x18) <= (uint)(unaff_x19 - 1)) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48180();
    }
    uVar3 = FUN_0347aa34(lVar7 + (unaff_x19 - 1) * 0x10 + 0x20,0);
    if ((uVar3 & 1) == 0) goto LAB_01eeeb54;
    if ((in_stack_00000040._4_4_ & 1) != 0) {
      in_stack_00000040._4_4_ = 0;
      goto LAB_01eeeb54;
    }
    in_stack_00000040._4_4_ = 0;
  }
  uStack0000000000000030 = in_stack_00000010._4_4_ & uStack0000000000000030;
  uStack0000000000000034 = uStack0000000000000034 & (in_stack_00000010._4_4_ ^ 1);
LAB_01eeeb54:
  FUN_029940fc(&stack0x000000d0,lVar6,*(undefined8 *)StringLiteral_2517);
  unaff_x28 = in_stack_00000028;
LAB_01eeeb6c:
  unaff_x19 = unaff_x19 + 1;
  if (unaff_x19 == in_stack_00000038) {
    in_stack_000000a0 = 0;
    in_stack_00000088 = 0;
    in_stack_00000098 = 0;
    in_stack_00000090 = 0;
    if ((uStack0000000000000030 & 1) == 0) {
      uVar5 = 2;
    }
    else {
      uVar5 = 0;
    }
    if ((uStack0000000000000034 & 1) == 0) {
      uVar5 = 1;
    }
    _uStack0000000000000080 = (ulong)uVar5;
    in_stack_000000b0 = in_stack_000000d8;
    in_stack_000000a8 = in_stack_000000d0;
    in_stack_000000c0 = in_stack_000000e8;
    in_stack_000000b8 = in_stack_000000e0;
    in_stack_000000c8 = *(undefined8 *)(unaff_x28 + 0x10);
    thunk_FUN_01b4f09c(&stack0x000000c8);
    _uStack0000000000000080 = CONCAT44(unaff_s8,uStack0000000000000080);
    memcpy(in_stack_00000008,&stack0x00000080,0x50);
    return;
  }
  lVar6 = *(long *)(unaff_x28 + 0x10);
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01b48178();
  }
  if (*(uint *)(lVar6 + 0x18) <= unaff_x19) {
                    /* WARNING: Subroutine does not return */
    FUN_01b48180();
  }
  unaff_w25 = FUN_0347aa34(lVar6 + unaff_x19 * 0x10 + 0x20,0);
  lVar6 = *(long *)(unaff_x28 + 0x10);
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01b48178();
  }
  if (*(uint *)(lVar6 + 0x18) <= unaff_x19) {
                    /* WARNING: Subroutine does not return */
    FUN_01b48180();
  }
  param_1 = FUN_0347a880(lVar6 + unaff_x19 * 0x10 + 0x20,0);
  in_w8 = in_stack_00000040._4_4_;
  goto code_r0x01eee718;
}


