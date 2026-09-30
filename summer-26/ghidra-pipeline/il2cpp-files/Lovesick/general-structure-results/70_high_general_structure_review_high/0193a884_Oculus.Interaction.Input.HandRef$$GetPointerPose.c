/*
FUNCTION_NAME: Oculus.Interaction.Input.HandRef$$GetPointerPose
ENTRY_POINT: 0193a884
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_4;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Oculus_Interaction_Input_HandRef__GetPointerPose(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined *puVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 uVar14;
  long unaff_x19;
  long unaff_x20;
  ulong uVar15;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  ulong unaff_x23;
  int unaff_w24;
  ulong uVar16;
  uint unaff_w25;
  long lVar17;
  long lVar18;
  undefined8 *unaff_x29;
  long lVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  long in_stack_00000010;
  int iStack0000000000000018;
  int iStack000000000000001c;
  float fStack0000000000000020;
  float fStack0000000000000024;
  float in_stack_00000028;
  
  while( true ) {
    lVar17 = *(long *)(unaff_x23 + 0x50);
    uVar2 = *(undefined4 *)(unaff_x19 + 0xdc);
    fVar23 = *(float *)(unaff_x19 + 0xe0);
    FUN_013576e8(param_1,unaff_w24,&stack0x00000020,
                 *(undefined8 *)Method_System_Collections_Generic_List<Leaderboard>__ctor__);
    if (lVar17 == 0) break;
    _fStack0000000000000020 = CONCAT44(fVar23 * fStack0000000000000020,uVar2);
    FUN_013577f0(lVar17,unaff_w24,&stack0x00000020,*unaff_x29);
    FUN_018fba08(unaff_x23,unaff_w24,0);
    if ((int)unaff_w25 < iStack0000000000000018) {
      if (*(long *)(in_stack_00000010 + 0x18) == 0) break;
      FUN_0132138c(*(long *)(in_stack_00000010 + 0x18),unaff_w25 % 3,&stack0x00000020,
                   *(undefined8 *)StringLiteral_1951);
      uVar16 = _fStack0000000000000020;
      if (((*(long *)(unaff_x19 + 0xa8) == 0) ||
          (FUN_0132138c(*(long *)(unaff_x19 + 0xa8),unaff_w25,&stack0x00000020,*unaff_x22),
          _fStack0000000000000020 == 0)) || (*(long *)(unaff_x19 + 0xa8) == 0)) break;
      iVar3 = *(int *)(_fStack0000000000000020 + 0x14);
      FUN_0132138c(*(long *)(unaff_x19 + 0xa8),unaff_w25 + 1,&stack0x00000020,*unaff_x22);
      puVar8 = UnityEngine_UIElements_UxmlFloatAttributeDescription_TypeInfo;
      if (_fStack0000000000000020 == 0) break;
      if (iVar3 == *(int *)(_fStack0000000000000020 + 0x10)) {
        if ((uVar16 == 0) || (*(long *)(unaff_x19 + 0xa8) == 0)) break;
        iVar3 = *(int *)(uVar16 + 0x24);
        FUN_0132138c(*(long *)(unaff_x19 + 0xa8),unaff_w25,&stack0x00000020,*unaff_x22);
        if ((_fStack0000000000000020 == 0) || (*(long *)(unaff_x19 + 0xa8) == 0)) break;
        uVar4 = *(uint *)(_fStack0000000000000020 + 0x10);
        FUN_0132138c(*(long *)(unaff_x19 + 0xa8),unaff_w25 + 1,&stack0x00000020,*unaff_x22);
        if ((_fStack0000000000000020 == 0) || (*(long *)(unaff_x19 + 0xa8) == 0)) break;
        uVar5 = *(uint *)(_fStack0000000000000020 + 0x14);
        FUN_0132138c(*(long *)(unaff_x19 + 0xa8),unaff_w25,&stack0x00000020,*unaff_x22);
        if ((_fStack0000000000000020 == 0) || (*(long *)(unaff_x19 + 0x70) == 0)) break;
        uVar6 = *(uint *)(_fStack0000000000000020 + 0x14);
        lVar17 = FUN_0191feb4(*(long *)(unaff_x19 + 0x70),0);
        if (lVar17 == 0) break;
        FUN_013576e8(lVar17,uVar4,&stack0x00000020,*(undefined8 *)puVar8);
        fVar23 = in_stack_00000028;
        if (*(long *)(unaff_x19 + 0x70) == 0) break;
        fVar9 = fStack0000000000000020;
        fVar11 = fStack0000000000000024;
        lVar17 = FUN_0191feb4(*(long *)(unaff_x19 + 0x70),0);
        if (lVar17 == 0) break;
        FUN_013576e8(lVar17,uVar5,&stack0x00000020,*(undefined8 *)puVar8);
        fVar13 = in_stack_00000028;
        if (*(long *)(unaff_x19 + 0x70) == 0) break;
        fVar10 = fStack0000000000000020;
        fVar12 = fStack0000000000000024;
        lVar17 = FUN_0191feb4(*(long *)(unaff_x19 + 0x70),0);
        if (lVar17 == 0) break;
        FUN_013576e8(lVar17,uVar6,&stack0x00000020,*(undefined8 *)puVar8);
        fVar22 = in_stack_00000028;
        fVar20 = fStack0000000000000020;
        fVar21 = fStack0000000000000024;
        if (*(int *)(*(long *)StringLiteral_645 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        if (DAT_03774e1b == '\0') {
          thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
          DAT_03774e1b = '\x01';
        }
        if (*(int *)(*(long *)System_Threading_Timer_TimerComparer_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        if (*(long *)(unaff_x19 + 0x70) == 0) break;
        lVar19 = *(long *)(uVar16 + 0x30);
        lVar17 = FUN_0191fc1c(*(long *)(unaff_x19 + 0x70),0);
        if (lVar17 == 0) break;
        if (*(uint *)(lVar17 + 0x18) <= uVar4) goto LAB_0193b41c;
        lVar17 = *(long *)(lVar17 + (long)(int)uVar4 * 8 + 0x20);
        if ((lVar17 == 0) || (lVar19 == 0)) break;
        iVar7 = iVar3 * 3;
        _fStack0000000000000020 = CONCAT44(fStack0000000000000024,*(undefined4 *)(lVar17 + 0x18));
        FUN_013577f0(lVar19,iVar7,&stack0x00000020,*(undefined8 *)OVR_OpenVR_HmdMatrix34_t_TypeInfo)
        ;
        if (*(long *)(unaff_x19 + 0x70) == 0) break;
        lVar19 = *(long *)(uVar16 + 0x30);
        lVar17 = FUN_0191fc1c(*(long *)(unaff_x19 + 0x70),0);
        if (lVar17 == 0) break;
        if (*(uint *)(lVar17 + 0x18) <= uVar5) goto LAB_0193b41c;
        lVar17 = *(long *)(lVar17 + (long)(int)uVar5 * 8 + 0x20);
        if ((lVar17 == 0) || (lVar19 == 0)) break;
        _fStack0000000000000020 = CONCAT44(fStack0000000000000024,*(undefined4 *)(lVar17 + 0x18));
        FUN_013577f0(lVar19,iVar7 + 1,&stack0x00000020,
                     *(undefined8 *)OVR_OpenVR_HmdMatrix34_t_TypeInfo);
        if (*(long *)(unaff_x19 + 0x70) == 0) break;
        lVar19 = *(long *)(uVar16 + 0x30);
        lVar17 = FUN_0191fc1c(*(long *)(unaff_x19 + 0x70),0);
        unaff_x21 = (undefined8 *)PTR_DAT_033f7640;
        if (lVar17 == 0) break;
        if (*(uint *)(lVar17 + 0x18) <= uVar6) goto LAB_0193b41c;
        lVar17 = *(long *)(lVar17 + (long)(int)uVar6 * 8 + 0x20);
        if ((lVar17 == 0) || (lVar19 == 0)) break;
        _fStack0000000000000020 = CONCAT44(fStack0000000000000024,*(undefined4 *)(lVar17 + 0x18));
        FUN_013577f0(lVar19,iVar7 + 2,&stack0x00000020,
                     *(undefined8 *)OVR_OpenVR_HmdMatrix34_t_TypeInfo);
        if (*(long *)(uVar16 + 0x48) == 0) break;
        fVar20 = fVar20 - (fVar9 + fVar10 + fVar20) / 3.0;
        fVar21 = fVar21 - (fVar11 + fVar12 + fVar21) / 3.0;
        fVar22 = fVar22 - (fVar23 + fVar13 + fVar22) / 3.0;
        _fStack0000000000000020 =
             CONCAT44(fStack0000000000000024,
                      SQRT(fVar22 * fVar22 + fVar20 * fVar20 + fVar21 * fVar21));
        FUN_013577f0(*(long *)(uVar16 + 0x48),iVar3,&stack0x00000020,*unaff_x21);
        if (*(long *)(uVar16 + 0x50) == 0) break;
        _fStack0000000000000020 = NEON_rev64(*(undefined8 *)(unaff_x19 + 0xe8),4);
        FUN_013577f0(*(long *)(uVar16 + 0x50),iVar3,&stack0x00000020,*unaff_x29);
        FUN_018fba08(uVar16,iVar3,0);
      }
    }
    unaff_w25 = unaff_w25 + 1;
    lVar17 = *(long *)(unaff_x20 + 0x18);
    if (lVar17 == 0) break;
    if (iStack000000000000001c <= (int)unaff_w25) {
      if (2 < *(int *)(lVar17 + 0x18)) {
        FUN_0132138c(lVar17,2,&stack0x00000020,
                     *(undefined8 *)
                      Method_System_Collections_Generic_List<TransformFeatureStateThreshold>__ctor__
                    );
        uVar16 = _fStack0000000000000020;
        lVar17 = *(long *)(unaff_x19 + 0xa8);
        if (((lVar17 == 0) ||
            (FUN_0132138c(lVar17,*(int *)(lVar17 + 0x18) + -1,&stack0x00000020,*unaff_x22),
            uVar15 = _fStack0000000000000020, uVar16 == 0)) || (*(long *)(unaff_x19 + 0x70) == 0))
        break;
        lVar19 = *(long *)(uVar16 + 0x30);
        lVar17 = FUN_0191fc1c(*(long *)(unaff_x19 + 0x70),0);
        if ((uVar15 == 0) || (lVar17 == 0)) break;
        if (*(uint *)(lVar17 + 0x18) <= *(uint *)(uVar15 + 0x10)) goto LAB_0193b41c;
        lVar17 = *(long *)(lVar17 + (long)(int)*(uint *)(uVar15 + 0x10) * 8 + 0x20);
        if ((lVar17 == 0) || (lVar19 == 0)) break;
        _fStack0000000000000020 = CONCAT44(fStack0000000000000024,*(undefined4 *)(lVar17 + 0x18));
        FUN_013577f0(lVar19,0,&stack0x00000020,*(undefined8 *)OVR_OpenVR_HmdMatrix34_t_TypeInfo);
        if (*(long *)(unaff_x19 + 0x70) == 0) break;
        lVar19 = *(long *)(uVar16 + 0x30);
        lVar17 = FUN_0191fc1c(*(long *)(unaff_x19 + 0x70),0);
        if (lVar17 == 0) break;
        if (*(uint *)(lVar17 + 0x18) <= *(uint *)(uVar15 + 0x14)) goto LAB_0193b41c;
        lVar17 = *(long *)(lVar17 + (long)(int)*(uint *)(uVar15 + 0x14) * 8 + 0x20);
        if ((lVar17 == 0) || (lVar19 == 0)) break;
        _fStack0000000000000020 = CONCAT44(fStack0000000000000024,*(undefined4 *)(lVar17 + 0x18));
        FUN_013577f0(lVar19,1,&stack0x00000020,*(undefined8 *)OVR_OpenVR_HmdMatrix34_t_TypeInfo);
        if (*(long *)(uVar16 + 0x48) == 0) break;
        _fStack0000000000000020 = CONCAT44(fStack0000000000000024,*(undefined4 *)(uVar15 + 0x18));
        FUN_013577f0(*(long *)(uVar16 + 0x48),0,&stack0x00000020,*(undefined8 *)PTR_DAT_033f7640);
        if (*(long *)(uVar16 + 0x48) == 0) break;
        lVar17 = *(long *)(uVar16 + 0x50);
        uVar2 = *(undefined4 *)(unaff_x19 + 0xdc);
        fVar23 = *(float *)(unaff_x19 + 0xe0);
        FUN_013576e8(*(long *)(uVar16 + 0x48),0,&stack0x00000020,
                     *(undefined8 *)Method_System_Collections_Generic_List<Leaderboard>__ctor__);
        if (lVar17 == 0) break;
        _fStack0000000000000020 = CONCAT44(fVar23 * fStack0000000000000020,uVar2);
        FUN_013577f0(lVar17,0,&stack0x00000020,*unaff_x29);
        FUN_018fba08(uVar16,0,0);
      }
      lVar17 = *(long *)(in_stack_00000010 + 0x18);
      if (lVar17 == 0) break;
      if (4 < *(int *)(lVar17 + 0x18)) {
        if (*(long *)(unaff_x19 + 0xa8) == 0) break;
        if (2 < *(int *)(*(long *)(unaff_x19 + 0xa8) + 0x18)) {
          FUN_0132138c(lVar17,3,&stack0x00000020,*(undefined8 *)StringLiteral_1951);
          uVar16 = _fStack0000000000000020;
          lVar17 = *(long *)(unaff_x19 + 0xa8);
          if (((lVar17 == 0) ||
              (FUN_0132138c(lVar17,*(int *)(lVar17 + 0x18) + -2,&stack0x00000020,*unaff_x22),
              uVar15 = _fStack0000000000000020, uVar16 == 0)) || (*(long *)(unaff_x19 + 0x70) == 0))
          break;
          lVar19 = *(long *)(uVar16 + 0x30);
          lVar17 = FUN_0191fc1c(*(long *)(unaff_x19 + 0x70),0);
          if ((uVar15 == 0) || (lVar17 == 0)) break;
          if (*(uint *)(lVar17 + 0x18) <= *(uint *)(uVar15 + 0x10)) goto LAB_0193b41c;
          lVar17 = *(long *)(lVar17 + (long)(int)*(uint *)(uVar15 + 0x10) * 8 + 0x20);
          if ((lVar17 == 0) || (lVar19 == 0)) break;
          _fStack0000000000000020 = CONCAT44(fStack0000000000000024,*(undefined4 *)(lVar17 + 0x18));
          FUN_013577f0(lVar19,0,&stack0x00000020,*(undefined8 *)OVR_OpenVR_HmdMatrix34_t_TypeInfo);
          if (*(long *)(unaff_x19 + 0x70) == 0) break;
          lVar19 = *(long *)(uVar16 + 0x30);
          lVar17 = FUN_0191fc1c(*(long *)(unaff_x19 + 0x70),0);
          if (((*(long *)(unaff_x19 + 0xa8) == 0) ||
              (FUN_0132138c(*(long *)(unaff_x19 + 0xa8),0,&stack0x00000020,*unaff_x22),
              _fStack0000000000000020 == 0)) || (lVar17 == 0)) break;
          if (*(uint *)(lVar17 + 0x18) <= *(uint *)(_fStack0000000000000020 + 0x10))
          goto LAB_0193b41c;
          lVar17 = *(long *)(lVar17 + (long)(int)*(uint *)(_fStack0000000000000020 + 0x10) * 8 +
                            0x20);
          if ((lVar17 == 0) || (lVar19 == 0)) break;
          _fStack0000000000000020 = CONCAT44(fStack0000000000000024,*(undefined4 *)(lVar17 + 0x18));
          FUN_013577f0(lVar19,1,&stack0x00000020,*(undefined8 *)OVR_OpenVR_HmdMatrix34_t_TypeInfo);
          if (*(long *)(unaff_x19 + 0x70) == 0) break;
          lVar19 = *(long *)(uVar16 + 0x30);
          lVar17 = FUN_0191fc1c(*(long *)(unaff_x19 + 0x70),0);
          if (lVar17 == 0) break;
          if (*(uint *)(lVar17 + 0x18) <= *(uint *)(uVar15 + 0x14)) goto LAB_0193b41c;
          lVar17 = *(long *)(lVar17 + (long)(int)*(uint *)(uVar15 + 0x14) * 8 + 0x20);
          if ((lVar17 == 0) || (lVar19 == 0)) break;
          _fStack0000000000000020 = CONCAT44(fStack0000000000000024,*(undefined4 *)(lVar17 + 0x18));
          FUN_013577f0(lVar19,2,&stack0x00000020,*(undefined8 *)OVR_OpenVR_HmdMatrix34_t_TypeInfo);
          if (*(long *)(uVar16 + 0x48) == 0) break;
          _fStack0000000000000020 = _fStack0000000000000020 & 0xffffffff00000000;
          FUN_013577f0(*(long *)(uVar16 + 0x48),0,&stack0x00000020,*(undefined8 *)PTR_DAT_033f7640);
          if (*(long *)(uVar16 + 0x50) == 0) break;
          _fStack0000000000000020 = NEON_rev64(*(undefined8 *)(unaff_x19 + 0xe8),4);
          FUN_013577f0(*(long *)(uVar16 + 0x50),0,&stack0x00000020,*unaff_x29);
          FUN_018fba08(uVar16,0,0);
          if (((*(long *)(in_stack_00000010 + 0x18) == 0) ||
              (FUN_0132138c(*(long *)(in_stack_00000010 + 0x18),4,&stack0x00000020,
                            *(undefined8 *)StringLiteral_1951), uVar16 = _fStack0000000000000020,
              _fStack0000000000000020 == 0)) || (*(long *)(unaff_x19 + 0x70) == 0)) break;
          lVar19 = *(long *)(_fStack0000000000000020 + 0x30);
          lVar17 = FUN_0191fc1c(*(long *)(unaff_x19 + 0x70),0);
          if (lVar17 == 0) break;
          if (*(uint *)(lVar17 + 0x18) <= *(uint *)(uVar15 + 0x14)) goto LAB_0193b41c;
          lVar17 = *(long *)(lVar17 + (long)(int)*(uint *)(uVar15 + 0x14) * 8 + 0x20);
          if ((lVar17 == 0) || (lVar19 == 0)) break;
          _fStack0000000000000020 = CONCAT44(fStack0000000000000024,*(undefined4 *)(lVar17 + 0x18));
          FUN_013577f0(lVar19,0,&stack0x00000020,*(undefined8 *)OVR_OpenVR_HmdMatrix34_t_TypeInfo);
          if (*(long *)(unaff_x19 + 0x70) == 0) break;
          lVar19 = *(long *)(uVar16 + 0x30);
          lVar17 = FUN_0191fc1c(*(long *)(unaff_x19 + 0x70),0);
          if (((*(long *)(unaff_x19 + 0xa8) == 0) ||
              (FUN_0132138c(*(long *)(unaff_x19 + 0xa8),0,&stack0x00000020,*unaff_x22),
              _fStack0000000000000020 == 0)) || (lVar17 == 0)) break;
          if (*(uint *)(lVar17 + 0x18) <= *(uint *)(_fStack0000000000000020 + 0x14))
          goto LAB_0193b41c;
          lVar17 = *(long *)(lVar17 + (long)(int)*(uint *)(_fStack0000000000000020 + 0x14) * 8 +
                            0x20);
          if ((lVar17 == 0) || (lVar19 == 0)) break;
          _fStack0000000000000020 = CONCAT44(fStack0000000000000024,*(undefined4 *)(lVar17 + 0x18));
          FUN_013577f0(lVar19,1,&stack0x00000020,*(undefined8 *)OVR_OpenVR_HmdMatrix34_t_TypeInfo);
          if (*(long *)(unaff_x19 + 0x70) == 0) break;
          lVar19 = *(long *)(uVar16 + 0x30);
          lVar17 = FUN_0191fc1c(*(long *)(unaff_x19 + 0x70),0);
          if (((*(long *)(unaff_x19 + 0xa8) == 0) ||
              (FUN_0132138c(*(long *)(unaff_x19 + 0xa8),0,&stack0x00000020,*unaff_x22),
              _fStack0000000000000020 == 0)) || (lVar17 == 0)) break;
          if (*(uint *)(lVar17 + 0x18) <= *(uint *)(_fStack0000000000000020 + 0x10))
          goto LAB_0193b41c;
          lVar17 = *(long *)(lVar17 + (long)(int)*(uint *)(_fStack0000000000000020 + 0x10) * 8 +
                            0x20);
          if ((lVar17 == 0) || (lVar19 == 0)) break;
          _fStack0000000000000020 = CONCAT44(fStack0000000000000024,*(undefined4 *)(lVar17 + 0x18));
          FUN_013577f0(lVar19,2,&stack0x00000020,*(undefined8 *)OVR_OpenVR_HmdMatrix34_t_TypeInfo);
          if (*(long *)(uVar16 + 0x48) == 0) break;
          _fStack0000000000000020 = _fStack0000000000000020 & 0xffffffff00000000;
          FUN_013577f0(*(long *)(uVar16 + 0x48),0,&stack0x00000020,*(undefined8 *)PTR_DAT_033f7640);
          if (*(long *)(uVar16 + 0x50) == 0) break;
          _fStack0000000000000020 = NEON_rev64(*(undefined8 *)(unaff_x19 + 0xe8),4);
          FUN_013577f0(*(long *)(uVar16 + 0x50),0,&stack0x00000020,*unaff_x29);
          FUN_018fba08(uVar16,0,0);
        }
      }
      lVar17 = FUN_018ee848();
      if ((*(long *)(unaff_x19 + 0xa8) != 0) &&
         (uVar14 = FUN_00da4fb8(*(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vmaxnmv_f32__,
                                *(int *)(*(long *)(unaff_x19 + 0xa8) + 0x18) << 1), lVar17 != 0)) {
        *(undefined8 *)(lVar17 + 0xa8) = uVar14;
        lVar17 = *(long *)(unaff_x19 + 0xa8);
        if (lVar17 != 0) {
          lVar19 = 0;
          uVar15 = 0;
          uVar16 = 0xffffffffffffffff;
          goto LAB_0193b27c;
        }
      }
      break;
    }
    FUN_0132138c(lVar17,unaff_w25 & 1,&stack0x00000020,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<TransformFeatureStateThreshold>__ctor__);
    unaff_x23 = _fStack0000000000000020;
    if ((_fStack0000000000000020 == 0) || (*(long *)(unaff_x19 + 0x70) == 0)) break;
    unaff_w24 = *(int *)(_fStack0000000000000020 + 0x24);
    lVar19 = *(long *)(_fStack0000000000000020 + 0x30);
    lVar17 = FUN_0191fc1c(*(long *)(unaff_x19 + 0x70),0);
    if ((*(long *)(unaff_x19 + 0xa8) == 0) ||
       ((FUN_0132138c(*(long *)(unaff_x19 + 0xa8),unaff_w25,&stack0x00000020,*unaff_x22),
        _fStack0000000000000020 == 0 || (lVar17 == 0)))) break;
    if (*(uint *)(lVar17 + 0x18) <= *(uint *)(_fStack0000000000000020 + 0x10)) goto LAB_0193b41c;
    lVar17 = *(long *)(lVar17 + (long)(int)*(uint *)(_fStack0000000000000020 + 0x10) * 8 + 0x20);
    if ((lVar17 == 0) || (lVar19 == 0)) break;
    _fStack0000000000000020 = CONCAT44(fStack0000000000000024,*(undefined4 *)(lVar17 + 0x18));
    FUN_013577f0(lVar19,unaff_w24 << 1,&stack0x00000020,
                 *(undefined8 *)OVR_OpenVR_HmdMatrix34_t_TypeInfo);
    if (*(long *)(unaff_x19 + 0x70) == 0) break;
    lVar19 = *(long *)(unaff_x23 + 0x30);
    lVar17 = FUN_0191fc1c(*(long *)(unaff_x19 + 0x70),0);
    if (((*(long *)(unaff_x19 + 0xa8) == 0) ||
        (FUN_0132138c(*(long *)(unaff_x19 + 0xa8),unaff_w25,&stack0x00000020,*unaff_x22),
        _fStack0000000000000020 == 0)) || (lVar17 == 0)) break;
    if (*(uint *)(lVar17 + 0x18) <= *(uint *)(_fStack0000000000000020 + 0x14)) goto LAB_0193b41c;
    lVar17 = *(long *)(lVar17 + (long)(int)*(uint *)(_fStack0000000000000020 + 0x14) * 8 + 0x20);
    if ((lVar17 == 0) || (lVar19 == 0)) break;
    _fStack0000000000000020 = CONCAT44(fStack0000000000000024,*(undefined4 *)(lVar17 + 0x18));
    FUN_013577f0(lVar19,unaff_w24 << 1 | 1,&stack0x00000020,
                 *(undefined8 *)OVR_OpenVR_HmdMatrix34_t_TypeInfo);
    if (*(long *)(unaff_x19 + 0xa8) == 0) break;
    lVar17 = *(long *)(unaff_x23 + 0x48);
    FUN_0132138c(*(long *)(unaff_x19 + 0xa8),unaff_w25,&stack0x00000020,*unaff_x22);
    if ((_fStack0000000000000020 == 0) || (lVar17 == 0)) break;
    _fStack0000000000000020 =
         CONCAT44(fStack0000000000000024,*(undefined4 *)(_fStack0000000000000020 + 0x18));
    FUN_013577f0(lVar17,unaff_w24,&stack0x00000020,*unaff_x21);
    param_1 = *(long *)(unaff_x23 + 0x48);
    if (param_1 == 0) break;
  }
LAB_0193b3bc:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
LAB_0193b27c:
  if ((long)*(int *)(lVar17 + 0x18) <= (long)uVar15) {
    FUN_018f08dc();
    FUN_018f08dc();
    FUN_018f0860();
    return;
  }
  lVar17 = FUN_018ee848();
  if ((lVar17 == 0) || (*(long *)(unaff_x19 + 0x70) == 0)) goto LAB_0193b3bc;
  lVar18 = *(long *)(lVar17 + 0xa8);
  lVar17 = FUN_0191fc1c(*(long *)(unaff_x19 + 0x70),0);
  if ((*(long *)(unaff_x19 + 0xa8) == 0) ||
     ((FUN_0132138c(*(long *)(unaff_x19 + 0xa8),uVar15 & 0xffffffff,&stack0x00000020,*unaff_x22),
      _fStack0000000000000020 == 0 || (lVar17 == 0)))) goto LAB_0193b3bc;
  if (*(uint *)(lVar17 + 0x18) <= *(uint *)(_fStack0000000000000020 + 0x10)) {
LAB_0193b41c:
                    /* WARNING: Subroutine does not return */
    FUN_00da5194();
  }
  lVar17 = *(long *)(lVar17 + (long)(int)*(uint *)(_fStack0000000000000020 + 0x10) * 8 + 0x20);
  if ((lVar17 == 0) || (lVar18 == 0)) goto LAB_0193b3bc;
  if ((ulong)*(uint *)(lVar18 + 0x18) <= uVar16 + 1) goto LAB_0193b41c;
  *(undefined4 *)(lVar18 + (lVar19 >> 0x1e) + 0x20) = *(undefined4 *)(lVar17 + 0x18);
  lVar17 = FUN_018ee848();
  if ((lVar17 == 0) || (*(long *)(unaff_x19 + 0x70) == 0)) goto LAB_0193b3bc;
  lVar18 = *(long *)(lVar17 + 0xa8);
  lVar17 = FUN_0191fc1c(*(long *)(unaff_x19 + 0x70),0);
  if ((*(long *)(unaff_x19 + 0xa8) == 0) ||
     ((FUN_0132138c(*(long *)(unaff_x19 + 0xa8),uVar15 & 0xffffffff,&stack0x00000020,*unaff_x22),
      _fStack0000000000000020 == 0 || (lVar17 == 0)))) goto LAB_0193b3bc;
  if (*(uint *)(lVar17 + 0x18) <= *(uint *)(_fStack0000000000000020 + 0x14)) goto LAB_0193b41c;
  lVar17 = *(long *)(lVar17 + (long)(int)*(uint *)(_fStack0000000000000020 + 0x14) * 8 + 0x20);
  if ((lVar17 == 0) || (lVar18 == 0)) goto LAB_0193b3bc;
  uVar16 = uVar16 + 2;
  if (*(uint *)(lVar18 + 0x18) <= uVar16) goto LAB_0193b41c;
  lVar1 = lVar19 + 0x100000000;
  lVar19 = lVar19 + 0x200000000;
  *(undefined4 *)(lVar18 + (lVar1 >> 0x1e) + 0x20) = *(undefined4 *)(lVar17 + 0x18);
  lVar17 = *(long *)(unaff_x19 + 0xa8);
  uVar15 = uVar15 + 1;
  if (lVar17 == 0) goto LAB_0193b3bc;
  goto LAB_0193b27c;
}


