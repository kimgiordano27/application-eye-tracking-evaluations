/*
FUNCTION_NAME: FUN_0744915c
ENTRY_POINT: 0744915c
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 98
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;possible_biometrics;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction;attempted_use
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_3;validity_or_gating_hits_3;ray_or_cast_sink_hits_1;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction;functionality_possible_biometrics_hits_2
*/


void FUN_0744915c(long param_1)

{
  undefined4 *puVar1;
  int iVar2;
  byte bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined4 uVar9;
  long lVar10;
  long *plVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined4 local_5c;
  ulong local_58;
  ulong local_48;
  
  if ((DAT_08269b80 & 1) == 0) {
    FUN_0373b518(PTR_DAT_07d86440);
    FUN_0373b518(OVREyeGaze_TypeInfo);
    FUN_0373b518(OVRFaceExpressions_TypeInfo);
    FUN_0373b518(OVR_OpenVR_TrackedDevicePose_t_TypeInfo);
    FUN_0373b518(UnityEngine_InputSystem_UI_TrackedDeviceRaycaster_TypeInfo);
    FUN_0373b518(System_Net_Sockets_TcpClient_TypeInfo);
                    /* try { // try from 074491d4 to 075491fb has its CatchHandler @ 07449630 */
    FUN_0373b518(UnityEngine_SpatialTracking_TrackedPoseDriverDataDescription_TypeInfo);
    FUN_0373b518(UnityEngine_TrackedReference_TypeInfo);
    FUN_0373b518(PTR_DAT_07d86398);
    FUN_0373b518(Unity_Netcode_NetworkConnectionManager_TypeInfo);
    FUN_0373b518(UnityEngine_XR_ARFoundation_TrackingMode_TypeInfo);
    FUN_0373b518(UnityEngine_XR_TrackingOriginModeFlags_TypeInfo);
    FUN_0373b518(System_Runtime_Remoting_Services_TrackingServices_TypeInfo);
    DAT_08269b80 = 1;
  }
  local_48 = 0;
  local_58 = 0;
  lVar10 = FUN_07445304(param_1);
  puVar8 = UnityEngine_TrackedReference_TypeInfo;
  puVar7 = System_Net_Sockets_TcpClient_TypeInfo;
  puVar6 = OVRFaceExpressions_TypeInfo;
  puVar5 = Unity_Netcode_NetworkConnectionManager_TypeInfo;
  puVar4 = PTR_DAT_07d86398;
  if (lVar10 != 0) {
    iVar2 = *(int *)(lVar10 + 0x18);
    while (iVar2 = iVar2 + -1, -1 < iVar2) {
      lVar10 = FUN_07445304(param_1);
      if (lVar10 == 0) goto LAB_07449444;
      plVar11 = (long *)FUN_049cec24(lVar10,iVar2,*(undefined8 *)puVar6);
      if (plVar11 == (long *)0x0) {
LAB_074492a4:
        plVar11 = (long *)0x0;
      }
      else {
        bVar3 = *(byte *)(*(long *)puVar5 + 0x130);
        if (*(byte *)(*plVar11 + 0x130) < bVar3) goto LAB_074492a4;
        if (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar3 * 8 + -8) != *(long *)puVar5) {
          plVar11 = (long *)0x0;
        }
      }
      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
        thunk_FUN_03798b70();
      }
      uVar12 = FUN_075aa744(plVar11,0,0);
      if ((uVar12 & 1) != 0) {
        if (plVar11 == (long *)0x0) goto LAB_07449444;
        local_58 = (**(code **)(*plVar11 + 0x568))(plVar11,*(undefined8 *)(*plVar11 + 0x570));
        if ((local_58 & 0xff) != 0) {
          if ((char)local_48 != '\0') {
            uVar13 = thunk_FUN_075b0210(param_1,0);
            local_5c = FUN_04e5f394(&local_48,*(undefined8 *)puVar8);
            uVar14 = thunk_FUN_037784fc(*(undefined8 *)OVR_OpenVR_TrackedDevicePose_t_TypeInfo,
                                        &local_5c);
            uVar14 = FUN_060b76a8(*(undefined8 *)UnityEngine_XR_TrackingOriginModeFlags_TypeInfo,
                                  uVar14,0);
            uVar13 = FUN_060c1bcc(*(undefined8 *)UnityEngine_XR_ARFoundation_TrackingMode_TypeInfo,
                                  uVar13,*(undefined8 *)
                                          System_Runtime_Remoting_Services_TrackingServices_TypeInfo
                                  ,uVar14,0);
            if (*(int *)(*(long *)PTR_DAT_07d86440 + 0xe4) == 0) {
              thunk_FUN_03798b70(*(long *)PTR_DAT_07d86440);
            }
            FUN_0755e310(uVar13,param_1,0);
            break;
          }
          local_58 = (**(code **)(*plVar11 + 0x568))(plVar11,*(undefined8 *)(*plVar11 + 0x570));
          uVar9 = FUN_04e5f394(&local_58,*(undefined8 *)puVar8);
          FUN_04e5f37c(&local_48,uVar9,*(undefined8 *)puVar7);
        }
      }
    }
    local_58 = local_48;
    if (param_1 != 0) {
      puVar1 = (undefined4 *)(param_1 + 0x19c);
      if ((local_48 & 0xff) != 0) {
        puVar1 = (undefined4 *)((ulong)&local_58 | 4);
      }
      *(undefined4 *)(param_1 + 0x26c) = *puVar1;
      return;
    }
  }
LAB_07449444:
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


