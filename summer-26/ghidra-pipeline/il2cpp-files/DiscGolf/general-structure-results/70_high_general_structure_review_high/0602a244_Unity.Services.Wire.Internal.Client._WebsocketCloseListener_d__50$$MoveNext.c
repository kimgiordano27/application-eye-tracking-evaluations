/*
FUNCTION_NAME: Unity.Services.Wire.Internal.Client.<WebsocketCloseListener>d__50$$MoveNext
ENTRY_POINT: 0602a244
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_12;strong_file_logging_hits_2;telemetry_or_network_hits_4;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Removing unreachable block (ram,0x0602a7b0) */

long Unity_Services_Wire_Internal_Client_<WebsocketCloseListener>d__50__MoveNext(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  undefined8 *unaff_x19;
  long unaff_x20;
  long *plVar13;
  long *unaff_x21;
  undefined8 *unaff_x22;
  undefined8 uVar14;
  long unaff_x23;
  undefined1 auVar15 [16];
  
  FUN_02d965b8(*(undefined8 *)(param_1 + 0x1c8));
  FUN_02d965b8(Method_UnityEngine_Rendering_CameraProperties_GetShadowCullingPlane__);
  FUN_02d965b8(PTR_DAT_069ff558);
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
  *(undefined1 *)(unaff_x23 + 0xb24) = 1;
  lVar6 = thunk_FUN_02dd3144(*unaff_x22);
  FUN_04e92874(lVar6,*unaff_x19);
  puVar1 = 
  Method_UnityEngine_XR_Interaction_Toolkit_Locomotion_Teleportation_BaseTeleportationInteractable_GenerateTeleportRequest__
  ;
  if (unaff_x21 == (long *)0x0) {
LAB_0602a7a8:
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  lVar10 = *unaff_x21;
  uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar11 != 0) {
    piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) ==
          *(long *)
           Method_UnityEngine_XR_Interaction_Toolkit_Locomotion_Teleportation_BaseTeleportationInteractable_GenerateTeleportRequest__
         ) {
        puVar7 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
        goto LAB_0602a324;
      }
      uVar11 = uVar11 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar11 != 0);
  }
  puVar7 = (undefined8 *)FUN_02dd004c();
