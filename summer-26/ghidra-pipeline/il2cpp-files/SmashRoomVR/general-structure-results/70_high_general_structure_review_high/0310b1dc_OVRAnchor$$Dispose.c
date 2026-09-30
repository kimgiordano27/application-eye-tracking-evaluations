/*
FUNCTION_NAME: OVRAnchor$$Dispose
ENTRY_POINT: 0310b1dc
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_13;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_1;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


long OVRAnchor__Dispose(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  int iVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  float *pfVar15;
  long *unaff_x19;
  long lVar16;
  long lVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined8 uVar23;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined4 in_stack_00000038;
  undefined8 uStack0000000000000040;
  undefined4 uStack0000000000000048;
  long in_stack_00000050;
  long in_stack_00000058;
  long in_stack_00000060;
  undefined4 uStack0000000000000090;
  undefined8 uStack0000000000000094;
  undefined4 uStack000000000000009c;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  
  puVar1 = StringLiteral_13877;
  uStack0000000000000048 = 0;
  uStack0000000000000040 = 0;
  if (*(int *)(param_1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  lVar16 = *(long *)puVar1;
  lVar12 = *(long *)(lVar16 + 0x20);
  if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
    lVar12 = FUN_01ae9e74();
  }
  lVar12 = *(long *)(*(long *)(lVar12 + 0xc0) + 0x28);
  if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
    lVar12 = FUN_01ae9e74();
  }
  if (*(int *)(lVar12 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  lVar12 = *(long *)(lVar16 + 0x20);
  if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
    lVar12 = FUN_01ae9e74();
  }
  lVar12 = *(long *)(*(long *)(lVar12 + 0xc0) + 0x28);
  if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
    lVar12 = FUN_01ae9e74();
  }
  puVar2 = StringLiteral_13876;
  puVar4 = StringLiteral_13875;
  puVar3 = StringLiteral_13874;
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if ((long *)**(long **)(lVar12 + 0xb8) != (long *)0x0) {
    (**(code **)(*(long *)**(long **)(lVar12 + 0xb8) + 0x198))(&stack0x00000010);
    in_stack_000000e0 = in_stack_00000020;
    in_stack_000000d8 = in_stack_00000018;
    in_stack_000000d0 = in_stack_00000010;
    FUN_029b86b8(&stack0x00000010,&stack0x000000d0,*(undefined8 *)puVar2);
    puVar2 = Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__;
    in_stack_000000b8 = in_stack_00000018;
    in_stack_000000b0 = in_stack_00000010;
    in_stack_000000c8 = in_stack_00000028;
    in_stack_000000c0 = in_stack_00000020;
    lVar12 = 0;
    fVar9 = 3.4028235e+38;
    fVar10 = 3.4028235e+38;
LAB_0310b2dc:
    fVar18 = fVar10;
    fVar19 = fVar9;
    lVar16 = lVar12;
    uVar13 = FUN_0277ceb0(&stack0x000000b0,*(undefined8 *)puVar3);
    if ((uVar13 & 1) != 0) {
      lVar14 = FUN_0277cd6c(&stack0x000000b0,*(undefined8 *)puVar4);
      uVar13 = FUN_031099fc();
      lVar12 = lVar16;
      fVar9 = fVar19;
      fVar10 = fVar18;
      if ((uVar13 & 1) != 0) {
        if (unaff_x19[0x40] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48178();
        }
        uVar13 = FUN_03109560(unaff_x19[0x40],lVar14,&stack0x00000090);
        if ((uVar13 & 1) != 0) {
          if (unaff_x19[0x40] == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01b48178();
          }
          uVar13 = FUN_031097f4(unaff_x19[0x40],lVar14,&stack0x00000070);
          if (((uVar13 & 1) != 0) &&
             ((uVar13 = FUN_0310b844((int)unaff_x19[0x2a],*(undefined4 *)((long)unaff_x19 + 0x154),
                                     (int)unaff_x19[0x2b]), (uVar13 & 1) != 0 ||
              (uVar13 = FUN_0310b844(*(undefined4 *)((long)unaff_x19 + 0x15c),(int)unaff_x19[0x2c],
                                     *(undefined4 *)((long)unaff_x19 + 0x164)), (uVar13 & 1) != 0)))
             ) {
            uVar8 = in_stack_000000a0;
            uVar7 = uStack000000000000009c;
            uVar6 = uStack0000000000000094;
            uVar5 = uStack0000000000000090;
            fVar22 = *(float *)(unaff_x19 + 0x2a);
            uVar23 = *(undefined8 *)((long)unaff_x19 + 0x154);
            if (DAT_03fed25c == '\0') {
              thunk_FUN_01ad9084(puVar2);
              DAT_03fed25c = '\x01';
            }
            if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
            }
            fVar22 = fVar22 - (float)uVar5;
            fVar20 = (float)uVar23 - (float)uVar6;
            fVar21 = (float)((ulong)uVar23 >> 0x20) - SUB84(uVar6,4);
            if ((SQRT(fVar22 * fVar22 + fVar20 * fVar20 + fVar21 * fVar21) != 0.0) &&
               (0.0 < (float)((ulong)uVar8 >> 0x20) * fVar21 +
                      (float)uVar7 * fVar22 + (float)uVar8 * fVar20)) {
              fVar22 = (float)FUN_0310b934((int)unaff_x19[0x2a],
                                           *(undefined4 *)((long)unaff_x19 + 0x154),
                                           (int)unaff_x19[0x2b]);
              lVar17 = unaff_x19[0x2d];
              if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                thunk_FUN_01ac7298();
              }
              uVar13 = FUN_0391f968(lVar17,lVar14,0);
              if ((uVar13 & 1) == 0) {
                if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01b48178();
                }
                pfVar15 = (float *)(lVar14 + 0xe0);
              }
              else {
                if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01b48178();
                }
                pfVar15 = (float *)(lVar14 + 0xd8);
              }
              if (fVar22 <= *pfVar15) {
                fVar20 = (float)FUN_0310b958((int)unaff_x19[0x2a],
                                             *(undefined4 *)((long)unaff_x19 + 0x154),
                                             (int)unaff_x19[0x2b]);
                lVar17 = unaff_x19[0x2d];
                if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                  thunk_FUN_01ac7298();
                }
                uVar13 = FUN_0391f968(lVar17,lVar14,0);
                lVar17 = 0xdc;
                if ((uVar13 & 1) == 0) {
                  lVar17 = 0xe4;
                }
                if (fVar20 <= *(float *)(lVar14 + lVar17)) {
                  if (ABS(fVar22 - fVar19) < *(float *)(unaff_x19 + 0x25)) {
                    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                      thunk_FUN_01ac7298();
                    }
                    uVar13 = FUN_0391f968(lVar16,0,0);
                    if (((uVar13 & 1) != 0) &&
                       (iVar11 = (**(code **)(*unaff_x19 + 0x548))(), lVar12 = lVar14,
                       fVar9 = fVar22, fVar10 = fVar20, 0 < iVar11)) goto LAB_0310b2dc;
                  }
                  lVar12 = lVar16;
                  fVar9 = fVar19;
                  fVar10 = fVar18;
                  if (fVar22 <= fVar19 + *(float *)(lVar14 + 0x110)) {
                    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                      thunk_FUN_01ac7298();
                    }
                    uVar13 = FUN_03922f24(lVar16,0,0);
                    lVar12 = lVar14;
                    fVar9 = fVar22;
                    fVar10 = fVar20;
                    if ((uVar13 & 1) == 0) {
                      if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_01b48178();
                      }
                      if ((fVar19 - *(float *)(lVar16 + 0x110) <= fVar22) &&
                         (lVar12 = lVar16, fVar9 = fVar19, fVar10 = fVar18, fVar20 < fVar18)) {
                        lVar12 = lVar14;
                        fVar9 = fVar22;
                        fVar10 = fVar20;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      goto LAB_0310b2dc;
    }
    FUN_0277d14c(&stack0x000000b0,*(undefined8 *)StringLiteral_13873);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar13 = FUN_0391f968(lVar16,0,0);
    if ((uVar13 & 1) == 0) {
      return lVar16;
    }
    if (unaff_x19[0x40] != 0) {
      FUN_03109560(unaff_x19[0x40],lVar16,&stack0x00000050);
      if (unaff_x19[0x40] != 0) {
        FUN_031097f4(unaff_x19[0x40],lVar16,&stack0x00000030);
        *(undefined8 *)((long)unaff_x19 + 300) = in_stack_00000030;
        *(undefined4 *)((long)unaff_x19 + 0x134) = in_stack_00000038;
        unaff_x19[0x28] = in_stack_00000058;
        unaff_x19[0x27] = in_stack_00000050;
        unaff_x19[0x29] = in_stack_00000060;
        return lVar16;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


