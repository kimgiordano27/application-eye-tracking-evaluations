/*
FUNCTION_NAME: FUN_06aad954
ENTRY_POINT: 06aad954
PROGRAM: Waifu-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_3
*/


void FUN_06aad954(undefined1 param_1 [16],ulong param_2,ulong param_3,long *param_4,long param_5,
                 uint *param_6)

{
  uint *puVar1;
  uint *puVar2;
  ulong *puVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  undefined8 *puVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  int *piVar13;
  int iVar14;
  long *plVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  ulong uVar24;
  ulong uVar25;
  float fVar26;
  ulong uVar27;
  ulong uVar28;
  ulong uVar29;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  
  if ((DAT_086e2147 & 1) == 0) {
    FUN_0335b6c8(&DAT_083ccf20,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_083cf7d8,1);
    DataMemoryBarrier(2,3);
    FUN_0335b6c8(&DAT_083d1cb8,1);
    DataMemoryBarrier(2,3);
    DAT_086e2147 = 1;
  }
  local_b0 = 0;
  uStack_c8 = 0;
  local_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  plVar15 = (long *)param_4[0x27];
  if (plVar15 != (long *)0x0) {
    puVar1 = param_6 + 10;
    puVar2 = param_6 + 0xc;
    fVar26 = 0.0;
    iVar14 = 1;
    uVar27 = (ulong)*param_6;
    uVar28 = (ulong)param_6[1];
    uVar29 = (ulong)param_6[2];
    do {
      lVar10 = *plVar15;
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar11 != 0) {
        piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == DAT_083ccf20) {
            puVar7 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
            uVar11 = param_2;
            uVar24 = param_3;
            goto LAB_06aada74;
          }
          uVar11 = uVar11 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar11 != 0);
      }
      puVar7 = (undefined8 *)FUN_0338f71c(plVar15,DAT_083ccf20,0);
      uVar11 = param_2;
      uVar24 = param_3;
