/*
FUNCTION_NAME: FUN_05948034
ENTRY_POINT: 05948034
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_21;telemetry_or_network_hits_14
*/


/* WARNING: Removing unreachable block (ram,0x0594941c) */
/* WARNING: Removing unreachable block (ram,0x05948838) */
/* WARNING: Removing unreachable block (ram,0x059491c0) */
/* WARNING: Removing unreachable block (ram,0x059494b0) */
/* WARNING: Removing unreachable block (ram,0x059494e8) */

void FUN_05948034(long param_1,long param_2,undefined8 param_3)

{
  byte bVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined8 *puVar13;
  long *plVar14;
  long lVar15;
  undefined8 uVar16;
  long *plVar17;
  long *plVar18;
  ulong uVar19;
  int *piVar20;
  undefined8 uVar21;
  long *plVar22;
  undefined8 local_68;
  
  if ((DAT_06dc1096 & 1) == 0) {
    FUN_02d965b8(PTR_DAT_069fc178);
    FUN_02d965b8(PTR_DAT_06a1d5c0);
    FUN_02d965b8(
                System_Collections_Generic_Dictionary<GameObject,_OVRPassthroughLayer_PassthroughMeshInstance>_TypeInfo
                );
    FUN_02d965b8(System_Xml_Serialization_XmlChoiceIdentifierAttribute_TypeInfo);
    FUN_02d965b8(System_Runtime_Serialization_XmlObjectSerializer_TypeInfo);
    FUN_02d965b8(PTR_DAT_06a0ad68);
    FUN_02d965b8(PTR_DAT_069fbff0);
    FUN_02d965b8(PTR_DAT_069fbff8);
    FUN_02d965b8(OVR_OpenVR_IVROverlay__SetOverlayTransformAbsolute_TypeInfo);
    FUN_02d965b8(OVR_OpenVR_IVRApplications__GetApplicationSupportedMimeTypes_TypeInfo);
    FUN_02d965b8(OVR_OpenVR_IVRApplications__GetApplicationsErrorNameFromEnum_TypeInfo);
    FUN_02d965b8(OVR_OpenVR_IVROverlay__GetOverlayAlpha_TypeInfo);
    FUN_02d965b8(OVR_OpenVR_IVROverlay__FindOverlay_TypeInfo);
    FUN_02d965b8(OVR_OpenVR_IVRApplications__GetApplicationLaunchArguments_TypeInfo);
    FUN_02d965b8(OVR_OpenVR_IVRApplications__GetApplicationsThatSupportMimeType_TypeInfo);
    FUN_02d965b8(System_Xml_Schema_XmlSchemaComplexContentExtension_TypeInfo);
    FUN_02d965b8(OVR_OpenVR_IVROverlay__SetOverlayTransformOverlayRelative_TypeInfo);
    FUN_02d965b8(OVR_OpenVR_IVROverlay__GetOverlayDualAnalogTransform_TypeInfo);
    FUN_02d965b8(System_Xml_Schema_XmlSchemaAny_TypeInfo);
    FUN_02d965b8(PTR_DAT_06a115a0);
    FUN_02d965b8(OVR_OpenVR_IVROverlay__SetOverlayTransformTrackedDeviceComponent_TypeInfo);
    FUN_02d965b8(PTR_DAT_06a1ac98);
    FUN_02d965b8(PTR_DAT_06a115b0);
    FUN_02d965b8(OVR_OpenVR_IVROverlay__ShowKeyboard_TypeInfo);
    FUN_02d965b8(
                System_Linq_Expressions_Interpreter_GreaterThanOrEqualInstruction_GreaterThanOrEqualInt64_TypeInfo
                );
    FUN_02d965b8(PTR_DAT_069ff7d0);
    FUN_02d965b8(OVR_OpenVR_IVROverlay__GetOverlayFlag_TypeInfo);
    FUN_02d965b8(OVR_OpenVR_IVROverlay__GetOverlayTransformOverlayRelative_TypeInfo);
    FUN_02d965b8(PTR_DAT_06a1ad28);
    FUN_02d965b8(PTR_DAT_069fba08);
    FUN_02d965b8(Unity_Services_Qos_Http_HttpClientResponse_TypeInfo);
    FUN_02d965b8(PTR_DAT_06a10f28);
    FUN_02d965b8(PTR_DAT_06a0a838);
    FUN_02d965b8(OVR_OpenVR_IVRApplications__GetApplicationsTransitionStateNameFromEnum_TypeInfo);
    FUN_02d965b8(OVR_OpenVR_IVROverlay__SetOverlayTextureBounds_TypeInfo);
    FUN_02d965b8(OVR_OpenVR_IVRChaperoneSetup__GetWorkingPlayAreaRect_TypeInfo);
    DAT_06dc1096 = 1;
  }
  local_68 = 0;
  if (((param_2 != 0) && (*(long *)(param_2 + 0x10) != 0)) &&
     (lVar9 = FUN_058ae3f4(*(long *)(param_2 + 0x10),0), lVar9 != 0)) {
    lVar10 = *(long *)(param_2 + 0x10);
    if (*(int *)(lVar9 + 0x10) == 0) {
      puVar13 = (undefined8 *)PTR_DAT_069fba08;
      if (lVar10 == 0) goto LAB_05949488;
    }
    else {
      if (lVar10 == 0) goto LAB_05949488;
      puVar13 = (undefined8 *)(lVar10 + 0xa0);
    }
    uVar21 = *puVar13;
    plVar22 = *(long **)(param_1 + 0x10);
    uVar11 = FUN_058ae3f4(lVar10,0);
    if (plVar22 != (long *)0x0) {
      (**(code **)(*plVar22 + 0x1c8))
                (plVar22,uVar21,param_3,uVar11,*(undefined8 *)(*plVar22 + 0x1d0));
      if (*(char *)(param_1 + 0x39) != '\0') {
        if (*(long *)(param_2 + 0x10) == 0) goto LAB_05949488;
        lVar9 = *(long *)(param_1 + 0x10);
        uVar11 = *(undefined8 *)(*(long *)(param_2 + 0x10) + 0x90);
        local_68 = *(undefined8 *)(param_2 + 0x30);
        if (*(int *)(*(long *)PTR_DAT_069fc178 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        uVar21 = FUN_0547e2f8(0);
        uVar21 = FUN_054e6bbc(&local_68,uVar21,0);
        uVar11 = FUN_05362cb4(uVar11,uVar21,0);
        puVar5 = OVR_OpenVR_IVROverlay__SetOverlayTextureBounds_TypeInfo;
        puVar3 = System_Xml_Schema_XmlSchemaAny_TypeInfo;
        if (lVar9 == 0) goto LAB_05949488;
        FUN_05b8c558(lVar9,*(undefined8 *)OVR_OpenVR_IVROverlay__SetOverlayTextureBounds_TypeInfo,
                     *(undefined8 *)PTR_DAT_06a1ac98,
                     *(undefined8 *)System_Xml_Schema_XmlSchemaAny_TypeInfo,uVar11,0);
        plVar22 = *(long **)(param_1 + 0x40);
        if (plVar22 == (long *)0x0) goto LAB_05949488;
        lVar9 = *(long *)(param_1 + 0x10);
        plVar22 = (long *)(**(code **)(*plVar22 + 0x2f8))
                                    (plVar22,param_2,*(undefined8 *)(*plVar22 + 0x300));
        if ((plVar22 == (long *)0x0) ||
           (uVar11 = (**(code **)(*plVar22 + 0x168))(plVar22,*(undefined8 *)(*plVar22 + 0x170)),
           lVar9 == 0)) goto LAB_05949488;
        FUN_05b8c558(lVar9,*(undefined8 *)
                            OVR_OpenVR_IVRChaperoneSetup__GetWorkingPlayAreaRect_TypeInfo,
                     *(undefined8 *)
                      OVR_OpenVR_IVRApplications__GetApplicationsThatSupportMimeType_TypeInfo,
                     *(undefined8 *)System_Xml_Schema_XmlSchemaComplexContentExtension_TypeInfo,
                     uVar11,0);
        iVar8 = FUN_058f1658(param_2,0);
        if (iVar8 == 4) {
          if (*(long *)(param_1 + 0x10) == 0) goto LAB_05949488;
          FUN_05b8c558(*(long *)(param_1 + 0x10),*(undefined8 *)puVar5,
                       *(undefined8 *)OVR_OpenVR_IVROverlay__GetOverlayDualAnalogTransform_TypeInfo,
                       *(undefined8 *)puVar3,
                       *(undefined8 *)OVR_OpenVR_IVROverlay__ShowKeyboard_TypeInfo,0);
        }
        iVar8 = FUN_058f1658(param_2,0);
        if (iVar8 == 0x10) {
          if (*(long *)(param_1 + 0x10) == 0) goto LAB_05949488;
          FUN_05b8c558(*(long *)(param_1 + 0x10),*(undefined8 *)puVar5,
                       *(undefined8 *)OVR_OpenVR_IVROverlay__GetOverlayDualAnalogTransform_TypeInfo,
                       *(undefined8 *)puVar3,
                       *(undefined8 *)OVR_OpenVR_IVROverlay__GetOverlayFlag_TypeInfo,0);
        }
        uVar12 = FUN_05947870(param_2);
        if ((uVar12 & 1) != 0) {
          if (*(long *)(param_1 + 0x10) == 0) goto LAB_05949488;
          FUN_05b8c558(*(long *)(param_1 + 0x10),*(undefined8 *)puVar5,
                       *(undefined8 *)
                        OVR_OpenVR_IVRApplications__GetApplicationLaunchArguments_TypeInfo,
                       *(undefined8 *)puVar3,*(undefined8 *)PTR_DAT_069ff7d0,0);
        }
      }
      if ((*(long *)(param_2 + 0x10) != 0) &&
         (plVar22 = *(long **)(*(long *)(param_2 + 0x10) + 0x40), plVar22 != (long *)0x0)) {
        plVar22 = (long *)(**(code **)(*plVar22 + 0x1e8))(plVar22,*(undefined8 *)(*plVar22 + 0x1f0))
        ;
        puVar7 = 
        System_Collections_Generic_Dictionary<GameObject,_OVRPassthroughLayer_PassthroughMeshInstance>_TypeInfo
        ;
        puVar6 = PTR_DAT_06a1d5c0;
        puVar5 = PTR_DAT_069fbff8;
        puVar3 = PTR_DAT_069fba08;
joined_r0x0594848c:
        do {
          do {
            if (plVar22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            lVar10 = *plVar22;
            lVar9 = *(long *)puVar5;
            uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
            if (uVar12 != 0) {
              piVar20 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar20 + -2) == lVar9) {
                  puVar13 = (undefined8 *)(lVar10 + (long)*piVar20 * 0x10 + 0x138);
                  goto LAB_05948500;
                }
                uVar12 = uVar12 - 1;
                piVar20 = piVar20 + 4;
              } while (uVar12 != 0);
            }
            puVar13 = (undefined8 *)FUN_02dd004c(plVar22,lVar9,0);
LAB_05948500:
            uVar12 = (*(code *)*puVar13)(plVar22,puVar13[1]);
            puVar4 = PTR_DAT_069fbff0;
            if ((uVar12 & 1) == 0) {
              plVar22 = (long *)thunk_FUN_02dd3048(plVar22,*(undefined8 *)PTR_DAT_069fbff0);
              if (plVar22 == (long *)0x0) goto LAB_0594882c;
              lVar9 = *plVar22;
              uVar12 = (ulong)*(ushort *)(lVar9 + 0x12e);
              if (uVar12 == 0) goto LAB_05948804;
              piVar20 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              goto LAB_059487ec;
            }
            if (plVar22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            lVar10 = *plVar22;
            lVar9 = *(long *)puVar5;
            uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
            if (uVar12 != 0) {
              piVar20 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar20 + -2) == lVar9) {
                  puVar13 = (undefined8 *)(lVar10 + (long)(*piVar20 + 1) * 0x10 + 0x138);
                  goto LAB_05948568;
                }
                uVar12 = uVar12 - 1;
                piVar20 = piVar20 + 4;
              } while (uVar12 != 0);
            }
            puVar13 = (undefined8 *)FUN_02dd004c(plVar22,lVar9,1);
LAB_05948568:
            plVar14 = (long *)(*(code *)*puVar13)(plVar22,puVar13[1]);
            if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            bVar1 = *(byte *)(*(long *)puVar7 + 0x130);
            if ((*(byte *)(*plVar14 + 0x130) < bVar1) ||
               (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar7)) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96be0(plVar14);
            }
            if (*(int *)((long)plVar14 + 0x84) == 2) {
              lVar9 = FUN_058f183c(param_2,plVar14,0);
              lVar10 = FUN_058c8a30(plVar14,0);
              if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96860();
              }
              lVar15 = *(long *)puVar6;
              plVar17 = (long *)puVar3;
              if (*(int *)(lVar10 + 0x10) != 0) {
                plVar17 = plVar14 + 0x18;
              }
              lVar10 = *plVar17;
              if (*(int *)(lVar15 + 0xe4) == 0) {
                thunk_FUN_02df485c();
                lVar15 = *(long *)puVar6;
              }
              if (lVar9 != **(long **)(lVar15 + 0xb8)) {
                if (*(char *)((long)plVar14 + 0x91) != '\0') {
                  if (*(int *)(*(long *)System_Runtime_Serialization_XmlObjectSerializer_TypeInfo +
                              0xe4) == 0) {
                    thunk_FUN_02df485c();
                  }
                  uVar12 = FUN_05970094(lVar9,0);
                  if ((uVar12 & 1) != 0) goto LAB_059486a0;
                }
                FUN_0593a2a8(plVar14[7],0);
                lVar15 = *(long *)(param_1 + 0x10);
                uVar11 = FUN_058c6e28(plVar14,0);
                uVar21 = FUN_058c8a30(plVar14,0);
                uVar16 = FUN_058c7140(plVar14,lVar9,0);
                if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02d96860();
                }
                FUN_05b8c558(lVar15,lVar10,uVar11,uVar21,uVar16,0);
              }
            }
LAB_059486a0:
          } while ((*(char *)(param_1 + 0x39) == '\0') || (*(int *)((long)plVar14 + 0x84) != 4));
          lVar9 = FUN_058f183c(param_2,plVar14,0);
          lVar10 = *(long *)puVar6;
          if (*(int *)(lVar10 + 0xe4) == 0) {
            thunk_FUN_02df485c();
            lVar10 = *(long *)puVar6;
          }
        } while (lVar9 == **(long **)(lVar10 + 0xb8));
        if (*(char *)((long)plVar14 + 0x91) != '\0') {
          if (*(int *)(*(long *)System_Runtime_Serialization_XmlObjectSerializer_TypeInfo + 0xe4) ==
              0) {
            thunk_FUN_02df485c();
          }
          uVar12 = FUN_05970094(lVar9,0);
          if ((uVar12 & 1) != 0) goto joined_r0x0594848c;
        }
        FUN_0593a2a8(plVar14[7],0);
        lVar10 = *(long *)(param_1 + 0x10);
        uVar11 = FUN_058c6e28(plVar14,0);
        uVar11 = FUN_05362cb4(*(undefined8 *)
                               OVR_OpenVR_IVRApplications__GetApplicationsErrorNameFromEnum_TypeInfo
                              ,uVar11,0);
        uVar21 = FUN_058c7140(plVar14,lVar9,0);
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        FUN_05b8c558(lVar10,*(undefined8 *)
                             OVR_OpenVR_IVRChaperoneSetup__GetWorkingPlayAreaRect_TypeInfo,uVar11,
                     *(undefined8 *)System_Xml_Schema_XmlSchemaComplexContentExtension_TypeInfo,
                     uVar21,0);
        goto joined_r0x0594848c;
      }
    }
  }
  goto LAB_05949488;
  while( true ) {
    uVar12 = uVar12 - 1;
    piVar20 = piVar20 + 4;
    if (uVar12 == 0) break;
LAB_059487ec:
    if (*(long *)(piVar20 + -2) == *(long *)puVar4) {
      puVar13 = (undefined8 *)(lVar9 + (long)*piVar20 * 0x10 + 0x138);
      goto LAB_05948820;
    }
  }
