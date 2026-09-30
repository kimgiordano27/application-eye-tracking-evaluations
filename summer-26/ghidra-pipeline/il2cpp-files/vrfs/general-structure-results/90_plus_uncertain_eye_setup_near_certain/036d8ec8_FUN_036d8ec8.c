/*
FUNCTION_NAME: FUN_036d8ec8
ENTRY_POINT: 036d8ec8
PROGRAM: vrfs-libil2cpp.so
SCORE: 103
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint FUN_036d8ec8(long param_1,long *param_2,long *param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  uint uVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  long *plVar14;
  undefined8 *puVar15;
  uint uVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  undefined4 local_34;
  
  if ((DAT_0723992c & 1) == 0) {
    thunk_FUN_0159f088(PTR_DAT_06e57350);
    thunk_FUN_0159f088(PTR_DAT_06de6fb8);
    thunk_FUN_0159f088(PTR_DAT_06d91a68);
    thunk_FUN_0159f088(PTR_DAT_06e184b0);
    thunk_FUN_0159f088(PTR_DAT_06e69590);
    thunk_FUN_0159f088(PTR_DAT_06e18a00);
    thunk_FUN_0159f088(PTR_DAT_06e5dc58);
    thunk_FUN_0159f088(PTR_DAT_06dc8bb8);
    thunk_FUN_0159f088(PTR_DAT_06e0ef90);
    thunk_FUN_0159f088(PTR_DAT_06dbe528);
    thunk_FUN_0159f088(PTR_DAT_06e3fe98);
    thunk_FUN_0159f088(PTR_DAT_06dd6028);
    thunk_FUN_0159f088(PTR_DAT_06d91848);
    thunk_FUN_0159f088(PTR_DAT_06e3d250);
    DAT_0723992c = 1;
  }
  puVar8 = PTR_DAT_06e5dc58;
  local_34 = 0;
  if (param_2 == param_3) goto LAB_036d9718;
  if (param_2 != (long *)0x0) {
    lVar11 = *(long *)PTR_DAT_06e5dc58;
    if (*(int *)(lVar11 + 0xe0) == 0) {
      thunk_FUN_016466fc();
      lVar11 = *(long *)puVar8;
    }
    plVar14 = (long *)**(long **)(lVar11 + 0xb8);
    if (param_2 != plVar14) {
      if (param_3 != (long *)0x0) {
        if (*(int *)(lVar11 + 0xe0) == 0) {
          thunk_FUN_016466fc();
          plVar14 = (long *)**(long **)(*(long *)puVar8 + 0xb8);
        }
        puVar8 = PTR_DAT_06e69590;
        if (param_3 != plVar14) {
          lVar11 = *(long *)PTR_DAT_06e69590;
          uVar17 = (ulong)*(byte *)(lVar11 + 300);
          if ((*(byte *)(lVar11 + 300) <= *(byte *)(*param_2 + 300)) &&
             (*(long *)(*(long *)(*param_2 + 200) + uVar17 * 8 + -8) == lVar11)) {
            param_2 = (long *)FUN_036daa4c(param_1,param_2);
            lVar11 = *(long *)puVar8;
            uVar17 = (ulong)*(byte *)(lVar11 + 300);
          }
          puVar7 = PTR_DAT_06e57350;
          puVar6 = PTR_DAT_06e18a00;
          puVar5 = PTR_DAT_06e184b0;
          lVar21 = *param_3;
          bVar1 = *(byte *)(lVar21 + 300);
          uVar10 = (uint)uVar17;
          if ((uVar10 <= bVar1) && (*(long *)(*(long *)(lVar21 + 200) + uVar17 * 8 + -8) == lVar11))
          {
            plVar14 = (long *)FUN_036daa4c(param_1,param_3);
            if (plVar14 != (long *)0x0) {
              bVar1 = *(byte *)(*(long *)puVar5 + 300);
              if ((bVar1 <= *(byte *)(*plVar14 + 300)) &&
                 (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)puVar5))
              {
                uVar10 = FUN_036d8ec8(param_1,param_2,plVar14);
                goto LAB_036d971c;
              }
            }
            puVar15 = (undefined8 *)PTR_DAT_06e3fe98;
            if (param_2 != (long *)0x0) {
              lVar11 = *(long *)puVar8;
              bVar1 = *(byte *)(lVar11 + 300);
              if ((bVar1 <= *(byte *)(*param_2 + 300)) &&
                 (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) == lVar11)) {
                uVar10 = FUN_036dad84(param_1,param_2,param_3);
                goto LAB_036d971c;
              }
            }
            goto LAB_036d9448;
          }
          lVar18 = *(long *)PTR_DAT_06d91a68;
          bVar2 = *(byte *)(lVar18 + 300);
          if (((uint)bVar2 <= (uint)bVar1) &&
             (lVar19 = (ulong)bVar2 - 1, *(long *)(*(long *)(lVar21 + 200) + lVar19 * 8) == lVar18))
          {
            if (param_2 != (long *)0x0) {
              lVar21 = *param_2;
              bVar1 = *(byte *)(lVar21 + 300);
              if ((uVar10 <= bVar1) &&
                 (*(long *)(*(long *)(lVar21 + 200) + uVar17 * 8 + -8) == lVar11)) {
                uVar10 = FUN_036daf90(param_1,param_2,param_3);
                goto LAB_036d971c;
              }
              if (((uint)bVar2 <= (uint)bVar1) &&
                 (*(long *)(*(long *)(lVar21 + 200) + lVar19 * 8) == lVar18)) {
                uVar10 = FUN_036db12c(param_1,param_2,param_3);
                goto LAB_036d971c;
              }
              bVar2 = *(byte *)(*(long *)PTR_DAT_06e18a00 + 300);
              if ((bVar1 < bVar2) ||
                 (*(long *)(*(long *)(lVar21 + 200) + (ulong)bVar2 * 8 + -8) !=
                  *(long *)PTR_DAT_06e18a00)) goto LAB_036d98d4;
            }
            uVar10 = FUN_036db22c(param_1,param_2,param_3);
            goto LAB_036d971c;
          }
          lVar19 = *(long *)PTR_DAT_06de6fb8;
          bVar3 = *(byte *)(lVar19 + 300);
          uVar16 = (uint)bVar1;
          if (uVar16 < bVar3) {
Unity_Collections_NativeArray<OVRPlugin_Vector3f>__Copy:
            lVar18 = *(long *)PTR_DAT_06e184b0;
            bVar2 = *(byte *)(lVar18 + 300);
            if (uVar16 < bVar2) {
LAB_036d910c:
              lVar18 = *(long *)PTR_DAT_06dc8bb8;
              bVar2 = *(byte *)(lVar18 + 300);
              if ((uint)bVar2 <= (uint)bVar1) {
                lVar20 = *(long *)(lVar21 + 200);
                if (*(long *)(lVar20 + ((ulong)bVar2 - 1) * 8) == lVar18) {
                  puVar15 = (undefined8 *)PTR_DAT_06dd6028;
                  if (param_2 != (long *)0x0) {
                    lVar21 = *param_2;
                    bVar4 = *(byte *)(lVar21 + 300);
                    if ((uVar10 <= bVar4) &&
                       (*(long *)(*(long *)(lVar21 + 200) + uVar17 * 8 + -8) == lVar11))
                    goto LAB_036d946c;
                    if (((uint)bVar2 <= (uint)bVar4) &&
                       (*(long *)(*(long *)(lVar21 + 200) + ((ulong)bVar2 - 1) * 8) == lVar18)) {
LAB_036d91d8:
                      lVar11 = *(long *)puVar6;
                      bVar1 = *(byte *)(lVar11 + 300);
                      if ((bVar4 < bVar1) ||
                         (*(long *)(*(long *)(lVar21 + 200) + ((ulong)bVar1 - 1) * 8) != lVar11)) {
LAB_036d98d4:
                    /* WARNING: Subroutine does not return */
                        FUN_0160f170(param_2);
                      }
                      if (*(byte *)(*param_3 + 300) < bVar1) goto LAB_036d98dc;
                      lVar21 = *(long *)(*(long *)(*param_3 + 200) + ((ulong)bVar1 - 1) * 8);
                      goto LAB_036d94fc;
                    }
                    if ((bVar3 <= bVar4) &&
                       (*(long *)(*(long *)(lVar21 + 200) + (ulong)bVar3 * 8 + -8) == lVar19)) {
                      bVar1 = *(byte *)(*(long *)PTR_DAT_06e18a00 + 300);
                      if ((bVar4 < bVar1) ||
                         (*(long *)(*(long *)(lVar21 + 200) + (ulong)bVar1 * 8 + -8) !=
                          *(long *)PTR_DAT_06e18a00)) goto LAB_036d98d4;
                      lVar11 = (**(code **)(lVar21 + 0x238))
                                         (param_2,*(undefined8 *)(lVar21 + 0x240));
                      if (lVar11 == 0) {
LAB_036d98f4:
                    /* WARNING: Subroutine does not return */
                        FUN_0160eeb4();
                      }
                      iVar9 = FUN_03f054bc(lVar11,0);
                      puVar15 = (undefined8 *)PTR_DAT_06dd6028;
                      if (iVar9 == 1) {
                        lVar21 = *param_2;
                        bVar4 = *(byte *)(lVar21 + 300);
                        goto LAB_036d91d8;
                      }
                    }
                  }
                  goto LAB_036d9448;
                }
              }
              goto LAB_036d9464;
            }
            if (*(long *)(*(long *)(lVar21 + 200) + ((ulong)bVar2 - 1) * 8) != lVar18)
            goto LAB_036d910c;
            puVar15 = (undefined8 *)PTR_DAT_06d91848;
            if (param_2 != (long *)0x0) {
              lVar19 = *param_2;
              bVar1 = *(byte *)(lVar19 + 300);
              if ((bVar1 < uVar10) ||
                 (*(long *)(*(long *)(lVar19 + 200) + uVar17 * 8 + -8) != lVar11)) {
                if (((uint)bVar1 < (uint)bVar2) ||
                   (*(long *)(*(long *)(lVar19 + 200) + ((ulong)bVar2 - 1) * 8) != lVar18)) {
                  bVar2 = *(byte *)(*(long *)PTR_DAT_06dc8bb8 + 300);
                  if ((bVar1 < bVar2) ||
                     (*(long *)(*(long *)(lVar19 + 200) + (ulong)bVar2 * 8 + -8) !=
                      *(long *)PTR_DAT_06dc8bb8)) goto LAB_036d9448;
                  uVar17 = FUN_036dc63c(param_1,param_2,param_3);
                  if ((uVar17 & 1) == 0) {
                    plVar14 = (long *)FUN_0160edfc(*(undefined8 *)puVar7,4);
                    local_34 = (undefined4)param_2[2];
                    uVar12 = FUN_040f742c(0);
                    lVar11 = FUN_03219634(&local_34,uVar12,0);
                    if (plVar14 == (long *)0x0) goto LAB_036d98f4;
                    if ((lVar11 != 0) &&
                       (lVar21 = thunk_FUN_015d0480(lVar11,*(undefined8 *)(*plVar14 + 0x40)),
                       lVar21 == 0)) {
LAB_036d98e8:
                      uVar12 = thunk_FUN_015f0d94();
                    /* WARNING: Subroutine does not return */
                      FUN_0160ee7c(uVar12,0);
                    }
                    if ((int)plVar14[3] == 0) goto LAB_036d98e4;
                    plVar14[4] = lVar11;
                    thunk_FUN_01656ef8(plVar14 + 4,lVar11);
                    local_34 = *(undefined4 *)((long)param_2 + 0x14);
                    uVar12 = FUN_040f742c(0);
                    lVar11 = FUN_03219634(&local_34,uVar12,0);
                    if ((lVar11 != 0) &&
                       (lVar21 = thunk_FUN_015d0480(lVar11,*(undefined8 *)(*plVar14 + 0x40)),
                       lVar21 == 0)) goto LAB_036d98e8;
                    if (*(uint *)(plVar14 + 3) < 2) goto LAB_036d98e4;
                    plVar14[5] = lVar11;
                    thunk_FUN_01656ef8(plVar14 + 5,lVar11);
                    local_34 = (undefined4)param_3[2];
                    uVar12 = FUN_040f742c(0);
                    lVar11 = FUN_03219634(&local_34,uVar12,0);
                    if ((lVar11 != 0) &&
                       (lVar21 = thunk_FUN_015d0480(lVar11,*(undefined8 *)(*plVar14 + 0x40)),
                       lVar21 == 0)) goto LAB_036d98e8;
                    if (*(uint *)(plVar14 + 3) < 3) goto LAB_036d98e4;
                    plVar14[6] = lVar11;
                    thunk_FUN_01656ef8(plVar14 + 6,lVar11);
                    local_34 = *(undefined4 *)((long)param_3 + 0x14);
                    uVar12 = FUN_040f742c(0);
                    lVar11 = FUN_03219634(&local_34,uVar12,0);
                    if ((lVar11 != 0) &&
                       (lVar21 = thunk_FUN_015d0480(lVar11,*(undefined8 *)(*plVar14 + 0x40)),
                       lVar21 == 0)) goto LAB_036d98e8;
                    uVar10 = *(uint *)(plVar14 + 3);
                    puVar15 = (undefined8 *)PTR_DAT_06e3d250;
                    goto joined_r0x036d98a4;
                  }
                }
                else {
                  if ((param_3[5] == 0) || (param_2[5] == 0)) {
                    uVar10 = FUN_036dc4b0(param_1,param_2,param_3);
                    goto LAB_036d971c;
                  }
                  uVar17 = FUN_036dbec0(param_1,param_2,param_3,0);
                  if ((uVar17 & 1) == 0) goto LAB_036d9464;
                }
LAB_036d9718:
                uVar10 = 1;
                goto LAB_036d971c;
              }
              lVar11 = *(long *)PTR_DAT_06e18a00;
              if (uVar16 < *(byte *)(lVar11 + 300)) goto LAB_036d98dc;
              lVar20 = *(long *)(lVar21 + 200) + (ulong)*(byte *)(lVar11 + 300) * 8;
              goto LAB_036d9538;
            }