LAB_06aada74:
      iVar6 = (*(code *)*puVar7)(plVar15,puVar7[1]);
      if (iVar6 <= iVar14) {
        return;
      }
      if ((float)param_6[7] < fVar26) {
        return;
      }
      plVar15 = (long *)param_4[0x27];
      if (plVar15 == (long *)0x0) break;
      lVar10 = *plVar15;
      uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == DAT_083ccf20) {
            puVar7 = (undefined8 *)(lVar10 + (long)(*piVar13 + 1) * 0x10 + 0x138);
            goto LAB_06aadaec;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar7 = (undefined8 *)FUN_0338f71c(plVar15,DAT_083ccf20,1);
LAB_06aadaec:
      uVar12 = (*(code *)*puVar7)(plVar15,iVar14,puVar7[1]);
      if (param_5 == 0) break;
      uVar9 = uVar28;
      uVar25 = uVar29;
      uVar8 = FUN_06aabad8(uVar27,uVar28,uVar29,uVar12,uVar11,uVar24,param_5,&local_d0);
      fVar22 = (float)uVar25;
      fVar19 = (float)uVar9;
      if ((uVar8 & 1) != 0) {
        if (*(int *)(DAT_083d1cb8 + 0xe0) == 0) {
          FUN_033b9870();
        }
        fVar16 = (float)OVRManager__OVRMixedRealityCaptureConfiguration_set_dynamicLightingDepthVariationClampingValue
                                  (&local_d0);
        if (DAT_086d7ff6 == '\0') {
          FUN_0335b6c8(&DAT_083ce8b0,1);
          DataMemoryBarrier(2,3);
          DAT_086d7ff6 = '\x01';
        }
        if (*(int *)(DAT_083ce8b0 + 0xe0) == 0) {
          FUN_033b9870();
        }
        fVar16 = (float)uVar27 - fVar16;
        fVar19 = (float)uVar28 - fVar19;
        fVar22 = (float)uVar29 - fVar22;
        fVar22 = fVar22 * fVar22;
        fVar20 = *(float *)(param_4 + 0x28);
        fVar19 = fVar26 + SQRT(fVar22 + fVar16 * fVar16 + fVar19 * fVar19);
        if (fVar20 <= ABS((float)param_6[7] - fVar19)) {
          lVar10 = *(long *)puVar1;
          if (*(int *)(DAT_083cf7d8 + 0xe0) == 0) {
            FUN_033b9870();
          }
          uVar9 = FUN_07a0d2c4(lVar10,0,0);
          if ((uVar9 & 1) != 0) {
            if (*(long *)puVar1 == 0) break;
            if ((*(char *)(*(long *)puVar1 + 0xb0) == '\0') && (*(char *)(param_5 + 0xb0) != '\0'))
            {
              if (*(int *)(DAT_083d1cb8 + 0xe0) == 0) {
                FUN_033b9870();
              }
              fVar16 = (float)uStack_c8;
              fVar17 = (float)OVRManager__OVRMixedRealityCaptureConfiguration_set_dynamicLightingDepthVariationClampingValue
                                        (puVar2);
              fVar21 = fVar20;
              fVar23 = fVar22;
              fVar18 = (float)OVRManager__OVRMixedRealityCaptureConfiguration_set_dynamicLightingDepthVariationClampingValue
                                        (&local_d0);
              bVar5 = (fVar22 - fVar23) * (fVar22 - fVar23) +
                      (fVar17 - fVar18) * (fVar17 - fVar18) + (fVar20 - fVar21) * (fVar20 - fVar21)
                      < fVar16 * fVar16;
              goto LAB_06aadc1c;
            }
          }
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
LAB_06aadc1c:
        uVar28 = uVar28 & 0xffffffff;
        uVar29 = uVar29 & 0xffffffff;
        lVar10 = *(long *)puVar1;
        if (*(int *)(DAT_083cf7d8 + 0xe0) == 0) {
          FUN_033b9870();
        }
        uVar9 = FUN_07a119fc(lVar10,0,0);
        if ((uVar9 & 1) != 0) {
LAB_06aadd70:
          param_6[7] = (uint)fVar19;
          *(undefined8 *)(param_6 + 0x14) = local_b0;
          *(undefined8 *)(param_6 + 0xe) = uStack_c8;
          *(undefined8 *)puVar2 = local_d0;
          *(undefined8 *)(param_6 + 0x12) = uStack_b8;
          *(undefined8 *)(param_6 + 0x10) = uStack_c0;
          if (DAT_08908cd0 == 0) {
            *(long *)puVar1 = param_5;
          }
          else {
            puVar3 = &DAT_0873ccb0 + ((ulong)puVar2 >> 0x12 & 0x7fff);
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(puVar3,0x10);
              if (bVar5) {
                *puVar3 = *puVar3 | 1L << ((ulong)puVar2 >> 0xc & 0x3f);
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            puVar3 = &DAT_0873ccb0 + ((ulong)puVar1 >> 0x12 & 0x7fff);
            *(long *)puVar1 = param_5;
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(puVar3,0x10);
              if (bVar5) {
                *puVar3 = *puVar3 | 1L << ((ulong)puVar1 >> 0xc & 0x3f);
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
          }
          return;
        }
        if (bVar5) {
          iVar6 = (**(code **)(*param_4 + 0x548))
                            (param_4,param_5,*(long *)puVar1,*(undefined8 *)(*param_4 + 0x550));
          if (0 < iVar6) goto LAB_06aadd70;
        }
        else if (fVar19 < (float)param_6[7]) goto LAB_06aadd70;
      }
      if (DAT_086d7ff6 == '\0') {
        FUN_0335b6c8(&DAT_083ce8b0,1);
        DataMemoryBarrier(2,3);
        DAT_086d7ff6 = '\x01';
      }
      if (*(int *)(DAT_083ce8b0 + 0xe0) == 0) {
        FUN_033b9870();
      }
      fVar19 = (float)uVar27 - (float)uVar12;
      fVar22 = (float)uVar28 - (float)uVar11;
      fVar16 = (float)uVar29 - (float)uVar24;
      fVar22 = fVar22 * fVar22;
      param_2 = (ulong)(uint)fVar22;
      plVar15 = (long *)param_4[0x27];
      fVar16 = fVar16 * fVar16;
      param_3 = (ulong)(uint)fVar16;
      fVar26 = fVar26 + SQRT(fVar16 + fVar19 * fVar19 + fVar22);
      iVar14 = iVar14 + 1;
      uVar27 = uVar12;
      uVar28 = uVar11;
      uVar29 = uVar24;
    } while (plVar15 != (long *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


