/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Contains<OVRPlugin.EyeGazeState>
ENTRY_POINT: 01eee2a4
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 157
LABEL: confirmed_gaze_retrieval_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_runtime_retrieval
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;attempted_use;active_gaze_retrieval
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_4;validity_or_gating_hits_15;strong_pose_or_ray_construction_hits_2;attempted_eye_tracking_permission_or_feature_enable;active_gaze_state_retrieval_with_validity_and_pose;functionality_gaze_retrieval_or_extraction
*/


void System_Array__InternalArray__ICollection_Contains<OVRPlugin_EyeGazeState>(void)

{
  undefined1 in_ZR;
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  uint in_w8;
  long lVar7;
  int *piVar8;
  undefined8 *unaff_x20;
  long unaff_x21;
  long unaff_x22;
  undefined8 *unaff_x23;
  undefined8 uVar9;
  int iVar10;
  long unaff_x27;
  long unaff_x28;
  ulong unaff_x29;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
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
  
code_r0x01eee2a4:
  in_stack_00000010._4_4_ = in_stack_00000010._4_4_ | in_w8;
  in_stack_00000040._4_4_ = in_stack_00000040._4_4_ | !(bool)in_ZR;
LAB_01eee36c:
  FUN_029940fc(&stack0x000000e0,unaff_x28,*(undefined8 *)StringLiteral_2517);
  uVar6 = unaff_x29;
  while( true ) {
    while( true ) {
      unaff_x29 = uVar6 + 1;
      if (unaff_x29 == in_stack_00000038) {
        in_stack_000000b0 = 0;
        in_stack_00000098 = 0;
        in_stack_000000a8 = 0;
        in_stack_000000a0 = 0;
        if ((uStack0000000000000030 & 1) == 0) {
          uVar1 = 2;
        }
        else {
          uVar1 = 0;
        }
        if ((uStack0000000000000034 & 1) == 0) {
          uVar1 = 1;
        }
        _uStack0000000000000090 = (ulong)uVar1;
        in_stack_000000c0 = in_stack_000000e8;
        in_stack_000000b8 = in_stack_000000e0;
        in_stack_000000d0 = in_stack_000000f8;
        in_stack_000000c8 = in_stack_000000f0;
        in_stack_000000d8 = *(undefined8 *)(unaff_x27 + 0x10);
        thunk_FUN_01b4f09c(&stack0x000000d8);
        _uStack0000000000000090 = CONCAT44(unaff_s8,uStack0000000000000090);
        memcpy(in_stack_00000008,&stack0x00000090,0x50);
        return;
      }
      lVar7 = *(long *)(unaff_x27 + 0x10);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      if (*(uint *)(lVar7 + 0x18) <= unaff_x29) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48180();
      }
      uVar1 = FUN_0347aa34(lVar7 + unaff_x29 * 0x10 + 0x20,0);
      lVar7 = *(long *)(unaff_x27 + 0x10);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      if (*(uint *)(lVar7 + 0x18) <= unaff_x29) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48180();
      }
      uVar2 = FUN_0347a880(lVar7 + unaff_x29 * 0x10 + 0x20,0);
      if ((in_stack_00000040._4_4_ & uVar1 & 1) == 0) break;
      FUN_029940fc(&stack0x000000e0,0,*(undefined8 *)StringLiteral_2517);
      in_stack_00000040._4_4_ = 1;
      uVar6 = unaff_x29;
    }
    lVar7 = *(long *)(unaff_x27 + 0x10);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    if (*(uint *)(lVar7 + 0x18) <= unaff_x29) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48180();
    }
    uVar9 = *(undefined8 *)(lVar7 + unaff_x29 * 0x10 + 0x20);
    uVar4 = FUN_02ee6cf0(uVar9,0);
    if ((uVar4 & 1) == 0) break;
    FUN_029940fc(&stack0x000000e0,0,*(undefined8 *)StringLiteral_2517);
    unaff_s8 = unaff_s8 + unaff_s9;
    uVar6 = unaff_x29;
  }
  iVar10 = 0;
  do {
    lVar7 = **(long **)(unaff_x21 + 0x38);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_01ae9e74();
    }
    uVar13 = *unaff_x23;
    uVar12 = unaff_x23[3];
    uVar11 = unaff_x23[2];
    unaff_x20[1] = unaff_x23[1];
    *unaff_x20 = uVar13;
    unaff_x20[3] = uVar12;
    unaff_x20[2] = uVar11;
    uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
    in_stack_00000048 = lVar7;
    if (uVar4 != 0) {
      piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)StringLiteral_2515) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_01eedffc;
        }
        uVar4 = uVar4 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar4 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ae9f78(&stack0x00000048,*(long *)StringLiteral_2515,0);
