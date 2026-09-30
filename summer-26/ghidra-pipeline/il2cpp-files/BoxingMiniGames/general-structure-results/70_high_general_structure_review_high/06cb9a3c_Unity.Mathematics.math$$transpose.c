/*
FUNCTION_NAME: Unity.Mathematics.math$$transpose
ENTRY_POINT: 06cb9a3c
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;telemetry;structure_combo
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_1;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Unity_Mathematics_math__transpose(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  long in_x9;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  int in_w10;
  long in_x12;
  ulong unaff_x19;
  ulong uVar19;
  long unaff_x21;
  int unaff_w22;
  uint unaff_w23;
  ulong uVar20;
  ulong uVar21;
  uint uVar22;
  long unaff_x24;
  undefined8 unaff_x25;
  long unaff_x26;
  long *unaff_x27;
  long unaff_x28;
  long unaff_x29;
  undefined8 uVar23;
  long *in_stack_00000018;
  long in_stack_00000030;
  ulong in_stack_00000040;
  long in_stack_00000048;
  long in_stack_00000050;
  undefined8 in_stack_00000180;
  undefined8 in_stack_000001f0;
  long in_stack_00000230;
  long in_stack_000002e0;
  long in_stack_00000320;
  
  while (*(int *)(in_x12 + 0x1c) = in_w10, param_1 != 0) {
    uVar22 = *(uint *)(in_x12 + 0x18);
    if (uVar22 < *(uint *)(param_1 + 0x18)) {
      *(uint *)(in_x12 + 0x18) = uVar22 + 1;
      puVar4 = (undefined8 *)(param_1 + (long)(int)uVar22 * 8 + 0x20);
      *puVar4 = unaff_x25;
      thunk_FUN_036b7ad0(puVar4,unaff_x25);
    }
    else {
      FUN_0459f03c(in_x12,unaff_x25,
                   *(undefined8 *)(*(long *)(*(long *)(in_x9 + 0x20) + 0xc0) + 0x70));
    }
    uVar5 = thunk_FUN_0367fe20(*(undefined8 *)UnityEngine_Playables_PlayableBinding___TypeInfo);
    FUN_04518970(uVar5,*(undefined8 *)System_Reflection_ParameterInfo___TypeInfo);
    if (unaff_x21 == 0) break;
    lVar11 = *(long *)(unaff_x21 + 0x10);
    lVar14 = *(long *)System_Runtime_Serialization_ObjectHolder___TypeInfo;
    *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
    if (lVar11 == 0) break;
    uVar22 = *(uint *)(unaff_x21 + 0x18);
    if (uVar22 < *(uint *)(lVar11 + 0x18)) {
      *(uint *)(unaff_x21 + 0x18) = uVar22 + 1;
      puVar4 = (undefined8 *)(lVar11 + (long)(int)uVar22 * 8 + 0x20);
      *puVar4 = uVar5;
      thunk_FUN_036b7ad0(puVar4,uVar5);
    }
    else {
      FUN_0459f03c(unaff_x21,uVar5,
                   *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
    }
    lVar11 = FUN_06cbd6c8(&stack0x000002e0,unaff_x24);
    while( true ) {
      lVar14 = FUN_0459ed6c(in_stack_00000050,unaff_w23,
                            *(undefined8 *)Unity_InferenceEngine_PartialTensor___TypeInfo);
      if (lVar14 == 0) goto LAB_06cba468;
      lVar12 = *(long *)(lVar14 + 0x10);
      lVar15 = *(long *)Oculus_Interaction_Input_OneEuroFilter___TypeInfo;
      *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
      if (lVar12 == 0) goto LAB_06cba468;
      uVar22 = *(uint *)(lVar14 + 0x18);
      if (uVar22 < *(uint *)(lVar12 + 0x18)) {
        *(uint *)(lVar14 + 0x18) = uVar22 + 1;
        plVar13 = (long *)(lVar12 + (long)(int)uVar22 * 8 + 0x20);
        *plVar13 = lVar11;
        thunk_FUN_036b7ad0(plVar13,lVar11);
      }
      else {
        FUN_0459f03c(lVar14,lVar11,
                     *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
      }
      if (in_stack_00000320 != 0) {
        if ((in_stack_00000030 == 0) ||
           (lVar14 = FUN_0459ed6c(in_stack_00000030,unaff_w23,
                                  *(undefined8 *)UnityEngine_Plane___TypeInfo),
           in_stack_00000320 == 0)) goto LAB_06cba468;
        uVar19 = 0;
        lVar12 = 0x20;
        while ((long)uVar19 < (long)(int)*(uint *)(in_stack_00000320 + 0x18)) {
          if (*(uint *)(in_stack_00000320 + 0x18) <= uVar19) goto LAB_06cba46c;
          puVar4 = (undefined8 *)(in_stack_00000320 + lVar12);
          uVar5 = *puVar4;
          uVar9 = puVar4[3];
          uVar7 = puVar4[2];
          *(undefined8 *)(unaff_x28 + 0x1f8) = puVar4[1];
          *(undefined8 *)(unaff_x28 + 0x1f0) = uVar5;
          *(undefined8 *)(unaff_x28 + 0x208) = uVar9;
          *(undefined8 *)(unaff_x28 + 0x200) = uVar7;
          uVar5 = puVar4[4];
          uVar9 = puVar4[7];
          uVar7 = puVar4[6];
          *(undefined8 *)(unaff_x28 + 0x218) = puVar4[5];
          *(undefined8 *)(unaff_x28 + 0x210) = uVar5;
          *(undefined8 *)(unaff_x28 + 0x228) = uVar9;
          *(undefined8 *)(unaff_x28 + 0x220) = uVar7;
          FUN_06cbd490(&stack0x00000058,&stack0x000002a0);
          memcpy(&stack0x00000240,&stack0x00000058,0x58);
          if ((lVar11 == 0) || (thunk_FUN_036b7ad0(unaff_x29 + 0x30), lVar14 == 0))
          goto LAB_06cba468;
          memcpy(&stack0x00000330,&stack0x00000240,0x58);
          lVar15 = *(long *)(lVar14 + 0x10);
          lVar16 = *unaff_x27;
          *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
          if (lVar15 == 0) goto LAB_06cba468;
          uVar22 = *(uint *)(lVar14 + 0x18);
          if (uVar22 < *(uint *)(lVar15 + 0x18)) {
            lVar15 = lVar15 + (long)(int)uVar22 * (long)unaff_w22;
            *(uint *)(lVar14 + 0x18) = uVar22 + 1;
            memcpy((void *)(lVar15 + 0x20),&stack0x00000330,0x58);
            thunk_FUN_036b7ad0(lVar15 + 0x20,0);
          }
          else {
            uVar5 = *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70);
            memcpy(&stack0x00000388,&stack0x00000330,0x58);
            FUN_04519298(lVar14,&stack0x00000388,uVar5);
          }
          lVar12 = lVar12 + 0x40;
          uVar19 = uVar19 + 1;
          if (in_stack_00000320 == 0) goto LAB_06cba468;
        }
      }
      puVar10 = object___TypeInfo;
      unaff_x19 = unaff_x19 + 1;
      if (unaff_x19 == in_stack_00000040) {
        if ((in_stack_00000018[1] == 0) ||
           (uVar19 = *(ulong *)(in_stack_00000018[1] + 0x18), (int)uVar19 < 1)) goto LAB_06cba324;
        uVar20 = 0;
        goto LAB_06cb9d24;
      }
      lVar11 = *in_stack_00000018;
      if (lVar11 == 0) goto LAB_06cba468;
      if (*(uint *)(lVar11 + 0x18) <= unaff_x19) goto LAB_06cba46c;
      memmove(&stack0x000002e0,(void *)(lVar11 + unaff_x19 * 0x48 + 0x20),0x48);
      uVar19 = FUN_05c97640(in_stack_000002e0,0);
      if ((uVar19 & 1) != 0) {
        uVar5 = thunk_FUN_0367fa58(*(undefined8 *)(PTR_DAT_079f4610 + 0x48),&stack0x00000388);
        puVar10 = Unity_IO_LowLevel_Unsafe_ProcessingState___TypeInfo;
        goto LAB_06cba540;
      }
      if (in_stack_000002e0 == 0) goto LAB_06cba468;
      iVar3 = FUN_05c9c974(in_stack_000002e0,0x2f,0);
      if (iVar3 == -1) {
        uVar5 = 0;
        unaff_x24 = in_stack_000002e0;
      }
      else {
        uVar5 = FUN_05c99e8c(in_stack_000002e0,0,iVar3,0);
        unaff_x24 = FUN_05c9c100(in_stack_000002e0,iVar3 + 1,0);
        uVar19 = FUN_05c97640(unaff_x24,0);
        if ((uVar19 & 1) != 0) {
          uVar5 = thunk_FUN_036aa1c8(System_ComponentModel_PropertyDescriptor___TypeInfo);
          uVar7 = thunk_FUN_036aa1c8(System_Reflection_PropertyInfo___TypeInfo);
          uVar5 = FUN_05c981c8(uVar5,in_stack_000002e0,uVar7,0);
          goto LAB_06cba4b0;
        }
      }
      if (unaff_x26 == 0) goto LAB_06cba468;
      if (*(int *)(unaff_x26 + 0x18) < 1) break;
      unaff_w23 = 0;
      while( true ) {
        lVar11 = FUN_0459ed6c(unaff_x26,unaff_w23,
                              *(undefined8 *)Meta_XR_PassthroughCameraAccess___TypeInfo);
        if (lVar11 == 0) goto LAB_06cba468;
        iVar3 = FUN_05c950ec(*(undefined8 *)(lVar11 + 0x10),uVar5,3,0);
        if (iVar3 == 0) break;
        unaff_w23 = unaff_w23 + 1;
        if (*(int *)(unaff_x26 + 0x18) <= (int)unaff_w23) goto LAB_06cb9960;
      }
      lVar11 = FUN_0459ed6c(unaff_x26,unaff_w23,
                            *(undefined8 *)Meta_XR_PassthroughCameraAccess___TypeInfo);
      if (lVar11 == 0) break;
      lVar11 = FUN_06cbd6c8(&stack0x000002e0,unaff_x24);
      if (in_stack_00000050 == 0) goto LAB_06cba468;
    }
LAB_06cb9960:
    lVar11 = thunk_FUN_0367fe20(*(undefined8 *)
                                 Oculus_Interaction_Input_Compatibility_OVR_HandSkeletonJoint___TypeInfo
                               );
    FUN_06cb50d4();
    *(undefined8 *)(lVar11 + 0x10) = uVar5;
    thunk_FUN_036b7ad0((undefined8 *)(lVar11 + 0x10),uVar5);
    lVar14 = *(long *)(unaff_x26 + 0x10);
    unaff_w23 = *(uint *)(unaff_x26 + 0x18);
    lVar12 = *(long *)UnityEngine_Object___TypeInfo;
    *(int *)(unaff_x26 + 0x1c) = *(int *)(unaff_x26 + 0x1c) + 1;
    if (lVar14 == 0) break;
    if (unaff_w23 < *(uint *)(lVar14 + 0x18)) {
      *(uint *)(in_stack_00000048 + 0x18) = unaff_w23 + 1;
      plVar13 = (long *)(lVar14 + (long)(int)unaff_w23 * 8 + 0x20);
      *plVar13 = lVar11;
      thunk_FUN_036b7ad0(plVar13,lVar11);
    }
    else {
      FUN_0459f03c(in_stack_00000048,lVar11,
                   *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
    }
    unaff_x25 = thunk_FUN_0367fe20(*(undefined8 *)UnityEngine_Pose___TypeInfo);
    FUN_0459e7d4(unaff_x25,*(undefined8 *)System_Linq_Expressions_ParameterExpression___TypeInfo);
    if (in_stack_00000050 == 0) break;
    in_w10 = *(int *)(in_stack_00000050 + 0x1c) + 1;
    in_x9 = *(long *)UnityEngine_XR_OpenXR_Features_OpenXRFeature___TypeInfo;
    in_x12 = in_stack_00000050;
    unaff_x21 = in_stack_00000030;
    unaff_x26 = in_stack_00000048;
    param_1 = *(long *)(in_stack_00000050 + 0x10);
  }
  goto LAB_06cba468;
LAB_06cb9d24:
  do {
    lVar11 = in_stack_00000018[1];
    if (lVar11 == 0) goto LAB_06cba468;
    if (*(uint *)(lVar11 + 0x18) <= uVar20) {
LAB_06cba46c:
                    /* WARNING: Subroutine does not return */
      FUN_03642c20();
    }
    lVar11 = lVar11 + uVar20 * 0x20;
    uVar5 = *(undefined8 *)(lVar11 + 0x20);
    uVar7 = *(undefined8 *)(lVar11 + 0x28);
    lVar14 = *(long *)(lVar11 + 0x30);
    lVar11 = *(long *)(lVar11 + 0x38);
    uVar6 = FUN_05c97640(uVar5,0);
    if ((uVar6 & 1) != 0) {
      uVar5 = thunk_FUN_0367fa58(*(undefined8 *)(PTR_DAT_079f4610 + 0x48),&stack0x00000388);
      puVar10 = Oculus_Interaction_ProgressCurve___TypeInfo;
LAB_06cba540:
      uVar7 = thunk_FUN_036aa1c8(puVar10);
      uVar5 = FUN_05c8e390(uVar7,uVar5,0);
LAB_06cba4b0:
      thunk_FUN_036aa1c8(PTR_DAT_079f7680);
      uVar7 = thunk_FUN_0367fe20();
      FUN_05e177c8(uVar7,uVar5,0);
      uVar5 = thunk_FUN_036aa1c8(Unity_IO_LowLevel_Unsafe_Priority___TypeInfo);
                    /* WARNING: Subroutine does not return */
      FUN_03642acc(uVar7,uVar5);
    }
    if (unaff_x26 == 0) goto LAB_06cba468;
    if (0 < *(int *)(unaff_x26 + 0x18)) {
      uVar22 = 0;
      do {
        lVar12 = FUN_0459ed6c(unaff_x26,uVar22,
                              *(undefined8 *)Meta_XR_PassthroughCameraAccess___TypeInfo);
        if (lVar12 == 0) goto LAB_06cba468;
        iVar3 = FUN_05c950ec(*(undefined8 *)(lVar12 + 0x10),uVar5,3,0);
        if (iVar3 == 0) {
          lVar12 = FUN_0459ed6c(unaff_x26,uVar22,
                                *(undefined8 *)Meta_XR_PassthroughCameraAccess___TypeInfo);
          if (lVar12 != 0) goto LAB_06cb9fb8;
          break;
        }
        uVar22 = uVar22 + 1;
      } while ((int)uVar22 < *(int *)(unaff_x26 + 0x18));
    }
    lVar12 = thunk_FUN_0367fe20(*(undefined8 *)
                                 Oculus_Interaction_Input_Compatibility_OVR_HandSkeletonJoint___TypeInfo
                               );
    FUN_06cb50d4();
    *(undefined8 *)(lVar12 + 0x10) = uVar5;
    thunk_FUN_036b7ad0();
    uVar6 = FUN_05c97640(uVar7,0);
    uVar9 = 0;
    if ((uVar6 & 1) == 0) {
      uVar9 = uVar7;
    }
    *(undefined8 *)(lVar12 + 0x18) = uVar9;
    thunk_FUN_036b7ad0((undefined8 *)(lVar12 + 0x18));
    lVar15 = *(long *)(unaff_x26 + 0x10);
    uVar22 = *(uint *)(unaff_x26 + 0x18);
    lVar16 = *(long *)UnityEngine_Object___TypeInfo;
    *(int *)(unaff_x26 + 0x1c) = *(int *)(unaff_x26 + 0x1c) + 1;
    if (lVar15 == 0) goto LAB_06cba468;
    if (uVar22 < *(uint *)(lVar15 + 0x18)) {
      *(uint *)(in_stack_00000048 + 0x18) = uVar22 + 1;
      plVar13 = (long *)(lVar15 + (long)(int)uVar22 * 8 + 0x20);
      *plVar13 = lVar12;
      thunk_FUN_036b7ad0(plVar13,lVar12);
    }
    else {
      FUN_0459f03c(in_stack_00000048,lVar12,
                   *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
    }
    uVar7 = thunk_FUN_0367fe20(*(undefined8 *)UnityEngine_Pose___TypeInfo);
    FUN_0459e7d4(uVar7,*(undefined8 *)System_Linq_Expressions_ParameterExpression___TypeInfo);
    if (in_stack_00000050 == 0) goto LAB_06cba468;
    lVar12 = *(long *)(in_stack_00000050 + 0x10);
    lVar15 = *(long *)UnityEngine_XR_OpenXR_Features_OpenXRFeature___TypeInfo;
    *(int *)(in_stack_00000050 + 0x1c) = *(int *)(in_stack_00000050 + 0x1c) + 1;
    if (lVar12 == 0) goto LAB_06cba468;
    uVar1 = *(uint *)(in_stack_00000050 + 0x18);
    if (uVar1 < *(uint *)(lVar12 + 0x18)) {
      *(uint *)(in_stack_00000050 + 0x18) = uVar1 + 1;
      puVar4 = (undefined8 *)(lVar12 + (long)(int)uVar1 * 8 + 0x20);
      *puVar4 = uVar7;
      thunk_FUN_036b7ad0(puVar4,uVar7);
    }
    else {
      FUN_0459f03c(in_stack_00000050,uVar7,
                   *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
    }
    uVar7 = thunk_FUN_0367fe20(*(undefined8 *)UnityEngine_Playables_PlayableBinding___TypeInfo);
    FUN_04518970(uVar7,*(undefined8 *)System_Reflection_ParameterInfo___TypeInfo);
    if (in_stack_00000030 == 0) goto LAB_06cba468;
    lVar12 = *(long *)(in_stack_00000030 + 0x10);
    lVar15 = *(long *)System_Runtime_Serialization_ObjectHolder___TypeInfo;
    *(int *)(in_stack_00000030 + 0x1c) = *(int *)(in_stack_00000030 + 0x1c) + 1;
    if (lVar12 == 0) goto LAB_06cba468;
    uVar1 = *(uint *)(in_stack_00000030 + 0x18);
    if (uVar1 < *(uint *)(lVar12 + 0x18)) {
      *(uint *)(in_stack_00000030 + 0x18) = uVar1 + 1;
      puVar4 = (undefined8 *)(lVar12 + (long)(int)uVar1 * 8 + 0x20);
      *puVar4 = uVar7;
      thunk_FUN_036b7ad0(puVar4,uVar7);
      unaff_x26 = in_stack_00000048;
    }
    else {
      FUN_0459f03c(in_stack_00000030,uVar7,
                   *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
      unaff_x26 = in_stack_00000048;
    }
LAB_06cb9fb8:
    if ((lVar14 != 0) && (uVar6 = *(ulong *)(lVar14 + 0x18), 0 < (int)uVar6)) {
      uVar21 = 0;
      do {
        if (*(uint *)(lVar14 + 0x18) <= uVar21) goto LAB_06cba46c;
        memmove(&stack0x000001f0,(void *)(lVar14 + uVar21 * 0x48 + 0x20),0x48);
        uVar8 = FUN_05c97640(in_stack_000001f0,0);
        if ((uVar8 & 1) != 0) {
          uVar7 = thunk_FUN_0367fa58(*(undefined8 *)(PTR_DAT_079f4610 + 0x48),&stack0x00000388);
          uVar9 = thunk_FUN_036aa1c8(UnityEngine_UIElements_PostProcessingPass___TypeInfo);
          uVar5 = FUN_05c98b2c(uVar9,uVar7,uVar5,0);
          goto LAB_06cba4b0;
        }
        lVar12 = FUN_06cbd6c8(&stack0x000001f0,0);
        if ((in_stack_00000050 == 0) ||
           (lVar15 = FUN_0459ed6c(in_stack_00000050,uVar22,
                                  *(undefined8 *)Unity_InferenceEngine_PartialTensor___TypeInfo),
           lVar15 == 0)) goto LAB_06cba468;
        lVar16 = *(long *)(lVar15 + 0x10);
        lVar17 = *(long *)Oculus_Interaction_Input_OneEuroFilter___TypeInfo;
        *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
        if (lVar16 == 0) goto LAB_06cba468;
        uVar1 = *(uint *)(lVar15 + 0x18);
        if (uVar1 < *(uint *)(lVar16 + 0x18)) {
          *(uint *)(lVar15 + 0x18) = uVar1 + 1;
          plVar13 = (long *)(lVar16 + (long)(int)uVar1 * 8 + 0x20);
          *plVar13 = lVar12;
          thunk_FUN_036b7ad0(plVar13,lVar12);
        }
        else {
          FUN_0459f03c(lVar15,lVar12,
                       *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
        }
        if (in_stack_00000230 != 0) {
          if ((in_stack_00000030 == 0) ||
             (lVar15 = FUN_0459ed6c(in_stack_00000030,uVar22,
                                    *(undefined8 *)UnityEngine_Plane___TypeInfo),
             in_stack_00000230 == 0)) goto LAB_06cba468;
          uVar8 = 0;
          lVar16 = 0x20;
          while ((long)uVar8 < (long)(int)*(uint *)(in_stack_00000230 + 0x18)) {
            if (*(uint *)(in_stack_00000230 + 0x18) <= uVar8) goto LAB_06cba46c;
            puVar4 = (undefined8 *)(in_stack_00000230 + lVar16);
            uVar7 = *puVar4;
            uVar23 = puVar4[3];
            uVar9 = puVar4[2];
            *(undefined8 *)(unaff_x28 + 0x108) = puVar4[1];
            *(undefined8 *)(unaff_x28 + 0x100) = uVar7;
            *(undefined8 *)(unaff_x28 + 0x118) = uVar23;
            *(undefined8 *)(unaff_x28 + 0x110) = uVar9;
            uVar7 = puVar4[4];
            uVar23 = puVar4[7];
            uVar9 = puVar4[6];
            *(undefined8 *)(unaff_x28 + 0x128) = puVar4[5];
            *(undefined8 *)(unaff_x28 + 0x120) = uVar7;
            *(undefined8 *)(unaff_x28 + 0x138) = uVar23;
            *(undefined8 *)(unaff_x28 + 0x130) = uVar9;
            FUN_06cbd490(&stack0x00000058,&stack0x000001b0);
            memcpy(&stack0x00000150,&stack0x00000058,0x58);
            if (lVar12 == 0) goto LAB_06cba468;
            in_stack_00000180 = *(undefined8 *)(lVar12 + 0x10);
            thunk_FUN_036b7ad0(&stack0x00000180);
            if (lVar15 == 0) goto LAB_06cba468;
            memcpy(&stack0x00000330,&stack0x00000150,0x58);
            lVar17 = *(long *)(lVar15 + 0x10);
            lVar18 = *(long *)puVar10;
            *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
            if (lVar17 == 0) goto LAB_06cba468;
            uVar1 = *(uint *)(lVar15 + 0x18);
            if (uVar1 < *(uint *)(lVar17 + 0x18)) {
              lVar17 = lVar17 + (long)(int)uVar1 * 0x58;
              *(uint *)(lVar15 + 0x18) = uVar1 + 1;
              memcpy((void *)(lVar17 + 0x20),&stack0x00000330,0x58);
              thunk_FUN_036b7ad0(lVar17 + 0x20,0);
            }
            else {
              uVar7 = *(undefined8 *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70);
              memcpy(&stack0x00000388,&stack0x00000330,0x58);
              FUN_04519298(lVar15,&stack0x00000388,uVar7);
            }
            lVar16 = lVar16 + 0x40;
            uVar8 = uVar8 + 1;
            if (in_stack_00000230 == 0) goto LAB_06cba468;
          }
        }
        uVar21 = uVar21 + 1;
        unaff_x26 = in_stack_00000048;
      } while (uVar21 != (uVar6 & 0xffffffff));
    }
    if (lVar11 == 0) {
      if (in_stack_00000030 == 0) goto LAB_06cba468;
      FUN_0459ed6c(in_stack_00000030,uVar22,*(undefined8 *)UnityEngine_Plane___TypeInfo);
    }
    else {
      if (in_stack_00000030 == 0) goto LAB_06cba468;
      uVar1 = *(uint *)(lVar11 + 0x18);
      lVar14 = FUN_0459ed6c(in_stack_00000030,uVar22,*(undefined8 *)UnityEngine_Plane___TypeInfo);
      if (0 < (int)uVar1) {
        uVar6 = 0;
        puVar4 = (undefined8 *)(lVar11 + 0x20);
        do {
          if (*(uint *)(lVar11 + 0x18) <= uVar6) goto LAB_06cba46c;
          uVar5 = *puVar4;
          uVar9 = puVar4[3];
          uVar7 = puVar4[2];
          *(undefined8 *)(unaff_x28 + 0x68) = puVar4[1];
          *(undefined8 *)(unaff_x28 + 0x60) = uVar5;
          *(undefined8 *)(unaff_x28 + 0x78) = uVar9;
          *(undefined8 *)(unaff_x28 + 0x70) = uVar7;
          uVar5 = puVar4[4];
          uVar9 = puVar4[7];
          uVar7 = puVar4[6];
          *(undefined8 *)(unaff_x28 + 0x88) = puVar4[5];
          *(undefined8 *)(unaff_x28 + 0x80) = uVar5;
          *(undefined8 *)(unaff_x28 + 0x98) = uVar9;
          *(undefined8 *)(unaff_x28 + 0x90) = uVar7;
          FUN_06cbd490(&stack0x000000b0,&stack0x00000110);
          if (lVar14 == 0) goto LAB_06cba468;
          lVar12 = *(long *)(lVar14 + 0x10);
          lVar15 = *(long *)puVar10;
          *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
          if (lVar12 == 0) goto LAB_06cba468;
          uVar22 = *(uint *)(lVar14 + 0x18);
          if (uVar22 < *(uint *)(lVar12 + 0x18)) {
            lVar12 = lVar12 + (long)(int)uVar22 * 0x58;
            *(uint *)(lVar14 + 0x18) = uVar22 + 1;
            memcpy((void *)(lVar12 + 0x20),&stack0x000000b0,0x58);
            thunk_FUN_036b7ad0(lVar12 + 0x20,0);
          }
          else {
            uVar5 = *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70);
            memcpy(&stack0x00000388,&stack0x000000b0,0x58);
            FUN_04519298(lVar14,&stack0x00000388,uVar5);
          }
          uVar6 = uVar6 + 1;
          puVar4 = puVar4 + 8;
        } while (uVar1 != uVar6);
      }
    }
    uVar20 = uVar20 + 1;
  } while (uVar20 != (uVar19 & 0xffffffff));
LAB_06cba324:
  puVar2 = UnityEngine_UIElements_ParameterBinding___TypeInfo;
  puVar10 = System_Data_OperatorInfo___TypeInfo;
  if (unaff_x26 != 0) {
    if (0 < *(int *)(unaff_x26 + 0x18)) {
      iVar3 = 0;
      do {
        lVar11 = FUN_0459ed6c(unaff_x26,iVar3,
                              *(undefined8 *)Meta_XR_PassthroughCameraAccess___TypeInfo);
        if ((((in_stack_00000050 == 0) ||
             (lVar14 = FUN_0459ed6c(in_stack_00000050,iVar3,
                                    *(undefined8 *)Unity_InferenceEngine_PartialTensor___TypeInfo),
             lVar14 == 0)) ||
            (lVar14 = FUN_045a0b8c(lVar14,*(undefined8 *)puVar10), in_stack_00000030 == 0)) ||
           ((lVar12 = FUN_0459ed6c(in_stack_00000030,iVar3,
                                   *(undefined8 *)UnityEngine_Plane___TypeInfo), lVar12 == 0 ||
            (uVar5 = FUN_0451b200(lVar12,*(undefined8 *)puVar2), lVar11 == 0)))) goto LAB_06cba468;
        *(long *)(lVar11 + 0x28) = lVar14;
        thunk_FUN_036b7ad0((long *)(lVar11 + 0x28),lVar14);
        *(undefined8 *)(lVar11 + 0x30) = uVar5;
        thunk_FUN_036b7ad0((undefined8 *)(lVar11 + 0x30),uVar5);
        if (lVar14 == 0) goto LAB_06cba468;
        uVar22 = *(uint *)(lVar14 + 0x18);
        if (0 < (int)uVar22) {
          lVar12 = 0;
          do {
            if (uVar22 <= (uint)lVar12) goto LAB_06cba46c;
            lVar15 = *(long *)(lVar14 + 0x20 + lVar12 * 8);
            if (lVar15 == 0) goto LAB_06cba468;
            plVar13 = (long *)(lVar15 + 200);
            *plVar13 = lVar11;
            thunk_FUN_036b7ad0(plVar13,lVar11);
            uVar22 = *(uint *)(lVar14 + 0x18);
            lVar12 = lVar12 + 1;
          } while ((int)lVar12 < (int)uVar22);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(unaff_x26 + 0x18));
    }
    FUN_045a0b8c(unaff_x26,*(undefined8 *)TagLib_Ogg_Page___TypeInfo);
    return;
  }
LAB_06cba468:
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


