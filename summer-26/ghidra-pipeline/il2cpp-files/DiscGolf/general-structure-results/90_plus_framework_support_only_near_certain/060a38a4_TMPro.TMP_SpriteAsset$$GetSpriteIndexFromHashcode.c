/*
FUNCTION_NAME: TMPro.TMP_SpriteAsset$$GetSpriteIndexFromHashcode
ENTRY_POINT: 060a38a4
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 98
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;telemetry_or_network_hits_6;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_6
*/


/* WARNING: Removing unreachable block (ram,0x060a3fbc) */

long TMPro_TMP_SpriteAsset__GetSpriteIndexFromHashcode(long param_1,long *param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  long *plVar13;
  undefined1 auVar14 [16];
  
  puVar2 = PTR_DAT_069ff510;
  puVar1 = PTR_DAT_069ff508;
  if ((DAT_06dc4f31 & 1) == 0) {
    FUN_02d965b8(PTR_DAT_069fc218);
    FUN_02d965b8(PTR_DAT_069ff500);
    FUN_02d965b8(PTR_DAT_069ff508);
    FUN_02d965b8(
                System_Net_Http_Headers_TryParseListDelegate<MediaTypeWithQualityHeaderValue>_TypeInfo
                );
    FUN_02d965b8(PTR_DAT_069ff510);
    FUN_02d965b8(Method_System_Enum_TryParseEnum__);
    FUN_02d965b8(
                Method_UnityEngine_XR_Interaction_Toolkit_Locomotion_Teleportation_BaseTeleportationInteractable_GenerateTeleportRequest__
                );
    FUN_02d965b8(PTR_DAT_069fbff0);
    FUN_02d965b8(UnityEngine_XR_Interaction_Toolkit_Interactors_XRBaseInteractor_TypeInfo);
    FUN_02d965b8(UnityEngine_XR_Interaction_Toolkit_Locomotion_XRBodyGroundPosition_TypeInfo);
    FUN_02d965b8(PTR_DAT_069fbff8);
    FUN_02d965b8(System_Collections_Generic_Dictionary<string,_OVRGLTFInputNode>_TypeInfo);
    FUN_02d965b8(System_Collections_Generic_Dictionary<string,_object>_TypeInfo);
    FUN_02d965b8(PTR_DAT_069fb9d8);
    FUN_02d965b8(Method_System_Linq_Enumerable_All<SwitchCase>__);
    FUN_02d965b8(PTR_DAT_069ff540);
    FUN_02d965b8(Oculus_Avatar2_OvrAvatarCustomHandPose_JointTransform_TypeInfo);
    FUN_02d965b8(Method_UnityEngine_Rendering_CameraProperties_GetCameraCullingPlane__);
    FUN_02d965b8(OVRPlugin_OVRP_1_36_0_TypeInfo);
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<SessionsManager_<UpdateKickedUsersList>d__67>__
                );
    FUN_02d965b8(Method_UnityEngine_Rendering_CameraProperties_GetShadowCullingPlane__);
    FUN_02d965b8(PTR_DAT_069ff558);
    FUN_02d965b8(Method_System_Linq_Enumerable_All<Expression>__);
    FUN_02d965b8(Method_System_Linq_Enumerable_All<Player>__);
    FUN_02d965b8(PTR_DAT_06a0e3f8);
    FUN_02d965b8(Method_UnityEngine_Rendering_CameraSwitcher_<OnEnable>b__10_0__);
    FUN_02d965b8(Method_UnityEngine_Rendering_CameraSwitcher_<OnEnable>b__10_1__);
    FUN_02d965b8(Method_UnityEngine_Rendering_CameraSwitcher_<OnEnable>b__10_2__);
    FUN_02d965b8(
                Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<PointerMoveEvent>__
                );
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<SharedAnchorManager_<CheckIfSharingAnchorServiceHung>d__28>__
                );
    DAT_06dc4f31 = 1;
  }
  lVar6 = thunk_FUN_02dd3144(*(undefined8 *)puVar2);
  FUN_04e92874(lVar6,*(undefined8 *)puVar1);
  puVar1 = 
  Method_UnityEngine_XR_Interaction_Toolkit_Locomotion_Teleportation_BaseTeleportationInteractable_GenerateTeleportRequest__
  ;
  if (param_2 == (long *)0x0) {
LAB_060a3fb4:
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  lVar10 = *param_2;
  uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar11 != 0) {
    piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) ==
          *(long *)
           Method_UnityEngine_XR_Interaction_Toolkit_Locomotion_Teleportation_BaseTeleportationInteractable_GenerateTeleportRequest__
         ) {
        puVar7 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
        goto LAB_060a3abc;
      }
      uVar11 = uVar11 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar11 != 0);
  }
  puVar7 = (undefined8 *)
           FUN_02dd004c(param_2,*(long *)
                                 Method_UnityEngine_XR_Interaction_Toolkit_Locomotion_Teleportation_BaseTeleportationInteractable_GenerateTeleportRequest__
                        ,0);
