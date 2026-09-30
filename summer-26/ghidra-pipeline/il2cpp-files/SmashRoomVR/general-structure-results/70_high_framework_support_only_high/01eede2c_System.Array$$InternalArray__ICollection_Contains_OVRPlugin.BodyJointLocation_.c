/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Contains<OVRPlugin.BodyJointLocation>
ENTRY_POINT: 01eede2c
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 89
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_20;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_4
*/


void System_Array__InternalArray__ICollection_Contains<OVRPlugin_BodyJointLocation>
               (undefined1 param_1 [16])

{
  byte bVar1;
  undefined8 uVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  int iVar7;
  ulong uVar8;
  undefined8 *puVar9;
  uint uVar10;
  long lVar11;
  long lVar12;
  byte bVar13;
  int *piVar14;
  void *unaff_x19;
  undefined1 *unaff_x20;
  long unaff_x21;
  long unaff_x22;
  undefined8 *unaff_x23;
  int iVar15;
  ulong uVar16;
  undefined8 uVar17;
  int iVar18;
  long unaff_x27;
  ulong uVar19;
  float fVar20;
  long in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  int iStack000000000000007c;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined4 uStack0000000000000090;
  undefined8 uStack0000000000000098;
  undefined8 uStack00000000000000a0;
  undefined8 uStack00000000000000a8;
  undefined8 uStack00000000000000b0;
  undefined8 uStack00000000000000b8;
  undefined8 uStack00000000000000c0;
  undefined8 in_stack_000000d8;
  
  uStack0000000000000098 = param_1._8_8_;
  uStack00000000000000a0 = param_1._0_8_;
  *(undefined8 *)(unaff_x20 + 0x58) = uStack0000000000000098;
  *(undefined8 *)(unaff_x20 + 0x50) = uStack00000000000000a0;
  *(undefined8 *)(unaff_x20 + 0x68) = uStack0000000000000098;
  *(undefined8 *)(unaff_x20 + 0x60) = uStack00000000000000a0;
  *(undefined8 *)(unaff_x20 + 0x48) = uStack0000000000000098;
  *(undefined8 *)(unaff_x20 + 0x40) = uStack00000000000000a0;
  iStack000000000000007c = 0;
  uStack00000000000000b0 = uStack00000000000000a0;
  uStack00000000000000c0 = uStack00000000000000a0;
  if ((*(long *)(unaff_x27 + 0x10) == 0) ||
     (uVar16 = *(ulong *)(*(long *)(unaff_x27 + 0x10) + 0x18), uVar16 == 0)) {
    *(undefined8 *)(unaff_x20 + 0x48) = uStack0000000000000098;
    *(undefined8 *)(unaff_x20 + 0x40) = uStack00000000000000a0;
    uStack0000000000000090 = param_1._0_4_;
    _uStack0000000000000090 = CONCAT44(0x3f000000,uStack0000000000000090);
    uStack00000000000000a8 = uStack0000000000000098;
    uStack00000000000000b8 = uStack0000000000000098;
    goto LAB_01eee424;
  }
  _uStack0000000000000090 = uStack00000000000000a0;
  FUN_02993a94(&stack0x000000e0,4,uVar16 & 0xffffffff,*(undefined8 *)StringLiteral_2519);
  iVar15 = (int)uVar16;
  if (0 < iVar15) {
    uVar19 = 0;
    fVar20 = 0.0;
    bVar4 = 0;
    bVar3 = 0;
    bVar1 = 1;
    bVar13 = 1;
LAB_01eedebc:
    lVar11 = *(long *)(unaff_x27 + 0x10);
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    if (*(uint *)(lVar11 + 0x18) <= uVar19) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48180();
    }
    bVar5 = FUN_0347aa34(lVar11 + uVar19 * 0x10 + 0x20,0);
    lVar11 = *(long *)(unaff_x27 + 0x10);
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    if (*(uint *)(lVar11 + 0x18) <= uVar19) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48180();
    }
    bVar6 = FUN_0347a880(lVar11 + uVar19 * 0x10 + 0x20,0);
    if ((bVar4 & bVar5) == 0) {
      lVar11 = *(long *)(unaff_x27 + 0x10);
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      if (*(uint *)(lVar11 + 0x18) <= uVar19) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48180();
      }
      uVar17 = *(undefined8 *)(lVar11 + uVar19 * 0x10 + 0x20);
      uVar8 = FUN_02ee6cf0(uVar17,0);
      if ((uVar8 & 1) == 0) {
        iVar18 = 0;
        do {
          lVar11 = **(long **)(unaff_x21 + 0x38);
          if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
            lVar11 = FUN_01ae9e74();
          }
          in_stack_00000050 = 0xffffffffffffffff;
          in_stack_00000060 = unaff_x23[1];
          in_stack_00000058 = *unaff_x23;
          in_stack_00000070 = unaff_x23[3];
          in_stack_00000068 = unaff_x23[2];
          uVar8 = (ulong)*(ushort *)(lVar11 + 0x12e);
          in_stack_00000048 = lVar11;
          if (uVar8 != 0) {
            piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == *(long *)StringLiteral_2515) {
                puVar9 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
                goto LAB_01eedffc;
              }
              uVar8 = uVar8 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar8 != 0);
          }
          puVar9 = (undefined8 *)FUN_01ae9f78(&stack0x00000048,*(long *)StringLiteral_2515,0);
