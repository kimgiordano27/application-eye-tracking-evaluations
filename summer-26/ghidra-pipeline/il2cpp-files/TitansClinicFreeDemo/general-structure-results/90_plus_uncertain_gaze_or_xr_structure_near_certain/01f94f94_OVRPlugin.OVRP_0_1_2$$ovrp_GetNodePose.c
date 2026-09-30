/*
FUNCTION_NAME: OVRPlugin.OVRP_0_1_2$$ovrp_GetNodePose
ENTRY_POINT: 01f94f94
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 109
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_10;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;functionality_gaze_retrieval_or_extraction
*/


long OVRPlugin_OVRP_0_1_2__ovrp_GetNodePose(long param_1)

{
  byte bVar1;
  undefined *puVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  undefined8 uVar12;
  long *plVar13;
  uint uVar14;
  long unaff_x19;
  uint uVar15;
  long unaff_x20;
  long unaff_x21;
  uint uVar16;
  undefined8 uVar17;
  long lVar18;
  long *unaff_x25;
  long lVar19;
  long *plVar20;
  ulong uVar21;
  uint uStack000000000000001c;
  
  thunk_FUN_01279b34(*(undefined8 *)(param_1 + 0xc30));
  thunk_FUN_01279b34(PTR_DAT_027c1c38);
  *(undefined1 *)(unaff_x20 + 0xefc) = 1;
  puVar2 = PTR_DAT_027c1c38;
  if (unaff_x19 != 0) {
    lVar5 = *(long *)PTR_DAT_027c1c38;
                    /* try { // try from 01f94fc4 to 02094fc7 has its CatchHandler @ 01f95078 */
    if (*(int *)(lVar5 + 0xe0) == 0) {
                    /* try { // try from 01f94fc8 to 02094fdf has its CatchHandler @ 01f95080 */
      thunk_FUN_01220628();
      lVar5 = *(long *)puVar2;
    }
    if (*(long *)(*(long *)(lVar5 + 0xb8) + 8) == 0) {
      if (*(int *)(lVar5 + 0xe0) == 0) {
                    /* try { // try from 01f94fec to 02095033 has its CatchHandler @ 01f9508c */
        thunk_FUN_01220628();
        lVar5 = *(long *)puVar2;
      }
      uVar17 = **(undefined8 **)(lVar5 + 0xb8);
      uVar6 = thunk_FUN_0124bba8(*(undefined8 *)PTR_DAT_027c1c28);
      FUN_01b3fbf8(uVar6,uVar17,*(undefined8 *)PTR_DAT_027c1c30,0);
      puVar7 = (undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
      *puVar7 = uVar6;
      thunk_FUN_01286abc(puVar7,uVar6);
    }
    uVar8 = FUN_013edd6c();
    if ((uVar8 & 1) == 0) {
      thunk_FUN_01279b34(PTR_DAT_027b3df8);
      uVar6 = thunk_FUN_0124bba8();
      uVar17 = thunk_FUN_01279b34(PTR_DAT_027c1c48);
      FUN_01e75914(uVar6,uVar17,0);
      uVar17 = thunk_FUN_01279b34(PTR_DAT_027c1c40);
                    /* WARNING: Subroutine does not return */
      FUN_01230b78(uVar6,uVar17);
    }
  }
  if ((unaff_x21 == 0) || (*(long *)(unaff_x21 + 0x18) == 0)) {
    uVar17 = thunk_FUN_01279b34(PTR_DAT_027c1be8);
    thunk_FUN_01279b34(PTR_DAT_027b3eb0);
    uVar6 = thunk_FUN_0124bba8();
    uVar12 = thunk_FUN_01279b34(PTR_DAT_027b3fe8);
    FUN_01e7598c(uVar6,uVar17,uVar12,0);
    goto LAB_01f95884;
  }
  lVar5 = FUN_01f8a1a8();
  if (lVar5 == 0) {
    plVar9 = (long *)0x0;
    if (unaff_x19 == 0) goto LAB_01f950a4;
LAB_01f95090:
    uVar15 = *(uint *)(unaff_x19 + 0x18);
    plVar11 = (long *)PTR_DAT_027b32e0;
  }
  else {
    uVar6 = *(undefined8 *)PTR_DAT_027bcec8;
    plVar9 = (long *)thunk_FUN_0124baac(lVar5,uVar6);
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01230f60(lVar5,uVar6);
    }
    if (unaff_x19 != 0) goto LAB_01f95090;
LAB_01f950a4:
    uVar15 = 0;
    plVar11 = (long *)PTR_DAT_027b32e0;
  }
  PTR_DAT_027b32e0 = (undefined *)plVar11;
  if (plVar9 == (long *)0x0) {
LAB_01f95820:
                    /* WARNING: Subroutine does not return */
    FUN_01230ca0();
  }
  uVar8 = plVar9[3] & 0xffffffff;
  if ((int)plVar9[3] < 1) {
    uStack000000000000001c = 0;
  }
  else {
    uStack000000000000001c = 0;
    uVar16 = 0;
    uVar21 = 0;
    do {
      if (unaff_x19 == 0) {
LAB_01f95344:
        if (uVar16 == uVar15) {
OVRPlugin_OVRP_1_0_0__ovrp_GetTrackingOriginType:
          if (*(int *)(*plVar11 + 0xe0) == 0) {
            thunk_FUN_01220628();
          }
          uVar8 = FUN_01f801dc(unaff_x25,0,0);
          uVar16 = uVar15;
          if ((uVar8 & 1) == 0) {
LAB_01f95524:
            uVar14 = *(uint *)(plVar9 + 3);
            if (uVar14 <= uVar21) goto LAB_01f9581c;
            lVar5 = plVar9[uVar21 + 4];
            if (lVar5 != 0) {
              lVar19 = thunk_FUN_0124baac(lVar5,*(undefined8 *)(*plVar9 + 0x40));
              if (lVar19 == 0) {
                uVar6 = thunk_FUN_012668ac();
                    /* WARNING: Subroutine does not return */
                FUN_01230b78(uVar6,0);
              }
              uVar14 = (uint)plVar9[3];
            }
            if (uVar14 <= uStack000000000000001c) goto LAB_01f9581c;
            lVar19 = (long)(int)uStack000000000000001c;
            plVar9[lVar19 + 4] = lVar5;
            uStack000000000000001c = uStack000000000000001c + 1;
            thunk_FUN_01286abc(plVar9 + lVar19 + 4,lVar5);
          }
          else {
            if (*(uint *)(plVar9 + 3) <= uVar21) goto LAB_01f9581c;
            plVar20 = plVar9 + uVar21 + 4;
            plVar10 = (long *)*plVar20;
            if ((plVar10 == (long *)0x0) ||
               (lVar5 = (**(code **)(*plVar10 + 0x228))(plVar10,*(undefined8 *)(*plVar10 + 0x230)),
               lVar5 == 0)) goto LAB_01f95820;
            uVar8 = FUN_01f81644(lVar5,0);
            if ((uVar8 & 1) == 0) {
              if (*(uint *)(plVar9 + 3) <= uVar21) goto LAB_01f9581c;
              plVar20 = (long *)*plVar20;
              if ((plVar20 == (long *)0x0) ||
                 (plVar10 = (long *)(**(code **)(*plVar20 + 0x228))
                                              (plVar20,*(undefined8 *)(*plVar20 + 0x230)),
                 plVar10 == (long *)0x0)) goto LAB_01f95820;
              uVar8 = (**(code **)(*plVar10 + 0x288))
                                (plVar10,unaff_x25,*(undefined8 *)(*plVar10 + 0x290));
joined_r0x01f95520:
              if ((uVar8 & 1) != 0) goto LAB_01f95524;
            }
            else {
              if (unaff_x25 == (long *)0x0) goto LAB_01f95820;
              plVar10 = (long *)(**(code **)(*unaff_x25 + 0x308))
                                          (unaff_x25,*(undefined8 *)(*unaff_x25 + 0x310));
              if (plVar10 != (long *)0x0) {
                bVar1 = *(byte *)(*(long *)PTR_DAT_027b3ec0 + 0x130);
                if ((bVar1 <= *(byte *)(*plVar10 + 0x130)) &&
                   (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) ==
                    *(long *)PTR_DAT_027b3ec0)) {
                  plVar13 = (long *)(**(code **)(*unaff_x25 + 0x308))
                                              (unaff_x25,*(undefined8 *)(*unaff_x25 + 0x310));
                  if (uVar21 < *(uint *)(plVar9 + 3)) {
                    plVar20 = (long *)*plVar20;
                    if ((plVar20 != (long *)0x0) &&
                       (plVar10 = (long *)(**(code **)(*plVar20 + 0x228))
                                                    (plVar20,*(undefined8 *)(*plVar20 + 0x230)),
                       plVar10 != (long *)0x0)) {
                      plVar10 = (long *)(**(code **)(*plVar10 + 0x308))
                                                  (plVar10,*(undefined8 *)(*plVar10 + 0x310));
                      if (*(int *)(*(long *)PTR_DAT_027c1390 + 0xe0) == 0) {
                        thunk_FUN_01220628(*(long *)PTR_DAT_027c1390);
                      }
                      lVar5 = *(long *)PTR_DAT_027b3ec0;
                      if (plVar13 != (long *)0x0) {
                        if ((*(byte *)(*plVar13 + 0x130) < *(byte *)(lVar5 + 0x130)) ||
                           (*(long *)(*(long *)(*plVar13 + 200) +
                                      (ulong)*(byte *)(lVar5 + 0x130) * 8 + -8) != lVar5)) {
                    /* WARNING: Subroutine does not return */
                          FUN_01230f60(plVar13);
                        }
                      }
                      if (plVar10 != (long *)0x0) {
                        if ((*(byte *)(*plVar10 + 0x130) < *(byte *)(lVar5 + 0x130)) ||
                           (*(long *)(*(long *)(*plVar10 + 200) +
                                      (ulong)*(byte *)(lVar5 + 0x130) * 8 + -8) != lVar5)) {
LAB_01f95824:
                    /* WARNING: Subroutine does not return */
                          FUN_01230f60(plVar10);
                        }
                      }
                      uVar8 = FUN_01f958f8(plVar13,plVar10);
                      goto joined_r0x01f95520;
                    }
                    goto LAB_01f95820;
                  }
                  goto LAB_01f9581c;
                }
              }
            }
          }
        }
      }
      else {
        if (uVar8 <= uVar21) goto LAB_01f9581c;
        plVar10 = (long *)plVar9[uVar21 + 4];
        if ((plVar10 == (long *)0x0) ||
           (lVar5 = (**(code **)(*plVar10 + 0x238))(plVar10,*(undefined8 *)(*plVar10 + 0x240)),
           lVar5 == 0)) goto LAB_01f95820;
        uVar14 = (uint)*(undefined8 *)(lVar5 + 0x18);
        if (uVar15 == uVar14) {
          if ((int)uVar15 < 1) {
            uVar16 = 0;
            goto LAB_01f95344;
          }
          if (uVar14 != 0) {
            lVar19 = 0;
            uVar14 = 1;
            while( true ) {
              plVar10 = *(long **)(lVar5 + lVar19 * 8 + 0x20);
              if (plVar10 == (long *)0x0) goto LAB_01f95820;
              uVar16 = uVar14 - 1;
              plVar10 = (long *)(**(code **)(*plVar10 + 0x1d8))
                                          (plVar10,*(undefined8 *)(*plVar10 + 0x1e0));
              if (*(uint *)(unaff_x19 + 0x18) <= uVar16) goto LAB_01f9581c;
              plVar20 = (long *)(unaff_x19 + lVar19 * 8 + 0x20);
              lVar19 = *plVar20;
              if (*(int *)(*plVar11 + 0xe0) == 0) {
                thunk_FUN_01220628();
              }
              uVar8 = FUN_01f7f404(plVar10,lVar19,0);
              if ((uVar8 & 1) == 0) {
                uVar6 = *(undefined8 *)PTR_DAT_027b5b48;
                if (*(int *)(*plVar11 + 0xe0) == 0) {
                  thunk_FUN_01220628();
                }
                uVar6 = FUN_01f7d8a0(uVar6,0);
                uVar8 = FUN_01f7f404(plVar10,uVar6,0);
                if ((uVar8 & 1) == 0) {
                  if (plVar10 == (long *)0x0) goto LAB_01f95820;
                  uVar8 = FUN_01f81644(plVar10,0);
                  if (*(uint *)(unaff_x19 + 0x18) <= uVar16) goto LAB_01f9581c;
                  plVar13 = (long *)*plVar20;
                  if ((uVar8 & 1) == 0) {
                    uVar8 = (**(code **)(*plVar10 + 0x288))
                                      (plVar10,plVar13,*(undefined8 *)(*plVar10 + 0x290));
                  }
                  else {
                    if (plVar13 == (long *)0x0) goto LAB_01f95820;
                    plVar13 = (long *)(**(code **)(*plVar13 + 0x308))
                                                (plVar13,*(undefined8 *)(*plVar13 + 0x310));
                    if (plVar13 == (long *)0x0) goto LAB_01f95344;
                    bVar1 = *(byte *)(*(long *)PTR_DAT_027b3ec0 + 0x130);
                    if ((*(byte *)(*plVar13 + 0x130) < bVar1) ||
                       (*(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar1 * 8 + -8) !=
                        *(long *)PTR_DAT_027b3ec0)) goto LAB_01f95344;
                    if (*(uint *)(unaff_x19 + 0x18) <= uVar16) goto LAB_01f9581c;
                    plVar20 = (long *)*plVar20;
                    if (plVar20 == (long *)0x0) goto LAB_01f95820;
                    plVar20 = (long *)(**(code **)(*plVar20 + 0x308))
                                                (plVar20,*(undefined8 *)(*plVar20 + 0x310));
                    plVar10 = (long *)(**(code **)(*plVar10 + 0x308))
                                                (plVar10,*(undefined8 *)(*plVar10 + 0x310));
                    if (*(int *)(*(long *)PTR_DAT_027c1390 + 0xe0) == 0) {
                      thunk_FUN_01220628(*(long *)PTR_DAT_027c1390);
                    }
                    lVar19 = *(long *)PTR_DAT_027b3ec0;
                    if (plVar20 != (long *)0x0) {
                      if ((*(byte *)(*plVar20 + 0x130) < *(byte *)(lVar19 + 0x130)) ||
                         (*(long *)(*(long *)(*plVar20 + 200) + (ulong)*(byte *)(lVar19 + 0x130) * 8
                                   + -8) != lVar19)) {
                    /* WARNING: Subroutine does not return */
                        FUN_01230f60(plVar20);
                      }
                    }
                    if (plVar10 != (long *)0x0) {
                      if ((*(byte *)(*plVar10 + 0x130) < *(byte *)(lVar19 + 0x130)) ||
                         (*(long *)(*(long *)(*plVar10 + 200) + (ulong)*(byte *)(lVar19 + 0x130) * 8
                                   + -8) != lVar19)) goto LAB_01f95824;
                    }
                    uVar8 = FUN_01f958f8(plVar20,plVar10);
                  }
                  if ((uVar8 & 1) == 0) goto LAB_01f95344;
                }
              }
              if (uVar15 == uVar14) break;
              lVar19 = (long)(int)uVar14;
              bVar3 = *(uint *)(lVar5 + 0x18) <= uVar14;
              uVar14 = uVar14 + 1;
              if (bVar3) goto LAB_01f9581c;
            }
            goto OVRPlugin_OVRP_1_0_0__ovrp_GetTrackingOriginType;
          }
          goto LAB_01f9581c;
        }
      }
      uVar8 = (ulong)*(uint *)(plVar9 + 3);
      uVar21 = uVar21 + 1;
    } while ((long)uVar21 < (long)(int)*(uint *)(plVar9 + 3));
  }
  if (uStack000000000000001c == 0) {
    lVar5 = 0;
  }
  else {
    if (uStack000000000000001c == 1) {
      if ((int)uVar8 == 0) {
LAB_01f9581c:
                    /* WARNING: Subroutine does not return */
        FUN_01230ca8();
      }
    }
    else {
      lVar5 = FUN_01230af8(*(undefined8 *)PTR_DAT_027b1ca8,uVar15);
      if (0 < (int)uVar15) {
        if (lVar5 == 0) goto LAB_01f95820;
        uVar16 = *(uint *)(lVar5 + 0x18);
        uVar8 = 0;
        do {
          if (uVar16 <= uVar8) goto LAB_01f9581c;
          *(int *)(lVar5 + 0x20 + uVar8 * 4) = (int)uVar8;
          uVar8 = uVar8 + 1;
        } while (uVar15 != uVar8);
      }
      if ((int)uStack000000000000001c < 2) {
        uVar15 = 0;
      }
      else {
        bVar3 = false;
        uVar16 = 1;
        uVar14 = 0;
        do {
          if (*(uint *)(plVar9 + 3) <= uVar14) goto LAB_01f9581c;
          plVar10 = plVar9 + (long)(int)uVar14 + 4;
          plVar11 = (long *)*plVar10;
          if (plVar11 == (long *)0x0) goto LAB_01f95820;
          uVar6 = (**(code **)(*plVar11 + 0x228))(plVar11,*(undefined8 *)(*plVar11 + 0x230));
          if (*(uint *)(plVar9 + 3) <= uVar16) goto LAB_01f9581c;
          plVar20 = plVar9 + (long)(int)uVar16 + 4;
          plVar11 = (long *)*plVar20;
          if (plVar11 == (long *)0x0) goto LAB_01f95820;
          uVar17 = (**(code **)(*plVar11 + 0x228))(plVar11,*(undefined8 *)(*plVar11 + 0x230));
          if (*(int *)(*(long *)PTR_DAT_027c1390 + 0xe0) == 0) {
            thunk_FUN_01220628(*(long *)PTR_DAT_027c1390);
          }
          iVar4 = FUN_01f95b1c(uVar6,uVar17,unaff_x25);
          if ((unaff_x19 != 0) && (iVar4 == 0)) {
            if (*(uint *)(plVar9 + 3) <= uVar14) goto LAB_01f9581c;
            plVar11 = (long *)*plVar10;
            if (plVar11 == (long *)0x0) goto LAB_01f95820;
            uVar6 = (**(code **)(*plVar11 + 0x238))(plVar11,*(undefined8 *)(*plVar11 + 0x240));
            if (*(uint *)(plVar9 + 3) <= uVar16) goto LAB_01f9581c;
            plVar11 = (long *)*plVar20;
            if (plVar11 == (long *)0x0) goto LAB_01f95820;
            uVar17 = (**(code **)(*plVar11 + 0x238))(plVar11,*(undefined8 *)(*plVar11 + 0x240));
            if (*(int *)(*(long *)PTR_DAT_027c1390 + 0xe0) == 0) {
              thunk_FUN_01220628(*(long *)PTR_DAT_027c1390);
            }
            iVar4 = FUN_01f95eb8(uVar6,lVar5,0,uVar17,lVar5,0);
          }
          if (iVar4 == 0) {
            if ((*(uint *)(plVar9 + 3) <= uVar14) || (*(uint *)(plVar9 + 3) <= uVar16))
            goto LAB_01f9581c;
            lVar19 = *plVar10;
            lVar18 = *plVar20;
            if (*(int *)(*(long *)PTR_DAT_027c1390 + 0xe0) == 0) {
              thunk_FUN_01220628();
            }
            iVar4 = FUN_01f96308(lVar19,lVar18);
            bVar3 = (bool)(bVar3 | iVar4 == 0);
          }
          uVar15 = uVar16;
          if (iVar4 != 2) {
            uVar15 = uVar14;
          }
          uVar16 = uVar16 + 1;
          bVar3 = (bool)(bVar3 & iVar4 != 2);
          uVar14 = uVar15;
        } while (uStack000000000000001c != uVar16);
        if (bVar3) {
          uVar17 = thunk_FUN_01279b34(PTR_DAT_027bc8d0);
          thunk_FUN_01279b34(PTR_DAT_027bc458);
          uVar6 = thunk_FUN_0124bba8();
          FUN_01ee31d4(uVar6,uVar17,0);
LAB_01f95884:
          uVar17 = thunk_FUN_01279b34(PTR_DAT_027c1c40);
                    /* WARNING: Subroutine does not return */
          FUN_01230b78(uVar6,uVar17);
        }
      }
      if (*(uint *)(plVar9 + 3) <= uVar15) goto LAB_01f9581c;
      plVar9 = plVar9 + (int)uVar15;
    }
    lVar5 = plVar9[4];
  }
  return lVar5;
}


