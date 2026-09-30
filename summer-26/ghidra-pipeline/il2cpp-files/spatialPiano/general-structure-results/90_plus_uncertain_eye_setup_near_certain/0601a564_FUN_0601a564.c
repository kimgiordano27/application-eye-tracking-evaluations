/*
FUNCTION_NAME: FUN_0601a564
ENTRY_POINT: 0601a564
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 101
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_9;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_5
*/


uint FUN_0601a564(long *param_1)

{
  undefined *puVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  uint uVar6;
  int *piVar7;
  long *plVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  if ((DAT_06bc5365 & 1) == 0) {
    FUN_02f08768(PTR_DAT_067cc1f0);
    FUN_02f08768(Method_OVRPlugin_<>c_<_cctor>b__837_30__);
    FUN_02f08768(PTR_DAT_067cc298);
    FUN_02f08768(Method_Unity_Burst_Intrinsics_Arm_Neon_vcle_s16__);
    DAT_06bc5365 = 1;
  }
  if ((char)param_1[0x18] == '\0') {
    plVar8 = (long *)param_1[5];
    if (plVar8 == (long *)0x0) goto LAB_0601aa28;
    lVar4 = *plVar8;
    uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar3 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_067cc298) {
          puVar5 = (undefined8 *)(lVar4 + (long)(*piVar7 + 3) * 0x10 + 0x138);
          goto LAB_0601a78c;
        }
        uVar3 = uVar3 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar3 != 0);
    }
    puVar5 = (undefined8 *)FUN_02f421d0(plVar8,*(long *)PTR_DAT_067cc298,3);
LAB_0601a78c:
    uVar2 = (*(code *)*puVar5)(plVar8,puVar5[1]);
    uVar6 = uVar2 >> 8 & 0xff;
    goto LAB_0601aa14;
  }
  uVar3 = (**(code **)(*param_1 + 0x218))(param_1,*(undefined8 *)(*param_1 + 0x220));
  puVar1 = PTR_DAT_067cc1f0;
  if (((uVar3 & 1) == 0) || (*(char *)((long)param_1 + 0x72) != '\0')) {
    uVar3 = (**(code **)(*param_1 + 0x1f8))(param_1,*(undefined8 *)(*param_1 + 0x200));
    if ((((uVar3 & 1) == 0) &&
        (uVar3 = (**(code **)(*param_1 + 0x208))(param_1,*(undefined8 *)(*param_1 + 0x210)),
        (uVar3 & 1) == 0)) || (*(char *)((long)param_1 + 0x71) != '\0')) {
      uVar3 = (**(code **)(*param_1 + 0x1d8))(param_1,*(undefined8 *)(*param_1 + 0x1e0));
      if ((((uVar3 & 1) == 0) &&
          (uVar3 = (**(code **)(*param_1 + 0x1e8))(param_1,*(undefined8 *)(*param_1 + 0x1f0)),
          (uVar3 & 1) == 0)) || ((char)param_1[0xe] != '\0')) {
        uVar3 = (**(code **)(*param_1 + 0x228))(param_1,*(undefined8 *)(*param_1 + 0x230));
        if (((uVar3 & 1) == 0) ||
           (uVar3 = (**(code **)(*param_1 + 0x238))(param_1,*(undefined8 *)(*param_1 + 0x240)),
           puVar1 = PTR_DAT_067cc1f0, (uVar3 & 1) != 0)) {
          puVar1 = PTR_DAT_067cc1f0;
          if (*(int *)(*(long *)PTR_DAT_067cc1f0 + 0xe4) == 0) {
            thunk_FUN_02f6670c();
          }
          if (DAT_06bc53b7 == '\0') {
            FUN_02f08768(PTR_DAT_067cc1f0);
            DAT_06bc53b7 = '\x01';
          }
          lVar4 = *(long *)puVar1;
          if (*(int *)(lVar4 + 0xe4) == 0) {
            thunk_FUN_02f6670c();
            lVar4 = *(long *)puVar1;
          }
          uVar2 = (uint)**(ushort **)(lVar4 + 0xb8);
        }
        else {
          if (*(int *)(*(long *)PTR_DAT_067cc1f0 + 0xe4) == 0) {
            thunk_FUN_02f6670c();
          }
          if (DAT_06bc53b8 == '\0') {
            FUN_02f08768(PTR_DAT_067cc1f0);
            DAT_06bc53b8 = '\x01';
          }
          lVar4 = *(long *)puVar1;
          if (*(int *)(lVar4 + 0xe4) == 0) {
            thunk_FUN_02f6670c();
            lVar4 = *(long *)puVar1;
          }
          uVar2 = (uint)*(ushort *)(*(long *)(lVar4 + 0xb8) + 2);
        }
        goto LAB_0601a8ac;
      }
      fVar9 = 0.0;
      if (*(char *)((long)param_1 + 0xc5) != '\0') {
        plVar8 = (long *)param_1[0x15];
        if (plVar8 == (long *)0x0) goto LAB_0601aa28;
        lVar4 = *plVar8;
        uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar3 != 0) {
          piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *(long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vcle_s16__
               ) {
              puVar5 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_0601a96c;
            }
            uVar3 = uVar3 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar3 != 0);
        }
        puVar5 = (undefined8 *)
                 FUN_02f421d0(plVar8,*(long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vcle_s16__,0);
LAB_0601a96c:
        plVar8 = (long *)(*(code *)*puVar5)(plVar8,puVar5[1]);
        if (plVar8 == (long *)0x0) goto LAB_0601aa28;
        lVar4 = *plVar8;
        uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar3 != 0) {
          piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *(long *)Method_OVRPlugin_<>c_<_cctor>b__837_30__) {
              puVar5 = (undefined8 *)(lVar4 + (long)(*piVar7 + 3) * 0x10 + 0x138);
              goto LAB_0601a9d8;
            }
            uVar3 = uVar3 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar3 != 0);
        }
        puVar5 = (undefined8 *)
                 FUN_02f421d0(plVar8,*(long *)Method_OVRPlugin_<>c_<_cctor>b__837_30__,3);
