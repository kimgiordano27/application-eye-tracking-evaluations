/*
FUNCTION_NAME: FUN_06016fb0
ENTRY_POINT: 06016fb0
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_4
*/


uint FUN_06016fb0(long *param_1)

{
  char cVar1;
  undefined *puVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  uint uVar7;
  int *piVar8;
  long *plVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  if ((DAT_06bc5357 & 1) == 0) {
    FUN_02f08768(PTR_DAT_067cc1f0);
    FUN_02f08768(Method_OVRPlugin_<>c_<_cctor>b__837_30__);
    FUN_02f08768(PTR_DAT_067cc298);
    FUN_02f08768(Method_Unity_Burst_Intrinsics_Arm_Neon_vcle_f64__);
    DAT_06bc5357 = 1;
  }
  if ((char)param_1[0x1b] == '\0') {
    plVar9 = (long *)param_1[5];
    if (plVar9 == (long *)0x0) goto LAB_06017458;
    lVar5 = *plVar9;
    uVar4 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar4 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_067cc298) {
          puVar6 = (undefined8 *)(lVar5 + (long)(*piVar8 + 3) * 0x10 + 0x138);
          goto LAB_06017220;
        }
        uVar4 = uVar4 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar4 != 0);
    }
    puVar6 = (undefined8 *)FUN_02f421d0(plVar9,*(long *)PTR_DAT_067cc298,3);
LAB_06017220:
    uVar3 = (*(code *)*puVar6)(plVar9,puVar6[1]);
LAB_0601722c:
    uVar7 = uVar3 >> 8 & 0xff;
    goto LAB_0601728c;
  }
  uVar4 = (**(code **)(*param_1 + 0x208))(param_1,*(undefined8 *)(*param_1 + 0x210));
  puVar2 = PTR_DAT_067cc1f0;
  if (((uVar4 & 1) == 0) || (*(char *)((long)param_1 + 0x74) != '\0')) {
    uVar4 = (**(code **)(*param_1 + 0x208))(param_1,*(undefined8 *)(*param_1 + 0x210));
    if (((uVar4 & 1) == 0) &&
       ((uVar4 = (**(code **)(*param_1 + 0x1e8))(param_1,*(undefined8 *)(*param_1 + 0x1f0)),
        (uVar4 & 1) != 0 && (*(char *)((long)param_1 + 0x73) == '\0')))) {
      fVar10 = 1.0;
      if (*(char *)((long)param_1 + 0xde) != '\0') {
        plVar9 = (long *)param_1[0x17];
        if (plVar9 == (long *)0x0) {
LAB_06017458:
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
        lVar5 = *plVar9;
        uVar4 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar4 != 0) {
          piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *(long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vcle_f64__
               ) {
              puVar6 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_060173ac;
            }
            uVar4 = uVar4 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar4 != 0);
        }
        puVar6 = (undefined8 *)
                 FUN_02f421d0(plVar9,*(long *)Method_Unity_Burst_Intrinsics_Arm_Neon_vcle_f64__,0);
LAB_060173ac:
        plVar9 = (long *)(*(code *)*puVar6)(plVar9,puVar6[1]);
        if (plVar9 == (long *)0x0) goto LAB_06017458;
        lVar5 = *plVar9;
        uVar4 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar4 != 0) {
          piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *(long *)Method_OVRPlugin_<>c_<_cctor>b__837_30__) {
              puVar6 = (undefined8 *)(lVar5 + (long)(*piVar8 + 3) * 0x10 + 0x138);
              goto LAB_06017418;
            }
            uVar4 = uVar4 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar4 != 0);
        }
        puVar6 = (undefined8 *)
                 FUN_02f421d0(plVar9,*(long *)Method_OVRPlugin_<>c_<_cctor>b__837_30__,3);
