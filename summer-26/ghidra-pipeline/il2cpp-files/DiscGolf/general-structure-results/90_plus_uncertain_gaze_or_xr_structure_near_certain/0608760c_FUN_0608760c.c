/*
FUNCTION_NAME: FUN_0608760c
ENTRY_POINT: 0608760c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 118
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;telemetry_or_network_hits_4;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x06087c4c) */

long FUN_0608760c(undefined8 param_1,long *param_2,long param_3)

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
  if ((DAT_06dc4e53 & 1) == 0) {
    FUN_02d965b8(PTR_DAT_069fc218);
    FUN_02d965b8(PTR_DAT_069ff500);
    FUN_02d965b8(PTR_DAT_069ff508);
    FUN_02d965b8(
                System_Net_Http_Headers_TryParseListDelegate<MediaTypeWithQualityHeaderValue>_TypeInfo
                );
    FUN_02d965b8(PTR_DAT_069ff510);
    FUN_02d965b8(Method_UnityEngine_Rendering_UI_DebugUIHandlerVector4_<SetWidget>b__8_7__);
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
    FUN_02d965b8(PTR_DAT_069ff540);
    FUN_02d965b8(Oculus_Avatar2_OvrAvatarCustomHandPose_JointTransform_TypeInfo);
    FUN_02d965b8(Method_UnityEngine_Rendering_CameraProperties_GetCameraCullingPlane__);
    FUN_02d965b8(OVRPlugin_OVRP_1_36_0_TypeInfo);
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
    DAT_06dc4e53 = 1;
  }
  lVar6 = thunk_FUN_02dd3144(*(undefined8 *)puVar2);
  FUN_04e92874(lVar6,*(undefined8 *)puVar1);
  puVar1 = 
  Method_UnityEngine_XR_Interaction_Toolkit_Locomotion_Teleportation_BaseTeleportationInteractable_GenerateTeleportRequest__
  ;
  if (param_2 == (long *)0x0) {
LAB_06087c44:
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
        goto LAB_060877f8;
      }
      uVar11 = uVar11 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar11 != 0);
  }
  puVar7 = (undefined8 *)
           FUN_02dd004c(param_2,*(long *)
                                 Method_UnityEngine_XR_Interaction_Toolkit_Locomotion_Teleportation_BaseTeleportationInteractable_GenerateTeleportRequest__
                        ,0);
LAB_060877f8:
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
          goto LAB_06087864;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar7 = (undefined8 *)FUN_02dd004c(param_2,*(long *)puVar1,0);
