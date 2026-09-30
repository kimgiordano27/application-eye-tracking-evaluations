/*
FUNCTION_NAME: UnityEngine.Rendering.CommandBuffer$$SetRenderTargetMultiSubtarget
ENTRY_POINT: 06019e24
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_13;weak_xr_or_state_hits_13;validity_or_gating_hits_18;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_13
*/


void UnityEngine_Rendering_CommandBuffer__SetRenderTargetMultiSubtarget(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long unaff_x19;
  long unaff_x20;
  long *plVar12;
  undefined8 in_stack_00000008;
  undefined8 *in_stack_00000010;
  long *in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 *in_stack_00000028;
  long *in_stack_00000030;
  
  FUN_02f08768();
  FUN_02f08768(PTR_DAT_067c93d8);
  FUN_02f08768(Method_Unity_Burst_Intrinsics_Arm_Neon_vget_lane_s32__);
  FUN_02f08768(Method_OVRPlugin_<>c_<_cctor>b__837_34__);
  FUN_02f08768(PTR_DAT_067c93f8);
  FUN_02f08768(Method_Unity_Burst_Intrinsics_Arm_Neon_vgetq_lane_f32__);
  FUN_02f08768(PTR_DAT_067c9400);
  FUN_02f08768(Method_OVRPlugin_<>c_<_cctor>b__837_4__);
  FUN_02f08768(Method_OVRPlugin_<>c_<_cctor>b__837_40__);
  FUN_02f08768(Method_Unity_Burst_Intrinsics_Arm_Neon_vgetq_lane_f64__);
  FUN_02f08768(Method_OVRPlugin_<>c_<_cctor>b__837_51__);
  FUN_02f08768(Method_OVRPlugin_<>c_<_cctor>b__837_52__);
  *(undefined1 *)(unaff_x20 + 0x364) = 1;
  in_stack_00000020 = 0;
  in_stack_00000028 = (undefined8 *)0x0;
  in_stack_00000030 = (long *)0x0;
  if (*(long *)(unaff_x19 + 0x50) == 0) goto LAB_0601a4f0;
  UnityEngine_XR_Interaction_Toolkit_AR_TwoFingerDragGesture__set_fingerId1
            (*(long *)(unaff_x19 + 0x50),0);
  if (*(char *)(unaff_x19 + 0xc0) != '\0') {
    plVar12 = *(long **)(unaff_x19 + 0x90);
    uVar6 = thunk_FUN_02f45270(*(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vcgezd_f64__);
    FUN_0476105c();
    puVar2 = Method_Unity_Burst_Intrinsics_Arm_Neon_vcgezd_s64__;
    puVar1 = PTR_DAT_067c9408;
    if (plVar12 == (long *)0x0) goto LAB_0601a4f0;
    lVar8 = *plVar12;
    uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_067c9408) {
          puVar7 = (undefined8 *)(lVar8 + (long)(*piVar11 + 1) * 0x10 + 0x138);
          goto LAB_06019f64;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar7 = (undefined8 *)FUN_02f421d0(plVar12,*(long *)PTR_DAT_067c9408,1);
LAB_06019f64:
    (*(code *)*puVar7)(plVar12,uVar6,puVar7[1]);
    plVar12 = *(long **)(unaff_x19 + 0x90);
    uVar6 = thunk_FUN_02f45270(*(undefined8 *)puVar2);
    FUN_0476105c();
    if (plVar12 == (long *)0x0) goto LAB_0601a4f0;
    lVar8 = *plVar12;
    uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
          puVar7 = (undefined8 *)(lVar8 + (long)(*piVar11 + 3) * 0x10 + 0x138);
          goto LAB_06019fec;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar7 = (undefined8 *)FUN_02f421d0(plVar12,*(long *)puVar1,3);
LAB_06019fec:
    (*(code *)*puVar7)(plVar12,uVar6,puVar7[1]);
    puVar1 = Method_Unity_Burst_Intrinsics_Arm_Neon_vcgeq_f64__;
    if (*(char *)(unaff_x19 + 0xc3) != '\0') {
      plVar12 = *(long **)(unaff_x19 + 0x98);
      if (plVar12 == (long *)0x0) goto LAB_0601a4f0;
      lVar8 = *plVar12;
      uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vcgeq_f64__
             ) {
            puVar7 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_0601a060;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar7 = (undefined8 *)
               FUN_02f421d0(plVar12,*(long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vcgeq_f64__,0);
LAB_0601a060:
      lVar8 = (*(code *)*puVar7)(plVar12,puVar7[1]);
      uVar6 = thunk_FUN_02f45270(*(undefined8 *)
                                  Method_Unity_Burst_Intrinsics_Arm_Neon_vget_lane_s16__);
      FUN_04477a3c();
      if (lVar8 == 0) goto LAB_0601a4f0;
      FUN_0447a8e4(lVar8,uVar6,
                   *(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vgetq_lane_f32__);
      plVar12 = *(long **)(unaff_x19 + 0x98);
      if (plVar12 == (long *)0x0) goto LAB_0601a4f0;
      lVar8 = *plVar12;
      uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
            puVar7 = (undefined8 *)(lVar8 + (long)(*piVar11 + 1) * 0x10 + 0x138);
            goto LAB_0601a110;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar7 = (undefined8 *)FUN_02f421d0(plVar12,*(long *)puVar1,1);
LAB_0601a110:
      lVar8 = (*(code *)*puVar7)(plVar12,puVar7[1]);
      uVar6 = thunk_FUN_02f45270(*(undefined8 *)
                                  Method_Unity_Burst_Intrinsics_Arm_Neon_vget_lane_s32__);
      FUN_04477a3c();
      if (lVar8 == 0) goto LAB_0601a4f0;
      FUN_0447a8e4(lVar8,uVar6,
                   *(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vgetq_lane_f64__);
    }
    puVar1 = Method_Unity_Burst_Intrinsics_Arm_Neon_vcgeq_s64__;
    if (*(char *)(unaff_x19 + 0xc4) != '\0') {
      plVar12 = *(long **)(unaff_x19 + 0xa0);
      if (plVar12 == (long *)0x0) goto LAB_0601a4f0;
      lVar8 = *plVar12;
      uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vcgeq_s64__
             ) {
            puVar7 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_0601a1cc;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar7 = (undefined8 *)
               FUN_02f421d0(plVar12,*(long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vcgeq_s64__,0);
LAB_0601a1cc:
      lVar8 = (*(code *)*puVar7)(plVar12,puVar7[1]);
      uVar6 = thunk_FUN_02f45270(*(undefined8 *)PTR_DAT_067c93c8);
      FUN_04477a3c();
      if (lVar8 == 0) goto LAB_0601a4f0;
      FUN_0447a8e4(lVar8,uVar6,*(undefined8 *)PTR_DAT_067c93f8);
      plVar12 = *(long **)(unaff_x19 + 0xa0);
      if (plVar12 == (long *)0x0) goto LAB_0601a4f0;
      lVar8 = *plVar12;
      uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
            puVar7 = (undefined8 *)(lVar8 + (long)(*piVar11 + 1) * 0x10 + 0x138);
            goto LAB_0601a27c;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar7 = (undefined8 *)FUN_02f421d0(plVar12,*(long *)puVar1,1);
LAB_0601a27c:
      lVar8 = (*(code *)*puVar7)(plVar12,puVar7[1]);
      uVar6 = thunk_FUN_02f45270(*(undefined8 *)PTR_DAT_067c93d8);
      FUN_04477a3c();
      if (lVar8 == 0) goto LAB_0601a4f0;
      FUN_0447a8e4(lVar8,uVar6,*(undefined8 *)PTR_DAT_067c9400);
    }
  }
  puVar5 = Method_OVRPlugin_<>c_<_cctor>b__837_48__;
  puVar4 = Method_OVRPlugin_<>c_<_cctor>b__837_40__;
  puVar3 = Method_OVRPlugin_<>c_<_cctor>b__837_4__;
  puVar2 = Method_OVRPlugin_<>c_<_cctor>b__837_31__;
  puVar1 = Method_Unity_Burst_Intrinsics_Arm_Neon_vceqd_u64__;
  if (*(long *)(unaff_x19 + 0xe0) != 0) {
    FUN_03752930(&stack0x00000008,*(long *)(unaff_x19 + 0xe0),
                 *(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__837_50__);
    in_stack_00000030 = in_stack_00000018;
    in_stack_00000028 = in_stack_00000010;
    in_stack_00000020 = in_stack_00000008;
    in_stack_00000008 = 0;
    in_stack_00000010 = &stack0x00000020;
    while (uVar10 = FUN_04afea94(&stack0x00000020,*(undefined8 *)puVar5),
          plVar12 = in_stack_00000030, (uVar10 & 1) != 0) {
      if (in_stack_00000030 != (long *)0x0) {
        lVar9 = *in_stack_00000030;
        lVar8 = *(long *)puVar1;
        uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == lVar8) {
              puVar7 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_0601a3a4;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar7 = (undefined8 *)FUN_02f421d0(in_stack_00000030,lVar8,0);
LAB_0601a3a4:
        lVar8 = (*(code *)*puVar7)(plVar12,puVar7[1]);
        uVar6 = thunk_FUN_02f45270(*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__837_34__);
        FUN_04477a3c();
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        FUN_0447a8e4(lVar8,uVar6,*(undefined8 *)puVar3);
        lVar9 = *plVar12;
        lVar8 = *(long *)puVar1;
        uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == lVar8) {
              puVar7 = (undefined8 *)(lVar9 + (long)(*piVar11 + 1) * 0x10 + 0x138);
              goto LAB_0601a43c;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar7 = (undefined8 *)FUN_02f421d0(plVar12,lVar8,1);
LAB_0601a43c:
        lVar8 = (*(code *)*puVar7)(plVar12,puVar7[1]);
        uVar6 = thunk_FUN_02f45270(*(undefined8 *)puVar2);
        FUN_04477a3c();
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        FUN_0447a8e4(lVar8,uVar6,*(undefined8 *)puVar4);
      }
    }
    FUN_04afea90(&stack0x00000020,*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__837_47__);
    if (*(long *)(unaff_x19 + 0xe0) != 0) {
      System_Array_InternalEnumerator<ValueTuple<Rect,_Rect,_object>>__System_Collections_IEnumerator_Reset
                (*(long *)(unaff_x19 + 0xe0),*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__837_5__)
      ;
      *(undefined1 *)(unaff_x19 + 0xc0) = 0;
      if (*(long *)(unaff_x19 + 0xf0) != 0) {
        FUN_060f3324();
        *(undefined8 *)(unaff_x19 + 0xf0) = 0;
      }
      return;
    }
  }
LAB_0601a4f0:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


