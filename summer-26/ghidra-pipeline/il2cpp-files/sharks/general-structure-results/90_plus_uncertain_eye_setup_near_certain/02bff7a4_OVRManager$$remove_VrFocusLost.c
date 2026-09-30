/*
FUNCTION_NAME: OVRManager$$remove_VrFocusLost
ENTRY_POINT: 02bff7a4
PROGRAM: sharks-libil2cpp.so
SCORE: 91
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_3;validity_or_gating_hits_21;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRManager__remove_VrFocusLost(void)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long *plVar14;
  int iVar15;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 uVar16;
  uint uVar17;
  long *plVar18;
  long lVar19;
  uint uVar20;
  long lVar21;
  long *plVar22;
  uint uVar23;
  undefined *puVar13;
  
  FUN_017fc350(PTR_DAT_03804aa8);
  FUN_017fc350(PTR_DAT_037f7340);
  FUN_017fc350(PTR_DAT_037f2c78);
  *(undefined1 *)(unaff_x19 + 0xdb2) = 1;
  if (unaff_x21 != 0) {
    plVar4 = (long *)FUN_017fc3f4(*(undefined8 *)PTR_DAT_037f7340,*(undefined4 *)(unaff_x21 + 0x18))
    ;
    uVar17 = *(uint *)(unaff_x21 + 0x18);
    if (0 < (int)uVar17) {
      lVar21 = 0;
      plVar9 = plVar4 + 4;
      do {
        uVar20 = (uint)lVar21;
        if (uVar17 <= uVar20) goto LAB_02bffdc8;
        plVar5 = *(long **)(unaff_x21 + 0x20 + lVar21 * 8);
        if ((plVar5 == (long *)0x0) ||
           (lVar6 = (**(code **)(*plVar5 + 0x308))(plVar5,*(undefined8 *)(*plVar5 + 0x310)),
           plVar4 == (long *)0x0)) goto LAB_02bffdcc;
        if ((lVar6 != 0) &&
           (lVar7 = thunk_FUN_01861ac0(lVar6,*(undefined8 *)(*plVar4 + 0x40)), lVar7 == 0))
        goto LAB_02bffe2c;
        if (*(uint *)(plVar4 + 3) <= uVar20) goto LAB_02bffdc8;
        *plVar9 = lVar6;
        thunk_FUN_0188fd20(plVar9,lVar6);
        if (*(uint *)(plVar4 + 3) <= uVar20) goto LAB_02bffdc8;
        if (*plVar9 == 0) goto LAB_02bffdcc;
        uVar8 = FUN_02be741c(*plVar9,0);
        if ((uVar8 & 1) == 0) {
          if (*(uint *)(plVar4 + 3) <= uVar20) goto LAB_02bffdc8;
          if ((long *)*plVar9 != (long *)0x0) {
            lVar6 = *(long *)*plVar9;
            bVar1 = *(byte *)(*(long *)PTR_DAT_03804aa8 + 0x130);
            if ((bVar1 <= *(byte *)(lVar6 + 0x130)) &&
               (*(long *)(*(long *)(lVar6 + 200) + (ulong)bVar1 * 8 + -8) ==
                *(long *)PTR_DAT_03804aa8)) goto LAB_02bff8c8;
          }
          thunk_FUN_01851c08(PTR_DAT_037f87a8);
          uVar16 = thunk_FUN_01861bbc();
          uVar11 = thunk_FUN_01851c08(PTR_DAT_03804850);
          puVar13 = PTR_DAT_0380a268;
          goto LAB_02bffdfc;
        }
LAB_02bff8c8:
        uVar17 = *(uint *)(unaff_x21 + 0x18);
        lVar21 = lVar21 + 1;
        plVar9 = plVar9 + 1;
      } while ((int)lVar21 < (int)uVar17);
    }
    if ((unaff_x20 == 0) || (*(long *)(unaff_x20 + 0x18) == 0)) {
      thunk_FUN_01851c08(PTR_DAT_037f87a8);
      uVar16 = thunk_FUN_01861bbc();
      uVar11 = thunk_FUN_01851c08(PTR_DAT_0380abb8);
      puVar13 = PTR_DAT_037f89c0;
LAB_02bffdfc:
      uVar12 = thunk_FUN_01851c08(puVar13);
      FUN_02b3cc64(uVar16,uVar11,uVar12,0);
LAB_02bffe14:
      uVar11 = thunk_FUN_01851c08(PTR_DAT_0380ac48);
                    /* WARNING: Subroutine does not return */
      FUN_017fc474(uVar16,uVar11);
    }
    lVar21 = FUN_02bf1b10();
    if (lVar21 != 0) {
      uVar16 = *(undefined8 *)PTR_DAT_0380aad0;
      plVar9 = (long *)thunk_FUN_01861ac0(lVar21,uVar16);
      puVar13 = PTR_DAT_037f2c78;
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_017fc944(lVar21,uVar16);
      }
      lVar21 = plVar9[3];
      if (0 < (int)lVar21) {
        uVar17 = 0;
        uVar20 = 0;
        do {
          if ((uint)lVar21 <= uVar20) goto LAB_02bffdc8;
          plVar22 = plVar9 + (long)(int)uVar20 + 4;
          plVar5 = (long *)*plVar22;
          if (((plVar5 == (long *)0x0) ||
              (lVar21 = (**(code **)(*plVar5 + 0x398))(plVar5,*(undefined8 *)(*plVar5 + 0x3a0)),
              lVar21 == 0)) || (plVar4 == (long *)0x0)) goto LAB_02bffdcc;
          iVar3 = (int)plVar4[3];
          iVar15 = (int)*(undefined8 *)(lVar21 + 0x18);
          if (iVar15 == iVar3) {
            if (iVar15 < 1) {
              iVar15 = 0;
            }
            else {
              if (iVar15 == 0) goto LAB_02bffdc8;
              uVar8 = 0;
              while( true ) {
                plVar5 = *(long **)(lVar21 + 0x20 + uVar8 * 8);
                if (plVar5 == (long *)0x0) goto LAB_02bffdcc;
                plVar5 = (long *)(**(code **)(*plVar5 + 0x1d8))
                                           (plVar5,*(undefined8 *)(*plVar5 + 0x1e0));
                uVar23 = (uint)uVar8;
                if ((*(uint *)(plVar4 + 3) <= uVar23) || (*(uint *)(lVar21 + 0x18) <= uVar23))
                goto LAB_02bffdc8;
                uVar10 = System_AppDomain__GetData
                                   (plVar4[uVar8 + 4],*(undefined8 *)(lVar21 + 0x20 + uVar8 * 8),0);
                if ((uVar10 & 1) == 0) {
                  uVar16 = *(undefined8 *)PTR_DAT_037fa3c0;
                  if (*(int *)(*(long *)puVar13 + 0xe0) == 0) {
                    thunk_FUN_01843fdc();
                  }
                  uVar16 = FUN_02bddb5c(uVar16,0);
                  uVar10 = FUN_02be66d0(plVar5,uVar16,0);
                  if ((uVar10 & 1) == 0) {
                    if (*(uint *)(plVar4 + 3) <= uVar23) goto LAB_02bffdc8;
                    plVar18 = (long *)plVar4[uVar8 + 4];
                    if (plVar18 != (long *)0x0) {
                      bVar1 = *(byte *)(*(long *)PTR_DAT_03804aa8 + 0x130);
                      if ((bVar1 <= *(byte *)(*plVar18 + 0x130)) &&
                         (*(long *)(*(long *)(*plVar18 + 200) + (ulong)bVar1 * 8 + -8) ==
                          *(long *)PTR_DAT_03804aa8)) {
                        if (*(uint *)(plVar9 + 3) <= uVar20) goto LAB_02bffdc8;
                        plVar14 = (long *)*plVar22;
                        if (plVar14 == (long *)0x0) goto LAB_02bffbb8;
                        bVar1 = *(byte *)(*(long *)PTR_DAT_037fc238 + 0x130);
                        if ((*(byte *)(*plVar14 + 0x130) < bVar1) ||
                           (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar1 * 8 + -8) !=
                            *(long *)PTR_DAT_037fc238)) goto LAB_02bffbb8;
                        plVar18 = (long *)FUN_02b13274(plVar18,plVar14,0);
                        lVar6 = *(long *)puVar13;
                        if (*(int *)(lVar6 + 0xe0) == 0) {
                          thunk_FUN_01843fdc(lVar6);
                        }
                        uVar10 = FUN_02be66d0(plVar18,0,0);
                        if ((uVar10 & 1) != 0) goto LAB_02bffbb8;
                      }
                    }
                    if (plVar5 == (long *)0x0) goto LAB_02bffdcc;
                    uVar10 = FUN_02be8a80(plVar5,0);
                    if ((uVar10 & 1) == 0) {
                      uVar10 = (**(code **)(*plVar5 + 0x288))
                                         (plVar5,plVar18,*(undefined8 *)(*plVar5 + 0x290));
                    }
                    else {
                      if ((plVar18 == (long *)0x0) ||
                         (lVar6 = (**(code **)(*plVar18 + 0x308))
                                            (plVar18,*(undefined8 *)(*plVar18 + 0x310)), lVar6 == 0)
                         ) goto LAB_02bffdcc;
                      uVar10 = FUN_02be741c(lVar6,0);
                      if ((uVar10 & 1) == 0) goto LAB_02bffbb8;
                      uVar16 = (**(code **)(*plVar18 + 0x308))
                                         (plVar18,*(undefined8 *)(*plVar18 + 0x310));
                      uVar11 = (**(code **)(*plVar5 + 0x308))
                                         (plVar5,*(undefined8 *)(*plVar5 + 0x310));
                      if (*(int *)(*(long *)PTR_DAT_0380a318 + 0xe0) == 0) {
                        thunk_FUN_01843fdc(*(long *)PTR_DAT_0380a318);
                      }
                      uVar10 = FUN_02bffe74(uVar16,uVar11);
                    }
                    if ((uVar10 & 1) == 0) goto LAB_02bffbb8;
                  }
                }
                uVar8 = uVar8 + 1;
                if ((int)plVar4[3] <= (int)(uint)uVar8) break;
                if (*(uint *)(lVar21 + 0x18) <= (uint)uVar8) goto LAB_02bffdc8;
              }
              uVar8 = (ulong)(uVar23 + 1);
LAB_02bffbb8:
              iVar15 = (int)uVar8;
              iVar3 = (int)plVar4[3];
            }
            if (iVar15 == iVar3) {
              uVar23 = *(uint *)(plVar9 + 3);
              if (uVar23 <= uVar20) goto LAB_02bffdc8;
              lVar21 = *plVar22;
              if (lVar21 != 0) {
                lVar6 = thunk_FUN_01861ac0(lVar21,*(undefined8 *)(*plVar9 + 0x40));
                if (lVar6 == 0) {
LAB_02bffe2c:
                  uVar16 = thunk_FUN_0187aa4c();
                    /* WARNING: Subroutine does not return */
                  FUN_017fc474(uVar16,0);
                }
                uVar23 = *(uint *)(plVar9 + 3);
              }
              if (uVar23 <= uVar17) goto LAB_02bffdc8;
              lVar6 = (long)(int)uVar17;
              plVar9[lVar6 + 4] = lVar21;
              uVar17 = uVar17 + 1;
              thunk_FUN_0188fd20(plVar9 + lVar6 + 4,lVar21);
            }
          }
          lVar21 = plVar9[3];
          uVar20 = uVar20 + 1;
        } while ((int)uVar20 < (int)lVar21);
        if (uVar17 != 0) {
          if (uVar17 == 1) {
            if ((int)lVar21 == 0) {
LAB_02bffdc8:
                    /* WARNING: Subroutine does not return */
              FUN_017fc5b0();
            }
          }
          else {
            if (plVar4 == (long *)0x0) goto LAB_02bffdcc;
            lVar21 = FUN_017fc3f4(*(undefined8 *)PTR_DAT_037f5118,(int)plVar4[3]);
            lVar6 = plVar4[3];
            if (0 < (int)lVar6) {
              if (lVar21 == 0) goto LAB_02bffdcc;
              uVar20 = *(uint *)(lVar21 + 0x18);
              uVar8 = 0;
              do {
                if (uVar20 <= uVar8) goto LAB_02bffdc8;
                *(int *)(lVar21 + 0x20 + uVar8 * 4) = (int)uVar8;
                uVar8 = uVar8 + 1;
              } while ((long)uVar8 < (long)(int)lVar6);
            }
            if ((int)uVar17 < 2) {
              uVar20 = 0;
            }
            else {
              lVar6 = 0;
              uVar20 = 0;
              bVar2 = false;
              do {
                if (((uint)plVar9[3] <= uVar20) || ((plVar9[3] & 0xffffffffU) <= lVar6 + 1U))
                goto LAB_02bffdc8;
                lVar7 = plVar9[lVar6 + 5];
                lVar19 = plVar9[(long)(int)uVar20 + 4];
                if (*(int *)(*(long *)PTR_DAT_0380a318 + 0xe0) == 0) {
                  thunk_FUN_01843fdc();
                }
                iVar3 = FUN_02bfce0c(lVar19,lVar21,0,lVar7,lVar21,0,plVar4,0);
                if (iVar3 == 0) {
                  bVar2 = true;
                }
                else if (iVar3 == 2) {
                  bVar2 = false;
                  uVar20 = (int)lVar6 + 1;
                }
                lVar6 = lVar6 + 1;
              } while ((ulong)uVar17 - 1 != lVar6);
              if (bVar2) {
                thunk_FUN_01851c08(PTR_DAT_03803f28);
                uVar16 = thunk_FUN_01861bbc();
                uVar11 = thunk_FUN_01851c08(PTR_DAT_038045f0);
                FUN_02b0d074(uVar16,uVar11,0);
                goto LAB_02bffe14;
              }
            }
            if (*(uint *)(plVar9 + 3) <= uVar20) goto LAB_02bffdc8;
            plVar9 = plVar9 + (int)uVar20;
          }
          return plVar9[4];
        }
      }
      return 0;
    }
  }
LAB_02bffdcc:
                    /* WARNING: Subroutine does not return */
  FUN_017fc5a8();
}


