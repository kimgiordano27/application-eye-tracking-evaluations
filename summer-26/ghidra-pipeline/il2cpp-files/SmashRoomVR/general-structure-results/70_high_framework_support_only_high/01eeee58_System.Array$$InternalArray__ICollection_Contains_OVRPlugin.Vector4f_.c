/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Contains<OVRPlugin.Vector4f>
ENTRY_POINT: 01eeee58
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_19;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__ICollection_Contains<OVRPlugin_Vector4f>(void)

{
  byte bVar1;
  undefined8 uVar2;
  byte bVar3;
  byte bVar4;
  undefined *puVar5;
  undefined *puVar6;
  byte bVar7;
  byte bVar8;
  int iVar9;
  ulong uVar10;
  undefined8 *puVar11;
  uint uVar12;
  long lVar13;
  long lVar14;
  byte bVar15;
  int *piVar16;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  uint unaff_w23;
  void *unaff_x24;
  undefined8 uVar17;
  int iVar18;
  ulong uVar19;
  float fVar20;
  undefined8 in_stack_00000038;
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
  
  puVar6 = StringLiteral_2516;
  puVar5 = StringLiteral_2515;
  if (0 < (int)unaff_w23) {
    bVar3 = 0;
    bVar15 = 1;
    bVar4 = 0;
    uVar19 = 0;
    fVar20 = 0.0;
    bVar1 = 1;
LAB_01eeeea8:
    lVar13 = *(long *)(unaff_x20 + 0x10);
    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    if (*(uint *)(lVar13 + 0x18) <= uVar19) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48180();
    }
    bVar7 = FUN_0347aa34(lVar13 + uVar19 * 0x10 + 0x20,0);
    lVar13 = *(long *)(unaff_x20 + 0x10);
    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    if (*(uint *)(lVar13 + 0x18) <= uVar19) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48180();
    }
    bVar8 = FUN_0347a880(lVar13 + uVar19 * 0x10 + 0x20,0);
    if ((bVar4 & bVar7) == 0) {
      lVar13 = *(long *)(unaff_x20 + 0x10);
      if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      if (*(uint *)(lVar13 + 0x18) <= uVar19) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48180();
      }
      uVar17 = *(undefined8 *)(lVar13 + uVar19 * 0x10 + 0x20);
      uVar10 = FUN_02ee6cf0(uVar17,0);
      if ((uVar10 & 1) == 0) {
        if (unaff_x22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48178();
        }
        iVar18 = 0;
        do {
          lVar13 = *unaff_x22;
          uVar10 = (ulong)*(ushort *)(lVar13 + 0x12e);
          if (uVar10 != 0) {
            piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == *(long *)puVar5) {
                puVar11 = (undefined8 *)(lVar13 + (long)*piVar16 * 0x10 + 0x138);
                goto LAB_01eeefc8;
              }
              uVar10 = uVar10 - 1;
              piVar16 = piVar16 + 4;
            } while (uVar10 != 0);
          }
          puVar11 = (undefined8 *)FUN_01ae9f78();
LAB_01eeefc8:
          iVar9 = (*(code *)*puVar11)();
          if (iVar9 <= iVar18) {
            lVar13 = 0;
            goto LAB_01eef1c8;
          }
          lVar13 = *unaff_x22;
          uVar10 = (ulong)*(ushort *)(lVar13 + 0x12e);
          if (uVar10 != 0) {
            piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == *(long *)puVar6) {
                puVar11 = (undefined8 *)(lVar13 + (long)*piVar16 * 0x10 + 0x138);
                goto LAB_01eef028;
              }
              uVar10 = uVar10 - 1;
              piVar16 = piVar16 + 4;
            } while (uVar10 != 0);
          }
          puVar11 = (undefined8 *)FUN_01ae9f78();
LAB_01eef028:
          lVar13 = (*(code *)*puVar11)();
          if (((unaff_x21 != 0) && (iVar18 != 0)) && (lVar13 == unaff_x21)) {
            lVar13 = *unaff_x22;
            uVar10 = (ulong)*(ushort *)(lVar13 + 0x12e);
            if (uVar10 != 0) {
              piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
              do {
                if (*(long *)(piVar16 + -2) == *(long *)puVar6) {
                  puVar11 = (undefined8 *)(lVar13 + (long)*piVar16 * 0x10 + 0x138);
                  goto LAB_01eef0a8;
                }
                uVar10 = uVar10 - 1;
                piVar16 = piVar16 + 4;
              } while (uVar10 != 0);
            }
            puVar11 = (undefined8 *)FUN_01ae9f78();
LAB_01eef0a8:
            (*(code *)*puVar11)();
          }
          lVar13 = FUN_03479fb0();
          if ((lVar13 != 0) &&
             (uVar10 = FUN_02994a58(&stack0x000000a0,lVar13,*(undefined8 *)StringLiteral_2518),
             (uVar10 & 1) == 0)) goto LAB_01eef100;
          iVar18 = iVar18 + 1;
        } while( true );
      }
      FUN_029940fc(&stack0x000000a0,0,*(undefined8 *)StringLiteral_2517);
      fVar20 = fVar20 + 1.0;
    }
    else {
      FUN_029940fc(&stack0x000000a0,0,*(undefined8 *)StringLiteral_2517);
      bVar4 = 1;
    }
    goto LAB_01eef2f0;
  }
  fVar20 = 0.0;
  bVar15 = 1;
