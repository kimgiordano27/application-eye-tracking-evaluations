/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Contains<OVRPlugin.Bone>
ENTRY_POINT: 01eedfb0
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 89
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_15;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_4
*/


void System_Array__InternalArray__ICollection_Contains<OVRPlugin_Bone>(long param_1)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  undefined **in_x9;
  int *piVar9;
  undefined8 *unaff_x20;
  long unaff_x21;
  long unaff_x22;
  undefined8 *unaff_x23;
  uint unaff_w24;
  uint unaff_w25;
  undefined8 unaff_x26;
  int unaff_w27;
  ulong unaff_x29;
  undefined8 uVar10;
  undefined8 uVar11;
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
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined4 uStack0000000000000090;
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
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  
  do {
    uVar7 = (ulong)*(ushort *)(param_1 + 0x12e);
    if (uVar7 != 0) {
      piVar9 = (int *)(*(long *)(param_1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)in_x9[0x121]) {
          puVar3 = (undefined8 *)(param_1 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_01eedffc;
        }
        uVar7 = uVar7 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ae9f78(&stack0x00000048,*(long *)in_x9[0x121],0);
LAB_01eedffc:
    iVar2 = (*(code *)*puVar3)(&stack0x00000048,puVar3[1]);
    uVar11 = *unaff_x20;
    uVar10 = unaff_x20[3];
    uVar5 = unaff_x20[2];
    unaff_x23[1] = unaff_x20[1];
    *unaff_x23 = uVar11;
    unaff_x23[3] = uVar10;
    unaff_x23[2] = uVar5;
    if (unaff_w27 < iVar2) {
      lVar4 = **(long **)(unaff_x21 + 0x38);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_01ae9e74();
      }
      uVar11 = *unaff_x23;
      uVar10 = unaff_x23[3];
      uVar5 = unaff_x23[2];
      unaff_x20[1] = unaff_x23[1];
      *unaff_x20 = uVar11;
      unaff_x20[3] = uVar10;
      unaff_x20[2] = uVar5;
      uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
      in_stack_00000048 = lVar4;
      if (uVar7 != 0) {
        piVar9 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)StringLiteral_2516) {
            puVar3 = (undefined8 *)(lVar4 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_01eee088;
          }
          uVar7 = uVar7 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar7 != 0);
      }
      puVar3 = (undefined8 *)FUN_01ae9f78(&stack0x00000048,*(long *)StringLiteral_2516,0);
LAB_01eee088:
      lVar4 = (*(code *)*puVar3)(&stack0x00000048,unaff_w27,puVar3[1]);
      uVar11 = *unaff_x20;
      uVar10 = unaff_x20[3];
      uVar5 = unaff_x20[2];
      unaff_x23[1] = unaff_x20[1];
      *unaff_x23 = uVar11;
      unaff_x23[3] = uVar10;
      unaff_x23[2] = uVar5;
      if (((unaff_x22 != 0) && (unaff_w27 != 0)) && (lVar4 == unaff_x22)) {
        lVar4 = **(long **)(unaff_x21 + 0x38);
        if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_01ae9e74();
        }
        uVar11 = *unaff_x23;
        uVar10 = unaff_x23[3];
        uVar5 = unaff_x23[2];
        unaff_x20[1] = unaff_x23[1];
        *unaff_x20 = uVar11;
        unaff_x20[3] = uVar10;
        unaff_x20[2] = uVar5;
        uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
        in_stack_00000048 = lVar4;
        if (uVar7 != 0) {
          piVar9 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *(long *)StringLiteral_2516) {
              puVar3 = (undefined8 *)(lVar4 + (long)*piVar9 * 0x10 + 0x138);
              goto System_Array__InternalArray__ICollection_Contains<OVRPlugin_BoneCapsule>;
            }
            uVar7 = uVar7 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar7 != 0);
        }
        puVar3 = (undefined8 *)FUN_01ae9f78(&stack0x00000048,*(long *)StringLiteral_2516,0);