LAB_0601a9d8:
        fVar9 = (float)(*(code *)*puVar5)(plVar8,puVar5[1]);
      }
      uVar2 = 2;
      fVar11 = 1.0;
      if (fVar9 <= 1.0) {
        fVar11 = fVar9;
      }
      fVar10 = 0.0;
      if (0.0 <= fVar9) {
        fVar10 = fVar11 * 255.0;
      }
    }
    else {
      fVar9 = 1.0;
      if (*(char *)((long)param_1 + 0xc5) != '\0') {
        plVar8 = (long *)param_1[0x15];
        if (plVar8 == (long *)0x0) {
LAB_0601aa28:
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        lVar4 = *plVar8;
        uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar3 != 0) {
          piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *(long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vcle_s16__
               ) {
              puVar5 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_0601a8c0;
            }
            uVar3 = uVar3 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar3 != 0);
        }
        puVar5 = (undefined8 *)
                 FUN_02f421d0(plVar8,*(long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vcle_s16__,0);
LAB_0601a8c0:
        plVar8 = (long *)(*(code *)*puVar5)(plVar8,puVar5[1]);
        if (plVar8 == (long *)0x0) goto LAB_0601aa28;
        lVar4 = *plVar8;
        uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar3 != 0) {
          piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *(long *)Method_OVRPlugin_<>c_<_cctor>b__837_30__) {
              puVar5 = (undefined8 *)(lVar4 + (long)(*piVar7 + 3) * 0x10 + 0x138);
              goto LAB_0601a92c;
            }
            uVar3 = uVar3 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar3 != 0);
        }
        puVar5 = (undefined8 *)
                 FUN_02f421d0(plVar8,*(long *)Method_OVRPlugin_<>c_<_cctor>b__837_30__,3);
LAB_0601a92c:
        fVar9 = (float)(*(code *)*puVar5)(plVar8,puVar5[1]);
      }
      uVar2 = 4;
      fVar11 = 1.0;
      if (fVar9 <= 1.0) {
        fVar11 = fVar9;
      }
      fVar10 = 0.0;
      if (0.0 <= fVar9) {
        fVar10 = fVar11 * 255.0;
      }
    }
    uVar6 = (uint)fVar10;
  }
  else {
    if (*(int *)(*(long *)PTR_DAT_067cc1f0 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    if (DAT_06bc53b5 == '\0') {
      FUN_02f08768(PTR_DAT_067cc1f0);
      DAT_06bc53b5 = '\x01';
    }
    lVar4 = *(long *)puVar1;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
      lVar4 = *(long *)puVar1;
    }
    uVar2 = (uint)*(ushort *)(*(long *)(lVar4 + 0xb8) + 10);
LAB_0601a8ac:
    uVar6 = uVar2 >> 8;
  }
LAB_0601aa14:
  return uVar2 & 0xff | uVar6 << 8;
}


