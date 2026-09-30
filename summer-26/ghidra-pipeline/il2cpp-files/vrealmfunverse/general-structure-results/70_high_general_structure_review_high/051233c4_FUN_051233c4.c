/*
FUNCTION_NAME: FUN_051233c4
ENTRY_POINT: 051233c4
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_3;ray_or_cast_sink_hits_2;telemetry_or_network_hits_4
*/


void FUN_051233c4(undefined4 param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined4 local_28;
  undefined4 local_24;
  
  if ((DAT_066cf46f & 1) == 0) {
    FUN_02b3c81c(System_Net_FtpWebRequest_TypeInfo);
    FUN_02b3c81c(System_Net_FtpWebRequestCreator_TypeInfo);
    FUN_02b3c81c(PTR_DAT_06312d90);
    FUN_02b3c81c(PTR_DAT_06321830);
    FUN_02b3c81c(OVR_OpenVR_ETrackedControllerRole_TypeInfo);
    FUN_02b3c81c(System_Net_FtpWebResponse_TypeInfo);
    FUN_02b3c81c(RootMotion_FinalIK_FullBodyBipedEffector_TypeInfo);
    DAT_066cf46f = 1;
  }
  puVar1 = PTR_DAT_06321830;
  if (param_2 == 0) {
    local_24 = param_1;
    uVar4 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                      (*(undefined8 *)OVR_OpenVR_ETrackedControllerRole_TypeInfo,&local_24);
    uVar4 = FUN_04c00984(*(undefined8 *)System_Net_FtpWebResponse_TypeInfo,uVar4,0);
    if (*(int *)(*(long *)PTR_DAT_06312d90 + 0xe4) == 0) {
      thunk_FUN_02b9ad44(*(long *)PTR_DAT_06312d90);
    }
    FUN_05c44f60(uVar4,0);
    return;
  }
  lVar2 = *(long *)PTR_DAT_06321830;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
    lVar2 = *(long *)puVar1;
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x10);
  if (lVar2 != 0) {
    uVar3 = FUN_042f03e4(lVar2,param_1,*(undefined8 *)System_Net_FtpWebRequest_TypeInfo);
    if ((uVar3 & 1) != 0) {
      local_28 = param_1;
      uVar4 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                        (*(undefined8 *)OVR_OpenVR_ETrackedControllerRole_TypeInfo,&local_28);
      uVar4 = FUN_04c00984(*(undefined8 *)RootMotion_FinalIK_FullBodyBipedEffector_TypeInfo,uVar4,0)
      ;
      if (*(int *)(*(long *)PTR_DAT_06312d90 + 0xe4) == 0) {
        thunk_FUN_02b9ad44(*(long *)PTR_DAT_06312d90);
      }
      FUN_05c41e34(uVar4,0);
    }
    lVar2 = *(long *)puVar1;
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      lVar2 = *(long *)puVar1;
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x10);
    if (lVar2 != 0) {
      FUN_042f02f0(lVar2,param_1,param_2,*(undefined8 *)System_Net_FtpWebRequestCreator_TypeInfo);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


