/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.RuntimeSettings$$.ctor
ENTRY_POINT: 0727dc4c
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


long Meta_XR_ImmersiveDebugger_RuntimeSettings___ctor(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 *puVar8;
  long unaff_x19;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 *unaff_x28;
  long *unaff_x29;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined4 in_stack_00000028;
  
  FUN_07df6498();
  lVar3 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092c1710);
  FUN_05c26520(lVar3,*(undefined8 *)PTR_DAT_092c1708);
  puVar2 = PTR_DAT_092c1768;
  uVar9 = *(undefined8 *)(unaff_x19 + 0x58);
  lVar4 = *(long *)PTR_DAT_092c1768;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
    lVar4 = *(long *)puVar2;
  }
  puVar8 = *(undefined8 **)(lVar4 + 0xb8);
  lVar10 = puVar8[1];
  if (lVar10 == 0) {
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
      puVar8 = *(undefined8 **)(*(long *)PTR_DAT_092c1768 + 0xb8);
    }
    uVar12 = *puVar8;
    lVar10 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092c1690);
    FUN_056893d4(lVar10,uVar12,*(undefined8 *)PTR_DAT_092c1748,0);
    plVar5 = (long *)(*(long *)(*(long *)PTR_DAT_092c1768 + 0xb8) + 8);
    *plVar5 = lVar10;
    thunk_FUN_040ec700(plVar5,lVar10);
  }
  uVar6 = FUN_04f7671c(uVar9,lVar10,*(undefined8 *)PTR_DAT_092c1650);
  if ((uVar6 & 1) != 0) {
    uVar9 = FUN_05217a68(*(undefined8 *)PTR_DAT_092c14f8,*(undefined8 *)PTR_DAT_092c17a0,
                         *(undefined8 *)PTR_DAT_092c1740);
    if (lVar3 == 0) goto Meta_XR_ImmersiveDebugger_RuntimeSettings__set_InspectedDataAssets;
    lVar4 = *(long *)(lVar3 + 0x10);
    lVar10 = *(long *)PTR_DAT_092c16f8;
    *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
    if (lVar4 == 0) goto Meta_XR_ImmersiveDebugger_RuntimeSettings__set_InspectedDataAssets;
    uVar1 = *(uint *)(lVar3 + 0x18);
    if (uVar1 < *(uint *)(lVar4 + 0x18)) {
      *(uint *)(lVar3 + 0x18) = uVar1 + 1;
      *(undefined8 *)(lVar4 + (long)(int)uVar1 * 8 + 0x20) = uVar9;
      thunk_FUN_040ec700();
    }
    else {
      FUN_05c26d88(lVar3,uVar9,*(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
    }
  }
  plVar5 = (long *)FUN_04077674(*(undefined8 *)PTR_DAT_09287040,0xd);
  uVar9 = FUN_07dfb290(*(undefined8 *)PTR_DAT_092c1770,0);
  in_stack_00000028 = *(undefined4 *)(unaff_x19 + 0x10);
  in_stack_00000018 = *(undefined8 *)PTR_DAT_092c1718;
  in_stack_00000020 = 0xffffffffffffffff;
  lVar4 = FUN_076b01b4(&stack0x00000018,0);
  if (lVar4 != 0) {
    uVar12 = FUN_074eac78(lVar4,0);
    lVar4 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092c1400);
    FUN_07df1964(lVar4,uVar9,uVar12,0);
    if (plVar5 != (long *)0x0) {
      if ((lVar4 != 0) &&
         (lVar10 = thunk_FUN_040b4e00(lVar4,*(undefined8 *)(*plVar5 + 0x40)), lVar10 == 0)) {
LAB_0727e420:
        uVar9 = thunk_FUN_040c2a64();
                    /* WARNING: Subroutine does not return */
        FUN_040776f4(uVar9,0);
      }
      if ((int)plVar5[3] != 0) {
        plVar5[4] = lVar4;
        thunk_FUN_040ec700(plVar5 + 4,lVar4);
        lVar4 = *unaff_x29;
        if (*(int *)(lVar4 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
          lVar4 = *unaff_x29;
        }
        uVar9 = *(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x20);
        lVar4 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092c1400);
        FUN_07df1964(lVar4,uVar9,*(undefined8 *)PTR_DAT_0928e688,0);
        if ((lVar4 != 0) &&
           (lVar10 = thunk_FUN_040b4e00(lVar4,*(undefined8 *)(*plVar5 + 0x40)), lVar10 == 0))
        goto LAB_0727e420;
        if ((*(uint *)(plVar5 + 3) & 0xfffffffe) != 0) {
          plVar5[5] = lVar4;
          thunk_FUN_040ec700(plVar5 + 5,lVar4);
          lVar4 = *(long *)PTR_DAT_092c1768;
          if (*(int *)(lVar4 + 0xe4) == 0) {
            thunk_FUN_040d65a8();
            lVar4 = *(long *)PTR_DAT_092c1768;
          }
          puVar8 = *(undefined8 **)(lVar4 + 0xb8);
          lVar10 = puVar8[2];
          if (lVar10 == 0) {
            if (*(int *)(lVar4 + 0xe4) == 0) {
              thunk_FUN_040d65a8();
              puVar8 = *(undefined8 **)(*(long *)PTR_DAT_092c1768 + 0xb8);
            }
            uVar9 = *puVar8;
            lVar10 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092c1698);
            FUN_0568af90(lVar10,uVar9,*(undefined8 *)PTR_DAT_092c1750,0);
            plVar7 = (long *)(*(long *)(*(long *)PTR_DAT_092c1768 + 0xb8) + 0x10);
            *plVar7 = lVar10;
            thunk_FUN_040ec700(plVar7,lVar10);
          }
          lVar3 = System_MemoryExtensions__IsTypeComparableAsBytes<char>
                            (lVar3,lVar10,*(undefined8 *)PTR_DAT_092c1668);
          if ((lVar3 != 0) &&
             (lVar4 = thunk_FUN_040b4e00(lVar3,*(undefined8 *)(*plVar5 + 0x40)), lVar4 == 0))
          goto LAB_0727e420;
          if (2 < *(uint *)(plVar5 + 3)) {
            plVar5[6] = lVar3;
            uVar9 = thunk_FUN_040ec700(plVar5 + 6,lVar3);
            lVar3 = FUN_07283670(uVar9,*(undefined8 *)PTR_DAT_0928e5a8,
                                 *(undefined8 *)(unaff_x19 + 0x18));
            if ((lVar3 != 0) &&
               (lVar4 = thunk_FUN_040b4e00(lVar3,*(undefined8 *)(*plVar5 + 0x40)), lVar4 == 0))
            goto LAB_0727e420;
            if ((*(uint *)(plVar5 + 3) & 0xfffffffc) != 0) {
              plVar5[7] = lVar3;
              uVar9 = thunk_FUN_040ec700(plVar5 + 7,lVar3);
              lVar3 = FUN_07283670(uVar9,*(undefined8 *)PTR_DAT_092c1778,
                                   *(undefined8 *)(unaff_x19 + 0x20));
              if ((lVar3 != 0) &&
                 (lVar4 = thunk_FUN_040b4e00(lVar3,*(undefined8 *)(*plVar5 + 0x40)), lVar4 == 0))
              goto LAB_0727e420;
              if (4 < *(uint *)(plVar5 + 3)) {
                plVar5[8] = lVar3;
                uVar9 = thunk_FUN_040ec700(plVar5 + 8,lVar3);
                lVar3 = FUN_07283670(uVar9,*(undefined8 *)PTR_DAT_0928cfa8,
                                     *(undefined8 *)(unaff_x19 + 0x28));
                if ((lVar3 != 0) &&
                   (lVar4 = thunk_FUN_040b4e00(lVar3,*(undefined8 *)(*plVar5 + 0x40)), lVar4 == 0))
                goto LAB_0727e420;
                if (5 < *(uint *)(plVar5 + 3)) {
                  plVar5[9] = lVar3;
                  uVar9 = thunk_FUN_040ec700(plVar5 + 9,lVar3);
                  lVar3 = FUN_07283670(uVar9,*(undefined8 *)PTR_DAT_092c1788,
                                       *(undefined8 *)(unaff_x19 + 0x30));
                  if ((lVar3 != 0) &&
                     (lVar4 = thunk_FUN_040b4e00(lVar3,*(undefined8 *)(*plVar5 + 0x40)), lVar4 == 0)
                     ) goto LAB_0727e420;
                  if (6 < *(uint *)(plVar5 + 3)) {
                    plVar5[10] = lVar3;
                    uVar9 = thunk_FUN_040ec700(plVar5 + 10,lVar3);
                    lVar3 = FUN_07283670(uVar9,*(undefined8 *)PTR_DAT_092c1790,
                                         *(undefined8 *)(unaff_x19 + 0x38));
                    if ((lVar3 != 0) &&
                       (lVar4 = thunk_FUN_040b4e00(lVar3,*(undefined8 *)(*plVar5 + 0x40)),
                       lVar4 == 0)) goto LAB_0727e420;
                    if ((*(uint *)(plVar5 + 3) & 0xfffffff8) != 0) {
                      plVar5[0xb] = lVar3;
                      uVar9 = thunk_FUN_040ec700(plVar5 + 0xb,lVar3);
                      lVar3 = FUN_07283670(uVar9,*(undefined8 *)PTR_DAT_092c1798,
                                           *(undefined8 *)(unaff_x19 + 0x40));
                      if ((lVar3 != 0) &&
                         (lVar4 = thunk_FUN_040b4e00(lVar3,*(undefined8 *)(*plVar5 + 0x40)),
                         lVar4 == 0)) goto LAB_0727e420;
                      if (8 < *(uint *)(plVar5 + 3)) {
                        plVar5[0xc] = lVar3;
                        uVar9 = thunk_FUN_040ec700(plVar5 + 0xc,lVar3);
                        lVar3 = FUN_07283670(uVar9,*(undefined8 *)PTR_DAT_092a5d10,
                                             *(undefined8 *)(unaff_x19 + 0x48));
                        if ((lVar3 != 0) &&
                           (lVar4 = thunk_FUN_040b4e00(lVar3,*(undefined8 *)(*plVar5 + 0x40)),
                           lVar4 == 0)) goto LAB_0727e420;
                        if (9 < *(uint *)(plVar5 + 3)) {
                          plVar5[0xd] = lVar3;
                          uVar9 = thunk_FUN_040ec700(plVar5 + 0xd,lVar3);
                          lVar3 = FUN_07283670(uVar9,*(undefined8 *)PTR_DAT_092c1780,
                                               *(undefined8 *)(unaff_x19 + 0x50));
                          if ((lVar3 != 0) &&
                             (lVar4 = thunk_FUN_040b4e00(lVar3,*(undefined8 *)(*plVar5 + 0x40)),
                             lVar4 == 0)) goto LAB_0727e420;
                          if (10 < *(uint *)(plVar5 + 3)) {
                            plVar5[0xe] = lVar3;
                            thunk_FUN_040ec700(plVar5 + 0xe,lVar3);
                            lVar3 = *unaff_x29;
                            if (*(int *)(lVar3 + 0xe4) == 0) {
                              thunk_FUN_040d65a8();
                              lVar3 = *unaff_x29;
                            }
                            uVar12 = *(undefined8 *)(unaff_x19 + 0x58);
                            uVar11 = *(undefined8 *)(*(long *)(lVar3 + 0xb8) + 0x10);
                            uVar9 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092c16a8);
                            FUN_0568af90();
                            uVar9 = System_MemoryExtensions__IsTypeComparableAsBytes<char>
                                              (uVar12,uVar9,*(undefined8 *)PTR_DAT_092c1660);
                            lVar3 = thunk_FUN_040b4efc(*unaff_x28);
                            System_Xml_XmlReader__Close(lVar3,uVar11,uVar9,0);
                            if ((lVar3 != 0) &&
                               (lVar4 = thunk_FUN_040b4e00(lVar3,*(undefined8 *)(*plVar5 + 0x40)),
                               lVar4 == 0)) goto LAB_0727e420;
                            if (0xb < *(uint *)(plVar5 + 3)) {
                              plVar5[0xf] = lVar3;
                              thunk_FUN_040ec700(plVar5 + 0xf,lVar3);
                              uVar12 = *(undefined8 *)(unaff_x19 + 0x60);
                              uVar11 = *(undefined8 *)(*(long *)(*unaff_x29 + 0xb8) + 8);
                              uVar9 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092c16a0);
                              FUN_0568af90();
                              uVar9 = System_MemoryExtensions__IsTypeComparableAsBytes<char>
                                                (uVar12,uVar9,*(undefined8 *)PTR_DAT_092c1658);
                              lVar3 = thunk_FUN_040b4efc(*unaff_x28);
                              System_Xml_XmlReader__Close(lVar3,uVar11,uVar9,0);
                              if ((lVar3 != 0) &&
                                 (lVar4 = thunk_FUN_040b4e00(lVar3,*(undefined8 *)(*plVar5 + 0x40)),
                                 lVar4 == 0)) goto LAB_0727e420;
                              if (0xc < *(uint *)(plVar5 + 3)) {
                                plVar5[0x10] = lVar3;
                                thunk_FUN_040ec700(plVar5 + 0x10,lVar3);
                                if (param_1 != 0) {
                                  thunk_FUN_07df3248(param_1,plVar5,0);
                                  return param_1;
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


