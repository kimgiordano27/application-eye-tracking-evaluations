/*
FUNCTION_NAME: OVR.OpenVR.IVRSystem._GetControllerStateWithPose$$EndInvoke
ENTRY_POINT: 0741ba08
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


void OVR_OpenVR_IVRSystem__GetControllerStateWithPose__EndInvoke
               (float param_1,long param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  ulong uVar7;
  ulong uVar8;
  float fVar9;
  undefined4 uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  uint uStack000000000000000c;
  float fStack0000000000000014;
  undefined1 in_stack_00000030 [16];
  undefined4 uStack0000000000000040;
  uint uStack0000000000000044;
  uint uStack0000000000000048;
  float fStack000000000000004c;
  
  puVar1 = PTR_DAT_091a2ee8;
  if ((bRam00000000098455b3 & 1) == 0) {
    FUN_03d2d2b0(PTR_DAT_09221d28);
    FUN_03d2d2b0(PTR_DAT_091a2ee8);
    bRam00000000098455b3 = 1;
  }
  uVar2 = *(undefined8 *)(param_2 + 0xf8);
  *(undefined4 *)(param_3 + 1) = *(undefined4 *)(param_2 + 0x100);
  *param_3 = uVar2;
  uVar2 = *(undefined8 *)(param_2 + 0x104);
  *(undefined4 *)(param_4 + 1) = *(undefined4 *)(param_2 + 0x10c);
  *param_4 = uVar2;
  if (**(float **)(*(long *)puVar1 + 0xb8) <= *(float *)(param_2 + 0x58)) {
    param_1 = param_1 - *(float *)(param_2 + 0x58);
    uVar2 = FUN_0741bbe0(param_1,param_2);
    puVar1 = PTR_DAT_09221d28;
    uVar3 = (uint)((ulong)uVar2 >> 0x20);
    if (-1 < (int)((uint)uVar2 | uVar3)) {
      if (*(long *)(param_2 + 0x138) != 0) {
        FUN_05c5c2bc(&stack0x00000018,*(long *)(param_2 + 0x138),uVar2,
                     *(undefined8 *)PTR_DAT_09221d28);
        fVar9 = fStack000000000000004c;
        uVar6 = uStack0000000000000040;
        uVar4 = in_stack_00000030._12_4_;
        uVar2 = in_stack_00000030._4_8_;
        if (*(long *)(param_2 + 0x138) != 0) {
          uVar11 = (ulong)uStack0000000000000048;
          uStack000000000000000c = uStack0000000000000044;
          FUN_05c5c2bc(&stack0x00000018,*(long *)(param_2 + 0x138),uVar3,*(undefined8 *)puVar1);
          uVar10 = uStack0000000000000040;
          uVar12 = (ulong)uStack0000000000000048;
          fVar16 = (float)uVar2;
          fVar17 = SUB84(uVar2,4);
          uVar8 = (ulong)uStack0000000000000044;
          fVar15 = (param_1 - fVar9) / (fStack000000000000004c - fVar9);
          fVar9 = fVar15;
          if (1.0 < fVar15) {
            fVar9 = 1.0;
          }
          uVar13 = (ulong)(uint)fVar9;
          if (fVar15 < 0.0) {
            fVar9 = 0.0;
          }
          fStack0000000000000014 =
               (float)uVar4 + ((float)in_stack_00000030._12_4_ - (float)uVar4) * fVar9;
          uVar7 = (ulong)uStack000000000000000c;
          uVar2 = FUN_0741bd58(uVar6);
          uVar14 = uVar13;
          uVar5 = FUN_0741bd58(uVar10,uVar8,uVar12);
          FUN_08a44560(uVar2,uVar7,uVar11,uVar13,uVar5,uVar8,uVar12,uVar14,0);
          uVar10 = (undefined4)uVar11;
          uVar6 = (undefined4)uVar7;
          uVar4 = FUN_0741be68();
          *param_3 = CONCAT44(fVar17 + (SUB84(in_stack_00000030._4_8_,4) - fVar17) * fVar9,
                              fVar16 + ((float)in_stack_00000030._4_8_ - fVar16) * fVar9);
          *(float *)(param_3 + 1) = fStack0000000000000014;
          *(undefined4 *)param_4 = uVar4;
          *(undefined4 *)((long)param_4 + 4) = uVar6;
          *(undefined4 *)(param_4 + 1) = uVar10;
          return;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
  }
  return;
}


