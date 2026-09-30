/*
FUNCTION_NAME: OVRPlugin.OVRP_0_1_2$$ovrp_SetControllerVibration
ENTRY_POINT: 01f95018
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 89
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_8;validity_or_gating_hits_20;functionality_gaze_retrieval_or_extraction
*/


long OVRPlugin_OVRP_0_1_2__ovrp_SetControllerVibration
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long *plVar12;
  uint uVar13;
  long unaff_x19;
  uint uVar14;
  long *unaff_x20;
  long unaff_x21;
  uint uVar15;
  undefined8 uVar16;
  long lVar17;
  long *unaff_x25;
  long lVar18;
  long *plVar19;
  ulong uVar20;
  uint uStack000000000000001c;
  
  FUN_01b3fbf8(param_2,param_3,*param_1,0);
                    /* try { // try from 01f95034 to 0209506b has its CatchHandler @ 01f94ef8 */
  puVar4 = (undefined8 *)(*(long *)(*unaff_x20 + 0xb8) + 8);
  *puVar4 = param_2;
  thunk_FUN_01286abc(puVar4,param_2);
  uVar5 = FUN_013edd6c();
  if ((uVar5 & 1) == 0) {
    thunk_FUN_01279b34(PTR_DAT_027b3df8);
    uVar16 = thunk_FUN_0124bba8();
    uVar10 = thunk_FUN_01279b34(PTR_DAT_027c1c48);
    FUN_01e75914(uVar16,uVar10,0);
    uVar10 = thunk_FUN_01279b34(PTR_DAT_027c1c40);
                    /* WARNING: Subroutine does not return */
    FUN_01230b78(uVar16,uVar10);
  }
  if ((unaff_x21 == 0) || (*(long *)(unaff_x21 + 0x18) == 0)) {
    uVar10 = thunk_FUN_01279b34(PTR_DAT_027c1be8);
    thunk_FUN_01279b34(PTR_DAT_027b3eb0);
    uVar16 = thunk_FUN_0124bba8();
    uVar11 = thunk_FUN_01279b34(PTR_DAT_027b3fe8);
    FUN_01e7598c(uVar16,uVar10,uVar11,0);
    goto LAB_01f95884;
  }
  lVar6 = FUN_01f8a1a8();
  if (lVar6 == 0) {
    plVar7 = (long *)0x0;
    if (unaff_x19 == 0) goto LAB_01f950a4;
LAB_01f95090:
    uVar14 = *(uint *)(unaff_x19 + 0x18);
    plVar9 = (long *)PTR_DAT_027b32e0;
  }
  else {
                    /* try { // try from 01f9506c to 02095073 has its CatchHandler @ 01f95084 */
                    /* try { // try from 01f95074 to 02095077 has its CatchHandler @ 01f9507c */
                    /* catch(type#1 @ 026574d8) { ... } // from try @ 01f94fc4 with catch @ 01f95078
                       try { // try from 01f95078 to 020950a3 has its CatchHandler @ 01f94ef8 */
    uVar16 = *(undefined8 *)PTR_DAT_027bcec8;
                    /* catch(type#1 @ 026574d8) { ... } // from try @ 01f95074 with catch @ 01f9507c
                        */
                    /* catch(type#1 @ 026574d8) { ... } // from try @ 01f94fc8 with catch @ 01f95080
                        */
    plVar7 = (long *)thunk_FUN_0124baac(lVar6,uVar16);
                    /* catch(type#1 @ 026574d8) { ... } // from try @ 01f94f68 with catch @ 01f95084
                       catch(type#1 @ 026574d8) { ... } // from try @ 01f9506c with catch @ 01f95084
                        */
                    /* catch(type#1 @ 026574d8) { ... } // from try @ 01f94f4c with catch @ 01f95088
                        */
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01230f60(lVar6,uVar16);
    }
                    /* catch(type#1 @ 026574d8) { ... } // from try @ 01f94fec with catch @ 01f9508c
                        */
    if (unaff_x19 != 0) goto LAB_01f95090;
