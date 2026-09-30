/*
FUNCTION_NAME: Oculus.Interaction.HandPointerPose$$get_Active
ENTRY_POINT: 0355d1c8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 88
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_1;telemetry_or_network_hits_1;source_validity_pose_sink_structure
*/


uint Oculus_Interaction_HandPointerPose__get_Active(void)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  ulong uVar6;
  long *plVar7;
  long unaff_x19;
  long unaff_x22;
  long *unaff_x24;
  long *unaff_x26;
  double dVar8;
  double dVar9;
  undefined8 in_stack_00000018;
  double in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined4 uStack0000000000000030;
  undefined4 uStack0000000000000034;
  double in_stack_00000038;
  
  FUN_0356286c();
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
                    /* try { // try from 0355d1f0 to 0365d25b has its CatchHandler @ 0355d4bc */
  uVar6 = FUN_03562494();
  if ((uVar6 & 1) == 0) {
LAB_0355d214:
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar6 = FUN_0356164c();
    if ((uVar6 & 1) != 0) goto LAB_0355d234;
    if (*(int *)(*(long *)
                  Method_Unity_VisualScripting_FullSerializer_Internal_fsVersionManager_GetVersionedType__
                + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    plVar7 = (long *)FUN_0351c438(0);
    uVar2 = *(undefined4 *)(unaff_x22 + 0x10);
    uVar3 = FUN_0356326c();
    uVar4 = FUN_0356326c();
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar6 = (**(code **)(*plVar7 + 0x2a8))
                      (plVar7,uVar2,uVar3,uVar4,uStack0000000000000034,uStack0000000000000030,
                       in_stack_00000028._4_4_,0);
    dVar9 = in_stack_00000020;
    if ((uVar6 & 1) != 0) {
      if (*(int *)(*(long *)Method_Oculus_Platform_Message<LeaderboardList>__ctor__ + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      dVar9 = dVar9 * DAT_00c8df08;
      dVar8 = modf(dVar9,&stack0x00000038);
      if (0.0 <= dVar9) {
        if (dVar8 == 0.5) {
          dVar9 = 1.0;
          goto LAB_0355d380;
        }
        dVar8 = (double)(long)(dVar9 + 0.5);
      }
      else if (dVar8 == -0.5) {
        dVar9 = -1.0;
LAB_0355d380:
        dVar8 = in_stack_00000038;
        if (((long)in_stack_00000038 & 1U) != 0) {
          dVar8 = in_stack_00000038 + dVar9;
        }
      }
      else {
        dVar8 = (double)(long)(dVar9 + -0.5);
      }
      if (*(int *)(*(long *)Method_System_Array_Resize<InputDevice_ControlBitRangeNode>__ + 0xe0) ==
          0) {
        thunk_FUN_01ee6d7c();
      }
      lVar1 = -0x8000000000000000;
      if (dVar8 != INFINITY) {
        lVar1 = (long)dVar8;
      }
      in_stack_00000018 = FUN_0354cd34(&stack0x00000018,lVar1);
      *(undefined8 *)(unaff_x19 + 0x38) = in_stack_00000018;
      if (*(int *)(*unaff_x26 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      uVar5 = FUN_0355d69c();
      goto LAB_0355d244;
    }
    FUN_035633f0();
  }
  else {
    if (*(int *)(*unaff_x26 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    uVar6 = FUN_03559e80();
    if ((uVar6 & 1) != 0) goto LAB_0355d214;
LAB_0355d234:
    FUN_035633a0();
  }
  uVar5 = 0;
LAB_0355d244:
  return uVar5 & 1;
}


