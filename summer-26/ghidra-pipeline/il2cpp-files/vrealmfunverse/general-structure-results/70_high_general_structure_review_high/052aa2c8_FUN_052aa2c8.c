/*
FUNCTION_NAME: FUN_052aa2c8
ENTRY_POINT: 052aa2c8
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_file_logging_hits_5;telemetry_or_network_hits_2;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x052ab1e4) */
/* WARNING: Removing unreachable block (ram,0x052aad54) */
/* WARNING: Removing unreachable block (ram,0x052ab23c) */
/* WARNING: Removing unreachable block (ram,0x052ab05c) */
/* WARNING: Removing unreachable block (ram,0x052ab060) */
/* WARNING: Removing unreachable block (ram,0x052ab1c0) */
/* WARNING: Removing unreachable block (ram,0x052ab37c) */
/* WARNING: Removing unreachable block (ram,0x052aab78) */
/* WARNING: Removing unreachable block (ram,0x052aab7c) */
/* WARNING: Removing unreachable block (ram,0x052ab230) */
/* WARNING: Removing unreachable block (ram,0x052aac6c) */

void FUN_052aa2c8(long param_1,undefined8 param_2,uint param_3)

{
  undefined4 uVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  uint uVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  long *plVar13;
  undefined8 *puVar14;
  long *plVar15;
  long *plVar16;
  long lVar17;
  long lVar18;
  int *piVar19;
  undefined8 uVar20;
  long lVar21;
  undefined8 uVar22;
  long lVar23;
  long *local_d8;
  long **pplStack_d0;
  long *local_c8;
  long local_c0;
  undefined8 *local_b8;
  long *local_b0;
  long **pplStack_a8;
  long *local_a0;
  long local_90;
  long *local_88;
  long *local_80;
  long **pplStack_78;
  long *local_70;
  undefined8 local_68;
  
  puVar3 = PTR_DAT_0631f148;
  if ((DAT_066d0001 & 1) == 0) {
    FUN_02b3c81c(UnityEngine_XR_Hands_Analytics_XRHandFeatureUsageData_TypeInfo);
    FUN_02b3c81c(TMPro_ColorTween_var);
    FUN_02b3c81c(UnityEngine_XR_Interaction_Toolkit_UI_XRUIToolkitHandler_TypeInfo);
    FUN_02b3c81c(PTR_DAT_0631f148);
    FUN_02b3c81c(System_Drawing_Color_var);
    FUN_02b3c81c(UnityEngine_XR_Interaction_Toolkit_Interactables_XRGrabInteractable_TypeInfo);
    FUN_02b3c81c(System_Xml_Serialization_XmlElementEventArgs_TypeInfo);
    FUN_02b3c81c(UnityEngine_Rendering_XRGraphicsAutomatedTests_TypeInfo);
    FUN_02b3c81c(Newtonsoft_Json_Converters_XmlElementWrapper_TypeInfo);
    FUN_02b3c81c(UnityEngine_InputSystem_XR_XRHMD_TypeInfo);
    FUN_02b3c81c(System_Xml_XmlEncodedRawTextWriter_TypeInfo);
    FUN_02b3c81c(UnityEngine_XR_Hands_Gestures_XRFingerShapeConfiguration_TypeInfo);
    FUN_02b3c81c(PTR_DAT_06312f78);
    FUN_02b3c81c(PTR_DAT_06312f90);
    FUN_02b3c81c(Mono_Security_X509_X509Stores_TypeInfo);
    FUN_02b3c81c(UnityEngine_XR_Hands_XRHand_TypeInfo);
    FUN_02b3c81c(System_Xml_XmlEncodedRawTextWriterIndent_TypeInfo);
    FUN_02b3c81c(UnityEngine_XR_Hands_Gestures_XRHandAlignmentCondition_TypeInfo);
    FUN_02b3c81c(
                UnityEngine_XR_Interaction_Toolkit_Inputs_Simulation_XRInteractionSimulator_TypeInfo
                );
    FUN_02b3c81c(
                System_Security_Cryptography_X509Certificates_X509SubjectKeyIdentifierExtension_TypeInfo
                );
    FUN_02b3c81c(UnityEngine_InputSystem_XR_XRLayoutBuilder_TypeInfo);
    FUN_02b3c81c(System_Xml_Linq_XAttribute_TypeInfo);
    FUN_02b3c81c(UnityEngine_Experimental_Rendering_XRLayoutStack_TypeInfo);
    FUN_02b3c81c(System_Xml_XmlEntity_TypeInfo);
    DAT_066d0001 = 1;
  }
  lVar9 = *(long *)puVar3;
  local_70 = (long *)0x0;
  local_68 = 0;
  local_80 = (long *)0x0;
  pplStack_78 = (long **)0x0;
  local_90 = 0;
  local_88 = (long *)0x0;
  local_b0 = (long *)0x0;
  pplStack_a8 = (long **)0x0;
  local_a0 = (long *)0x0;
  if (*(int *)(lVar9 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
    lVar9 = *(long *)puVar3;
  }
  puVar3 = System_Drawing_Color_var;
  if (**(long **)(lVar9 + 0xb8) != 0) {
    local_68 = FUN_03194260(**(long **)(lVar9 + 0xb8),*(undefined8 *)System_Xml_XmlEntity_TypeInfo,
                            *(undefined4 *)(param_1 + 0x220),param_3 & 1,
                            *(undefined8 *)
                             UnityEngine_XR_Interaction_Toolkit_UI_XRUIToolkitHandler_TypeInfo);
    local_b8 = &local_68;
    local_c0 = 0;
    lVar9 = thunk_FUN_02b79644(*(undefined8 *)puVar3);
    System_Xml_XmlDictionaryReader__ReadElementContentAsBase64(lVar9,0);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    uVar1 = *(undefined4 *)(param_1 + 0x21c);
    FUN_052bc1d0(lVar9,param_2,param_3 & 1,0);
    lVar21 = *(long *)(lVar9 + 0x70);
    uVar10 = FUN_04c09ac4(*(undefined8 *)(param_1 + 0x90),0);
    if (((uVar10 & 1) == 0) || (uVar10 = FUN_04c09ac4(lVar21,0), (uVar10 & 1) == 0)) {
      uVar10 = FUN_04c09ac4(*(undefined8 *)(param_1 + 0x90),0);
      if ((uVar10 & 1) == 0) {
        uVar22 = FUN_05297094(param_1);
        uVar10 = FUN_04c09ac4(uVar22,0);
        lVar12 = *(long *)(lVar9 + 0x28);
        if ((uVar10 & 1) == 0) {
          uVar11 = *(undefined8 *)(param_1 + 0x90);
          uVar22 = FUN_05297094(param_1);
          if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02b3cac4();
          }
          lVar12 = FUN_052d7224(lVar12,uVar11,uVar22,0);
        }
        else {
          if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02b3cac4();
          }
          iVar8 = FUN_052de94c(lVar12,*(undefined8 *)(param_1 + 0x90),0);
          if (iVar8 < 0) goto LAB_052ab1f4;
          if (*(long *)(lVar9 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02b3cac4();
          }
          lVar12 = FUN_052de728(*(long *)(lVar9 + 0x28),iVar8,0);
        }
      }
      else {
        if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        uVar22 = **(undefined8 **)(*(long *)(PTR_DAT_06312310 + 0x90) + 0xb8);
        uVar7 = FUN_04c0eca4(lVar21,0x3a,0);
        if (-1 < (int)uVar7) {
          uVar22 = FUN_04c0c288(lVar21,0,uVar7,0);
        }
        uVar11 = FUN_04c0c288(lVar21,uVar7 + 1,*(int *)(lVar21 + 0x10) + ~uVar7,0);
        if (*(long *)(lVar9 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4(0,uVar11);
        }
        lVar12 = FUN_052d7224(*(long *)(lVar9 + 0x28),uVar11,uVar22,0);
      }
      puVar4 = System_Xml_Linq_XAttribute_TypeInfo;
      if (lVar12 == 0) {
LAB_052ab1f4:
        uVar10 = FUN_04c09ac4(*(undefined8 *)(param_1 + 0x90),0);
        if ((uVar10 & 1) == 0) {
          lVar9 = FUN_05297094(param_1);
          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02b3cac4();
          }
          if (*(int *)(lVar9 + 0x10) < 1) {
            lVar21 = *(long *)(param_1 + 0x90);
          }
          else {
            uVar22 = FUN_05297094(param_1);
            uVar20 = *(undefined8 *)(param_1 + 0x90);
            uVar11 = thunk_FUN_02ba3594(PTR_DAT_0631cdf0);
            lVar21 = FUN_04c0a5c4(uVar22,uVar11,uVar20,0);
          }
        }
        uVar22 = FUN_052b8758(lVar21,0);
        uVar11 = thunk_FUN_02ba3594(System_Xml_XmlEntityReference_TypeInfo);
                    /* WARNING: Subroutine does not return */
        FUN_02b3c988(uVar22,uVar11);
      }
      *(undefined4 *)(lVar12 + 0x21c) = uVar1;
      lVar21 = thunk_FUN_02b79644(*(undefined8 *)puVar4);
      FUN_037a5cd0(lVar21,*(undefined8 *)
                           System_Security_Cryptography_X509Certificates_X509SubjectKeyIdentifierExtension_TypeInfo
                  );
      if (lVar21 == 0) {
System_Xml_XmlBaseWriter__FlushTrailBytes:
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      lVar17 = *(long *)(lVar21 + 0x10);
      lVar18 = *(long *)Mono_Security_X509_X509Stores_TypeInfo;
      *(int *)(lVar21 + 0x1c) = *(int *)(lVar21 + 0x1c) + 1;
      if (lVar17 == 0) goto System_Xml_XmlBaseWriter__FlushTrailBytes;
      uVar7 = *(uint *)(lVar21 + 0x18);
      if (uVar7 < *(uint *)(lVar17 + 0x18)) {
        *(uint *)(lVar21 + 0x18) = uVar7 + 1;
        plVar13 = (long *)(lVar17 + (long)(int)uVar7 * 8 + 0x20);
        *plVar13 = lVar12;
        thunk_FUN_02bb0e9c(plVar13,lVar12);
      }
      else {
        FUN_037a6538(lVar21,lVar12,
                     *(undefined8 *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
      }
      FUN_052a8000(param_1,lVar12,lVar21);
      lVar17 = thunk_FUN_02b79644(*(undefined8 *)
                                   UnityEngine_Experimental_Rendering_XRLayoutStack_TypeInfo);
      uVar22 = FUN_037a5cd0(lVar17,*(undefined8 *)
                                    UnityEngine_XR_Interaction_Toolkit_Inputs_Simulation_XRInteractionSimulator_TypeInfo
                           );
      FUN_052ab7e4(uVar22,lVar21,lVar17);
      if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      if (*(int *)(lVar17 + 0x18) == 0) {
        plVar13 = *(long **)(param_1 + 0x40);
        if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        iVar8 = (**(code **)(*plVar13 + 0x1c8))(plVar13,*(undefined8 *)(*plVar13 + 0x1d0));
        if (((iVar8 == 0) && (FUN_05298958(lVar12,param_1,0,0), *(long *)(param_1 + 0x20) == 0)) &&
           (plVar13 = (long *)(param_1 + 0x98), *plVar13 == 0)) {
          lVar9 = FUN_05297094(lVar12);
          *plVar13 = lVar9;
          thunk_FUN_02bb0e9c(plVar13);
        }
      }
      else {
        uVar10 = FUN_04c09ac4(*(undefined8 *)(param_1 + 0x90),0);
        if ((uVar10 & 1) != 0) {
          FUN_0529e794(param_1,*(undefined8 *)(lVar12 + 0x90));
          uVar22 = FUN_05297094(lVar12);
          uVar10 = FUN_04c09ac4(uVar22,0);
          if ((uVar10 & 1) == 0) {
            uVar22 = FUN_05297094(lVar12);
            FUN_052995e0(param_1,uVar22);
          }
        }
        lVar18 = *(long *)(param_1 + 0x20);
        if (lVar18 == 0) {
          uVar22 = *(undefined8 *)(lVar9 + 0x40);
          lVar18 = thunk_FUN_02b79644(*(undefined8 *)puVar3);
          FUN_052b999c(lVar18,uVar22,0);
          if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02b3cac4();
          }
          FUN_052be1f8(lVar18,*(undefined8 *)(lVar9 + 0x60),*(undefined1 *)(lVar9 + 0x68),0);
          FUN_052bcc78(lVar18,*(undefined1 *)(lVar9 + 0x59),0);
          FUN_052bdaa8(lVar18,*(undefined8 *)(lVar9 + 0x50),0);
          *(undefined8 *)(lVar18 + 0x70) = *(undefined8 *)(lVar9 + 0x70);
          thunk_FUN_02bb0e9c();
          FUN_052b9b28(lVar18,*(undefined4 *)(lVar9 + 0x78),0);
          if (*(long *)(lVar18 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02b3cac4();
          }
          FUN_052deef4(*(long *)(lVar18 + 0x28),param_1,0);
          lVar18 = *(long *)(param_1 + 0x20);
        }
        FUN_052a178c(param_1,lVar12,lVar18,0);
        FUN_037a6fdc(&local_d8,lVar21,
                     *(undefined8 *)UnityEngine_XR_Hands_Gestures_XRHandAlignmentCondition_TypeInfo)
        ;
        puVar6 = UnityEngine_XR_Hands_Analytics_XRHandFeatureUsageData_TypeInfo;
        puVar5 = UnityEngine_XR_Hands_XRHand_TypeInfo;
        puVar4 = UnityEngine_XR_Hands_Gestures_XRFingerShapeConfiguration_TypeInfo;
        puVar3 = PTR_DAT_06312f90;
        pplStack_78 = pplStack_d0;
        local_80 = local_d8;
        local_70 = local_c8;
        while (uVar10 = FUN_0472eaf4(&local_80,
                                     *(undefined8 *)
                                      UnityEngine_Rendering_XRGraphicsAutomatedTests_TypeInfo),
              plVar13 = local_70, (uVar10 & 1) != 0) {
          if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02b3cac4();
          }
          if (local_70 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02b3cac4();
          }
          lVar12 = *(long *)(*(long *)(param_1 + 0x20) + 0x28);
          lVar18 = local_70[0x12];
          uVar22 = FUN_05297094(local_70);
          if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02b3cac4();
          }
          lVar12 = FUN_052d7224(lVar12,lVar18,uVar22,0);
          lVar18 = *(long *)(lVar9 + 0x28);
          lVar23 = plVar13[0x12];
          uVar22 = FUN_05297094(plVar13);
          if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02b3cac4();
          }
          lVar18 = FUN_052d7224(lVar18,lVar23,uVar22,0);
          if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02b3cac4();
          }
          plVar13 = *(long **)(lVar18 + 0x48);
          if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02b3cac4();
          }
          plVar13 = (long *)(**(code **)(*plVar13 + 0x1e8))
                                      (plVar13,*(undefined8 *)(*plVar13 + 0x1f0));
          pplStack_d0 = &local_88;
          local_d8 = (long *)0x0;
          local_c8 = &local_90;
joined_r0x052aa8b4:
          local_88 = plVar13;
          if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02b3cac4();
          }
          lVar18 = *plVar13;
          uVar10 = (ulong)*(ushort *)(lVar18 + 0x12e);
          if (uVar10 != 0) {
            piVar19 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
            do {
              if (*(long *)(piVar19 + -2) == *(long *)puVar3) {
                puVar14 = (undefined8 *)(lVar18 + (long)*piVar19 * 0x10 + 0x138);
                goto LAB_052aa904;
              }
              uVar10 = uVar10 - 1;
              piVar19 = piVar19 + 4;
            } while (uVar10 != 0);
          }
          puVar14 = (undefined8 *)FUN_02b7654c(plVar13,*(long *)puVar3,0);
LAB_052aa904:
          uVar10 = (*(code *)*puVar14)(plVar13,puVar14[1]);
          plVar13 = local_88;
          if ((uVar10 & 1) != 0) {
            if (local_88 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02b3cac4();
            }
            lVar18 = *local_88;
            uVar10 = (ulong)*(ushort *)(lVar18 + 0x12e);
            if (uVar10 != 0) {
              piVar19 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
              do {
                if (*(long *)(piVar19 + -2) == *(long *)puVar3) {
                  puVar14 = (undefined8 *)(lVar18 + (long)(*piVar19 + 1) * 0x10 + 0x138);
                  goto LAB_052aa96c;
                }
                uVar10 = uVar10 - 1;
                piVar19 = piVar19 + 4;
              } while (uVar10 != 0);
            }
            puVar14 = (undefined8 *)FUN_02b7654c(local_88,*(long *)puVar3,1);
LAB_052aa96c:
            plVar15 = (long *)(*(code *)*puVar14)(plVar13,puVar14[1]);
            plVar13 = local_88;
            if (plVar15 != (long *)0x0) {
              lVar18 = *plVar15;
              bVar2 = *(byte *)(*(long *)puVar6 + 0x130);
              if ((*(byte *)(lVar18 + 0x130) < bVar2) ||
                 (*(long *)(*(long *)(lVar18 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)puVar6)) {
                    /* WARNING: Subroutine does not return */
                FUN_02b3ce44(plVar15);
              }
              lVar23 = *(long *)puVar4;
              bVar2 = *(byte *)(lVar23 + 0x130);
              if ((bVar2 <= *(byte *)(lVar18 + 0x130)) &&
                 (*(long *)(*(long *)(lVar18 + 200) + (ulong)bVar2 * 8 + -8) == lVar23)) {
                lVar18 = (**(code **)(lVar18 + 0x1b8))(plVar15,*(undefined8 *)(lVar18 + 0x1c0));
                lVar23 = (**(code **)(*plVar15 + 0x2c8))(plVar15,*(undefined8 *)(*plVar15 + 0x2d0));
                plVar13 = local_88;
                if (lVar18 != lVar23) {
                  uVar22 = (**(code **)(*plVar15 + 0x1b8))
                                     (plVar15,*(undefined8 *)(*plVar15 + 0x1c0));
                  uVar10 = FUN_037a68d4(lVar21,uVar22,*(undefined8 *)puVar5);
                  plVar13 = local_88;
                  if ((uVar10 & 1) != 0) {
                    uVar22 = (**(code **)(*plVar15 + 0x2c8))
                                       (plVar15,*(undefined8 *)(*plVar15 + 0x2d0));
                    uVar10 = FUN_037a68d4(lVar21,uVar22,*(undefined8 *)puVar5);
                    plVar13 = local_88;
                    if ((uVar10 & 1) != 0) {
                      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_02b3cac4();
                      }
                      plVar15 = (long *)(**(code **)(*plVar15 + 0x1e8))
                                                  (plVar15,*(undefined8 *)(lVar12 + 0x20),
                                                   *(undefined8 *)(*plVar15 + 0x1f0));
                      if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                        FUN_02b3cac4();
                      }
                      lVar18 = *(long *)puVar4;
                      lVar23 = *plVar15;
                      bVar2 = *(byte *)(lVar18 + 0x130);
                      if ((*(byte *)(lVar23 + 0x130) < bVar2) ||
                         (*(long *)(*(long *)(lVar23 + 200) + (ulong)bVar2 * 8 + -8) != lVar18)) {
                    /* WARNING: Subroutine does not return */
                        FUN_02b3ce44(plVar15);
                      }
                      lVar18 = *(long *)(lVar12 + 0x48);
                      uVar22 = (**(code **)(lVar23 + 0x178))
                                         (plVar15,*(undefined8 *)(lVar23 + 0x180));
                      if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_02b3cac4(uVar22,uVar22);
                      }
                      uVar10 = FUN_052ce640(lVar18,uVar22,0);
                      plVar13 = local_88;
                      if ((uVar10 & 1) == 0) {
                        if (*(long *)(lVar12 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_02b3cac4();
                        }
                        FUN_052cd270(*(long *)(lVar12 + 0x48),plVar15,0);
                        plVar13 = local_88;
                      }
                    }
                  }
                }
              }
            }
            goto joined_r0x052aa8b4;
          }
          plVar13 = (long *)thunk_FUN_02b79548(local_88,*(undefined8 *)PTR_DAT_06312f78);
          *local_c8 = (long)plVar13;
          if (plVar13 != (long *)0x0) {
            lVar12 = *plVar13;
            uVar10 = (ulong)*(ushort *)(lVar12 + 0x12e);
            if (uVar10 != 0) {
              piVar19 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
              do {
                if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_06312f78) {
                  puVar14 = (undefined8 *)(lVar12 + (long)*piVar19 * 0x10 + 0x138);
                  goto LAB_052aab60;
                }
                uVar10 = uVar10 - 1;
                piVar19 = piVar19 + 4;
              } while (uVar10 != 0);
            }
            puVar14 = (undefined8 *)FUN_02b7654c(plVar13,*(long *)PTR_DAT_06312f78,0);
LAB_052aab60:
            (*(code *)*puVar14)(plVar13,puVar14[1]);
          }
        }
        FUN_0472eaf0(&local_80,
                     *(undefined8 *)
                      UnityEngine_XR_Interaction_Toolkit_Interactables_XRGrabInteractable_TypeInfo);
        FUN_037a6fdc(&local_d8,lVar17,
                     *(undefined8 *)System_Xml_XmlEncodedRawTextWriterIndent_TypeInfo);
        puVar4 = Newtonsoft_Json_Converters_XmlElementWrapper_TypeInfo;
        pplStack_a8 = pplStack_d0;
        local_b0 = local_d8;
        local_a0 = local_c8;
        local_d8 = (long *)0x0;
        pplStack_d0 = &local_b0;
        while (uVar10 = FUN_0472eaf4(&local_b0,*(undefined8 *)puVar4), plVar13 = local_a0,
              (uVar10 & 1) != 0) {
          if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02b3cac4();
          }
          if (local_a0 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02b3cac4();
          }
          plVar15 = *(long **)(*(long *)(param_1 + 0x20) + 0x30);
          uVar22 = (**(code **)(*local_a0 + 0x1c8))(local_a0,*(undefined8 *)(*local_a0 + 0x1d0));
          if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02b3cac4(uVar22,uVar22);
          }
          uVar10 = (**(code **)(*plVar15 + 0x248))(plVar15,uVar22,*(undefined8 *)(*plVar15 + 0x250))
          ;
          if ((uVar10 & 1) == 0) {
            lVar9 = *(long *)(param_1 + 0x20);
            if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02b3cac4();
            }
            lVar12 = *(long *)(lVar9 + 0x30);
            uVar22 = FUN_052d6bf8(plVar13,lVar9,0);
            if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02b3cac4(uVar22,uVar22);
            }
            FUN_052d75cc(lVar12,uVar22,0);
          }
        }
        FUN_0472eaf0(&local_b0,*(undefined8 *)System_Xml_Serialization_XmlElementEventArgs_TypeInfo)
        ;
        FUN_037a6fdc(&local_d8,lVar21,
                     *(undefined8 *)UnityEngine_XR_Hands_Gestures_XRHandAlignmentCondition_TypeInfo)
        ;
        puVar4 = TMPro_ColorTween_var;
        pplStack_78 = pplStack_d0;
        local_80 = local_d8;
        local_70 = local_c8;
        while (uVar10 = FUN_0472eaf4(&local_80,
                                     *(undefined8 *)
                                      UnityEngine_Rendering_XRGraphicsAutomatedTests_TypeInfo),
              plVar13 = local_70, (uVar10 & 1) != 0) {
          if (local_70 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02b3cac4();
          }
          plVar15 = (long *)local_70[8];
          if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02b3cac4();
          }
          plVar15 = (long *)(**(code **)(*plVar15 + 0x1e8))
                                      (plVar15,*(undefined8 *)(*plVar15 + 0x1f0));
          pplStack_d0 = &local_88;
          local_d8 = (long *)0x0;
          local_c8 = &local_90;
