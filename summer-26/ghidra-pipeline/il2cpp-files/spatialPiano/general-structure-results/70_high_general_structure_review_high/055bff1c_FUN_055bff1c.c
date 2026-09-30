/*
FUNCTION_NAME: FUN_055bff1c
ENTRY_POINT: 055bff1c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;data_collection;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_21;ray_or_cast_sink_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_4;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_055bff1c(long param_1,long param_2,undefined8 param_3,long param_4,ulong param_5,
                 long param_6,uint param_7)

{
  uint uVar1;
  byte bVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  int *piVar16;
  int iVar17;
  long lVar18;
  uint uVar19;
  long lVar20;
  long lVar21;
  int local_64;
  
  if ((DAT_06bbfb5f & 1) == 0) {
    FUN_02f08768(PTR_DAT_067c9fd0);
    FUN_02f08768(PTR_DAT_067c9fd8);
    FUN_02f08768(System_Collections_Generic_List<BodyPoseData_JointData>_TypeInfo);
    FUN_02f08768(
                UnityEngine_XR_Interaction_Toolkit_Transformers_XRSocketGrabTransformer_CalculateScaleToFit_00000966_PostfixBurstDelegate_TypeInfo
                );
    FUN_02f08768(
                UnityEngine_XR_Interaction_Toolkit_UI_CanvasOptimizer_CanvasState_GraphicRaycasterSettings_TypeInfo
                );
    FUN_02f08768(
                Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Receiver_BaseAffordanceStateReceiver<Color>_GetCurrentValueForCapture__
                );
    FUN_02f08768(
                Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Receiver_BaseAffordanceStateReceiver<Color>_OnEnable__
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
    FUN_02f08768(PTR_DAT_067cd6c0);
    FUN_02f08768(
                Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BaseRegistrationList<IXRGroupMember>_get_registeredSnapshot__
                );
    DAT_06bbfb5f = 1;
  }
  local_64 = 0;
  if (*(char *)(param_1 + 0xa0) != '\0') {
    if (param_4 == 0) goto LAB_055c0254;
    if (*(long *)(param_4 + 0xf8) != 0) {
      return;
    }
  }
  if ((param_2 == 0) || (lVar9 = FUN_0577ac88(param_2,0), lVar9 == 0)) goto LAB_055c0254;
  if (*(long *)(lVar9 + 0x10) == 0) {
LAB_055c0110:
    plVar12 = *(long **)(param_2 + 0x60);
    if (plVar12 != (long *)0x0) {
      bVar2 = *(byte *)(*(long *)
                         Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Receiver_BaseAffordanceStateReceiver<Color>_GetCurrentValueForCapture__
                       + 0x130);
      if ((bVar2 <= *(byte *)(*plVar12 + 0x130)) &&
         (*(long *)(*(long *)(*plVar12 + 200) + (ulong)bVar2 * 8 + -8) ==
          *(long *)
           Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Receiver_BaseAffordanceStateReceiver<Color>_GetCurrentValueForCapture__
         )) {
        lVar9 = FUN_0577ac88(plVar12,0);
        if (lVar9 == 0) goto LAB_055c0254;
        uVar10 = FUN_04f6dc3c(*(undefined8 *)(lVar9 + 0x18),*(undefined8 *)PTR_DAT_067cd6c0,0);
        if ((uVar10 & 1) != 0) {
          lVar11 = thunk_FUN_02f45270(*(undefined8 *)
                                       UnityEngine_XR_Interaction_Toolkit_Transformers_XRSocketGrabTransformer_CalculateScaleToFit_00000966_PostfixBurstDelegate_TypeInfo
                                     );
          FUN_055ad7b0(lVar11,param_2,0);
          lVar9 = lVar11;
          do {
            lVar21 = lVar9;
            if (lVar21 == 0) goto LAB_055c0254;
            lVar9 = *(long *)(lVar21 + 0x18);
          } while (*(long *)(lVar21 + 0x18) != 0);
          uVar13 = FUN_055c3ca4(param_1,*(undefined8 *)(lVar21 + 0x10));
          if (lVar11 == 0) goto LAB_055c0254;
          param_3 = *(undefined8 *)(lVar11 + 0x28);
          goto LAB_055c01d4;
        }
      }
    }
    uVar13 = FUN_055c3ca4(param_1,param_3);
    lVar11 = 0;
  }
  else {
    lVar9 = FUN_0577ac88(param_2,0);
    if ((lVar9 == 0) || (*(long *)(lVar9 + 0x10) == 0)) goto LAB_055c0254;
    if (*(int *)(*(long *)(lVar9 + 0x10) + 0x10) == 0) goto LAB_055c0110;
    lVar9 = FUN_0577ac88(param_2,0);
    if (lVar9 == 0) goto LAB_055c0254;
    uVar10 = FUN_04f6dc3c(*(undefined8 *)(lVar9 + 0x18),*(undefined8 *)PTR_DAT_067cd6c0,0);
    if ((uVar10 & 1) == 0) goto LAB_055c0110;
    lVar11 = thunk_FUN_02f45270(*(undefined8 *)
                                 UnityEngine_XR_Interaction_Toolkit_Transformers_XRSocketGrabTransformer_CalculateScaleToFit_00000966_PostfixBurstDelegate_TypeInfo
                               );
    FUN_055ad7b0(lVar11,param_2,0);
    plVar12 = (long *)FUN_0577ac88(param_2,0);
    if (plVar12 == (long *)0x0) goto LAB_055c0254;
    param_3 = (**(code **)(*plVar12 + 0x168))(plVar12,*(undefined8 *)(*plVar12 + 0x170));
    plVar12 = (long *)FUN_0577ac88(param_2,0);
    if (plVar12 == (long *)0x0) goto LAB_055c0254;
    uVar13 = (**(code **)(*plVar12 + 0x168))(plVar12,*(undefined8 *)(*plVar12 + 0x170));
    uVar13 = FUN_055c3ca4(param_1,uVar13);
  }
LAB_055c01d4:
  if (*(char *)(param_1 + 0xa0) != '\0') {
    if (param_4 != 0) {
      uVar14 = FUN_04f65260(*(undefined8 *)(param_4 + 0x90),
                            *(undefined8 *)
                             Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BaseRegistrationList<IXRInteractionGroup>_get_registeredSnapshot__
                            ,0);
      lVar9 = *(long *)(param_4 + 0x40);
      if (lVar9 != 0) {
        iVar17 = 0;
        do {
          lVar9 = FUN_0557e3c8(lVar9,uVar14,0);
          if (lVar9 == 0) goto LAB_055c0278;
          local_64 = iVar17;
          uVar15 = FUN_050d2c48(&local_64,0);
          uVar14 = FUN_04f65260(uVar14,uVar15,0);
          lVar9 = *(long *)(param_4 + 0x40);
          iVar17 = iVar17 + 1;
        } while (lVar9 != 0);
      }
    }
    goto LAB_055c0254;
  }
  if (param_4 == 0) goto LAB_055c0254;
  uVar14 = FUN_04f65260(*(undefined8 *)(param_4 + 0x90),
                        *(undefined8 *)
                         Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BaseRegistrationList<IXRInteractionGroup>_get_flushedCount__
                        ,0);
LAB_055c0278:
  if ((param_5 & 1) == 0) {
    if (*(long *)(param_4 + 0x40) == 0) goto LAB_055c0254;
    uVar10 = FUN_055804e8(*(long *)(param_4 + 0x40),uVar14,1,0);
    if ((uVar10 & 1) == 0) goto LAB_055c02b8;
    if (*(long *)(param_4 + 0x40) == 0) goto LAB_055c0254;
    lVar9 = FUN_0557e3c8(*(long *)(param_4 + 0x40),uVar14,0);
    bVar3 = false;
  }
  else {
LAB_055c02b8:
    lVar9 = thunk_FUN_02f45270(*(undefined8 *)
                                System_Collections_Generic_List<BodyPoseData_JointData>_TypeInfo);
    FUN_0555c070(lVar9,uVar14,uVar13,0,3,0);
    bVar3 = true;
  }
  puVar4 = PTR_DAT_067c9fd8;
  if (*(int *)(*(long *)
                UnityEngine_XR_Interaction_Toolkit_UI_CanvasOptimizer_CanvasState_GraphicRaycasterSettings_TypeInfo
              + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  FUN_055b6a84(lVar9,param_6);
  FUN_055b7340(param_1,lVar9,param_6);
  FUN_055b6fb0(lVar9,param_6);
  local_64 = -1;
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  uVar13 = FUN_05064e74(0);
  uVar13 = FUN_050d2d8c(&local_64,uVar13,0);
  if (lVar9 == 0) goto LAB_055c0254;
  FUN_0555cd88(lVar9,param_7 & 1,0);
  puVar7 = 
  Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BaseRegistrationList<IXRGroupMember>_get_registeredSnapshot__
  ;
  puVar6 = Method_UnityEngine_UIElements_BaseField<string>_get_labelElement__;
  puVar5 = UnityEngine_UIElements_BackgroundRepeat_PropertyBag_YProperty_TypeInfo;
  puVar4 = Meta_XR_MRUtilityKit_MRUKNativeFuncs_MrukOnRoomAnchorUpdated_TypeInfo;
  if ((param_6 == 0) || (uVar1 = *(uint *)(param_6 + 0x18), (int)uVar1 < 1)) {
    lVar21 = 0;
  }
  else {
    lVar20 = 0;
    lVar21 = 0;
    lVar18 = param_6 + 0x20;
    do {
      uVar19 = (uint)lVar20;
      if (uVar1 <= uVar19) {
LAB_055c07c8:
                    /* WARNING: Subroutine does not return */
        FUN_02f089d0();
      }
      plVar12 = *(long **)(lVar18 + lVar20 * 8);
      if (plVar12 == (long *)0x0) goto LAB_055c0254;
      uVar14 = (**(code **)(*plVar12 + 0x388))(plVar12,*(undefined8 *)(*plVar12 + 0x390));
      uVar10 = thunk_FUN_04f6d944(uVar14,*(undefined8 *)puVar7,0);
      if ((uVar10 & 1) != 0) {
        if (*(uint *)(param_6 + 0x18) <= uVar19) goto LAB_055c07c8;
        plVar12 = *(long **)(lVar18 + lVar20 * 8);
        if (plVar12 == (long *)0x0) goto LAB_055c0254;
        uVar14 = (**(code **)(*plVar12 + 0x358))(plVar12,*(undefined8 *)(*plVar12 + 0x360));
        uVar10 = thunk_FUN_04f6d944(uVar14,*(undefined8 *)puVar5,0);
        if ((uVar10 & 1) != 0) {
          if (*(uint *)(param_6 + 0x18) <= uVar19) goto LAB_055c07c8;
          plVar12 = *(long **)(lVar18 + lVar20 * 8);
          if (plVar12 == (long *)0x0) goto LAB_055c0254;
          uVar14 = (**(code **)(*plVar12 + 0x1b8))(plVar12,*(undefined8 *)(*plVar12 + 0x1c0));
          uVar10 = thunk_FUN_04f6d944(uVar14,*(undefined8 *)PTR_DAT_067cab28,0);
          if ((uVar10 & 1) != 0) {
            FUN_0555cd88(lVar9,0,0);
          }
        }
      }
      if (*(uint *)(param_6 + 0x18) <= uVar19) goto LAB_055c07c8;
      plVar12 = *(long **)(lVar18 + lVar20 * 8);
      if (plVar12 == (long *)0x0) goto LAB_055c0254;
      uVar14 = (**(code **)(*plVar12 + 0x388))(plVar12,*(undefined8 *)(*plVar12 + 0x390));
      uVar10 = thunk_FUN_04f6d944(uVar14,*(undefined8 *)puVar6,0);
      if ((uVar10 & 1) != 0) {
        if (*(uint *)(param_6 + 0x18) <= uVar19) goto LAB_055c07c8;
        plVar12 = *(long **)(lVar18 + lVar20 * 8);
        if (plVar12 == (long *)0x0) goto LAB_055c0254;
        uVar14 = (**(code **)(*plVar12 + 0x358))(plVar12,*(undefined8 *)(*plVar12 + 0x360));
        uVar10 = thunk_FUN_04f6d944(uVar14,*(undefined8 *)puVar5,0);
        if ((uVar10 & 1) != 0) {
          if (*(uint *)(param_6 + 0x18) <= uVar19) goto LAB_055c07c8;
          plVar12 = *(long **)(lVar18 + lVar20 * 8);
          if (plVar12 == (long *)0x0) goto LAB_055c0254;
          uVar13 = (**(code **)(*plVar12 + 0x1b8))(plVar12,*(undefined8 *)(*plVar12 + 0x1c0));
        }
      }
      if (*(uint *)(param_6 + 0x18) <= uVar19) goto LAB_055c07c8;
      plVar12 = *(long **)(lVar18 + lVar20 * 8);
      if (plVar12 == (long *)0x0) goto LAB_055c0254;
      uVar14 = (**(code **)(*plVar12 + 0x388))(plVar12,*(undefined8 *)(*plVar12 + 0x390));
      uVar10 = thunk_FUN_04f6d944(uVar14,*(undefined8 *)puVar4,0);
      if ((uVar10 & 1) != 0) {
        if (*(uint *)(param_6 + 0x18) <= uVar19) goto LAB_055c07c8;
        plVar12 = *(long **)(lVar18 + lVar20 * 8);
        if (plVar12 == (long *)0x0) goto LAB_055c0254;
        uVar14 = (**(code **)(*plVar12 + 0x358))(plVar12,*(undefined8 *)(*plVar12 + 0x360));
        uVar10 = thunk_FUN_04f6d944(uVar14,*(undefined8 *)puVar5,0);
        if ((uVar10 & 1) != 0) {
          if (*(uint *)(param_6 + 0x18) <= uVar19) goto LAB_055c07c8;
          plVar12 = *(long **)(lVar18 + lVar20 * 8);
          if (plVar12 == (long *)0x0) goto LAB_055c0254;
          lVar21 = (**(code **)(*plVar12 + 0x1b8))(plVar12,*(undefined8 *)(*plVar12 + 0x1c0));
        }
      }
      uVar1 = *(uint *)(param_6 + 0x18);
      lVar20 = lVar20 + 1;
    } while ((int)lVar20 < (int)uVar1);
  }
  puVar5 = PTR_DAT_067c9fd0;
  puVar4 = PTR_DAT_067c9338;
  lVar18 = *(long *)(PTR_DAT_067c9338 + 0x48);
  if (*(int *)(*(long *)(PTR_DAT_067c9338 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  uVar14 = FUN_050e4454(lVar18 + 0x20,0);
  if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
    thunk_FUN_02f6670c(*(long *)puVar5);
  }
  plVar12 = (long *)FUN_0505d668(uVar13,uVar14,0,0);
  if (plVar12 == (long *)0x0) goto LAB_055c0254;
  if (*(long *)(*plVar12 + 0x40) != *(long *)(*(long *)(puVar4 + 0x48) + 0x40)) {
                    /* WARNING: Subroutine does not return */
    FUN_02f08d48();
  }
  piVar16 = (int *)thunk_FUN_02f453b8();
  iVar17 = *piVar16;
  lVar18 = FUN_0555f7d8(lVar9,0);
  if (lVar18 != 0) {
    lVar18 = FUN_0555f7d8(lVar9,0);
    if (lVar18 == 0) goto LAB_055c0254;
    if (*(int *)(lVar18 + 0x10) != 0) {
      plVar12 = *(long **)(param_1 + 0x30);
      if (plVar12 == (long *)0x0) goto LAB_055c0254;
      (**(code **)(*plVar12 + 0x308))(plVar12,lVar9,*(undefined8 *)(*plVar12 + 0x310));
    }
  }
  if (((lVar11 == 0) || (*(long *)(lVar11 + 0x28) == 0)) ||
     (*(int *)(*(long *)(lVar11 + 0x28) + 0x10) < 1)) {
LAB_055c06c8:
    *(undefined8 *)(lVar9 + 0xe0) = param_3;
  }
  else {
    if (*(int *)(*(long *)
                  UnityEngine_XR_Interaction_Toolkit_UI_CanvasOptimizer_CanvasState_GraphicRaycasterSettings_TypeInfo
                + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    lVar18 = FUN_055b68ec(param_2,*(undefined8 *)
                                   Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Receiver_BaseAffordanceStateReceiver<Color>_OnEnable__
                         );
    if (lVar18 != 0) {
      param_3 = FUN_055ae2bc(lVar11,0);
      goto LAB_055c06c8;
    }
  }
  FUN_0555c418(lVar9,lVar11,0);
  if (bVar3) {
    if (*(char *)(param_1 + 0xa0) != '\0') {
      if (param_4 == 0) goto LAB_055c0254;
      uVar13 = FUN_05546520(param_4,0);
      uVar13 = System_Runtime_Serialization_XmlFormatWriterInterpreter__InvokeOnSerialized
                         (param_1,uVar13);
      FUN_0555ea34(lVar9,uVar13,0);
      FUN_0555cd88(lVar9,1,0);
    }
    if (iVar17 < 0) {
      if (param_4 == 0) goto LAB_055c0254;
    }
    else {
      if ((param_4 == 0) || (plVar12 = *(long **)(param_4 + 0x40), plVar12 == (long *)0x0))
      goto LAB_055c0254;
      iVar8 = (**(code **)(*plVar12 + 0x1c8))(plVar12,*(undefined8 *)(*plVar12 + 0x1d0));
      if (iVar17 < iVar8) {
        if (*(long *)(param_4 + 0x40) != 0) {
          FUN_0557e70c(*(long *)(param_4 + 0x40),iVar17,lVar9,0);
          goto joined_r0x055c0764;
        }
        goto LAB_055c0254;
      }
    }
    if (*(long *)(param_4 + 0x40) == 0) {
LAB_055c0254:
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    FUN_0557e700(*(long *)(param_4 + 0x40),lVar9,0);
  }
joined_r0x055c0764:
  if (lVar21 != 0) {
    uVar13 = FUN_05562a50(lVar9,lVar21,0);
    FUN_0555f03c(lVar9,uVar13,0);
  }
  return;
}


