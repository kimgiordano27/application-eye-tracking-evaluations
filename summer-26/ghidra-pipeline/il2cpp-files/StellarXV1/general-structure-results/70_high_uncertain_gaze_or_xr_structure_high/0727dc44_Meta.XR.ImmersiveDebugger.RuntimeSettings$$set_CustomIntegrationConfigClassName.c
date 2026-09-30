/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.RuntimeSettings$$set_CustomIntegrationConfigClassName
ENTRY_POINT: 0727dc44
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


long Meta_XR_ImmersiveDebugger_RuntimeSettings__set_CustomIntegrationConfigClassName
               (undefined8 *param_1)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 *puVar9;
  long unaff_x19;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 *unaff_x28;
  long *unaff_x29;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined4 in_stack_00000028;
  
  uVar10 = *param_1;
  lVar3 = thunk_FUN_040b4efc();
  FUN_07df6498(lVar3,uVar10,0);
  lVar4 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092c1710);
  FUN_05c26520(lVar4,*(undefined8 *)PTR_DAT_092c1708);
  puVar2 = PTR_DAT_092c1768;
  uVar10 = *(undefined8 *)(unaff_x19 + 0x58);
  lVar5 = *(long *)PTR_DAT_092c1768;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
    lVar5 = *(long *)puVar2;
  }
  puVar9 = *(undefined8 **)(lVar5 + 0xb8);
  lVar11 = puVar9[1];
  if (lVar11 == 0) {
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
      puVar9 = *(undefined8 **)(*(long *)PTR_DAT_092c1768 + 0xb8);
    }
    uVar13 = *puVar9;
    lVar11 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092c1690);
    FUN_056893d4(lVar11,uVar13,*(undefined8 *)PTR_DAT_092c1748,0);
    plVar6 = (long *)(*(long *)(*(long *)PTR_DAT_092c1768 + 0xb8) + 8);
    *plVar6 = lVar11;
    thunk_FUN_040ec700(plVar6,lVar11);
  }
  uVar7 = FUN_04f7671c(uVar10,lVar11,*(undefined8 *)PTR_DAT_092c1650);
  if ((uVar7 & 1) != 0) {
    uVar10 = FUN_05217a68(*(undefined8 *)PTR_DAT_092c14f8,*(undefined8 *)PTR_DAT_092c17a0,
                          *(undefined8 *)PTR_DAT_092c1740);
    if (lVar4 == 0) goto Meta_XR_ImmersiveDebugger_RuntimeSettings__set_InspectedDataAssets;
    lVar5 = *(long *)(lVar4 + 0x10);
    lVar11 = *(long *)PTR_DAT_092c16f8;
    *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
    if (lVar5 == 0) goto Meta_XR_ImmersiveDebugger_RuntimeSettings__set_InspectedDataAssets;
    uVar1 = *(uint *)(lVar4 + 0x18);
    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
      *(uint *)(lVar4 + 0x18) = uVar1 + 1;
      *(undefined8 *)(lVar5 + (long)(int)uVar1 * 8 + 0x20) = uVar10;
      thunk_FUN_040ec700();
    }
    else {
      FUN_05c26d88(lVar4,uVar10,*(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
    }
  }
  plVar6 = (long *)FUN_04077674(*(undefined8 *)PTR_DAT_09287040,0xd);
  uVar10 = FUN_07dfb290(*(undefined8 *)PTR_DAT_092c1770,0);
  in_stack_00000028 = *(undefined4 *)(unaff_x19 + 0x10);
  in_stack_00000018 = *(undefined8 *)PTR_DAT_092c1718;
  in_stack_00000020 = 0xffffffffffffffff;
  lVar5 = FUN_076b01b4(&stack0x00000018,0);
  if (lVar5 != 0) {
    uVar13 = FUN_074eac78(lVar5,0);
    lVar5 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092c1400);
    FUN_07df1964(lVar5,uVar10,uVar13,0);
    if (plVar6 != (long *)0x0) {
      if ((lVar5 != 0) &&
         (lVar11 = thunk_FUN_040b4e00(lVar5,*(undefined8 *)(*plVar6 + 0x40)), lVar11 == 0)) {
LAB_0727e420:
        uVar10 = thunk_FUN_040c2a64();
                    /* WARNING: Subroutine does not return */
        FUN_040776f4(uVar10,0);
      }
      if ((int)plVar6[3] != 0) {
        plVar6[4] = lVar5;
        thunk_FUN_040ec700(plVar6 + 4,lVar5);
        lVar5 = *unaff_x29;
        if (*(int *)(lVar5 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
          lVar5 = *unaff_x29;
        }
        uVar10 = *(undefined8 *)(*(long *)(lVar5 + 0xb8) + 0x20);
        lVar5 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092c1400);
        FUN_07df1964(lVar5,uVar10,*(undefined8 *)PTR_DAT_0928e688,0);
        if ((lVar5 != 0) &&
           (lVar11 = thunk_FUN_040b4e00(lVar5,*(undefined8 *)(*plVar6 + 0x40)), lVar11 == 0))
        goto LAB_0727e420;
        if ((*(uint *)(plVar6 + 3) & 0xfffffffe) != 0) {
          plVar6[5] = lVar5;
          thunk_FUN_040ec700(plVar6 + 5,lVar5);
          lVar5 = *(long *)PTR_DAT_092c1768;
          if (*(int *)(lVar5 + 0xe4) == 0) {
            thunk_FUN_040d65a8();
            lVar5 = *(long *)PTR_DAT_092c1768;
          }
          puVar9 = *(undefined8 **)(lVar5 + 0xb8);
          lVar11 = puVar9[2];
          if (lVar11 == 0) {
            if (*(int *)(lVar5 + 0xe4) == 0) {
              thunk_FUN_040d65a8();
              puVar9 = *(undefined8 **)(*(long *)PTR_DAT_092c1768 + 0xb8);
            }
            uVar10 = *puVar9;
            lVar11 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092c1698);
            FUN_0568af90(lVar11,uVar10,*(undefined8 *)PTR_DAT_092c1750,0);
            plVar8 = (long *)(*(long *)(*(long *)PTR_DAT_092c1768 + 0xb8) + 0x10);
            *plVar8 = lVar11;
            thunk_FUN_040ec700(plVar8,lVar11);
          }
          lVar4 = System_MemoryExtensions__IsTypeComparableAsBytes<char>
                            (lVar4,lVar11,*(undefined8 *)PTR_DAT_092c1668);
          if ((lVar4 != 0) &&
             (lVar5 = thunk_FUN_040b4e00(lVar4,*(undefined8 *)(*plVar6 + 0x40)), lVar5 == 0))
          goto LAB_0727e420;
          if (2 < *(uint *)(plVar6 + 3)) {
            plVar6[6] = lVar4;
            uVar10 = thunk_FUN_040ec700(plVar6 + 6,lVar4);
            lVar4 = FUN_07283670(uVar10,*(undefined8 *)PTR_DAT_0928e5a8,
                                 *(undefined8 *)(unaff_x19 + 0x18));
            if ((lVar4 != 0) &&
               (lVar5 = thunk_FUN_040b4e00(lVar4,*(undefined8 *)(*plVar6 + 0x40)), lVar5 == 0))
            goto LAB_0727e420;
            if ((*(uint *)(plVar6 + 3) & 0xfffffffc) != 0) {
              plVar6[7] = lVar4;
              uVar10 = thunk_FUN_040ec700(plVar6 + 7,lVar4);
              lVar4 = FUN_07283670(uVar10,*(undefined8 *)PTR_DAT_092c1778,
                                   *(undefined8 *)(unaff_x19 + 0x20));
              if ((lVar4 != 0) &&
                 (lVar5 = thunk_FUN_040b4e00(lVar4,*(undefined8 *)(*plVar6 + 0x40)), lVar5 == 0))
              goto LAB_0727e420;
              if (4 < *(uint *)(plVar6 + 3)) {
                plVar6[8] = lVar4;
                uVar10 = thunk_FUN_040ec700(plVar6 + 8,lVar4);
                lVar4 = FUN_07283670(uVar10,*(undefined8 *)PTR_DAT_0928cfa8,
                                     *(undefined8 *)(unaff_x19 + 0x28));
                if ((lVar4 != 0) &&
                   (lVar5 = thunk_FUN_040b4e00(lVar4,*(undefined8 *)(*plVar6 + 0x40)), lVar5 == 0))
                goto LAB_0727e420;
                if (5 < *(uint *)(plVar6 + 3)) {
                  plVar6[9] = lVar4;
                  uVar10 = thunk_FUN_040ec700(plVar6 + 9,lVar4);
                  lVar4 = FUN_07283670(uVar10,*(undefined8 *)PTR_DAT_092c1788,
                                       *(undefined8 *)(unaff_x19 + 0x30));
                  if ((lVar4 != 0) &&
                     (lVar5 = thunk_FUN_040b4e00(lVar4,*(undefined8 *)(*plVar6 + 0x40)), lVar5 == 0)
                     ) goto LAB_0727e420;
                  if (6 < *(uint *)(plVar6 + 3)) {
                    plVar6[10] = lVar4;
                    uVar10 = thunk_FUN_040ec700(plVar6 + 10,lVar4);
                    lVar4 = FUN_07283670(uVar10,*(undefined8 *)PTR_DAT_092c1790,
                                         *(undefined8 *)(unaff_x19 + 0x38));
                    if ((lVar4 != 0) &&
                       (lVar5 = thunk_FUN_040b4e00(lVar4,*(undefined8 *)(*plVar6 + 0x40)),
                       lVar5 == 0)) goto LAB_0727e420;
                    if ((*(uint *)(plVar6 + 3) & 0xfffffff8) != 0) {
                      plVar6[0xb] = lVar4;
                      uVar10 = thunk_FUN_040ec700(plVar6 + 0xb,lVar4);
                      lVar4 = FUN_07283670(uVar10,*(undefined8 *)PTR_DAT_092c1798,
                                           *(undefined8 *)(unaff_x19 + 0x40));
                      if ((lVar4 != 0) &&
                         (lVar5 = thunk_FUN_040b4e00(lVar4,*(undefined8 *)(*plVar6 + 0x40)),
                         lVar5 == 0)) goto LAB_0727e420;
                      if (8 < *(uint *)(plVar6 + 3)) {
                        plVar6[0xc] = lVar4;
                        uVar10 = thunk_FUN_040ec700(plVar6 + 0xc,lVar4);
                        lVar4 = FUN_07283670(uVar10,*(undefined8 *)PTR_DAT_092a5d10,
                                             *(undefined8 *)(unaff_x19 + 0x48));
                        if ((lVar4 != 0) &&
                           (lVar5 = thunk_FUN_040b4e00(lVar4,*(undefined8 *)(*plVar6 + 0x40)),
                           lVar5 == 0)) goto LAB_0727e420;
                        if (9 < *(uint *)(plVar6 + 3)) {
                          plVar6[0xd] = lVar4;
                          uVar10 = thunk_FUN_040ec700(plVar6 + 0xd,lVar4);
                          lVar4 = FUN_07283670(uVar10,*(undefined8 *)PTR_DAT_092c1780,
                                               *(undefined8 *)(unaff_x19 + 0x50));
                          if ((lVar4 != 0) &&
                             (lVar5 = thunk_FUN_040b4e00(lVar4,*(undefined8 *)(*plVar6 + 0x40)),
                             lVar5 == 0)) goto LAB_0727e420;
                          if (10 < *(uint *)(plVar6 + 3)) {
                            plVar6[0xe] = lVar4;
                            thunk_FUN_040ec700(plVar6 + 0xe,lVar4);
                            lVar4 = *unaff_x29;
                            if (*(int *)(lVar4 + 0xe4) == 0) {
                              thunk_FUN_040d65a8();
                              lVar4 = *unaff_x29;
                            }
                            uVar13 = *(undefined8 *)(unaff_x19 + 0x58);
                            uVar12 = *(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x10);
                            uVar10 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092c16a8);
                            FUN_0568af90();
                            uVar10 = System_MemoryExtensions__IsTypeComparableAsBytes<char>
                                               (uVar13,uVar10,*(undefined8 *)PTR_DAT_092c1660);
                            lVar4 = thunk_FUN_040b4efc(*unaff_x28);
                            System_Xml_XmlReader__Close(lVar4,uVar12,uVar10,0);
                            if ((lVar4 != 0) &&
                               (lVar5 = thunk_FUN_040b4e00(lVar4,*(undefined8 *)(*plVar6 + 0x40)),
                               lVar5 == 0)) goto LAB_0727e420;
                            if (0xb < *(uint *)(plVar6 + 3)) {
                              plVar6[0xf] = lVar4;
                              thunk_FUN_040ec700(plVar6 + 0xf,lVar4);
                              uVar13 = *(undefined8 *)(unaff_x19 + 0x60);
                              uVar12 = *(undefined8 *)(*(long *)(*unaff_x29 + 0xb8) + 8);
                              uVar10 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092c16a0);
                              FUN_0568af90();
                              uVar10 = System_MemoryExtensions__IsTypeComparableAsBytes<char>
                                                 (uVar13,uVar10,*(undefined8 *)PTR_DAT_092c1658);
                              lVar4 = thunk_FUN_040b4efc(*unaff_x28);
                              System_Xml_XmlReader__Close(lVar4,uVar12,uVar10,0);
                              if ((lVar4 != 0) &&
                                 (lVar5 = thunk_FUN_040b4e00(lVar4,*(undefined8 *)(*plVar6 + 0x40)),
                                 lVar5 == 0)) goto LAB_0727e420;
                              if (0xc < *(uint *)(plVar6 + 3)) {
                                plVar6[0x10] = lVar4;
                                thunk_FUN_040ec700(plVar6 + 0x10,lVar4);
                                if (lVar3 != 0) {
                                  thunk_FUN_07df3248(lVar3,plVar6,0);
                                  return lVar3;
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
  }
Meta_XR_ImmersiveDebugger_RuntimeSettings__set_InspectedDataAssets:
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


