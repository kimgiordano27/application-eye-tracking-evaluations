/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.RuntimeSettings$$set_RotateOverride
ENTRY_POINT: 0727db54
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


long Meta_XR_ImmersiveDebugger_RuntimeSettings__set_RotateOverride
               (long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined1 in_ZR;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  ulong in_x9;
  ulong uVar10;
  int *piVar11;
  int *in_x10;
  long unaff_x19;
  int unaff_w20;
  int iVar12;
  long *unaff_x21;
  int unaff_w22;
  long unaff_x23;
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
  
code_r0x0727db54:
  if (!(bool)in_ZR) goto LAB_0727db40;
LAB_0727db58:
  puVar4 = (undefined8 *)FUN_040b1e00(unaff_x24,param_3,0);
  iVar12 = unaff_w20;
  do {
    uVar5 = (*(code *)*puVar4)(unaff_x24,unaff_w22,puVar4[1]);
    plVar15 = *(long **)(unaff_x19 + 0x58);
    if (plVar15 == (long *)0x0) {
Meta_XR_ImmersiveDebugger_RuntimeSettings__set_InspectedDataAssets:
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    lVar9 = *plVar15;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_092c16f0) {
          puVar4 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto Meta_XR_ImmersiveDebugger_RuntimeSettings__set_PanelLayer;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar4 = (undefined8 *)FUN_040b1e00(plVar15,*(long *)PTR_DAT_092c16f0,0);
Meta_XR_ImmersiveDebugger_RuntimeSettings__set_PanelLayer:
    lVar9 = (*(code *)*puVar4)(plVar15,unaff_w22,puVar4[1]);
    if ((lVar9 == 0) || (unaff_x23 == 0))
    goto Meta_XR_ImmersiveDebugger_RuntimeSettings__set_InspectedDataAssets;
    FUN_06eef620(unaff_x23,uVar5,*(undefined4 *)(lVar9 + 0x10),*(undefined8 *)PTR_DAT_092c1638);
    plVar15 = *(long **)(unaff_x19 + 0x58);
    if (plVar15 == (long *)0x0)
    goto Meta_XR_ImmersiveDebugger_RuntimeSettings__set_InspectedDataAssets;
    lVar9 = *plVar15;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *unaff_x26) {
          puVar4 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_0727da88;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar4 = (undefined8 *)FUN_040b1e00(plVar15,*unaff_x26,0);
LAB_0727da88:
    iVar3 = (*(code *)*puVar4)(plVar15,puVar4[1]);
    if (iVar3 <= iVar12) {
      lVar9 = *unaff_x29;
      if (*(int *)(lVar9 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
        lVar9 = *unaff_x29;
      }
      uVar5 = **(undefined8 **)(lVar9 + 0xb8);
      lVar9 = thunk_FUN_040b4efc(*unaff_x28);
      FUN_07df6498(lVar9,uVar5,0);
      lVar6 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092c1710);
      FUN_05c26520(lVar6,*(undefined8 *)PTR_DAT_092c1708);
      puVar2 = PTR_DAT_092c1768;
      uVar5 = *(undefined8 *)(unaff_x19 + 0x58);
      lVar7 = *(long *)PTR_DAT_092c1768;
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
        lVar7 = *(long *)puVar2;
      }
      puVar4 = *(undefined8 **)(lVar7 + 0xb8);
      lVar13 = puVar4[1];
      if (lVar13 == 0) {
        if (*(int *)(lVar7 + 0xe4) == 0) {
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
      uVar10 = FUN_04f7671c(uVar5,lVar13,*(undefined8 *)PTR_DAT_092c1650);
      if ((uVar10 & 1) != 0) {
        uVar5 = FUN_05217a68(*(undefined8 *)PTR_DAT_092c14f8,*(undefined8 *)PTR_DAT_092c17a0,
                             *(undefined8 *)PTR_DAT_092c1740);
        if (lVar6 == 0) goto Meta_XR_ImmersiveDebugger_RuntimeSettings__set_InspectedDataAssets;
        lVar7 = *(long *)(lVar6 + 0x10);
        lVar13 = *(long *)PTR_DAT_092c16f8;
        *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
        if (lVar7 == 0) goto Meta_XR_ImmersiveDebugger_RuntimeSettings__set_InspectedDataAssets;
        uVar1 = *(uint *)(lVar6 + 0x18);
        if (uVar1 < *(uint *)(lVar7 + 0x18)) {
          *(uint *)(lVar6 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar5;
          thunk_FUN_040ec700();
        }
        else {
          FUN_05c26d88(lVar6,uVar5,
                       *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
        }
      }
      plVar15 = (long *)FUN_04077674(*(undefined8 *)PTR_DAT_09287040,0xd);
      uVar5 = FUN_07dfb290(*(undefined8 *)PTR_DAT_092c1770,0);
      in_stack_00000028 = *(undefined4 *)(unaff_x19 + 0x10);
      in_stack_00000018 = *(undefined8 *)PTR_DAT_092c1718;
      in_stack_00000020 = 0xffffffffffffffff;
      lVar7 = FUN_076b01b4(&stack0x00000018,0);
      if (lVar7 != 0) {
        uVar16 = FUN_074eac78(lVar7,0);
        lVar7 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092c1400);
        FUN_07df1964(lVar7,uVar5,uVar16,0);
        if (plVar15 != (long *)0x0) {
          if ((lVar7 != 0) &&
             (lVar13 = thunk_FUN_040b4e00(lVar7,*(undefined8 *)(*plVar15 + 0x40)), lVar13 == 0)) {
LAB_0727e420:
            uVar5 = thunk_FUN_040c2a64();
                    /* WARNING: Subroutine does not return */
            FUN_040776f4(uVar5,0);
          }
          if ((int)plVar15[3] != 0) {
            plVar15[4] = lVar7;
            thunk_FUN_040ec700(plVar15 + 4,lVar7);
            lVar7 = *unaff_x29;
            if (*(int *)(lVar7 + 0xe4) == 0) {
              thunk_FUN_040d65a8();
              lVar7 = *unaff_x29;
            }
            uVar5 = *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 0x20);
            lVar7 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092c1400);
            FUN_07df1964(lVar7,uVar5,*(undefined8 *)PTR_DAT_0928e688,0);
            if ((lVar7 != 0) &&
               (lVar13 = thunk_FUN_040b4e00(lVar7,*(undefined8 *)(*plVar15 + 0x40)), lVar13 == 0))
            goto LAB_0727e420;
            if ((*(uint *)(plVar15 + 3) & 0xfffffffe) != 0) {
              plVar15[5] = lVar7;
              thunk_FUN_040ec700(plVar15 + 5,lVar7);
              lVar7 = *(long *)PTR_DAT_092c1768;
              if (*(int *)(lVar7 + 0xe4) == 0) {
                thunk_FUN_040d65a8();
                lVar7 = *(long *)PTR_DAT_092c1768;
              }
              puVar4 = *(undefined8 **)(lVar7 + 0xb8);
              lVar13 = puVar4[2];
              if (lVar13 == 0) {
                if (*(int *)(lVar7 + 0xe4) == 0) {
                  thunk_FUN_040d65a8();
                  puVar4 = *(undefined8 **)(*(long *)PTR_DAT_092c1768 + 0xb8);
                }
                uVar5 = *puVar4;
                lVar13 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092c1698);
                FUN_0568af90(lVar13,uVar5,*(undefined8 *)PTR_DAT_092c1750,0);
                plVar8 = (long *)(*(long *)(*(long *)PTR_DAT_092c1768 + 0xb8) + 0x10);
                *plVar8 = lVar13;
                thunk_FUN_040ec700(plVar8,lVar13);
              }
              lVar6 = System_MemoryExtensions__IsTypeComparableAsBytes<char>
                                (lVar6,lVar13,*(undefined8 *)PTR_DAT_092c1668);
              if ((lVar6 != 0) &&
                 (lVar7 = thunk_FUN_040b4e00(lVar6,*(undefined8 *)(*plVar15 + 0x40)), lVar7 == 0))
              goto LAB_0727e420;
              if (2 < *(uint *)(plVar15 + 3)) {
                plVar15[6] = lVar6;
                uVar5 = thunk_FUN_040ec700(plVar15 + 6,lVar6);
                lVar6 = FUN_07283670(uVar5,*(undefined8 *)PTR_DAT_0928e5a8,
                                     *(undefined8 *)(unaff_x19 + 0x18));
                if ((lVar6 != 0) &&
                   (lVar7 = thunk_FUN_040b4e00(lVar6,*(undefined8 *)(*plVar15 + 0x40)), lVar7 == 0))
                goto LAB_0727e420;
                if ((*(uint *)(plVar15 + 3) & 0xfffffffc) != 0) {
                  plVar15[7] = lVar6;
                  uVar5 = thunk_FUN_040ec700(plVar15 + 7,lVar6);
                  lVar6 = FUN_07283670(uVar5,*(undefined8 *)PTR_DAT_092c1778,
                                       *(undefined8 *)(unaff_x19 + 0x20));
                  if ((lVar6 != 0) &&
                     (lVar7 = thunk_FUN_040b4e00(lVar6,*(undefined8 *)(*plVar15 + 0x40)), lVar7 == 0
                     )) goto LAB_0727e420;
                  if (4 < *(uint *)(plVar15 + 3)) {
                    plVar15[8] = lVar6;
                    uVar5 = thunk_FUN_040ec700(plVar15 + 8,lVar6);
                    lVar6 = FUN_07283670(uVar5,*(undefined8 *)PTR_DAT_0928cfa8,
                                         *(undefined8 *)(unaff_x19 + 0x28));
                    if ((lVar6 != 0) &&
                       (lVar7 = thunk_FUN_040b4e00(lVar6,*(undefined8 *)(*plVar15 + 0x40)),
                       lVar7 == 0)) goto LAB_0727e420;
                    if (5 < *(uint *)(plVar15 + 3)) {
                      plVar15[9] = lVar6;
                      uVar5 = thunk_FUN_040ec700(plVar15 + 9,lVar6);
                      lVar6 = FUN_07283670(uVar5,*(undefined8 *)PTR_DAT_092c1788,
                                           *(undefined8 *)(unaff_x19 + 0x30));
                      if ((lVar6 != 0) &&
                         (lVar7 = thunk_FUN_040b4e00(lVar6,*(undefined8 *)(*plVar15 + 0x40)),
                         lVar7 == 0)) goto LAB_0727e420;
                      if (6 < *(uint *)(plVar15 + 3)) {
                        plVar15[10] = lVar6;
                        uVar5 = thunk_FUN_040ec700(plVar15 + 10,lVar6);
                        lVar6 = FUN_07283670(uVar5,*(undefined8 *)PTR_DAT_092c1790,
                                             *(undefined8 *)(unaff_x19 + 0x38));
                        if ((lVar6 != 0) &&
                           (lVar7 = thunk_FUN_040b4e00(lVar6,*(undefined8 *)(*plVar15 + 0x40)),
                           lVar7 == 0)) goto LAB_0727e420;
                        if ((*(uint *)(plVar15 + 3) & 0xfffffff8) != 0) {
                          plVar15[0xb] = lVar6;
                          uVar5 = thunk_FUN_040ec700(plVar15 + 0xb,lVar6);
                          lVar6 = FUN_07283670(uVar5,*(undefined8 *)PTR_DAT_092c1798,
                                               *(undefined8 *)(unaff_x19 + 0x40));
                          if ((lVar6 != 0) &&
                             (lVar7 = thunk_FUN_040b4e00(lVar6,*(undefined8 *)(*plVar15 + 0x40)),
                             lVar7 == 0)) goto LAB_0727e420;
                          if (8 < *(uint *)(plVar15 + 3)) {
                            plVar15[0xc] = lVar6;
                            uVar5 = thunk_FUN_040ec700(plVar15 + 0xc,lVar6);
                            lVar6 = FUN_07283670(uVar5,*(undefined8 *)PTR_DAT_092a5d10,
                                                 *(undefined8 *)(unaff_x19 + 0x48));
                            if ((lVar6 != 0) &&
                               (lVar7 = thunk_FUN_040b4e00(lVar6,*(undefined8 *)(*plVar15 + 0x40)),
                               lVar7 == 0)) goto LAB_0727e420;
                            if (9 < *(uint *)(plVar15 + 3)) {
                              plVar15[0xd] = lVar6;
                              uVar5 = thunk_FUN_040ec700(plVar15 + 0xd,lVar6);
                              lVar6 = FUN_07283670(uVar5,*(undefined8 *)PTR_DAT_092c1780,
                                                   *(undefined8 *)(unaff_x19 + 0x50));
                              if ((lVar6 != 0) &&
                                 (lVar7 = thunk_FUN_040b4e00(lVar6,*(undefined8 *)(*plVar15 + 0x40))
                                 , lVar7 == 0)) goto LAB_0727e420;
                              if (10 < *(uint *)(plVar15 + 3)) {
                                plVar15[0xe] = lVar6;
                                thunk_FUN_040ec700(plVar15 + 0xe,lVar6);
                                lVar6 = *unaff_x29;
                                if (*(int *)(lVar6 + 0xe4) == 0) {
                                  thunk_FUN_040d65a8();
                                  lVar6 = *unaff_x29;
                                }
                                uVar16 = *(undefined8 *)(unaff_x19 + 0x58);
                                uVar14 = *(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x10);
                                uVar5 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092c16a8);
                                FUN_0568af90();
                                uVar5 = System_MemoryExtensions__IsTypeComparableAsBytes<char>
                                                  (uVar16,uVar5,*(undefined8 *)PTR_DAT_092c1660);
                                lVar6 = thunk_FUN_040b4efc(*unaff_x28);
                                System_Xml_XmlReader__Close(lVar6,uVar14,uVar5,0);
                                if ((lVar6 != 0) &&
                                   (lVar7 = thunk_FUN_040b4e00(lVar6,*(undefined8 *)
                                                                      (*plVar15 + 0x40)), lVar7 == 0
                                   )) goto LAB_0727e420;
                                if (0xb < *(uint *)(plVar15 + 3)) {
                                  plVar15[0xf] = lVar6;
                                  thunk_FUN_040ec700(plVar15 + 0xf,lVar6);
                                  uVar16 = *(undefined8 *)(unaff_x19 + 0x60);
                                  uVar14 = *(undefined8 *)(*(long *)(*unaff_x29 + 0xb8) + 8);
                                  uVar5 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092c16a0);
                                  FUN_0568af90();
                                  uVar5 = System_MemoryExtensions__IsTypeComparableAsBytes<char>
                                                    (uVar16,uVar5,*(undefined8 *)PTR_DAT_092c1658);
                                  lVar6 = thunk_FUN_040b4efc(*unaff_x28);
                                  System_Xml_XmlReader__Close(lVar6,uVar14,uVar5,0);
                                  if ((lVar6 != 0) &&
                                     (lVar7 = thunk_FUN_040b4e00(lVar6,*(undefined8 *)
                                                                        (*plVar15 + 0x40)),
                                     lVar7 == 0)) goto LAB_0727e420;
                                  if (0xc < *(uint *)(plVar15 + 3)) {
                                    plVar15[0x10] = lVar6;
                                    thunk_FUN_040ec700(plVar15 + 0x10,lVar6);
                                    if (lVar9 != 0) {
                                      thunk_FUN_07df3248(lVar9,plVar15,0);
                                      return lVar9;
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
    plVar15 = *(long **)(unaff_x19 + 0x58);
    if (plVar15 == (long *)0x0)
    goto Meta_XR_ImmersiveDebugger_RuntimeSettings__set_InspectedDataAssets;
    lVar9 = *plVar15;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_092c16f0) {
          puVar4 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_0727daf8;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar4 = (undefined8 *)FUN_040b1e00(plVar15,*(long *)PTR_DAT_092c16f0,0);
LAB_0727daf8:
    lVar9 = (*(code *)*puVar4)(plVar15,iVar12,puVar4[1]);
    if (lVar9 == 0) goto Meta_XR_ImmersiveDebugger_RuntimeSettings__set_InspectedDataAssets;
    unaff_w20 = iVar12 + 1;
    *(int *)(lVar9 + 0x10) = unaff_w20;
    unaff_x24 = *(long **)(unaff_x19 + 0x58);
    if (unaff_x24 == (long *)0x0)
    goto Meta_XR_ImmersiveDebugger_RuntimeSettings__set_InspectedDataAssets;
    param_1 = *unaff_x24;
    unaff_x23 = *unaff_x21;
    in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
    param_3 = *(long *)PTR_DAT_092c16f0;
    unaff_w22 = iVar12;
    if (in_x9 == 0) goto LAB_0727db58;
    in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
LAB_0727db40:
    if (*(long *)(in_x10 + -2) != param_3) {
      in_x9 = in_x9 - 1;
      in_ZR = in_x9 == 0;
      in_x10 = in_x10 + 4;
      goto code_r0x0727db54;
    }
    puVar4 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
    iVar12 = unaff_w20;
  } while( true );
}


