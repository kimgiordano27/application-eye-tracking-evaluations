/*
FUNCTION_NAME: FUN_059463b4
ENTRY_POINT: 059463b4
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_15;telemetry_or_network_hits_7
*/


void FUN_059463b4(long param_1,long param_2,long *param_3,undefined4 param_4)

{
  byte bVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long *plVar10;
  ulong uVar11;
  long *plVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  
  if ((DAT_06dc108d & 1) == 0) {
    FUN_02d965b8(PTR_DAT_06a1d5c0);
    FUN_02d965b8(System_Runtime_Serialization_XmlObjectSerializer_TypeInfo);
    FUN_02d965b8(PTR_DAT_06a0ad68);
    FUN_02d965b8(OVR_OpenVR_IVROverlay__SetOverlayTransformAbsolute_TypeInfo);
    FUN_02d965b8(OVR_OpenVR_IVRApplications__GetApplicationSupportedMimeTypes_TypeInfo);
    FUN_02d965b8(OVR_OpenVR_IVRApplications__GetApplicationsErrorNameFromEnum_TypeInfo);
    FUN_02d965b8(OVR_OpenVR_IVROverlay__GetOverlayAlpha_TypeInfo);
    FUN_02d965b8(OVR_OpenVR_IVROverlay__FindOverlay_TypeInfo);
    FUN_02d965b8(System_Xml_Schema_XmlSchemaComplexContentExtension_TypeInfo);
    FUN_02d965b8(OVR_OpenVR_IVROverlay__SetOverlayTransformOverlayRelative_TypeInfo);
    FUN_02d965b8(PTR_DAT_06a115a0);
    FUN_02d965b8(OVR_OpenVR_IVROverlay__SetOverlayTransformTrackedDeviceComponent_TypeInfo);
    FUN_02d965b8(PTR_DAT_06a115b0);
    FUN_02d965b8(
                System_Linq_Expressions_Interpreter_GreaterThanOrEqualInstruction_GreaterThanOrEqualInt64_TypeInfo
                );
    FUN_02d965b8(PTR_DAT_069ff7d0);
    FUN_02d965b8(OVR_OpenVR_IVROverlay__GetOverlayTransformOverlayRelative_TypeInfo);
    FUN_02d965b8(PTR_DAT_06a1ad28);
    FUN_02d965b8(Unity_Services_Qos_Http_HttpClientResponse_TypeInfo);
    FUN_02d965b8(PTR_DAT_06a10f28);
    FUN_02d965b8(PTR_DAT_06a0a838);
    FUN_02d965b8(OVR_OpenVR_IVRApplications__GetApplicationsTransitionStateNameFromEnum_TypeInfo);
    FUN_02d965b8(OVR_OpenVR_IVRChaperoneSetup__GetWorkingPlayAreaRect_TypeInfo);
    DAT_06dc108d = 1;
  }
  if (param_3 == (long *)0x0) goto LAB_05946d24;
  lVar6 = FUN_058c705c(param_3,param_2,param_4,0);
  if (lVar6 == 0) {
    iVar5 = (**(code **)(*param_3 + 0x1d8))(param_3,*(undefined8 *)(*param_3 + 0x1e0));
    if (iVar5 != 3) {
      return;
    }
    lVar7 = *(long *)(param_1 + 0x28);
    if (lVar7 != 0) {
      lVar15 = *(long *)OVR_OpenVR_IVROverlay__SetOverlayTransformOverlayRelative_TypeInfo;
      uVar8 = *(undefined8 *)OVR_OpenVR_IVROverlay__GetOverlayAlpha_TypeInfo;
      uVar9 = *(undefined8 *)PTR_DAT_06a115a0;
      lVar6 = *(long *)PTR_DAT_069ff7d0;
      goto LAB_0594665c;
    }
    goto LAB_05946d24;
  }
  lVar7 = FUN_058c8a30(param_3,0);
  if (lVar7 == 0) goto LAB_05946d24;
  if (*(int *)(lVar7 + 0x10) == 0) {
    plVar10 = *(long **)(*(long *)(PTR_DAT_069fb9c0 + 0x90) + 0xb8);
  }
  else {
    plVar10 = param_3 + 0x18;
  }
  lVar15 = *plVar10;
  iVar5 = (**(code **)(*param_3 + 0x1d8))(param_3,*(undefined8 *)(*param_3 + 0x1e0));
  if (2 < iVar5) {
    if (iVar5 == 3) {
      plVar10 = *(long **)(param_1 + 0x28);
      if (plVar10 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x059468dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar10 + 0x278))(plVar10,lVar6,*(undefined8 *)(*plVar10 + 0x280));
        return;
      }
    }
    else {
      if (iVar5 != 4) {
        return;
      }
      lVar7 = *(long *)(param_1 + 0x28);
      uVar9 = FUN_058c6e28(param_3,0);
      uVar8 = FUN_05362cb4(*(undefined8 *)
                            OVR_OpenVR_IVRApplications__GetApplicationsErrorNameFromEnum_TypeInfo,
                           uVar9,0);
      if (lVar7 != 0) {
        lVar15 = *(long *)OVR_OpenVR_IVRChaperoneSetup__GetWorkingPlayAreaRect_TypeInfo;
        uVar9 = *(undefined8 *)System_Xml_Schema_XmlSchemaComplexContentExtension_TypeInfo;
        goto LAB_0594665c;
      }
    }
    goto LAB_05946d24;
  }
  if (iVar5 != 1) {
    if (iVar5 != 2) {
      return;
    }
    lVar7 = *(long *)(param_1 + 0x28);
    uVar8 = FUN_058c6e28(param_3,0);
    uVar9 = FUN_058c8a30(param_3,0);
    if (lVar7 != 0) {
LAB_0594665c:
      FUN_05b8c558(lVar7,lVar15,uVar8,uVar9,lVar6,0);
      return;
    }
    goto LAB_05946d24;
  }
  if (param_2 == 0) goto LAB_05946d24;
  plVar10 = (long *)FUN_058f20a4(param_2,param_3,param_4,0);
  uVar11 = FUN_058ca70c(param_3,0);
  if (((uVar11 & 1) == 0) ||
     (uVar11 = System_Numerics_BigInteger__op_Explicit(param_3,plVar10,0), (uVar11 & 1) == 0)) {
LAB_05946718:
    plVar12 = *(long **)(param_1 + 0x28);
    uVar9 = FUN_058c6e28(param_3,0);
    uVar8 = FUN_058c8a30(param_3,0);
    if ((plVar12 == (long *)0x0) ||
       ((**(code **)(*plVar12 + 0x1c8))
                  (plVar12,lVar15,uVar9,uVar8,*(undefined8 *)(*plVar12 + 0x1d0)),
       plVar10 == (long *)0x0)) goto LAB_05946d24;
    bVar2 = false;
  }
  else {
    uVar9 = *(undefined8 *)OVR_OpenVR_IVROverlay__SetOverlayTransformAbsolute_TypeInfo;
    if (*(int *)(*(long *)(PTR_DAT_069fb9c0 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    plVar12 = (long *)FUN_054f73b4(uVar9,0);
    if ((plVar10 == (long *)0x0) || (uVar9 = thunk_FUN_02da6564(plVar10,0), plVar12 == (long *)0x0))
    goto LAB_05946d24;
    uVar11 = (**(code **)(*plVar12 + 0x328))(plVar12,uVar9,*(undefined8 *)(*plVar12 + 0x330));
    if ((uVar11 & 1) != 0) goto LAB_05946718;
    bVar2 = true;
  }
  plVar12 = (long *)thunk_FUN_02da6564(plVar10,0);
  uVar11 = FUN_058ca70c(param_3,0);
  puVar4 = PTR_DAT_06a1d5c0;
  puVar3 = PTR_DAT_069fb9c0;
  if ((uVar11 & 1) == 0) {
    lVar7 = *(long *)(PTR_DAT_069fb9c0 + 0x88);
    if (*(int *)(*(long *)(PTR_DAT_069fb9c0 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    uVar9 = FUN_054f73b4(lVar7 + 0x20,0);
    uVar11 = FUN_055006dc(plVar12,uVar9,0);
    if ((uVar11 & 1) == 0) {
      lVar7 = *(long *)(puVar3 + 0x90);
      if (*(int *)(*(long *)(puVar3 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      uVar9 = FUN_054f73b4(lVar7 + 0x20,0);
      uVar11 = FUN_055006dc(plVar12,uVar9,0);
      if ((uVar11 & 1) != 0) goto LAB_05946950;
    }
    else {
LAB_05946950:
      uVar11 = FUN_0594a3a0(lVar6,0);
      if ((uVar11 & 1) != 0) {
        if (*(long *)(param_1 + 0x28) == 0) goto LAB_05946d24;
        FUN_05b8c558(*(long *)(param_1 + 0x28),*(undefined8 *)PTR_DAT_06a1ad28,
                     *(undefined8 *)Unity_Services_Qos_Http_HttpClientResponse_TypeInfo,
                     *(undefined8 *)OVR_OpenVR_IVROverlay__FindOverlay_TypeInfo,
                     *(undefined8 *)
                      OVR_OpenVR_IVROverlay__SetOverlayTransformTrackedDeviceComponent_TypeInfo,0);
      }
    }
    plVar12 = *(long **)(param_1 + 0x28);
    if (plVar12 == (long *)0x0) goto LAB_05946d24;
    lVar7 = *plVar12;
LAB_059469b0:
    (**(code **)(lVar7 + 0x278))(plVar12,lVar6,*(undefined8 *)(lVar7 + 0x280));
joined_r0x05946b48:
    if (bVar2) {
      return;
    }
  }
  else {
    lVar6 = *(long *)PTR_DAT_06a1d5c0;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_02df485c();
      lVar6 = *(long *)puVar4;
    }
    if (plVar10 == (long *)**(long **)(lVar6 + 0xb8)) goto joined_r0x05946b48;
    if (*(char *)((long)param_3 + 0x91) != '\0') {
      if (*(int *)(*(long *)System_Runtime_Serialization_XmlObjectSerializer_TypeInfo + 0xe4) == 0)
      {
        thunk_FUN_02df485c();
      }
      uVar11 = FUN_05970094(plVar10,0);
      if ((uVar11 & 1) != 0) goto joined_r0x05946b48;
    }
    uVar11 = System_Numerics_BigInteger__op_Explicit(param_3,plVar10,0);
    puVar3 = PTR_DAT_069fb9c0;
    if ((uVar11 & 1) == 0) {
      lVar6 = *(long *)(PTR_DAT_069fb9c0 + 0xe0);
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_02df485c(lVar6);
      }
      uVar9 = FUN_054f73b4(lVar6 + 0x20,0);
      uVar11 = FUN_055006dc(plVar12,uVar9,0);
      if ((uVar11 & 1) == 0) {
        uVar9 = *(undefined8 *)PTR_DAT_06a0ad68;
        if (*(int *)(*(long *)(puVar3 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        uVar9 = FUN_054f73b4(uVar9,0);
        uVar11 = FUN_055006dc(plVar12,uVar9,0);
        if ((uVar11 & 1) != 0) goto LAB_05946ab0;
        lVar6 = *(long *)(puVar3 + 0x88);
        if (*(int *)(*(long *)(puVar3 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        uVar9 = FUN_054f73b4(lVar6 + 0x20,0);
        uVar11 = FUN_055006dc(plVar12,uVar9,0);
        if ((uVar11 & 1) != 0) goto LAB_05946ab0;
        if (*(int *)(*(long *)System_Runtime_Serialization_XmlObjectSerializer_TypeInfo + 0xe4) == 0
           ) {
          thunk_FUN_02df485c();
        }
        uVar11 = FUN_0596fb3c(plVar12,0);
        if ((uVar11 & 1) != 0) goto LAB_05946ab0;
        bVar1 = *(byte *)(*(long *)(puVar3 + 0xe0) + 0x130);
        if ((bVar1 <= *(byte *)(*plVar10 + 0x130)) &&
           (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)(puVar3 + 0xe0)
           )) {
          lVar6 = *(long *)(param_1 + 0x28);
          if (lVar6 == 0) goto LAB_05946d24;
          uVar8 = *(undefined8 *)OVR_OpenVR_IVRChaperoneSetup__GetWorkingPlayAreaRect_TypeInfo;
          uVar13 = *(undefined8 *)
                    OVR_OpenVR_IVRApplications__GetApplicationsTransitionStateNameFromEnum_TypeInfo;
          uVar14 = *(undefined8 *)System_Xml_Schema_XmlSchemaComplexContentExtension_TypeInfo;
          uVar9 = *(undefined8 *)PTR_DAT_06a115b0;
          goto LAB_05946afc;
        }
        uVar9 = FUN_05938870(plVar12);
        uVar9 = FUN_05362cb4(*(undefined8 *)
                              System_Linq_Expressions_Interpreter_GreaterThanOrEqualInstruction_GreaterThanOrEqualInt64_TypeInfo
                             ,uVar9,0);
        if (*(long *)(param_1 + 0x28) == 0) goto LAB_05946d24;
        FUN_05b8c558(*(long *)(param_1 + 0x28),
                     *(undefined8 *)
                      OVR_OpenVR_IVROverlay__SetOverlayTransformOverlayRelative_TypeInfo,
                     *(undefined8 *)PTR_DAT_06a0a838,*(undefined8 *)PTR_DAT_06a115a0,uVar9,0);
        if (*(long *)(param_1 + 0x28) == 0) goto LAB_05946d24;
        FUN_05b8c4fc(*(long *)(param_1 + 0x28),
                     *(undefined8 *)
                      OVR_OpenVR_IVROverlay__GetOverlayTransformOverlayRelative_TypeInfo,
                     *(undefined8 *)PTR_DAT_06a10f28,0);
      }
      else {
LAB_05946ab0:
        if (plVar12 == (long *)0x0) goto LAB_05946d24;
        lVar6 = *(long *)(param_1 + 0x28);
        uVar9 = (**(code **)(*plVar12 + 0x368))(plVar12,*(undefined8 *)(*plVar12 + 0x370));
        if (lVar6 == 0) goto LAB_05946d24;
        uVar8 = *(undefined8 *)OVR_OpenVR_IVRChaperoneSetup__GetWorkingPlayAreaRect_TypeInfo;
        uVar13 = *(undefined8 *)
                  OVR_OpenVR_IVRApplications__GetApplicationsTransitionStateNameFromEnum_TypeInfo;
        uVar14 = *(undefined8 *)System_Xml_Schema_XmlSchemaComplexContentExtension_TypeInfo;
LAB_05946afc:
        FUN_05b8c558(lVar6,uVar8,uVar13,uVar14,uVar9,0);
      }
      if (*(int *)(*(long *)System_Runtime_Serialization_XmlObjectSerializer_TypeInfo + 0xe4) == 0)
      {
        thunk_FUN_02df485c();
      }
      uVar11 = FUN_0596fb3c(plVar12,0);
      plVar12 = *(long **)(param_1 + 0x28);
      if ((uVar11 & 1) != 0) {
        FUN_058cb0e0(param_3,plVar10,plVar12,0,0);
        goto joined_r0x05946b48;
      }
      lVar6 = FUN_058c7140(param_3,plVar10,0);
      if (plVar12 == (long *)0x0) goto LAB_05946d24;
      lVar7 = *plVar12;
      goto LAB_059469b0;
    }
    uVar9 = thunk_FUN_02da6564(plVar10,0);
    lVar7 = param_3[7];
    lVar6 = *(long *)(PTR_DAT_069fb9c0 + 0xe0);
    if (bVar2) {
      if (*(int *)(lVar6 + 0xe4) == 0) {
        thunk_FUN_02df485c(lVar6);
      }
      uVar11 = FUN_05501380(uVar9,lVar7,0);
      if ((uVar11 & 1) != 0) {
        FUN_02979e58(plVar12);
        uVar9 = (**(code **)(*plVar12 + 0x358))(plVar12,*(undefined8 *)(*plVar12 + 0x360));
        uVar9 = FUN_058d0748(uVar9,0);
        uVar8 = thunk_FUN_02dfd288(
                                  OVR_OpenVR_IVROverlay__SetOverlayTransformTrackedDeviceRelative_TypeInfo
                                  );
                    /* WARNING: Subroutine does not return */
        FUN_02d96724(uVar9,uVar8);
      }
      uVar9 = FUN_058c6e28(param_3,0);
      lVar6 = thunk_FUN_02dd3144(*(undefined8 *)
                                  OVR_OpenVR_IVRApplications__GetApplicationSupportedMimeTypes_TypeInfo
                                );
      FUN_05be1674(lVar6,uVar9,0);
      uVar9 = FUN_058c8a30(param_3,0);
      if (lVar6 != 0) {
        *(undefined8 *)(lVar6 + 0x28) = uVar9;
        LeanTween__value();
        FUN_058cb0e0(param_3,plVar10,*(undefined8 *)(param_1 + 0x28),lVar6,0);
        return;
      }
      goto LAB_05946d24;
    }
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_02df485c(lVar6);
    }
    uVar11 = FUN_05501380(uVar9,lVar7,0);
    if ((uVar11 & 1) != 0) {
      lVar6 = *(long *)(param_1 + 0x28);
      if (*(int *)(*(long *)System_Runtime_Serialization_XmlObjectSerializer_TypeInfo + 0xe4) == 0)
      {
        thunk_FUN_02df485c();
      }
      uVar9 = FUN_05970180(plVar12,0);
      if (lVar6 == 0) goto LAB_05946d24;
      FUN_05b8c558(lVar6,*(undefined8 *)
                          OVR_OpenVR_IVRChaperoneSetup__GetWorkingPlayAreaRect_TypeInfo,
                   *(undefined8 *)
                    OVR_OpenVR_IVRApplications__GetApplicationsTransitionStateNameFromEnum_TypeInfo,
                   *(undefined8 *)System_Xml_Schema_XmlSchemaComplexContentExtension_TypeInfo,uVar9,
                   0);
    }
    FUN_058cb0e0(param_3,plVar10,*(undefined8 *)(param_1 + 0x28),0,0);
  }
  plVar10 = *(long **)(param_1 + 0x28);
  if (plVar10 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x05946c08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar10 + 0x1d8))(plVar10,*(undefined8 *)(*plVar10 + 0x1e0));
    return;
  }
LAB_05946d24:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


