/*
FUNCTION_NAME: UnityEngine.HumanPoseHandler$$GetHumanPose
ENTRY_POINT: 03559e08
PROGRAM: vrlegs-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_5;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_3
*/


void UnityEngine_HumanPoseHandler__GetHumanPose(void)

{
  char cVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long *unaff_x19;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  thunk_FUN_01a58e78();
  uVar2 = FUN_036d35a8();
  if ((uVar2 & 1) == 0) {
    if (((char)unaff_x19[0x6e] != '\0') || (*(char *)((long)unaff_x19 + 0x3fc) != '\0')) {
      if ((char)unaff_x19[0x61] != '\0') {
        FUN_0355b8e4();
        *(undefined1 *)(unaff_x19 + 0x61) = 0;
      }
      if (*(char *)((long)unaff_x19 + 0x301) != '\0') {
        (**(code **)(*unaff_x19 + 0x7f8))();
      }
      FUN_03580470();
      if (*(int *)(*(long *)OVRPlugin_OVRP_1_83_0_TypeInfo + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      UnityEngine_Application__GetStreamProgressForLevel(0);
      if ((char)unaff_x19[0x47] == '\0') {
        fVar5 = *(float *)((long)unaff_x19 + 0x254);
        fVar6 = *(float *)(unaff_x19 + 0x4a);
      }
      else {
        fVar7 = *(float *)((long)unaff_x19 + 0x1ec);
        fVar5 = *(float *)((long)unaff_x19 + 0x254);
        fVar6 = *(float *)(unaff_x19 + 0x4a);
        fVar8 = fVar5;
        if (fVar7 <= fVar5) {
          fVar8 = fVar7;
        }
        if (fVar7 < fVar6) {
          fVar8 = fVar6;
        }
        *(float *)((long)unaff_x19 + 0x1e4) = fVar8;
      }
      *(float *)((long)unaff_x19 + 0x23c) = fVar5;
      *(float *)(unaff_x19 + 0x48) = fVar6;
      *(undefined4 *)((long)unaff_x19 + 700) = 0;
      *(undefined4 *)((long)unaff_x19 + 0x2d4) = 0;
      *(undefined1 *)(unaff_x19 + 0x5f) = 0;
      *(undefined1 *)(unaff_x19 + 0x6e) = 0;
      *(undefined1 *)((long)unaff_x19 + 0x3fc) = 0;
      *(undefined1 *)((long)unaff_x19 + 0x6ac) = 0;
      *(undefined1 *)((long)unaff_x19 + 0x24c) = 0;
      *(undefined4 *)((long)unaff_x19 + 0x244) = 0;
      if (unaff_x19[0xdd] == 0) goto LAB_03559fb4;
      FUN_03692bc0(unaff_x19[0xdd],0);
      FUN_0355eed4();
      cVar1 = *(char *)((long)unaff_x19 + 0x24c);
      while (cVar1 == '\0') {
        (**(code **)(*unaff_x19 + 0x9e8))();
        cVar1 = *(char *)((long)unaff_x19 + 0x24c);
        *(int *)((long)unaff_x19 + 0x244) = *(int *)((long)unaff_x19 + 0x244) + 1;
      }
    }
    return;
  }
  lVar3 = FUN_03559490();
  if (lVar3 != 0) {
    uVar4 = FUN_036d3824(lVar3,0);
    uVar4 = FUN_025bdc88(*(undefined8 *)OVRPlugin_OVRP_1_84_0_TypeInfo,uVar4,
                         *(undefined8 *)OVRPlugin_OVRP_1_85_0_TypeInfo,0);
    if (*(int *)(*(long *)PTR_DAT_03cbe438 + 0xe0) == 0) {
      thunk_FUN_01a58e78(*(long *)PTR_DAT_03cbe438);
    }
    FUN_0367b470(uVar4);
    return;
  }
LAB_03559fb4:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


