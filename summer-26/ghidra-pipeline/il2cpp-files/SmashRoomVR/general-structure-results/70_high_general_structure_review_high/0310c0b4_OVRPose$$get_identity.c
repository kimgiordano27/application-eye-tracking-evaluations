/*
FUNCTION_NAME: OVRPose$$get_identity
ENTRY_POINT: 0310c0b4
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_1;paired_field_refs_with_structure_only;telemetry_or_network_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x0310c870) */

undefined8 OVRPose__get_identity(long param_1,long param_2)

{
  char cVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  byte bVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  int *piVar9;
  undefined8 uVar10;
  long *plVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  float fVar19;
  float fVar20;
  ulong uVar21;
  float fVar22;
  float fVar23;
  undefined8 uVar24;
  float fVar25;
  undefined8 in_stack_00000010;
  undefined4 in_stack_00000018;
  undefined4 uStack000000000000001c;
  undefined4 in_stack_00000020;
  undefined4 uStack0000000000000024;
  undefined4 in_stack_00000028;
  ulong in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined4 in_stack_00000048;
  
  puVar2 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
                    /* try { // try from 0310c0dc to 0320c0e7 has its CatchHandler @ 0310c180 */
                    /* try { // try from 0310c0e8 to 0320c16f has its CatchHandler @ 0310bfcc */
  if ((DAT_03ff1cd9 & 1) == 0) {
    thunk_FUN_01ad9084(StringLiteral_13849);
    thunk_FUN_01ad9084(StringLiteral_13851);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03ff1cd9 = 1;
  }
  in_stack_00000030 = 0;
  in_stack_00000038 = 0;
  in_stack_00000048 = 0;
  in_stack_00000040 = 0;
  in_stack_00000010 = 0;
  in_stack_00000018 = 0;
  uStack000000000000001c = 0;
  in_stack_00000028 = 0;
  in_stack_00000020 = 0;
  uStack0000000000000024 = 0;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar6 = FUN_03922f24(param_2,0,0);
  if ((uVar6 & 1) != 0) {
    return 0;
  }
  if (*(long *)(param_1 + 0x200) == 0) goto LAB_0310ca1c;
  uVar6 = FUN_03109560(*(long *)(param_1 + 0x200),param_2,&stack0x00000030);
  if ((uVar6 & 1) == 0) {
    return 0;
  }
  fVar12 = (float)FUN_0310b934(*(undefined4 *)(param_1 + 0x150),*(undefined4 *)(param_1 + 0x154),
                               *(undefined4 *)(param_1 + 0x158),param_1,param_2);
  if (*(float *)(param_1 + 0x124) < fVar12) {
    return 0;
  }
  cVar1 = *(char *)(param_1 + 0x1b0);
  uVar10 = *(undefined8 *)(param_1 + 0x170);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar6 = FUN_03922f24(uVar10,0,0);
  if ((uVar6 & 1) == 0) {
    bVar5 = 0;
  }
  else {
    uVar10 = *(undefined8 *)(param_1 + 0x178);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    bVar5 = FUN_0391f968(uVar10,0,0);
    bVar5 = bVar5 & 1;
  }
  *(byte *)(param_1 + 0x1b0) = bVar5;
  puVar2 = StringLiteral_13849;
  if ((param_2 == 0) || (plVar11 = *(long **)(param_2 + 0xd0), plVar11 == (long *)0x0))
  goto LAB_0310ca1c;
  lVar8 = *plVar11;
  uVar21 = in_stack_00000030 & 0xffffffff;
  fVar12 = (float)(in_stack_00000030 >> 0x20);
  fVar20 = (float)in_stack_00000038;
  uVar6 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar6 != 0) {
    piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *(long *)StringLiteral_13849) {
        puVar7 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
        goto LAB_0310c28c;
      }
      uVar6 = uVar6 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar6 != 0);
  }
  puVar7 = (undefined8 *)FUN_01ae9f78(plVar11,*(long *)StringLiteral_13849,0);
LAB_0310c28c:
  plVar11 = (long *)(*(code *)*puVar7)(plVar11,puVar7[1]);
  puVar4 = StringLiteral_13851;
  if (plVar11 == (long *)0x0) goto LAB_0310ca1c;
  lVar8 = *plVar11;
  uVar6 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar6 != 0) {
    piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *(long *)StringLiteral_13851) {
        puVar7 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
        goto LAB_0310c2f4;
      }
      uVar6 = uVar6 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar6 != 0);
  }
  puVar7 = (undefined8 *)FUN_01ae9f78(plVar11,*(long *)StringLiteral_13851,0);
