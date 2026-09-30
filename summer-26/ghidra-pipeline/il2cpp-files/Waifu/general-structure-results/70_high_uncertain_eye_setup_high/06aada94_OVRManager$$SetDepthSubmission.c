/*
FUNCTION_NAME: OVRManager$$SetDepthSubmission
ENTRY_POINT: 06aada94
PROGRAM: Waifu-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_10;functionality_eye_api_context_without_clear_sink_hits_5
*/


void OVRManager__SetDepthSubmission(undefined1 param_1 [16],ulong param_2,ulong param_3)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined8 *puVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  int unaff_w24;
  long *plVar11;
  long *unaff_x26;
  long unaff_x27;
  long unaff_x28;
  long unaff_x29;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  ulong uVar21;
  ulong uVar22;
  float unaff_s9;
  undefined8 unaff_d10;
  ulong unaff_d14;
  ulong unaff_d15;
  undefined8 *in_stack_00000010;
  undefined8 in_stack_00000020;
  float fStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  
  do {
    plVar11 = (long *)unaff_x21[0x27];
    if (plVar11 == (long *)0x0) goto LAB_06aade38;
    lVar8 = *plVar11;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)(unaff_x28 + 0xf20)) {
          puVar5 = (undefined8 *)(lVar8 + (long)(*piVar10 + 1) * 0x10 + 0x138);
          uVar9 = param_2;
          uVar21 = param_3;
          goto LAB_06aadaec;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)FUN_0338f71c(plVar11,*(long *)(unaff_x28 + 0xf20),1);
    uVar9 = param_2;
    uVar21 = param_3;
