/*
FUNCTION_NAME: OVRPlugin.Media$$SetMrcFrameImageFlipped
ENTRY_POINT: 07403dc0
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 103
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_1;paired_field_refs_with_eye_source;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin_Media__SetMrcFrameImageFlipped(ulong param_1)

{
  undefined *puVar1;
  long lVar2;
  uint uVar3;
  ulong unaff_x19;
  long unaff_x20;
  long lVar4;
  ulong uVar5;
  float fVar6;
  undefined8 in_stack_00000000;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  undefined4 uStack0000000000000010;
  undefined8 uStack0000000000000014;
  undefined8 in_stack_00000020;
  float fStack0000000000000028;
  undefined8 in_stack_00000030;
  undefined4 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000050;
  undefined8 uStack0000000000000054;
  
  puVar1 = PTR_DAT_08eb1b40;
  uVar5 = 1L << (unaff_x19 & 0x3f);
  if ((param_1 & uVar5) == 0) {
    return;
  }
  lVar2 = *(long *)PTR_DAT_08eb1b40;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
    lVar2 = *(long *)puVar1;
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x10);
  if (lVar2 == 0) {
LAB_07403f08:
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  uVar3 = (uint)unaff_x19;
  if (uVar3 < *(uint *)(lVar2 + 0x18)) {
    lVar4 = (long)(int)uVar3;
    if (*(int *)(lVar2 + lVar4 * 4 + 0x20) == -1) {
      uStack0000000000000014 = *(undefined8 *)(unaff_x20 + 0x34);
      in_stack_00000000 = *(undefined8 *)(unaff_x20 + 0x20);
      *(ulong *)(unaff_x20 + 0x40) = *(ulong *)(unaff_x20 + 0x40) & (uVar5 ^ 0xffffffffffffffff);
      uStack0000000000000010 = (undefined4)((ulong)*(undefined8 *)(unaff_x20 + 0x2c) >> 0x20);
      uStack0000000000000008 = (undefined4)*(undefined8 *)(unaff_x20 + 0x28);
      uStack000000000000000c = (undefined4)((ulong)*(undefined8 *)(unaff_x20 + 0x28) >> 0x20);
    }
    else {
      FUN_07403d60();
      *(ulong *)(unaff_x20 + 0x40) = *(ulong *)(unaff_x20 + 0x40) & (uVar5 ^ 0xffffffffffffffff);
      FUN_073ecffc();
    }
    uStack0000000000000048 = uStack0000000000000008;
    in_stack_00000040 = in_stack_00000000;
    uStack0000000000000054 = uStack0000000000000014;
    uStack000000000000004c = uStack000000000000000c;
    uStack0000000000000050 = uStack0000000000000010;
    lVar2 = *(long *)(unaff_x20 + 0x10);
    if (lVar2 == 0) goto LAB_07403f08;
    if (uVar3 < *(uint *)(lVar2 + 0x18)) {
      lVar2 = lVar2 + lVar4 * 0x1c;
      in_stack_00000038 = *(undefined4 *)(lVar2 + 0x38);
      in_stack_00000030 = *(undefined8 *)(lVar2 + 0x30);
      fVar6 = *(float *)(unaff_x20 + 0x3c);
      fStack0000000000000028 = (float)*(undefined8 *)(lVar2 + 0x28);
      in_stack_00000020 =
           CONCAT44((float)((ulong)*(undefined8 *)(lVar2 + 0x20) >> 0x20) * fVar6,
                    (float)*(undefined8 *)(lVar2 + 0x20) * fVar6);
      _fStack0000000000000028 =
           CONCAT44((int)((ulong)*(undefined8 *)(lVar2 + 0x28) >> 0x20),
                    fStack0000000000000028 * fVar6);
      lVar2 = *(long *)(unaff_x20 + 0x18);
      if (lVar2 == 0) goto LAB_07403f08;
      if (uVar3 < *(uint *)(lVar2 + 0x18)) {
        OVRLocatable_TrackingSpacePose__ComputeWorldPosition
                  (&stack0x00000040,&stack0x00000020,lVar2 + lVar4 * 0x1c + 0x20,0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb38();
}


