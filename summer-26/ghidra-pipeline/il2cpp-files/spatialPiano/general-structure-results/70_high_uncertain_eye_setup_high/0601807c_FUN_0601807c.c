/*
FUNCTION_NAME: FUN_0601807c
ENTRY_POINT: 0601807c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_16;weak_xr_or_state_hits_16;validity_or_gating_hits_21;functionality_eye_api_context_without_clear_sink_hits_16
*/


void FUN_0601807c(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long *plVar11;
  
  if ((DAT_06bc535a & 1) == 0) {
    FUN_02f08768(Method_Unity_Burst_Intrinsics_Arm_Neon_vcgezq_f32__);
    FUN_02f08768(Method_Unity_Burst_Intrinsics_Arm_Neon_vcgezq_f64__);
    FUN_02f08768(Method_Unity_Burst_Intrinsics_Arm_Neon_vceqd_u64__);
    FUN_02f08768(Method_Unity_Burst_Intrinsics_Arm_Neon_vcgeq_u64__);
    FUN_02f08768(Method_Unity_Burst_Intrinsics_Arm_Neon_vceqzd_u64__);
    FUN_02f08768(Method_Unity_Burst_Intrinsics_Arm_Neon_vcgtzs_f32__);
    FUN_02f08768(Method_Unity_Burst_Intrinsics_Arm_Neon_vcgeq_s8__);
    FUN_02f08768(Method_OVRPlugin_<>c_<_cctor>b__837_31__);
    FUN_02f08768(Method_OVRPlugin_<>c_<_cctor>b__837_32__);
    FUN_02f08768(PTR_DAT_067c93c8);
    FUN_02f08768(Method_Unity_Burst_Intrinsics_Arm_Neon_vget_lane_s16__);
    FUN_02f08768(Method_OVRPlugin_<>c_<_cctor>b__837_33__);
    FUN_02f08768(PTR_DAT_067c93d8);
    FUN_02f08768(Method_Unity_Burst_Intrinsics_Arm_Neon_vget_lane_s32__);
    FUN_02f08768(Method_OVRPlugin_<>c_<_cctor>b__837_34__);
    FUN_02f08768(PTR_DAT_067c93f8);
    FUN_02f08768(Method_Unity_Burst_Intrinsics_Arm_Neon_vgetq_lane_f32__);
    FUN_02f08768(Method_OVRPlugin_<>c_<_cctor>b__837_39__);
    FUN_02f08768(PTR_DAT_067c9400);
    FUN_02f08768(Method_OVRPlugin_<>c_<_cctor>b__837_4__);
    FUN_02f08768(Method_OVRPlugin_<>c_<_cctor>b__837_40__);
    FUN_02f08768(Method_Unity_Burst_Intrinsics_Arm_Neon_vgetq_lane_f64__);
    FUN_02f08768(Method_OVRPlugin_<>c_<_cctor>b__837_41__);
    DAT_06bc535a = 1;
  }
  if (param_1[10] == 0) goto LAB_060189e8;
  UnityEngine_XR_Interaction_Toolkit_AR_TwoFingerDragGesture__set_fingerId1(param_1[10],0);
  if ((char)param_1[0x1b] != '\0') {
    plVar11 = (long *)param_1[0x12];
    uVar6 = thunk_FUN_02f45270(*(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vcgezq_f32__);
    FUN_0476105c(uVar6,param_1,*(undefined8 *)(*param_1 + 0x230),0);
    puVar2 = Method_Unity_Burst_Intrinsics_Arm_Neon_vcgtzs_f32__;
    puVar1 = Method_Unity_Burst_Intrinsics_Arm_Neon_vcgezq_f64__;
    if (plVar11 != (long *)0x0) {
      lVar8 = *plVar11;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) ==
              *(long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vcgtzs_f32__) {
            puVar7 = (undefined8 *)(lVar8 + (long)(*piVar10 + 1) * 0x10 + 0x138);
            goto LAB_06018264;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar7 = (undefined8 *)
               FUN_02f421d0(plVar11,*(long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vcgtzs_f32__,1);
LAB_06018264:
      (*(code *)*puVar7)(plVar11,uVar6,puVar7[1]);
      plVar11 = (long *)param_1[0x12];
      uVar6 = thunk_FUN_02f45270(*(undefined8 *)puVar1);
      FUN_0476105c(uVar6,param_1,*(undefined8 *)(*param_1 + 0x240),0);
      if (plVar11 != (long *)0x0) {
        lVar8 = *plVar11;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)puVar2) {
              puVar7 = (undefined8 *)(lVar8 + (long)(*piVar10 + 3) * 0x10 + 0x138);
              goto LAB_060182ec;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar7 = (undefined8 *)FUN_02f421d0(plVar11,*(long *)puVar2,3);
LAB_060182ec:
        (*(code *)*puVar7)(plVar11,uVar6,puVar7[1]);
        puVar1 = Method_Unity_Burst_Intrinsics_Arm_Neon_vceqzd_u64__;
        plVar11 = (long *)param_1[0x13];
        if (plVar11 != (long *)0x0) {
          lVar8 = *plVar11;
          uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar9 != 0) {
            piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) ==
                  *(long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vceqzd_u64__) {
                puVar7 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
                goto LAB_06018358;
              }
              uVar9 = uVar9 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar9 != 0);
          }
          puVar7 = (undefined8 *)
                   FUN_02f421d0(plVar11,*(long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vceqzd_u64__
                                ,0);
LAB_06018358:
          lVar8 = (*(code *)*puVar7)(plVar11,puVar7[1]);
          puVar2 = Method_Unity_Burst_Intrinsics_Arm_Neon_vget_lane_s16__;
          uVar6 = thunk_FUN_02f45270(*(undefined8 *)
                                      Method_Unity_Burst_Intrinsics_Arm_Neon_vget_lane_s16__);
          FUN_04477a3c(uVar6,param_1,*(undefined8 *)(*param_1 + 0x250),0);
          puVar4 = Method_Unity_Burst_Intrinsics_Arm_Neon_vgetq_lane_f32__;
          if (lVar8 == 0) goto LAB_060189e8;
          FUN_0447a8e4(lVar8,uVar6,
                       *(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vgetq_lane_f32__);
          plVar11 = (long *)param_1[0x13];
          if (plVar11 == (long *)0x0) goto LAB_060189e8;
          lVar8 = *plVar11;
          uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar9 != 0) {
            piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
                puVar7 = (undefined8 *)(lVar8 + (long)(*piVar10 + 1) * 0x10 + 0x138);
                goto LAB_06018408;
              }
              uVar9 = uVar9 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar9 != 0);
          }
          puVar7 = (undefined8 *)FUN_02f421d0(plVar11,*(long *)puVar1,1);
LAB_06018408:
          lVar8 = (*(code *)*puVar7)(plVar11,puVar7[1]);
          puVar3 = Method_Unity_Burst_Intrinsics_Arm_Neon_vget_lane_s32__;
          uVar6 = thunk_FUN_02f45270(*(undefined8 *)
                                      Method_Unity_Burst_Intrinsics_Arm_Neon_vget_lane_s32__);
          FUN_04477a3c(uVar6,param_1,*(undefined8 *)(*param_1 + 0x260),0);
          puVar5 = Method_Unity_Burst_Intrinsics_Arm_Neon_vgetq_lane_f64__;
          if (lVar8 == 0) goto LAB_060189e8;
          FUN_0447a8e4(lVar8,uVar6,
                       *(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vgetq_lane_f64__);
          plVar11 = (long *)param_1[0x13];
          if (plVar11 == (long *)0x0) goto LAB_060189e8;
          lVar8 = *plVar11;
          uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar9 != 0) {
            piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
                puVar7 = (undefined8 *)(lVar8 + (long)(*piVar10 + 2) * 0x10 + 0x138);
                goto LAB_060184b8;
              }
              uVar9 = uVar9 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar9 != 0);
          }
          puVar7 = (undefined8 *)FUN_02f421d0(plVar11,*(long *)puVar1,2);
