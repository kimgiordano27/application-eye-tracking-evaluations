/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.RuntimeSettings$$get_ShowWarningLog
ENTRY_POINT: 0727db6c
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 88
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;data_collection
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;strong_file_logging_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


long Meta_XR_ImmersiveDebugger_RuntimeSettings__get_ShowWarningLog(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long in_x9;
  ulong uVar10;
  int *piVar11;
  long unaff_x19;
  int unaff_w20;
  long *unaff_x21;
  int unaff_w22;
  long unaff_x23;
  long *unaff_x24;
  long lVar12;
  undefined8 uVar13;
  long *plVar14;
  undefined8 uVar15;
  long *unaff_x26;
  undefined8 *unaff_x28;
  long *unaff_x29;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined4 in_stack_00000028;
  
code_r0x0727db6c:
  puVar5 = (undefined8 *)(param_1 + in_x9 * 0x10 + 0x138);
  iVar3 = unaff_w22;
  while( true ) {
    unaff_w22 = unaff_w20;
    uVar4 = (*(code *)*puVar5)(unaff_x24,iVar3,puVar5[1]);
    plVar14 = *(long **)(unaff_x19 + 0x58);
    if (plVar14 == (long *)0x0) break;
    lVar9 = *plVar14;
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
    puVar5 = (undefined8 *)FUN_040b1e00(plVar14,*(long *)PTR_DAT_092c16f0,0);
Meta_XR_ImmersiveDebugger_RuntimeSettings__set_PanelLayer:
    lVar9 = (*(code *)*puVar5)(plVar14,iVar3,puVar5[1]);
    if ((lVar9 == 0) || (unaff_x23 == 0)) break;
    FUN_06eef620(unaff_x23,uVar4,*(undefined4 *)(lVar9 + 0x10),*(undefined8 *)PTR_DAT_092c1638);
    plVar14 = *(long **)(unaff_x19 + 0x58);
    if (plVar14 == (long *)0x0) break;
    lVar9 = *plVar14;
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
    puVar5 = (undefined8 *)FUN_040b1e00(plVar14,*unaff_x26,0);
LAB_0727da88:
    iVar3 = (*(code *)*puVar5)(plVar14,puVar5[1]);
    if (iVar3 <= unaff_w22) {
      lVar9 = *unaff_x29;
      if (*(int *)(lVar9 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
        lVar9 = *unaff_x29;
      }
      uVar4 = **(undefined8 **)(lVar9 + 0xb8);
      lVar9 = thunk_FUN_040b4efc(*unaff_x28);
      FUN_07df6498(lVar9,uVar4,0);
      lVar6 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092c1710);
      FUN_05c26520(lVar6,*(undefined8 *)PTR_DAT_092c1708);
      puVar2 = PTR_DAT_092c1768;
      uVar4 = *(undefined8 *)(unaff_x19 + 0x58);
      lVar7 = *(long *)PTR_DAT_092c1768;
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
        lVar7 = *(long *)puVar2;
      }
      puVar5 = *(undefined8 **)(lVar7 + 0xb8);
      lVar12 = puVar5[1];
      if (lVar12 == 0) {
        if (*(int *)(lVar7 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
          puVar5 = *(undefined8 **)(*(long *)PTR_DAT_092c1768 + 0xb8);
        }
        uVar15 = *puVar5;
        lVar12 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092c1690);
        FUN_056893d4(lVar12,uVar15,*(undefined8 *)PTR_DAT_092c1748,0);
        plVar14 = (long *)(*(long *)(*(long *)PTR_DAT_092c1768 + 0xb8) + 8);
        *plVar14 = lVar12;
        thunk_FUN_040ec700(plVar14,lVar12);
      }
      uVar10 = FUN_04f7671c(uVar4,lVar12,*(undefined8 *)PTR_DAT_092c1650);
      if ((uVar10 & 1) != 0) {
        uVar4 = FUN_05217a68(*(undefined8 *)PTR_DAT_092c14f8,*(undefined8 *)PTR_DAT_092c17a0,
                             *(undefined8 *)PTR_DAT_092c1740);
        if (lVar6 == 0) break;
        lVar7 = *(long *)(lVar6 + 0x10);
        lVar12 = *(long *)PTR_DAT_092c16f8;
        *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
        if (lVar7 == 0) break;
        uVar1 = *(uint *)(lVar6 + 0x18);
        if (uVar1 < *(uint *)(lVar7 + 0x18)) {
          *(uint *)(lVar6 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar4;
          thunk_FUN_040ec700();
        }
        else {
          FUN_05c26d88(lVar6,uVar4,
                       *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
        }
      }
      plVar14 = (long *)FUN_04077674(*(undefined8 *)PTR_DAT_09287040,0xd);
      uVar4 = FUN_07dfb290(*(undefined8 *)PTR_DAT_092c1770,0);
      in_stack_00000028 = *(undefined4 *)(unaff_x19 + 0x10);
      in_stack_00000018 = *(undefined8 *)PTR_DAT_092c1718;
      in_stack_00000020 = 0xffffffffffffffff;
      lVar7 = FUN_076b01b4(&stack0x00000018,0);
      if (lVar7 != 0) {
        uVar15 = FUN_074eac78(lVar7,0);
        lVar7 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092c1400);
        FUN_07df1964(lVar7,uVar4,uVar15,0);
        if (plVar14 != (long *)0x0) {
          if ((lVar7 != 0) &&
             (lVar12 = thunk_FUN_040b4e00(lVar7,*(undefined8 *)(*plVar14 + 0x40)), lVar12 == 0)) {
LAB_0727e420:
            uVar4 = thunk_FUN_040c2a64();
                    /* WARNING: Subroutine does not return */
            FUN_040776f4(uVar4,0);
          }
          if ((int)plVar14[3] != 0) {
            plVar14[4] = lVar7;
            thunk_FUN_040ec700(plVar14 + 4,lVar7);
            lVar7 = *unaff_x29;
            if (*(int *)(lVar7 + 0xe4) == 0) {
              thunk_FUN_040d65a8();
              lVar7 = *unaff_x29;
            }
            uVar4 = *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x20);
            lVar7 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092c1400);
            FUN_07df1964(lVar7,uVar4,*(undefined8 *)PTR_DAT_0928e688,0);
            if ((lVar7 != 0) &&
               (lVar12 = thunk_FUN_040b4e00(lVar7,*(undefined8 *)(*plVar14 + 0x40)), lVar12 == 0))
            goto LAB_0727e420;
            if ((*(uint *)(plVar14 + 3) & 0xfffffffe) != 0) {
              plVar14[5] = lVar7;
              thunk_FUN_040ec700(plVar14 + 5,lVar7);
              lVar7 = *(long *)PTR_DAT_092c1768;
              if (*(int *)(lVar7 + 0xe4) == 0) {
                thunk_FUN_040d65a8();
                lVar7 = *(long *)PTR_DAT_092c1768;
              }
              puVar5 = *(undefined8 **)(lVar7 + 0xb8);
              lVar12 = puVar5[2];
              if (lVar12 == 0) {
                if (*(int *)(lVar7 + 0xe4) == 0) {
                  thunk_FUN_040d65a8();
                  puVar5 = *(undefined8 **)(*(long *)PTR_DAT_092c1768 + 0xb8);
                }
                uVar4 = *puVar5;
                lVar12 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092c1698);
                FUN_0568af90(lVar12,uVar4,*(undefined8 *)PTR_DAT_092c1750,0);
                plVar8 = (long *)(*(long *)(*(long *)PTR_DAT_092c1768 + 0xb8) + 0x10);
                *plVar8 = lVar12;
                thunk_FUN_040ec700(plVar8,lVar12);
              }
              lVar6 = System_MemoryExtensions__IsTypeComparableAsBytes<char>
                                (lVar6,lVar12,*(undefined8 *)PTR_DAT_092c1668);
              if ((lVar6 != 0) &&
                 (lVar7 = thunk_FUN_040b4e00(lVar6,*(undefined8 *)(*plVar14 + 0x40)), lVar7 == 0))
              goto LAB_0727e420;
              if (2 < *(uint *)(plVar14 + 3)) {
                plVar14[6] = lVar6;
                uVar4 = thunk_FUN_040ec700(plVar14 + 6,lVar6);
                lVar6 = FUN_07283670(uVar4,*(undefined8 *)PTR_DAT_0928e5a8,
                                     *(undefined8 *)(unaff_x19 + 0x18));
                if ((lVar6 != 0) &&
                   (lVar7 = thunk_FUN_040b4e00(lVar6,*(undefined8 *)(*plVar14 + 0x40)), lVar7 == 0))
                goto LAB_0727e420;
                if ((*(uint *)(plVar14 + 3) & 0xfffffffc) != 0) {
                  plVar14[7] = lVar6;
                  uVar4 = thunk_FUN_040ec700(plVar14 + 7,lVar6);
                  lVar6 = FUN_07283670(uVar4,*(undefined8 *)PTR_DAT_092c1778,
                                       *(undefined8 *)(unaff_x19 + 0x20));
                  if ((lVar6 != 0) &&
                     (lVar7 = thunk_FUN_040b4e00(lVar6,*(undefined8 *)(*plVar14 + 0x40)), lVar7 == 0
                     )) goto LAB_0727e420;
                  if (4 < *(uint *)(plVar14 + 3)) {
                    plVar14[8] = lVar6;
                    uVar4 = thunk_FUN_040ec700(plVar14 + 8,lVar6);
                    lVar6 = FUN_07283670(uVar4,*(undefined8 *)PTR_DAT_0928cfa8,
                                         *(undefined8 *)(unaff_x19 + 0x28));
                    if ((lVar6 != 0) &&
                       (lVar7 = thunk_FUN_040b4e00(lVar6,*(undefined8 *)(*plVar14 + 0x40)),
                       lVar7 == 0)) goto LAB_0727e420;
                    if (5 < *(uint *)(plVar14 + 3)) {
                      plVar14[9] = lVar6;
                      uVar4 = thunk_FUN_040ec700(plVar14 + 9,lVar6);
                      lVar6 = FUN_07283670(uVar4,*(undefined8 *)PTR_DAT_092c1788,
                                           *(undefined8 *)(unaff_x19 + 0x30));
                      if ((lVar6 != 0) &&
                         (lVar7 = thunk_FUN_040b4e00(lVar6,*(undefined8 *)(*plVar14 + 0x40)),
                         lVar7 == 0)) goto LAB_0727e420;
                      if (6 < *(uint *)(plVar14 + 3)) {
                        plVar14[10] = lVar6;
                        uVar4 = thunk_FUN_040ec700(plVar14 + 10,lVar6);
                        lVar6 = FUN_07283670(uVar4,*(undefined8 *)PTR_DAT_092c1790,
                                             *(undefined8 *)(unaff_x19 + 0x38));
                        if ((lVar6 != 0) &&
                           (lVar7 = thunk_FUN_040b4e00(lVar6,*(undefined8 *)(*plVar14 + 0x40)),
                           lVar7 == 0)) goto LAB_0727e420;
                        if ((*(uint *)(plVar14 + 3) & 0xfffffff8) != 0) {
                          plVar14[0xb] = lVar6;
                          uVar4 = thunk_FUN_040ec700(plVar14 + 0xb,lVar6);
                          lVar6 = FUN_07283670(uVar4,*(undefined8 *)PTR_DAT_092c1798,
                                               *(undefined8 *)(unaff_x19 + 0x40));
                          if ((lVar6 != 0) &&
                             (lVar7 = thunk_FUN_040b4e00(lVar6,*(undefined8 *)(*plVar14 + 0x40)),
                             lVar7 == 0)) goto LAB_0727e420;
                          if (8 < *(uint *)(plVar14 + 3)) {
                            plVar14[0xc] = lVar6;
                            uVar4 = thunk_FUN_040ec700(plVar14 + 0xc,lVar6);
                            lVar6 = FUN_07283670(uVar4,*(undefined8 *)PTR_DAT_092a5d10,
                                                 *(undefined8 *)(unaff_x19 + 0x48));
                            if ((lVar6 != 0) &&
                               (lVar7 = thunk_FUN_040b4e00(lVar6,*(undefined8 *)(*plVar14 + 0x40)),
                               lVar7 == 0)) goto LAB_0727e420;
                            if (9 < *(uint *)(plVar14 + 3)) {
                              plVar14[0xd] = lVar6;
                              uVar4 = thunk_FUN_040ec700(plVar14 + 0xd,lVar6);
                              lVar6 = FUN_07283670(uVar4,*(undefined8 *)PTR_DAT_092c1780,
                                                   *(undefined8 *)(unaff_x19 + 0x50));
                              if ((lVar6 != 0) &&
                                 (lVar7 = thunk_FUN_040b4e00(lVar6,*(undefined8 *)(*plVar14 + 0x40))
                                 , lVar7 == 0)) goto LAB_0727e420;
                              if (10 < *(uint *)(plVar14 + 3)) {
                                plVar14[0xe] = lVar6;
                                thunk_FUN_040ec700(plVar14 + 0xe,lVar6);
                                lVar6 = *unaff_x29;
                                if (*(int *)(lVar6 + 0xe4) == 0) {
                                  thunk_FUN_040d65a8();
                                  lVar6 = *unaff_x29;
                                }
                                uVar15 = *(undefined8 *)(unaff_x19 + 0x58);
                                uVar13 = *(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x10);
                                uVar4 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092c16a8);
                                FUN_0568af90();
                                uVar4 = System_MemoryExtensions__IsTypeComparableAsBytes<char>
                                                  (uVar15,uVar4,*(undefined8 *)PTR_DAT_092c1660);
                                lVar6 = thunk_FUN_040b4efc(*unaff_x28);
                                System_Xml_XmlReader__Close(lVar6,uVar13,uVar4,0);
                                if ((lVar6 != 0) &&
                                   (lVar7 = thunk_FUN_040b4e00(lVar6,*(undefined8 *)
                                                                      (*plVar14 + 0x40)), lVar7 == 0
                                   )) goto LAB_0727e420;
                                if (0xb < *(uint *)(plVar14 + 3)) {
                                  plVar14[0xf] = lVar6;
                                  thunk_FUN_040ec700(plVar14 + 0xf,lVar6);
                                  uVar15 = *(undefined8 *)(unaff_x19 + 0x60);
                                  uVar13 = *(undefined8 *)(*(long *)(*unaff_x29 + 0xb8) + 8);
                                  uVar4 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092c16a0);
                                  FUN_0568af90();
                                  uVar4 = System_MemoryExtensions__IsTypeComparableAsBytes<char>
                                                    (uVar15,uVar4,*(undefined8 *)PTR_DAT_092c1658);
                                  lVar6 = thunk_FUN_040b4efc(*unaff_x28);
                                  System_Xml_XmlReader__Close(lVar6,uVar13,uVar4,0);
                                  if ((lVar6 != 0) &&
                                     (lVar7 = thunk_FUN_040b4e00(lVar6,*(undefined8 *)
                                                                        (*plVar14 + 0x40)),
                                     lVar7 == 0)) goto LAB_0727e420;
                                  if (0xc < *(uint *)(plVar14 + 3)) {
                                    plVar14[0x10] = lVar6;
                                    thunk_FUN_040ec700(plVar14 + 0x10,lVar6);
                                    if (lVar9 != 0) {
                                      thunk_FUN_07df3248(lVar9,plVar14,0);
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
      }
      break;
    }
    plVar14 = *(long **)(unaff_x19 + 0x58);
    if (plVar14 == (long *)0x0) break;
    lVar9 = *plVar14;
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
    puVar5 = (undefined8 *)FUN_040b1e00(plVar14,*(long *)PTR_DAT_092c16f0,0);
LAB_0727daf8:
    lVar9 = (*(code *)*puVar5)(plVar14,unaff_w22,puVar5[1]);
    if (lVar9 == 0) break;
    unaff_w20 = unaff_w22 + 1;
    *(int *)(lVar9 + 0x10) = unaff_w20;
    unaff_x24 = *(long **)(unaff_x19 + 0x58);
    if (unaff_x24 == (long *)0x0) break;
    param_1 = *unaff_x24;
    unaff_x23 = *unaff_x21;
    uVar10 = (ulong)*(ushort *)(param_1 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(param_1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_092c16f0) {
          in_x9 = (long)*piVar11;
          goto code_r0x0727db6c;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)FUN_040b1e00(unaff_x24,*(long *)PTR_DAT_092c16f0,0);
    iVar3 = unaff_w22;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


