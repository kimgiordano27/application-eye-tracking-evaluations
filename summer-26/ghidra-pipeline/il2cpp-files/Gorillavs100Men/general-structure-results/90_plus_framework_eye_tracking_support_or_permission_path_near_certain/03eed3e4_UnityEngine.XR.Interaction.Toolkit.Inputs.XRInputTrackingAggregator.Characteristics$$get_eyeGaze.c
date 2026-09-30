/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.Inputs.XRInputTrackingAggregator.Characteristics$$get_eyeGaze
ENTRY_POINT: 03eed3e4
PROGRAM: Gorillavs100Men-libil2cpp.so
SCORE: 93
LABEL: framework_eye_tracking_support_or_permission_path_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_eye_tracking_support_or_permission_path
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction;attempted_use
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;ray_or_cast_sink_hits_7;attempted_eye_tracking_permission_or_feature_enable;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction
*/


void UnityEngine_XR_Interaction_Toolkit_Inputs_XRInputTrackingAggregator_Characteristics__get_eyeGaze
               (void)

{
  uint uVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  char cVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  int iVar12;
  long lVar13;
  long *plVar14;
  uint uVar15;
  uint uVar16;
  long unaff_x19;
  long unaff_x20;
  long lVar17;
  long *unaff_x21;
  long lVar18;
  uint uVar19;
  int unaff_w27;
  long lVar20;
  long *unaff_x28;
  long *plVar21;
  long lVar22;
  long lVar23;
  undefined4 uVar24;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  
  FUN_020612a4(StringLiteral_9107);
  FUN_020612a4(PTR_DAT_046a6340);
  *(undefined1 *)(unaff_x19 + 0x8d3) = 1;
  if (*(int *)(*unaff_x21 + 0xe4) == 0) {
    thunk_FUN_020b5864();
  }
  uVar9 = FUN_040cbf6c();
  if ((uVar9 & 1) == 0) {
    if (unaff_x20 == 0) goto LAB_03eed920;
    FUN_040a8174();
  }
  else {
    unaff_x20 = thunk_FUN_02094760(*(undefined8 *)PTR_DAT_046a19b8);
    FUN_040a461c(unaff_x20,0);
  }
  plVar14 = (long *)PTR_DAT_046bca00;
  puVar7 = PTR_DAT_046b1a18;
  puVar6 = PTR_DAT_046a6340;
  puVar5 = PTR_DAT_046a5e20;
  puVar4 = StringLiteral_9132;
  puVar3 = StringLiteral_9107;
  *unaff_x28 = unaff_x20;
  thunk_FUN_020ccb58();
  uVar10 = *(undefined8 *)puVar3;
  *(undefined4 *)(unaff_x28 + 1) = 0;
  iVar12 = unaff_w27;
  if (0x3ffe < unaff_w27) {
    iVar12 = 0x3fff;
  }
  iVar2 = iVar12 << 2;
  lVar11 = RootMotion_Dynamics_Muscle__get_colliders(uVar10,iVar2);
  unaff_x28[2] = lVar11;
  thunk_FUN_020ccb58();
  lVar11 = RootMotion_Dynamics_Muscle__get_colliders(*(undefined8 *)puVar6,iVar2);
  unaff_x28[5] = lVar11;
  thunk_FUN_020ccb58();
  lVar11 = RootMotion_Dynamics_Muscle__get_colliders(*(undefined8 *)puVar5,iVar2);
  unaff_x28[6] = lVar11;
  thunk_FUN_020ccb58();
  lVar11 = RootMotion_Dynamics_Muscle__get_colliders(*(undefined8 *)puVar7,iVar2);
  unaff_x28[7] = lVar11;
  thunk_FUN_020ccb58();
  lVar11 = RootMotion_Dynamics_Muscle__get_colliders(*(undefined8 *)puVar3,iVar2);
  unaff_x28[3] = lVar11;
  thunk_FUN_020ccb58();
  lVar11 = RootMotion_Dynamics_Muscle__get_colliders(*(undefined8 *)puVar6,iVar2);
  unaff_x28[4] = lVar11;
  thunk_FUN_020ccb58();
  lVar11 = RootMotion_Dynamics_Muscle__get_colliders(*(undefined8 *)puVar4,iVar12 * 6);
  plVar21 = unaff_x28 + 8;
  *plVar21 = lVar11;
  thunk_FUN_020ccb58(plVar21,lVar11);
  puVar3 = StringLiteral_10055;
  if (0 < unaff_w27) {
    uVar16 = 0;
    uVar15 = 0;
    do {
      lVar13 = (long)(int)uVar16;
      lVar11 = 0;
      lVar20 = 0;
      lVar18 = (lVar13 * 2 + (long)(int)uVar16) * 4;
      lVar17 = lVar13 * 0x10;
      do {
        lVar22 = unaff_x28[2];
        if (DAT_0491c4ab == '\0') {
          FUN_020612a4(StringLiteral_8775);
          DAT_0491c4ab = '\x01';
          plVar14 = (long *)PTR_DAT_046bca00;
        }
        cVar8 = DAT_0491c92f;
        if (lVar22 == 0) goto LAB_03eed920;
        uVar19 = uVar16 + (int)lVar20;
        if (*(uint *)(lVar22 + 0x18) <= uVar19)
        goto 
        UnityEngine_XR_Interaction_Toolkit_Inputs_XRTransformStabilizer__set_positionStabilization;
        lVar22 = lVar22 + lVar18 + lVar11;
        uVar24 = *(undefined4 *)(*(undefined8 **)(*(long *)StringLiteral_8775 + 0xb8) + 1);
        *(undefined8 *)(lVar22 + 0x20) = **(undefined8 **)(*(long *)StringLiteral_8775 + 0xb8);
        *(undefined4 *)(lVar22 + 0x28) = uVar24;
        lVar22 = unaff_x28[5];
        if (cVar8 == '\0') {
          FUN_020612a4(puVar3);
          DAT_0491c92f = '\x01';
          plVar14 = (long *)PTR_DAT_046bca00;
        }
        if (lVar22 == 0) goto LAB_03eed920;
        if (*(uint *)(lVar22 + 0x18) <= uVar19)
        goto 
        UnityEngine_XR_Interaction_Toolkit_Inputs_XRTransformStabilizer__set_positionStabilization;
        uVar10 = **(undefined8 **)(*(long *)puVar3 + 0xb8);
        *(undefined8 *)(lVar22 + lVar17 + 0x28) = 0;
        *(undefined8 *)(lVar22 + lVar17 + 0x20) = uVar10;
        lVar22 = unaff_x28[6];
        if (lVar22 == 0) goto LAB_03eed920;
        if (*(uint *)(lVar22 + 0x18) <= uVar19)
        goto 
        UnityEngine_XR_Interaction_Toolkit_Inputs_XRTransformStabilizer__set_positionStabilization;
        *(undefined8 *)(lVar22 + lVar13 * 8 + 0x20 + lVar20 * 8) =
             **(undefined8 **)(*(long *)puVar3 + 0xb8);
        lVar22 = *plVar14;
        lVar23 = unaff_x28[7];
        if (*(int *)(lVar22 + 0xe4) == 0) {
          thunk_FUN_020b5864();
          lVar22 = *(long *)PTR_DAT_046bca00;
          plVar14 = (long *)PTR_DAT_046bca00;
        }
        if (lVar23 == 0) goto LAB_03eed920;
        if (*(uint *)(lVar23 + 0x18) <= uVar19)
        goto 
        UnityEngine_XR_Interaction_Toolkit_Inputs_XRTransformStabilizer__set_positionStabilization;
        *(undefined4 *)(lVar23 + lVar13 * 4 + 0x20 + lVar20 * 4) = **(undefined4 **)(lVar22 + 0xb8);
        lVar22 = unaff_x28[3];
        if (lVar22 == 0) goto LAB_03eed920;
        if (*(uint *)(lVar22 + 0x18) <= uVar19)
        goto 
        UnityEngine_XR_Interaction_Toolkit_Inputs_XRTransformStabilizer__set_positionStabilization;
        lVar22 = lVar22 + lVar18 + lVar11;
        uVar24 = *(undefined4 *)(*(long *)(*plVar14 + 0xb8) + 0xc);
        *(undefined8 *)(lVar22 + 0x20) = *(undefined8 *)(*(long *)(*plVar14 + 0xb8) + 4);
        *(undefined4 *)(lVar22 + 0x28) = uVar24;
        lVar22 = unaff_x28[4];
        if (lVar22 == 0) goto LAB_03eed920;
        if (*(uint *)(lVar22 + 0x18) <= uVar19)
        goto 
        UnityEngine_XR_Interaction_Toolkit_Inputs_XRTransformStabilizer__set_positionStabilization;
        lVar11 = lVar11 + 0xc;
        lVar22 = lVar22 + lVar13 * 0x10 + lVar20 * 0x10;
        lVar20 = lVar20 + 1;
        lVar17 = lVar17 + 0x10;
        uVar10 = *(undefined8 *)(*(long *)(*plVar14 + 0xb8) + 0x10);
        *(undefined8 *)(lVar22 + 0x28) = *(undefined8 *)(*(long *)(*plVar14 + 0xb8) + 0x18);
        *(undefined8 *)(lVar22 + 0x20) = uVar10;
      } while (lVar11 != 0x30);
      lVar11 = *plVar21;
      if (lVar11 == 0) goto LAB_03eed920;
      uVar19 = *(uint *)(lVar11 + 0x18);
      if (uVar19 <= uVar15) {
UnityEngine_XR_Interaction_Toolkit_Inputs_XRTransformStabilizer__set_positionStabilization:
                    /* WARNING: Subroutine does not return */
        FUN_02061554();
      }
      *(uint *)(lVar11 + (long)(int)uVar15 * 4 + 0x20) = uVar16;
      if (uVar19 <= (uint)((long)(int)uVar15 | 1U))
      goto 
      UnityEngine_XR_Interaction_Toolkit_Inputs_XRTransformStabilizer__set_positionStabilization;
      *(uint *)(lVar11 + ((long)(int)uVar15 | 1U) * 4 + 0x20) = uVar16 | 1;
      if (uVar19 <= uVar15 + 2)
      goto 
      UnityEngine_XR_Interaction_Toolkit_Inputs_XRTransformStabilizer__set_positionStabilization;
      *(uint *)(lVar11 + (long)(int)(uVar15 + 2) * 4 + 0x20) = uVar16 | 2;
      if (uVar19 <= uVar15 + 3)
      goto 
      UnityEngine_XR_Interaction_Toolkit_Inputs_XRTransformStabilizer__set_positionStabilization;
      *(uint *)(lVar11 + (long)(int)(uVar15 + 3) * 4 + 0x20) = uVar16 | 2;
      if (uVar19 <= uVar15 + 4)
      goto 
      UnityEngine_XR_Interaction_Toolkit_Inputs_XRTransformStabilizer__set_positionStabilization;
      uVar1 = uVar15 + 5;
      *(uint *)(lVar11 + (long)(int)(uVar15 + 4) * 4 + 0x20) = uVar16 | 3;
      if (uVar19 <= uVar1)
      goto 
      UnityEngine_XR_Interaction_Toolkit_Inputs_XRTransformStabilizer__set_positionStabilization;
      uVar15 = uVar15 + 6;
      *(uint *)(lVar11 + (long)(int)uVar1 * 4 + 0x20) = uVar16;
      uVar16 = uVar16 + 4;
    } while ((int)uVar16 >> 2 < iVar12);
  }
  if (*unaff_x28 != 0) {
    FUN_040a6588(*unaff_x28,unaff_x28[2],0);
    if (*unaff_x28 != 0) {
      FUN_040a6634(*unaff_x28,unaff_x28[3],0);
      if (*unaff_x28 != 0) {
        FUN_040a66e0(*unaff_x28,unaff_x28[4],0);
        if (*unaff_x28 != 0) {
          FUN_040a7784(*unaff_x28,unaff_x28[8],0);
          puVar3 = PTR_DAT_046bca00;
          lVar20 = *unaff_x28;
          lVar11 = *(long *)PTR_DAT_046bca00;
          if (*(int *)(lVar11 + 0xe4) == 0) {
            thunk_FUN_020b5864();
            lVar11 = *(long *)puVar3;
          }
          if (lVar20 != 0) {
            lVar11 = *(long *)(lVar11 + 0xb8);
            in_stack_00000058 = *(undefined8 *)(lVar11 + 0x28);
            in_stack_00000050 = *(undefined8 *)(lVar11 + 0x20);
            in_stack_00000060 = *(undefined8 *)(lVar11 + 0x30);
            FUN_040a5e3c(lVar20,&stack0x00000050,0);
            unaff_x28[9] = 0;
            thunk_FUN_020ccb58(unaff_x28 + 9,0);
            return;
          }
        }
      }
    }
  }
LAB_03eed920:
                    /* WARNING: Subroutine does not return */
  FUN_0206154c();
}