LAB_05948804:
  puVar13 = (undefined8 *)FUN_02dd004c(plVar22,*(long *)puVar4,0);
LAB_05948820:
  (*(code *)*puVar13)(plVar22,puVar13[1]);
LAB_0594882c:
  if ((*(long *)(param_2 + 0x10) != 0) &&
     (plVar22 = *(long **)(*(long *)(param_2 + 0x10) + 0x40), plVar22 != (long *)0x0)) {
    plVar22 = (long *)(**(code **)(*plVar22 + 0x1e8))(plVar22,*(undefined8 *)(*plVar22 + 0x1f0));
    puVar7 = 
    System_Collections_Generic_Dictionary<GameObject,_OVRPassthroughLayer_PassthroughMeshInstance>_TypeInfo
    ;
    puVar6 = PTR_DAT_06a1d5c0;
    puVar5 = PTR_DAT_069fbff8;
    puVar3 = PTR_DAT_069fba08;
joined_r0x0594886c:
    do {
      do {
        if (plVar22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        lVar10 = *plVar22;
        lVar9 = *(long *)puVar5;
        uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar12 != 0) {
          piVar20 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar20 + -2) == lVar9) {
              puVar13 = (undefined8 *)(lVar10 + (long)*piVar20 * 0x10 + 0x138);
              goto System_Runtime_Serialization_XmlObjectSerializerWriteContext__WriteNull;
            }
            uVar12 = uVar12 - 1;
            piVar20 = piVar20 + 4;
          } while (uVar12 != 0);
        }
        puVar13 = (undefined8 *)FUN_02dd004c(plVar22,lVar9,0);
