/*
FUNCTION_NAME: FUN_055f72b4
ENTRY_POINT: 055f72b4
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


void FUN_055f72b4(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  if ((DAT_06a544cb & 1) == 0) {
    FUN_02d4dc40(UnityEngine_WaitForSecondsRealtime_TypeInfo);
    FUN_02d4dc40(
                UnityEngine_XR_Interaction_Toolkit_Transformers_XRGeneralGrabTransformer_ComputeNewObjectPosition_00000905_PostfixBurstDelegate_TypeInfo
                );
    FUN_02d4dc40(System_Threading_WaitHandleCannotBeOpenedException_TypeInfo);
    FUN_02d4dc40(System_Threading_WaitOrTimerCallback_TypeInfo);
    FUN_02d4dc40(UnityEngine_WaitUntil_TypeInfo);
    FUN_02d4dc40(RootMotion_Warning_TypeInfo);
    FUN_02d4dc40(System_Net_Http_Headers_WarningHeaderValue_TypeInfo);
    FUN_02d4dc40(Photon_Voice_Unity_UtilityScripts_WaveWriter_TypeInfo);
    FUN_02d4dc40(System_ComponentModel_WeakHashtable_TypeInfo);
    FUN_02d4dc40(System_WeakReference_TypeInfo);
    FUN_02d4dc40(
                UnityEngine_XR_Interaction_Toolkit_Transformers_XRGeneralGrabTransformer_ComputeNewOneHandedScale_0000090B_BurstDirectCall_TypeInfo
                );
    FUN_02d4dc40(
                UnityEngine_XR_Interaction_Toolkit_Transformers_XRGeneralGrabTransformer_ComputeNewOneHandedScale_0000090B_PostfixBurstDelegate_TypeInfo
                );
    FUN_02d4dc40(
                UnityEngine_XR_Interaction_Toolkit_Transformers_XRGeneralGrabTransformer_ComputeNewTwoHandedScale_0000090C_BurstDirectCall_TypeInfo
                );
    DAT_06a544cb = 1;
  }
  if ((param_1 == 0) || (*(long *)(param_1 + 0x20) == 0)) goto LAB_055f7618;
  iVar1 = *(int *)(*(long *)(param_1 + 0x20) + 0x10);
  if (iVar1 < 0x65) {
    if (0x61 < iVar1) {
      if (iVar1 == 0x62) {
        uVar2 = thunk_FUN_02d8a638(*(undefined8 *)UnityEngine_WaitUntil_TypeInfo);
        FUN_055bf0e8(uVar2,0);
      }
      else if (iVar1 == 99) {
        uVar2 = thunk_FUN_02d8a638(*(undefined8 *)
                                    UnityEngine_XR_Interaction_Toolkit_Transformers_XRGeneralGrabTransformer_ComputeNewOneHandedScale_0000090B_BurstDirectCall_TypeInfo
                                  );
        FUN_055bf108(uVar2,0);
      }
      else {
        if (iVar1 != 100) goto LAB_055f7584;
        uVar2 = thunk_FUN_02d8a638(*(undefined8 *)
                                    UnityEngine_XR_Interaction_Toolkit_Transformers_XRGeneralGrabTransformer_ComputeNewObjectPosition_00000905_PostfixBurstDelegate_TypeInfo
                                  );
        FUN_055bf128(uVar2,0);
      }
      goto LAB_055f7574;
    }
    if (iVar1 == 0x5f) {
      uVar2 = thunk_FUN_02d8a638(*(undefined8 *)System_Net_Http_Headers_WarningHeaderValue_TypeInfo)
      ;
      FUN_055bf088(uVar2,0);
      goto LAB_055f7574;
    }
    if (iVar1 == 0x60) {
      uVar2 = thunk_FUN_02d8a638(*(undefined8 *)
                                  Photon_Voice_Unity_UtilityScripts_WaveWriter_TypeInfo);
      FUN_055bf0a8(uVar2,0);
      goto LAB_055f7574;
    }
    if (iVar1 == 0x61) {
      uVar2 = thunk_FUN_02d8a638(*(undefined8 *)System_Threading_WaitOrTimerCallback_TypeInfo);
      FUN_055bf0c8(uVar2,0);
      goto LAB_055f7574;
    }
  }
  else {
    if (iVar1 < 0x68) {
      if (iVar1 == 0x65) {
        uVar2 = thunk_FUN_02d8a638(*(undefined8 *)
                                    System_Threading_WaitHandleCannotBeOpenedException_TypeInfo);
        FUN_055befe8(uVar2,0);
      }
      else if (iVar1 == 0x66) {
        uVar2 = thunk_FUN_02d8a638(*(undefined8 *)System_ComponentModel_WeakHashtable_TypeInfo);
        FUN_055bf008(uVar2,0);
      }
      else {
        if (iVar1 != 0x67) goto LAB_055f7584;
        uVar2 = thunk_FUN_02d8a638(*(undefined8 *)RootMotion_Warning_TypeInfo);
        FUN_055bf028(uVar2,0);
      }
    }
    else if (iVar1 == 0x75) {
      uVar2 = thunk_FUN_02d8a638(*(undefined8 *)
                                  UnityEngine_XR_Interaction_Toolkit_Transformers_XRGeneralGrabTransformer_ComputeNewOneHandedScale_0000090B_PostfixBurstDelegate_TypeInfo
                                );
      FUN_055bf148(uVar2,0);
    }
    else if (iVar1 == 0x69) {
      uVar2 = thunk_FUN_02d8a638(*(undefined8 *)System_WeakReference_TypeInfo);
      FUN_055bf048(uVar2,0);
    }
    else {
      if (iVar1 != 0x68) goto LAB_055f7584;
      uVar2 = thunk_FUN_02d8a638(*(undefined8 *)UnityEngine_WaitForSecondsRealtime_TypeInfo);
      FUN_055bf068(uVar2,0);
    }
LAB_055f7574:
    *(undefined8 *)(param_1 + 0x170) = uVar2;
    thunk_FUN_02dc1ef0(param_1 + 0x170,uVar2);
  }
LAB_055f7584:
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_1 + 0x170);
  thunk_FUN_02dc1ef0();
  iVar1 = FUN_055f3800(param_1);
  if (iVar1 == 0x73) {
    lVar3 = *(long *)(param_1 + 0xe8);
joined_r0x055f75f8:
    if (lVar3 == 0) goto LAB_055f7618;
  }
  else {
    if ((*(long *)(param_1 + 0xd0) == 0) ||
       (lVar3 = *(long *)(*(long *)(param_1 + 0xd0) + 0x68), lVar3 == 0)) goto LAB_055f7618;
    iVar1 = FUN_04fa9478(lVar3,0);
    if (iVar1 != 0) {
LAB_055f75dc:
      FUN_055f1fd4(param_1,*(undefined8 *)
                            UnityEngine_XR_Interaction_Toolkit_Transformers_XRGeneralGrabTransformer_ComputeNewTwoHandedScale_0000090C_BurstDirectCall_TypeInfo
                   ,0);
      lVar3 = *(long *)(param_1 + 0xd0);
      goto joined_r0x055f75f8;
    }
    lVar3 = *(long *)(param_1 + 0xd0);
    if (lVar3 == 0) goto LAB_055f7618;
    if (*(long *)(lVar3 + 0x70) != 0) goto LAB_055f75dc;
  }
  if (*(long *)(lVar3 + 0x60) != 0) {
    FUN_055b917c(*(long *)(lVar3 + 0x60),*(undefined8 *)(param_1 + 0x170),0);
    return;
  }
LAB_055f7618:
                    /* WARNING: Subroutine does not return */
  FUN_02d4dee8();
}


