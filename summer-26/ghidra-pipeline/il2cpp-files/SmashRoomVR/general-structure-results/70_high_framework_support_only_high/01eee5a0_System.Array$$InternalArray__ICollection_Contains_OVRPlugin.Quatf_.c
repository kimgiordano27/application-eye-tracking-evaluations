/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Contains<OVRPlugin.Quatf>
ENTRY_POINT: 01eee5a0
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__ICollection_Contains<OVRPlugin_Quatf>
               (void *param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5,
               long param_6)

{
  byte bVar1;
  undefined8 uVar2;
  byte bVar3;
  byte bVar4;
  undefined8 uVar5;
  byte bVar6;
  byte bVar7;
  int iVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long lVar11;
  uint uVar12;
  long lVar13;
  byte bVar14;
  int *piVar15;
  ulong uVar16;
  int iVar17;
  ulong uVar18;
  undefined8 uVar19;
  int iVar20;
  float fVar21;
  long in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  int iStack000000000000006c;
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
  
  if (*(long *)(param_6 + 0x38) == 0) {
    thunk_FUN_01ad9084(StringLiteral_2515);
    thunk_FUN_01ad9084(StringLiteral_2516);
    thunk_FUN_01ad9084(StringLiteral_2501);
    thunk_FUN_01ad9084(StringLiteral_2517);
    thunk_FUN_01ad9084(StringLiteral_2518);
    thunk_FUN_01ad9084(StringLiteral_2519);
    thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__);
    if (*(long *)(param_6 + 0x38) == 0) {
      FUN_01ae9ed0(param_6);
    }
  }
  in_stack_00000070 = 0;
  in_stack_00000078 = 0;
  in_stack_000000d8 = 0;
  in_stack_000000d0 = 0;
  in_stack_000000e8 = 0;
  in_stack_000000e0 = 0;
  in_stack_000000b8 = 0;
  in_stack_000000b0 = 0;
  in_stack_000000c8 = 0;
  in_stack_000000c0 = 0;
  in_stack_00000098 = 0;
  in_stack_00000090 = 0;
  in_stack_000000a8 = 0;
  in_stack_000000a0 = 0;
  in_stack_00000088 = 0;
  _uStack0000000000000080 = 0;
  iStack000000000000006c = 0;
  if ((*(long *)(param_2 + 0x10) == 0) ||
     (uVar18 = *(ulong *)(*(long *)(param_2 + 0x10) + 0x18), uVar18 == 0)) {
    in_stack_000000b8 = 0;
    in_stack_000000b0 = 0;
    in_stack_000000c8 = 0;
    in_stack_000000c0 = 0;
    in_stack_00000098 = 0;
    in_stack_00000090 = 0;
    in_stack_000000a8 = 0;
    in_stack_000000a0 = 0;
    in_stack_00000088 = 0;
    _uStack0000000000000080 = 0x3f00000000000000;
    goto LAB_01eeec0c;
  }
  FUN_02993a94(&stack0x000000d0,4,uVar18 & 0xffffffff,*(undefined8 *)StringLiteral_2519);
  iVar17 = (int)uVar18;
  if (0 < iVar17) {
    uVar16 = 0;
    fVar21 = 0.0;
    bVar4 = 0;
    bVar3 = 0;
    bVar1 = 1;
    bVar14 = 1;
LAB_01eee6c8:
    lVar13 = *(long *)(param_2 + 0x10);
    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    if (*(uint *)(lVar13 + 0x18) <= uVar16) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48180();
    }
    bVar6 = FUN_0347aa34(lVar13 + uVar16 * 0x10 + 0x20,0);
    lVar13 = *(long *)(param_2 + 0x10);
    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    if (*(uint *)(lVar13 + 0x18) <= uVar16) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48180();
    }
    bVar7 = FUN_0347a880(lVar13 + uVar16 * 0x10 + 0x20,0);
    if ((bVar4 & bVar6) == 0) {
      lVar13 = *(long *)(param_2 + 0x10);
      if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      if (*(uint *)(lVar13 + 0x18) <= uVar16) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48180();
      }
      uVar19 = *(undefined8 *)(lVar13 + uVar16 * 0x10 + 0x20);
      uVar9 = FUN_02ee6cf0(uVar19,0);
      if ((uVar9 & 1) == 0) {
        iVar20 = 0;
        do {
          lVar13 = **(long **)(param_6 + 0x38);
          if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
            lVar13 = FUN_01ae9e74();
          }
          in_stack_00000050 = 0xffffffffffffffff;
          uVar9 = (ulong)*(ushort *)(lVar13 + 0x12e);
          in_stack_00000048 = lVar13;
          in_stack_00000058 = param_3;
          in_stack_00000060 = param_4;
          if (uVar9 != 0) {
            piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == *(long *)StringLiteral_2515) {
                puVar10 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
                goto LAB_01eee804;
              }
              uVar9 = uVar9 - 1;
              piVar15 = piVar15 + 4;
            } while (uVar9 != 0);
          }
          puVar10 = (undefined8 *)FUN_01ae9f78(&stack0x00000048,*(long *)StringLiteral_2515,0);
