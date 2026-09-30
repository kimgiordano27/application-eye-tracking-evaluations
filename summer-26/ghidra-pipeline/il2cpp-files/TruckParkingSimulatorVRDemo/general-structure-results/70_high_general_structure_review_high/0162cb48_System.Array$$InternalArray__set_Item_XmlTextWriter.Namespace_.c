/*
FUNCTION_NAME: System.Array$$InternalArray__set_Item<XmlTextWriter.Namespace>
ENTRY_POINT: 0162cb48
PROGRAM: TruckParkingSimulatorVRDemo-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;data_collection
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;strong_file_logging_hits_2
*/


void System_Array__InternalArray__set_Item<XmlTextWriter_Namespace>
               (long param_1,undefined1 param_2 [16],ulong param_3,ulong param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined4 *puVar10;
  long lVar11;
  long unaff_x19;
  long unaff_x20;
  int iVar12;
  long unaff_x21;
  undefined8 *puVar13;
  long lVar14;
  ulong unaff_x23;
  undefined8 *unaff_x24;
  undefined8 uVar15;
  undefined8 *unaff_x25;
  long *unaff_x26;
  undefined8 uVar16;
  long lVar17;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  long *unaff_x29;
  undefined4 uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  uint uVar23;
  float fVar24;
  float fVar25;
  uint uVar26;
  long *in_stack_00000038;
  long *in_stack_00000040;
  long in_stack_00000050;
  long in_stack_00000058;
  long in_stack_00000088;
  
  puVar13 = *(undefined8 **)(unaff_x21 + 0x668);
  if ((unaff_x23 & 1) == 0) {
    *(undefined1 *)(param_1 + 0x1b8) = 0;
  }
  else {
    *(undefined1 *)(param_1 + 0x1b8) = 1;
    FUN_015e22b4();
  }
  if (*(int *)(unaff_x19 + 0x2a0) != 0) {
    FUN_015e2d88();
  }
  if ((unaff_x20 != 0) && (FUN_02745dd0(), in_stack_00000058 != 0)) {
    FUN_02744158();
    if (*in_stack_00000038 != 0) {
      FUN_01d2e9e0(*in_stack_00000038,*(undefined8 *)PTR_DAT_02abf688);
      FUN_027448bc();
      if (in_stack_00000088 != 0) {
        FUN_01d29bc8(in_stack_00000088,*puVar13);
        FUN_02744ac0();
        if (in_stack_00000088 != 0) {
          FUN_01d29bc8(in_stack_00000088,*puVar13);
          FUN_02744b6c();
          lVar6 = FUN_02744870();
          if (lVar6 != 0) {
            FUN_01219524(*(undefined8 *)PTR_DAT_02abf8d0,*(undefined4 *)(lVar6 + 0x18));
            FUN_02744a14();
            if (in_stack_00000058 != 0) {
              iVar12 = 0;
              do {
                if (*(int *)(in_stack_00000058 + 0x18) <= iVar12) {
                  FUN_02745e10();
                  FUN_02745f0c();
                  if (*(char *)(unaff_x19 + 0x2d0) == '\0') {
                    if (*unaff_x26 == 0) break;
                    if (*(char *)(*unaff_x26 + 0x11c) != '\0') goto LAB_0162ccf8;
                  }
                  else {
LAB_0162ccf8:
                    FUN_0274491c();
                    FUN_016b76ec();
                    FUN_02744968();
                  }
                  FUN_02746008();
                  lVar6 = FUN_0275a948();
                  if ((lVar6 != 0) &&
                     (lVar6 = FUN_01792500(lVar6,*(undefined8 *)PTR_DAT_02ac1058), lVar6 != 0)) {
                    FUN_0279902c(lVar6,0,0);
                    lVar6 = FUN_0275a948();
                    if ((lVar6 != 0) &&
                       (lVar6 = FUN_01792500(lVar6,*(undefined8 *)PTR_DAT_02ac1058), lVar6 != 0)) {
                      FUN_0279902c();
                      lVar6 = FUN_0275a948();
                      if (((lVar6 != 0) &&
                          (lVar6 = FUN_01792500(lVar6,*(undefined8 *)PTR_DAT_02abb1d8),
                          in_stack_00000050 != 0)) &&
                         (uVar7 = FUN_01cdcb50(in_stack_00000050,*(undefined8 *)PTR_DAT_02abd648),
                         lVar6 != 0)) {
                        FUN_027417dc(lVar6,uVar7,0);
                        lVar6 = *unaff_x26;
                        if (lVar6 != 0) {
                          *(undefined1 *)(lVar6 + 0xd9) = 1;
                          *(long *)(lVar6 + 0xf0) = unaff_x19;
                          if (*(long *)(unaff_x19 + 0x88) != 0) {
                            uVar7 = FUN_01d2e9e0(*(long *)(unaff_x19 + 0x88),
                                                 *(undefined8 *)PTR_DAT_02abf688);
                            *(undefined8 *)(lVar6 + 0x48) = uVar7;
                            *(undefined8 *)(lVar6 + 0x50) = uVar7;
                            *(undefined8 *)(lVar6 + 0x38) = uVar7;
                            *(undefined8 *)(lVar6 + 0x40) = uVar7;
                            puVar4 = PTR_DAT_02ab7858;
                            lVar6 = *unaff_x29;
                            if (lVar6 != 0) {
                              iVar12 = 0;
                              goto LAB_0162ce30;
                            }
                          }
                        }
                      }
                    }
                  }
                  break;
                }
                lVar6 = FUN_01cdae58(in_stack_00000058,iVar12,*unaff_x24);
                if (lVar6 == 0) break;
                FUN_01cbbe34(lVar6,*unaff_x25);
                FUN_02745b40();
                iVar12 = iVar12 + 1;
              } while (in_stack_00000058 != 0);
            }
          }
        }
      }
    }
  }
  goto LAB_0162d6fc;
  while( true ) {
    lVar6 = FUN_01cdae58(lVar6,iVar12,*unaff_x28);
    if (lVar6 == 0) break;
    if (*(char *)(lVar6 + 0x150) != '\0') {
      if ((*unaff_x29 == 0) || (lVar6 = FUN_01cdae58(*unaff_x29,iVar12,*unaff_x28), lVar6 == 0))
      break;
      if (*(char *)(lVar6 + 0x151) != '\0') {
        lVar6 = *unaff_x26;
        if ((lVar6 == 0) || (lVar14 = *(long *)(lVar6 + 0x20), lVar14 == 0)) break;
        if (*(int *)(lVar14 + 0x18) <= iVar12) {
          uVar7 = thunk_FUN_01268e40(*(undefined8 *)PTR_DAT_02ac1020);
          FUN_01688390(uVar7,0);
          lVar6 = *(long *)(lVar14 + 0x10);
          lVar11 = *(long *)PTR_DAT_02ac0fd8;
          *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
          if (lVar6 == 0) break;
          uVar23 = *(uint *)(lVar14 + 0x18);
          if (uVar23 < *(uint *)(lVar6 + 0x18)) {
            *(uint *)(lVar14 + 0x18) = uVar23 + 1;
            *(undefined8 *)(lVar6 + (long)(int)uVar23 * 8 + 0x20) = uVar7;
          }
          else {
            FUN_01cdb11c(lVar14,uVar7,
                         *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
          }
          if (*unaff_x29 == 0) break;
          lVar14 = FUN_01cdae58(*unaff_x29,iVar12,*unaff_x28);
          lVar6 = *unaff_x26;
          if (((lVar6 == 0) || (*(long *)(lVar6 + 0x20) == 0)) || (lVar14 == 0)) break;
          *(int *)(lVar14 + 0x168) = *(int *)(*(long *)(lVar6 + 0x20) + 0x18) + -1;
        }
        lVar6 = *(long *)(lVar6 + 0x28);
        if (lVar6 == 0) break;
        if (*(int *)(lVar6 + 0x18) <= iVar12) {
          uVar15 = *(undefined8 *)(unaff_x19 + 0x2b8);
          uVar7 = thunk_FUN_01268e40(*(undefined8 *)PTR_DAT_02ac1028);
          FUN_015a921c(uVar7,uVar15,0);
          lVar14 = *(long *)(lVar6 + 0x10);
          lVar11 = *(long *)PTR_DAT_02ac0fe8;
          *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
          if (lVar14 == 0) break;
          uVar23 = *(uint *)(lVar6 + 0x18);
          if (uVar23 < *(uint *)(lVar14 + 0x18)) {
            *(uint *)(lVar6 + 0x18) = uVar23 + 1;
            *(undefined8 *)(lVar14 + (long)(int)uVar23 * 8 + 0x20) = uVar7;
          }
          else {
            FUN_01cdb11c(lVar6,uVar7,
                         *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
          }
        }
        if ((*unaff_x26 == 0) || (lVar6 = *(long *)(*unaff_x26 + 0x20), lVar6 == 0)) break;
        lVar6 = FUN_01cdae58(lVar6,iVar12,*unaff_x27);
        if ((*unaff_x29 == 0) ||
           ((lVar14 = FUN_01cdae58(*unaff_x29,iVar12,*unaff_x28), lVar14 == 0 || (lVar6 == 0))))
        break;
        uVar18 = *(undefined4 *)(lVar14 + 0x184);
        fVar21 = *(float *)(lVar14 + 0x188);
        fVar24 = *(float *)(lVar14 + 0x180);
        *(undefined4 *)(lVar6 + 0x20) = uVar18;
        *(float *)(lVar6 + 0x24) = fVar21;
        *(float *)(lVar6 + 0x10) = fVar24;
        *(undefined4 *)(lVar6 + 0x14) = uVar18;
        *(float *)(lVar6 + 0x18) = fVar21;
        *(float *)(lVar6 + 0x1c) = fVar24;
        if ((*unaff_x29 == 0) || (lVar14 = FUN_01cdae58(*unaff_x29,iVar12,*unaff_x28), lVar14 == 0))
        break;
        uVar7 = *(undefined8 *)(lVar14 + 0x134);
        *(undefined4 *)(lVar6 + 0x50) = *(undefined4 *)(lVar14 + 0x13c);
        *(undefined8 *)(lVar6 + 0x48) = uVar7;
        if ((((((*unaff_x29 == 0) ||
               (lVar14 = FUN_01cdae58(*unaff_x29,iVar12,*unaff_x28), lVar14 == 0)) ||
              (*unaff_x29 == 0)) ||
             ((lVar14 = FUN_01cdae58(*unaff_x29,iVar12,*unaff_x28), lVar14 == 0 || (*unaff_x29 == 0)
              ))) || (lVar14 = FUN_01cdae58(*unaff_x29,iVar12,*unaff_x28), lVar14 == 0)) ||
           ((*unaff_x29 == 0 || (lVar14 = FUN_01cdae58(*unaff_x29,iVar12,*unaff_x28), lVar14 == 0)))
           ) break;
        FUN_0163476c();
        if ((((*(long *)(unaff_x19 + 0x2a8) == 0) ||
             (((lVar14 = *(long *)(*(long *)(unaff_x19 + 0x2a8) + 0x20), lVar14 == 0 ||
               (lVar14 = FUN_01cdae58(lVar14,iVar12,*unaff_x27), lVar14 == 0)) || (*unaff_x26 == 0))
             )) || (((lVar14 = *(long *)(*unaff_x26 + 0x20), lVar14 == 0 ||
                     (lVar14 = FUN_01cdae58(lVar14,iVar12,*unaff_x27), lVar14 == 0)) ||
                    (*unaff_x29 == 0)))) ||
           (((lVar14 = FUN_01cdae58(*unaff_x29,iVar12,*unaff_x28), lVar14 == 0 || (*unaff_x29 == 0))
            || ((lVar14 = FUN_01cdae58(*unaff_x29,iVar12,*unaff_x28), lVar14 == 0 ||
                ((*unaff_x29 == 0 ||
                 (lVar14 = FUN_01cdae58(*unaff_x29,iVar12,*unaff_x28), lVar14 == 0)))))))) break;
        FUN_01634e40();
        if ((*(long *)(unaff_x19 + 0x2a8) == 0) ||
           (lVar14 = *(long *)(*(long *)(unaff_x19 + 0x2a8) + 0x20), lVar14 == 0)) break;
        lVar14 = FUN_01cdae58(lVar14,iVar12,*unaff_x27);
        if ((((*unaff_x26 == 0) || (lVar11 = *(long *)(*unaff_x26 + 0x20), lVar11 == 0)) ||
            (lVar11 = FUN_01cdae58(lVar11,iVar12,*unaff_x27), lVar11 == 0)) ||
           ((*unaff_x26 == 0 || (lVar9 = *(long *)(*unaff_x26 + 0x20), lVar9 == 0)))) break;
        uVar7 = *(undefined8 *)(lVar11 + 0x90);
        lVar11 = FUN_01cdae58(lVar9,iVar12,*unaff_x27);
        if ((lVar11 == 0) ||
           ((*unaff_x26 == 0 || (lVar9 = *(long *)(*unaff_x26 + 0x20), lVar9 == 0)))) break;
        uVar15 = *(undefined8 *)(lVar11 + 200);
        lVar11 = FUN_01cdae58(lVar9,iVar12,*unaff_x27);
        if ((lVar11 == 0) ||
           ((*unaff_x26 == 0 || (lVar9 = *(long *)(*unaff_x26 + 0x20), lVar9 == 0)))) break;
        uVar16 = *(undefined8 *)(lVar11 + 0xe0);
        lVar11 = FUN_01cdae58(lVar9,iVar12,*unaff_x27);
        if ((lVar11 == 0) ||
           (uVar7 = FUN_014c1094(uVar7,uVar15,uVar16,lVar11 + 0xa0,0), lVar14 == 0)) break;
        *(undefined8 *)(lVar14 + 0x98) = uVar7;
        if ((((((*unaff_x29 == 0) ||
               (lVar14 = FUN_01cdae58(*unaff_x29,iVar12,*unaff_x28), lVar14 == 0)) ||
              (*unaff_x29 == 0)) ||
             ((lVar14 = FUN_01cdae58(*unaff_x29,iVar12,*unaff_x28), lVar14 == 0 ||
              (*(long *)(lVar14 + 0x90) == 0)))) || (*unaff_x29 == 0)) ||
           ((lVar14 = FUN_01cdae58(*unaff_x29,iVar12,*unaff_x28), lVar14 == 0 ||
            (*(long *)(lVar14 + 0x98) == 0)))) break;
        FUN_01635644();
        if ((*(long *)(unaff_x19 + 0x180) == 0) ||
           (lVar14 = FUN_01cdae58(*(long *)(unaff_x19 + 0x180),iVar12,*unaff_x28), lVar14 == 0))
        break;
        *(undefined8 *)(lVar6 + 0x160) = *(undefined8 *)(lVar14 + 0x158);
        if ((*unaff_x29 == 0) || (lVar14 = FUN_01cdae58(*unaff_x29,iVar12,*unaff_x28), lVar14 == 0))
        break;
        *(undefined8 *)(lVar6 + 0x70) = *(undefined8 *)(lVar14 + 0x1b0);
        if ((*unaff_x29 == 0) || (lVar14 = FUN_01cdae58(*unaff_x29,iVar12,*unaff_x28), lVar14 == 0))
        break;
        *(undefined8 *)(lVar6 + 0x78) = *(undefined8 *)(lVar14 + 0x1b8);
        if (*(long *)(unaff_x19 + 0x180) == 0) break;
        lVar11 = *(long *)(unaff_x19 + 0xa0);
        lVar14 = FUN_01cdae58(*(long *)(unaff_x19 + 0x180),iVar12,*unaff_x28);
        if ((lVar14 == 0) || (lVar11 == 0)) break;
        uVar18 = FUN_01d2cbf0(lVar11,*(undefined4 *)(lVar14 + 0x34),*(undefined8 *)PTR_DAT_02abc3f8)
        ;
        *(undefined4 *)(lVar6 + 0x244) = uVar18;
        *(float *)(lVar6 + 0x248) = fVar21;
        *(float *)(lVar6 + 0x24c) = fVar24;
        if ((*unaff_x29 == 0) || (lVar14 = FUN_01cdae58(*unaff_x29,iVar12,*unaff_x28), lVar14 == 0))
        break;
        uVar7 = *(undefined8 *)(lVar14 + 0xf0);
        lVar14 = thunk_FUN_01268e40(*(undefined8 *)PTR_DAT_02abc3e0);
        FUN_01d2c80c(lVar14,uVar7,*(undefined8 *)PTR_DAT_02ac1070);
        if (lVar14 == 0) break;
        FUN_01d2e7b4(lVar14,*(undefined8 *)PTR_DAT_02ac10c8);
        *(long *)(lVar6 + 0x1e0) = lVar14;
        if ((*unaff_x29 == 0) || (lVar14 = FUN_01cdae58(*unaff_x29,iVar12,*unaff_x28), lVar14 == 0))
        break;
        uVar7 = *(undefined8 *)(lVar14 + 0xe8);
        lVar14 = thunk_FUN_01268e40(*(undefined8 *)PTR_DAT_02abc3e0);
        FUN_01d2c80c(lVar14,uVar7,*(undefined8 *)PTR_DAT_02ac1070);
        if (lVar14 == 0) break;
        FUN_01d2e7b4(lVar14,*(undefined8 *)PTR_DAT_02ac10c8);
        *(long *)(lVar6 + 0x1e8) = lVar14;
        if (iVar12 != 0) {
          if ((*in_stack_00000040 == 0) ||
             (lVar14 = *(long *)(*in_stack_00000040 + 0x20), lVar14 == 0)) break;
          iVar3 = iVar12 + -1;
          lVar14 = FUN_01cdae58(lVar14,iVar3,*unaff_x27);
          if ((lVar14 == 0) ||
             ((*in_stack_00000040 == 0 ||
              (lVar11 = *(long *)(*in_stack_00000040 + 0x20), lVar11 == 0)))) break;
          lVar9 = *(long *)(lVar14 + 0x1e0);
          lVar14 = FUN_01cdae58(lVar11,iVar3,*unaff_x27);
          if (((lVar14 == 0) ||
              (((*(long *)(lVar14 + 0x1e0) == 0 || (lVar11 = *(long *)(lVar6 + 0x1e8), lVar11 == 0))
               || (*in_stack_00000040 == 0)))) ||
             (lVar8 = *(long *)(*in_stack_00000040 + 0x20), lVar8 == 0)) break;
          iVar1 = *(int *)(*(long *)(lVar14 + 0x1e0) + 0x18);
          iVar2 = *(int *)(lVar11 + 0x18);
          lVar14 = FUN_01cdae58(lVar8,iVar3,*(undefined8 *)PTR_DAT_02ac0f38);
          if (((lVar14 == 0) || (*in_stack_00000040 == 0)) ||
             (lVar8 = *(long *)(*in_stack_00000040 + 0x20), lVar8 == 0)) break;
          lVar17 = *(long *)(lVar14 + 0x1e0);
          lVar14 = FUN_01cdae58(lVar8,iVar3,*(undefined8 *)PTR_DAT_02ac0f38);
          puVar5 = PTR_DAT_02abc3f8;
          if (((lVar14 == 0) || (*(long *)(lVar14 + 0x1e0) == 0)) || (lVar17 == 0)) break;
          fVar19 = (float)FUN_01d2cbf0(lVar17,*(int *)(*(long *)(lVar14 + 0x1e0) + 0x18) + -1,
                                       *(undefined8 *)PTR_DAT_02abc3f8);
          lVar14 = *(long *)(lVar6 + 0x1e8);
          if (lVar14 == 0) break;
          fVar22 = fVar21;
          fVar25 = fVar24;
          fVar20 = (float)FUN_01d2cbf0(lVar14,*(int *)(lVar14 + 0x18) + -1,*(undefined8 *)puVar5);
          puVar5 = PTR_DAT_02abc410;
          fVar19 = fVar19 + (fVar20 - fVar19) * 0.5;
          fVar21 = fVar21 + (fVar22 - fVar21) * 0.5;
          fVar24 = fVar24 + (fVar25 - fVar24) * 0.5;
          FUN_01d2cc50(fVar19,fVar21,fVar24,lVar11,iVar2 + -1,*(undefined8 *)PTR_DAT_02abc410);
          if (lVar9 == 0) break;
          FUN_01d2cc50(fVar19,fVar21,fVar24,lVar9,iVar1 + -1,*(undefined8 *)puVar5);
          unaff_x27 = (undefined8 *)PTR_DAT_02ac0f38;
          unaff_x28 = (undefined8 *)PTR_DAT_02ac2168;
        }
        if (DAT_02c6bd96 == '\0') {
          thunk_FUN_011f4b58(puVar4);
          DAT_02c6bd96 = '\x01';
        }
        puVar10 = *(undefined4 **)(*(long *)puVar4 + 0xb8);
        uVar18 = *puVar10;
        uVar23 = puVar10[1];
        param_3 = (ulong)uVar23;
        uVar26 = puVar10[2];
        param_4 = (ulong)uVar26;
        *(undefined4 *)(lVar6 + 0x2a0) = uVar18;
        *(uint *)(lVar6 + 0x2a4) = uVar23;
        *(uint *)(lVar6 + 0x2a8) = uVar26;
        *(undefined4 *)(lVar6 + 0x294) = uVar18;
        *(uint *)(lVar6 + 0x298) = uVar23;
        *(uint *)(lVar6 + 0x29c) = uVar26;
        if ((*unaff_x29 == 0) || (lVar14 = FUN_01cdae58(*unaff_x29,iVar12,*unaff_x28), lVar14 == 0))
        break;
        *(undefined8 *)(lVar6 + 600) = *(undefined8 *)(lVar14 + 0x200);
        if ((*unaff_x29 == 0) || (lVar14 = FUN_01cdae58(*unaff_x29,iVar12,*unaff_x28), lVar14 == 0))
        break;
        *(undefined8 *)(lVar6 + 0x268) = *(undefined8 *)(lVar14 + 0x210);
        FUN_01635e24();
        if (((*(long *)(unaff_x19 + 0x2a8) == 0) ||
            (lVar6 = *(long *)(*(long *)(unaff_x19 + 0x2a8) + 0x28), lVar6 == 0)) ||
           (lVar6 = FUN_01cdae58(lVar6,iVar12,*(undefined8 *)PTR_DAT_02ac0f30), lVar6 == 0)) break;
        *(int *)(lVar6 + 0x14) = iVar12;
        if ((*in_stack_00000040 == 0) || (lVar6 = *(long *)(*in_stack_00000040 + 0x28), lVar6 == 0))
        break;
        lVar6 = FUN_01cdae58(lVar6,iVar12,*(undefined8 *)PTR_DAT_02ac0f30);
        if (iVar12 == 0) {
          if ((*unaff_x29 == 0) || (lVar6 == 0)) break;
          iVar3 = *(int *)(*unaff_x29 + 0x18);
        }
        else {
          iVar3 = iVar12;
          if (lVar6 == 0) break;
        }
        *(int *)(lVar6 + 0x10) = iVar3 + -1;
        unaff_x26 = in_stack_00000040;
      }
    }
    lVar6 = *unaff_x29;
    iVar12 = iVar12 + 1;
    if (lVar6 == 0) break;
LAB_0162ce30:
    fVar21 = (float)param_3;
    fVar24 = (float)param_4;
    if (*(int *)(lVar6 + 0x18) <= iVar12) {
      if (((*unaff_x26 == 0) || (lVar6 = *(long *)(*unaff_x26 + 0x20), lVar6 == 0)) ||
         ((lVar6 = FUN_01cdae58(lVar6,*(int *)(lVar6 + 0x18) + -1,*unaff_x27), lVar6 == 0 ||
          ((*unaff_x26 == 0 || (lVar14 = *(long *)(*unaff_x26 + 0x20), lVar14 == 0)))))) break;
      lVar11 = *(long *)(lVar6 + 0x1e0);
      lVar6 = FUN_01cdae58(lVar14,*(int *)(lVar14 + 0x18) + -1,*unaff_x27);
      if ((lVar6 == 0) ||
         (((*(long *)(lVar6 + 0x1e0) == 0 || (*unaff_x26 == 0)) ||
          (lVar14 = *(long *)(*unaff_x26 + 0x20), lVar14 == 0)))) break;
      iVar12 = *(int *)(*(long *)(lVar6 + 0x1e0) + 0x18);
      lVar6 = FUN_01cdae58(lVar14,0,*unaff_x27);
      if (((lVar6 == 0) || (*unaff_x26 == 0)) ||
         (lVar14 = *(long *)(*unaff_x26 + 0x20), lVar14 == 0)) break;
      lVar9 = *(long *)(lVar6 + 0x1e8);
      lVar6 = FUN_01cdae58(lVar14,0,*unaff_x27);
      if (((lVar6 == 0) || (*(long *)(lVar6 + 0x1e8) == 0)) ||
         ((*unaff_x26 == 0 || (lVar14 = *(long *)(*unaff_x26 + 0x20), lVar14 == 0)))) break;
      iVar3 = *(int *)(*(long *)(lVar6 + 0x1e8) + 0x18);
      lVar6 = FUN_01cdae58(lVar14,*(int *)(lVar14 + 0x18) + -1,*unaff_x27);
      if (((lVar6 == 0) || (*unaff_x26 == 0)) ||
         (lVar14 = *(long *)(*unaff_x26 + 0x20), lVar14 == 0)) break;
      lVar8 = *(long *)(lVar6 + 0x1e0);
      lVar6 = FUN_01cdae58(lVar14,*(int *)(lVar14 + 0x18) + -1,*unaff_x27);
      if (((lVar6 == 0) || (*(long *)(lVar6 + 0x1e0) == 0)) || (lVar8 == 0)) break;
      fVar19 = (float)FUN_01d2cbf0(lVar8,*(int *)(*(long *)(lVar6 + 0x1e0) + 0x18) + -1,
                                   *(undefined8 *)PTR_DAT_02abc3f8);
      if (((*unaff_x26 == 0) || (lVar6 = *(long *)(*unaff_x26 + 0x20), lVar6 == 0)) ||
         ((fVar22 = fVar24, fVar25 = fVar21, lVar6 = FUN_01cdae58(lVar6,0,*unaff_x27), lVar6 == 0 ||
          ((*unaff_x26 == 0 || (lVar14 = *(long *)(*unaff_x26 + 0x20), lVar14 == 0)))))) break;
      lVar8 = *(long *)(lVar6 + 0x1e8);
      lVar6 = FUN_01cdae58(lVar14,0,*unaff_x27);
      if ((lVar6 == 0) ||
         (((*(long *)(lVar6 + 0x1e8) == 0 || (lVar8 == 0)) ||
          (fVar20 = (float)FUN_01d2cbf0(lVar8,*(int *)(*(long *)(lVar6 + 0x1e8) + 0x18) + -1,
                                        *(undefined8 *)PTR_DAT_02abc3f8), puVar4 = PTR_DAT_02abc410,
          lVar9 == 0)))) break;
      fVar24 = fVar24 + (fVar22 - fVar24) * 0.5;
      fVar21 = fVar21 + (fVar25 - fVar21) * 0.5;
      fVar19 = fVar19 + (fVar20 - fVar19) * 0.5;
      FUN_01d2cc50(fVar19,fVar21,fVar24,lVar9,iVar3 + -1,*(undefined8 *)PTR_DAT_02abc410);
      if (lVar11 == 0) break;
      FUN_01d2cc50(fVar19,fVar21,fVar24,lVar11,iVar12 + -1,*(undefined8 *)puVar4);
      if (*unaff_x26 == 0) break;
      FUN_015ac494(*unaff_x26,0);
      *(undefined4 *)(unaff_x19 + 0x24) = *(undefined4 *)(unaff_x19 + 0x20);
      *(undefined4 *)(unaff_x19 + 0x30) = *(undefined4 *)(unaff_x19 + 0x2c);
      lVar6 = *(long *)(unaff_x19 + 0x180);
      *(undefined4 *)(unaff_x19 + 0x48) = *(undefined4 *)(unaff_x19 + 0x44);
      *(undefined4 *)(unaff_x19 + 0x60) = *(undefined4 *)(unaff_x19 + 0x5c);
      *(undefined4 *)(unaff_x19 + 0x17c) = *(undefined4 *)(unaff_x19 + 0x178);
      *(undefined4 *)(unaff_x19 + 0x6c) = *(undefined4 *)(unaff_x19 + 0x68);
      *(undefined4 *)(unaff_x19 + 0x58) = *(undefined4 *)(unaff_x19 + 0x54);
      *(undefined4 *)(unaff_x19 + 0x74) = *(undefined4 *)(unaff_x19 + 0x70);
      if (lVar6 == 0) break;
      if (((0 < *(int *)(lVar6 + 0x18)) && (iVar12 = *(int *)(unaff_x19 + 400), -1 < iVar12)) &&
         (iVar12 < *(int *)(lVar6 + 0x18))) {
        lVar6 = FUN_01cdae58(lVar6,iVar12,*unaff_x28);
        if (((*unaff_x29 == 0) ||
            (lVar14 = FUN_01cdae58(*unaff_x29,*(undefined4 *)(unaff_x19 + 400),*unaff_x28),
            lVar14 == 0)) || (lVar6 == 0)) break;
        *(undefined4 *)(lVar6 + 0x14) = *(undefined4 *)(lVar14 + 0x10);
        if (*unaff_x29 == 0) break;
        lVar6 = FUN_01cdae58(*unaff_x29,*(undefined4 *)(unaff_x19 + 400),*unaff_x28);
        if (((*(long *)(unaff_x19 + 0x180) == 0) ||
            (lVar14 = FUN_01cdae58(*(long *)(unaff_x19 + 0x180),*(undefined4 *)(unaff_x19 + 400),
                                   *unaff_x28), lVar14 == 0)) || (lVar6 == 0)) break;
        *(undefined4 *)(lVar6 + 0x38) = *(undefined4 *)(lVar14 + 0x34);
        if (*unaff_x29 == 0) break;
        lVar6 = FUN_01cdae58(*unaff_x29,*(undefined4 *)(unaff_x19 + 400),*unaff_x28);
        if (((*(long *)(unaff_x19 + 0x180) == 0) ||
            (lVar14 = FUN_01cdae58(*(long *)(unaff_x19 + 0x180),*(undefined4 *)(unaff_x19 + 400),
                                   *unaff_x28), lVar14 == 0)) || (lVar6 == 0)) break;
        *(undefined4 *)(lVar6 + 0x24) = *(undefined4 *)(lVar14 + 0x20);
        if (*unaff_x29 == 0) break;
        lVar6 = FUN_01cdae58(*unaff_x29,*(undefined4 *)(unaff_x19 + 400),*unaff_x28);
        if (((*(long *)(unaff_x19 + 0x180) == 0) ||
            (lVar14 = FUN_01cdae58(*(long *)(unaff_x19 + 0x180),*(undefined4 *)(unaff_x19 + 400),
                                   *unaff_x28), lVar14 == 0)) || (lVar6 == 0)) break;
        *(undefined4 *)(lVar6 + 0x2c) = *(undefined4 *)(lVar14 + 0x28);
        if (*unaff_x29 == 0) break;
        lVar6 = FUN_01cdae58(*unaff_x29,*(undefined4 *)(unaff_x19 + 400),*unaff_x28);
        if (((*(long *)(unaff_x19 + 0x180) == 0) ||
            (lVar14 = FUN_01cdae58(*(long *)(unaff_x19 + 0x180),*(undefined4 *)(unaff_x19 + 400),
                                   *unaff_x28), lVar14 == 0)) || (lVar6 == 0)) break;
        *(undefined8 *)(lVar6 + 0x208) = *(undefined8 *)(lVar14 + 0x200);
      }
      FUN_0162ed6c();
      return;
    }
  }
LAB_0162d6fc:
                    /* WARNING: Subroutine does not return */
  FUN_012196d8();
}


