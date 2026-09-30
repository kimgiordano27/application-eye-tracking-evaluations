/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.RuntimeSettings$$OnBeforeSerialize
ENTRY_POINT: 0727de0c
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 120
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;data_collection;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;strong_file_logging_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_ImmersiveDebugger_RuntimeSettings__OnBeforeSerialize(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  long unaff_x19;
  long unaff_x21;
  long *unaff_x22;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *unaff_x28;
  long *unaff_x29;
  undefined8 uStack0000000000000018;
  
  uStack0000000000000018 = *param_1;
  lVar1 = FUN_076b01b4();
  if (lVar1 != 0) {
    FUN_074eac78(lVar1,0);
    lVar1 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092c1400);
    FUN_07df1964();
    if (unaff_x22 != (long *)0x0) {
      if ((lVar1 != 0) &&
         (lVar2 = thunk_FUN_040b4e00(lVar1,*(undefined8 *)(*unaff_x22 + 0x40)), lVar2 == 0)) {
LAB_0727e420:
        uVar5 = thunk_FUN_040c2a64();
                    /* WARNING: Subroutine does not return */
        FUN_040776f4(uVar5,0);
      }
      if ((int)unaff_x22[3] != 0) {
        unaff_x22[4] = lVar1;
        thunk_FUN_040ec700(unaff_x22 + 4,lVar1);
        lVar1 = *unaff_x29;
        if (*(int *)(lVar1 + 0xe4) == 0) {
          thunk_FUN_040d65a8();
          lVar1 = *unaff_x29;
        }
        uVar5 = *(undefined8 *)(*(long *)(lVar1 + 0xb8) + 0x20);
        lVar1 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092c1400);
        FUN_07df1964(lVar1,uVar5,*(undefined8 *)PTR_DAT_0928e688,0);
        if ((lVar1 != 0) &&
           (lVar2 = thunk_FUN_040b4e00(lVar1,*(undefined8 *)(*unaff_x22 + 0x40)), lVar2 == 0))
        goto LAB_0727e420;
        if ((*(uint *)(unaff_x22 + 3) & 0xfffffffe) != 0) {
          unaff_x22[5] = lVar1;
          thunk_FUN_040ec700(unaff_x22 + 5,lVar1);
          lVar1 = *(long *)PTR_DAT_092c1768;
          if (*(int *)(lVar1 + 0xe4) == 0) {
            thunk_FUN_040d65a8();
            lVar1 = *(long *)PTR_DAT_092c1768;
          }
          puVar3 = *(undefined8 **)(lVar1 + 0xb8);
          if (puVar3[2] == 0) {
            if (*(int *)(lVar1 + 0xe4) == 0) {
              thunk_FUN_040d65a8();
              puVar3 = *(undefined8 **)(*(long *)PTR_DAT_092c1768 + 0xb8);
            }
            uVar6 = *puVar3;
            uVar5 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092c1698);
            FUN_0568af90(uVar5,uVar6,*(undefined8 *)PTR_DAT_092c1750,0);
            puVar3 = (undefined8 *)(*(long *)(*(long *)PTR_DAT_092c1768 + 0xb8) + 0x10);
            *puVar3 = uVar5;
            thunk_FUN_040ec700(puVar3,uVar5);
          }
          lVar1 = System_MemoryExtensions__IsTypeComparableAsBytes<char>();
          if ((lVar1 != 0) &&
             (lVar2 = thunk_FUN_040b4e00(lVar1,*(undefined8 *)(*unaff_x22 + 0x40)), lVar2 == 0))
          goto LAB_0727e420;
          if (2 < *(uint *)(unaff_x22 + 3)) {
            unaff_x22[6] = lVar1;
            uVar5 = thunk_FUN_040ec700(unaff_x22 + 6,lVar1);
            lVar1 = FUN_07283670(uVar5,*(undefined8 *)PTR_DAT_0928e5a8,
                                 *(undefined8 *)(unaff_x19 + 0x18));
            if ((lVar1 != 0) &&
               (lVar2 = thunk_FUN_040b4e00(lVar1,*(undefined8 *)(*unaff_x22 + 0x40)), lVar2 == 0))
            goto LAB_0727e420;
            if ((*(uint *)(unaff_x22 + 3) & 0xfffffffc) != 0) {
              unaff_x22[7] = lVar1;
              uVar5 = thunk_FUN_040ec700(unaff_x22 + 7,lVar1);
              lVar1 = FUN_07283670(uVar5,*(undefined8 *)PTR_DAT_092c1778,
                                   *(undefined8 *)(unaff_x19 + 0x20));
              if ((lVar1 != 0) &&
                 (lVar2 = thunk_FUN_040b4e00(lVar1,*(undefined8 *)(*unaff_x22 + 0x40)), lVar2 == 0))
              goto LAB_0727e420;
              if (4 < *(uint *)(unaff_x22 + 3)) {
                unaff_x22[8] = lVar1;
                uVar5 = thunk_FUN_040ec700(unaff_x22 + 8,lVar1);
                lVar1 = FUN_07283670(uVar5,*(undefined8 *)PTR_DAT_0928cfa8,
                                     *(undefined8 *)(unaff_x19 + 0x28));
                if ((lVar1 != 0) &&
                   (lVar2 = thunk_FUN_040b4e00(lVar1,*(undefined8 *)(*unaff_x22 + 0x40)), lVar2 == 0
                   )) goto LAB_0727e420;
                if (5 < *(uint *)(unaff_x22 + 3)) {
                  unaff_x22[9] = lVar1;
                  uVar5 = thunk_FUN_040ec700(unaff_x22 + 9,lVar1);
                  lVar1 = FUN_07283670(uVar5,*(undefined8 *)PTR_DAT_092c1788,
                                       *(undefined8 *)(unaff_x19 + 0x30));
                  if ((lVar1 != 0) &&
                     (lVar2 = thunk_FUN_040b4e00(lVar1,*(undefined8 *)(*unaff_x22 + 0x40)),
                     lVar2 == 0)) goto LAB_0727e420;
                  if (6 < *(uint *)(unaff_x22 + 3)) {
                    unaff_x22[10] = lVar1;
                    uVar5 = thunk_FUN_040ec700(unaff_x22 + 10,lVar1);
                    lVar1 = FUN_07283670(uVar5,*(undefined8 *)PTR_DAT_092c1790,
                                         *(undefined8 *)(unaff_x19 + 0x38));
                    if ((lVar1 != 0) &&
                       (lVar2 = thunk_FUN_040b4e00(lVar1,*(undefined8 *)(*unaff_x22 + 0x40)),
                       lVar2 == 0)) goto LAB_0727e420;
                    if ((*(uint *)(unaff_x22 + 3) & 0xfffffff8) != 0) {
                      unaff_x22[0xb] = lVar1;
                      uVar5 = thunk_FUN_040ec700(unaff_x22 + 0xb,lVar1);
                      lVar1 = FUN_07283670(uVar5,*(undefined8 *)PTR_DAT_092c1798,
                                           *(undefined8 *)(unaff_x19 + 0x40));
                      if ((lVar1 != 0) &&
                         (lVar2 = thunk_FUN_040b4e00(lVar1,*(undefined8 *)(*unaff_x22 + 0x40)),
                         lVar2 == 0)) goto LAB_0727e420;
                      if (8 < *(uint *)(unaff_x22 + 3)) {
                        unaff_x22[0xc] = lVar1;
                        uVar5 = thunk_FUN_040ec700(unaff_x22 + 0xc,lVar1);
                        lVar1 = FUN_07283670(uVar5,*(undefined8 *)PTR_DAT_092a5d10,
                                             *(undefined8 *)(unaff_x19 + 0x48));
                        if ((lVar1 != 0) &&
                           (lVar2 = thunk_FUN_040b4e00(lVar1,*(undefined8 *)(*unaff_x22 + 0x40)),
                           lVar2 == 0)) goto LAB_0727e420;
                        if (9 < *(uint *)(unaff_x22 + 3)) {
                          unaff_x22[0xd] = lVar1;
                          uVar5 = thunk_FUN_040ec700(unaff_x22 + 0xd,lVar1);
                          lVar1 = FUN_07283670(uVar5,*(undefined8 *)PTR_DAT_092c1780,
                                               *(undefined8 *)(unaff_x19 + 0x50));
                          if ((lVar1 != 0) &&
                             (lVar2 = thunk_FUN_040b4e00(lVar1,*(undefined8 *)(*unaff_x22 + 0x40)),
                             lVar2 == 0)) goto LAB_0727e420;
                          if (10 < *(uint *)(unaff_x22 + 3)) {
                            unaff_x22[0xe] = lVar1;
                            thunk_FUN_040ec700(unaff_x22 + 0xe,lVar1);
                            lVar1 = *unaff_x29;
                            if (*(int *)(lVar1 + 0xe4) == 0) {
                              thunk_FUN_040d65a8();
                              lVar1 = *unaff_x29;
                            }
                            uVar6 = *(undefined8 *)(unaff_x19 + 0x58);
                            uVar4 = *(undefined8 *)(*(long *)(lVar1 + 0xb8) + 0x10);
                            uVar5 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092c16a8);
                            FUN_0568af90();
                            uVar5 = System_MemoryExtensions__IsTypeComparableAsBytes<char>
                                              (uVar6,uVar5,*(undefined8 *)PTR_DAT_092c1660);
                            lVar1 = thunk_FUN_040b4efc(*unaff_x28);
                            System_Xml_XmlReader__Close(lVar1,uVar4,uVar5,0);
                            if ((lVar1 != 0) &&
                               (lVar2 = thunk_FUN_040b4e00(lVar1,*(undefined8 *)(*unaff_x22 + 0x40))
                               , lVar2 == 0)) goto LAB_0727e420;
                            if (0xb < *(uint *)(unaff_x22 + 3)) {
                              unaff_x22[0xf] = lVar1;
                              thunk_FUN_040ec700(unaff_x22 + 0xf,lVar1);
                              uVar6 = *(undefined8 *)(unaff_x19 + 0x60);
                              uVar4 = *(undefined8 *)(*(long *)(*unaff_x29 + 0xb8) + 8);
                              uVar5 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092c16a0);
                              FUN_0568af90();
                              uVar5 = System_MemoryExtensions__IsTypeComparableAsBytes<char>
                                                (uVar6,uVar5,*(undefined8 *)PTR_DAT_092c1658);
                              lVar1 = thunk_FUN_040b4efc(*unaff_x28);
                              System_Xml_XmlReader__Close(lVar1,uVar4,uVar5,0);
                              if ((lVar1 != 0) &&
                                 (lVar2 = thunk_FUN_040b4e00(lVar1,*(undefined8 *)
                                                                    (*unaff_x22 + 0x40)), lVar2 == 0
                                 )) goto LAB_0727e420;
                              if (0xc < *(uint *)(unaff_x22 + 3)) {
                                unaff_x22[0x10] = lVar1;
                                thunk_FUN_040ec700(unaff_x22 + 0x10,lVar1);
                                if (unaff_x21 != 0) {
                                  thunk_FUN_07df3248();
                                  return;
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