System_Array__InternalArray__ICollection_Contains<OVRPlugin_BoneCapsule>:
        (*(code *)*puVar3)(&stack0x00000048,0,puVar3[1]);
        uVar11 = *unaff_x20;
        uVar10 = unaff_x20[3];
        uVar5 = unaff_x20[2];
        unaff_x23[1] = unaff_x20[1];
        *unaff_x23 = uVar11;
        unaff_x23[3] = uVar10;
        unaff_x23[2] = uVar5;
      }
      lVar4 = FUN_03479fb0();
      if ((lVar4 != 0) &&
         (uVar7 = FUN_02994a58(&stack0x000000e0,lVar4,*(undefined8 *)StringLiteral_2518),
         (uVar7 & 1) == 0)) {
        uVar5 = FUN_03486fdc(unaff_x26,0);
        FUN_034654e4(&stack0x00000080,uVar5,0);
        uVar7 = FUN_0346dce4(&stack0x00000080,0);
        if ((uVar7 & 1) == 0) {
          lVar8 = *(long *)(lVar4 + 0x78);
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01b48178();
          }
          uVar5 = *(undefined8 *)(lVar8 + 0x58);
          uVar10 = *(undefined8 *)(lVar8 + 0x60);
          lVar8 = *(long *)StringLiteral_2501;
          if (*(int *)(lVar8 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
            lVar8 = *(long *)StringLiteral_2501;
          }
          uVar7 = FUN_0352f118(*(long *)(lVar8 + 0xb8) + 0x10,in_stack_00000080,in_stack_00000088,
                               uVar5,uVar10,(long)&stack0x00000078 + 4,0);
          iVar2 = in_stack_00000078._4_4_;
          if ((uVar7 & 1) != 0) {
            if (*(int *)(*(long *)
                          Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__ +
                        0xe0) == 0) {
              thunk_FUN_01ac7298();
            }
            iVar1 = -iVar2;
            if (-1 < iVar2) {
              iVar1 = iVar2;
            }
            unaff_s8 = unaff_s8 + unaff_s9 / (float)(iVar1 + 1) + unaff_s9;
            goto LAB_01eee25c;
          }
        }
        unaff_s8 = unaff_s8 + unaff_s9;
        goto LAB_01eee25c;
      }
      unaff_w27 = unaff_w27 + 1;
    }
    else {
      lVar4 = 0;
LAB_01eee25c:
      uVar7 = unaff_x29 + 1;
      if ((long)uVar7 < in_stack_00000020) {
        lVar8 = *(long *)(in_stack_00000028 + 0x10);
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48178();
        }
        if (*(uint *)(lVar8 + 0x18) <= uVar7) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48180();
        }
        uVar7 = FUN_0347aa34(lVar8 + uVar7 * 0x10 + 0x20,0);
        if ((uVar7 & 1) == 0) goto LAB_01eee2c4;
        in_stack_00000010._4_4_ = in_stack_00000010._4_4_ | (uint)(lVar4 == 0) & (unaff_w25 ^ 1);
        in_stack_00000040._4_4_ = in_stack_00000040._4_4_ | lVar4 != 0;
      }
      else {
LAB_01eee2c4:
        if (unaff_x29 == in_stack_00000018 && ((unaff_w24 ^ 0xffffffff) & 1) == 0) {
          if (lVar4 == 0) {
LAB_01eee34c:
            uStack0000000000000030 = in_stack_00000010._4_4_ & uStack0000000000000030;
            uStack0000000000000034 = uStack0000000000000034 & (in_stack_00000010._4_4_ ^ 1);
          }
        }
        else {
          uStack0000000000000030 = uStack0000000000000030 & (unaff_w25 ^ 1 | (uint)(lVar4 != 0));
          uStack0000000000000034 = uStack0000000000000034 & (unaff_w25 | lVar4 != 0);
          if (unaff_x29 != 0) {
            lVar8 = *(long *)(in_stack_00000028 + 0x10);
            if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01b48178();
            }
            if (*(uint *)(lVar8 + 0x18) <= (uint)(unaff_x29 - 1)) {
                    /* WARNING: Subroutine does not return */
              FUN_01b48180();
            }
            uVar7 = FUN_0347aa34(lVar8 + (unaff_x29 - 1) * 0x10 + 0x20,0);
            if ((uVar7 & 1) != 0) {
              if ((in_stack_00000040._4_4_ & 1) == 0) {
                in_stack_00000040._4_4_ = 0;
                goto LAB_01eee34c;
              }
              in_stack_00000040._4_4_ = 0;
            }
          }
        }
      }
      FUN_029940fc(&stack0x000000e0,lVar4,*(undefined8 *)StringLiteral_2517);
      while( true ) {
        while( true ) {
          unaff_x29 = unaff_x29 + 1;
          if (unaff_x29 == in_stack_00000038) {
            in_stack_000000b0 = 0;
            in_stack_00000098 = 0;
            in_stack_000000a8 = 0;
            in_stack_000000a0 = 0;
            if ((uStack0000000000000030 & 1) == 0) {
              uVar6 = 2;
            }
            else {
              uVar6 = 0;
            }
            if ((uStack0000000000000034 & 1) == 0) {
              uVar6 = 1;
            }
            _uStack0000000000000090 = (ulong)uVar6;
            in_stack_000000c0 = in_stack_000000e8;
            in_stack_000000b8 = in_stack_000000e0;
            in_stack_000000d0 = in_stack_000000f8;
            in_stack_000000c8 = in_stack_000000f0;
            in_stack_000000d8 = *(undefined8 *)(in_stack_00000028 + 0x10);
            thunk_FUN_01b4f09c(&stack0x000000d8);
            _uStack0000000000000090 = CONCAT44(unaff_s8,uStack0000000000000090);
            memcpy(in_stack_00000008,&stack0x00000090,0x50);
            return;
          }
          lVar4 = *(long *)(in_stack_00000028 + 0x10);
          if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01b48178();
          }
          if (*(uint *)(lVar4 + 0x18) <= unaff_x29) {
                    /* WARNING: Subroutine does not return */
            FUN_01b48180();
          }
          unaff_w24 = FUN_0347aa34(lVar4 + unaff_x29 * 0x10 + 0x20,0);
          lVar4 = *(long *)(in_stack_00000028 + 0x10);
          if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01b48178();
          }
          if (*(uint *)(lVar4 + 0x18) <= unaff_x29) {
                    /* WARNING: Subroutine does not return */
            FUN_01b48180();
          }
          unaff_w25 = FUN_0347a880(lVar4 + unaff_x29 * 0x10 + 0x20,0);
          if ((in_stack_00000040._4_4_ & unaff_w24 & 1) == 0) break;
          FUN_029940fc(&stack0x000000e0,0,*(undefined8 *)StringLiteral_2517);
          in_stack_00000040._4_4_ = 1;
        }
        lVar4 = *(long *)(in_stack_00000028 + 0x10);
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48178();
        }
        if (*(uint *)(lVar4 + 0x18) <= unaff_x29) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48180();
        }
        unaff_x26 = *(undefined8 *)(lVar4 + unaff_x29 * 0x10 + 0x20);
        uVar7 = FUN_02ee6cf0(unaff_x26,0);
        if ((uVar7 & 1) == 0) break;
        FUN_029940fc(&stack0x000000e0,0,*(undefined8 *)StringLiteral_2517);
        unaff_s8 = unaff_s8 + unaff_s9;
      }
      unaff_w27 = 0;
    }
    param_1 = **(long **)(unaff_x21 + 0x38);
    if ((*(byte *)(param_1 + 0x135) & 1) == 0) {
      param_1 = FUN_01ae9e74();
    }
    uVar11 = *unaff_x23;
    uVar10 = unaff_x23[3];
    uVar5 = unaff_x23[2];
    in_x9 = &StringLiteral_2226;
    unaff_x20[1] = unaff_x23[1];
    *unaff_x20 = uVar11;
    unaff_x20[3] = uVar10;
    unaff_x20[2] = uVar5;
    in_stack_00000048 = param_1;
  } while( true );
}


