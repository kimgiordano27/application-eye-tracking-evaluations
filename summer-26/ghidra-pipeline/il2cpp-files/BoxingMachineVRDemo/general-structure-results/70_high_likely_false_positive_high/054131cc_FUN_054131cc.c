/*
FUNCTION_NAME: FUN_054131cc
ENTRY_POINT: 054131cc
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 89
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_21;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_4;frame_or_lifecycle_behavior
*/


long * FUN_054131cc(long param_1,long param_2,long *param_3,undefined8 param_4,uint param_5)

{
  byte bVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  long *plVar10;
  undefined8 uVar11;
  ulong uVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  undefined8 uVar16;
  long *plVar17;
  long *plVar18;
  long *plVar19;
  long *plVar20;
  long *plVar21;
  long *plVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 *puVar25;
  long lVar26;
  undefined8 *puVar27;
  long *plVar28;
  long lVar29;
  uint uVar30;
  undefined8 local_70;
  undefined4 local_68;
  undefined1 local_64 [4];
  
  if ((DAT_06b7e540 & 1) == 0) {
    FUN_02d6084c(PTR_DAT_0675eef8);
    FUN_02d6084c(UnityEngine_Gradient_var);
    FUN_02d6084c(UnityEngine_XR_ARFoundation_ARTrackedObjectsChangedEventArgs_var);
    FUN_02d6084c(PTR_DAT_06791188);
    FUN_02d6084c(PTR_DAT_0678fcf8);
    FUN_02d6084c(PTR_DAT_06764da0);
    FUN_02d6084c(PTR_DAT_0678fd00);
    FUN_02d6084c(PTR_DAT_06790148);
    FUN_02d6084c(PTR_DAT_06782548);
    FUN_02d6084c(System_Runtime_InteropServices_DllImportAttribute_var);
    FUN_02d6084c(Unity_XR_CompositionLayers_Emulation_EmulatedLayerDataTypeAttribute_var);
    FUN_02d6084c(UnityEngine_InputSystem_GravitySensor_var);
    FUN_02d6084c(PTR_DAT_0676c698);
    FUN_02d6084c(PTR_DAT_06790b08);
    FUN_02d6084c(UnityEngine_UIElements_BindingContext_var);
    FUN_02d6084c(UnityEngine_InputSystem_Controls_ButtonControl_var);
    FUN_02d6084c(Unity_VisualScripting_DoNotSerializeAttribute_var);
    FUN_02d6084c(System_Globalization_GregorianCalendar_var);
    FUN_02d6084c(Firebase_Firestore_DocumentReference_var);
    FUN_02d6084c(PTR_DAT_067900f8);
    FUN_02d6084c(UnityEngine_InputSystem_Controls_DoubleControl_var);
    FUN_02d6084c(PTR_DAT_06790b00);
    FUN_02d6084c(PTR_DAT_06767f38);
    FUN_02d6084c(UnityEngine_Timeline_GroupTrack_var);
    FUN_02d6084c(PTR_DAT_06772fc8);
    FUN_02d6084c(UnityEngine_InputSystem_Composites_ButtonWithOneModifier_var);
    FUN_02d6084c(System_Guid_var);
    FUN_02d6084c(System_Runtime_InteropServices_GuidAttribute_var);
    FUN_02d6084c(System_ComponentModel_DoubleConverter_var);
    FUN_02d6084c(PTR_DAT_06764ee0);
    FUN_02d6084c(UnityEngine_InputSystem_Controls_DpadControl_var);
    FUN_02d6084c(System_ComponentModel_GuidConverter_var);
    FUN_02d6084c(PTR_DAT_067646b8);
    FUN_02d6084c(UnityEngine_InputSystem_Gyroscope_var);
    FUN_02d6084c(System_IO_Compression_GZipStream_var);
    FUN_02d6084c(UnityEngine_PlayerLoop_EarlyUpdate_var);
    FUN_02d6084c(UnityEngine_GameObject_var);
    FUN_02d6084c(UnityEngine_UIElements_DragAndDropArgs_var);
    FUN_02d6084c(PTR_DAT_06770200);
    FUN_02d6084c(Unity_XR_CompositionLayers_Layers_CustomTransformCameraData_var);
    FUN_02d6084c(System_Runtime_CompilerServices_DecimalConstantAttribute_var);
    FUN_02d6084c(System_Runtime_CompilerServices_ExtensionAttribute_var);
    FUN_02d6084c(UnityEngine_Rendering_Universal_HDRDebugMode_var);
    FUN_02d6084c(VLB_BlendingMode_var);
    FUN_02d6084c(PTR_DAT_06771b30);
    FUN_02d6084c(UnityEngine_Rendering_GlobalDynamicResolutionSettings_var);
    FUN_02d6084c(PTR_DAT_0676b5d0);
    FUN_02d6084c(UnityEngine_InputSystem_HID_HID_var);
    FUN_02d6084c(PTR_DAT_0678d060);
    FUN_02d6084c(PTR_DAT_0675e638);
    FUN_02d6084c(PTR_DAT_06781a48);
    FUN_02d6084c(PTR_DAT_0676b520);
    FUN_02d6084c(Unity_XR_CompositionLayers_Layers_CylinderLayerData_var);
    FUN_02d6084c(PTR_DAT_06769a18);
    FUN_02d6084c(UnityEngine_GUILayoutGroup_var);
    FUN_02d6084c(PTR_DAT_067686e0);
    FUN_02d6084c(PTR_DAT_067902e8);
    FUN_02d6084c(PTR_DAT_067706c8);
    DAT_06b7e540 = 1;
  }
  local_64[0] = 0;
  local_68 = 0;
  if ((param_3 == (long *)0x0) ||
     (plVar10 = (long *)(**(code **)(*param_3 + 0x5f8))
                                  (param_3,*(undefined8 *)VLB_BlendingMode_var,
                                   *(undefined8 *)PTR_DAT_0676c698,*(undefined8 *)PTR_DAT_0676b520,
                                   *(undefined8 *)(*param_3 + 0x600)), puVar3 = PTR_DAT_067900f8,
     param_2 == 0)) goto LAB_05415b58;
  if (*(long *)(param_2 + 0x20) == 0) {
LAB_05413550:
    if (*(int *)(param_1 + 0x5c) != 2) goto LAB_054135a4;
    uVar11 = FUN_0537e8d8(param_2,0);
    if (plVar10 == (long *)0x0) goto LAB_05415b58;
    (**(code **)(*plVar10 + 0x558))
              (plVar10,*(undefined8 *)UnityEngine_UIElements_BindingContext_var,
               *(undefined8 *)puVar3,uVar11,*(undefined8 *)(*plVar10 + 0x560));
    uVar11 = FUN_053868f0(param_2,0);
  }
  else {
    if (*(long *)(param_1 + 0x30) != 0) {
      uVar11 = FUN_0537e8d8(param_2,0);
      if (*(long *)(param_1 + 0x30) == 0) goto LAB_05415b58;
      uVar12 = FUN_04e8c024(uVar11,*(undefined8 *)(*(long *)(param_1 + 0x30) + 0x50),0);
      if ((uVar12 & 1) != 0) goto LAB_05413550;
    }
LAB_054135a4:
    uVar11 = FUN_053868f0(param_2,0);
    if (plVar10 == (long *)0x0) goto LAB_05415b58;
  }
  (**(code **)(*plVar10 + 0x518))
            (plVar10,*(undefined8 *)PTR_DAT_0676b5d0,uVar11,*(undefined8 *)(*plVar10 + 0x520));
  lVar13 = FUN_0537e8d8(param_2,0);
  if (lVar13 == 0) goto LAB_05415b58;
  if (*(int *)(lVar13 + 0x10) == 0) {
    uVar11 = FUN_0537e8d8(param_2,0);
    uVar12 = FUN_04e8cf70(uVar11,0);
    lVar13 = param_2;
    while ((uVar12 & 1) != 0) {
      lVar26 = *(long *)(lVar13 + 0x188);
      if (lVar26 == 0) goto LAB_05415b58;
      uVar12 = *(ulong *)(lVar26 + 0x18);
      if (uVar12 == 0) {
        if (*(long *)(param_1 + 0x30) == 0) {
          uVar11 = *(undefined8 *)PTR_DAT_0675e638;
        }
        else {
          uVar11 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x50);
        }
        break;
      }
      if ((int)uVar12 < 1) break;
      lVar29 = 0;
      while( true ) {
        if ((uint)uVar12 <= (uint)lVar29) goto LAB_05415b5c;
        plVar14 = *(long **)(lVar26 + 0x20 + lVar29 * 8);
        if (plVar14 == (long *)0x0) goto LAB_05415b58;
        lVar15 = (**(code **)(*plVar14 + 0x1b8))(plVar14,*(undefined8 *)(*plVar14 + 0x1c0));
        if (lVar15 != lVar13) break;
        uVar12 = (ulong)*(uint *)(lVar26 + 0x18);
        lVar29 = lVar29 + 1;
        if ((int)*(uint *)(lVar26 + 0x18) <= (int)lVar29) goto LAB_054136bc;
      }
      if (*(uint *)(lVar26 + 0x18) <= (uint)lVar29) {
LAB_05415b5c:
                    /* WARNING: Subroutine does not return */
        FUN_02d60af0();
      }
      plVar14 = *(long **)(lVar26 + 0x20 + lVar29 * 8);
      if ((plVar14 == (long *)0x0) ||
         (lVar13 = (**(code **)(*plVar14 + 0x1b8))(plVar14,*(undefined8 *)(*plVar14 + 0x1c0)),
         lVar13 == 0)) goto LAB_05415b58;
      uVar11 = FUN_0537e8d8(lVar13,0);
      uVar12 = FUN_04e8cf70(uVar11,0);
    }
LAB_054136bc:
    uVar16 = FUN_0537e8d8(param_2,0);
    uVar12 = FUN_04e8c024(uVar16,uVar11,0);
    if ((uVar12 & 1) == 0) goto LAB_0541370c;
    (**(code **)(*plVar10 + 0x518))
              (plVar10,*(undefined8 *)UnityEngine_InputSystem_Gyroscope_var,
               *(undefined8 *)UnityEngine_Rendering_Universal_HDRDebugMode_var,
               *(undefined8 *)(*plVar10 + 0x520));
    bVar2 = true;
  }
  else {
LAB_0541370c:
    bVar2 = false;
  }
  puVar4 = Unity_XR_CompositionLayers_Emulation_EmulatedLayerDataTypeAttribute_var;
  if (*(char *)(param_2 + 0xe9) != '\0') {
    local_64[0] = *(undefined1 *)(param_2 + 0xe8);
    if (*(int *)(*(long *)(PTR_DAT_0675e258 + 0x28) + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    uVar11 = FUN_04f806d0(local_64,0);
    (**(code **)(*plVar10 + 0x558))
              (plVar10,*(undefined8 *)puVar4,*(undefined8 *)puVar3,uVar11,
               *(undefined8 *)(*plVar10 + 0x560));
  }
  puVar4 = Unity_XR_CompositionLayers_Layers_CylinderLayerData_var;
  if (*(char *)(param_2 + 0xc0) != '\0') {
    plVar14 = *(long **)(param_2 + 0xb8);
    if (plVar14 == (long *)0x0) goto LAB_05415b58;
    uVar11 = (**(code **)(*plVar14 + 0x168))(plVar14,*(undefined8 *)(*plVar14 + 0x170));
    (**(code **)(*plVar10 + 0x558))
              (plVar10,*(undefined8 *)puVar4,*(undefined8 *)puVar3,uVar11,
               *(undefined8 *)(*plVar10 + 0x560));
  }
  FUN_0540b510(param_1,param_2,plVar10,param_3);
  plVar14 = *(long **)(param_2 + 0x40);
  if (plVar14 == (long *)0x0) goto LAB_05415b58;
  iVar5 = (**(code **)(*plVar14 + 0x1c8))(plVar14,*(undefined8 *)(*plVar14 + 0x1d0));
  if (iVar5 - 1U < 2) {
    iVar8 = 0;
    iVar9 = 0;
    do {
      plVar17 = (long *)FUN_053b8bc8(plVar14,iVar9,0);
      if (plVar17 == (long *)0x0) goto LAB_05415b58;
      iVar6 = (**(code **)(*plVar17 + 0x1d8))(plVar17,*(undefined8 *)(*plVar17 + 0x1e0));
      if (iVar6 == 4) {
        plVar18 = (long *)FUN_05384820(param_2,0);
        if (plVar18 == (long *)0x0) goto LAB_05415b58;
        iVar6 = (**(code **)(*plVar18 + 0x1c8))(plVar18,*(undefined8 *)(*plVar18 + 0x1d0));
        if (0 < iVar6) {
          iVar6 = 0;
          do {
            plVar19 = (long *)(**(code **)(*plVar18 + 0x208))
                                        (plVar18,iVar6,*(undefined8 *)(*plVar18 + 0x210));
            if (plVar19 == (long *)0x0) goto LAB_05415b58;
            uVar12 = (**(code **)(*plVar19 + 0x1d8))(plVar19,*(undefined8 *)(*plVar19 + 0x1e0));
            if ((uVar12 & 1) != 0) {
              lVar13 = (**(code **)(*plVar18 + 0x208))
                                 (plVar18,iVar6,*(undefined8 *)(*plVar18 + 0x210));
              if ((lVar13 == 0) || (lVar13 = FUN_053ba9c0(lVar13,0), lVar13 == 0))
              goto LAB_05415b58;
              if (*(int *)(lVar13 + 0x18) == 1) {
                lVar13 = (**(code **)(*plVar18 + 0x208))
                                   (plVar18,iVar6,*(undefined8 *)(*plVar18 + 0x210));
                if ((lVar13 == 0) || (lVar13 = FUN_053ba9c0(lVar13,0), lVar13 == 0))
                goto LAB_05415b58;
                if (*(int *)(lVar13 + 0x18) == 0) goto LAB_05415b5c;
                if (*(long **)(lVar13 + 0x20) == plVar17) {
                  iVar8 = iVar8 + 1;
                }
              }
            }
            iVar6 = iVar6 + 1;
            iVar7 = (**(code **)(*plVar18 + 0x1c8))(plVar18,*(undefined8 *)(*plVar18 + 0x1d0));
          } while (iVar6 < iVar7);
        }
      }
      iVar6 = (**(code **)(*plVar17 + 0x1d8))(plVar17,*(undefined8 *)(*plVar17 + 0x1e0));
      iVar9 = iVar9 + 1;
      if (iVar6 == 1) {
        iVar8 = iVar8 + 1;
      }
    } while (iVar9 != iVar5);
    if ((iVar8 == 1) && (*(char *)(param_2 + 0x128) != '\0')) {
      if ((*(long *)(param_2 + 0x40) != 0) &&
         (lVar13 = FUN_053b8bc8(*(long *)(param_2 + 0x40),0,0), lVar13 != 0)) {
        lVar13 = FUN_0540bf84(*(undefined8 *)(lVar13 + 0x38));
        if ((lVar13 == 0) || (*(int *)(lVar13 + 0x10) == 0)) {
          lVar13 = *(long *)System_Runtime_CompilerServices_ExtensionAttribute_var;
        }
        if (*(int *)(*(long *)PTR_DAT_06790148 + 0xe4) == 0) {
          thunk_FUN_02dbd7b4();
        }
        uVar11 = FUN_053f32d0(lVar13,0);
        (**(code **)(*plVar10 + 0x518))
                  (plVar10,*(undefined8 *)PTR_DAT_067686e0,uVar11,*(undefined8 *)(*plVar10 + 0x520))
        ;
        return plVar10;
      }
      goto LAB_05415b58;
    }
  }
  plVar17 = (long *)(**(code **)(*param_3 + 0x5f8))
                              (param_3,*(undefined8 *)VLB_BlendingMode_var,
                               *(undefined8 *)
                                UnityEngine_Rendering_GlobalDynamicResolutionSettings_var,
                               *(undefined8 *)PTR_DAT_0676b520,*(undefined8 *)(*param_3 + 0x600));
  lVar13 = FUN_0538116c(param_2,0);
  if (lVar13 == 0) goto LAB_05415b58;
  uVar12 = FUN_05679f04(lVar13,0);
  if (((uVar12 & 1) == 0) && (*(int *)(param_1 + 0x5c) != 2)) {
    lVar13 = FUN_0538116c(param_2,0);
    if (lVar13 == 0) goto LAB_05415b58;
    plVar18 = (long *)FUN_05416194(param_1,*(undefined8 *)(lVar13 + 0x18));
    lVar13 = FUN_0538116c(param_2,0);
    if (lVar13 == 0) goto LAB_05415b58;
    uVar12 = FUN_04e8cf70(*(undefined8 *)(lVar13 + 0x18),0);
    if ((uVar12 & 1) != 0) {
      if ((*(long *)(param_1 + 0x30) == 0) || (!bVar2)) {
        uVar11 = FUN_0537e8d8(param_2,0);
      }
      else {
        uVar11 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x50);
      }
      plVar18 = (long *)FUN_05416194(param_1,uVar11);
    }
    lVar13 = FUN_0538116c(param_2,0);
    if (lVar13 == 0) goto LAB_05415b58;
    lVar13 = FUN_05417a34(lVar13,plVar18,*(undefined8 *)(lVar13 + 0x10));
    if (lVar13 == 0) {
      if (plVar18 == (long *)0x0) goto LAB_05415b58;
      (**(code **)(*plVar18 + 0x2d8))(plVar18,plVar17,*(undefined8 *)(*plVar18 + 0x2e0));
    }
    lVar13 = FUN_0538116c(param_2,0);
    if ((lVar13 == 0) || (plVar17 == (long *)0x0)) goto LAB_05415b58;
    (**(code **)(*plVar17 + 0x518))
              (plVar17,*(undefined8 *)PTR_DAT_0676b5d0,*(undefined8 *)(lVar13 + 0x10),
               *(undefined8 *)(*plVar17 + 0x520));
  }
  else {
    (**(code **)(*plVar10 + 0x2d8))(plVar10,plVar17,*(undefined8 *)(*plVar10 + 0x2e0));
  }
  lVar13 = FUN_0538116c(param_2,0);
  if (lVar13 == 0) goto LAB_05415b58;
  uVar12 = FUN_05679f04(lVar13,0);
  if (((uVar12 & 1) == 0) && (*(int *)(param_1 + 0x5c) != 2)) {
    plVar18 = *(long **)(param_1 + 0x28);
    lVar13 = FUN_0538116c(param_2,0);
    if ((lVar13 == 0) || (plVar18 == (long *)0x0)) goto LAB_05415b58;
    plVar18 = (long *)(**(code **)(*plVar18 + 0x308))
                                (plVar18,*(undefined8 *)(lVar13 + 0x18),
                                 *(undefined8 *)(*plVar18 + 0x310));
    lVar13 = FUN_0538116c(param_2,0);
    if (lVar13 == 0) goto LAB_05415b58;
    if ((plVar18 != (long *)0x0) && (*plVar18 != *(long *)(PTR_DAT_0675e258 + 0x90))) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60e88(plVar18,*(long *)(PTR_DAT_0675e258 + 0x90));
    }
    uVar11 = FUN_05418324(plVar18,*(undefined8 *)(lVar13 + 0x10));
    (**(code **)(*plVar10 + 0x518))
              (plVar10,*(undefined8 *)PTR_DAT_067686e0,uVar11,*(undefined8 *)(*plVar10 + 0x520));
  }
  lVar13 = *(long *)(param_2 + 0xf8);
  puVar25 = (undefined8 *)VLB_BlendingMode_var;
  puVar27 = (undefined8 *)PTR_DAT_0676b520;
  if (lVar13 != 0) {
    plVar18 = (long *)(**(code **)(*param_3 + 0x5f8))
                                (param_3,*(undefined8 *)VLB_BlendingMode_var,
                                 *(undefined8 *)System_Globalization_GregorianCalendar_var,
                                 *(undefined8 *)PTR_DAT_0676b520,*(undefined8 *)(*param_3 + 0x600));
    uVar11 = thunk_FUN_02d709fc(lVar13,0);
    uVar16 = *(undefined8 *)UnityEngine_Gradient_var;
    if (*(int *)(*(long *)(PTR_DAT_0675e258 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(*(long *)(PTR_DAT_0675e258 + 0xe0));
    }
    uVar16 = FUN_05015c2c(uVar16,0);
    uVar12 = FUN_0501fa14(uVar11,uVar16,0);
    if ((uVar12 & 1) == 0) {
      FUN_05416878(param_1,lVar13,plVar18);
    }
    else {
      FUN_0540b510(param_1,lVar13,plVar18,param_3);
    }
    FUN_0540ade0(*(undefined8 *)(lVar13 + 0xa0),plVar18,0);
    if (*(char *)(lVar13 + 0x20) != '\0') {
      (**(code **)(*plVar10 + 0x558))
                (plVar10,*(undefined8 *)System_Guid_var,
                 **(undefined8 **)(*(long *)(PTR_DAT_0675e258 + 0x90) + 0xb8),
                 *(undefined8 *)PTR_DAT_06771b30,*(undefined8 *)(*plVar10 + 0x560));
    }
    if (*(char *)(lVar13 + 0x95) == '\0') {
      FUN_0540da50(*(undefined8 *)(lVar13 + 0x38));
      uVar11 = FUN_05398174(lVar13,0);
      uVar11 = FUN_05397f08(lVar13,uVar11,0);
      puVar27 = (undefined8 *)PTR_DAT_067900f8;
      if (plVar18 == (long *)0x0) goto LAB_05415b58;
      (**(code **)(*plVar18 + 0x558))
                (plVar18,*(undefined8 *)PTR_DAT_0678d060,*(undefined8 *)PTR_DAT_067900f8,uVar11,
                 *(undefined8 *)(*plVar18 + 0x560));
    }
    else {
      puVar27 = (undefined8 *)PTR_DAT_067900f8;
      if (plVar18 == (long *)0x0) goto LAB_05415b58;
    }
    (**(code **)(*plVar18 + 0x558))
              (plVar18,*(undefined8 *)PTR_DAT_067902e8,*puVar27,*(undefined8 *)(lVar13 + 0x30),
               *(undefined8 *)(*plVar18 + 0x560));
    local_68 = *(undefined4 *)(lVar13 + 100);
    if (*(int *)(*(long *)PTR_DAT_0675eef8 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    uVar11 = FUN_04f8e414(0);
    uVar11 = FUN_05004a00(&local_68,uVar11,0);
    (**(code **)(*plVar18 + 0x558))
              (plVar18,*(undefined8 *)
                        Unity_XR_CompositionLayers_Layers_CustomTransformCameraData_var,*puVar27,
               uVar11,*(undefined8 *)(*plVar18 + 0x560));
    if (plVar17 == (long *)0x0) goto LAB_05415b58;
    (**(code **)(*plVar17 + 0x2d8))(plVar17,plVar18,*(undefined8 *)(*plVar17 + 0x2e0));
    puVar25 = (undefined8 *)VLB_BlendingMode_var;
    puVar27 = (undefined8 *)PTR_DAT_0676b520;
    plVar17 = (long *)(**(code **)(*param_3 + 0x5f8))
                                (param_3,*(undefined8 *)VLB_BlendingMode_var,
                                 *(undefined8 *)PTR_DAT_06770200,*(undefined8 *)PTR_DAT_0676b520,
                                 *(undefined8 *)(*param_3 + 0x600));
    (**(code **)(*plVar18 + 0x2d8))(plVar18,plVar17,*(undefined8 *)(*plVar18 + 0x2e0));
    FUN_05416428(param_1,lVar13,param_3,plVar17);
  }
  plVar18 = (long *)(**(code **)(*param_3 + 0x5f8))
                              (param_3,*puVar25,*(undefined8 *)UnityEngine_Timeline_GroupTrack_var,
                               *puVar27,*(undefined8 *)(*param_3 + 0x600));
  if (plVar17 == (long *)0x0) goto LAB_05415b58;
  uVar11 = (**(code **)(*plVar17 + 0x2d8))(plVar17,plVar18,*(undefined8 *)(*plVar17 + 0x2e0));
  FUN_05417d24(uVar11,param_2);
  if (0 < iVar5) {
    iVar9 = 0;
    do {
      plVar19 = (long *)FUN_053b8bc8(plVar14,iVar9,0);
      if (plVar19 == (long *)0x0) goto LAB_05415b58;
      iVar8 = (**(code **)(*plVar19 + 0x1d8))(plVar19,*(undefined8 *)(*plVar19 + 0x1e0));
      if ((iVar8 != 3) &&
         ((((iVar8 = (**(code **)(*plVar19 + 0x1d8))(plVar19,*(undefined8 *)(*plVar19 + 0x1e0)),
            iVar8 == 2 ||
            (iVar8 = (**(code **)(*plVar19 + 0x1d8))(plVar19,*(undefined8 *)(*plVar19 + 0x1e0)),
            iVar8 == 1)) ||
           (iVar8 = (**(code **)(*plVar19 + 0x1d8))(plVar19,*(undefined8 *)(*plVar19 + 0x1e0)),
           iVar8 == 4)) && (uVar12 = FUN_054182e0(param_1,plVar19), (uVar12 & 1) == 0)))) {
        iVar8 = (**(code **)(*plVar19 + 0x1d8))(plVar19,*(undefined8 *)(*plVar19 + 0x1e0));
        uVar11 = FUN_05416f78(param_1,plVar19,param_3);
        plVar19 = plVar18;
        if (iVar8 != 1) {
          plVar19 = plVar17;
        }
        if (plVar19 == (long *)0x0) goto LAB_05415b58;
        (**(code **)(*plVar19 + 0x2d8))(plVar19,uVar11,*(undefined8 *)(*plVar19 + 0x2e0));
      }
      iVar9 = iVar9 + 1;
    } while (iVar5 != iVar9);
  }
  puVar27 = (undefined8 *)VLB_BlendingMode_var;
  if ((*(long *)(param_2 + 0xf8) == 0) && ((param_5 & 1) != 0)) {
    plVar14 = (long *)FUN_05384820(param_2,0);
    if (plVar14 == (long *)0x0) goto LAB_05415b58;
    iVar5 = (**(code **)(*plVar14 + 0x1c8))(plVar14,*(undefined8 *)(*plVar14 + 0x1d0));
    if (0 < iVar5) {
      iVar5 = 0;
      do {
        plVar19 = (long *)(**(code **)(*plVar14 + 0x208))
                                    (plVar14,iVar5,*(undefined8 *)(*plVar14 + 0x210));
        if (plVar19 == (long *)0x0) goto LAB_05415b58;
        uVar12 = (**(code **)(*plVar19 + 0x1d8))(plVar19,*(undefined8 *)(*plVar19 + 0x1e0));
        if ((uVar12 & 1) != 0) {
          plVar19 = (long *)(**(code **)(*plVar14 + 0x208))
                                      (plVar14,iVar5,*(undefined8 *)(*plVar14 + 0x210));
          if (plVar19 == (long *)0x0) goto LAB_05415b58;
          lVar13 = (**(code **)(*plVar19 + 0x188))(plVar19,*(undefined8 *)(*plVar19 + 400));
          if (lVar13 == param_2) {
            plVar19 = (long *)(**(code **)(*param_3 + 0x5f8))
                                        (param_3,*puVar27,*(undefined8 *)PTR_DAT_0676c698,
                                         *(undefined8 *)PTR_DAT_0676b520,
                                         *(undefined8 *)(*param_3 + 0x600));
            uVar11 = FUN_053868f0(param_2,0);
            if ((plVar19 == (long *)0x0) ||
               ((**(code **)(*plVar19 + 0x518))
                          (plVar19,*(undefined8 *)PTR_DAT_06772fc8,uVar11,
                           *(undefined8 *)(*plVar19 + 0x520)), lVar13 == 0)) goto LAB_05415b58;
          }
          else {
            if (lVar13 == 0) goto LAB_05415b58;
            iVar9 = FUN_05385b20(lVar13,0);
            if (iVar9 < 2) {
              plVar19 = (long *)FUN_054131cc(param_1,lVar13,param_3,param_4,1);
            }
            else {
              plVar19 = (long *)(**(code **)(*param_3 + 0x5f8))
                                          (param_3,*puVar27,*(undefined8 *)PTR_DAT_0676c698,
                                           *(undefined8 *)PTR_DAT_0676b520,
                                           *(undefined8 *)(*param_3 + 0x600));
              uVar11 = FUN_053868f0(lVar13,0);
              if (plVar19 == (long *)0x0) goto LAB_05415b58;
              (**(code **)(*plVar19 + 0x518))
                        (plVar19,*(undefined8 *)PTR_DAT_06772fc8,uVar11,
                         *(undefined8 *)(*plVar19 + 0x520));
            }
          }
          uVar11 = FUN_0537e8d8(lVar13,0);
          uVar16 = FUN_0537e8d8(param_2,0);
          uVar12 = thunk_FUN_04e8bd3c(uVar11,uVar16,0);
          if ((uVar12 & 1) != 0) {
            if (plVar19 == (long *)0x0) goto LAB_05415b58;
            (**(code **)(*plVar19 + 0x518))
                      (plVar19,*(undefined8 *)UnityEngine_InputSystem_Controls_ButtonControl_var,
                       *(undefined8 *)PTR_DAT_067706c8,*(undefined8 *)(*plVar19 + 0x520));
            (**(code **)(*plVar19 + 0x518))
                      (plVar19,*(undefined8 *)
                                UnityEngine_InputSystem_Composites_ButtonWithOneModifier_var,
                       *(undefined8 *)System_IO_Compression_GZipStream_var,
                       *(undefined8 *)(*plVar19 + 0x520));
          }
          uVar11 = FUN_0537e8d8(lVar13,0);
          uVar16 = FUN_0537e8d8(param_2,0);
          uVar12 = thunk_FUN_04e8bd3c(uVar11,uVar16,0);
          if ((uVar12 & 1) == 0) {
            lVar26 = FUN_0537e8d8(lVar13,0);
            if (lVar26 == 0) goto LAB_05415b58;
            if ((*(int *)(lVar26 + 0x10) != 0) && (*(int *)(param_1 + 0x5c) != 2)) {
              iVar9 = FUN_05385b20(lVar13,0);
              if (iVar9 < 2) {
                uVar11 = FUN_0537e8d8(lVar13,0);
                plVar20 = (long *)FUN_05416194(param_1,uVar11);
                if (plVar20 == (long *)0x0) goto LAB_05415b58;
                (**(code **)(*plVar20 + 0x2d8))(plVar20,plVar19,*(undefined8 *)(*plVar20 + 0x2e0));
              }
              plVar19 = (long *)(**(code **)(*param_3 + 0x5f8))
                                          (param_3,*puVar27,*(undefined8 *)PTR_DAT_0676c698,
                                           *(undefined8 *)PTR_DAT_0676b520,
                                           *(undefined8 *)(*param_3 + 0x600));
              plVar20 = *(long **)(param_1 + 0x28);
              uVar11 = FUN_0537e8d8(lVar13,0);
              if (plVar20 == (long *)0x0) goto LAB_05415b58;
              plVar20 = (long *)(**(code **)(*plVar20 + 0x308))
                                          (plVar20,uVar11,*(undefined8 *)(*plVar20 + 0x310));
              uVar11 = FUN_053868f0(lVar13,0);
              if ((plVar20 != (long *)0x0) && (*plVar20 != *(long *)(PTR_DAT_0675e258 + 0x90)))
              goto LAB_05415b7c;
              uVar11 = FUN_04e8db00(plVar20,*(undefined8 *)PTR_DAT_067646b8,uVar11,0);
              if (plVar19 == (long *)0x0) goto LAB_05415b58;
              (**(code **)(*plVar19 + 0x518))
                        (plVar19,*(undefined8 *)PTR_DAT_06772fc8,uVar11,
                         *(undefined8 *)(*plVar19 + 0x520));
              puVar27 = (undefined8 *)VLB_BlendingMode_var;
            }
          }
          if (plVar18 == (long *)0x0) goto LAB_05415b58;
          (**(code **)(*plVar18 + 0x2d8))(plVar18,plVar19,*(undefined8 *)(*plVar18 + 0x2e0));
          plVar20 = (long *)(**(code **)(*plVar14 + 0x208))
                                      (plVar14,iVar5,*(undefined8 *)(*plVar14 + 0x210));
          if (plVar20 == (long *)0x0) goto LAB_05415b58;
          lVar13 = (**(code **)(*plVar20 + 0x208))(plVar20,*(undefined8 *)(*plVar20 + 0x210));
          if (lVar13 == 0) {
            plVar20 = *(long **)(param_1 + 0x48);
            if ((plVar20 == (long *)0x0) ||
               (plVar20 = (long *)(**(code **)(*plVar20 + 0x5f8))
                                            (plVar20,*puVar27,*(undefined8 *)PTR_DAT_06781a48,
                                             *(undefined8 *)PTR_DAT_0676b520,
                                             *(undefined8 *)(*plVar20 + 0x600)),
               plVar19 == (long *)0x0)) goto LAB_05415b58;
            (**(code **)(*plVar19 + 0x2c8))(plVar19,plVar20,*(undefined8 *)(*plVar19 + 0x2d0));
            plVar19 = *(long **)(param_1 + 0x48);
            if ((plVar19 == (long *)0x0) ||
               (plVar19 = (long *)(**(code **)(*plVar19 + 0x5f8))
                                            (plVar19,*puVar27,
                                             *(undefined8 *)UnityEngine_GameObject_var,
                                             *(undefined8 *)PTR_DAT_0676b520,
                                             *(undefined8 *)(*plVar19 + 0x600)),
               plVar20 == (long *)0x0)) goto LAB_05415b58;
            (**(code **)(*plVar20 + 0x2d8))(plVar20,plVar19,*(undefined8 *)(*plVar20 + 0x2e0));
            uVar11 = (**(code **)(*plVar14 + 0x208))
                               (plVar14,iVar5,*(undefined8 *)(*plVar14 + 0x210));
            uVar11 = FUN_0541273c(param_1,uVar11,param_3);
            if (plVar19 == (long *)0x0) goto LAB_05415b58;
            (**(code **)(*plVar19 + 0x2d8))(plVar19,uVar11,*(undefined8 *)(*plVar19 + 0x2e0));
          }
        }
        iVar5 = iVar5 + 1;
        iVar9 = (**(code **)(*plVar14 + 0x1c8))(plVar14,*(undefined8 *)(*plVar14 + 0x1d0));
      } while (iVar5 < iVar9);
    }
  }
  if ((plVar18 != (long *)0x0) &&
     (uVar12 = (**(code **)(*plVar18 + 0x328))(plVar18,*(undefined8 *)(*plVar18 + 0x330)),
     (uVar12 & 1) == 0)) {
    (**(code **)(*plVar17 + 0x2b8))(plVar17,plVar18,*(undefined8 *)(*plVar17 + 0x2c0));
  }
  plVar14 = *(long **)(param_2 + 0x48);
  if (*(long *)(param_1 + 0x30) == 0) {
LAB_05414538:
    puVar25 = *(undefined8 **)(*(long *)(PTR_DAT_0675e258 + 0x90) + 0xb8);
  }
  else {
    lVar13 = *(long *)(*(long *)(param_1 + 0x30) + 0x50);
    if (lVar13 == 0) goto LAB_05415b58;
    puVar25 = (undefined8 *)UnityEngine_InputSystem_HID_HID_var;
    if (*(int *)(lVar13 + 0x10) == 0) goto LAB_05414538;
  }
  if (*(int *)(param_1 + 0x5c) == 2) {
LAB_054145f8:
    local_70 = *puVar25;
  }
  else {
    uVar11 = FUN_0537e8d8(param_2,0);
    FUN_05416194(param_1,uVar11);
    lVar13 = FUN_0537e8d8(param_2,0);
    if (lVar13 == 0) goto LAB_05415b58;
    if (*(int *)(lVar13 + 0x10) == 0) {
      puVar25 = *(undefined8 **)(*(long *)(PTR_DAT_0675e258 + 0x90) + 0xb8);
      goto LAB_054145f8;
    }
    plVar17 = *(long **)(param_1 + 0x28);
    uVar11 = FUN_0537e8d8(param_2,0);
    if (plVar17 == (long *)0x0) goto LAB_05415b58;
    plVar20 = (long *)(**(code **)(*plVar17 + 0x308))
                                (plVar17,uVar11,*(undefined8 *)(*plVar17 + 0x310));
    if ((plVar20 != (long *)0x0) && (*plVar20 != *(long *)(PTR_DAT_0675e258 + 0x90))) {
LAB_05415b7c:
                    /* WARNING: Subroutine does not return */
      FUN_02d60e88(plVar20);
    }
    local_70 = FUN_04e83184(plVar20,*(undefined8 *)PTR_DAT_067646b8,0);
  }
  if (plVar14 != (long *)0x0) {
    iVar5 = (**(code **)(*plVar14 + 0x1c8))(plVar14,*(undefined8 *)(*plVar14 + 0x1d0));
    if (0 < iVar5) {
      iVar5 = 0;
      plVar17 = (long *)PTR_DAT_0678fd00;
      plVar18 = (long *)PTR_DAT_0678fcf8;
      do {
        plVar19 = (long *)FUN_053b5a7c(plVar14,iVar5,0);
        if (plVar19 == (long *)0x0) {
System_Runtime_Diagnostics_EtwDiagnosticTrace__get_DefaultEtwProviderId:
          plVar19 = (long *)FUN_053b5a7c(plVar14,iVar5,0);
          if (plVar19 != (long *)0x0) {
            bVar1 = *(byte *)(*plVar18 + 0x130);
            if (((bVar1 <= *(byte *)(*plVar19 + 0x130)) &&
                (*(long *)(*(long *)(*plVar19 + 200) + (ulong)bVar1 * 8 + -8) == *plVar18)) &&
               ((param_5 & 1) != 0)) {
              plVar19 = (long *)FUN_053b5a7c(plVar14,iVar5,0);
              if (plVar19 != (long *)0x0) {
                bVar1 = *(byte *)(*plVar18 + 0x130);
                if ((*(byte *)(*plVar19 + 0x130) < bVar1) ||
                   (*(long *)(*(long *)(*plVar19 + 200) + (ulong)bVar1 * 8 + -8) != *plVar18)) {
                    /* WARNING: Subroutine does not return */
                  FUN_02d60e88(plVar19);
                }
              }
              plVar20 = *(long **)(param_1 + 0x38);
              if (plVar20 == (long *)0x0) goto LAB_05415b58;
              iVar9 = (**(code **)(*plVar20 + 0x298))(plVar20,*(undefined8 *)(*plVar20 + 0x2a0));
              if (iVar9 < 1) {
                uVar12 = FUN_054182e0(param_1,plVar19);
                if ((uVar12 & 1) == 0) {
                  if (plVar19 == (long *)0x0) goto LAB_05415b58;
LAB_05414d3c:
                  plVar17 = (long *)FUN_053e1128(plVar19,0);
                  lVar13 = FUN_053e0970(plVar19,0);
                  lVar26 = (**(code **)(*plVar19 + 0x2c8))
                                     (plVar19,*(undefined8 *)(*plVar19 + 0x2d0));
                  if (lVar26 == 0) goto LAB_05415b58;
                  lVar26 = *(long *)(lVar26 + 0x48);
                  uVar11 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_0678fd00);
                  FUN_053eb24c(uVar11,*(undefined8 *)UnityEngine_GUILayoutGroup_var,lVar13,0);
                  if (lVar26 == 0) goto LAB_05415b58;
                  plVar20 = (long *)FUN_053b6184(lVar26,uVar11,0);
                  if (plVar20 == (long *)0x0) {
                    plVar18 = (long *)(**(code **)(*param_3 + 0x5f8))
                                                (param_3,*(undefined8 *)VLB_BlendingMode_var,
                                                 *(undefined8 *)PTR_DAT_06769a18,
                                                 *(undefined8 *)PTR_DAT_0676b520,
                                                 *(undefined8 *)(*param_3 + 0x600));
                    uVar11 = FUN_053b56cc(plVar19,0);
                    if (*(int *)(*(long *)PTR_DAT_06782548 + 0xe4) == 0) {
                      thunk_FUN_02dbd7b4(*(long *)PTR_DAT_06782548);
                    }
                    uVar11 = FUN_0566e328(uVar11,0);
                    if (plVar18 == (long *)0x0) goto LAB_05415b58;
                    (**(code **)(*plVar18 + 0x518))
                              (plVar18,*(undefined8 *)PTR_DAT_0676b5d0,uVar11,
                               *(undefined8 *)(*plVar18 + 0x520));
                    if (*(long *)(param_1 + 0x30) == 0) {
LAB_05414edc:
                      uVar11 = FUN_0537e8d8(param_2,0);
                      (**(code **)(*plVar18 + 0x558))
                                (plVar18,*(undefined8 *)System_ComponentModel_DoubleConverter_var,
                                 *(undefined8 *)PTR_DAT_067900f8,uVar11,
                                 *(undefined8 *)(*plVar18 + 0x560));
                    }
                    else {
                      lVar26 = *(long *)(*(long *)(param_1 + 0x30) + 0x28);
                      if (lVar26 == 0) goto LAB_05415b58;
                      iVar9 = FUN_053c77c0(lVar26,*(undefined8 *)(param_2 + 0x90),0);
                      if (iVar9 == -3) goto LAB_05414edc;
                    }
                    plVar22 = (long *)(**(code **)(*param_3 + 0x5f8))
                                                (param_3,*(undefined8 *)VLB_BlendingMode_var,
                                                 *(undefined8 *)PTR_DAT_06767f38,
                                                 *(undefined8 *)PTR_DAT_0676b520,
                                                 *(undefined8 *)(*param_3 + 0x600));
                    lVar26 = (**(code **)(*plVar19 + 0x2c8))
                                       (plVar19,*(undefined8 *)(*plVar19 + 0x2d0));
                    if (lVar26 == 0) goto LAB_05415b58;
                    uVar11 = FUN_053868f0(lVar26,0);
                    uVar11 = FUN_04e8db00(*(undefined8 *)System_ComponentModel_GuidConverter_var,
                                          local_70,uVar11,0);
                    if (plVar22 == (long *)0x0) goto LAB_05415b58;
                    (**(code **)(*plVar22 + 0x518))
                              (plVar22,*(undefined8 *)UnityEngine_InputSystem_GravitySensor_var,
                               uVar11,*(undefined8 *)(*plVar22 + 0x520));
                    (**(code **)(*plVar18 + 0x2d8))
                              (plVar18,plVar22,*(undefined8 *)(*plVar18 + 0x2e0));
                    if (lVar13 == 0) goto LAB_05415b58;
                    if (*(long *)(lVar13 + 0x18) != 0) {
                      plVar22 = (long *)thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_06764da0);
                      FUN_04e9624c(plVar22,0);
                      if (0 < *(int *)(lVar13 + 0x18)) {
                        if (plVar22 == (long *)0x0) goto LAB_05415b58;
                        lVar26 = 0;
                        do {
                          FUN_04e97278(plVar22,0,0);
                          uVar30 = (uint)lVar26;
                          if (*(int *)(param_1 + 0x5c) == 2) {
                            plVar21 = (long *)FUN_04e97bc4(plVar22,local_70,0);
                            if (*(uint *)(lVar13 + 0x18) <= uVar30) goto LAB_05415b5c;
                            lVar29 = *(long *)(lVar13 + 0x20 + lVar26 * 8);
                            if ((lVar29 == 0) ||
                               (uVar11 = FUN_05397bec(lVar29,0), plVar21 == (long *)0x0))
                            goto LAB_05415b58;
                          }
                          else {
                            if (*(uint *)(lVar13 + 0x18) <= uVar30) goto LAB_05415b5c;
                            plVar21 = (long *)(lVar13 + (long)(int)uVar30 * 8 + 0x20);
                            if (*plVar21 == 0) goto LAB_05415b58;
                            uVar11 = FUN_05399824(*plVar21,0);
                            FUN_05416194(param_1,uVar11);
                            if (*(uint *)(lVar13 + 0x18) <= uVar30) goto LAB_05415b5c;
                            if (*plVar21 == 0) goto LAB_05415b58;
                            uVar11 = FUN_05399824(*plVar21,0);
                            uVar12 = FUN_04e8cf70(uVar11,0);
                            if ((uVar12 & 1) == 0) {
                              if (*(uint *)(lVar13 + 0x18) <= uVar30) goto LAB_05415b5c;
                              if (*plVar21 == 0) goto LAB_05415b58;
                              plVar28 = *(long **)(param_1 + 0x28);
                              uVar11 = FUN_05399824(*plVar21,0);
                              if (plVar28 == (long *)0x0) goto LAB_05415b58;
                              uVar11 = (**(code **)(*plVar28 + 0x308))
                                                 (plVar28,uVar11,*(undefined8 *)(*plVar28 + 0x310));
                              lVar29 = FUN_04e98bb0(plVar22,uVar11,0);
                              if (lVar29 == 0) goto LAB_05415b58;
                              FUN_04e98a58(lVar29,0x3a,0);
                            }
                            if (*(uint *)(lVar13 + 0x18) <= uVar30) goto LAB_05415b5c;
                            if (*plVar21 == 0) goto LAB_05415b58;
                            uVar11 = FUN_05397bec(*plVar21,0);
                            plVar21 = plVar22;
                          }
                          FUN_04e97bc4(plVar21,uVar11,0);
                          if (*(uint *)(lVar13 + 0x18) <= uVar30) goto LAB_05415b5c;
                          plVar28 = (long *)(lVar13 + (long)(int)uVar30 * 8 + 0x20);
                          plVar21 = (long *)*plVar28;
                          if (plVar21 == (long *)0x0) goto LAB_05415b58;
                          iVar9 = (**(code **)(*plVar21 + 0x1d8))
                                            (plVar21,*(undefined8 *)(*plVar21 + 0x1e0));
                          if (iVar9 == 2) {
LAB_054151a8:
                            FUN_04e98e18(plVar22,0,0x40,0);
                          }
                          else {
                            if (*(uint *)(lVar13 + 0x18) <= uVar30) goto LAB_05415b5c;
                            plVar28 = (long *)*plVar28;
                            if (plVar28 == (long *)0x0) goto LAB_05415b58;
                            iVar9 = (**(code **)(*plVar28 + 0x1d8))
                                              (plVar28,*(undefined8 *)(*plVar28 + 0x1e0));
                            if (iVar9 == 4) goto LAB_054151a8;
                          }
                          plVar21 = (long *)(**(code **)(*param_3 + 0x5f8))
                                                      (param_3,*(undefined8 *)VLB_BlendingMode_var,
                                                       *(undefined8 *)PTR_DAT_06764ee0,
                                                       *(undefined8 *)PTR_DAT_0676b520,
                                                       *(undefined8 *)(*param_3 + 0x600));
                          uVar11 = (**(code **)(*plVar22 + 0x168))
                                             (plVar22,*(undefined8 *)(*plVar22 + 0x170));
                          if (plVar21 == (long *)0x0) goto LAB_05415b58;
                          (**(code **)(*plVar21 + 0x518))
                                    (plVar21,*(undefined8 *)
                                              UnityEngine_InputSystem_GravitySensor_var,uVar11,
                                     *(undefined8 *)(*plVar21 + 0x520));
                          (**(code **)(*plVar18 + 0x2d8))
                                    (plVar18,plVar21,*(undefined8 *)(*plVar18 + 0x2e0));
                          lVar26 = lVar26 + 1;
                        } while ((int)lVar26 < *(int *)(lVar13 + 0x18));
                      }
                    }
                    plVar22 = *(long **)(param_1 + 0x78);
                    if (plVar22 == (long *)0x0) goto LAB_05415b58;
                    (**(code **)(*plVar22 + 0x298))
                              (plVar22,plVar18,*(undefined8 *)(param_1 + 0x80),
                               *(undefined8 *)(*plVar22 + 0x2a0));
                    plVar18 = (long *)PTR_DAT_0678fcf8;
                  }
                  else {
                    bVar1 = *(byte *)(*(long *)PTR_DAT_0678fd00 + 0x130);
                    if ((*(byte *)(*plVar20 + 0x130) < bVar1) ||
                       (*(long *)(*(long *)(*plVar20 + 200) + (ulong)bVar1 * 8 + -8) !=
                        *(long *)PTR_DAT_0678fd00)) {
                    /* WARNING: Subroutine does not return */
                      FUN_02d60e88(plVar20);
                    }
                  }
                  plVar22 = (long *)(**(code **)(*param_3 + 0x5f8))
                                              (param_3,*(undefined8 *)VLB_BlendingMode_var,
                                               *(undefined8 *)PTR_DAT_06790b08,
                                               *(undefined8 *)PTR_DAT_0676b520,
                                               *(undefined8 *)(*param_3 + 0x600));
                  uVar11 = FUN_053b56cc(plVar19,0);
                  if (*(int *)(*(long *)PTR_DAT_06782548 + 0xe4) == 0) {
                    thunk_FUN_02dbd7b4(*(long *)PTR_DAT_06782548);
                  }
                  uVar11 = FUN_0566e328(uVar11,0);
                  if (plVar22 == (long *)0x0) goto LAB_05415b58;
                  (**(code **)(*plVar22 + 0x518))
                            (plVar22,*(undefined8 *)PTR_DAT_0676b5d0,uVar11,
                             *(undefined8 *)(*plVar22 + 0x520));
                  if (*(long *)(param_1 + 0x30) == 0) {
LAB_05415360:
                    lVar13 = (**(code **)(*plVar19 + 0x1b8))
                                       (plVar19,*(undefined8 *)(*plVar19 + 0x1c0));
                    if (lVar13 == 0) goto LAB_05415b58;
                    uVar11 = FUN_0537e8d8(lVar13,0);
                    (**(code **)(*plVar22 + 0x558))
                              (plVar22,*(undefined8 *)System_ComponentModel_DoubleConverter_var,
                               *(undefined8 *)PTR_DAT_067900f8,uVar11,
                               *(undefined8 *)(*plVar22 + 0x560));
                  }
                  else {
                    lVar26 = *(long *)(*(long *)(param_1 + 0x30) + 0x28);
                    lVar13 = (**(code **)(*plVar19 + 0x2c8))
                                       (plVar19,*(undefined8 *)(*plVar19 + 0x2d0));
                    if ((lVar13 == 0) || (lVar26 == 0)) goto LAB_05415b58;
                    iVar9 = FUN_053c77c0(lVar26,*(undefined8 *)(lVar13 + 0x90),0);
                    if (iVar9 == -3) goto LAB_05415360;
                  }
                  plVar21 = plVar19;
                  if (plVar20 != (long *)0x0) {
                    plVar21 = plVar20;
                  }
                  uVar11 = FUN_053b56cc(plVar21,0);
                  if (*(int *)(*(long *)PTR_DAT_06782548 + 0xe4) == 0) {
                    thunk_FUN_02dbd7b4(*(long *)PTR_DAT_06782548);
                  }
                  uVar11 = FUN_0566e328(uVar11,0);
                  (**(code **)(*plVar22 + 0x518))
                            (plVar22,*(undefined8 *)PTR_DAT_06790b00,uVar11,
                             *(undefined8 *)(*plVar22 + 0x520));
                  lVar13 = plVar19[6];
                  uVar11 = *(undefined8 *)PTR_DAT_06791188;
                  if (*(int *)(*(long *)(PTR_DAT_0675e258 + 0xe0) + 0xe4) == 0) {
                    thunk_FUN_02dbd7b4();
                  }
                  uVar11 = FUN_05015c2c(uVar11,0);
                  FUN_0540ade0(lVar13,plVar22,uVar11);
                  uVar11 = (**(code **)(*plVar19 + 0x178))
                                     (plVar19,*(undefined8 *)(*plVar19 + 0x180));
                  uVar16 = FUN_053b56cc(plVar19,0);
                  uVar12 = FUN_04e8c024(uVar11,uVar16,0);
                  if ((uVar12 & 1) != 0) {
                    uVar11 = (**(code **)(*plVar19 + 0x178))
                                       (plVar19,*(undefined8 *)(*plVar19 + 0x180));
                    (**(code **)(*plVar22 + 0x558))
                              (plVar22,*(undefined8 *)
                                        Unity_VisualScripting_DoNotSerializeAttribute_var,
                               *(undefined8 *)PTR_DAT_067900f8,uVar11,
                               *(undefined8 *)(*plVar22 + 0x560));
                  }
                  if (plVar17 == (long *)0x0) {
                    lVar13 = *plVar22;
                    uVar16 = *(undefined8 *)Firebase_Firestore_DocumentReference_var;
                    uVar23 = *(undefined8 *)PTR_DAT_067900f8;
                    uVar24 = *(undefined8 *)(lVar13 + 0x560);
                    uVar11 = *(undefined8 *)PTR_DAT_06771b30;
LAB_0541562c:
                    (**(code **)(lVar13 + 0x558))(plVar22,uVar16,uVar23,uVar11,uVar24);
                  }
                  else {
                    uVar12 = (**(code **)(*plVar17 + 0x1d8))
                                       (plVar17,*(undefined8 *)(*plVar17 + 0x1e0));
                    if ((uVar12 & 1) != 0) {
                      (**(code **)(*plVar22 + 0x558))
                                (plVar22,*(undefined8 *)
                                          System_Runtime_CompilerServices_DecimalConstantAttribute_var
                                 ,*(undefined8 *)PTR_DAT_067900f8,*(undefined8 *)PTR_DAT_06771b30,
                                 *(undefined8 *)(*plVar22 + 0x560));
                    }
                    lVar13 = plVar17[3];
                    uVar11 = *(undefined8 *)
                              UnityEngine_XR_ARFoundation_ARTrackedObjectsChangedEventArgs_var;
                    if (*(int *)(*(long *)(PTR_DAT_0675e258 + 0xe0) + 0xe4) == 0) {
                      thunk_FUN_02dbd7b4();
                    }
                    uVar11 = FUN_05015c2c(uVar11,0);
                    FUN_0540ade0(lVar13,plVar22,uVar11);
                    uVar11 = (**(code **)(*plVar19 + 0x178))
                                       (plVar19,*(undefined8 *)(*plVar19 + 0x180));
                    uVar16 = (**(code **)(*plVar17 + 0x1c8))
                                       (plVar17,*(undefined8 *)(*plVar17 + 0x1d0));
                    uVar12 = FUN_04e8c024(uVar11,uVar16,0);
                    if ((uVar12 & 1) != 0) {
                      uVar11 = (**(code **)(*plVar17 + 0x1c8))
                                         (plVar17,*(undefined8 *)(*plVar17 + 0x1d0));
                      if (*(int *)(*(long *)PTR_DAT_06782548 + 0xe4) == 0) {
                        thunk_FUN_02dbd7b4(*(long *)PTR_DAT_06782548);
                      }
                      uVar11 = FUN_0566e328(uVar11,0);
                      lVar13 = *plVar22;
                      uVar16 = *(undefined8 *)System_Runtime_InteropServices_DllImportAttribute_var;
                      uVar24 = *(undefined8 *)(lVar13 + 0x560);
                      uVar23 = *(undefined8 *)PTR_DAT_067900f8;
                      goto LAB_0541562c;
                    }
                  }
                  plVar17 = (long *)(**(code **)(*param_3 + 0x5f8))
                                              (param_3,*(undefined8 *)VLB_BlendingMode_var,
                                               *(undefined8 *)PTR_DAT_06767f38,
                                               *(undefined8 *)PTR_DAT_0676b520,
                                               *(undefined8 *)(*param_3 + 0x600));
                  uVar11 = FUN_053868f0(param_2,0);
                  uVar11 = FUN_04e8db00(*(undefined8 *)System_ComponentModel_GuidConverter_var,
                                        local_70,uVar11,0);
                  if (plVar17 == (long *)0x0) goto LAB_05415b58;
                  (**(code **)(*plVar17 + 0x518))
                            (plVar17,*(undefined8 *)UnityEngine_InputSystem_GravitySensor_var,uVar11
                             ,*(undefined8 *)(*plVar17 + 0x520));
                  (**(code **)(*plVar22 + 0x2d8))(plVar22,plVar17,*(undefined8 *)(*plVar22 + 0x2e0))
                  ;
                  iVar9 = (**(code **)(*plVar19 + 0x278))(plVar19,*(undefined8 *)(*plVar19 + 0x280))
                  ;
                  if (iVar9 != 0) {
                    (**(code **)(*plVar19 + 0x278))(plVar19,*(undefined8 *)(*plVar19 + 0x280));
                    uVar11 = FUN_05417bfc();
                    (**(code **)(*plVar22 + 0x558))
                              (plVar22,*(undefined8 *)UnityEngine_UIElements_DragAndDropArgs_var,
                               *(undefined8 *)PTR_DAT_067900f8,uVar11,
                               *(undefined8 *)(*plVar22 + 0x560));
                  }
                  iVar9 = (**(code **)(*plVar19 + 0x2d8))(plVar19,*(undefined8 *)(*plVar19 + 0x2e0))
                  ;
                  if (iVar9 != 1) {
                    (**(code **)(*plVar19 + 0x2d8))(plVar19,*(undefined8 *)(*plVar19 + 0x2e0));
                    uVar11 = FUN_05417c6c();
                    (**(code **)(*plVar22 + 0x558))
                              (plVar22,*(undefined8 *)
                                        UnityEngine_InputSystem_Controls_DoubleControl_var,
                               *(undefined8 *)PTR_DAT_067900f8,uVar11,
                               *(undefined8 *)(*plVar22 + 0x560));
                  }
                  iVar9 = (**(code **)(*plVar19 + 0x298))(plVar19,*(undefined8 *)(*plVar19 + 0x2a0))
                  ;
                  if (iVar9 != 1) {
                    (**(code **)(*plVar19 + 0x298))(plVar19,*(undefined8 *)(*plVar19 + 0x2a0));
                    uVar11 = FUN_05417c6c();
                    (**(code **)(*plVar22 + 0x558))
                              (plVar22,*(undefined8 *)
                                        UnityEngine_InputSystem_Controls_DpadControl_var,
                               *(undefined8 *)PTR_DAT_067900f8,uVar11,
                               *(undefined8 *)(*plVar22 + 0x560));
                  }
                  lVar13 = (**(code **)(*plVar19 + 0x268))
                                     (plVar19,*(undefined8 *)(*plVar19 + 0x270));
                  if (lVar13 == 0) goto LAB_05415b58;
                  if (*(long *)(lVar13 + 0x18) != 0) {
                    plVar17 = (long *)thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_06764da0);
                    FUN_04e9624c(plVar17,0);
                    if (0 < *(int *)(lVar13 + 0x18)) {
                      if (plVar17 == (long *)0x0) goto LAB_05415b58;
                      lVar26 = 0;
                      do {
                        FUN_04e97278(plVar17,0,0);
                        uVar30 = (uint)lVar26;
                        if (*(int *)(param_1 + 0x5c) == 2) {
                          lVar29 = FUN_04e97bc4(plVar17,local_70,0);
                          if (*(uint *)(lVar13 + 0x18) <= uVar30) goto LAB_05415b5c;
                          lVar15 = *(long *)(lVar13 + 0x20 + lVar26 * 8);
                          if ((lVar15 == 0) || (uVar11 = FUN_05397bec(lVar15,0), lVar29 == 0))
                          goto LAB_05415b58;
                          FUN_04e97bc4(lVar29,uVar11,0);
                        }
                        else {
                          if (*(uint *)(lVar13 + 0x18) <= uVar30) goto LAB_05415b5c;
                          plVar18 = (long *)(lVar13 + (long)(int)uVar30 * 8 + 0x20);
                          if (*plVar18 == 0) goto LAB_05415b58;
                          uVar11 = FUN_05399824(*plVar18,0);
                          FUN_05416194(param_1,uVar11);
                          if (*(uint *)(lVar13 + 0x18) <= uVar30) goto LAB_05415b5c;
                          if (*plVar18 == 0) goto LAB_05415b58;
                          uVar11 = FUN_05399824(*plVar18,0);
                          uVar12 = FUN_04e8cf70(uVar11,0);
                          if ((uVar12 & 1) == 0) {
                            if (*(uint *)(lVar13 + 0x18) <= uVar30) goto LAB_05415b5c;
                            if (*plVar18 == 0) goto LAB_05415b58;
                            plVar19 = *(long **)(param_1 + 0x28);
                            uVar11 = FUN_05399824(*plVar18,0);
                            if (plVar19 == (long *)0x0) goto LAB_05415b58;
                            uVar11 = (**(code **)(*plVar19 + 0x308))
                                               (plVar19,uVar11,*(undefined8 *)(*plVar19 + 0x310));
                            lVar29 = FUN_04e98bb0(plVar17,uVar11,0);
                            if (lVar29 == 0) goto LAB_05415b58;
                            FUN_04e98a58(lVar29,0x3a,0);
                          }
                          if (*(uint *)(lVar13 + 0x18) <= uVar30) goto LAB_05415b5c;
                          if (*plVar18 == 0) goto LAB_05415b58;
                          uVar11 = FUN_05397bec(*plVar18,0);
                          FUN_04e97bc4(plVar17,uVar11,0);
                          plVar18 = (long *)PTR_DAT_0678fcf8;
                        }
                        if (*(uint *)(lVar13 + 0x18) <= uVar30) goto LAB_05415b5c;
                        plVar20 = (long *)(lVar13 + (long)(int)uVar30 * 8 + 0x20);
                        plVar19 = (long *)*plVar20;
                        if (plVar19 == (long *)0x0) goto LAB_05415b58;
                        iVar9 = (**(code **)(*plVar19 + 0x1d8))
                                          (plVar19,*(undefined8 *)(*plVar19 + 0x1e0));
                        if (iVar9 == 2) {
LAB_054159fc:
                          FUN_04e98e18(plVar17,0,0x40,0);
                        }
                        else {
                          if (*(uint *)(lVar13 + 0x18) <= uVar30) goto LAB_05415b5c;
                          plVar20 = (long *)*plVar20;
                          if (plVar20 == (long *)0x0) goto LAB_05415b58;
                          iVar9 = (**(code **)(*plVar20 + 0x1d8))
                                            (plVar20,*(undefined8 *)(*plVar20 + 0x1e0));
                          if (iVar9 == 4) goto LAB_054159fc;
                        }
                        plVar19 = (long *)(**(code **)(*param_3 + 0x5f8))
                                                    (param_3,*(undefined8 *)VLB_BlendingMode_var,
                                                     *(undefined8 *)PTR_DAT_06764ee0,
                                                     *(undefined8 *)PTR_DAT_0676b520,
                                                     *(undefined8 *)(*param_3 + 0x600));
                        uVar11 = (**(code **)(*plVar17 + 0x168))
                                           (plVar17,*(undefined8 *)(*plVar17 + 0x170));
                        if (plVar19 == (long *)0x0) goto LAB_05415b58;
                        (**(code **)(*plVar19 + 0x518))
                                  (plVar19,*(undefined8 *)UnityEngine_InputSystem_GravitySensor_var,
                                   uVar11,*(undefined8 *)(*plVar19 + 0x520));
                        (**(code **)(*plVar22 + 0x2d8))
                                  (plVar22,plVar19,*(undefined8 *)(*plVar22 + 0x2e0));
                        lVar26 = lVar26 + 1;
                      } while ((int)lVar26 < *(int *)(lVar13 + 0x18));
                    }
                  }
                  plVar17 = *(long **)(param_1 + 0x78);
                  if (plVar17 == (long *)0x0) goto LAB_05415b58;
                  (**(code **)(*plVar17 + 0x2a8))
                            (plVar17,plVar22,*(undefined8 *)(param_1 + 0x80),
                             *(undefined8 *)(*plVar17 + 0x2b0));
                  plVar17 = (long *)PTR_DAT_0678fd00;
                  puVar27 = (undefined8 *)VLB_BlendingMode_var;
                }
              }
              else {
                if (plVar19 == (long *)0x0) goto LAB_05415b58;
                plVar17 = *(long **)(param_1 + 0x38);
                uVar11 = (**(code **)(*plVar19 + 0x2c8))(plVar19,*(undefined8 *)(*plVar19 + 0x2d0));
                if (plVar17 == (long *)0x0) goto LAB_05415b58;
                uVar12 = (**(code **)(*plVar17 + 0x348))
                                   (plVar17,uVar11,*(undefined8 *)(*plVar17 + 0x350));
                plVar17 = (long *)PTR_DAT_0678fd00;
                if ((uVar12 & 1) != 0) {
                  plVar17 = *(long **)(param_1 + 0x38);
                  uVar11 = (**(code **)(*plVar19 + 0x1b8))
                                     (plVar19,*(undefined8 *)(*plVar19 + 0x1c0));
                  if (plVar17 == (long *)0x0) goto LAB_05415b58;
                  uVar12 = (**(code **)(*plVar17 + 0x348))
                                     (plVar17,uVar11,*(undefined8 *)(*plVar17 + 0x350));
                  plVar17 = (long *)PTR_DAT_0678fd00;
                  if (((uVar12 & 1) != 0) &&
                     (uVar12 = FUN_054182e0(param_1,plVar19), (uVar12 & 1) == 0)) goto LAB_05414d3c;
                }
              }
            }
          }
        }
        else {
          bVar1 = *(byte *)(*plVar17 + 0x130);
          if ((*(byte *)(*plVar19 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar19 + 200) + (ulong)bVar1 * 8 + -8) != *plVar17))
          goto System_Runtime_Diagnostics_EtwDiagnosticTrace__get_DefaultEtwProviderId;
          plVar19 = (long *)FUN_053b5a7c(plVar14,iVar5,0);
          if (plVar19 == (long *)0x0) {
            uVar12 = FUN_054182e0(param_1,0);
            if ((uVar12 & 1) == 0) goto LAB_05415b58;
          }
          else {
            bVar1 = *(byte *)(*plVar17 + 0x130);
            if ((*(byte *)(*plVar19 + 0x130) < bVar1) ||
               (*(long *)(*(long *)(*plVar19 + 200) + (ulong)bVar1 * 8 + -8) != *plVar17)) {
                    /* WARNING: Subroutine does not return */
              FUN_02d60e88(plVar19);
            }
            uVar12 = FUN_054182e0(param_1,plVar19);
            if ((uVar12 & 1) == 0) {
              lVar13 = plVar19[7];
              plVar17 = (long *)(**(code **)(*param_3 + 0x5f8))
                                          (param_3,*puVar27,
                                           *(undefined8 *)
                                            System_Runtime_InteropServices_GuidAttribute_var,
                                           *(undefined8 *)PTR_DAT_0676b520,
                                           *(undefined8 *)(*param_3 + 0x600));
              if (*(long *)(param_1 + 0x30) == 0) {
LAB_05414860:
                uVar11 = FUN_0537e8d8(param_2,0);
                if (plVar17 == (long *)0x0) goto LAB_05415b58;
                (**(code **)(*plVar17 + 0x558))
                          (plVar17,*(undefined8 *)System_ComponentModel_DoubleConverter_var,
                           *(undefined8 *)PTR_DAT_067900f8,uVar11,*(undefined8 *)(*plVar17 + 0x560))
                ;
              }
              else {
                lVar26 = *(long *)(*(long *)(param_1 + 0x30) + 0x28);
                if (lVar26 == 0) goto LAB_05415b58;
                iVar9 = FUN_053c77c0(lVar26,*(undefined8 *)(param_2 + 0x90),0);
                if (iVar9 == -3) goto LAB_05414860;
              }
              uVar11 = FUN_053b56cc(plVar19,0);
              if (*(int *)(*(long *)PTR_DAT_06782548 + 0xe4) == 0) {
                thunk_FUN_02dbd7b4(*(long *)PTR_DAT_06782548);
              }
              uVar11 = FUN_0566e328(uVar11,0);
              if (plVar17 == (long *)0x0) goto LAB_05415b58;
              (**(code **)(*plVar17 + 0x518))
                        (plVar17,*(undefined8 *)PTR_DAT_0676b5d0,uVar11,
                         *(undefined8 *)(*plVar17 + 0x520));
              uVar11 = (**(code **)(*plVar19 + 0x178))(plVar19,*(undefined8 *)(*plVar19 + 0x180));
              uVar16 = FUN_053b56cc(plVar19,0);
              uVar12 = FUN_04e8c024(uVar11,uVar16,0);
              if ((uVar12 & 1) != 0) {
                uVar11 = (**(code **)(*plVar19 + 0x178))(plVar19,*(undefined8 *)(*plVar19 + 0x180));
                (**(code **)(*plVar17 + 0x558))
                          (plVar17,*(undefined8 *)Unity_VisualScripting_DoNotSerializeAttribute_var,
                           *(undefined8 *)PTR_DAT_067900f8,uVar11,*(undefined8 *)(*plVar17 + 0x560))
                ;
              }
              FUN_0540ade0(plVar19[6],plVar17,0);
              plVar18 = (long *)(**(code **)(*param_3 + 0x5f8))
                                          (param_3,*puVar27,*(undefined8 *)PTR_DAT_06767f38,
                                           *(undefined8 *)PTR_DAT_0676b520,
                                           *(undefined8 *)(*param_3 + 0x600));
              uVar11 = FUN_053868f0(param_2,0);
              uVar11 = FUN_04e8db00(*(undefined8 *)System_ComponentModel_GuidConverter_var,local_70,
                                    uVar11,0);
              if (plVar18 == (long *)0x0) goto LAB_05415b58;
              (**(code **)(*plVar18 + 0x518))
                        (plVar18,*(undefined8 *)UnityEngine_InputSystem_GravitySensor_var,uVar11,
                         *(undefined8 *)(*plVar18 + 0x520));
              (**(code **)(*plVar17 + 0x2d8))(plVar17,plVar18,*(undefined8 *)(*plVar17 + 0x2e0));
              uVar12 = System_Runtime_Serialization_XmlObjectSerializerContext__get_IgnoreExtensionDataObject
                                 (plVar19,0);
              if ((uVar12 & 1) != 0) {
                (**(code **)(*plVar17 + 0x558))
                          (plVar17,*(undefined8 *)UnityEngine_PlayerLoop_EarlyUpdate_var,
                           *(undefined8 *)PTR_DAT_067900f8,*(undefined8 *)PTR_DAT_06771b30,
                           *(undefined8 *)(*plVar17 + 0x560));
              }
              if (lVar13 == 0) goto LAB_05415b58;
              if (*(long *)(lVar13 + 0x18) != 0) {
                plVar18 = (long *)thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_06764da0);
                FUN_04e9624c(plVar18,0);
                if (0 < *(int *)(lVar13 + 0x18)) {
                  if (plVar18 == (long *)0x0) goto LAB_05415b58;
                  lVar26 = 0;
                  do {
                    FUN_04e97278(plVar18,0,0);
                    uVar30 = (uint)lVar26;
                    if (*(int *)(param_1 + 0x5c) == 2) {
                      plVar19 = (long *)FUN_04e97bc4(plVar18,local_70,0);
                      if (*(uint *)(lVar13 + 0x18) <= uVar30) goto LAB_05415b5c;
                      lVar29 = *(long *)(lVar13 + 0x20 + lVar26 * 8);
                      if ((lVar29 == 0) || (uVar11 = FUN_05397bec(lVar29,0), plVar19 == (long *)0x0)
                         ) goto LAB_05415b58;
                    }
                    else {
                      if (*(uint *)(lVar13 + 0x18) <= uVar30) goto LAB_05415b5c;
                      plVar19 = (long *)(lVar13 + (long)(int)uVar30 * 8 + 0x20);
                      if (*plVar19 == 0) goto LAB_05415b58;
                      uVar11 = FUN_05399824(*plVar19,0);
                      FUN_05416194(param_1,uVar11);
                      if (*(uint *)(lVar13 + 0x18) <= uVar30) goto LAB_05415b5c;
                      if (*plVar19 == 0) goto LAB_05415b58;
                      uVar11 = FUN_05399824(*plVar19,0);
                      uVar12 = FUN_04e8cf70(uVar11,0);
                      if ((uVar12 & 1) == 0) {
                        if (*(uint *)(lVar13 + 0x18) <= uVar30) goto LAB_05415b5c;
                        if (*plVar19 == 0) goto LAB_05415b58;
                        plVar20 = *(long **)(param_1 + 0x28);
                        uVar11 = FUN_05399824(*plVar19,0);
                        if (plVar20 == (long *)0x0) goto LAB_05415b58;
                        uVar11 = (**(code **)(*plVar20 + 0x308))
                                           (plVar20,uVar11,*(undefined8 *)(*plVar20 + 0x310));
                        lVar29 = FUN_04e98bb0(plVar18,uVar11,0);
                        if (lVar29 == 0) goto LAB_05415b58;
                        FUN_04e98a58(lVar29,0x3a,0);
                      }
                      if (*(uint *)(lVar13 + 0x18) <= uVar30) goto LAB_05415b5c;
                      if (*plVar19 == 0) goto LAB_05415b58;
                      uVar11 = FUN_05397bec(*plVar19,0);
                      plVar19 = plVar18;
                    }
                    FUN_04e97bc4(plVar19,uVar11,0);
                    if (*(uint *)(lVar13 + 0x18) <= uVar30) goto LAB_05415b5c;
                    plVar20 = (long *)(lVar13 + (long)(int)uVar30 * 8 + 0x20);
                    plVar19 = (long *)*plVar20;
                    if (plVar19 == (long *)0x0) goto LAB_05415b58;
                    iVar9 = (**(code **)(*plVar19 + 0x1d8))
                                      (plVar19,*(undefined8 *)(*plVar19 + 0x1e0));
                    if (iVar9 == 2) {
LAB_05414c38:
                      FUN_04e98e18(plVar18,0,0x40,0);
                    }
                    else {
                      if (*(uint *)(lVar13 + 0x18) <= uVar30) goto LAB_05415b5c;
                      plVar20 = (long *)*plVar20;
                      if (plVar20 == (long *)0x0) goto LAB_05415b58;
                      iVar9 = (**(code **)(*plVar20 + 0x1d8))
                                        (plVar20,*(undefined8 *)(*plVar20 + 0x1e0));
                      if (iVar9 == 4) goto LAB_05414c38;
                    }
                    plVar19 = (long *)(**(code **)(*param_3 + 0x5f8))
                                                (param_3,*(undefined8 *)VLB_BlendingMode_var,
                                                 *(undefined8 *)PTR_DAT_06764ee0,
                                                 *(undefined8 *)PTR_DAT_0676b520,
                                                 *(undefined8 *)(*param_3 + 0x600));
                    uVar11 = (**(code **)(*plVar18 + 0x168))
                                       (plVar18,*(undefined8 *)(*plVar18 + 0x170));
                    if (plVar19 == (long *)0x0) goto LAB_05415b58;
                    (**(code **)(*plVar19 + 0x518))
                              (plVar19,*(undefined8 *)UnityEngine_InputSystem_GravitySensor_var,
                               uVar11,*(undefined8 *)(*plVar19 + 0x520));
                    (**(code **)(*plVar17 + 0x2d8))
                              (plVar17,plVar19,*(undefined8 *)(*plVar17 + 0x2e0));
                    lVar26 = lVar26 + 1;
                  } while ((int)lVar26 < *(int *)(lVar13 + 0x18));
                }
              }
              plVar18 = *(long **)(param_1 + 0x78);
              if (plVar18 == (long *)0x0) goto LAB_05415b58;
              (**(code **)(*plVar18 + 0x298))
                        (plVar18,plVar17,*(undefined8 *)(param_1 + 0x80),
                         *(undefined8 *)(*plVar18 + 0x2a0));
              plVar17 = (long *)PTR_DAT_0678fd00;
              plVar18 = (long *)PTR_DAT_0678fcf8;
              puVar27 = (undefined8 *)VLB_BlendingMode_var;
            }
          }
        }
        iVar5 = iVar5 + 1;
        iVar9 = (**(code **)(*plVar14 + 0x1c8))(plVar14,*(undefined8 *)(*plVar14 + 0x1d0));
      } while (iVar5 < iVar9);
    }
    FUN_0540ade0(*(undefined8 *)(param_2 + 0x88),plVar10,0);
    return plVar10;
  }
LAB_05415b58:
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


