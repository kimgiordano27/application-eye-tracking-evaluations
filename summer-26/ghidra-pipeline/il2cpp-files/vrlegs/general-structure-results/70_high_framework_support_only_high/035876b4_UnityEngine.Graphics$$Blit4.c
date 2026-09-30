/*
FUNCTION_NAME: UnityEngine.Graphics$$Blit4
ENTRY_POINT: 035876b4
PROGRAM: vrlegs-libil2cpp.so
SCORE: 82
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;telemetry_or_network_hits_1;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined4 UnityEngine_Graphics__Blit4(long param_1,long param_2)

{
  char cVar1;
  uint uVar2;
  long in_x9;
  int in_w10;
  int in_w11;
  float fVar3;
  float fVar4;
  long in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined4 in_stack_00000070;
  
  if (in_w11 < in_w10) {
    if (in_w10 < -0x6147ec0e) {
      if (in_w10 != -0x63709e36) {
        if (in_w10 != -0x6147ec0f) {
          return 0;
        }
LAB_03588a38:
        if ((*(byte *)(in_stack_00000020 + 600) >> 5 & 1) != 0) {
          return 1;
        }
        cVar1 = UnityEngine_Light__set_cookieSize(in_stack_00000020 + 0x260,0x20,0);
        if (cVar1 != '\0') {
          return 1;
        }
        uVar2 = *(uint *)(in_stack_00000020 + 0x25c) & 0xffffffdf;
        goto LAB_03589864;
      }
LAB_035893f0:
      if ((*(byte *)(in_stack_00000020 + 600) >> 3 & 1) != 0) {
        return 1;
      }
      cVar1 = UnityEngine_Light__set_cookieSize(in_stack_00000020 + 0x260,8,0);
      if (cVar1 != '\0') {
        return 1;
      }
      uVar2 = *(uint *)(in_stack_00000020 + 0x25c) & 0xfffffff7;
      goto LAB_03589864;
    }
    if (in_w10 != -0x6058f16d) {
      if (in_w10 != -0x34bd4043) {
        if (in_w10 != -0x32f64d9a) {
          return 0;
        }
        if (*(int *)(param_2 + 0xe0) == 0) {
          param_2 = thunk_FUN_01a58e78();
          param_1 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
          in_x9 = *(long *)(param_1 + 0x88);
          if (in_x9 == 0) goto LAB_0358c010;
        }
        if (*(int *)(in_x9 + 0x18) != 0) {
          in_stack_00000070 = 0;
          fVar3 = (float)FUN_03592a88(param_2,*(undefined8 *)(param_1 + 0x80),
                                      *(undefined4 *)(in_x9 + 0x2c),*(undefined4 *)(in_x9 + 0x30),
                                      &stack0x00000070);
          if (fVar3 == -32768.0) {
            return 0;
          }
          if (in_stack_00000028._4_4_ == 0) {
            fVar4 = DAT_00d389a8;
            if (*(char *)(in_stack_00000020 + 0x305) != '\0') {
              fVar4 = 1.0;
            }
            fVar3 = fVar3 * fVar4;
          }
          else if (in_stack_00000028._4_4_ == 1) {
            fVar4 = DAT_00d389a8;
            if (*(char *)(in_stack_00000020 + 0x305) != '\0') {
              fVar4 = 1.0;
            }
            fVar3 = *(float *)(in_stack_00000020 + 0x1e8) * fVar3 * fVar4;
          }
          else if (in_stack_00000028._4_4_ == 2) {
            fVar4 = 0.0;
            if (*(float *)(in_stack_00000020 + 0x360) != -1.0) {
              fVar4 = *(float *)(in_stack_00000020 + 0x360);
            }
            fVar3 = (fVar3 * (*(float *)(in_stack_00000020 + 0x358) - fVar4)) / 100.0;
          }
          else {
            fVar3 = *(float *)(in_stack_00000020 + 0x350);
          }
          if (fVar3 < 0.0) {
            fVar3 = 0.0;
          }
          *(float *)(in_stack_00000020 + 0x350) = fVar3;
          return 1;
        }
        goto LAB_0358bfac;
      }
LAB_03587fc0:
      if (*(int *)(param_2 + 0xe0) == 0) {
        param_2 = thunk_FUN_01a58e78();
        param_1 = *(long *)(*(long *)OVRPlugin_OVRP_1_31_0_TypeInfo + 0xb8);
        in_x9 = *(long *)(param_1 + 0x88);
        if (in_x9 == 0) {
LAB_0358c010:
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
      }
      if (*(int *)(in_x9 + 0x18) != 0) {
        in_stack_00000070 = 0;
        fVar3 = (float)FUN_03592a88(param_2,*(undefined8 *)(param_1 + 0x80),
                                    *(undefined4 *)(in_x9 + 0x2c),*(undefined4 *)(in_x9 + 0x30),
                                    &stack0x00000070);
        if (fVar3 != -32768.0) {
          if (in_stack_00000028._4_4_ == 0) {
            fVar4 = DAT_00d389a8;
            if (*(char *)(in_stack_00000020 + 0x305) != '\0') {
              fVar4 = 1.0;
            }
            fVar3 = fVar3 * fVar4;
          }
          else if (in_stack_00000028._4_4_ == 1) {
            fVar4 = DAT_00d389a8;
            if (*(char *)(in_stack_00000020 + 0x305) != '\0') {
              fVar4 = 1.0;
            }
            fVar3 = *(float *)(in_stack_00000020 + 0x1e8) * fVar3 * fVar4;
          }
          else if (in_stack_00000028._4_4_ == 2) {
            fVar4 = 0.0;
            if (*(float *)(in_stack_00000020 + 0x360) != -1.0) {
              fVar4 = *(float *)(in_stack_00000020 + 0x360);
            }
            fVar3 = (fVar3 * (*(float *)(in_stack_00000020 + 0x358) - fVar4)) / 100.0;
          }
          else {
            fVar3 = *(float *)(in_stack_00000020 + 0x354);
          }
          if (fVar3 < 0.0) {
            fVar3 = 0.0;
          }
          *(float *)(in_stack_00000020 + 0x354) = fVar3;
          return 1;
        }
        return 0;
      }
LAB_0358bfac:
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
  }
  else {
    if (in_w10 < -0x70449a55) {
      if (in_w10 == -0x70657989) {
        FUN_0209afdc(in_stack_00000020 + 0x218,&stack0x00000070,
                     *(undefined8 *)
                      RootMotion_FinalIK_RagdollUtility_<DisableRagdollSmooth>d__21_TypeInfo);
        if (*(int *)(in_stack_00000020 + 0x25c) == 1) {
          in_stack_00000070 = 700;
        }
        else {
          FUN_0209bd58(in_stack_00000020 + 0x218,&stack0x00000070,
                       *(undefined8 *)QFSW_QC_QuantumSerializer_<>c_TypeInfo);
        }
        *(undefined4 *)(in_stack_00000020 + 0x214) = in_stack_00000070;
        return 1;
      }
      if (in_w10 != -0x70449a56) {
        return 0;
      }
      goto LAB_035893f0;
    }
    if (in_w10 == -0x6e1be82f) goto LAB_03588a38;
    if (in_w10 != -0x6d2ced8d) {
      if (in_w10 != -0x64bbe163) {
        return 0;
      }
      goto LAB_03587fc0;
    }
  }
  if ((*(byte *)(in_stack_00000020 + 600) >> 4 & 1) != 0) {
    return 1;
  }
  cVar1 = UnityEngine_Light__set_cookieSize(in_stack_00000020 + 0x260,0x10,0);
  if (cVar1 != '\0') {
    return 1;
  }
  uVar2 = *(uint *)(in_stack_00000020 + 0x25c) & 0xffffffef;
LAB_03589864:
  *(uint *)(in_stack_00000020 + 0x25c) = uVar2;
  return 1;
}


