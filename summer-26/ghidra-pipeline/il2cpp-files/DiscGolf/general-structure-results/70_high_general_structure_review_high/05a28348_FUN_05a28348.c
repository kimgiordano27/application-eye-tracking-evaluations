/*
FUNCTION_NAME: FUN_05a28348
ENTRY_POINT: 05a28348
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;ray_or_cast_sink_hits_2;telemetry_or_network_hits_4
*/


undefined8 FUN_05a28348(long param_1)

{
  uint uVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 *puVar13;
  long lVar14;
  int iVar15;
  ulong uVar16;
  int *piVar17;
  long *plVar18;
  long *plVar19;
  ulong uVar20;
  
                    /* try { // try from 05a28354 to 05b2835b has its CatchHandler @ 05a28518 */
                    /* try { // try from 05a28368 to 05b28373 has its CatchHandler @ 05a28510 */
  if ((DAT_06dc1882 & 1) == 0) {
    FUN_02d965b8(UnityEngine_UIElements_UIRAtlasAllocator_AreaNode_TypeInfo);
    FUN_02d965b8(UIInputController_<AddIntervalDelayToMenuAxisInput>d__20_TypeInfo);
    FUN_02d965b8(UICanvasController_<DelayedAdjustCanvas>d__9_TypeInfo);
    FUN_02d965b8(UnityEngine_XR_ARSubsystems_XRRaycastSubsystemDescriptor_Cinfo_TypeInfo);
    FUN_02d965b8(PTR_DAT_06a11590);
    FUN_02d965b8(PTR_DAT_069ffaa8);
    FUN_02d965b8(UnityEngine_InputSystem_Layouts_InputControlLayout_ControlItem_var);
    FUN_02d965b8(UnityEngine_XR_ARSubsystems_XRResultStatus_StatusCode_TypeInfo);
    FUN_02d965b8(UnityEngine_XR_ARSubsystems_XRSessionSubsystemDescriptor_Cinfo_TypeInfo);
    FUN_02d965b8(UnityEngine_UIElements_TypeConverterRegistry_ConverterKeyComparer_TypeInfo);
    FUN_02d965b8(UnityEngine_InputSystem_InputControlPath_PathParser_var);
    FUN_02d965b8(PTR_DAT_069fc180);
    FUN_02d965b8(
                UnityEngine_XR_Interaction_Toolkit_Transformers_XRSocketGrabTransformer_CalculateScaleToFit_0000091E_BurstDirectCall_TypeInfo
                );
    FUN_02d965b8(
                UnityEngine_XR_Interaction_Toolkit_Transformers_XRSocketGrabTransformer_CalculateScaleToFit_0000091E_PostfixBurstDelegate_TypeInfo
                );
    FUN_02d965b8(
                UnityEngine_XR_Interaction_Toolkit_Transformers_XRSocketGrabTransformer_FastCalculateRadiusOffset_0000091B_BurstDirectCall_TypeInfo
                );
    DAT_06dc1882 = 1;
  }
  puVar4 = UIInputController_<AddIntervalDelayToMenuAxisInput>d__20_TypeInfo;
  puVar3 = UICanvasController_<DelayedAdjustCanvas>d__9_TypeInfo;
  plVar6 = *(long **)(param_1 + 0x10);
  if (plVar6 != (long *)0x0) {
    lVar7 = (**(code **)(*plVar6 + 0x768))(plVar6,0x18,*(undefined8 *)(*plVar6 + 0x770));
    uVar8 = thunk_FUN_02dd3144(*(undefined8 *)puVar3);
    FUN_04e92874(uVar8,*(undefined8 *)puVar4);
    puVar5 = UnityEngine_XR_ARSubsystems_XRSessionSubsystemDescriptor_Cinfo_TypeInfo;
    puVar4 = UnityEngine_XR_ARSubsystems_XRResultStatus_StatusCode_TypeInfo;
    puVar3 = UnityEngine_InputSystem_InputControlPath_PathParser_var;
    if (lVar7 != 0) {
      uVar9 = thunk_FUN_02dd3144(*(undefined8 *)
                                  UnityEngine_UIElements_TypeConverterRegistry_ConverterKeyComparer_TypeInfo
                                );
      FUN_0400f9fc(uVar9,*(undefined4 *)(lVar7 + 0x18),*(undefined8 *)puVar4);
      lVar10 = thunk_FUN_02dd3144(*(undefined8 *)puVar3);
      FUN_03fb8424(lVar10,*(undefined4 *)(lVar7 + 0x18),*(undefined8 *)puVar5);
      puVar4 = PTR_DAT_06a11590;
      puVar3 = PTR_DAT_069ffaa8;
      if (0 < (int)*(ulong *)(lVar7 + 0x18)) {
        uVar20 = 0;
        uVar16 = *(ulong *)(lVar7 + 0x18) & 0xffffffff;
        do {
          if (uVar16 <= uVar20) goto LAB_05a28ae4;
          plVar18 = *(long **)(lVar7 + uVar20 * 8 + 0x20);
          if (*(char *)(param_1 + 0x62) != '\0') {
            if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
              thunk_FUN_02df485c();
            }
            uVar11 = FUN_05a28c3c();
            if (plVar18 == (long *)0x0) goto System_Xml_Schema_XmlBaseConverter__ToString;
            lVar12 = (**(code **)(*plVar18 + 0x278))
                               (plVar18,uVar11,0,*(undefined8 *)(*plVar18 + 0x280));
            if ((lVar12 == 0) || (*(long *)(lVar12 + 0x18) == 0)) {
              bVar2 = false;
LAB_05a28678:
              if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                thunk_FUN_02df485c();
              }
              uVar11 = FUN_05a28d40();
              lVar12 = (**(code **)(*plVar18 + 0x278))
                                 (plVar18,uVar11,0,*(undefined8 *)(*plVar18 + 0x280));
              if ((lVar12 == 0) || (*(long *)(lVar12 + 0x18) == 0)) {
                if (bVar2) goto LAB_05a286b8;
                goto LAB_05a28844;
              }
              plVar19 = (long *)FUN_02d966a4(*(undefined8 *)PTR_DAT_069fc180,2);
              (**(code **)(*plVar18 + 0x218))(plVar18,*(undefined8 *)(*plVar18 + 0x220));
              lVar7 = FUN_05a15ff0();
              if (plVar19 == (long *)0x0) goto System_Xml_Schema_XmlBaseConverter__ToString;
              if ((lVar7 != 0) &&
                 (lVar10 = thunk_FUN_02dd3048(lVar7,*(undefined8 *)(*plVar19 + 0x40)), lVar10 == 0))
              {
LAB_05a28acc:
                uVar8 = thunk_FUN_02de0bec();
                    /* WARNING: Subroutine does not return */
                FUN_02d96724(uVar8,0);
              }
              if ((int)plVar19[3] == 0) {
LAB_05a28ae4:
                    /* WARNING: Subroutine does not return */
                FUN_02d96868();
              }
              plVar19[4] = lVar7;
              LeanTween__value(plVar19 + 4,lVar7);
              lVar7 = (**(code **)(*plVar18 + 0x208))(plVar18,*(undefined8 *)(*plVar18 + 0x210));
              if ((lVar7 != 0) &&
                 (lVar10 = thunk_FUN_02dd3048(lVar7,*(undefined8 *)(*plVar19 + 0x40)), lVar10 == 0))
              goto LAB_05a28acc;
              if ((*(uint *)(plVar19 + 3) & 0xfffffffe) == 0) goto LAB_05a28ae4;
              plVar19[5] = lVar7;
              LeanTween__value(plVar19 + 5,lVar7);
              puVar13 = (undefined8 *)
                        UnityEngine_XR_Interaction_Toolkit_Transformers_XRSocketGrabTransformer_CalculateScaleToFit_0000091E_BurstDirectCall_TypeInfo
              ;
            }
            else {
              iVar15 = (int)*(long *)(lVar12 + 0x18);
              if (iVar15 < 2) {
                if (iVar15 == 0) goto LAB_05a28ae4;
                plVar19 = *(long **)(lVar12 + 0x20);
                if ((plVar19 != (long *)0x0) &&
                   (*plVar19 !=
                    *(long *)UnityEngine_XR_ARSubsystems_XRRaycastSubsystemDescriptor_Cinfo_TypeInfo
                   )) {
                    /* WARNING: Subroutine does not return */
                  FUN_02d96be0(plVar19);
                }
                lVar12 = thunk_FUN_02dd3144(*(undefined8 *)
                                             UnityEngine_UIElements_UIRAtlasAllocator_AreaNode_TypeInfo
                                           );
                FUN_05a250cc(lVar12,plVar18);
                if (plVar19 == (long *)0x0) goto System_Xml_Schema_XmlBaseConverter__ToString;
                if ((char)plVar19[3] == '\0') {
                  lVar14 = (**(code **)(*plVar18 + 0x208))
                                     (plVar18,*(undefined8 *)(*plVar18 + 0x210));
                }
                else {
                  lVar14 = plVar19[2];
                  if ((lVar14 == 0) || (*(int *)(lVar14 + 0x10) == 0)) {
                    plVar19 = (long *)FUN_02d966a4(*(undefined8 *)PTR_DAT_069fc180,2);
                    lVar7 = (**(code **)(*plVar18 + 0x208))
                                      (plVar18,*(undefined8 *)(*plVar18 + 0x210));
                    if (plVar19 != (long *)0x0) {
                      if ((lVar7 != 0) &&
                         (lVar10 = thunk_FUN_02dd3048(lVar7,*(undefined8 *)(*plVar19 + 0x40)),
                         lVar10 == 0)) goto LAB_05a28acc;
                      if ((int)plVar19[3] == 0) goto LAB_05a28ae4;
                      plVar19[4] = lVar7;
                      LeanTween__value(plVar19 + 4,lVar7);
                      lVar7 = FUN_05a15ff0(plVar6);
                      if ((lVar7 != 0) &&
                         (lVar10 = thunk_FUN_02dd3048(lVar7,*(undefined8 *)(*plVar19 + 0x40)),
                         lVar10 == 0)) goto LAB_05a28acc;
                      if ((*(uint *)(plVar19 + 3) & 0xfffffffe) == 0) goto LAB_05a28ae4;
                      plVar19[5] = lVar7;
                      LeanTween__value(plVar19 + 5,lVar7);
                      uVar8 = *(undefined8 *)
                               UnityEngine_XR_Interaction_Toolkit_Transformers_XRSocketGrabTransformer_CalculateScaleToFit_0000091E_PostfixBurstDelegate_TypeInfo
                      ;
                      goto LAB_05a28b08;
                    }
                    goto System_Xml_Schema_XmlBaseConverter__ToString;
                  }
                }
                if ((lVar12 != 0) && (*(long *)(lVar12 + 0x10) != 0)) {
                  *(long *)(*(long *)(lVar12 + 0x10) + 0x18) = lVar14;
                  LeanTween__value();
                  FUN_05a0d168(uVar9,lVar12,uVar8,0);
                  bVar2 = true;
                  goto LAB_05a28678;
                }
                goto System_Xml_Schema_XmlBaseConverter__ToString;
              }
              plVar19 = (long *)FUN_02d966a4(*(undefined8 *)PTR_DAT_069fc180,2);
              (**(code **)(*plVar18 + 0x218))(plVar18,*(undefined8 *)(*plVar18 + 0x220));
              lVar7 = FUN_05a15ff0();
              if (plVar19 == (long *)0x0) goto System_Xml_Schema_XmlBaseConverter__ToString;
              if ((lVar7 != 0) &&
                 (lVar10 = thunk_FUN_02dd3048(lVar7,*(undefined8 *)(*plVar19 + 0x40)), lVar10 == 0))
              goto LAB_05a28acc;
              if ((int)plVar19[3] == 0) goto LAB_05a28ae4;
              plVar19[4] = lVar7;
              LeanTween__value(plVar19 + 4,lVar7);
              lVar7 = (**(code **)(*plVar18 + 0x208))(plVar18,*(undefined8 *)(*plVar18 + 0x210));
              if ((lVar7 != 0) &&
                 (lVar10 = thunk_FUN_02dd3048(lVar7,*(undefined8 *)(*plVar19 + 0x40)), lVar10 == 0))
              goto LAB_05a28acc;
              if ((*(uint *)(plVar19 + 3) & 0xfffffffe) == 0) goto LAB_05a28ae4;
              plVar19[5] = lVar7;
              LeanTween__value(plVar19 + 5,lVar7);
              puVar13 = (undefined8 *)
                        UnityEngine_XR_Interaction_Toolkit_Transformers_XRSocketGrabTransformer_FastCalculateRadiusOffset_0000091B_BurstDirectCall_TypeInfo
              ;
            }
            uVar8 = *puVar13;
LAB_05a28b08:
            uVar8 = FUN_05a4cd84(uVar8,plVar19,0);
            lVar7 = FUN_05a23500(param_1,uVar8);
            return *(undefined8 *)(lVar7 + 0x50);
          }
          if (plVar18 == (long *)0x0) goto System_Xml_Schema_XmlBaseConverter__ToString;
          uVar16 = FUN_0541dd0c(plVar18,0);
          if ((uVar16 & 1) == 0) {
            lVar12 = thunk_FUN_02dd3144(*(undefined8 *)
                                         UnityEngine_UIElements_UIRAtlasAllocator_AreaNode_TypeInfo)
            ;
            FUN_05a250cc(lVar12,plVar18);
            uVar11 = (**(code **)(*plVar18 + 0x208))(plVar18,*(undefined8 *)(*plVar18 + 0x210));
            if ((lVar12 == 0) || (*(long *)(lVar12 + 0x10) == 0))
            goto System_Xml_Schema_XmlBaseConverter__ToString;
            *(undefined8 *)(*(long *)(lVar12 + 0x10) + 0x18) = uVar11;
            LeanTween__value();
            FUN_05a0d168(uVar9,lVar12,uVar8,0);
LAB_05a286b8:
            lVar12 = (**(code **)(*plVar18 + 0x388))(plVar18,0,*(undefined8 *)(*plVar18 + 0x390));
            if (*(char *)(param_1 + 0x60) == '\0') {
              if (lVar12 == 0) goto System_Xml_Schema_XmlBaseConverter__ToString;
              uVar11 = *(undefined8 *)puVar3;
              lVar14 = thunk_FUN_02dd3048(lVar12,uVar11);
              if (lVar14 == 0) goto LAB_05a288a4;
              lVar14 = *(long *)puVar3;
              plVar18 = (long *)thunk_FUN_02dd3048(lVar12,lVar14);
              if (plVar18 == (long *)0x0) goto LAB_05a28898;
              lVar12 = *plVar18;
              uVar16 = (ulong)*(ushort *)(lVar12 + 0x12e);
              if (uVar16 != 0) {
                piVar17 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar17 + -2) == lVar14) {
                    iVar15 = *piVar17 + 9;
                    goto LAB_05a287cc;
                  }
                  uVar16 = uVar16 - 1;
                  piVar17 = piVar17 + 4;
                } while (uVar16 != 0);
              }
              uVar11 = 9;
            }
            else {
              if (lVar12 == 0) goto System_Xml_Schema_XmlBaseConverter__ToString;
              uVar11 = *(undefined8 *)puVar3;
              lVar14 = thunk_FUN_02dd3048(lVar12,uVar11);
              if (lVar14 == 0) {
LAB_05a288a4:
                    /* WARNING: Subroutine does not return */
                FUN_02d96be0(lVar12,uVar11);
              }
              lVar14 = *(long *)puVar3;
              plVar18 = (long *)thunk_FUN_02dd3048(lVar12,lVar14);
              if (plVar18 == (long *)0x0) {
LAB_05a28898:
                    /* WARNING: Subroutine does not return */
                FUN_02d96be0(lVar12,lVar14);
              }
              lVar12 = *plVar18;
              uVar16 = (ulong)*(ushort *)(lVar12 + 0x12e);
              if (uVar16 != 0) {
                piVar17 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
LAB_05a28720:
                if (*(long *)(piVar17 + -2) != lVar14) goto code_r0x05a2872c;
                iVar15 = *piVar17 + 10;
LAB_05a287cc:
                puVar13 = (undefined8 *)(lVar12 + (long)iVar15 * 0x10 + 0x138);
                goto LAB_05a287d4;
              }
LAB_05a28738:
              uVar11 = 10;
            }
            puVar13 = (undefined8 *)FUN_02dd004c(plVar18,lVar14,uVar11);
LAB_05a287d4:
            uVar11 = (*(code *)*puVar13)(plVar18,0,puVar13[1]);
            if (lVar10 == 0) goto System_Xml_Schema_XmlBaseConverter__ToString;
            lVar12 = *(long *)(lVar10 + 0x10);
            lVar14 = *(long *)UnityEngine_InputSystem_Layouts_InputControlLayout_ControlItem_var;
            *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
            if (lVar12 == 0) goto System_Xml_Schema_XmlBaseConverter__ToString;
            uVar1 = *(uint *)(lVar10 + 0x18);
            if (uVar1 < *(uint *)(lVar12 + 0x18)) {
              *(uint *)(lVar10 + 0x18) = uVar1 + 1;
              *(undefined8 *)(lVar12 + (long)(int)uVar1 * 8 + 0x20) = uVar11;
            }
            else {
              FUN_03fb8c38(lVar10,uVar11,
                           *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
            }
          }
LAB_05a28844:
          uVar16 = (ulong)*(uint *)(lVar7 + 0x18);
          uVar20 = uVar20 + 1;
        } while ((long)uVar20 < (long)(int)*(uint *)(lVar7 + 0x18));
      }
      thunk_FUN_02da4860(0);
      *(undefined8 *)(param_1 + 0x50) = uVar9;
      LeanTween__value((undefined8 *)(param_1 + 0x50),uVar9);
      *(long *)(param_1 + 0x58) = lVar10;
      uVar8 = LeanTween__value((long *)(param_1 + 0x58),lVar10);
      return uVar8;
    }
  }
System_Xml_Schema_XmlBaseConverter__ToString:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
code_r0x05a2872c:
  uVar16 = uVar16 - 1;
  piVar17 = piVar17 + 4;
  if (uVar16 == 0) goto LAB_05a28738;
  goto LAB_05a28720;
}


