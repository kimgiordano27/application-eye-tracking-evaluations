/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Contains<OVRPlugin.SpaceQueryResult>
ENTRY_POINT: 01eee9f4
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 107
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_15;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__ICollection_Contains<OVRPlugin_SpaceQueryResult>
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,long param_6)

{
  int iVar1;
  undefined8 *puVar2;
  ulong uVar3;
  uint uVar4;
  int *piVar5;
  long lVar6;
  ulong unaff_x19;
  long unaff_x21;
  long unaff_x22;
  uint unaff_w25;
  uint unaff_w26;
  undefined8 uVar7;
  int iVar8;
  long unaff_x29;
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
  
code_r0x01eee9f4:
  uVar3 = FUN_0352f118(param_1,param_2,param_3,param_4,param_5,param_6,0);
  iVar8 = in_stack_00000068._4_4_;
  if ((uVar3 & 1) == 0) goto LAB_01eeea40;
  if (*(int *)(*(long *)Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__ +
              0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  iVar1 = -iVar8;
  if (-1 < iVar8) {
    iVar1 = iVar8;
  }
  unaff_s8 = unaff_s8 + unaff_s9 / (float)(iVar1 + 1) + unaff_s9;
LAB_01eeea44:
  uVar3 = unaff_x19 + 1;
  if ((long)uVar3 < in_stack_00000020) {
    lVar6 = *(long *)(in_stack_00000028 + 0x10);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    if (*(uint *)(lVar6 + 0x18) <= uVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48180();
    }
    uVar3 = FUN_0347aa34(lVar6 + uVar3 * 0x10 + 0x20,0);
    if ((uVar3 & 1) != 0) {
      in_stack_00000010._4_4_ = in_stack_00000010._4_4_ | (uint)(unaff_x29 == 0) & (unaff_w26 ^ 1);
      in_stack_00000040._4_4_ = in_stack_00000040._4_4_ | unaff_x29 != 0;
      goto LAB_01eeeb54;
    }
  }
  if (unaff_x19 == in_stack_00000018 && ((unaff_w25 ^ 0xffffffff) & 1) == 0) {
    if (unaff_x29 != 0) goto LAB_01eeeb54;
  }
  else {
    uStack0000000000000030 = uStack0000000000000030 & (unaff_w26 ^ 1 | (uint)(unaff_x29 != 0));
    uStack0000000000000034 = uStack0000000000000034 & (unaff_w26 | unaff_x29 != 0);
    if (unaff_x19 == 0) goto LAB_01eeeb54;
    lVar6 = *(long *)(in_stack_00000028 + 0x10);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    if (*(uint *)(lVar6 + 0x18) <= (uint)(unaff_x19 - 1)) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48180();
    }
    uVar3 = FUN_0347aa34(lVar6 + (unaff_x19 - 1) * 0x10 + 0x20,0);
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
  FUN_029940fc(&stack0x000000d0,unaff_x29,*(undefined8 *)StringLiteral_2517);
  while( true ) {
    while( true ) {
      unaff_x19 = unaff_x19 + 1;
      if (unaff_x19 == in_stack_00000038) {
        in_stack_000000a0 = 0;
        in_stack_00000088 = 0;
        in_stack_00000098 = 0;
        in_stack_00000090 = 0;
        if ((uStack0000000000000030 & 1) == 0) {
          uVar4 = 2;
        }
        else {
          uVar4 = 0;
        }
        if ((uStack0000000000000034 & 1) == 0) {
          uVar4 = 1;
        }
        _uStack0000000000000080 = (ulong)uVar4;
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
      lVar6 = *(long *)(in_stack_00000028 + 0x10);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      if (*(uint *)(lVar6 + 0x18) <= unaff_x19) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48180();
      }
      unaff_w25 = FUN_0347aa34(lVar6 + unaff_x19 * 0x10 + 0x20,0);
      lVar6 = *(long *)(in_stack_00000028 + 0x10);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      if (*(uint *)(lVar6 + 0x18) <= unaff_x19) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48180();
      }
      unaff_w26 = FUN_0347a880(lVar6 + unaff_x19 * 0x10 + 0x20,0);
      if ((in_stack_00000040._4_4_ & unaff_w25 & 1) == 0) break;
      FUN_029940fc(&stack0x000000d0,0,*(undefined8 *)StringLiteral_2517);
      in_stack_00000040._4_4_ = 1;
    }
    lVar6 = *(long *)(in_stack_00000028 + 0x10);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    if (*(uint *)(lVar6 + 0x18) <= unaff_x19) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48180();
    }
    uVar7 = *(undefined8 *)(lVar6 + unaff_x19 * 0x10 + 0x20);
    uVar3 = FUN_02ee6cf0(uVar7,0);
    if ((uVar3 & 1) == 0) break;
    FUN_029940fc(&stack0x000000d0,0,*(undefined8 *)StringLiteral_2517);
    unaff_s8 = unaff_s8 + unaff_s9;
  }
  iVar8 = 0;
  do {
    lVar6 = **(long **)(unaff_x21 + 0x38);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_01ae9e74();
    }
    uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
    in_stack_00000048 = lVar6;
    if (uVar3 != 0) {
      piVar5 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *(long *)StringLiteral_2515) {
          puVar2 = (undefined8 *)(lVar6 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_01eee804;
        }
        uVar3 = uVar3 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ae9f78(&stack0x00000048,*(long *)StringLiteral_2515,0);
LAB_01eee804:
    iVar1 = (*(code *)*puVar2)(&stack0x00000048,puVar2[1]);
    if (iVar1 <= iVar8) {
      unaff_x29 = 0;
      goto LAB_01eeea44;
    }
    lVar6 = **(long **)(unaff_x21 + 0x38);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_01ae9e74();
    }
    uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
    in_stack_00000048 = lVar6;
    if (uVar3 != 0) {
      piVar5 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *(long *)StringLiteral_2516) {
          puVar2 = (undefined8 *)(lVar6 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_01eee888;
        }
        uVar3 = uVar3 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ae9f78(&stack0x00000048,*(long *)StringLiteral_2516,0);
LAB_01eee888:
    lVar6 = (*(code *)*puVar2)(&stack0x00000048,iVar8,puVar2[1]);
    if (((unaff_x22 != 0) && (iVar8 != 0)) && (lVar6 == unaff_x22)) {
      lVar6 = **(long **)(unaff_x21 + 0x38);
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_01ae9e74();
      }
      uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
      in_stack_00000048 = lVar6;
      if (uVar3 != 0) {
        piVar5 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *(long *)StringLiteral_2516) {
            puVar2 = (undefined8 *)(lVar6 + (long)*piVar5 * 0x10 + 0x138);
            goto LAB_01eee920;
          }
          uVar3 = uVar3 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar3 != 0);
      }
      puVar2 = (undefined8 *)FUN_01ae9f78(&stack0x00000048,*(long *)StringLiteral_2516,0);
