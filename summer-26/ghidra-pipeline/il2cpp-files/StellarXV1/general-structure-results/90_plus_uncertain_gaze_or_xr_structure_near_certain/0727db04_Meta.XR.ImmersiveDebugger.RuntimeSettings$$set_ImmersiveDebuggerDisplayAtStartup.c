/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.RuntimeSettings$$set_ImmersiveDebuggerDisplayAtStartup
ENTRY_POINT: 0727db04
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


long Meta_XR_ImmersiveDebugger_RuntimeSettings__set_ImmersiveDebuggerDisplayAtStartup
               (code *param_1,long *param_2,ulong param_3,undefined8 param_4)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  int *piVar10;
  long unaff_x19;
  long *unaff_x21;
  ulong unaff_x22;
  long lVar11;
  long *plVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long *unaff_x26;
  undefined8 *unaff_x28;
  long *unaff_x29;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined4 in_stack_00000028;
  
  do {
    lVar4 = (*param_1)(param_2,param_3,param_4);
    if (lVar4 == 0) {
Meta_XR_ImmersiveDebugger_RuntimeSettings__set_InspectedDataAssets:
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    uVar1 = (int)unaff_x22 + 1;
    *(uint *)(lVar4 + 0x10) = uVar1;
    plVar12 = *(long **)(unaff_x19 + 0x58);
    if (plVar12 == (long *)0x0)
    goto Meta_XR_ImmersiveDebugger_RuntimeSettings__set_InspectedDataAssets;
    lVar4 = *plVar12;
    lVar11 = *unaff_x21;
    uVar9 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_092c16f0) {
          puVar5 = (undefined8 *)(lVar4 + (long)*piVar10 * 0x10 + 0x138);
          goto Meta_XR_ImmersiveDebugger_RuntimeSettings__set_ShowWarningLog;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)FUN_040b1e00(plVar12,*(long *)PTR_DAT_092c16f0,0);
Meta_XR_ImmersiveDebugger_RuntimeSettings__set_ShowWarningLog:
    uVar6 = (*(code *)*puVar5)(plVar12,unaff_x22 & 0xffffffff,puVar5[1]);
    plVar12 = *(long **)(unaff_x19 + 0x58);
    if (plVar12 == (long *)0x0)
    goto Meta_XR_ImmersiveDebugger_RuntimeSettings__set_InspectedDataAssets;
    lVar4 = *plVar12;
    uVar9 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_092c16f0) {
          puVar5 = (undefined8 *)(lVar4 + (long)*piVar10 * 0x10 + 0x138);
          goto Meta_XR_ImmersiveDebugger_RuntimeSettings__set_PanelLayer;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)FUN_040b1e00(plVar12,*(long *)PTR_DAT_092c16f0,0);
