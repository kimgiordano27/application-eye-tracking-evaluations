/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.RuntimeSettings$$get_ImmersiveDebuggerDisplayAtStartup
ENTRY_POINT: 0727dafc
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 94
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;data_collection;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;strong_file_logging_hits_2;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_2
*/


long Meta_XR_ImmersiveDebugger_RuntimeSettings__get_ImmersiveDebuggerDisplayAtStartup
               (code *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  int *piVar11;
  long unaff_x19;
  long *unaff_x21;
  int unaff_w22;
  long *unaff_x23;
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
    lVar5 = (*param_1)(unaff_x23,unaff_w22,param_4);
    if (lVar5 == 0) {
Meta_XR_ImmersiveDebugger_RuntimeSettings__set_InspectedDataAssets:
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    iVar1 = unaff_w22 + 1;
    *(int *)(lVar5 + 0x10) = iVar1;
    plVar13 = *(long **)(unaff_x19 + 0x58);
    if (plVar13 == (long *)0x0)
    goto Meta_XR_ImmersiveDebugger_RuntimeSettings__set_InspectedDataAssets;
    lVar5 = *plVar13;
    lVar12 = *unaff_x21;
    uVar10 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_092c16f0) {
          puVar6 = (undefined8 *)(lVar5 + (long)*piVar11 * 0x10 + 0x138);
          goto Meta_XR_ImmersiveDebugger_RuntimeSettings__set_ShowWarningLog;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar6 = (undefined8 *)FUN_040b1e00(plVar13,*(long *)PTR_DAT_092c16f0,0);
Meta_XR_ImmersiveDebugger_RuntimeSettings__set_ShowWarningLog:
    uVar7 = (*(code *)*puVar6)(plVar13,unaff_w22,puVar6[1]);
    plVar13 = *(long **)(unaff_x19 + 0x58);
    if (plVar13 == (long *)0x0)
    goto Meta_XR_ImmersiveDebugger_RuntimeSettings__set_InspectedDataAssets;
    lVar5 = *plVar13;
    uVar10 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_092c16f0) {
          puVar6 = (undefined8 *)(lVar5 + (long)*piVar11 * 0x10 + 0x138);
          goto Meta_XR_ImmersiveDebugger_RuntimeSettings__set_PanelLayer;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar6 = (undefined8 *)FUN_040b1e00(plVar13,*(long *)PTR_DAT_092c16f0,0);
Meta_XR_ImmersiveDebugger_RuntimeSettings__set_PanelLayer:
    lVar5 = (*(code *)*puVar6)(plVar13,unaff_w22,puVar6[1]);
    if ((lVar5 == 0) || (lVar12 == 0))
    goto Meta_XR_ImmersiveDebugger_RuntimeSettings__set_InspectedDataAssets;
    FUN_06eef620(lVar12,uVar7,*(undefined4 *)(lVar5 + 0x10),*(undefined8 *)PTR_DAT_092c1638);
    plVar13 = *(long **)(unaff_x19 + 0x58);
    if (plVar13 == (long *)0x0)
    goto Meta_XR_ImmersiveDebugger_RuntimeSettings__set_InspectedDataAssets;
    lVar5 = *plVar13;
    uVar10 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *unaff_x26) {
          puVar6 = (undefined8 *)(lVar5 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_0727da88;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar6 = (undefined8 *)FUN_040b1e00(plVar13,*unaff_x26,0);
LAB_0727da88:
    iVar4 = (*(code *)*puVar6)(plVar13,puVar6[1]);
    if (iVar4 <= iVar1) {
      lVar5 = *unaff_x29;
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
        lVar5 = *unaff_x29;
      }
      uVar7 = **(undefined8 **)(lVar5 + 0xb8);
      lVar5 = thunk_FUN_040b4efc(*unaff_x28);
      FUN_07df6498(lVar5,uVar7,0);
      lVar12 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092c1710);
      FUN_05c26520(lVar12,*(undefined8 *)PTR_DAT_092c1708);
      puVar3 = PTR_DAT_092c1768;
      uVar7 = *(undefined8 *)(unaff_x19 + 0x58);
      lVar8 = *(long *)PTR_DAT_092c1768;
      if (*(int *)(lVar8 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
        lVar8 = *(long *)puVar3;
      }
      puVar6 = *(undefined8 **)(lVar8 + 0xb8);
      lVar14 = puVar6[1];
      if (lVar14 == 0) {
        if (*(int *)(lVar8 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
          puVar6 = *(undefined8 **)(*(long *)PTR_DAT_092c1768 + 0xb8);
        }
        uVar16 = *puVar6;
        lVar14 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092c1690);
        FUN_056893d4(lVar14,uVar16,*(undefined8 *)PTR_DAT_092c1748,0);
        plVar13 = (long *)(*(long *)(*(long *)PTR_DAT_092c1768 + 0xb8) + 8);
        *plVar13 = lVar14;
        thunk_FUN_040ec700(plVar13,lVar14);
      }
      uVar10 = FUN_04f7671c(uVar7,lVar14,*(undefined8 *)PTR_DAT_092c1650);
      if ((uVar10 & 1) != 0) {
        uVar7 = FUN_05217a68(*(undefined8 *)PTR_DAT_092c14f8,*(undefined8 *)PTR_DAT_092c17a0,
                             *(undefined8 *)PTR_DAT_092c1740);
        if (lVar12 == 0) goto Meta_XR_ImmersiveDebugger_RuntimeSettings__set_InspectedDataAssets;
        lVar8 = *(long *)(lVar12 + 0x10);
        lVar14 = *(long *)PTR_DAT_092c16f8;
        *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
        if (lVar8 == 0) goto Meta_XR_ImmersiveDebugger_RuntimeSettings__set_InspectedDataAssets;
        uVar2 = *(uint *)(lVar12 + 0x18);
        if (uVar2 < *(uint *)(lVar8 + 0x18)) {
          *(uint *)(lVar12 + 0x18) = uVar2 + 1;
          *(undefined8 *)(lVar8 + (long)(int)uVar2 * 8 + 0x20) = uVar7;
          thunk_FUN_040ec700();
        }
        else {
          FUN_05c26d88(lVar12,uVar7,
                       *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
        }
      }
      plVar13 = (long *)FUN_04077674(*(undefined8 *)PTR_DAT_09287040,0xd);
      uVar7 = FUN_07dfb290(*(undefined8 *)PTR_DAT_092c1770,0);
      in_stack_00000028 = *(undefined4 *)(unaff_x19 + 0x10);
      in_stack_00000018 = *(undefined8 *)PTR_DAT_092c1718;
      in_stack_00000020 = 0xffffffffffffffff;
      lVar8 = FUN_076b01b4(&stack0x00000018,0);
      if (lVar8 == 0) goto Meta_XR_ImmersiveDebugger_RuntimeSettings__set_InspectedDataAssets;
      uVar16 = FUN_074eac78(lVar8,0);
      lVar8 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092c1400);
      FUN_07df1964(lVar8,uVar7,uVar16,0);
      if (plVar13 == (long *)0x0)
      goto Meta_XR_ImmersiveDebugger_RuntimeSettings__set_InspectedDataAssets;
      if ((lVar8 != 0) &&
         (lVar14 = thunk_FUN_040b4e00(lVar8,*(undefined8 *)(*plVar13 + 0x40)), lVar14 == 0)) {
LAB_0727e420:
        uVar7 = thunk_FUN_040c2a64();
                    /* WARNING: Subroutine does not return */
        FUN_040776f4(uVar7,0);
      }
      if ((int)plVar13[3] != 0) {
        plVar13[4] = lVar8;
        thunk_FUN_040ec700(plVar13 + 4,lVar8);
        lVar8 = *unaff_x29;
        if (*(int *)(lVar8 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
          lVar8 = *unaff_x29;
        }
        uVar7 = *(undefined8 *)(*(long *)(lVar8 + 0xb8) + 0x20);
        lVar8 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092c1400);
        FUN_07df1964(lVar8,uVar7,*(undefined8 *)PTR_DAT_0928e688,0);
        if ((lVar8 != 0) &&
           (lVar14 = thunk_FUN_040b4e00(lVar8,*(undefined8 *)(*plVar13 + 0x40)), lVar14 == 0))
        goto LAB_0727e420;
        if ((*(uint *)(plVar13 + 3) & 0xfffffffe) != 0) {
          plVar13[5] = lVar8;
          thunk_FUN_040ec700(plVar13 + 5,lVar8);
          lVar8 = *(long *)PTR_DAT_092c1768;
          if (*(int *)(lVar8 + 0xe4) == 0) {
            thunk_FUN_040d65a8();
            lVar8 = *(long *)PTR_DAT_092c1768;
          }
          puVar6 = *(undefined8 **)(lVar8 + 0xb8);
          lVar14 = puVar6[2];
          if (lVar14 == 0) {
            if (*(int *)(lVar8 + 0xe4) == 0) {
              thunk_FUN_040d65a8();
              puVar6 = *(undefined8 **)(*(long *)PTR_DAT_092c1768 + 0xb8);
            }
            uVar7 = *puVar6;
            lVar14 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092c1698);
            FUN_0568af90(lVar14,uVar7,*(undefined8 *)PTR_DAT_092c1750,0);
            plVar9 = (long *)(*(long *)(*(long *)PTR_DAT_092c1768 + 0xb8) + 0x10);
            *plVar9 = lVar14;
            thunk_FUN_040ec700(plVar9,lVar14);
          }
          lVar12 = System_MemoryExtensions__IsTypeComparableAsBytes<char>
                             (lVar12,lVar14,*(undefined8 *)PTR_DAT_092c1668);
          if ((lVar12 != 0) &&
             (lVar8 = thunk_FUN_040b4e00(lVar12,*(undefined8 *)(*plVar13 + 0x40)), lVar8 == 0))
          goto LAB_0727e420;
          if (2 < *(uint *)(plVar13 + 3)) {
            plVar13[6] = lVar12;
            uVar7 = thunk_FUN_040ec700(plVar13 + 6,lVar12);
            lVar12 = FUN_07283670(uVar7,*(undefined8 *)PTR_DAT_0928e5a8,
                                  *(undefined8 *)(unaff_x19 + 0x18));
            if ((lVar12 != 0) &&
               (lVar8 = thunk_FUN_040b4e00(lVar12,*(undefined8 *)(*plVar13 + 0x40)), lVar8 == 0))
            goto LAB_0727e420;
            if ((*(uint *)(plVar13 + 3) & 0xfffffffc) != 0) {
              plVar13[7] = lVar12;
              uVar7 = thunk_FUN_040ec700(plVar13 + 7,lVar12);
              lVar12 = FUN_07283670(uVar7,*(undefined8 *)PTR_DAT_092c1778,
                                    *(undefined8 *)(unaff_x19 + 0x20));
              if ((lVar12 != 0) &&
                 (lVar8 = thunk_FUN_040b4e00(lVar12,*(undefined8 *)(*plVar13 + 0x40)), lVar8 == 0))
              goto LAB_0727e420;
              if (4 < *(uint *)(plVar13 + 3)) {
                plVar13[8] = lVar12;
                uVar7 = thunk_FUN_040ec700(plVar13 + 8,lVar12);
                lVar12 = FUN_07283670(uVar7,*(undefined8 *)PTR_DAT_0928cfa8,
                                      *(undefined8 *)(unaff_x19 + 0x28));
                if ((lVar12 != 0) &&
                   (lVar8 = thunk_FUN_040b4e00(lVar12,*(undefined8 *)(*plVar13 + 0x40)), lVar8 == 0)
                   ) goto LAB_0727e420;
                if (5 < *(uint *)(plVar13 + 3)) {
                  plVar13[9] = lVar12;
                  uVar7 = thunk_FUN_040ec700(plVar13 + 9,lVar12);
                  lVar12 = FUN_07283670(uVar7,*(undefined8 *)PTR_DAT_092c1788,
                                        *(undefined8 *)(unaff_x19 + 0x30));
                  if ((lVar12 != 0) &&
                     (lVar8 = thunk_FUN_040b4e00(lVar12,*(undefined8 *)(*plVar13 + 0x40)),
                     lVar8 == 0)) goto LAB_0727e420;
                  if (6 < *(uint *)(plVar13 + 3)) {
                    plVar13[10] = lVar12;
                    uVar7 = thunk_FUN_040ec700(plVar13 + 10,lVar12);
                    lVar12 = FUN_07283670(uVar7,*(undefined8 *)PTR_DAT_092c1790,
                                          *(undefined8 *)(unaff_x19 + 0x38));
                    if ((lVar12 != 0) &&
                       (lVar8 = thunk_FUN_040b4e00(lVar12,*(undefined8 *)(*plVar13 + 0x40)),
                       lVar8 == 0)) goto LAB_0727e420;
                    if ((*(uint *)(plVar13 + 3) & 0xfffffff8) != 0) {
                      plVar13[0xb] = lVar12;
                      uVar7 = thunk_FUN_040ec700(plVar13 + 0xb,lVar12);
                      lVar12 = FUN_07283670(uVar7,*(undefined8 *)PTR_DAT_092c1798,
                                            *(undefined8 *)(unaff_x19 + 0x40));
                      if ((lVar12 != 0) &&
                         (lVar8 = thunk_FUN_040b4e00(lVar12,*(undefined8 *)(*plVar13 + 0x40)),
                         lVar8 == 0)) goto LAB_0727e420;
                      if (8 < *(uint *)(plVar13 + 3)) {
                        plVar13[0xc] = lVar12;
                        uVar7 = thunk_FUN_040ec700(plVar13 + 0xc,lVar12);
                        lVar12 = FUN_07283670(uVar7,*(undefined8 *)PTR_DAT_092a5d10,
                                              *(undefined8 *)(unaff_x19 + 0x48));
                        if ((lVar12 != 0) &&
                           (lVar8 = thunk_FUN_040b4e00(lVar12,*(undefined8 *)(*plVar13 + 0x40)),
                           lVar8 == 0)) goto LAB_0727e420;
                        if (9 < *(uint *)(plVar13 + 3)) {
                          plVar13[0xd] = lVar12;
                          uVar7 = thunk_FUN_040ec700(plVar13 + 0xd,lVar12);
                          lVar12 = FUN_07283670(uVar7,*(undefined8 *)PTR_DAT_092c1780,
                                                *(undefined8 *)(unaff_x19 + 0x50));
                          if ((lVar12 != 0) &&
                             (lVar8 = thunk_FUN_040b4e00(lVar12,*(undefined8 *)(*plVar13 + 0x40)),
                             lVar8 == 0)) goto LAB_0727e420;
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
                            uVar7 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092c16a8);
                            FUN_0568af90();
                            uVar7 = System_MemoryExtensions__IsTypeComparableAsBytes<char>
                                              (uVar16,uVar7,*(undefined8 *)PTR_DAT_092c1660);
                            lVar12 = thunk_FUN_040b4efc(*unaff_x28);
                            System_Xml_XmlReader__Close(lVar12,uVar15,uVar7,0);
                            if ((lVar12 != 0) &&
                               (lVar8 = thunk_FUN_040b4e00(lVar12,*(undefined8 *)(*plVar13 + 0x40)),
                               lVar8 == 0)) goto LAB_0727e420;
                            if (0xb < *(uint *)(plVar13 + 3)) {
                              plVar13[0xf] = lVar12;
                              thunk_FUN_040ec700(plVar13 + 0xf,lVar12);
                              uVar16 = *(undefined8 *)(unaff_x19 + 0x60);
                              uVar15 = *(undefined8 *)(*(long *)(*unaff_x29 + 0xb8) + 8);
                              uVar7 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092c16a0);
                              FUN_0568af90();
                              uVar7 = System_MemoryExtensions__IsTypeComparableAsBytes<char>
                                                (uVar16,uVar7,*(undefined8 *)PTR_DAT_092c1658);
                              lVar12 = thunk_FUN_040b4efc(*unaff_x28);
                              System_Xml_XmlReader__Close(lVar12,uVar15,uVar7,0);
                              if ((lVar12 != 0) &&
                                 (lVar8 = thunk_FUN_040b4e00(lVar12,*(undefined8 *)(*plVar13 + 0x40)
                                                            ), lVar8 == 0)) goto LAB_0727e420;
                              if (0xc < *(uint *)(plVar13 + 3)) {
                                plVar13[0x10] = lVar12;
                                thunk_FUN_040ec700(plVar13 + 0x10,lVar12);
                                if (lVar5 != 0) {
                                  thunk_FUN_07df3248(lVar5,plVar13,0);
                                  return lVar5;
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
    unaff_x23 = *(long **)(unaff_x19 + 0x58);
    if (unaff_x23 == (long *)0x0)
    goto Meta_XR_ImmersiveDebugger_RuntimeSettings__set_InspectedDataAssets;
    lVar5 = *unaff_x23;
    uVar10 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_092c16f0) {
          puVar6 = (undefined8 *)(lVar5 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_0727daf8;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar6 = (undefined8 *)FUN_040b1e00(unaff_x23,*(long *)PTR_DAT_092c16f0,0);
LAB_0727daf8:
    param_1 = (code *)*puVar6;
    param_4 = puVar6[1];
    unaff_w22 = iVar1;
  } while( true );
}


