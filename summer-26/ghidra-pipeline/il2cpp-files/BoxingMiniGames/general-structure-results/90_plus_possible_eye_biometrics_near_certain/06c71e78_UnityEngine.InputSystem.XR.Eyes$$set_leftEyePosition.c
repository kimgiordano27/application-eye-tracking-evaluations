/*
FUNCTION_NAME: UnityEngine.InputSystem.XR.Eyes$$set_leftEyePosition
ENTRY_POINT: 06c71e78
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 137
LABEL: possible_eye_biometrics_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: possible_eye_biometrics
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;validity_gate;pose_vector;active_gaze_retrieval;possible_biometrics
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;active_gaze_state_retrieval_with_validity_and_pose;possible_biometric_feature_from_active_eye_context;functionality_possible_biometrics_hits_2
*/


void UnityEngine_InputSystem_XR_Eyes__set_leftEyePosition(long param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x24;
  undefined4 unaff_s8;
  undefined4 unaff_s9;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined4 in_stack_000000e0;
  undefined8 uStack00000000000000f0;
  undefined8 uStack00000000000000f8;
  undefined8 uStack0000000000000100;
  undefined8 uStack0000000000000108;
  undefined4 uStack0000000000000110;
  undefined8 in_stack_00000148;
  
  uStack0000000000000110 = *(undefined4 *)(param_1 + 0x628);
  uStack00000000000000f8 = *(undefined8 *)(param_1 + 0x610);
  uStack00000000000000f0 = *(undefined8 *)(param_1 + 0x608);
  uStack0000000000000108 = *(undefined8 *)(param_1 + 0x620);
  uStack0000000000000100 = *(undefined8 *)(param_1 + 0x618);
  FUN_06c83684();
  lVar3 = *(long *)(*unaff_x24 + 0xb8);
  in_stack_000000e0 = *(undefined4 *)(lVar3 + 0x64c);
  in_stack_000000c8 = *(undefined8 *)(lVar3 + 0x634);
  in_stack_000000c0 = *(undefined8 *)(lVar3 + 0x62c);
  in_stack_000000d8 = *(undefined8 *)(lVar3 + 0x644);
  in_stack_000000d0 = *(undefined8 *)(lVar3 + 0x63c);
  FUN_06c83684(&stack0x00000148,&stack0x000000c0);
  uVar2 = in_stack_00000148;
  if (unaff_x20 != 0) {
    in_stack_00000098 = *(undefined8 *)(unaff_x20 + 0x5c);
    in_stack_00000090 = *(undefined8 *)(unaff_x20 + 0x54);
    in_stack_000000a8 = *(undefined8 *)(unaff_x20 + 0x6c);
    in_stack_000000a0 = *(undefined8 *)(unaff_x20 + 100);
    in_stack_000000b0 = *(undefined8 *)(unaff_x20 + 0x74);
    uVar1 = *(undefined4 *)(*(long *)(*unaff_x24 + 0xb8) + 0x47c);
    if (*(int *)(*(long *)
                  UnityEngine_UIElements_StyleValuePropertyBag<StyleEnum<TextOverflow>,_TextOverflow>_TypeInfo
                + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    in_stack_00000068 = in_stack_00000098;
    in_stack_00000060 = in_stack_00000090;
    in_stack_00000078 = in_stack_000000a8;
    in_stack_00000070 = in_stack_000000a0;
    in_stack_00000080 = in_stack_000000b0;
    FUN_06c8422c(uVar2,uVar1,&stack0x00000060,0);
    if (unaff_x19 != 0) {
      in_stack_00000038 = *(undefined8 *)(unaff_x19 + 0x5c);
      in_stack_00000030 = *(undefined8 *)(unaff_x19 + 0x54);
      in_stack_00000048 = *(undefined8 *)(unaff_x19 + 0x6c);
      in_stack_00000040 = *(undefined8 *)(unaff_x19 + 100);
      in_stack_00000050 = *(undefined8 *)(unaff_x19 + 0x74);
      FUN_06c84334(in_stack_00000148,*(undefined4 *)(*(long *)(*unaff_x24 + 0xb8) + 0x620),
                   &stack0x00000030,0);
      if (unaff_x21 != 0) {
        FUN_06c84334(in_stack_00000148,*(undefined4 *)(*(long *)(*unaff_x24 + 0xb8) + 0x644));
        FUN_06c835ac(&stack0x00000148,*(undefined4 *)(*(long *)(*unaff_x24 + 0xb8) + 0x618),
                     *(undefined4 *)(unaff_x19 + 0x80),0);
        FUN_06c835ac(&stack0x00000148,*(undefined4 *)(*(long *)(*unaff_x24 + 0xb8) + 0x63c),
                     *(undefined4 *)(unaff_x21 + 0x80),0);
        FUN_06c835dc(unaff_s9,&stack0x00000148,*(undefined4 *)(*(long *)(*unaff_x24 + 0xb8) + 0x1ac)
                     ,0);
        FUN_06c835dc(unaff_s8,&stack0x00000148,*(undefined4 *)(*(long *)(*unaff_x24 + 0xb8) + 0x1bc)
                     ,0);
        FUN_06c8375c(&stack0x00000148);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


