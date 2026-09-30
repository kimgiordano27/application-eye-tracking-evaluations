/*
FUNCTION_NAME: FUN_031a2994
ENTRY_POINT: 031a2994
PROGRAM: gunraiders-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;ui_interaction;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_21;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_6;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_031a2994(long param_1)

{
  uint uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  if ((DAT_0453240f & 1) == 0) {
    FUN_01c5d288(RootMotion_FinalIK_IKSolverVR_Locomotion_TypeInfo);
    FUN_01c5d288(RootMotion_FinalIK_IKSolverVR_VirtualBone_TypeInfo);
    FUN_01c5d288(UnityEngine_UIElements_IMGUIContainer_UxmlFactory_TypeInfo);
    FUN_01c5d288(
                System_Linq_Expressions_Interpreter_GreaterThanOrEqualInstruction_GreaterThanOrEqualUInt64_TypeInfo
                );
    FUN_01c5d288(OVR_OpenVR_IVRCompositor__ShowMirrorWindow_TypeInfo);
    FUN_01c5d288(ExitGames_Client_Photon_IPhotonSocket_<>c_TypeInfo);
    FUN_01c5d288(OVR_OpenVR_IVRApplications__AddApplicationManifest_TypeInfo);
    FUN_01c5d288(OVR_OpenVR_IVRApplications__GetApplicationProcessId_TypeInfo);
    FUN_01c5d288(OVR_OpenVR_IVRApplications__GetApplicationSupportedMimeTypes_TypeInfo);
    FUN_01c5d288(OVR_OpenVR_IVRCompositor__Submit_TypeInfo);
    FUN_01c5d288(System_Security_Cryptography_RijndaelManagedTransform_TypeInfo);
    FUN_01c5d288(OVR_OpenVR_IVRApplications__GetCurrentSceneProcessId_TypeInfo);
    FUN_01c5d288(OVR_OpenVR_IVRApplications__GetDefaultApplicationForMimeType_TypeInfo);
    FUN_01c5d288(OVR_OpenVR_IVRApplications__GetStartingApplication_TypeInfo);
    FUN_01c5d288(OVR_OpenVR_IVRApplications__LaunchApplication_TypeInfo);
    FUN_01c5d288(OVR_OpenVR_IVRApplications__LaunchDashboardOverlay_TypeInfo);
    FUN_01c5d288(OVR_OpenVR_IVRApplications__SetDefaultApplicationForMimeType_TypeInfo);
    FUN_01c5d288(RootMotion_FinalIK_Grounding_Leg_TypeInfo);
    FUN_01c5d288(OVR_OpenVR_IVRCompositor__SubmitExplicitTimingData_TypeInfo);
    FUN_01c5d288(OVR_OpenVR_IVRCompositor__SuspendRendering_TypeInfo);
    FUN_01c5d288(OVR_OpenVR_IVRChaperone__ReloadInfo_TypeInfo);
    FUN_01c5d288(OVR_OpenVR_IVRChaperoneSetup__ExportLiveToBuffer_TypeInfo);
    FUN_01c5d288(OVR_OpenVR_IVRChaperoneSetup__GetLiveCollisionBoundsTagsInfo_TypeInfo);
    FUN_01c5d288(OVR_OpenVR_IVRChaperoneSetup__GetWorkingPlayAreaRect_TypeInfo);
    FUN_01c5d288(OVR_OpenVR_IVRChaperoneSetup__GetWorkingPlayAreaSize_TypeInfo);
    FUN_01c5d288(OVR_OpenVR_IVRChaperoneSetup__ImportFromBufferToWorking_TypeInfo);
    FUN_01c5d288(OVR_OpenVR_IVRCompositor__UnlockGLSharedTextureForAccess_TypeInfo);
    FUN_01c5d288(OVR_OpenVR_IVRChaperoneSetup__SetWorkingPhysicalBoundsInfo_TypeInfo);
    FUN_01c5d288(OVR_OpenVR_IVRChaperoneSetup__SetWorkingStandingZeroPoseToRawTrackingPose_TypeInfo)
    ;
    FUN_01c5d288(OVR_OpenVR_IVRCompositor__CanRenderScene_TypeInfo);
    FUN_01c5d288(Rifle_TypeInfo);
    FUN_01c5d288(OVR_OpenVR_IVRCompositor__CompositorQuit_TypeInfo);
    FUN_01c5d288(OVR_OpenVR_IVRCompositor__FadeGrid_TypeInfo);
    FUN_01c5d288(OVR_OpenVR_IVRCompositor__ForceInterleavedReprojectionOn_TypeInfo);
    FUN_01c5d288(OVR_OpenVR_IVRCompositor__ForceReconnectProcess_TypeInfo);
    FUN_01c5d288(OVR_OpenVR_IVRCompositor__GetCumulativeStats_TypeInfo);
    FUN_01c5d288(OVR_OpenVR_IVRCompositor__GetFrameTimeRemaining_TypeInfo);
    FUN_01c5d288(RootMotion_FinalIK_Grounding_Pelvis_TypeInfo);
    FUN_01c5d288(OVR_OpenVR_IVRCompositor__WaitGetPoses_TypeInfo);
    FUN_01c5d288(OVR_OpenVR_IVRCompositor__PostPresentHandoff_TypeInfo);
    DAT_0453240f = 1;
  }
  if (param_1 == 0) {
    thunk_FUN_01c273e8(PTR_DAT_0422fa20);
    uVar2 = thunk_FUN_01c496e0();
    uVar4 = thunk_FUN_01c273e8(PTR_DAT_04231c30);
    FUN_0323fc78(uVar2,uVar4,0);
    uVar4 = thunk_FUN_01c273e8(OVR_OpenVR_IVRDriverManager__GetDriverCount_TypeInfo);
                    /* WARNING: Subroutine does not return */
    FUN_01c5d37c(uVar2,uVar4);
  }
  uVar2 = FUN_03156c24(param_1,0);
  uVar1 = FUN_032ae098(uVar2,0);
  if (0x8eaabef3 < uVar1) {
    if (0xa0f81c56 < uVar1) {
      if (uVar1 < 0xd2599304) {
        if (uVar1 < 0xaeb0bb98) {
          puVar5 = (undefined8 *)OVR_OpenVR_IVRCompositor__ForceReconnectProcess_TypeInfo;
          if (uVar1 != 0xa714c8ed) {
            puVar5 = (undefined8 *)OVR_OpenVR_IVRChaperone__ReloadInfo_TypeInfo;
            if (uVar1 != 0xaeb0bb97) {
              return 0;
            }
            goto LAB_031a2f90;
          }
          goto LAB_031a30bc;
        }
        puVar5 = (undefined8 *)
                 OVR_OpenVR_IVRChaperoneSetup__SetWorkingStandingZeroPoseToRawTrackingPose_TypeInfo;
        if (uVar1 != 0xce0f60cd) {
          if (uVar1 != 0xd2599303) {
            return 0;
          }
          uVar3 = thunk_FUN_03152714(uVar2,*(undefined8 *)
                                            OVR_OpenVR_IVRApplications__AddApplicationManifest_TypeInfo
                                     ,0);
          puVar5 = (undefined8 *)OVR_OpenVR_IVRCompositor__WaitGetPoses_TypeInfo;
          goto FUN_031a2ff0;
        }
      }
      else {
        if (0xedeadb74 < uVar1) {
          puVar5 = (undefined8 *)OVR_OpenVR_IVRApplications__LaunchApplication_TypeInfo;
          if ((uVar1 != 0xf935eb42) &&
             (puVar5 = (undefined8 *)
                       OVR_OpenVR_IVRChaperoneSetup__GetLiveCollisionBoundsTagsInfo_TypeInfo,
             uVar1 != 0xfa539971)) {
            return 0;
          }
          goto LAB_031a30ec;
        }
        puVar5 = (undefined8 *)OVR_OpenVR_IVRChaperoneSetup__GetWorkingPlayAreaSize_TypeInfo;
        if ((uVar1 != 0xdd0745d2) &&
           (puVar5 = (undefined8 *)
                     OVR_OpenVR_IVRApplications__GetApplicationSupportedMimeTypes_TypeInfo,
           uVar1 != 0xedeadb74)) {
          return 0;
        }
      }
LAB_031a308c:
      uVar3 = thunk_FUN_03152714(uVar2,*puVar5,0);
      puVar5 = (undefined8 *)RootMotion_FinalIK_Grounding_Leg_TypeInfo;
      goto joined_r0x031a30a4;
    }
    if (uVar1 < 0x941c3113) {
      puVar5 = (undefined8 *)OVR_OpenVR_IVRChaperoneSetup__ExportLiveToBuffer_TypeInfo;
      if (uVar1 == 0x8ebaf25e) {
LAB_031a30ec:
        uVar3 = thunk_FUN_03152714(uVar2,*puVar5,0);
        puVar5 = (undefined8 *)RootMotion_FinalIK_Grounding_Pelvis_TypeInfo;
        goto joined_r0x031a30a4;
      }
      puVar5 = (undefined8 *)ExitGames_Client_Photon_IPhotonSocket_<>c_TypeInfo;
      if (uVar1 == 0x921d7826) goto LAB_031a3044;
      puVar5 = (undefined8 *)OVR_OpenVR_IVRApplications__SetDefaultApplicationForMimeType_TypeInfo;
      if (uVar1 != 0x941c3112) {
        return 0;
      }
    }
    else {
      if (0x9f43e8ae < uVar1) {
        puVar5 = (undefined8 *)OVR_OpenVR_IVRCompositor__GetFrameTimeRemaining_TypeInfo;
        if (uVar1 == 0xa093ee6b) goto LAB_031a308c;
        puVar5 = (undefined8 *)OVR_OpenVR_IVRCompositor__ForceInterleavedReprojectionOn_TypeInfo;
        if (uVar1 != 0xa0f81c56) {
          return 0;
        }
        goto LAB_031a30ec;
      }
      puVar5 = (undefined8 *)OVR_OpenVR_IVRChaperoneSetup__GetWorkingPlayAreaRect_TypeInfo;
      if (uVar1 != 0x9cd435fa) {
        if (uVar1 != 0x9f43e8ae) {
          return 0;
        }
        uVar3 = thunk_FUN_03152714(uVar2,*(undefined8 *)
                                          OVR_OpenVR_IVRCompositor__SubmitExplicitTimingData_TypeInfo
                                   ,0);
        puVar5 = (undefined8 *)OVR_OpenVR_IVRCompositor__SuspendRendering_TypeInfo;
        goto FUN_031a2ff0;
      }
    }
LAB_031a30bc:
    uVar3 = thunk_FUN_03152714(uVar2,*puVar5,0);
    puVar5 = (undefined8 *)
             System_Linq_Expressions_Interpreter_GreaterThanOrEqualInstruction_GreaterThanOrEqualUInt64_TypeInfo
    ;
    goto joined_r0x031a30a4;
  }
  if (uVar1 < 0x648d81bf) {
    if (uVar1 < 0x22e223f5) {
      puVar5 = (undefined8 *)OVR_OpenVR_IVRCompositor__CompositorQuit_TypeInfo;
      if (((uVar1 != 0x1143a804) &&
          (puVar5 = (undefined8 *)OVR_OpenVR_IVRApplications__GetCurrentSceneProcessId_TypeInfo,
          uVar1 != 0x163f2cc3)) &&
         (puVar5 = (undefined8 *)OVR_OpenVR_IVRApplications__GetStartingApplication_TypeInfo,
         uVar1 != 0x22e223f4)) {
        return 0;
      }
LAB_031a2f90:
      uVar3 = thunk_FUN_03152714(uVar2,*puVar5,0);
      puVar5 = (undefined8 *)Rifle_TypeInfo;
      goto joined_r0x031a30a4;
    }
    if (uVar1 < 0x5f67535e) {
      puVar5 = (undefined8 *)UnityEngine_UIElements_IMGUIContainer_UxmlFactory_TypeInfo;
      if (uVar1 != 0x45a1c243) {
        puVar5 = (undefined8 *)RootMotion_FinalIK_IKSolverVR_VirtualBone_TypeInfo;
        if (uVar1 != 0x5f67535d) {
          return 0;
        }
        goto LAB_031a30ec;
      }
LAB_031a3044:
      uVar3 = thunk_FUN_03152714(uVar2,*puVar5,0);
      puVar5 = (undefined8 *)OVR_OpenVR_IVRCompositor__Submit_TypeInfo;
      goto joined_r0x031a30a4;
    }
    puVar5 = (undefined8 *)OVR_OpenVR_IVRApplications__GetApplicationProcessId_TypeInfo;
    if (uVar1 == 0x633b63ce) goto LAB_031a30bc;
    puVar5 = (undefined8 *)OVR_OpenVR_IVRApplications__GetDefaultApplicationForMimeType_TypeInfo;
    if (uVar1 != 0x648d81be) {
      return 0;
    }
  }
  else {
    if (uVar1 < 0x7f0e6d34) {
      if (0x7b6a2c14 < uVar1) {
        puVar5 = (undefined8 *)OVR_OpenVR_IVRCompositor__GetCumulativeStats_TypeInfo;
        if (uVar1 != 0x7d52e567) {
          if (uVar1 != 0x7f0e6d33) {
            return 0;
          }
          uVar3 = thunk_FUN_03152714(uVar2,*(undefined8 *)
                                            RootMotion_FinalIK_IKSolverVR_Locomotion_TypeInfo,0);
          puVar5 = (undefined8 *)OVR_OpenVR_IVRCompositor__ShowMirrorWindow_TypeInfo;
          goto FUN_031a2ff0;
        }
        goto LAB_031a3044;
      }
      if (uVar1 == 0x6f03d3d0) {
        uVar3 = thunk_FUN_03152714(uVar2,*(undefined8 *)
                                          OVR_OpenVR_IVRCompositor__PostPresentHandoff_TypeInfo,0);
        puVar5 = (undefined8 *)OVR_OpenVR_IVRCompositor__UnlockGLSharedTextureForAccess_TypeInfo;
FUN_031a2ff0:
        if ((uVar3 & 1) == 0) {
          return 0;
        }
        return *puVar5;
      }
      puVar5 = (undefined8 *)OVR_OpenVR_IVRApplications__LaunchDashboardOverlay_TypeInfo;
      if (uVar1 != 0x7b6a2c14) {
        return 0;
      }
      goto LAB_031a2f90;
    }
    if (uVar1 < 0x874c798c) {
      puVar5 = (undefined8 *)OVR_OpenVR_IVRCompositor__CanRenderScene_TypeInfo;
      if (uVar1 == 0x840039d1) goto LAB_031a308c;
      puVar5 = (undefined8 *)OVR_OpenVR_IVRChaperoneSetup__SetWorkingPhysicalBoundsInfo_TypeInfo;
      if (uVar1 != 0x874c798b) {
        return 0;
      }
    }
    else {
      puVar5 = (undefined8 *)OVR_OpenVR_IVRCompositor__FadeGrid_TypeInfo;
      if (uVar1 == 0x8bdca021) goto LAB_031a30bc;
      puVar5 = (undefined8 *)OVR_OpenVR_IVRChaperoneSetup__ImportFromBufferToWorking_TypeInfo;
      if (uVar1 != 0x8eaabef3) {
        return 0;
      }
    }
  }
  uVar3 = thunk_FUN_03152714(uVar2,*puVar5,0);
  puVar5 = (undefined8 *)System_Security_Cryptography_RijndaelManagedTransform_TypeInfo;
joined_r0x031a30a4:
  if ((uVar3 & 1) != 0) {
    return *puVar5;
  }
  return 0;
}


