/*
FUNCTION_NAME: UnityEngine.InputSystem.XR.XRHMD$$get_rightEyeRotation
ENTRY_POINT: 06c6e88c
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 134
LABEL: possible_eye_biometrics_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: possible_eye_biometrics
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;validity_gate;pose_vector;active_gaze_retrieval;possible_biometrics
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;active_gaze_state_retrieval_with_validity_and_pose;possible_biometric_feature_from_active_eye_context;functionality_possible_biometrics_hits_2
*/


void UnityEngine_InputSystem_XR_XRHMD__get_rightEyeRotation
               (undefined1 param_1 [16],undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  uint unaff_w21;
  uint unaff_w22;
  long *unaff_x24;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined4 in_stack_00000050;
  undefined8 uStack0000000000000060;
  undefined8 uStack0000000000000068;
  undefined8 uStack0000000000000070;
  undefined8 uStack0000000000000078;
  undefined8 uStack0000000000000080;
  undefined8 uStack0000000000000098;
  
  uStack0000000000000068 = param_1._8_8_;
  uStack0000000000000060 = param_1._0_8_;
  uStack0000000000000098 = 0;
  uStack0000000000000080 = 0;
  uStack0000000000000070 = uStack0000000000000060;
  uStack0000000000000078 = uStack0000000000000068;
  FUN_06c83320(&stack0x00000098,param_3,0);
  lVar3 = FUN_06c852a8();
  FUN_06c852a8();
  lVar4 = FUN_06c852a8();
  lVar5 = *unaff_x24;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_036a1978(lVar5);
    lVar5 = *unaff_x24;
  }
  lVar5 = *(long *)(lVar5 + 0xb8);
  in_stack_00000050 = *(undefined4 *)(lVar5 + 0x604);
  in_stack_00000038 = *(undefined8 *)(lVar5 + 0x5ec);
  in_stack_00000030 = *(undefined8 *)(lVar5 + 0x5e4);
  in_stack_00000048 = *(undefined8 *)(lVar5 + 0x5fc);
  in_stack_00000040 = *(undefined8 *)(lVar5 + 0x5f4);
  FUN_06c83684(&stack0x00000098,&stack0x00000030,lVar3,0);
  FUN_06c83684(&stack0x00000098);
  if ((unaff_w22 & 1) != 0) {
    FUN_06c83624(&stack0x00000098,
                 *(undefined8 *)
                  UnityEngine_UIElements_StyleValuePropertyBag<StyleEnum<Visibility>,_Visibility>_TypeInfo
                 ,0);
  }
  if ((unaff_w21 & 1) != 0) {
    FUN_06c83624(&stack0x00000098,
                 *(undefined8 *)
                  UnityEngine_UIElements_StyleValuePropertyBag<StyleEnum<WhiteSpace>,_WhiteSpace>_TypeInfo
                 ,0);
  }
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  if (lVar4 != 0) {
    uStack0000000000000068 = *(undefined8 *)(lVar4 + 0x5c);
    uStack0000000000000060 = *(undefined8 *)(lVar4 + 0x54);
    uStack0000000000000078 = *(undefined8 *)(lVar4 + 0x6c);
    uStack0000000000000070 = *(undefined8 *)(lVar4 + 100);
    uStack0000000000000080 = *(undefined8 *)(lVar4 + 0x74);
    uVar1 = *(undefined4 *)(*(long *)(*unaff_x24 + 0xb8) + 0x44);
    uVar2 = Unity_InferenceEngine_Graph_SortKey__set_Item(&stack0x00000060,0,0);
    FUN_06c835ac(&stack0x00000098,uVar1,uVar2,0);
    if (lVar3 != 0) {
      FUN_06c835ac(&stack0x00000098,*(undefined4 *)(*(long *)(*unaff_x24 + 0xb8) + 0x4c),
                   *(undefined4 *)(lVar3 + 0x80),0);
      FUN_06c835ac(&stack0x00000098,*(undefined4 *)(*(long *)(*unaff_x24 + 0xb8) + 0x594),
                   *(undefined4 *)(lVar3 + 0x84),0);
      FUN_06c835ac(&stack0x00000098,*(undefined4 *)(*(long *)(*unaff_x24 + 0xb8) + 0x598),
                   *(undefined4 *)(lVar4 + 0x84),0);
      FUN_06c8375c(&stack0x00000098,lVar4,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


