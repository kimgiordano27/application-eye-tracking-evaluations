/*
FUNCTION_NAME: OVRPlugin.OVRP_1_0_0$$ovrp_GetTrackingCalibratedOrigin
ENTRY_POINT: 07ca40d4
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 91
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin_OVRP_1_0_0__ovrp_GetTrackingCalibratedOrigin(void)

{
  undefined *puVar1;
  undefined *puVar2;
  bool in_ZR;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  ulong unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  int iVar7;
  undefined8 in_stack_00000020;
  undefined4 in_stack_00000028;
  undefined4 uStack0000000000000030;
  undefined8 uStack0000000000000034;
  undefined8 in_stack_00000040;
  undefined4 in_stack_00000048;
  undefined4 uStack0000000000000050;
  undefined8 uStack0000000000000054;
  undefined8 in_stack_00000060;
  undefined4 in_stack_00000068;
  undefined4 uStack0000000000000070;
  undefined8 uStack0000000000000074;
  undefined8 in_stack_00000080;
  undefined4 in_stack_00000088;
  undefined4 uStack0000000000000090;
  undefined8 uStack0000000000000094;
  
  puVar2 = PTR_DAT_09f50bf0;
  puVar1 = PTR_DAT_09f4d0a8;
  if (in_ZR) {
    iVar7 = 0;
    do {
      lVar4 = *unaff_x20;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)puVar2) {
            puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_07ca413c;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar3 = (undefined8 *)FUN_044822ac();
LAB_07ca413c:
      (*(code *)*puVar3)(&stack0x00000060);
      in_stack_00000088 = in_stack_00000068;
      in_stack_00000080 = in_stack_00000060;
      uStack0000000000000094 = uStack0000000000000074;
      uStack0000000000000090 = uStack0000000000000070;
      if ((unaff_x19 & 1) != 0) {
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_044a54b4();
        }
        in_stack_00000028 = in_stack_00000068;
        in_stack_00000020 = in_stack_00000060;
        uStack0000000000000034 = uStack0000000000000074;
        uStack0000000000000030 = uStack0000000000000070;
        FUN_07ca0128(&stack0x00000040,&stack0x00000020,0);
        in_stack_00000088 = in_stack_00000048;
        in_stack_00000080 = in_stack_00000040;
        uStack0000000000000094 = uStack0000000000000054;
        uStack0000000000000090 = uStack0000000000000050;
      }
      in_stack_00000068 = in_stack_00000088;
      in_stack_00000060 = in_stack_00000080;
      uStack0000000000000074 = uStack0000000000000094;
      uStack0000000000000070 = uStack0000000000000090;
      if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      FUN_07ca3958();
      iVar7 = iVar7 + 1;
    } while (iVar7 != 0x1a);
  }
  return;
}