LAB_01eedffc:
          iVar7 = (*(code *)*puVar9)(&stack0x00000048,puVar9[1]);
          unaff_x23[1] = in_stack_00000060;
          *unaff_x23 = in_stack_00000058;
          unaff_x23[3] = in_stack_00000070;
          unaff_x23[2] = in_stack_00000068;
          if (iVar7 <= iVar18) {
            lVar11 = 0;
            goto LAB_01eee25c;
          }
          lVar11 = **(long **)(unaff_x21 + 0x38);
          if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
            lVar11 = FUN_01ae9e74();
          }
          in_stack_00000050 = 0xffffffffffffffff;
          in_stack_00000060 = unaff_x23[1];
          in_stack_00000058 = *unaff_x23;
          in_stack_00000070 = unaff_x23[3];
          in_stack_00000068 = unaff_x23[2];
          uVar8 = (ulong)*(ushort *)(lVar11 + 0x12e);
          in_stack_00000048 = lVar11;
          if (uVar8 != 0) {
            piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == *(long *)StringLiteral_2516) {
                puVar9 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
                goto LAB_01eee088;
              }
              uVar8 = uVar8 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar8 != 0);
          }
          puVar9 = (undefined8 *)FUN_01ae9f78(&stack0x00000048,*(long *)StringLiteral_2516,0);
LAB_01eee088:
          lVar11 = (*(code *)*puVar9)(&stack0x00000048,iVar18,puVar9[1]);
          unaff_x23[1] = in_stack_00000060;
          *unaff_x23 = in_stack_00000058;
          unaff_x23[3] = in_stack_00000070;
          unaff_x23[2] = in_stack_00000068;
          if (((unaff_x22 != 0) && (iVar18 != 0)) && (lVar11 == unaff_x22)) {
            lVar11 = **(long **)(unaff_x21 + 0x38);
            if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
              lVar11 = FUN_01ae9e74();
            }
            in_stack_00000050 = 0xffffffffffffffff;
            in_stack_00000060 = unaff_x23[1];
            in_stack_00000058 = *unaff_x23;
            in_stack_00000070 = unaff_x23[3];
            in_stack_00000068 = unaff_x23[2];
            uVar8 = (ulong)*(ushort *)(lVar11 + 0x12e);
            in_stack_00000048 = lVar11;
            if (uVar8 != 0) {
              piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar14 + -2) == *(long *)StringLiteral_2516) {
                  puVar9 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
                  goto System_Array__InternalArray__ICollection_Contains<OVRPlugin_BoneCapsule>;
                }
                uVar8 = uVar8 - 1;
                piVar14 = piVar14 + 4;
              } while (uVar8 != 0);
            }
            puVar9 = (undefined8 *)FUN_01ae9f78(&stack0x00000048,*(long *)StringLiteral_2516,0);
System_Array__InternalArray__ICollection_Contains<OVRPlugin_BoneCapsule>:
            (*(code *)*puVar9)(&stack0x00000048,0,puVar9[1]);
            unaff_x23[1] = in_stack_00000060;
            *unaff_x23 = in_stack_00000058;
            unaff_x23[3] = in_stack_00000070;
            unaff_x23[2] = in_stack_00000068;
          }
          lVar11 = FUN_03479fb0();
          if ((lVar11 != 0) &&
             (uVar8 = FUN_02994a58(&stack0x000000e0,lVar11,*(undefined8 *)StringLiteral_2518),
             (uVar8 & 1) == 0)) goto LAB_01eee194;
          iVar18 = iVar18 + 1;
        } while( true );
      }
      FUN_029940fc(&stack0x000000e0,0,*(undefined8 *)StringLiteral_2517);
      fVar20 = fVar20 + 1.0;
    }
    else {
      FUN_029940fc(&stack0x000000e0,0,*(undefined8 *)StringLiteral_2517);
      bVar4 = 1;
    }
    goto LAB_01eee384;
  }
  fVar20 = 0.0;
  bVar13 = 1;
LAB_01eee3e4:
  uVar10 = 0;