LAB_0310c2f4:
  lVar8 = (*(code *)*puVar7)(plVar11,puVar7[1]);
  if (lVar8 == 0) goto LAB_0310ca1c;
  fVar13 = (float)FUN_0392a520(uVar21,lVar8,0);
  if (*(long *)(param_2 + 0xf8) == 0) goto LAB_0310ca1c;
  if (*(char *)(*(long *)(param_2 + 0xf8) + 0x10) == '\0') {
LAB_0310c658:
    *(float *)(param_1 + 0x198) = fVar13;
    *(float *)(param_1 + 0x19c) = fVar12;
    *(float *)(param_1 + 0x1a0) = fVar20;
  }
  else {
    fVar14 = (float)FUN_031094c4(*(undefined4 *)(param_1 + 0x150),*(undefined4 *)(param_1 + 0x154),
                                 *(undefined4 *)(param_1 + 0x158),param_1,param_2);
    fVar15 = (float)FUN_031094c4(*(undefined4 *)(param_1 + 0x15c),*(undefined4 *)(param_1 + 0x160),
                                 *(undefined4 *)(param_1 + 0x164),param_1,param_2);
    plVar11 = *(long **)(param_2 + 0xd0);
    if (plVar11 == (long *)0x0) goto LAB_0310ca1c;
    lVar8 = *plVar11;
    fVar25 = *(float *)(param_1 + 0x180);
    fVar23 = *(float *)(param_1 + 0x184);
    fVar22 = *(float *)(param_1 + 0x188);
    uVar6 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar6 != 0) {
      piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
          puVar7 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_0310c3d0;
        }
        uVar6 = uVar6 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar6 != 0);
    }
    puVar7 = (undefined8 *)FUN_01ae9f78(plVar11,*(long *)puVar2,0);
LAB_0310c3d0:
    plVar11 = (long *)(*(code *)*puVar7)(plVar11,puVar7[1]);
    if (plVar11 == (long *)0x0) goto LAB_0310ca1c;
    lVar8 = *plVar11;
    uVar6 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar6 != 0) {
      piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar4) {
          puVar7 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_0310c430;
        }
        uVar6 = uVar6 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar6 != 0);
    }
    puVar7 = (undefined8 *)FUN_01ae9f78(plVar11,*(long *)puVar4,0);
LAB_0310c430:
    lVar8 = (*(code *)*puVar7)(plVar11,puVar7[1]);
    if (lVar8 == 0) goto LAB_0310ca1c;
    fVar23 = fVar12 - fVar23;
    fVar22 = fVar20 - fVar22;
    fVar25 = (float)FUN_0392a354(fVar13 - fVar25,lVar8,0);
    if (DAT_03fed25c == '\0') {
      thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__);
      DAT_03fed25c = '\x01';
    }
    puVar3 = Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__;
    if (*(int *)(*(long *)Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    if (ABS(fVar14 - fVar15) <= SQRT(fVar22 * fVar22 + fVar25 * fVar25 + fVar23 * fVar23)) {
LAB_0310c4d0:
      if (*(char *)(param_1 + 0x1b1) == '\0') {
        plVar11 = *(long **)(param_2 + 0xd0);
        if (plVar11 == (long *)0x0) goto LAB_0310ca1c;
        lVar8 = *plVar11;
        fVar23 = *(float *)(param_1 + 0x1c8);
        fVar14 = *(float *)(param_1 + 0x1cc);
        fVar15 = *(float *)(param_1 + 0x1d0);
        uVar6 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar6 != 0) {
          piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
              puVar7 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_0310c554;
            }
            uVar6 = uVar6 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar6 != 0);
        }
        puVar7 = (undefined8 *)FUN_01ae9f78(plVar11,*(long *)puVar2,0);
LAB_0310c554:
        plVar11 = (long *)(*(code *)*puVar7)(plVar11,puVar7[1]);
        if (plVar11 == (long *)0x0) goto LAB_0310ca1c;
        lVar8 = *plVar11;
        uVar6 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar6 != 0) {
          piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *(long *)puVar4) {
              puVar7 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_0310c5b4;
            }
            uVar6 = uVar6 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar6 != 0);
        }
        puVar7 = (undefined8 *)FUN_01ae9f78(plVar11,*(long *)puVar4,0);
