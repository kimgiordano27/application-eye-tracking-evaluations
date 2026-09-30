/*
FUNCTION_NAME: OVRPlugin.OVRP_0_1_2$$.cctor
ENTRY_POINT: 01f950ac
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 89
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_8;validity_or_gating_hits_15;functionality_gaze_retrieval_or_extraction
*/


long OVRPlugin_OVRP_0_1_2___cctor(void)

{
  byte bVar1;
  undefined *puVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  uint uVar9;
  ulong uVar10;
  long unaff_x19;
  uint unaff_w20;
  uint uVar11;
  long *unaff_x21;
  uint uVar12;
  long lVar13;
  long *unaff_x25;
  long lVar14;
  undefined8 uVar15;
  long *plVar16;
  ulong uVar17;
  uint uStack000000000000001c;
  
  puVar2 = PTR_DAT_027b32e0;
                    /* catch() { ... } // from try @ 01f950a4 with catch @ 01f950b4 */
  uVar10 = unaff_x21[3] & 0xffffffff;
  if ((int)unaff_x21[3] < 1) {
    uStack000000000000001c = 0;
  }
  else {
                    /* try { // try from 01f950c0 to 020950cb has its CatchHandler @ 01f950e0 */
    uStack000000000000001c = 0;
                    /* try { // try from 01f950cc to 020950d7 has its CatchHandler @ 01f94ef8 */
    uVar12 = 0;
    uVar17 = 0;
    do {
      if (unaff_x19 == 0) {
LAB_01f95344:
        if (uVar12 == unaff_w20) {
OVRPlugin_OVRP_1_0_0__ovrp_GetTrackingOriginType:
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_01220628();
          }
          uVar10 = FUN_01f801dc(unaff_x25,0,0);
          uVar12 = unaff_w20;
          if ((uVar10 & 1) == 0) {
LAB_01f95524:
            uVar9 = *(uint *)(unaff_x21 + 3);
            if (uVar9 <= uVar17) goto LAB_01f9581c;
            lVar6 = unaff_x21[uVar17 + 4];
            if (lVar6 != 0) {
              lVar14 = thunk_FUN_0124baac(lVar6,*(undefined8 *)(*unaff_x21 + 0x40));
              if (lVar14 == 0) {
                uVar15 = thunk_FUN_012668ac();
                    /* WARNING: Subroutine does not return */
                FUN_01230b78(uVar15,0);
              }
              uVar9 = (uint)unaff_x21[3];
            }
            if (uVar9 <= uStack000000000000001c) goto LAB_01f9581c;
            unaff_x21[(long)(int)uStack000000000000001c + 4] = lVar6;
            uVar9 = uStack000000000000001c + 1;
            thunk_FUN_01286abc(unaff_x21 + (long)(int)uStack000000000000001c + 4,lVar6);
            uStack000000000000001c = uVar9;
          }
          else {
            if (*(uint *)(unaff_x21 + 3) <= uVar17) goto LAB_01f9581c;
            plVar16 = unaff_x21 + uVar17 + 4;
            plVar5 = (long *)*plVar16;
            if ((plVar5 == (long *)0x0) ||
               (lVar6 = (**(code **)(*plVar5 + 0x228))(plVar5,*(undefined8 *)(*plVar5 + 0x230)),
               lVar6 == 0)) goto LAB_01f95820;
            uVar10 = FUN_01f81644(lVar6,0);
            if ((uVar10 & 1) == 0) {
              if (*(uint *)(unaff_x21 + 3) <= uVar17) goto LAB_01f9581c;
              plVar16 = (long *)*plVar16;
              if ((plVar16 == (long *)0x0) ||
                 (plVar5 = (long *)(**(code **)(*plVar16 + 0x228))
                                             (plVar16,*(undefined8 *)(*plVar16 + 0x230)),
                 plVar5 == (long *)0x0)) goto LAB_01f95820;
              uVar10 = (**(code **)(*plVar5 + 0x288))
                                 (plVar5,unaff_x25,*(undefined8 *)(*plVar5 + 0x290));
joined_r0x01f95520:
              if ((uVar10 & 1) != 0) goto LAB_01f95524;
            }
            else {
              if (unaff_x25 == (long *)0x0) goto LAB_01f95820;
              plVar5 = (long *)(**(code **)(*unaff_x25 + 0x308))
                                         (unaff_x25,*(undefined8 *)(*unaff_x25 + 0x310));
              if (plVar5 != (long *)0x0) {
                bVar1 = *(byte *)(*(long *)PTR_DAT_027b3ec0 + 0x130);
                if ((bVar1 <= *(byte *)(*plVar5 + 0x130)) &&
                   (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar1 * 8 + -8) ==
                    *(long *)PTR_DAT_027b3ec0)) {
                  plVar8 = (long *)(**(code **)(*unaff_x25 + 0x308))
                                             (unaff_x25,*(undefined8 *)(*unaff_x25 + 0x310));
                  if (uVar17 < *(uint *)(unaff_x21 + 3)) {
                    plVar16 = (long *)*plVar16;
                    if ((plVar16 != (long *)0x0) &&
                       (plVar5 = (long *)(**(code **)(*plVar16 + 0x228))
                                                   (plVar16,*(undefined8 *)(*plVar16 + 0x230)),
                       plVar5 != (long *)0x0)) {
                      plVar5 = (long *)(**(code **)(*plVar5 + 0x308))
                                                 (plVar5,*(undefined8 *)(*plVar5 + 0x310));
                      if (*(int *)(*(long *)PTR_DAT_027c1390 + 0xe0) == 0) {
                        thunk_FUN_01220628(*(long *)PTR_DAT_027c1390);
                      }
                      lVar6 = *(long *)PTR_DAT_027b3ec0;
                      if (plVar8 != (long *)0x0) {
                        if ((*(byte *)(*plVar8 + 0x130) < *(byte *)(lVar6 + 0x130)) ||
                           (*(long *)(*(long *)(*plVar8 + 200) + (ulong)*(byte *)(lVar6 + 0x130) * 8
                                     + -8) != lVar6)) {
                    /* WARNING: Subroutine does not return */
                          FUN_01230f60(plVar8);
                        }
                      }
                      if (plVar5 != (long *)0x0) {
                        if ((*(byte *)(*plVar5 + 0x130) < *(byte *)(lVar6 + 0x130)) ||
                           (*(long *)(*(long *)(*plVar5 + 200) + (ulong)*(byte *)(lVar6 + 0x130) * 8
                                     + -8) != lVar6)) {
LAB_01f95824:
                    /* WARNING: Subroutine does not return */
                          FUN_01230f60(plVar5);
                        }
                      }
                      uVar10 = FUN_01f958f8(plVar8,plVar5);
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
                    /* try { // try from 01f950d8 to 020950df has its CatchHandler @ 01f950e0 */
        if (uVar10 <= uVar17) goto LAB_01f9581c;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 01f950c0 with catch @ 01f950e0
                       catch(type#2 @ 00000000) { ... } // from try @ 01f950d8 with catch @ 01f950e0
                        */
        plVar5 = (long *)unaff_x21[uVar17 + 4];
        if ((plVar5 == (long *)0x0) ||
           (lVar6 = (**(code **)(*plVar5 + 0x238))(plVar5,*(undefined8 *)(*plVar5 + 0x240)),
           lVar6 == 0)) goto LAB_01f95820;
        uVar9 = (uint)*(undefined8 *)(lVar6 + 0x18);
        if (unaff_w20 == uVar9) {
          if ((int)unaff_w20 < 1) {
            uVar12 = 0;
            goto LAB_01f95344;
          }
          if (uVar9 != 0) {
            lVar14 = 0;
            uVar9 = 1;
            while( true ) {
              plVar5 = *(long **)(lVar6 + lVar14 * 8 + 0x20);
              if (plVar5 == (long *)0x0) goto LAB_01f95820;
              uVar12 = uVar9 - 1;
              plVar5 = (long *)(**(code **)(*plVar5 + 0x1d8))
                                         (plVar5,*(undefined8 *)(*plVar5 + 0x1e0));
              if (*(uint *)(unaff_x19 + 0x18) <= uVar12) goto LAB_01f9581c;
              plVar16 = (long *)(unaff_x19 + lVar14 * 8 + 0x20);
              lVar14 = *plVar16;
              if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                thunk_FUN_01220628();
              }
              uVar10 = FUN_01f7f404(plVar5,lVar14,0);
              if ((uVar10 & 1) == 0) {
                uVar15 = *(undefined8 *)PTR_DAT_027b5b48;
                if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
                  thunk_FUN_01220628();
                }
                uVar15 = FUN_01f7d8a0(uVar15,0);
                uVar10 = FUN_01f7f404(plVar5,uVar15,0);
                if ((uVar10 & 1) == 0) {
                  if (plVar5 == (long *)0x0) goto LAB_01f95820;
                  uVar10 = FUN_01f81644(plVar5,0);
                  if (*(uint *)(unaff_x19 + 0x18) <= uVar12) goto LAB_01f9581c;
                  plVar8 = (long *)*plVar16;
                  if ((uVar10 & 1) == 0) {
                    uVar10 = (**(code **)(*plVar5 + 0x288))
                                       (plVar5,plVar8,*(undefined8 *)(*plVar5 + 0x290));
                  }
                  else {
                    if (plVar8 == (long *)0x0) goto LAB_01f95820;
                    plVar8 = (long *)(**(code **)(*plVar8 + 0x308))
                                               (plVar8,*(undefined8 *)(*plVar8 + 0x310));
                    if (plVar8 == (long *)0x0) goto LAB_01f95344;
                    bVar1 = *(byte *)(*(long *)PTR_DAT_027b3ec0 + 0x130);
                    if ((*(byte *)(*plVar8 + 0x130) < bVar1) ||
                       (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) !=
                        *(long *)PTR_DAT_027b3ec0)) goto LAB_01f95344;
                    if (*(uint *)(unaff_x19 + 0x18) <= uVar12) goto LAB_01f9581c;
                    plVar16 = (long *)*plVar16;
                    if (plVar16 == (long *)0x0) goto LAB_01f95820;
                    plVar16 = (long *)(**(code **)(*plVar16 + 0x308))
                                                (plVar16,*(undefined8 *)(*plVar16 + 0x310));
                    plVar5 = (long *)(**(code **)(*plVar5 + 0x308))
                                               (plVar5,*(undefined8 *)(*plVar5 + 0x310));
                    if (*(int *)(*(long *)PTR_DAT_027c1390 + 0xe0) == 0) {
                      thunk_FUN_01220628(*(long *)PTR_DAT_027c1390);
                    }
                    lVar14 = *(long *)PTR_DAT_027b3ec0;
                    if (plVar16 != (long *)0x0) {
                      if ((*(byte *)(*plVar16 + 0x130) < *(byte *)(lVar14 + 0x130)) ||
                         (*(long *)(*(long *)(*plVar16 + 200) + (ulong)*(byte *)(lVar14 + 0x130) * 8
                                   + -8) != lVar14)) {
                    /* WARNING: Subroutine does not return */
                        FUN_01230f60(plVar16);
                      }
                    }
                    if (plVar5 != (long *)0x0) {
                      if ((*(byte *)(*plVar5 + 0x130) < *(byte *)(lVar14 + 0x130)) ||
                         (*(long *)(*(long *)(*plVar5 + 200) + (ulong)*(byte *)(lVar14 + 0x130) * 8
                                   + -8) != lVar14)) goto LAB_01f95824;
                    }
                    uVar10 = FUN_01f958f8(plVar16,plVar5);
                  }
                  if ((uVar10 & 1) == 0) goto LAB_01f95344;
                }
              }
              if (unaff_w20 == uVar9) break;
              lVar14 = (long)(int)uVar9;
              bVar3 = *(uint *)(lVar6 + 0x18) <= uVar9;
              uVar9 = uVar9 + 1;
              if (bVar3) goto LAB_01f9581c;
            }
            goto OVRPlugin_OVRP_1_0_0__ovrp_GetTrackingOriginType;
          }
          goto LAB_01f9581c;
        }
      }
      uVar10 = (ulong)*(uint *)(unaff_x21 + 3);
      uVar17 = uVar17 + 1;
    } while ((long)uVar17 < (long)(int)*(uint *)(unaff_x21 + 3));
  }
  if (uStack000000000000001c == 0) {
    lVar6 = 0;
  }
  else {
    if (uStack000000000000001c == 1) {
      if ((int)uVar10 == 0) {
LAB_01f9581c:
                    /* WARNING: Subroutine does not return */
        FUN_01230ca8();
      }
    }
    else {
      lVar6 = FUN_01230af8(*(undefined8 *)PTR_DAT_027b1ca8,unaff_w20);
      if (0 < (int)unaff_w20) {
        if (lVar6 == 0) {
LAB_01f95820:
                    /* WARNING: Subroutine does not return */
          FUN_01230ca0();
        }
        uVar12 = *(uint *)(lVar6 + 0x18);
        uVar10 = 0;
        do {
          if (uVar12 <= uVar10) goto LAB_01f9581c;
          *(int *)(lVar6 + 0x20 + uVar10 * 4) = (int)uVar10;
          uVar10 = uVar10 + 1;
        } while (unaff_w20 != uVar10);
      }
      if ((int)uStack000000000000001c < 2) {
        uVar12 = 0;
      }
      else {
        bVar3 = false;
        uVar9 = 1;
        uVar11 = 0;
        do {
          if (*(uint *)(unaff_x21 + 3) <= uVar11) goto LAB_01f9581c;
          plVar16 = unaff_x21 + (long)(int)uVar11 + 4;
          plVar5 = (long *)*plVar16;
          if (plVar5 == (long *)0x0) goto LAB_01f95820;
          uVar15 = (**(code **)(*plVar5 + 0x228))(plVar5,*(undefined8 *)(*plVar5 + 0x230));
          if (*(uint *)(unaff_x21 + 3) <= uVar9) goto LAB_01f9581c;
          plVar8 = unaff_x21 + (long)(int)uVar9 + 4;
          plVar5 = (long *)*plVar8;
          if (plVar5 == (long *)0x0) goto LAB_01f95820;
          uVar7 = (**(code **)(*plVar5 + 0x228))(plVar5,*(undefined8 *)(*plVar5 + 0x230));
          if (*(int *)(*(long *)PTR_DAT_027c1390 + 0xe0) == 0) {
            thunk_FUN_01220628(*(long *)PTR_DAT_027c1390);
          }
          iVar4 = FUN_01f95b1c(uVar15,uVar7,unaff_x25);
          if ((unaff_x19 != 0) && (iVar4 == 0)) {
            if (*(uint *)(unaff_x21 + 3) <= uVar11) goto LAB_01f9581c;
            plVar5 = (long *)*plVar16;
            if (plVar5 == (long *)0x0) goto LAB_01f95820;
            uVar15 = (**(code **)(*plVar5 + 0x238))(plVar5,*(undefined8 *)(*plVar5 + 0x240));
            if (*(uint *)(unaff_x21 + 3) <= uVar9) goto LAB_01f9581c;
            plVar5 = (long *)*plVar8;
            if (plVar5 == (long *)0x0) goto LAB_01f95820;
            uVar7 = (**(code **)(*plVar5 + 0x238))(plVar5,*(undefined8 *)(*plVar5 + 0x240));
            if (*(int *)(*(long *)PTR_DAT_027c1390 + 0xe0) == 0) {
              thunk_FUN_01220628(*(long *)PTR_DAT_027c1390);
            }
            iVar4 = FUN_01f95eb8(uVar15,lVar6,0,uVar7,lVar6,0);
          }
          if (iVar4 == 0) {
            if ((*(uint *)(unaff_x21 + 3) <= uVar11) || (*(uint *)(unaff_x21 + 3) <= uVar9))
            goto LAB_01f9581c;
            lVar14 = *plVar16;
            lVar13 = *plVar8;
            if (*(int *)(*(long *)PTR_DAT_027c1390 + 0xe0) == 0) {
              thunk_FUN_01220628();
            }
            iVar4 = FUN_01f96308(lVar14,lVar13);
            bVar3 = (bool)(bVar3 | iVar4 == 0);
          }
          uVar12 = uVar9;
          if (iVar4 != 2) {
            uVar12 = uVar11;
          }
          uVar9 = uVar9 + 1;
          bVar3 = (bool)(bVar3 & iVar4 != 2);
          uVar11 = uVar12;
        } while (uStack000000000000001c != uVar9);
        if (bVar3) {
          uVar15 = thunk_FUN_01279b34(PTR_DAT_027bc8d0);
          thunk_FUN_01279b34(PTR_DAT_027bc458);
          uVar7 = thunk_FUN_0124bba8();
          FUN_01ee31d4(uVar7,uVar15,0);
          uVar15 = thunk_FUN_01279b34(PTR_DAT_027c1c40);
                    /* WARNING: Subroutine does not return */
          FUN_01230b78(uVar7,uVar15);
        }
      }
      if (*(uint *)(unaff_x21 + 3) <= uVar12) goto LAB_01f9581c;
      unaff_x21 = unaff_x21 + (int)uVar12;
    }
    lVar6 = unaff_x21[4];
  }
  return lVar6;
}