LAB_060184b8:
          lVar8 = (*(code *)*puVar7)(plVar11,puVar7[1]);
          uVar6 = thunk_FUN_02f45270(*(undefined8 *)puVar2);
          FUN_04477a3c(uVar6,param_1,*(undefined8 *)(*param_1 + 0x270),0);
          if (lVar8 == 0) goto LAB_060189e8;
          FUN_0447a8e4(lVar8,uVar6,*(undefined8 *)puVar4);
          plVar11 = (long *)param_1[0x13];
          if (plVar11 == (long *)0x0) goto LAB_060189e8;
          lVar8 = *plVar11;
          uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar9 != 0) {
            piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
                puVar7 = (undefined8 *)(lVar8 + (long)(*piVar10 + 3) * 0x10 + 0x138);
                goto LAB_06018558;
              }
              uVar9 = uVar9 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar9 != 0);
          }
          puVar7 = (undefined8 *)FUN_02f421d0(plVar11,*(long *)puVar1,3);
LAB_06018558:
          lVar8 = (*(code *)*puVar7)(plVar11,puVar7[1]);
          uVar6 = thunk_FUN_02f45270(*(undefined8 *)puVar3);
          FUN_04477a3c(uVar6,param_1,*(undefined8 *)(*param_1 + 0x280),0);
          if (lVar8 == 0) goto LAB_060189e8;
          FUN_0447a8e4(lVar8,uVar6,*(undefined8 *)puVar5);
        }
        puVar1 = Method_Unity_Burst_Intrinsics_Arm_Neon_vcgeq_s8__;
        plVar11 = (long *)param_1[0x14];
        if (plVar11 != (long *)0x0) {
          lVar8 = *plVar11;
          uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar9 != 0) {
            piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) ==
                  *(long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vcgeq_s8__) {
                puVar7 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
                goto LAB_060185fc;
              }
              uVar9 = uVar9 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar9 != 0);
          }
          puVar7 = (undefined8 *)
                   FUN_02f421d0(plVar11,*(long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vcgeq_s8__,0
                               );
LAB_060185fc:
          lVar8 = (*(code *)*puVar7)(plVar11,puVar7[1]);
          uVar6 = thunk_FUN_02f45270(*(undefined8 *)PTR_DAT_067c93c8);
          FUN_04477a3c(uVar6,param_1,*(undefined8 *)(*param_1 + 0x290),0);
          if (lVar8 == 0) goto LAB_060189e8;
          FUN_0447a8e4(lVar8,uVar6,*(undefined8 *)PTR_DAT_067c93f8);
          plVar11 = (long *)param_1[0x14];
          if (plVar11 == (long *)0x0) goto LAB_060189e8;
          lVar8 = *plVar11;
          uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar9 != 0) {
            piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
                puVar7 = (undefined8 *)(lVar8 + (long)(*piVar10 + 1) * 0x10 + 0x138);
                goto LAB_060186ac;
              }
              uVar9 = uVar9 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar9 != 0);
          }
          puVar7 = (undefined8 *)FUN_02f421d0(plVar11,*(long *)puVar1,1);