LAB_036d9448:
            uVar12 = FUN_0474aec4(*puVar15,0);
          }
          else {
            lVar20 = *(long *)(lVar21 + 200);
            lVar13 = (ulong)bVar3 - 1;
            if (*(long *)(lVar20 + lVar13 * 8) != lVar19)
            goto Unity_Collections_NativeArray<OVRPlugin_Vector3f>__Copy;
            if (param_2 == (long *)0x0) goto LAB_036d9464;
            lVar21 = *param_2;
            bVar4 = *(byte *)(lVar21 + 300);
            if ((uVar10 <= bVar4) &&
               (*(long *)(*(long *)(lVar21 + 200) + uVar17 * 8 + -8) == lVar11)) {
LAB_036d946c:
              lVar11 = *(long *)PTR_DAT_06e18a00;
              if ((uint)bVar1 < (uint)*(byte *)(lVar11 + 300)) goto LAB_036d98dc;
              lVar20 = lVar20 + (ulong)*(byte *)(lVar11 + 300) * 8;
LAB_036d9538:
              if (*(long *)(lVar20 + -8) != lVar11) goto LAB_036d98dc;
              uVar10 = FUN_036db63c(param_1,param_2,param_3);
              goto LAB_036d971c;
            }
            uVar10 = (uint)bVar4;
            if (((uint)bVar3 <= (uint)bVar4) &&
               (*(long *)(*(long *)(lVar21 + 200) + lVar13 * 8) == lVar19)) {
              lVar11 = *(long *)PTR_DAT_06e18a00;
              bVar1 = *(byte *)(lVar11 + 300);
              if ((uVar10 < bVar1) ||
                 (*(long *)(*(long *)(lVar21 + 200) + ((ulong)bVar1 - 1) * 8) != lVar11))
              goto LAB_036d98d4;
              if (uVar16 < bVar1) goto LAB_036d98dc;
              lVar21 = *(long *)(lVar20 + ((ulong)bVar1 - 1) * 8);
LAB_036d94fc:
              if (lVar21 != lVar11) {
LAB_036d98dc:
                    /* WARNING: Subroutine does not return */
                FUN_0160f170(param_3);
              }
              uVar10 = 1;
              uVar17 = FUN_036dbec0(param_1,param_2,param_3,1);
              if ((uVar17 & 1) != 0) goto LAB_036d971c;
              goto LAB_036d9464;
            }
            bVar1 = *(byte *)(*(long *)PTR_DAT_06dc8bb8 + 300);
            if ((uVar10 < bVar1) ||
               (*(long *)(*(long *)(lVar21 + 200) + (ulong)bVar1 * 8 + -8) !=
                *(long *)PTR_DAT_06dc8bb8)) {
              bVar1 = *(byte *)(*(long *)PTR_DAT_06e184b0 + 300);
              puVar15 = (undefined8 *)PTR_DAT_06e0ef90;
              if (((bVar1 <= uVar10) &&
                  (*(long *)(*(long *)(lVar21 + 200) + (ulong)bVar1 * 8 + -8) ==
                   *(long *)PTR_DAT_06e184b0)) ||
                 ((bVar2 <= uVar10 &&
                  (*(long *)(*(long *)(lVar21 + 200) + (ulong)bVar2 * 8 + -8) == lVar18))))
              goto LAB_036d9448;
              goto LAB_036d9464;
            }
            uVar17 = FUN_036dc1b0(param_1,param_2,param_3);
            if ((uVar17 & 1) != 0) goto LAB_036d9718;
            plVar14 = (long *)FUN_0160edfc(*(undefined8 *)puVar7,4);
            local_34 = (undefined4)param_2[2];
            uVar12 = FUN_040f742c(0);
            lVar11 = FUN_03219634(&local_34,uVar12,0);
            if (plVar14 == (long *)0x0) goto LAB_036d98f4;
            if ((lVar11 != 0) &&
               (lVar21 = thunk_FUN_015d0480(lVar11,*(undefined8 *)(*plVar14 + 0x40)), lVar21 == 0))
            goto LAB_036d98e8;
            if ((int)plVar14[3] == 0) goto LAB_036d98e4;
            plVar14[4] = lVar11;
            thunk_FUN_01656ef8(plVar14 + 4,lVar11);
            local_34 = *(undefined4 *)((long)param_2 + 0x14);
            uVar12 = FUN_040f742c(0);
            lVar11 = FUN_03219634(&local_34,uVar12,0);
            if ((lVar11 != 0) &&
               (lVar21 = thunk_FUN_015d0480(lVar11,*(undefined8 *)(*plVar14 + 0x40)), lVar21 == 0))
            goto LAB_036d98e8;
            if (*(uint *)(plVar14 + 3) < 2) goto LAB_036d98e4;
            plVar14[5] = lVar11;
            thunk_FUN_01656ef8(plVar14 + 5,lVar11);
            local_34 = (undefined4)param_3[2];
            uVar12 = FUN_040f742c(0);
            lVar11 = FUN_03219634(&local_34,uVar12,0);
            if ((lVar11 != 0) &&
               (lVar21 = thunk_FUN_015d0480(lVar11,*(undefined8 *)(*plVar14 + 0x40)), lVar21 == 0))
            goto LAB_036d98e8;
            if (*(uint *)(plVar14 + 3) < 3) goto LAB_036d98e4;
            plVar14[6] = lVar11;
            thunk_FUN_01656ef8(plVar14 + 6,lVar11);
            local_34 = *(undefined4 *)((long)param_3 + 0x14);
            uVar12 = FUN_040f742c(0);
            lVar11 = FUN_03219634(&local_34,uVar12,0);
            if ((lVar11 != 0) &&
               (lVar21 = thunk_FUN_015d0480(lVar11,*(undefined8 *)(*plVar14 + 0x40)), lVar21 == 0))
            goto LAB_036d98e8;
            uVar10 = *(uint *)(plVar14 + 3);
            puVar15 = (undefined8 *)PTR_DAT_06dbe528;
joined_r0x036d98a4:
            if (uVar10 < 4) {
LAB_036d98e4:
                    /* WARNING: Subroutine does not return */
              FUN_0160eebc();
            }
            plVar14[7] = lVar11;
            thunk_FUN_01656ef8(plVar14 + 7,lVar11);
            uVar12 = FUN_04748adc(*puVar15,plVar14,0);
          }
          *(undefined8 *)(param_1 + 0x40) = uVar12;
          thunk_FUN_01656ef8((undefined8 *)(param_1 + 0x40),uVar12);
        }
      }
LAB_036d9464:
      uVar10 = 0;
      goto LAB_036d971c;
    }
  }
  uVar10 = FUN_036dacc0(param_1,param_3);
LAB_036d971c:
  return uVar10 & 1;
}


