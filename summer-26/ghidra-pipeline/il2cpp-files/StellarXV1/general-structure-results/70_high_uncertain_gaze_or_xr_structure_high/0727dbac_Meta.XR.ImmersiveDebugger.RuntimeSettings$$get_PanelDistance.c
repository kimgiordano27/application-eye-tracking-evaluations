/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.RuntimeSettings$$get_PanelDistance
ENTRY_POINT: 0727dbac
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 89
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;weak_pose_support;data_collection
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;weak_vector_component_hits_1;strong_file_logging_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


long Meta_XR_ImmersiveDebugger_RuntimeSettings__get_PanelDistance
               (long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  ulong in_x9;
  int *piVar10;
  long in_x10;
  long unaff_x19;
  int unaff_w20;
  int iVar11;
  long *unaff_x21;
  int unaff_w22;
  undefined8 uVar12;
  long unaff_x23;
  long *plVar13;
  undefined8 unaff_x24;
  long lVar14;
  undefined8 uVar15;
  long *unaff_x25;
  undefined8 uVar16;
  long *unaff_x26;
  undefined8 *unaff_x28;
  long *unaff_x29;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined4 in_stack_00000028;
  
  do {
    piVar10 = (int *)(in_x10 + 8);
    do {
      if (*(long *)(piVar10 + -2) == param_3) {
        puVar4 = (undefined8 *)(param_1 + (long)*piVar10 * 0x10 + 0x138);
        iVar11 = unaff_w20;
        goto Meta_XR_ImmersiveDebugger_RuntimeSettings__set_PanelLayer;
      }
      in_x9 = in_x9 - 1;
      piVar10 = piVar10 + 4;
    } while (in_x9 != 0);
    do {
      puVar4 = (undefined8 *)FUN_040b1e00(unaff_x25,param_3,0);
      iVar11 = unaff_w20;
Meta_XR_ImmersiveDebugger_RuntimeSettings__set_PanelLayer:
      lVar5 = (*(code *)*puVar4)(unaff_x25,unaff_w22,puVar4[1]);
      if ((lVar5 == 0) || (unaff_x23 == 0)) {
Meta_XR_ImmersiveDebugger_RuntimeSettings__set_InspectedDataAssets:
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      FUN_06eef620(unaff_x23,unaff_x24,*(undefined4 *)(lVar5 + 0x10),*(undefined8 *)PTR_DAT_092c1638
                  );
      plVar13 = *(long **)(unaff_x19 + 0x58);
      if (plVar13 == (long *)0x0)
      goto Meta_XR_ImmersiveDebugger_RuntimeSettings__set_InspectedDataAssets;
      lVar5 = *plVar13;
      uVar9 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *unaff_x26) {
            puVar4 = (undefined8 *)(lVar5 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_0727da88;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar4 = (undefined8 *)FUN_040b1e00(plVar13,*unaff_x26,0);
LAB_0727da88:
      iVar3 = (*(code *)*puVar4)(plVar13,puVar4[1]);
      if (iVar3 <= iVar11) {
        lVar5 = *unaff_x29;
        if (*(int *)(lVar5 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
          lVar5 = *unaff_x29;
        }
        uVar12 = **(undefined8 **)(lVar5 + 0xb8);
        lVar5 = thunk_FUN_040b4efc(*unaff_x28);
        FUN_07df6498(lVar5,uVar12,0);
        lVar6 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092c1710);
        FUN_05c26520(lVar6,*(undefined8 *)PTR_DAT_092c1708);
        puVar2 = PTR_DAT_092c1768;
        uVar12 = *(undefined8 *)(unaff_x19 + 0x58);
        lVar7 = *(long *)PTR_DAT_092c1768;
        if (*(int *)(lVar7 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
          lVar7 = *(long *)puVar2;
        }
        puVar4 = *(undefined8 **)(lVar7 + 0xb8);
        lVar14 = puVar4[1];
        if (lVar14 == 0) {
          if (*(int *)(lVar7 + 0xe4) == 0) {
            thunk_FUN_040d65a8();
            puVar4 = *(undefined8 **)(*(long *)PTR_DAT_092c1768 + 0xb8);
          }
          uVar16 = *puVar4;
          lVar14 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092c1690);
          FUN_056893d4(lVar14,uVar16,*(undefined8 *)PTR_DAT_092c1748,0);
          plVar13 = (long *)(*(long *)(*(long *)PTR_DAT_092c1768 + 0xb8) + 8);
          *plVar13 = lVar14;
          thunk_FUN_040ec700(plVar13,lVar14);
        }
        uVar9 = FUN_04f7671c(uVar12,lVar14,*(undefined8 *)PTR_DAT_092c1650);
        if ((uVar9 & 1) != 0) {
          uVar12 = FUN_05217a68(*(undefined8 *)PTR_DAT_092c14f8,*(undefined8 *)PTR_DAT_092c17a0,
                                *(undefined8 *)PTR_DAT_092c1740);
          if (lVar6 == 0) goto Meta_XR_ImmersiveDebugger_RuntimeSettings__set_InspectedDataAssets;
          lVar7 = *(long *)(lVar6 + 0x10);
          lVar14 = *(long *)PTR_DAT_092c16f8;
          *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
          if (lVar7 == 0) goto Meta_XR_ImmersiveDebugger_RuntimeSettings__set_InspectedDataAssets;
          uVar1 = *(uint *)(lVar6 + 0x18);
          if (uVar1 < *(uint *)(lVar7 + 0x18)) {
            *(uint *)(lVar6 + 0x18) = uVar1 + 1;
            *(undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar12;
            thunk_FUN_040ec700();
          }
          else {
            FUN_05c26d88(lVar6,uVar12,
                         *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
          }
        }
        plVar13 = (long *)FUN_04077674(*(undefined8 *)PTR_DAT_09287040,0xd);
        uVar12 = FUN_07dfb290(*(undefined8 *)PTR_DAT_092c1770,0);
        in_stack_00000028 = *(undefined4 *)(unaff_x19 + 0x10);
        in_stack_00000018 = *(undefined8 *)PTR_DAT_092c1718;
        in_stack_00000020 = 0xffffffffffffffff;
        lVar7 = FUN_076b01b4(&stack0x00000018,0);
        if (lVar7 != 0) {
          uVar16 = FUN_074eac78(lVar7,0);
          lVar7 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092c1400);
          FUN_07df1964(lVar7,uVar12,uVar16,0);
          if (plVar13 != (long *)0x0) {
            if ((lVar7 != 0) &&
               (lVar14 = thunk_FUN_040b4e00(lVar7,*(undefined8 *)(*plVar13 + 0x40)), lVar14 == 0)) {
LAB_0727e420:
              uVar12 = thunk_FUN_040c2a64();
                    /* WARNING: Subroutine does not return */
              FUN_040776f4(uVar12,0);
            }
            if ((int)plVar13[3] != 0) {
              plVar13[4] = lVar7;
              thunk_FUN_040ec700(plVar13 + 4,lVar7);
              lVar7 = *unaff_x29;
              if (*(int *)(lVar7 + 0xe4) == 0) {
                thunk_FUN_040d65a8();
                lVar7 = *unaff_x29;
              }
              uVar12 = *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x20);
              lVar7 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092c1400);
              FUN_07df1964(lVar7,uVar12,*(undefined8 *)PTR_DAT_0928e688,0);
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
                puVar4 = *(undefined8 **)(lVar7 + 0xb8);
                lVar14 = puVar4[2];
                if (lVar14 == 0) {
                  if (*(int *)(lVar7 + 0xe4) == 0) {
                    thunk_FUN_040d65a8();
                    puVar4 = *(undefined8 **)(*(long *)PTR_DAT_092c1768 + 0xb8);
                  }
                  uVar12 = *puVar4;
                  lVar14 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092c1698);
                  FUN_0568af90(lVar14,uVar12,*(undefined8 *)PTR_DAT_092c1750,0);
                  plVar8 = (long *)(*(long *)(*(long *)PTR_DAT_092c1768 + 0xb8) + 0x10);
                  *plVar8 = lVar14;
                  thunk_FUN_040ec700(plVar8,lVar14);
                }
                lVar6 = System_MemoryExtensions__IsTypeComparableAsBytes<char>
                                  (lVar6,lVar14,*(undefined8 *)PTR_DAT_092c1668);
                if ((lVar6 != 0) &&
                   (lVar7 = thunk_FUN_040b4e00(lVar6,*(undefined8 *)(*plVar13 + 0x40)), lVar7 == 0))
                goto LAB_0727e420;
                if (2 < *(uint *)(plVar13 + 3)) {
                  plVar13[6] = lVar6;
                  uVar12 = thunk_FUN_040ec700(plVar13 + 6,lVar6);
                  lVar6 = FUN_07283670(uVar12,*(undefined8 *)PTR_DAT_0928e5a8,
                                       *(undefined8 *)(unaff_x19 + 0x18));
                  if ((lVar6 != 0) &&
                     (lVar7 = thunk_FUN_040b4e00(lVar6,*(undefined8 *)(*plVar13 + 0x40)), lVar7 == 0
                     )) goto LAB_0727e420;
                  if ((*(uint *)(plVar13 + 3) & 0xfffffffc) != 0) {
                    plVar13[7] = lVar6;
                    uVar12 = thunk_FUN_040ec700(plVar13 + 7,lVar6);
                    lVar6 = FUN_07283670(uVar12,*(undefined8 *)PTR_DAT_092c1778,
                                         *(undefined8 *)(unaff_x19 + 0x20));
                    if ((lVar6 != 0) &&
                       (lVar7 = thunk_FUN_040b4e00(lVar6,*(undefined8 *)(*plVar13 + 0x40)),
                       lVar7 == 0)) goto LAB_0727e420;
                    if (4 < *(uint *)(plVar13 + 3)) {
                      plVar13[8] = lVar6;
                      uVar12 = thunk_FUN_040ec700(plVar13 + 8,lVar6);
                      lVar6 = FUN_07283670(uVar12,*(undefined8 *)PTR_DAT_0928cfa8,
                                           *(undefined8 *)(unaff_x19 + 0x28));
                      if ((lVar6 != 0) &&
                         (lVar7 = thunk_FUN_040b4e00(lVar6,*(undefined8 *)(*plVar13 + 0x40)),
                         lVar7 == 0)) goto LAB_0727e420;
                      if (5 < *(uint *)(plVar13 + 3)) {
                        plVar13[9] = lVar6;
                        uVar12 = thunk_FUN_040ec700(plVar13 + 9,lVar6);
                        lVar6 = FUN_07283670(uVar12,*(undefined8 *)PTR_DAT_092c1788,
                                             *(undefined8 *)(unaff_x19 + 0x30));
                        if ((lVar6 != 0) &&
                           (lVar7 = thunk_FUN_040b4e00(lVar6,*(undefined8 *)(*plVar13 + 0x40)),
                           lVar7 == 0)) goto LAB_0727e420;
                        if (6 < *(uint *)(plVar13 + 3)) {
                          plVar13[10] = lVar6;
                          uVar12 = thunk_FUN_040ec700(plVar13 + 10,lVar6);
                          lVar6 = FUN_07283670(uVar12,*(undefined8 *)PTR_DAT_092c1790,
                                               *(undefined8 *)(unaff_x19 + 0x38));
                          if ((lVar6 != 0) &&
                             (lVar7 = thunk_FUN_040b4e00(lVar6,*(undefined8 *)(*plVar13 + 0x40)),
                             lVar7 == 0)) goto LAB_0727e420;
                          if ((*(uint *)(plVar13 + 3) & 0xfffffff8) != 0) {
                            plVar13[0xb] = lVar6;
                            uVar12 = thunk_FUN_040ec700(plVar13 + 0xb,lVar6);
                            lVar6 = FUN_07283670(uVar12,*(undefined8 *)PTR_DAT_092c1798,
                                                 *(undefined8 *)(unaff_x19 + 0x40));
                            if ((lVar6 != 0) &&
                               (lVar7 = thunk_FUN_040b4e00(lVar6,*(undefined8 *)(*plVar13 + 0x40)),
                               lVar7 == 0)) goto LAB_0727e420;
                            if (8 < *(uint *)(plVar13 + 3)) {
                              plVar13[0xc] = lVar6;
                              uVar12 = thunk_FUN_040ec700(plVar13 + 0xc,lVar6);
                              lVar6 = FUN_07283670(uVar12,*(undefined8 *)PTR_DAT_092a5d10,
                                                   *(undefined8 *)(unaff_x19 + 0x48));
                              if ((lVar6 != 0) &&
                                 (lVar7 = thunk_FUN_040b4e00(lVar6,*(undefined8 *)(*plVar13 + 0x40))
                                 , lVar7 == 0)) goto LAB_0727e420;
                              if (9 < *(uint *)(plVar13 + 3)) {
                                plVar13[0xd] = lVar6;
                                uVar12 = thunk_FUN_040ec700(plVar13 + 0xd,lVar6);
                                lVar6 = FUN_07283670(uVar12,*(undefined8 *)PTR_DAT_092c1780,
                                                     *(undefined8 *)(unaff_x19 + 0x50));
                                if ((lVar6 != 0) &&
                                   (lVar7 = thunk_FUN_040b4e00(lVar6,*(undefined8 *)
                                                                      (*plVar13 + 0x40)), lVar7 == 0
                                   )) goto LAB_0727e420;
                                if (10 < *(uint *)(plVar13 + 3)) {
                                  plVar13[0xe] = lVar6;
                                  thunk_FUN_040ec700(plVar13 + 0xe,lVar6);
                                  lVar6 = *unaff_x29;
                                  if (*(int *)(lVar6 + 0xe4) == 0) {
                                    thunk_FUN_040d65a8();
                                    lVar6 = *unaff_x29;
                                  }
                                  uVar16 = *(undefined8 *)(unaff_x19 + 0x58);
                                  uVar15 = *(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x10);
                                  uVar12 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092c16a8);
                                  FUN_0568af90();
                                  uVar12 = System_MemoryExtensions__IsTypeComparableAsBytes<char>
                                                     (uVar16,uVar12,*(undefined8 *)PTR_DAT_092c1660)
                                  ;
                                  lVar6 = thunk_FUN_040b4efc(*unaff_x28);
                                  System_Xml_XmlReader__Close(lVar6,uVar15,uVar12,0);
                                  if ((lVar6 != 0) &&
                                     (lVar7 = thunk_FUN_040b4e00(lVar6,*(undefined8 *)
                                                                        (*plVar13 + 0x40)),
                                     lVar7 == 0)) goto LAB_0727e420;
                                  if (0xb < *(uint *)(plVar13 + 3)) {
                                    plVar13[0xf] = lVar6;
                                    thunk_FUN_040ec700(plVar13 + 0xf,lVar6);
                                    uVar16 = *(undefined8 *)(unaff_x19 + 0x60);
                                    uVar15 = *(undefined8 *)(*(long *)(*unaff_x29 + 0xb8) + 8);
                                    uVar12 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092c16a0);
                                    FUN_0568af90();
                                    uVar12 = System_MemoryExtensions__IsTypeComparableAsBytes<char>
                                                       (uVar16,uVar12,
                                                        *(undefined8 *)PTR_DAT_092c1658);
                                    lVar6 = thunk_FUN_040b4efc(*unaff_x28);
                                    System_Xml_XmlReader__Close(lVar6,uVar15,uVar12,0);
                                    if ((lVar6 != 0) &&
                                       (lVar7 = thunk_FUN_040b4e00(lVar6,*(undefined8 *)
                                                                          (*plVar13 + 0x40)),
                                       lVar7 == 0)) goto LAB_0727e420;
                                    if (0xc < *(uint *)(plVar13 + 3)) {
                                      plVar13[0x10] = lVar6;
                                      thunk_FUN_040ec700(plVar13 + 0x10,lVar6);
                                      if (lVar5 != 0) {
                                        thunk_FUN_07df3248(lVar5,plVar13,0);
                                        return lVar5;
                                      }
                                      goto 
                                      Meta_XR_ImmersiveDebugger_RuntimeSettings__set_InspectedDataAssets
                                      ;
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
        goto Meta_XR_ImmersiveDebugger_RuntimeSettings__set_InspectedDataAssets;
      }
      plVar13 = *(long **)(unaff_x19 + 0x58);
      if (plVar13 == (long *)0x0)
      goto Meta_XR_ImmersiveDebugger_RuntimeSettings__set_InspectedDataAssets;
      lVar5 = *plVar13;
      uVar9 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_092c16f0) {
            puVar4 = (undefined8 *)(lVar5 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_0727daf8;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar4 = (undefined8 *)FUN_040b1e00(plVar13,*(long *)PTR_DAT_092c16f0,0);
LAB_0727daf8:
      lVar5 = (*(code *)*puVar4)(plVar13,iVar11,puVar4[1]);
      if (lVar5 == 0) goto Meta_XR_ImmersiveDebugger_RuntimeSettings__set_InspectedDataAssets;
      unaff_w20 = iVar11 + 1;
      *(int *)(lVar5 + 0x10) = unaff_w20;
      plVar13 = *(long **)(unaff_x19 + 0x58);
      if (plVar13 == (long *)0x0)
      goto Meta_XR_ImmersiveDebugger_RuntimeSettings__set_InspectedDataAssets;
      lVar5 = *plVar13;
      unaff_x23 = *unaff_x21;
      uVar9 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_092c16f0) {
            puVar4 = (undefined8 *)(lVar5 + (long)*piVar10 * 0x10 + 0x138);
            goto Meta_XR_ImmersiveDebugger_RuntimeSettings__set_ShowWarningLog;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar4 = (undefined8 *)FUN_040b1e00(plVar13,*(long *)PTR_DAT_092c16f0,0);
Meta_XR_ImmersiveDebugger_RuntimeSettings__set_ShowWarningLog:
      unaff_x24 = (*(code *)*puVar4)(plVar13,iVar11,puVar4[1]);
      unaff_x25 = *(long **)(unaff_x19 + 0x58);
      if (unaff_x25 == (long *)0x0)
      goto Meta_XR_ImmersiveDebugger_RuntimeSettings__set_InspectedDataAssets;
      param_1 = *unaff_x25;
      in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
      param_3 = *(long *)PTR_DAT_092c16f0;
      unaff_w22 = iVar11;
    } while (in_x9 == 0);
    in_x10 = *(long *)(param_1 + 0xb0);
  } while( true );
}


