/*
FUNCTION_NAME: FUN_0545baec
ENTRY_POINT: 0545baec
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_21;telemetry_or_network_hits_6
*/


void FUN_0545baec(void)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  ulong uVar17;
  
  puVar5 = UnityEngine_UIElements_UITKTextJobSystem_<>c_TypeInfo;
  if ((DAT_066d0e8c & 1) == 0) {
    FUN_02b3c81c(UnityEngine_UIElements_UITKTextJobSystem_<>c_TypeInfo);
    FUN_02b3c81c(UnityEngine_XR_Interaction_Toolkit_Inputs_Simulation_XRDeviceSimulator_TypeInfo);
    FUN_02b3c81c(EmeraldAI_EmeraldInverseKinematics_<>c__DisplayClass29_0_TypeInfo);
    FUN_02b3c81c(
                System_Runtime_Serialization_XmlFormatWriterInterpreter_<>c__DisplayClass25_0_TypeInfo
                );
    FUN_02b3c81c(
                System_Runtime_Serialization_XmlFormatWriterInterpreter_<>c__DisplayClass33_0_TypeInfo
                );
    FUN_02b3c81c(
                System_Runtime_Serialization_XmlObjectSerializerReadContextComplex_TopLevelAssemblyTypeResolver_TypeInfo
                );
    FUN_02b3c81c(
                System_Runtime_Serialization_XmlObjectSerializerReadContextComplex_XmlObjectDataContractTypeInfo_TypeInfo
                );
    FUN_02b3c81c(PTR_DAT_06321df8);
    FUN_02b3c81c(
                System_Runtime_Serialization_XmlObjectSerializerReadContextComplex_XmlObjectDataContractTypeKey_TypeInfo
                );
    DAT_066d0e8c = 1;
  }
  lVar9 = *(long *)puVar5;
  if (*(int *)(lVar9 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
    lVar9 = *(long *)puVar5;
  }
  puVar3 = UnityEngine_XR_Interaction_Toolkit_Inputs_Simulation_XRDeviceSimulator_TypeInfo;
  puVar2 = PTR_DAT_06321df8;
  lVar9 = *(long *)(*(long *)(lVar9 + 0xb8) + 0x2a8);
  if (lVar9 != 0) {
    if (*(uint *)(lVar9 + 0x18) < 0xc) goto LAB_0545c3ac;
    if (*(long *)(lVar9 + 0x78) != 0) {
      uVar15 = *(undefined8 *)(*(long *)(lVar9 + 0x78) + 0x10);
      lVar9 = thunk_FUN_02b79644(*(undefined8 *)
                                  UnityEngine_XR_Interaction_Toolkit_Inputs_Simulation_XRDeviceSimulator_TypeInfo
                                );
      FUN_0558a674(lVar9,uVar15,*(undefined8 *)puVar2,0);
      if (lVar9 != 0) {
        lVar10 = FUN_0545c638(*(undefined8 *)(lVar9 + 0x10));
        uVar15 = FUN_0545c6f8(lVar9,lVar10);
        puVar13 = (undefined8 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x10);
        *puVar13 = uVar15;
        thunk_FUN_02bb0e9c(puVar13,uVar15);
        if (lVar10 != 0) {
          *(undefined8 *)(lVar10 + 0x30) = *(undefined8 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x10)
          ;
          thunk_FUN_02bb0e9c((undefined8 *)(lVar10 + 0x30));
          puVar7 = 
          System_Runtime_Serialization_XmlObjectSerializerReadContextComplex_XmlObjectDataContractTypeKey_TypeInfo
          ;
          puVar6 = 
          System_Runtime_Serialization_XmlObjectSerializerReadContextComplex_XmlObjectDataContractTypeInfo_TypeInfo
          ;
          puVar4 = EmeraldAI_EmeraldInverseKinematics_<>c__DisplayClass29_0_TypeInfo;
          plVar11 = (long *)**(long **)(*(long *)puVar5 + 0xb8);
          if (plVar11 != (long *)0x0) {
            (**(code **)(*plVar11 + 0x2a8))
                      (plVar11,lVar9,(*(long **)(*(long *)puVar5 + 0xb8))[2],
                       *(undefined8 *)(*plVar11 + 0x2b0));
            uVar17 = 0;
            while( true ) {
              lVar9 = *(long *)puVar5;
              if (*(int *)(lVar9 + 0xe4) == 0) {
                thunk_FUN_02b9ad44();
                lVar9 = *(long *)puVar5;
              }
              lVar10 = *(long *)(*(long *)(lVar9 + 0xb8) + 0x2a8);
              if (lVar10 == 0) goto LAB_0545c3a8;
              if ((long)*(int *)(lVar10 + 0x18) <= (long)uVar17) break;
              if (uVar17 != 0xb) {
                if (*(int *)(lVar9 + 0xe4) == 0) {
                  thunk_FUN_02b9ad44();
                  lVar10 = *(long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x2a8);
                  if (lVar10 == 0) goto LAB_0545c3a8;
                }
                if (*(uint *)(lVar10 + 0x18) <= uVar17) goto LAB_0545c3ac;
                lVar9 = *(long *)(lVar10 + uVar17 * 8 + 0x20);
                if (lVar9 == 0) goto LAB_0545c3a8;
                uVar15 = *(undefined8 *)(lVar9 + 0x10);
                lVar9 = thunk_FUN_02b79644(*(undefined8 *)puVar3);
                FUN_0558a674(lVar9,uVar15,*(undefined8 *)puVar2,0);
                if (lVar9 == 0) goto LAB_0545c3a8;
                plVar11 = (long *)FUN_0545c638(*(undefined8 *)(lVar9 + 0x10));
                lVar10 = FUN_0545c6f8(lVar9,plVar11);
                if (plVar11 == (long *)0x0) goto LAB_0545c3a8;
                plVar11[6] = lVar10;
                thunk_FUN_02bb0e9c(plVar11 + 6,lVar10);
                plVar12 = (long *)**(long **)(*(long *)puVar5 + 0xb8);
                if (plVar12 == (long *)0x0) goto LAB_0545c3a8;
                (**(code **)(*plVar12 + 0x2a8))
                          (plVar12,lVar9,lVar10,*(undefined8 *)(*plVar12 + 0x2b0));
                if ((int)plVar11[2] == 0) {
                  lVar9 = *(long *)puVar5;
                  if (*(int *)(lVar9 + 0xe4) == 0) {
                    thunk_FUN_02b9ad44();
                    lVar9 = *(long *)puVar5;
                  }
                  plVar12 = *(long **)(*(long *)(lVar9 + 0xb8) + 8);
                  uVar8 = (**(code **)(*plVar11 + 0x1b8))(plVar11,*(undefined8 *)(*plVar11 + 0x1c0))
                  ;
                  if (plVar12 == (long *)0x0) goto LAB_0545c3a8;
                  if ((lVar10 != 0) &&
                     (lVar9 = thunk_FUN_02b79548(lVar10,*(undefined8 *)(*plVar12 + 0x40)),
                     lVar9 == 0)) goto LAB_0545c3c4;
                  if (*(uint *)(plVar12 + 3) <= uVar8) goto LAB_0545c3ac;
                  plVar12[(long)(int)uVar8 + 4] = lVar10;
                  thunk_FUN_02bb0e9c(plVar12 + (long)(int)uVar8 + 4,lVar10);
                }
              }
              uVar17 = uVar17 + 1;
            }
            uVar17 = 0;
            while( true ) {
              if (*(int *)(lVar9 + 0xe4) == 0) {
                thunk_FUN_02b9ad44();
                lVar9 = *(long *)puVar5;
              }
              puVar13 = *(undefined8 **)(lVar9 + 0xb8);
              lVar10 = puVar13[0x55];
              if (lVar10 == 0) goto LAB_0545c3a8;
              if ((long)*(int *)(lVar10 + 0x18) <= (long)uVar17) break;
              if (uVar17 != 0xb) {
                if (*(int *)(lVar9 + 0xe4) == 0) {
                  thunk_FUN_02b9ad44();
                  puVar13 = *(undefined8 **)(*(long *)puVar5 + 0xb8);
                  lVar10 = puVar13[0x55];
                  if (lVar10 == 0) goto LAB_0545c3a8;
                }
                if (*(uint *)(lVar10 + 0x18) <= uVar17) goto LAB_0545c3ac;
                lVar9 = *(long *)(lVar10 + uVar17 * 8 + 0x20);
                if (lVar9 == 0) goto LAB_0545c3a8;
                plVar11 = (long *)*puVar13;
                uVar16 = *(undefined8 *)(lVar9 + 0x10);
                uVar15 = thunk_FUN_02b79644(*(undefined8 *)puVar3);
                FUN_0558a674(uVar15,uVar16,*(undefined8 *)puVar2,0);
                if (plVar11 == (long *)0x0) goto LAB_0545c3a8;
                plVar11 = (long *)(**(code **)(*plVar11 + 0x308))
                                            (plVar11,uVar15,*(undefined8 *)(*plVar11 + 0x310));
                if (plVar11 != (long *)0x0) {
                  lVar10 = *(long *)puVar4;
                  bVar1 = *(byte *)(lVar10 + 0x130);
                  if ((*(byte *)(*plVar11 + 0x130) < bVar1) ||
                     (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) != lVar10)) {
                    /* WARNING: Subroutine does not return */
                    FUN_02b3ce44(plVar11);
                  }
                }
                lVar10 = *(long *)puVar5;
                if (*(int *)(lVar9 + 0x20) == 0xb) {
                  if (*(int *)(lVar10 + 0xe4) == 0) {
                    thunk_FUN_02b9ad44();
                    lVar10 = *(long *)puVar5;
                  }
                  plVar12 = *(long **)(*(long *)(lVar10 + 0xb8) + 0x10);
                }
                else {
                  if (*(int *)(lVar10 + 0xe4) == 0) {
                    thunk_FUN_02b9ad44();
                    lVar10 = *(long *)puVar5;
                  }
                  lVar14 = (*(undefined8 **)(lVar10 + 0xb8))[0x55];
                  if (lVar14 == 0) goto LAB_0545c3a8;
                  if (*(uint *)(lVar14 + 0x18) <= *(uint *)(lVar9 + 0x20)) goto LAB_0545c3ac;
                  lVar9 = *(long *)(lVar14 + (long)(int)*(uint *)(lVar9 + 0x20) * 8 + 0x20);
                  if (lVar9 == 0) goto LAB_0545c3a8;
                  plVar12 = (long *)**(undefined8 **)(lVar10 + 0xb8);
                  uVar16 = *(undefined8 *)(lVar9 + 0x10);
                  uVar15 = thunk_FUN_02b79644(*(undefined8 *)puVar3);
                  FUN_0558a674(uVar15,uVar16,*(undefined8 *)puVar2,0);
                  if (plVar12 == (long *)0x0) goto LAB_0545c3a8;
                  plVar12 = (long *)(**(code **)(*plVar12 + 0x308))
                                              (plVar12,uVar15,*(undefined8 *)(*plVar12 + 0x310));
                  if (plVar12 != (long *)0x0) {
                    lVar9 = *(long *)puVar4;
                    if ((*(byte *)(*plVar12 + 0x130) < *(byte *)(lVar9 + 0x130)) ||
                       (*(long *)(*(long *)(*plVar12 + 200) + (ulong)*(byte *)(lVar9 + 0x130) * 8 +
                                 -8) != lVar9)) {
                    /* WARNING: Subroutine does not return */
                      FUN_02b3ce44(plVar12,lVar9);
                    }
                  }
                }
                FUN_0545c7dc(plVar11,plVar12);
              }
              lVar9 = *(long *)puVar5;
              uVar17 = uVar17 + 1;
            }
            uVar15 = thunk_FUN_02b79644(*(undefined8 *)puVar3);
            puVar2 = 
            System_Runtime_Serialization_XmlFormatWriterInterpreter_<>c__DisplayClass33_0_TypeInfo;
            FUN_0558a674(uVar15,*(undefined8 *)
                                 System_Runtime_Serialization_XmlObjectSerializerReadContextComplex_TopLevelAssemblyTypeResolver_TypeInfo
                         ,*(undefined8 *)
                           System_Runtime_Serialization_XmlFormatWriterInterpreter_<>c__DisplayClass33_0_TypeInfo
                         ,0);
            lVar9 = *(long *)puVar5;
            if (*(int *)(lVar9 + 0xe4) == 0) {
              thunk_FUN_02b9ad44();
              lVar9 = *(long *)puVar5;
            }
            puVar4 = 
            System_Runtime_Serialization_XmlFormatWriterInterpreter_<>c__DisplayClass25_0_TypeInfo;
            uVar16 = FUN_0545c6f8(uVar15,*(undefined8 *)(*(long *)(lVar9 + 0xb8) + 0x270));
            puVar13 = (undefined8 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x18);
            *puVar13 = uVar16;
            thunk_FUN_02bb0e9c(puVar13,uVar16);
            lVar9 = *(long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x270);
            if (lVar9 != 0) {
              *(undefined8 *)(lVar9 + 0x30) =
                   *(undefined8 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x18);
              thunk_FUN_02bb0e9c();
              FUN_0545c7dc(*(undefined8 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x18),
                           *(undefined8 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x10));
              plVar11 = (long *)**(long **)(*(long *)puVar5 + 0xb8);
              if (plVar11 != (long *)0x0) {
                (**(code **)(*plVar11 + 0x2a8))
                          (plVar11,uVar15,(*(long **)(*(long *)puVar5 + 0xb8))[3],
                           *(undefined8 *)(*plVar11 + 0x2b0));
                plVar11 = *(long **)(*(long *)(*(long *)puVar5 + 0xb8) + 8);
                if (plVar11 != (long *)0x0) {
                  lVar9 = *(long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x18);
                  if ((lVar9 != 0) &&
                     (lVar10 = thunk_FUN_02b79548(lVar9,*(undefined8 *)(*plVar11 + 0x40)),
                     lVar10 == 0)) {
LAB_0545c3c4:
                    uVar15 = thunk_FUN_02b870ec();
                    /* WARNING: Subroutine does not return */
                    FUN_02b3c988(uVar15,0);
                  }
                  if (*(uint *)(plVar11 + 3) < 0xb) goto LAB_0545c3ac;
                  plVar11[0xe] = lVar9;
                  thunk_FUN_02bb0e9c(plVar11 + 0xe,lVar9);
                  uVar15 = thunk_FUN_02b79644(*(undefined8 *)puVar3);
                  FUN_0558a674(uVar15,*(undefined8 *)puVar4,*(undefined8 *)puVar2,0);
                  uVar16 = FUN_0545c6f8(uVar15,*(undefined8 *)
                                                (*(long *)(*(long *)puVar5 + 0xb8) + 0x280));
                  puVar13 = (undefined8 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x20);
                  *puVar13 = uVar16;
                  thunk_FUN_02bb0e9c(puVar13,uVar16);
                  lVar9 = *(long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x280);
                  if (lVar9 != 0) {
                    *(undefined8 *)(lVar9 + 0x30) =
                         *(undefined8 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x20);
                    thunk_FUN_02bb0e9c();
                    FUN_0545c7dc(*(undefined8 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x20),
                                 *(undefined8 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x18));
                    plVar11 = (long *)**(long **)(*(long *)puVar5 + 0xb8);
                    if (plVar11 != (long *)0x0) {
                      (**(code **)(*plVar11 + 0x2a8))
                                (plVar11,uVar15,(*(long **)(*(long *)puVar5 + 0xb8))[4],
                                 *(undefined8 *)(*plVar11 + 0x2b0));
                      plVar11 = *(long **)(*(long *)(*(long *)puVar5 + 0xb8) + 8);
                      if (plVar11 != (long *)0x0) {
                        lVar9 = *(long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x20);
                        if ((lVar9 != 0) &&
                           (lVar10 = thunk_FUN_02b79548(lVar9,*(undefined8 *)(*plVar11 + 0x40)),
                           lVar10 == 0)) goto LAB_0545c3c4;
                        if (*(uint *)(plVar11 + 3) < 0xc) goto LAB_0545c3ac;
                        plVar11[0xf] = lVar9;
                        thunk_FUN_02bb0e9c(plVar11 + 0xf,lVar9);
                        uVar15 = thunk_FUN_02b79644(*(undefined8 *)puVar3);
                        FUN_0558a674(uVar15,*(undefined8 *)puVar7,*(undefined8 *)puVar2,0);
                        uVar16 = FUN_0545c6f8(uVar15,*(undefined8 *)
                                                      (*(long *)(*(long *)puVar5 + 0xb8) + 0x288));
                        puVar13 = (undefined8 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x28);
                        *puVar13 = uVar16;
                        thunk_FUN_02bb0e9c(puVar13,uVar16);
                        lVar9 = *(long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x288);
                        if (lVar9 != 0) {
                          *(undefined8 *)(lVar9 + 0x30) =
                               *(undefined8 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x28);
                          thunk_FUN_02bb0e9c();
                          lVar9 = *(long *)(*(long *)(*(long *)puVar5 + 0xb8) + 8);
                          if (lVar9 != 0) {
                            if (*(uint *)(lVar9 + 0x18) < 0x12) goto LAB_0545c3ac;
                            FUN_0545c7dc(*(undefined8 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x28),
                                         *(undefined8 *)(lVar9 + 0xa8));
                            plVar11 = (long *)**(long **)(*(long *)puVar5 + 0xb8);
                            if (plVar11 != (long *)0x0) {
                              (**(code **)(*plVar11 + 0x2a8))
                                        (plVar11,uVar15,(*(long **)(*(long *)puVar5 + 0xb8))[5],
                                         *(undefined8 *)(*plVar11 + 0x2b0));
                              plVar11 = *(long **)(*(long *)(*(long *)puVar5 + 0xb8) + 8);
                              if (plVar11 != (long *)0x0) {
                                lVar9 = *(long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x28);
                                if ((lVar9 != 0) &&
                                   (lVar10 = thunk_FUN_02b79548(lVar9,*(undefined8 *)
                                                                       (*plVar11 + 0x40)),
                                   lVar10 == 0)) goto LAB_0545c3c4;
                                if (*(uint *)(plVar11 + 3) < 0x36) goto LAB_0545c3ac;
                                plVar11[0x39] = lVar9;
                                thunk_FUN_02bb0e9c(plVar11 + 0x39,lVar9);
                                uVar15 = thunk_FUN_02b79644(*(undefined8 *)puVar3);
                                FUN_0558a674(uVar15,*(undefined8 *)puVar6,*(undefined8 *)puVar2,0);
                                uVar16 = FUN_0545c6f8(uVar15,*(undefined8 *)
                                                              (*(long *)(*(long *)puVar5 + 0xb8) +
                                                              0x278));
                                puVar13 = (undefined8 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x30);
                                *puVar13 = uVar16;
                                thunk_FUN_02bb0e9c(puVar13,uVar16);
                                lVar9 = *(long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x278);
                                if (lVar9 != 0) {
                                  *(undefined8 *)(lVar9 + 0x30) =
                                       *(undefined8 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x30);
                                  thunk_FUN_02bb0e9c();
                                  lVar9 = *(long *)(*(long *)(*(long *)puVar5 + 0xb8) + 8);
                                  if (lVar9 != 0) {
                                    if (*(uint *)(lVar9 + 0x18) < 0x12) {
LAB_0545c3ac:
                    /* WARNING: Subroutine does not return */
                                      FUN_02b3cacc();
                                    }
                                    FUN_0545c7dc(*(undefined8 *)
                                                  (*(long *)(*(long *)puVar5 + 0xb8) + 0x30),
                                                 *(undefined8 *)(lVar9 + 0xa8));
                                    plVar11 = (long *)**(long **)(*(long *)puVar5 + 0xb8);
                                    if (plVar11 != (long *)0x0) {
                                      (**(code **)(*plVar11 + 0x2a8))
                                                (plVar11,uVar15,
                                                 (*(long **)(*(long *)puVar5 + 0xb8))[6],
                                                 *(undefined8 *)(*plVar11 + 0x2b0));
                                      plVar11 = *(long **)(*(long *)(*(long *)puVar5 + 0xb8) + 8);
                                      if (plVar11 != (long *)0x0) {
                                        lVar9 = *(long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x30);
                                        if ((lVar9 != 0) &&
                                           (lVar10 = thunk_FUN_02b79548(lVar9,*(undefined8 *)
                                                                               (*plVar11 + 0x40)),
                                           lVar10 == 0)) goto LAB_0545c3c4;
                                        if (0x36 < *(uint *)(plVar11 + 3)) {
                                          plVar11[0x3a] = lVar9;
                                          thunk_FUN_02bb0e9c(plVar11 + 0x3a,lVar9);
                                          return;
                                        }
                                        goto LAB_0545c3ac;
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
            }
          }
        }
      }
    }
  }
LAB_0545c3a8:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


