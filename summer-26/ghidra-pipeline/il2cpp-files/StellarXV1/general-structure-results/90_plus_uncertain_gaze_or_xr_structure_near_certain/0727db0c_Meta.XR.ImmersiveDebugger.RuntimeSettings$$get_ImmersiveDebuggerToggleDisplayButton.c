/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.RuntimeSettings$$get_ImmersiveDebuggerToggleDisplayButton
ENTRY_POINT: 0727db0c
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 102
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;ui_interaction;data_collection
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;ui_or_gameplay_sink_hits_2;strong_file_logging_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


long Meta_XR_ImmersiveDebugger_RuntimeSettings__get_ImmersiveDebuggerToggleDisplayButton
               (long param_1)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long unaff_x19;
  long *unaff_x21;
  int unaff_w22;
  long lVar12;
  long *plVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long *unaff_x26;
  undefined8 *unaff_x28;
  long *unaff_x29;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined4 in_stack_00000028;
  
  do {
    iVar1 = unaff_w22 + 1;
    *(int *)(param_1 + 0x10) = iVar1;
    plVar13 = *(long **)(unaff_x19 + 0x58);
    if (plVar13 == (long *)0x0) break;
    lVar9 = *plVar13;
    lVar12 = *unaff_x21;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_092c16f0) {
          puVar5 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto Meta_XR_ImmersiveDebugger_RuntimeSettings__set_ShowWarningLog;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)FUN_040b1e00(plVar13,*(long *)PTR_DAT_092c16f0,0);
Meta_XR_ImmersiveDebugger_RuntimeSettings__set_ShowWarningLog:
    uVar6 = (*(code *)*puVar5)(plVar13,unaff_w22,puVar5[1]);
    plVar13 = *(long **)(unaff_x19 + 0x58);
    if (plVar13 == (long *)0x0) break;
    lVar9 = *plVar13;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_092c16f0) {
          puVar5 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto Meta_XR_ImmersiveDebugger_RuntimeSettings__set_PanelLayer;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)FUN_040b1e00(plVar13,*(long *)PTR_DAT_092c16f0,0);
Meta_XR_ImmersiveDebugger_RuntimeSettings__set_PanelLayer:
    lVar9 = (*(code *)*puVar5)(plVar13,unaff_w22,puVar5[1]);
    if ((lVar9 == 0) || (lVar12 == 0)) break;
    FUN_06eef620(lVar12,uVar6,*(undefined4 *)(lVar9 + 0x10),*(undefined8 *)PTR_DAT_092c1638);
    plVar13 = *(long **)(unaff_x19 + 0x58);
    if (plVar13 == (long *)0x0) break;
    lVar9 = *plVar13;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *unaff_x26) {
          puVar5 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_0727da88;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)FUN_040b1e00(plVar13,*unaff_x26,0);