LAB_06087864:
    uVar8 = (*(code *)*puVar7)(param_2,puVar7[1]);
    uVar8 = FUN_05362cb4(*(undefined8 *)
                          Method_System_Runtime_CompilerServices_AsyncVoidMethodBuilder_Start<SharedAnchorManager_<CheckIfSharingAnchorServiceHung>d__28>__
                         ,uVar8,0);
    if (lVar6 == 0) goto LAB_06087c44;
    FUN_04e935f0(lVar6,*(undefined8 *)
                        Method_UnityEngine_Rendering_CameraSwitcher_<OnEnable>b__10_2__,uVar8,
                 *(undefined8 *)puVar2);
  }
                    /* try { // try from 060878b4 to 06187a63 has its CatchHandler @ 060878b4
                       catch() { ... } // from try @ 060878b4 with catch @ 060878b4
                       catch() { ... } // from try @ 06087bd0 with catch @ 060878b4
                       catch() { ... } // from try @ 06087c1c with catch @ 060878b4
                       catch() { ... } // from try @ 06087c54 with catch @ 060878b4
                       catch() { ... } // from try @ 06087c78 with catch @ 060878b4 */
  if (*(int *)(*(long *)PTR_DAT_069fc218 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  uVar8 = FUN_06304ca4(0);
  puVar5 = Method_UnityEngine_Rendering_UI_DebugUIHandlerVector4_<SetWidget>b__8_7__;
  puVar4 = Method_UnityEngine_Rendering_CameraSwitcher_<OnEnable>b__10_1__;
  puVar7 = (undefined8 *)Method_UnityEngine_Rendering_CameraSwitcher_<OnEnable>b__10_0__;
  puVar3 = Method_UnityEngine_Rendering_CameraProperties_GetShadowCullingPlane__;
  puVar1 = PTR_DAT_069fb9d8;
  if (lVar6 == 0) goto LAB_06087c44;
  FUN_04e935f0(lVar6,*(undefined8 *)
                      Method_UnityEngine_Rendering_CameraProperties_GetCameraCullingPlane__,uVar8,
               *(undefined8 *)puVar2);
  if (**(char **)(*(long *)puVar5 + 0xb8) != '\0') {
    puVar7 = (undefined8 *)puVar3;
  }
  FUN_04e935f0(lVar6,*(undefined8 *)puVar4,*puVar7,*(undefined8 *)puVar2);
  uVar8 = FUN_02d966a4(*(undefined8 *)puVar1,0);
  lVar10 = FUN_02d966a4(*(undefined8 *)puVar1,1);
  puVar3 = OVRPlugin_OVRP_1_36_0_TypeInfo;
  puVar1 = PTR_DAT_06a0e3f8;
  if (lVar10 == 0) goto LAB_06087c44;
  if (*(int *)(lVar10 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96868();
  }
  *(undefined8 *)(lVar10 + 0x20) = *(undefined8 *)PTR_DAT_06a0e3f8;
  uVar9 = LeanTween__value();
  uVar9 = FUN_0608736c(uVar9,lVar10);
  uVar11 = FUN_0536c9cc(uVar9,0);
  if ((uVar11 & 1) == 0) {
    uVar11 = FUN_04e935f0(lVar6,*(undefined8 *)
                                 Oculus_Avatar2_OvrAvatarCustomHandPose_JointTransform_TypeInfo,
                          uVar9,*(undefined8 *)puVar2);
  }
  uVar9 = *(undefined8 *)puVar3;
  uVar8 = FUN_06087444(uVar11,uVar8);
  uVar11 = FUN_0536c9cc(uVar8,0);
  if ((uVar11 & 1) != 0) {
    uVar11 = thunk_FUN_0536b75c(uVar9,*(undefined8 *)PTR_DAT_069ff540,0);
    if (((uVar11 & 1) == 0) &&
       (uVar11 = thunk_FUN_0536b75c(uVar9,*(undefined8 *)
                                           Method_UnityEngine_UIElements_CallbackEventHandler_RegisterCallback<PointerMoveEvent>__
                                    ,0), (uVar11 & 1) == 0)) goto LAB_06087a34;
    uVar8 = *(undefined8 *)puVar1;
  }
  FUN_04e935f0(lVar6,*(undefined8 *)PTR_DAT_069ff558,uVar8,*(undefined8 *)puVar2);
LAB_06087a34:
  if ((param_3 == 0) || (plVar13 = *(long **)(param_3 + 0x28), plVar13 == (long *)0x0)) {
                    /* try { // try from 06087c1c to 06187c4f has its CatchHandler @ 060878b4 */
                    /* catch(type#1 @ 066567d8) { ... } // from try @ 06087b44 with catch @ 06087c20
                        */
                    /* catch(type#1 @ 066567d8) { ... } // from try @ 06087a98 with catch @ 06087c24
                        */
                    /* catch(type#1 @ 066567d8) { ... } // from try @ 06087b94 with catch @ 06087c28
                        */
                    /* catch(type#1 @ 066567d8) { ... } // from try @ 06087af8 with catch @ 06087c2c
                        */
                    /* catch(type#1 @ 066567d8) { ... } // from try @ 06087c18 with catch @ 06087c30
                        */
                    /* catch(type#1 @ 066567d8) { ... } // from try @ 06087a64 with catch @ 06087c34
                        */
    return lVar6;
  }
  lVar10 = *plVar13;
  uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar11 != 0) {
    piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
                    /* try { // try from 06087a64 to 06187a77 has its CatchHandler @ 06087c34 */
      if (*(long *)(piVar12 + -2) ==
          *(long *)UnityEngine_XR_Interaction_Toolkit_Interactors_XRBaseInteractor_TypeInfo) {
        puVar7 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
        goto LAB_06087a94;
      }
      uVar11 = uVar11 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar11 != 0);
  }
  puVar7 = (undefined8 *)
           FUN_02dd004c(plVar13,*(long *)
                                 UnityEngine_XR_Interaction_Toolkit_Interactors_XRBaseInteractor_TypeInfo
                        ,0);
LAB_06087a94:
                    /* try { // try from 06087a98 to 06187ad7 has its CatchHandler @ 06087c24 */
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
          goto LAB_06087b18;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
                    /* try { // try from 06087af8 to 06187b33 has its CatchHandler @ 06087c2c */
      } while (uVar11 != 0);
    }
    puVar7 = (undefined8 *)FUN_02dd004c(plVar13,*(long *)puVar1,0);
LAB_06087b18:
    uVar11 = (*(code *)*puVar7)(plVar13,puVar7[1]);
    if ((uVar11 & 1) == 0) {
      if (plVar13 == (long *)0x0) {
        return lVar6;
      }
      lVar10 = *plVar13;
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar11 == 0) goto LAB_06087bf0;
                    /* try { // try from 06087bd0 to 06187c17 has its CatchHandler @ 060878b4 */
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
                    /* try { // try from 06087b44 to 06187b83 has its CatchHandler @ 06087c20 */
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)puVar3) {
          puVar7 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_06087b7c;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar7 = (undefined8 *)FUN_02dd004c(plVar13,*(long *)puVar3,0);
LAB_06087b7c:
    auVar14 = (*(code *)*puVar7)(plVar13,puVar7[1]);
                    /* try { // try from 06087b94 to 06187bcf has its CatchHandler @ 06087c28 */
    FUN_04e935dc(lVar6,auVar14._0_8_,auVar14._8_8_,*(undefined8 *)puVar2);
  } while( true );
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar12 = piVar12 + 4;
    if (uVar11 == 0) break;
    if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_069fbff0) {
      puVar7 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_06087c0c;
    }
  }
LAB_06087bf0:
  puVar7 = (undefined8 *)FUN_02dd004c(plVar13,*(long *)PTR_DAT_069fbff0,0);
LAB_06087c0c:
  (*(code *)*puVar7)(plVar13,puVar7[1]);
  return lVar6;
}


