/*
FUNCTION_NAME: UnityEngine.MonoBehaviour$$get_destroyCancellationToken
ENTRY_POINT: 06d5b928
PROGRAM: vandalizer-libil2cpp.so
SCORE: 80
LABEL: framework_eye_tracking_support_or_permission_path_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_eye_tracking_support_or_permission_path
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_11;weak_xr_or_state_hits_9;validity_or_gating_hits_3;attempted_eye_tracking_permission_or_feature_enable;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction
*/


void UnityEngine_MonoBehaviour__get_destroyCancellationToken(void)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  long lVar8;
  long unaff_x19;
  long *unaff_x20;
  undefined8 uVar9;
  long unaff_x21;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  long *in_stack_00000018;
  
  FUN_031f20f4(OVROverlay_LayerTexture___TypeInfo);
  FUN_031f20f4(OVRPlugin_AppPerfFrameStats___TypeInfo);
  FUN_031f20f4(OVRPlugin_BodyJointLocation___TypeInfo);
  FUN_031f20f4(PTR_DAT_075dca30);
  FUN_031f20f4(OVRPlugin_Bone___TypeInfo);
  FUN_031f20f4(OVRPlugin_BoneCapsule___TypeInfo);
  FUN_031f20f4(PTR_DAT_075d8088);
  FUN_031f20f4(OVRPlugin_EyeGazeState___TypeInfo);
  FUN_031f20f4(OVRPlugin_FaceTrackingDataSource___TypeInfo);
  *(undefined1 *)(unaff_x21 + 0x84) = 1;
  puVar2 = PTR_DAT_075d8088;
  in_stack_00000008 = 0;
  in_stack_00000010 = 0;
  in_stack_00000018 = (long *)0x0;
  if (*(int *)(*unaff_x20 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  puVar3 = OVRPlugin_BoneCapsule___TypeInfo;
  FUN_03e9e81c();
  uVar9 = *(undefined8 *)(unaff_x19 + 0x50);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  FUN_03f6ecdc(uVar9,*(undefined8 *)puVar3);
  puVar6 = OVRPlugin_EyeGazeState___TypeInfo;
  puVar5 = OVRInput_OpenVRControllerDetails___TypeInfo;
  puVar4 = OVRInput_HapticInfo___TypeInfo;
  puVar3 = PTR_DAT_075dca30;
  puVar2 = PTR_DAT_0759b238;
  if (*(long *)(unaff_x19 + 0x50) != 0) {
    FUN_047afec0(&stack0x00000008,*(long *)(unaff_x19 + 0x50),
                 *(undefined8 *)OVRPlugin_BodyJointLocation___TypeInfo);
    do {
      uVar7 = FUN_05a2e8e4(&stack0x00000008,*(undefined8 *)puVar5);
      if ((uVar7 & 1) == 0) {
        FUN_05a2e8e0(&stack0x00000008,*(undefined8 *)puVar4);
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
        }
        FUN_06deed24(*(undefined8 *)puVar6,0);
        goto LAB_06d5babc;
      }
    } while ((in_stack_00000018 == (long *)0x0) || (*in_stack_00000018 != *(long *)puVar3));
    UnityEngine_MonoBehaviour__RaiseCancellation
              (in_stack_00000018,*(undefined1 *)(unaff_x19 + 0x58));
    FUN_05a2e8e0(&stack0x00000008,*(undefined8 *)puVar4);
LAB_06d5babc:
    lVar8 = *(long *)(unaff_x19 + 0x50);
    if (lVar8 != 0) {
      iVar1 = *(int *)(lVar8 + 0x18);
      *(undefined4 *)(lVar8 + 0x18) = 0;
      *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
      if (0 < iVar1) {
        FUN_05e24380(*(undefined8 *)(lVar8 + 0x10),0,iVar1,0);
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


