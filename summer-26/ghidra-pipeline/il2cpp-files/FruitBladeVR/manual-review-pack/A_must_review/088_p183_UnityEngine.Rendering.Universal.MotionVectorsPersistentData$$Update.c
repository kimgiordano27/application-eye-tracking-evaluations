/*
FUNCTION_NAME: UnityEngine.Rendering.Universal.MotionVectorsPersistentData$$Update
ENTRY_POINT: 034accb8
PROGRAM: FruitBladeVR-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;data_collection;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;strong_file_logging_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void UnityEngine_Rendering_Universal_MotionVectorsPersistentData__Update
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4,
               long param_5)

{
  ulong uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  float fVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  float fVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined4 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  uStack_128 = 0;
  local_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  local_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  local_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_c8 = 0;
  local_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  if (param_5 == 0) goto LAB_034ad298;
  uVar3 = UnityEngine_Rendering_Universal_MotionVectorsPersistentData__GetXRMultiPassId
                    (*(undefined8 *)(param_5 + 0x1a0));
  if (*(long *)(param_5 + 0x1a0) == 0) goto LAB_034ad298;
  uVar6 = UnityEngine_Experimental_Rendering_XRPass__get_enabled(*(long *)(param_5 + 0x1a0),0);
  if ((uVar6 & 1) == 0) {
LAB_034acd38:
    iVar4 = UnityEngine_Time__get_frameCount(0);
LAB_034acd44:
    lVar7 = *(long *)(param_4 + 0x50);
    if (lVar7 == 0) goto LAB_034ad298;
    if (*(int *)(lVar7 + 0x18) == 0) goto LAB_034ad29c;
    iVar2 = *(int *)(lVar7 + 0x20);
    uVar12 = UnityEngine_Time__get_deltaTime(0);
    if ((*(long *)(param_5 + 0xd8) == 0) ||
       (lVar7 = UnityEngine_Component__get_transform(*(long *)(param_5 + 0xd8),0), lVar7 == 0))
    goto LAB_034ad298;
    uVar13 = UnityEngine_Transform__get_position(lVar7,0);
    if (iVar2 == -1) {
      *(undefined4 *)(param_4 + 0x60) = uVar12;
      *(undefined4 *)(param_4 + 100) = uVar12;
      *(undefined4 *)(param_4 + 0x80) = uVar13;
      *(undefined4 *)(param_4 + 0x84) = param_2;
      *(undefined4 *)(param_4 + 0x88) = param_3;
      *(undefined4 *)(param_4 + 0x78) = param_2;
      *(undefined4 *)(param_4 + 0x7c) = param_3;
      *(undefined4 *)(param_4 + 0x68) = uVar13;
      *(undefined4 *)(param_4 + 0x6c) = param_2;
      *(undefined4 *)(param_4 + 0x70) = param_3;
      *(undefined4 *)(param_4 + 0x74) = uVar13;
      uVar21 = uVar12;
    }
    else {
      uVar21 = *(undefined4 *)(param_4 + 0x60);
    }
    *(undefined4 *)(param_4 + 0x60) = uVar12;
    *(undefined4 *)(param_4 + 100) = uVar21;
    *(undefined8 *)(param_4 + 0x80) = *(undefined8 *)(param_4 + 0x74);
    *(undefined4 *)(param_4 + 0x88) = *(undefined4 *)(param_4 + 0x7c);
    *(undefined8 *)(param_4 + 0x74) = *(undefined8 *)(param_4 + 0x68);
    *(undefined4 *)(param_4 + 0x7c) = *(undefined4 *)(param_4 + 0x70);
    *(undefined4 *)(param_4 + 0x68) = uVar13;
    *(undefined4 *)(param_4 + 0x6c) = param_2;
    *(undefined4 *)(param_4 + 0x70) = param_3;
  }
  else {
    if (*(long *)(param_5 + 0x1a0) == 0) goto LAB_034ad298;
    uVar6 = UnityEngine_Experimental_Rendering_XRPass__get_singlePassEnabled
                      (*(long *)(param_5 + 0x1a0),0);
    if ((uVar6 & 1) != 0) goto LAB_034acd38;
    iVar4 = UnityEngine_Time__get_frameCount(0);
    if (uVar3 == 0) goto LAB_034acd44;
  }
  lVar7 = *(long *)(param_4 + 0x58);
  if (lVar7 == 0) goto LAB_034ad298;
  if (*(uint *)(lVar7 + 0x18) <= uVar3) goto LAB_034ad29c;
  lVar8 = *(long *)(param_4 + 0x50);
  if (lVar8 == 0) goto LAB_034ad298;
  if (*(uint *)(lVar8 + 0x18) <= uVar3) goto LAB_034ad29c;
  lVar11 = (long)(int)uVar3;
  fVar17 = *(float *)(param_5 + 0x168);
  fVar14 = *(float *)(lVar7 + lVar11 * 4 + 0x20);
  iVar2 = *(int *)(lVar8 + lVar11 * 4 + 0x20);
  if ((fVar14 == fVar17) && (iVar2 == iVar4)) {
    return;
  }
  if (*(long *)(param_5 + 0x1a0) == 0) goto LAB_034ad298;
  uVar6 = UnityEngine_Experimental_Rendering_XRPass__get_enabled(*(long *)(param_5 + 0x1a0),0);
  if ((uVar6 & 1) == 0) {
    uVar5 = 1;
LAB_034ace80:
    uVar6 = 0;
    lVar7 = (ulong)uVar3 << 0x20;
    do {
      uVar1 = uVar3 + uVar6;
      UnityEngine_Rendering_Universal_UniversalCameraData__GetProjectionMatrixNoJitter
                (&local_170,param_5,uVar6 & 0xffffffff);
      uStack_1e8 = uStack_168;
      local_1f0 = local_170;
      uStack_1d8 = uStack_158;
      uStack_1e0 = uStack_160;
      uStack_1c8 = uStack_148;
      local_1d0 = local_150;
      uStack_1b8 = uStack_138;
      uStack_1c0 = uStack_140;
      UnityEngine_GL__GetGPUProjectionMatrix(&local_1b0,&local_1f0,1,0);
      uStack_a8 = uStack_1a8;
      local_b0 = local_1b0;
      uStack_98 = uStack_198;
      uStack_a0 = uStack_1a0;
      uStack_88 = uStack_188;
      local_90 = local_190;
      uStack_78 = uStack_178;
      uStack_80 = uStack_180;
      UnityEngine_Rendering_Universal_UniversalCameraData__GetViewMatrix
                (&local_f0,param_5,uVar6 & 0xffffffff);
      uStack_228 = uStack_a8;
      local_230 = local_b0;
      uStack_218 = uStack_98;
      uStack_220 = uStack_a0;
      uStack_208 = uStack_88;
      local_210 = local_90;
      uStack_1f8 = uStack_78;
      uStack_200 = uStack_80;
      uStack_268 = uStack_e8;
      local_270 = local_f0;
      uStack_258 = uStack_d8;
      uStack_260 = uStack_e0;
      uStack_248 = uStack_c8;
      local_250 = local_d0;
      uStack_238 = uStack_b8;
      uStack_240 = uStack_c0;
      UnityEngine_Matrix4x4__op_Multiply(&local_130,&local_230,&local_270,0);
      lVar8 = lVar7 >> 0x20;
      if (fVar14 != fVar17 || iVar2 == -1) {
        lVar9 = *(long *)(param_4 + 0x40);
        if (lVar9 == 0) goto LAB_034ad298;
        if (*(uint *)(lVar9 + 0x18) <= uVar1) goto LAB_034ad29c;
        lVar9 = lVar9 + lVar8 * 0x40;
        *(undefined8 *)(lVar9 + 0x28) = uStack_a8;
        *(undefined8 *)(lVar9 + 0x20) = local_b0;
        *(undefined8 *)(lVar9 + 0x38) = uStack_98;
        *(undefined8 *)(lVar9 + 0x30) = uStack_a0;
        *(undefined8 *)(lVar9 + 0x48) = uStack_88;
        *(undefined8 *)(lVar9 + 0x40) = local_90;
        *(undefined8 *)(lVar9 + 0x58) = uStack_78;
        *(undefined8 *)(lVar9 + 0x50) = uStack_80;
        lVar9 = *(long *)(param_4 + 0x28);
        if (lVar9 == 0) goto LAB_034ad298;
        if (*(uint *)(lVar9 + 0x18) <= uVar1) goto LAB_034ad29c;
        lVar9 = lVar9 + lVar8 * 0x40;
        *(undefined8 *)(lVar9 + 0x28) = uStack_a8;
        *(undefined8 *)(lVar9 + 0x20) = local_b0;
        *(undefined8 *)(lVar9 + 0x38) = uStack_98;
        *(undefined8 *)(lVar9 + 0x30) = uStack_a0;
        *(undefined8 *)(lVar9 + 0x48) = uStack_88;
        *(undefined8 *)(lVar9 + 0x40) = local_90;
        *(undefined8 *)(lVar9 + 0x58) = uStack_78;
        *(undefined8 *)(lVar9 + 0x50) = uStack_80;
        lVar9 = *(long *)(param_4 + 0x10);
        if (lVar9 == 0) goto LAB_034ad298;
        if (*(uint *)(lVar9 + 0x18) <= uVar1) goto LAB_034ad29c;
        lVar9 = lVar9 + lVar8 * 0x40;
        *(undefined8 *)(lVar9 + 0x28) = uStack_a8;
        *(undefined8 *)(lVar9 + 0x20) = local_b0;
        *(undefined8 *)(lVar9 + 0x38) = uStack_98;
        *(undefined8 *)(lVar9 + 0x30) = uStack_a0;
        *(undefined8 *)(lVar9 + 0x48) = uStack_88;
        *(undefined8 *)(lVar9 + 0x40) = local_90;
        *(undefined8 *)(lVar9 + 0x58) = uStack_78;
        *(undefined8 *)(lVar9 + 0x50) = uStack_80;
        lVar9 = *(long *)(param_4 + 0x48);
        if (lVar9 == 0) goto LAB_034ad298;
        if (*(uint *)(lVar9 + 0x18) <= uVar1) goto LAB_034ad29c;
        lVar9 = lVar9 + lVar8 * 0x40;
        *(undefined8 *)(lVar9 + 0x28) = uStack_e8;
        *(undefined8 *)(lVar9 + 0x20) = local_f0;
        *(undefined8 *)(lVar9 + 0x38) = uStack_d8;
        *(undefined8 *)(lVar9 + 0x30) = uStack_e0;
        *(undefined8 *)(lVar9 + 0x48) = uStack_c8;
        *(undefined8 *)(lVar9 + 0x40) = local_d0;
        *(undefined8 *)(lVar9 + 0x58) = uStack_b8;
        *(undefined8 *)(lVar9 + 0x50) = uStack_c0;
        lVar9 = *(long *)(param_4 + 0x30);
        if (lVar9 == 0) goto LAB_034ad298;
        if (*(uint *)(lVar9 + 0x18) <= uVar1) goto LAB_034ad29c;
        lVar9 = lVar9 + lVar8 * 0x40;
        *(undefined8 *)(lVar9 + 0x28) = uStack_e8;
        *(undefined8 *)(lVar9 + 0x20) = local_f0;
        *(undefined8 *)(lVar9 + 0x38) = uStack_d8;
        *(undefined8 *)(lVar9 + 0x30) = uStack_e0;
        *(undefined8 *)(lVar9 + 0x48) = uStack_c8;
        *(undefined8 *)(lVar9 + 0x40) = local_d0;
        *(undefined8 *)(lVar9 + 0x58) = uStack_b8;
        *(undefined8 *)(lVar9 + 0x50) = uStack_c0;
        lVar9 = *(long *)(param_4 + 0x18);
        if (lVar9 == 0) goto LAB_034ad298;
        if (*(uint *)(lVar9 + 0x18) <= uVar1) goto LAB_034ad29c;
        lVar9 = lVar9 + lVar8 * 0x40;
        *(undefined8 *)(lVar9 + 0x28) = uStack_e8;
        *(undefined8 *)(lVar9 + 0x20) = local_f0;
        *(undefined8 *)(lVar9 + 0x38) = uStack_d8;
        *(undefined8 *)(lVar9 + 0x30) = uStack_e0;
        *(undefined8 *)(lVar9 + 0x48) = uStack_c8;
        *(undefined8 *)(lVar9 + 0x40) = local_d0;
        *(undefined8 *)(lVar9 + 0x58) = uStack_b8;
        *(undefined8 *)(lVar9 + 0x50) = uStack_c0;
        lVar9 = *(long *)(param_4 + 0x20);
        if (lVar9 == 0) goto LAB_034ad298;
        if (*(uint *)(lVar9 + 0x18) <= uVar1) goto LAB_034ad29c;
        lVar9 = lVar9 + lVar8 * 0x40;
        *(undefined8 *)(lVar9 + 0x48) = uStack_108;
        *(undefined8 *)(lVar9 + 0x40) = local_110;
        *(undefined8 *)(lVar9 + 0x58) = uStack_f8;
        *(undefined8 *)(lVar9 + 0x50) = uStack_100;
        *(undefined8 *)(lVar9 + 0x28) = uStack_128;
        *(undefined8 *)(lVar9 + 0x20) = local_130;
        *(undefined8 *)(lVar9 + 0x38) = uStack_118;
        *(undefined8 *)(lVar9 + 0x30) = uStack_120;
        lVar9 = *(long *)(param_4 + 0x38);
        if (lVar9 == 0) goto LAB_034ad298;
        if (*(uint *)(lVar9 + 0x18) <= uVar1) goto LAB_034ad29c;
        lVar9 = lVar9 + lVar8 * 0x40;
        *(undefined8 *)(lVar9 + 0x48) = uStack_108;
        *(undefined8 *)(lVar9 + 0x40) = local_110;
        *(undefined8 *)(lVar9 + 0x58) = uStack_f8;
        *(undefined8 *)(lVar9 + 0x50) = uStack_100;
        *(undefined8 *)(lVar9 + 0x28) = uStack_128;
        *(undefined8 *)(lVar9 + 0x20) = local_130;
        *(undefined8 *)(lVar9 + 0x38) = uStack_118;
        *(undefined8 *)(lVar9 + 0x30) = uStack_120;
      }
      lVar9 = *(long *)(param_4 + 0x28);
      if (lVar9 == 0) goto LAB_034ad298;
      if (*(uint *)(lVar9 + 0x18) <= uVar1) goto LAB_034ad29c;
      lVar10 = *(long *)(param_4 + 0x40);
      if (lVar10 == 0) goto LAB_034ad298;
      if (*(uint *)(lVar10 + 0x18) <= uVar1) goto LAB_034ad29c;
      lVar9 = lVar9 + lVar8 * 0x40;
      lVar10 = lVar10 + lVar8 * 0x40;
      uVar18 = *(undefined8 *)(lVar9 + 0x40);
      uVar16 = *(undefined8 *)(lVar9 + 0x58);
      uVar15 = *(undefined8 *)(lVar9 + 0x50);
      uVar20 = *(undefined8 *)(lVar9 + 0x28);
      uVar19 = *(undefined8 *)(lVar9 + 0x20);
      uVar23 = *(undefined8 *)(lVar9 + 0x38);
      uVar22 = *(undefined8 *)(lVar9 + 0x30);
      *(undefined8 *)(lVar10 + 0x48) = *(undefined8 *)(lVar9 + 0x48);
      *(undefined8 *)(lVar10 + 0x40) = uVar18;
      *(undefined8 *)(lVar10 + 0x58) = uVar16;
      *(undefined8 *)(lVar10 + 0x50) = uVar15;
      *(undefined8 *)(lVar10 + 0x28) = uVar20;
      *(undefined8 *)(lVar10 + 0x20) = uVar19;
      *(undefined8 *)(lVar10 + 0x38) = uVar23;
      *(undefined8 *)(lVar10 + 0x30) = uVar22;
      lVar9 = *(long *)(param_4 + 0x10);
      if (lVar9 == 0) goto LAB_034ad298;
      if (*(uint *)(lVar9 + 0x18) <= uVar1) goto LAB_034ad29c;
      lVar10 = *(long *)(param_4 + 0x28);
      if (lVar10 == 0) goto LAB_034ad298;
      if (*(uint *)(lVar10 + 0x18) <= uVar1) goto LAB_034ad29c;
      lVar9 = lVar9 + lVar8 * 0x40;
      lVar10 = lVar10 + lVar8 * 0x40;
      uVar18 = *(undefined8 *)(lVar9 + 0x40);
      uVar16 = *(undefined8 *)(lVar9 + 0x58);
      uVar15 = *(undefined8 *)(lVar9 + 0x50);
      uVar20 = *(undefined8 *)(lVar9 + 0x28);
      uVar19 = *(undefined8 *)(lVar9 + 0x20);
      uVar23 = *(undefined8 *)(lVar9 + 0x38);
      uVar22 = *(undefined8 *)(lVar9 + 0x30);
      *(undefined8 *)(lVar10 + 0x48) = *(undefined8 *)(lVar9 + 0x48);
      *(undefined8 *)(lVar10 + 0x40) = uVar18;
      *(undefined8 *)(lVar10 + 0x58) = uVar16;
      *(undefined8 *)(lVar10 + 0x50) = uVar15;
      *(undefined8 *)(lVar10 + 0x28) = uVar20;
      *(undefined8 *)(lVar10 + 0x20) = uVar19;
      *(undefined8 *)(lVar10 + 0x38) = uVar23;
      *(undefined8 *)(lVar10 + 0x30) = uVar22;
      lVar9 = *(long *)(param_4 + 0x10);
      if (lVar9 == 0) goto LAB_034ad298;
      if (*(uint *)(lVar9 + 0x18) <= uVar1) goto LAB_034ad29c;
      lVar9 = lVar9 + lVar8 * 0x40;
      *(undefined8 *)(lVar9 + 0x28) = uStack_a8;
      *(undefined8 *)(lVar9 + 0x20) = local_b0;
      *(undefined8 *)(lVar9 + 0x38) = uStack_98;
      *(undefined8 *)(lVar9 + 0x30) = uStack_a0;
      *(undefined8 *)(lVar9 + 0x48) = uStack_88;
      *(undefined8 *)(lVar9 + 0x40) = local_90;
      *(undefined8 *)(lVar9 + 0x58) = uStack_78;
      *(undefined8 *)(lVar9 + 0x50) = uStack_80;
      lVar9 = *(long *)(param_4 + 0x30);
      if (lVar9 == 0) goto LAB_034ad298;
      if (*(uint *)(lVar9 + 0x18) <= uVar1) goto LAB_034ad29c;
      lVar10 = *(long *)(param_4 + 0x48);
      if (lVar10 == 0) goto LAB_034ad298;
      if (*(uint *)(lVar10 + 0x18) <= uVar1) goto LAB_034ad29c;
      lVar9 = lVar9 + lVar8 * 0x40;
      lVar10 = lVar10 + lVar8 * 0x40;
      uVar18 = *(undefined8 *)(lVar9 + 0x40);
      uVar16 = *(undefined8 *)(lVar9 + 0x58);
      uVar15 = *(undefined8 *)(lVar9 + 0x50);
      uVar20 = *(undefined8 *)(lVar9 + 0x28);
      uVar19 = *(undefined8 *)(lVar9 + 0x20);
      uVar23 = *(undefined8 *)(lVar9 + 0x38);
      uVar22 = *(undefined8 *)(lVar9 + 0x30);
      *(undefined8 *)(lVar10 + 0x48) = *(undefined8 *)(lVar9 + 0x48);
      *(undefined8 *)(lVar10 + 0x40) = uVar18;
      *(undefined8 *)(lVar10 + 0x58) = uVar16;
      *(undefined8 *)(lVar10 + 0x50) = uVar15;
      *(undefined8 *)(lVar10 + 0x28) = uVar20;
      *(undefined8 *)(lVar10 + 0x20) = uVar19;
      *(undefined8 *)(lVar10 + 0x38) = uVar23;
      *(undefined8 *)(lVar10 + 0x30) = uVar22;
      lVar9 = *(long *)(param_4 + 0x18);
      if (lVar9 == 0) goto LAB_034ad298;
      if (*(uint *)(lVar9 + 0x18) <= uVar1) goto LAB_034ad29c;
      lVar10 = *(long *)(param_4 + 0x30);
      if (lVar10 == 0) goto LAB_034ad298;
      if (*(uint *)(lVar10 + 0x18) <= uVar1) goto LAB_034ad29c;
      lVar9 = lVar9 + lVar8 * 0x40;
      lVar10 = lVar10 + lVar8 * 0x40;
      uVar18 = *(undefined8 *)(lVar9 + 0x40);
      uVar16 = *(undefined8 *)(lVar9 + 0x58);
      uVar15 = *(undefined8 *)(lVar9 + 0x50);
      uVar20 = *(undefined8 *)(lVar9 + 0x28);
      uVar19 = *(undefined8 *)(lVar9 + 0x20);
      uVar23 = *(undefined8 *)(lVar9 + 0x38);
      uVar22 = *(undefined8 *)(lVar9 + 0x30);
      *(undefined8 *)(lVar10 + 0x48) = *(undefined8 *)(lVar9 + 0x48);
      *(undefined8 *)(lVar10 + 0x40) = uVar18;
      *(undefined8 *)(lVar10 + 0x58) = uVar16;
      *(undefined8 *)(lVar10 + 0x50) = uVar15;
      *(undefined8 *)(lVar10 + 0x28) = uVar20;
      *(undefined8 *)(lVar10 + 0x20) = uVar19;
      *(undefined8 *)(lVar10 + 0x38) = uVar23;
      *(undefined8 *)(lVar10 + 0x30) = uVar22;
      lVar9 = *(long *)(param_4 + 0x18);
      if (lVar9 == 0) goto LAB_034ad298;
      if (*(uint *)(lVar9 + 0x18) <= uVar1) goto LAB_034ad29c;
      lVar9 = lVar9 + lVar8 * 0x40;
      *(undefined8 *)(lVar9 + 0x28) = uStack_e8;
      *(undefined8 *)(lVar9 + 0x20) = local_f0;
      *(undefined8 *)(lVar9 + 0x38) = uStack_d8;
      *(undefined8 *)(lVar9 + 0x30) = uStack_e0;
      *(undefined8 *)(lVar9 + 0x48) = uStack_c8;
      *(undefined8 *)(lVar9 + 0x40) = local_d0;
      *(undefined8 *)(lVar9 + 0x58) = uStack_b8;
      *(undefined8 *)(lVar9 + 0x50) = uStack_c0;
      lVar9 = *(long *)(param_4 + 0x20);
      if (lVar9 == 0) goto LAB_034ad298;
      if (*(uint *)(lVar9 + 0x18) <= uVar1) goto LAB_034ad29c;
      lVar10 = *(long *)(param_4 + 0x38);
      if (lVar10 == 0) goto LAB_034ad298;
      if (*(uint *)(lVar10 + 0x18) <= uVar1) goto LAB_034ad29c;
      lVar9 = lVar9 + lVar8 * 0x40;
      lVar10 = lVar10 + lVar8 * 0x40;
      uVar18 = *(undefined8 *)(lVar9 + 0x40);
      uVar16 = *(undefined8 *)(lVar9 + 0x58);
      uVar15 = *(undefined8 *)(lVar9 + 0x50);
      uVar20 = *(undefined8 *)(lVar9 + 0x28);
      uVar19 = *(undefined8 *)(lVar9 + 0x20);
      uVar23 = *(undefined8 *)(lVar9 + 0x38);
      uVar22 = *(undefined8 *)(lVar9 + 0x30);
      *(undefined8 *)(lVar10 + 0x48) = *(undefined8 *)(lVar9 + 0x48);
      *(undefined8 *)(lVar10 + 0x40) = uVar18;
      *(undefined8 *)(lVar10 + 0x58) = uVar16;
      *(undefined8 *)(lVar10 + 0x50) = uVar15;
      *(undefined8 *)(lVar10 + 0x28) = uVar20;
      *(undefined8 *)(lVar10 + 0x20) = uVar19;
      *(undefined8 *)(lVar10 + 0x38) = uVar23;
      *(undefined8 *)(lVar10 + 0x30) = uVar22;
      lVar9 = *(long *)(param_4 + 0x20);
      if (lVar9 == 0) goto LAB_034ad298;
      if (*(uint *)(lVar9 + 0x18) <= uVar1) goto LAB_034ad29c;
      lVar9 = lVar9 + lVar8 * 0x40;
      uVar6 = uVar6 + 1;
      lVar7 = lVar7 + 0x100000000;
      *(undefined8 *)(lVar9 + 0x48) = uStack_108;
      *(undefined8 *)(lVar9 + 0x40) = local_110;
      *(undefined8 *)(lVar9 + 0x58) = uStack_f8;
      *(undefined8 *)(lVar9 + 0x50) = uStack_100;
      *(undefined8 *)(lVar9 + 0x28) = uStack_128;
      *(undefined8 *)(lVar9 + 0x20) = local_130;
      *(undefined8 *)(lVar9 + 0x38) = uStack_118;
      *(undefined8 *)(lVar9 + 0x30) = uStack_120;
    } while (uVar5 != uVar6);
  }
  else {
    if (*(long *)(param_5 + 0x1a0) == 0) goto LAB_034ad298;
    uVar5 = UnityEngine_Experimental_Rendering_XRPass__get_viewCount(*(long *)(param_5 + 0x1a0),0);
    if (0 < (int)uVar5) goto LAB_034ace80;
  }
  lVar7 = *(long *)(param_4 + 0x50);
  if (lVar7 == 0) {
LAB_034ad298:
                    /* WARNING: Subroutine does not return */
    FUN_01c5cbd4();
  }
  if (uVar3 < *(uint *)(lVar7 + 0x18)) {
    lVar8 = *(long *)(param_4 + 0x58);
    *(int *)(lVar7 + lVar11 * 4 + 0x20) = iVar4;
    if (lVar8 == 0) goto LAB_034ad298;
    if (uVar3 < *(uint *)(lVar8 + 0x18)) {
      *(undefined4 *)(lVar8 + lVar11 * 4 + 0x20) = *(undefined4 *)(param_5 + 0x168);
      return;
    }
  }
LAB_034ad29c:
                    /* WARNING: Subroutine does not return */
  FUN_01c5cbdc();
}