LAB_01f950a4:
                    /* try { // try from 01f950a4 to 020950a7 has its CatchHandler @ 01f950b4 */
    uVar14 = 0;
    plVar9 = (long *)PTR_DAT_027b32e0;
  }
  PTR_DAT_027b32e0 = (undefined *)plVar9;
  if (plVar7 == (long *)0x0) {
LAB_01f95820:
                    /* WARNING: Subroutine does not return */
    FUN_01230ca0();
  }
  uVar5 = plVar7[3] & 0xffffffff;
  if ((int)plVar7[3] < 1) {
    uStack000000000000001c = 0;
  }
  else {
    uStack000000000000001c = 0;
    uVar15 = 0;
    uVar20 = 0;
    do {
      if (unaff_x19 == 0) {
LAB_01f95344:
        if (uVar15 == uVar14) {
OVRPlugin_OVRP_1_0_0__ovrp_GetTrackingOriginType:
          if (*(int *)(*plVar9 + 0xe0) == 0) {
            thunk_FUN_01220628();
          }
          uVar5 = FUN_01f801dc(unaff_x25,0,0);
          uVar15 = uVar14;
          if ((uVar5 & 1) == 0) {
LAB_01f95524:
            uVar13 = *(uint *)(plVar7 + 3);
            if (uVar13 <= uVar20) goto LAB_01f9581c;
            lVar6 = plVar7[uVar20 + 4];
            if (lVar6 != 0) {
              lVar18 = thunk_FUN_0124baac(lVar6,*(undefined8 *)(*plVar7 + 0x40));
              if (lVar18 == 0) {
                uVar16 = thunk_FUN_012668ac();
                    /* WARNING: Subroutine does not return */
                FUN_01230b78(uVar16,0);
              }
              uVar13 = (uint)plVar7[3];
            }
            if (uVar13 <= uStack000000000000001c) goto LAB_01f9581c;
            lVar18 = (long)(int)uStack000000000000001c;
            plVar7[lVar18 + 4] = lVar6;
            uStack000000000000001c = uStack000000000000001c + 1;
            thunk_FUN_01286abc(plVar7 + lVar18 + 4,lVar6);
          }
          else {
            if (*(uint *)(plVar7 + 3) <= uVar20) goto LAB_01f9581c;
            plVar19 = plVar7 + uVar20 + 4;
            plVar8 = (long *)*plVar19;
            if ((plVar8 == (long *)0x0) ||
               (lVar6 = (**(code **)(*plVar8 + 0x228))(plVar8,*(undefined8 *)(*plVar8 + 0x230)),
               lVar6 == 0)) goto LAB_01f95820;
            uVar5 = FUN_01f81644(lVar6,0);
            if ((uVar5 & 1) == 0) {
              if (*(uint *)(plVar7 + 3) <= uVar20) goto LAB_01f9581c;
              plVar19 = (long *)*plVar19;
              if ((plVar19 == (long *)0x0) ||
                 (plVar8 = (long *)(**(code **)(*plVar19 + 0x228))
                                             (plVar19,*(undefined8 *)(*plVar19 + 0x230)),
                 plVar8 == (long *)0x0)) goto LAB_01f95820;
              uVar5 = (**(code **)(*plVar8 + 0x288))
                                (plVar8,unaff_x25,*(undefined8 *)(*plVar8 + 0x290));
joined_r0x01f95520:
              if ((uVar5 & 1) != 0) goto LAB_01f95524;
            }
            else {
              if (unaff_x25 == (long *)0x0) goto LAB_01f95820;
              plVar8 = (long *)(**(code **)(*unaff_x25 + 0x308))
                                         (unaff_x25,*(undefined8 *)(*unaff_x25 + 0x310));
              if (plVar8 != (long *)0x0) {
                bVar1 = *(byte *)(*(long *)PTR_DAT_027b3ec0 + 0x130);
                if ((bVar1 <= *(byte *)(*plVar8 + 0x130)) &&
                   (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) ==
                    *(long *)PTR_DAT_027b3ec0)) {
                  plVar12 = (long *)(**(code **)(*unaff_x25 + 0x308))
                                              (unaff_x25,*(undefined8 *)(*unaff_x25 + 0x310));
                  if (uVar20 < *(uint *)(plVar7 + 3)) {
                    plVar19 = (long *)*plVar19;
                    if ((plVar19 != (long *)0x0) &&
                       (plVar8 = (long *)(**(code **)(*plVar19 + 0x228))
                                                   (plVar19,*(undefined8 *)(*plVar19 + 0x230)),
                       plVar8 != (long *)0x0)) {
                      plVar8 = (long *)(**(code **)(*plVar8 + 0x308))
                                                 (plVar8,*(undefined8 *)(*plVar8 + 0x310));
                      if (*(int *)(*(long *)PTR_DAT_027c1390 + 0xe0) == 0) {
                        thunk_FUN_01220628(*(long *)PTR_DAT_027c1390);
                      }
                      lVar6 = *(long *)PTR_DAT_027b3ec0;
                      if (plVar12 != (long *)0x0) {
                        if ((*(byte *)(*plVar12 + 0x130) < *(byte *)(lVar6 + 0x130)) ||
                           (*(long *)(*(long *)(*plVar12 + 200) +
                                      (ulong)*(byte *)(lVar6 + 0x130) * 8 + -8) != lVar6)) {
                    /* WARNING: Subroutine does not return */
                          FUN_01230f60(plVar12);
                        }
                      }
                      if (plVar8 != (long *)0x0) {
                        if ((*(byte *)(*plVar8 + 0x130) < *(byte *)(lVar6 + 0x130)) ||
                           (*(long *)(*(long *)(*plVar8 + 200) + (ulong)*(byte *)(lVar6 + 0x130) * 8
                                     + -8) != lVar6)) {
LAB_01f95824:
                    /* WARNING: Subroutine does not return */
                          FUN_01230f60(plVar8);
                        }
                      }
                      uVar5 = FUN_01f958f8(plVar12,plVar8);
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
        if (uVar5 <= uVar20) goto LAB_01f9581c;
        plVar8 = (long *)plVar7[uVar20 + 4];
        if ((plVar8 == (long *)0x0) ||
           (lVar6 = (**(code **)(*plVar8 + 0x238))(plVar8,*(undefined8 *)(*plVar8 + 0x240)),
           lVar6 == 0)) goto LAB_01f95820;
        uVar13 = (uint)*(undefined8 *)(lVar6 + 0x18);
        if (uVar14 == uVar13) {
          if ((int)uVar14 < 1) {
            uVar15 = 0;
            goto LAB_01f95344;
          }
          if (uVar13 != 0) {
            lVar18 = 0;
            uVar13 = 1;
            while( true ) {
              plVar8 = *(long **)(lVar6 + lVar18 * 8 + 0x20);
              if (plVar8 == (long *)0x0) goto LAB_01f95820;
              uVar15 = uVar13 - 1;
              plVar8 = (long *)(**(code **)(*plVar8 + 0x1d8))
                                         (plVar8,*(undefined8 *)(*plVar8 + 0x1e0));
              if (*(uint *)(unaff_x19 + 0x18) <= uVar15) goto LAB_01f9581c;
              plVar19 = (long *)(unaff_x19 + lVar18 * 8 + 0x20);
              lVar18 = *plVar19;
              if (*(int *)(*plVar9 + 0xe0) == 0) {
                thunk_FUN_01220628();
              }
              uVar5 = FUN_01f7f404(plVar8,lVar18,0);
              if ((uVar5 & 1) == 0) {
                uVar16 = *(undefined8 *)PTR_DAT_027b5b48;
                if (*(int *)(*plVar9 + 0xe0) == 0) {
                  thunk_FUN_01220628();
                }
                uVar16 = FUN_01f7d8a0(uVar16,0);
                uVar5 = FUN_01f7f404(plVar8,uVar16,0);
                if ((uVar5 & 1) == 0) {
                  if (plVar8 == (long *)0x0) goto LAB_01f95820;
                  uVar5 = FUN_01f81644(plVar8,0);
                  if (*(uint *)(unaff_x19 + 0x18) <= uVar15) goto LAB_01f9581c;
                  plVar12 = (long *)*plVar19;
                  if ((uVar5 & 1) == 0) {
                    uVar5 = (**(code **)(*plVar8 + 0x288))
                                      (plVar8,plVar12,*(undefined8 *)(*plVar8 + 0x290));
                  }
                  else {
                    if (plVar12 == (long *)0x0) goto LAB_01f95820;
                    plVar12 = (long *)(**(code **)(*plVar12 + 0x308))
                                                (plVar12,*(undefined8 *)(*plVar12 + 0x310));
                    if (plVar12 == (long *)0x0) goto LAB_01f95344;
                    bVar1 = *(byte *)(*(long *)PTR_DAT_027b3ec0 + 0x130);
                    if ((*(byte *)(*plVar12 + 0x130) < bVar1) ||
                       (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar1 * 8 + -8) !=
                        *(long *)PTR_DAT_027b3ec0)) goto LAB_01f95344;
                    if (*(uint *)(unaff_x19 + 0x18) <= uVar15) goto LAB_01f9581c;
                    plVar19 = (long *)*plVar19;
                    if (plVar19 == (long *)0x0) goto LAB_01f95820;
                    plVar19 = (long *)(**(code **)(*plVar19 + 0x308))
                                                (plVar19,*(undefined8 *)(*plVar19 + 0x310));
                    plVar8 = (long *)(**(code **)(*plVar8 + 0x308))
                                               (plVar8,*(undefined8 *)(*plVar8 + 0x310));
                    if (*(int *)(*(long *)PTR_DAT_027c1390 + 0xe0) == 0) {
                      thunk_FUN_01220628(*(long *)PTR_DAT_027c1390);
                    }
                    lVar18 = *(long *)PTR_DAT_027b3ec0;
                    if (plVar19 != (long *)0x0) {
                      if ((*(byte *)(*plVar19 + 0x130) < *(byte *)(lVar18 + 0x130)) ||
                         (*(long *)(*(long *)(*plVar19 + 200) + (ulong)*(byte *)(lVar18 + 0x130) * 8
                                   + -8) != lVar18)) {
                    /* WARNING: Subroutine does not return */
                        FUN_01230f60(plVar19);
                      }
                    }
                    if (plVar8 != (long *)0x0) {
                      if ((*(byte *)(*plVar8 + 0x130) < *(byte *)(lVar18 + 0x130)) ||
                         (*(long *)(*(long *)(*plVar8 + 200) + (ulong)*(byte *)(lVar18 + 0x130) * 8
                                   + -8) != lVar18)) goto LAB_01f95824;
                    }
                    uVar5 = FUN_01f958f8(plVar19,plVar8);
                  }
                  if ((uVar5 & 1) == 0) goto LAB_01f95344;
                }
              }
              if (uVar14 == uVar13) break;
              lVar18 = (long)(int)uVar13;
              bVar2 = *(uint *)(lVar6 + 0x18) <= uVar13;
              uVar13 = uVar13 + 1;
              if (bVar2) goto LAB_01f9581c;
            }
            goto OVRPlugin_OVRP_1_0_0__ovrp_GetTrackingOriginType;
          }
          goto LAB_01f9581c;
        }
      }
      uVar5 = (ulong)*(uint *)(plVar7 + 3);
      uVar20 = uVar20 + 1;
    } while ((long)uVar20 < (long)(int)*(uint *)(plVar7 + 3));
  }
  if (uStack000000000000001c == 0) {
    lVar6 = 0;
  }
  else {
    if (uStack000000000000001c == 1) {
      if ((int)uVar5 == 0) {
LAB_01f9581c:
                    /* WARNING: Subroutine does not return */
        FUN_01230ca8();
      }
    }
    else {
      lVar6 = FUN_01230af8(*(undefined8 *)PTR_DAT_027b1ca8,uVar14);
      if (0 < (int)uVar14) {
        if (lVar6 == 0) goto LAB_01f95820;
        uVar15 = *(uint *)(lVar6 + 0x18);
        uVar5 = 0;
        do {
          if (uVar15 <= uVar5) goto LAB_01f9581c;
          *(int *)(lVar6 + 0x20 + uVar5 * 4) = (int)uVar5;
          uVar5 = uVar5 + 1;
        } while (uVar14 != uVar5);
      }
      if ((int)uStack000000000000001c < 2) {
        uVar14 = 0;
      }
      else {
        bVar2 = false;
        uVar15 = 1;
        uVar13 = 0;
        do {
          if (*(uint *)(plVar7 + 3) <= uVar13) goto LAB_01f9581c;
          plVar8 = plVar7 + (long)(int)uVar13 + 4;
          plVar9 = (long *)*plVar8;
          if (plVar9 == (long *)0x0) goto LAB_01f95820;
          uVar16 = (**(code **)(*plVar9 + 0x228))(plVar9,*(undefined8 *)(*plVar9 + 0x230));
          if (*(uint *)(plVar7 + 3) <= uVar15) goto LAB_01f9581c;
          plVar19 = plVar7 + (long)(int)uVar15 + 4;
          plVar9 = (long *)*plVar19;
          if (plVar9 == (long *)0x0) goto LAB_01f95820;
          uVar10 = (**(code **)(*plVar9 + 0x228))(plVar9,*(undefined8 *)(*plVar9 + 0x230));
          if (*(int *)(*(long *)PTR_DAT_027c1390 + 0xe0) == 0) {
            thunk_FUN_01220628(*(long *)PTR_DAT_027c1390);
          }
          iVar3 = FUN_01f95b1c(uVar16,uVar10,unaff_x25);
          if ((unaff_x19 != 0) && (iVar3 == 0)) {
            if (*(uint *)(plVar7 + 3) <= uVar13) goto LAB_01f9581c;
            plVar9 = (long *)*plVar8;
            if (plVar9 == (long *)0x0) goto LAB_01f95820;
            uVar16 = (**(code **)(*plVar9 + 0x238))(plVar9,*(undefined8 *)(*plVar9 + 0x240));
            if (*(uint *)(plVar7 + 3) <= uVar15) goto LAB_01f9581c;
            plVar9 = (long *)*plVar19;
            if (plVar9 == (long *)0x0) goto LAB_01f95820;
            uVar10 = (**(code **)(*plVar9 + 0x238))(plVar9,*(undefined8 *)(*plVar9 + 0x240));
            if (*(int *)(*(long *)PTR_DAT_027c1390 + 0xe0) == 0) {
              thunk_FUN_01220628(*(long *)PTR_DAT_027c1390);
            }
            iVar3 = FUN_01f95eb8(uVar16,lVar6,0,uVar10,lVar6,0);
          }
          if (iVar3 == 0) {
            if ((*(uint *)(plVar7 + 3) <= uVar13) || (*(uint *)(plVar7 + 3) <= uVar15))
            goto LAB_01f9581c;
            lVar18 = *plVar8;
            lVar17 = *plVar19;
            if (*(int *)(*(long *)PTR_DAT_027c1390 + 0xe0) == 0) {
              thunk_FUN_01220628();
            }
            iVar3 = FUN_01f96308(lVar18,lVar17);
            bVar2 = (bool)(bVar2 | iVar3 == 0);
          }
          uVar14 = uVar15;
          if (iVar3 != 2) {
            uVar14 = uVar13;
          }
          uVar15 = uVar15 + 1;
          bVar2 = (bool)(bVar2 & iVar3 != 2);
          uVar13 = uVar14;
        } while (uStack000000000000001c != uVar15);
        if (bVar2) {
          uVar10 = thunk_FUN_01279b34(PTR_DAT_027bc8d0);
          thunk_FUN_01279b34(PTR_DAT_027bc458);
          uVar16 = thunk_FUN_0124bba8();
          FUN_01ee31d4(uVar16,uVar10,0);
LAB_01f95884:
          uVar10 = thunk_FUN_01279b34(PTR_DAT_027c1c40);
                    /* WARNING: Subroutine does not return */
          FUN_01230b78(uVar16,uVar10);
        }
      }
      if (*(uint *)(plVar7 + 3) <= uVar14) goto LAB_01f9581c;
      plVar7 = plVar7 + (int)uVar14;
    }
    lVar6 = plVar7[4];
  }
  return lVar6;
}


