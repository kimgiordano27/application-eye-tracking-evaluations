/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_resp_sessiongroup_create_t_sessiongroup_handle_get
ENTRY_POINT: 0858a6cc
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_5;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_resp_sessiongroup_create_t_sessiongroup_handle_get
               (float param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  undefined4 *unaff_x20;
  float *unaff_x21;
  long unaff_x22;
  float *unaff_x23;
  int unaff_w26;
  long *unaff_x27;
  long *unaff_x28;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  long in_stack_00000000;
  int in_stack_00000008;
  
  if (*(int *)(param_2 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  fVar3 = param_1 * param_1;
  fVar5 = DAT_01aecd50;
  if (DAT_01aecd50 <= fVar3) {
    fVar5 = fVar3;
  }
  fVar5 = 1.0 / fVar5;
  fVar6 = fVar3 * DAT_01aec8e8;
  fVar7 = -(param_1 * param_1);
  *unaff_x23 = fVar5;
  unaff_x23[1] = fVar7 / (fVar6 - fVar3);
  if (unaff_w26 == 0) {
    uVar4 = FUN_08a09034();
    if (unaff_x22 != 0) {
      FUN_08999fb4();
      in_stack_00000000 = 0;
      FUN_0601b710();
    }
    if (*(int *)(*unaff_x27 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    FUN_0858a420(uVar4,0);
    fVar3 = (float)FUN_089b67e0(&stack0x00000040,2,0);
    fVar5 = -fVar5;
    unaff_x21[3] = 0.0;
    fVar6 = -fVar6;
    *unaff_x21 = -fVar3;
    unaff_x21[1] = fVar5;
    unaff_x21[2] = fVar6;
  }
  uVar4 = FUN_08a09004();
  *unaff_x20 = uVar4;
  unaff_x20[1] = fVar5;
  lVar1 = *unaff_x28;
  unaff_x20[2] = fVar6;
  unaff_x20[3] = fVar7;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  uVar2 = FUN_089ca704();
  if ((uVar2 & 1) != 0) {
    if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    FUN_0899ac4c();
    if (in_stack_00000008 == 1) {
      FUN_0899ac4c();
      if ((-1 < in_stack_00000000) && (FUN_0899ac4c(), in_stack_00000000._4_4_ < 4)) {
        FUN_0899ac4c();
        FUN_0859616c(0x3f800000);
      }
    }
  }
  return;
}