LAB_0727da88:
    iVar4 = (*(code *)*puVar5)(plVar13,puVar5[1]);
    if (iVar4 <= iVar1) {
      lVar9 = *unaff_x29;
      if (*(int *)(lVar9 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
        lVar9 = *unaff_x29;
      }
      uVar6 = **(undefined8 **)(lVar9 + 0xb8);
      lVar9 = thunk_FUN_040b4efc(*unaff_x28);
      FUN_07df6498(lVar9,uVar6,0);
      lVar12 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092c1710);
      FUN_05c26520(lVar12,*(undefined8 *)PTR_DAT_092c1708);
      puVar3 = PTR_DAT_092c1768;
      uVar6 = *(undefined8 *)(unaff_x19 + 0x58);
      lVar7 = *(long *)PTR_DAT_092c1768;
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
        lVar7 = *(long *)puVar3;
      }
      puVar5 = *(undefined8 **)(lVar7 + 0xb8);
      lVar14 = puVar5[1];
      if (lVar14 == 0) {
        if (*(int *)(lVar7 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
          puVar5 = *(undefined8 **)(*(long *)PTR_DAT_092c1768 + 0xb8);
        }
        uVar16 = *puVar5;
        lVar14 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092c1690);
        FUN_056893d4(lVar14,uVar16,*(undefined8 *)PTR_DAT_092c1748,0);
        plVar13 = (long *)(*(long *)(*(long *)PTR_DAT_092c1768 + 0xb8) + 8);
        *plVar13 = lVar14;
        thunk_FUN_040ec700(plVar13,lVar14);
      }
      uVar10 = FUN_04f7671c(uVar6,lVar14,*(undefined8 *)PTR_DAT_092c1650);
      if ((uVar10 & 1) != 0) {
        uVar6 = FUN_05217a68(*(undefined8 *)PTR_DAT_092c14f8,*(undefined8 *)PTR_DAT_092c17a0,
                             *(undefined8 *)PTR_DAT_092c1740);
        if (lVar12 == 0) break;
        lVar7 = *(long *)(lVar12 + 0x10);
        lVar14 = *(long *)PTR_DAT_092c16f8;
        *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
        if (lVar7 == 0) break;
        uVar2 = *(uint *)(lVar12 + 0x18);
        if (uVar2 < *(uint *)(lVar7 + 0x18)) {
          *(uint *)(lVar12 + 0x18) = uVar2 + 1;
          *(undefined8 *)(lVar7 + (long)(int)uVar2 * 8 + 0x20) = uVar6;
          thunk_FUN_040ec700();
        }
        else {
          FUN_05c26d88(lVar12,uVar6,
                       *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
        }
      }
      plVar13 = (long *)FUN_04077674(*(undefined8 *)PTR_DAT_09287040,0xd);
      uVar6 = FUN_07dfb290(*(undefined8 *)PTR_DAT_092c1770,0);
      in_stack_00000028 = *(undefined4 *)(unaff_x19 + 0x10);
      in_stack_00000018 = *(undefined8 *)PTR_DAT_092c1718;
      in_stack_00000020 = 0xffffffffffffffff;
      lVar7 = FUN_076b01b4(&stack0x00000018,0);
      if (lVar7 == 0) break;
      uVar16 = FUN_074eac78(lVar7,0);
      lVar7 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092c1400);
      FUN_07df1964(lVar7,uVar6,uVar16,0);
      if (plVar13 == (long *)0x0) break;
      if ((lVar7 != 0) &&
         (lVar14 = thunk_FUN_040b4e00(lVar7,*(undefined8 *)(*plVar13 + 0x40)), lVar14 == 0)) {
LAB_0727e420:
        uVar6 = thunk_FUN_040c2a64();
                    /* WARNING: Subroutine does not return */
        FUN_040776f4(uVar6,0);
      }
      if ((int)plVar13[3] != 0) {
        plVar13[4] = lVar7;
        thunk_FUN_040ec700(plVar13 + 4,lVar7);
        lVar7 = *unaff_x29;
        if (*(int *)(lVar7 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
          lVar7 = *unaff_x29;
        }
        uVar6 = *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x20);
        lVar7 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092c1400);
        FUN_07df1964(lVar7,uVar6,*(undefined8 *)PTR_DAT_0928e688,0);
        if ((lVar7 != 0) &&
           (lVar14 = thunk_FUN_040b4e00(lVar7,*(undefined8 *)(*plVar13 + 0x40)), lVar14 == 0))
        goto LAB_0727e420;
        if ((*(uint *)(plVar13 + 3) & 0xfffffffe) != 0) {
          plVar13[5] = lVar7;
          thunk_FUN_040ec700(plVar13 + 5,lVar7);
          lVar7 = *(long *)PTR_DAT_092c1768;
          if (*(int *)(lVar7 + 0xe4) == 0) {
            thunk_FUN_040d65a8();
            lVar7 = *(long *)PTR_DAT_092c1768;
          }
          puVar5 = *(undefined8 **)(lVar7 + 0xb8);
          lVar14 = puVar5[2];
          if (lVar14 == 0) {
            if (*(int *)(lVar7 + 0xe4) == 0) {
              thunk_FUN_040d65a8();
              puVar5 = *(undefined8 **)(*(long *)PTR_DAT_092c1768 + 0xb8);
            }
            uVar6 = *puVar5;
            lVar14 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092c1698);
            FUN_0568af90(lVar14,uVar6,*(undefined8 *)PTR_DAT_092c1750,0);
            plVar8 = (long *)(*(long *)(*(long *)PTR_DAT_092c1768 + 0xb8) + 0x10);
            *plVar8 = lVar14;
            thunk_FUN_040ec700(plVar8,lVar14);
          }
          lVar12 = System_MemoryExtensions__IsTypeComparableAsBytes<char>
                             (lVar12,lVar14,*(undefined8 *)PTR_DAT_092c1668);
          if ((lVar12 != 0) &&
             (lVar7 = thunk_FUN_040b4e00(lVar12,*(undefined8 *)(*plVar13 + 0x40)), lVar7 == 0))
          goto LAB_0727e420;
          if (2 < *(uint *)(plVar13 + 3)) {
            plVar13[6] = lVar12;
            uVar6 = thunk_FUN_040ec700(plVar13 + 6,lVar12);
            lVar12 = FUN_07283670(uVar6,*(undefined8 *)PTR_DAT_0928e5a8,
                                  *(undefined8 *)(unaff_x19 + 0x18));
            if ((lVar12 != 0) &&
               (lVar7 = thunk_FUN_040b4e00(lVar12,*(undefined8 *)(*plVar13 + 0x40)), lVar7 == 0))
            goto LAB_0727e420;
            if ((*(uint *)(plVar13 + 3) & 0xfffffffc) != 0) {
              plVar13[7] = lVar12;
              uVar6 = thunk_FUN_040ec700(plVar13 + 7,lVar12);
              lVar12 = FUN_07283670(uVar6,*(undefined8 *)PTR_DAT_092c1778,
                                    *(undefined8 *)(unaff_x19 + 0x20));
              if ((lVar12 != 0) &&
                 (lVar7 = thunk_FUN_040b4e00(lVar12,*(undefined8 *)(*plVar13 + 0x40)), lVar7 == 0))
              goto LAB_0727e420;
              if (4 < *(uint *)(plVar13 + 3)) {
                plVar13[8] = lVar12;
                uVar6 = thunk_FUN_040ec700(plVar13 + 8,lVar12);
                lVar12 = FUN_07283670(uVar6,*(undefined8 *)PTR_DAT_0928cfa8,
                                      *(undefined8 *)(unaff_x19 + 0x28));
                if ((lVar12 != 0) &&
                   (lVar7 = thunk_FUN_040b4e00(lVar12,*(undefined8 *)(*plVar13 + 0x40)), lVar7 == 0)
                   ) goto LAB_0727e420;
                if (5 < *(uint *)(plVar13 + 3)) {
                  plVar13[9] = lVar12;
                  uVar6 = thunk_FUN_040ec700(plVar13 + 9,lVar12);
                  lVar12 = FUN_07283670(uVar6,*(undefined8 *)PTR_DAT_092c1788,
                                        *(undefined8 *)(unaff_x19 + 0x30));
                  if ((lVar12 != 0) &&
                     (lVar7 = thunk_FUN_040b4e00(lVar12,*(undefined8 *)(*plVar13 + 0x40)),
                     lVar7 == 0)) goto LAB_0727e420;
                  if (6 < *(uint *)(plVar13 + 3)) {
                    plVar13[10] = lVar12;
                    uVar6 = thunk_FUN_040ec700(plVar13 + 10,lVar12);
                    lVar12 = FUN_07283670(uVar6,*(undefined8 *)PTR_DAT_092c1790,
                                          *(undefined8 *)(unaff_x19 + 0x38));
                    if ((lVar12 != 0) &&
                       (lVar7 = thunk_FUN_040b4e00(lVar12,*(undefined8 *)(*plVar13 + 0x40)),
                       lVar7 == 0)) goto LAB_0727e420;
                    if ((*(uint *)(plVar13 + 3) & 0xfffffff8) != 0) {
                      plVar13[0xb] = lVar12;
                      uVar6 = thunk_FUN_040ec700(plVar13 + 0xb,lVar12);
                      lVar12 = FUN_07283670(uVar6,*(undefined8 *)PTR_DAT_092c1798,
                                            *(undefined8 *)(unaff_x19 + 0x40));
                      if ((lVar12 != 0) &&
                         (lVar7 = thunk_FUN_040b4e00(lVar12,*(undefined8 *)(*plVar13 + 0x40)),
                         lVar7 == 0)) goto LAB_0727e420;
                      if (8 < *(uint *)(plVar13 + 3)) {
                        plVar13[0xc] = lVar12;
                        uVar6 = thunk_FUN_040ec700(plVar13 + 0xc,lVar12);
                        lVar12 = FUN_07283670(uVar6,*(undefined8 *)PTR_DAT_092a5d10,
                                              *(undefined8 *)(unaff_x19 + 0x48));
                        if ((lVar12 != 0) &&
                           (lVar7 = thunk_FUN_040b4e00(lVar12,*(undefined8 *)(*plVar13 + 0x40)),
                           lVar7 == 0)) goto LAB_0727e420;
                        if (9 < *(uint *)(plVar13 + 3)) {
                          plVar13[0xd] = lVar12;
                          uVar6 = thunk_FUN_040ec700(plVar13 + 0xd,lVar12);
                          lVar12 = FUN_07283670(uVar6,*(undefined8 *)PTR_DAT_092c1780,
                                                *(undefined8 *)(unaff_x19 + 0x50));
                          if ((lVar12 != 0) &&
                             (lVar7 = thunk_FUN_040b4e00(lVar12,*(undefined8 *)(*plVar13 + 0x40)),
                             lVar7 == 0)) goto LAB_0727e420;
                          if (10 < *(uint *)(plVar13 + 3)) {
                            plVar13[0xe] = lVar12;
                            thunk_FUN_040ec700(plVar13 + 0xe,lVar12);
                            lVar12 = *unaff_x29;
                            if (*(int *)(lVar12 + 0xe4) == 0) {
                              thunk_FUN_040d65a8();
                              lVar12 = *unaff_x29;
                            }
                            uVar16 = *(undefined8 *)(unaff_x19 + 0x58);
                            uVar15 = *(undefined8 *)(*(long *)(lVar12 + 0xb8) + 0x10);
                            uVar6 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092c16a8);
                            FUN_0568af90();
                            uVar6 = System_MemoryExtensions__IsTypeComparableAsBytes<char>
                                              (uVar16,uVar6,*(undefined8 *)PTR_DAT_092c1660);
                            lVar12 = thunk_FUN_040b4efc(*unaff_x28);
                            System_Xml_XmlReader__Close(lVar12,uVar15,uVar6,0);
                            if ((lVar12 != 0) &&
                               (lVar7 = thunk_FUN_040b4e00(lVar12,*(undefined8 *)(*plVar13 + 0x40)),
                               lVar7 == 0)) goto LAB_0727e420;
                            if (0xb < *(uint *)(plVar13 + 3)) {
                              plVar13[0xf] = lVar12;
                              thunk_FUN_040ec700(plVar13 + 0xf,lVar12);
                              uVar16 = *(undefined8 *)(unaff_x19 + 0x60);
                              uVar15 = *(undefined8 *)(*(long *)(*unaff_x29 + 0xb8) + 8);
                              uVar6 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092c16a0);
                              FUN_0568af90();
                              uVar6 = System_MemoryExtensions__IsTypeComparableAsBytes<char>
                                                (uVar16,uVar6,*(undefined8 *)PTR_DAT_092c1658);
                              lVar12 = thunk_FUN_040b4efc(*unaff_x28);
                              System_Xml_XmlReader__Close(lVar12,uVar15,uVar6,0);
                              if ((lVar12 != 0) &&
                                 (lVar7 = thunk_FUN_040b4e00(lVar12,*(undefined8 *)(*plVar13 + 0x40)
                                                            ), lVar7 == 0)) goto LAB_0727e420;
                              if (0xc < *(uint *)(plVar13 + 3)) {
                                plVar13[0x10] = lVar12;
                                thunk_FUN_040ec700(plVar13 + 0x10,lVar12);
                                if (lVar9 != 0) {
                                  thunk_FUN_07df3248(lVar9,plVar13,0);
                                  return lVar9;
                                }
                                break;
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
      }
                    /* WARNING: Subroutine does not return */
      FUN_04077838();
    }
    plVar13 = *(long **)(unaff_x19 + 0x58);
    if (plVar13 == (long *)0x0) break;
    lVar9 = *plVar13;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_092c16f0) {
          puVar5 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_0727daf8;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)FUN_040b1e00(plVar13,*(long *)PTR_DAT_092c16f0,0);
LAB_0727daf8:
    param_1 = (*(code *)*puVar5)(plVar13,iVar1,puVar5[1]);
    unaff_w22 = iVar1;
  } while (param_1 != 0);
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


