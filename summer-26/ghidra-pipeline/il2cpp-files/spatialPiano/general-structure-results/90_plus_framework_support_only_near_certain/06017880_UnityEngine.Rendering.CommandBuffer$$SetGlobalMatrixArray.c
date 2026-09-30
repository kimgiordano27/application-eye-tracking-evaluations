/*
FUNCTION_NAME: UnityEngine.Rendering.CommandBuffer$$SetGlobalMatrixArray
ENTRY_POINT: 06017880
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


void UnityEngine_Rendering_CommandBuffer__SetGlobalMatrixArray
               (long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  byte bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  int *piVar8;
  long unaff_x19;
  long *plVar9;
  long *unaff_x22;
  long *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  
  uVar7 = (ulong)*(ushort *)(param_1 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == param_3) {
        puVar4 = (undefined8 *)(param_1 + (long)(*piVar8 + 1) * 0x10 + 0x138);
        goto LAB_060178c8;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar4 = (undefined8 *)FUN_02f421d0();
LAB_060178c8:
  lVar5 = (*(code *)*puVar4)();
  puVar1 = Method_Unity_Burst_Intrinsics_Arm_Neon_vget_lane_s32__;
  uVar6 = thunk_FUN_02f45270(*(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vget_lane_s32__);
  FUN_04477a3c();
  puVar2 = Method_Unity_Burst_Intrinsics_Arm_Neon_vget_lane_s8__;
  if (lVar5 == 0) {
LAB_06018078:
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  FUN_0447a8a8(lVar5,uVar6,*(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vget_lane_s8__);
  plVar9 = *(long **)(unaff_x19 + 0x98);
  if (plVar9 == (long *)0x0) goto LAB_06018078;
  lVar5 = *plVar9;
  uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *unaff_x23) {
        puVar4 = (undefined8 *)(lVar5 + (long)(*piVar8 + 2) * 0x10 + 0x138);
        goto LAB_06017978;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar4 = (undefined8 *)FUN_02f421d0(plVar9,*unaff_x23,2);
LAB_06017978:
  lVar5 = (*(code *)*puVar4)(plVar9,puVar4[1]);
  uVar6 = thunk_FUN_02f45270(*unaff_x24);
  FUN_04477a3c();
  if (lVar5 == 0) goto LAB_06018078;
  FUN_0447a8a8(lVar5,uVar6,*unaff_x25);
  plVar9 = *(long **)(unaff_x19 + 0x98);
  if (plVar9 == (long *)0x0) goto LAB_06018078;
  lVar5 = *plVar9;
  uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *unaff_x23) {
        puVar4 = (undefined8 *)(lVar5 + (long)(*piVar8 + 3) * 0x10 + 0x138);
        goto LAB_06017a18;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar4 = (undefined8 *)FUN_02f421d0(plVar9,*unaff_x23,3);
LAB_06017a18:
  lVar5 = (*(code *)*puVar4)(plVar9,puVar4[1]);
  uVar6 = thunk_FUN_02f45270(*(undefined8 *)puVar1);
  FUN_04477a3c();
  if (lVar5 == 0) goto LAB_06018078;
  FUN_0447a8a8(lVar5,uVar6,*(undefined8 *)puVar2);
  puVar1 = Method_Unity_Burst_Intrinsics_Arm_Neon_vcgeq_s8__;
  plVar9 = *(long **)(unaff_x19 + 0xa0);
  if (plVar9 != (long *)0x0) {
    lVar5 = *plVar9;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vcgeq_s8__) {
          puVar4 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_06017abc;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)
             FUN_02f421d0(plVar9,*(long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vcgeq_s8__,0);
LAB_06017abc:
    lVar5 = (*(code *)*puVar4)(plVar9,puVar4[1]);
    uVar6 = thunk_FUN_02f45270(*(undefined8 *)PTR_DAT_067c93c8);
    FUN_04477a3c();
    if (lVar5 == 0) goto LAB_06018078;
    FUN_0447a8a8(lVar5,uVar6,*(undefined8 *)PTR_DAT_067c93e0);
    plVar9 = *(long **)(unaff_x19 + 0xa0);
    if (plVar9 == (long *)0x0) goto LAB_06018078;
    lVar5 = *plVar9;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
          puVar4 = (undefined8 *)(lVar5 + (long)(*piVar8 + 1) * 0x10 + 0x138);
          goto LAB_06017b6c;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_02f421d0(plVar9,*(long *)puVar1,1);
LAB_06017b6c:
    lVar5 = (*(code *)*puVar4)(plVar9,puVar4[1]);
    uVar6 = thunk_FUN_02f45270(*(undefined8 *)PTR_DAT_067c93d8);
    FUN_04477a3c();
    if (lVar5 == 0) goto LAB_06018078;
    FUN_0447a8a8(lVar5,uVar6,*(undefined8 *)PTR_DAT_067c93e8);
  }
  puVar1 = Method_Unity_Burst_Intrinsics_Arm_Neon_vcgeq_u64__;
  plVar9 = *(long **)(unaff_x19 + 0xa8);
  if (plVar9 != (long *)0x0) {
    lVar5 = *plVar9;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vcgeq_u64__) {
          puVar4 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_06017c20;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)
             FUN_02f421d0(plVar9,*(long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vcgeq_u64__,0);
LAB_06017c20:
    lVar5 = (*(code *)*puVar4)(plVar9,puVar4[1]);
    uVar6 = thunk_FUN_02f45270(*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__837_32__);
    FUN_04477a3c();
    if (lVar5 == 0) goto LAB_06018078;
    FUN_0447a8a8(lVar5,uVar6,*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__837_37__);
    plVar9 = *(long **)(unaff_x19 + 0xa8);
    if (plVar9 == (long *)0x0) goto LAB_06018078;
    lVar5 = *plVar9;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
          puVar4 = (undefined8 *)(lVar5 + (long)(*piVar8 + 1) * 0x10 + 0x138);
          goto LAB_06017cd0;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_02f421d0(plVar9,*(long *)puVar1,1);
LAB_06017cd0:
    lVar5 = (*(code *)*puVar4)(plVar9,puVar4[1]);
    uVar6 = thunk_FUN_02f45270(*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__837_33__);
    FUN_04477a3c();
    if (lVar5 == 0) goto LAB_06018078;
    FUN_0447a8a8(lVar5,uVar6,*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__837_35__);
  }
  puVar1 = Method_Unity_Burst_Intrinsics_Arm_Neon_vceqd_u64__;
  plVar9 = *(long **)(unaff_x19 + 0xb0);
  if (plVar9 != (long *)0x0) {
    lVar5 = *plVar9;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vceqd_u64__) {
          puVar4 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_06017d84;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)
             FUN_02f421d0(plVar9,*(long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vceqd_u64__,0);
LAB_06017d84:
    lVar5 = (*(code *)*puVar4)(plVar9,puVar4[1]);
    uVar6 = thunk_FUN_02f45270(*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__837_34__);
    FUN_04477a3c();
    if (lVar5 == 0) goto LAB_06018078;
    FUN_0447a8a8(lVar5,uVar6,*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__837_38__);
    plVar9 = *(long **)(unaff_x19 + 0xb0);
    if (plVar9 == (long *)0x0) goto LAB_06018078;
    lVar5 = *plVar9;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
          puVar4 = (undefined8 *)(lVar5 + (long)(*piVar8 + 1) * 0x10 + 0x138);
          goto LAB_06017e34;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_02f421d0(plVar9,*(long *)puVar1,1);
LAB_06017e34:
    lVar5 = (*(code *)*puVar4)(plVar9,puVar4[1]);
    uVar6 = thunk_FUN_02f45270(*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__837_31__);
    FUN_04477a3c();
    if (lVar5 == 0) goto LAB_06018078;
    FUN_0447a8a8(lVar5,uVar6,*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__837_36__);
  }
  plVar9 = *(long **)(unaff_x19 + 0xb8);
  if (plVar9 != (long *)0x0) {
    lVar5 = *plVar9;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vcle_f64__) {
          puVar4 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_06017ee8;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)
             FUN_02f421d0(plVar9,*(long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vcle_f64__,0);
LAB_06017ee8:
    plVar9 = (long *)(*(code *)*puVar4)(plVar9,puVar4[1]);
    uVar6 = thunk_FUN_02f45270(*(undefined8 *)PTR_DAT_067c9430);
    FUN_047626f8();
    if (plVar9 == (long *)0x0) goto LAB_06018078;
    lVar5 = *plVar9;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)Method_OVRPlugin_<>c_<_cctor>b__837_30__) {
          puVar4 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_06017f7c;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_02f421d0(plVar9,*(long *)Method_OVRPlugin_<>c_<_cctor>b__837_30__,0);
LAB_06017f7c:
    uVar6 = (*(code *)*puVar4)(plVar9,uVar6,puVar4[1]);
    if (*(long *)(unaff_x19 + 0x50) == 0) goto LAB_06018078;
    FUN_05f07bcc(*(long *)(unaff_x19 + 0x50),uVar6,0);
  }
  plVar9 = *(long **)(unaff_x19 + 0x90);
  *(undefined1 *)(unaff_x19 + 0xd9) = 0;
  if (plVar9 == (long *)0x0) {
LAB_06018010:
    bVar3 = 1;
  }
  else {
    lVar5 = *plVar9;
    bVar3 = *(byte *)(*(long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vqshrn_n_u64__ + 0x130);
    if ((*(byte *)(lVar5 + 0x130) < bVar3) ||
       (*(long *)(*(long *)(lVar5 + 200) + (ulong)bVar3 * 8 + -8) !=
        *(long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vqshrn_n_u64__)) {
      bVar3 = *(byte *)(*(long *)PTR_DAT_067ca0e0 + 0x130);
      if ((*(byte *)(lVar5 + 0x130) < bVar3) ||
         (*(long *)(*(long *)(lVar5 + 200) + (ulong)bVar3 * 8 + -8) != *(long *)PTR_DAT_067ca0e0))
      goto LAB_06018010;
      bVar3 = FUN_060ed0c4(plVar9,0);
    }
    else {
      lVar5 = plVar9[7];
      if (*(int *)(*unaff_x22 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      uVar7 = FUN_060f078c(lVar5,0,0);
      if ((uVar7 & 1) == 0) {
        bVar3 = 0;
      }
      else {
        if (plVar9[7] == 0) goto LAB_06018078;
        bVar3 = FUN_05f32734(plVar9[7],*(undefined8 *)(unaff_x19 + 0x90),0);
      }
    }
    bVar3 = bVar3 & 1;
  }
  *(byte *)(unaff_x19 + 0xda) = bVar3;
  FUN_060162ec();
  return;
}