LAB_01eee3f4:
  uStack00000000000000b0 = 0;
  uStack00000000000000a8 = 0;
  uStack00000000000000a0 = 0;
  uStack0000000000000098 = 0;
  uStack00000000000000c0 = *(undefined8 *)(unaff_x20 + 0x58);
  uStack00000000000000b8 = *(undefined8 *)(unaff_x20 + 0x50);
  if (bVar13 == 0) {
    uVar10 = 1;
  }
  _uStack0000000000000090 = (ulong)uVar10;
  *(undefined8 *)(unaff_x20 + 0x40) = *(undefined8 *)(unaff_x20 + 0x68);
  *(undefined8 *)(unaff_x20 + 0x38) = *(undefined8 *)(unaff_x20 + 0x60);
  in_stack_000000d8 = *(undefined8 *)(unaff_x27 + 0x10);
  thunk_FUN_01b4f09c(&stack0x000000d8);
  _uStack0000000000000090 = CONCAT44(fVar20,uStack0000000000000090);
LAB_01eee424:
  memcpy(unaff_x19,&stack0x00000090,0x50);
  return;
LAB_01eee194:
  uVar17 = FUN_03486fdc(uVar17,0);
  FUN_034654e4(&stack0x00000080,uVar17,0);
  uVar8 = FUN_0346dce4(&stack0x00000080,0);
  if ((uVar8 & 1) == 0) {
    lVar12 = *(long *)(lVar11 + 0x78);
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    uVar17 = *(undefined8 *)(lVar12 + 0x58);
    uVar2 = *(undefined8 *)(lVar12 + 0x60);
    lVar12 = *(long *)StringLiteral_2501;
    if (*(int *)(lVar12 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar12 = *(long *)StringLiteral_2501;
    }
    uVar8 = FUN_0352f118(*(long *)(lVar12 + 0xb8) + 0x10,in_stack_00000080,in_stack_00000088,uVar17,
                         uVar2,&stack0x0000007c,0);
    iVar18 = iStack000000000000007c;
    if ((uVar8 & 1) == 0) goto LAB_01eee258;
    if (*(int *)(*(long *)Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    iVar7 = -iVar18;
    if (-1 < iVar18) {
      iVar7 = iVar18;
    }
    fVar20 = fVar20 + 1.0 / (float)(iVar7 + 1) + 1.0;
  }
  else {
LAB_01eee258:
    fVar20 = fVar20 + 1.0;
  }
LAB_01eee25c:
  uVar8 = uVar19 + 1;
  if ((long)uVar8 < (long)iVar15) {
    lVar12 = *(long *)(unaff_x27 + 0x10);
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    if (*(uint *)(lVar12 + 0x18) <= uVar8) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48180();
    }
    uVar8 = FUN_0347aa34(lVar12 + uVar8 * 0x10 + 0x20,0);
    if ((uVar8 & 1) != 0) {
      bVar3 = bVar3 | lVar11 == 0 & (bVar6 ^ 1);
      bVar4 = bVar4 | lVar11 != 0;
      goto LAB_01eee36c;
    }
  }
  if (uVar19 == iVar15 - 1 && ((bVar5 ^ 0xff) & 1) == 0) {
    if (lVar11 != 0) goto LAB_01eee36c;
  }
  else {
    bVar1 = bVar1 & (bVar6 ^ 1 | lVar11 != 0);
    bVar13 = bVar13 & (bVar6 | lVar11 != 0);
    if (uVar19 == 0) goto LAB_01eee36c;
    lVar12 = *(long *)(unaff_x27 + 0x10);
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    if (*(uint *)(lVar12 + 0x18) <= (uint)(uVar19 - 1)) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48180();
    }
    uVar8 = FUN_0347aa34(lVar12 + (uVar19 - 1) * 0x10 + 0x20,0);
    if ((uVar8 & 1) == 0) goto LAB_01eee36c;
    if (bVar4 != 0) {
      bVar4 = 0;
      goto LAB_01eee36c;
    }
    bVar4 = 0;
  }
  bVar1 = bVar3 & bVar1;
  bVar13 = bVar13 & (bVar3 ^ 1);
LAB_01eee36c:
  FUN_029940fc(&stack0x000000e0,lVar11,*(undefined8 *)StringLiteral_2517);
LAB_01eee384:
  uVar19 = uVar19 + 1;
  if (uVar19 == (uVar16 & 0xffffffff)) goto code_r0x01eee394;
  goto LAB_01eedebc;
code_r0x01eee394:
  unaff_x20 = (undefined1 *)&stack0x00000090;
  if (bVar1 != 0) goto LAB_01eee3e4;
  uVar10 = 2;
  goto LAB_01eee3f4;
}