LAB_0310c5b4:
        lVar8 = (*(code *)*puVar7)(plVar11,puVar7[1]);
        if (lVar8 == 0) goto LAB_0310ca1c;
        fVar14 = fVar12 - fVar14;
        fVar15 = fVar20 - fVar15;
        fVar23 = (float)FUN_0392a354(fVar13 - fVar23,lVar8,0);
        if (DAT_03fed25c == '\0') {
          thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__
                            );
          DAT_03fed25c = '\x01';
        }
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        if (*(long *)(param_2 + 0xf8) == 0) goto LAB_0310ca1c;
        if (SQRT(fVar15 * fVar15 + fVar23 * fVar23 + fVar14 * fVar14) <=
            *(float *)(*(long *)(param_2 + 0xf8) + 0x18)) goto LAB_0310c664;
        *(undefined1 *)(param_1 + 0x1b1) = 1;
        if (*(long *)(param_1 + 0x1b8) == 0) goto LAB_0310ca1c;
        FUN_0313812c(*(long *)(param_1 + 0x1b8),0);
        *(undefined4 *)(param_1 + 0x210) = 0;
      }
      goto LAB_0310c658;
    }
    if (*(long *)(param_2 + 0xf8) == 0) goto LAB_0310ca1c;
    if (ABS(fVar14 - fVar15) <= *(float *)(*(long *)(param_2 + 0xf8) + 0x14)) goto LAB_0310c4d0;
    *(float *)(param_1 + 0x1c8) = fVar13;
    *(float *)(param_1 + 0x1cc) = fVar12;
    *(float *)(param_1 + 0x1d0) = fVar20;
    if (*(char *)(param_1 + 0x1b1) != '\0') {
      *(undefined1 *)(param_1 + 0x1b1) = 0;
    }
  }
LAB_0310c664:
  if (*(long *)(param_2 + 0x100) == 0) goto LAB_0310ca1c;
  uVar10 = *(undefined8 *)(param_1 + 0x198);
  fVar14 = *(float *)(param_1 + 0x1a0);
  if (*(char *)(*(long *)(param_2 + 0x100) + 0x10) != '\0') {
    fVar15 = (float)((ulong)uVar10 >> 0x20);
    if (*(char *)(param_1 + 0x1b0) == '\0') {
      plVar11 = *(long **)(param_2 + 0xd0);
      if (plVar11 == (long *)0x0) goto LAB_0310ca1c;
      lVar8 = *plVar11;
      uVar24 = *(undefined8 *)(param_1 + 0x18c);
      fVar23 = *(float *)(param_1 + 0x194);
      uVar6 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar6 != 0) {
        piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
            puVar7 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_0310c750;
          }
          uVar6 = uVar6 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar6 != 0);
      }
      puVar7 = (undefined8 *)FUN_01ae9f78(plVar11,*(long *)puVar2,0);
LAB_0310c750:
      plVar11 = (long *)(*(code *)*puVar7)(plVar11,puVar7[1]);
      if (plVar11 == (long *)0x0) goto LAB_0310ca1c;
      lVar8 = *plVar11;
      uVar6 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar6 != 0) {
        piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)puVar4) {
            puVar7 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_0310c7b0;
          }
          uVar6 = uVar6 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar6 != 0);
      }
      puVar7 = (undefined8 *)FUN_01ae9f78(plVar11,*(long *)puVar4,0);
