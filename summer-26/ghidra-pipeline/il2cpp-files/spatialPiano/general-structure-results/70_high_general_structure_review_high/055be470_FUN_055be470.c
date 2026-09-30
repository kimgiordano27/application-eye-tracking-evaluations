/*
FUNCTION_NAME: FUN_055be470
ENTRY_POINT: 055be470
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_21;ray_or_cast_sink_hits_4;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_3;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_055be470(long param_1,long *param_2,long param_3,ulong param_4)

{
  byte bVar1;
  bool bVar2;
  long *plVar3;
  undefined *puVar4;
  int iVar5;
  uint uVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  undefined8 uVar10;
  long *plVar11;
  undefined8 uVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  ulong local_78;
  
  if ((DAT_06bbfb61 & 1) == 0) {
    FUN_02f08768(System_Collections_Generic_List<BodyPoseData_JointData>_TypeInfo);
    FUN_02f08768(
                UnityEngine_XR_Interaction_Toolkit_Transformers_XRSocketGrabTransformer_CalculateScaleToFit_00000966_PostfixBurstDelegate_TypeInfo
                );
    FUN_02f08768(
                UnityEngine_XR_Interaction_Toolkit_UI_CanvasOptimizer_CanvasState_GraphicRaycasterSettings_TypeInfo
                );
    FUN_02f08768(Oculus_Interaction_MAction<PokeInteractor>_TypeInfo);
    FUN_02f08768(Method_UnityEngine_UIElements_BaseField<float>_add_viewDataRestored__);
    FUN_02f08768(Method_UnityEngine_UIElements_BaseField<float>_get_labelElement__);
    FUN_02f08768(
                Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Receiver_BaseAffordanceStateReceiver<Color>_GetCurrentValueForCapture__
                );
    FUN_02f08768(
                Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Receiver_BaseAffordanceStateReceiver<Color>_OnEnable__
                );
    FUN_02f08768(Meta_XR_MRUtilityKit_MRUKNativeFuncs_MrukOnRoomAnchorUpdated_TypeInfo);
    FUN_02f08768(PTR_DAT_067cd6c0);
    FUN_02f08768(
                Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BaseRegistrationList<IXRGroupMember>_get_registeredSnapshot__
                );
    DAT_06bbfb61 = 1;
  }
  if (param_2 == (long *)0x0) goto LAB_055bec5c;
  plVar7 = param_2;
  if (param_2[0xc] == 0) {
    plVar7 = *(long **)(param_1 + 0x60);
    if (plVar7 == (long *)0x0) goto LAB_055bec5c;
    plVar7 = (long *)(**(code **)(*plVar7 + 0x308))
                               (plVar7,param_2[0xe],*(undefined8 *)(*plVar7 + 0x310));
    if (plVar7 != (long *)0x0) {
      bVar1 = *(byte *)(*(long *)
                         Method_UnityEngine_UIElements_BaseField<float>_add_viewDataRestored__ +
                       0x130);
      if ((*(byte *)(*plVar7 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar1 * 8 + -8) !=
          *(long *)Method_UnityEngine_UIElements_BaseField<float>_add_viewDataRestored__)) {
                    /* WARNING: Subroutine does not return */
        FUN_02f08d48(plVar7);
      }
      goto LAB_055be5a0;
    }
    plVar8 = (long *)FUN_055bb3e8(param_1,0);
    if (plVar8 == (long *)0x0) goto LAB_055bec5c;
    plVar7 = (long *)0x0;