LAB_01eee920:
      (*(code *)*puVar2)(&stack0x00000048,0,puVar2[1]);
    }
    unaff_x29 = FUN_03479fb0();
    if ((unaff_x29 != 0) &&
       (uVar3 = FUN_02994a58(&stack0x000000d0,unaff_x29,*(undefined8 *)StringLiteral_2518),
       (uVar3 & 1) == 0)) break;
    iVar8 = iVar8 + 1;
  } while( true );
  uVar7 = FUN_03486fdc(uVar7,0);
  FUN_034654e4(&stack0x00000070,uVar7,0);
  uVar3 = FUN_0346dce4(&stack0x00000070,0);
  if ((uVar3 & 1) != 0) {
LAB_01eeea40:
    unaff_s8 = unaff_s8 + unaff_s9;
    goto LAB_01eeea44;
  }
  lVar6 = *(long *)(unaff_x29 + 0x78);
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01b48178();
  }
  param_4 = *(undefined8 *)(lVar6 + 0x58);
  param_5 = *(undefined8 *)(lVar6 + 0x60);
  lVar6 = *(long *)StringLiteral_2501;
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
    lVar6 = *(long *)StringLiteral_2501;
  }
  param_1 = *(long *)(lVar6 + 0xb8) + 0x10;
  param_6 = (long)&stack0x00000068 + 4;
  param_2 = in_stack_00000070;
  param_3 = in_stack_00000078;
  goto code_r0x01eee9f4;
}