joined_r0x052aaddc:
          local_88 = plVar15;
          if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02b3cac4();
          }
          lVar9 = *plVar15;
          uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar10 != 0) {
            piVar19 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar19 + -2) == *(long *)puVar3) {
                puVar14 = (undefined8 *)(lVar9 + (long)*piVar19 * 0x10 + 0x138);
                goto LAB_052aae2c;
              }
              uVar10 = uVar10 - 1;
              piVar19 = piVar19 + 4;
            } while (uVar10 != 0);
          }
          puVar14 = (undefined8 *)FUN_02b7654c(plVar15,*(long *)puVar3,0);
LAB_052aae2c:
          uVar10 = (*(code *)*puVar14)(plVar15,puVar14[1]);
          plVar15 = local_88;
          if ((uVar10 & 1) != 0) {
            if (local_88 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02b3cac4();
            }
            lVar9 = *local_88;
            uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
            if (uVar10 != 0) {
              piVar19 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(long *)(piVar19 + -2) == *(long *)puVar3) {
                  puVar14 = (undefined8 *)(lVar9 + (long)(*piVar19 + 1) * 0x10 + 0x138);
                  goto LAB_052aae94;
                }
                uVar10 = uVar10 - 1;
                piVar19 = piVar19 + 4;
              } while (uVar10 != 0);
            }
            puVar14 = (undefined8 *)FUN_02b7654c(local_88,*(long *)puVar3,1);
