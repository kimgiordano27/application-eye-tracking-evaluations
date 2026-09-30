/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Contains<OVRPlugin.Recti>
ENTRY_POINT: 01eee890
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


void System_Array__InternalArray__ICollection_Contains<OVRPlugin_Recti>
               (code *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  uint uVar7;
  ulong uVar8;
  int *piVar9;
  long lVar10;
  ulong unaff_x19;
  long unaff_x21;
  long unaff_x22;
  uint unaff_w25;
  uint unaff_w26;
  undefined8 unaff_x27;
  int unaff_w28;
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
  
code_r0x01eee890:
  lVar4 = (*param_1)(param_2,unaff_w28,param_4);
  if (((unaff_x22 != 0) && (unaff_w28 != 0)) && (lVar4 == unaff_x22)) {
    lVar4 = **(long **)(unaff_x21 + 0x38);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_01ae9e74();
    }
    uVar8 = (ulong)*(ushort *)(lVar4 + 0x12e);
    in_stack_00000048 = lVar4;
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)StringLiteral_2516) {
          puVar5 = (undefined8 *)(lVar4 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_01eee920;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ae9f78(&stack0x00000048,*(long *)StringLiteral_2516,0);
LAB_01eee920:
    (*(code *)*puVar5)(&stack0x00000048,0,puVar5[1]);
  }
  lVar4 = FUN_03479fb0();
  if ((lVar4 != 0) &&
     (uVar8 = FUN_02994a58(&stack0x000000d0,lVar4,*(undefined8 *)StringLiteral_2518),
     (uVar8 & 1) == 0)) {
    uVar6 = FUN_03486fdc(unaff_x27,0);
    FUN_034654e4(&stack0x00000070,uVar6,0);
    uVar8 = FUN_0346dce4(&stack0x00000070,0);
    if ((uVar8 & 1) == 0) {
      lVar10 = *(long *)(lVar4 + 0x78);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      uVar6 = *(undefined8 *)(lVar10 + 0x58);
      uVar2 = *(undefined8 *)(lVar10 + 0x60);
      lVar10 = *(long *)StringLiteral_2501;
      if (*(int *)(lVar10 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        lVar10 = *(long *)StringLiteral_2501;
      }
      uVar8 = FUN_0352f118(*(long *)(lVar10 + 0xb8) + 0x10,in_stack_00000070,in_stack_00000078,uVar6
                           ,uVar2,(long)&stack0x00000068 + 4,0);
      iVar3 = in_stack_00000068._4_4_;
      if ((uVar8 & 1) != 0) {
        if (*(int *)(*(long *)
                      Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__ + 0xe0
                    ) == 0) {
          thunk_FUN_01ac7298();
        }
        iVar1 = -iVar3;
        if (-1 < iVar3) {
          iVar1 = iVar3;
        }
        unaff_s8 = unaff_s8 + unaff_s9 / (float)(iVar1 + 1) + unaff_s9;
        goto LAB_01eeea44;
      }
    }
    unaff_s8 = unaff_s8 + unaff_s9;
    goto LAB_01eeea44;
  }
  unaff_w28 = unaff_w28 + 1;
  do {
    lVar4 = **(long **)(unaff_x21 + 0x38);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_01ae9e74();
    }
    uVar8 = (ulong)*(ushort *)(lVar4 + 0x12e);
    in_stack_00000048 = lVar4;
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)StringLiteral_2515) {
          puVar5 = (undefined8 *)(lVar4 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_01eee804;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ae9f78(&stack0x00000048,*(long *)StringLiteral_2515,0);
LAB_01eee804:
    iVar3 = (*(code *)*puVar5)(&stack0x00000048,puVar5[1]);
    if (unaff_w28 < iVar3) break;
    lVar4 = 0;
LAB_01eeea44:
    uVar8 = unaff_x19 + 1;
    if ((long)uVar8 < in_stack_00000020) {
      lVar10 = *(long *)(in_stack_00000028 + 0x10);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      if (*(uint *)(lVar10 + 0x18) <= uVar8) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48180();
      }
      uVar8 = FUN_0347aa34(lVar10 + uVar8 * 0x10 + 0x20,0);
      if ((uVar8 & 1) == 0) goto LAB_01eeeaac;
      in_stack_00000010._4_4_ = in_stack_00000010._4_4_ | (uint)(lVar4 == 0) & (unaff_w26 ^ 1);
      in_stack_00000040._4_4_ = in_stack_00000040._4_4_ | lVar4 != 0;
    }
    else {
LAB_01eeeaac:
      if (unaff_x19 == in_stack_00000018 && ((unaff_w25 ^ 0xffffffff) & 1) == 0) {
        if (lVar4 == 0) {
LAB_01eeeb34:
          uStack0000000000000030 = in_stack_00000010._4_4_ & uStack0000000000000030;
          uStack0000000000000034 = uStack0000000000000034 & (in_stack_00000010._4_4_ ^ 1);
        }
      }
      else {
        uStack0000000000000030 = uStack0000000000000030 & (unaff_w26 ^ 1 | (uint)(lVar4 != 0));
        uStack0000000000000034 = uStack0000000000000034 & (unaff_w26 | lVar4 != 0);
        if (unaff_x19 != 0) {
          lVar10 = *(long *)(in_stack_00000028 + 0x10);
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01b48178();
          }
          if (*(uint *)(lVar10 + 0x18) <= (uint)(unaff_x19 - 1)) {
                    /* WARNING: Subroutine does not return */
            FUN_01b48180();
          }
          uVar8 = FUN_0347aa34(lVar10 + (unaff_x19 - 1) * 0x10 + 0x20,0);
          if ((uVar8 & 1) != 0) {
            if ((in_stack_00000040._4_4_ & 1) == 0) {
              in_stack_00000040._4_4_ = 0;
              goto LAB_01eeeb34;
            }
            in_stack_00000040._4_4_ = 0;
          }
        }
      }
    }
    FUN_029940fc(&stack0x000000d0,lVar4,*(undefined8 *)StringLiteral_2517);
    while( true ) {
      while( true ) {
        unaff_x19 = unaff_x19 + 1;
        if (unaff_x19 == in_stack_00000038) {
          in_stack_000000a0 = 0;
          in_stack_00000088 = 0;
          in_stack_00000098 = 0;
          in_stack_00000090 = 0;
          if ((uStack0000000000000030 & 1) == 0) {
            uVar7 = 2;
          }
          else {
            uVar7 = 0;
          }
          if ((uStack0000000000000034 & 1) == 0) {
            uVar7 = 1;
          }
          _uStack0000000000000080 = (ulong)uVar7;
          in_stack_000000b0 = in_stack_000000d8;
          in_stack_000000a8 = in_stack_000000d0;
          in_stack_000000c0 = in_stack_000000e8;
          in_stack_000000b8 = in_stack_000000e0;
          in_stack_000000c8 = *(undefined8 *)(in_stack_00000028 + 0x10);
          thunk_FUN_01b4f09c(&stack0x000000c8);
          _uStack0000000000000080 = CONCAT44(unaff_s8,uStack0000000000000080);
          memcpy(in_stack_00000008,&stack0x00000080,0x50);
          return;
        }
        lVar4 = *(long *)(in_stack_00000028 + 0x10);
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48178();
        }
        if (*(uint *)(lVar4 + 0x18) <= unaff_x19) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48180();
        }
        unaff_w25 = FUN_0347aa34(lVar4 + unaff_x19 * 0x10 + 0x20,0);
        lVar4 = *(long *)(in_stack_00000028 + 0x10);
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48178();
        }
        if (*(uint *)(lVar4 + 0x18) <= unaff_x19) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48180();
        }
        unaff_w26 = FUN_0347a880(lVar4 + unaff_x19 * 0x10 + 0x20,0);
        if ((in_stack_00000040._4_4_ & unaff_w25 & 1) == 0) break;
        FUN_029940fc(&stack0x000000d0,0,*(undefined8 *)StringLiteral_2517);
        in_stack_00000040._4_4_ = 1;
      }
      lVar4 = *(long *)(in_stack_00000028 + 0x10);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      if (*(uint *)(lVar4 + 0x18) <= unaff_x19) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48180();
      }
      unaff_x27 = *(undefined8 *)(lVar4 + unaff_x19 * 0x10 + 0x20);
      uVar8 = FUN_02ee6cf0(unaff_x27,0);
      if ((uVar8 & 1) == 0) break;
      FUN_029940fc(&stack0x000000d0,0,*(undefined8 *)StringLiteral_2517);
      unaff_s8 = unaff_s8 + unaff_s9;
    }
    unaff_w28 = 0;
  } while( true );
  lVar4 = **(long **)(unaff_x21 + 0x38);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01ae9e74();
  }
  uVar8 = (ulong)*(ushort *)(lVar4 + 0x12e);
  in_stack_00000048 = lVar4;
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *(long *)StringLiteral_2516) {
        puVar5 = (undefined8 *)(lVar4 + (long)*piVar9 * 0x10 + 0x138);
        goto LAB_01eee888;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar5 = (undefined8 *)FUN_01ae9f78(&stack0x00000048,*(long *)StringLiteral_2516,0);
LAB_01eee888:
  param_1 = (code *)*puVar5;
  param_4 = puVar5[1];
  param_2 = &stack0x00000048;
  goto code_r0x01eee890;
}


