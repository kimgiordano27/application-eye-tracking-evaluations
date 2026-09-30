/*
FUNCTION_NAME: FUN_04f232f0
ENTRY_POINT: 04f232f0
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_13;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_3;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


byte FUN_04f232f0(long param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  long *plVar13;
  byte bVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined8 local_110;
  undefined4 uStack_108;
  float fStack_104;
  undefined4 uStack_100;
  undefined8 uStack_fc;
  long local_e8;
  long **local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  float local_b0;
  undefined8 local_a8;
  undefined4 uStack_a0;
  float fStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 local_90;
  long *local_88;
  
  if ((DAT_066c98cb & 1) == 0) {
    FUN_02b3c81c(System_Collections_Generic_Dictionary<Bounds,_ProbeBrickIndex_Brick[]>_TypeInfo);
    FUN_02b3c81c(
                System_Collections_Generic_Dictionary<KeyValuePair<Type,_XmlRootAttribute>,_XmlSerializer>_TypeInfo
                );
    FUN_02b3c81c(PTR_DAT_06312f78);
    FUN_02b3c81c(System_Collections_Generic_Dictionary<BodyJointId,_BodyJointId>_TypeInfo);
    FUN_02b3c81c(System_Collections_Generic_Dictionary<BodyJointId,_Pose>_TypeInfo);
    FUN_02b3c81c(PTR_DAT_06312f90);
    FUN_02b3c81c(System_Runtime_Remoting_IRemotingTypeInfo_var);
    FUN_02b3c81c(System_Runtime_CompilerServices_AsyncTaskMethodBuilder<WebRequestStream>_TypeInfo);
    DAT_066c98cb = 1;
  }
  lVar9 = *(long *)(param_1 + 0x70);
  local_88 = (long *)0x0;
  local_a8 = 0;
  uStack_a0 = 0;
  fStack_9c = 0.0;
  local_90 = 0;
  local_98 = 0;
  uStack_94 = 0;
  local_b0 = 0.0;
  local_b8 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_c0 = 0;
  local_c8 = 0;
  if (lVar9 != 0) {
    fVar15 = (float)(**(code **)(lVar9 + 0x18))
                              (*(undefined8 *)(lVar9 + 0x40),*(undefined8 *)(lVar9 + 0x28));
    fVar17 = *(float *)(param_1 + 100);
    fVar20 = -(fVar17 * 0.5);
    if (*(char *)(param_1 + 0x94) != '\0') {
      fVar20 = fVar17 * 0.5;
    }
    if ((*(long *)(param_1 + 0x58) != 0) &&
       (plVar13 = *(long **)(*(long *)(param_1 + 0x58) + 0x10), plVar13 != (long *)0x0)) {
      lVar9 = *plVar13;
      fVar21 = *(float *)(param_1 + 0x90);
      fVar22 = *(float *)(param_1 + 0x60);
      uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) ==
              *(long *)System_Collections_Generic_Dictionary<BodyJointId,_BodyJointId>_TypeInfo) {
            puVar7 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
            goto OVR_OpenVR_CVRRenderModels__GetComponentStatePacked__BeginInvoke;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar7 = (undefined8 *)
               FUN_02b7654c(plVar13,*(long *)
                                     System_Collections_Generic_Dictionary<BodyJointId,_BodyJointId>_TypeInfo
                            ,0);
OVR_OpenVR_CVRRenderModels__GetComponentStatePacked__BeginInvoke:
      local_88 = (long *)(*(code *)*puVar7)(plVar13,puVar7[1]);
      puVar6 = System_Collections_Generic_Dictionary<Bounds,_ProbeBrickIndex_Brick[]>_TypeInfo;
      puVar5 = System_Collections_Generic_Dictionary<BodyJointId,_Pose>_TypeInfo;
      puVar4 = System_Runtime_CompilerServices_AsyncTaskMethodBuilder<WebRequestStream>_TypeInfo;
      puVar3 = System_Runtime_Remoting_IRemotingTypeInfo_var;
      puVar2 = PTR_DAT_06312f90;
      local_e0 = &local_88;
      local_e8 = 0;
      if (local_88 != (long *)0x0) {
        bVar14 = 1;
LAB_04f234b4:
        do {
          plVar13 = local_88;
          lVar9 = *local_88;
          uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar11 != 0) {
            piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
                puVar7 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
                goto LAB_04f23500;
              }
              uVar11 = uVar11 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar11 != 0);
          }
          puVar7 = (undefined8 *)FUN_02b7654c(local_88,*(long *)puVar2,0);
LAB_04f23500:
          uVar11 = (*(code *)*puVar7)(plVar13,puVar7[1]);
          plVar13 = local_88;
          if ((uVar11 & 1) == 0) {
            plVar13 = *local_e0;
            if (plVar13 == (long *)0x0) goto LAB_04f23858;
            lVar9 = *plVar13;
            uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
            if (uVar11 == 0) goto LAB_04f23830;
            piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            goto LAB_04f23818;
          }
          if (local_88 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02b3cac4();
          }
          lVar9 = *local_88;
          uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar11 != 0) {
            piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == *(long *)puVar5) {
                puVar7 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
                goto LAB_04f23564;
              }
              uVar11 = uVar11 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar11 != 0);
          }
          puVar7 = (undefined8 *)FUN_02b7654c(local_88,*(long *)puVar5,0);
LAB_04f23564:
          lVar9 = (*(code *)*puVar7)(plVar13,puVar7[1]);
          plVar13 = *(long **)(param_1 + 0x28);
          if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02b3cac4();
          }
          lVar10 = *plVar13;
          lVar8 = *(long *)puVar3;
          uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar11 != 0) {
            piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == lVar8) {
                puVar7 = (undefined8 *)(lVar10 + (long)(*piVar12 + 9) * 0x10 + 0x138);
                goto LAB_04f235cc;
              }
              uVar11 = uVar11 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar11 != 0);
          }
          puVar7 = (undefined8 *)FUN_02b7654c(plVar13,lVar8,9);
LAB_04f235cc:
          uVar11 = (*(code *)*puVar7)(plVar13,1,&local_a8,puVar7[1]);
          if ((uVar11 & 1) != 0) {
            if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02b3cac4();
            }
            plVar13 = *(long **)(param_1 + 0x28);
            if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02b3cac4();
            }
            lVar10 = *plVar13;
            uVar1 = *(undefined4 *)(lVar9 + 0x14);
            lVar8 = *(long *)puVar3;
            uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
            if (uVar11 != 0) {
              piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == lVar8) {
                  puVar7 = (undefined8 *)(lVar10 + (long)(*piVar12 + 9) * 0x10 + 0x138);
                  goto LAB_04f23644;
                }
                uVar11 = uVar11 - 1;
                piVar12 = piVar12 + 4;
              } while (uVar11 != 0);
            }
            puVar7 = (undefined8 *)FUN_02b7654c(plVar13,lVar8,9);
LAB_04f23644:
            uVar11 = (*(code *)*puVar7)(plVar13,uVar1,&local_d8,puVar7[1]);
            if ((uVar11 & 1) != 0) {
              plVar13 = *(long **)(param_1 + 0x38);
              if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02b3cac4();
              }
              lVar8 = *plVar13;
              uVar1 = *(undefined4 *)(lVar9 + 0x14);
              uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
              if (uVar11 != 0) {
                piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar12 + -2) == *(long *)puVar4) {
                    puVar7 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
                    goto LAB_04f236b4;
                  }
                  uVar11 = uVar11 - 1;
                  piVar12 = piVar12 + 4;
                } while (uVar11 != 0);
              }
              puVar7 = (undefined8 *)FUN_02b7654c(plVar13,*(long *)puVar4,0);
LAB_04f236b4:
              uVar11 = (*(code *)*puVar7)(plVar13,uVar1,&local_b8,puVar7[1]);
              if ((uVar11 & 1) != 0) {
                uStack_fc = CONCAT44(local_90,uStack_94);
                uStack_108 = uStack_a0;
                local_110 = local_a8;
                fStack_104 = fStack_9c;
                uStack_100 = local_98;
                fVar18 = fStack_9c;
                fVar16 = (float)FUN_04f238a8(param_1,&local_110,lVar9);
                fVar16 = fVar16 * (float)local_b8;
                fVar18 = fVar18 * local_b8._4_4_;
                fVar19 = fVar17 * local_b0;
                if (*(long *)(param_1 + 0x78) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02b3cac4();
                }
                FUN_045a7348(*(long *)(param_1 + 0x78),lVar9,*(undefined8 *)puVar6);
                bVar14 = bVar14 & (fVar15 - fVar21) * (fVar22 + fVar20) < fVar19 + fVar16 + fVar18;
                if (local_88 == (long *)0x0) break;
                goto LAB_04f234b4;
              }
            }
          }
          bVar14 = 0;
        } while (local_88 != (long *)0x0);
      }
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar12 = piVar12 + 4;
    if (uVar11 == 0) break;
LAB_04f23818:
    if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_06312f78) {
      puVar7 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_04f2384c;
    }
  }
LAB_04f23830:
  puVar7 = (undefined8 *)FUN_02b7654c(plVar13,*(long *)PTR_DAT_06312f78,0);
LAB_04f2384c:
  (*(code *)*puVar7)(plVar13,puVar7[1]);
LAB_04f23858:
  if (local_e8 == 0) {
    return bVar14;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cabc();
}