LAB_01eef348:
  uVar12 = 0;
LAB_01eef358:
  in_stack_00000070 = 0;
  in_stack_00000068 = 0;
  in_stack_00000060 = 0;
  in_stack_00000058 = 0;
  if (bVar15 == 0) {
    uVar12 = 1;
  }
  _uStack0000000000000050 = (ulong)uVar12;
  in_stack_00000080 = in_stack_000000a8;
  in_stack_00000078 = in_stack_000000a0;
  in_stack_00000090 = in_stack_000000b8;
  in_stack_00000088 = in_stack_000000b0;
  in_stack_00000098 = *(undefined8 *)(unaff_x20 + 0x10);
  thunk_FUN_01b4f09c(&stack0x00000098);
  _uStack0000000000000050 = CONCAT44(fVar20,uStack0000000000000050);
  memcpy(unaff_x24,&stack0x00000050,0x50);
  return;
LAB_01eef100:
  uVar17 = FUN_03486fdc(uVar17,0);
  FUN_034654e4(&stack0x00000040,uVar17,0);
  uVar10 = FUN_0346dce4(&stack0x00000040,0);
  if ((uVar10 & 1) == 0) {
    lVar14 = *(long *)(lVar13 + 0x78);
    if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    uVar17 = *(undefined8 *)(lVar14 + 0x58);
    uVar2 = *(undefined8 *)(lVar14 + 0x60);
    lVar14 = *(long *)StringLiteral_2501;
    if (*(int *)(lVar14 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
      lVar14 = *(long *)StringLiteral_2501;
    }
    uVar10 = FUN_0352f118(*(long *)(lVar14 + 0xb8) + 0x10,in_stack_00000040,in_stack_00000048,uVar17
                          ,uVar2,(long)&stack0x00000038 + 4,0);
    iVar18 = in_stack_00000038._4_4_;
    if ((uVar10 & 1) == 0) goto LAB_01eef1c4;
    if (*(int *)(*(long *)Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    iVar9 = -iVar18;
    if (-1 < iVar18) {
      iVar9 = iVar18;
    }
    fVar20 = fVar20 + 1.0 / (float)(iVar9 + 1) + 1.0;
  }
  else {
LAB_01eef1c4:
    fVar20 = fVar20 + 1.0;
  }
LAB_01eef1c8:
  uVar10 = uVar19 + 1;
  if ((long)uVar10 < (long)(int)unaff_w23) {
    lVar14 = *(long *)(unaff_x20 + 0x10);
    if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    if (*(uint *)(lVar14 + 0x18) <= uVar10) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48180();
    }
    uVar10 = FUN_0347aa34(lVar14 + uVar10 * 0x10 + 0x20,0);
    if ((uVar10 & 1) != 0) {
      bVar3 = bVar3 | lVar13 == 0 & (bVar8 ^ 1);
      bVar4 = bVar4 | lVar13 != 0;
      goto LAB_01eef2d8;
    }
  }
  if (uVar19 == unaff_w23 - 1 && ((bVar7 ^ 0xff) & 1) == 0) {
    if (lVar13 != 0) goto LAB_01eef2d8;
  }
  else {
    bVar1 = bVar1 & (bVar8 ^ 1 | lVar13 != 0);
    bVar15 = bVar15 & (bVar8 | lVar13 != 0);
    if (uVar19 == 0) goto LAB_01eef2d8;
    lVar14 = *(long *)(unaff_x20 + 0x10);
    if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    if (*(uint *)(lVar14 + 0x18) <= (uint)(uVar19 - 1)) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48180();
    }
    uVar10 = FUN_0347aa34(lVar14 + (uVar19 - 1) * 0x10 + 0x20,0);
    if ((uVar10 & 1) == 0) goto LAB_01eef2d8;
    if (bVar4 != 0) {
      bVar4 = 0;
      goto LAB_01eef2d8;
    }
    bVar4 = 0;
  }
  bVar1 = bVar3 & bVar1;
  bVar15 = bVar15 & (bVar3 ^ 1);
LAB_01eef2d8:
  FUN_029940fc(&stack0x000000a0,lVar13,*(undefined8 *)StringLiteral_2517);
LAB_01eef2f0:
  uVar19 = uVar19 + 1;
  if (uVar19 == unaff_w23) goto code_r0x01eef2fc;
  goto LAB_01eeeea8;
code_r0x01eef2fc:
  if (bVar1 == 0) {
    uVar12 = 2;
    goto LAB_01eef358;
  }
  goto LAB_01eef348;
}