LAB_060a3abc:
  puVar2 = PTR_DAT_069ff500;
  uVar8 = (*(code *)*puVar7)(param_2,puVar7[1]);
  uVar11 = FUN_0536c9cc(uVar8,0);
  if ((uVar11 & 1) == 0) {
    lVar10 = *param_2;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
          puVar7 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_060a3b28;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar7 = (undefined8 *)FUN_02dd004c(param_2,*(long *)puVar1,0);
LAB_060a3b28:
    uVar8 = (*(code *)*puVar7)(param_2,puVar7[1]);
    uVar8 = FUN_05362cb4(*(undefined8 *)
                          Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<SharedAnchorManager_<CheckIfSharingAnchorServiceHung>d__28>__
                         ,uVar8,0);
    if (lVar6 == 0) goto LAB_060a3fb4;
    FUN_04e935f0(lVar6,*(undefined8 *)
                        Method_UnityEngine_Rendering_CameraSwitcher_<OnEnable>b__10_2__,uVar8,
                 *(undefined8 *)puVar2);
  }
  if (*(int *)(*(long *)PTR_DAT_069fc218 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  uVar8 = FUN_06304ca4(0);
  puVar5 = Method_System_Enum_TryParseEnum__;
  puVar4 = Method_UnityEngine_Rendering_CameraSwitcher_<OnEnable>b__10_1__;
  puVar7 = (undefined8 *)Method_UnityEngine_Rendering_CameraSwitcher_<OnEnable>b__10_0__;
  puVar3 = Method_UnityEngine_Rendering_CameraProperties_GetShadowCullingPlane__;
  puVar1 = PTR_DAT_069fb9d8;
  if (lVar6 == 0) goto LAB_060a3fb4;
  FUN_04e935f0(lVar6,*(undefined8 *)
                      Method_UnityEngine_Rendering_CameraProperties_GetCameraCullingPlane__,uVar8,
               *(undefined8 *)puVar2);
  if (**(char **)(*(long *)puVar5 + 0xb8) != '\0') {
    puVar7 = (undefined8 *)puVar3;
  }
  FUN_04e935f0(lVar6,*(undefined8 *)puVar4,*puVar7,*(undefined8 *)puVar2);
  uVar8 = FUN_02d966a4(*(undefined8 *)puVar1,0);
  lVar10 = FUN_02d966a4(*(undefined8 *)puVar1,2);
  puVar1 = PTR_DAT_06a0e3f8;
  if (lVar10 == 0) goto LAB_060a3fb4;
  if (*(int *)(lVar10 + 0x18) == 0) {
LAB_060a3fb8:
                    /* WARNING: Subroutine does not return */
    FUN_02d96868();
  }
  *(undefined8 *)(lVar10 + 0x20) = *(undefined8 *)PTR_DAT_06a0e3f8;
  LeanTween__value((undefined8 *)(lVar10 + 0x20));
  puVar3 = OVRPlugin_OVRP_1_36_0_TypeInfo;
  if ((*(uint *)(lVar10 + 0x18) & 0xfffffffe) == 0) goto LAB_060a3fb8;
  *(undefined8 *)(lVar10 + 0x28) =
       *(undefined8 *)
        Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<SessionsManager_<UpdateKickedUsersList>d__67>__
  ;
  uVar9 = LeanTween__value();
  uVar9 = FUN_060a163c(uVar9,lVar10);
  uVar11 = FUN_0536c9cc(uVar9,0);
  if ((uVar11 & 1) == 0) {
    uVar11 = FUN_04e935f0(lVar6,*(undefined8 *)
                                 Oculus_Avatar2_OvrAvatarCustomHandPose_JointTransform_TypeInfo,
                          uVar9,*(undefined8 *)puVar2);
  }
  uVar9 = *(undefined8 *)puVar3;
  uVar8 = FUN_060a1714(uVar11,uVar8);
  uVar11 = FUN_0536c9cc(uVar8,0);
  if ((uVar11 & 1) != 0) {
    uVar11 = thunk_FUN_0536b75c(uVar9,*(undefined8 *)PTR_DAT_069ff540,0);
    if (((uVar11 & 1) == 0) &&
       (uVar11 = thunk_FUN_0536b75c(uVar9,*(undefined8 *)
                                           Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<PointerMoveEvent>__
                                    ,0), (uVar11 & 1) == 0)) goto LAB_060a3d20;
    uVar8 = *(undefined8 *)puVar1;
  }
  FUN_04e935f0(lVar6,*(undefined8 *)PTR_DAT_069ff558,uVar8,*(undefined8 *)puVar2);
LAB_060a3d20:
  uVar11 = FUN_0536c9cc(*(undefined8 *)(param_1 + 0x18),0);
  if ((uVar11 & 1) == 0) {
    FUN_04e935f0(lVar6,*(undefined8 *)Method_System_Linq_Enumerable_All<Expression>__,
                 *(undefined8 *)(param_1 + 0x18),*(undefined8 *)puVar2);
  }
  uVar11 = FUN_0536c9cc(*(undefined8 *)(param_1 + 0x20),0);
  if ((uVar11 & 1) == 0) {
    FUN_04e935f0(lVar6,*(undefined8 *)Method_System_Linq_Enumerable_All<Player>__,
                 *(undefined8 *)(param_1 + 0x20),*(undefined8 *)puVar2);
  }
  uVar11 = FUN_0536c9cc(*(undefined8 *)(param_1 + 0x28),0);
  if ((uVar11 & 1) == 0) {
    FUN_04e935f0(lVar6,*(undefined8 *)Method_System_Linq_Enumerable_All<SwitchCase>__,
                 *(undefined8 *)(param_1 + 0x28),*(undefined8 *)puVar2);
  }
  if ((param_3 == 0) || (plVar13 = *(long **)(param_3 + 0x28), plVar13 == (long *)0x0)) {
    return lVar6;
  }
  lVar10 = *plVar13;
  uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar11 != 0) {
    piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) ==
          *(long *)UnityEngine_XR_Interaction_Toolkit_Interactors_XRBaseInteractor_TypeInfo) {
        puVar7 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
        goto LAB_060a3e04;
      }
      uVar11 = uVar11 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar11 != 0);
  }
  puVar7 = (undefined8 *)
           FUN_02dd004c(plVar13,*(long *)
                                 UnityEngine_XR_Interaction_Toolkit_Interactors_XRBaseInteractor_TypeInfo
                        ,0);
