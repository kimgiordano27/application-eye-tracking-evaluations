/*
FUNCTION_NAME: UnityEngine.Rendering.CommandBuffer$$SetGlobalVectorArray
ENTRY_POINT: 06017720
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_10;weak_xr_or_state_hits_10;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_10
*/


void UnityEngine_Rendering_CommandBuffer__SetGlobalVectorArray(code *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  byte bVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long unaff_x19;
  long *plVar12;
  long *unaff_x22;
  long *unaff_x23;
  
  (*param_1)();
  plVar12 = *(long **)(unaff_x19 + 0x90);
  uVar7 = thunk_FUN_02f45270(*(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vcgezq_f64__);
  FUN_0476105c();
  if (plVar12 == (long *)0x0) goto LAB_06018078;
  lVar9 = *plVar12;
  uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar10 != 0) {
    piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == *unaff_x23) {
        puVar8 = (undefined8 *)(lVar9 + (long)(*piVar11 + 2) * 0x10 + 0x138);
        goto LAB_060177ac;
      }
      uVar10 = uVar10 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar10 != 0);
  }
  puVar8 = (undefined8 *)FUN_02f421d0(plVar12,*unaff_x23,2);
LAB_060177ac:
  (*(code *)*puVar8)(plVar12,uVar7,puVar8[1]);
  puVar1 = Method_Unity_Burst_Intrinsics_Arm_Neon_vceqzd_u64__;
  plVar12 = *(long **)(unaff_x19 + 0x98);
  if (plVar12 != (long *)0x0) {
    lVar9 = *plVar12;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vceqzd_u64__)
        {
          puVar8 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_06017818;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar8 = (undefined8 *)
             FUN_02f421d0(plVar12,*(long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vceqzd_u64__,0);
LAB_06017818:
    lVar9 = (*(code *)*puVar8)(plVar12,puVar8[1]);
    puVar2 = Method_Unity_Burst_Intrinsics_Arm_Neon_vget_lane_s16__;
    uVar7 = thunk_FUN_02f45270(*(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vget_lane_s16__
                              );
    FUN_04477a3c();
    puVar5 = Method_Unity_Burst_Intrinsics_Arm_Neon_vget_lane_u16__;
    if (lVar9 == 0) goto LAB_06018078;
    FUN_0447a8a8(lVar9,uVar7,*(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vget_lane_u16__);
    plVar12 = *(long **)(unaff_x19 + 0x98);
    if (plVar12 == (long *)0x0) goto LAB_06018078;
    lVar9 = *plVar12;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
          puVar8 = (undefined8 *)(lVar9 + (long)(*piVar11 + 1) * 0x10 + 0x138);
          goto LAB_060178c8;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar8 = (undefined8 *)FUN_02f421d0(plVar12,*(long *)puVar1,1);
LAB_060178c8:
    lVar9 = (*(code *)*puVar8)(plVar12,puVar8[1]);
    puVar3 = Method_Unity_Burst_Intrinsics_Arm_Neon_vget_lane_s32__;
    uVar7 = thunk_FUN_02f45270(*(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vget_lane_s32__
                              );
    FUN_04477a3c();
    puVar4 = Method_Unity_Burst_Intrinsics_Arm_Neon_vget_lane_s8__;
    if (lVar9 == 0) goto LAB_06018078;
    FUN_0447a8a8(lVar9,uVar7,*(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vget_lane_s8__);
    plVar12 = *(long **)(unaff_x19 + 0x98);
    if (plVar12 == (long *)0x0) goto LAB_06018078;
    lVar9 = *plVar12;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
          puVar8 = (undefined8 *)(lVar9 + (long)(*piVar11 + 2) * 0x10 + 0x138);
          goto LAB_06017978;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar8 = (undefined8 *)FUN_02f421d0(plVar12,*(long *)puVar1,2);
LAB_06017978:
    lVar9 = (*(code *)*puVar8)(plVar12,puVar8[1]);
    uVar7 = thunk_FUN_02f45270(*(undefined8 *)puVar2);
    FUN_04477a3c();
    if (lVar9 == 0) goto LAB_06018078;
    FUN_0447a8a8(lVar9,uVar7,*(undefined8 *)puVar5);
    plVar12 = *(long **)(unaff_x19 + 0x98);
    if (plVar12 == (long *)0x0) goto LAB_06018078;
    lVar9 = *plVar12;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
          puVar8 = (undefined8 *)(lVar9 + (long)(*piVar11 + 3) * 0x10 + 0x138);
          goto LAB_06017a18;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar8 = (undefined8 *)FUN_02f421d0(plVar12,*(long *)puVar1,3);
LAB_06017a18:
    lVar9 = (*(code *)*puVar8)(plVar12,puVar8[1]);
    uVar7 = thunk_FUN_02f45270(*(undefined8 *)puVar3);
    FUN_04477a3c();
    if (lVar9 == 0) goto LAB_06018078;
    FUN_0447a8a8(lVar9,uVar7,*(undefined8 *)puVar4);
  }
  puVar1 = Method_Unity_Burst_Intrinsics_Arm_Neon_vcgeq_s8__;
  plVar12 = *(long **)(unaff_x19 + 0xa0);
  if (plVar12 != (long *)0x0) {
    lVar9 = *plVar12;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vcgeq_s8__) {
          puVar8 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_06017abc;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar8 = (undefined8 *)
             FUN_02f421d0(plVar12,*(long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vcgeq_s8__,0);
LAB_06017abc:
    lVar9 = (*(code *)*puVar8)(plVar12,puVar8[1]);
    uVar7 = thunk_FUN_02f45270(*(undefined8 *)PTR_DAT_067c93c8);
    FUN_04477a3c();
    if (lVar9 == 0) goto LAB_06018078;
    FUN_0447a8a8(lVar9,uVar7,*(undefined8 *)PTR_DAT_067c93e0);
    plVar12 = *(long **)(unaff_x19 + 0xa0);
    if (plVar12 == (long *)0x0) goto LAB_06018078;
    lVar9 = *plVar12;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
          puVar8 = (undefined8 *)(lVar9 + (long)(*piVar11 + 1) * 0x10 + 0x138);
          goto LAB_06017b6c;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar8 = (undefined8 *)FUN_02f421d0(plVar12,*(long *)puVar1,1);
LAB_06017b6c:
    lVar9 = (*(code *)*puVar8)(plVar12,puVar8[1]);
    uVar7 = thunk_FUN_02f45270(*(undefined8 *)PTR_DAT_067c93d8);
    FUN_04477a3c();
    if (lVar9 == 0) goto LAB_06018078;
    FUN_0447a8a8(lVar9,uVar7,*(undefined8 *)PTR_DAT_067c93e8);
  }
  puVar1 = Method_Unity_Burst_Intrinsics_Arm_Neon_vcgeq_u64__;
  plVar12 = *(long **)(unaff_x19 + 0xa8);
  if (plVar12 != (long *)0x0) {
    lVar9 = *plVar12;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vcgeq_u64__)
        {
          puVar8 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_06017c20;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar8 = (undefined8 *)
             FUN_02f421d0(plVar12,*(long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vcgeq_u64__,0);
LAB_06017c20:
    lVar9 = (*(code *)*puVar8)(plVar12,puVar8[1]);
    uVar7 = thunk_FUN_02f45270(*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__837_32__);
    FUN_04477a3c();
    if (lVar9 == 0) goto LAB_06018078;
    FUN_0447a8a8(lVar9,uVar7,*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__837_37__);
    plVar12 = *(long **)(unaff_x19 + 0xa8);
    if (plVar12 == (long *)0x0) goto LAB_06018078;
    lVar9 = *plVar12;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
          puVar8 = (undefined8 *)(lVar9 + (long)(*piVar11 + 1) * 0x10 + 0x138);
          goto LAB_06017cd0;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar8 = (undefined8 *)FUN_02f421d0(plVar12,*(long *)puVar1,1);
LAB_06017cd0:
    lVar9 = (*(code *)*puVar8)(plVar12,puVar8[1]);
    uVar7 = thunk_FUN_02f45270(*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__837_33__);
    FUN_04477a3c();
    if (lVar9 == 0) goto LAB_06018078;
    FUN_0447a8a8(lVar9,uVar7,*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__837_35__);
  }
  puVar1 = Method_Unity_Burst_Intrinsics_Arm_Neon_vceqd_u64__;
  plVar12 = *(long **)(unaff_x19 + 0xb0);
  if (plVar12 != (long *)0x0) {
    lVar9 = *plVar12;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vceqd_u64__)
        {
          puVar8 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_06017d84;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar8 = (undefined8 *)
             FUN_02f421d0(plVar12,*(long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vceqd_u64__,0);
LAB_06017d84:
    lVar9 = (*(code *)*puVar8)(plVar12,puVar8[1]);
    uVar7 = thunk_FUN_02f45270(*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__837_34__);
    FUN_04477a3c();
    if (lVar9 == 0) goto LAB_06018078;
    FUN_0447a8a8(lVar9,uVar7,*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__837_38__);
    plVar12 = *(long **)(unaff_x19 + 0xb0);
    if (plVar12 == (long *)0x0) goto LAB_06018078;
    lVar9 = *plVar12;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
          puVar8 = (undefined8 *)(lVar9 + (long)(*piVar11 + 1) * 0x10 + 0x138);
          goto LAB_06017e34;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar8 = (undefined8 *)FUN_02f421d0(plVar12,*(long *)puVar1,1);
LAB_06017e34:
    lVar9 = (*(code *)*puVar8)(plVar12,puVar8[1]);
    uVar7 = thunk_FUN_02f45270(*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__837_31__);
    FUN_04477a3c();
    if (lVar9 == 0) goto LAB_06018078;
    FUN_0447a8a8(lVar9,uVar7,*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__837_36__);
  }
  plVar12 = *(long **)(unaff_x19 + 0xb8);
  if (plVar12 != (long *)0x0) {
    lVar9 = *plVar12;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vcle_f64__) {
          puVar8 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_06017ee8;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar8 = (undefined8 *)
             FUN_02f421d0(plVar12,*(long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vcle_f64__,0);
LAB_06017ee8:
    plVar12 = (long *)(*(code *)*puVar8)(plVar12,puVar8[1]);
    uVar7 = thunk_FUN_02f45270(*(undefined8 *)PTR_DAT_067c9430);
    FUN_047626f8();
    if (plVar12 == (long *)0x0) goto LAB_06018078;
    lVar9 = *plVar12;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)Method_OVRPlugin_<>c_<_cctor>b__837_30__) {
          puVar8 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_06017f7c;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar8 = (undefined8 *)FUN_02f421d0(plVar12,*(long *)Method_OVRPlugin_<>c_<_cctor>b__837_30__,0)
    ;
LAB_06017f7c:
    uVar7 = (*(code *)*puVar8)(plVar12,uVar7,puVar8[1]);
    if (*(long *)(unaff_x19 + 0x50) == 0) goto LAB_06018078;
    FUN_05f07bcc(*(long *)(unaff_x19 + 0x50),uVar7,0);
  }
  plVar12 = *(long **)(unaff_x19 + 0x90);
  *(undefined1 *)(unaff_x19 + 0xd9) = 0;
  if (plVar12 == (long *)0x0) {
LAB_06018010:
    bVar6 = 1;
  }
  else {
    lVar9 = *plVar12;
    bVar6 = *(byte *)(*(long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vqshrn_n_u64__ + 0x130);
    if ((*(byte *)(lVar9 + 0x130) < bVar6) ||
       (*(long *)(*(long *)(lVar9 + 200) + (ulong)bVar6 * 8 + -8) !=
        *(long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vqshrn_n_u64__)) {
      bVar6 = *(byte *)(*(long *)PTR_DAT_067ca0e0 + 0x130);
      if ((*(byte *)(lVar9 + 0x130) < bVar6) ||
         (*(long *)(*(long *)(lVar9 + 200) + (ulong)bVar6 * 8 + -8) != *(long *)PTR_DAT_067ca0e0))
      goto LAB_06018010;
      bVar6 = FUN_060ed0c4(plVar12,0);
    }
    else {
      lVar9 = plVar12[7];
      if (*(int *)(*unaff_x22 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      uVar10 = FUN_060f078c(lVar9,0,0);
      if ((uVar10 & 1) == 0) {
        bVar6 = 0;
      }
      else {
        if (plVar12[7] == 0) {
LAB_06018078:
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        bVar6 = FUN_05f32734(plVar12[7],*(undefined8 *)(unaff_x19 + 0x90),0);
      }
    }
    bVar6 = bVar6 & 1;
  }
  *(byte *)(unaff_x19 + 0xda) = bVar6;
  FUN_060162ec();
  return;
}


