/*
FUNCTION_NAME: FUN_06019d54
ENTRY_POINT: 06019d54
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_21;weak_xr_or_state_hits_21;validity_or_gating_hits_18;functionality_eye_api_context_without_clear_sink_hits_21
*/


void FUN_06019d54(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  long *plVar14;
  undefined8 local_98;
  undefined8 *puStack_90;
  long *local_88;
  undefined8 local_80;
  undefined8 *puStack_78;
  long *local_70;
  
  if ((DAT_06bc5364 & 1) == 0) {
    FUN_02f08768(Method_Unity_Burst_Intrinsics_Arm_Neon_vcgezd_s64__);
    FUN_02f08768(Method_Unity_Burst_Intrinsics_Arm_Neon_vcgezd_f64__);
    FUN_02f08768(Method_OVRPlugin_<>c_<_cctor>b__837_47__);
    FUN_02f08768(Method_OVRPlugin_<>c_<_cctor>b__837_48__);
    FUN_02f08768(Method_OVRPlugin_<>c_<_cctor>b__837_49__);
    FUN_02f08768(Method_OVRPlugin_<>c_<_cctor>b__837_5__);
    FUN_02f08768(Method_OVRPlugin_<>c_<_cctor>b__837_50__);
    FUN_02f08768(Method_Unity_Burst_Intrinsics_Arm_Neon_vceqd_u64__);
    FUN_02f08768(Method_Unity_Burst_Intrinsics_Arm_Neon_vcgeq_f64__);
    FUN_02f08768(PTR_DAT_067c9408);
    FUN_02f08768(Method_Unity_Burst_Intrinsics_Arm_Neon_vcgeq_s64__);
    FUN_02f08768(Method_OVRPlugin_<>c_<_cctor>b__837_31__);
    FUN_02f08768(PTR_DAT_067c93c8);
    FUN_02f08768(Method_Unity_Burst_Intrinsics_Arm_Neon_vget_lane_s16__);
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
    DAT_06bc5364 = 1;
  }
  local_80 = 0;
  puStack_78 = (undefined8 *)0x0;
  local_70 = (long *)0x0;
  if (param_1[10] == 0) goto LAB_0601a4f0;
  UnityEngine_XR_Interaction_Toolkit_AR_TwoFingerDragGesture__set_fingerId1(param_1[10],0);
  if ((char)param_1[0x18] != '\0') {
    plVar14 = (long *)param_1[0x12];
    uVar8 = thunk_FUN_02f45270(*(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vcgezd_f64__);
    FUN_0476105c(uVar8,param_1,*(undefined8 *)(*param_1 + 0x260),0);
    puVar2 = Method_Unity_Burst_Intrinsics_Arm_Neon_vcgezd_s64__;
    puVar1 = PTR_DAT_067c9408;
    if (plVar14 == (long *)0x0) goto LAB_0601a4f0;
    lVar10 = *plVar14;
    uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_067c9408) {
          puVar9 = (undefined8 *)(lVar10 + (long)(*piVar13 + 1) * 0x10 + 0x138);
          goto LAB_06019f64;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar9 = (undefined8 *)FUN_02f421d0(plVar14,*(long *)PTR_DAT_067c9408,1);
LAB_06019f64:
    (*(code *)*puVar9)(plVar14,uVar8,puVar9[1]);
    plVar14 = (long *)param_1[0x12];
    uVar8 = thunk_FUN_02f45270(*(undefined8 *)puVar2);
    FUN_0476105c(uVar8,param_1,*(undefined8 *)(*param_1 + 0x270),0);
    if (plVar14 == (long *)0x0) goto LAB_0601a4f0;
    lVar10 = *plVar14;
    uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)puVar1) {
          puVar9 = (undefined8 *)(lVar10 + (long)(*piVar13 + 3) * 0x10 + 0x138);
          goto LAB_06019fec;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar9 = (undefined8 *)FUN_02f421d0(plVar14,*(long *)puVar1,3);
LAB_06019fec:
    (*(code *)*puVar9)(plVar14,uVar8,puVar9[1]);
    puVar1 = Method_Unity_Burst_Intrinsics_Arm_Neon_vcgeq_f64__;
    if (*(char *)((long)param_1 + 0xc3) != '\0') {
      plVar14 = (long *)param_1[0x13];
      if (plVar14 == (long *)0x0) goto LAB_0601a4f0;
      lVar10 = *plVar14;
      uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vcgeq_f64__
             ) {
            puVar9 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_0601a060;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar9 = (undefined8 *)
               FUN_02f421d0(plVar14,*(long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vcgeq_f64__,0);
LAB_0601a060:
      lVar10 = (*(code *)*puVar9)(plVar14,puVar9[1]);
      uVar8 = thunk_FUN_02f45270(*(undefined8 *)
                                  Method_Unity_Burst_Intrinsics_Arm_Neon_vget_lane_s16__);
      FUN_04477a3c(uVar8,param_1,*(undefined8 *)(*param_1 + 0x280),0);
      if (lVar10 == 0) goto LAB_0601a4f0;
      FUN_0447a8e4(lVar10,uVar8,
                   *(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vgetq_lane_f32__);
      plVar14 = (long *)param_1[0x13];
      if (plVar14 == (long *)0x0) goto LAB_0601a4f0;
      lVar10 = *plVar14;
      uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)puVar1) {
            puVar9 = (undefined8 *)(lVar10 + (long)(*piVar13 + 1) * 0x10 + 0x138);
            goto LAB_0601a110;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar9 = (undefined8 *)FUN_02f421d0(plVar14,*(long *)puVar1,1);
LAB_0601a110:
      lVar10 = (*(code *)*puVar9)(plVar14,puVar9[1]);
      uVar8 = thunk_FUN_02f45270(*(undefined8 *)
                                  Method_Unity_Burst_Intrinsics_Arm_Neon_vget_lane_s32__);
      FUN_04477a3c(uVar8,param_1,*(undefined8 *)(*param_1 + 0x290),0);
      if (lVar10 == 0) goto LAB_0601a4f0;
      FUN_0447a8e4(lVar10,uVar8,
                   *(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vgetq_lane_f64__);
    }
    puVar1 = Method_Unity_Burst_Intrinsics_Arm_Neon_vcgeq_s64__;
    if (*(char *)((long)param_1 + 0xc4) != '\0') {
      plVar14 = (long *)param_1[0x14];
      if (plVar14 == (long *)0x0) goto LAB_0601a4f0;
      lVar10 = *plVar14;
      uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vcgeq_s64__
             ) {
            puVar9 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_0601a1cc;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar9 = (undefined8 *)
               FUN_02f421d0(plVar14,*(long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vcgeq_s64__,0);
LAB_0601a1cc:
      lVar10 = (*(code *)*puVar9)(plVar14,puVar9[1]);
      uVar8 = thunk_FUN_02f45270(*(undefined8 *)PTR_DAT_067c93c8);
      FUN_04477a3c(uVar8,param_1,*(undefined8 *)(*param_1 + 0x2a0),0);
      if (lVar10 == 0) goto LAB_0601a4f0;
      FUN_0447a8e4(lVar10,uVar8,*(undefined8 *)PTR_DAT_067c93f8);
      plVar14 = (long *)param_1[0x14];
      if (plVar14 == (long *)0x0) goto LAB_0601a4f0;
      lVar10 = *plVar14;
      uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)puVar1) {
            puVar9 = (undefined8 *)(lVar10 + (long)(*piVar13 + 1) * 0x10 + 0x138);
            goto LAB_0601a27c;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar9 = (undefined8 *)FUN_02f421d0(plVar14,*(long *)puVar1,1);
LAB_0601a27c:
      lVar10 = (*(code *)*puVar9)(plVar14,puVar9[1]);
      uVar8 = thunk_FUN_02f45270(*(undefined8 *)PTR_DAT_067c93d8);
      FUN_04477a3c(uVar8,param_1,*(undefined8 *)(*param_1 + 0x2b0),0);
      if (lVar10 == 0) goto LAB_0601a4f0;
      FUN_0447a8e4(lVar10,uVar8,*(undefined8 *)PTR_DAT_067c9400);
    }
  }
  puVar7 = Method_OVRPlugin_<>c_<_cctor>b__837_52__;
  puVar6 = Method_OVRPlugin_<>c_<_cctor>b__837_51__;
  puVar5 = Method_OVRPlugin_<>c_<_cctor>b__837_48__;
  puVar4 = Method_OVRPlugin_<>c_<_cctor>b__837_40__;
  puVar3 = Method_OVRPlugin_<>c_<_cctor>b__837_4__;
  puVar2 = Method_OVRPlugin_<>c_<_cctor>b__837_31__;
  puVar1 = Method_Unity_Burst_Intrinsics_Arm_Neon_vceqd_u64__;
  if (param_1[0x1c] != 0) {
    FUN_03752930(&local_98,param_1[0x1c],*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__837_50__);
    local_70 = local_88;
    puStack_78 = puStack_90;
    local_80 = local_98;
    local_98 = 0;
    puStack_90 = &local_80;
    while (uVar12 = FUN_04afea94(&local_80,*(undefined8 *)puVar5), plVar14 = local_70,
          (uVar12 & 1) != 0) {
      if (local_70 != (long *)0x0) {
        lVar11 = *local_70;
        lVar10 = *(long *)puVar1;
        uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == lVar10) {
              puVar9 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
              goto LAB_0601a3a4;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        puVar9 = (undefined8 *)FUN_02f421d0(local_70,lVar10,0);
LAB_0601a3a4:
        lVar10 = (*(code *)*puVar9)(plVar14,puVar9[1]);
        uVar8 = thunk_FUN_02f45270(*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__837_34__);
        FUN_04477a3c(uVar8,param_1,*(undefined8 *)puVar6,0);
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        FUN_0447a8e4(lVar10,uVar8,*(undefined8 *)puVar3);
        lVar11 = *plVar14;
        lVar10 = *(long *)puVar1;
        uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == lVar10) {
              puVar9 = (undefined8 *)(lVar11 + (long)(*piVar13 + 1) * 0x10 + 0x138);
              goto LAB_0601a43c;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        puVar9 = (undefined8 *)FUN_02f421d0(plVar14,lVar10,1);
LAB_0601a43c:
        lVar10 = (*(code *)*puVar9)(plVar14,puVar9[1]);
        uVar8 = thunk_FUN_02f45270(*(undefined8 *)puVar2);
        FUN_04477a3c(uVar8,param_1,*(undefined8 *)puVar7,0);
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        FUN_0447a8e4(lVar10,uVar8,*(undefined8 *)puVar4);
      }
    }
    FUN_04afea90(&local_80,*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__837_47__);
    if (param_1[0x1c] != 0) {
      System_Array_InternalEnumerator<ValueTuple<Rect,_Rect,_object>>__System_Collections_IEnumerator_Reset
                (param_1[0x1c],*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__837_5__);
      *(undefined1 *)(param_1 + 0x18) = 0;
      if (param_1[0x1e] != 0) {
        FUN_060f3324(param_1,param_1[0x1e],0);
        param_1[0x1e] = 0;
      }
      return;
    }
  }
LAB_0601a4f0:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


