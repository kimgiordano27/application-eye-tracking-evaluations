/*
FUNCTION_NAME: OVRPlugin.OVRP_1_0_0$$ovrp_RecenterTrackingOrigin
ENTRY_POINT: 07ca4148
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 94
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin_OVRP_1_0_0__ovrp_RecenterTrackingOrigin(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  code *in_x9;
  int *piVar4;
  ulong unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  int unaff_w22;
  long unaff_x23;
  long *unaff_x24;
  long *unaff_x25;
  undefined8 in_stack_00000020;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined4 uStack0000000000000030;
  undefined8 uStack0000000000000034;
  undefined8 in_stack_00000040;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000050;
  undefined8 uStack0000000000000054;
  undefined8 in_stack_00000060;
  undefined4 uStack0000000000000068;
  undefined4 uStack000000000000006c;
  undefined4 uStack0000000000000070;
  undefined8 uStack0000000000000074;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  
  do {
    (*in_x9)(param_1);
    in_stack_00000088 = CONCAT44(uStack000000000000006c,uStack0000000000000068);
    in_stack_00000080 = in_stack_00000060;
    *(undefined8 *)(unaff_x23 + 0x14) = uStack0000000000000074;
    *(ulong *)(unaff_x23 + 0xc) = CONCAT44(uStack0000000000000070,uStack000000000000006c);
    if ((unaff_x19 & 1) != 0) {
      uStack0000000000000074 = *(undefined8 *)(unaff_x23 + 0x14);
      uStack000000000000006c = (undefined4)*(undefined8 *)(unaff_x23 + 0xc);
      uStack0000000000000070 = (undefined4)((ulong)*(undefined8 *)(unaff_x23 + 0xc) >> 0x20);
      if (*(int *)(*unaff_x25 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      uStack0000000000000028 = uStack0000000000000068;
      in_stack_00000020 = in_stack_00000060;
      uStack0000000000000034 = uStack0000000000000074;
      uStack000000000000002c = uStack000000000000006c;
      uStack0000000000000030 = uStack0000000000000070;
      FUN_07ca0128(&stack0x00000040,&stack0x00000020,0);
      in_stack_00000088 = CONCAT44(uStack000000000000004c,uStack0000000000000048);
      in_stack_00000080 = in_stack_00000040;
      *(undefined8 *)(unaff_x23 + 0x14) = uStack0000000000000054;
      *(ulong *)(unaff_x23 + 0xc) = CONCAT44(uStack0000000000000050,uStack000000000000004c);
    }
    uStack0000000000000074 = *(undefined8 *)(unaff_x23 + 0x14);
    uStack0000000000000068 = (undefined4)in_stack_00000088;
    in_stack_00000060 = in_stack_00000080;
    uStack000000000000006c = (undefined4)*(undefined8 *)(unaff_x23 + 0xc);
    uStack0000000000000070 = (undefined4)((ulong)*(undefined8 *)(unaff_x23 + 0xc) >> 0x20);
    if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    FUN_07ca3958();
    unaff_w22 = unaff_w22 + 1;
    if (unaff_w22 == 0x1a) {
      return;
    }
    lVar2 = *unaff_x20;
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == *unaff_x24) {
          puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
          goto LAB_07ca413c;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)FUN_044822ac();
LAB_07ca413c:
    in_x9 = (code *)*puVar1;
    param_1 = &stack0x00000060;
  } while( true );
}


