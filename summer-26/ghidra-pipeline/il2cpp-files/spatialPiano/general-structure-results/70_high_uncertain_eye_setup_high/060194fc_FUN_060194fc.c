/*
FUNCTION_NAME: FUN_060194fc
ENTRY_POINT: 060194fc
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_15;functionality_eye_api_context_without_clear_sink_hits_3
*/


void FUN_060194fc(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  byte bVar3;
  undefined2 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  int *piVar9;
  long *plVar10;
  
  if ((DAT_06bc5363 & 1) == 0) {
    FUN_02f08768(PTR_DAT_067c9430);
    FUN_02f08768(Method_Unity_Burst_Intrinsics_Arm_Neon_vcgezd_s64__);
    FUN_02f08768(Method_Unity_Burst_Intrinsics_Arm_Neon_vcgezd_f64__);
    FUN_02f08768(PTR_DAT_067ca0e0);
    FUN_02f08768(Method_OVRPlugin_<>c_<_cctor>b__837_30__);
    FUN_02f08768(Method_Unity_Burst_Intrinsics_Arm_Neon_vcgeq_f64__);
    FUN_02f08768(Method_Unity_Burst_Intrinsics_Arm_Neon_vcle_s16__);
    FUN_02f08768(PTR_DAT_067c9408);
    FUN_02f08768(Method_Unity_Burst_Intrinsics_Arm_Neon_vcgeq_s64__);
    FUN_02f08768(PTR_DAT_067c8f20);
    FUN_02f08768(PTR_DAT_067c93c8);
    FUN_02f08768(Method_Unity_Burst_Intrinsics_Arm_Neon_vget_lane_s16__);
    FUN_02f08768(PTR_DAT_067c93d8);
    FUN_02f08768(Method_Unity_Burst_Intrinsics_Arm_Neon_vget_lane_s32__);
    FUN_02f08768(Method_Unity_Burst_Intrinsics_Arm_Neon_vget_lane_s8__);
    FUN_02f08768(Method_Unity_Burst_Intrinsics_Arm_Neon_vget_lane_u16__);
    FUN_02f08768(PTR_DAT_067c93e0);
    FUN_02f08768(PTR_DAT_067c93e8);
    FUN_02f08768(Method_Unity_Burst_Intrinsics_Arm_Neon_vcge_f64__);
    DAT_06bc5363 = 1;
  }
  FUN_0601579c(param_1);
  puVar1 = PTR_DAT_067c8f20;
  plVar10 = (long *)param_1[0x12];
  if (plVar10 != (long *)0x0) {
    lVar5 = *(long *)PTR_DAT_067c8f20;
    if ((*(byte *)(lVar5 + 0x130) <= *(byte *)(*plVar10 + 0x130)) &&
       (*(long *)(*(long *)(*plVar10 + 200) + (ulong)*(byte *)(lVar5 + 0x130) * 8 + -8) == lVar5)) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
      bVar3 = FUN_060f078c(plVar10,0,0);
      *(byte *)(param_1 + 0x18) = bVar3 & 1;
      if ((bVar3 & 1) == 0) goto LAB_0601964c;
      plVar10 = (long *)param_1[0x12];
      uVar6 = thunk_FUN_02f45270(*(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vcgezd_f64__)
      ;
      FUN_0476105c(uVar6,param_1,*(undefined8 *)(*param_1 + 0x260),0);
      puVar2 = PTR_DAT_067c9408;
      if (plVar10 == (long *)0x0) {
LAB_06019cc4:
                    /* WARNING: Subroutine does not return */
        FUN_02f089c8();
      }
      lVar5 = *plVar10;
      uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_067c9408) {
            puVar7 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_06019728;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar7 = (undefined8 *)FUN_02f421d0(plVar10,*(long *)PTR_DAT_067c9408,0);
LAB_06019728:
      (*(code *)*puVar7)(plVar10,uVar6,puVar7[1]);
      plVar10 = (long *)param_1[0x12];
      uVar6 = thunk_FUN_02f45270(*(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vcgezd_s64__)
      ;
      FUN_0476105c(uVar6,param_1,*(undefined8 *)(*param_1 + 0x270),0);
      if (plVar10 == (long *)0x0) goto LAB_06019cc4;
      lVar5 = *plVar10;
      uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
            puVar7 = (undefined8 *)(lVar5 + (long)(*piVar9 + 2) * 0x10 + 0x138);
            goto LAB_060197b8;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar7 = (undefined8 *)FUN_02f421d0(plVar10,*(long *)puVar2,2);
LAB_060197b8:
      (*(code *)*puVar7)(plVar10,uVar6,puVar7[1]);
      puVar2 = Method_Unity_Burst_Intrinsics_Arm_Neon_vcgeq_f64__;
      if (*(char *)((long)param_1 + 0xc3) != '\0') {
        plVar10 = (long *)param_1[0x13];
        if (plVar10 == (long *)0x0) goto LAB_06019cc4;
        lVar5 = *plVar10;
        uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) ==
                *(long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vcgeq_f64__) {
              puVar7 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_0601982c;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar7 = (undefined8 *)
                 FUN_02f421d0(plVar10,*(long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vcgeq_f64__,0)
        ;
LAB_0601982c:
        lVar5 = (*(code *)*puVar7)(plVar10,puVar7[1]);
        uVar6 = thunk_FUN_02f45270(*(undefined8 *)
                                    Method_Unity_Burst_Intrinsics_Arm_Neon_vget_lane_s16__);
        FUN_04477a3c(uVar6,param_1,*(undefined8 *)(*param_1 + 0x280),0);
        if (lVar5 == 0) goto LAB_06019cc4;
        FUN_0447a8a8(lVar5,uVar6,
                     *(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vget_lane_u16__);
        plVar10 = (long *)param_1[0x13];
        if (plVar10 == (long *)0x0) goto LAB_06019cc4;
        lVar5 = *plVar10;
        uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
              puVar7 = (undefined8 *)(lVar5 + (long)(*piVar9 + 1) * 0x10 + 0x138);
              goto LAB_060198dc;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar7 = (undefined8 *)FUN_02f421d0(plVar10,*(long *)puVar2,1);
LAB_060198dc:
        lVar5 = (*(code *)*puVar7)(plVar10,puVar7[1]);
        uVar6 = thunk_FUN_02f45270(*(undefined8 *)
                                    Method_Unity_Burst_Intrinsics_Arm_Neon_vget_lane_s32__);
        FUN_04477a3c(uVar6,param_1,*(undefined8 *)(*param_1 + 0x290),0);
        if (lVar5 == 0) goto LAB_06019cc4;
        FUN_0447a8a8(lVar5,uVar6,
                     *(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vget_lane_s8__);
      }
      puVar2 = Method_Unity_Burst_Intrinsics_Arm_Neon_vcgeq_s64__;
      if (*(char *)((long)param_1 + 0xc4) != '\0') {
        plVar10 = (long *)param_1[0x14];
        if (plVar10 == (long *)0x0) goto LAB_06019cc4;
        lVar5 = *plVar10;
        uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) ==
                *(long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vcgeq_s64__) {
              puVar7 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_06019998;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar7 = (undefined8 *)
                 FUN_02f421d0(plVar10,*(long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vcgeq_s64__,0)
        ;
LAB_06019998:
        lVar5 = (*(code *)*puVar7)(plVar10,puVar7[1]);
        uVar6 = thunk_FUN_02f45270(*(undefined8 *)PTR_DAT_067c93c8);
        FUN_04477a3c(uVar6,param_1,*(undefined8 *)(*param_1 + 0x2a0),0);
        if (lVar5 == 0) goto LAB_06019cc4;
        FUN_0447a8a8(lVar5,uVar6,*(undefined8 *)PTR_DAT_067c93e0);
        plVar10 = (long *)param_1[0x14];
        if (plVar10 == (long *)0x0) goto LAB_06019cc4;
        lVar5 = *plVar10;
        uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
              puVar7 = (undefined8 *)(lVar5 + (long)(*piVar9 + 1) * 0x10 + 0x138);
              goto LAB_06019a48;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar7 = (undefined8 *)FUN_02f421d0(plVar10,*(long *)puVar2,1);
LAB_06019a48:
        lVar5 = (*(code *)*puVar7)(plVar10,puVar7[1]);
        uVar6 = thunk_FUN_02f45270(*(undefined8 *)PTR_DAT_067c93d8);
        FUN_04477a3c(uVar6,param_1,*(undefined8 *)(*param_1 + 0x2b0),0);
        if (lVar5 == 0) goto LAB_06019cc4;
        FUN_0447a8a8(lVar5,uVar6,*(undefined8 *)PTR_DAT_067c93e8);
      }
      if (*(char *)((long)param_1 + 0xc5) != '\0') {
        plVar10 = (long *)param_1[0x15];
        if (plVar10 == (long *)0x0) goto LAB_06019cc4;
        lVar5 = *plVar10;
        uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *(long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vcle_s16__
               ) {
              puVar7 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_06019b04;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar7 = (undefined8 *)
                 FUN_02f421d0(plVar10,*(long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vcle_s16__,0);
LAB_06019b04:
        plVar10 = (long *)(*(code *)*puVar7)(plVar10,puVar7[1]);
        uVar6 = thunk_FUN_02f45270(*(undefined8 *)PTR_DAT_067c9430);
        FUN_047626f8(uVar6,param_1,*(undefined8 *)(*param_1 + 0x2c0),0);
        if (plVar10 == (long *)0x0) goto LAB_06019cc4;
        lVar5 = *plVar10;
        uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *(long *)Method_OVRPlugin_<>c_<_cctor>b__837_30__) {
              puVar7 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_06019b98;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar7 = (undefined8 *)
                 FUN_02f421d0(plVar10,*(long *)Method_OVRPlugin_<>c_<_cctor>b__837_30__,0);
LAB_06019b98:
        uVar6 = (*(code *)*puVar7)(plVar10,uVar6,puVar7[1]);
        if (param_1[10] == 0) goto LAB_06019cc4;
        FUN_05f07bcc(param_1[10],uVar6,0);
      }
      plVar10 = (long *)param_1[0x12];
      *(undefined1 *)(param_1 + 0x1b) = 0;
      if (plVar10 == (long *)0x0) {
LAB_06019c2c:
        bVar3 = 1;
      }
      else {
        lVar5 = *plVar10;
        bVar3 = *(byte *)(*(long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vcge_f64__ + 0x130);
        if ((*(byte *)(lVar5 + 0x130) < bVar3) ||
           (*(long *)(*(long *)(lVar5 + 200) + (ulong)bVar3 * 8 + -8) !=
            *(long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vcge_f64__)) {
          bVar3 = *(byte *)(*(long *)PTR_DAT_067ca0e0 + 0x130);
          if ((*(byte *)(lVar5 + 0x130) < bVar3) ||
             (*(long *)(*(long *)(lVar5 + 200) + (ulong)bVar3 * 8 + -8) != *(long *)PTR_DAT_067ca0e0
             )) goto LAB_06019c2c;
          bVar3 = FUN_060ed0c4(plVar10,0);
        }
        else {
          lVar5 = plVar10[6];
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_02f6670c();
          }
          uVar8 = FUN_060f078c(lVar5,0,0);
          if ((uVar8 & 1) == 0) {
            bVar3 = 0;
          }
          else {
            if (plVar10[6] == 0) goto LAB_06019cc4;
            bVar3 = FUN_05f31a54(plVar10[6],param_1[0x12],0);
          }
        }
        bVar3 = bVar3 & 1;
      }
      *(byte *)((long)param_1 + 0xd9) = bVar3;
      if (param_1[0x1e] != 0) {
        FUN_060f3324(param_1,param_1[0x1e],0);
      }
      uVar6 = FUN_06019cc8(param_1);
      lVar5 = FUN_060f30c8(param_1,uVar6,0);
      param_1[0x1e] = lVar5;
      goto LAB_0601964c;
    }
  }
  *(undefined1 *)(param_1 + 0x18) = 0;
LAB_0601964c:
  uVar4 = (**(code **)(*param_1 + 0x248))(param_1,*(undefined8 *)(*param_1 + 0x250));
  FUN_060158a0(param_1,uVar4);
  return;
}


