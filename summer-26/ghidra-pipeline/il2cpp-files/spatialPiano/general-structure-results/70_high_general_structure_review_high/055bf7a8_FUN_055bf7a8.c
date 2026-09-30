/*
FUNCTION_NAME: FUN_055bf7a8
ENTRY_POINT: 055bf7a8
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;data_collection;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_21;ray_or_cast_sink_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_055bf7a8(long param_1,long param_2,long param_3,ulong param_4,long param_5,uint param_6)

{
  uint uVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  long *plVar12;
  int *piVar13;
  long lVar14;
  int iVar15;
  long lVar16;
  uint uVar17;
  long lVar18;
  long local_80;
  int local_64;
  
  if ((DAT_06bbfb60 & 1) == 0) {
    FUN_02f08768(PTR_DAT_067c9fd0);
    FUN_02f08768(PTR_DAT_067c9fd8);
    FUN_02f08768(System_Collections_Generic_List<BodyPoseData_JointData>_TypeInfo);
    FUN_02f08768(
                UnityEngine_XR_Interaction_Toolkit_UI_CanvasOptimizer_CanvasState_GraphicRaycasterSettings_TypeInfo
                );
    FUN_02f08768(UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo);
    FUN_02f08768(PTR_DAT_067cab28);
    FUN_02f08768(
                Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BaseRegistrationList<IXRInteractionGroup>_get_flushedCount__
                );
    FUN_02f08768(Method_UnityEngine_UIElements_BaseField<string>_get_labelElement__);
    FUN_02f08768(Meta_XR_MRUtilityKit_MRUKNativeFuncs_MrukOnRoomAnchorUpdated_TypeInfo);
    FUN_02f08768(
                Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BaseRegistrationList<IXRInteractionGroup>_get_registeredSnapshot__
                );
    FUN_02f08768(
                Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BaseRegistrationList<IXRGroupMember>_get_registeredSnapshot__
                );
    DAT_06bbfb60 = 1;
  }
  local_64 = 0;
  if (*(char *)(param_1 + 0xa0) == '\0') {
    if (param_2 == 0) {
      return;
    }
  }
  else {
    if (param_3 == 0) goto LAB_055bf928;
    if (param_2 == 0) {
      return;
    }
    if (*(long *)(param_3 + 0xf8) != 0) {
      return;
    }
  }
  uVar8 = FUN_055c3ca4(param_1,param_2);
  if (*(char *)(param_1 + 0xa0) != '\0') {
    if (param_3 != 0) {
      uVar9 = FUN_04f65260(*(undefined8 *)(param_3 + 0x90),
                           *(undefined8 *)
                            Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BaseRegistrationList<IXRInteractionGroup>_get_registeredSnapshot__
                           ,0);
      lVar14 = *(long *)(param_3 + 0x40);
      if (lVar14 != 0) {
        iVar15 = 0;
        do {
          lVar14 = FUN_0557e3c8(lVar14,uVar9,0);
          if (lVar14 == 0) goto LAB_055bf94c;
          local_64 = iVar15;
          uVar10 = FUN_050d2c48(&local_64,0);
          uVar9 = FUN_04f65260(uVar9,uVar10,0);
          lVar14 = *(long *)(param_3 + 0x40);
          iVar15 = iVar15 + 1;
        } while (lVar14 != 0);
      }
    }
    goto LAB_055bf928;
  }
  if (param_3 == 0) goto LAB_055bf928;
  uVar9 = FUN_04f65260(*(undefined8 *)(param_3 + 0x90),
                       *(undefined8 *)
                        Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BaseRegistrationList<IXRInteractionGroup>_get_flushedCount__
                       ,0);
LAB_055bf94c:
  if ((param_4 & 1) == 0) {
    if (*(long *)(param_3 + 0x40) == 0) goto LAB_055bf928;
    uVar11 = FUN_055804e8(*(long *)(param_3 + 0x40),uVar9,1,0);
    if ((uVar11 & 1) == 0) goto LAB_055bf98c;
    if (*(long *)(param_3 + 0x40) == 0) goto LAB_055bf928;
    lVar14 = FUN_0557e3c8(*(long *)(param_3 + 0x40),uVar9,0);
    bVar2 = false;
  }
  else {
LAB_055bf98c:
    lVar14 = thunk_FUN_02f45270(*(undefined8 *)
                                 System_Collections_Generic_List<BodyPoseData_JointData>_TypeInfo);
    FUN_0555c070(lVar14,uVar9,uVar8,0,3,0);
    bVar2 = true;
  }
  puVar3 = PTR_DAT_067c9fd8;
  if (*(int *)(*(long *)
                UnityEngine_XR_Interaction_Toolkit_UI_CanvasOptimizer_CanvasState_GraphicRaycasterSettings_TypeInfo
              + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  FUN_055b6a84(lVar14,param_5);
  FUN_055b7340(param_1,lVar14,param_5);
  FUN_055b6fb0(lVar14,param_5);
  local_64 = -1;
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  uVar8 = FUN_05064e74(0);
  uVar8 = FUN_050d2d8c(&local_64,uVar8,0);
  if (lVar14 != 0) {
    FUN_0555cd88(lVar14,param_6 & 1,0);
    puVar6 = 
    Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BaseRegistrationList<IXRGroupMember>_get_registeredSnapshot__
    ;
    puVar5 = Method_UnityEngine_UIElements_BaseField<string>_get_labelElement__;
    puVar4 = UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo;
    puVar3 = Meta_XR_MRUtilityKit_MRUKNativeFuncs_MrukOnRoomAnchorUpdated_TypeInfo;
    if ((param_5 == 0) || (uVar1 = *(uint *)(param_5 + 0x18), (int)uVar1 < 1)) {
      local_80 = 0;
    }
    else {
      local_80 = 0;
      lVar18 = 0;
      lVar16 = param_5 + 0x20;
      do {
        uVar17 = (uint)lVar18;
        if (uVar1 <= uVar17) {
LAB_055bfe38:
                    /* WARNING: Subroutine does not return */
          FUN_02f089d0();
        }
        plVar12 = *(long **)(lVar16 + lVar18 * 8);
        if (plVar12 == (long *)0x0) goto LAB_055bf928;
        uVar9 = (**(code **)(*plVar12 + 0x388))(plVar12,*(undefined8 *)(*plVar12 + 0x390));
        uVar11 = thunk_FUN_04f6d944(uVar9,*(undefined8 *)puVar6,0);
        if ((uVar11 & 1) != 0) {
          if (*(uint *)(param_5 + 0x18) <= uVar17) goto LAB_055bfe38;
          plVar12 = *(long **)(lVar16 + lVar18 * 8);
          if (plVar12 == (long *)0x0) goto LAB_055bf928;
          uVar9 = (**(code **)(*plVar12 + 0x358))(plVar12,*(undefined8 *)(*plVar12 + 0x360));
          uVar11 = thunk_FUN_04f6d944(uVar9,*(undefined8 *)puVar4,0);
          if ((uVar11 & 1) != 0) {
            if (*(uint *)(param_5 + 0x18) <= uVar17) goto LAB_055bfe38;
            plVar12 = *(long **)(lVar16 + lVar18 * 8);
            if (plVar12 == (long *)0x0) goto LAB_055bf928;
            uVar9 = (**(code **)(*plVar12 + 0x1b8))(plVar12,*(undefined8 *)(*plVar12 + 0x1c0));
            uVar11 = thunk_FUN_04f6d944(uVar9,*(undefined8 *)PTR_DAT_067cab28,0);
            if ((uVar11 & 1) != 0) {
              FUN_0555cd88(lVar14,0,0);
            }
          }
        }
        if (*(uint *)(param_5 + 0x18) <= uVar17) goto LAB_055bfe38;
        plVar12 = *(long **)(lVar16 + lVar18 * 8);
        if (plVar12 == (long *)0x0) goto LAB_055bf928;
        uVar9 = (**(code **)(*plVar12 + 0x388))(plVar12,*(undefined8 *)(*plVar12 + 0x390));
        uVar11 = thunk_FUN_04f6d944(uVar9,*(undefined8 *)puVar5,0);
        if ((uVar11 & 1) != 0) {
          if (*(uint *)(param_5 + 0x18) <= uVar17) goto LAB_055bfe38;
          plVar12 = *(long **)(lVar16 + lVar18 * 8);
          if (plVar12 == (long *)0x0) goto LAB_055bf928;
          uVar9 = (**(code **)(*plVar12 + 0x358))(plVar12,*(undefined8 *)(*plVar12 + 0x360));
          uVar11 = thunk_FUN_04f6d944(uVar9,*(undefined8 *)puVar4,0);
          if ((uVar11 & 1) != 0) {
            if (*(uint *)(param_5 + 0x18) <= uVar17) goto LAB_055bfe38;
            plVar12 = *(long **)(lVar16 + lVar18 * 8);
            if (plVar12 == (long *)0x0) goto LAB_055bf928;
            uVar8 = (**(code **)(*plVar12 + 0x1b8))(plVar12,*(undefined8 *)(*plVar12 + 0x1c0));
          }
        }
        if (*(uint *)(param_5 + 0x18) <= uVar17) goto LAB_055bfe38;
        plVar12 = *(long **)(lVar16 + lVar18 * 8);
        if (plVar12 == (long *)0x0) goto LAB_055bf928;
        uVar9 = (**(code **)(*plVar12 + 0x388))(plVar12,*(undefined8 *)(*plVar12 + 0x390));
        uVar11 = thunk_FUN_04f6d944(uVar9,*(undefined8 *)puVar3,0);
        if ((uVar11 & 1) != 0) {
          if (*(uint *)(param_5 + 0x18) <= uVar17) goto LAB_055bfe38;
          plVar12 = *(long **)(lVar16 + lVar18 * 8);
          if (plVar12 == (long *)0x0) goto LAB_055bf928;
          uVar9 = (**(code **)(*plVar12 + 0x358))(plVar12,*(undefined8 *)(*plVar12 + 0x360));
          uVar11 = thunk_FUN_04f6d944(uVar9,*(undefined8 *)puVar4,0);
          if ((uVar11 & 1) != 0) {
            if (*(uint *)(param_5 + 0x18) <= uVar17) goto LAB_055bfe38;
            plVar12 = *(long **)(lVar16 + lVar18 * 8);
            if (plVar12 == (long *)0x0) goto LAB_055bf928;
            local_80 = (**(code **)(*plVar12 + 0x1b8))(plVar12,*(undefined8 *)(*plVar12 + 0x1c0));
          }
        }
        uVar1 = *(uint *)(param_5 + 0x18);
        lVar18 = lVar18 + 1;
      } while ((int)lVar18 < (int)uVar1);
    }
    puVar4 = PTR_DAT_067c9fd0;
    puVar3 = PTR_DAT_067c9338;
    lVar16 = *(long *)(PTR_DAT_067c9338 + 0x48);
    if (*(int *)(*(long *)(PTR_DAT_067c9338 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    uVar9 = FUN_050e4454(lVar16 + 0x20,0);
    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
      thunk_FUN_02f6670c(*(long *)puVar4);
    }
    plVar12 = (long *)FUN_0505d668(uVar8,uVar9,0,0);
    if (plVar12 != (long *)0x0) {
      if (*(long *)(*plVar12 + 0x40) != *(long *)(*(long *)(puVar3 + 0x48) + 0x40)) {
                    /* WARNING: Subroutine does not return */
        FUN_02f08d48();
      }
      piVar13 = (int *)thunk_FUN_02f453b8();
      iVar15 = *piVar13;
      lVar16 = FUN_0555f7d8(lVar14,0);
      if (lVar16 != 0) {
        lVar16 = FUN_0555f7d8(lVar14,0);
        if (lVar16 == 0) goto LAB_055bf928;
        if (*(int *)(lVar16 + 0x10) != 0) {
          plVar12 = *(long **)(param_1 + 0x30);
          if (plVar12 == (long *)0x0) goto LAB_055bf928;
          (**(code **)(*plVar12 + 0x308))(plVar12,lVar14,*(undefined8 *)(*plVar12 + 0x310));
        }
      }
      *(long *)(lVar14 + 0xe0) = param_2;
      FUN_0555c418(lVar14,0,0);
      if (*(char *)(param_1 + 0xa0) != '\0') {
        uVar8 = FUN_0556053c(lVar14,0);
        uVar8 = System_Runtime_Serialization_XmlFormatWriterInterpreter__InvokeOnSerialized
                          (param_1,uVar8);
        FUN_0555ea34(lVar14,uVar8,0);
      }
      if (bVar2) {
        if (*(char *)(param_1 + 0xa0) != '\0') {
          FUN_0555cd88(lVar14,1,0);
        }
        if (iVar15 < 0) {
          if (param_3 == 0) goto LAB_055bf928;
        }
        else {
          if ((param_3 == 0) || (plVar12 = *(long **)(param_3 + 0x40), plVar12 == (long *)0x0))
          goto LAB_055bf928;
          iVar7 = (**(code **)(*plVar12 + 0x1c8))(plVar12,*(undefined8 *)(*plVar12 + 0x1d0));
          if (iVar15 < iVar7) {
            if (*(long *)(param_3 + 0x40) != 0) {
              FUN_0557e70c(*(long *)(param_3 + 0x40),iVar15,lVar14,0);
              goto LAB_055bfdf4;
            }
            goto LAB_055bf928;
          }
        }
        if (*(long *)(param_3 + 0x40) == 0) goto LAB_055bf928;
        FUN_0557e700(*(long *)(param_3 + 0x40),lVar14,0);
      }
LAB_055bfdf4:
      if (local_80 != 0) {
        uVar8 = FUN_05562a50(lVar14,local_80,0);
        FUN_0555f03c(lVar14,uVar8,0);
      }
      return;
    }
  }
LAB_055bf928:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