LAB_01eedffc:
    iVar3 = (*(code *)*puVar5)(&stack0x00000048,puVar5[1]);
    uVar13 = *unaff_x20;
    uVar12 = unaff_x20[3];
    uVar11 = unaff_x20[2];
    unaff_x23[1] = unaff_x20[1];
    *unaff_x23 = uVar13;
    unaff_x23[3] = uVar12;
    unaff_x23[2] = uVar11;
    if (iVar3 <= iVar10) {
      unaff_x28 = 0;
      goto LAB_01eee25c;
    }
    lVar7 = **(long **)(unaff_x21 + 0x38);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_01ae9e74();
    }
    uVar13 = *unaff_x23;
    uVar12 = unaff_x23[3];
    uVar11 = unaff_x23[2];
    unaff_x20[1] = unaff_x23[1];
    *unaff_x20 = uVar13;
    unaff_x20[3] = uVar12;
    unaff_x20[2] = uVar11;
    uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
    in_stack_00000048 = lVar7;
    if (uVar4 != 0) {
      piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)StringLiteral_2516) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_01eee088;
        }
        uVar4 = uVar4 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar4 != 0);
    }
    puVar5 = (undefined8 *)FUN_01ae9f78(&stack0x00000048,*(long *)StringLiteral_2516,0);
LAB_01eee088:
    lVar7 = (*(code *)*puVar5)(&stack0x00000048,iVar10,puVar5[1]);
    uVar13 = *unaff_x20;
    uVar12 = unaff_x20[3];
    uVar11 = unaff_x20[2];
    unaff_x23[1] = unaff_x20[1];
    *unaff_x23 = uVar13;
    unaff_x23[3] = uVar12;
    unaff_x23[2] = uVar11;
    if (((unaff_x22 != 0) && (iVar10 != 0)) && (lVar7 == unaff_x22)) {
      lVar7 = **(long **)(unaff_x21 + 0x38);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_01ae9e74();
      }
      uVar13 = *unaff_x23;
      uVar12 = unaff_x23[3];
      uVar11 = unaff_x23[2];
      unaff_x20[1] = unaff_x23[1];
      *unaff_x20 = uVar13;
      unaff_x20[3] = uVar12;
      unaff_x20[2] = uVar11;
      uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
      in_stack_00000048 = lVar7;
      if (uVar4 != 0) {
        piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)StringLiteral_2516) {
            puVar5 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
            goto System_Array__InternalArray__ICollection_Contains<OVRPlugin_BoneCapsule>;
          }
          uVar4 = uVar4 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar4 != 0);
      }
      puVar5 = (undefined8 *)FUN_01ae9f78(&stack0x00000048,*(long *)StringLiteral_2516,0);
