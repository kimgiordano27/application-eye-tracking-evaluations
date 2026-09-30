/*
FUNCTION_NAME: FUN_0546d158
ENTRY_POINT: 0546d158
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;data_collection;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_10;strong_file_logging_hits_4;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x0546d6c8) */

void FUN_0546d158(long param_1)

{
  bool bVar1;
  float *pfVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  int *piVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  undefined8 *puVar13;
  int iVar14;
  long *plVar15;
  undefined1 auVar16 [16];
  long local_f0;
  long *plStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  long local_c0;
  undefined1 *local_b8;
  long local_b0;
  long *plStack_a8;
  int local_a0;
  float local_9c;
  float fStack_98;
  undefined4 uStack_94;
  long local_90;
  undefined1 local_84 [4];
  undefined1 local_80 [16];
  long local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  long local_50;
  undefined8 uStack_48;
  
  if ((DAT_06bbef44 & 1) == 0) {
    FUN_02f08768(UnityEngine_XR_Interaction_Toolkit_Utilities_XRInteractableUtility_TypeInfo);
    FUN_02f08768(UnityEngine_XR_Interaction_Toolkit_Interactors_XRInteractionGroup_TypeInfo);
    FUN_02f08768(UnityEngine_XR_Interaction_Toolkit_XRInteractionManager_TypeInfo);
    FUN_02f08768(
                UnityEngine_XR_Interaction_Toolkit_Inputs_Simulation_XRInteractionSimulator_TypeInfo
                );
    FUN_02f08768(UnityEngine_InputSystem_XR_XRLayoutBuilder_TypeInfo);
    FUN_02f08768(PTR_DAT_067d1480);
    FUN_02f08768(PTR_DAT_067d29b8);
    FUN_02f08768(UnityEngine_Experimental_Rendering_XRLayoutStack_TypeInfo);
    FUN_02f08768(PTR_DAT_067cc4c8);
    FUN_02f08768(UnityEngine_TextCore_Text_TextElementType_TypeInfo);
    FUN_02f08768(Unity_XR_CoreUtils_XRLoggingUtils_TypeInfo);
    FUN_02f08768(System_Xml_TextEncodedRawTextWriter_TypeInfo);
    FUN_02f08768(Oculus_Platform_MessageWithLaunchUnblockFlowResult_TypeInfo);
    FUN_02f08768(PTR_DAT_067cc4d0);
    FUN_02f08768(UnityEngine_XR_Management_XRManagementAnalytics_TypeInfo);
    FUN_02f08768(UnityEngine_XR_XRInputSubsystem_TypeInfo);
    FUN_02f08768(UnityEngine_XR_Interaction_Toolkit_Inputs_XRInputTrackingAggregator_TypeInfo);
    FUN_02f08768(UnityEngine_Experimental_Rendering_XRMirrorView_TypeInfo);
    FUN_02f08768(UnityEngine_XR_Interaction_Toolkit_Locomotion_XRMovableBody_TypeInfo);
    FUN_02f08768(UnityEngine_XR_ARSubsystems_XRNearFarPlanes_TypeInfo);
    DAT_06bbef44 = 1;
  }
  plVar12 = (long *)(param_1 + 0x38);
  local_84[0] = 0;
  local_90 = 0;
  plStack_a8 = (long *)0x0;
  local_b0 = 0;
  fStack_98 = 0.0;
  uStack_94 = 0;
  local_a0 = 0;
  local_9c = 0.0;
  if (*(char *)plVar12 == '\0') {
    return;
  }
  local_80._8_8_ = *(undefined8 *)(param_1 + 0x48);
  local_80._0_8_ = *(undefined8 *)(param_1 + 0x40);
  uVar6 = FUN_06099400(local_80,0);
  if ((uVar6 & 1) == 0) {
    return;
  }
  local_80 = FUN_03e1c810(plVar12,*(undefined8 *)
                                   UnityEngine_Experimental_Rendering_XRMirrorView_TypeInfo);
  FUN_0609937c(local_80,0);
  *plVar12 = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  piVar8 = *(int **)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x48) = 0;
  if (piVar8 != (int *)0x0) {
    iVar14 = *piVar8;
    FUN_03d18804((undefined8 *)(param_1 + 0x60),*(undefined8 *)PTR_DAT_067cc4c8);
    if (2 < iVar14) {
      System_Data_ForeignKeyConstraint__CascadeUpdate
                (local_84,*(undefined8 *)UnityEngine_XR_ARSubsystems_XRNearFarPlanes_TypeInfo,0);
      puVar4 = System_Xml_TextEncodedRawTextWriter_TypeInfo;
      local_f0 = 0;
      local_68 = 0;
      uStack_60 = 0;
      plStack_e8 = (long *)local_84;
      FUN_03d5724c(&local_68,iVar14,3,1,*(undefined8 *)System_Xml_TextEncodedRawTextWriter_TypeInfo)
      ;
      plVar15 = (long *)(param_1 + 0x50);
      *(undefined8 *)(param_1 + 0x78) = uStack_60;
      *(long *)(param_1 + 0x70) = local_68;
      if (*plVar15 == 0) {
        local_68 = 0;
        uStack_60 = 0;
        FUN_03d5724c(&local_68,iVar14,4,1,*(undefined8 *)puVar4);
        *(undefined8 *)(param_1 + 0x58) = uStack_60;
        *plVar15 = local_68;
      }
      if (*(long *)(param_1 + 0x88) != 0) {
        local_58 = *(undefined8 *)(param_1 + 0x78);
        uStack_60 = *(undefined8 *)(param_1 + 0x70);
        uStack_48 = *(undefined8 *)(param_1 + 0x58);
        local_50 = *plVar15;
        local_68 = *(long *)(*(long *)(param_1 + 0x88) + 0x20);
        local_80._0_8_ = 0;
        local_80._8_8_ = 0;
        auVar16 = FUN_0342eb0c(&local_68,0,0,
                               *(undefined8 *)UnityEngine_InputSystem_XR_XRLayoutBuilder_TypeInfo);
        local_68 = 0;
        uStack_60 = 0;
        local_58 = 0;
        FUN_03e1c7f8(&local_68,auVar16._0_8_,auVar16._8_8_,
                     *(undefined8 *)UnityEngine_XR_XRInputSubsystem_TypeInfo);
        *(undefined8 *)(param_1 + 0x40) = uStack_60;
        *plVar12 = local_68;
        *(undefined8 *)(param_1 + 0x48) = local_58;
        FUN_054a3814(local_84,0);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
LAB_0546d4ac:
    FUN_0546cfdc(param_1);
    return;
  }
  if (*(long *)(param_1 + 0x70) == 0) {
    if (*(char *)(param_1 + 0x80) == '\0') {
      return;
    }
    goto LAB_0546d4ac;
  }
  System_Data_ForeignKeyConstraint__CascadeUpdate
            (local_84,*(undefined8 *)
                       UnityEngine_XR_Interaction_Toolkit_Locomotion_XRMovableBody_TypeInfo,0);
  local_c0 = 0;
  puVar13 = (undefined8 *)(param_1 + 0x50);
  local_b8 = local_84;
  if (*(int *)(param_1 + 0x58) == 0) {
    if ((uint *)*puVar13 != (uint *)0x0) goto LAB_0546d4d0;
  }
  else {
    if ((*(uint *)*puVar13 & 0x7fffffff) < 0x7f800001) {
      local_c0 = 0;
      goto LAB_0546d658;
    }
LAB_0546d4d0:
    FUN_03d57548(puVar13,*(undefined8 *)UnityEngine_TextCore_Text_TextElementType_TypeInfo);
  }
  local_d0 = 0;
  uStack_c8 = 0;
  FUN_03d5724c(&local_d0,*(undefined4 *)(param_1 + 0x78),4,0,
               *(undefined8 *)System_Xml_TextEncodedRawTextWriter_TypeInfo);
  uVar7 = *(undefined8 *)UnityEngine_Experimental_Rendering_XRLayoutStack_TypeInfo;
  *(undefined8 *)(param_1 + 0x58) = uStack_c8;
  *puVar13 = local_d0;
  FUN_03d57738(puVar13,*(undefined8 *)(param_1 + 0x70),*(undefined8 *)(param_1 + 0x78),uVar7);
  lVar9 = *(long *)(param_1 + 0x90);
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  uVar7 = *(undefined8 *)Unity_XR_CoreUtils_XRLoggingUtils_TypeInfo;
  *(undefined4 *)(lVar9 + 0x18) = 0;
  *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
  FUN_03d578c8(&local_f0,puVar13,uVar7);
  puVar5 = UnityEngine_XR_Interaction_Toolkit_XRInteractionManager_TypeInfo;
  puVar4 = PTR_DAT_067d1480;
  plStack_a8 = plStack_e8;
  plVar12 = plStack_a8;
  local_b0 = local_f0;
  fStack_98 = (float)uStack_d8;
  uStack_94 = (undefined4)((ulong)uStack_d8 >> 0x20);
  local_a0 = (int)uStack_e0;
  local_9c = (float)((ulong)uStack_e0 >> 0x20);
  plStack_a8._0_4_ = (int)plStack_e8;
  local_f0 = 0;
  iVar14 = local_a0 + 1;
  lVar9 = *(long *)UnityEngine_XR_Interaction_Toolkit_XRInteractionManager_TypeInfo;
  bVar1 = iVar14 < (int)plStack_a8;
  plStack_e8 = &local_b0;
  plStack_a8 = plVar12;
  local_a0 = iVar14;
  if (bVar1) {
    do {
      lVar10 = local_b0;
      local_a0 = iVar14;
      if ((*(ushort *)(*(long *)(lVar9 + 0x20) + 0x135) & 1) == 0) {
        FUN_02f41e9c();
      }
      pfVar2 = (float *)(lVar10 + (long)iVar14 * 8);
      lVar9 = *(long *)(param_1 + 0x90);
      local_9c = *pfVar2;
      fStack_98 = pfVar2[1];
      if (lVar9 == 0) {
LAB_0546d6b8:
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      lVar10 = *(long *)(lVar9 + 0x10);
      lVar11 = *(long *)puVar4;
      *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
      if (lVar10 == 0) goto LAB_0546d6b8;
      uVar3 = *(uint *)(lVar9 + 0x18);
      if (uVar3 < *(uint *)(lVar10 + 0x18)) {
        lVar10 = lVar10 + (long)(int)uVar3 * 8;
        *(uint *)(lVar9 + 0x18) = uVar3 + 1;
        *(float *)(lVar10 + 0x20) = -local_9c;
        *(float *)(lVar10 + 0x24) = fStack_98;
      }
      else {
        FUN_03b61054(lVar9,*(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
      }
      iVar14 = local_a0 + 1;
      lVar9 = *(long *)puVar5;
      bVar1 = iVar14 < (int)plStack_a8;
      local_a0 = iVar14;
    } while (bVar1);
  }
  local_9c = 0.0;
  fStack_98 = 0.0;
  FUN_04b44acc(&local_b0,
               *(undefined8 *)
                UnityEngine_XR_Interaction_Toolkit_Interactors_XRInteractionGroup_TypeInfo);
LAB_0546d658:
  lVar9 = local_c0;
  FUN_054a3814(local_b8,0);
  if (lVar9 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c0(lVar9);
  }
  FUN_03d57548((long *)(param_1 + 0x70),
               *(undefined8 *)UnityEngine_TextCore_Text_TextElementType_TypeInfo);
  uVar6 = FUN_0335764c(param_1,&local_90,
                       *(undefined8 *)
                        UnityEngine_XR_Interaction_Toolkit_Utilities_XRInteractableUtility_TypeInfo)
  ;
  if ((uVar6 & 1) == 0) {
    return;
  }
  if (local_90 != 0) {
    FUN_0546d794();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


