/*
FUNCTION_NAME: OVRManager$$OnDisable
ENTRY_POINT: 02c0c5d0
PROGRAM: sharks-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRManager__OnDisable(void)

{
  uint uVar1;
  byte bVar2;
  undefined *puVar3;
  undefined4 uVar4;
  uint uVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  long *plVar12;
  undefined8 uVar13;
  undefined8 uVar15;
  undefined8 uVar16;
  uint uVar17;
  uint uVar18;
  ulong uVar19;
  code *pcVar20;
  int *piVar21;
  uint unaff_w19;
  long *plVar22;
  uint unaff_w20;
  long *plVar23;
  undefined8 unaff_x21;
  long unaff_x22;
  long *unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  long lVar24;
  long unaff_x28;
  long *plVar25;
  undefined8 in_stack_00000048;
  long in_stack_00000050;
  long in_stack_00000058;
  undefined *puVar14;
  
  thunk_FUN_01843fdc();
  plVar6 = (long *)FUN_02be9964(0);
  if ((unaff_w19 >> 9 & 1) != 0) {
    puVar14 = PTR_DAT_0380b100;
    if ((unaff_w19 & 0x3d00) == 0) {
      uVar13 = FUN_02bf7fdc();
      return uVar13;
    }
    goto LAB_02c0d3dc;
  }
  uVar17 = unaff_w20 | unaff_w19;
  if ((unaff_w19 & 0xc000) != 0) {
    uVar17 = unaff_w20 | unaff_w19 | 0x2000;
  }
  if (unaff_x22 == 0) {
    thunk_FUN_01851c08(PTR_DAT_037f66a8);
    uVar13 = thunk_FUN_01861bbc();
    puVar14 = PTR_DAT_037f66b0;
LAB_02c0d35c:
    uVar15 = thunk_FUN_01851c08(puVar14);
    FUN_02b3cbec(uVar13,uVar15,0);
    uVar15 = thunk_FUN_01851c08(PTR_DAT_0380b110);
                    /* WARNING: Subroutine does not return */
    FUN_017fc474(uVar13,uVar15);
  }
  if ((*(int *)(unaff_x22 + 0x10) == 0) || (uVar7 = FUN_02a4f854(), (uVar7 & 1) != 0)) {
    lVar8 = FUN_02c0d568();
    unaff_x22 = *(long *)PTR_DAT_0380b0b8;
    if (lVar8 != 0) {
      unaff_x22 = lVar8;
    }
  }
  if ((uVar17 >> 10 & 1) != 0 || (uVar17 & 0x800) != 0) {
    uVar1 = uVar17 & 0x400;
    if (uVar1 == 0) {
      if (unaff_x28 == 0) {
        thunk_FUN_01851c08(PTR_DAT_037f66a8);
        uVar13 = thunk_FUN_01861bbc();
        puVar14 = PTR_DAT_0380b108;
        goto LAB_02c0d35c;
      }
      puVar14 = PTR_DAT_0380b120;
      if ((uVar17 >> 0xc & 1) == 0) {
        uVar18 = uVar17 >> 8;
        puVar14 = PTR_DAT_0380b0c8;
        goto joined_r0x02c0c6b4;
      }
    }
    else {
      puVar14 = PTR_DAT_0380b118;
      if ((uVar17 & 0x800) == 0) {
        uVar18 = uVar17 >> 0xd;
        puVar14 = PTR_DAT_0380b128;
joined_r0x02c0c6b4:
        if ((uVar18 & 1) == 0) {
          uVar13 = (**(code **)(*unaff_x24 + 0x6b8))();
          lVar8 = thunk_FUN_01861ac0(uVar13,*(undefined8 *)PTR_DAT_038031d8);
          puVar14 = PTR_DAT_0380abd0;
          if (lVar8 == 0) goto LAB_02c0d1d0;
          if ((int)*(long *)(lVar8 + 0x18) == 1) {
            plVar22 = *(long **)(lVar8 + 0x20);
LAB_02c0c780:
            uVar7 = FUN_02b0dac8(plVar22,0,0);
            if ((uVar7 & 1) != 0) {
              if ((plVar22 == (long *)0x0) ||
                 (lVar8 = (**(code **)(*plVar22 + 0x238))(plVar22,*(undefined8 *)(*plVar22 + 0x240))
                 , lVar8 == 0)) goto LAB_02c0d1d0;
              uVar7 = FUN_02be8354(lVar8,0);
              if ((uVar7 & 1) == 0) {
                lVar8 = (**(code **)(*plVar22 + 0x238))(plVar22,*(undefined8 *)(*plVar22 + 0x240));
                uVar13 = *(undefined8 *)PTR_DAT_037f8830;
                if (*(int *)(*(long *)PTR_DAT_037f2c78 + 0xe0) == 0) {
                  thunk_FUN_01843fdc(*(long *)PTR_DAT_037f2c78);
                }
                lVar9 = FUN_02bddb5c(uVar13,0);
                if (lVar8 == lVar9) goto LAB_02c0c810;
              }
              else {
LAB_02c0c810:
                uVar18 = in_stack_00000048._4_4_ - (uint)(uVar1 == 0);
                if (0 < (int)uVar18) {
                  lVar8 = FUN_017fc3f4(*(undefined8 *)PTR_DAT_037f5118,uVar18);
                  puVar14 = PTR_DAT_03802388;
                  if (unaff_x28 != 0) {
                    uVar17 = 0;
                    do {
                      if (*(uint *)(unaff_x28 + 0x18) <= uVar17) {
                    /* WARNING: Subroutine does not return */
                        FUN_017fc5b0();
                      }
                      lVar24 = (long)(int)uVar17;
                      lVar9 = *(long *)(unaff_x28 + lVar24 * 8 + 0x20);
                      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_017fc5a8();
                      }
                      uVar13 = *(undefined8 *)puVar14;
                      lVar10 = thunk_FUN_01861ac0(lVar9,uVar13);
                      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_017fc944(lVar9,uVar13);
                      }
                      lVar10 = *(long *)puVar14;
                      plVar6 = (long *)thunk_FUN_01861ac0(lVar9,lVar10);
                      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                        FUN_017fc944(lVar9,lVar10);
                      }
                      lVar9 = *plVar6;
                      uVar7 = (ulong)*(ushort *)(lVar9 + 0x12e);
                      if (uVar7 != 0) {
                        piVar21 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar21 + -2) == lVar10) {
                            puVar11 = (undefined8 *)(lVar9 + (long)(*piVar21 + 7) * 0x10 + 0x138);
                            goto LAB_02c0c8e8;
                          }
                          uVar7 = uVar7 - 1;
                          piVar21 = piVar21 + 4;
                        } while (uVar7 != 0);
                      }
                      puVar11 = (undefined8 *)FUN_0185dba8(plVar6,lVar10,7);
LAB_02c0c8e8:
                      uVar4 = (*(code *)*puVar11)(plVar6,0,puVar11[1]);
                      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_017fc5a8();
                      }
                      if (*(uint *)(lVar8 + 0x18) <= uVar17) {
                    /* WARNING: Subroutine does not return */
                        FUN_017fc5b0();
                      }
                      uVar17 = uVar17 + 1;
                      *(undefined4 *)(lVar8 + lVar24 * 4 + 0x20) = uVar4;
                      if (uVar17 == uVar18) {
                        plVar6 = (long *)(**(code **)(*plVar22 + 0x2c8))
                                                   (plVar22,unaff_x21,
                                                    *(undefined8 *)(*plVar22 + 0x2d0));
                        if (plVar6 == (long *)0x0) {
                          if (uVar1 != 0) goto LAB_02c0d1d0;
                        }
                        else {
                          bVar2 = *(byte *)(*(long *)PTR_DAT_037f8d30 + 0x130);
                          if ((*(byte *)(*plVar6 + 0x130) < bVar2) ||
                             (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar2 * 8 + -8) !=
                              *(long *)PTR_DAT_037f8d30)) {
                    /* WARNING: Subroutine does not return */
                            FUN_017fc944();
                          }
                          if (uVar1 != 0) {
                            uVar13 = thunk_FUN_0187e994(plVar6,lVar8,0);
                            return uVar13;
                          }
                        }
                        if (in_stack_00000058 == 0) goto LAB_02c0d1d0;
                        if (*(uint *)(in_stack_00000058 + 0x18) <= uVar18) goto LAB_02c0d1d4;
                        if (plVar6 != (long *)0x0) {
                          thunk_FUN_0187eb34(plVar6,*(undefined8 *)
                                                     (in_stack_00000058 + (long)(int)uVar18 * 8 +
                                                     0x20),lVar8,0);
                          return 0;
                        }
                        goto LAB_02c0d1d0;
                      }
                      unaff_x28 = in_stack_00000058;
                    } while (in_stack_00000058 != 0);
                  }
                    /* WARNING: Subroutine does not return */
                  FUN_017fc5a8();
                }
              }
              if (uVar1 == 0) {
                puVar14 = PTR_DAT_0380b138;
                if (in_stack_00000048._4_4_ == 1) {
                  if (unaff_x28 != 0) {
                    if (*(int *)(unaff_x28 + 0x18) != 0) {
                      (**(code **)(*plVar22 + 0x2e8))
                                (plVar22,unaff_x21,*(undefined8 *)(unaff_x28 + 0x20),uVar17,plVar6);
                      return 0;
                    }
                    goto LAB_02c0d1d4;
                  }
                  goto LAB_02c0d1d0;
                }
              }
              else {
                puVar14 = PTR_DAT_0380b140;
                if (in_stack_00000048._4_4_ == 0) {
                  uVar13 = (**(code **)(*plVar22 + 0x2c8))
                                     (plVar22,unaff_x21,*(undefined8 *)(*plVar22 + 0x2d0));
                  return uVar13;
                }
              }
              goto LAB_02c0d3dc;
            }
          }
          else {
            if (*(long *)(lVar8 + 0x18) != 0) {
              if (uVar1 == 0) {
                if (unaff_x28 == 0) goto LAB_02c0d1d0;
                if (*(int *)(unaff_x28 + 0x18) == 0) goto LAB_02c0d1d4;
                puVar11 = (undefined8 *)(unaff_x28 + 0x20);
              }
              else {
                lVar9 = *(long *)PTR_DAT_0380abd0;
                if (*(int *)(lVar9 + 0xe0) == 0) {
                  thunk_FUN_01843fdc();
                  lVar9 = *(long *)puVar14;
                }
                puVar11 = *(undefined8 **)(lVar9 + 0xb8);
              }
              if (plVar6 == (long *)0x0) goto LAB_02c0d1d0;
              plVar22 = (long *)(**(code **)(*plVar6 + 0x178))(plVar6,uVar17,lVar8,*puVar11);
              goto LAB_02c0c780;
            }
            uVar7 = FUN_02b0dac8(0,0,0);
            if ((uVar7 & 1) != 0) goto LAB_02c0d1d0;
          }
          if ((uVar17 & 0xfff300) == 0) {
            uVar13 = (**(code **)(*unaff_x24 + 0x2c8))();
            thunk_FUN_01851c08(PTR_DAT_0380abe8);
            uVar15 = thunk_FUN_01861bbc();
            FUN_02bf0630(uVar15,uVar13,unaff_x22,0);
            goto LAB_02c0d51c;
          }
          goto LAB_02c0c938;
        }
      }
    }