LAB_052aae94:
            plVar16 = (long *)(*(code *)*puVar14)(plVar15,puVar14[1]);
            if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02b3cac4();
            }
            bVar2 = *(byte *)(*(long *)puVar4 + 0x130);
            if ((*(byte *)(*plVar16 + 0x130) < bVar2) ||
               (*(long *)(*(long *)(*plVar16 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)puVar4)) {
                    /* WARNING: Subroutine does not return */
              FUN_02b3ce44(plVar16);
            }
            lVar9 = FUN_052b0930(plVar16,0);
            if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02b3cac4();
            }
            if (*(int *)(lVar9 + 0x10) != 0) {
              if (plVar16[0xb] == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02b3cac4();
              }
              lVar9 = *(long *)(plVar16[0xb] + 0x40);
              if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02b3cac4();
              }
              uVar7 = *(uint *)(lVar9 + 0x18);
              if (0 < (int)uVar7) {
                lVar12 = 0;
                do {
                  if (uVar7 <= (uint)lVar12) {
                    /* WARNING: Subroutine does not return */
                    FUN_02b3cacc();
                  }
                  lVar17 = *(long *)(lVar9 + 0x20 + lVar12 * 8);
                  if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_02b3cac4();
                  }
                  uVar10 = FUN_037a68d4(lVar21,*(undefined8 *)(lVar17 + 0x78),*(undefined8 *)puVar5)
                  ;
                  plVar15 = local_88;
                  if ((uVar10 & 1) == 0) goto joined_r0x052aaddc;
                  uVar7 = *(uint *)(lVar9 + 0x18);
                  lVar12 = lVar12 + 1;
                } while ((int)lVar12 < (int)uVar7);
              }
            }
            if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02b3cac4();
            }
            lVar9 = *(long *)(*(long *)(param_1 + 0x20) + 0x28);
            lVar12 = plVar13[0x12];
            uVar22 = FUN_05297094(plVar13);
            if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02b3cac4();
            }
            lVar9 = FUN_052d7224(lVar9,lVar12,uVar22,0);
            if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02b3cac4();
            }
            if (*(long *)(lVar9 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02b3cac4();
            }
            lVar9 = FUN_052d01e8(*(long *)(lVar9 + 0x40),plVar16[6],0);
            uVar22 = FUN_052b0930(plVar16,0);
            if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02b3cac4(uVar22,uVar22);
            }
            FUN_052ad54c(lVar9,uVar22,0);
            plVar15 = local_88;
            goto joined_r0x052aaddc;
          }
          plVar13 = (long *)thunk_FUN_02b79548(local_88,*(undefined8 *)PTR_DAT_06312f78);
          *local_c8 = (long)plVar13;
          if (plVar13 != (long *)0x0) {
            lVar9 = *plVar13;
            uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
            if (uVar10 != 0) {
              piVar19 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_06312f78) {
                  puVar14 = (undefined8 *)(lVar9 + (long)*piVar19 * 0x10 + 0x138);
                  goto LAB_052ab044;
                }
                uVar10 = uVar10 - 1;
                piVar19 = piVar19 + 4;
              } while (uVar10 != 0);
            }
            puVar14 = (undefined8 *)FUN_02b7654c(plVar13,*(long *)PTR_DAT_06312f78,0);
LAB_052ab044:
            (*(code *)*puVar14)(plVar13,puVar14[1]);
          }
        }
        FUN_0472eaf0(&local_80,
                     *(undefined8 *)
                      UnityEngine_XR_Interaction_Toolkit_Interactables_XRGrabInteractable_TypeInfo);
      }
    }
    puVar3 = PTR_DAT_0631f148;
    lVar9 = *(long *)PTR_DAT_0631f148;
    if (*(int *)(lVar9 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      lVar9 = *(long *)puVar3;
    }
    if (**(long **)(lVar9 + 0xb8) != 0) {
      FUN_052cc644(**(long **)(lVar9 + 0xb8),*local_b8,0);
      if (local_c0 == 0) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_02b3cabc();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