LAB_06017418:
        fVar10 = (float)(*(code *)*puVar6)(plVar9,puVar6[1]);
      }
      uVar3 = 4;
      fVar12 = 1.0;
      if (fVar10 <= 1.0) {
        fVar12 = fVar10;
      }
      fVar11 = 0.0;
      if (0.0 <= fVar10) {
        fVar11 = fVar12 * 255.0;
      }
    }
    else {
      uVar4 = (**(code **)(*param_1 + 0x208))(param_1,*(undefined8 *)(*param_1 + 0x210));
      if (((uVar4 & 1) != 0) ||
         (((uVar4 = (**(code **)(*param_1 + 0x1e8))(param_1,*(undefined8 *)(*param_1 + 0x1f0)),
           (uVar4 & 1) != 0 ||
           (uVar4 = (**(code **)(*param_1 + 0x1d8))(param_1,*(undefined8 *)(*param_1 + 0x1e0)),
           (uVar4 & 1) == 0)) || ((char)param_1[0xe] != '\0')))) {
        uVar4 = (**(code **)(*param_1 + 0x208))(param_1,*(undefined8 *)(*param_1 + 0x210));
        if ((((uVar4 & 1) == 0) &&
            (uVar4 = (**(code **)(*param_1 + 0x1e8))(param_1,*(undefined8 *)(*param_1 + 0x1f0)),
            (uVar4 & 1) == 0)) &&
           ((uVar4 = (**(code **)(*param_1 + 0x1d8))(param_1,*(undefined8 *)(*param_1 + 0x1e0)),
            (uVar4 & 1) == 0 &&
            ((uVar4 = (**(code **)(*param_1 + 0x1f8))(param_1,*(undefined8 *)(*param_1 + 0x200)),
             (uVar4 & 1) != 0 && (*(char *)((long)param_1 + 0x72) == '\0')))))) {
          if (*(int *)(*(long *)PTR_DAT_067cc1f0 + 0xe4) == 0) {
            thunk_FUN_02f6670c();
          }
          uVar3 = FUN_060206a4(0);
          goto LAB_0601722c;
        }
        uVar4 = (**(code **)(*param_1 + 0x218))(param_1,*(undefined8 *)(*param_1 + 0x220));
        puVar2 = PTR_DAT_067cc1f0;
        if ((uVar4 & 1) == 0) {
          if (*(int *)(*(long *)PTR_DAT_067cc1f0 + 0xe4) == 0) {
            thunk_FUN_02f6670c();
          }
          if (DAT_06bc53b7 == '\0') {
            FUN_02f08768(PTR_DAT_067cc1f0);
            DAT_06bc53b7 = '\x01';
          }
          lVar5 = *(long *)puVar2;
          if (*(int *)(lVar5 + 0xe4) == 0) {
            thunk_FUN_02f6670c();
            lVar5 = *(long *)puVar2;
          }
          uVar3 = (uint)**(ushort **)(lVar5 + 0xb8);
        }
        else {
          if (*(int *)(*(long *)PTR_DAT_067cc1f0 + 0xe4) == 0) {
            thunk_FUN_02f6670c();
          }
          if (DAT_06bc53b8 == '\0') {
            FUN_02f08768(PTR_DAT_067cc1f0);
            DAT_06bc53b8 = '\x01';
          }
          lVar5 = *(long *)puVar2;
          if (*(int *)(lVar5 + 0xe4) == 0) {
            thunk_FUN_02f6670c();
            lVar5 = *(long *)puVar2;
          }
          uVar3 = (uint)*(ushort *)(*(long *)(lVar5 + 0xb8) + 2);
        }
        goto LAB_06017288;
      }
      fVar10 = 0.0;
      cVar1 = *(char *)((long)param_1 + 0xdb);
      if (*(char *)((long)param_1 + 0xde) != '\0') {
        if ((param_1[0x17] == 0) ||
           (lVar5 = FUN_02a81978(0,*(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vcle_f64__)
           , lVar5 == 0)) goto LAB_06017458;
        fVar10 = (float)FUN_02a81978(3,*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__837_30__,lVar5
                                    );
      }
      uVar3 = 2;
      if (cVar1 != '\0') {
        uVar3 = 3;
      }
      fVar12 = 1.0;
      if (fVar10 <= 1.0) {
        fVar12 = fVar10;
      }
      fVar11 = 0.0;
      if (0.0 <= fVar10) {
        fVar11 = fVar12 * 255.0;
      }
    }
    uVar7 = (uint)fVar11;
  }
  else {
    if (*(int *)(*(long *)PTR_DAT_067cc1f0 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
    if (DAT_06bc53b5 == '\0') {
      FUN_02f08768(PTR_DAT_067cc1f0);
      DAT_06bc53b5 = '\x01';
    }
    lVar5 = *(long *)puVar2;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
      lVar5 = *(long *)puVar2;
    }
    uVar3 = (uint)*(ushort *)(*(long *)(lVar5 + 0xb8) + 10);
LAB_06017288:
    uVar7 = uVar3 >> 8;
  }
LAB_0601728c:
  return uVar3 & 0xff | uVar7 << 8;
}