LAB_06aadaec:
    uVar15 = (*(code *)*puVar5)(plVar11,unaff_w24,puVar5[1]);
    if (unaff_x19 == 0) goto LAB_06aade38;
    uVar7 = unaff_d15;
    uVar22 = unaff_d14;
    uVar6 = FUN_06aabad8(unaff_d10,unaff_d15,unaff_d14,uVar15,uVar9,uVar21);
    fVar19 = (float)uVar22;
    fVar16 = (float)uVar7;
    if ((uVar6 & 1) != 0) {
      if (*(int *)(DAT_083d1cb8 + 0xe0) == 0) {
        FUN_033b9870();
      }
      fVar12 = (float)OVRManager__OVRMixedRealityCaptureConfiguration_set_dynamicLightingDepthVariationClampingValue
                                (&stack0x00000020);
      if (*(char *)(unaff_x22 + 0xff6) == '\0') {
        FUN_0335b6c8(&DAT_083ce8b0,1);
        DataMemoryBarrier(2,3);
        *(undefined1 *)(unaff_x22 + 0xff6) = 1;
      }
      if (*(int *)(*(long *)(unaff_x29 + 0x8b0) + 0xe0) == 0) {
        FUN_033b9870();
      }
      fVar12 = (float)unaff_d10 - fVar12;
      fVar16 = (float)unaff_d15 - fVar16;
      fVar19 = (float)unaff_d14 - fVar19;
      fVar19 = fVar19 * fVar19;
      fVar17 = *(float *)(unaff_x21 + 0x28);
      fVar16 = unaff_s9 + SQRT(fVar19 + fVar12 * fVar12 + fVar16 * fVar16);
      if (fVar17 <= ABS(*(float *)(unaff_x20 + 0x1c) - fVar16)) {
        lVar8 = *unaff_x26;
        if (*(int *)(*(long *)(unaff_x27 + 0x7d8) + 0xe0) == 0) {
          FUN_033b9870();
        }
        uVar7 = FUN_07a0d2c4(lVar8,0,0);
        if ((uVar7 & 1) != 0) {
          if (*unaff_x26 == 0) goto LAB_06aade38;
          if ((*(char *)(*unaff_x26 + 0xb0) == '\0') && (*(char *)(unaff_x19 + 0xb0) != '\0')) {
            if (*(int *)(DAT_083d1cb8 + 0xe0) == 0) {
              FUN_033b9870();
            }
            fVar12 = fStack0000000000000028;
            fVar13 = (float)OVRManager__OVRMixedRealityCaptureConfiguration_set_dynamicLightingDepthVariationClampingValue
                                      (in_stack_00000010);
            fVar18 = fVar17;
            fVar20 = fVar19;
            fVar14 = (float)OVRManager__OVRMixedRealityCaptureConfiguration_set_dynamicLightingDepthVariationClampingValue
                                      (&stack0x00000020);
            bVar3 = (fVar19 - fVar20) * (fVar19 - fVar20) +
                    (fVar13 - fVar14) * (fVar13 - fVar14) + (fVar17 - fVar18) * (fVar17 - fVar18) <
                    fVar12 * fVar12;
            goto LAB_06aadc1c;
          }
        }
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
LAB_06aadc1c:
      unaff_d15 = unaff_d15 & 0xffffffff;
      unaff_d14 = unaff_d14 & 0xffffffff;
      lVar8 = *unaff_x26;
      if (*(int *)(*(long *)(unaff_x27 + 0x7d8) + 0xe0) == 0) {
        FUN_033b9870();
      }
      uVar7 = FUN_07a119fc(lVar8,0,0);
      if ((uVar7 & 1) != 0) {
LAB_06aadd70:
        *(float *)(unaff_x20 + 0x1c) = fVar16;
        in_stack_00000010[4] = in_stack_00000040;
        in_stack_00000010[1] = CONCAT44(uStack000000000000002c,fStack0000000000000028);
        *in_stack_00000010 = in_stack_00000020;
        in_stack_00000010[3] = in_stack_00000038;
        in_stack_00000010[2] = in_stack_00000030;
        if (DAT_08908cd0 == 0) {
          *unaff_x26 = unaff_x19;
        }
        else {
          puVar1 = &DAT_0873ccb0 + ((ulong)in_stack_00000010 >> 0x12 & 0x7fff);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = *puVar1 | 1L << ((ulong)in_stack_00000010 >> 0xc & 0x3f);
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          puVar1 = &DAT_0873ccb0 + ((ulong)unaff_x26 >> 0x12 & 0x7fff);
          *unaff_x26 = unaff_x19;
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar3) {
              *puVar1 = *puVar1 | 1L << ((ulong)unaff_x26 >> 0xc & 0x3f);
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        return;
      }
      if (bVar3) {
        iVar4 = (**(code **)(*unaff_x21 + 0x548))();
        if (0 < iVar4) goto LAB_06aadd70;
      }
      else if (fVar16 < *(float *)(unaff_x20 + 0x1c)) goto LAB_06aadd70;
    }
    if (*(char *)(unaff_x22 + 0xff6) == '\0') {
      FUN_0335b6c8(&DAT_083ce8b0,1);
      DataMemoryBarrier(2,3);
      *(undefined1 *)(unaff_x22 + 0xff6) = 1;
    }
    if (*(int *)(*(long *)(unaff_x29 + 0x8b0) + 0xe0) == 0) {
      FUN_033b9870();
    }
    fVar16 = (float)unaff_d10 - (float)uVar15;
    fVar19 = (float)unaff_d15 - (float)uVar9;
    fVar12 = (float)unaff_d14 - (float)uVar21;
    fVar19 = fVar19 * fVar19;
    param_2 = (ulong)(uint)fVar19;
    plVar11 = (long *)unaff_x21[0x27];
    fVar12 = fVar12 * fVar12;
    param_3 = (ulong)(uint)fVar12;
    unaff_s9 = unaff_s9 + SQRT(fVar12 + fVar16 * fVar16 + fVar19);
    unaff_w24 = unaff_w24 + 1;
    if (plVar11 == (long *)0x0) {
LAB_06aade38:
                    /* WARNING: Subroutine does not return */
      FUN_033d1d3c();
    }
    lVar8 = *plVar11;
    uVar7 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar7 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)(unaff_x28 + 0xf20)) {
          puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_06aada74;
        }
        uVar7 = uVar7 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar7 != 0);
    }
    puVar5 = (undefined8 *)FUN_0338f71c(plVar11,*(long *)(unaff_x28 + 0xf20),0);
LAB_06aada74:
    iVar4 = (*(code *)*puVar5)(plVar11,puVar5[1]);
    if (iVar4 <= unaff_w24) {
      return;
    }
    unaff_d10 = uVar15;
    unaff_d14 = uVar21;
    unaff_d15 = uVar9;
    if (*(float *)(unaff_x20 + 0x1c) < unaff_s9) {
      return;
    }
  } while( true );
}


