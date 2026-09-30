/*
FUNCTION_NAME: System.ReadOnlySpan<OVRLocatable.TrackingSpacePose>$$get_IsEmpty
ENTRY_POINT: 049364ac
PROGRAM: waitwhat-libil2cpp.so
SCORE: 121
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_15;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;functionality_gaze_retrieval_or_extraction
*/


void System_ReadOnlySpan<OVRLocatable_TrackingSpacePose>__get_IsEmpty(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long unaff_x19;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auVar16 [16];
  
  fVar14 = *(float *)(unaff_x19 + 0x4bc);
  fVar9 = (float)FUN_06b206b8();
  if (*(long *)(unaff_x19 + 0x528) != 0) {
    fVar10 = (float)FUN_06b206b8(*(long *)(unaff_x19 + 0x528),0);
    if ((*(long *)(unaff_x19 + 0x528) != 0) &&
       (plVar3 = (long *)FUN_06b18750(*(long *)(unaff_x19 + 0x528),0), puVar1 = PTR_DAT_070f24a8,
       plVar3 != (long *)0x0)) {
      lVar5 = *plVar3;
      uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_070f24a8) {
            puVar4 = (undefined8 *)(lVar5 + (long)(*piVar8 + 0x2c) * 0x10 + 0x138);
            goto LAB_04936544;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined8 *)FUN_031c0d08(plVar3,*(long *)PTR_DAT_070f24a8,0x2c);
LAB_04936544:
      fVar11 = (float)(*(code *)*puVar4)(plVar3,puVar4[1]);
      plVar3 = (long *)FUN_06b18750();
      if (plVar3 != (long *)0x0) {
        lVar5 = *plVar3;
        uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
              puVar4 = (undefined8 *)(lVar5 + (long)(*piVar8 + 0x2c) * 0x10 + 0x138);
              goto System_ReadOnlySpan<OVRPlugin_SpaceDiscoveryResult>___ctor;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar4 = (undefined8 *)FUN_031c0d08(plVar3,*(long *)puVar1,0x2c);
System_ReadOnlySpan<OVRPlugin_SpaceDiscoveryResult>___ctor:
        fVar12 = (float)(*(code *)*puVar4)(plVar3,puVar4[1]);
        fVar15 = *(float *)(unaff_x19 + 0x4c0);
        plVar3 = (long *)FUN_06b18750();
        if (plVar3 != (long *)0x0) {
          lVar5 = *plVar3;
          uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar7 != 0) {
            piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
                puVar4 = (undefined8 *)(lVar5 + (long)(*piVar8 + 0x2c) * 0x10 + 0x138);
                goto LAB_04936630;
              }
              uVar7 = uVar7 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar7 != 0);
          }
          puVar4 = (undefined8 *)FUN_031c0d08(plVar3,*(long *)puVar1,0x2c);
LAB_04936630:
          fVar13 = (float)(*(code *)*puVar4)(plVar3,puVar4[1]);
          lVar5 = *(long *)(unaff_x19 + 0x520);
          if (lVar5 == 0) {
            lVar5 = *(long *)(unaff_x19 + 0x528);
          }
          if (*(long *)(unaff_x19 + 0x500) != 0) {
            fVar11 = (fVar9 - fVar10) - fVar11;
            plVar3 = (long *)FUN_06b1e818(*(long *)(unaff_x19 + 0x500),0);
            auVar16 = FUN_06b3dc78((fVar15 - fVar11) - fVar13,0);
            puVar2 = PTR_DAT_070f24b0;
            if (plVar3 != (long *)0x0) {
              lVar6 = *plVar3;
              uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
              if (uVar7 != 0) {
                piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_070f24b0) {
                    puVar4 = (undefined8 *)(lVar6 + (long)(*piVar8 + 0x55) * 0x10 + 0x138);
                    goto FUN_049366e0;
                  }
                  uVar7 = uVar7 - 1;
                  piVar8 = piVar8 + 4;
                } while (uVar7 != 0);
              }
              puVar4 = (undefined8 *)FUN_031c0d08(plVar3,*(long *)PTR_DAT_070f24b0,0x55);
FUN_049366e0:
              (*(code *)*puVar4)(plVar3,auVar16._0_8_,auVar16._8_8_ & 0xffffffff,puVar4[1]);
              if ((lVar5 != 0) && (plVar3 = (long *)FUN_06b18750(lVar5,0), plVar3 != (long *)0x0)) {
                lVar5 = *plVar3;
                uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
                if (uVar7 != 0) {
                  piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
                      puVar4 = (undefined8 *)(lVar5 + (long)(*piVar8 + 0x4e) * 0x10 + 0x138);
                      goto System_ReadOnlySpan<OVRPlugin_SpaceDiscoveryResult>__TryCopyTo;
                    }
                    uVar7 = uVar7 - 1;
                    piVar8 = piVar8 + 4;
                  } while (uVar7 != 0);
                }
                puVar4 = (undefined8 *)FUN_031c0d08(plVar3,*(long *)puVar1,0x4e);
System_ReadOnlySpan<OVRPlugin_SpaceDiscoveryResult>__TryCopyTo:
                fVar9 = (float)(*(code *)*puVar4)(plVar3,puVar4[1]);
                if (*(long *)(unaff_x19 + 0x500) != 0) {
                  fVar10 = *(float *)(unaff_x19 + 0x4b8);
                  plVar3 = (long *)FUN_06b18750(*(long *)(unaff_x19 + 0x500),0);
                  if (plVar3 != (long *)0x0) {
                    lVar5 = *plVar3;
                    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
                    fVar9 = (float)(int)(fVar9 * fVar10) - (fVar14 + fVar11 + fVar12);
                    if (uVar7 != 0) {
                      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
                          puVar4 = (undefined8 *)(lVar5 + (long)(*piVar8 + 0x4e) * 0x10 + 0x138);
                          goto LAB_049367ec;
                        }
                        uVar7 = uVar7 - 1;
                        piVar8 = piVar8 + 4;
                      } while (uVar7 != 0);
                    }
                    puVar4 = (undefined8 *)FUN_031c0d08(plVar3,*(long *)puVar1,0x4e);
LAB_049367ec:
                    fVar14 = (float)(*(code *)*puVar4)(plVar3,puVar4[1]);
                    if (ABS(fVar14 - fVar9) <= DAT_012e37c4) {
                      return;
                    }
                    if (*(long *)(unaff_x19 + 0x500) != 0) {
                      plVar3 = (long *)FUN_06b1e818(*(long *)(unaff_x19 + 0x500),0);
                      fVar14 = 0.0;
                      if (0.0 <= fVar9) {
                        fVar14 = fVar9;
                      }
                      auVar16 = FUN_06b3dc78(fVar14,0);
                      if (plVar3 != (long *)0x0) {
                        lVar5 = *plVar3;
                        uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
                        if (uVar7 != 0) {
                          piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
                              puVar4 = (undefined8 *)(lVar5 + (long)(*piVar8 + 0xa5) * 0x10 + 0x138)
                              ;
                              goto LAB_049368b0;
                            }
                            uVar7 = uVar7 - 1;
                            piVar8 = piVar8 + 4;
                          } while (uVar7 != 0);
                        }
                        puVar4 = (undefined8 *)FUN_031c0d08(plVar3,*(long *)puVar2,0xa5);
LAB_049368b0:
                    /* WARNING: Could not recover jumptable at 0x049368dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                        (*(code *)*puVar4)(plVar3,auVar16._0_8_,auVar16._8_8_ & 0xffffffff,puVar4[1]
                                          );
                        return;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


