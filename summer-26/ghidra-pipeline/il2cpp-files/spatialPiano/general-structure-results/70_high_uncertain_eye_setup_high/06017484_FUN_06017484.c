/*
FUNCTION_NAME: FUN_06017484
ENTRY_POINT: 06017484
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_19;weak_xr_or_state_hits_19;validity_or_gating_hits_21;functionality_eye_api_context_without_clear_sink_hits_19
*/


void FUN_06017484(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  byte bVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  int *piVar12;
  long *plVar13;
  
  if ((DAT_06bc5359 & 1) == 0) {
    FUN_02f08768(PTR_DAT_067c9430);
    FUN_02f08768(Method_Unity_Burst_Intrinsics_Arm_Neon_vcgezq_f32__);
    FUN_02f08768(Method_Unity_Burst_Intrinsics_Arm_Neon_vcgezq_f64__);
    FUN_02f08768(PTR_DAT_067ca0e0);
    FUN_02f08768(Method_OVRPlugin_<>c_<_cctor>b__837_30__);
    FUN_02f08768(Method_Unity_Burst_Intrinsics_Arm_Neon_vceqd_u64__);
    FUN_02f08768(Method_Unity_Burst_Intrinsics_Arm_Neon_vcgeq_u64__);
    FUN_02f08768(Method_Unity_Burst_Intrinsics_Arm_Neon_vceqzd_u64__);
    FUN_02f08768(Method_Unity_Burst_Intrinsics_Arm_Neon_vcgtzs_f32__);
    FUN_02f08768(Method_Unity_Burst_Intrinsics_Arm_Neon_vcle_f64__);
    FUN_02f08768(Method_Unity_Burst_Intrinsics_Arm_Neon_vcgeq_s8__);
    FUN_02f08768(PTR_DAT_067c8f20);
    FUN_02f08768(Method_OVRPlugin_<>c_<_cctor>b__837_31__);
    FUN_02f08768(Method_OVRPlugin_<>c_<_cctor>b__837_32__);
    FUN_02f08768(PTR_DAT_067c93c8);
    FUN_02f08768(Method_Unity_Burst_Intrinsics_Arm_Neon_vget_lane_s16__);
    FUN_02f08768(Method_OVRPlugin_<>c_<_cctor>b__837_33__);
    FUN_02f08768(PTR_DAT_067c93d8);
    FUN_02f08768(Method_Unity_Burst_Intrinsics_Arm_Neon_vget_lane_s32__);
    FUN_02f08768(Method_OVRPlugin_<>c_<_cctor>b__837_34__);
    FUN_02f08768(Method_Unity_Burst_Intrinsics_Arm_Neon_vget_lane_s8__);
    FUN_02f08768(Method_OVRPlugin_<>c_<_cctor>b__837_35__);
    FUN_02f08768(Method_OVRPlugin_<>c_<_cctor>b__837_36__);
    FUN_02f08768(Method_OVRPlugin_<>c_<_cctor>b__837_37__);
    FUN_02f08768(Method_Unity_Burst_Intrinsics_Arm_Neon_vget_lane_u16__);
    FUN_02f08768(PTR_DAT_067c93e0);
    FUN_02f08768(PTR_DAT_067c93e8);
    FUN_02f08768(Method_OVRPlugin_<>c_<_cctor>b__837_38__);
    FUN_02f08768(Method_Unity_Burst_Intrinsics_Arm_Neon_vqshrn_n_u64__);
    DAT_06bc5359 = 1;
  }
  FUN_0601579c(param_1);
  puVar1 = PTR_DAT_067c8f20;
  plVar13 = (long *)param_1[0x12];
  if (plVar13 != (long *)0x0) {
    lVar8 = *(long *)PTR_DAT_067c8f20;
    if ((*(byte *)(lVar8 + 0x130) <= *(byte *)(*plVar13 + 0x130)) &&
       (*(long *)(*(long *)(*plVar13 + 200) + (ulong)*(byte *)(lVar8 + 0x130) * 8 + -8) == lVar8)) {
      if (*(int *)(lVar8 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      bVar7 = FUN_060f078c(plVar13,0,0);
      *(byte *)(param_1 + 0x1b) = bVar7 & 1;
      if ((bVar7 & 1) == 0) goto LAB_06017654;
      plVar13 = (long *)param_1[0x12];
      uVar9 = thunk_FUN_02f45270(*(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vcgezq_f32__)
      ;
      FUN_0476105c(uVar9,param_1,*(undefined8 *)(*param_1 + 0x230),0);
      puVar2 = Method_Unity_Burst_Intrinsics_Arm_Neon_vcgtzs_f32__;
      if (plVar13 == (long *)0x0) {
LAB_06018078:
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      lVar8 = *plVar13;
      uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) ==
              *(long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vcgtzs_f32__) {
            puVar10 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_0601771c;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar10 = (undefined8 *)
                FUN_02f421d0(plVar13,*(long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vcgtzs_f32__,0)
      ;
LAB_0601771c:
      (*(code *)*puVar10)(plVar13,uVar9,puVar10[1]);
      plVar13 = (long *)param_1[0x12];
      uVar9 = thunk_FUN_02f45270(*(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vcgezq_f64__)
      ;
      FUN_0476105c(uVar9,param_1,*(undefined8 *)(*param_1 + 0x240),0);
      if (plVar13 == (long *)0x0) goto LAB_06018078;
      lVar8 = *plVar13;
      uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
            puVar10 = (undefined8 *)(lVar8 + (long)(*piVar12 + 2) * 0x10 + 0x138);
            goto LAB_060177ac;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar10 = (undefined8 *)FUN_02f421d0(plVar13,*(long *)puVar2,2);
LAB_060177ac:
      (*(code *)*puVar10)(plVar13,uVar9,puVar10[1]);
      puVar2 = Method_Unity_Burst_Intrinsics_Arm_Neon_vceqzd_u64__;
      plVar13 = (long *)param_1[0x13];
      if (plVar13 != (long *)0x0) {
        lVar8 = *plVar13;
        uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) ==
                *(long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vceqzd_u64__) {
              puVar10 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_06017818;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar10 = (undefined8 *)
                  FUN_02f421d0(plVar13,*(long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vceqzd_u64__,
                               0);
LAB_06017818:
        lVar8 = (*(code *)*puVar10)(plVar13,puVar10[1]);
        puVar3 = Method_Unity_Burst_Intrinsics_Arm_Neon_vget_lane_s16__;
        uVar9 = thunk_FUN_02f45270(*(undefined8 *)
                                    Method_Unity_Burst_Intrinsics_Arm_Neon_vget_lane_s16__);
        FUN_04477a3c(uVar9,param_1,*(undefined8 *)(*param_1 + 0x250),0);
        puVar6 = Method_Unity_Burst_Intrinsics_Arm_Neon_vget_lane_u16__;
        if (lVar8 == 0) goto LAB_06018078;
        FUN_0447a8a8(lVar8,uVar9,
                     *(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vget_lane_u16__);
        plVar13 = (long *)param_1[0x13];
        if (plVar13 == (long *)0x0) goto LAB_06018078;
        lVar8 = *plVar13;
        uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
              puVar10 = (undefined8 *)(lVar8 + (long)(*piVar12 + 1) * 0x10 + 0x138);
              goto LAB_060178c8;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar10 = (undefined8 *)FUN_02f421d0(plVar13,*(long *)puVar2,1);
LAB_060178c8:
        lVar8 = (*(code *)*puVar10)(plVar13,puVar10[1]);
        puVar4 = Method_Unity_Burst_Intrinsics_Arm_Neon_vget_lane_s32__;
        uVar9 = thunk_FUN_02f45270(*(undefined8 *)
                                    Method_Unity_Burst_Intrinsics_Arm_Neon_vget_lane_s32__);
        FUN_04477a3c(uVar9,param_1,*(undefined8 *)(*param_1 + 0x260),0);
        puVar5 = Method_Unity_Burst_Intrinsics_Arm_Neon_vget_lane_s8__;
        if (lVar8 == 0) goto LAB_06018078;
        FUN_0447a8a8(lVar8,uVar9,
                     *(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vget_lane_s8__);
        plVar13 = (long *)param_1[0x13];
        if (plVar13 == (long *)0x0) goto LAB_06018078;
        lVar8 = *plVar13;
        uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
              puVar10 = (undefined8 *)(lVar8 + (long)(*piVar12 + 2) * 0x10 + 0x138);
              goto LAB_06017978;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar10 = (undefined8 *)FUN_02f421d0(plVar13,*(long *)puVar2,2);
LAB_06017978:
        lVar8 = (*(code *)*puVar10)(plVar13,puVar10[1]);
        uVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar3);
        FUN_04477a3c(uVar9,param_1,*(undefined8 *)(*param_1 + 0x270),0);
        if (lVar8 == 0) goto LAB_06018078;
        FUN_0447a8a8(lVar8,uVar9,*(undefined8 *)puVar6);
        plVar13 = (long *)param_1[0x13];
        if (plVar13 == (long *)0x0) goto LAB_06018078;
        lVar8 = *plVar13;
        uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
              puVar10 = (undefined8 *)(lVar8 + (long)(*piVar12 + 3) * 0x10 + 0x138);
              goto LAB_06017a18;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar10 = (undefined8 *)FUN_02f421d0(plVar13,*(long *)puVar2,3);
LAB_06017a18:
        lVar8 = (*(code *)*puVar10)(plVar13,puVar10[1]);
        uVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
        FUN_04477a3c(uVar9,param_1,*(undefined8 *)(*param_1 + 0x280),0);
        if (lVar8 == 0) goto LAB_06018078;
        FUN_0447a8a8(lVar8,uVar9,*(undefined8 *)puVar5);
      }
      puVar2 = Method_Unity_Burst_Intrinsics_Arm_Neon_vcgeq_s8__;
      plVar13 = (long *)param_1[0x14];
      if (plVar13 != (long *)0x0) {
        lVar8 = *plVar13;
        uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) ==
                *(long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vcgeq_s8__) {
              puVar10 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_06017abc;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar10 = (undefined8 *)
                  FUN_02f421d0(plVar13,*(long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vcgeq_s8__,0)
        ;
LAB_06017abc:
        lVar8 = (*(code *)*puVar10)(plVar13,puVar10[1]);
        uVar9 = thunk_FUN_02f45270(*(undefined8 *)PTR_DAT_067c93c8);
        FUN_04477a3c(uVar9,param_1,*(undefined8 *)(*param_1 + 0x290),0);
        if (lVar8 == 0) goto LAB_06018078;
        FUN_0447a8a8(lVar8,uVar9,*(undefined8 *)PTR_DAT_067c93e0);
        plVar13 = (long *)param_1[0x14];
        if (plVar13 == (long *)0x0) goto LAB_06018078;
        lVar8 = *plVar13;
        uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
              puVar10 = (undefined8 *)(lVar8 + (long)(*piVar12 + 1) * 0x10 + 0x138);
              goto LAB_06017b6c;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar10 = (undefined8 *)FUN_02f421d0(plVar13,*(long *)puVar2,1);
LAB_06017b6c:
        lVar8 = (*(code *)*puVar10)(plVar13,puVar10[1]);
        uVar9 = thunk_FUN_02f45270(*(undefined8 *)PTR_DAT_067c93d8);
        FUN_04477a3c(uVar9,param_1,*(undefined8 *)(*param_1 + 0x2a0),0);
        if (lVar8 == 0) goto LAB_06018078;
        FUN_0447a8a8(lVar8,uVar9,*(undefined8 *)PTR_DAT_067c93e8);
      }
      puVar2 = Method_Unity_Burst_Intrinsics_Arm_Neon_vcgeq_u64__;
      plVar13 = (long *)param_1[0x15];
      if (plVar13 != (long *)0x0) {
        lVar8 = *plVar13;
        uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) ==
                *(long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vcgeq_u64__) {
              puVar10 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_06017c20;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar10 = (undefined8 *)
                  FUN_02f421d0(plVar13,*(long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vcgeq_u64__,0
                              );
LAB_06017c20:
        lVar8 = (*(code *)*puVar10)(plVar13,puVar10[1]);
        uVar9 = thunk_FUN_02f45270(*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__837_32__);
        FUN_04477a3c(uVar9,param_1,*(undefined8 *)(*param_1 + 0x2b0),0);
        if (lVar8 == 0) goto LAB_06018078;
        FUN_0447a8a8(lVar8,uVar9,*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__837_37__);
        plVar13 = (long *)param_1[0x15];
        if (plVar13 == (long *)0x0) goto LAB_06018078;
        lVar8 = *plVar13;
        uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
              puVar10 = (undefined8 *)(lVar8 + (long)(*piVar12 + 1) * 0x10 + 0x138);
              goto LAB_06017cd0;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar10 = (undefined8 *)FUN_02f421d0(plVar13,*(long *)puVar2,1);
LAB_06017cd0:
        lVar8 = (*(code *)*puVar10)(plVar13,puVar10[1]);
        uVar9 = thunk_FUN_02f45270(*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__837_33__);
        FUN_04477a3c(uVar9,param_1,*(undefined8 *)(*param_1 + 0x2c0),0);
        if (lVar8 == 0) goto LAB_06018078;
        FUN_0447a8a8(lVar8,uVar9,*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__837_35__);
      }
      puVar2 = Method_Unity_Burst_Intrinsics_Arm_Neon_vceqd_u64__;
      plVar13 = (long *)param_1[0x16];
      if (plVar13 != (long *)0x0) {
        lVar8 = *plVar13;
        uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) ==
                *(long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vceqd_u64__) {
              puVar10 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_06017d84;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar10 = (undefined8 *)
                  FUN_02f421d0(plVar13,*(long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vceqd_u64__,0
                              );
LAB_06017d84:
        lVar8 = (*(code *)*puVar10)(plVar13,puVar10[1]);
        uVar9 = thunk_FUN_02f45270(*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__837_34__);
        FUN_04477a3c(uVar9,param_1,*(undefined8 *)(*param_1 + 0x2d0),0);
        if (lVar8 == 0) goto LAB_06018078;
        FUN_0447a8a8(lVar8,uVar9,*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__837_38__);
        plVar13 = (long *)param_1[0x16];
        if (plVar13 == (long *)0x0) goto LAB_06018078;
        lVar8 = *plVar13;
        uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
              puVar10 = (undefined8 *)(lVar8 + (long)(*piVar12 + 1) * 0x10 + 0x138);
              goto LAB_06017e34;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar10 = (undefined8 *)FUN_02f421d0(plVar13,*(long *)puVar2,1);
LAB_06017e34:
        lVar8 = (*(code *)*puVar10)(plVar13,puVar10[1]);
        uVar9 = thunk_FUN_02f45270(*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__837_31__);
        FUN_04477a3c(uVar9,param_1,*(undefined8 *)(*param_1 + 0x2e0),0);
        if (lVar8 == 0) goto LAB_06018078;
        FUN_0447a8a8(lVar8,uVar9,*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__837_36__);
      }
      plVar13 = (long *)param_1[0x17];
      if (plVar13 != (long *)0x0) {
        lVar8 = *plVar13;
        uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) ==
                *(long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vcle_f64__) {
              puVar10 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_06017ee8;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar10 = (undefined8 *)
                  FUN_02f421d0(plVar13,*(long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vcle_f64__,0)
        ;
LAB_06017ee8:
        plVar13 = (long *)(*(code *)*puVar10)(plVar13,puVar10[1]);
        uVar9 = thunk_FUN_02f45270(*(undefined8 *)PTR_DAT_067c9430);
        FUN_047626f8(uVar9,param_1,*(undefined8 *)(*param_1 + 0x2f0),0);
        if (plVar13 == (long *)0x0) goto LAB_06018078;
        lVar8 = *plVar13;
        uVar11 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)Method_OVRPlugin_<>c_<_cctor>b__837_30__) {
              puVar10 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_06017f7c;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar10 = (undefined8 *)
                  FUN_02f421d0(plVar13,*(long *)Method_OVRPlugin_<>c_<_cctor>b__837_30__,0);
LAB_06017f7c:
        uVar9 = (*(code *)*puVar10)(plVar13,uVar9,puVar10[1]);
        if (param_1[10] == 0) goto LAB_06018078;
        FUN_05f07bcc(param_1[10],uVar9,0);
      }
      plVar13 = (long *)param_1[0x12];
      *(undefined1 *)((long)param_1 + 0xd9) = 0;
      if (plVar13 == (long *)0x0) {
LAB_06018010:
        bVar7 = 1;
      }
      else {
        lVar8 = *plVar13;
        bVar7 = *(byte *)(*(long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vqshrn_n_u64__ + 0x130);
        if ((*(byte *)(lVar8 + 0x130) < bVar7) ||
           (*(long *)(*(long *)(lVar8 + 200) + (ulong)bVar7 * 8 + -8) !=
            *(long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vqshrn_n_u64__)) {
          bVar7 = *(byte *)(*(long *)PTR_DAT_067ca0e0 + 0x130);
          if ((*(byte *)(lVar8 + 0x130) < bVar7) ||
             (*(long *)(*(long *)(lVar8 + 200) + (ulong)bVar7 * 8 + -8) != *(long *)PTR_DAT_067ca0e0
             )) goto LAB_06018010;
          bVar7 = FUN_060ed0c4(plVar13,0);
        }
        else {
          lVar8 = plVar13[7];
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_02f6670c();
          }
          uVar11 = FUN_060f078c(lVar8,0,0);
          if ((uVar11 & 1) == 0) {
            bVar7 = 0;
          }
          else {
            if (plVar13[7] == 0) goto LAB_06018078;
            bVar7 = FUN_05f32734(plVar13[7],param_1[0x12],0);
          }
        }
        bVar7 = bVar7 & 1;
      }
      *(byte *)((long)param_1 + 0xda) = bVar7;
      goto LAB_06017654;
    }
  }
  *(undefined1 *)(param_1 + 0x1b) = 0;
LAB_06017654:
  FUN_060162ec(param_1);
  return;
}