LAB_02c0d3dc:
    uVar13 = thunk_FUN_01851c08(puVar14);
    uVar13 = FUN_02c108dc(uVar13,0);
    thunk_FUN_01851c08(PTR_DAT_037f87a8);
    uVar15 = thunk_FUN_01861bbc();
    uVar16 = thunk_FUN_01851c08(PTR_DAT_0380b148);
    FUN_02b3cc64(uVar15,uVar13,uVar16,0);
    goto LAB_02c0d51c;
  }
LAB_02c0c938:
  uVar1 = uVar17 & 0x2000;
  uVar18 = uVar17 >> 0xc & 1;
  if (uVar18 != 0 || uVar1 != 0) {
    puVar14 = PTR_DAT_0380b130;
    uVar5 = uVar1;
    if ((uVar17 >> 0xc & 1) == 0) {
      puVar14 = PTR_DAT_0380b0d8;
      uVar5 = uVar17 >> 8 & 1;
    }
    if (uVar5 != 0) goto LAB_02c0d3dc;
  }
  if ((uVar17 >> 8 & 1) == 0) {
    plVar22 = (long *)0x0;
    plVar25 = (long *)0x0;
  }
  else {
    uVar13 = (**(code **)(*unaff_x24 + 0x6b8))();
    lVar8 = thunk_FUN_01861ac0(uVar13,*(undefined8 *)PTR_DAT_03804bc0);
    puVar3 = PTR_DAT_037f87b8;
    puVar14 = PTR_DAT_037f7340;
    if (lVar8 == 0) goto LAB_02c0d1d0;
    if ((int)*(ulong *)(lVar8 + 0x18) < 1) {
      plVar22 = (long *)0x0;
    }
    else {
      lVar9 = 0;
      uVar7 = 0;
      uVar19 = *(ulong *)(lVar8 + 0x18) & 0xffffffff;
      plVar25 = (long *)0x0;
      do {
        if (uVar19 <= uVar7) goto LAB_02c0d1d4;
        plVar12 = *(long **)(lVar8 + 0x20 + uVar7 * 8);
        uVar13 = FUN_017fc3f4(*(undefined8 *)puVar14,in_stack_00000048._4_4_);
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_01843fdc(*(long *)puVar3);
        }
        if (plVar12 != (long *)0x0) {
          bVar2 = *(byte *)(*(long *)PTR_DAT_03802908 + 0x130);
          if ((*(byte *)(*plVar12 + 0x130) < bVar2) ||
             (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar2 * 8 + -8) !=
              *(long *)PTR_DAT_03802908)) goto LAB_02c0d1d8;
        }
        uVar19 = FUN_02c070a0(plVar12,uVar17,3,uVar13);
        plVar22 = plVar25;
        if (((uVar19 & 1) != 0) &&
           (uVar19 = FUN_02b0f554(plVar25,0,0), plVar22 = plVar12, (uVar19 & 1) == 0)) {
          if (lVar9 == 0) {
            lVar9 = thunk_FUN_01861bbc(*(undefined8 *)PTR_DAT_03803088);
            FUN_02709c80(lVar9,*(undefined4 *)(lVar8 + 0x18),*(undefined8 *)PTR_DAT_0380b0a8);
            if (lVar9 == 0) goto LAB_02c0d1d0;
            lVar24 = *(long *)(lVar9 + 0x10);
            lVar10 = *(long *)PTR_DAT_03803070;
            *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
            if (lVar24 == 0) goto LAB_02c0d1d0;
            uVar5 = *(uint *)(lVar9 + 0x18);
            if (uVar5 < *(uint *)(lVar24 + 0x18)) {
              *(uint *)(lVar9 + 0x18) = uVar5 + 1;
              plVar22 = (long *)(lVar24 + (long)(int)uVar5 * 8 + 0x20);
              *plVar22 = (long)plVar25;
              thunk_FUN_0188fd20(plVar22,plVar25);
            }
            else {
              FUN_0270a444(lVar9,plVar25,
                           *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
            }
          }
          lVar24 = *(long *)(lVar9 + 0x10);
          lVar10 = *(long *)PTR_DAT_03803070;
          *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
          if (lVar24 == 0) goto LAB_02c0d1d0;
          uVar5 = *(uint *)(lVar9 + 0x18);
          if (uVar5 < *(uint *)(lVar24 + 0x18)) {
            *(uint *)(lVar9 + 0x18) = uVar5 + 1;
            puVar11 = (undefined8 *)(lVar24 + (long)(int)uVar5 * 8 + 0x20);
            *puVar11 = plVar12;
            thunk_FUN_0188fd20(puVar11,plVar12);
            plVar22 = plVar25;
          }
          else {
            FUN_0270a444(lVar9,plVar12,
                         *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
            plVar22 = plVar25;
          }
        }
        uVar19 = (ulong)*(uint *)(lVar8 + 0x18);
        uVar7 = uVar7 + 1;
        plVar25 = plVar22;
      } while ((long)uVar7 < (long)(int)*(uint *)(lVar8 + 0x18));
      if (lVar9 != 0) {
        plVar25 = (long *)FUN_017fc3f4(*(undefined8 *)PTR_DAT_03804bc0,*(undefined4 *)(lVar9 + 0x18)
                                      );
        FUN_0270a8f8(lVar9,plVar25,*(undefined8 *)PTR_DAT_0380b0a0);
        goto LAB_02c0cc30;
      }
    }
    plVar25 = (long *)0x0;
  }