System_Runtime_Serialization_XmlObjectSerializerWriteContext__WriteNull:
        uVar12 = (*(code *)*puVar13)(plVar22,puVar13[1]);
        puVar4 = PTR_DAT_069fbff0;
        if ((uVar12 & 1) == 0) {
          plVar22 = (long *)thunk_FUN_02dd3048(plVar22,*(undefined8 *)PTR_DAT_069fbff0);
          uVar11 = 0;
          if (plVar22 == (long *)0x0) goto LAB_059491b4;
          lVar9 = *plVar22;
          uVar12 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar12 == 0) goto LAB_0594918c;
          piVar20 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          goto LAB_05949174;
        }
        if (plVar22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        lVar10 = *plVar22;
        lVar9 = *(long *)puVar5;
        uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar12 != 0) {
          piVar20 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar20 + -2) == lVar9) {
              puVar13 = (undefined8 *)(lVar10 + (long)(*piVar20 + 1) * 0x10 + 0x138);
              goto LAB_05948948;
            }
            uVar12 = uVar12 - 1;
            piVar20 = piVar20 + 4;
          } while (uVar12 != 0);
        }
        puVar13 = (undefined8 *)FUN_02dd004c(plVar22,lVar9,1);
LAB_05948948:
        plVar14 = (long *)(*(code *)*puVar13)(plVar22,puVar13[1]);
        if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        bVar1 = *(byte *)(*(long *)puVar7 + 0x130);
        if ((*(byte *)(*plVar14 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar7)) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96be0(plVar14);
        }
      } while (*(int *)((long)plVar14 + 0x84) == 4);
      plVar17 = (long *)FUN_058f183c(param_2,plVar14,0);
      lVar9 = FUN_058c8a30(plVar14,0);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      lVar10 = *(long *)puVar6;
      plVar18 = (long *)puVar3;
      if (*(int *)(lVar9 + 0x10) != 0) {
        plVar18 = plVar14 + 0x18;
      }
      lVar9 = *plVar18;
      if (*(int *)(lVar10 + 0xe4) == 0) {
        thunk_FUN_02df485c();
        lVar10 = *(long *)puVar6;
      }
      if (plVar17 == (long *)**(long **)(lVar10 + 0xb8)) {
LAB_05948a20:
        iVar8 = (**(code **)(*plVar14 + 0x1d8))(plVar14,*(undefined8 *)(*plVar14 + 0x1e0));
        if (iVar8 == 3) {
          if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          FUN_05b8c558(*(long *)(param_1 + 0x10),
                       *(undefined8 *)
                        OVR_OpenVR_IVROverlay__SetOverlayTransformOverlayRelative_TypeInfo,
                       *(undefined8 *)OVR_OpenVR_IVROverlay__GetOverlayAlpha_TypeInfo,
                       *(undefined8 *)PTR_DAT_06a115a0,*(undefined8 *)PTR_DAT_069ff7d0,0);
        }
      }
      else if (*(char *)((long)plVar14 + 0x91) != '\0') {
        if (*(int *)(*(long *)System_Runtime_Serialization_XmlObjectSerializer_TypeInfo + 0xe4) == 0
           ) {
          thunk_FUN_02df485c();
        }
        uVar12 = FUN_05970094(plVar17,0);
        if ((uVar12 & 1) != 0) goto LAB_05948a20;
      }
      lVar10 = *(long *)puVar6;
      if (*(int *)(lVar10 + 0xe4) == 0) {
        thunk_FUN_02df485c();
        lVar10 = *(long *)puVar6;
      }
    } while (plVar17 == (long *)**(long **)(lVar10 + 0xb8));
    if (*(char *)((long)plVar14 + 0x91) != '\0') {
      if (*(int *)(*(long *)System_Runtime_Serialization_XmlObjectSerializer_TypeInfo + 0xe4) == 0)
      {
        thunk_FUN_02df485c();
      }
      uVar12 = FUN_05970094(plVar17,0);
      if ((uVar12 & 1) != 0) goto joined_r0x0594886c;
    }
    if (*(int *)((long)plVar14 + 0x84) != 2) {
      if (*(int *)((long)plVar14 + 0x84) == 3) {
        bVar2 = true;
joined_r0x05948bb8:
        if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
      }
      else {
        uVar12 = FUN_058ca70c(plVar14,0);
        if (((uVar12 & 1) == 0) ||
           (uVar12 = System_Numerics_BigInteger__op_Explicit(plVar14,plVar17,0), (uVar12 & 1) == 0))
        {
LAB_05948b74:
          plVar18 = *(long **)(param_1 + 0x10);
          uVar11 = FUN_058c6e28(plVar14,0);
          uVar21 = FUN_058c8a30(plVar14,0);
          if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96860();
          }
          (**(code **)(*plVar18 + 0x1c8))
                    (plVar18,lVar9,uVar11,uVar21,*(undefined8 *)(*plVar18 + 0x1d0));
          bVar2 = false;
          goto joined_r0x05948bb8;
        }
        uVar11 = *(undefined8 *)OVR_OpenVR_IVROverlay__SetOverlayTransformAbsolute_TypeInfo;
        if (*(int *)(*(long *)(PTR_DAT_069fb9c0 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        plVar18 = (long *)FUN_054f73b4(uVar11,0);
        if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        uVar11 = thunk_FUN_02da6564(plVar17,0);
        if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860(uVar11,uVar11);
        }
        uVar12 = (**(code **)(*plVar18 + 0x328))(plVar18,uVar11,*(undefined8 *)(*plVar18 + 0x330));
        if ((uVar12 & 1) != 0) goto LAB_05948b74;
        bVar2 = true;
      }
      plVar18 = (long *)thunk_FUN_02da6564(plVar17,0);
      uVar12 = FUN_058ca70c(plVar14,0);
      if ((uVar12 & 1) == 0) {
        lVar9 = *(long *)(PTR_DAT_069fb9c0 + 0x88);
        if (*(int *)(*(long *)(PTR_DAT_069fb9c0 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        uVar11 = FUN_054f73b4(lVar9 + 0x20,0);
        uVar12 = FUN_055006dc(plVar18,uVar11,0);
        if ((uVar12 & 1) == 0) {
          lVar9 = *(long *)(PTR_DAT_069fb9c0 + 0x90);
          if (*(int *)(*(long *)(PTR_DAT_069fb9c0 + 0xe0) + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          uVar11 = FUN_054f73b4(lVar9 + 0x20,0);
          uVar12 = FUN_055006dc(plVar18,uVar11,0);
          if ((uVar12 & 1) != 0) goto LAB_05948d18;
        }
        else {
LAB_05948d18:
          uVar12 = FUN_0594a3a0(plVar17);
          if ((uVar12 & 1) != 0) {
            if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            FUN_05b8c558(*(long *)(param_1 + 0x10),*(undefined8 *)PTR_DAT_06a1ad28,
                         *(undefined8 *)Unity_Services_Qos_Http_HttpClientResponse_TypeInfo,
                         *(undefined8 *)OVR_OpenVR_IVROverlay__FindOverlay_TypeInfo,
                         *(undefined8 *)
                          OVR_OpenVR_IVROverlay__SetOverlayTransformTrackedDeviceComponent_TypeInfo,
                         0);
          }
        }
        plVar18 = *(long **)(param_1 + 0x10);
        uVar11 = FUN_058c7140(plVar14,plVar17,0);
        if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860(uVar11,uVar11);
        }
        (**(code **)(*plVar18 + 0x278))(plVar18,uVar11,*(undefined8 *)(*plVar18 + 0x280));
      }
      else {
        uVar12 = System_Numerics_BigInteger__op_Explicit(plVar14,plVar17,0);
        if ((uVar12 & 1) == 0) {
          lVar9 = *(long *)(PTR_DAT_069fb9c0 + 0xe0);
          if (*(int *)(lVar9 + 0xe4) == 0) {
            thunk_FUN_02df485c(lVar9);
          }
          uVar11 = FUN_054f73b4(lVar9 + 0x20,0);
          uVar12 = FUN_055006dc(plVar18,uVar11,0);
          if ((uVar12 & 1) == 0) {
            uVar11 = *(undefined8 *)PTR_DAT_06a0ad68;
            if (*(int *)(*(long *)(PTR_DAT_069fb9c0 + 0xe0) + 0xe4) == 0) {
              thunk_FUN_02df485c();
            }
            uVar11 = FUN_054f73b4(uVar11,0);
            uVar12 = FUN_055006dc(plVar18,uVar11,0);
            if ((uVar12 & 1) != 0) goto LAB_05948e7c;
            lVar9 = *(long *)(PTR_DAT_069fb9c0 + 0x88);
            if (*(int *)(*(long *)(PTR_DAT_069fb9c0 + 0xe0) + 0xe4) == 0) {
              thunk_FUN_02df485c();
            }
            uVar11 = FUN_054f73b4(lVar9 + 0x20,0);
            uVar12 = FUN_055006dc(plVar18,uVar11,0);
            if ((uVar12 & 1) != 0) goto LAB_05948e7c;
            if (*(int *)(*(long *)System_Runtime_Serialization_XmlObjectSerializer_TypeInfo + 0xe4)
                == 0) {
              thunk_FUN_02df485c();
            }
            uVar12 = FUN_0596fb3c(plVar18,0);
            if ((uVar12 & 1) != 0) goto LAB_05948e7c;
            bVar1 = *(byte *)(*(long *)(PTR_DAT_069fb9c0 + 0xe0) + 0x130);
            if ((*(byte *)(*plVar17 + 0x130) < bVar1) ||
               (*(long *)(*(long *)(*plVar17 + 200) + (ulong)bVar1 * 8 + -8) !=
                *(long *)(PTR_DAT_069fb9c0 + 0xe0))) {
              uVar11 = FUN_05938870(plVar18,0);
              uVar11 = FUN_05362cb4(*(undefined8 *)
                                     System_Linq_Expressions_Interpreter_GreaterThanOrEqualInstruction_GreaterThanOrEqualInt64_TypeInfo
                                    ,uVar11,0);
              if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96860();
              }
              FUN_05b8c558(*(long *)(param_1 + 0x10),
                           *(undefined8 *)
                            OVR_OpenVR_IVROverlay__SetOverlayTransformOverlayRelative_TypeInfo,
                           *(undefined8 *)PTR_DAT_06a0a838,*(undefined8 *)PTR_DAT_06a115a0,uVar11,0)
              ;
              if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96860();
              }
              FUN_05b8c4fc(*(long *)(param_1 + 0x10),
                           *(undefined8 *)
                            OVR_OpenVR_IVROverlay__GetOverlayTransformOverlayRelative_TypeInfo,
                           *(undefined8 *)PTR_DAT_06a10f28,0);
            }
            else {
              if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96860();
              }
              FUN_05b8c558(*(long *)(param_1 + 0x10),
                           *(undefined8 *)
                            OVR_OpenVR_IVRChaperoneSetup__GetWorkingPlayAreaRect_TypeInfo,
                           *(undefined8 *)
                            OVR_OpenVR_IVRApplications__GetApplicationsTransitionStateNameFromEnum_TypeInfo
                           ,*(undefined8 *)
                             System_Xml_Schema_XmlSchemaComplexContentExtension_TypeInfo,
                           *(undefined8 *)PTR_DAT_06a115b0,0);
            }
          }
          else {
LAB_05948e7c:
            if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            lVar9 = *(long *)(param_1 + 0x10);
            uVar11 = (**(code **)(*plVar18 + 0x368))(plVar18,*(undefined8 *)(*plVar18 + 0x370));
            if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            FUN_05b8c558(lVar9,*(undefined8 *)
                                OVR_OpenVR_IVRChaperoneSetup__GetWorkingPlayAreaRect_TypeInfo,
                         *(undefined8 *)
                          OVR_OpenVR_IVRApplications__GetApplicationsTransitionStateNameFromEnum_TypeInfo
                         ,*(undefined8 *)System_Xml_Schema_XmlSchemaComplexContentExtension_TypeInfo
                         ,uVar11,0);
          }
          if (*(int *)(*(long *)System_Runtime_Serialization_XmlObjectSerializer_TypeInfo + 0xe4) ==
              0) {
            thunk_FUN_02df485c();
          }
          uVar12 = FUN_0596fb3c(plVar18,0);
          plVar18 = *(long **)(param_1 + 0x10);
          if ((uVar12 & 1) == 0) {
            uVar11 = FUN_058c7140(plVar14,plVar17,0);
            if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860(uVar11,uVar11);
            }
            (**(code **)(*plVar18 + 0x278))(plVar18,uVar11,*(undefined8 *)(*plVar18 + 0x280));
          }
          else {
            FUN_058cb0e0(plVar14,plVar17,plVar18,0,0);
          }
        }
        else {
          if (bVar2) {
            uVar11 = thunk_FUN_02da6564(plVar17,0);
            lVar9 = plVar14[7];
            if (*(int *)(*(long *)(PTR_DAT_069fb9c0 + 0xe0) + 0xe4) == 0) {
              thunk_FUN_02df485c();
            }
            uVar12 = FUN_05501380(uVar11,lVar9,0);
            if ((uVar12 & 1) != 0) {
              if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02d96860();
              }
              uVar11 = (**(code **)(*plVar18 + 0x358))(plVar18,*(undefined8 *)(*plVar18 + 0x360));
              uVar11 = FUN_058d0748(uVar11,0);
              uVar21 = thunk_FUN_02dfd288(OVR_OpenVR_IVROverlay__ShowKeyboardForOverlay_TypeInfo);
                    /* WARNING: Subroutine does not return */
              FUN_02d96724(uVar11,uVar21);
            }
            uVar11 = FUN_058c6e28(plVar14,0);
            lVar9 = thunk_FUN_02dd3144(*(undefined8 *)
                                        OVR_OpenVR_IVRApplications__GetApplicationSupportedMimeTypes_TypeInfo
                                      );
            FUN_05be1674(lVar9,uVar11,0);
            uVar11 = FUN_058c8a30(plVar14,0);
            if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            *(undefined8 *)(lVar9 + 0x28) = uVar11;
            LeanTween__value();
            FUN_058cb0e0(plVar14,plVar17,*(undefined8 *)(param_1 + 0x10),lVar9,0);
            goto joined_r0x0594886c;
          }
          lVar9 = plVar14[7];
          if (*(int *)(*(long *)(PTR_DAT_069fb9c0 + 0xe0) + 0xe4) == 0) {
            thunk_FUN_02df485c();
          }
          uVar12 = FUN_05501380(plVar18,lVar9,0);
          if ((uVar12 & 1) != 0) {
            lVar9 = *(long *)(param_1 + 0x10);
            if (*(int *)(*(long *)System_Runtime_Serialization_XmlObjectSerializer_TypeInfo + 0xe4)
                == 0) {
              thunk_FUN_02df485c();
            }
            uVar11 = FUN_05970180(plVar18,0);
            if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            FUN_05b8c558(lVar9,*(undefined8 *)
                                OVR_OpenVR_IVRChaperoneSetup__GetWorkingPlayAreaRect_TypeInfo,
                         *(undefined8 *)
                          OVR_OpenVR_IVRApplications__GetApplicationsTransitionStateNameFromEnum_TypeInfo
                         ,*(undefined8 *)System_Xml_Schema_XmlSchemaComplexContentExtension_TypeInfo
                         ,uVar11,0);
          }
          FUN_058cb0e0(plVar14,plVar17,*(undefined8 *)(param_1 + 0x10),0,0);
        }
      }
      if (*(int *)((long)plVar14 + 0x84) == 3) {
        bVar2 = true;
      }
      if (!bVar2) {
        plVar14 = *(long **)(param_1 + 0x10);
        if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        (**(code **)(*plVar14 + 0x1d8))(plVar14,*(undefined8 *)(*plVar14 + 0x1e0));
      }
    }
    goto joined_r0x0594886c;
  }
  goto LAB_05949488;
  while( true ) {
    uVar12 = uVar12 - 1;
    piVar20 = piVar20 + 4;
    if (uVar12 == 0) break;
LAB_05949174:
    if (*(long *)(piVar20 + -2) == *(long *)puVar4) {
      puVar13 = (undefined8 *)(lVar9 + (long)*piVar20 * 0x10 + 0x138);
      goto LAB_059491a8;
    }
  }