Meta_XR_ImmersiveDebugger_RuntimeSettings__set_PanelLayer:
    lVar4 = (*(code *)*puVar5)(plVar12,unaff_x22 & 0xffffffff,puVar5[1]);
    if ((lVar4 == 0) || (lVar11 == 0))
    goto Meta_XR_ImmersiveDebugger_RuntimeSettings__set_InspectedDataAssets;
    FUN_06eef620(lVar11,uVar6,*(undefined4 *)(lVar4 + 0x10),*(undefined8 *)PTR_DAT_092c1638);
    plVar12 = *(long **)(unaff_x19 + 0x58);
    param_3 = (ulong)uVar1;
    if (plVar12 == (long *)0x0)
    goto Meta_XR_ImmersiveDebugger_RuntimeSettings__set_InspectedDataAssets;
    lVar4 = *plVar12;
    uVar9 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *unaff_x26) {
          puVar5 = (undefined8 *)(lVar4 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_0727da88;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)FUN_040b1e00(plVar12,*unaff_x26,0);
LAB_0727da88:
    iVar3 = (*(code *)*puVar5)(plVar12,puVar5[1]);
    if (iVar3 <= (int)uVar1) {
      lVar4 = *unaff_x29;
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
        lVar4 = *unaff_x29;
      }
      uVar6 = **(undefined8 **)(lVar4 + 0xb8);
      lVar4 = thunk_FUN_040b4efc(*unaff_x28);
      FUN_07df6498(lVar4,uVar6,0);
      lVar11 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092c1710);
      FUN_05c26520(lVar11,*(undefined8 *)PTR_DAT_092c1708);
      puVar2 = PTR_DAT_092c1768;
      uVar6 = *(undefined8 *)(unaff_x19 + 0x58);
      lVar7 = *(long *)PTR_DAT_092c1768;
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
        lVar7 = *(long *)puVar2;
      }
      puVar5 = *(undefined8 **)(lVar7 + 0xb8);
      lVar13 = puVar5[1];
      if (lVar13 == 0) {
        if (*(int *)(lVar7 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
          puVar5 = *(undefined8 **)(*(long *)PTR_DAT_092c1768 + 0xb8);
        }
        uVar15 = *puVar5;
        lVar13 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092c1690);
        FUN_056893d4(lVar13,uVar15,*(undefined8 *)PTR_DAT_092c1748,0);
        plVar12 = (long *)(*(long *)(*(long *)PTR_DAT_092c1768 + 0xb8) + 8);
        *plVar12 = lVar13;
        thunk_FUN_040ec700(plVar12,lVar13);
      }
      uVar9 = FUN_04f7671c(uVar6,lVar13,*(undefined8 *)PTR_DAT_092c1650);
      if ((uVar9 & 1) != 0) {
        uVar6 = FUN_05217a68(*(undefined8 *)PTR_DAT_092c14f8,*(undefined8 *)PTR_DAT_092c17a0,
                             *(undefined8 *)PTR_DAT_092c1740);
        if (lVar11 == 0) goto Meta_XR_ImmersiveDebugger_RuntimeSettings__set_InspectedDataAssets;
        lVar7 = *(long *)(lVar11 + 0x10);
        lVar13 = *(long *)PTR_DAT_092c16f8;
        *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
        if (lVar7 == 0) goto Meta_XR_ImmersiveDebugger_RuntimeSettings__set_InspectedDataAssets;
        uVar1 = *(uint *)(lVar11 + 0x18);
        if (uVar1 < *(uint *)(lVar7 + 0x18)) {
          *(uint *)(lVar11 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar6;
          thunk_FUN_040ec700();
        }
        else {
          FUN_05c26d88(lVar11,uVar6,
                       *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
        }
      }
      plVar12 = (long *)FUN_04077674(*(undefined8 *)PTR_DAT_09287040,0xd);
      uVar6 = FUN_07dfb290(*(undefined8 *)PTR_DAT_092c1770,0);
      in_stack_00000028 = *(undefined4 *)(unaff_x19 + 0x10);
      in_stack_00000018 = *(undefined8 *)PTR_DAT_092c1718;
      in_stack_00000020 = 0xffffffffffffffff;
      lVar7 = FUN_076b01b4(&stack0x00000018,0);
      if (lVar7 == 0) goto Meta_XR_ImmersiveDebugger_RuntimeSettings__set_InspectedDataAssets;
      uVar15 = FUN_074eac78(lVar7,0);
      lVar7 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092c1400);
      FUN_07df1964(lVar7,uVar6,uVar15,0);
      if (plVar12 == (long *)0x0)
      goto Meta_XR_ImmersiveDebugger_RuntimeSettings__set_InspectedDataAssets;
      if ((lVar7 != 0) &&
         (lVar13 = thunk_FUN_040b4e00(lVar7,*(undefined8 *)(*plVar12 + 0x40)), lVar13 == 0)) {
LAB_0727e420:
        uVar6 = thunk_FUN_040c2a64();
                    /* WARNING: Subroutine does not return */
        FUN_040776f4(uVar6,0);
      }
      if ((int)plVar12[3] != 0) {
        plVar12[4] = lVar7;
        thunk_FUN_040ec700(plVar12 + 4,lVar7);
        lVar7 = *unaff_x29;
        if (*(int *)(lVar7 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
          lVar7 = *unaff_x29;
        }
        uVar6 = *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x20);
        lVar7 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092c1400);
        FUN_07df1964(lVar7,uVar6,*(undefined8 *)PTR_DAT_0928e688,0);
        if ((lVar7 != 0) &&
           (lVar13 = thunk_FUN_040b4e00(lVar7,*(undefined8 *)(*plVar12 + 0x40)), lVar13 == 0))
        goto LAB_0727e420;
        if ((*(uint *)(plVar12 + 3) & 0xfffffffe) != 0) {
          plVar12[5] = lVar7;
          thunk_FUN_040ec700(plVar12 + 5,lVar7);
          lVar7 = *(long *)PTR_DAT_092c1768;
          if (*(int *)(lVar7 + 0xe4) == 0) {
            thunk_FUN_040d65a8();
            lVar7 = *(long *)PTR_DAT_092c1768;
          }
          puVar5 = *(undefined8 **)(lVar7 + 0xb8);
          lVar13 = puVar5[2];
          if (lVar13 == 0) {
            if (*(int *)(lVar7 + 0xe4) == 0) {
              thunk_FUN_040d65a8();
              puVar5 = *(undefined8 **)(*(long *)PTR_DAT_092c1768 + 0xb8);
            }
            uVar6 = *puVar5;
            lVar13 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092c1698);
            FUN_0568af90(lVar13,uVar6,*(undefined8 *)PTR_DAT_092c1750,0);
            plVar8 = (long *)(*(long *)(*(long *)PTR_DAT_092c1768 + 0xb8) + 0x10);
            *plVar8 = lVar13;
            thunk_FUN_040ec700(plVar8,lVar13);
          }
          lVar11 = System_MemoryExtensions__IsTypeComparableAsBytes<char>
                             (lVar11,lVar13,*(undefined8 *)PTR_DAT_092c1668);
          if ((lVar11 != 0) &&
             (lVar7 = thunk_FUN_040b4e00(lVar11,*(undefined8 *)(*plVar12 + 0x40)), lVar7 == 0))
          goto LAB_0727e420;
          if (2 < *(uint *)(plVar12 + 3)) {
            plVar12[6] = lVar11;
            uVar6 = thunk_FUN_040ec700(plVar12 + 6,lVar11);
            lVar11 = FUN_07283670(uVar6,*(undefined8 *)PTR_DAT_0928e5a8,
                                  *(undefined8 *)(unaff_x19 + 0x18));
            if ((lVar11 != 0) &&
               (lVar7 = thunk_FUN_040b4e00(lVar11,*(undefined8 *)(*plVar12 + 0x40)), lVar7 == 0))
            goto LAB_0727e420;
            if ((*(uint *)(plVar12 + 3) & 0xfffffffc) != 0) {
              plVar12[7] = lVar11;
              uVar6 = thunk_FUN_040ec700(plVar12 + 7,lVar11);
              lVar11 = FUN_07283670(uVar6,*(undefined8 *)PTR_DAT_092c1778,
                                    *(undefined8 *)(unaff_x19 + 0x20));
              if ((lVar11 != 0) &&
                 (lVar7 = thunk_FUN_040b4e00(lVar11,*(undefined8 *)(*plVar12 + 0x40)), lVar7 == 0))
              goto LAB_0727e420;
              if (4 < *(uint *)(plVar12 + 3)) {
                plVar12[8] = lVar11;
                uVar6 = thunk_FUN_040ec700(plVar12 + 8,lVar11);
                lVar11 = FUN_07283670(uVar6,*(undefined8 *)PTR_DAT_0928cfa8,
                                      *(undefined8 *)(unaff_x19 + 0x28));
                if ((lVar11 != 0) &&
                   (lVar7 = thunk_FUN_040b4e00(lVar11,*(undefined8 *)(*plVar12 + 0x40)), lVar7 == 0)
                   ) goto LAB_0727e420;
                if (5 < *(uint *)(plVar12 + 3)) {
                  plVar12[9] = lVar11;
                  uVar6 = thunk_FUN_040ec700(plVar12 + 9,lVar11);
                  lVar11 = FUN_07283670(uVar6,*(undefined8 *)PTR_DAT_092c1788,
                                        *(undefined8 *)(unaff_x19 + 0x30));
                  if ((lVar11 != 0) &&
                     (lVar7 = thunk_FUN_040b4e00(lVar11,*(undefined8 *)(*plVar12 + 0x40)),
                     lVar7 == 0)) goto LAB_0727e420;
                  if (6 < *(uint *)(plVar12 + 3)) {
                    plVar12[10] = lVar11;
                    uVar6 = thunk_FUN_040ec700(plVar12 + 10,lVar11);
                    lVar11 = FUN_07283670(uVar6,*(undefined8 *)PTR_DAT_092c1790,
                                          *(undefined8 *)(unaff_x19 + 0x38));
                    if ((lVar11 != 0) &&
                       (lVar7 = thunk_FUN_040b4e00(lVar11,*(undefined8 *)(*plVar12 + 0x40)),
                       lVar7 == 0)) goto LAB_0727e420;
                    if ((*(uint *)(plVar12 + 3) & 0xfffffff8) != 0) {
                      plVar12[0xb] = lVar11;
                      uVar6 = thunk_FUN_040ec700(plVar12 + 0xb,lVar11);
                      lVar11 = FUN_07283670(uVar6,*(undefined8 *)PTR_DAT_092c1798,
                                            *(undefined8 *)(unaff_x19 + 0x40));
                      if ((lVar11 != 0) &&
                         (lVar7 = thunk_FUN_040b4e00(lVar11,*(undefined8 *)(*plVar12 + 0x40)),
                         lVar7 == 0)) goto LAB_0727e420;
                      if (8 < *(uint *)(plVar12 + 3)) {
                        plVar12[0xc] = lVar11;
                        uVar6 = thunk_FUN_040ec700(plVar12 + 0xc,lVar11);
                        lVar11 = FUN_07283670(uVar6,*(undefined8 *)PTR_DAT_092a5d10,
                                              *(undefined8 *)(unaff_x19 + 0x48));
                        if ((lVar11 != 0) &&
                           (lVar7 = thunk_FUN_040b4e00(lVar11,*(undefined8 *)(*plVar12 + 0x40)),
                           lVar7 == 0)) goto LAB_0727e420;
                        if (9 < *(uint *)(plVar12 + 3)) {
                          plVar12[0xd] = lVar11;
                          uVar6 = thunk_FUN_040ec700(plVar12 + 0xd,lVar11);
                          lVar11 = FUN_07283670(uVar6,*(undefined8 *)PTR_DAT_092c1780,
                                                *(undefined8 *)(unaff_x19 + 0x50));
                          if ((lVar11 != 0) &&
                             (lVar7 = thunk_FUN_040b4e00(lVar11,*(undefined8 *)(*plVar12 + 0x40)),
                             lVar7 == 0)) goto LAB_0727e420;
                          if (10 < *(uint *)(plVar12 + 3)) {
                            plVar12[0xe] = lVar11;
                            thunk_FUN_040ec700(plVar12 + 0xe,lVar11);
                            lVar11 = *unaff_x29;
                            if (*(int *)(lVar11 + 0xe4) == 0) {
                              thunk_FUN_040d65a8();
                              lVar11 = *unaff_x29;
                            }
                            uVar15 = *(undefined8 *)(unaff_x19 + 0x58);
                            uVar14 = *(undefined8 *)(*(long *)(lVar11 + 0xb8) + 0x10);
                            uVar6 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092c16a8);
                            FUN_0568af90();
                            uVar6 = System_MemoryExtensions__IsTypeComparableAsBytes<char>
                                              (uVar15,uVar6,*(undefined8 *)PTR_DAT_092c1660);
                            lVar11 = thunk_FUN_040b4efc(*unaff_x28);
                            System_Xml_XmlReader__Close(lVar11,uVar14,uVar6,0);
                            if ((lVar11 != 0) &&
                               (lVar7 = thunk_FUN_040b4e00(lVar11,*(undefined8 *)(*plVar12 + 0x40)),
                               lVar7 == 0)) goto LAB_0727e420;
                            if (0xb < *(uint *)(plVar12 + 3)) {
                              plVar12[0xf] = lVar11;
                              thunk_FUN_040ec700(plVar12 + 0xf,lVar11);
                              uVar15 = *(undefined8 *)(unaff_x19 + 0x60);
                              uVar14 = *(undefined8 *)(*(long *)(*unaff_x29 + 0xb8) + 8);
                              uVar6 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092c16a0);
                              FUN_0568af90();
                              uVar6 = System_MemoryExtensions__IsTypeComparableAsBytes<char>
                                                (uVar15,uVar6,*(undefined8 *)PTR_DAT_092c1658);
                              lVar11 = thunk_FUN_040b4efc(*unaff_x28);
                              System_Xml_XmlReader__Close(lVar11,uVar14,uVar6,0);
                              if ((lVar11 != 0) &&
                                 (lVar7 = thunk_FUN_040b4e00(lVar11,*(undefined8 *)(*plVar12 + 0x40)
                                                            ), lVar7 == 0)) goto LAB_0727e420;
                              if (0xc < *(uint *)(plVar12 + 3)) {
                                plVar12[0x10] = lVar11;
                                thunk_FUN_040ec700(plVar12 + 0x10,lVar11);
                                if (lVar4 != 0) {
                                  thunk_FUN_07df3248(lVar4,plVar12,0);
                                  return lVar4;
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
    param_2 = *(long **)(unaff_x19 + 0x58);
    if (param_2 == (long *)0x0)
    goto Meta_XR_ImmersiveDebugger_RuntimeSettings__set_InspectedDataAssets;
    lVar4 = *param_2;
    uVar9 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_092c16f0) {
          puVar5 = (undefined8 *)(lVar4 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_0727daf8;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)FUN_040b1e00(param_2,*(long *)PTR_DAT_092c16f0,0);
LAB_0727daf8:
    param_1 = (code *)*puVar5;
    param_4 = puVar5[1];
    unaff_x22 = param_3;
  } while( true );
}


