/*
FUNCTION_NAME: FUN_05ec2020
ENTRY_POINT: 05ec2020
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 88
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry;frame_behavior;keyword_support
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;eye_or_gaze_keyword_boost_only
*/


undefined8 FUN_05ec2020(long param_1)

{
  uint uVar1;
  undefined8 uVar2;
  ulong uVar3;
  int iVar4;
  undefined8 *in_x9;
  int in_w10;
  ulong unaff_x20;
  long unaff_x21;
  ulong unaff_x22;
  undefined8 *unaff_x24;
  ulong unaff_x25;
  ulong unaff_x26;
  ulong unaff_x28;
  ulong unaff_x29;
  undefined8 in_stack_00000008;
  
LAB_05ec2154:
  uVar2 = *in_x9;
  *(int *)(unaff_x21 + 0x1c) = in_w10 + 1;
  if (param_1 != 0) {
    do {
      uVar1 = *(uint *)(unaff_x21 + 0x18);
      if (uVar1 < *(uint *)(param_1 + 0x18)) {
        *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
        *(undefined8 *)(param_1 + (long)(int)uVar1 * 8 + 0x20) = uVar2;
      }
      else {
        FUN_03abf904();
      }
      unaff_x20 = unaff_x20 - 1 & unaff_x20;
      if (unaff_x20 == 0) {
        if (*(int *)(unaff_x21 + 0x18) < 1) {
          uVar2 = *(undefined8 *)
                   Method_UnityEngine_XR_ARSubsystems_XREnvironmentProbeSubsystem_set_automaticPlacementRequested__
          ;
        }
        else {
          uVar2 = System_Globalization_CultureInfo__GetCultureInfo();
        }
        return uVar2;
      }
      uVar3 = unaff_x20 & -unaff_x20;
      if (uVar3 < 0x4001) {
        if (uVar3 < 0x81) {
          if (uVar3 < 0x11) {
            if (uVar3 - 1 < 4) {
              iVar4 = (int)(uVar3 - 1);
              if (iVar4 < 2) {
                if (iVar4 == 0) {
                  if (unaff_x21 == 0) break;
                  in_w10 = *(int *)(unaff_x21 + 0x1c);
                  param_1 = *(long *)(unaff_x21 + 0x10);
                  in_x9 = (undefined8 *)
                          Method_UnityEngine_XR_Hands_Gestures_XRFingerShapeMath_CalculatePinch__;
                }
                else {
                  if (unaff_x21 == 0) break;
                  in_w10 = *(int *)(unaff_x21 + 0x1c);
                  param_1 = *(long *)(unaff_x21 + 0x10);
                  in_x9 = (undefined8 *)
                          Method_UnityEngine_XR_Hands_Gestures_XRFingerShapeMath_SetFingerShapeConfiguration__
                  ;
                }
                goto LAB_05ec2154;
              }
              if (iVar4 != 2) {
                if (unaff_x21 == 0) break;
                in_w10 = *(int *)(unaff_x21 + 0x1c);
                param_1 = *(long *)(unaff_x21 + 0x10);
                in_x9 = (undefined8 *)
                        Method_UnityEngine_XR_Hands_Gestures_XRFingerShapeMath_DegreesBetween__;
                goto LAB_05ec2154;
              }
            }
            else {
              if (uVar3 == 8) {
                if (unaff_x21 == 0) break;
                in_w10 = *(int *)(unaff_x21 + 0x1c);
                param_1 = *(long *)(unaff_x21 + 0x10);
                in_x9 = (undefined8 *)
                        Method_UnityEngine_XR_Interaction_Toolkit_Interactors_XRDirectInteractor_OnInteractableRegistered__
                ;
                goto LAB_05ec2154;
              }
              if (uVar3 == 0x10) goto code_r0x05ec1d74;
            }
          }
          else {
            uVar1 = (uint)uVar3 & 0xff;
            if (uVar1 == 0x20) {
              if (unaff_x21 == 0) break;
              in_w10 = *(int *)(unaff_x21 + 0x1c);
              param_1 = *(long *)(unaff_x21 + 0x10);
              in_x9 = (undefined8 *)Method_UnityEngine_XR_XRDisplaySubsystem_GetCullingParameters__;
              goto LAB_05ec2154;
            }
            if (uVar1 == 0x40) {
              if (unaff_x21 == 0) break;
              in_w10 = *(int *)(unaff_x21 + 0x1c);
              param_1 = *(long *)(unaff_x21 + 0x10);
              in_x9 = (undefined8 *)
                      Method_UnityEngine_XR_Interaction_Toolkit_Interactors_XRDirectInteractor_OnInteractableUnregistered__
              ;
              goto LAB_05ec2154;
            }
            if (uVar1 == 0x80) {
              if (unaff_x21 == 0) break;
              in_w10 = *(int *)(unaff_x21 + 0x1c);
              param_1 = *(long *)(unaff_x21 + 0x10);
              in_x9 = (undefined8 *)
                      Method_UnityEngine_XR_Hands_Gestures_XRFingerShapeMath_CalculateFullCurl__;
              goto LAB_05ec2154;
            }
          }
        }
        else if (uVar3 < 0x401) {
          if (uVar3 == 0x100) {
            if (unaff_x21 != 0) {
              uVar2 = FUN_063fb9f4(*(undefined8 *)(unaff_x21 + 0x10));
              return uVar2;
            }
            break;
          }
          if (uVar3 == 0x200) {
            if (unaff_x21 == 0) break;
            in_w10 = *(int *)(unaff_x21 + 0x1c);
            param_1 = *(long *)(unaff_x21 + 0x10);
            in_x9 = (undefined8 *)
                    Method_UnityEngine_XR_Hands_Gestures_XRFingerShapeMath_CalculateBaseCurlThumb__;
            goto LAB_05ec2154;
          }
          if (uVar3 == 0x400) {
            if (unaff_x21 == 0) break;
            in_w10 = *(int *)(unaff_x21 + 0x1c);
            param_1 = *(long *)(unaff_x21 + 0x10);
            in_x9 = (undefined8 *)Method_UnityEngine_XR_ARSubsystems_XRFaceMesh_Resize<Vector2>__;
            goto LAB_05ec2154;
          }
        }
        else if (uVar3 < 0x1001) {
          if (uVar3 == 0x800) {
            if (unaff_x21 == 0) break;
            in_w10 = *(int *)(unaff_x21 + 0x1c);
            param_1 = *(long *)(unaff_x21 + 0x10);
            in_x9 = (undefined8 *)Method_UnityEngine_XR_ARSubsystems_XRFaceSubsystem_GetFaceMesh__;
            goto LAB_05ec2154;
          }
          if (uVar3 == 0x1000) {
            if (unaff_x21 == 0) break;
            in_w10 = *(int *)(unaff_x21 + 0x1c);
            param_1 = *(long *)(unaff_x21 + 0x10);
            in_x9 = (undefined8 *)
                    Method_UnityEngine_XR_Hands_Gestures_XRFingerShapeMath_CalculateBaseCurl__;
            goto LAB_05ec2154;
          }
        }
        else {
          if (uVar3 == 0x2000) {
            if (unaff_x21 == 0) break;
            in_w10 = *(int *)(unaff_x21 + 0x1c);
            param_1 = *(long *)(unaff_x21 + 0x10);
            in_x9 = (undefined8 *)
                    Method_UnityEngine_XR_Hands_Gestures_XRFingerShapeCondition_CheckCondition__;
            goto LAB_05ec2154;
          }
          if (uVar3 == 0x4000) {
            if (unaff_x21 == 0) break;
            in_w10 = *(int *)(unaff_x21 + 0x1c);
            param_1 = *(long *)(unaff_x21 + 0x10);
            in_x9 = (undefined8 *)
                    Method_UnityEngine_XR_Interaction_Toolkit_Transformers_XRGeneralGrabTransformer_AdjustPositionForPermittedAxesBurst__
            ;
            goto LAB_05ec2154;
          }
        }
      }
      else if (uVar3 < unaff_x26 + 0xe0000) {
        if (uVar3 < unaff_x26) {
          if (uVar3 == 0x8000) {
            if (unaff_x21 != 0) {
              uVar2 = FUN_063fbc7c(*(undefined8 *)(unaff_x21 + 0x10));
              return uVar2;
            }
            break;
          }
          if (uVar3 == 0x10000) {
            if (unaff_x21 == 0) break;
            in_w10 = *(int *)(unaff_x21 + 0x1c);
            param_1 = *(long *)(unaff_x21 + 0x10);
            in_x9 = (undefined8 *)
                    Method_UnityEngine_XR_ARSubsystems_XREnvironmentProbeSubsystem_TryAddEnvironmentProbe__
            ;
            goto LAB_05ec2154;
          }
          if (uVar3 == 0x20000) {
            if (unaff_x21 == 0) break;
            in_w10 = *(int *)(unaff_x21 + 0x1c);
            param_1 = *(long *)(unaff_x21 + 0x10);
            in_x9 = (undefined8 *)
                    Method_UnityEngine_XR_Interaction_Toolkit_Interactors_XRDirectInteractor_OnContactRemoved__
            ;
            goto LAB_05ec2154;
          }
        }
        else {
          if (uVar3 == 0x40000) {
            if (unaff_x21 == 0) break;
            in_w10 = *(int *)(unaff_x21 + 0x1c);
            param_1 = *(long *)(unaff_x21 + 0x10);
            in_x9 = (undefined8 *)Method_UnityEngine_XR_ARSubsystems_XRFaceMesh_Resize<Vector3>__;
            goto LAB_05ec2154;
          }
          if (uVar3 == 0x80000) {
            if (unaff_x21 == 0) break;
            in_w10 = *(int *)(unaff_x21 + 0x1c);
            param_1 = *(long *)(unaff_x21 + 0x10);
            in_x9 = (undefined8 *)
                    Method_UnityEngine_XR_XRDisplaySubsystem_EndRecordingIfLateLatched__;
            goto LAB_05ec2154;
          }
          if (uVar3 == 0x100000) {
            if (unaff_x21 == 0) break;
            in_w10 = *(int *)(unaff_x21 + 0x1c);
            param_1 = *(long *)(unaff_x21 + 0x10);
            in_x9 = (undefined8 *)
                    Method_UnityEngine_XR_XRDisplaySubsystem_BeginRecordingIfLateLatched__;
            goto LAB_05ec2154;
          }
        }
      }
      else if (uVar3 < unaff_x26 + 0x7e0000) {
        if (uVar3 == 0x200000) {
          if (unaff_x21 == 0) break;
          in_w10 = *(int *)(unaff_x21 + 0x1c);
          param_1 = *(long *)(unaff_x21 + 0x10);
          in_x9 = (undefined8 *)PTR_DAT_067d26d0;
          goto LAB_05ec2154;
        }
        if (uVar3 == 0x400000) {
          if (unaff_x21 == 0) break;
          in_w10 = *(int *)(unaff_x21 + 0x1c);
          param_1 = *(long *)(unaff_x21 + 0x10);
          in_x9 = (undefined8 *)
                  Method_UnityEngine_XR_ARSubsystems_XRFaceSubsystem_set_requestedMaximumFaceCount__
          ;
          goto LAB_05ec2154;
        }
        if (uVar3 == 0x800000) {
          if (unaff_x21 == 0) break;
          in_w10 = *(int *)(unaff_x21 + 0x1c);
          param_1 = *(long *)(unaff_x21 + 0x10);
          in_x9 = (undefined8 *)Method_UnityEngine_XR_ARSubsystems_XRFaceMesh_Resize<int>__;
          goto LAB_05ec2154;
        }
      }
      else if (unaff_x22 < uVar3) {
        if (uVar3 == unaff_x29) {
          if (unaff_x21 == 0) break;
          in_w10 = *(int *)(unaff_x21 + 0x1c);
          param_1 = *(long *)(unaff_x21 + 0x10);
          in_x9 = (undefined8 *)Method_UnityEngine_XR_Hands_Gestures_XRFingerShapeMath_LocalizeTo__;
          goto LAB_05ec2154;
        }
        if (uVar3 == unaff_x25) {
          if (unaff_x21 == 0) break;
          in_w10 = *(int *)(unaff_x21 + 0x1c);
          param_1 = *(long *)(unaff_x21 + 0x10);
          in_x9 = (undefined8 *)Method_UnityEngine_XR_XRDisplaySubsystem_GetRenderPass__;
          goto LAB_05ec2154;
        }
      }
      else {
        if (uVar3 == unaff_x28) {
          if (unaff_x21 == 0) break;
          in_w10 = *(int *)(unaff_x21 + 0x1c);
          param_1 = *(long *)(unaff_x21 + 0x10);
          in_x9 = (undefined8 *)
                  Method_UnityEngine_XR_ARSubsystems_XREnvironmentProbeSubsystemDescriptor_Register__
          ;
          goto LAB_05ec2154;
        }
        if (uVar3 == unaff_x22) {
          if (unaff_x21 == 0) break;
          in_w10 = *(int *)(unaff_x21 + 0x1c);
          param_1 = *(long *)(unaff_x21 + 0x10);
          in_x9 = (undefined8 *)
                  Method_UnityEngine_XR_Interaction_Toolkit_Gaze_XRGazeAssistance_OnBeforeRender__;
          goto LAB_05ec2154;
        }
      }
      in_stack_00000008 = *unaff_x24;
      uVar2 = FUN_0510aa48(&stack0x00000008,0);
      if (unaff_x21 == 0) break;
      param_1 = *(long *)(unaff_x21 + 0x10);
      *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
      if (param_1 == 0) break;
    } while( true );
  }
  goto LAB_05ec2200;
code_r0x05ec1d74:
  if (unaff_x21 == 0) {
LAB_05ec2200:
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  in_w10 = *(int *)(unaff_x21 + 0x1c);
  param_1 = *(long *)(unaff_x21 + 0x10);
  in_x9 = (undefined8 *)Method_UnityEngine_XR_Hands_Gestures_XRFingerShapeMath_CalculateTipCurl__;
  goto LAB_05ec2154;
}