LAB_0594918c:
  puVar13 = (undefined8 *)FUN_02dd004c(plVar22,*(long *)puVar4,0);
LAB_059491a8:
  uVar11 = (*(code *)*puVar13)(plVar22,puVar13[1]);
LAB_059491b4:
  if (*(long *)(param_1 + 0x18) != 0) {
    plVar22 = (long *)FUN_0594a08c(uVar11,param_2);
    if (plVar22 != (long *)0x0) {
      plVar22 = (long *)(**(code **)(*plVar22 + 0x388))(plVar22,*(undefined8 *)(*plVar22 + 0x390));
      puVar5 = System_Xml_Serialization_XmlChoiceIdentifierAttribute_TypeInfo;
      puVar3 = PTR_DAT_069fbff8;
      do {
        if (plVar22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        lVar10 = *plVar22;
        lVar9 = *(long *)puVar3;
        uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar12 != 0) {
          piVar20 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar20 + -2) == lVar9) {
              puVar13 = (undefined8 *)(lVar10 + (long)*piVar20 * 0x10 + 0x138);
              goto LAB_05949260;
            }
            uVar12 = uVar12 - 1;
            piVar20 = piVar20 + 4;
          } while (uVar12 != 0);
        }
        puVar13 = (undefined8 *)FUN_02dd004c(plVar22,lVar9,0);