LAB_02c0cc30:
  uVar5 = FUN_02b0f554(plVar22,0,0);
  if ((uVar5 & uVar18) != 0 || (uVar17 >> 0xd & 1) != 0) {
    uVar13 = (**(code **)(*unaff_x24 + 0x6b8))
                       (unaff_x24,unaff_x22,0x10,uVar17,*(undefined8 *)(*unaff_x24 + 0x6c0));
    lVar8 = thunk_FUN_01861ac0(uVar13,*(undefined8 *)PTR_DAT_03804bc8);
    puVar3 = PTR_DAT_037f87b8;
    puVar14 = PTR_DAT_037f7340;
    if (lVar8 == 0) goto LAB_02c0d1d0;
    uVar18 = *(uint *)(lVar8 + 0x18);
    if (0 < (int)uVar18) {
      uVar5 = 0;
      lVar9 = 0;
      plVar23 = plVar22;
      do {
        if (uVar18 <= uVar5) goto LAB_02c0d1d4;
        plVar22 = *(long **)(lVar8 + (long)(int)uVar5 * 8 + 0x20);
        if (plVar22 == (long *)0x0) goto LAB_02c0d1d0;
        lVar24 = *plVar22;
        if (uVar1 == 0) {
          pcVar20 = *(code **)(lVar24 + 0x288);
          uVar13 = *(undefined8 *)(lVar24 + 0x290);
        }
        else {
          pcVar20 = *(code **)(lVar24 + 0x2b8);
          uVar13 = *(undefined8 *)(lVar24 + 0x2c0);
        }
        plVar12 = (long *)(*pcVar20)(plVar22,1,uVar13);
        uVar7 = FUN_02b0f554(plVar12,0,0);
        plVar22 = plVar23;
        if ((uVar7 & 1) == 0) {
          uVar13 = FUN_017fc3f4(*(undefined8 *)puVar14,in_stack_00000048._4_4_);
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_01843fdc(*(long *)puVar3);
          }
          if (plVar12 != (long *)0x0) {
            bVar2 = *(byte *)(*(long *)PTR_DAT_03802908 + 0x130);
            if ((*(byte *)(*plVar12 + 0x130) < bVar2) ||
               (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar2 * 8 + -8) !=
                *(long *)PTR_DAT_03802908)) {
LAB_02c0d1d8:
                    /* WARNING: Subroutine does not return */
              FUN_017fc944(plVar12);
            }
          }
          uVar7 = FUN_02c070a0(plVar12,uVar17,3,uVar13);
          if (((uVar7 & 1) != 0) &&
             (uVar7 = FUN_02b0f554(plVar23,0,0), plVar22 = plVar12, (uVar7 & 1) == 0)) {
            if (lVar9 == 0) {
              lVar9 = thunk_FUN_01861bbc(*(undefined8 *)PTR_DAT_03803088);
              FUN_02709c80(lVar9,*(undefined4 *)(lVar8 + 0x18),*(undefined8 *)PTR_DAT_0380b0a8);
              if (lVar9 == 0) goto LAB_02c0d1d0;
              lVar24 = *(long *)(lVar9 + 0x10);
              lVar10 = *(long *)PTR_DAT_03803070;
              *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
              if (lVar24 == 0) goto LAB_02c0d1d0;
              uVar18 = *(uint *)(lVar9 + 0x18);
              if (uVar18 < *(uint *)(lVar24 + 0x18)) {
                *(uint *)(lVar9 + 0x18) = uVar18 + 1;
                plVar22 = (long *)(lVar24 + (long)(int)uVar18 * 8 + 0x20);
                *plVar22 = (long)plVar23;
                thunk_FUN_0188fd20(plVar22,plVar23);
              }
              else {
                FUN_0270a444(lVar9,plVar23,
                             *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
              }
            }
            lVar24 = *(long *)(lVar9 + 0x10);
            lVar10 = *(long *)PTR_DAT_03803070;
            *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
            if (lVar24 == 0) goto LAB_02c0d1d0;
            uVar18 = *(uint *)(lVar9 + 0x18);
            if (uVar18 < *(uint *)(lVar24 + 0x18)) {
              *(uint *)(lVar9 + 0x18) = uVar18 + 1;
              plVar22 = (long *)(lVar24 + (long)(int)uVar18 * 8 + 0x20);
              *plVar22 = (long)plVar12;
              thunk_FUN_0188fd20(plVar22,plVar12);
              plVar22 = plVar23;
            }
            else {
              FUN_0270a444(lVar9,plVar12,
                           *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
              plVar22 = plVar23;
            }
          }
        }
        uVar18 = *(uint *)(lVar8 + 0x18);
        uVar5 = uVar5 + 1;
        plVar23 = plVar22;
      } while ((int)uVar5 < (int)uVar18);
      if (lVar9 != 0) {
        plVar25 = (long *)FUN_017fc3f4(*(undefined8 *)PTR_DAT_03804bc0,*(undefined4 *)(lVar9 + 0x18)
                                      );
        FUN_0270a8f8(lVar9,plVar25,*(undefined8 *)PTR_DAT_0380b0a0);
      }
    }
  }
  uVar7 = FUN_02b0f518(plVar22,0,0);
  if ((uVar7 & 1) != 0) {
    if ((in_stack_00000048._4_4_ == 0) && (plVar25 == (long *)0x0)) {
      if ((plVar22 == (long *)0x0) ||
         (lVar8 = (**(code **)(*plVar22 + 0x398))(plVar22,*(undefined8 *)(*plVar22 + 0x3a0)),
         lVar8 == 0)) goto LAB_02c0d1d0;
      if (((uVar17 >> 0x12 & 1) == 0) && (*(long *)(lVar8 + 0x18) == 0)) {
        uVar13 = (**(code **)(*plVar22 + 0x328))
                           (plVar22,unaff_x21,uVar17,plVar6,in_stack_00000058,unaff_x27,
                            *(undefined8 *)(*plVar22 + 0x330));
        return uVar13;
      }
    }
    if (plVar25 == (long *)0x0) {
      plVar25 = (long *)FUN_017fc3f4(*(undefined8 *)PTR_DAT_03804bc0,1);
      if (plVar25 == (long *)0x0) goto LAB_02c0d1d0;
      if ((plVar22 != (long *)0x0) &&
         (lVar8 = thunk_FUN_01861ac0(plVar22,*(undefined8 *)(*plVar25 + 0x40)), lVar8 == 0)) {
        uVar13 = thunk_FUN_0187aa4c();
                    /* WARNING: Subroutine does not return */
        FUN_017fc474(uVar13,0);
      }
      if ((int)plVar25[3] == 0) {
LAB_02c0d1d4:
                    /* WARNING: Subroutine does not return */
        FUN_017fc5b0();
      }
      plVar25[4] = (long)plVar22;
      thunk_FUN_0188fd20(plVar25 + 4,plVar22);
    }
    if (in_stack_00000058 == 0) {
      lVar9 = *(long *)PTR_DAT_037f4dc8;
      lVar8 = *(long *)(lVar9 + 0x38);
      if (lVar8 == 0) {
        FUN_0185db00(lVar9);
        lVar8 = *(long *)(lVar9 + 0x38);
      }
      lVar8 = *(long *)(lVar8 + 0x10);
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_0185daa4();
      }
      if (*(int *)(lVar8 + 0xe0) == 0) {
        thunk_FUN_01843fdc();
      }
      lVar8 = *(long *)(*(long *)(lVar9 + 0x38) + 0x10);
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_0185daa4();
      }
      in_stack_00000058 = **(long **)(lVar8 + 0xb8);
    }
    in_stack_00000050 = 0;
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_017fc5a8();
    }
    plVar22 = (long *)(**(code **)(*plVar6 + 0x188))
                                (plVar6,uVar17,plVar25,&stack0x00000058,unaff_x25,unaff_x27,
                                 unaff_x26,&stack0x00000050);
    uVar7 = FUN_02b0f0b4(plVar22,0,0);
    if ((uVar7 & 1) == 0) {
      if (plVar22 != (long *)0x0) {
        lVar8 = *plVar22;
        bVar2 = *(byte *)(*(long *)PTR_DAT_037fc238 + 0x130);
        if ((*(byte *)(lVar8 + 0x130) < bVar2) ||
           (*(long *)(*(long *)(lVar8 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)PTR_DAT_037fc238))
        {
                    /* WARNING: Subroutine does not return */
          FUN_017fc944(plVar22);
        }
        uVar13 = (**(code **)(lVar8 + 0x328))
                           (plVar22,unaff_x21,uVar17,plVar6,in_stack_00000058,unaff_x27,
                            *(undefined8 *)(lVar8 + 0x330));
        if (in_stack_00000050 != 0) {
          if (plVar6 == (long *)0x0) goto LAB_02c0d1d0;
          (**(code **)(*plVar6 + 0x1a8))
                    (plVar6,&stack0x00000058,in_stack_00000050,*(undefined8 *)(*plVar6 + 0x1b0));
        }
        return uVar13;
      }
LAB_02c0d1d0:
                    /* WARNING: Subroutine does not return */
      FUN_017fc5a8();
    }
  }
  uVar13 = (**(code **)(*unaff_x24 + 0x2c8))(unaff_x24,*(undefined8 *)(*unaff_x24 + 0x2d0));
  thunk_FUN_01851c08(PTR_DAT_037f87c8);
  uVar15 = thunk_FUN_01861bbc();
  FUN_02bd1250(uVar15,uVar13,unaff_x22,0);
LAB_02c0d51c:
  uVar13 = thunk_FUN_01851c08(PTR_DAT_0380b110);
                    /* WARNING: Subroutine does not return */
  FUN_017fc474(uVar15,uVar13);
}