LAB_055be664:
    lVar14 = *plVar8;
    bVar1 = *(byte *)(*(long *)
                       Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Receiver_BaseAffordanceStateReceiver<Color>_GetCurrentValueForCapture__
                     + 0x130);
    if ((*(byte *)(lVar14 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(lVar14 + 200) + (ulong)bVar1 * 8 + -8) !=
        *(long *)
         Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Receiver_BaseAffordanceStateReceiver<Color>_GetCurrentValueForCapture__
       )) {
      bVar1 = *(byte *)(*(long *)Method_UnityEngine_UIElements_BaseField<float>_get_labelElement__ +
                       0x130);
      if ((*(byte *)(lVar14 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(lVar14 + 200) + (ulong)bVar1 * 8 + -8) !=
          *(long *)Method_UnityEngine_UIElements_BaseField<float>_get_labelElement__)) {
        if (plVar8[7] == 0) {
          uVar10 = FUN_05567b08(0);
        }
        else {
          FUN_02a7da48(plVar8);
          uVar10 = FUN_05567abc(plVar8[7],0);
        }
        goto LAB_055beca8;
      }
      if (plVar8[0x16] == 0) goto LAB_055bec5c;
      lVar14 = *(long *)(plVar8[0x16] + 0x10);
      uVar9 = FUN_055c3ca4(param_1,lVar14);
      goto LAB_055be854;
    }
    lVar15 = thunk_FUN_02f45270(*(undefined8 *)
                                 UnityEngine_XR_Interaction_Toolkit_Transformers_XRSocketGrabTransformer_CalculateScaleToFit_00000966_PostfixBurstDelegate_TypeInfo
                               );
    FUN_055ad7b0(lVar15,plVar8,0);
    lVar14 = FUN_0577ac88(plVar8,0);
    if (lVar14 == 0) goto LAB_055bec5c;
    if (*(long *)(lVar14 + 0x10) == 0) {
LAB_055be7b4:
      if (lVar15 == 0) goto LAB_055bec5c;
      local_78 = FUN_055c3ca4(param_1,*(undefined8 *)(lVar15 + 0x10));
      puVar4 = PTR_DAT_067c9338;
      lVar14 = *(long *)(lVar15 + 0x28);
      uVar9 = local_78;
      if (*(int *)(lVar15 + 0x30) == 1) {
        lVar16 = *(long *)(PTR_DAT_067c9338 + 0x90);
        if (*(int *)(*(long *)(PTR_DAT_067c9338 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        uVar10 = FUN_050e4454(lVar16 + 0x20,0);
        uVar9 = FUN_050ed374(local_78,uVar10,0);
        if ((uVar9 & 1) != 0) {
          lVar16 = *(long *)(puVar4 + 0x88);
          if (*(int *)(*(long *)(puVar4 + 0xe0) + 0xe4) == 0) {
            thunk_FUN_02f6670c();
          }
          uVar9 = FUN_050e4454(lVar16 + 0x20,0);
          local_78 = uVar9;
        }
      }
    }
    else {
      lVar14 = FUN_0577ac88(plVar8,0);
      if ((lVar14 == 0) || (*(long *)(lVar14 + 0x10) == 0)) goto LAB_055bec5c;
      if (*(int *)(*(long *)(lVar14 + 0x10) + 0x10) == 0) goto LAB_055be7b4;
      lVar14 = FUN_0577ac88(plVar8,0);
      if (lVar14 == 0) goto LAB_055bec5c;
      uVar9 = FUN_04f6dc3c(*(undefined8 *)(lVar14 + 0x18),*(undefined8 *)PTR_DAT_067cd6c0,0);
      if ((uVar9 & 1) == 0) goto LAB_055be7b4;
      plVar11 = (long *)FUN_0577ac88(plVar8,0);
      if (plVar11 == (long *)0x0) goto LAB_055bec5c;
      lVar14 = (**(code **)(*plVar11 + 0x168))(plVar11,*(undefined8 *)(*plVar11 + 0x170));
      plVar11 = (long *)FUN_0577ac88(plVar8,0);
      if (plVar11 == (long *)0x0) goto LAB_055bec5c;
      uVar10 = (**(code **)(*plVar11 + 0x168))(plVar11,*(undefined8 *)(*plVar11 + 0x170));
      uVar9 = FUN_055c3ca4(param_1,uVar10);
      local_78 = uVar9;
    }
  }
  else {
LAB_055be5a0:
    plVar8 = (long *)FUN_055bb3e8(param_1,plVar7);
    if (plVar8 != (long *)0x0) goto LAB_055be664;
    if (plVar7[0xf] == 0) goto LAB_055bec5c;
    lVar14 = *(long *)(plVar7[0xf] + 0x10);
    uVar9 = FUN_04f6ebb4(lVar14,0);
    if ((uVar9 & 1) == 0) {
      if (plVar7[0xf] == 0) goto LAB_055bec5c;
      uVar9 = FUN_04f6dc3c(*(undefined8 *)(plVar7[0xf] + 0x18),*(undefined8 *)PTR_DAT_067cd6c0,0);
      plVar8 = (long *)plVar7[0xf];
      if ((uVar9 & 1) == 0) {
        if (plVar8 == (long *)0x0) goto LAB_055bec5c;
        lVar15 = plVar8[2];
      }
      else {
        if (plVar8 == (long *)0x0) goto LAB_055bec5c;
        lVar15 = (**(code **)(*plVar8 + 0x168))(plVar8,*(undefined8 *)(*plVar8 + 0x170));
      }
      uVar9 = FUN_055c3ca4(param_1,lVar15);
    }
    else {
      lVar15 = *(long *)(PTR_DAT_067c9338 + 0x90);
      lVar14 = **(long **)(lVar15 + 0xb8);
      if (*(int *)(*(long *)(PTR_DAT_067c9338 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      uVar9 = FUN_050e4454(lVar15 + 0x20,0);
    }
    plVar8 = (long *)0x0;
LAB_055be854:
    lVar15 = 0;
    local_78 = uVar9;
  }
  puVar4 = Oculus_Interaction_MAction<PokeInteractor>_TypeInfo;
  uVar10 = FUN_055b7858(uVar9,plVar7);
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_02f6670c(*(long *)puVar4);
  }
  uVar10 = FUN_0581a024(uVar10,0);
  if (((param_4 & 1) == 0) || (*(char *)(param_1 + 0xa0) != '\0')) {
    if ((param_3 == 0) || (*(long *)(param_3 + 0x40) == 0)) goto LAB_055bec5c;
    uVar9 = FUN_055804e8(*(long *)(param_3 + 0x40),uVar10,1,0);
    if ((uVar9 & 1) == 0) goto LAB_055be950;
    if (*(long *)(param_3 + 0x40) == 0) goto LAB_055bec5c;
    plVar11 = (long *)FUN_0557e3c8(*(long *)(param_3 + 0x40),uVar10,0);
    if (*(char *)(param_1 + 0xa0) != '\0') {
      if (plVar11 == (long *)0x0) goto LAB_055bec5c;
      iVar5 = (**(code **)(*plVar11 + 0x1d8))(plVar11,*(undefined8 *)(*plVar11 + 0x1e0));
      if (iVar5 != 2) {
        FUN_02a7da48(plVar11);
        uVar10 = FUN_05567ddc(plVar11[6],0);
LAB_055beca8:
        uVar12 = thunk_FUN_02f6ef30(
                                   Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BaseRegistrationList<IXRHoverFilter>_get_registeredSnapshot__
                                   );
                    /* WARNING: Subroutine does not return */
        FUN_02f0888c(uVar10,uVar12);
      }
      if (param_2[0x10] == 0) goto LAB_055bec5c;
      uVar9 = FUN_04f6ebb4(*(undefined8 *)(param_2[0x10] + 0x18),0);
      if (((uVar9 & 1) != 0) && (uVar9 = FUN_04f6ebb4(plVar11[0x17],0), (uVar9 & 1) != 0)) {
        return;
      }
      if (param_2[0x10] == 0) goto LAB_055bec5c;
      uVar17 = *(undefined8 *)(param_2[0x10] + 0x18);
      uVar12 = FUN_0556053c(plVar11,0);
      uVar9 = FUN_04f6d990(uVar17,uVar12,4,0);
      if ((uVar9 & 1) != 0) {
        return;
      }
      goto LAB_055be950;
    }
    bVar2 = false;
    plVar3 = (long *)
             UnityEngine_XR_Interaction_Toolkit_UI_CanvasOptimizer_CanvasState_GraphicRaycasterSettings_TypeInfo
    ;
  }
  else {
LAB_055be950:
    plVar11 = (long *)thunk_FUN_02f45270(*(undefined8 *)
                                          System_Collections_Generic_List<BodyPoseData_JointData>_TypeInfo
                                        );
    FUN_0555c070(plVar11,uVar10,local_78,0,2,0);
    bVar2 = true;
    plVar3 = (long *)
             UnityEngine_XR_Interaction_Toolkit_UI_CanvasOptimizer_CanvasState_GraphicRaycasterSettings_TypeInfo
    ;
  }
  UnityEngine_XR_Interaction_Toolkit_UI_CanvasOptimizer_CanvasState_GraphicRaycasterSettings_TypeInfo
       = (undefined *)plVar3;
  if (plVar7 == (long *)0x0) goto LAB_055bec5c;
  lVar16 = plVar7[9];
  if (*(int *)(*plVar3 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  FUN_055b6a84(plVar11,lVar16);
  FUN_055b7340(param_1,plVar11,plVar7[9]);
  FUN_055b6fb0(plVar11,plVar7[9]);
  if (plVar11 == (long *)0x0) goto LAB_055bec5c;
  lVar16 = FUN_0555f7d8(plVar11,0);
  if (lVar16 != 0) {
    lVar16 = FUN_0555f7d8(plVar11,0);
    if (lVar16 == 0) goto LAB_055bec5c;
    if (*(int *)(lVar16 + 0x10) != 0) {
      plVar13 = *(long **)(param_1 + 0x30);
      if (plVar13 == (long *)0x0) goto LAB_055bec5c;
      (**(code **)(*plVar13 + 0x308))(plVar13,plVar11,*(undefined8 *)(*plVar13 + 0x310));
    }
  }
  puVar4 = 
  Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_Receiver_BaseAffordanceStateReceiver<Color>_OnEnable__
  ;
  if (((lVar15 == 0) || (*(long *)(lVar15 + 0x28) == 0)) ||
     (*(int *)(*(long *)(lVar15 + 0x28) + 0x10) < 1)) {
LAB_055bea60:
    plVar11[0x1c] = lVar14;
  }
  else {
    if (*(int *)(*plVar3 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    lVar14 = FUN_055b68ec(plVar8,*(undefined8 *)puVar4);
    if (lVar14 != 0) {
      lVar14 = FUN_055ae2bc(lVar15,0);
      goto LAB_055bea60;
    }
  }
  FUN_0555c418(plVar11,lVar15,0);
  FUN_0555cd88(plVar11,*(int *)((long)param_2 + 0x6c) != 3,0);
  if (param_2[0x10] == 0) {
LAB_055bec5c:
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  FUN_05560580(plVar11,*(undefined8 *)(param_2[0x10] + 0x18),0);
  uVar10 = FUN_0556053c(plVar11,0);
  uVar10 = FUN_055bb368(uVar10,param_2,*(undefined8 *)puVar4,uVar10);
  FUN_05560580(plVar11,uVar10,0);
  if (bVar2) {
    if (*(char *)(param_1 + 0xa0) != '\0') {
      FUN_0555cd88(plVar11,1,0);
      uVar10 = FUN_0556053c(plVar11,0);
      uVar10 = System_Runtime_Serialization_XmlFormatWriterInterpreter__InvokeOnSerialized
                         (param_1,uVar10);
      FUN_0555ea34(plVar11,uVar10,0);
    }
    if ((param_3 == 0) || (*(long *)(param_3 + 0x40) == 0)) goto LAB_055bec5c;
    FUN_0557e700(*(long *)(param_3 + 0x40),plVar11,0);
  }
  iVar5 = *(int *)((long)param_2 + 0x6c);
  if (iVar5 == 2) {
    uVar10 = (**(code **)(*plVar11 + 0x1e8))(plVar11,4,*(undefined8 *)(*plVar11 + 0x1f0));
    uVar6 = FUN_055b8f80(uVar10,plVar7,
                         *(undefined8 *)
                          Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BaseRegistrationList<IXRGroupMember>_get_registeredSnapshot__
                         ,1);
    FUN_0555cd88(plVar11,uVar6 & 1,0);
    if (*(int *)(*plVar3 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    lVar14 = FUN_055b68ec(plVar7,*(undefined8 *)
                                  Meta_XR_MRUtilityKit_MRUKNativeFuncs_MrukOnRoomAnchorUpdated_TypeInfo
                         );
    if (lVar14 != 0) {
      uVar10 = FUN_05562a50(plVar11,lVar14,0);
      FUN_0555f03c(plVar11,uVar10,0);
    }
    iVar5 = *(int *)((long)param_2 + 0x6c);
  }
  if (iVar5 == 3) {
    if (*(int *)(*plVar3 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    lVar14 = FUN_055b68ec(plVar7,*(undefined8 *)
                                  Meta_XR_MRUtilityKit_MRUKNativeFuncs_MrukOnRoomAnchorUpdated_TypeInfo
                         );
  }
  else {
    lVar14 = plVar7[10];
  }
  if ((*(int *)((long)plVar7 + 0x6c) == 1) && (lVar14 == 0)) {
    lVar14 = plVar7[0xb];
  }
  if (lVar14 != 0) {
    uVar10 = FUN_05562a50(plVar11,lVar14,0);
    FUN_0555f03c(plVar11,uVar10,0);
  }
  return;
}


