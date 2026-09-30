/*
FUNCTION_NAME: Meta.XR.Movement.FaceTracking.Samples.FaceRetargeterComponent$$GetInputNames
ENTRY_POINT: 06c13420
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_3;validity_or_gating_hits_21;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_Movement_FaceTracking_Samples_FaceRetargeterComponent__GetInputNames(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  long *plVar17;
  ulong uVar18;
  undefined8 unaff_x19;
  long *unaff_x23;
  uint uVar19;
  undefined8 *unaff_x29;
  
  FUN_06a4e380();
  FUN_0710fcf0(*(undefined8 *)PTR_DAT_08e80e98,0);
  FUN_06a4e380();
  FUN_0710fcf0(*(undefined8 *)PTR_DAT_08e80ea8,0);
  FUN_06a4e380();
  FUN_0710fcf0(*(undefined8 *)PTR_DAT_08e80e90,0);
  FUN_06a4e380();
  FUN_0710fcf0(*(undefined8 *)PTR_DAT_08e80e50,0);
  FUN_06a4e380();
  FUN_0710fcf0(*(undefined8 *)PTR_DAT_08e80e40,0);
  FUN_06a4e380();
  FUN_0710fcf0(*(undefined8 *)PTR_DAT_08e879c0,0);
  FUN_06a4e380();
  *(undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x20) = unaff_x19;
  thunk_FUN_03d233cc();
  uVar10 = thunk_FUN_03cf5234(*(undefined8 *)PTR_DAT_08e697c0);
  FUN_05212530(uVar10,8,*(undefined8 *)PTR_DAT_08e879f0);
  puVar11 = (undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x28);
  *puVar11 = uVar10;
  thunk_FUN_03d233cc(puVar11,uVar10);
  lVar12 = FUN_03c8f97c(*unaff_x29,5);
  if (lVar12 == 0) goto LAB_06c13a74;
  if (*(int *)(lVar12 + 0x18) != 0) {
    *(undefined8 *)(lVar12 + 0x20) = *(undefined8 *)PTR_DAT_08e87b18;
    thunk_FUN_03d233cc((undefined8 *)(lVar12 + 0x20));
    if (1 < *(uint *)(lVar12 + 0x18)) {
      *(undefined8 *)(lVar12 + 0x28) = *(undefined8 *)PTR_DAT_08e87a50;
      thunk_FUN_03d233cc((undefined8 *)(lVar12 + 0x28));
      if (2 < *(uint *)(lVar12 + 0x18)) {
        *(undefined8 *)(lVar12 + 0x30) = *(undefined8 *)PTR_DAT_08e7a530;
        thunk_FUN_03d233cc((undefined8 *)(lVar12 + 0x30));
        if (3 < *(uint *)(lVar12 + 0x18)) {
          *(undefined8 *)(lVar12 + 0x38) = *(undefined8 *)PTR_DAT_08e82b08;
          thunk_FUN_03d233cc((undefined8 *)(lVar12 + 0x38));
          puVar3 = PTR_DAT_08e87a28;
          puVar2 = PTR_DAT_08e693f0;
          if (4 < *(uint *)(lVar12 + 0x18)) {
            *(undefined8 *)(lVar12 + 0x40) = *(undefined8 *)PTR_DAT_08e87a40;
            thunk_FUN_03d233cc();
            plVar13 = (long *)(*(long *)(*unaff_x23 + 0xb8) + 0x30);
            *plVar13 = lVar12;
            thunk_FUN_03d233cc(plVar13,lVar12);
            plVar13 = (long *)thunk_FUN_03cf5234(*(undefined8 *)puVar2);
            FUN_070c2b80(plVar13,*(undefined8 *)puVar3,0);
            puVar9 = PTR_DAT_08e87b10;
            puVar8 = PTR_DAT_08e87aa0;
            puVar7 = PTR_DAT_08e87a98;
            puVar6 = PTR_DAT_08e878d8;
            puVar5 = PTR_DAT_08e878d0;
            puVar4 = PTR_DAT_08e878c8;
            puVar3 = PTR_DAT_08e6eab8;
            puVar2 = PTR_DAT_08e69e98;
            if (plVar13 != (long *)0x0) {
              uVar10 = (**(code **)(*plVar13 + 0x218))(plVar13,*(undefined8 *)(*plVar13 + 0x220));
              puVar11 = (undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x38);
              *puVar11 = uVar10;
              thunk_FUN_03d233cc(puVar11,uVar10);
              uVar10 = thunk_FUN_03cf5234(*(undefined8 *)puVar2);
              FUN_07064478(uVar10,0,*(undefined8 *)puVar6,0);
              FUN_06c13b2c(*(undefined8 *)puVar8,*(undefined8 *)puVar7,uVar10);
              uVar10 = thunk_FUN_03cf5234(*(undefined8 *)puVar3);
              System_Array_InternalEnumerator<Dictionary_Entry<object,_OvrGpuMorphTargetsCombiner_BlockData>>___ctor
                        (uVar10,0,*(undefined8 *)puVar5,0);
              FUN_045f4494(*(undefined8 *)puVar8,*(undefined8 *)puVar9,uVar10,*(undefined8 *)puVar4)
              ;
              lVar12 = FUN_03c8f97c(*unaff_x29,0xc);
              if (lVar12 != 0) {
                if (*(int *)(lVar12 + 0x18) != 0) {
                  *(undefined8 *)(lVar12 + 0x20) = *(undefined8 *)PTR_DAT_08e87aa8;
                  thunk_FUN_03d233cc((undefined8 *)(lVar12 + 0x20));
                  if (1 < *(uint *)(lVar12 + 0x18)) {
                    *(undefined8 *)(lVar12 + 0x28) = *(undefined8 *)PTR_DAT_08e87a48;
                    thunk_FUN_03d233cc((undefined8 *)(lVar12 + 0x28));
                    if (2 < *(uint *)(lVar12 + 0x18)) {
                      *(undefined8 *)(lVar12 + 0x30) = *(undefined8 *)PTR_DAT_08e87af8;
                      thunk_FUN_03d233cc((undefined8 *)(lVar12 + 0x30));
                      if (3 < *(uint *)(lVar12 + 0x18)) {
                        *(undefined8 *)(lVar12 + 0x38) = *(undefined8 *)PTR_DAT_08e87a80;
                        thunk_FUN_03d233cc((undefined8 *)(lVar12 + 0x38));
                        if (4 < *(uint *)(lVar12 + 0x18)) {
                          *(undefined8 *)(lVar12 + 0x40) = *(undefined8 *)PTR_DAT_08e87a68;
                          thunk_FUN_03d233cc((undefined8 *)(lVar12 + 0x40));
                          if (5 < *(uint *)(lVar12 + 0x18)) {
                            *(undefined8 *)(lVar12 + 0x48) = *(undefined8 *)PTR_DAT_08e87ac8;
                            thunk_FUN_03d233cc((undefined8 *)(lVar12 + 0x48));
                            if (6 < *(uint *)(lVar12 + 0x18)) {
                              *(undefined8 *)(lVar12 + 0x50) = *(undefined8 *)PTR_DAT_08e87ab0;
                              thunk_FUN_03d233cc((undefined8 *)(lVar12 + 0x50));
                              if (7 < *(uint *)(lVar12 + 0x18)) {
                                *(undefined8 *)(lVar12 + 0x58) = *(undefined8 *)PTR_DAT_08e87ad8;
                                thunk_FUN_03d233cc((undefined8 *)(lVar12 + 0x58));
                                if (8 < *(uint *)(lVar12 + 0x18)) {
                                  *(undefined8 *)(lVar12 + 0x60) = *(undefined8 *)PTR_DAT_08e87ab8;
                                  thunk_FUN_03d233cc((undefined8 *)(lVar12 + 0x60));
                                  if (9 < *(uint *)(lVar12 + 0x18)) {
                                    *(undefined8 *)(lVar12 + 0x68) = *(undefined8 *)PTR_DAT_08e87ae8
                                    ;
                                    thunk_FUN_03d233cc((undefined8 *)(lVar12 + 0x68));
                                    if (10 < *(uint *)(lVar12 + 0x18)) {
                                      *(undefined8 *)(lVar12 + 0x70) =
                                           *(undefined8 *)PTR_DAT_08e87a90;
                                      thunk_FUN_03d233cc((undefined8 *)(lVar12 + 0x70));
                                      if (0xb < *(uint *)(lVar12 + 0x18)) {
                                        *(undefined8 *)(lVar12 + 0x78) =
                                             *(undefined8 *)PTR_DAT_08e87ad0;
                                        thunk_FUN_03d233cc();
                                        lVar14 = thunk_FUN_03d11648(0);
                                        if ((lVar14 != 0) &&
                                           (lVar14 = FUN_07147824(lVar14,0), lVar14 != 0)) {
                                          uVar1 = *(uint *)(lVar14 + 0x18);
                                          if (0 < (int)uVar1) {
                                            uVar19 = 0;
                                            do {
                                              if (uVar1 <= uVar19) goto LAB_06c13a70;
                                              plVar13 = *(long **)(lVar14 + (long)(int)uVar19 * 8 +
                                                                  0x20);
                                              if (plVar13 == (long *)0x0) goto LAB_06c13a74;
                                              uVar15 = (**(code **)(*plVar13 + 0x328))
                                                                 (plVar13,*(undefined8 *)
                                                                           (*plVar13 + 0x330));
                                              if ((uVar15 & 1) == 0) {
                                                lVar16 = (**(code **)(*plVar13 + 0x2a8))
                                                                   (plVar13,*(undefined8 *)
                                                                             (*plVar13 + 0x2b0));
                                                if (lVar16 == 0) goto LAB_06c13a74;
                                                if (0 < (int)*(ulong *)(lVar12 + 0x18)) {
                                                  uVar10 = *(undefined8 *)(lVar16 + 0x10);
                                                  uVar15 = 0;
                                                  uVar18 = *(ulong *)(lVar12 + 0x18) & 0xffffffff;
                                                  do {
                                                    if (uVar18 <= uVar15) goto LAB_06c13a70;
                                                    plVar17 = *(long **)(*(long *)(*unaff_x23 + 0xb8
                                                                                  ) + 0x38);
                                                    if (plVar17 == (long *)0x0) goto LAB_06c13a74;
                                                    uVar18 = (**(code **)(*plVar17 + 0x1c8))
                                                                       (plVar17,uVar10,
                                                                        *(undefined8 *)
                                                                         (lVar12 + 0x20 + uVar15 * 8
                                                                         ),1,*(undefined8 *)
                                                                              (*plVar17 + 0x1d0));
                                                    if ((uVar18 & 1) != 0) goto LAB_06c13a44;
                                                    uVar18 = (ulong)*(uint *)(lVar12 + 0x18);
                                                    uVar15 = uVar15 + 1;
                                                  } while ((long)uVar15 <
                                                           (long)(int)*(uint *)(lVar12 + 0x18));
                                                }
                                                Meta_XR_Movement_FaceTracking_Samples_FaceRetargeterComponent___ctor
                                                          (plVar13);
                                              }
LAB_06c13a44:
                                              uVar1 = *(uint *)(lVar14 + 0x18);
                                              uVar19 = uVar19 + 1;
                                            } while ((int)uVar19 < (int)uVar1);
                                          }
                                          return;
                                        }
                                        goto LAB_06c13a74;
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
                }
                goto LAB_06c13a70;
              }
            }
LAB_06c13a74:
                    /* WARNING: Subroutine does not return */
            FUN_03c8fb30();
          }
        }
      }
    }
  }
LAB_06c13a70:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb38();
}