LAB_0602a324:
  puVar2 = PTR_DAT_069ff500;
  uVar8 = (*(code *)*puVar7)();
  uVar11 = FUN_0536c9cc(uVar8,0);
  if ((uVar11 & 1) == 0) {
    lVar10 = *unaff_x21;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
          puVar7 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_0602a390;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar7 = (undefined8 *)FUN_02dd004c();
LAB_0602a390:
    uVar8 = (*(code *)*puVar7)();
    uVar8 = FUN_05362cb4(*(undefined8 *)
                          Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<SharedAnchorManager_<CheckIfSharingAnchorServiceHung>d__28>__
                         ,uVar8,0);
    if (lVar6 == 0) goto LAB_0602a7a8;
    FUN_04e935f0(lVar6,*(undefined8 *)
                        Method_UnityEngine_Rendering_CameraSwitcher_<OnEnable>b__10_2__,uVar8,
                 *(undefined8 *)puVar2);
  }
  if (*(int *)(*(long *)PTR_DAT_069fc218 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  uVar8 = FUN_06304ca4(0);
  puVar5 = Method_UnityEngine_Rendering_CameraSwitcher_<OnEnable>b__10_1__;
  puVar7 = (undefined8 *)Method_UnityEngine_Rendering_CameraSwitcher_<OnEnable>b__10_0__;
  puVar4 = Method_UnityEngine_Rendering_CameraProperties_GetShadowCullingPlane__;
  puVar3 = 
  Method_Unity_Burst_BurstCompiler_CompileFunctionPointer<XRGrabInteractable_StepSmoothingBurst_00000F66_PostfixBurstDelegate>__
  ;
  puVar1 = PTR_DAT_069fb9d8;
  if (lVar6 == 0) goto LAB_0602a7a8;
  FUN_04e935f0(lVar6,*(undefined8 *)
                      Method_UnityEngine_Rendering_CameraProperties_GetCameraCullingPlane__,uVar8,
               *(undefined8 *)puVar2);
  if (**(char **)(*(long *)puVar3 + 0xb8) != '\0') {
    puVar7 = (undefined8 *)puVar4;
  }
  FUN_04e935f0(lVar6,*(undefined8 *)puVar5,*puVar7,*(undefined8 *)puVar2);
  lVar10 = FUN_02d966a4(*(undefined8 *)puVar1,1);
  puVar3 = PTR_DAT_06a0e3f8;
  if (lVar10 == 0) goto LAB_0602a7a8;
  if (*(int *)(lVar10 + 0x18) == 0) goto LAB_0602a7ac;
  *(undefined8 *)(lVar10 + 0x20) = *(undefined8 *)PTR_DAT_06a0e3f8;
  LeanTween__value();
  lVar9 = FUN_02d966a4(*(undefined8 *)puVar1,2);
  if (lVar9 == 0) goto LAB_0602a7a8;
  if (*(int *)(lVar9 + 0x18) == 0) {
LAB_0602a7ac:
                    /* WARNING: Subroutine does not return */
    FUN_02d96868();
  }
  *(undefined8 *)(lVar9 + 0x20) = *(undefined8 *)puVar3;
  LeanTween__value((undefined8 *)(lVar9 + 0x20));
  puVar1 = PTR_DAT_069ff540;
  if ((*(uint *)(lVar9 + 0x18) & 0xfffffffe) == 0) goto LAB_0602a7ac;
  *(undefined8 *)(lVar9 + 0x28) =
       *(undefined8 *)
        Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<SessionsManager_<UpdateKickedUsersList>d__67>__
  ;
  uVar8 = LeanTween__value();
  uVar8 = FUN_06021e18(uVar8,lVar9);
  uVar11 = FUN_0536c9cc(uVar8,0);
  if ((uVar11 & 1) == 0) {
    uVar11 = FUN_04e935f0(lVar6,*(undefined8 *)
                                 Oculus_Avatar2_OvrAvatarCustomHandPose_JointTransform_TypeInfo,
                          uVar8,*(undefined8 *)puVar2);
  }
  uVar14 = *(undefined8 *)puVar1;
  uVar8 = FUN_06021ef0(uVar11,lVar10);
  uVar11 = FUN_0536c9cc(uVar8,0);
  if ((uVar11 & 1) != 0) {
    uVar11 = thunk_FUN_0536b75c(uVar14,*(undefined8 *)puVar1,0);
    if (((uVar11 & 1) == 0) &&
       (uVar11 = thunk_FUN_0536b75c(uVar14,*(undefined8 *)
                                            Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<PointerMoveEvent>__
                                    ,0), (uVar11 & 1) == 0)) goto LAB_0602a598;
    uVar8 = *(undefined8 *)puVar3;
  }
  FUN_04e935f0(lVar6,*(undefined8 *)PTR_DAT_069ff558,uVar8,*(undefined8 *)puVar2);
LAB_0602a598:
  if ((unaff_x20 == 0) || (plVar13 = *(long **)(unaff_x20 + 0x28), plVar13 == (long *)0x0)) {
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
        goto LAB_0602a5f8;
      }
      uVar11 = uVar11 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar11 != 0);
  }
  puVar7 = (undefined8 *)
           FUN_02dd004c(plVar13,*(long *)
                                 UnityEngine_XR_Interaction_Toolkit_Interactors_XRBaseInteractor_TypeInfo
                        ,0);
LAB_0602a5f8:
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
          goto LAB_0602a67c;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar7 = (undefined8 *)FUN_02dd004c(plVar13,*(long *)puVar1,0);
LAB_0602a67c:
    uVar11 = (*(code *)*puVar7)(plVar13,puVar7[1]);
    if ((uVar11 & 1) == 0) {
      if (plVar13 == (long *)0x0) {
        return lVar6;
      }
      lVar10 = *plVar13;
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar11 == 0) goto LAB_0602a754;
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
          goto LAB_0602a6e0;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar7 = (undefined8 *)FUN_02dd004c(plVar13,*(long *)puVar3,0);
LAB_0602a6e0:
    auVar15 = (*(code *)*puVar7)(plVar13,puVar7[1]);
    FUN_04e935dc(lVar6,auVar15._0_8_,auVar15._8_8_,*(undefined8 *)puVar2);
  } while( true );
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar12 = piVar12 + 4;
    if (uVar11 == 0) break;
    if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_069fbff0) {
      puVar7 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_0602a770;
    }
  }
LAB_0602a754:
  puVar7 = (undefined8 *)FUN_02dd004c(plVar13,*(long *)PTR_DAT_069fbff0,0);
LAB_0602a770:
  (*(code *)*puVar7)(plVar13,puVar7[1]);
  return lVar6;
}