System_Array__InternalArray__ICollection_Contains<OVRPlugin_BoneCapsule>:
      (*(code *)*puVar5)(&stack0x00000048,0,puVar5[1]);
      uVar13 = *unaff_x20;
      uVar12 = unaff_x20[3];
      uVar11 = unaff_x20[2];
      unaff_x23[1] = unaff_x20[1];
      *unaff_x23 = uVar13;
      unaff_x23[3] = uVar12;
      unaff_x23[2] = uVar11;
    }
    unaff_x28 = FUN_03479fb0();
    if ((unaff_x28 != 0) &&
       (uVar4 = FUN_02994a58(&stack0x000000e0,unaff_x28,*(undefined8 *)StringLiteral_2518),
       (uVar4 & 1) == 0)) break;
    iVar10 = iVar10 + 1;
  } while( true );
  uVar9 = FUN_03486fdc(uVar9,0);
  FUN_034654e4(&stack0x00000080,uVar9,0);
  uVar4 = FUN_0346dce4(&stack0x00000080,0);
  if ((uVar4 & 1) == 0) {
    lVar7 = *(long *)(unaff_x28 + 0x78);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    uVar9 = *(undefined8 *)(lVar7 + 0x58);
    uVar11 = *(undefined8 *)(lVar7 + 0x60);
    lVar7 = *(long *)StringLiteral_2501;
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar7 = *(long *)StringLiteral_2501;
    }
    uVar4 = FUN_0352f118(*(long *)(lVar7 + 0xb8) + 0x10,in_stack_00000080,in_stack_00000088,uVar9,
                         uVar11,(long)&stack0x00000078 + 4,0);
    iVar10 = in_stack_00000078._4_4_;
    if ((uVar4 & 1) != 0) {
      if (*(int *)(*(long *)Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__
                  + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      iVar3 = -iVar10;
      if (-1 < iVar10) {
        iVar3 = iVar10;
      }
      unaff_s8 = unaff_s8 + unaff_s9 / (float)(iVar3 + 1) + unaff_s9;
      goto LAB_01eee25c;
    }
  }
  unaff_s8 = unaff_s8 + unaff_s9;
LAB_01eee25c:
  uVar4 = uVar6 + 2;
  unaff_x27 = in_stack_00000028;
  if ((long)uVar4 < in_stack_00000020) {
    lVar7 = *(long *)(in_stack_00000028 + 0x10);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    if (*(uint *)(lVar7 + 0x18) <= uVar4) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48180();
    }
    uVar4 = FUN_0347aa34(lVar7 + uVar4 * 0x10 + 0x20,0);
    if ((uVar4 & 1) != 0) goto code_r0x01eee294;
  }
  if (unaff_x29 == in_stack_00000018 && ((uVar1 ^ 0xffffffff) & 1) == 0) {
    if (unaff_x28 != 0) goto LAB_01eee36c;
  }
  else {
    uStack0000000000000030 = uStack0000000000000030 & (uVar2 ^ 1 | (uint)(unaff_x28 != 0));
    uStack0000000000000034 = uStack0000000000000034 & (uVar2 | unaff_x28 != 0);
    if (unaff_x29 == 0) goto LAB_01eee36c;
    lVar7 = *(long *)(in_stack_00000028 + 0x10);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    if (*(uint *)(lVar7 + 0x18) <= (uint)uVar6) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48180();
    }
    uVar6 = FUN_0347aa34(lVar7 + uVar6 * 0x10 + 0x20,0);
    if ((uVar6 & 1) == 0) goto LAB_01eee36c;
    if ((in_stack_00000040._4_4_ & 1) != 0) {
      in_stack_00000040._4_4_ = 0;
      goto LAB_01eee36c;
    }
    in_stack_00000040._4_4_ = 0;
  }
  uStack0000000000000030 = in_stack_00000010._4_4_ & uStack0000000000000030;
  uStack0000000000000034 = uStack0000000000000034 & (in_stack_00000010._4_4_ ^ 1);
  goto LAB_01eee36c;
code_r0x01eee294:
  in_ZR = unaff_x28 == 0;
  in_w8 = (uint)(byte)in_ZR & (uVar2 ^ 1);
  goto code_r0x01eee2a4;
}


