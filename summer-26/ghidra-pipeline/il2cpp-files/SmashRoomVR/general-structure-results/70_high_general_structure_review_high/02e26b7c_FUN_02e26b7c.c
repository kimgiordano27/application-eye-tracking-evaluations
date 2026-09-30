/*
FUNCTION_NAME: FUN_02e26b7c
ENTRY_POINT: 02e26b7c
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_10;validity_or_gating_hits_21;ray_or_cast_sink_hits_3;telemetry_or_network_hits_3;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x02e2791c) */

void FUN_02e26b7c(undefined1 param_1 [16],float param_2,float param_3,float param_4,long *param_5)

{
  bool bVar1;
  long lVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  ulong uVar10;
  char cVar11;
  long lVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined4 uVar30;
  float fVar31;
  float fVar32;
  undefined4 uVar33;
  float local_94;
  float local_80;
  float local_7c;
  undefined4 local_78;
  undefined4 local_74;
  
  if ((DAT_03ff01a3 & 1) == 0) {
    thunk_FUN_01ad9084(
                      Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                      );
    thunk_FUN_01ad9084(
                      Field_<PrivateImplementationDetails>_74BCD6ED20AF2231F2BB1CDE814C5F4FF48E54BAC46029EEF90DDF4A208E2B20
                      );
    thunk_FUN_01ad9084(StringLiteral_4676);
    thunk_FUN_01ad9084(Method_System_Collections_SortedList_SortedListEnumerator_get_Current__);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(
                      Method_BNG_RaycastWeapon_<animateSlideAndEject>d__77_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_01ad9084(StringLiteral_4701);
    DAT_03ff01a3 = 1;
  }
  lVar12 = param_5[0x13];
  fVar27 = *(float *)((long)param_5 + 0x31c);
  fVar13 = (float)FUN_03925dbc(0);
  *(float *)((long)param_5 + 0x31c) = fVar27 + fVar13;
  fVar14 = (float)FUN_02e1e434(param_5);
  fVar13 = param_4;
  fVar27 = param_2;
  fVar16 = param_3;
  FUN_02e2183c(param_5);
  fVar15 = (float)FUN_03914250(0);
  if ((lVar12 == 0) || (lVar5 = FUN_0391c27c(lVar12,0), lVar5 == 0)) goto LAB_02e27918;
  fVar31 = (param_2 * fVar16 + param_4 * fVar15 + fVar14 * fVar13) - param_3 * fVar27;
  fVar32 = (param_3 * fVar15 + param_4 * fVar27 + param_2 * fVar13) - fVar14 * fVar16;
  fVar29 = (fVar14 * fVar27 + param_4 * fVar16 + param_3 * fVar13) - param_2 * fVar15;
  fVar15 = ((param_4 * fVar13 - fVar14 * fVar15) - param_2 * fVar27) - param_3 * fVar16;
  FUN_03928d34(lVar5,0);
  FUN_02e218ec(param_5);
  fVar13 = fVar32;
  fVar27 = fVar29;
  fVar16 = fVar15;
  fVar14 = (float)FUN_03914a7c(fVar31,0);
  if (((char)param_5[0x4e] != '\0') && (*(char *)((long)param_5 + 0x36c) == '\0')) {
    if (param_5[0x50] == 0) goto LAB_02e27918;
    if (*(char *)(param_5[0x50] + 0x9d) != '\0') {
      lVar5 = FUN_0391c27c(lVar12,0);
      if (lVar5 == 0) goto LAB_02e27918;
      FUN_03928d34(lVar5,0);
      FUN_02e218ec(param_5);
      lVar5 = FUN_0391c27c(lVar12,0);
      fVar16 = (float)FUN_02e21aa0(param_5);
      if (lVar5 == 0) goto LAB_02e27918;
      FUN_03927438(fVar16 + *(float *)((long)param_5 + 0x34c),fVar13 + *(float *)(param_5 + 0x6a),
                   fVar27 + *(float *)((long)param_5 + 0x354),lVar5,0);
      lVar5 = (**(code **)(*param_5 + 0x238))(param_5,*(undefined8 *)(*param_5 + 0x240));
      if (lVar5 == 0) goto LAB_02e27918;
      FUN_03928d34(lVar5,0);
      fVar16 = fVar15;
      fVar13 = fVar32;
      fVar27 = fVar29;
      fVar14 = (float)FUN_03914a7c(fVar31,0);
    }
  }
  fVar23 = fVar13;
  fVar25 = fVar27;
  fVar17 = (float)FUN_02e21ce8(param_5);
  fVar22 = fVar23;
  fVar26 = fVar25;
  fVar18 = (float)FUN_02e2183c(param_5);
  fVar21 = fVar22;
  fVar20 = fVar26;
  fVar28 = fVar16;
  fVar19 = (float)FUN_02e1e434(param_5);
  fVar24 = DAT_00b553b8;
  fVar26 = fVar26 * fVar20;
  fVar16 = fVar16 * fVar28;
  fVar20 = (float)NEON_fminnm(ABS(fVar16 + fVar26 + fVar18 * fVar19 + fVar22 * fVar21),0x3f800000);
  local_94 = 0.0;
  fVar21 = 0.0;
  if (fVar20 <= DAT_00b553b8) {
    fVar21 = acosf(fVar20);
    local_94 = (fVar21 + fVar21) * DAT_00b556e8;
    fVar21 = DAT_00b556e8;
  }
  if (param_5[0x7d] != 0) {
    fVar20 = *(float *)((long)param_5 + 0x31c);
    fVar28 = *(float *)(param_5 + 0x22);
    lVar5 = FUN_0391fab4(param_5[0x7d],0);
    if (fVar20 <= fVar28) {
      fVar22 = *(float *)(param_5 + 0x87);
      fVar26 = *(float *)((long)param_5 + 0x43c);
      fVar18 = *(float *)(param_5 + 0x88);
      uVar30 = *(undefined4 *)((long)param_5 + 0x444);
      lVar6 = param_5[0x89];
      uVar33 = *(undefined4 *)((long)param_5 + 0x44c);
      lVar2 = param_5[0x8a];
      fVar28 = 1.0;
      fVar20 = *(float *)((long)param_5 + 0x31c) / *(float *)(param_5 + 0x22);
      fVar21 = fVar20;
      if (1.0 < fVar20) {
        fVar21 = 1.0;
      }
      fVar19 = fVar21;
      if (fVar20 < 0.0) {
        fVar19 = 0.0;
      }
      lVar7 = FUN_0391c27c(lVar12,0);
      if (lVar7 != 0) {
        fVar20 = (float)FUN_039274a0(lVar7,0);
        fVar16 = (float)FUN_03914490(uVar30,(int)lVar6,uVar33,(int)lVar2,
                                     (fVar32 * fVar28 + fVar15 * fVar20 + fVar31 * fVar16) -
                                     fVar29 * fVar21,
                                     (fVar29 * fVar20 + fVar15 * fVar21 + fVar32 * fVar16) -
                                     fVar31 * fVar28,
                                     (fVar31 * fVar21 + fVar15 * fVar28 + fVar29 * fVar16) -
                                     fVar32 * fVar20,
                                     ((fVar15 * fVar16 - fVar31 * fVar20) - fVar32 * fVar21) -
                                     fVar29 * fVar28,0);
        if (lVar5 != 0) {
          fVar13 = fVar26 + ((fVar13 + fVar23) - fVar26) * fVar19;
          fVar27 = fVar18 + ((fVar27 + fVar25) - fVar18) * fVar19;
          FUN_039297a8(fVar22 + ((fVar14 + fVar17) - fVar22) * fVar19,lVar5,0);
          fVar14 = 15.0;
          goto LAB_02e27138;
        }
      }
    }
    else {
      fVar22 = (float)FUN_02e21ce8(param_5);
      fVar20 = fVar26;
      fVar28 = fVar21;
      lVar6 = FUN_0391c27c(lVar12,0);
      if ((lVar6 != 0) && (fVar23 = (float)FUN_039274a0(lVar6,0), lVar5 != 0)) {
        fVar13 = fVar13 + fVar21;
        fVar27 = fVar27 + fVar26;
        fVar16 = (fVar32 * fVar20 + fVar15 * fVar23 + fVar31 * fVar16) - fVar29 * fVar28;
        FUN_039297a8(fVar14 + fVar22,lVar5,0);
        fVar14 = *(float *)(lVar12 + 0xb8);
LAB_02e27138:
        if (*(char *)((long)param_5 + 0x404) == '\0') {
          fVar28 = (float)FUN_02e21c1c(param_5);
          fVar21 = fVar13;
          fVar20 = fVar27;
          fVar22 = (float)FUN_02e21b34(param_5);
          if (DAT_03fed25e == '\0') {
            thunk_FUN_01ad9084(
                              Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__
                              );
            DAT_03fed25e = '\x01';
          }
          if (*(int *)(*(long *)
                        Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__ +
                      0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          fVar27 = (fVar27 - fVar20) * (fVar27 - fVar20);
          *(bool *)((long)param_5 + 0x404) =
               SQRT(fVar27 + (fVar28 - fVar22) * (fVar28 - fVar22) +
                             (fVar13 - fVar21) * (fVar13 - fVar21)) < DAT_00b55540;
        }
        fVar13 = *(float *)(param_5 + 0x22);
        if (*(float *)((long)param_5 + 0x31c) <= fVar13) {
          bVar1 = false;
        }
        else {
          fVar13 = *(float *)(lVar12 + 0xbc);
          bVar1 = fVar13 < *(float *)((long)param_5 + 0x31c);
        }
        iVar4 = FUN_02ddfc1c(lVar12,0);
        if ((1 < iVar4) ||
           ((bVar1 && (fVar13 = local_94, *(float *)((long)param_5 + 0x114) < local_94)))) {
          uVar8 = FUN_02e27aec(param_5);
          FUN_03920cb0(param_5,uVar8,0);
        }
        else {
          if (fVar14 <= local_94) {
            cVar11 = '\0';
          }
          else {
            cVar11 = *(char *)((long)param_5 + 0x404);
          }
          if (cVar11 == '\0' && !bVar1) {
            if (*(char *)((long)param_5 + 0x404) != '\0') {
              lVar5 = param_5[0x81];
              if (*(int *)(*(long *)
                            Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                          0xe0) == 0) {
                thunk_FUN_01ac7298();
              }
              uVar10 = FUN_03923030(lVar5,0);
              if ((uVar10 & 1) == 0) {
                if (*(long *)(lVar12 + 0xa8) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01b48178();
                }
                lVar12 = FUN_0391c2b8(*(long *)(lVar12 + 0xa8),0);
                if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01b48178();
                }
                lVar12 = FUN_01ed7044(lVar12,*(undefined8 *)
                                              Field_<PrivateImplementationDetails>_74BCD6ED20AF2231F2BB1CDE814C5F4FF48E54BAC46029EEF90DDF4A208E2B20
                                     );
                plVar9 = param_5 + 0x81;
                *plVar9 = lVar12;
                thunk_FUN_01b4f09c(plVar9);
                FUN_02ddbcfc(*plVar9,0);
                if (*plVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01b48178();
                }
                FUN_0395c650(*plVar9,param_5[0xf],0);
                if (*plVar9 != 0) {
                  FUN_0395caf8(*plVar9,0,0);
                  if (*plVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01b48178();
                  }
                  fVar27 = *(float *)((long)param_5 + 0x2cc);
                  fVar13 = *(float *)(param_5 + 0x59);
                  FUN_0395c8ec(*(undefined4 *)((long)param_5 + 0x2c4),fVar13,fVar27,*plVar9,0);
                  if ((char)param_5[0x4e] != '\0') {
                    lVar12 = param_5[0x81];
                    fVar16 = (float)FUN_02e21aa0(param_5);
                    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_01b48178();
                    }
                    FUN_0395c8ec(fVar16 + *(float *)((long)param_5 + 0x34c),
                                 fVar13 + *(float *)(param_5 + 0x6a),
                                 fVar27 + *(float *)((long)param_5 + 0x354),lVar12,0);
                  }
                  if (*plVar9 != 0) {
                    FUN_0395ca24((int)param_5[0x5a],*(undefined4 *)((long)param_5 + 0x2d4),
                                 (int)param_5[0x5b],*plVar9,0);
                    FUN_02dec8ac(0,0,0,param_5[0x86],0);
                    return;
                  }
                    /* WARNING: Subroutine does not return */
                  FUN_01b48178();
                }
                    /* WARNING: Subroutine does not return */
                FUN_01b48178();
              }
            }
            if (fVar14 <= local_94) {
              return;
            }
            lVar5 = param_5[0x82];
            if (*(int *)(*(long *)
                          Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                        0xe0) == 0) {
              thunk_FUN_01ac7298();
            }
            uVar10 = FUN_03923030(lVar5,0);
            if ((uVar10 & 1) != 0) {
              return;
            }
            lVar5 = FUN_0391c27c(lVar12,0);
            lVar6 = FUN_0391c27c(lVar12,0);
            if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01b48178();
            }
            fVar14 = (float)FUN_039274a0(lVar6,0);
            if (lVar5 != 0) {
              FUN_03928f54((fVar32 * fVar27 + fVar15 * fVar14 + fVar31 * fVar16) - fVar29 * fVar13,
                           (fVar29 * fVar14 + fVar15 * fVar13 + fVar32 * fVar16) - fVar31 * fVar27,
                           (fVar31 * fVar13 + fVar15 * fVar27 + fVar29 * fVar16) - fVar32 * fVar14,
                           ((fVar15 * fVar16 - fVar31 * fVar14) - fVar32 * fVar13) - fVar29 * fVar27
                           ,lVar5,0);
              if (*(long *)(lVar12 + 0xa8) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01b48178();
              }
              lVar12 = FUN_0391c2b8(*(long *)(lVar12 + 0xa8),0);
              if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01b48178();
              }
              lVar12 = FUN_01ed7044(lVar12,*(undefined8 *)
                                            Field_<PrivateImplementationDetails>_74BCD6ED20AF2231F2BB1CDE814C5F4FF48E54BAC46029EEF90DDF4A208E2B20
                                   );
              plVar9 = param_5 + 0x82;
              *plVar9 = lVar12;
              thunk_FUN_01b4f09c(plVar9);
              FUN_02ddbcbc(*plVar9,0);
              if (*plVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01b48178();
              }
              FUN_0395c650(*plVar9,param_5[0xf],0);
              if (*plVar9 != 0) {
                FUN_0395caf8(*plVar9,0,0);
                if (*plVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01b48178();
                }
                fVar27 = *(float *)((long)param_5 + 0x2cc);
                fVar13 = *(float *)(param_5 + 0x59);
                FUN_0395c8ec(*(undefined4 *)((long)param_5 + 0x2c4),fVar13,fVar27,*plVar9,0);
                if ((char)param_5[0x4e] != '\0') {
                  lVar12 = param_5[0x81];
                  fVar16 = (float)FUN_02e21aa0(param_5);
                  if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01b48178();
                  }
                  FUN_0395c8ec(fVar16 + *(float *)((long)param_5 + 0x34c),
                               fVar13 + *(float *)(param_5 + 0x6a),
                               fVar27 + *(float *)((long)param_5 + 0x354),lVar12,0);
                }
                if (*plVar9 != 0) {
                  FUN_0395ca24((int)param_5[0x5a],*(undefined4 *)((long)param_5 + 0x2d4),
                               (int)param_5[0x5b],*plVar9,0);
                  FUN_02dec79c(0,0,0,param_5[0x86],0);
                  return;
                }
                    /* WARNING: Subroutine does not return */
                FUN_01b48178();
              }
                    /* WARNING: Subroutine does not return */
              FUN_01b48178();
            }
                    /* WARNING: Subroutine does not return */
            FUN_01b48178();
          }
          lVar5 = FUN_0391c27c(lVar12,0);
          lVar6 = FUN_0391c27c(lVar12,0);
          if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01b48178();
          }
          fVar14 = (float)FUN_039274a0(lVar6,0);
          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01b48178();
          }
          fVar28 = ((fVar15 * fVar16 - fVar31 * fVar14) - fVar32 * fVar13) - fVar29 * fVar27;
          fVar20 = (fVar31 * fVar13 + fVar15 * fVar27 + fVar29 * fVar16) - fVar32 * fVar14;
          fVar21 = (fVar29 * fVar14 + fVar15 * fVar13 + fVar32 * fVar16) - fVar31 * fVar27;
          FUN_03928f54((fVar32 * fVar27 + fVar15 * fVar14 + fVar31 * fVar16) - fVar29 * fVar13,lVar5
                       ,0);
          fVar14 = (float)FUN_02e2183c(param_5);
          fVar13 = fVar21;
          fVar27 = fVar20;
          fVar16 = fVar28;
          fVar15 = (float)FUN_02e1e434(param_5);
          fVar20 = fVar20 * fVar27;
          fVar13 = (float)NEON_fminnm(ABS(fVar28 * fVar16 +
                                          fVar20 + fVar14 * fVar15 + fVar21 * fVar13),0x3f800000);
          fVar27 = 0.0;
          if (fVar13 <= fVar24) {
            fVar13 = acosf(fVar13);
            fVar27 = (fVar13 + fVar13) * DAT_00b556e8;
            fVar24 = DAT_00b556e8;
          }
          lVar5 = FUN_02ddcecc(0);
          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01b48178();
          }
          if (*(char *)(lVar5 + 0xc9) != '\0') {
            plVar9 = (long *)FUN_01b47fd0(*(undefined8 *)
                                           Method_System_Collections_SortedList_SortedListEnumerator_get_Current__
                                          ,4);
            local_74 = *(undefined4 *)((long)param_5 + 0xdc);
            lVar5 = thunk_FUN_01afa70c(*(undefined8 *)StringLiteral_4676,&local_74);
            if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01b48178();
            }
            if ((lVar5 != 0) &&
               (lVar6 = thunk_FUN_01afa9e0(lVar5,*(undefined8 *)(*plVar9 + 0x40)), lVar6 == 0)) {
              uVar8 = thunk_FUN_01b154cc();
                    /* WARNING: Subroutine does not return */
              FUN_01b48050(uVar8,0);
            }
            if ((int)plVar9[3] == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01b48180();
            }
            plVar9[4] = lVar5;
            thunk_FUN_01b4f09c(plVar9 + 4,lVar5);
            puVar3 = 
            Method_BNG_RaycastWeapon_<animateSlideAndEject>d__77_System_Collections_IEnumerator_Reset__
            ;
            local_78 = *(undefined4 *)((long)param_5 + 0x31c);
            lVar5 = thunk_FUN_01afa70c(*(undefined8 *)
                                        Method_BNG_RaycastWeapon_<animateSlideAndEject>d__77_System_Collections_IEnumerator_Reset__
                                       ,&local_78);
            if ((lVar5 != 0) &&
               (lVar6 = thunk_FUN_01afa9e0(lVar5,*(undefined8 *)(*plVar9 + 0x40)), lVar6 == 0)) {
              uVar8 = thunk_FUN_01b154cc();
                    /* WARNING: Subroutine does not return */
              FUN_01b48050(uVar8,0);
            }
            if (*(uint *)(plVar9 + 3) < 2) {
                    /* WARNING: Subroutine does not return */
              FUN_01b48180();
            }
            plVar9[5] = lVar5;
            thunk_FUN_01b4f09c(plVar9 + 5,lVar5);
            local_7c = fVar27;
            lVar5 = thunk_FUN_01afa70c(*(undefined8 *)puVar3,&local_7c);
            if ((lVar5 != 0) &&
               (lVar6 = thunk_FUN_01afa9e0(lVar5,*(undefined8 *)(*plVar9 + 0x40)), lVar6 == 0)) {
              uVar8 = thunk_FUN_01b154cc();
                    /* WARNING: Subroutine does not return */
              FUN_01b48050(uVar8,0);
            }
            if (*(uint *)(plVar9 + 3) < 3) {
                    /* WARNING: Subroutine does not return */
              FUN_01b48180();
            }
            plVar9[6] = lVar5;
            thunk_FUN_01b4f09c(plVar9 + 6,lVar5);
            fVar16 = (float)FUN_02e21ce8(param_5);
            fVar13 = fVar24;
            fVar27 = fVar20;
            fVar14 = (float)FUN_02e218ec(param_5);
            if (DAT_03fed25e == '\0') {
              thunk_FUN_01ad9084(
                                Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__
                                );
              DAT_03fed25e = '\x01';
            }
            if (*(int *)(*(long *)
                          Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__ +
                        0xe0) == 0) {
              thunk_FUN_01ac7298();
            }
            local_80 = SQRT((fVar20 - fVar27) * (fVar20 - fVar27) +
                            (fVar16 - fVar14) * (fVar16 - fVar14) +
                            (fVar24 - fVar13) * (fVar24 - fVar13));
            lVar5 = thunk_FUN_01afa70c(*(undefined8 *)puVar3,&local_80);
            if ((lVar5 != 0) &&
               (lVar6 = thunk_FUN_01afa9e0(lVar5,*(undefined8 *)(*plVar9 + 0x40)), lVar6 == 0)) {
              uVar8 = thunk_FUN_01b154cc();
                    /* WARNING: Subroutine does not return */
              FUN_01b48050(uVar8,0);
            }
            if (*(uint *)(plVar9 + 3) < 4) {
                    /* WARNING: Subroutine does not return */
              FUN_01b48180();
            }
            plVar9[7] = lVar5;
            thunk_FUN_01b4f09c(plVar9 + 7,lVar5);
            uVar8 = FUN_02ee71a8(*(undefined8 *)StringLiteral_4701,plVar9,0);
            if (*(int *)(*(long *)
                          Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                        + 0xe0) == 0) {
              thunk_FUN_01ac7298();
            }
            FUN_038f2acc(uVar8,0);
          }
          FUN_02e27b60(param_5,lVar12);
        }
        (**(code **)(*param_5 + 0x5e8))(param_5,*(undefined8 *)(*param_5 + 0x5f0));
        return;
      }
    }
  }
LAB_02e27918:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