LAB_01eee804:
          iVar8 = (*(code *)*puVar10)(&stack0x00000048,puVar10[1]);
          uVar5 = in_stack_00000060;
          uVar2 = in_stack_00000058;
          if (iVar8 <= iVar20) {
            lVar13 = 0;
            param_3 = in_stack_00000058;
            param_4 = in_stack_00000060;
            goto LAB_01eeea44;
          }
          lVar13 = **(long **)(param_6 + 0x38);
          if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
            lVar13 = FUN_01ae9e74();
          }
          in_stack_00000050 = 0xffffffffffffffff;
          uVar9 = (ulong)*(ushort *)(lVar13 + 0x12e);
          in_stack_00000048 = lVar13;
          in_stack_00000058 = uVar2;
          in_stack_00000060 = uVar5;
          if (uVar9 != 0) {
            piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == *(long *)StringLiteral_2516) {
                puVar10 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
                goto LAB_01eee888;
              }
              uVar9 = uVar9 - 1;
              piVar15 = piVar15 + 4;
            } while (uVar9 != 0);
          }
          puVar10 = (undefined8 *)FUN_01ae9f78(&stack0x00000048,*(long *)StringLiteral_2516,0);
LAB_01eee888:
          lVar11 = (*(code *)*puVar10)(&stack0x00000048,iVar20,puVar10[1]);
          uVar5 = in_stack_00000060;
          uVar2 = in_stack_00000058;
          lVar13 = lVar11;
          if (((param_5 != 0) && (lVar13 = param_5, iVar20 != 0)) &&
             (lVar13 = lVar11, lVar11 == param_5)) {
            lVar13 = **(long **)(param_6 + 0x38);
            if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
              lVar13 = FUN_01ae9e74();
            }
            in_stack_00000050 = 0xffffffffffffffff;
            uVar9 = (ulong)*(ushort *)(lVar13 + 0x12e);
            in_stack_00000048 = lVar13;
            in_stack_00000058 = uVar2;
            in_stack_00000060 = uVar5;
            if (uVar9 != 0) {
              piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
              do {
                if (*(long *)(piVar15 + -2) == *(long *)StringLiteral_2516) {
                  puVar10 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
                  goto LAB_01eee920;
                }
                uVar9 = uVar9 - 1;
                piVar15 = piVar15 + 4;
              } while (uVar9 != 0);
            }
            puVar10 = (undefined8 *)FUN_01ae9f78(&stack0x00000048,*(long *)StringLiteral_2516,0);
LAB_01eee920:
            lVar13 = (*(code *)*puVar10)(&stack0x00000048,0,puVar10[1]);
          }
          param_4 = in_stack_00000060;
          param_3 = in_stack_00000058;
          lVar13 = FUN_03479fb0(lVar13,uVar19,0,0);
          if ((lVar13 != 0) &&
             (uVar9 = FUN_02994a58(&stack0x000000d0,lVar13,*(undefined8 *)StringLiteral_2518),
             (uVar9 & 1) == 0)) goto LAB_01eee97c;
          iVar20 = iVar20 + 1;
        } while( true );
      }
      FUN_029940fc(&stack0x000000d0,0,*(undefined8 *)StringLiteral_2517);
      fVar21 = fVar21 + 1.0;
    }
    else {
      FUN_029940fc(&stack0x000000d0,0,*(undefined8 *)StringLiteral_2517);
      bVar4 = 1;
    }
    goto LAB_01eeeb6c;
  }
  fVar21 = 0.0;
  bVar14 = 1;
LAB_01eeebcc:
  uVar12 = 0;
