/*
FUNCTION_NAME: FUN_05943754
ENTRY_POINT: 05943754
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_9;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_5
*/


long * FUN_05943754(long param_1,long *param_2,long *param_3,undefined8 param_4,ulong param_5)

{
  undefined8 *puVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  ulong uVar12;
  long *plVar13;
  char *pcVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  code *pcVar17;
  undefined8 uVar18;
  long lVar19;
  undefined8 local_68;
  
  if ((DAT_06dc107a & 1) == 0) {
    FUN_02d965b8(PTR_DAT_069fc178);
    FUN_02d965b8(OVR_OpenVR_IVROverlay__SetDashboardOverlaySceneProcess_TypeInfo);
    FUN_02d965b8(PTR_DAT_06a233f8);
    FUN_02d965b8(
                System_Linq_Expressions_Interpreter_GreaterThanOrEqualInstruction_GreaterThanOrEqualChar_TypeInfo
                );
    FUN_02d965b8(UnityEngine_InputSystem_HID_HID_HIDDeviceDescriptor_TypeInfo);
    FUN_02d965b8(System_Xml_Schema_XmlSchemaComplexContentExtension_TypeInfo);
    FUN_02d965b8(PTR_DAT_06a1ac90);
    FUN_02d965b8(PTR_DAT_06a187c8);
    FUN_02d965b8(PTR_DAT_069ff7c8);
    FUN_02d965b8(PTR_DAT_06a12a30);
    FUN_02d965b8(OVR_OpenVR_IVROverlay__SetOverlayColor_TypeInfo);
    FUN_02d965b8(OVR_OpenVR_IVROverlay__SetOverlayTexelAspect_TypeInfo);
    FUN_02d965b8(OVR_OpenVR_IVRApplications__LaunchTemplateApplication_TypeInfo);
    FUN_02d965b8(OVR_OpenVR_IVROverlay__SetOverlayDualAnalogTransform_TypeInfo);
    FUN_02d965b8(
                System_Linq_Expressions_Interpreter_GreaterThanOrEqualInstruction_GreaterThanOrEqualSByte_TypeInfo
                );
    FUN_02d965b8(PTR_DAT_069ff7d0);
    FUN_02d965b8(PTR_DAT_06a10fd8);
    FUN_02d965b8(System_Net_Cache_RequestCacheLevel_TypeInfo);
    FUN_02d965b8(PTR_DAT_06a10f28);
    FUN_02d965b8(OVR_OpenVR_IVRCompositor__GetCurrentSceneFocusProcess_TypeInfo);
    FUN_02d965b8(OVR_OpenVR_IVROverlay__SetOverlayTexture_TypeInfo);
    FUN_02d965b8(UnityEngine_InputSystem_HID_HID_Simulation_TypeInfo);
    FUN_02d965b8(Assets_Scripts_HoleSceneManager_<GetMiniMap>d__13_TypeInfo);
    DAT_06dc107a = 1;
  }
  puVar6 = UnityEngine_InputSystem_HID_HID_Simulation_TypeInfo;
  puVar1 = (undefined8 *)PTR_DAT_06a233f8;
  local_68 = 0;
  if (param_2 == (long *)0x0) goto LAB_059441e4;
  iVar7 = (**(code **)(*param_2 + 0x1d8))(param_2,*(undefined8 *)(*param_2 + 0x1e0));
  puVar5 = 
  System_Linq_Expressions_Interpreter_GreaterThanOrEqualInstruction_GreaterThanOrEqualSByte_TypeInfo
  ;
  puVar4 = PTR_DAT_06a10f28;
  if (iVar7 != 1) {
    puVar1 = (undefined8 *)puVar6;
  }
  if (param_3 == (long *)0x0) goto LAB_059441e4;
  uVar18 = *puVar1;
  plVar8 = (long *)(**(code **)(*param_3 + 0x5f8))
                             (param_3,*(undefined8 *)
                                       System_Linq_Expressions_Interpreter_GreaterThanOrEqualInstruction_GreaterThanOrEqualSByte_TypeInfo
                              ,uVar18,*(undefined8 *)PTR_DAT_06a10f28,
                              *(undefined8 *)(*param_3 + 0x600));
  uVar9 = FUN_058c6e28(param_2,0);
  if (plVar8 == (long *)0x0) goto LAB_059441e4;
  (**(code **)(*plVar8 + 0x518))
            (plVar8,*(undefined8 *)PTR_DAT_06a10fd8,uVar9,*(undefined8 *)(*plVar8 + 0x520));
  lVar10 = FUN_058c8a30(param_2,0);
  puVar6 = OVR_OpenVR_IVROverlay__SetDashboardOverlaySceneProcess_TypeInfo;
  if (lVar10 == 0) goto LAB_059441e4;
  if (*(int *)(lVar10 + 0x10) == 0) {
    uVar9 = FUN_05943644(param_1,param_2[0xf]);
    uVar11 = FUN_058c8a30(param_2,0);
    uVar12 = FUN_0536ba54(uVar11,uVar9,0);
    if ((uVar12 & 1) != 0) {
      (**(code **)(*plVar8 + 0x518))
                (plVar8,*(undefined8 *)OVR_OpenVR_IVROverlay__SetOverlayColor_TypeInfo,
                 *(undefined8 *)OVR_OpenVR_IVROverlay__SetOverlayDualAnalogTransform_TypeInfo,
                 *(undefined8 *)(*plVar8 + 0x520));
    }
  }
  uVar9 = thunk_FUN_02da6564(param_2,0);
  puVar3 = PTR_DAT_069fb9c0;
  uVar11 = *(undefined8 *)puVar6;
  if (*(int *)(*(long *)(PTR_DAT_069fb9c0 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02df485c(*(long *)(PTR_DAT_069fb9c0 + 0xe0));
  }
  uVar11 = FUN_054f73b4(uVar11,0);
  uVar12 = FUN_05501380(uVar9,uVar11,0);
  if ((uVar12 & 1) == 0) {
    FUN_05943058(param_1,param_2,plVar8);
  }
  else {
    FUN_05937e2c(param_1,param_2,plVar8,param_3);
  }
  FUN_05937754(param_2[0x14],plVar8,0);
  FUN_05942c08(param_1,param_2,param_3,plVar8);
  iVar7 = (**(code **)(*param_2 + 0x1d8))(param_2,*(undefined8 *)(*param_2 + 0x1e0));
  if (iVar7 == 4) {
    if ((char)param_2[4] == '\0') {
      (**(code **)(*plVar8 + 0x558))
                (plVar8,*(undefined8 *)
                         OVR_OpenVR_IVRCompositor__GetCurrentSceneFocusProcess_TypeInfo,
                 *(undefined8 *)System_Xml_Schema_XmlSchemaComplexContentExtension_TypeInfo,
                 *(undefined8 *)PTR_DAT_069ff7c8,*(undefined8 *)(*plVar8 + 0x560));
    }
    if (*(char *)((long)param_2 + 0x95) == '\0') {
      lVar10 = param_2[7];
      lVar19 = *(long *)(puVar3 + 0x28);
      if (*(int *)(*(long *)(puVar3 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      uVar9 = FUN_054f73b4(lVar19 + 0x20,0);
      uVar12 = FUN_055006dc(lVar10,uVar9,0);
      if ((uVar12 & 1) == 0) {
        FUN_0593a2a8(param_2[7]);
        uVar9 = FUN_058c73ac(param_2,0);
        uVar9 = FUN_058c7140(param_2,uVar9,0);
        uVar11 = *(undefined8 *)System_Net_Cache_RequestCacheLevel_TypeInfo;
        uVar15 = *(undefined8 *)System_Xml_Schema_XmlSchemaComplexContentExtension_TypeInfo;
        pcVar17 = *(code **)(*plVar8 + 0x558);
        uVar16 = *(undefined8 *)(*plVar8 + 0x560);
      }
      else {
        plVar13 = (long *)FUN_058c73ac(param_2,0);
        if (plVar13 == (long *)0x0) goto LAB_059441e4;
        if (*(long *)(*plVar13 + 0x40) != *(long *)(*(long *)(puVar3 + 0x28) + 0x40))
        goto LAB_059441e8;
        pcVar14 = (char *)thunk_FUN_02dd328c();
        uVar15 = *(undefined8 *)System_Xml_Schema_XmlSchemaComplexContentExtension_TypeInfo;
        uVar11 = *(undefined8 *)System_Net_Cache_RequestCacheLevel_TypeInfo;
        puVar1 = (undefined8 *)PTR_DAT_069ff7c8;
        if (*pcVar14 != '\0') {
          puVar1 = (undefined8 *)PTR_DAT_069ff7d0;
        }
        uVar16 = *(undefined8 *)(*plVar8 + 0x560);
        uVar9 = *puVar1;
        pcVar17 = *(code **)(*plVar8 + 0x558);
      }
      (*pcVar17)(plVar8,uVar11,uVar15,uVar9,uVar16);
    }
  }
  if (*(char *)((long)param_2 + 0x95) == '\0') {
    iVar7 = (**(code **)(*param_2 + 0x1d8))(param_2,*(undefined8 *)(*param_2 + 0x1e0));
    if (iVar7 != 4) {
      FUN_0593a2a8(param_2[7]);
      iVar7 = (**(code **)(*param_2 + 0x1d8))(param_2,*(undefined8 *)(*param_2 + 0x1e0));
      if ((iVar7 == 2) && ((char)param_2[4] == '\0')) {
        lVar10 = param_2[7];
        lVar19 = *(long *)(puVar3 + 0x28);
        if (*(int *)(*(long *)(puVar3 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        uVar9 = FUN_054f73b4(lVar19 + 0x20,0);
        uVar12 = FUN_055006dc(lVar10,uVar9,0);
        plVar13 = (long *)FUN_058c73ac(param_2,0);
        if ((uVar12 & 1) == 0) {
          uVar9 = FUN_058c7140(param_2,plVar13,0);
          uVar11 = *(undefined8 *)System_Net_Cache_RequestCacheLevel_TypeInfo;
          uVar15 = *(undefined8 *)System_Xml_Schema_XmlSchemaComplexContentExtension_TypeInfo;
          pcVar17 = *(code **)(*plVar8 + 0x558);
          uVar16 = *(undefined8 *)(*plVar8 + 0x560);
        }
        else {
          if (plVar13 == (long *)0x0) goto LAB_059441e4;
          if (*(long *)(*plVar13 + 0x40) != *(long *)(*(long *)(puVar3 + 0x28) + 0x40))
          goto LAB_059441e8;
          pcVar14 = (char *)thunk_FUN_02dd328c(plVar13);
          uVar15 = *(undefined8 *)System_Xml_Schema_XmlSchemaComplexContentExtension_TypeInfo;
          uVar11 = *(undefined8 *)System_Net_Cache_RequestCacheLevel_TypeInfo;
          puVar1 = (undefined8 *)PTR_DAT_069ff7c8;
          if (*pcVar14 != '\0') {
            puVar1 = (undefined8 *)PTR_DAT_069ff7d0;
          }
          uVar16 = *(undefined8 *)(*plVar8 + 0x560);
          uVar9 = *puVar1;
          pcVar17 = *(code **)(*plVar8 + 0x558);
        }
        (*pcVar17)(plVar8,uVar11,uVar15,uVar9,uVar16);
      }
      else {
        lVar10 = param_2[7];
        lVar19 = *(long *)(puVar3 + 0x28);
        if (*(int *)(*(long *)(puVar3 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        uVar9 = FUN_054f73b4(lVar19 + 0x20,0);
        uVar12 = FUN_055006dc(lVar10,uVar9,0);
        if ((uVar12 & 1) == 0) {
          uVar12 = FUN_058ca70c(param_2,0);
          if ((uVar12 & 1) != 0) goto LAB_05943de8;
          uVar9 = FUN_058c73ac(param_2,0);
          uVar9 = FUN_058c7140(param_2,uVar9,0);
          lVar10 = *plVar8;
          uVar11 = *(undefined8 *)PTR_DAT_06a187c8;
        }
        else {
          plVar13 = (long *)FUN_058c73ac(param_2,0);
          if (plVar13 == (long *)0x0) goto LAB_059441e4;
          if (*(long *)(*plVar13 + 0x40) != *(long *)(*(long *)(puVar3 + 0x28) + 0x40)) {
LAB_059441e8:
                    /* WARNING: Subroutine does not return */
            FUN_02d96be0();
          }
          pcVar14 = (char *)thunk_FUN_02dd328c();
          lVar10 = *plVar8;
          uVar11 = *(undefined8 *)PTR_DAT_06a187c8;
          puVar1 = (undefined8 *)PTR_DAT_069ff7c8;
          if (*pcVar14 != '\0') {
            puVar1 = (undefined8 *)PTR_DAT_069ff7d0;
          }
          uVar9 = *puVar1;
        }
        (**(code **)(lVar10 + 0x518))(plVar8,uVar11,uVar9,*(undefined8 *)(lVar10 + 0x520));
      }
    }
  }
LAB_05943de8:
  iVar7 = *(int *)(param_1 + 0x5c);
  uVar9 = FUN_058c8a30(param_2,0);
  if (iVar7 == 2) {
    (**(code **)(*plVar8 + 0x558))
              (plVar8,*(undefined8 *)
                       System_Linq_Expressions_Interpreter_GreaterThanOrEqualInstruction_GreaterThanOrEqualChar_TypeInfo
               ,*(undefined8 *)System_Xml_Schema_XmlSchemaComplexContentExtension_TypeInfo,uVar9,
               *(undefined8 *)(*plVar8 + 0x560));
  }
  else {
    if ((param_2[0xf] == 0) || (lVar10 = FUN_058b0bcc(param_2[0xf],0), lVar10 == 0))
    goto LAB_059441e4;
    uVar12 = FUN_05bca8a4(lVar10,0);
    lVar10 = param_2[0xf];
    if ((uVar12 & 1) == 0) {
      if ((lVar10 == 0) || (lVar10 = FUN_058b0bcc(lVar10,0), lVar10 == 0)) goto LAB_059441e4;
      uVar11 = *(undefined8 *)(lVar10 + 0x18);
    }
    else {
      if (lVar10 == 0) goto LAB_059441e4;
      uVar11 = FUN_058ae3f4(lVar10,0);
    }
    uVar12 = FUN_0536ba54(uVar9,uVar11,0);
    if ((uVar12 & 1) != 0) {
      lVar10 = FUN_058c8a30(param_2,0);
      if (lVar10 == 0) goto LAB_059441e4;
      if (*(int *)(lVar10 + 0x10) != 0) {
        uVar9 = FUN_058c8a30(param_2,0);
        plVar13 = (long *)FUN_05942974(param_1,uVar9);
        uVar9 = FUN_058c6e28(param_2,0);
        lVar10 = FUN_059441ec(uVar9,plVar13,uVar9);
        if (lVar10 == 0) {
          if (plVar13 == (long *)0x0) goto LAB_059441e4;
          (**(code **)(*plVar13 + 0x2d8))(plVar13,plVar8,*(undefined8 *)(*plVar13 + 0x2e0));
        }
        plVar8 = *(long **)(param_1 + 0x48);
        if (plVar8 == (long *)0x0) {
LAB_059441e4:
                    /* WARNING: Subroutine does not return */
          FUN_02d96860();
        }
        plVar8 = (long *)(**(code **)(*plVar8 + 0x5f8))
                                   (plVar8,*(undefined8 *)puVar5,uVar18,*(undefined8 *)puVar4,
                                    *(undefined8 *)(*plVar8 + 0x600));
        plVar13 = *(long **)(param_1 + 0x28);
        uVar9 = FUN_058c8a30(param_2,0);
        if (plVar13 == (long *)0x0) goto LAB_059441e4;
        plVar13 = (long *)(**(code **)(*plVar13 + 0x2f8))
                                    (plVar13,uVar9,*(undefined8 *)(*plVar13 + 0x300));
        uVar9 = *(undefined8 *)PTR_DAT_06a1ac90;
        if (plVar13 == (long *)0x0) {
          uVar18 = 0;
        }
        else {
          uVar18 = (**(code **)(*plVar13 + 0x168))(plVar13,*(undefined8 *)(*plVar13 + 0x170));
        }
        uVar11 = FUN_058c6e28(param_2,0);
        uVar18 = FUN_0536d554(uVar18,*(undefined8 *)PTR_DAT_06a12a30,uVar11,0);
        if (plVar8 == (long *)0x0) goto LAB_059441e4;
        (**(code **)(*plVar8 + 0x518))(plVar8,uVar9,uVar18,*(undefined8 *)(*plVar8 + 0x520));
        if (param_2[0xf] == 0) goto LAB_059441e4;
        uVar9 = FUN_058ae3f4(param_2[0xf],0);
        if (*(long *)(param_1 + 0x30) == 0) goto LAB_059441e4;
        uVar12 = FUN_0536ba54(uVar9,*(undefined8 *)(*(long *)(param_1 + 0x30) + 0x50),0);
        if ((uVar12 & 1) != 0) {
          plVar13 = *(long **)(param_1 + 0x28);
          uVar9 = FUN_058c8a30(param_2,0);
          if (plVar13 == (long *)0x0) goto LAB_059441e4;
          (**(code **)(*plVar13 + 0x2f8))(plVar13,uVar9,*(undefined8 *)(*plVar13 + 0x300));
          if (param_2[0xf] == 0) goto LAB_059441e4;
          uVar9 = FUN_058ae3f4(param_2[0xf],0);
          FUN_05942974(param_1,uVar9);
        }
      }
    }
  }
  bVar2 = *(byte *)(param_2 + 4) ^ 1;
  local_68 = (ulong)CONCAT14(*(byte *)(param_2 + 4),(undefined4)local_68) ^ 0x100000000;
  iVar7 = (**(code **)(*param_2 + 0x1d8))(param_2,*(undefined8 *)(*param_2 + 0x1e0));
  if ((iVar7 == 2) && (bVar2 != 0)) {
    (**(code **)(*plVar8 + 0x518))
              (plVar8,*(undefined8 *)Assets_Scripts_HoleSceneManager_<GetMiniMap>d__13_TypeInfo,
               *(undefined8 *)OVR_OpenVR_IVROverlay__SetOverlayTexelAspect_TypeInfo,
               *(undefined8 *)(*plVar8 + 0x520));
  }
  iVar7 = (**(code **)(*param_2 + 0x1d8))(param_2,*(undefined8 *)(*param_2 + 0x1e0));
  if (iVar7 == 4) {
    uVar18 = *(undefined8 *)Assets_Scripts_HoleSceneManager_<GetMiniMap>d__13_TypeInfo;
    uVar9 = *(undefined8 *)OVR_OpenVR_IVROverlay__SetOverlayTexture_TypeInfo;
    pcVar17 = *(code **)(*plVar8 + 0x518);
    uVar11 = *(undefined8 *)(*plVar8 + 0x520);
  }
  else {
    iVar7 = (**(code **)(*param_2 + 0x1d8))(param_2,*(undefined8 *)(*param_2 + 0x1e0));
    if ((iVar7 == 2) || (bVar2 != 0)) goto LAB_0594413c;
    if (*(int *)(*(long *)PTR_DAT_069fc178 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    uVar9 = FUN_0547e2f8(0);
    uVar9 = FUN_054e58ac((long)&local_68 + 4,uVar9,0);
    uVar18 = *(undefined8 *)UnityEngine_InputSystem_HID_HID_HIDDeviceDescriptor_TypeInfo;
    pcVar17 = *(code **)(*plVar8 + 0x518);
    uVar11 = *(undefined8 *)(*plVar8 + 0x520);
  }
  (*pcVar17)(plVar8,uVar18,uVar9,uVar11);
LAB_0594413c:
  iVar7 = (**(code **)(*param_2 + 0x1d8))(param_2,*(undefined8 *)(*param_2 + 0x1e0));
  if ((iVar7 == 1) && ((param_5 & 1) != 0)) {
    local_68 = CONCAT44(local_68._4_4_,*(undefined4 *)((long)param_2 + 100));
    if (*(int *)(*(long *)PTR_DAT_069fc178 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    uVar9 = FUN_0547e2f8(0);
    uVar9 = FUN_054e58ac(&local_68,uVar9,0);
    (**(code **)(*plVar8 + 0x558))
              (plVar8,*(undefined8 *)OVR_OpenVR_IVRApplications__LaunchTemplateApplication_TypeInfo,
               *(undefined8 *)System_Xml_Schema_XmlSchemaComplexContentExtension_TypeInfo,uVar9,
               *(undefined8 *)(*plVar8 + 0x560));
  }
  return plVar8;
}


