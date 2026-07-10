/*
FUNCTION_NAME: FUN_035e619c
ENTRY_POINT: 035e619c
PROGRAM: FruitBladeVR-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_3;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


void FUN_035e619c(long *param_1,long *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined4 local_138;
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
  undefined8 local_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  
  puVar5 = (undefined8 *)*param_1;
  local_58 = 0;
  local_b8 = 0;
  local_d8 = 0;
  local_f8 = 0;
  local_118 = 0;
  local_138 = 0;
  uStack_88 = puVar5[5];
  local_90 = puVar5[4];
  uStack_78 = puVar5[7];
  uStack_80 = puVar5[6];
  local_70 = 0;
  uStack_68 = 0;
  uStack_64 = 0;
  local_60 = 0;
  uStack_5c = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  local_c0 = 0;
  local_f0 = 0;
  uStack_e8 = 0;
  local_e0 = 0;
  local_110 = 0;
  uStack_108 = 0;
  uStack_104 = 0;
  local_100 = 0;
  uStack_fc = 0;
  local_130 = 0;
  uStack_128 = 0;
  uStack_124 = 0;
  local_120 = 0;
  uStack_11c = 0;
  local_150 = 0;
  uStack_148 = 0;
  local_140 = 0;
  uStack_a8 = puVar5[1];
  local_b0 = *puVar5;
  uStack_98 = puVar5[3];
  uStack_a0 = puVar5[2];
  uVar4 = UnityEngine_XR_Hands_XRHandJoint__TryGetPose(&local_b0,&local_70);
  if ((uVar4 & 1) != 0) {
    puVar5 = (undefined8 *)*param_2;
    *(undefined4 *)(puVar5 + 3) = local_58;
    puVar5[2] = CONCAT44(uStack_5c,local_60);
    puVar5[1] = CONCAT44(uStack_64,uStack_68);
    *puVar5 = local_70;
    lVar6 = *param_1;
    uStack_a8 = *(undefined8 *)(lVar6 + 0x48);
    local_b0 = *(undefined8 *)(lVar6 + 0x40);
    uStack_98 = *(undefined8 *)(lVar6 + 0x58);
    uStack_a0 = *(undefined8 *)(lVar6 + 0x50);
    uStack_88 = *(undefined8 *)(lVar6 + 0x68);
    local_90 = *(undefined8 *)(lVar6 + 0x60);
    uStack_78 = *(undefined8 *)(lVar6 + 0x78);
    uStack_80 = *(undefined8 *)(lVar6 + 0x70);
    uVar4 = UnityEngine_XR_Hands_XRHandJoint__TryGetPose(&local_b0,&local_d0);
    if ((uVar4 & 1) != 0) {
      UnityEngine_XR_Hands_XRHandSkeletonDriver_CalculateLocalTransformPose_00000097_BurstDirectCall__Invoke
                (&local_70,&local_d0,&local_f0);
      lVar6 = *param_2;
      *(undefined4 *)(lVar6 + 0x34) = local_d8;
      *(undefined8 *)(lVar6 + 0x2c) = local_e0;
      *(undefined8 *)(lVar6 + 0x24) = uStack_e8;
      *(undefined8 *)(lVar6 + 0x1c) = local_f0;
    }
    iVar7 = 0;
    do {
      uStack_108 = uStack_68;
      local_110 = local_70;
      uStack_fc = uStack_5c;
      local_f8 = local_58;
      uStack_104 = uStack_64;
      local_100 = local_60;
      uVar2 = UnityEngine_XR_Hands_XRHandJointIDUtility__GetBackJointID(iVar7);
      uVar3 = UnityEngine_XR_Hands_XRHandJointIDUtility__GetFrontJointID(iVar7);
      if (uVar3 <= uVar2) {
        uVar1 = uVar3;
        if ((int)uVar3 <= (int)uVar2) {
          uVar1 = uVar2;
        }
        lVar8 = (ulong)uVar3 * 0x1c + -0x1c;
        lVar9 = (ulong)uVar3 * 0x40 + -0x40;
        lVar6 = ((ulong)uVar1 - (ulong)uVar3) + 1;
        do {
          puVar5 = (undefined8 *)(*param_1 + lVar9);
          uStack_a8 = puVar5[1];
          local_b0 = *puVar5;
          uStack_98 = puVar5[3];
          uStack_a0 = puVar5[2];
          uStack_88 = puVar5[5];
          local_90 = puVar5[4];
          uStack_78 = puVar5[7];
          uStack_80 = puVar5[6];
          uVar4 = UnityEngine_XR_Hands_XRHandJoint__TryGetPose(&local_b0,&local_130);
          if ((uVar4 & 1) != 0) {
            UnityEngine_XR_Hands_XRHandSkeletonDriver_CalculateLocalTransformPose_00000097_BurstDirectCall__Invoke
                      (&local_110,&local_130,&local_150);
            uStack_108 = uStack_128;
            local_110 = local_130;
            puVar5 = (undefined8 *)(*param_2 + lVar8);
            uStack_fc = uStack_11c;
            local_f8 = local_118;
            uStack_104 = uStack_124;
            local_100 = local_120;
            *(undefined4 *)(puVar5 + 3) = local_138;
            puVar5[2] = local_140;
            puVar5[1] = uStack_148;
            *puVar5 = local_150;
          }
          lVar6 = lVar6 + -1;
          lVar9 = lVar9 + 0x40;
          lVar8 = lVar8 + 0x1c;
        } while (lVar6 != 0);
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 != 5);
  }
  return;
}


