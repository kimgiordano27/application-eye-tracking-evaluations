/*
FUNCTION_NAME: FUN_05b4323c
ENTRY_POINT: 05b4323c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_21;ray_or_cast_sink_hits_6;telemetry_or_network_hits_6;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_05b4323c(long param_1,undefined4 param_2,long *param_3)

{
  byte bVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  
  if ((DAT_06dc2142 & 1) == 0) {
    FUN_02d965b8(OVR_OpenVR_IVRChaperoneSetup__GetLivePhysicalBoundsInfo_TypeInfo);
    FUN_02d965b8(OVR_OpenVR_IVRApplications__GetStartingApplication_TypeInfo);
    FUN_02d965b8(UnityEngine_InputSystem_Layouts_InputControlLayout_ControlItemJson_<>c_TypeInfo);
    FUN_02d965b8(System_Xml_Schema_XmlSchemaIdentityConstraint_TypeInfo);
    FUN_02d965b8(OVR_OpenVR_IVRCompositor__GetCumulativeStats_TypeInfo);
    FUN_02d965b8(OVR_OpenVR_IVRChaperoneSetup__CommitWorkingCopy_TypeInfo);
    FUN_02d965b8(OVR_OpenVR_IVRApplications__GetTransitionState_TypeInfo);
    FUN_02d965b8(OVR_OpenVR_IVRApplications__IdentifyApplication_TypeInfo);
    FUN_02d965b8(OVR_OpenVR_IVRChaperoneSetup__GetLiveCollisionBoundsInfo_TypeInfo);
    FUN_02d965b8(OVR_OpenVR_IVRChaperoneSetup__SetWorkingCollisionBoundsInfo_TypeInfo);
    FUN_02d965b8(OVR_OpenVR_IVRChaperoneSetup__SetWorkingCollisionBoundsTagsInfo_TypeInfo);
    FUN_02d965b8(OVR_OpenVR_IVRChaperoneSetup__SetWorkingPhysicalBoundsInfo_TypeInfo);
    FUN_02d965b8(System_Xml_Schema_XmlSchemaGroupBase_TypeInfo);
    FUN_02d965b8(Method_UnityEngine_Pool_CollectionPool<List<Color32>,_Color32>_Get__);
    FUN_02d965b8(OVR_OpenVR_IVRApplications__IsApplicationInstalled_TypeInfo);
    FUN_02d965b8(UnityEngine_Rendering_GraphicsSettings_<>c_TypeInfo);
    FUN_02d965b8(OVR_OpenVR_IVRChaperoneSetup__GetLiveSeatedZeroPoseToRawTrackingPose_TypeInfo);
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<OvrAvatarManager_HasAvatarChangedRequestResultCode>_SetException__
                );
    FUN_02d965b8(OVR_OpenVR_IVRCompositor__CompositorQuit_TypeInfo);
    FUN_02d965b8(OVR_OpenVR_IVRApplications__LaunchApplication_TypeInfo);
    FUN_02d965b8(Method_UnityEngine_UIElements_BaseField<uint>_get_visualInput__);
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<OvrAvatarManager_HasAvatarChangedRequestResultCode>_SetResult__
                );
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<OvrAvatarManager_HasAvatarChangedRequestResultCode>_SetStateMachine__
                );
    FUN_02d965b8(System_Xml_Schema_XmlSchemaGroupRef_TypeInfo);
    FUN_02d965b8(OVR_OpenVR_IVRChaperoneSetup__ImportFromBufferToWorking_TypeInfo);
    FUN_02d965b8(OVR_OpenVR_IVRChaperoneSetup__ReloadFromDisk_TypeInfo);
    FUN_02d965b8(OVR_OpenVR_IVRChaperoneSetup__RevertWorkingCopy_TypeInfo);
    FUN_02d965b8(
                System_Linq_Expressions_Interpreter_GreaterThanInstruction_GreaterThanUInt16_TypeInfo
                );
    FUN_02d965b8(
                System_Linq_Expressions_Interpreter_GreaterThanInstruction_GreaterThanUInt32_TypeInfo
                );
    FUN_02d965b8(
                System_Linq_Expressions_Interpreter_GreaterThanInstruction_GreaterThanUInt64_TypeInfo
                );
    FUN_02d965b8(
                System_Linq_Expressions_Interpreter_GreaterThanOrEqualInstruction_GreaterThanOrEqualByte_TypeInfo
                );
    FUN_02d965b8(OVR_OpenVR_IVRCompositor__GetMirrorTextureGL_TypeInfo);
    DAT_06dc2142 = 1;
  }
  switch(param_2) {
  case 2:
    if (param_3 != (long *)0x0) {
      lVar2 = *(long *)OVR_OpenVR_IVRApplications__GetStartingApplication_TypeInfo;
      bVar1 = *(byte *)(lVar2 + 0x130);
      if ((*(byte *)(*param_3 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*param_3 + 200) + (ulong)bVar1 * 8 + -8) != lVar2)) goto LAB_05b43fb0;
      *(long **)(param_1 + 0x158) = param_3;
      if ((*(byte *)(*param_3 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*param_3 + 200) + (ulong)bVar1 * 8 + -8) != lVar2)) goto LAB_05b43fb0;
      plVar4 = (long *)(param_1 + 0x158);
      goto LAB_05b43e30;
    }
    plVar4 = (long *)(param_1 + 0x158);
    break;
  case 3:
    if (param_3 != (long *)0x0) {
      lVar2 = *(long *)Method_UnityEngine_UIElements_BaseField<uint>_get_visualInput__;
      bVar1 = *(byte *)(lVar2 + 0x130);
      if ((bVar1 <= *(byte *)(*param_3 + 0x130)) &&
         (*(long *)(*(long *)(*param_3 + 200) + (ulong)bVar1 * 8 + -8) == lVar2)) {
        *(long **)(param_1 + 0x148) = param_3;
        if ((bVar1 <= *(byte *)(*param_3 + 0x130)) &&
           (*(long *)(*(long *)(*param_3 + 200) + (ulong)bVar1 * 8 + -8) == lVar2)) {
          plVar4 = (long *)(param_1 + 0x148);
          goto LAB_05b43e30;
        }
      }
      goto LAB_05b43fb0;
    }
    plVar4 = (long *)(param_1 + 0x148);
    break;
  case 4:
    if (param_3 != (long *)0x0) {
      lVar2 = *(long *)OVR_OpenVR_IVRApplications__LaunchApplication_TypeInfo;
      bVar1 = *(byte *)(lVar2 + 0x130);
      if ((bVar1 <= *(byte *)(*param_3 + 0x130)) &&
         (*(long *)(*(long *)(*param_3 + 200) + (ulong)bVar1 * 8 + -8) == lVar2)) {
        *(long **)(param_1 + 0x150) = param_3;
        if ((bVar1 <= *(byte *)(*param_3 + 0x130)) &&
           (*(long *)(*(long *)(*param_3 + 200) + (ulong)bVar1 * 8 + -8) == lVar2)) {
          plVar4 = (long *)(param_1 + 0x150);
          goto LAB_05b43e30;
        }
      }
      goto LAB_05b43fb0;
    }
    plVar4 = (long *)(param_1 + 0x150);
    break;
  case 5:
    if (param_3 != (long *)0x0) {
      lVar2 = *(long *)OVR_OpenVR_IVRApplications__IsApplicationInstalled_TypeInfo;
      uVar3 = (ulong)*(byte *)(lVar2 + 0x130);
      if ((*(byte *)(*param_3 + 0x130) < *(byte *)(lVar2 + 0x130)) ||
         (*(long *)(*(long *)(*param_3 + 200) + uVar3 * 8 + -8) != lVar2)) goto LAB_05b43fb0;
      plVar4 = (long *)(param_1 + 0x78);
      *plVar4 = (long)param_3;
LAB_05b43e0c:
      if (((uint)*(byte *)(*param_3 + 0x130) < (uint)uVar3) ||
         (*(long *)(*(long *)(*param_3 + 200) + uVar3 * 8 + -8) != lVar2)) {
LAB_05b43fb0:
                    /* WARNING: Subroutine does not return */
        FUN_02d96be0(param_3);
      }
      goto LAB_05b43e30;
    }
    plVar4 = (long *)(param_1 + 0x78);
    break;
  case 6:
    if (param_3 != (long *)0x0) {
      lVar2 = *(long *)OVR_OpenVR_IVRApplications__IdentifyApplication_TypeInfo;
      uVar3 = (ulong)*(byte *)(lVar2 + 0x130);
      if ((*(byte *)(*param_3 + 0x130) < *(byte *)(lVar2 + 0x130)) ||
         (*(long *)(*(long *)(*param_3 + 200) + uVar3 * 8 + -8) != lVar2)) goto LAB_05b43fb0;
      plVar4 = (long *)(param_1 + 0x88);
      *plVar4 = (long)param_3;
      goto LAB_05b43e0c;
    }
    plVar4 = (long *)(param_1 + 0x88);
    break;
  case 7:
    if (param_3 != (long *)0x0) {
      lVar2 = *(long *)OVR_OpenVR_IVRApplications__GetTransitionState_TypeInfo;
      bVar1 = *(byte *)(lVar2 + 0x130);
      if ((bVar1 <= *(byte *)(*param_3 + 0x130)) &&
         (*(long *)(*(long *)(*param_3 + 200) + (ulong)bVar1 * 8 + -8) == lVar2)) {
        *(long **)(param_1 + 0x120) = param_3;
        if ((bVar1 <= *(byte *)(*param_3 + 0x130)) &&
           (*(long *)(*(long *)(*param_3 + 200) + (ulong)bVar1 * 8 + -8) == lVar2)) {
          plVar4 = (long *)(param_1 + 0x120);
          goto LAB_05b43e30;
        }
      }
      goto LAB_05b43fb0;
    }
    plVar4 = (long *)(param_1 + 0x120);
    break;
  case 8:
    if (param_3 != (long *)0x0) {
      lVar2 = *(long *)OVR_OpenVR_IVRChaperoneSetup__CommitWorkingCopy_TypeInfo;
      bVar1 = *(byte *)(lVar2 + 0x130);
      if ((bVar1 <= *(byte *)(*param_3 + 0x130)) &&
         (*(long *)(*(long *)(*param_3 + 200) + (ulong)bVar1 * 8 + -8) == lVar2)) {
        *(long **)(param_1 + 0x128) = param_3;
        if ((bVar1 <= *(byte *)(*param_3 + 0x130)) &&
           (*(long *)(*(long *)(*param_3 + 200) + (ulong)bVar1 * 8 + -8) == lVar2)) {
          plVar4 = (long *)(param_1 + 0x128);
          goto LAB_05b43e30;
        }
      }
      goto LAB_05b43fb0;
    }
    plVar4 = (long *)(param_1 + 0x128);
    break;
  case 9:
    if (param_3 != (long *)0x0) {
      lVar2 = *(long *)
               UnityEngine_InputSystem_Layouts_InputControlLayout_ControlItemJson_<>c_TypeInfo;
      uVar3 = (ulong)*(byte *)(lVar2 + 0x130);
      if ((*(byte *)(*param_3 + 0x130) < *(byte *)(lVar2 + 0x130)) ||
         (*(long *)(*(long *)(*param_3 + 200) + uVar3 * 8 + -8) != lVar2)) goto LAB_05b43fb0;
      plVar4 = (long *)(param_1 + 0x90);
      *plVar4 = (long)param_3;
      goto LAB_05b43e0c;
    }
    plVar4 = (long *)(param_1 + 0x90);
    break;
  case 10:
    if (param_3 != (long *)0x0) {
      lVar2 = *(long *)
               Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<OvrAvatarManager_HasAvatarChangedRequestResultCode>_SetException__
      ;
      uVar3 = (ulong)*(byte *)(lVar2 + 0x130);
      if ((*(byte *)(*param_3 + 0x130) < *(byte *)(lVar2 + 0x130)) ||
         (*(long *)(*(long *)(*param_3 + 200) + uVar3 * 8 + -8) != lVar2)) goto LAB_05b43fb0;
      plVar4 = (long *)(param_1 + 0xf0);
      *plVar4 = (long)param_3;
      goto LAB_05b43e0c;
    }
    plVar4 = (long *)(param_1 + 0xf0);
    break;
  case 0xb:
    if (param_3 != (long *)0x0) {
      lVar2 = *(long *)OVR_OpenVR_IVRChaperoneSetup__GetLiveSeatedZeroPoseToRawTrackingPose_TypeInfo
      ;
      uVar3 = (ulong)*(byte *)(lVar2 + 0x130);
      if ((*(byte *)(*param_3 + 0x130) < *(byte *)(lVar2 + 0x130)) ||
         (*(long *)(*(long *)(*param_3 + 200) + uVar3 * 8 + -8) != lVar2)) goto LAB_05b43fb0;
      plVar4 = (long *)(param_1 + 0xf8);
      *plVar4 = (long)param_3;
      goto LAB_05b43e0c;
    }
    plVar4 = (long *)(param_1 + 0xf8);
    break;
  case 0xc:
    if (param_3 != (long *)0x0) {
      lVar2 = *(long *)OVR_OpenVR_IVRChaperoneSetup__GetLivePhysicalBoundsInfo_TypeInfo;
      bVar1 = *(byte *)(lVar2 + 0x130);
      if ((bVar1 <= *(byte *)(*param_3 + 0x130)) &&
         (*(long *)(*(long *)(*param_3 + 200) + (ulong)bVar1 * 8 + -8) == lVar2)) {
        *(long **)(param_1 + 0x100) = param_3;
        if ((bVar1 <= *(byte *)(*param_3 + 0x130)) &&
           (*(long *)(*(long *)(*param_3 + 200) + (ulong)bVar1 * 8 + -8) == lVar2)) {
          plVar4 = (long *)(param_1 + 0x100);
          goto LAB_05b43e30;
        }
      }
      goto LAB_05b43fb0;
    }
    plVar4 = (long *)(param_1 + 0x100);
    break;
  case 0xd:
    if (param_3 != (long *)0x0) {
      lVar2 = *(long *)OVR_OpenVR_IVRChaperoneSetup__GetLiveCollisionBoundsInfo_TypeInfo;
      bVar1 = *(byte *)(lVar2 + 0x130);
      if ((bVar1 <= *(byte *)(*param_3 + 0x130)) &&
         (*(long *)(*(long *)(*param_3 + 200) + (ulong)bVar1 * 8 + -8) == lVar2)) {
        *(long **)(param_1 + 0x108) = param_3;
        if ((bVar1 <= *(byte *)(*param_3 + 0x130)) &&
           (*(long *)(*(long *)(*param_3 + 200) + (ulong)bVar1 * 8 + -8) == lVar2)) {
          plVar4 = (long *)(param_1 + 0x108);
          goto LAB_05b43e30;
        }
      }
      goto LAB_05b43fb0;
    }
    plVar4 = (long *)(param_1 + 0x108);
    break;
  case 0xe:
    if (param_3 != (long *)0x0) {
      lVar2 = *(long *)System_Xml_Schema_XmlSchemaGroupRef_TypeInfo;
      bVar1 = *(byte *)(lVar2 + 0x130);
      if ((bVar1 <= *(byte *)(*param_3 + 0x130)) &&
         (*(long *)(*(long *)(*param_3 + 200) + (ulong)bVar1 * 8 + -8) == lVar2)) {
        *(long **)(param_1 + 0x110) = param_3;
        if ((bVar1 <= *(byte *)(*param_3 + 0x130)) &&
           (*(long *)(*(long *)(*param_3 + 200) + (ulong)bVar1 * 8 + -8) == lVar2)) {
          plVar4 = (long *)(param_1 + 0x110);
          goto LAB_05b43e30;
        }
      }
      goto LAB_05b43fb0;
    }
    plVar4 = (long *)(param_1 + 0x110);
    break;
  case 0xf:
    if (param_3 != (long *)0x0) {
      lVar2 = *(long *)System_Xml_Schema_XmlSchemaIdentityConstraint_TypeInfo;
      uVar3 = (ulong)*(byte *)(lVar2 + 0x130);
      if ((*(byte *)(*param_3 + 0x130) < *(byte *)(lVar2 + 0x130)) ||
         (*(long *)(*(long *)(*param_3 + 200) + uVar3 * 8 + -8) != lVar2)) goto LAB_05b43fb0;
      plVar4 = (long *)(param_1 + 0x80);
      *plVar4 = (long)param_3;
      goto LAB_05b43e0c;
    }
    plVar4 = (long *)(param_1 + 0x80);
    break;
  case 0x10:
    if (param_3 != (long *)0x0) {
      lVar2 = *(long *)
               Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<OvrAvatarManager_HasAvatarChangedRequestResultCode>_SetResult__
      ;
      bVar1 = *(byte *)(lVar2 + 0x130);
      if ((bVar1 <= *(byte *)(*param_3 + 0x130)) &&
         (*(long *)(*(long *)(*param_3 + 200) + (ulong)bVar1 * 8 + -8) == lVar2)) {
        *(long **)(param_1 + 0x130) = param_3;
        if ((bVar1 <= *(byte *)(*param_3 + 0x130)) &&
           (*(long *)(*(long *)(*param_3 + 200) + (ulong)bVar1 * 8 + -8) == lVar2)) {
          plVar4 = (long *)(param_1 + 0x130);
          goto LAB_05b43e30;
        }
      }
      goto LAB_05b43fb0;
    }
    plVar4 = (long *)(param_1 + 0x130);
    break;
  case 0x11:
    if (param_3 != (long *)0x0) {
      lVar2 = *(long *)
               System_Linq_Expressions_Interpreter_GreaterThanOrEqualInstruction_GreaterThanOrEqualByte_TypeInfo
      ;
      uVar3 = (ulong)*(byte *)(lVar2 + 0x130);
      if ((*(byte *)(*param_3 + 0x130) < *(byte *)(lVar2 + 0x130)) ||
         (*(long *)(*(long *)(*param_3 + 200) + uVar3 * 8 + -8) != lVar2)) goto LAB_05b43fb0;
      plVar4 = (long *)(param_1 + 0xa0);
      *plVar4 = (long)param_3;
      goto LAB_05b43e0c;
    }
    plVar4 = (long *)(param_1 + 0xa0);
    break;
  case 0x12:
    if (param_3 != (long *)0x0) {
      lVar2 = *(long *)System_Xml_Schema_XmlSchemaGroupBase_TypeInfo;
      uVar3 = (ulong)*(byte *)(lVar2 + 0x130);
      if ((*(byte *)(*param_3 + 0x130) < *(byte *)(lVar2 + 0x130)) ||
         (*(long *)(*(long *)(*param_3 + 200) + uVar3 * 8 + -8) != lVar2)) goto LAB_05b43fb0;
      plVar4 = (long *)(param_1 + 0x98);
      *plVar4 = (long)param_3;
      goto LAB_05b43e0c;
    }
    plVar4 = (long *)(param_1 + 0x98);
    break;
  case 0x13:
    if (param_3 != (long *)0x0) {
      lVar2 = *(long *)OVR_OpenVR_IVRChaperoneSetup__SetWorkingPhysicalBoundsInfo_TypeInfo;
      uVar3 = (ulong)*(byte *)(lVar2 + 0x130);
      if ((*(byte *)(*param_3 + 0x130) < *(byte *)(lVar2 + 0x130)) ||
         (*(long *)(*(long *)(*param_3 + 200) + uVar3 * 8 + -8) != lVar2)) goto LAB_05b43fb0;
      plVar4 = (long *)(param_1 + 0xa8);
      *plVar4 = (long)param_3;
      goto LAB_05b43e0c;
    }
    plVar4 = (long *)(param_1 + 0xa8);
    break;
  case 0x14:
    if (param_3 != (long *)0x0) {
      lVar2 = *(long *)OVR_OpenVR_IVRChaperoneSetup__SetWorkingCollisionBoundsTagsInfo_TypeInfo;
      uVar3 = (ulong)*(byte *)(lVar2 + 0x130);
      if ((*(byte *)(*param_3 + 0x130) < *(byte *)(lVar2 + 0x130)) ||
         (*(long *)(*(long *)(*param_3 + 200) + uVar3 * 8 + -8) != lVar2)) goto LAB_05b43fb0;
      plVar4 = (long *)(param_1 + 0xb8);
      *plVar4 = (long)param_3;
      goto LAB_05b43e0c;
    }
    plVar4 = (long *)(param_1 + 0xb8);
    break;
  case 0x15:
    if (param_3 != (long *)0x0) {
      lVar2 = *(long *)OVR_OpenVR_IVRChaperoneSetup__SetWorkingCollisionBoundsInfo_TypeInfo;
      uVar3 = (ulong)*(byte *)(lVar2 + 0x130);
      if ((*(byte *)(*param_3 + 0x130) < *(byte *)(lVar2 + 0x130)) ||
         (*(long *)(*(long *)(*param_3 + 200) + uVar3 * 8 + -8) != lVar2)) goto LAB_05b43fb0;
      plVar4 = (long *)(param_1 + 0xb0);
      *plVar4 = (long)param_3;
      goto LAB_05b43e0c;
    }
    plVar4 = (long *)(param_1 + 0xb0);
    break;
  case 0x16:
    if (param_3 != (long *)0x0) {
      lVar2 = *(long *)OVR_OpenVR_IVRChaperoneSetup__RevertWorkingCopy_TypeInfo;
      uVar3 = (ulong)*(byte *)(lVar2 + 0x130);
      if ((*(byte *)(*param_3 + 0x130) < *(byte *)(lVar2 + 0x130)) ||
         (*(long *)(*(long *)(*param_3 + 200) + uVar3 * 8 + -8) != lVar2)) goto LAB_05b43fb0;
      plVar4 = (long *)(param_1 + 0xc0);
      *plVar4 = (long)param_3;
      goto LAB_05b43e0c;
    }
    plVar4 = (long *)(param_1 + 0xc0);
    break;
  case 0x17:
    if (param_3 != (long *)0x0) {
      lVar2 = *(long *)OVR_OpenVR_IVRChaperoneSetup__ImportFromBufferToWorking_TypeInfo;
      uVar3 = (ulong)*(byte *)(lVar2 + 0x130);
      if ((*(byte *)(*param_3 + 0x130) < *(byte *)(lVar2 + 0x130)) ||
         (*(long *)(*(long *)(*param_3 + 200) + uVar3 * 8 + -8) != lVar2)) goto LAB_05b43fb0;
      plVar4 = (long *)(param_1 + 200);
      *plVar4 = (long)param_3;
      goto LAB_05b43e0c;
    }
    plVar4 = (long *)(param_1 + 200);
    break;
  case 0x18:
    if (param_3 != (long *)0x0) {
      lVar2 = *(long *)OVR_OpenVR_IVRChaperoneSetup__ReloadFromDisk_TypeInfo;
      uVar3 = (ulong)*(byte *)(lVar2 + 0x130);
      if ((*(byte *)(*param_3 + 0x130) < *(byte *)(lVar2 + 0x130)) ||
         (*(long *)(*(long *)(*param_3 + 200) + uVar3 * 8 + -8) != lVar2)) goto LAB_05b43fb0;
      plVar4 = (long *)(param_1 + 0xd0);
      *plVar4 = (long)param_3;
      goto LAB_05b43e0c;
    }
    plVar4 = (long *)(param_1 + 0xd0);
    break;
  case 0x19:
    if (param_3 != (long *)0x0) {
      lVar2 = *(long *)
               System_Linq_Expressions_Interpreter_GreaterThanInstruction_GreaterThanUInt64_TypeInfo
      ;
      uVar3 = (ulong)*(byte *)(lVar2 + 0x130);
      if ((*(byte *)(*param_3 + 0x130) < *(byte *)(lVar2 + 0x130)) ||
         (*(long *)(*(long *)(*param_3 + 200) + uVar3 * 8 + -8) != lVar2)) goto LAB_05b43fb0;
      plVar4 = (long *)(param_1 + 0xd8);
      *plVar4 = (long)param_3;
      goto LAB_05b43e0c;
    }
    plVar4 = (long *)(param_1 + 0xd8);
    break;
  case 0x1a:
    if (param_3 != (long *)0x0) {
      lVar2 = *(long *)
               System_Linq_Expressions_Interpreter_GreaterThanInstruction_GreaterThanUInt16_TypeInfo
      ;
      uVar3 = (ulong)*(byte *)(lVar2 + 0x130);
      if ((*(byte *)(*param_3 + 0x130) < *(byte *)(lVar2 + 0x130)) ||
         (*(long *)(*(long *)(*param_3 + 200) + uVar3 * 8 + -8) != lVar2)) goto LAB_05b43fb0;
      plVar4 = (long *)(param_1 + 0xe0);
      *plVar4 = (long)param_3;
      goto LAB_05b43e0c;
    }
    plVar4 = (long *)(param_1 + 0xe0);
    break;
  case 0x1b:
    if (param_3 != (long *)0x0) {
      lVar2 = *(long *)
               System_Linq_Expressions_Interpreter_GreaterThanInstruction_GreaterThanUInt32_TypeInfo
      ;
      uVar3 = (ulong)*(byte *)(lVar2 + 0x130);
      if ((*(byte *)(*param_3 + 0x130) < *(byte *)(lVar2 + 0x130)) ||
         (*(long *)(*(long *)(*param_3 + 200) + uVar3 * 8 + -8) != lVar2)) goto LAB_05b43fb0;
      plVar4 = (long *)(param_1 + 0xe8);
      *plVar4 = (long)param_3;
      goto LAB_05b43e0c;
    }
    plVar4 = (long *)(param_1 + 0xe8);
    break;
  case 0x1c:
  case 0x1d:
  case 0x1e:
    if (param_3 != (long *)0x0) {
      lVar2 = *(long *)OVR_OpenVR_IVRCompositor__CompositorQuit_TypeInfo;
      bVar1 = *(byte *)(lVar2 + 0x130);
      if ((bVar1 <= *(byte *)(*param_3 + 0x130)) &&
         (*(long *)(*(long *)(*param_3 + 200) + (ulong)bVar1 * 8 + -8) == lVar2)) {
        *(long **)(param_1 + 0x138) = param_3;
        if ((bVar1 <= *(byte *)(*param_3 + 0x130)) &&
           (*(long *)(*(long *)(*param_3 + 200) + (ulong)bVar1 * 8 + -8) == lVar2)) {
          plVar4 = (long *)(param_1 + 0x138);
          goto LAB_05b43e30;
        }
      }
      goto LAB_05b43fb0;
    }
    plVar4 = (long *)(param_1 + 0x138);
    break;
  case 0x1f:
  case 0x20:
    if (param_3 != (long *)0x0) {
      lVar2 = *(long *)OVR_OpenVR_IVRCompositor__GetMirrorTextureGL_TypeInfo;
      bVar1 = *(byte *)(lVar2 + 0x130);
      if ((bVar1 <= *(byte *)(*param_3 + 0x130)) &&
         (*(long *)(*(long *)(*param_3 + 200) + (ulong)bVar1 * 8 + -8) == lVar2)) {
        *(long **)(param_1 + 0x140) = param_3;
        if ((bVar1 <= *(byte *)(*param_3 + 0x130)) &&
           (*(long *)(*(long *)(*param_3 + 200) + (ulong)bVar1 * 8 + -8) == lVar2)) {
          plVar4 = (long *)(param_1 + 0x140);
          goto LAB_05b43e30;
        }
      }
      goto LAB_05b43fb0;
    }
    plVar4 = (long *)(param_1 + 0x140);
    break;
  case 0x21:
  case 0x22:
  case 0x23:
  case 0x24:
  case 0x25:
  case 0x26:
  case 0x27:
  case 0x28:
  case 0x29:
  case 0x2a:
  case 0x2b:
  case 0x2c:
    if (param_3 != (long *)0x0) {
      lVar2 = *(long *)UnityEngine_Rendering_GraphicsSettings_<>c_TypeInfo;
      bVar1 = *(byte *)(lVar2 + 0x130);
      if ((bVar1 <= *(byte *)(*param_3 + 0x130)) &&
         (*(long *)(*(long *)(*param_3 + 200) + (ulong)bVar1 * 8 + -8) == lVar2)) {
        *(long **)(param_1 + 0x170) = param_3;
        if ((bVar1 <= *(byte *)(*param_3 + 0x130)) &&
           (*(long *)(*(long *)(*param_3 + 200) + (ulong)bVar1 * 8 + -8) == lVar2)) {
          plVar4 = (long *)(param_1 + 0x170);
          goto LAB_05b43e30;
        }
      }
      goto LAB_05b43fb0;
    }
    plVar4 = (long *)(param_1 + 0x170);
    break;
  case 0x2d:
    if (param_3 != (long *)0x0) {
      lVar2 = *(long *)OVR_OpenVR_IVRCompositor__GetCumulativeStats_TypeInfo;
      bVar1 = *(byte *)(lVar2 + 0x130);
      if ((bVar1 <= *(byte *)(*param_3 + 0x130)) &&
         (*(long *)(*(long *)(*param_3 + 200) + (ulong)bVar1 * 8 + -8) == lVar2)) {
        *(long **)(param_1 + 0x160) = param_3;
        if ((bVar1 <= *(byte *)(*param_3 + 0x130)) &&
           (*(long *)(*(long *)(*param_3 + 200) + (ulong)bVar1 * 8 + -8) == lVar2)) {
          plVar4 = (long *)(param_1 + 0x160);
          goto LAB_05b43e30;
        }
      }
      goto LAB_05b43fb0;
    }
    plVar4 = (long *)(param_1 + 0x160);
    break;
  case 0x2e:
    if (param_3 != (long *)0x0) {
      lVar2 = *(long *)Method_UnityEngine_Pool_CollectionPool<List<Color32>,_Color32>_Get__;
      bVar1 = *(byte *)(lVar2 + 0x130);
      if ((bVar1 <= *(byte *)(*param_3 + 0x130)) &&
         (*(long *)(*(long *)(*param_3 + 200) + (ulong)bVar1 * 8 + -8) == lVar2)) {
        *(long **)(param_1 + 0x168) = param_3;
        if ((bVar1 <= *(byte *)(*param_3 + 0x130)) &&
           (*(long *)(*(long *)(*param_3 + 200) + (ulong)bVar1 * 8 + -8) == lVar2)) {
          plVar4 = (long *)(param_1 + 0x168);
          goto LAB_05b43e30;
        }
      }
      goto LAB_05b43fb0;
    }
    plVar4 = (long *)(param_1 + 0x168);
    break;
  case 0x2f:
    if (param_3 != (long *)0x0) {
      lVar2 = *(long *)
               Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<OvrAvatarManager_HasAvatarChangedRequestResultCode>_SetStateMachine__
      ;
      bVar1 = *(byte *)(lVar2 + 0x130);
      if ((bVar1 <= *(byte *)(*param_3 + 0x130)) &&
         (*(long *)(*(long *)(*param_3 + 200) + (ulong)bVar1 * 8 + -8) == lVar2)) {
        *(long **)(param_1 + 0x180) = param_3;
        if ((bVar1 <= *(byte *)(*param_3 + 0x130)) &&
           (*(long *)(*(long *)(*param_3 + 200) + (ulong)bVar1 * 8 + -8) == lVar2)) {
          plVar4 = (long *)(param_1 + 0x180);
          goto LAB_05b43e30;
        }
      }
      goto LAB_05b43fb0;
    }
    plVar4 = (long *)(param_1 + 0x180);
    break;
  default:
    return;
  }
  *plVar4 = 0;
LAB_05b43e30:
  LeanTween__value(plVar4,param_3);
  return;
}


