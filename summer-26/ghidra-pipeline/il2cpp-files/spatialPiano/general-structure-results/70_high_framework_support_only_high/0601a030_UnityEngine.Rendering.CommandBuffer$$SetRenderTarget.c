/*
FUNCTION_NAME: UnityEngine.Rendering.CommandBuffer$$SetRenderTarget
ENTRY_POINT: 0601a030
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_8;weak_xr_or_state_hits_8;validity_or_gating_hits_15;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_8
*/


void UnityEngine_Rendering_CommandBuffer__SetRenderTarget
               (long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long in_x9;
  ulong uVar10;
  int *in_x10;
  int *piVar11;
  long in_x11;
  long unaff_x19;
  long *plVar12;
  long *unaff_x22;
  undefined8 in_stack_00000008;
  undefined8 *in_stack_00000010;
  long *in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 *in_stack_00000028;
  long *in_stack_00000030;
  
  while (in_x11 != param_3) {
    in_x9 = in_x9 + -1;
    if (in_x9 == 0) {
      puVar6 = (undefined8 *)FUN_02f421d0();
      goto LAB_0601a060;
    }
    in_x11 = *(long *)(in_x10 + 2);
    in_x10 = in_x10 + 4;
  }
  puVar6 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
LAB_0601a060:
  lVar7 = (*(code *)*puVar6)();
  uVar8 = thunk_FUN_02f45270(*(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vget_lane_s16__);
  FUN_04477a3c();
  if (lVar7 != 0) {
    FUN_0447a8e4(lVar7,uVar8,*(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vgetq_lane_f32__)
    ;
    plVar12 = *(long **)(unaff_x19 + 0x98);
    if (plVar12 != (long *)0x0) {
      lVar7 = *plVar12;
      uVar10 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *unaff_x22) {
            puVar6 = (undefined8 *)(lVar7 + (long)(*piVar11 + 1) * 0x10 + 0x138);
            goto LAB_0601a110;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar6 = (undefined8 *)FUN_02f421d0(plVar12,*unaff_x22,1);
LAB_0601a110:
      lVar7 = (*(code *)*puVar6)(plVar12,puVar6[1]);
      uVar8 = thunk_FUN_02f45270(*(undefined8 *)
                                  Method_Unity_Burst_Intrinsics_Arm_Neon_vget_lane_s32__);
      FUN_04477a3c();
      if (lVar7 != 0) {
        FUN_0447a8e4(lVar7,uVar8,
                     *(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vgetq_lane_f64__);
        puVar1 = Method_Unity_Burst_Intrinsics_Arm_Neon_vcgeq_s64__;
        if (*(char *)(unaff_x19 + 0xc4) != '\0') {
          plVar12 = *(long **)(unaff_x19 + 0xa0);
          if (plVar12 == (long *)0x0) goto LAB_0601a4f0;
          lVar7 = *plVar12;
          uVar10 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar10 != 0) {
            piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) ==
                  *(long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vcgeq_s64__) {
                puVar6 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
                goto LAB_0601a1cc;
              }
              uVar10 = uVar10 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar10 != 0);
          }
          puVar6 = (undefined8 *)
                   FUN_02f421d0(plVar12,*(long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vcgeq_s64__,
                                0);
LAB_0601a1cc:
          lVar7 = (*(code *)*puVar6)(plVar12,puVar6[1]);
          uVar8 = thunk_FUN_02f45270(*(undefined8 *)PTR_DAT_067c93c8);
          FUN_04477a3c();
          if (lVar7 == 0) goto LAB_0601a4f0;
          FUN_0447a8e4(lVar7,uVar8,*(undefined8 *)PTR_DAT_067c93f8);
          plVar12 = *(long **)(unaff_x19 + 0xa0);
          if (plVar12 == (long *)0x0) goto LAB_0601a4f0;
          lVar7 = *plVar12;
          uVar10 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar10 != 0) {
            piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
                puVar6 = (undefined8 *)(lVar7 + (long)(*piVar11 + 1) * 0x10 + 0x138);
                goto LAB_0601a27c;
              }
              uVar10 = uVar10 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar10 != 0);
          }
          puVar6 = (undefined8 *)FUN_02f421d0(plVar12,*(long *)puVar1,1);
LAB_0601a27c:
          lVar7 = (*(code *)*puVar6)(plVar12,puVar6[1]);
          uVar8 = thunk_FUN_02f45270(*(undefined8 *)PTR_DAT_067c93d8);
          FUN_04477a3c();
          if (lVar7 == 0) goto LAB_0601a4f0;
          FUN_0447a8e4(lVar7,uVar8,*(undefined8 *)PTR_DAT_067c9400);
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
              lVar7 = *(long *)puVar1;
              uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
              if (uVar10 != 0) {
                piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar11 + -2) == lVar7) {
                    puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
                    goto LAB_0601a3a4;
                  }
                  uVar10 = uVar10 - 1;
                  piVar11 = piVar11 + 4;
                } while (uVar10 != 0);
              }
              puVar6 = (undefined8 *)FUN_02f421d0(in_stack_00000030,lVar7,0);
LAB_0601a3a4:
              lVar7 = (*(code *)*puVar6)(plVar12,puVar6[1]);
              uVar8 = thunk_FUN_02f45270(*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__837_34__);
              FUN_04477a3c();
              if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f089c8();
              }
              FUN_0447a8e4(lVar7,uVar8,*(undefined8 *)puVar3);
              lVar9 = *plVar12;
              lVar7 = *(long *)puVar1;
              uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
              if (uVar10 != 0) {
                piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar11 + -2) == lVar7) {
                    puVar6 = (undefined8 *)(lVar9 + (long)(*piVar11 + 1) * 0x10 + 0x138);
                    goto LAB_0601a43c;
                  }
                  uVar10 = uVar10 - 1;
                  piVar11 = piVar11 + 4;
                } while (uVar10 != 0);
              }
              puVar6 = (undefined8 *)FUN_02f421d0(plVar12,lVar7,1);
LAB_0601a43c:
              lVar7 = (*(code *)*puVar6)(plVar12,puVar6[1]);
              uVar8 = thunk_FUN_02f45270(*(undefined8 *)puVar2);
              FUN_04477a3c();
              if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f089c8();
              }
              FUN_0447a8e4(lVar7,uVar8,*(undefined8 *)puVar4);
            }
          }
          FUN_04afea90(&stack0x00000020,*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__837_47__);
          if (*(long *)(unaff_x19 + 0xe0) != 0) {
            System_Array_InternalEnumerator<ValueTuple<Rect,_Rect,_object>>__System_Collections_IEnumerator_Reset
                      (*(long *)(unaff_x19 + 0xe0),
                       *(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__837_5__);
            *(undefined1 *)(unaff_x19 + 0xc0) = 0;
            if (*(long *)(unaff_x19 + 0xf0) != 0) {
              FUN_060f3324();
              *(undefined8 *)(unaff_x19 + 0xf0) = 0;
            }
            return;
          }
        }
      }
    }
  }
LAB_0601a4f0:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