LAB_060a3e04:
  plVar13 = (long *)(*(code *)*puVar7)(plVar13,puVar7[1]);
  puVar3 = UnityEngine_XR_Interaction_Toolkit_Locomotion_XRBodyGroundPosition_TypeInfo;
  puVar2 = System_Net_Http_Headers_TryParseListDelegate<MediaTypeWithQualityHeaderValue>_TypeInfo;
  puVar1 = PTR_DAT_069fbff8;
  do {
    if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    lVar10 = *plVar13;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
          puVar7 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_060a3e88;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar7 = (undefined8 *)FUN_02dd004c(plVar13,*(long *)puVar1,0);
LAB_060a3e88:
    uVar11 = (*(code *)*puVar7)(plVar13,puVar7[1]);
    if ((uVar11 & 1) == 0) {
      if (plVar13 == (long *)0x0) {
        return lVar6;
      }
      lVar10 = *plVar13;
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar11 == 0) goto LAB_060a3f60;
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      break;
    }
    if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    lVar10 = *plVar13;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)puVar3) {
          puVar7 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_060a3eec;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar7 = (undefined8 *)FUN_02dd004c(plVar13,*(long *)puVar3,0);
LAB_060a3eec:
    auVar14 = (*(code *)*puVar7)(plVar13,puVar7[1]);
    FUN_04e935dc(lVar6,auVar14._0_8_,auVar14._8_8_,*(undefined8 *)puVar2);
  } while( true );
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar12 = piVar12 + 4;
    if (uVar11 == 0) break;
    if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_069fbff0) {
      puVar7 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_060a3f7c;
    }
  }
LAB_060a3f60:
  puVar7 = (undefined8 *)FUN_02dd004c(plVar13,*(long *)PTR_DAT_069fbff0,0);
LAB_060a3f7c:
  (*(code *)*puVar7)(plVar13,puVar7[1]);
  return lVar6;
}


