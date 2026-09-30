/*
FUNCTION_NAME: OVR.OpenVR.CVRRenderModels._GetComponentStatePacked$$.ctor
ENTRY_POINT: 04f2338c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x04f2388c) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

byte OVR_OpenVR_CVRRenderModels__GetComponentStatePacked___ctor(void)

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
  long unaff_x19;
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
  undefined8 uStack0000000000000038;
  undefined8 uStack0000000000000040;
  undefined8 uStack0000000000000048;
  undefined4 uStack0000000000000050;
  float fStack0000000000000058;
  float fStack000000000000005c;
  float fStack0000000000000060;
  undefined8 uStack0000000000000068;
  undefined4 uStack0000000000000070;
  float fStack0000000000000074;
  undefined4 uStack0000000000000078;
  undefined4 uStack000000000000007c;
  undefined4 uStack0000000000000080;
  long *plStack0000000000000088;
  
  lVar9 = *(long *)(unaff_x19 + 0x70);
  plStack0000000000000088 = (long *)0x0;
  uStack0000000000000068 = 0;
  uStack0000000000000070 = 0;
  fStack0000000000000074 = 0.0;
  uStack0000000000000080 = 0;
  uStack0000000000000078 = 0;
  uStack000000000000007c = 0;
  fStack0000000000000060 = 0.0;
  _fStack0000000000000058 = 0;
  uStack0000000000000038 = 0;
  uStack0000000000000040 = 0;
  uStack0000000000000050 = 0;
  uStack0000000000000048 = 0;
  if (lVar9 != 0) {
    fVar15 = (float)(**(code **)(lVar9 + 0x18))
                              (*(undefined8 *)(lVar9 + 0x40),*(undefined8 *)(lVar9 + 0x28));
    fVar17 = *(float *)(unaff_x19 + 100);
    fVar20 = -(fVar17 * 0.5);
    if (*(char *)(unaff_x19 + 0x94) != '\0') {
      fVar20 = fVar17 * 0.5;
    }
    if ((*(long *)(unaff_x19 + 0x58) != 0) &&
       (plVar13 = *(long **)(*(long *)(unaff_x19 + 0x58) + 0x10), plVar13 != (long *)0x0)) {
      lVar9 = *plVar13;
      fVar21 = *(float *)(unaff_x19 + 0x90);
      fVar22 = *(float *)(unaff_x19 + 0x60);
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
      plStack0000000000000088 = (long *)(*(code *)*puVar7)(plVar13,puVar7[1]);
      puVar6 = System_Collections_Generic_Dictionary<Bounds,_ProbeBrickIndex_Brick[]>_TypeInfo;
      puVar5 = System_Collections_Generic_Dictionary<BodyJointId,_Pose>_TypeInfo;
      puVar4 = System_Runtime_CompilerServices_AsyncTaskMethodBuilder<WebRequestStream>_TypeInfo;
      puVar3 = System_Runtime_Remoting_IRemotingTypeInfo_var;
      puVar2 = PTR_DAT_06312f90;
      if (plStack0000000000000088 != (long *)0x0) {
        bVar14 = 1;
LAB_04f234b4:
        do {
          plVar13 = plStack0000000000000088;
          lVar9 = *plStack0000000000000088;
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
          puVar7 = (undefined8 *)FUN_02b7654c(plStack0000000000000088,*(long *)puVar2,0);
LAB_04f23500:
          uVar11 = (*(code *)*puVar7)(plVar13,puVar7[1]);
          plVar13 = plStack0000000000000088;
          if ((uVar11 & 1) == 0) {
            if (plStack0000000000000088 == (long *)0x0) {
              return bVar14;
            }
            lVar9 = *plStack0000000000000088;
            uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
            if (uVar11 == 0) goto LAB_04f23830;
            piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            goto LAB_04f23818;
          }
          if (plStack0000000000000088 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02b3cac4();
          }
          lVar9 = *plStack0000000000000088;
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
          puVar7 = (undefined8 *)FUN_02b7654c(plStack0000000000000088,*(long *)puVar5,0);
LAB_04f23564:
          lVar9 = (*(code *)*puVar7)(plVar13,puVar7[1]);
          plVar13 = *(long **)(unaff_x19 + 0x28);
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
          uVar11 = (*(code *)*puVar7)(plVar13,1,&stack0x00000068,puVar7[1]);
          if ((uVar11 & 1) != 0) {
            if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02b3cac4();
            }
            plVar13 = *(long **)(unaff_x19 + 0x28);
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
            uVar11 = (*(code *)*puVar7)(plVar13,uVar1,&stack0x00000038,puVar7[1]);
            if ((uVar11 & 1) != 0) {
              plVar13 = *(long **)(unaff_x19 + 0x38);
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
              uVar11 = (*(code *)*puVar7)(plVar13,uVar1,&stack0x00000058,puVar7[1]);
              if ((uVar11 & 1) != 0) {
                fVar18 = fStack0000000000000074;
                fVar16 = (float)FUN_04f238a8();
                fVar16 = fVar16 * fStack0000000000000058;
                fVar18 = fVar18 * fStack000000000000005c;
                fVar19 = fVar17 * fStack0000000000000060;
                if (*(long *)(unaff_x19 + 0x78) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02b3cac4();
                }
                FUN_045a7348(*(long *)(unaff_x19 + 0x78),lVar9,*(undefined8 *)puVar6);
                bVar14 = bVar14 & (fVar15 - fVar21) * (fVar22 + fVar20) < fVar19 + fVar16 + fVar18;
                if (plStack0000000000000088 == (long *)0x0) break;
                goto LAB_04f234b4;
              }
            }
          }
          bVar14 = 0;
        } while (plStack0000000000000088 != (long *)0x0);
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
  puVar7 = (undefined8 *)FUN_02b7654c(plStack0000000000000088,*(long *)PTR_DAT_06312f78,0);
LAB_04f2384c:
  (*(code *)*puVar7)(plVar13,puVar7[1]);
  return bVar14;
}


