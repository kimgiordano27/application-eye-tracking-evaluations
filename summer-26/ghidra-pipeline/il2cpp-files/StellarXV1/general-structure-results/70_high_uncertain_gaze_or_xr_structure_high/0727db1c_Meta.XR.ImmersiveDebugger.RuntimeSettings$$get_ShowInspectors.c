/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.RuntimeSettings$$get_ShowInspectors
ENTRY_POINT: 0727db1c
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


long Meta_XR_ImmersiveDebugger_RuntimeSettings__get_ShowInspectors(void)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long unaff_x19;
  int unaff_w20;
  int iVar11;
  long *unaff_x21;
  int unaff_w22;
  long lVar12;
  long *unaff_x24;
  long lVar13;
  undefined8 uVar14;
  long *plVar15;
  undefined8 uVar16;
  long *unaff_x26;
  undefined8 *unaff_x28;
  long *unaff_x29;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined4 in_stack_00000028;
  
  do {
    iVar11 = unaff_w20;
    lVar8 = *unaff_x24;
    lVar12 = *unaff_x21;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_092c16f0) {
          puVar4 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto Meta_XR_ImmersiveDebugger_RuntimeSettings__set_ShowWarningLog;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined8 *)FUN_040b1e00(unaff_x24,*(long *)PTR_DAT_092c16f0,0);
Meta_XR_ImmersiveDebugger_RuntimeSettings__set_ShowWarningLog:
    uVar5 = (*(code *)*puVar4)(unaff_x24,unaff_w22,puVar4[1]);
    plVar15 = *(long **)(unaff_x19 + 0x58);
    if (plVar15 == (long *)0x0)
    goto Meta_XR_ImmersiveDebugger_RuntimeSettings__set_InspectedDataAssets;
    lVar8 = *plVar15;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_092c16f0) {
          puVar4 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto Meta_XR_ImmersiveDebugger_RuntimeSettings__set_PanelLayer;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined8 *)FUN_040b1e00(plVar15,*(long *)PTR_DAT_092c16f0,0);
Meta_XR_ImmersiveDebugger_RuntimeSettings__set_PanelLayer:
    lVar8 = (*(code *)*puVar4)(plVar15,unaff_w22,puVar4[1]);
    if ((lVar8 == 0) || (lVar12 == 0))
    goto Meta_XR_ImmersiveDebugger_RuntimeSettings__set_InspectedDataAssets;
    FUN_06eef620(lVar12,uVar5,*(undefined4 *)(lVar8 + 0x10),*(undefined8 *)PTR_DAT_092c1638);
    plVar15 = *(long **)(unaff_x19 + 0x58);
    if (plVar15 == (long *)0x0)
    goto Meta_XR_ImmersiveDebugger_RuntimeSettings__set_InspectedDataAssets;
    lVar8 = *plVar15;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *unaff_x26) {
          puVar4 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_0727da88;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined8 *)FUN_040b1e00(plVar15,*unaff_x26,0);
