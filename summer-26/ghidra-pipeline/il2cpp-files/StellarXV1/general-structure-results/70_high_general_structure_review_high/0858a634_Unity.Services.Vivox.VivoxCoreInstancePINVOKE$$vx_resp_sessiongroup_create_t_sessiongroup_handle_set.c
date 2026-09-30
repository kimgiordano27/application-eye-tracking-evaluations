/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_resp_sessiongroup_create_t_sessiongroup_handle_set
ENTRY_POINT: 0858a634
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


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_resp_sessiongroup_create_t_sessiongroup_handle_set
               (void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined4 *unaff_x20;
  float *unaff_x21;
  float *unaff_x23;
  float *unaff_x25;
  long *unaff_x27;
  long unaff_x28;
  long *plVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  float in_s3;
  long in_stack_00000000;
  int iStack0000000000000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  long in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  
  plVar6 = *(long **)(unaff_x28 + 0xbb0);
  uVar2 = FUN_050c7c78();
  lVar3 = FUN_08a08f70(uVar2,0);
  FUN_08a09010(uVar2,0);
  in_stack_00000048 = _iStack0000000000000008;
  in_stack_00000040 = in_stack_00000000;
  in_stack_00000058 = in_stack_00000018;
  in_stack_00000050 = in_stack_00000010;
  in_stack_00000068 = in_stack_00000028;
  in_stack_00000060 = in_stack_00000020;
  in_stack_00000078 = in_stack_00000038;
  in_stack_00000070 = in_stack_00000030;
  iVar1 = FUN_08a08ffc(uVar2,0);
  fVar11 = (float)in_stack_00000030;
  fVar10 = (float)in_stack_00000010;
  if (iVar1 != 1) {
    fVar8 = (float)FUN_089b67e0(&stack0x00000040,3,0);
    *unaff_x25 = fVar8;
    unaff_x25[1] = fVar10;
    unaff_x25[2] = fVar11;
    unaff_x25[3] = 1.0;
    fVar8 = (float)FUN_08a0902c(uVar2,0);
    if (*(int *)(*unaff_x27 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    fVar7 = fVar8 * fVar8;
    fVar10 = DAT_01aecd50;
    if (DAT_01aecd50 <= fVar7) {
      fVar10 = fVar7;
    }
    fVar10 = 1.0 / fVar10;
    fVar11 = fVar7 * DAT_01aec8e8;
    in_s3 = -(fVar8 * fVar8);
    *unaff_x23 = fVar10;
    unaff_x23[1] = in_s3 / (fVar11 - fVar7);
    if (iVar1 != 0) goto LAB_0858a7a4;
    uVar9 = FUN_08a09034(uVar2,0);
    if (lVar3 != 0) {
      FUN_08999fb4(lVar3,0);
      in_stack_00000000 = 0;
      FUN_0601b710();
    }
    if (*(int *)(*unaff_x27 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    FUN_0858a420(uVar9,0);
    unaff_x25 = unaff_x21;
  }
  fVar8 = (float)FUN_089b67e0(&stack0x00000040,2,0);
  fVar10 = -fVar10;
  unaff_x25[3] = 0.0;
  fVar11 = -fVar11;
  *unaff_x25 = -fVar8;
  unaff_x25[1] = fVar10;
  unaff_x25[2] = fVar11;
LAB_0858a7a4:
  uVar9 = FUN_08a09004(uVar2,0);
  *unaff_x20 = uVar9;
  unaff_x20[1] = fVar10;
  lVar4 = *plVar6;
  unaff_x20[2] = fVar11;
  unaff_x20[3] = in_s3;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_040d65a8();
  }
  uVar5 = FUN_089ca704(lVar3,0,0);
  if ((uVar5 & 1) != 0) {
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    FUN_0899ac4c(lVar3,0);
    if (iStack0000000000000008 == 1) {
      FUN_0899ac4c(lVar3,0);
      if ((-1 < in_stack_00000000) && (FUN_0899ac4c(lVar3,0), in_stack_00000000._4_4_ < 4)) {
        FUN_0899ac4c(lVar3,0);
        FUN_0859616c(0x3f800000);
      }
    }
  }
  return;
}


