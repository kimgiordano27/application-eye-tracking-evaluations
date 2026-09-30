/*
FUNCTION_NAME: Oculus.Avatar2.OvrPluginTracking.OvrPluginEyeTrackingProvider$$GetEyePose
ENTRY_POINT: 05b826fc
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 109
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_6
*/


void Oculus_Avatar2_OvrPluginTracking_OvrPluginEyeTrackingProvider__GetEyePose
               (undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  float fVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  float unaff_s8;
  float fVar12;
  undefined8 unaff_d9;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined4 uStack00000000000000d8;
  undefined4 uStack00000000000000dc;
  
  fVar12 = (float)unaff_d9;
  uVar8 = param_3;
  lVar2 = FUN_05b81ea0();
  if ((lVar2 == 0) || (lVar2 = FUN_06be6b04(lVar2,0), puVar1 = PTR_DAT_072794f0, lVar2 == 0))
  goto LAB_05b8289c;
  uVar3 = FUN_06bf4764(lVar2,0);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_032cd7c0(*(long *)puVar1);
  }
  uVar4 = FUN_06be9890(uVar3,0,0);
  if ((uVar4 & 1) != 0) {
    lVar2 = FUN_05b81ea0();
    if ((lVar2 == 0) || (lVar2 = FUN_06be6b04(lVar2,0), lVar2 == 0)) goto LAB_05b8289c;
    uVar7 = FUN_06bf3d9c(lVar2,0);
    uVar3 = param_2;
    uVar11 = uVar8;
    lVar2 = FUN_05b81ea0();
    if (lVar2 == 0) goto LAB_05b8289c;
    uStack00000000000000d8 = (undefined4)uVar8;
    uStack00000000000000dc = (undefined4)param_2;
    lVar2 = FUN_06be6b04(lVar2,0);
    if (lVar2 == 0) goto LAB_05b8289c;
    uVar8 = FUN_06bf4b0c(lVar2,0);
    lVar2 = FUN_05b81ea0();
    if ((lVar2 == 0) || (lVar2 = FUN_06be6b04(lVar2,0), lVar2 == 0)) goto LAB_05b8289c;
    FUN_06bf4e88(lVar2,0);
    FUN_06bda22c(&stack0x00000010,uVar7,uStack00000000000000dc,uStack00000000000000d8,uVar8,uVar3,
                 uVar11,param_4,0);
    in_stack_00000058 = in_stack_00000018;
    in_stack_00000050 = in_stack_00000010;
    in_stack_00000068 = in_stack_00000028;
    in_stack_00000060 = in_stack_00000020;
    in_stack_00000078 = in_stack_00000038;
    in_stack_00000070 = in_stack_00000030;
    in_stack_00000088 = in_stack_00000048;
    in_stack_00000080 = in_stack_00000040;
    unaff_s8 = (float)FUN_06bdb6e8(&stack0x00000050,0);
    fVar12 = (float)unaff_d9;
    param_2 = unaff_d9;
    uVar8 = param_3;
  }
  fVar9 = (float)param_2;
  fVar10 = (float)uVar8;
  lVar2 = FUN_05b81ea0();
  lVar5 = FUN_05b81ea0();
  if (((lVar5 != 0) && (lVar5 = FUN_06be6b04(lVar5,0), lVar5 != 0)) &&
     (fVar6 = (float)FUN_06bf3d9c(lVar5,0), lVar2 != 0)) {
    FUN_05b8c78c(unaff_s8 + fVar6,fVar12 + fVar9,(float)param_3 + fVar10,lVar2,0);
    return;
  }
LAB_05b8289c:
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