LAB_060186ac:
          lVar8 = (*(code *)*puVar7)(plVar11,puVar7[1]);
          uVar6 = thunk_FUN_02f45270(*(undefined8 *)PTR_DAT_067c93d8);
          FUN_04477a3c(uVar6,param_1,*(undefined8 *)(*param_1 + 0x2a0),0);
          if (lVar8 == 0) goto LAB_060189e8;
          FUN_0447a8e4(lVar8,uVar6,*(undefined8 *)PTR_DAT_067c9400);
        }
        puVar1 = Method_Unity_Burst_Intrinsics_Arm_Neon_vcgeq_u64__;
        plVar11 = (long *)param_1[0x15];
        if (plVar11 != (long *)0x0) {
          lVar8 = *plVar11;
          uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar9 != 0) {
            piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) ==
                  *(long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vcgeq_u64__) {
                puVar7 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
                goto LAB_06018760;
              }
              uVar9 = uVar9 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar9 != 0);
          }
          puVar7 = (undefined8 *)
                   FUN_02f421d0(plVar11,*(long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vcgeq_u64__,
                                0);
LAB_06018760:
          lVar8 = (*(code *)*puVar7)(plVar11,puVar7[1]);
          uVar6 = thunk_FUN_02f45270(*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__837_32__);
          FUN_04477a3c(uVar6,param_1,*(undefined8 *)(*param_1 + 0x2b0),0);
          if (lVar8 == 0) goto LAB_060189e8;
          FUN_0447a8e4(lVar8,uVar6,*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__837_41__);
          plVar11 = (long *)param_1[0x15];
          if (plVar11 == (long *)0x0) goto LAB_060189e8;
          lVar8 = *plVar11;
          uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar9 != 0) {
            piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
                puVar7 = (undefined8 *)(lVar8 + (long)(*piVar10 + 1) * 0x10 + 0x138);
                goto LAB_06018810;
              }
              uVar9 = uVar9 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar9 != 0);
          }
          puVar7 = (undefined8 *)FUN_02f421d0(plVar11,*(long *)puVar1,1);
