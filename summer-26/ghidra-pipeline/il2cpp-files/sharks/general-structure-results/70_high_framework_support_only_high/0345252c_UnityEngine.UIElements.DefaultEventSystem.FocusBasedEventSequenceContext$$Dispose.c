/*
FUNCTION_NAME: UnityEngine.UIElements.DefaultEventSystem.FocusBasedEventSequenceContext$$Dispose
ENTRY_POINT: 0345252c
PROGRAM: sharks-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;pose_vector;ui_interaction
EVIDENCE: strong_eye_source_hits_7;weak_xr_or_state_hits_7;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_2
*/


bool UnityEngine_UIElements_DefaultEventSystem_FocusBasedEventSequenceContext__Dispose
               (undefined4 param_1,undefined8 param_2)

{
  ulong uVar1;
  long unaff_x19;
  long unaff_x20;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uStack000000000000000c;
  
  uStack000000000000000c = param_1;
  uVar1 = FUN_02be11fc(param_2,0);
  if ((uVar1 & 1) != 0) {
    uStack000000000000000c = *(undefined4 *)(unaff_x20 + 0x24);
    uVar1 = FUN_02be11fc(&stack0x0000000c,0);
    if ((((((((uVar1 & 1) != 0) && (*(float *)(unaff_x20 + 0x28) == *(float *)(unaff_x19 + 0x28)))
           && (*(float *)(unaff_x20 + 0x2c) == *(float *)(unaff_x19 + 0x2c))) &&
          ((*(float *)(unaff_x20 + 0x30) == *(float *)(unaff_x19 + 0x30) &&
           (*(float *)(unaff_x20 + 0x34) == *(float *)(unaff_x19 + 0x34))))) &&
         (uVar1 = FUN_02be11fc(*(undefined4 *)(unaff_x19 + 0x38),unaff_x20 + 0x38,0),
         (uVar1 & 1) != 0)) &&
        (((uVar1 = OVRPlugin__SetHandNodePoseStateLatency
                             (*(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x19 + 0x40),0)
          , (uVar1 & 1) != 0 &&
          (uVar1 = OVRPlugin__SetHandNodePoseStateLatency
                             (*(undefined8 *)(unaff_x20 + 0x48),*(undefined8 *)(unaff_x19 + 0x48),0)
          , (uVar1 & 1) != 0)) &&
         ((uVar1 = OVRPlugin__SetHandNodePoseStateLatency
                             (*(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x19 + 0x50),0)
          , (uVar1 & 1) != 0 &&
          (((uVar1 = OVRPlugin__SetHandNodePoseStateLatency
                               (*(undefined8 *)(unaff_x20 + 0x58),*(undefined8 *)(unaff_x19 + 0x58),
                                0), (uVar1 & 1) != 0 &&
            (*(int *)(unaff_x20 + 0x60) == *(int *)(unaff_x19 + 0x60))) &&
           (uVar1 = OVRPlugin__SetHandNodePoseStateLatency
                              (*(undefined8 *)(unaff_x20 + 0x68),*(undefined8 *)(unaff_x19 + 0x68),0
                              ), (uVar1 & 1) != 0)))))))) &&
       (((*(int *)(unaff_x20 + 0x70) == *(int *)(unaff_x19 + 0x70) &&
         (*(int *)(unaff_x20 + 0x74) == *(int *)(unaff_x19 + 0x74))) &&
        ((*(char *)(unaff_x20 + 0x78) == *(char *)(unaff_x19 + 0x78) &&
         (uVar1 = FUN_02be11fc(*(undefined4 *)(unaff_x19 + 0x7c),unaff_x20 + 0x7c,0),
         (uVar1 & 1) != 0)))))) {
      uVar4 = *(undefined4 *)(unaff_x19 + 0x84);
      uVar3 = *(undefined4 *)(unaff_x19 + 0x88);
      uVar2 = *(undefined4 *)(unaff_x19 + 0x8c);
      uVar1 = FUN_02be11fc(*(undefined4 *)(unaff_x19 + 0x80),unaff_x20 + 0x80,0);
      if ((((((uVar1 & 1) != 0) &&
            (uVar1 = FUN_02be11fc(uVar4,unaff_x20 + 0x84,0), (uVar1 & 1) != 0)) &&
           ((uVar1 = FUN_02be11fc(uVar3,unaff_x20 + 0x88,0), (uVar1 & 1) != 0 &&
            (((uVar1 = FUN_02be11fc(uVar2,unaff_x20 + 0x8c,0), (uVar1 & 1) != 0 &&
              (uVar1 = OVRPlugin__SetHandNodePoseStateLatency
                                 (*(undefined8 *)(unaff_x20 + 0x90),
                                  *(undefined8 *)(unaff_x19 + 0x90),0), (uVar1 & 1) != 0)) &&
             (uVar1 = OVRPlugin__SetHandNodePoseStateLatency
                                (*(undefined8 *)(unaff_x20 + 0x98),*(undefined8 *)(unaff_x19 + 0x98)
                                 ,0), (uVar1 & 1) != 0)))))) &&
          ((((*(char *)(unaff_x20 + 0xa0) == *(char *)(unaff_x19 + 0xa0) &&
             (*(char *)(unaff_x20 + 0xa1) == *(char *)(unaff_x19 + 0xa1))) &&
            ((*(char *)(unaff_x20 + 0xa2) == *(char *)(unaff_x19 + 0xa2) &&
             ((((uVar1 = FUN_02be11fc(*(undefined4 *)(unaff_x19 + 0xa4),unaff_x20 + 0xa4,0),
                (uVar1 & 1) != 0 && (*(char *)(unaff_x20 + 0xa8) == *(char *)(unaff_x19 + 0xa8))) &&
               ((uVar1 = FUN_02be11fc(*(undefined4 *)(unaff_x19 + 0xac),unaff_x20 + 0xac,0),
                (uVar1 & 1) != 0 &&
                ((((uVar1 = FUN_02be11fc(*(undefined4 *)(unaff_x19 + 0xb0),unaff_x20 + 0xb0,0),
                   (uVar1 & 1) != 0 && (*(char *)(unaff_x20 + 0xb4) == *(char *)(unaff_x19 + 0xb4)))
                  && (*(char *)(unaff_x20 + 0xb5) == *(char *)(unaff_x19 + 0xb5))) &&
                 ((*(char *)(unaff_x20 + 0xb6) == *(char *)(unaff_x19 + 0xb6) &&
                  (*(float *)(unaff_x20 + 0xb8) == *(float *)(unaff_x19 + 0xb8))))))))) &&
              (*(char *)(unaff_x20 + 0xbc) == *(char *)(unaff_x19 + 0xbc))))))) &&
           ((((*(char *)(unaff_x20 + 0xbd) == *(char *)(unaff_x19 + 0xbd) &&
              (*(char *)(unaff_x20 + 0xbe) == *(char *)(unaff_x19 + 0xbe))) &&
             ((uVar1 = FUN_02be11fc(*(undefined4 *)(unaff_x19 + 0xc0),unaff_x20 + 0xc0,0),
              (uVar1 & 1) != 0 &&
              (((uVar1 = FUN_02be11fc(*(undefined4 *)(unaff_x19 + 0xc4),unaff_x20 + 0xc4,0),
                (uVar1 & 1) != 0 &&
                (uVar1 = FUN_02be11fc(*(undefined4 *)(unaff_x19 + 200),unaff_x20 + 200,0),
                (uVar1 & 1) != 0)) &&
               (uVar1 = FUN_02be11fc(*(undefined4 *)(unaff_x19 + 0xcc),unaff_x20 + 0xcc,0),
               (uVar1 & 1) != 0)))))) &&
            ((((uVar1 = FUN_02be11fc(*(undefined4 *)(unaff_x19 + 0xd0),unaff_x20 + 0xd0,0),
               (uVar1 & 1) != 0 && (*(int *)(unaff_x20 + 0xd4) == *(int *)(unaff_x19 + 0xd4))) &&
              (*(int *)(unaff_x20 + 0xd8) == *(int *)(unaff_x19 + 0xd8))) &&
             ((*(int *)(unaff_x20 + 0xdc) == *(int *)(unaff_x19 + 0xdc) &&
              (*(int *)(unaff_x20 + 0xe0) == *(int *)(unaff_x19 + 0xe0))))))))))) &&
         (((((*(int *)(unaff_x20 + 0xe4) == *(int *)(unaff_x19 + 0xe4) &&
             (((*(char *)(unaff_x20 + 0xe8) == *(char *)(unaff_x19 + 0xe8) &&
               (*(int *)(unaff_x20 + 0xec) == *(int *)(unaff_x19 + 0xec))) &&
              (*(int *)(unaff_x20 + 0xf0) == *(int *)(unaff_x19 + 0xf0))))) &&
            ((*(int *)(unaff_x20 + 0xf4) == *(int *)(unaff_x19 + 0xf4) &&
             (*(int *)(unaff_x20 + 0xf8) == *(int *)(unaff_x19 + 0xf8))))) &&
           (uVar1 = FUN_02be11fc(*(undefined4 *)(unaff_x19 + 0xfc),unaff_x20 + 0xfc,0),
           (uVar1 & 1) != 0)) &&
          (((*(int *)(unaff_x20 + 0x100) == *(int *)(unaff_x19 + 0x100) &&
            (*(char *)(unaff_x20 + 0x104) == *(char *)(unaff_x19 + 0x104))) &&
           (uVar1 = FUN_02be11fc(*(undefined4 *)(unaff_x19 + 0x108),unaff_x20 + 0x108,0),
           (uVar1 & 1) != 0)))))) {
        return *(int *)(unaff_x20 + 0x10c) == *(int *)(unaff_x19 + 0x10c);
      }
    }
  }
  return false;
}


