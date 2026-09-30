/*
FUNCTION_NAME: Meta.XR.Movement.FaceTracking.Samples.JSONRigParser$$DeserializeV2Mapping
ENTRY_POINT: 06c141a4
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 92
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry;possible_biometrics
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_1;functionality_possible_biometrics_hits_2
*/


void Meta_XR_Movement_FaceTracking_Samples_JSONRigParser__DeserializeV2Mapping(undefined8 param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined8 uVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  ulong uVar14;
  long *plVar15;
  long lVar16;
  ulong uVar17;
  undefined8 uVar18;
  uint uVar19;
  uint uVar20;
  long lVar21;
  long *unaff_x21;
  long *plVar22;
  undefined8 unaff_x22;
  uint uVar23;
  undefined8 unaff_x29;
  undefined8 *puVar24;
  long in_stack_00000038;
  
  iVar6 = FUN_06f79068();
  if (-1 < iVar6) {
    uVar9 = FUN_06f683f8(*(undefined8 *)PTR_DAT_08e87b98,param_1,0);
LAB_06c141c8:
    if (*(int *)(*(long *)PTR_DAT_08e69670 + 0xe0) == 0) {
      thunk_FUN_03cd7500(*(long *)PTR_DAT_08e69670);
    }
LAB_06c141ec:
    FUN_085a437c(uVar9,0);
    return;
  }
  if ((unaff_x21 == (long *)0x0) ||
     ((lVar10 = (**(code **)(*unaff_x21 + 600))(), lVar10 == 0 &&
      (lVar10 = FUN_03c8f97c(*(undefined8 *)PTR_DAT_08e87b80,0), lVar10 == 0)))) {
LAB_06c14bb0:
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  plVar11 = (long *)FUN_03c8f97c(*(undefined8 *)PTR_DAT_08e79c00,*(undefined4 *)(lVar10 + 0x18));
  puVar5 = PTR_DAT_08e87b58;
  puVar4 = PTR_DAT_08e87b48;
  puVar3 = PTR_DAT_08e80b60;
  puVar2 = PTR_DAT_08e695f0;
  uVar7 = *(uint *)(lVar10 + 0x18);
  if ((int)uVar7 < 1) {
LAB_06c143e4:
    plVar12 = (long *)PTR_DAT_08e80b60;
    if (*(int *)(*(long *)PTR_DAT_08e80b60 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    uVar7 = FUN_06c16c44(param_1);
    puVar2 = PTR_DAT_08e87b78;
    uVar19 = uVar7;
    if ((int)uVar7 < 0) {
      uVar23 = ~uVar7;
    }
    else {
      do {
        uVar23 = uVar19;
        if ((int)uVar23 < 1) {
          uVar23 = 0;
          break;
        }
        lVar13 = *plVar12;
        if (*(int *)(lVar13 + 0xe0) == 0) {
          thunk_FUN_03cd7500();
          lVar13 = *plVar12;
        }
        lVar16 = *(long *)(*(long *)(lVar13 + 0xb8) + 8);
        if (lVar16 == 0) goto LAB_06c14bb0;
        plVar22 = *(long **)(*(long *)(lVar13 + 0xb8) + 0x38);
        lVar13 = FUN_05212a24(lVar16,uVar23 - 1,*(undefined8 *)puVar2);
        if ((lVar13 == 0) || (plVar22 == (long *)0x0)) goto LAB_06c14bb0;
        iVar6 = (**(code **)(*plVar22 + 0x1a8))
                          (plVar22,*(undefined8 *)(lVar13 + 0x28),param_1,3,
                           *(undefined8 *)(*plVar22 + 0x1b0));
        uVar19 = uVar23 - 1;
      } while (iVar6 == 0);
      do {
        uVar19 = uVar7;
        lVar13 = *plVar12;
        if (*(int *)(lVar13 + 0xe0) == 0) {
          thunk_FUN_03cd7500();
          lVar13 = *plVar12;
        }
        lVar21 = *(long *)(lVar13 + 0xb8);
        lVar16 = *(long *)(lVar21 + 8);
        if (lVar16 == 0) goto LAB_06c14bb0;
        if (*(int *)(lVar16 + 0x18) + -1 <= (int)uVar19) break;
        if (*(int *)(lVar13 + 0xe0) == 0) {
          thunk_FUN_03cd7500();
          lVar21 = *(long *)(*plVar12 + 0xb8);
          lVar16 = *(long *)(lVar21 + 8);
          if (lVar16 == 0) goto LAB_06c14bb0;
        }
        plVar22 = *(long **)(lVar21 + 0x38);
        lVar13 = FUN_05212a24(lVar16,uVar19 + 1,*(undefined8 *)puVar2);
        if ((lVar13 == 0) || (plVar22 == (long *)0x0)) goto LAB_06c14bb0;
        iVar6 = (**(code **)(*plVar22 + 0x1a8))
                          (plVar22,*(undefined8 *)(lVar13 + 0x28),param_1,3,
                           *(undefined8 *)(*plVar22 + 0x1b0));
        uVar7 = uVar19 + 1;
      } while (iVar6 == 0);
      uVar7 = uVar23;
      if ((int)uVar23 <= (int)uVar19) {
        do {
          lVar13 = *plVar12;
          if (*(int *)(lVar13 + 0xe0) == 0) {
            thunk_FUN_03cd7500();
            lVar13 = *plVar12;
          }
          lVar13 = *(long *)(*(long *)(lVar13 + 0xb8) + 8);
          if ((((lVar13 == 0) ||
               (lVar13 = FUN_05212a24(lVar13,uVar7,*(undefined8 *)puVar2), puVar3 = PTR_DAT_08e695f0
               , lVar13 == 0)) || (*(long *)(lVar13 + 0x18) == 0)) || (plVar11 == (long *)0x0))
          goto LAB_06c14bb0;
          uVar1 = *(uint *)(*(long *)(lVar13 + 0x18) + 0x18);
          uVar20 = (uint)plVar11[3];
          if (((int)(uVar1 - uVar20) < 1) && (uVar23 = uVar7 + 1, uVar1 == uVar20)) {
            if ((int)uVar20 < 1) {
              uVar14 = 0;
            }
            else {
              uVar14 = 0;
              uVar17 = plVar11[3] & 0xffffffff;
              do {
                puVar4 = PTR_DAT_08e80b60;
                if (uVar17 <= uVar14) goto LAB_06c14bb4;
                lVar16 = plVar11[uVar14 + 4];
                lVar13 = *(long *)PTR_DAT_08e80b60;
                if (*(int *)(lVar13 + 0xe0) == 0) {
                  thunk_FUN_03cd7500();
                  lVar13 = *(long *)puVar4;
                }
                lVar13 = *(long *)(*(long *)(lVar13 + 0xb8) + 8);
                if (((lVar13 == 0) ||
                    (lVar13 = FUN_05212a24(lVar13,uVar7,*(undefined8 *)puVar2), lVar13 == 0)) ||
                   (lVar13 = *(long *)(lVar13 + 0x18), lVar13 == 0)) goto LAB_06c14bb0;
                if (*(uint *)(lVar13 + 0x18) <= uVar14) goto LAB_06c14bb4;
                uVar9 = *(undefined8 *)(lVar13 + uVar14 * 8 + 0x20);
                if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                  thunk_FUN_03cd7500();
                }
                uVar17 = FUN_07119344(lVar16,uVar9,0);
                if ((uVar17 & 1) == 0) {
                  uVar20 = (uint)plVar11[3];
                  break;
                }
                uVar20 = *(uint *)(plVar11 + 3);
                uVar17 = (ulong)uVar20;
                uVar14 = uVar14 + 1;
              } while ((long)uVar14 < (long)(int)uVar20);
            }
            plVar12 = (long *)PTR_DAT_08e80b60;
            if ((int)uVar20 <= (int)uVar14) {
              lVar13 = *(long *)PTR_DAT_08e80b60;
              if (*(int *)(lVar13 + 0xe0) == 0) {
                thunk_FUN_03cd7500();
                lVar13 = *plVar12;
              }
              lVar13 = *(long *)(*(long *)(lVar13 + 0xb8) + 8);
              if (lVar13 == 0) goto LAB_06c14bb0;
              uVar19 = uVar19 - 1;
              FUN_052143ec(lVar13,uVar7,*(undefined8 *)PTR_DAT_08e87b68);
              uVar23 = uVar7;
              uVar7 = uVar7 - 1;
            }
          }
          uVar7 = uVar7 + 1;
        } while ((int)uVar7 <= (int)uVar19);
      }
    }
    plVar12 = (long *)thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e6a338);
    FUN_06f7c298(plVar12,0x100,0);
    if ((plVar11 != (long *)0x0) &&
       (lVar13 = FUN_03c8f97c(*(undefined8 *)PTR_DAT_08e69770,(int)plVar11[3]),
       plVar12 != (long *)0x0)) {
      FUN_06f7c2f0(plVar12,param_1,0);
      if ((plVar11[3] != 0) &&
         (FUN_06f7c2f0(plVar12,*(undefined8 *)PTR_DAT_08e6b7c0,0), 0 < (int)plVar11[3])) {
        uVar14 = 0;
        puVar24 = (undefined8 *)(lVar13 + 0x20);
        do {
          iVar6 = FUN_06f7cb5c(plVar12,0);
          lVar16 = FUN_06f7c2f0(plVar12,*(undefined8 *)PTR_DAT_08e698c0,0);
          if (*(uint *)(plVar11 + 3) <= uVar14) {
LAB_06c14bb4:
                    /* WARNING: Subroutine does not return */
            FUN_03c8fb38();
          }
          lVar21 = plVar11[uVar14 + 4];
          if (*(int *)(*(long *)PTR_DAT_08e80b60 + 0xe0) == 0) {
            thunk_FUN_03cd7500();
          }
          uVar9 = FUN_06c16d78(lVar21);
          if ((lVar16 == 0) || (lVar16 = FUN_06f7c2f0(lVar16,uVar9,0), lVar16 == 0))
          goto LAB_06c14bb0;
          lVar16 = FUN_06f7c2f0(lVar16,*(undefined8 *)PTR_DAT_08e6b7c0,0);
          if ((in_stack_00000038 == 0) ||
             ((long)(int)*(uint *)(in_stack_00000038 + 0x18) <= (long)uVar14)) {
Meta_XR_Movement_FaceTracking_Samples_OVRWeightsProvider__get_OVRFaceExpressionComp:
            if (*(uint *)(lVar10 + 0x18) <= uVar14) goto LAB_06c14bb4;
            plVar22 = *(long **)(lVar10 + 0x20 + uVar14 * 8);
            if (plVar22 == (long *)0x0) goto LAB_06c14bb0;
            uVar9 = (**(code **)(*plVar22 + 0x1d8))(plVar22,*(undefined8 *)(*plVar22 + 0x1e0));
          }
          else {
            if (*(uint *)(in_stack_00000038 + 0x18) <= uVar14) goto LAB_06c14bb4;
            uVar17 = FUN_06f74e14(*(undefined8 *)(in_stack_00000038 + 0x20 + uVar14 * 8),0);
            if ((uVar17 & 1) != 0)
            goto Meta_XR_Movement_FaceTracking_Samples_OVRWeightsProvider__get_OVRFaceExpressionComp
            ;
            if (*(uint *)(in_stack_00000038 + 0x18) <= uVar14) goto LAB_06c14bb4;
            uVar9 = *(undefined8 *)(in_stack_00000038 + 0x20 + uVar14 * 8);
          }
          if ((lVar16 == 0) || (lVar16 = FUN_06f7c2f0(lVar16,uVar9,0), lVar16 == 0))
          goto LAB_06c14bb0;
          FUN_06f7c2f0(lVar16,*(undefined8 *)PTR_DAT_08e7d5f8,0);
          if ((long)uVar14 < (long)((int)plVar11[3] + -1)) {
            FUN_06f7c2f0(plVar12,*(undefined8 *)PTR_DAT_08e6b7c0,0);
          }
          iVar8 = FUN_06f7cb5c(plVar12,0);
          uVar9 = FUN_06f837d8(plVar12,iVar6,iVar8 - iVar6,0);
          if (lVar13 == 0) goto LAB_06c14bb0;
          if (*(uint *)(lVar13 + 0x18) <= uVar14) goto LAB_06c14bb4;
          *puVar24 = uVar9;
          thunk_FUN_03d233cc(puVar24,uVar9);
          uVar14 = uVar14 + 1;
          puVar24 = puVar24 + 1;
        } while ((long)uVar14 < (long)(int)plVar11[3]);
      }
      uVar14 = FUN_06f74e14(unaff_x22,0);
      puVar2 = PTR_DAT_08e80b60;
      if ((uVar14 & 1) == 0) {
        lVar10 = FUN_06f7c2f0(plVar12,*(undefined8 *)PTR_DAT_08e7e970,0);
        if (lVar10 == 0) goto LAB_06c14bb0;
        FUN_06f7c2f0(lVar10,unaff_x22,0);
      }
      lVar10 = *(long *)puVar2;
      if (*(int *)(lVar10 + 0xe0) == 0) {
        thunk_FUN_03cd7500();
        lVar10 = *(long *)puVar2;
      }
      lVar10 = *(long *)(*(long *)(lVar10 + 0xb8) + 8);
      uVar9 = (**(code **)(*plVar12 + 0x168))(plVar12,*(undefined8 *)(*plVar12 + 0x170));
      uVar18 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e87b50);
      FUN_06c120d0(uVar18,unaff_x21,plVar11,unaff_x29,param_1,uVar9,lVar13);
      if (lVar10 != 0) {
        FUN_052139c8(lVar10,uVar23,uVar18,*(undefined8 *)PTR_DAT_08e87b60);
        return;
      }
    }
    goto LAB_06c14bb0;
  }
  uVar19 = 0;
LAB_06c1429c:
  if (uVar7 <= uVar19) goto LAB_06c14bb4;
  plVar22 = (long *)(lVar10 + (long)(int)uVar19 * 8 + 0x20);
  plVar12 = (long *)*plVar22;
  if ((plVar12 == (long *)0x0) ||
     (lVar13 = (**(code **)(*plVar12 + 0x1e8))(plVar12,*(undefined8 *)(*plVar12 + 0x1f0)),
     lVar13 == 0)) goto LAB_06c14bb0;
  uVar14 = FUN_0711b210(lVar13,0);
  if ((uVar14 & 1) != 0) {
    if (*(int *)(*(long *)PTR_DAT_08e69670 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    uVar9 = *(undefined8 *)PTR_DAT_08e87ba0;
    goto LAB_06c141ec;
  }
  if (*(uint *)(lVar10 + 0x18) <= uVar19) goto LAB_06c14bb4;
  plVar12 = (long *)*plVar22;
  if (plVar12 == (long *)0x0) goto LAB_06c14bb0;
  plVar12 = (long *)(**(code **)(*plVar12 + 0x1e8))(plVar12,*(undefined8 *)(*plVar12 + 0x1f0));
  lVar13 = *(long *)puVar3;
  if (*(int *)(lVar13 + 0xe0) == 0) {
    thunk_FUN_03cd7500(lVar13);
    lVar13 = *(long *)puVar3;
  }
  lVar13 = *(long *)(*(long *)(lVar13 + 0xb8) + 0x18);
  if (lVar13 == 0) goto LAB_06c14bb0;
  uVar14 = FUN_06a4e574(lVar13,plVar12,*(undefined8 *)puVar5);
  if ((uVar14 & 1) == 0) {
    uVar9 = *(undefined8 *)puVar4;
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    plVar15 = (long *)FUN_0710fcf0(uVar9,0);
    if (plVar15 == (long *)0x0) goto LAB_06c14bb0;
    uVar14 = (**(code **)(*plVar15 + 0x2c8))(plVar15,plVar12,*(undefined8 *)(*plVar15 + 0x2d0));
    if ((uVar14 & 1) == 0) {
      if (plVar12 == (long *)0x0) goto LAB_06c14bb0;
      uVar14 = (**(code **)(*plVar12 + 0x5d8))(plVar12,*(undefined8 *)(*plVar12 + 0x5e0));
      if ((uVar14 & 1) == 0) {
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_03cd7500();
        }
        uVar14 = FUN_06c16a38(plVar12);
        if ((uVar14 & 1) == 0) {
          plVar11 = (long *)FUN_03c8f97c(*(undefined8 *)PTR_DAT_08e69878,5);
          puVar2 = PTR_DAT_08e87ba8;
          if (plVar11 == (long *)0x0) goto LAB_06c14bb0;
          if (*(long *)PTR_DAT_08e87ba8 == 0) {
            lVar13 = 0;
          }
          else {
            lVar13 = thunk_FUN_03cf5138(*(long *)PTR_DAT_08e87ba8,*(undefined8 *)(*plVar11 + 0x40));
            if (lVar13 == 0) goto LAB_06c14bb8;
            lVar13 = *(long *)puVar2;
          }
          if ((int)plVar11[3] == 0) goto LAB_06c14bb4;
          plVar11[4] = lVar13;
          thunk_FUN_03d233cc();
          if (*(uint *)(lVar10 + 0x18) <= uVar19) goto LAB_06c14bb4;
          plVar22 = (long *)*plVar22;
          if (plVar22 == (long *)0x0) goto LAB_06c14bb0;
          lVar10 = (**(code **)(*plVar22 + 0x1d8))(plVar22,*(undefined8 *)(*plVar22 + 0x1e0));
          if ((lVar10 != 0) &&
             (lVar13 = thunk_FUN_03cf5138(lVar10,*(undefined8 *)(*plVar11 + 0x40)), lVar13 == 0))
          goto LAB_06c14bb8;
          if (*(uint *)(plVar11 + 3) < 2) goto LAB_06c14bb4;
          plVar11[5] = lVar10;
          thunk_FUN_03d233cc(plVar11 + 5,lVar10);
          puVar2 = PTR_DAT_08e87bb0;
          if (*(long *)PTR_DAT_08e87bb0 == 0) {
            lVar10 = 0;
          }
          else {
            lVar10 = thunk_FUN_03cf5138(*(long *)PTR_DAT_08e87bb0,*(undefined8 *)(*plVar11 + 0x40));
            if (lVar10 == 0) goto LAB_06c14bb8;
            lVar10 = *(long *)puVar2;
          }
          if (*(uint *)(plVar11 + 3) < 3) goto LAB_06c14bb4;
          plVar11[6] = lVar10;
          thunk_FUN_03d233cc();
          lVar10 = thunk_FUN_03cf5138(plVar12,*(undefined8 *)(*plVar11 + 0x40));
          if (lVar10 != 0) {
            if (*(uint *)(plVar11 + 3) < 4) goto LAB_06c14bb4;
            plVar11[7] = (long)plVar12;
            thunk_FUN_03d233cc(plVar11 + 7,plVar12);
            puVar2 = PTR_DAT_08e87b88;
            if (*(long *)PTR_DAT_08e87b88 == 0) {
              lVar10 = 0;
            }
            else {
              lVar10 = thunk_FUN_03cf5138(*(long *)PTR_DAT_08e87b88,*(undefined8 *)(*plVar11 + 0x40)
                                         );
              if (lVar10 == 0) goto LAB_06c14bb8;
              lVar10 = *(long *)puVar2;
            }
            if (*(uint *)(plVar11 + 3) < 5) goto LAB_06c14bb4;
            plVar11[8] = lVar10;
            thunk_FUN_03d233cc();
            uVar9 = FUN_06f7471c(plVar11,0);
            goto LAB_06c141c8;
          }
          goto LAB_06c14bb8;
        }
      }
    }
  }
  if (plVar11 == (long *)0x0) goto LAB_06c14bb0;
  if ((plVar12 == (long *)0x0) ||
     (lVar13 = thunk_FUN_03cf5138(plVar12,*(undefined8 *)(*plVar11 + 0x40)), lVar13 != 0)) {
    if (*(uint *)(plVar11 + 3) <= uVar19) goto LAB_06c14bb4;
    plVar11[(long)(int)uVar19 + 4] = (long)plVar12;
    thunk_FUN_03d233cc(plVar11 + (long)(int)uVar19 + 4,plVar12);
    uVar7 = *(uint *)(lVar10 + 0x18);
    uVar19 = uVar19 + 1;
    if ((int)uVar7 <= (int)uVar19) goto LAB_06c143e4;
    goto LAB_06c1429c;
  }
LAB_06c14bb8:
  uVar9 = thunk_FUN_03d0e0d0();
                    /* WARNING: Subroutine does not return */
  FUN_03c8f9fc(uVar9,0);
}