LAB_05949260:
        uVar12 = (*(code *)*puVar13)(plVar22,puVar13[1]);
        if ((uVar12 & 1) == 0) {
          plVar22 = (long *)thunk_FUN_02dd3048(plVar22,*(undefined8 *)puVar4);
          if (plVar22 == (long *)0x0) goto LAB_05949420;
          lVar9 = *plVar22;
          uVar12 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar12 == 0) goto LAB_059493e8;
          piVar20 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          goto LAB_059493d0;
        }
        if (plVar22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        lVar10 = *plVar22;
        lVar9 = *(long *)puVar3;
        uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar12 != 0) {
          piVar20 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar20 + -2) == lVar9) {
              puVar13 = (undefined8 *)(lVar10 + (long)(*piVar20 + 1) * 0x10 + 0x138);
              goto LAB_059492c8;
            }
            uVar12 = uVar12 - 1;
            piVar20 = piVar20 + 4;
          } while (uVar12 != 0);
        }
        puVar13 = (undefined8 *)FUN_02dd004c(plVar22,lVar9,1);
LAB_059492c8:
        plVar14 = (long *)(*(code *)*puVar13)(plVar22,puVar13[1]);
        if (plVar14 != (long *)0x0) {
          bVar1 = *(byte *)(*(long *)puVar5 + 0x130);
          if ((*(byte *)(*plVar14 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar5)) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96be0(plVar14);
          }
        }
        lVar9 = FUN_058f2d7c(param_2,plVar14,0);
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        if (0 < (int)*(ulong *)(lVar9 + 0x18)) {
          uVar12 = 0;
          uVar19 = *(ulong *)(lVar9 + 0x18) & 0xffffffff;
          do {
            if (uVar19 <= uVar12) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96868();
            }
            if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            uVar11 = *(undefined8 *)(lVar9 + 0x20 + uVar12 * 8);
            lVar10 = (**(code **)(*plVar14 + 0x188))(plVar14,*(undefined8 *)(*plVar14 + 400));
            if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            uVar21 = FUN_058b608c(lVar10,0);
            FUN_05948034(param_1,uVar11,uVar21);
            uVar19 = (ulong)*(uint *)(lVar9 + 0x18);
            uVar12 = uVar12 + 1;
          } while ((long)uVar12 < (long)(int)*(uint *)(lVar9 + 0x18));
        }
      } while( true );
    }
    goto LAB_05949488;
  }
  goto LAB_05949420;
  while( true ) {
    uVar12 = uVar12 - 1;
    piVar20 = piVar20 + 4;
    if (uVar12 == 0) break;
LAB_059493d0:
    if (*(long *)(piVar20 + -2) == *(long *)puVar4) {
      puVar13 = (undefined8 *)(lVar9 + (long)*piVar20 * 0x10 + 0x138);
      goto System_Runtime_Serialization_XmlObjectSerializerWriteContext__WriteExtensionDataValue;
    }
  }
LAB_059493e8:
  puVar13 = (undefined8 *)FUN_02dd004c(plVar22,*(long *)puVar4,0);
System_Runtime_Serialization_XmlObjectSerializerWriteContext__WriteExtensionDataValue:
  (*(code *)*puVar13)(plVar22,puVar13[1]);
LAB_05949420:
  plVar22 = *(long **)(param_1 + 0x10);
  if (plVar22 != (long *)0x0) {
    (**(code **)(*plVar22 + 0x1d8))(plVar22,*(undefined8 *)(*plVar22 + 0x1e0));
    return;
  }
LAB_05949488:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