LAB_01eeebdc:
  in_stack_000000a0 = 0;
  in_stack_00000098 = 0;
  in_stack_00000090 = 0;
  in_stack_00000088 = 0;
  if (bVar14 == 0) {
    uVar12 = 1;
  }
  _uStack0000000000000080 = (ulong)uVar12;
  in_stack_000000b0 = in_stack_000000d8;
  in_stack_000000a8 = in_stack_000000d0;
  in_stack_000000c0 = in_stack_000000e8;
  in_stack_000000b8 = in_stack_000000e0;
  in_stack_000000c8 = *(undefined8 *)(param_2 + 0x10);
  thunk_FUN_01b4f09c(&stack0x000000c8);
  _uStack0000000000000080 = CONCAT44(fVar21,uStack0000000000000080);
LAB_01eeec0c:
  memcpy(param_1,&stack0x00000080,0x50);
  return;
LAB_01eee97c:
  uVar19 = FUN_03486fdc(uVar19,0);
  FUN_034654e4(&stack0x00000070,uVar19,0);
  uVar9 = FUN_0346dce4(&stack0x00000070,0);
  if ((uVar9 & 1) == 0) {
    lVar11 = *(long *)(lVar13 + 0x78);
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    uVar19 = *(undefined8 *)(lVar11 + 0x58);
    uVar2 = *(undefined8 *)(lVar11 + 0x60);
    lVar11 = *(long *)StringLiteral_2501;
    if (*(int *)(lVar11 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar11 = *(long *)StringLiteral_2501;
    }
    uVar9 = FUN_0352f118(*(long *)(lVar11 + 0xb8) + 0x10,in_stack_00000070,in_stack_00000078,uVar19,
                         uVar2,&stack0x0000006c,0);
    iVar20 = iStack000000000000006c;
    if ((uVar9 & 1) == 0) goto LAB_01eeea40;
    if (*(int *)(*(long *)Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    iVar8 = -iVar20;
    if (-1 < iVar20) {
      iVar8 = iVar20;
    }
    fVar21 = fVar21 + 1.0 / (float)(iVar8 + 1) + 1.0;
  }
  else {
LAB_01eeea40:
    fVar21 = fVar21 + 1.0;
  }
LAB_01eeea44:
  uVar9 = uVar16 + 1;
  if ((long)uVar9 < (long)iVar17) {
    lVar11 = *(long *)(param_2 + 0x10);
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    if (*(uint *)(lVar11 + 0x18) <= uVar9) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48180();
    }
    uVar9 = FUN_0347aa34(lVar11 + uVar9 * 0x10 + 0x20,0);
    if ((uVar9 & 1) != 0) {
      bVar3 = bVar3 | lVar13 == 0 & (bVar7 ^ 1);
      bVar4 = bVar4 | lVar13 != 0;
      goto LAB_01eeeb54;
    }
  }
  if (uVar16 == iVar17 - 1 && ((bVar6 ^ 0xff) & 1) == 0) {
    if (lVar13 != 0) goto LAB_01eeeb54;
  }
  else {
    bVar1 = bVar1 & (bVar7 ^ 1 | lVar13 != 0);
    bVar14 = bVar14 & (bVar7 | lVar13 != 0);
    if (uVar16 == 0) goto LAB_01eeeb54;
    lVar11 = *(long *)(param_2 + 0x10);
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    if (*(uint *)(lVar11 + 0x18) <= (uint)(uVar16 - 1)) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48180();
    }
    uVar9 = FUN_0347aa34(lVar11 + (uVar16 - 1) * 0x10 + 0x20,0);
    if ((uVar9 & 1) == 0) goto LAB_01eeeb54;
    if (bVar4 != 0) {
      bVar4 = 0;
      goto LAB_01eeeb54;
    }
    bVar4 = 0;
  }
  bVar1 = bVar3 & bVar1;
  bVar14 = bVar14 & (bVar3 ^ 1);
LAB_01eeeb54:
  FUN_029940fc(&stack0x000000d0,lVar13,*(undefined8 *)StringLiteral_2517);
LAB_01eeeb6c:
  uVar16 = uVar16 + 1;
  if (uVar16 == (uVar18 & 0xffffffff)) goto code_r0x01eeeb7c;
  goto LAB_01eee6c8;
code_r0x01eeeb7c:
  if (bVar1 != 0) goto LAB_01eeebcc;
  uVar12 = 2;
  goto LAB_01eeebdc;
}


