/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.Samples.Hands.HandsOneEuroFilterPostProcessor$$ProcessJoints
ENTRY_POINT: 03606850
PROGRAM: FruitBladeVR-libil2cpp.so
SCORE: 86
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void UnityEngine_XR_Interaction_Toolkit_Samples_Hands_HandsOneEuroFilterPostProcessor__ProcessJoints
               (long param_1,long param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  ulong uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined1 uVar10;
  long lVar11;
  undefined4 uVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined4 uVar17;
  ulong uVar18;
  undefined4 uVar19;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  ulong local_1c0;
  undefined8 local_1b0;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined8 uStack_19c;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  ulong local_160;
  undefined8 local_150;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined8 uStack_13c;
  undefined8 local_130;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 local_118;
  undefined8 local_110;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined8 local_d0;
  undefined8 uStack_c8;
  ulong local_c0;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined8 local_90;
  undefined8 uStack_88;
  ulong local_80;
  
  if ((DAT_03ef68fb & 1) == 0) {
    FUN_01c5c92c(PTR_UnityEngine_Pose_TypeInfo_03cb6528);
    DAT_03ef68fb = 1;
  }
  local_80 = 0;
  local_c0 = 0;
  local_110 = 0;
  uStack_108 = 0;
  uStack_104 = 0;
  local_f8 = 0;
  uStack_d8 = 0;
  uStack_d4 = 0;
  local_e0 = 0;
  uStack_dc = 0;
  uStack_c8 = 0;
  local_d0 = 0;
  uStack_98 = 0;
  uStack_94 = 0;
  local_a0 = 0;
  uStack_9c = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_e8 = 0;
  local_f0 = 0;
  local_100 = 0;
  uStack_fc = 0;
  local_130 = 0;
  uStack_128 = 0;
  uStack_124 = 0;
  local_118 = 0;
  local_120 = 0;
  uStack_11c = 0;
  if (param_2 == 0) goto LAB_03606b5c;
  local_b0 = *(undefined8 *)(param_2 + 0x30);
  uStack_a8 = *(undefined8 *)(param_2 + 0x38);
  uVar18 = *(ulong *)(param_2 + 0x48);
  uVar3 = *(ulong *)(param_2 + 0x40);
  local_80 = *(ulong *)(param_2 + 0x60);
  uStack_88 = *(undefined8 *)(param_2 + 0x58);
  local_90 = *(undefined8 *)(param_2 + 0x50);
  uStack_98 = (undefined4)uVar18;
  uVar19 = uStack_98;
  uStack_94 = (undefined4)(uVar18 >> 0x20);
  uVar6 = uStack_94;
  local_a0 = (undefined4)uVar3;
  uStack_9c = (undefined4)(uVar3 >> 0x20);
  uVar17 = uStack_9c;
  if ((local_80 & 0xff) == 0) {
    uVar10 = 0;
  }
  else {
    auVar15._0_8_ = uVar3 & 0xffffffff;
    auVar15._8_8_ = 0;
    lVar11 = *(long *)(param_1 + 0x28);
    if (*(char *)(param_1 + 0x38) == '\0') {
      if (lVar11 == 0) goto LAB_03606b5c;
      auVar15 = NEON_ext(auVar15,auVar15,4,1);
      *(ulong *)(lVar11 + 0x20) = CONCAT44(uStack_98,uStack_9c);
      uVar10 = 1;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = CONCAT44(uStack_98,uStack_9c);
      auVar15 = NEON_ext(auVar15,auVar2,0xc,1);
      auVar13._0_12_ = auVar15._0_12_;
      auVar13._12_4_ = auVar15._0_4_;
      *(long *)(lVar11 + 0x18) = auVar13._8_8_;
      *(long *)(lVar11 + 0x10) = auVar15._0_8_;
    }
    else {
      uVar7 = (undefined4)local_90;
      local_90._4_4_ = (undefined4)((ulong)local_90 >> 0x20);
      uVar8 = local_90._4_4_;
      uVar9 = (undefined4)uStack_88;
      uVar12 = UnityEngine_Time__get_deltaTime(0);
      if (lVar11 == 0) goto LAB_03606b5c;
      auVar4._8_8_ = 0;
      auVar4._0_8_ = auVar15._0_8_;
      uVar12 = UnityEngine_XR_Interaction_Toolkit_Samples_Hands_OneEuroFilterVector3__Filter
                         (auVar4,uVar17,uVar18 & 0xffffffff,uVar12,*(undefined4 *)(param_1 + 0x20),
                          *(undefined4 *)(param_1 + 0x24),lVar11);
      if (*(int *)(*(long *)PTR_UnityEngine_Pose_TypeInfo_03cb6528 + 0xe4) == 0) {
        thunk_FUN_01cb0d4c();
      }
      UnityEngine_Pose___ctor(uVar12,uVar17,uVar19,uVar6,uVar7,uVar8,uVar9,&local_110,0);
      uStack_13c = CONCAT44(local_f8,uStack_fc);
      uStack_148 = uStack_108;
      local_150 = local_110;
      uStack_144 = uStack_104;
      uStack_140 = local_100;
      UnityEngine_XR_Hands_Processing_XRHandProcessingUtility__SetRootPose(&local_b0,&local_150,0);
      uStack_178 = CONCAT44(uStack_94,uStack_98);
      uStack_180 = CONCAT44(uStack_9c,local_a0);
      uStack_188 = uStack_a8;
      local_190 = local_b0;
      uStack_168 = uStack_88;
      local_170 = local_90;
      local_160 = local_80;
      UnityEngine_XR_Hands_Processing_XRHandProcessingUtility__SetCorrespondingHand
                (param_2,&local_190,0);
      uVar10 = (undefined1)local_80;
    }
  }
  *(undefined1 *)(param_1 + 0x38) = uVar10;
  local_c0 = *(ulong *)(param_2 + 0x98);
  local_f0 = *(undefined8 *)(param_2 + 0x68);
  uStack_e8 = *(undefined8 *)(param_2 + 0x70);
  uVar18 = *(ulong *)(param_2 + 0x80);
  uVar3 = *(ulong *)(param_2 + 0x78);
  uStack_c8 = *(undefined8 *)(param_2 + 0x90);
  local_d0 = *(undefined8 *)(param_2 + 0x88);
  uStack_d8 = (undefined4)uVar18;
  uVar19 = uStack_d8;
  uStack_d4 = (undefined4)(uVar18 >> 0x20);
  uVar6 = uStack_d4;
  local_e0 = (undefined4)uVar3;
  uStack_dc = (undefined4)(uVar3 >> 0x20);
  uVar17 = uStack_dc;
  if ((local_c0 & 0xff) == 0) {
    local_c0._0_1_ = 0;
  }
  else {
    auVar14._0_8_ = uVar3 & 0xffffffff;
    auVar14._8_8_ = 0;
    lVar11 = *(long *)(param_1 + 0x30);
    if (*(char *)(param_1 + 0x39) == '\0') {
      if (lVar11 == 0) goto LAB_03606b5c;
      auVar15 = NEON_ext(auVar14,auVar14,4,1);
      *(ulong *)(lVar11 + 0x20) = CONCAT44(uStack_d8,uStack_dc);
      local_c0._0_1_ = 1;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = CONCAT44(uStack_d8,uStack_dc);
      auVar15 = NEON_ext(auVar15,auVar1,0xc,1);
      auVar16._0_12_ = auVar15._0_12_;
      auVar16._12_4_ = auVar15._0_4_;
      *(long *)(lVar11 + 0x18) = auVar16._8_8_;
      *(long *)(lVar11 + 0x10) = auVar15._0_8_;
    }
    else {
      uVar7 = (undefined4)local_d0;
      local_d0._4_4_ = (undefined4)((ulong)local_d0 >> 0x20);
      uVar8 = local_d0._4_4_;
      uVar9 = (undefined4)uStack_c8;
      uVar12 = UnityEngine_Time__get_deltaTime(0);
      if (lVar11 == 0) {
LAB_03606b5c:
                    /* WARNING: Subroutine does not return */
        FUN_01c5cbd4();
      }
      auVar5._8_8_ = 0;
      auVar5._0_8_ = auVar14._0_8_;
      uVar12 = UnityEngine_XR_Interaction_Toolkit_Samples_Hands_OneEuroFilterVector3__Filter
                         (auVar5,uVar17,uVar18 & 0xffffffff,uVar12,*(undefined4 *)(param_1 + 0x20),
                          *(undefined4 *)(param_1 + 0x24),lVar11);
      if (*(int *)(*(long *)PTR_UnityEngine_Pose_TypeInfo_03cb6528 + 0xe4) == 0) {
        thunk_FUN_01cb0d4c();
      }
      UnityEngine_Pose___ctor(uVar12,uVar17,uVar19,uVar6,uVar7,uVar8,uVar9,&local_130,0);
      uStack_19c = CONCAT44(local_118,uStack_11c);
      uStack_1a8 = uStack_128;
      local_1b0 = local_130;
      uStack_1a4 = uStack_124;
      uStack_1a0 = local_120;
      UnityEngine_XR_Hands_Processing_XRHandProcessingUtility__SetRootPose(&local_f0,&local_1b0,0);
      uStack_1d8 = CONCAT44(uStack_d4,uStack_d8);
      uStack_1e0 = CONCAT44(uStack_dc,local_e0);
      uStack_1e8 = uStack_e8;
      local_1f0 = local_f0;
      uStack_1c8 = uStack_c8;
      local_1d0 = local_d0;
      local_1c0 = local_c0;
      UnityEngine_XR_Hands_Processing_XRHandProcessingUtility__SetCorrespondingHand
                (param_2,&local_1f0,0);
    }
  }
  *(undefined1 *)(param_1 + 0x39) = (undefined1)local_c0;
  return;
}