LAB_06018810:
          lVar8 = (*(code *)*puVar7)(plVar11,puVar7[1]);
          uVar6 = thunk_FUN_02f45270(*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__837_33__);
          FUN_04477a3c(uVar6,param_1,*(undefined8 *)(*param_1 + 0x2c0),0);
          if (lVar8 == 0) goto LAB_060189e8;
          FUN_0447a8e4(lVar8,uVar6,*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__837_39__);
        }
        puVar1 = Method_Unity_Burst_Intrinsics_Arm_Neon_vceqd_u64__;
        plVar11 = (long *)param_1[0x16];
        if (plVar11 == (long *)0x0) goto LAB_060189cc;
        lVar8 = *plVar11;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) ==
                *(long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vceqd_u64__) {
              puVar7 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_060188c4;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar7 = (undefined8 *)
                 FUN_02f421d0(plVar11,*(long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vceqd_u64__,0)
        ;
LAB_060188c4:
        lVar8 = (*(code *)*puVar7)(plVar11,puVar7[1]);
        uVar6 = thunk_FUN_02f45270(*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__837_34__);
        FUN_04477a3c(uVar6,param_1,*(undefined8 *)(*param_1 + 0x2d0),0);
        if (lVar8 != 0) {
          FUN_0447a8e4(lVar8,uVar6,*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__837_4__);
          plVar11 = (long *)param_1[0x16];
          if (plVar11 != (long *)0x0) {
            lVar8 = *plVar11;
            uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
            if (uVar9 != 0) {
              piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
              do {
                if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
                  puVar7 = (undefined8 *)(lVar8 + (long)(*piVar10 + 1) * 0x10 + 0x138);
                  goto LAB_06018974;
                }
                uVar9 = uVar9 - 1;
                piVar10 = piVar10 + 4;
              } while (uVar9 != 0);
            }
            puVar7 = (undefined8 *)FUN_02f421d0(plVar11,*(long *)puVar1,1);
LAB_06018974:
            lVar8 = (*(code *)*puVar7)(plVar11,puVar7[1]);
            uVar6 = thunk_FUN_02f45270(*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__837_31__);
            FUN_04477a3c(uVar6,param_1,*(undefined8 *)(*param_1 + 0x2e0),0);
            if (lVar8 != 0) {
              FUN_0447a8e4(lVar8,uVar6,*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__837_40__);
              goto LAB_060189cc;
            }
          }
        }
      }
    }
LAB_060189e8:
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
LAB_060189cc:
  *(undefined1 *)(param_1 + 0x1b) = 0;
  return;
}


