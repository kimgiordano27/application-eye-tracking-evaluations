/*
FUNCTION_NAME: FUN_06d5b8cc
ENTRY_POINT: 06d5b8cc
PROGRAM: vandalizer-libil2cpp.so
SCORE: 100
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_13;weak_xr_or_state_hits_11;validity_or_gating_hits_3;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void FUN_06d5b8cc(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 local_58;
  undefined8 uStack_50;
  long *local_48;
  
  puVar2 = OVRHaptics_OVRHapticsOutput___TypeInfo;
  if ((DAT_07a51084 & 1) == 0) {
    FUN_031f20f4(OVRHaptics_OVRHapticsOutput___TypeInfo);
    FUN_031f20f4(PTR_DAT_0759b238);
    FUN_031f20f4(OVRInput_HapticInfo___TypeInfo);
    FUN_031f20f4(OVRInput_OpenVRControllerDetails___TypeInfo);
    FUN_031f20f4(OVROverlay_LayerTexture___TypeInfo);
    FUN_031f20f4(OVRPlugin_AppPerfFrameStats___TypeInfo);
    FUN_031f20f4(OVRPlugin_BodyJointLocation___TypeInfo);
    FUN_031f20f4(PTR_DAT_075dca30);
    FUN_031f20f4(OVRPlugin_Bone___TypeInfo);
    FUN_031f20f4(OVRPlugin_BoneCapsule___TypeInfo);
    FUN_031f20f4(PTR_DAT_075d8088);
    FUN_031f20f4(OVRPlugin_EyeGazeState___TypeInfo);
    FUN_031f20f4(OVRPlugin_FaceTrackingDataSource___TypeInfo);
    DAT_07a51084 = 1;
  }
  puVar5 = OVRPlugin_FaceTrackingDataSource___TypeInfo;
  puVar4 = OVRPlugin_Bone___TypeInfo;
  puVar3 = PTR_DAT_075d8088;
  lVar7 = *(long *)puVar2;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = (long *)0x0;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    lVar7 = *(long *)puVar2;
  }
  puVar2 = OVRPlugin_BoneCapsule___TypeInfo;
  FUN_03e9e81c(param_1,**(undefined8 **)(lVar7 + 0xb8),*(undefined8 *)puVar5,*(undefined8 *)puVar4);
  uVar9 = *(undefined8 *)(param_1 + 0x50);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  FUN_03f6ecdc(uVar9,*(undefined8 *)puVar2);
  puVar6 = OVRPlugin_EyeGazeState___TypeInfo;
  puVar5 = OVRInput_OpenVRControllerDetails___TypeInfo;
  puVar4 = OVRInput_HapticInfo___TypeInfo;
  puVar3 = PTR_DAT_075dca30;
  puVar2 = PTR_DAT_0759b238;
  if (*(long *)(param_1 + 0x50) != 0) {
    FUN_047afec0(&local_58,*(long *)(param_1 + 0x50),
                 *(undefined8 *)OVRPlugin_BodyJointLocation___TypeInfo);
    do {
      uVar8 = FUN_05a2e8e4(&local_58,*(undefined8 *)puVar5);
      if ((uVar8 & 1) == 0) {
        FUN_05a2e8e0(&local_58,*(undefined8 *)puVar4);
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
        }
        FUN_06deed24(*(undefined8 *)puVar6,0);
        goto LAB_06d5babc;
      }
    } while ((local_48 == (long *)0x0) || (*local_48 != *(long *)puVar3));
    UnityEngine_MonoBehaviour__RaiseCancellation(local_48,*(undefined1 *)(param_1 + 0x58));
    FUN_05a2e8e0(&local_58,*(undefined8 *)puVar4);
LAB_06d5babc:
    lVar7 = *(long *)(param_1 + 0x50);
    if (lVar7 != 0) {
      iVar1 = *(int *)(lVar7 + 0x18);
      *(undefined4 *)(lVar7 + 0x18) = 0;
      *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
      if (0 < iVar1) {
        FUN_05e24380(*(undefined8 *)(lVar7 + 0x10),0,iVar1,0);
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