LAB_0310c7b0:
      lVar8 = (*(code *)*puVar7)(plVar11,puVar7[1]);
      if (lVar8 == 0) goto LAB_0310ca1c;
      fVar15 = fVar15 - (float)((ulong)uVar24 >> 0x20);
      fVar14 = fVar14 - fVar23;
      fVar23 = fVar15;
      fVar22 = fVar14;
      fVar25 = (float)FUN_0392a354(lVar8,0);
      if (DAT_03fed25c == '\0') {
        thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__);
        DAT_03fed25c = '\x01';
      }
      if (*(int *)(*(long *)Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__
                  + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      fVar23 = SQRT(fVar22 * fVar22 + fVar25 * fVar25 + fVar23 * fVar23);
      if (fVar23 <= *(float *)(param_1 + 0x1d4)) {
        fVar23 = *(float *)(param_1 + 0x1d4);
      }
      *(float *)(param_1 + 0x1d4) = fVar23;
      lVar8 = *(long *)(param_2 + 0x100);
      if (lVar8 == 0) goto LAB_0310ca1c;
      fVar22 = 1.0;
      if (*(float *)(lVar8 + 0x14) != 0.0) {
        if (*(long *)(lVar8 + 0x18) == 0) goto LAB_0310ca1c;
        fVar23 = fVar23 / *(float *)(lVar8 + 0x14);
        if (fVar23 < 0.0) {
          fVar23 = 0.0;
        }
        fVar22 = (float)FUN_038ee05c(fVar23,*(long *)(lVar8 + 0x18),0);
      }
      uVar10 = CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x18c) >> 0x20) + fVar15 * fVar22,
                        (float)*(undefined8 *)(param_1 + 0x18c) +
                        ((float)uVar10 - (float)uVar24) * fVar22);
      fVar14 = fVar14 * fVar22 + *(float *)(param_1 + 0x194);
    }
    else {
      if (cVar1 == '\0') {
        if (*(long *)(param_1 + 0x1c0) == 0) goto LAB_0310ca1c;
        FUN_0313812c(*(long *)(param_1 + 0x1c0),0);
        *(undefined4 *)(param_1 + 0x214) = 0;
      }
      if (*(long *)(param_1 + 0x1c0) == 0) goto LAB_0310ca1c;
      fVar23 = (float)FUN_0313815c(*(long *)(param_1 + 0x1c0),0);
      if (fVar23 != 1.0) {
        fVar22 = *(float *)(param_1 + 0x214);
        *(float *)(param_1 + 0x214) = fVar23;
        fVar25 = (float)*(undefined8 *)(param_1 + 0x1a4);
        fVar19 = (float)((ulong)*(undefined8 *)(param_1 + 0x1a4) >> 0x20);
        fVar23 = (fVar23 - fVar22) / (1.0 - fVar22);
        uVar10 = CONCAT44(fVar19 + (fVar15 - fVar19) * fVar23,
                          fVar25 + ((float)uVar10 - fVar25) * fVar23);
        fVar14 = *(float *)(param_1 + 0x1ac) + fVar23 * (fVar14 - *(float *)(param_1 + 0x1ac));
      }
    }
  }
  if (*(long *)(param_1 + 0x1b8) != 0) {
    fVar15 = (float)FUN_0313815c(*(long *)(param_1 + 0x1b8),0);
    if (fVar15 == 1.0) {
      *(undefined8 *)(param_1 + 0x1a4) = uVar10;
      *(float *)(param_1 + 0x1ac) = fVar14;
    }
    else {
      fVar22 = (float)*(undefined8 *)(param_1 + 0x1a4);
      fVar25 = (float)((ulong)*(undefined8 *)(param_1 + 0x1a4) >> 0x20);
      fVar23 = (fVar15 - *(float *)(param_1 + 0x210)) / (1.0 - *(float *)(param_1 + 0x210));
      *(ulong *)(param_1 + 0x1a4) =
           CONCAT44(fVar25 + ((float)((ulong)uVar10 >> 0x20) - fVar25) * fVar23,
                    fVar22 + ((float)uVar10 - fVar22) * fVar23);
      *(float *)(param_1 + 0x1ac) =
           *(float *)(param_1 + 0x1ac) + fVar23 * (fVar14 - *(float *)(param_1 + 0x1ac));
      *(float *)(param_1 + 0x210) = fVar15;
    }
    plVar11 = *(long **)(param_2 + 0xd0);
    if (plVar11 != (long *)0x0) {
      lVar8 = *plVar11;
      uVar6 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar6 != 0) {
        piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
            puVar7 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_0310c95c;
          }
          uVar6 = uVar6 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar6 != 0);
      }
      puVar7 = (undefined8 *)FUN_01ae9f78(plVar11,*(long *)puVar2,0);
LAB_0310c95c:
      plVar11 = (long *)(*(code *)*puVar7)(plVar11,puVar7[1]);
      if (plVar11 != (long *)0x0) {
        lVar8 = *plVar11;
        uVar6 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar6 != 0) {
          piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *(long *)puVar4) {
              puVar7 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_0310c9bc;
            }
            uVar6 = uVar6 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar6 != 0);
        }
        puVar7 = (undefined8 *)FUN_01ae9f78(plVar11,*(long *)puVar4,0);
LAB_0310c9bc:
        lVar8 = (*(code *)*puVar7)(plVar11,puVar7[1]);
        if (lVar8 != 0) {
          uVar18 = *(undefined4 *)(param_1 + 0x1ac);
          uVar17 = *(undefined4 *)(param_1 + 0x1a8);
          uVar16 = FUN_03927438(*(undefined4 *)(param_1 + 0x1a4),lVar8,0);
          *(undefined4 *)(param_1 + 0x138) = uVar16;
          *(undefined4 *)(param_1 + 0x13c) = uVar17;
          *(undefined4 *)(param_1 + 0x140) = uVar18;
          FUN_031084bc(param_2,&stack0x00000010);
          *(ulong *)(param_1 + 0x144) = CONCAT44(in_stack_00000020,uStack000000000000001c);
          *(undefined4 *)(param_1 + 0x14c) = uStack0000000000000024;
          *(float *)(param_1 + 0x180) = fVar13;
          *(float *)(param_1 + 0x184) = fVar12;
          *(float *)(param_1 + 0x188) = fVar20;
          return 1;
        }
      }
    }
  }
LAB_0310ca1c:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


