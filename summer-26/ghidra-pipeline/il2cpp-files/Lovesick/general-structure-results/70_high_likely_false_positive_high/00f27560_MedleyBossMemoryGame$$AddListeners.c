/*
FUNCTION_NAME: MedleyBossMemoryGame$$AddListeners
ENTRY_POINT: 00f27560
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_9;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_1;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void MedleyBossMemoryGame__AddListeners(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  uint uVar12;
  long unaff_x20;
  long *unaff_x21;
  uint unaff_w22;
  long lVar13;
  uint uVar14;
  undefined8 unaff_x28;
  long *unaff_x29;
  uint uStack000000000000000c;
  undefined8 in_stack_00000018;
  
  FUN_01600424(*param_1,param_3,*(undefined8 *)FullSerializer_fsAotCompilationManager_TypeInfo,0);
  FUN_0160c8e8();
  FUN_0160c8e8();
  FUN_0160c8c8();
  puVar6 = Method_UnityEngine_Component_GetComponent<Camera>__;
  puVar5 = System_Security_SecurityElement_SecurityAttribute_TypeInfo;
  puVar4 = System_Collections_Generic_List<DFNode>_TypeInfo;
  puVar3 = System_Func<EnumMemberAttribute,_string>_TypeInfo;
  if (unaff_x20 != 0) {
    uVar12 = *(uint *)(unaff_x20 + 0x18);
    uStack000000000000000c = unaff_w22;
    if (0 < (int)uVar12) {
      uVar14 = 0;
      do {
        if (uVar12 <= uVar14) goto LAB_00f27db0;
        lVar13 = *(long *)(unaff_x20 + (long)(int)uVar14 * 8 + 0x20);
        plVar8 = (long *)FUN_00da4fb8(*(undefined8 *)PTR_DAT_033ea8a0,7);
        if (plVar8 == (long *)0x0) goto LAB_00f27dc0;
        lVar9 = *(long *)puVar5;
        if ((lVar9 != 0) &&
           (lVar9 = thunk_FUN_00d6225c(lVar9,*(undefined8 *)(*plVar8 + 0x40)), lVar9 == 0))
        goto LAB_00f27db4;
        if ((int)plVar8[3] == 0) goto LAB_00f27db0;
        plVar8[4] = *(long *)puVar5;
        if (*(int *)(*(long *)StringLiteral_4745 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        lVar9 = FUN_00f28198(lVar13);
        if ((lVar9 != 0) &&
           (lVar10 = thunk_FUN_00d6225c(lVar9,*(undefined8 *)(*plVar8 + 0x40)), lVar10 == 0))
        goto LAB_00f27db4;
        uVar12 = *(uint *)(plVar8 + 3);
        if (uVar12 < 2) goto LAB_00f27db0;
        plVar8[5] = lVar9;
        if (*(long *)puVar6 != 0) {
          lVar9 = thunk_FUN_00d6225c(*(long *)puVar6,*(undefined8 *)(*plVar8 + 0x40));
          if (lVar9 == 0) goto LAB_00f27db4;
          uVar12 = *(uint *)(plVar8 + 3);
        }
        if (uVar12 < 3) goto LAB_00f27db0;
        plVar8[6] = *(long *)puVar6;
        if (lVar13 == 0) goto LAB_00f27dc0;
        lVar9 = *(long *)(lVar13 + 0x30);
        if (lVar9 != 0) {
          lVar10 = thunk_FUN_00d6225c(lVar9,*(undefined8 *)(*plVar8 + 0x40));
          if (lVar10 == 0) goto LAB_00f27db4;
          uVar12 = *(uint *)(plVar8 + 3);
        }
        if (uVar12 < 4) goto LAB_00f27db0;
        plVar8[7] = lVar9;
        lVar9 = *(long *)puVar4;
        if (lVar9 != 0) {
          lVar9 = thunk_FUN_00d6225c(lVar9,*(undefined8 *)(*plVar8 + 0x40));
          if (lVar9 == 0) goto LAB_00f27db4;
          uVar12 = *(uint *)(plVar8 + 3);
        }
        if (uVar12 < 5) goto LAB_00f27db0;
        plVar8[8] = *(long *)puVar4;
        lVar13 = *(long *)(lVar13 + 0x38);
        if (lVar13 != 0) {
          lVar9 = thunk_FUN_00d6225c(lVar13,*(undefined8 *)(*plVar8 + 0x40));
          if (lVar9 == 0) goto LAB_00f27db4;
          uVar12 = *(uint *)(plVar8 + 3);
        }
        if (uVar12 < 6) goto LAB_00f27db0;
        plVar8[9] = lVar13;
        if (*(long *)puVar3 != 0) {
          lVar13 = thunk_FUN_00d6225c(*(long *)puVar3,*(undefined8 *)(*plVar8 + 0x40));
          if (lVar13 == 0) goto LAB_00f27db4;
          uVar12 = *(uint *)(plVar8 + 3);
        }
        if (uVar12 < 7) goto LAB_00f27db0;
        plVar8[10] = *(long *)puVar3;
        FUN_01600844(plVar8,0);
        FUN_0160c8e8();
        uVar12 = *(uint *)(unaff_x20 + 0x18);
        uVar14 = uVar14 + 1;
      } while ((int)uVar14 < (int)uVar12);
    }
    puVar5 = StringLiteral_10706;
    puVar4 = StringLiteral_3951;
    FUN_0160c8c8();
    FUN_0160c8e8();
    FUN_0160c8e8();
    FUN_0160c8c8();
    FUN_01600424(*(undefined8 *)puVar5,unaff_x28,*(undefined8 *)puVar4,0);
    FUN_0160c8e8();
    FUN_0160c8e8();
    FUN_0160c8c8();
    puVar7 = StringLiteral_7861;
    puVar5 = Method_Unity_Burst_Intrinsics_Arm_Neon_vcopyq_laneq_u8__;
    puVar4 = 
    Method_OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>_get_Status__
    ;
    in_stack_00000018._4_4_ = 0;
    uVar12 = *(uint *)(unaff_x20 + 0x18);
    if (0 < (int)uVar12) {
      do {
        if (uVar12 <= in_stack_00000018._4_4_) {
LAB_00f27db0:
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        lVar13 = *(long *)(unaff_x20 + (long)(int)in_stack_00000018._4_4_ * 8 + 0x20);
        plVar8 = (long *)FUN_00da4fb8(*(undefined8 *)PTR_DAT_033ea8a0,5);
        if (plVar8 == (long *)0x0) goto LAB_00f27dc0;
        lVar9 = *(long *)puVar7;
        if ((lVar9 != 0) &&
           (lVar9 = thunk_FUN_00d6225c(lVar9,*(undefined8 *)(*plVar8 + 0x40)), lVar9 == 0)) {
LAB_00f27db4:
          uVar11 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
          FUN_00da5038(uVar11,0);
        }
        if ((int)plVar8[3] == 0) goto LAB_00f27db0;
        plVar8[4] = *(long *)puVar7;
        lVar9 = FUN_0176eb1c((long)&stack0x00000018 + 4,0);
        if ((lVar9 != 0) &&
           (lVar10 = thunk_FUN_00d6225c(lVar9,*(undefined8 *)(*plVar8 + 0x40)), lVar10 == 0))
        goto LAB_00f27db4;
        uVar12 = *(uint *)(plVar8 + 3);
        if (uVar12 < 2) goto LAB_00f27db0;
        plVar8[5] = lVar9;
        if (*(long *)Method_Unity_Collections_NativeArray<Vector3>_Copy__ != 0) {
          lVar9 = thunk_FUN_00d6225c(*(long *)Method_Unity_Collections_NativeArray<Vector3>_Copy__,
                                     *(undefined8 *)(*plVar8 + 0x40));
          if (lVar9 == 0) goto LAB_00f27db4;
          uVar12 = *(uint *)(plVar8 + 3);
        }
        if (uVar12 < 3) goto LAB_00f27db0;
        plVar8[6] = *(long *)Method_Unity_Collections_NativeArray<Vector3>_Copy__;
        if (lVar13 == 0) goto LAB_00f27dc0;
        lVar9 = *(long *)(lVar13 + 0x38);
        if (lVar9 != 0) {
          lVar10 = thunk_FUN_00d6225c(lVar9,*(undefined8 *)(*plVar8 + 0x40));
          if (lVar10 == 0) goto LAB_00f27db4;
          uVar12 = *(uint *)(plVar8 + 3);
        }
        if (uVar12 < 4) goto LAB_00f27db0;
        plVar8[7] = lVar9;
        if (*unaff_x29 != 0) {
          lVar9 = thunk_FUN_00d6225c(*unaff_x29,*(undefined8 *)(*plVar8 + 0x40));
          if (lVar9 == 0) goto LAB_00f27db4;
          uVar12 = *(uint *)(plVar8 + 3);
        }
        if (uVar12 < 5) goto LAB_00f27db0;
        plVar8[8] = *unaff_x29;
        FUN_01600844(plVar8,0);
        FUN_0160c8e8();
        plVar8 = (long *)FUN_00da4fb8(*(undefined8 *)PTR_DAT_033ea8a0,7);
        if (plVar8 == (long *)0x0) goto LAB_00f27dc0;
        if ((*(long *)PTR_DAT_033f3c10 != 0) &&
           (lVar9 = thunk_FUN_00d6225c(*(long *)PTR_DAT_033f3c10,*(undefined8 *)(*plVar8 + 0x40)),
           lVar9 == 0)) goto LAB_00f27db4;
        if ((int)plVar8[3] == 0) goto LAB_00f27db0;
        plVar8[4] = *(long *)PTR_DAT_033f3c10;
        if (*(int *)(*(long *)StringLiteral_4745 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        lVar9 = FUN_00f28198(lVar13);
        if ((lVar9 != 0) &&
           (lVar10 = thunk_FUN_00d6225c(lVar9,*(undefined8 *)(*plVar8 + 0x40)), lVar10 == 0))
        goto LAB_00f27db4;
        uVar12 = *(uint *)(plVar8 + 3);
        if (uVar12 < 2) goto LAB_00f27db0;
        plVar8[5] = lVar9;
        if (*(long *)puVar6 != 0) {
          lVar9 = thunk_FUN_00d6225c(*(long *)puVar6,*(undefined8 *)(*plVar8 + 0x40));
          if (lVar9 == 0) goto LAB_00f27db4;
          uVar12 = *(uint *)(plVar8 + 3);
        }
        if (uVar12 < 3) goto LAB_00f27db0;
        plVar8[6] = *(long *)puVar6;
        lVar9 = *(long *)(lVar13 + 0x30);
        if (lVar9 != 0) {
          lVar10 = thunk_FUN_00d6225c(lVar9,*(undefined8 *)(*plVar8 + 0x40));
          if (lVar10 == 0) goto LAB_00f27db4;
          uVar12 = *(uint *)(plVar8 + 3);
        }
        if (uVar12 < 4) goto LAB_00f27db0;
        plVar8[7] = lVar9;
        if (*(long *)Method_RCG_Lovesick_Powers_Wavelength_WavelengthPower_ButtonDown__ != 0) {
          lVar9 = thunk_FUN_00d6225c(*(long *)
                                      Method_RCG_Lovesick_Powers_Wavelength_WavelengthPower_ButtonDown__
                                     ,*(undefined8 *)(*plVar8 + 0x40));
          if (lVar9 == 0) goto LAB_00f27db4;
          uVar12 = *(uint *)(plVar8 + 3);
        }
        if (uVar12 < 5) goto LAB_00f27db0;
        plVar8[8] = *(long *)Method_RCG_Lovesick_Powers_Wavelength_WavelengthPower_ButtonDown__;
        lVar9 = FUN_0176eb1c((long)&stack0x00000018 + 4,0);
        if ((lVar9 != 0) &&
           (lVar10 = thunk_FUN_00d6225c(lVar9,*(undefined8 *)(*plVar8 + 0x40)), lVar10 == 0))
        goto LAB_00f27db4;
        uVar12 = *(uint *)(plVar8 + 3);
        if (uVar12 < 6) goto LAB_00f27db0;
        plVar8[9] = lVar9;
        if (*(long *)puVar3 != 0) {
          lVar9 = thunk_FUN_00d6225c(*(long *)puVar3,*(undefined8 *)(*plVar8 + 0x40));
          if (lVar9 == 0) goto LAB_00f27db4;
          uVar12 = *(uint *)(plVar8 + 3);
        }
        if (uVar12 < 7) goto LAB_00f27db0;
        plVar8[10] = *(long *)puVar3;
        FUN_01600844(plVar8,0);
        FUN_0160c8e8();
        plVar8 = (long *)FUN_00da4fb8(*(undefined8 *)PTR_DAT_033ea8a0,5);
        if (plVar8 == (long *)0x0) goto LAB_00f27dc0;
        lVar9 = *(long *)puVar5;
        if ((lVar9 != 0) &&
           (lVar9 = thunk_FUN_00d6225c(lVar9,*(undefined8 *)(*plVar8 + 0x40)), lVar9 == 0))
        goto LAB_00f27db4;
        uVar12 = *(uint *)(plVar8 + 3);
        if (uVar12 == 0) goto LAB_00f27db0;
        plVar8[4] = *(long *)puVar5;
        lVar13 = *(long *)(lVar13 + 0x38);
        if (lVar13 != 0) {
          lVar9 = thunk_FUN_00d6225c(lVar13,*(undefined8 *)(*plVar8 + 0x40));
          if (lVar9 == 0) goto LAB_00f27db4;
          uVar12 = *(uint *)(plVar8 + 3);
        }
        if (uVar12 < 2) goto LAB_00f27db0;
        plVar8[5] = lVar13;
        lVar13 = *(long *)puVar4;
        if (lVar13 != 0) {
          lVar13 = thunk_FUN_00d6225c(lVar13,*(undefined8 *)(*plVar8 + 0x40));
          if (lVar13 == 0) goto LAB_00f27db4;
          uVar12 = *(uint *)(plVar8 + 3);
        }
        if (uVar12 < 3) goto LAB_00f27db0;
        plVar8[6] = *(long *)puVar4;
        lVar13 = FUN_0176eb1c((long)&stack0x00000018 + 4,0);
        if ((lVar13 != 0) &&
           (lVar9 = thunk_FUN_00d6225c(lVar13,*(undefined8 *)(*plVar8 + 0x40)), lVar9 == 0))
        goto LAB_00f27db4;
        uVar12 = *(uint *)(plVar8 + 3);
        if (uVar12 < 4) goto LAB_00f27db0;
        plVar8[7] = lVar13;
        if (*unaff_x29 != 0) {
          lVar13 = thunk_FUN_00d6225c(*unaff_x29,*(undefined8 *)(*plVar8 + 0x40));
          if (lVar13 == 0) goto LAB_00f27db4;
          uVar12 = *(uint *)(plVar8 + 3);
        }
        if (uVar12 < 5) goto LAB_00f27db0;
        plVar8[8] = *unaff_x29;
        FUN_01600844(plVar8,0);
        FUN_0160c8e8();
        FUN_0160c8c8();
        in_stack_00000018._4_4_ = in_stack_00000018._4_4_ + 1;
        uVar12 = *(uint *)(unaff_x20 + 0x18);
      } while ((int)in_stack_00000018._4_4_ < (int)uVar12);
    }
    puVar1 = (undefined8 *)StringLiteral_14253;
    puVar2 = (undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vcgeq_f32__;
    puVar4 = 
    Method_UnityEngine_XR_ARFoundation_ARTrackable<XRReferencePoint,_ARReferencePoint>_get_trackableId__
    ;
    puVar3 = System_Collections_Generic_List<MB3_TextureCombiner_TemporaryTexture>_TypeInfo;
    FUN_0160c8e8();
    FUN_0160c8e8();
    FUN_0160c8c8();
    FUN_0160c8e8();
    if ((uStack000000000000000c & 1) == 0) {
      puVar1 = (undefined8 *)puVar4;
      puVar2 = (undefined8 *)puVar3;
    }
    FUN_01600424(*puVar2,unaff_x28,*puVar1,0);
    FUN_0160c8e8();
    FUN_0160c8e8();
    FUN_0160c8e8();
    FUN_0160c8e8();
    (**(code **)(*unaff_x21 + 0x168))();
    return;
  }
LAB_00f27dc0:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


