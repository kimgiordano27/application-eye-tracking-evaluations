/*
FUNCTION_NAME: FUN_034524ac
ENTRY_POINT: 034524ac
PROGRAM: sharks-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_7;weak_xr_or_state_hits_7;validity_or_gating_hits_1;functionality_eye_api_context_without_clear_sink_hits_7
*/


bool FUN_034524ac(long param_1,long param_2)

{
  ulong uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 local_34;
  
  if (param_2 != 0) {
    if (param_1 == param_2) {
      return true;
    }
    uVar1 = thunk_FUN_02a4fb2c(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_2 + 0x10),0);
    if ((uVar1 & 1) != 0) {
      uVar4 = *(undefined4 *)(param_2 + 0x1c);
      local_34 = *(undefined4 *)(param_1 + 0x18);
      uVar3 = *(undefined4 *)(param_2 + 0x20);
      uVar2 = *(undefined4 *)(param_2 + 0x24);
      uVar1 = FUN_02be11fc(*(undefined4 *)(param_2 + 0x18),&local_34,0);
      if ((uVar1 & 1) != 0) {
        local_34 = *(undefined4 *)(param_1 + 0x1c);
        uVar1 = FUN_02be11fc(uVar4,&local_34,0);
        if ((uVar1 & 1) != 0) {
          local_34 = *(undefined4 *)(param_1 + 0x20);
          uVar1 = FUN_02be11fc(uVar3,&local_34,0);
          if ((uVar1 & 1) != 0) {
            local_34 = *(undefined4 *)(param_1 + 0x24);
            uVar1 = FUN_02be11fc(uVar2,&local_34,0);
            if ((((((((uVar1 & 1) != 0) &&
                    (*(float *)(param_1 + 0x28) == *(float *)(param_2 + 0x28))) &&
                   (*(float *)(param_1 + 0x2c) == *(float *)(param_2 + 0x2c))) &&
                  ((*(float *)(param_1 + 0x30) == *(float *)(param_2 + 0x30) &&
                   (*(float *)(param_1 + 0x34) == *(float *)(param_2 + 0x34))))) &&
                 (uVar1 = FUN_02be11fc(*(undefined4 *)(param_2 + 0x38),param_1 + 0x38,0),
                 (uVar1 & 1) != 0)) &&
                (((uVar1 = OVRPlugin__SetHandNodePoseStateLatency
                                     (*(undefined8 *)(param_1 + 0x40),
                                      *(undefined8 *)(param_2 + 0x40),0), (uVar1 & 1) != 0 &&
                  (uVar1 = OVRPlugin__SetHandNodePoseStateLatency
                                     (*(undefined8 *)(param_1 + 0x48),
                                      *(undefined8 *)(param_2 + 0x48),0), (uVar1 & 1) != 0)) &&
                 ((uVar1 = OVRPlugin__SetHandNodePoseStateLatency
                                     (*(undefined8 *)(param_1 + 0x50),
                                      *(undefined8 *)(param_2 + 0x50),0), (uVar1 & 1) != 0 &&
                  (((uVar1 = OVRPlugin__SetHandNodePoseStateLatency
                                       (*(undefined8 *)(param_1 + 0x58),
                                        *(undefined8 *)(param_2 + 0x58),0), (uVar1 & 1) != 0 &&
                    (*(int *)(param_1 + 0x60) == *(int *)(param_2 + 0x60))) &&
                   (uVar1 = OVRPlugin__SetHandNodePoseStateLatency
                                      (*(undefined8 *)(param_1 + 0x68),
                                       *(undefined8 *)(param_2 + 0x68),0), (uVar1 & 1) != 0))))))))
               && (((*(int *)(param_1 + 0x70) == *(int *)(param_2 + 0x70) &&
                    (*(int *)(param_1 + 0x74) == *(int *)(param_2 + 0x74))) &&
                   ((*(char *)(param_1 + 0x78) == *(char *)(param_2 + 0x78) &&
                    (uVar1 = FUN_02be11fc(*(undefined4 *)(param_2 + 0x7c),param_1 + 0x7c,0),
                    (uVar1 & 1) != 0)))))) {
              uVar4 = *(undefined4 *)(param_2 + 0x84);
              uVar3 = *(undefined4 *)(param_2 + 0x88);
              uVar2 = *(undefined4 *)(param_2 + 0x8c);
              uVar1 = FUN_02be11fc(*(undefined4 *)(param_2 + 0x80),param_1 + 0x80,0);
              if ((((((uVar1 & 1) != 0) &&
                    (uVar1 = FUN_02be11fc(uVar4,param_1 + 0x84,0), (uVar1 & 1) != 0)) &&
                   ((uVar1 = FUN_02be11fc(uVar3,param_1 + 0x88,0), (uVar1 & 1) != 0 &&
                    (((uVar1 = FUN_02be11fc(uVar2,param_1 + 0x8c,0), (uVar1 & 1) != 0 &&
                      (uVar1 = OVRPlugin__SetHandNodePoseStateLatency
                                         (*(undefined8 *)(param_1 + 0x90),
                                          *(undefined8 *)(param_2 + 0x90),0), (uVar1 & 1) != 0)) &&
                     (uVar1 = OVRPlugin__SetHandNodePoseStateLatency
                                        (*(undefined8 *)(param_1 + 0x98),
                                         *(undefined8 *)(param_2 + 0x98),0), (uVar1 & 1) != 0))))))
                  && ((((*(char *)(param_1 + 0xa0) == *(char *)(param_2 + 0xa0) &&
                        (*(char *)(param_1 + 0xa1) == *(char *)(param_2 + 0xa1))) &&
                       ((*(char *)(param_1 + 0xa2) == *(char *)(param_2 + 0xa2) &&
                        ((((uVar1 = FUN_02be11fc(*(undefined4 *)(param_2 + 0xa4),param_1 + 0xa4,0),
                           (uVar1 & 1) != 0 &&
                           (*(char *)(param_1 + 0xa8) == *(char *)(param_2 + 0xa8))) &&
                          ((uVar1 = FUN_02be11fc(*(undefined4 *)(param_2 + 0xac),param_1 + 0xac,0),
                           (uVar1 & 1) != 0 &&
                           ((((uVar1 = FUN_02be11fc(*(undefined4 *)(param_2 + 0xb0),param_1 + 0xb0,0
                                                   ), (uVar1 & 1) != 0 &&
                              (*(char *)(param_1 + 0xb4) == *(char *)(param_2 + 0xb4))) &&
                             (*(char *)(param_1 + 0xb5) == *(char *)(param_2 + 0xb5))) &&
                            ((*(char *)(param_1 + 0xb6) == *(char *)(param_2 + 0xb6) &&
                             (*(float *)(param_1 + 0xb8) == *(float *)(param_2 + 0xb8))))))))) &&
                         (*(char *)(param_1 + 0xbc) == *(char *)(param_2 + 0xbc))))))) &&
                      ((((*(char *)(param_1 + 0xbd) == *(char *)(param_2 + 0xbd) &&
                         (*(char *)(param_1 + 0xbe) == *(char *)(param_2 + 0xbe))) &&
                        ((uVar1 = FUN_02be11fc(*(undefined4 *)(param_2 + 0xc0),param_1 + 0xc0,0),
                         (uVar1 & 1) != 0 &&
                         (((uVar1 = FUN_02be11fc(*(undefined4 *)(param_2 + 0xc4),param_1 + 0xc4,0),
                           (uVar1 & 1) != 0 &&
                           (uVar1 = FUN_02be11fc(*(undefined4 *)(param_2 + 200),param_1 + 200,0),
                           (uVar1 & 1) != 0)) &&
                          (uVar1 = FUN_02be11fc(*(undefined4 *)(param_2 + 0xcc),param_1 + 0xcc,0),
                          (uVar1 & 1) != 0)))))) &&
                       ((((uVar1 = FUN_02be11fc(*(undefined4 *)(param_2 + 0xd0),param_1 + 0xd0,0),
                          (uVar1 & 1) != 0 && (*(int *)(param_1 + 0xd4) == *(int *)(param_2 + 0xd4))
                          ) && (*(int *)(param_1 + 0xd8) == *(int *)(param_2 + 0xd8))) &&
                        ((*(int *)(param_1 + 0xdc) == *(int *)(param_2 + 0xdc) &&
                         (*(int *)(param_1 + 0xe0) == *(int *)(param_2 + 0xe0))))))))))) &&
                 (((((*(int *)(param_1 + 0xe4) == *(int *)(param_2 + 0xe4) &&
                     (((*(char *)(param_1 + 0xe8) == *(char *)(param_2 + 0xe8) &&
                       (*(int *)(param_1 + 0xec) == *(int *)(param_2 + 0xec))) &&
                      (*(int *)(param_1 + 0xf0) == *(int *)(param_2 + 0xf0))))) &&
                    ((*(int *)(param_1 + 0xf4) == *(int *)(param_2 + 0xf4) &&
                     (*(int *)(param_1 + 0xf8) == *(int *)(param_2 + 0xf8))))) &&
                   (uVar1 = FUN_02be11fc(*(undefined4 *)(param_2 + 0xfc),param_1 + 0xfc,0),
                   (uVar1 & 1) != 0)) &&
                  (((*(int *)(param_1 + 0x100) == *(int *)(param_2 + 0x100) &&
                    (*(char *)(param_1 + 0x104) == *(char *)(param_2 + 0x104))) &&
                   (uVar1 = FUN_02be11fc(*(undefined4 *)(param_2 + 0x108),param_1 + 0x108,0),
                   (uVar1 & 1) != 0)))))) {
                return *(int *)(param_1 + 0x10c) == *(int *)(param_2 + 0x10c);
              }
            }
          }
        }
      }
    }
  }
  return false;
}