LAB_0727da88:
    iVar3 = (*(code *)*puVar4)(plVar15,puVar4[1]);
    if (iVar3 <= iVar11) {
      lVar8 = *unaff_x29;
      if (*(int *)(lVar8 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
        lVar8 = *unaff_x29;
      }
      uVar5 = **(undefined8 **)(lVar8 + 0xb8);
      lVar8 = thunk_FUN_040b4efc(*unaff_x28);
      FUN_07df6498(lVar8,uVar5,0);
      lVar12 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092c1710);
      FUN_05c26520(lVar12,*(undefined8 *)PTR_DAT_092c1708);
      puVar2 = PTR_DAT_092c1768;
      uVar5 = *(undefined8 *)(unaff_x19 + 0x58);
      lVar6 = *(long *)PTR_DAT_092c1768;
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
        lVar6 = *(long *)puVar2;
      }
      puVar4 = *(undefined8 **)(lVar6 + 0xb8);
      lVar13 = puVar4[1];
      if (lVar13 == 0) {
        if (*(int *)(lVar6 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
          puVar4 = *(undefined8 **)(*(long *)PTR_DAT_092c1768 + 0xb8);
        }
        uVar16 = *puVar4;
        lVar13 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092c1690);
        FUN_056893d4(lVar13,uVar16,*(undefined8 *)PTR_DAT_092c1748,0);
        plVar15 = (long *)(*(long *)(*(long *)PTR_DAT_092c1768 + 0xb8) + 8);
        *plVar15 = lVar13;
        thunk_FUN_040ec700(plVar15,lVar13);
      }
      uVar9 = FUN_04f7671c(uVar5,lVar13,*(undefined8 *)PTR_DAT_092c1650);
      if ((uVar9 & 1) != 0) {
        uVar5 = FUN_05217a68(*(undefined8 *)PTR_DAT_092c14f8,*(undefined8 *)PTR_DAT_092c17a0,
                             *(undefined8 *)PTR_DAT_092c1740);
        if (lVar12 == 0) goto Meta_XR_ImmersiveDebugger_RuntimeSettings__set_InspectedDataAssets;
        lVar6 = *(long *)(lVar12 + 0x10);
        lVar13 = *(long *)PTR_DAT_092c16f8;
        *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
        if (lVar6 == 0) goto Meta_XR_ImmersiveDebugger_RuntimeSettings__set_InspectedDataAssets;
        uVar1 = *(uint *)(lVar12 + 0x18);
        if (uVar1 < *(uint *)(lVar6 + 0x18)) {
          *(uint *)(lVar12 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar6 + (long)(int)uVar1 * 8 + 0x20) = uVar5;
          thunk_FUN_040ec700();
        }
        else {
          FUN_05c26d88(lVar12,uVar5,
                       *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
        }
      }
      plVar15 = (long *)FUN_04077674(*(undefined8 *)PTR_DAT_09287040,0xd);
      uVar5 = FUN_07dfb290(*(undefined8 *)PTR_DAT_092c1770,0);
      in_stack_00000028 = *(undefined4 *)(unaff_x19 + 0x10);
      in_stack_00000018 = *(undefined8 *)PTR_DAT_092c1718;
      in_stack_00000020 = 0xffffffffffffffff;
      lVar6 = FUN_076b01b4(&stack0x00000018,0);
      if (lVar6 == 0) goto Meta_XR_ImmersiveDebugger_RuntimeSettings__set_InspectedDataAssets;
      uVar16 = FUN_074eac78(lVar6,0);
      lVar6 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092c1400);
      FUN_07df1964(lVar6,uVar5,uVar16,0);
      if (plVar15 == (long *)0x0)
      goto Meta_XR_ImmersiveDebugger_RuntimeSettings__set_InspectedDataAssets;
      if ((lVar6 != 0) &&
         (lVar13 = thunk_FUN_040b4e00(lVar6,*(undefined8 *)(*plVar15 + 0x40)), lVar13 == 0)) {
LAB_0727e420:
        uVar5 = thunk_FUN_040c2a64();
                    /* WARNING: Subroutine does not return */
        FUN_040776f4(uVar5,0);
      }
      if ((int)plVar15[3] != 0) {
        plVar15[4] = lVar6;
        thunk_FUN_040ec700(plVar15 + 4,lVar6);
        lVar6 = *unaff_x29;
        if (*(int *)(lVar6 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
          lVar6 = *unaff_x29;
        }
        uVar5 = *(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x20);
        lVar6 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092c1400);
        FUN_07df1964(lVar6,uVar5,*(undefined8 *)PTR_DAT_0928e688,0);
        if ((lVar6 != 0) &&
           (lVar13 = thunk_FUN_040b4e00(lVar6,*(undefined8 *)(*plVar15 + 0x40)), lVar13 == 0))
        goto LAB_0727e420;
        if ((*(uint *)(plVar15 + 3) & 0xfffffffe) != 0) {
          plVar15[5] = lVar6;
          thunk_FUN_040ec700(plVar15 + 5,lVar6);
          lVar6 = *(long *)PTR_DAT_092c1768;
          if (*(int *)(lVar6 + 0xe4) == 0) {
            thunk_FUN_040d65a8();
            lVar6 = *(long *)PTR_DAT_092c1768;
          }
          puVar4 = *(undefined8 **)(lVar6 + 0xb8);
          lVar13 = puVar4[2];
          if (lVar13 == 0) {
            if (*(int *)(lVar6 + 0xe4) == 0) {
              thunk_FUN_040d65a8();
              puVar4 = *(undefined8 **)(*(long *)PTR_DAT_092c1768 + 0xb8);
            }
            uVar5 = *puVar4;
            lVar13 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092c1698);
            FUN_0568af90(lVar13,uVar5,*(undefined8 *)PTR_DAT_092c1750,0);
            plVar7 = (long *)(*(long *)(*(long *)PTR_DAT_092c1768 + 0xb8) + 0x10);
            *plVar7 = lVar13;
            thunk_FUN_040ec700(plVar7,lVar13);
          }
          lVar12 = System_MemoryExtensions__IsTypeComparableAsBytes<char>
                             (lVar12,lVar13,*(undefined8 *)PTR_DAT_092c1668);
          if ((lVar12 != 0) &&
             (lVar6 = thunk_FUN_040b4e00(lVar12,*(undefined8 *)(*plVar15 + 0x40)), lVar6 == 0))
          goto LAB_0727e420;
          if (2 < *(uint *)(plVar15 + 3)) {
            plVar15[6] = lVar12;
            uVar5 = thunk_FUN_040ec700(plVar15 + 6,lVar12);
            lVar12 = FUN_07283670(uVar5,*(undefined8 *)PTR_DAT_0928e5a8,
                                  *(undefined8 *)(unaff_x19 + 0x18));
            if ((lVar12 != 0) &&
               (lVar6 = thunk_FUN_040b4e00(lVar12,*(undefined8 *)(*plVar15 + 0x40)), lVar6 == 0))
            goto LAB_0727e420;
            if ((*(uint *)(plVar15 + 3) & 0xfffffffc) != 0) {
              plVar15[7] = lVar12;
              uVar5 = thunk_FUN_040ec700(plVar15 + 7,lVar12);
              lVar12 = FUN_07283670(uVar5,*(undefined8 *)PTR_DAT_092c1778,
                                    *(undefined8 *)(unaff_x19 + 0x20));
              if ((lVar12 != 0) &&
                 (lVar6 = thunk_FUN_040b4e00(lVar12,*(undefined8 *)(*plVar15 + 0x40)), lVar6 == 0))
              goto LAB_0727e420;
              if (4 < *(uint *)(plVar15 + 3)) {
                plVar15[8] = lVar12;
                uVar5 = thunk_FUN_040ec700(plVar15 + 8,lVar12);
                lVar12 = FUN_07283670(uVar5,*(undefined8 *)PTR_DAT_0928cfa8,
                                      *(undefined8 *)(unaff_x19 + 0x28));
                if ((lVar12 != 0) &&
                   (lVar6 = thunk_FUN_040b4e00(lVar12,*(undefined8 *)(*plVar15 + 0x40)), lVar6 == 0)
                   ) goto LAB_0727e420;
                if (5 < *(uint *)(plVar15 + 3)) {
                  plVar15[9] = lVar12;
                  uVar5 = thunk_FUN_040ec700(plVar15 + 9,lVar12);
                  lVar12 = FUN_07283670(uVar5,*(undefined8 *)PTR_DAT_092c1788,
                                        *(undefined8 *)(unaff_x19 + 0x30));
                  if ((lVar12 != 0) &&
                     (lVar6 = thunk_FUN_040b4e00(lVar12,*(undefined8 *)(*plVar15 + 0x40)),
                     lVar6 == 0)) goto LAB_0727e420;
                  if (6 < *(uint *)(plVar15 + 3)) {
                    plVar15[10] = lVar12;
                    uVar5 = thunk_FUN_040ec700(plVar15 + 10,lVar12);
                    lVar12 = FUN_07283670(uVar5,*(undefined8 *)PTR_DAT_092c1790,
                                          *(undefined8 *)(unaff_x19 + 0x38));
                    if ((lVar12 != 0) &&
                       (lVar6 = thunk_FUN_040b4e00(lVar12,*(undefined8 *)(*plVar15 + 0x40)),
                       lVar6 == 0)) goto LAB_0727e420;
                    if ((*(uint *)(plVar15 + 3) & 0xfffffff8) != 0) {
                      plVar15[0xb] = lVar12;
                      uVar5 = thunk_FUN_040ec700(plVar15 + 0xb,lVar12);
                      lVar12 = FUN_07283670(uVar5,*(undefined8 *)PTR_DAT_092c1798,
                                            *(undefined8 *)(unaff_x19 + 0x40));
                      if ((lVar12 != 0) &&
                         (lVar6 = thunk_FUN_040b4e00(lVar12,*(undefined8 *)(*plVar15 + 0x40)),
                         lVar6 == 0)) goto LAB_0727e420;
                      if (8 < *(uint *)(plVar15 + 3)) {
                        plVar15[0xc] = lVar12;
                        uVar5 = thunk_FUN_040ec700(plVar15 + 0xc,lVar12);
                        lVar12 = FUN_07283670(uVar5,*(undefined8 *)PTR_DAT_092a5d10,
                                              *(undefined8 *)(unaff_x19 + 0x48));
                        if ((lVar12 != 0) &&
                           (lVar6 = thunk_FUN_040b4e00(lVar12,*(undefined8 *)(*plVar15 + 0x40)),
                           lVar6 == 0)) goto LAB_0727e420;
                        if (9 < *(uint *)(plVar15 + 3)) {
                          plVar15[0xd] = lVar12;
                          uVar5 = thunk_FUN_040ec700(plVar15 + 0xd,lVar12);
                          lVar12 = FUN_07283670(uVar5,*(undefined8 *)PTR_DAT_092c1780,
                                                *(undefined8 *)(unaff_x19 + 0x50));
                          if ((lVar12 != 0) &&
                             (lVar6 = thunk_FUN_040b4e00(lVar12,*(undefined8 *)(*plVar15 + 0x40)),
                             lVar6 == 0)) goto LAB_0727e420;
                          if (10 < *(uint *)(plVar15 + 3)) {
                            plVar15[0xe] = lVar12;
                            thunk_FUN_040ec700(plVar15 + 0xe,lVar12);
                            lVar12 = *unaff_x29;
                            if (*(int *)(lVar12 + 0xe4) == 0) {
                              thunk_FUN_040d65a8();
                              lVar12 = *unaff_x29;
                            }
                            uVar16 = *(undefined8 *)(unaff_x19 + 0x58);
                            uVar14 = *(undefined8 *)(*(long *)(lVar12 + 0xb8) + 0x10);
                            uVar5 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092c16a8);
                            FUN_0568af90();
                            uVar5 = System_MemoryExtensions__IsTypeComparableAsBytes<char>
                                              (uVar16,uVar5,*(undefined8 *)PTR_DAT_092c1660);
                            lVar12 = thunk_FUN_040b4efc(*unaff_x28);
                            System_Xml_XmlReader__Close(lVar12,uVar14,uVar5,0);
                            if ((lVar12 != 0) &&
                               (lVar6 = thunk_FUN_040b4e00(lVar12,*(undefined8 *)(*plVar15 + 0x40)),
                               lVar6 == 0)) goto LAB_0727e420;
                            if (0xb < *(uint *)(plVar15 + 3)) {
                              plVar15[0xf] = lVar12;
                              thunk_FUN_040ec700(plVar15 + 0xf,lVar12);
                              uVar16 = *(undefined8 *)(unaff_x19 + 0x60);
                              uVar14 = *(undefined8 *)(*(long *)(*unaff_x29 + 0xb8) + 8);
                              uVar5 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092c16a0);
                              FUN_0568af90();
                              uVar5 = System_MemoryExtensions__IsTypeComparableAsBytes<char>
                                                (uVar16,uVar5,*(undefined8 *)PTR_DAT_092c1658);
                              lVar12 = thunk_FUN_040b4efc(*unaff_x28);
                              System_Xml_XmlReader__Close(lVar12,uVar14,uVar5,0);
                              if ((lVar12 != 0) &&
                                 (lVar6 = thunk_FUN_040b4e00(lVar12,*(undefined8 *)(*plVar15 + 0x40)
                                                            ), lVar6 == 0)) goto LAB_0727e420;
                              if (0xc < *(uint *)(plVar15 + 3)) {
                                plVar15[0x10] = lVar12;
                                thunk_FUN_040ec700(plVar15 + 0x10,lVar12);
                                if (lVar8 != 0) {
                                  thunk_FUN_07df3248(lVar8,plVar15,0);
                                  return lVar8;
                                }
                                goto 
                                Meta_XR_ImmersiveDebugger_RuntimeSettings__set_InspectedDataAssets;
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
    plVar15 = *(long **)(unaff_x19 + 0x58);
    if (plVar15 == (long *)0x0)
    goto Meta_XR_ImmersiveDebugger_RuntimeSettings__set_InspectedDataAssets;
    lVar8 = *plVar15;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_092c16f0) {
          puVar4 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_0727daf8;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined8 *)FUN_040b1e00(plVar15,*(long *)PTR_DAT_092c16f0,0);
LAB_0727daf8:
    lVar8 = (*(code *)*puVar4)(plVar15,iVar11,puVar4[1]);
    if (lVar8 == 0) goto Meta_XR_ImmersiveDebugger_RuntimeSettings__set_InspectedDataAssets;
    *(int *)(lVar8 + 0x10) = iVar11 + 1;
    unaff_x24 = *(long **)(unaff_x19 + 0x58);
    unaff_w20 = iVar11 + 1;
    unaff_w22 = iVar11;
    if (unaff_x24 == (long *)0x0) {
Meta_XR_ImmersiveDebugger_RuntimeSettings__set_InspectedDataAssets:
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
  } while( true );
}


